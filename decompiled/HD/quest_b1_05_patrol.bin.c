task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 1; // 0xa0 PushI
	if(var_21_int == 0) goto Label_331; // 0xa1 JumpB
	func_2137(); // 0xa3 NEW_2
	var_23_int = 32276; // 0xa5 PushI
	var_24_bool = var_20_bool == var_23_int; // 0xa6 Eq
	if(var_24_bool == 0) goto Label_178; // 0xa7 JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0xa8 PushV
	var_25_object = var_1_object; // 0xa9 MovT
	var_26_object = var_0_object; // 0xaa MovT
	func_2285(); // 0xab NEW_2
	var_74_object = Obj(); var_75_object = Obj(); // 0xad PushV
	var_74_object = var_1_object; // 0xae MovT
	var_75_object = var_0_object; // 0xaf MovT
	func_2307(); // 0xb0 NEW_2
	
Label_178:
	var_100_int = 32277; // 0xb2 PushI
	var_101_bool = var_20_bool == var_100_int; // 0xb3 Eq
	if(var_101_bool == 0) goto Label_191; // 0xb4 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0xb5 PushV
	var_102_object = var_1_object; // 0xb6 MovT
	var_103_object = var_0_object; // 0xb7 MovT
	func_2285(); // 0xb8 NEW_2
	var_104_object = Obj(); var_105_object = Obj(); // 0xba PushV
	var_104_object = var_1_object; // 0xbb MovT
	var_105_object = var_0_object; // 0xbc MovT
	func_2307(); // 0xbd NEW_2
	
Label_191:
	var_106_int = 32269; // 0xbf PushI
	var_107_bool = var_19_object == var_106_int; // 0xc0 Eq
	if(var_107_bool == 0) goto Label_219; // 0xc1 JumpB
	var_108_string = ""; // 0xc2 PushV
	var_108_string = "Neutral"; // 0xc3 MovS
	func_137(var_20_bool, var_108_string); // 0xc4 NEW_2
	var_125_int = 530942; // 0xc6 PushI
	SetMessage(var_125_int); // 0xc7 TObjFunc
	ClearReplies(); // 0xc9 TObjFunc
	var_126_int = 530962; // 0xcb PushI
	var_127_int = 32271; // 0xcc PushI
	var_128_int = 32281; // 0xcd PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xce TObjFunc
	var_129_int = 530960; // 0xd0 PushI
	var_130_int = 32280; // 0xd1 PushI
	var_131_int = 32279; // 0xd2 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xd3 TObjFunc
	var_132_int = 530959; // 0xd5 PushI
	var_133_int = -1; // 0xd6 PushI
	var_134_int = 32278; // 0xd7 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xd8 TObjFunc
	return 0; // 0xda Return
	
Label_219:
	var_135_int = 32280; // 0xdb PushI
	var_136_bool = var_19_object == var_135_int; // 0xdc Eq
	if(var_136_bool == 0) goto Label_237; // 0xdd JumpB
	var_137_string = ""; // 0xde PushV
	var_137_string = "Neutral"; // 0xdf MovS
	func_137(var_20_bool, var_137_string); // 0xe0 NEW_2
	var_138_int = 530961; // 0xe2 PushI
	SetMessage(var_138_int); // 0xe3 TObjFunc
	ClearReplies(); // 0xe5 TObjFunc
	var_139_int = 530943; // 0xe7 PushI
	var_140_int = 32271; // 0xe8 PushI
	var_141_int = 32270; // 0xe9 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0xea TObjFunc
	return 0; // 0xec Return
	
Label_237:
	var_142_int = 32271; // 0xed PushI
	var_143_bool = var_19_object == var_142_int; // 0xee Eq
	if(var_143_bool == 0) goto Label_260; // 0xef JumpB
	var_144_string = ""; // 0xf0 PushV
	var_144_string = "Neutral"; // 0xf1 MovS
	func_137(var_20_bool, var_144_string); // 0xf2 NEW_2
	var_145_int = 530944; // 0xf4 PushI
	SetMessage(var_145_int); // 0xf5 TObjFunc
	ClearReplies(); // 0xf7 TObjFunc
	var_146_int = 530965; // 0xf9 PushI
	var_147_int = 32273; // 0xfa PushI
	var_148_int = 32285; // 0xfb PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0xfc TObjFunc
	var_149_int = 530963; // 0xfe PushI
	var_150_int = 32284; // 0xff PushI
	var_151_int = 32283; // 0x100 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x101 TObjFunc
	return 0; // 0x103 Return
	
Label_260:
	var_152_int = 32284; // 0x104 PushI
	var_153_bool = var_19_object == var_152_int; // 0x105 Eq
	if(var_153_bool == 0) goto Label_278; // 0x106 JumpB
	var_154_string = ""; // 0x107 PushV
	var_154_string = "Neutral"; // 0x108 MovS
	func_137(var_20_bool, var_154_string); // 0x109 NEW_2
	var_155_int = 530964; // 0x10b PushI
	SetMessage(var_155_int); // 0x10c TObjFunc
	ClearReplies(); // 0x10e TObjFunc
	var_156_int = 530945; // 0x110 PushI
	var_157_int = 32273; // 0x111 PushI
	var_158_int = 32272; // 0x112 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x113 TObjFunc
	return 0; // 0x115 Return
	
Label_278:
	var_159_int = 32273; // 0x116 PushI
	var_160_bool = var_19_object == var_159_int; // 0x117 Eq
	if(var_160_bool == 0) goto Label_296; // 0x118 JumpB
	var_161_string = ""; // 0x119 PushV
	var_161_string = "Neutral"; // 0x11a MovS
	func_137(var_20_bool, var_161_string); // 0x11b NEW_2
	var_162_int = 530946; // 0x11d PushI
	SetMessage(var_162_int); // 0x11e TObjFunc
	ClearReplies(); // 0x120 TObjFunc
	var_163_int = 530947; // 0x122 PushI
	var_164_int = 32275; // 0x123 PushI
	var_165_int = 32274; // 0x124 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x125 TObjFunc
	return 0; // 0x127 Return
	
Label_296:
	var_166_int = 32275; // 0x128 PushI
	var_167_bool = var_19_object == var_166_int; // 0x129 Eq
	if(var_167_bool == 0) goto Label_319; // 0x12a JumpB
	var_168_string = ""; // 0x12b PushV
	var_168_string = "Neutral"; // 0x12c MovS
	func_137(var_20_bool, var_168_string); // 0x12d NEW_2
	var_169_int = 530948; // 0x12f PushI
	SetMessage(var_169_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_170_int = 530949; // 0x134 PushI
	var_171_int = -1; // 0x135 PushI
	var_172_int = 32276; // 0x136 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x137 TObjFunc
	var_173_int = 530950; // 0x139 PushI
	var_174_int = -1; // 0x13a PushI
	var_175_int = 32277; // 0x13b PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x13c TObjFunc
	return 0; // 0x13e Return
	
Label_319:
	var_3_string = 1; // 0x13f TMovB
	var_176_bool = 0; // 0x140 PushV
	func_2525(var_176_bool); // 0x141 NEW_2
	if(var_176_bool == 0) goto Label_327; // 0x143 JumpB
	lshStopAnimation(); // 0x144 Func
	goto Label_329; // 0x146 Jump
	
Label_329:
	return 0; // 0x149 Return
	
Label_327:
	StopAnimation(); // 0x147 Func
	
Label_331:
	return 0; // 0x14b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_498(var_18_object, var_19_bool); // 0x157 NEW_2
	var_23_bool = 0; // 0x159 PushV
	func_2527(var_23_bool); // 0x15a NEW_2
	if(var_23_bool == 0) goto Label_355; // 0x15c JumpB
	var_28_object = Obj(); // 0x15d PushV
	var_28_object = var_19_bool; // 0x15e Mov
	TaskCall(3); // 0x15f TaskCall
	func_598(var_28_object); // 0x160 NEW_2
	TaskReturn(); // 0x161 TaskReturn
	
Label_355:
	var_531_int = 0; var_532_object = Obj(); // 0x163 PushV
	var_532_object = var_19_bool; // 0x164 Mov
	TaskCall(0); // 0x165 TaskCall
	func_0(var_533_object, var_531_int, var_532_object); // 0x166 NEW_2
	TaskReturn(); // 0x167 TaskReturn
	func_2534(); // 0x16a NEW_2
	var_666_object = Obj(); // 0x16c PushV
	var_666_object = var_19_bool; // 0x16d Mov
	TaskCall(3); // 0x16e TaskCall
	func_598(var_666_object); // 0x16f NEW_2
	TaskReturn(); // 0x170 TaskReturn
	return 0; // 0x172 Return
}


task_2_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; // 0x174 PushV
	var_20_bool = 0; // 0x175 MovB
	var_21_bool = 0; // 0x176 PushV
	func_2527(var_21_bool); // 0x177 NEW_2
	if(var_21_bool == 0) goto Label_384; // 0x179 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x17a PushV
	var_27_object = var_19_bool; // 0x17b Mov
	func_1711(var_26_bool, var_27_object); // 0x17c NEW_2
	if(var_26_bool == 0) goto Label_384; // 0x17e JumpB
	var_20_bool = 1; // 0x17f MovB
	
Label_384:
	if(var_20_bool == 0) goto Label_394; // 0x180 JumpB
	func_498(var_18_object, var_19_bool); // 0x182 NEW_2
	var_33_object = Obj(); // 0x184 PushV
	var_33_object = var_19_bool; // 0x185 Mov
	TaskCall(3); // 0x186 TaskCall
	func_598(var_33_object); // 0x187 NEW_2
	TaskReturn(); // 0x188 TaskReturn
	
Label_394:
	return 0; // 0x18a Return
}


task_2_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; // 0x18c PushV
	var_20_bool = 0; // 0x18d MovB
	var_21_bool = 0; // 0x18e PushV
	func_2527(var_21_bool); // 0x18f NEW_2
	if(var_21_bool == 0) goto Label_408; // 0x191 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x192 PushV
	var_27_object = var_19_bool; // 0x193 Mov
	func_1711(var_26_bool, var_27_object); // 0x194 NEW_2
	if(var_26_bool == 0) goto Label_408; // 0x196 JumpB
	var_20_bool = 1; // 0x197 MovB
	
Label_408:
	if(var_20_bool == 0) goto Label_418; // 0x198 JumpB
	func_498(var_18_object, var_19_bool); // 0x19a NEW_2
	var_33_object = Obj(); // 0x19c PushV
	var_33_object = var_19_bool; // 0x19d Mov
	TaskCall(3); // 0x19e TaskCall
	func_598(var_33_object); // 0x19f NEW_2
	TaskReturn(); // 0x1a0 TaskReturn
	
Label_418:
	return 0; // 0x1a2 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_498(var_18_object, var_19_bool); // 0x1a5 NEW_2
	func_2534(); // 0x1a8 NEW_2
	var_25_object = Obj(); // 0x1aa PushV
	var_25_object = var_19_bool; // 0x1ab Mov
	TaskCall(3); // 0x1ac TaskCall
	func_598(var_25_object); // 0x1ad NEW_2
	TaskReturn(); // 0x1ae TaskReturn
	return 0; // 0x1b0 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 10; // 0x1dc PushI
	var_21_bool = var_19_bool == var_20_int; // 0x1dd Eq
	if(var_21_bool == 0) goto Label_497; // 0x1de JumpB
	var_22_bool = 0; // 0x1df PushV
	func_460(var_17_bool, var_18_object, var_19_bool, var_22_bool); // 0x1e0 NEW_2
	if(var_22_bool == 0) goto Label_491; // 0x1e2 JumpB
	var_35_bool = var_2_object == 0; // 0x1e3 Not
	if(var_35_bool == 0) goto Label_490; // 0x1e4 JumpB
	var_36_object = Obj(); // 0x1e5 PushV
	var_36_object = var_4_bool; // 0x1e6 MovT
	func_2126(var_36_object); // 0x1e7 NEW_2
	var_2_object = 1; // 0x1e9 TMovB
	
Label_490:
	goto Label_497; // 0x1ea Jump
	
Label_497:
	return 0; // 0x1f1 Return
	
Label_491:
	var_43_object = var_2_object; // 0x1eb PushT
	if(var_43_object == 0) goto Label_497; // 0x1ec JumpB
	var_44_string = "head"; // 0x1ed PushS
	UnlookAsync(var_44_string); // 0x1ee Func
	var_2_object = 0; // 0x1f0 TMovB
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_20_int = 1; // 0x530 PushI
	var_21_bool = var_19_int == var_20_int; // 0x531 Eq
	if(var_21_bool == 0) goto Label_1336; // 0x532 JumpB
	var_22_object = Obj(); // 0x533 PushV
	var_22_object = var_1_object; // 0x534 MovT
	func_2241(var_22_object); // 0x535 NEW_2
	goto Label_1340; // 0x537 Jump
	
Label_1340:
	return 0; // 0x53c Return
	
Label_1336:
	var_27_int = 0; // 0x538 PushV
	var_27_int = var_19_int; // 0x539 Mov
	func_1485(var_18_bool, var_19_int, var_27_int); // 0x53a NEW_2
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0x54b PushV
	var_20_bool = 0; // 0x54c MovB
	var_21_bool = var_1_object == var_19_object; // 0x54d Eq
	if(var_21_bool == 0) goto Label_1362; // 0x54e JumpB
	var_22_bool = var_2_object == 0; // 0x54f Not
	if(var_22_bool == 0) goto Label_1362; // 0x550 JumpB
	var_20_bool = 1; // 0x551 MovB
	
Label_1362:
	if(var_20_bool == 0) goto Label_1368; // 0x552 JumpB
	var_2_object = 1; // 0x553 TMovB
	var_23_object = Obj(); // 0x554 PushV
	var_23_object = var_19_object; // 0x555 Mov
	func_2126(var_23_object); // 0x556 NEW_2
	
Label_1368:
	return 0; // 0x558 Return
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0x55a PushV
	var_20_bool = 0; // 0x55b MovB
	var_21_bool = var_1_object == var_19_object; // 0x55c Eq
	if(var_21_bool == 0) goto Label_1377; // 0x55d JumpB
	var_22_object = var_2_object; // 0x55e PushT
	if(var_22_object == 0) goto Label_1377; // 0x55f JumpB
	var_20_bool = 1; // 0x560 MovB
	
Label_1377:
	if(var_20_bool == 0) goto Label_1382; // 0x561 JumpB
	var_2_object = 0; // 0x562 TMovB
	var_23_string = "head"; // 0x563 PushS
	UnlookAsync(var_23_string); // 0x564 Func
	
Label_1382:
	return 0; // 0x566 Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	RequestClearPath(var_19_object); // 0x5e0 Func
	return 0; // 0x5e2 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	func_1341(var_19_object); // 0x5ec NEW_2
	var_24_object = Obj(); // 0x5ee PushV
	var_24_object = var_19_object; // 0x5ef Mov
	func_2589(); // 0x5f0 NEW_2
	return 0; // 0x5f2 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x60d PushV
	IsOverrideActive(var_21_bool); // 0x60e Func
	var_22_bool = var_21_bool == 0; // 0x610 Not
	if(var_22_bool == 0) goto Label_1558; // 0x611 JumpB
	var_23_object = Obj(); // 0x612 PushV
	var_23_object = var_19_object; // 0x613 Mov
	func_2463(var_23_object); // 0x614 NEW_2
	
Label_1558:
	return 2; // 0x616 Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	return 0; // 0x68d Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	return 0; // 0x68f Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	return 0; // 0x691 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; // 0x9ff PushV
	var_23_object = var_19_object; // 0xa00 Mov
	var_24_int = var_20_int; // 0xa01 Mov
	var_25_float = var_21_float; // 0xa02 Mov
	func_1910(var_23_object, var_24_int, var_25_float); // 0xa03 NEW_2
	return 0; // 0xa05 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0xa07 PushV
	var_25_object = var_19_object; // 0xa08 Mov
	var_26_int = var_20_int; // 0xa09 Mov
	var_27_float = var_21_float; // 0xa0a Mov
	var_28_cvector = var_23_cvector; // 0xa0b Mov
	var_29_cvector = var_24_cvector; // 0xa0c Mov
	func_1978(var_27_float, var_28_cvector, var_29_cvector); // 0xa0d NEW_2
	return 0; // 0xa0f Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	var_21_float = 0; var_22_float = 0; // 0xa10 PushV
	var_23_string = "health"; // 0xa11 PushS
	var_24_bool = var_20_string == var_23_string; // 0xa12 Eq
	if(var_24_bool == 0) goto Label_2588; // 0xa13 JumpB
	var_25_string = "health"; // 0xa14 PushS
	GetProperty(var_25_string, var_22_float); // 0xa15 Func
	var_26_int = 0; // 0xa17 PushI
	var_27_bool = var_22_float <= var_26_int; // 0xa18 LE
	if(var_27_bool == 0) goto Label_2588; // 0xa19 JumpB
	SignalDeath(var_19_object); // 0xa1a Func
	
Label_2588:
	return 2; // 0xa1c Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_object = Obj(); // 0xa1e PushV
	var_20_object = var_19_object; // 0xa1f Mov
	func_2539(var_20_object); // 0xa20 NEW_2
	return 0; // 0xa22 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	
Label_332:
	var_19_bool = 1; // 0x14c PushB
	if(var_19_bool == 0) goto Label_340; // 0x14d JumpB
	var_20_float = 0; var_21_float = 0; // 0x14e PushV
	var_20_float = 300; // 0x14f MovI
	var_21_float = 100; // 0x150 MovI
	func_433(var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_20_float, var_21_float); // 0x151 NEW_2
	goto Label_332; // 0x153 Jump
	
Label_340:
	return 0; // 0x154 Return
}


func_0(var_0_object, var_531_int, var_532_object)
{
	var_534_object = Obj(); var_535_bool = 0; var_536_int = 0; var_537_bool = 0; var_538_object = Obj(); var_539_bool = 0; var_540_int = 0; var_541_bool = 0; // 0x0 PushV
	var_0_object = var_532_object; // 0x1 TMov
	var_542_bool = 0; var_543_object = Obj(); var_544_float = 0; // 0x2 PushV
	var_543_object = var_532_object; // 0x3 Mov
	var_544_float = 70.0; // 0x4 MovF
	func_2008(var_543_object, var_544_float); // 0x5 NEW_2
	var_589_bool = var_542_bool == 0; // 0x7 Not
	if(var_589_bool == 0) goto Label_11; // 0x8 JumpB
	var_531_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_538_object); // 0xb Func
	var_590_int = 0; // 0xd PushV
	func_2519(var_590_int); // 0xe NEW_2
	SetNPCName(var_590_int); // 0x10 ObjFunc
	var_591_int = 0; // 0x12 PushV
	func_2517(var_591_int); // 0x13 NEW_2
	SetNPCDescription(var_591_int); // 0x15 ObjFunc
	var_592_string = ""; // 0x17 PushV
	func_2521(var_592_string); // 0x18 NEW_2
	SetPhoto(var_592_string); // 0x1a ObjFunc
	var_593_string = ""; // 0x1c PushV
	func_2523(var_593_string); // 0x1d NEW_2
	SetPhoto2(var_593_string); // 0x1f ObjFunc
	var_594_int = 0; // 0x21 PushV
	func_2440(var_594_int); // 0x22 NEW_2
	SetPlayerName(var_594_int); // 0x24 ObjFunc
	var_540_int = -1; // 0x26 MovI
	IsOverrideActive(var_539_bool); // 0x27 Func
	var_602_bool = var_539_bool; // 0x29 Push
	if(var_602_bool == 0) goto Label_45; // 0x2a JumpB
	var_531_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_538_object); // 0x2d Func
	var_603_object = Obj(); var_604_object = Obj(); // 0x2f PushV
	var_603_object = var_532_object; // 0x30 Mov
	var_604_object = var_538_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_605_object, var_606_object, var_607_string, var_608_bool, var_603_object, var_604_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_541_bool); // 0x36 ObjFunc
	
Label_56:
	var_655_bool = var_541_bool == 0; // 0x38 Not
	if(var_655_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_541_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_656_object = Obj(); // 0x3f PushV
	var_656_object = var_532_object; // 0x40 Mov
	func_2077(); // 0x41 NEW_2
	StopDialog(var_538_object); // 0x43 Func
	GetReturnValue(var_540_int); // 0x45 ObjFunc
	var_531_int = var_540_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_512()
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0; // 0x200 PushV
	WaitForAnimEnd(); // 0x201 Func
	var_43_bool = 0; // 0x203 PushV
	func_2003(var_43_bool); // 0x204 NEW_2
	var_44_bool = var_43_bool == 0; // 0x206 Not
	if(var_44_bool == 0) goto Label_521; // 0x207 JumpB
	return 14; // 0x208 Return
	
Label_521:
	var_45_int = 0; // 0x209 PushV
	func_2268(var_45_int); // 0x20a NEW_2
	var_36_int = var_45_int; // 0x20b Mov
	var_37_int = 0; // 0x20d MovI
	
Label_526:
	var_58_bool = 0; // 0x20e PushV
	var_58_bool = 0; // 0x20f MovB
	var_59_int = 5; // 0x210 PushI
	var_60_bool = var_37_int < var_59_int; // 0x211 LT
	if(var_60_bool == 0) goto Label_536; // 0x212 JumpB
	var_61_bool = 0; // 0x213 PushV
	func_2003(var_61_bool); // 0x214 NEW_2
	if(var_61_bool == 0) goto Label_536; // 0x216 JumpB
	var_58_bool = 1; // 0x217 MovB
	
Label_536:
	if(var_58_bool == 0) goto Label_588; // 0x218 JumpB
	var_62_int = 3; // 0x219 PushI
	irand(var_38_int, var_62_int); // 0x21a Func
	var_63_int = 0; // 0x21c PushI
	var_64_bool = var_38_int == var_63_int; // 0x21d Eq
	if(var_64_bool == 0) goto Label_560; // 0x21e JumpB
	var_65_int = var_36_int; // 0x21f Push
	if(var_65_int == 0) goto Label_559; // 0x220 JumpB
	irand(var_39_int, var_36_int); // 0x221 Func
	var_66_string = "all"; // 0x223 PushS
	var_67_string = ""; var_68_int = 0; // 0x224 PushV
	var_68_int = var_39_int; // 0x225 Mov
	func_2261(var_67_string, var_68_int); // 0x226 NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x228 Func
	WaitForAnimEnd(var_40_bool); // 0x22a Func
	var_69_bool = var_40_bool == 0; // 0x22c Not
	if(var_69_bool == 0) goto Label_559; // 0x22d JumpB
	goto Label_588; // 0x22e Jump
	
Label_588:
	ResetAAS(); // 0x24c Func
	return 14; // 0x24e Return
	
Label_559:
	goto Label_577; // 0x22f Jump
	
Label_577:
	var_70_bool = 0; // 0x241 PushV
	func_591(var_70_bool); // 0x242 NEW_2
	var_71_bool = var_70_bool == 0; // 0x244 Not
	if(var_71_bool == 0) goto Label_583; // 0x245 JumpB
	goto Label_588; // 0x246 Jump
	
Label_583:
	ResetAAS(); // 0x247 Func
	var_72_int = 1; // 0x249 PushI
	var_37_int = var_37_int + var_72_int; // 0x24a Add2
	goto Label_526; // 0x24b Jump
	
Label_560:
	var_73_int = 1; // 0x230 PushI
	var_74_bool = var_38_int == var_73_int; // 0x231 Eq
	if(var_74_bool == 0) goto Label_574; // 0x232 JumpB
	var_75_int = 4; // 0x233 PushI
	rand(var_41_float, var_75_int); // 0x234 Func
	var_76_int = 1; // 0x236 PushI
	var_77_int = var_41_float + var_76_int; // 0x237 Add
	Sleep(var_77_int, var_42_bool); // 0x238 Func
	var_78_bool = var_42_bool == 0; // 0x23a Not
	if(var_78_bool == 0) goto Label_573; // 0x23b JumpB
	goto Label_588; // 0x23c Jump
	
Label_573:
	goto Label_577; // 0x23d Jump
	
Label_574:
	var_79_int = var_37_int; // 0x23e Push
	if(var_79_int == 0) goto Label_577; // 0x23f JumpB
	goto Label_588; // 0x240 Jump
}


func_2307()
{
	var_76_object = Obj(); var_77_string = ""; var_78_float = 0; // 0x904 PushV
	var_79_object = Obj(); // 0x905 PushV
	func_2390(var_79_object); // 0x906 NEW_2
	var_76_object = var_79_object; // 0x907 Mov
	var_77_string = "pt_b1q05_patrol1"; // 0x909 MovS
	var_78_float = 2; // 0x90a MovI
	func_2407(var_76_object, var_77_string, var_78_float); // 0x90b NEW_2
	var_99_object = Obj(); // 0x90d PushV
	func_2390(var_99_object); // 0x90e NEW_2
	ShowMap(var_99_object); // 0x910 ObjFunc
	return 0; // 0x912 Return
}


func_1801(var_47_bool)
{
	var_49_bool = 0; var_50_bool = 0; // 0x709 PushV
	IsDead(var_50_bool); // 0x70a ObjFunc
	var_47_bool = var_50_bool; // 0x70c Mov
	return 2; // 0x70d Return
}


func_1806(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); // 0x70e PushV
	var_42_bool = var_37_object == 0; // 0x70f NullEq
	if(var_42_bool == 0) goto Label_1811; // 0x710 JumpB
	var_36_bool = 0; // 0x711 MovB
	return 4; // 0x712 Return
	
Label_1811:
	var_43_bool = 0; // 0x713 PushV
	var_43_bool = 0; // 0x714 MovB
	var_44_string = "IsDead"; // 0x715 PushS
	var_45_int = 1; // 0x716 PushI
	var_46_bool = IsFuncExist(var_37_object, var_44_string, var_45_int); // 0x717 FuncExist
	if(var_46_bool == 0) goto Label_1823; // 0x718 JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0x719 PushV
	var_48_object = var_37_object; // 0x71a Mov
	func_1801(var_48_object); // 0x71b NEW_2
	if(var_47_bool == 0) goto Label_1823; // 0x71d JumpB
	var_43_bool = 1; // 0x71e MovB
	
Label_1823:
	if(var_43_bool == 0) goto Label_1826; // 0x71f JumpB
	var_36_bool = 0; // 0x720 MovB
	return 4; // 0x721 Return
	
Label_1826:
	GetScene(var_40_object); // 0x722 Func
	var_51_bool = var_40_object == 0; // 0x724 NullEq
	if(var_51_bool == 0) goto Label_1832; // 0x725 JumpB
	var_36_bool = 0; // 0x726 MovB
	return 4; // 0x727 Return
	
Label_1832:
	GetScene(var_41_object); // 0x728 ObjFunc
	var_52_bool = var_40_object != var_41_object; // 0x72a Neq
	if(var_52_bool == 0) goto Label_1838; // 0x72b JumpB
	var_36_bool = 0; // 0x72c MovB
	return 4; // 0x72d Return
	
Label_1838:
	var_36_bool = 1; // 0x72e MovB
	return 4; // 0x72f Return
}


func_1530(var_204_string)
{
	var_204_string = "walk"; // 0x5fa MovS
	return 0; // 0x5fb Return
}


func_2323()
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x913 PushV
	var_45_int = 582; // 0x914 PushI
	var_46_int = 2; // 0x915 PushI
	var_47_int = 530951; // 0x916 PushI
	CreateDiaryEntry(var_44_object, var_45_int, var_46_int, var_47_int); // 0x917 Func
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0; // 0x919 PushV
	var_49_object = var_44_object; // 0x91a Mov
	var_50_int = -1; // 0x91b MovI
	func_2362(var_48_bool, var_49_object, var_50_int); // 0x91c NEW_2
	return 2; // 0x91e Return
}


func_1559(var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = ""; var_53_object = Obj(); var_54_bool = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_string = ""; var_63_object = Obj(); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); // 0x617 PushV
	var_68_bool = var_47_object == 0; // 0x618 NullEq
	if(var_68_bool == 0) goto Label_1567; // 0x619 JumpB
	var_69_string = ""; // 0x61a PushV
	var_69_string = "fdie"; // 0x61b MovS
	func_1650(var_69_string); // 0x61c NEW_2
	goto Label_1649; // 0x61e Jump
	
Label_1649:
	return 20; // 0x671 Return
	
Label_1567:
	GetPosition(var_58_cvector); // 0x61f ObjFunc
	GetPosition(var_59_cvector); // 0x621 Func
	GetDirection(var_60_cvector); // 0x623 Func
	var_61_cvector = var_59_cvector - var_58_cvector; // 0x625 Sub2
	var_101_float = GetByIndex(var_61_cvector, 0); // 0x626 PushE
	var_102_float = GetByIndex(var_60_cvector, 0); // 0x627 PushE
	var_103_float = var_101_float * var_102_float; // 0x628 Mult
	var_104_float = GetByIndex(var_61_cvector, 2); // 0x629 PushE
	var_105_float = GetByIndex(var_60_cvector, 2); // 0x62a PushE
	var_106_float = var_104_float * var_105_float; // 0x62b Mult
	var_107_int = var_103_float + var_106_float; // 0x62c Add
	var_108_int = 0; // 0x62d PushI
	var_109_bool = var_107_int >= var_108_int; // 0x62e GE
	if(var_109_bool == 0) goto Label_1586; // 0x62f JumpB
	var_62_string = "fdie"; // 0x630 MovS
	goto Label_1587; // 0x631 Jump
	
Label_1587:
	RemoveRTEnvelope(); // 0x633 Func
	SetDeathState(); // 0x635 Func
	Stop(); // 0x637 Func
	StopAsync(); // 0x639 Func
	var_63_object = var_47_object; // 0x63b Mov
	var_110_string = "GetScriptProperty"; // 0x63c PushS
	var_111_int = 2; // 0x63d PushI
	var_112_bool = IsFuncExist(var_47_object, var_110_string, var_111_int); // 0x63e FuncExist
	if(var_112_bool == 0) goto Label_1611; // 0x63f JumpB
	var_113_string = "Owner"; // 0x640 PushS
	HasScriptProperty(var_64_bool, var_113_string); // 0x641 ObjFunc
	var_114_bool = var_64_bool; // 0x643 Push
	if(var_114_bool == 0) goto Label_1611; // 0x644 JumpB
	var_115_string = "Owner"; // 0x645 PushS
	GetScriptProperty(var_63_object, var_115_string); // 0x646 ObjFunc
	var_116_bool = var_63_object == 0; // 0x648 NullEq
	if(var_116_bool == 0) goto Label_1611; // 0x649 JumpB
	var_63_object = var_47_object; // 0x64a Mov
	
Label_1611:
	var_117_string = "@GetEyesHeight"; // 0x64b PushS
	var_118_int = 1; // 0x64c PushI
	var_119_bool = IsFuncExist(var_63_object, var_117_string, var_118_int); // 0x64d FuncExist
	if(var_119_bool == 0) goto Label_1626; // 0x64e JumpB
	GetEyesHeight(var_66_float); // 0x64f ObjFunc
	var_67_cvector = CVector(0.0, 0.0, 0.0); // 0x651 MovV
	var_120_float = GetByIndex(var_67_cvector, 1); // 0x652 PushE
	var_120_float = var_66_float; // 0x653 Mov
	SetByIndex(var_67_cvector, 1) = var_120_float; // 0x654 PopE
	var_121_string = "head"; // 0x655 PushS
	LookAsync(var_47_object, var_121_string, var_67_cvector); // 0x656 Func
	var_65_bool = 1; // 0x658 MovB
	goto Label_1627; // 0x659 Jump
	
Label_1627:
	var_122_string = ""; // 0x65b PushV
	var_122_string = var_62_string; // 0x65c Mov
	func_2144(var_122_string); // 0x65d NEW_2
	var_123_string = "all"; // 0x65f PushS
	PlayAnimation(var_123_string, var_62_string); // 0x660 Func
	WaitForAnimEnd(); // 0x662 Func
	var_124_bool = var_65_bool; // 0x664 Push
	if(var_124_bool == 0) goto Label_1643; // 0x665 JumpB
	StopAsync(); // 0x666 Func
	var_125_string = "head"; // 0x668 PushS
	UnlookAsync(var_125_string); // 0x669 Func
	
Label_1643:
	var_126_string = "all"; // 0x66b PushS
	LockAnimationEnd(var_126_string, var_62_string); // 0x66c Func
	RemoveEnvelope(); // 0x66e Func
	var_63_object = 0; // 0x670 SetNull
	
Label_1626:
	var_65_bool = 0; // 0x65a MovB
	
Label_1586:
	var_62_string = "bdie"; // 0x632 MovS
}


func_1532(var_205_string)
{
	var_205_string = "run"; // 0x5fc MovS
	return 0; // 0x5fd Return
}


func_2077()
{
	var_657_bool = 0; var_658_bool = 0; // 0x81d PushV
	var_659_bool = 1; // 0x81e PushB
	CameraSwitchToNormal(var_659_bool); // 0x81f Func
	var_660_bool = 0; // 0x821 PushV
	func_2525(var_660_bool); // 0x822 NEW_2
	if(var_660_bool == 0) goto Label_2086; // 0x824 JumpB
	goto Label_2094; // 0x825 Jump
	
Label_2094:
	return 2; // 0x82e Return
	
Label_2086:
	var_661_string = "head"; // 0x826 PushS
	HasAnimationTrack(var_658_bool, var_661_string); // 0x827 Func
	var_662_bool = var_658_bool; // 0x829 Push
	if(var_662_bool == 0) goto Label_2094; // 0x82a JumpB
	var_663_string = "head"; // 0x82b PushS
	UnlookAsync(var_663_string); // 0x82c Func
}


func_1056(var_495_bool, var_496_float)
{
	var_497_float = 0; var_498_bool = 0; var_499_float = 0; var_500_bool = 0; // 0x420 PushV
	rand(var_499_float); // 0x421 Func
	var_501_bool = var_499_float < var_496_float; // 0x423 LT
	if(var_501_bool == 0) goto Label_1076; // 0x424 JumpB
	
Label_1061:
	IsAnimationPlaying(var_500_bool); // 0x425 Func
	var_502_bool = var_500_bool == 0; // 0x427 Not
	if(var_502_bool == 0) goto Label_1066; // 0x428 JumpB
	goto Label_1075; // 0x429 Jump
	
Label_1075:
	goto Label_1081; // 0x433 Jump
	
Label_1081:
	var_495_bool = 0; // 0x439 MovB
	return 4; // 0x43a Return
	
Label_1066:
	var_503_bool = 0; // 0x42a PushV
	func_1154(var_503_bool); // 0x42b NEW_2
	if(var_503_bool == 0) goto Label_1072; // 0x42d JumpB
	var_495_bool = 1; // 0x42e MovB
	return 4; // 0x42f Return
	
Label_1072:
	sync(); // 0x430 Func
	goto Label_1061; // 0x432 Jump
	
Label_1076:
	WaitForAnimEnd(); // 0x434 Func
	func_1258(var_500_bool); // 0x437 NEW_2
}


func_2336()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x920 PushV
	var_68_int = 583; // 0x921 PushI
	var_69_int = 2; // 0x922 PushI
	var_70_int = 530952; // 0x923 PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x924 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x926 PushV
	var_72_object = var_67_object; // 0x927 Mov
	var_73_int = 582; // 0x928 MovI
	func_2362(var_71_bool, var_72_object, var_73_int); // 0x929 NEW_2
	return 2; // 0x92b Return
}


func_1534(var_46_object)
{
	EventDisable(0); // 0x5ff EventDisable
	var_47_object = Obj(); // 0x600 PushV
	var_47_object = var_46_object; // 0x601 Mov
	func_1559(var_47_object); // 0x602 NEW_2
	var_127_int = 50; // 0x604 PushI
	var_128_int = 40; // 0x605 PushI
	SetRTEnvelope(var_127_int, var_128_int); // 0x606 Func
	EventEnable(0); // 0x608 EventEnable
	
Label_1545:
	Hold(); // 0x609 Func
	goto Label_1545; // 0x60b Jump
}


func_2349(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x92d PushV
	GetDiaryRoot(var_59_object); // 0x92e Func
	var_60_bool = var_59_object == 0; // 0x930 Not
	if(var_60_bool == 0) goto Label_2359; // 0x931 JumpB
	var_61_string = "Can't retrieve diary root"; // 0x932 PushS
	Trace(var_61_string); // 0x933 Func
	var_57_object = 0; // 0x935 MovB
	return 2; // 0x936 Return
	
Label_2359:
	var_57_object = var_59_object; // 0x937 Mov
	return 2; // 0x938 Return
}


func_2095(var_639_string)
{
	var_640_bool = 0; var_641_float = 0; var_642_float = 0; var_643_bool = 0; var_644_float = 0; var_645_float = 0; // 0x82f PushV
	lshHasAnimation(var_643_bool, var_639_string); // 0x830 Func
	var_646_bool = var_643_bool; // 0x832 Push
	if(var_646_bool == 0) goto Label_2106; // 0x833 JumpB
	lshGetAnimTimes(var_639_string, var_644_float, var_645_float); // 0x834 Func
	var_647_bool = 0; // 0x836 PushB
	lshPlayAnimation(var_644_float, var_645_float, var_647_bool); // 0x837 Func
	goto Label_2110; // 0x839 Jump
	
Label_2110:
	return 6; // 0x83e Return
	
Label_2106:
	var_648_string = "Can't find lsh animation : "; // 0x83a PushS
	var_649_int = var_648_string + var_639_string; // 0x83b Add
	Trace(var_649_int); // 0x83c Func
}


func_1842(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0; // 0x732 PushV
	var_36_bool = 0; var_37_object = Obj(); // 0x733 PushV
	var_37_object = var_33_object; // 0x734 Mov
	func_1806(var_36_bool, var_37_object); // 0x735 NEW_2
	var_53_bool = var_36_bool == 0; // 0x737 Not
	if(var_53_bool == 0) goto Label_1851; // 0x738 JumpB
	var_32_bool = 0; // 0x739 MovB
	return 2; // 0x73a Return
	
Label_1851:
	var_54_bool = 0; var_55_object = Obj(); var_56_string = ""; // 0x73b PushV
	var_55_object = var_33_object; // 0x73c Mov
	var_56_string = "noaccess"; // 0x73d MovS
	func_1716(var_54_bool, var_55_object, var_56_string); // 0x73e NEW_2
	var_63_bool = var_54_bool == 0; // 0x740 Not
	if(var_63_bool == 0) goto Label_1860; // 0x741 JumpB
	var_32_bool = 1; // 0x742 MovB
	return 2; // 0x743 Return
	
Label_1860:
	var_64_string = "noaccess"; // 0x744 PushS
	GetProperty(var_64_string, var_35_int); // 0x745 ObjFunc
	var_65_int = 0; // 0x747 PushI
	var_32_bool = var_35_int == var_65_int; // 0x748 Eq2
	return 2; // 0x749 Return
}


func_2362(var_48_bool, var_49_object, var_50_int)
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; // 0x93a PushV
	var_57_object = Obj(); // 0x93b PushV
	func_2349(var_57_object); // 0x93c NEW_2
	var_54_object = var_57_object; // 0x93d Mov
	Find(var_50_int, var_55_object); // 0x93f ObjFunc
	var_62_bool = var_55_object == 0; // 0x941 Not
	if(var_62_bool == 0) goto Label_2377; // 0x942 JumpB
	var_63_string = "Can't find diary parent with id: "; // 0x943 PushS
	var_64_int = var_63_string + var_50_int; // 0x944 Add
	Trace(var_64_int); // 0x945 Func
	var_48_bool = 0; // 0x947 MovB
	return 6; // 0x948 Return
	
Label_2377:
	AddChild(var_49_object); // 0x949 ObjFunc
	var_65_int = 7; // 0x94b PushI
	SendWorldWndMessage(var_65_int); // 0x94c Func
	GetCategory(var_56_int); // 0x94e ObjFunc
	SetDiarySection(var_56_int); // 0x950 Func
	var_48_bool = 0; // 0x952 MovB
	return 6; // 0x953 Return
}


func_1083(var_0_object, var_292_bool, var_293_float)
{
	var_294_bool = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; var_299_bool = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; // 0x43b PushV
	
Label_1084:
	IsAnimationPlaying(var_299_bool); // 0x43c Func
	var_304_bool = var_299_bool == 0; // 0x43e Not
	if(var_304_bool == 0) goto Label_1089; // 0x43f JumpB
	goto Label_1121; // 0x440 Jump
	
Label_1121:
	func_1258(var_303_float); // 0x462 NEW_2
	var_292_bool = 0; // 0x464 MovB
	return 10; // 0x465 Return
	
Label_1089:
	var_305_bool = 0; // 0x441 PushV
	func_1154(var_305_bool); // 0x442 NEW_2
	if(var_305_bool == 0) goto Label_1095; // 0x444 JumpB
	var_292_bool = 1; // 0x445 MovB
	return 10; // 0x446 Return
	
Label_1095:
	var_348_bool = 0; var_349_object = Obj(); // 0x447 PushV
	var_349_object = var_0_object; // 0x448 MovT
	func_1842(var_348_bool, var_349_object); // 0x449 NEW_2
	var_350_bool = var_348_bool == 0; // 0x44b Not
	if(var_350_bool == 0) goto Label_1103; // 0x44c JumpB
	var_292_bool = 0; // 0x44d MovB
	return 10; // 0x44e Return
	
Label_1103:
	GetPFPosition(var_300_cvector); // 0x44f TObjFunc
	GetPFPosition(var_301_cvector); // 0x451 Func
	var_302_cvector = var_300_cvector - var_301_cvector; // 0x453 Sub2
	var_303_float = var_302_cvector | var_302_cvector; // 0x454 Or2
	var_351_float = var_293_float * var_293_float; // 0x455 Mult
	var_352_bool = var_303_float < var_351_float; // 0x456 LT
	if(var_352_bool == 0) goto Label_1118; // 0x457 JumpB
	var_353_bool = 0; var_354_float = 0; // 0x458 PushV
	var_354_float = var_293_float; // 0x459 Mov
	func_919(var_303_float, var_353_bool, var_354_float); // 0x45a NEW_2
	var_292_bool = 1; // 0x45c MovB
	return 10; // 0x45d Return
	
Label_1118:
	sync(); // 0x45e Func
	goto Label_1084; // 0x460 Jump
}


func_1341(var_2_object)
{
	var_20_int = 1; // 0x53d PushI
	KillTimer(var_20_int); // 0x53e Func
	var_21_object = var_2_object; // 0x540 PushT
	if(var_21_object == 0) goto Label_1350; // 0x541 JumpB
	var_2_object = 0; // 0x542 TMovB
	var_22_string = "head"; // 0x543 PushS
	UnlookAsync(var_22_string); // 0x544 Func
	
Label_1350:
	func_1507(var_19_object); // 0x547 NEW_2
	return 0; // 0x549 Return
}


func_2111(var_614_string, var_615_bool)
{
	var_618_bool = 0; var_619_float = 0; var_620_float = 0; var_621_bool = 0; var_622_float = 0; var_623_float = 0; // 0x83f PushV
	lshHasAnimation(var_621_bool, var_614_string); // 0x840 Func
	var_624_bool = var_621_bool; // 0x842 Push
	if(var_624_bool == 0) goto Label_2121; // 0x843 JumpB
	lshGetAnimTimes(var_614_string, var_622_float, var_623_float); // 0x844 Func
	lshPlayAnimation(var_622_float, var_623_float, var_615_bool); // 0x846 Func
	goto Label_2125; // 0x848 Jump
	
Label_2125:
	return 6; // 0x84d Return
	
Label_2121:
	var_625_string = "Can't find lsh animation : "; // 0x849 PushS
	var_626_int = var_625_string + var_614_string; // 0x84a Add
	Trace(var_626_int); // 0x84b Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_603_object, var_604_object)
{
	var_0_object = var_604_object; // 0x4b TMov
	var_1_object = var_603_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_609_int = 1; // 0x4e PushI
	if(var_609_int == 0) goto Label_107; // 0x4f JumpB
	var_610_string = ""; // 0x50 PushV
	var_610_string = "Neutral"; // 0x51 MovS
	func_137(var_604_object, var_610_string); // 0x52 NEW_2
	var_627_int = 530942; // 0x54 PushI
	SetMessage(var_627_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_628_int = 530962; // 0x59 PushI
	var_629_int = 32271; // 0x5a PushI
	var_630_int = 32281; // 0x5b PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x5c TObjFunc
	var_631_int = 530960; // 0x5e PushI
	var_632_int = 32280; // 0x5f PushI
	var_633_int = 32279; // 0x60 PushI
	AddReply(var_631_int, var_632_int, var_633_int); // 0x61 TObjFunc
	var_634_int = 530959; // 0x63 PushI
	var_635_int = -1; // 0x64 PushI
	var_636_int = 32278; // 0x65 PushI
	AddReply(var_634_int, var_635_int, var_636_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_637_bool = 0; // 0x6b PushV
	func_2525(var_637_bool); // 0x6c NEW_2
	if(var_637_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_638_string = var_3_string; // 0x71 PushT
	if(var_638_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_639_string = ""; // 0x74 PushV
	var_639_string = var_2_object; // 0x75 MovT
	func_2095(var_639_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_650_string = "all"; // 0x7a PushS
	var_651_string = "idle"; // 0x7b PushS
	PlayAnimation(var_650_string, var_651_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_652_string = var_3_string; // 0x80 PushT
	if(var_652_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_653_string = "all"; // 0x83 PushS
	var_654_string = "idle"; // 0x84 PushS
	PlayAnimation(var_653_string, var_654_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_1866(var_36_object)
{
	var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_bool = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_string = ""; // 0x74a PushV
	var_51_bool = var_36_object == 0; // 0x74b NullEq
	if(var_51_bool == 0) goto Label_1870; // 0x74c JumpB
	return 14; // 0x74d Return
	
Label_1870:
	IsDead(var_44_bool); // 0x74e Func
	var_52_bool = var_44_bool; // 0x750 Push
	if(var_52_bool == 0) goto Label_1875; // 0x751 JumpB
	return 14; // 0x752 Return
	
Label_1875:
	GetSecondaryAnimationType(var_45_int); // 0x753 Func
	var_53_int = 0; // 0x755 PushI
	var_54_bool = var_45_int < var_53_int; // 0x756 LT
	if(var_54_bool == 0) goto Label_1881; // 0x757 JumpB
	return 14; // 0x758 Return
	
Label_1881:
	GetPosition(var_46_cvector); // 0x759 ObjFunc
	GetPosition(var_47_cvector); // 0x75b Func
	GetDirection(var_48_cvector); // 0x75d Func
	var_49_cvector = var_47_cvector - var_46_cvector; // 0x75f Sub2
	var_55_float = GetByIndex(var_49_cvector, 0); // 0x760 PushE
	var_56_float = GetByIndex(var_48_cvector, 0); // 0x761 PushE
	var_57_float = var_55_float * var_56_float; // 0x762 Mult
	var_58_float = GetByIndex(var_49_cvector, 2); // 0x763 PushE
	var_59_float = GetByIndex(var_48_cvector, 2); // 0x764 PushE
	var_60_float = var_58_float * var_59_float; // 0x765 Mult
	var_61_int = var_57_float + var_60_float; // 0x766 Add
	var_62_int = 0; // 0x767 PushI
	var_63_bool = var_61_int >= var_62_int; // 0x768 GE
	if(var_63_bool == 0) goto Label_1900; // 0x769 JumpB
	var_50_string = "fhit"; // 0x76a MovS
	goto Label_1901; // 0x76b Jump
	
Label_1901:
	var_64_string = "hit_react"; // 0x76d PushS
	var_65_string = "1"; // 0x76e PushS
	var_66_int = var_50_string + var_65_string; // 0x76f Add
	var_67_string = "2"; // 0x770 PushS
	var_68_int = var_50_string + var_67_string; // 0x771 Add
	var_69_int = -10; // 0x772 PushI
	FadeSecondaryAnimation(var_64_string, var_66_int, var_68_int, var_69_int); // 0x773 Func
	return 14; // 0x775 Return
	
Label_1900:
	var_50_string = "bhit"; // 0x76c MovS
}


func_845(var_1_object, var_2_object, var_4_bool)
{
	var_57_bool = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_bool = 0; var_61_bool = 0; var_62_cvector = CVector(0,0,0); // 0x34d PushV
	var_1_object = 0; // 0x34e TMovI
	
Label_847:
	var_63_string = "all"; // 0x34f PushS
	var_64_string = "attack_begin"; // 0x350 PushS
	var_65_int = 1; // 0x351 PushI
	var_66_int = var_1_object + var_65_int; // 0x352 Add
	var_67_int = var_64_string + var_66_int; // 0x353 Add
	HasAnimation(var_60_bool, var_63_string, var_67_int); // 0x354 Func
	var_68_bool = var_60_bool == 0; // 0x356 Not
	if(var_68_bool == 0) goto Label_857; // 0x357 JumpB
	goto Label_860; // 0x358 Jump
	
Label_860:
	var_2_object = 0; // 0x35c TMovI
	
Label_861:
	var_69_string = "attack"; // 0x35d PushS
	var_70_int = 1; // 0x35e PushI
	var_71_int = var_2_object + var_70_int; // 0x35f Add
	var_72_int = var_69_string + var_71_int; // 0x360 Add
	IsExisting3DSound(var_61_bool, var_72_int); // 0x361 Func
	var_73_bool = var_61_bool == 0; // 0x363 Not
	if(var_73_bool == 0) goto Label_870; // 0x364 JumpB
	goto Label_873; // 0x365 Jump
	
Label_873:
	var_74_string = "all"; // 0x369 PushS
	var_75_string = "bjump"; // 0x36a PushS
	GetAnimationOffset(var_62_cvector, var_74_string, var_75_string); // 0x36b Func
	var_76_float = GetByIndex(var_62_cvector, 2); // 0x36d PushE
	var_4_bool = -var_76_float; // 0x36e Neg2
	return 6; // 0x36f Return
	
Label_870:
	var_77_int = 1; // 0x366 PushI
	var_2_object = var_2_object + var_77_int; // 0x367 Add2
	goto Label_861; // 0x368 Jump
	
Label_857:
	var_78_int = 1; // 0x359 PushI
	var_1_object = var_1_object + var_78_int; // 0x35a Add2
	goto Label_847; // 0x35b Jump
}


func_2126(var_23_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); // 0x84e PushV
	GetEyesHeight(var_26_float); // 0x84f ObjFunc
	var_27_cvector = CVector(0.0, 0.0, 0.0); // 0x851 MovV
	var_28_float = GetByIndex(var_27_cvector, 1); // 0x852 PushE
	var_28_float = var_26_float; // 0x853 Mov
	SetByIndex(var_27_cvector, 1) = var_28_float; // 0x854 PopE
	var_29_string = "head"; // 0x855 PushS
	LookAsync(var_23_object, var_29_string, var_27_cvector); // 0x856 Func
	return 4; // 0x858 Return
}


func_591(var_70_bool)
{
	var_70_bool = 1; // 0x24f MovB
	return 0; // 0x250 Return
}


func_593()
{
	StopAnimation(); // 0x251 Func
	StopGroup0(); // 0x253 Func
	return 0; // 0x255 Return
}


func_598(var_25_object)
{
	
Label_599:
	var_32_object = Obj(); var_33_bool = 0; var_34_float = 0; // 0x257 PushV
	var_32_object = var_25_object; // 0x258 Mov
	var_33_bool = 1; // 0x259 MovB
	var_34_float = 180.0; // 0x25a MovF
	func_616(var_28_int, var_29_bool, var_30_float, var_31_int, var_25_object, var_32_object, var_33_bool, var_34_float); // 0x25b NEW_2
	var_527_int = 1; // 0x25d PushI
	Sleep(var_527_int); // 0x25e Func
	goto Label_599; // 0x260 Jump
}


func_2390(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x956 PushV
	GetMainOutdoorScene(var_32_object); // 0x957 Func
	var_34_bool = var_32_object == 0; // 0x959 NullEq
	if(var_34_bool == 0) goto Label_2401; // 0x95a JumpB
	var_35_string = "Can't find main outdoor scene"; // 0x95b PushS
	Trace(var_35_string); // 0x95c Func
	var_33_object = 0; // 0x95e SetNull
	var_29_object = var_33_object; // 0x95f Mov
	return 4; // 0x960 Return
	
Label_2401:
	GetMap(var_33_object); // 0x961 ObjFunc
	var_29_object = var_33_object; // 0x963 Mov
	return 4; // 0x964 Return
}


func_2137()
{
	var_22_bool = 0; // 0x859 PushV
	func_2525(var_22_bool); // 0x85a NEW_2
	if(var_22_bool == 0) goto Label_2143; // 0x85c JumpB
	lshStopSpeech(); // 0x85d Func
	
Label_2143:
	return 0; // 0x85f Return
}


func_2144(var_70_string)
{
	var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x860 PushV
	IsExisting3DSound(var_79_bool, var_70_string); // 0x861 Func
	var_87_bool = var_79_bool == 0; // 0x863 Not
	if(var_87_bool == 0) goto Label_2169; // 0x864 JumpB
	var_80_int = 0; // 0x865 MovI
	
Label_2150:
	var_88_int = 1; // 0x866 PushI
	var_89_int = var_80_int + var_88_int; // 0x867 Add
	var_90_int = var_70_string + var_89_int; // 0x868 Add
	IsExisting3DSound(var_81_bool, var_90_int); // 0x869 Func
	var_91_bool = var_81_bool == 0; // 0x86b Not
	if(var_91_bool == 0) goto Label_2158; // 0x86c JumpB
	goto Label_2161; // 0x86d Jump
	
Label_2161:
	var_92_bool = var_80_int == 0; // 0x871 Not
	if(var_92_bool == 0) goto Label_2164; // 0x872 JumpB
	return 16; // 0x873 Return
	
Label_2164:
	irand(var_82_int, var_80_int); // 0x874 Func
	var_93_int = 1; // 0x876 PushI
	var_94_int = var_82_int + var_93_int; // 0x877 Add
	var_70_string = var_70_string + var_94_int; // 0x878 Add2
	
Label_2169:
	Is3DSoundLoaded(var_83_bool, var_70_string); // 0x879 Func
	var_95_bool = var_83_bool; // 0x87b Push
	if(var_95_bool == 0) goto Label_2184; // 0x87c JumpB
	GetEyesHeight(var_84_float); // 0x87d Func
	GetDirection(var_85_cvector); // 0x87f Func
	var_96_int = 50; // 0x881 PushI
	var_86_cvector = var_85_cvector * var_96_int; // 0x882 Mult2
	var_97_float = GetByIndex(var_86_cvector, 1); // 0x883 PushE
	var_97_float = var_97_float + var_84_float; // 0x884 Add2
	SetByIndex(var_86_cvector, 1) = var_97_float; // 0x885 PopE
	PlayGlobalSound(var_70_string, var_86_cvector); // 0x886 Func
	
Label_2184:
	return 16; // 0x888 Return
	
Label_2158:
	var_98_int = 1; // 0x86e PushI
	var_80_int = var_80_int + var_98_int; // 0x86f Add2
	goto Label_2150; // 0x870 Jump
}


func_610(var_401_float)
{
	var_401_float = 0.1; // 0x263 MovF
	return 0; // 0x264 Return
}


func_613(var_408_int)
{
	var_408_int = 0; // 0x266 MovI
	return 0; // 0x267 Return
}


func_1126(var_0_object, var_307_bool)
{
	var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_float = 0; var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0; var_317_float = 0; // 0x466 PushV
	var_318_bool = 0; var_319_object = Obj(); // 0x467 PushV
	var_319_object = var_0_object; // 0x468 MovT
	func_1842(var_318_bool, var_319_object); // 0x469 NEW_2
	var_320_bool = var_318_bool == 0; // 0x46b Not
	if(var_320_bool == 0) goto Label_1135; // 0x46c JumpB
	var_307_bool = 0; // 0x46d MovB
	return 10; // 0x46e Return
	
Label_1135:
	var_321_bool = 0; // 0x46f PushV
	func_1215(var_317_float, var_321_bool); // 0x470 NEW_2
	if(var_321_bool == 0) goto Label_1152; // 0x472 JumpB
	GetPFPosition(var_313_cvector); // 0x473 TObjFunc
	GetPFPosition(var_314_cvector); // 0x475 Func
	var_315_cvector = var_313_cvector - var_314_cvector; // 0x477 Sub2
	var_316_float = var_315_cvector | var_315_cvector; // 0x478 Or2
	GetAttackDistance(var_317_float); // 0x479 TObjFunc
	var_322_int = 50; // 0x47b PushI
	var_317_float = var_317_float + var_322_int; // 0x47c Add2
	var_323_float = var_317_float * var_317_float; // 0x47d Mult
	var_307_bool = var_316_float <= var_323_float; // 0x47e LE2
	return 10; // 0x47f Return
	
Label_1152:
	var_307_bool = 0; // 0x480 MovB
	return 10; // 0x481 Return
}


func_1383(var_0_object, var_1_object, var_164_bool, var_165_object, var_166_float, var_167_float, var_168_bool, var_169_bool)
{
	var_170_bool = 0; var_171_bool = 0; var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_float = 0; var_177_object = Obj(); var_178_bool = 0; var_179_bool = 0; var_180_object = Obj(); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_float = 0; var_185_object = Obj(); // 0x567 PushV
	var_0_object = 0; // 0x568 TMovB
	var_1_object = var_165_object; // 0x569 TMov
	var_179_bool = var_169_bool; // 0x56a Mov
	
Label_1387:
	var_186_bool = 0; var_187_object = Obj(); // 0x56b PushV
	var_187_object = var_165_object; // 0x56c Mov
	func_1523(var_186_bool, var_187_object); // 0x56d NEW_2
	var_190_bool = var_186_bool == 0; // 0x56f Not
	if(var_190_bool == 0) goto Label_1395; // 0x570 JumpB
	var_164_bool = 0; // 0x571 MovB
	return 16; // 0x572 Return
	
Label_1395:
	GetPosition(var_181_cvector); // 0x573 ObjFunc
	GetPosition(var_182_cvector); // 0x575 Func
	var_183_cvector = var_181_cvector - var_182_cvector; // 0x577 Sub2
	var_184_float = var_183_cvector | var_183_cvector; // 0x578 Or2
	var_191_bool = 0; // 0x579 PushV
	var_191_bool = 0; // 0x57a MovB
	var_192_int = 0; // 0x57b PushI
	var_193_bool = var_167_float > var_192_int; // 0x57c GT
	if(var_193_bool == 0) goto Label_1410; // 0x57d JumpB
	var_194_float = var_167_float * var_167_float; // 0x57e Mult
	var_195_bool = var_184_float > var_194_float; // 0x57f GT
	if(var_195_bool == 0) goto Label_1410; // 0x580 JumpB
	var_191_bool = 1; // 0x581 MovB
	
Label_1410:
	if(var_191_bool == 0) goto Label_1415; // 0x582 JumpB
	Stop(); // 0x583 Func
	var_164_bool = 0; // 0x585 MovB
	return 16; // 0x586 Return
	
Label_1415:
	var_196_float = var_166_float * var_166_float; // 0x587 Mult
	var_197_bool = var_184_float > var_196_float; // 0x588 GT
	if(var_197_bool == 0) goto Label_1477; // 0x589 JumpB
	GetPFPosition(var_181_cvector); // 0x58a ObjFunc
	FindPathTo(var_185_object, var_181_cvector); // 0x58c Func
	var_198_bool = var_185_object != 0; // 0x58e NullNeq
	if(var_198_bool == 0) goto Label_1426; // 0x58f JumpB
	var_180_object = var_185_object; // 0x590 Mov
	var_185_object = 0; // 0x591 SetNull
	
Label_1426:
	var_199_bool = var_180_object != 0; // 0x592 NullNeq
	if(var_199_bool == 0) goto Label_1459; // 0x593 JumpB
	var_200_bool = var_179_bool; // 0x594 Push
	if(var_200_bool == 0) goto Label_1436; // 0x595 JumpB
	var_179_bool = 0; // 0x596 MovB
	RotatePath(var_180_object, var_178_bool); // 0x597 Func
	var_201_bool = var_178_bool == 0; // 0x599 Not
	if(var_201_bool == 0) goto Label_1436; // 0x59a JumpB
	goto Label_1483; // 0x59b Jump
	
Label_1483:
	var_164_bool = !var_0_object; // 0x5cb Not2
	return 16; // 0x5cc Return
	
Label_1436:
	var_202_int = 0; // 0x59c PushI
	var_203_float = 0.3; // 0x59d PushF
	SetTimer(var_202_int, var_203_float); // 0x59e Func
	var_204_string = ""; // 0x5a0 PushV
	func_1530(var_204_string); // 0x5a1 NEW_2
	var_205_string = ""; // 0x5a3 PushV
	func_1532(var_205_string); // 0x5a4 NEW_2
	FollowPath(var_180_object, var_168_bool, var_178_bool, var_204_string, var_205_string); // 0x5a6 Func
	var_206_bool = var_178_bool == 0; // 0x5a8 Not
	if(var_206_bool == 0) goto Label_1457; // 0x5a9 JumpB
	var_207_object = var_0_object; // 0x5aa PushT
	if(var_207_object == 0) goto Label_1455; // 0x5ab JumpB
	var_180_object = 0; // 0x5ac SetNull
	goto Label_1483; // 0x5ad Jump
	
Label_1455:
	goto Label_1482; // 0x5af Jump
	
Label_1482:
	goto Label_1387; // 0x5ca Jump
	
Label_1457:
	var_180_object = 0; // 0x5b1 SetNull
	goto Label_1475; // 0x5b2 Jump
	
Label_1475:
	var_185_object = 0; // 0x5c3 SetNull
	goto Label_1481; // 0x5c4 Jump
	
Label_1481:
	var_180_object = 0; // 0x5c9 SetNull
	
Label_1459:
	var_208_int = 0; // 0x5b3 PushI
	KillTimer(var_208_int); // 0x5b4 Func
	var_209_float = 0.5; // 0x5b6 PushF
	Sleep(var_209_float, var_178_bool); // 0x5b7 Func
	var_210_bool = var_178_bool == 0; // 0x5b9 Not
	if(var_210_bool == 0) goto Label_1471; // 0x5ba JumpB
	var_211_object = var_0_object; // 0x5bb PushT
	if(var_211_object == 0) goto Label_1471; // 0x5bc JumpB
	var_180_object = 0; // 0x5bd SetNull
	goto Label_1483; // 0x5be Jump
	
Label_1471:
	var_212_int = 0; // 0x5bf PushI
	var_213_float = 0.3; // 0x5c0 PushF
	SetTimer(var_212_int, var_213_float); // 0x5c1 Func
	
Label_1477:
	var_214_int = 0; // 0x5c5 PushI
	KillTimer(var_214_int); // 0x5c6 Func
	goto Label_1483; // 0x5c8 Jump
}


func_616(var_0_object, var_3_string, var_5_int, var_32_object, var_33_bool, var_34_float, var_141_bool, var_233_bool)
{
	var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_float = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_float = 0; // 0x268 PushV
	func_845(var_54_cvector, var_55_bool, var_56_float); // 0x26a NEW_2
	var_5_int = 0; // 0x26c TMovI
	var_79_string = "@GetAttackDistance"; // 0x26d PushS
	var_80_int = 1; // 0x26e PushI
	var_81_bool = IsFuncExist(var_32_object, var_79_string, var_80_int); // 0x26f FuncExist
	if(var_81_bool == 0) goto Label_630; // 0x270 JumpB
	GetAttackDistance(var_46_float); // 0x271 ObjFunc
	var_82_int = 50; // 0x273 PushI
	var_46_float = var_46_float + var_82_int; // 0x274 Add2
	goto Label_631; // 0x275 Jump
	
Label_631:
	var_83_int = 150; // 0x277 PushI
	var_84_bool = var_46_float >= var_83_int; // 0x278 GE
	if(var_84_bool == 0) goto Label_635; // 0x279 JumpB
	var_46_float = 150; // 0x27a MovI
	
Label_635:
	var_3_string = 0; // 0x27b TMovB
	var_0_object = var_32_object; // 0x27c TMov
	IsPlayerActor(var_0_object, var_49_bool); // 0x27d Func
	var_85_bool = var_49_bool; // 0x27f Push
	if(var_85_bool == 0) goto Label_649; // 0x280 JumpB
	var_86_string = "attack"; // 0x281 PushS
	PlayGlobalMusic(var_86_string); // 0x282 Func
	var_87_object = Obj(); // 0x284 PushV
	func_2185(var_87_object); // 0x285 NEW_2
	SendPlayerEnemy(var_32_object, var_87_object); // 0x287 Func
	
Label_649:
	var_90_bool = var_33_bool; // 0x289 Push
	if(var_90_bool == 0) goto Label_653; // 0x28a JumpB
	var_50_bool = 0; // 0x28b MovB
	goto Label_654; // 0x28c Jump
	
Label_654:
	var_91_float = 400.0; // 0x28e PushF
	var_51_float = var_91_float + var_46_float; // 0x28f Add2
	
Label_656:
	var_92_bool = 0; // 0x290 PushV
	var_92_bool = 0; // 0x291 MovB
	var_93_bool = 0; var_94_object = Obj(); // 0x292 PushV
	var_94_object = var_0_object; // 0x293 MovT
	func_1842(var_93_bool, var_94_object); // 0x294 NEW_2
	if(var_93_bool == 0) goto Label_666; // 0x296 JumpB
	var_127_bool = var_3_string == 0; // 0x297 Not
	if(var_127_bool == 0) goto Label_666; // 0x298 JumpB
	var_92_bool = 1; // 0x299 MovB
	
Label_666:
	if(var_92_bool == 0) goto Label_828; // 0x29a JumpB
	func_1258(var_56_float); // 0x29c NEW_2
	GetPFPosition(var_47_cvector); // 0x29e TObjFunc
	GetPFPosition(var_48_cvector); // 0x2a0 Func
	var_52_cvector = var_47_cvector - var_48_cvector; // 0x2a2 Sub2
	var_53_float = var_52_cvector | var_52_cvector; // 0x2a3 Or2
	var_133_float = var_51_float * var_51_float; // 0x2a4 Mult
	var_134_bool = var_53_float >= var_133_float; // 0x2a5 GE
	if(var_134_bool == 0) goto Label_694; // 0x2a6 JumpB
	var_135_bool = 0; var_136_object = Obj(); var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_bool = 0; // 0x2a7 PushV
	var_136_object = var_0_object; // 0x2a8 MovT
	var_137_float = var_46_float; // 0x2a9 Mov
	var_138_float = 10000.0; // 0x2aa MovF
	var_139_bool = 1; // 0x2ab MovB
	var_140_bool = 0; // 0x2ac MovB
	TaskCall(4); // 0x2ad TaskCall
	func_1278(var_143_bool, var_135_bool, var_136_object, var_137_float, var_138_float, var_139_bool, var_140_bool); // 0x2ae NEW_2
	TaskReturn(); // 0x2af TaskReturn
	var_218_bool = var_141_bool == 0; // 0x2b1 Not
	if(var_218_bool == 0) goto Label_692; // 0x2b2 JumpB
	goto Label_828; // 0x2b3 Jump
	
Label_828:
	WaitForAnimEnd(); // 0x33c Func
	var_219_string = var_3_string; // 0x33e PushT
	if(var_219_string == 0) goto Label_833; // 0x33f JumpB
	return 22; // 0x340 Return
	
Label_833:
	var_220_string = "all"; // 0x341 PushS
	var_221_string = "attack_off"; // 0x342 PushS
	PlayAnimation(var_220_string, var_221_string); // 0x343 Func
	WaitForAnimEnd(); // 0x345 Func
	var_222_bool = var_49_bool; // 0x347 Push
	if(var_222_bool == 0) goto Label_844; // 0x348 JumpB
	var_223_float = 2.0; // 0x349 PushF
	Sleep(var_223_float); // 0x34a Func
	
Label_844:
	return 22; // 0x34c Return
	
Label_692:
	var_50_bool = 0; // 0x2b4 MovB
	goto Label_827; // 0x2b5 Jump
	
Label_827:
	goto Label_656; // 0x33b Jump
	
Label_694:
	var_224_float = var_34_float * var_34_float; // 0x2b6 Mult
	var_225_bool = var_53_float >= var_224_float; // 0x2b7 GE
	if(var_225_bool == 0) goto Label_819; // 0x2b8 JumpB
	GetPFPosition(var_54_cvector); // 0x2b9 TObjFunc
	CanReachByPF(var_55_bool, var_54_cvector); // 0x2bb Func
	var_226_bool = var_55_bool == 0; // 0x2bd Not
	if(var_226_bool == 0) goto Label_718; // 0x2be JumpB
	var_227_bool = 0; var_228_object = Obj(); var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_bool = 0; // 0x2bf PushV
	var_228_object = var_0_object; // 0x2c0 MovT
	var_229_float = var_46_float; // 0x2c1 Mov
	var_230_float = 10000.0; // 0x2c2 MovF
	var_231_bool = 1; // 0x2c3 MovB
	var_232_bool = 0; // 0x2c4 MovB
	TaskCall(4); // 0x2c5 TaskCall
	func_1278(var_235_bool, var_227_bool, var_228_object, var_229_float, var_230_float, var_231_bool, var_232_bool); // 0x2c6 NEW_2
	TaskReturn(); // 0x2c7 TaskReturn
	var_236_bool = var_233_bool == 0; // 0x2c9 Not
	if(var_236_bool == 0) goto Label_716; // 0x2ca JumpB
	goto Label_828; // 0x2cb Jump
	
Label_716:
	var_50_bool = 0; // 0x2cc MovB
	goto Label_656; // 0x2cd Jump
	
Label_718:
	var_237_bool = var_50_bool == 0; // 0x2ce Not
	if(var_237_bool == 0) goto Label_743; // 0x2cf JumpB
	var_238_object = Obj(); // 0x2d0 PushV
	var_238_object = var_0_object; // 0x2d1 MovT
	func_1992(); // 0x2d2 NEW_2
	var_247_string = "all"; // 0x2d4 PushS
	var_248_string = "attack_on"; // 0x2d5 PushS
	PlayAnimation(var_247_string, var_248_string); // 0x2d6 Func
	WaitForAnimEnd(); // 0x2d8 Func
	func_1258(var_56_float); // 0x2db NEW_2
	StopAsync(); // 0x2dd Func
	var_50_bool = 1; // 0x2df MovB
	var_249_bool = 0; var_250_object = Obj(); // 0x2e0 PushV
	var_250_object = var_0_object; // 0x2e1 MovT
	func_1842(var_249_bool, var_250_object); // 0x2e2 NEW_2
	var_251_bool = var_249_bool == 0; // 0x2e4 Not
	if(var_251_bool == 0) goto Label_743; // 0x2e5 JumpB
	goto Label_828; // 0x2e6 Jump
	
Label_743:
	rand(var_56_float); // 0x2e7 Func
	var_252_bool = 0; // 0x2e9 PushV
	var_252_bool = 1; // 0x2ea MovB
	var_253_float = 0.25; // 0x2eb PushF
	var_254_bool = var_56_float < var_253_float; // 0x2ec LT
	if(var_254_bool == 0) goto Label_755; // 0x2ed JumpB
	var_255_bool = 0; // 0x2ee PushV
	func_1215(var_252_bool, var_255_bool); // 0x2ef NEW_2
	if(var_255_bool == 0) goto Label_755; // 0x2f1 JumpB
	var_252_bool = 0; // 0x2f2 MovB
	
Label_755:
	if(var_252_bool == 0) goto Label_772; // 0x2f3 JumpB
	Face(var_0_object); // 0x2f4 Func
	func_1265(); // 0x2f7 NEW_2
	var_290_string = "all"; // 0x2f9 PushS
	var_291_string = "attack_stay"; // 0x2fa PushS
	PlayAnimation(var_290_string, var_291_string); // 0x2fb Func
	var_292_bool = 0; var_293_float = 0; // 0x2fd PushV
	var_293_float = var_34_float; // 0x2fe Mov
	func_1083(var_56_float, var_292_bool, var_293_float); // 0x2ff NEW_2
	StopAsync(); // 0x301 Func
	goto Label_818; // 0x303 Jump
	
Label_818:
	goto Label_827; // 0x332 Jump
	
Label_772:
	Face(var_0_object); // 0x304 Func
	var_511_string = "all"; // 0x306 PushS
	var_512_string = "fjump"; // 0x307 PushS
	PlayAnimation(var_511_string, var_512_string); // 0x308 Func
	WaitForAnimEnd(); // 0x30a Func
	func_1258(var_56_float); // 0x30d NEW_2
	var_513_cvector = CVector(0.0, 0.0, 0.0); // 0x30f PushVec
	SetSpeed(var_513_cvector); // 0x310 Func
	Stop(); // 0x312 Func
	StopAsync(); // 0x314 Func
	var_514_bool = 0; // 0x316 PushV
	func_1215(var_56_float, var_514_bool); // 0x317 NEW_2
	var_515_bool = var_514_bool == 0; // 0x319 Not
	if(var_515_bool == 0) goto Label_818; // 0x31a JumpB
	var_516_bool = 0; var_517_object = Obj(); // 0x31b PushV
	var_517_object = var_0_object; // 0x31c MovT
	func_1842(var_516_bool, var_517_object); // 0x31d NEW_2
	var_518_bool = var_516_bool == 0; // 0x31f Not
	if(var_518_bool == 0) goto Label_802; // 0x320 JumpB
	goto Label_828; // 0x321 Jump
	
Label_802:
	GetPFPosition(var_47_cvector); // 0x322 TObjFunc
	GetPFPosition(var_48_cvector); // 0x324 Func
	var_52_cvector = var_47_cvector - var_48_cvector; // 0x326 Sub2
	var_53_float = var_52_cvector | var_52_cvector; // 0x327 Or2
	var_519_float = var_34_float * var_34_float; // 0x328 Mult
	var_520_bool = var_53_float < var_519_float; // 0x329 LT
	if(var_520_bool == 0) goto Label_818; // 0x32a JumpB
	var_521_bool = 0; var_522_float = 0; // 0x32b PushV
	var_522_float = var_34_float; // 0x32c Mov
	func_919(var_56_float, var_521_bool, var_522_float); // 0x32d NEW_2
	var_523_bool = var_521_bool == 0; // 0x32f Not
	if(var_523_bool == 0) goto Label_818; // 0x330 JumpB
	goto Label_828; // 0x331 Jump
	
Label_819:
	var_524_bool = 0; var_525_float = 0; // 0x333 PushV
	var_525_float = var_34_float; // 0x334 Mov
	func_919(var_56_float, var_524_bool, var_525_float); // 0x335 NEW_2
	var_526_bool = var_524_bool == 0; // 0x337 Not
	if(var_526_bool == 0) goto Label_826; // 0x338 JumpB
	goto Label_828; // 0x339 Jump
	
Label_826:
	var_50_bool = 1; // 0x33a MovB
	
Label_653:
	var_50_bool = 1; // 0x28d MovB
	
Label_630:
	var_46_float = var_34_float; // 0x276 Mov
}


func_2407(var_76_object, var_77_string, var_78_float)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_object = Obj(); var_87_bool = 0; // 0x967 PushV
	GetMainOutdoorScene(var_86_object); // 0x968 Func
	var_88_bool = var_86_object == 0; // 0x96a NullEq
	if(var_88_bool == 0) goto Label_2416; // 0x96b JumpB
	var_89_string = "Can't find main outdoor scene"; // 0x96c PushS
	Trace(var_89_string); // 0x96d Func
	return 8; // 0x96f Return
	
Label_2416:
	GetLocator(var_77_string, var_87_bool, var_84_cvector, var_85_cvector); // 0x970 ObjFunc
	var_90_bool = var_87_bool == 0; // 0x972 Not
	if(var_90_bool == 0) goto Label_2426; // 0x973 JumpB
	var_91_string = "Warning: outdoor scene locator "; // 0x974 PushS
	var_92_int = var_91_string + var_77_string; // 0x975 Add
	var_93_string = " doesnt exist"; // 0x976 PushS
	var_94_int = var_92_int + var_93_string; // 0x977 Add
	Trace(var_94_int); // 0x978 Func
	
Label_2426:
	GetMap(var_76_object); // 0x97a ObjFunc
	var_95_bool = var_76_object == 0; // 0x97c NullEq
	if(var_95_bool == 0) goto Label_2434; // 0x97d JumpB
	var_96_string = "Can't find map"; // 0x97e PushS
	Trace(var_96_string); // 0x97f Func
	return 8; // 0x981 Return
	
Label_2434:
	var_97_float = GetByIndex(var_84_cvector, 0); // 0x982 PushE
	var_98_float = GetByIndex(var_84_cvector, 2); // 0x983 PushE
	SetMapParams(var_97_float, var_98_float, var_78_float); // 0x984 ObjFunc
	return 8; // 0x986 Return
}


func_880(var_0_object, var_390_float, var_391_int)
{
	var_392_object = Obj(); var_393_float = 0; var_394_float = 0; var_395_object = Obj(); var_396_float = 0; var_397_float = 0; // 0x370 PushV
	var_398_float = 0.9; // 0x371 PushF
	var_399_float = var_390_float * var_398_float; // 0x372 Mult
	GetVictim(var_399_float, var_395_object); // 0x373 Func
	ReportAttack(var_0_object); // 0x375 Func
	var_400_bool = var_395_object == var_0_object; // 0x377 Eq
	if(var_400_bool == 0) goto Label_917; // 0x378 JumpB
	var_401_float = 0; var_402_object = Obj(); var_403_int = 0; // 0x379 PushV
	var_402_object = var_395_object; // 0x37a Mov
	var_403_int = var_391_int; // 0x37b Mov
	func_610(var_403_int); // 0x37c NEW_2
	var_396_float = var_401_float; // 0x37d Mov
	var_404_float = 0; var_405_object = Obj(); var_406_float = 0; var_407_int = 0; // 0x37f PushV
	var_405_object = var_395_object; // 0x380 Mov
	var_406_float = var_396_float; // 0x381 Mov
	var_408_int = 0; var_409_object = Obj(); var_410_int = 0; // 0x382 PushV
	var_409_object = var_395_object; // 0x383 Mov
	var_410_int = var_391_int; // 0x384 Mov
	func_613(var_410_int); // 0x385 NEW_2
	var_407_int = var_408_int; // 0x386 Mov
	func_1728(var_404_float, var_405_object, var_406_float, var_407_int); // 0x388 NEW_2
	var_397_float = var_404_float; // 0x389 Mov
	var_469_int = 0; // 0x38b PushV
	func_1263(var_469_int); // 0x38c NEW_2
	ReportHit(var_0_object, var_469_int, var_397_float, var_396_float); // 0x38e Func
	var_470_object = Obj(); var_471_float = 0; // 0x390 PushV
	var_470_object = var_395_object; // 0x391 Mov
	var_471_float = var_397_float; // 0x392 Mov
	func_1270(); // 0x393 NEW_2
	
Label_917:
	return 6; // 0x395 Return
}


func_1650(var_69_string)
{
	RemoveRTEnvelope(); // 0x673 Func
	SetDeathState(); // 0x675 Func
	Stop(); // 0x677 Func
	StopAsync(); // 0x679 Func
	StopSecondaryAnimation(); // 0x67b Func
	var_70_string = ""; // 0x67d PushV
	var_70_string = var_69_string; // 0x67e Mov
	func_2144(var_70_string); // 0x67f NEW_2
	var_99_string = "all"; // 0x681 PushS
	PlayAnimation(var_99_string, var_69_string); // 0x682 Func
	WaitForAnimEnd(); // 0x684 Func
	var_100_string = "all"; // 0x686 PushS
	LockAnimationEnd(var_100_string, var_69_string); // 0x687 Func
	RemoveEnvelope(); // 0x689 Func
	return 0; // 0x68b Return
}


func_1910(var_23_object, var_24_int, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_int = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); // 0x776 PushV
	var_44_bool = 0; // 0x777 PushV
	var_44_bool = 0; // 0x778 MovB
	var_45_bool = 0; // 0x779 PushV
	var_45_bool = 0; // 0x77a MovB
	var_46_object = var_23_object; // 0x77b Push
	if(var_46_object == 0) goto Label_1921; // 0x77c JumpB
	var_47_int = 4; // 0x77d PushI
	var_48_bool = var_24_int != var_47_int; // 0x77e Neq
	if(var_48_bool == 0) goto Label_1921; // 0x77f JumpB
	var_45_bool = 1; // 0x780 MovB
	
Label_1921:
	if(var_45_bool == 0) goto Label_1926; // 0x781 JumpB
	var_49_int = 5; // 0x782 PushI
	var_50_bool = var_24_int != var_49_int; // 0x783 Neq
	if(var_50_bool == 0) goto Label_1926; // 0x784 JumpB
	var_44_bool = 1; // 0x785 MovB
	
Label_1926:
	if(var_44_bool == 0) goto Label_1973; // 0x786 JumpB
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x787 PushV
	var_53_cvector = CVector(0,0,0); var_54_object = Obj(); // 0x788 PushV
	var_54_object = var_23_object; // 0x789 Mov
	func_1696(var_54_object); // 0x78a NEW_2
	var_52_cvector = var_53_cvector; // 0x78b Mov
	func_2191(var_51_cvector, var_52_cvector); // 0x78d NEW_2
	var_35_cvector = var_51_cvector; // 0x78e Mov
	CreateVectorVector(var_36_object); // 0x790 Func
	var_37_int = 1; // 0x792 MovI
	
Label_1939:
	var_64_string = "hit"; // 0x793 PushS
	var_65_int = var_64_string + var_37_int; // 0x794 Add
	GetGeometryLocator(var_65_int, var_38_bool, var_39_cvector, var_40_cvector); // 0x795 Func
	var_66_bool = var_38_bool == 0; // 0x797 Not
	if(var_66_bool == 0) goto Label_1946; // 0x798 JumpB
	goto Label_1955; // 0x799 Jump
	
Label_1955:
	size(var_41_int); // 0x7a3 ObjFunc
	var_67_int = var_41_int; // 0x7a5 Push
	if(var_67_int == 0) goto Label_1972; // 0x7a6 JumpB
	irand(var_42_int, var_41_int); // 0x7a7 Func
	get(var_43_cvector, var_42_int); // 0x7a9 ObjFunc
	var_68_object = Obj(); var_69_int = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x7ab PushV
	var_68_object = var_23_object; // 0x7ac Mov
	var_69_int = var_24_int; // 0x7ad Mov
	var_70_float = var_25_float; // 0x7ae Mov
	var_71_cvector = var_43_cvector; // 0x7af Mov
	var_72_cvector = -var_35_cvector; // 0x7b0 Neg2
	func_1978(var_70_float, var_71_cvector, var_72_cvector); // 0x7b1 NEW_2
	return 18; // 0x7b3 Return
	
Label_1972:
	var_36_object = 0; // 0x7b4 SetNull
	
Label_1973:
	var_113_object = Obj(); // 0x7b5 PushV
	var_113_object = var_23_object; // 0x7b6 Mov
	func_1866(var_113_object); // 0x7b7 NEW_2
	return 18; // 0x7b9 Return
	
Label_1946:
	var_114_int = var_40_cvector | var_35_cvector; // 0x79a Or
	var_115_float = 0.70711; // 0x79b PushF
	var_116_bool = var_114_int >= var_115_float; // 0x79c GE
	if(var_116_bool == 0) goto Label_1952; // 0x79d JumpB
	add(var_39_cvector); // 0x79e ObjFunc
	
Label_1952:
	var_117_int = 1; // 0x7a0 PushI
	var_37_int = var_37_int + var_117_int; // 0x7a1 Add2
	goto Label_1939; // 0x7a2 Jump
}


func_1154(var_305_bool)
{
	var_306_bool = 0; // 0x482 PushV
	var_306_bool = 0; // 0x483 MovB
	var_307_bool = 0; // 0x484 PushV
	func_1126(var_306_bool, var_307_bool); // 0x485 NEW_2
	if(var_307_bool == 0) goto Label_1165; // 0x487 JumpB
	var_324_bool = 0; // 0x488 PushV
	func_1170(var_305_bool, var_306_bool, var_324_bool); // 0x489 NEW_2
	if(var_324_bool == 0) goto Label_1165; // 0x48b JumpB
	var_306_bool = 1; // 0x48c MovB
	
Label_1165:
	if(var_306_bool == 0) goto Label_1168; // 0x48d JumpB
	var_305_bool = 1; // 0x48e MovB
	return 0; // 0x48f Return
	
Label_1168:
	var_305_bool = 0; // 0x490 MovB
	return 0; // 0x491 Return
}


func_2440(var_594_int)
{
	var_595_int = 0; var_596_int = 0; // 0x988 PushV
	var_597_string = "branch"; // 0x989 PushS
	GetVariable(var_597_string, var_596_int); // 0x98a Func
	var_598_int = 0; // 0x98c PushI
	var_599_bool = var_596_int == var_598_int; // 0x98d Eq
	if(var_599_bool == 0) goto Label_2450; // 0x98e JumpB
	var_594_int = 1; // 0x98f MovI
	return 2; // 0x990 Return
	
Label_2450:
	var_600_int = 1; // 0x992 PushI
	var_601_bool = var_596_int == var_600_int; // 0x993 Eq
	if(var_601_bool == 0) goto Label_2455; // 0x994 JumpB
	var_594_int = 2; // 0x995 MovI
	return 2; // 0x996 Return
	
Label_2455:
	var_594_int = 3; // 0x997 MovI
	return 2; // 0x998 Return
}


func_137(var_2_object, var_610_string)
{
	var_611_bool = 0; // 0x8a PushV
	func_2525(var_611_bool); // 0x8b NEW_2
	var_612_bool = var_611_bool == 0; // 0x8d Not
	if(var_612_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_613_bool = var_610_string == var_2_object; // 0x90 Eq
	if(var_613_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_614_string = ""; var_615_bool = 0; // 0x93 PushV
	var_614_string = var_610_string; // 0x94 Mov
	var_616_string = ""; // 0x95 PushS
	var_617_bool = var_610_string == var_616_string; // 0x96 Eq
	if(var_617_bool == 0) goto Label_154; // 0x97 JumpB
	var_615_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_2111(var_614_string, var_615_bool); // 0x9b NEW_2
	var_2_object = var_610_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_615_bool = 1; // 0x9a MovB
}


func_2185(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x889 PushV
	self(var_25_object); // 0x88a Func
	var_23_object = var_25_object; // 0x88c Mov
	return 2; // 0x88d Return
}


func_2191(var_51_cvector, var_52_cvector)
{
	var_59_float = 0; var_60_float = 0; // 0x88f PushV
	var_61_int = var_52_cvector | var_52_cvector; // 0x890 Or
	var_60_float = sqrt(var_61_int); // 0x891 Sqrt2
	var_62_float = 0.0; // 0x892 PushF
	var_63_bool = var_60_float < var_62_float; // 0x893 LT
	if(var_63_bool == 0) goto Label_2199; // 0x894 JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x895 MovV
	return 2; // 0x896 Return
	
Label_2199:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x897 Div2
	return 2; // 0x898 Return
}


func_1170(var_0_object, var_4_bool, var_324_bool)
{
	var_325_object = Obj(); var_326_bool = 0; var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_object = Obj(); var_331_bool = 0; var_332_float = 0; var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); // 0x492 PushV
	GetScene(var_330_object); // 0x493 Func
	var_331_bool = 0; // 0x495 MovB
	
Label_1174:
	var_335_cvector = CVector(0,0,0); var_336_object = Obj(); // 0x496 PushV
	var_336_object = var_0_object; // 0x497 MovT
	func_1696(var_336_object); // 0x498 NEW_2
	var_341_int = -var_335_cvector; // 0x49a Neg
	FindDirLength(var_332_float, var_341_int, var_332_float); // 0x49b Func
	var_342_bool = var_332_float < var_4_bool; // 0x49d LT
	if(var_342_bool == 0) goto Label_1184; // 0x49e JumpB
	goto Label_1212; // 0x49f Jump
	
Label_1212:
	var_324_bool = var_331_bool; // 0x4bc Mov
	return 10; // 0x4bd Return
	
Label_1184:
	Face(var_0_object); // 0x4a0 Func
	var_343_string = "all"; // 0x4a2 PushS
	var_344_string = "bjump"; // 0x4a3 PushS
	PlayAnimation(var_343_string, var_344_string); // 0x4a4 Func
	GetPFPosition(var_333_cvector); // 0x4a6 TObjFunc
	GetPFPosition(var_334_cvector); // 0x4a8 Func
	WaitForAnimEnd(); // 0x4aa Func
	func_1258(var_334_cvector); // 0x4ad NEW_2
	StopAsync(); // 0x4af Func
	var_345_cvector = CVector(0.0, 0.0, 0.0); // 0x4b1 PushVec
	SetSpeed(var_345_cvector); // 0x4b2 Func
	var_331_bool = 1; // 0x4b4 MovB
	var_346_bool = 0; // 0x4b5 PushV
	func_1126(var_334_cvector, var_346_bool); // 0x4b6 NEW_2
	var_347_bool = var_346_bool == 0; // 0x4b8 Not
	if(var_347_bool == 0) goto Label_1211; // 0x4b9 JumpB
	goto Label_1212; // 0x4ba Jump
	
Label_1211:
	goto Label_1174; // 0x4bb Jump
}


func_1682(var_432_string, var_433_int)
{
	var_434_int = 2; // 0x693 PushI
	var_435_bool = var_433_int == var_434_int; // 0x694 Eq
	if(var_435_bool == 0) goto Label_1689; // 0x695 JumpB
	var_432_string = "fire"; // 0x696 MovS
	return 0; // 0x697 Return
	
Label_1689:
	var_436_int = 1; // 0x699 PushI
	var_437_bool = var_433_int == var_436_int; // 0x69a Eq
	if(var_437_bool == 0) goto Label_1694; // 0x69b JumpB
	var_432_string = "bullet"; // 0x69c MovS
	return 0; // 0x69d Return
	
Label_1694:
	var_432_string = "phys"; // 0x69e MovS
	return 0; // 0x69f Return
}


func_919(var_0_object, var_353_bool, var_354_float)
{
	var_355_int = 0; var_356_bool = 0; var_357_int = 0; var_358_string = ""; var_359_int = 0; var_360_bool = 0; var_361_int = 0; var_362_string = ""; // 0x397 PushV
	func_1258(var_362_string); // 0x399 NEW_2
	irand(var_359_int, var_362_string); // 0x39b Func
	var_363_int = 1; // 0x39d PushI
	var_359_int = var_359_int + var_363_int; // 0x39e Add2
	Face(var_0_object); // 0x39f Func
	var_364_bool = 1; // 0x3a1 PushB
	SetAttackState(var_364_bool); // 0x3a2 Func
	func_2250(); // 0x3a5 NEW_2
	var_369_string = "all"; // 0x3a7 PushS
	var_370_string = "attack_begin"; // 0x3a8 PushS
	var_371_int = var_370_string + var_359_int; // 0x3a9 Add
	PlayAnimation(var_369_string, var_371_int); // 0x3aa Func
	WaitForAnimEnd(); // 0x3ac Func
	func_1226(var_361_int, var_362_string); // 0x3af NEW_2
	var_387_bool = 0; var_388_object = Obj(); // 0x3b1 PushV
	var_388_object = var_0_object; // 0x3b2 MovT
	func_1842(var_387_bool, var_388_object); // 0x3b3 NEW_2
	var_389_bool = var_387_bool == 0; // 0x3b5 Not
	if(var_389_bool == 0) goto Label_955; // 0x3b6 JumpB
	StopAsync(); // 0x3b7 Func
	var_353_bool = 0; // 0x3b9 MovB
	return 8; // 0x3ba Return
	
Label_955:
	var_390_float = 0; var_391_int = 0; // 0x3bb PushV
	var_390_float = var_354_float; // 0x3bc Mov
	var_391_int = var_359_int; // 0x3bd Mov
	func_880(var_362_string, var_390_float, var_391_int); // 0x3be NEW_2
	var_472_string = "all"; // 0x3c0 PushS
	var_473_string = "attack_middle"; // 0x3c1 PushS
	var_474_int = var_473_string + var_359_int; // 0x3c2 Add
	HasAnimation(var_360_bool, var_472_string, var_474_int); // 0x3c3 Func
	var_475_bool = var_360_bool; // 0x3c5 Push
	if(var_475_bool == 0) goto Label_1036; // 0x3c6 JumpB
	func_2250(); // 0x3c8 NEW_2
	var_476_string = "all"; // 0x3ca PushS
	var_477_string = "attack_middle"; // 0x3cb PushS
	var_478_int = var_477_string + var_359_int; // 0x3cc Add
	PlayAnimation(var_476_string, var_478_int); // 0x3cd Func
	WaitForAnimEnd(); // 0x3cf Func
	func_1258(var_362_string); // 0x3d2 NEW_2
	var_479_bool = 0; var_480_object = Obj(); // 0x3d4 PushV
	var_480_object = var_0_object; // 0x3d5 MovT
	func_1842(var_479_bool, var_480_object); // 0x3d6 NEW_2
	var_481_bool = var_479_bool == 0; // 0x3d8 Not
	if(var_481_bool == 0) goto Label_990; // 0x3d9 JumpB
	StopAsync(); // 0x3da Func
	var_353_bool = 0; // 0x3dc MovB
	return 8; // 0x3dd Return
	
Label_990:
	var_482_float = 0; var_483_int = 0; // 0x3de PushV
	var_482_float = var_354_float; // 0x3df Mov
	var_483_int = var_359_int; // 0x3e0 Mov
	func_880(var_362_string, var_482_float, var_483_int); // 0x3e1 NEW_2
	var_361_int = 1; // 0x3e3 MovI
	
Label_996:
	var_484_string = "attack_middle"; // 0x3e4 PushS
	var_485_int = var_484_string + var_359_int; // 0x3e5 Add
	var_486_string = "_"; // 0x3e6 PushS
	var_487_int = var_485_int + var_486_string; // 0x3e7 Add
	var_362_string = var_487_int + var_361_int; // 0x3e8 Add2
	var_488_string = "all"; // 0x3e9 PushS
	HasAnimation(var_360_bool, var_488_string, var_362_string); // 0x3ea Func
	var_489_bool = var_360_bool == 0; // 0x3ec Not
	if(var_489_bool == 0) goto Label_1007; // 0x3ed JumpB
	goto Label_1036; // 0x3ee Jump
	
Label_1036:
	var_490_bool = 0; // 0x40c PushB
	SetAttackState(var_490_bool); // 0x40d Func
	var_491_string = "all"; // 0x40f PushS
	var_492_string = "attack_end"; // 0x410 PushS
	var_493_int = var_492_string + var_359_int; // 0x411 Add
	PlayAnimation(var_491_string, var_493_int); // 0x412 Func
	var_494_bool = 0; // 0x414 PushV
	func_1272(var_494_bool); // 0x415 NEW_2
	if(var_494_bool == 0) goto Label_1054; // 0x417 JumpB
	var_495_bool = 0; var_496_float = 0; // 0x418 PushV
	var_496_float = 0.75; // 0x419 MovF
	func_1056(var_495_bool, var_496_float); // 0x41a NEW_2
	StopAsync(); // 0x41c Func
	
Label_1054:
	var_353_bool = 1; // 0x41e MovB
	return 8; // 0x41f Return
	
Label_1007:
	func_2250(); // 0x3f0 NEW_2
	var_504_string = "all"; // 0x3f2 PushS
	PlayAnimation(var_504_string, var_362_string); // 0x3f3 Func
	WaitForAnimEnd(); // 0x3f5 Func
	func_1258(var_362_string); // 0x3f8 NEW_2
	var_505_bool = 0; var_506_object = Obj(); // 0x3fa PushV
	var_506_object = var_0_object; // 0x3fb MovT
	func_1842(var_505_bool, var_506_object); // 0x3fc NEW_2
	var_507_bool = var_505_bool == 0; // 0x3fe Not
	if(var_507_bool == 0) goto Label_1028; // 0x3ff JumpB
	StopAsync(); // 0x400 Func
	var_353_bool = 0; // 0x402 MovB
	return 8; // 0x403 Return
	
Label_1028:
	var_508_float = 0; var_509_int = 0; // 0x404 PushV
	var_508_float = var_354_float; // 0x405 Mov
	var_509_int = var_359_int; // 0x406 Mov
	func_880(var_362_string, var_508_float, var_509_int); // 0x407 NEW_2
	var_510_int = 1; // 0x409 PushI
	var_361_int = var_361_int + var_510_int; // 0x40a Add2
	goto Label_996; // 0x40b Jump
}


func_2201(var_442_float, var_443_float, var_444_float)
{
	var_447_bool = var_443_float < var_444_float; // 0x89a LT
	if(var_447_bool == 0) goto Label_2206; // 0x89b JumpB
	var_442_float = var_443_float; // 0x89c Mov
	goto Label_2207; // 0x89d Jump
	
Label_2207:
	return 0; // 0x89f Return
	
Label_2206:
	var_442_float = var_444_float; // 0x89e Mov
}


func_2457(var_26_int)
{
	var_27_int = 0; var_28_int = 0; // 0x999 PushV
	var_29_string = "branch"; // 0x99a PushS
	GetVariable(var_29_string, var_28_int); // 0x99b Func
	var_26_int = var_28_int; // 0x99d Mov
	return 2; // 0x99e Return
}


func_2463(var_23_object)
{
	var_24_int = 0; // 0x9a0 PushV
	func_2457(var_24_int); // 0x9a1 NEW_2
	var_28_int = 1; // 0x9a3 PushI
	var_29_bool = var_24_int == var_28_int; // 0x9a4 Eq
	if(var_29_bool == 0) goto Label_2473; // 0x9a5 JumpB
	WorkWithCorpse(var_23_object); // 0x9a6 Func
	goto Label_2475; // 0x9a8 Jump
	
Label_2475:
	return 0; // 0x9ab Return
	
Label_2473:
	Barter(var_23_object); // 0x9a9 Func
}


func_1696(var_53_cvector)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x6a0 PushV
	GetPosition(var_57_cvector); // 0x6a1 Func
	GetPosition(var_58_cvector); // 0x6a3 ObjFunc
	var_53_cvector = var_58_cvector - var_57_cvector; // 0x6a5 Sub2
	return 4; // 0x6a6 Return
}


func_2208(var_452_float, var_453_float, var_454_float, var_455_float)
{
	var_456_bool = var_453_float < var_454_float; // 0x8a1 LT
	if(var_456_bool == 0) goto Label_2213; // 0x8a2 JumpB
	var_452_float = var_454_float; // 0x8a3 Mov
	return 0; // 0x8a4 Return
	
Label_2213:
	var_457_bool = var_453_float > var_455_float; // 0x8a5 GT
	if(var_457_bool == 0) goto Label_2217; // 0x8a6 JumpB
	var_452_float = var_455_float; // 0x8a7 Mov
	return 0; // 0x8a8 Return
	
Label_2217:
	var_452_float = var_453_float; // 0x8a9 Mov
	return 0; // 0x8aa Return
}


func_1703(var_26_float)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x6a7 PushV
	GetPosition(var_31_cvector); // 0x6a8 Func
	GetPosition(var_32_cvector); // 0x6aa ObjFunc
	var_33_cvector = var_32_cvector - var_31_cvector; // 0x6ac Sub2
	var_26_float = var_33_cvector | var_33_cvector; // 0x6ad Or2
	return 6; // 0x6ae Return
}


func_2219(var_460_float)
{
	var_461_object = Obj(); var_462_object = Obj(); // 0x8ab PushV
	CreateFloatVector(var_462_object); // 0x8ac Func
	add(var_460_float); // 0x8ae ObjFunc
	var_463_int = 0; // 0x8b0 PushI
	var_464_bool = var_460_float < var_463_int; // 0x8b1 LT
	if(var_464_bool == 0) goto Label_2231; // 0x8b2 JumpB
	var_465_float = 0.7; // 0x8b3 PushF
	var_466_int = 500; // 0x8b4 PushI
	RumblePlay(var_465_float, var_466_int); // 0x8b5 Func
	
Label_2231:
	var_467_int = 15; // 0x8b7 PushI
	SendWorldWndMessage(var_467_int, var_462_object); // 0x8b8 Func
	return 2; // 0x8ba Return
}


func_2476(var_32_string)
{
	var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; // 0x9ac PushV
	CreateInvItem(var_36_object); // 0x9ad Func
	SetItemName(var_32_string); // 0x9af ObjFunc
	var_39_string = "Organ"; // 0x9b1 PushS
	var_40_int = 1; // 0x9b2 PushI
	SetProperty(var_39_string, var_40_int); // 0x9b3 ObjFunc
	GetItemID(var_37_int); // 0x9b5 ObjFunc
	var_41_int = 0; // 0x9b7 PushI
	var_42_int = 1; // 0x9b8 PushI
	AddItem(var_38_bool, var_36_object, var_41_int, var_42_int); // 0x9b9 Func
	return 6; // 0x9bb Return
}


func_1711(var_159_bool, var_160_object)
{
	var_161_bool = 0; var_162_bool = 0; // 0x6af PushV
	IsPlayerActor(var_160_object, var_162_bool); // 0x6b0 Func
	var_159_bool = var_162_bool; // 0x6b2 Mov
	return 2; // 0x6b3 Return
}


func_433(var_0_object, var_1_object, var_2_object, var_3_string, var_18_bool, var_20_float, var_21_float)
{
	var_22_bool = 0; // 0x1b2 PushV
	func_2003(var_22_bool); // 0x1b3 NEW_2
	var_25_bool = var_22_bool == 0; // 0x1b5 Not
	if(var_25_bool == 0) goto Label_440; // 0x1b6 JumpB
	return 0; // 0x1b7 Return
	
Label_440:
	var_26_string = "player"; // 0x1b8 PushS
	FindActor(var_18_bool, var_26_string); // 0x1b9 Func
	var_2_object = 0; // 0x1bb TMovB
	var_3_string = 0; // 0x1bc TMovB
	var_0_object = var_20_float; // 0x1bd TMov
	var_1_object = var_21_float; // 0x1be TMov
	var_27_int = 10; // 0x1bf PushI
	var_28_float = 1.0; // 0x1c0 PushF
	SetTimer(var_27_int, var_28_float); // 0x1c1 Func
	func_512(); // 0x1c4 NEW_2
	var_80_bool = var_3_string == 0; // 0x1c6 Not
	if(var_80_bool == 0) goto Label_459; // 0x1c7 JumpB
	var_81_int = 10; // 0x1c8 PushI
	KillTimer(var_81_int); // 0x1c9 Func
	
Label_459:
	return 0; // 0x1cb Return
}


func_1716(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0; // 0x6b4 PushV
	var_59_string = "HasProperty"; // 0x6b5 PushS
	var_60_int = 2; // 0x6b6 PushI
	var_61_bool = IsFuncExist(var_55_object, var_59_string, var_60_int); // 0x6b7 FuncExist
	var_62_bool = var_61_bool == 0; // 0x6b8 Not
	if(var_62_bool == 0) goto Label_1724; // 0x6b9 JumpB
	var_54_bool = 0; // 0x6ba MovB
	return 2; // 0x6bb Return
	
Label_1724:
	HasProperty(var_56_string, var_58_bool); // 0x6bc ObjFunc
	var_54_bool = var_58_bool; // 0x6be Mov
	return 2; // 0x6bf Return
}


func_1978(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x7ba PushV
	GetScene(var_32_object); // 0x7bb Func
	var_34_string = "scripted"; // 0x7bd PushS
	var_35_string = "blood_dir.xml"; // 0x7be PushS
	AddActorByType(var_33_object, var_34_string, var_32_object, var_28_cvector, var_29_cvector, var_35_string); // 0x7bf Func
	var_36_object = Obj(); // 0x7c1 PushV
	var_36_object = var_25_object; // 0x7c2 Mov
	func_1866(var_36_object); // 0x7c3 NEW_2
	return 4; // 0x7c5 Return
}


func_2236(var_40_float)
{
	var_41_float = 0; var_42_float = 0; // 0x8bc PushV
	GetGameTime(var_42_float); // 0x8bd Func
	var_40_float = var_42_float; // 0x8bf Mov
	return 2; // 0x8c0 Return
}


func_2493()
{
	var_26_int = 0; // 0x9bd PushV
	func_2457(var_26_int); // 0x9be NEW_2
	var_30_int = 1; // 0x9c0 PushI
	var_31_bool = var_26_int != var_30_int; // 0x9c1 Neq
	if(var_31_bool == 0) goto Label_2500; // 0x9c2 JumpB
	return 0; // 0x9c3 Return
	
Label_2500:
	var_32_string = ""; // 0x9c4 PushV
	var_32_string = "liver"; // 0x9c5 MovS
	func_2476(var_32_string); // 0x9c6 NEW_2
	var_43_string = ""; // 0x9c8 PushV
	var_43_string = "kidney"; // 0x9c9 MovS
	func_2476(var_43_string); // 0x9ca NEW_2
	var_44_string = ""; // 0x9cc PushV
	var_44_string = "heart"; // 0x9cd MovS
	func_2476(var_44_string); // 0x9ce NEW_2
	var_45_string = ""; // 0x9d0 PushV
	var_45_string = "blood"; // 0x9d1 MovS
	func_2476(var_45_string); // 0x9d2 NEW_2
	return 0; // 0x9d4 Return
}


func_1215(var_0_object, var_255_bool)
{
	var_256_bool = 0; var_257_bool = 0; // 0x4bf PushV
	var_258_string = "IsAttacking"; // 0x4c0 PushS
	var_259_int = 1; // 0x4c1 PushI
	var_260_bool = IsFuncExist(var_0_object, var_258_string, var_259_int); // 0x4c2 FuncExist
	if(var_260_bool == 0) goto Label_1224; // 0x4c3 JumpB
	IsAttacking(var_257_bool); // 0x4c4 TObjFunc
	var_255_bool = var_257_bool; // 0x4c6 Mov
	return 2; // 0x4c7 Return
	
Label_1224:
	var_255_bool = 0; // 0x4c8 MovB
	return 2; // 0x4c9 Return
}


func_1728(var_404_float, var_405_object, var_406_float, var_407_int)
{
	var_411_int = 0; var_412_string = ""; var_413_int = 0; var_414_float = 0; var_415_float = 0; var_416_float = 0; var_417_int = 0; var_418_string = ""; var_419_int = 0; var_420_float = 0; var_421_float = 0; var_422_float = 0; // 0x6c0 PushV
	var_423_bool = 0; var_424_object = Obj(); var_425_string = ""; // 0x6c1 PushV
	var_424_object = var_405_object; // 0x6c2 Mov
	var_425_string = "health"; // 0x6c3 MovS
	func_1716(var_423_bool, var_424_object, var_425_string); // 0x6c4 NEW_2
	var_426_bool = var_423_bool == 0; // 0x6c6 Not
	if(var_426_bool == 0) goto Label_1738; // 0x6c7 JumpB
	var_404_float = 0.0; // 0x6c8 MovF
	return 12; // 0x6c9 Return
	
Label_1738:
	var_427_bool = 0; var_428_object = Obj(); var_429_string = ""; // 0x6ca PushV
	var_428_object = var_405_object; // 0x6cb Mov
	var_429_string = "armor"; // 0x6cc MovS
	func_1716(var_427_bool, var_428_object, var_429_string); // 0x6cd NEW_2
	var_430_bool = var_427_bool == 0; // 0x6cf Not
	if(var_430_bool == 0) goto Label_1747; // 0x6d0 JumpB
	var_417_int = 0; // 0x6d1 MovI
	goto Label_1750; // 0x6d2 Jump
	
Label_1750:
	var_431_string = "armor_"; // 0x6d6 PushS
	var_432_string = ""; var_433_int = 0; // 0x6d7 PushV
	var_433_int = var_407_int; // 0x6d8 Mov
	func_1682(var_432_string, var_433_int); // 0x6d9 NEW_2
	var_418_string = var_431_string + var_432_string; // 0x6db Add2
	var_438_bool = 0; var_439_object = Obj(); var_440_string = ""; // 0x6dc PushV
	var_439_object = var_405_object; // 0x6dd Mov
	var_440_string = var_418_string; // 0x6de Mov
	func_1716(var_438_bool, var_439_object, var_440_string); // 0x6df NEW_2
	var_441_bool = var_438_bool == 0; // 0x6e1 Not
	if(var_441_bool == 0) goto Label_1765; // 0x6e2 JumpB
	var_419_int = 0; // 0x6e3 MovI
	goto Label_1767; // 0x6e4 Jump
	
Label_1767:
	var_442_float = 0; var_443_float = 0; var_444_float = 0; // 0x6e7 PushV
	var_445_int = var_417_int + var_419_int; // 0x6e8 Add
	var_446_float = 100.0; // 0x6e9 PushF
	var_443_float = var_445_int / var_445_int; // 0x6ea Div2
	var_444_float = 1; // 0x6eb MovI
	func_2201(var_442_float, var_443_float, var_444_float); // 0x6ec NEW_2
	var_420_float = var_442_float; // 0x6ed Mov
	var_448_string = "health"; // 0x6ef PushS
	GetProperty(var_448_string, var_421_float); // 0x6f0 ObjFunc
	var_449_int = 1; // 0x6f2 PushI
	var_450_int = var_449_int - var_420_float; // 0x6f3 Sub
	var_422_float = var_406_float * var_450_int; // 0x6f4 Mult2
	var_451_string = "health"; // 0x6f5 PushS
	var_452_float = 0; var_453_float = 0; var_454_float = 0; var_455_float = 0; // 0x6f6 PushV
	var_453_float = var_421_float - var_422_float; // 0x6f7 Sub2
	var_454_float = 0; // 0x6f8 MovI
	var_455_float = 1; // 0x6f9 MovI
	func_2208(var_452_float, var_453_float, var_454_float, var_455_float); // 0x6fa NEW_2
	SetProperty(var_451_string, var_452_float); // 0x6fc ObjFunc
	var_458_bool = 0; var_459_object = Obj(); // 0x6fe PushV
	var_459_object = var_405_object; // 0x6ff Mov
	func_1711(var_458_bool, var_459_object); // 0x700 NEW_2
	if(var_458_bool == 0) goto Label_1799; // 0x702 JumpB
	var_460_float = 0; // 0x703 PushV
	var_460_float = -var_422_float; // 0x704 Neg2
	func_2219(var_460_float); // 0x705 NEW_2
	
Label_1799:
	var_404_float = var_422_float; // 0x707 Mov
	return 12; // 0x708 Return
	
Label_1765:
	GetProperty(var_418_string, var_419_int); // 0x6e5 ObjFunc
	
Label_1747:
	var_468_string = "armor"; // 0x6d3 PushS
	GetProperty(var_468_string, var_417_int); // 0x6d4 ObjFunc
}


func_2241(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x8c1 PushV
	IsPlayerActor(var_22_object, var_24_bool); // 0x8c2 Func
	var_25_bool = var_24_bool; // 0x8c4 Push
	if(var_25_bool == 0) goto Label_2249; // 0x8c5 JumpB
	var_26_string = "attack"; // 0x8c6 PushS
	PlayGlobalMusic(var_26_string); // 0x8c7 Func
	
Label_2249:
	return 2; // 0x8c9 Return
}


func_1992()
{
	var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); // 0x7c8 PushV
	GetPosition(var_242_cvector); // 0x7c9 ObjFunc
	GetPosition(var_243_cvector); // 0x7cb Func
	var_244_cvector = var_242_cvector - var_243_cvector; // 0x7cd Sub2
	var_245_float = GetByIndex(var_244_cvector, 0); // 0x7ce PushE
	var_246_float = GetByIndex(var_244_cvector, 2); // 0x7cf PushE
	RotateAsync(var_245_float, var_246_float); // 0x7d0 Func
	return 6; // 0x7d2 Return
}


func_2250()
{
	var_365_object = Obj(); var_366_object = Obj(); // 0x8ca PushV
	GetScene(var_366_object); // 0x8cb Func
	var_367_string = "battle"; // 0x8cd PushS
	var_368_object = Obj(); // 0x8ce PushV
	func_2185(var_368_object); // 0x8cf NEW_2
	BroadcastMessage(var_367_string, var_368_object, var_366_object); // 0x8d1 Func
	return 2; // 0x8d3 Return
}


func_1226(var_2_object, var_5_int)
{
	var_372_float = 0; var_373_int = 0; var_374_float = 0; var_375_int = 0; // 0x4ca PushV
	var_376_bool = var_2_object == 0; // 0x4cb Not
	if(var_376_bool == 0) goto Label_1230; // 0x4cc JumpB
	return 4; // 0x4cd Return
	
Label_1230:
	var_377_int = var_5_int; // 0x4ce PushT
	if(var_377_int == 0) goto Label_1238; // 0x4cf JumpB
	var_378_int = -1; // 0x4d0 PushI
	var_5_int = var_5_int + var_378_int; // 0x4d1 Add2
	var_379_int = 0; // 0x4d2 PushI
	var_380_bool = var_5_int > var_379_int; // 0x4d3 GT
	if(var_380_bool == 0) goto Label_1238; // 0x4d4 JumpB
	return 4; // 0x4d5 Return
	
Label_1238:
	rand(var_374_float); // 0x4d6 Func
	var_381_float = 0; // 0x4d8 PushV
	func_1276(var_381_float); // 0x4d9 NEW_2
	var_382_bool = var_374_float < var_381_float; // 0x4db LT
	if(var_382_bool == 0) goto Label_1257; // 0x4dc JumpB
	irand(var_375_int, var_374_float); // 0x4dd Func
	var_383_int = 1; // 0x4df PushI
	var_375_int = var_375_int + var_383_int; // 0x4e0 Add2
	var_384_string = "attack"; // 0x4e1 PushS
	var_385_int = var_384_string + var_375_int; // 0x4e2 Add
	Speak(var_385_int); // 0x4e3 Func
	var_386_int = 0; // 0x4e5 PushV
	func_1274(var_386_int); // 0x4e6 NEW_2
	var_5_int = var_386_int; // 0x4e7 TMov
	
Label_1257:
	return 4; // 0x4e9 Return
}


func_460(var_0_object, var_1_object, var_4_bool, var_22_bool)
{
	var_23_float = 0; var_24_float = 0; // 0x1cc PushV
	var_25_bool = var_4_bool == 0; // 0x1cd NullEq
	if(var_25_bool == 0) goto Label_465; // 0x1ce JumpB
	var_22_bool = 0; // 0x1cf MovB
	return 2; // 0x1d0 Return
	
Label_465:
	var_26_float = 0; var_27_object = Obj(); // 0x1d1 PushV
	var_27_object = var_4_bool; // 0x1d2 MovT
	func_1703(var_27_object); // 0x1d3 NEW_2
	var_24_float = sqrt(var_26_float); // 0x1d5 Sqrt2
	var_34_object = var_2_object; // 0x1d6 PushT
	if(var_34_object == 0) goto Label_473; // 0x1d7 JumpB
	var_24_float = var_24_float - var_1_object; // 0x1d8 Sub2
	
Label_473:
	var_22_bool = var_24_float < var_0_object; // 0x1d9 LT2
	return 2; // 0x1da Return
}


func_1485(var_0_object, var_1_object, var_27_int)
{
	var_28_int = 0; // 0x5ce PushI
	var_29_bool = var_27_int != var_28_int; // 0x5cf Neq
	if(var_29_bool == 0) goto Label_1490; // 0x5d0 JumpB
	return 0; // 0x5d1 Return
	
Label_1490:
	var_30_bool = 0; var_31_object = Obj(); // 0x5d2 PushV
	var_31_object = var_1_object; // 0x5d3 MovT
	func_1523(var_30_bool, var_31_object); // 0x5d4 NEW_2
	var_66_bool = var_30_bool == 0; // 0x5d6 Not
	if(var_66_bool == 0) goto Label_1497; // 0x5d7 JumpB
	var_0_object = 1; // 0x5d8 TMovB
	
Label_1497:
	var_67_int = 0; // 0x5d9 PushI
	KillTimer(var_67_int); // 0x5da Func
	Stop(); // 0x5dc Func
	return 0; // 0x5de Return
}


func_2003(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x7d3 PushV
	IsLoaded(var_24_bool); // 0x7d4 Func
	var_22_bool = var_24_bool; // 0x7d6 Mov
	return 2; // 0x7d7 Return
}


func_2261(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = ""; // 0x8d5 PushV
	var_54_string = "idle"; // 0x8d6 MovS
	var_55_int = var_52_int; // 0x8d7 Push
	if(var_55_int == 0) goto Label_2266; // 0x8d8 JumpB
	var_54_string = var_54_string + var_52_int; // 0x8d9 Add2
	
Label_2266:
	var_51_string = var_54_string; // 0x8da Mov
	return 2; // 0x8db Return
}


func_2517(var_591_int)
{
	var_591_int = 515572; // 0x9d5 MovI
	return 0; // 0x9d6 Return
}


func_2519(var_590_int)
{
	var_590_int = 504031; // 0x9d7 MovI
	return 0; // 0x9d8 Return
}


func_2008(var_542_bool, var_544_float)
{
	var_545_float = 0; var_546_cvector = CVector(0,0,0); var_547_cvector = CVector(0,0,0); var_548_cvector = CVector(0,0,0); var_549_cvector = CVector(0,0,0); var_550_cvector = CVector(0,0,0); var_551_cvector = CVector(0,0,0); var_552_bool = 0; var_553_bool = 0; var_554_float = 0; var_555_cvector = CVector(0,0,0); var_556_cvector = CVector(0,0,0); var_557_cvector = CVector(0,0,0); var_558_cvector = CVector(0,0,0); var_559_cvector = CVector(0,0,0); var_560_cvector = CVector(0,0,0); var_561_bool = 0; var_562_bool = 0; // 0x7d8 PushV
	GetPosition(var_555_cvector); // 0x7d9 ObjFunc
	GetEyesHeight(var_554_float); // 0x7db ObjFunc
	var_563_float = GetByIndex(var_555_cvector, 1); // 0x7dd PushE
	var_563_float = var_563_float + var_554_float; // 0x7de Add2
	SetByIndex(var_555_cvector, 1) = var_563_float; // 0x7df PopE
	GetPosition(var_556_cvector); // 0x7e0 Func
	GetEyesHeight(var_554_float); // 0x7e2 Func
	var_564_float = GetByIndex(var_556_cvector, 1); // 0x7e4 PushE
	var_564_float = var_564_float + var_554_float; // 0x7e5 Add2
	SetByIndex(var_556_cvector, 1) = var_564_float; // 0x7e6 PopE
	var_557_cvector = var_555_cvector - var_556_cvector; // 0x7e7 Sub2
	var_565_float = GetByIndex(var_557_cvector, 1); // 0x7e8 PushE
	var_565_float = 0; // 0x7e9 MovI
	SetByIndex(var_557_cvector, 1) = var_565_float; // 0x7ea PopE
	var_566_int = var_557_cvector | var_557_cvector; // 0x7eb Or
	var_567_float = sqrt(var_566_int); // 0x7ec Sqrt
	var_557_cvector = var_557_cvector / var_557_cvector; // 0x7ed Div2
	var_558_cvector = -var_557_cvector; // 0x7ee Neg2
	var_568_float = var_557_cvector * var_544_float; // 0x7ef Mult
	var_569_cvector = CVector(0,0,0); var_570_cvector = CVector(0,0,0); // 0x7f0 PushV
	var_571_cvector = CVector(0.0, 1.0, 0.0); // 0x7f1 PushVec
	var_570_cvector = var_558_cvector ^ var_571_cvector; // 0x7f2 Xor2
	func_2191(var_569_cvector, var_570_cvector); // 0x7f3 NEW_2
	var_577_int = 25; // 0x7f5 PushI
	var_578_float = var_569_cvector * var_577_int; // 0x7f6 Mult
	var_579_int = var_568_float + var_578_float; // 0x7f7 Add
	var_580_cvector = CVector(0.0, 10.0, 0.0); // 0x7f8 PushVec
	var_559_cvector = var_579_int - var_580_cvector; // 0x7f9 Sub2
	var_560_cvector = var_556_cvector + var_559_cvector; // 0x7fa Add2
	IsOverrideActive(var_561_bool); // 0x7fb Func
	var_581_bool = var_561_bool; // 0x7fd Push
	if(var_581_bool == 0) goto Label_2049; // 0x7fe JumpB
	var_542_bool = 0; // 0x7ff MovB
	return 18; // 0x800 Return
	
Label_2049:
	StopWorld(); // 0x801 Func
	var_582_bool = 1; // 0x803 PushB
	CameraTransit(var_560_cvector, var_558_cvector, var_582_bool); // 0x804 Func
	var_583_float = GetByIndex(var_559_cvector, 0); // 0x806 PushE
	var_584_float = GetByIndex(var_559_cvector, 2); // 0x807 PushE
	Rotate(var_583_float, var_584_float); // 0x808 Func
	var_585_bool = 0; // 0x80a PushV
	func_2525(var_585_bool); // 0x80b NEW_2
	if(var_585_bool == 0) goto Label_2063; // 0x80d JumpB
	goto Label_2071; // 0x80e Jump
	
Label_2071:
	CameraWaitForPlayFinish(); // 0x817 Func
	ResumeWorld(); // 0x819 Func
	var_542_bool = 1; // 0x81b MovB
	return 18; // 0x81c Return
	
Label_2063:
	var_586_string = "head"; // 0x80f PushS
	HasAnimationTrack(var_562_bool, var_586_string); // 0x810 Func
	var_587_bool = var_562_bool; // 0x812 Push
	if(var_587_bool == 0) goto Label_2071; // 0x813 JumpB
	var_588_string = "head"; // 0x814 PushS
	LookAsyncCamera(var_588_string); // 0x815 Func
}


func_2521(var_592_string)
{
	var_592_string = "ui/NPC_Citizen2.png"; // 0x9d9 MovS
	return 0; // 0x9da Return
}


func_2523(var_593_string)
{
	var_593_string = "ui/NPC_Citizen2_b.png"; // 0x9db MovS
	return 0; // 0x9dc Return
}


func_2268(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x8dc PushV
	var_48_int = 0; // 0x8dd MovI
	
Label_2270:
	var_50_string = "all"; // 0x8de PushS
	var_51_string = ""; var_52_int = 0; // 0x8df PushV
	var_52_int = var_48_int; // 0x8e0 Mov
	func_2261(var_51_string, var_52_int); // 0x8e1 NEW_2
	HasAnimation(var_49_bool, var_50_string, var_51_string); // 0x8e3 Func
	var_56_bool = var_49_bool == 0; // 0x8e5 Not
	if(var_56_bool == 0) goto Label_2280; // 0x8e6 JumpB
	goto Label_2283; // 0x8e7 Jump
	
Label_2283:
	var_45_int = var_48_int; // 0x8eb Mov
	return 4; // 0x8ec Return
	
Label_2280:
	var_57_int = 1; // 0x8e8 PushI
	var_48_int = var_48_int + var_57_int; // 0x8e9 Add2
	goto Label_2270; // 0x8ea Jump
}


func_2525(var_585_bool)
{
	var_585_bool = 0; // 0x9dd MovB
	return 0; // 0x9de Return
}


func_2527(var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x9df PushV
	var_24_string = "b1q05ToAttack"; // 0x9e0 PushS
	GetVariable(var_24_string, var_23_int); // 0x9e1 Func
	var_25_int = 0; // 0x9e3 PushI
	var_21_bool = var_23_int != var_25_int; // 0x9e4 Neq2
	return 2; // 0x9e5 Return
}


func_1507(var_0_object)
{
	var_0_object = 1; // 0x5e3 TMovB
	var_23_int = 0; // 0x5e4 PushI
	KillTimer(var_23_int); // 0x5e5 Func
	Stop(); // 0x5e7 Func
	return 0; // 0x5e9 Return
}


func_2534()
{
	var_23_string = "b1q05ToAttack"; // 0x9e6 PushS
	var_24_int = 1; // 0x9e7 PushI
	SetVariable(var_23_string, var_24_int); // 0x9e8 Func
	return 0; // 0x9ea Return
}


func_1258(var_0_object)
{
	var_128_object = Obj(); // 0x4ea PushV
	var_128_object = var_0_object; // 0x4eb MovT
	func_2241(var_128_object); // 0x4ec NEW_2
	return 0; // 0x4ee Return
}


func_2539(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x9eb PushV
	GetScene(var_22_object); // 0x9ec Func
	var_23_object = Obj(); // 0x9ee PushV
	func_2185(var_23_object); // 0x9ef NEW_2
	RemoveStationaryActor(var_23_object); // 0x9f1 ObjFunc
	func_2493(); // 0x9f4 NEW_2
	var_46_object = Obj(); // 0x9f6 PushV
	var_46_object = var_20_object; // 0x9f7 Mov
	TaskCall(5); // 0x9f8 TaskCall
	func_1534(var_46_object); // 0x9f9 NEW_2
	TaskReturn(); // 0x9fa TaskReturn
	return 2; // 0x9fc Return
}


func_2285()
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x8ed PushV
	var_29_object = Obj(); // 0x8ee PushV
	func_2390(var_29_object); // 0x8ef NEW_2
	var_28_object = var_29_object; // 0x8f0 Mov
	var_36_string = "b1q05PatrolGroup"; // 0x8f2 PushS
	var_37_string = "pt_b1q05_patrol1"; // 0x8f3 PushS
	var_38_int = 0; // 0x8f4 PushI
	var_39_int = 530956; // 0x8f5 PushI
	var_40_float = 0; // 0x8f6 PushV
	func_2236(var_40_float); // 0x8f7 NEW_2
	AddMark(var_36_string, var_37_string, var_38_int, var_39_int, var_40_float); // 0x8f9 ObjFunc
	func_2323(); // 0x8fc NEW_2
	func_2336(); // 0x8ff NEW_2
	return 2; // 0x901 Return
}


func_1263(var_469_int)
{
	var_469_int = 0; // 0x4ef MovI
	return 0; // 0x4f0 Return
}


func_1265()
{
	var_261_string = ""; // 0x4f1 PushV
	var_261_string = "attack_stay"; // 0x4f2 MovS
	func_2144(var_261_string); // 0x4f3 NEW_2
	return 0; // 0x4f5 Return
}


func_498(var_2_object, var_3_string)
{
	func_593(); // 0x1f3 NEW_2
	var_20_int = 10; // 0x1f5 PushI
	KillTimer(var_20_int); // 0x1f6 Func
	var_21_object = var_2_object; // 0x1f8 PushT
	if(var_21_object == 0) goto Label_510; // 0x1f9 JumpB
	var_22_string = "head"; // 0x1fa PushS
	UnlookAsync(var_22_string); // 0x1fb Func
	var_2_object = 0; // 0x1fd TMovB
	
Label_510:
	var_3_string = 1; // 0x1fe TMovB
	return 0; // 0x1ff Return
}


func_1523(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj(); // 0x5f4 PushV
	var_33_object = var_31_object; // 0x5f5 Mov
	func_1842(var_32_bool, var_33_object); // 0x5f6 NEW_2
	var_30_bool = var_32_bool; // 0x5f7 Mov
	return 0; // 0x5f9 Return
}


func_1270()
{
	return 0; // 0x4f7 Return
}


func_1272(var_494_bool)
{
	var_494_bool = 1; // 0x4f8 MovB
	return 0; // 0x4f9 Return
}


func_1274(var_386_int)
{
	var_386_int = 1; // 0x4fa MovI
	return 0; // 0x4fb Return
}


func_1276(var_381_float)
{
	var_381_float = 0.5; // 0x4fc MovF
	return 0; // 0x4fd Return
}


func_1278(var_2_object, var_135_bool, var_136_object, var_137_float, var_138_float, var_139_bool, var_140_bool)
{
	var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; var_147_bool = 0; // 0x4fe PushV
	var_148_object = Obj(); // 0x4ff PushV
	var_148_object = var_136_object; // 0x500 Mov
	func_2241(var_148_object); // 0x501 NEW_2
	var_149_int = 1; // 0x503 PushI
	var_150_int = 5; // 0x504 PushI
	SetTimer(var_149_int, var_150_int); // 0x505 Func
	CanSee(var_146_bool, var_136_object); // 0x507 Func
	var_151_bool = var_146_bool; // 0x509 Push
	if(var_151_bool == 0) goto Label_1297; // 0x50a JumpB
	var_2_object = 1; // 0x50b TMovB
	var_152_object = Obj(); // 0x50c PushV
	var_152_object = var_136_object; // 0x50d Mov
	func_2126(var_152_object); // 0x50e NEW_2
	goto Label_1298; // 0x510 Jump
	
Label_1298:
	var_159_bool = 0; var_160_object = Obj(); // 0x512 PushV
	var_160_object = var_136_object; // 0x513 Mov
	func_1711(var_159_bool, var_160_object); // 0x514 NEW_2
	if(var_159_bool == 0) goto Label_1308; // 0x516 JumpB
	var_163_object = Obj(); // 0x517 PushV
	func_2185(var_163_object); // 0x518 NEW_2
	SendPlayerEnemy(var_136_object, var_163_object); // 0x51a Func
	
Label_1308:
	var_164_bool = 0; var_165_object = Obj(); var_166_float = 0; var_167_float = 0; var_168_bool = 0; var_169_bool = 0; // 0x51c PushV
	var_165_object = var_136_object; // 0x51d Mov
	var_166_float = var_137_float; // 0x51e Mov
	var_167_float = var_138_float; // 0x51f Mov
	var_168_bool = var_139_bool; // 0x520 Mov
	var_169_bool = var_140_bool; // 0x521 Mov
	func_1383(var_146_bool, var_147_bool, var_164_bool, var_165_object, var_166_float, var_167_float, var_168_bool, var_169_bool); // 0x522 NEW_2
	var_147_bool = var_164_bool; // 0x523 Mov
	var_215_object = var_2_object; // 0x525 PushT
	if(var_215_object == 0) goto Label_1322; // 0x526 JumpB
	var_216_string = "head"; // 0x527 PushS
	UnlookAsync(var_216_string); // 0x528 Func
	
Label_1322:
	var_217_int = 1; // 0x52a PushI
	KillTimer(var_217_int); // 0x52b Func
	var_135_bool = var_147_bool; // 0x52d Mov
	return 4; // 0x52e Return
	
Label_1297:
	var_2_object = 0; // 0x511 TMovB
}


