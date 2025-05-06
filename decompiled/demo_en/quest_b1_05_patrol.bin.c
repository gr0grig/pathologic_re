task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 1; // 0x9b PushI
	if(var_21_int == 0) goto Label_306; // 0x9c JumpB
	func_2110(); // 0x9e NEW_2
	var_23_int = 32276; // 0xa0 PushI
	var_24_bool = var_20_bool == var_23_int; // 0xa1 Eq
	if(var_24_bool == 0) goto Label_173; // 0xa2 JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0xa3 PushV
	var_25_object = var_1_object; // 0xa4 MovT
	var_26_object = var_0_object; // 0xa5 MovT
	func_2251(); // 0xa6 NEW_2
	var_74_object = Obj(); var_75_object = Obj(); // 0xa8 PushV
	var_74_object = var_1_object; // 0xa9 MovT
	var_75_object = var_0_object; // 0xaa MovT
	func_2273(); // 0xab NEW_2
	
Label_173:
	var_100_int = 32277; // 0xad PushI
	var_101_bool = var_20_bool == var_100_int; // 0xae Eq
	if(var_101_bool == 0) goto Label_186; // 0xaf JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0xb0 PushV
	var_102_object = var_1_object; // 0xb1 MovT
	var_103_object = var_0_object; // 0xb2 MovT
	func_2251(); // 0xb3 NEW_2
	var_104_object = Obj(); var_105_object = Obj(); // 0xb5 PushV
	var_104_object = var_1_object; // 0xb6 MovT
	var_105_object = var_0_object; // 0xb7 MovT
	func_2273(); // 0xb8 NEW_2
	
Label_186:
	var_106_int = 32269; // 0xba PushI
	var_107_bool = var_19_object == var_106_int; // 0xbb Eq
	if(var_107_bool == 0) goto Label_209; // 0xbc JumpB
	var_108_string = ""; // 0xbd PushV
	var_108_string = "Neutral"; // 0xbe MovS
	func_132(var_20_bool, var_108_string); // 0xbf NEW_2
	var_125_int = 530942; // 0xc1 PushI
	SetMessage(var_125_int); // 0xc2 TObjFunc
	ClearReplies(); // 0xc4 TObjFunc
	var_126_int = 530962; // 0xc6 PushI
	var_127_int = 32271; // 0xc7 PushI
	var_128_int = 32281; // 0xc8 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xc9 TObjFunc
	var_129_int = 530959; // 0xcb PushI
	var_130_int = -1; // 0xcc PushI
	var_131_int = 32278; // 0xcd PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xce TObjFunc
	return 0; // 0xd0 Return
	
Label_209:
	var_132_int = 32280; // 0xd1 PushI
	var_133_bool = var_19_object == var_132_int; // 0xd2 Eq
	if(var_133_bool == 0) goto Label_212; // 0xd3 JumpB
	
Label_212:
	var_134_int = 32271; // 0xd4 PushI
	var_135_bool = var_19_object == var_134_int; // 0xd5 Eq
	if(var_135_bool == 0) goto Label_235; // 0xd6 JumpB
	var_136_string = ""; // 0xd7 PushV
	var_136_string = "Neutral"; // 0xd8 MovS
	func_132(var_20_bool, var_136_string); // 0xd9 NEW_2
	var_137_int = 530944; // 0xdb PushI
	SetMessage(var_137_int); // 0xdc TObjFunc
	ClearReplies(); // 0xde TObjFunc
	var_138_int = 530965; // 0xe0 PushI
	var_139_int = 32273; // 0xe1 PushI
	var_140_int = 32285; // 0xe2 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0xe3 TObjFunc
	var_141_int = 530963; // 0xe5 PushI
	var_142_int = 32284; // 0xe6 PushI
	var_143_int = 32283; // 0xe7 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_144_int = 32284; // 0xeb PushI
	var_145_bool = var_19_object == var_144_int; // 0xec Eq
	if(var_145_bool == 0) goto Label_253; // 0xed JumpB
	var_146_string = ""; // 0xee PushV
	var_146_string = "Neutral"; // 0xef MovS
	func_132(var_20_bool, var_146_string); // 0xf0 NEW_2
	var_147_int = 530964; // 0xf2 PushI
	SetMessage(var_147_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_148_int = 530945; // 0xf7 PushI
	var_149_int = 32273; // 0xf8 PushI
	var_150_int = 32272; // 0xf9 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0xfa TObjFunc
	return 0; // 0xfc Return
	
Label_253:
	var_151_int = 32273; // 0xfd PushI
	var_152_bool = var_19_object == var_151_int; // 0xfe Eq
	if(var_152_bool == 0) goto Label_271; // 0xff JumpB
	var_153_string = ""; // 0x100 PushV
	var_153_string = "Neutral"; // 0x101 MovS
	func_132(var_20_bool, var_153_string); // 0x102 NEW_2
	var_154_int = 530946; // 0x104 PushI
	SetMessage(var_154_int); // 0x105 TObjFunc
	ClearReplies(); // 0x107 TObjFunc
	var_155_int = 530947; // 0x109 PushI
	var_156_int = 32275; // 0x10a PushI
	var_157_int = 32274; // 0x10b PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x10c TObjFunc
	return 0; // 0x10e Return
	
Label_271:
	var_158_int = 32275; // 0x10f PushI
	var_159_bool = var_19_object == var_158_int; // 0x110 Eq
	if(var_159_bool == 0) goto Label_294; // 0x111 JumpB
	var_160_string = ""; // 0x112 PushV
	var_160_string = "Neutral"; // 0x113 MovS
	func_132(var_20_bool, var_160_string); // 0x114 NEW_2
	var_161_int = 530948; // 0x116 PushI
	SetMessage(var_161_int); // 0x117 TObjFunc
	ClearReplies(); // 0x119 TObjFunc
	var_162_int = 530949; // 0x11b PushI
	var_163_int = -1; // 0x11c PushI
	var_164_int = 32276; // 0x11d PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x11e TObjFunc
	var_165_int = 530950; // 0x120 PushI
	var_166_int = -1; // 0x121 PushI
	var_167_int = 32277; // 0x122 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x123 TObjFunc
	return 0; // 0x125 Return
	
Label_294:
	var_3_string = 1; // 0x126 TMovB
	var_168_bool = 0; // 0x127 PushV
	func_2491(var_168_bool); // 0x128 NEW_2
	if(var_168_bool == 0) goto Label_302; // 0x12a JumpB
	lshStopAnimation(); // 0x12b Func
	goto Label_304; // 0x12d Jump
	
Label_304:
	return 0; // 0x130 Return
	
Label_302:
	StopAnimation(); // 0x12e Func
	
Label_306:
	return 0; // 0x132 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_473(var_18_object, var_19_bool); // 0x13e NEW_2
	var_23_bool = 0; // 0x140 PushV
	func_2493(var_23_bool); // 0x141 NEW_2
	if(var_23_bool == 0) goto Label_330; // 0x143 JumpB
	var_28_object = Obj(); // 0x144 PushV
	var_28_object = var_19_bool; // 0x145 Mov
	TaskCall(3); // 0x146 TaskCall
	func_573(var_28_object); // 0x147 NEW_2
	TaskReturn(); // 0x148 TaskReturn
	
Label_330:
	var_527_int = 0; var_528_object = Obj(); // 0x14a PushV
	var_528_object = var_19_bool; // 0x14b Mov
	TaskCall(0); // 0x14c TaskCall
	func_0(var_529_object, var_527_int, var_528_object); // 0x14d NEW_2
	TaskReturn(); // 0x14e TaskReturn
	func_2500(); // 0x151 NEW_2
	var_657_object = Obj(); // 0x153 PushV
	var_657_object = var_19_bool; // 0x154 Mov
	TaskCall(3); // 0x155 TaskCall
	func_573(var_657_object); // 0x156 NEW_2
	TaskReturn(); // 0x157 TaskReturn
	return 0; // 0x159 Return
}


task_2_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; // 0x15b PushV
	var_20_bool = 0; // 0x15c MovB
	var_21_bool = 0; // 0x15d PushV
	func_2493(var_21_bool); // 0x15e NEW_2
	if(var_21_bool == 0) goto Label_359; // 0x160 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x161 PushV
	var_27_object = var_19_bool; // 0x162 Mov
	func_1686(var_26_bool, var_27_object); // 0x163 NEW_2
	if(var_26_bool == 0) goto Label_359; // 0x165 JumpB
	var_20_bool = 1; // 0x166 MovB
	
Label_359:
	if(var_20_bool == 0) goto Label_369; // 0x167 JumpB
	func_473(var_18_object, var_19_bool); // 0x169 NEW_2
	var_33_object = Obj(); // 0x16b PushV
	var_33_object = var_19_bool; // 0x16c Mov
	TaskCall(3); // 0x16d TaskCall
	func_573(var_33_object); // 0x16e NEW_2
	TaskReturn(); // 0x16f TaskReturn
	
Label_369:
	return 0; // 0x171 Return
}


task_2_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; // 0x173 PushV
	var_20_bool = 0; // 0x174 MovB
	var_21_bool = 0; // 0x175 PushV
	func_2493(var_21_bool); // 0x176 NEW_2
	if(var_21_bool == 0) goto Label_383; // 0x178 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x179 PushV
	var_27_object = var_19_bool; // 0x17a Mov
	func_1686(var_26_bool, var_27_object); // 0x17b NEW_2
	if(var_26_bool == 0) goto Label_383; // 0x17d JumpB
	var_20_bool = 1; // 0x17e MovB
	
Label_383:
	if(var_20_bool == 0) goto Label_393; // 0x17f JumpB
	func_473(var_18_object, var_19_bool); // 0x181 NEW_2
	var_33_object = Obj(); // 0x183 PushV
	var_33_object = var_19_bool; // 0x184 Mov
	TaskCall(3); // 0x185 TaskCall
	func_573(var_33_object); // 0x186 NEW_2
	TaskReturn(); // 0x187 TaskReturn
	
Label_393:
	return 0; // 0x189 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_473(var_18_object, var_19_bool); // 0x18c NEW_2
	func_2500(); // 0x18f NEW_2
	var_25_object = Obj(); // 0x191 PushV
	var_25_object = var_19_bool; // 0x192 Mov
	TaskCall(3); // 0x193 TaskCall
	func_573(var_25_object); // 0x194 NEW_2
	TaskReturn(); // 0x195 TaskReturn
	return 0; // 0x197 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 10; // 0x1c3 PushI
	var_21_bool = var_19_bool == var_20_int; // 0x1c4 Eq
	if(var_21_bool == 0) goto Label_472; // 0x1c5 JumpB
	var_22_bool = 0; // 0x1c6 PushV
	func_435(var_17_bool, var_18_object, var_19_bool, var_22_bool); // 0x1c7 NEW_2
	if(var_22_bool == 0) goto Label_466; // 0x1c9 JumpB
	var_35_bool = var_2_object == 0; // 0x1ca Not
	if(var_35_bool == 0) goto Label_465; // 0x1cb JumpB
	var_36_object = Obj(); // 0x1cc PushV
	var_36_object = var_4_bool; // 0x1cd MovT
	func_2099(var_36_object); // 0x1ce NEW_2
	var_2_object = 1; // 0x1d0 TMovB
	
Label_465:
	goto Label_472; // 0x1d1 Jump
	
Label_472:
	return 0; // 0x1d8 Return
	
Label_466:
	var_43_object = var_2_object; // 0x1d2 PushT
	if(var_43_object == 0) goto Label_472; // 0x1d3 JumpB
	var_44_string = "head"; // 0x1d4 PushS
	UnlookAsync(var_44_string); // 0x1d5 Func
	var_2_object = 0; // 0x1d7 TMovB
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_20_int = 1; // 0x517 PushI
	var_21_bool = var_19_int == var_20_int; // 0x518 Eq
	if(var_21_bool == 0) goto Label_1311; // 0x519 JumpB
	var_22_object = Obj(); // 0x51a PushV
	var_22_object = var_1_object; // 0x51b MovT
	func_2207(var_22_object); // 0x51c NEW_2
	goto Label_1315; // 0x51e Jump
	
Label_1315:
	return 0; // 0x523 Return
	
Label_1311:
	var_27_int = 0; // 0x51f PushV
	var_27_int = var_19_int; // 0x520 Mov
	func_1460(var_18_bool, var_19_int, var_27_int); // 0x521 NEW_2
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0x532 PushV
	var_20_bool = 0; // 0x533 MovB
	var_21_bool = var_1_object == var_19_object; // 0x534 Eq
	if(var_21_bool == 0) goto Label_1337; // 0x535 JumpB
	var_22_bool = var_2_object == 0; // 0x536 Not
	if(var_22_bool == 0) goto Label_1337; // 0x537 JumpB
	var_20_bool = 1; // 0x538 MovB
	
Label_1337:
	if(var_20_bool == 0) goto Label_1343; // 0x539 JumpB
	var_2_object = 1; // 0x53a TMovB
	var_23_object = Obj(); // 0x53b PushV
	var_23_object = var_19_object; // 0x53c Mov
	func_2099(var_23_object); // 0x53d NEW_2
	
Label_1343:
	return 0; // 0x53f Return
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0x541 PushV
	var_20_bool = 0; // 0x542 MovB
	var_21_bool = var_1_object == var_19_object; // 0x543 Eq
	if(var_21_bool == 0) goto Label_1352; // 0x544 JumpB
	var_22_object = var_2_object; // 0x545 PushT
	if(var_22_object == 0) goto Label_1352; // 0x546 JumpB
	var_20_bool = 1; // 0x547 MovB
	
Label_1352:
	if(var_20_bool == 0) goto Label_1357; // 0x548 JumpB
	var_2_object = 0; // 0x549 TMovB
	var_23_string = "head"; // 0x54a PushS
	UnlookAsync(var_23_string); // 0x54b Func
	
Label_1357:
	return 0; // 0x54d Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	RequestClearPath(var_19_object); // 0x5c7 Func
	return 0; // 0x5c9 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	func_1316(var_19_object); // 0x5d3 NEW_2
	var_24_object = Obj(); // 0x5d5 PushV
	var_24_object = var_19_object; // 0x5d6 Mov
	func_2555(); // 0x5d7 NEW_2
	return 0; // 0x5d9 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x5f4 PushV
	IsOverrideActive(var_21_bool); // 0x5f5 Func
	var_22_bool = var_21_bool == 0; // 0x5f7 Not
	if(var_22_bool == 0) goto Label_1533; // 0x5f8 JumpB
	var_23_object = Obj(); // 0x5f9 PushV
	var_23_object = var_19_object; // 0x5fa Mov
	func_2429(var_23_object); // 0x5fb NEW_2
	
Label_1533:
	return 2; // 0x5fd Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	return 0; // 0x674 Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	return 0; // 0x676 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	return 0; // 0x678 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; // 0x9dd PushV
	var_23_object = var_19_object; // 0x9de Mov
	var_24_int = var_20_int; // 0x9df Mov
	var_25_float = var_21_float; // 0x9e0 Mov
	func_1885(var_23_object, var_24_int, var_25_float); // 0x9e1 NEW_2
	return 0; // 0x9e3 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x9e5 PushV
	var_25_object = var_19_object; // 0x9e6 Mov
	var_26_int = var_20_int; // 0x9e7 Mov
	var_27_float = var_21_float; // 0x9e8 Mov
	var_28_cvector = var_23_cvector; // 0x9e9 Mov
	var_29_cvector = var_24_cvector; // 0x9ea Mov
	func_1953(var_27_float, var_28_cvector, var_29_cvector); // 0x9eb NEW_2
	return 0; // 0x9ed Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	var_21_float = 0; var_22_float = 0; // 0x9ee PushV
	var_23_string = "health"; // 0x9ef PushS
	var_24_bool = var_20_string == var_23_string; // 0x9f0 Eq
	if(var_24_bool == 0) goto Label_2554; // 0x9f1 JumpB
	var_25_string = "health"; // 0x9f2 PushS
	GetProperty(var_25_string, var_22_float); // 0x9f3 Func
	var_26_int = 0; // 0x9f5 PushI
	var_27_bool = var_22_float <= var_26_int; // 0x9f6 LE
	if(var_27_bool == 0) goto Label_2554; // 0x9f7 JumpB
	SignalDeath(var_19_object); // 0x9f8 Func
	
Label_2554:
	return 2; // 0x9fa Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_object = Obj(); // 0x9fc PushV
	var_20_object = var_19_object; // 0x9fd Mov
	func_2505(var_20_object); // 0x9fe NEW_2
	return 0; // 0xa00 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	
Label_307:
	var_19_bool = 1; // 0x133 PushB
	if(var_19_bool == 0) goto Label_315; // 0x134 JumpB
	var_20_float = 0; var_21_float = 0; // 0x135 PushV
	var_20_float = 300; // 0x136 MovI
	var_21_float = 100; // 0x137 MovI
	func_408(var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_20_float, var_21_float); // 0x138 NEW_2
	goto Label_307; // 0x13a Jump
	
Label_315:
	return 0; // 0x13b Return
}


func_0(var_0_object, var_527_int, var_528_object)
{
	var_530_object = Obj(); var_531_bool = 0; var_532_int = 0; var_533_bool = 0; var_534_object = Obj(); var_535_bool = 0; var_536_int = 0; var_537_bool = 0; // 0x0 PushV
	var_0_object = var_528_object; // 0x1 TMov
	var_538_bool = 0; var_539_object = Obj(); var_540_float = 0; // 0x2 PushV
	var_539_object = var_528_object; // 0x3 Mov
	var_540_float = 70.0; // 0x4 MovF
	func_1983(var_539_object, var_540_float); // 0x5 NEW_2
	var_584_bool = var_538_bool == 0; // 0x7 Not
	if(var_584_bool == 0) goto Label_11; // 0x8 JumpB
	var_527_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_534_object); // 0xb Func
	var_585_int = 0; // 0xd PushV
	func_2485(var_585_int); // 0xe NEW_2
	SetNPCName(var_585_int); // 0x10 ObjFunc
	var_586_int = 0; // 0x12 PushV
	func_2483(var_586_int); // 0x13 NEW_2
	SetNPCDescription(var_586_int); // 0x15 ObjFunc
	var_587_string = ""; // 0x17 PushV
	func_2487(var_587_string); // 0x18 NEW_2
	SetPhoto(var_587_string); // 0x1a ObjFunc
	var_588_string = ""; // 0x1c PushV
	func_2489(var_588_string); // 0x1d NEW_2
	SetPhoto2(var_588_string); // 0x1f ObjFunc
	var_589_int = 0; // 0x21 PushV
	func_2406(var_589_int); // 0x22 NEW_2
	SetPlayerName(var_589_int); // 0x24 ObjFunc
	var_536_int = -1; // 0x26 MovI
	IsOverrideActive(var_535_bool); // 0x27 Func
	var_597_bool = var_535_bool; // 0x29 Push
	if(var_597_bool == 0) goto Label_45; // 0x2a JumpB
	var_527_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_534_object); // 0x2d Func
	var_598_object = Obj(); var_599_object = Obj(); // 0x2f PushV
	var_598_object = var_528_object; // 0x30 Mov
	var_599_object = var_534_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_600_object, var_601_object, var_602_string, var_603_bool, var_598_object, var_599_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_537_bool); // 0x36 ObjFunc
	
Label_56:
	var_647_bool = var_537_bool == 0; // 0x38 Not
	if(var_647_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_537_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_648_object = Obj(); // 0x3f PushV
	var_648_object = var_528_object; // 0x40 Mov
	func_2051(); // 0x41 NEW_2
	StopDialog(var_534_object); // 0x43 Func
	GetReturnValue(var_536_int); // 0x45 ObjFunc
	var_527_int = var_536_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_2051()
{
	var_649_bool = 0; var_650_bool = 0; // 0x803 PushV
	CameraSwitchToNormal(); // 0x804 Func
	var_651_bool = 0; // 0x806 PushV
	func_2491(var_651_bool); // 0x807 NEW_2
	if(var_651_bool == 0) goto Label_2059; // 0x809 JumpB
	goto Label_2067; // 0x80a Jump
	
Label_2067:
	return 2; // 0x813 Return
	
Label_2059:
	var_652_string = "head"; // 0x80b PushS
	HasAnimationTrack(var_650_bool, var_652_string); // 0x80c Func
	var_653_bool = var_650_bool; // 0x80e Push
	if(var_653_bool == 0) goto Label_2067; // 0x80f JumpB
	var_654_string = "head"; // 0x810 PushS
	UnlookAsync(var_654_string); // 0x811 Func
}


func_1031(var_491_bool, var_492_float)
{
	var_493_float = 0; var_494_bool = 0; var_495_float = 0; var_496_bool = 0; // 0x407 PushV
	rand(var_495_float); // 0x408 Func
	var_497_bool = var_495_float < var_492_float; // 0x40a LT
	if(var_497_bool == 0) goto Label_1051; // 0x40b JumpB
	
Label_1036:
	IsAnimationPlaying(var_496_bool); // 0x40c Func
	var_498_bool = var_496_bool == 0; // 0x40e Not
	if(var_498_bool == 0) goto Label_1041; // 0x40f JumpB
	goto Label_1050; // 0x410 Jump
	
Label_1050:
	goto Label_1056; // 0x41a Jump
	
Label_1056:
	var_491_bool = 0; // 0x420 MovB
	return 4; // 0x421 Return
	
Label_1041:
	var_499_bool = 0; // 0x411 PushV
	func_1129(var_499_bool); // 0x412 NEW_2
	if(var_499_bool == 0) goto Label_1047; // 0x414 JumpB
	var_491_bool = 1; // 0x415 MovB
	return 4; // 0x416 Return
	
Label_1047:
	sync(); // 0x417 Func
	goto Label_1036; // 0x419 Jump
	
Label_1051:
	WaitForAnimEnd(); // 0x41b Func
	func_1233(var_496_bool); // 0x41e NEW_2
}


func_2315(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x90b PushV
	GetDiaryRoot(var_59_object); // 0x90c Func
	var_60_bool = var_59_object == 0; // 0x90e Not
	if(var_60_bool == 0) goto Label_2325; // 0x90f JumpB
	var_61_string = "Can't retrieve diary root"; // 0x910 PushS
	Trace(var_61_string); // 0x911 Func
	var_57_object = 0; // 0x913 MovB
	return 2; // 0x914 Return
	
Label_2325:
	var_57_object = var_59_object; // 0x915 Mov
	return 2; // 0x916 Return
}


func_2068(var_631_string)
{
	var_632_bool = 0; var_633_float = 0; var_634_float = 0; var_635_bool = 0; var_636_float = 0; var_637_float = 0; // 0x814 PushV
	lshHasAnimation(var_635_bool, var_631_string); // 0x815 Func
	var_638_bool = var_635_bool; // 0x817 Push
	if(var_638_bool == 0) goto Label_2079; // 0x818 JumpB
	lshGetAnimTimes(var_631_string, var_636_float, var_637_float); // 0x819 Func
	var_639_bool = 0; // 0x81b PushB
	lshPlayAnimation(var_636_float, var_637_float, var_639_bool); // 0x81c Func
	goto Label_2083; // 0x81e Jump
	
Label_2083:
	return 6; // 0x823 Return
	
Label_2079:
	var_640_string = "Can't find lsh animation : "; // 0x81f PushS
	var_641_int = var_640_string + var_631_string; // 0x820 Add
	Trace(var_641_int); // 0x821 Func
}


func_2328(var_48_bool, var_49_object, var_50_int)
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; // 0x918 PushV
	var_57_object = Obj(); // 0x919 PushV
	func_2315(var_57_object); // 0x91a NEW_2
	var_54_object = var_57_object; // 0x91b Mov
	Find(var_50_int, var_55_object); // 0x91d ObjFunc
	var_62_bool = var_55_object == 0; // 0x91f Not
	if(var_62_bool == 0) goto Label_2343; // 0x920 JumpB
	var_63_string = "Can't find diary parent with id: "; // 0x921 PushS
	var_64_int = var_63_string + var_50_int; // 0x922 Add
	Trace(var_64_int); // 0x923 Func
	var_48_bool = 0; // 0x925 MovB
	return 6; // 0x926 Return
	
Label_2343:
	AddChild(var_49_object); // 0x927 ObjFunc
	var_65_int = 7; // 0x929 PushI
	SendWorldWndMessage(var_65_int); // 0x92a Func
	GetCategory(var_56_int); // 0x92c ObjFunc
	SetDiarySection(var_56_int); // 0x92e Func
	var_48_bool = 0; // 0x930 MovB
	return 6; // 0x931 Return
}


func_1817(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0; // 0x719 PushV
	var_36_bool = 0; var_37_object = Obj(); // 0x71a PushV
	var_37_object = var_33_object; // 0x71b Mov
	func_1781(var_36_bool, var_37_object); // 0x71c NEW_2
	var_53_bool = var_36_bool == 0; // 0x71e Not
	if(var_53_bool == 0) goto Label_1826; // 0x71f JumpB
	var_32_bool = 0; // 0x720 MovB
	return 2; // 0x721 Return
	
Label_1826:
	var_54_bool = 0; var_55_object = Obj(); var_56_string = ""; // 0x722 PushV
	var_55_object = var_33_object; // 0x723 Mov
	var_56_string = "noaccess"; // 0x724 MovS
	func_1691(var_54_bool, var_55_object, var_56_string); // 0x725 NEW_2
	var_63_bool = var_54_bool == 0; // 0x727 Not
	if(var_63_bool == 0) goto Label_1835; // 0x728 JumpB
	var_32_bool = 1; // 0x729 MovB
	return 2; // 0x72a Return
	
Label_1835:
	var_64_string = "noaccess"; // 0x72b PushS
	GetProperty(var_64_string, var_35_int); // 0x72c ObjFunc
	var_65_int = 0; // 0x72e PushI
	var_32_bool = var_35_int == var_65_int; // 0x72f Eq2
	return 2; // 0x730 Return
}


func_1058(var_0_object, var_292_bool, var_293_float)
{
	var_294_bool = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; var_299_bool = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; // 0x422 PushV
	
Label_1059:
	IsAnimationPlaying(var_299_bool); // 0x423 Func
	var_304_bool = var_299_bool == 0; // 0x425 Not
	if(var_304_bool == 0) goto Label_1064; // 0x426 JumpB
	goto Label_1096; // 0x427 Jump
	
Label_1096:
	func_1233(var_303_float); // 0x449 NEW_2
	var_292_bool = 0; // 0x44b MovB
	return 10; // 0x44c Return
	
Label_1064:
	var_305_bool = 0; // 0x428 PushV
	func_1129(var_305_bool); // 0x429 NEW_2
	if(var_305_bool == 0) goto Label_1070; // 0x42b JumpB
	var_292_bool = 1; // 0x42c MovB
	return 10; // 0x42d Return
	
Label_1070:
	var_348_bool = 0; var_349_object = Obj(); // 0x42e PushV
	var_349_object = var_0_object; // 0x42f MovT
	func_1817(var_348_bool, var_349_object); // 0x430 NEW_2
	var_350_bool = var_348_bool == 0; // 0x432 Not
	if(var_350_bool == 0) goto Label_1078; // 0x433 JumpB
	var_292_bool = 0; // 0x434 MovB
	return 10; // 0x435 Return
	
Label_1078:
	GetPFPosition(var_300_cvector); // 0x436 TObjFunc
	GetPFPosition(var_301_cvector); // 0x438 Func
	var_302_cvector = var_300_cvector - var_301_cvector; // 0x43a Sub2
	var_303_float = var_302_cvector | var_302_cvector; // 0x43b Or2
	var_351_float = var_293_float * var_293_float; // 0x43c Mult
	var_352_bool = var_303_float < var_351_float; // 0x43d LT
	if(var_352_bool == 0) goto Label_1093; // 0x43e JumpB
	var_353_bool = 0; var_354_float = 0; // 0x43f PushV
	var_354_float = var_293_float; // 0x440 Mov
	func_894(var_303_float, var_353_bool, var_354_float); // 0x441 NEW_2
	var_292_bool = 1; // 0x443 MovB
	return 10; // 0x444 Return
	
Label_1093:
	sync(); // 0x445 Func
	goto Label_1059; // 0x447 Jump
}


func_2084(var_609_string, var_610_bool)
{
	var_613_bool = 0; var_614_float = 0; var_615_float = 0; var_616_bool = 0; var_617_float = 0; var_618_float = 0; // 0x824 PushV
	lshHasAnimation(var_616_bool, var_609_string); // 0x825 Func
	var_619_bool = var_616_bool; // 0x827 Push
	if(var_619_bool == 0) goto Label_2094; // 0x828 JumpB
	lshGetAnimTimes(var_609_string, var_617_float, var_618_float); // 0x829 Func
	lshPlayAnimation(var_617_float, var_618_float, var_610_bool); // 0x82b Func
	goto Label_2098; // 0x82d Jump
	
Label_2098:
	return 6; // 0x832 Return
	
Label_2094:
	var_620_string = "Can't find lsh animation : "; // 0x82e PushS
	var_621_int = var_620_string + var_609_string; // 0x82f Add
	Trace(var_621_int); // 0x830 Func
}


func_1316(var_2_object)
{
	var_20_int = 1; // 0x524 PushI
	KillTimer(var_20_int); // 0x525 Func
	var_21_object = var_2_object; // 0x527 PushT
	if(var_21_object == 0) goto Label_1325; // 0x528 JumpB
	var_2_object = 0; // 0x529 TMovB
	var_22_string = "head"; // 0x52a PushS
	UnlookAsync(var_22_string); // 0x52b Func
	
Label_1325:
	func_1482(var_19_object); // 0x52e NEW_2
	return 0; // 0x530 Return
}


func_1534(var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = ""; var_53_object = Obj(); var_54_bool = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_string = ""; var_63_object = Obj(); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); // 0x5fe PushV
	var_68_bool = var_47_object == 0; // 0x5ff NullEq
	if(var_68_bool == 0) goto Label_1542; // 0x600 JumpB
	var_69_string = ""; // 0x601 PushV
	var_69_string = "fdie"; // 0x602 MovS
	func_1625(var_69_string); // 0x603 NEW_2
	goto Label_1624; // 0x605 Jump
	
Label_1624:
	return 20; // 0x658 Return
	
Label_1542:
	GetPosition(var_58_cvector); // 0x606 ObjFunc
	GetPosition(var_59_cvector); // 0x608 Func
	GetDirection(var_60_cvector); // 0x60a Func
	var_61_cvector = var_59_cvector - var_58_cvector; // 0x60c Sub2
	var_101_float = GetByIndex(var_61_cvector, 0); // 0x60d PushE
	var_102_float = GetByIndex(var_60_cvector, 0); // 0x60e PushE
	var_103_float = var_101_float * var_102_float; // 0x60f Mult
	var_104_float = GetByIndex(var_61_cvector, 2); // 0x610 PushE
	var_105_float = GetByIndex(var_60_cvector, 2); // 0x611 PushE
	var_106_float = var_104_float * var_105_float; // 0x612 Mult
	var_107_int = var_103_float + var_106_float; // 0x613 Add
	var_108_int = 0; // 0x614 PushI
	var_109_bool = var_107_int >= var_108_int; // 0x615 GE
	if(var_109_bool == 0) goto Label_1561; // 0x616 JumpB
	var_62_string = "fdie"; // 0x617 MovS
	goto Label_1562; // 0x618 Jump
	
Label_1562:
	RemoveRTEnvelope(); // 0x61a Func
	SetDeathState(); // 0x61c Func
	Stop(); // 0x61e Func
	StopAsync(); // 0x620 Func
	var_63_object = var_47_object; // 0x622 Mov
	var_110_string = "GetScriptProperty"; // 0x623 PushS
	var_111_int = 2; // 0x624 PushI
	var_112_bool = IsFuncExist(var_47_object, var_110_string, var_111_int); // 0x625 FuncExist
	if(var_112_bool == 0) goto Label_1586; // 0x626 JumpB
	var_113_string = "Owner"; // 0x627 PushS
	HasScriptProperty(var_64_bool, var_113_string); // 0x628 ObjFunc
	var_114_bool = var_64_bool; // 0x62a Push
	if(var_114_bool == 0) goto Label_1586; // 0x62b JumpB
	var_115_string = "Owner"; // 0x62c PushS
	GetScriptProperty(var_63_object, var_115_string); // 0x62d ObjFunc
	var_116_bool = var_63_object == 0; // 0x62f NullEq
	if(var_116_bool == 0) goto Label_1586; // 0x630 JumpB
	var_63_object = var_47_object; // 0x631 Mov
	
Label_1586:
	var_117_string = "@GetEyesHeight"; // 0x632 PushS
	var_118_int = 1; // 0x633 PushI
	var_119_bool = IsFuncExist(var_63_object, var_117_string, var_118_int); // 0x634 FuncExist
	if(var_119_bool == 0) goto Label_1601; // 0x635 JumpB
	GetEyesHeight(var_66_float); // 0x636 ObjFunc
	var_67_cvector = CVector(0.0, 0.0, 0.0); // 0x638 MovV
	var_120_float = GetByIndex(var_67_cvector, 1); // 0x639 PushE
	var_120_float = var_66_float; // 0x63a Mov
	SetByIndex(var_67_cvector, 1) = var_120_float; // 0x63b PopE
	var_121_string = "head"; // 0x63c PushS
	LookAsync(var_47_object, var_121_string, var_67_cvector); // 0x63d Func
	var_65_bool = 1; // 0x63f MovB
	goto Label_1602; // 0x640 Jump
	
Label_1602:
	var_122_string = ""; // 0x642 PushV
	var_122_string = var_62_string; // 0x643 Mov
	func_2117(var_122_string); // 0x644 NEW_2
	var_123_string = "all"; // 0x646 PushS
	PlayAnimation(var_123_string, var_62_string); // 0x647 Func
	WaitForAnimEnd(); // 0x649 Func
	var_124_bool = var_65_bool; // 0x64b Push
	if(var_124_bool == 0) goto Label_1618; // 0x64c JumpB
	StopAsync(); // 0x64d Func
	var_125_string = "head"; // 0x64f PushS
	UnlookAsync(var_125_string); // 0x650 Func
	
Label_1618:
	var_126_string = "all"; // 0x652 PushS
	LockAnimationEnd(var_126_string, var_62_string); // 0x653 Func
	RemoveEnvelope(); // 0x655 Func
	var_63_object = 0; // 0x657 SetNull
	
Label_1601:
	var_65_bool = 0; // 0x641 MovB
	
Label_1561:
	var_62_string = "bdie"; // 0x619 MovS
}


func_1841(var_36_object)
{
	var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_bool = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_string = ""; // 0x731 PushV
	var_51_bool = var_36_object == 0; // 0x732 NullEq
	if(var_51_bool == 0) goto Label_1845; // 0x733 JumpB
	return 14; // 0x734 Return
	
Label_1845:
	IsDead(var_44_bool); // 0x735 Func
	var_52_bool = var_44_bool; // 0x737 Push
	if(var_52_bool == 0) goto Label_1850; // 0x738 JumpB
	return 14; // 0x739 Return
	
Label_1850:
	GetSecondaryAnimationType(var_45_int); // 0x73a Func
	var_53_int = 0; // 0x73c PushI
	var_54_bool = var_45_int < var_53_int; // 0x73d LT
	if(var_54_bool == 0) goto Label_1856; // 0x73e JumpB
	return 14; // 0x73f Return
	
Label_1856:
	GetPosition(var_46_cvector); // 0x740 ObjFunc
	GetPosition(var_47_cvector); // 0x742 Func
	GetDirection(var_48_cvector); // 0x744 Func
	var_49_cvector = var_47_cvector - var_46_cvector; // 0x746 Sub2
	var_55_float = GetByIndex(var_49_cvector, 0); // 0x747 PushE
	var_56_float = GetByIndex(var_48_cvector, 0); // 0x748 PushE
	var_57_float = var_55_float * var_56_float; // 0x749 Mult
	var_58_float = GetByIndex(var_49_cvector, 2); // 0x74a PushE
	var_59_float = GetByIndex(var_48_cvector, 2); // 0x74b PushE
	var_60_float = var_58_float * var_59_float; // 0x74c Mult
	var_61_int = var_57_float + var_60_float; // 0x74d Add
	var_62_int = 0; // 0x74e PushI
	var_63_bool = var_61_int >= var_62_int; // 0x74f GE
	if(var_63_bool == 0) goto Label_1875; // 0x750 JumpB
	var_50_string = "fhit"; // 0x751 MovS
	goto Label_1876; // 0x752 Jump
	
Label_1876:
	var_64_string = "hit_react"; // 0x754 PushS
	var_65_string = "1"; // 0x755 PushS
	var_66_int = var_50_string + var_65_string; // 0x756 Add
	var_67_string = "2"; // 0x757 PushS
	var_68_int = var_50_string + var_67_string; // 0x758 Add
	var_69_int = -10; // 0x759 PushI
	FadeSecondaryAnimation(var_64_string, var_66_int, var_68_int, var_69_int); // 0x75a Func
	return 14; // 0x75c Return
	
Label_1875:
	var_50_string = "bhit"; // 0x753 MovS
}


func_2099(var_23_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); // 0x833 PushV
	GetEyesHeight(var_26_float); // 0x834 ObjFunc
	var_27_cvector = CVector(0.0, 0.0, 0.0); // 0x836 MovV
	var_28_float = GetByIndex(var_27_cvector, 1); // 0x837 PushE
	var_28_float = var_26_float; // 0x838 Mov
	SetByIndex(var_27_cvector, 1) = var_28_float; // 0x839 PopE
	var_29_string = "head"; // 0x83a PushS
	LookAsync(var_23_object, var_29_string, var_27_cvector); // 0x83b Func
	return 4; // 0x83d Return
}


func_820(var_1_object, var_2_object, var_4_bool)
{
	var_57_bool = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_bool = 0; var_61_bool = 0; var_62_cvector = CVector(0,0,0); // 0x334 PushV
	var_1_object = 0; // 0x335 TMovI
	
Label_822:
	var_63_string = "all"; // 0x336 PushS
	var_64_string = "attack_begin"; // 0x337 PushS
	var_65_int = 1; // 0x338 PushI
	var_66_int = var_1_object + var_65_int; // 0x339 Add
	var_67_int = var_64_string + var_66_int; // 0x33a Add
	HasAnimation(var_60_bool, var_63_string, var_67_int); // 0x33b Func
	var_68_bool = var_60_bool == 0; // 0x33d Not
	if(var_68_bool == 0) goto Label_832; // 0x33e JumpB
	goto Label_835; // 0x33f Jump
	
Label_835:
	var_2_object = 0; // 0x343 TMovI
	
Label_836:
	var_69_string = "attack"; // 0x344 PushS
	var_70_int = 1; // 0x345 PushI
	var_71_int = var_2_object + var_70_int; // 0x346 Add
	var_72_int = var_69_string + var_71_int; // 0x347 Add
	IsExisting3DSound(var_61_bool, var_72_int); // 0x348 Func
	var_73_bool = var_61_bool == 0; // 0x34a Not
	if(var_73_bool == 0) goto Label_845; // 0x34b JumpB
	goto Label_848; // 0x34c Jump
	
Label_848:
	var_74_string = "all"; // 0x350 PushS
	var_75_string = "bjump"; // 0x351 PushS
	GetAnimationOffset(var_62_cvector, var_74_string, var_75_string); // 0x352 Func
	var_76_float = GetByIndex(var_62_cvector, 2); // 0x354 PushE
	var_4_bool = -var_76_float; // 0x355 Neg2
	return 6; // 0x356 Return
	
Label_845:
	var_77_int = 1; // 0x34d PushI
	var_2_object = var_2_object + var_77_int; // 0x34e Add2
	goto Label_836; // 0x34f Jump
	
Label_832:
	var_78_int = 1; // 0x340 PushI
	var_1_object = var_1_object + var_78_int; // 0x341 Add2
	goto Label_822; // 0x342 Jump
}


func_2356(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x934 PushV
	GetMainOutdoorScene(var_32_object); // 0x935 Func
	var_34_bool = var_32_object == 0; // 0x937 NullEq
	if(var_34_bool == 0) goto Label_2367; // 0x938 JumpB
	var_35_string = "Can't find main outdoor scene"; // 0x939 PushS
	Trace(var_35_string); // 0x93a Func
	var_33_object = 0; // 0x93c SetNull
	var_29_object = var_33_object; // 0x93d Mov
	return 4; // 0x93e Return
	
Label_2367:
	GetMap(var_33_object); // 0x93f ObjFunc
	var_29_object = var_33_object; // 0x941 Mov
	return 4; // 0x942 Return
}


func_566(var_70_bool)
{
	var_70_bool = 1; // 0x236 MovB
	return 0; // 0x237 Return
}


func_568()
{
	StopAnimation(); // 0x238 Func
	StopGroup0(); // 0x23a Func
	return 0; // 0x23c Return
}


func_573(var_25_object)
{
	
Label_574:
	var_32_object = Obj(); var_33_bool = 0; var_34_float = 0; // 0x23e PushV
	var_32_object = var_25_object; // 0x23f Mov
	var_33_bool = 1; // 0x240 MovB
	var_34_float = 180.0; // 0x241 MovF
	func_591(var_28_int, var_29_bool, var_30_float, var_31_int, var_25_object, var_32_object, var_33_bool, var_34_float); // 0x242 NEW_2
	var_523_int = 1; // 0x244 PushI
	Sleep(var_523_int); // 0x245 Func
	goto Label_574; // 0x247 Jump
}


func_2110()
{
	var_22_bool = 0; // 0x83e PushV
	func_2491(var_22_bool); // 0x83f NEW_2
	if(var_22_bool == 0) goto Label_2116; // 0x841 JumpB
	lshStopSpeech(); // 0x842 Func
	
Label_2116:
	return 0; // 0x844 Return
}


func_2117(var_70_string)
{
	var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x845 PushV
	IsExisting3DSound(var_79_bool, var_70_string); // 0x846 Func
	var_87_bool = var_79_bool == 0; // 0x848 Not
	if(var_87_bool == 0) goto Label_2142; // 0x849 JumpB
	var_80_int = 0; // 0x84a MovI
	
Label_2123:
	var_88_int = 1; // 0x84b PushI
	var_89_int = var_80_int + var_88_int; // 0x84c Add
	var_90_int = var_70_string + var_89_int; // 0x84d Add
	IsExisting3DSound(var_81_bool, var_90_int); // 0x84e Func
	var_91_bool = var_81_bool == 0; // 0x850 Not
	if(var_91_bool == 0) goto Label_2131; // 0x851 JumpB
	goto Label_2134; // 0x852 Jump
	
Label_2134:
	var_92_bool = var_80_int == 0; // 0x856 Not
	if(var_92_bool == 0) goto Label_2137; // 0x857 JumpB
	return 16; // 0x858 Return
	
Label_2137:
	irand(var_82_int, var_80_int); // 0x859 Func
	var_93_int = 1; // 0x85b PushI
	var_94_int = var_82_int + var_93_int; // 0x85c Add
	var_70_string = var_70_string + var_94_int; // 0x85d Add2
	
Label_2142:
	Is3DSoundLoaded(var_83_bool, var_70_string); // 0x85e Func
	var_95_bool = var_83_bool; // 0x860 Push
	if(var_95_bool == 0) goto Label_2157; // 0x861 JumpB
	GetEyesHeight(var_84_float); // 0x862 Func
	GetDirection(var_85_cvector); // 0x864 Func
	var_96_int = 50; // 0x866 PushI
	var_86_cvector = var_85_cvector * var_96_int; // 0x867 Mult2
	var_97_float = GetByIndex(var_86_cvector, 1); // 0x868 PushE
	var_97_float = var_97_float + var_84_float; // 0x869 Add2
	SetByIndex(var_86_cvector, 1) = var_97_float; // 0x86a PopE
	PlayGlobalSound(var_70_string, var_86_cvector); // 0x86b Func
	
Label_2157:
	return 16; // 0x86d Return
	
Label_2131:
	var_98_int = 1; // 0x853 PushI
	var_80_int = var_80_int + var_98_int; // 0x854 Add2
	goto Label_2123; // 0x855 Jump
}


func_2373(var_76_object, var_77_string, var_78_float)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_object = Obj(); var_87_bool = 0; // 0x945 PushV
	GetMainOutdoorScene(var_86_object); // 0x946 Func
	var_88_bool = var_86_object == 0; // 0x948 NullEq
	if(var_88_bool == 0) goto Label_2382; // 0x949 JumpB
	var_89_string = "Can't find main outdoor scene"; // 0x94a PushS
	Trace(var_89_string); // 0x94b Func
	return 8; // 0x94d Return
	
Label_2382:
	GetLocator(var_77_string, var_87_bool, var_84_cvector, var_85_cvector); // 0x94e ObjFunc
	var_90_bool = var_87_bool == 0; // 0x950 Not
	if(var_90_bool == 0) goto Label_2392; // 0x951 JumpB
	var_91_string = "Warning: outdoor scene locator "; // 0x952 PushS
	var_92_int = var_91_string + var_77_string; // 0x953 Add
	var_93_string = " doesnt exist"; // 0x954 PushS
	var_94_int = var_92_int + var_93_string; // 0x955 Add
	Trace(var_94_int); // 0x956 Func
	
Label_2392:
	GetMap(var_76_object); // 0x958 ObjFunc
	var_95_bool = var_76_object == 0; // 0x95a NullEq
	if(var_95_bool == 0) goto Label_2400; // 0x95b JumpB
	var_96_string = "Can't find map"; // 0x95c PushS
	Trace(var_96_string); // 0x95d Func
	return 8; // 0x95f Return
	
Label_2400:
	var_97_float = GetByIndex(var_84_cvector, 0); // 0x960 PushE
	var_98_float = GetByIndex(var_84_cvector, 2); // 0x961 PushE
	SetMapParams(var_97_float, var_98_float, var_78_float); // 0x962 ObjFunc
	return 8; // 0x964 Return
}


func_585(var_401_float)
{
	var_401_float = 0.1; // 0x24a MovF
	return 0; // 0x24b Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_598_object, var_599_object)
{
	var_0_object = var_599_object; // 0x4b TMov
	var_1_object = var_598_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_604_int = 1; // 0x4e PushI
	if(var_604_int == 0) goto Label_102; // 0x4f JumpB
	var_605_string = ""; // 0x50 PushV
	var_605_string = "Neutral"; // 0x51 MovS
	func_132(var_599_object, var_605_string); // 0x52 NEW_2
	var_622_int = 530942; // 0x54 PushI
	SetMessage(var_622_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_623_int = 530962; // 0x59 PushI
	var_624_int = 32271; // 0x5a PushI
	var_625_int = 32281; // 0x5b PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0x5c TObjFunc
	var_626_int = 530959; // 0x5e PushI
	var_627_int = -1; // 0x5f PushI
	var_628_int = 32278; // 0x60 PushI
	AddReply(var_626_int, var_627_int, var_628_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_629_bool = 0; // 0x66 PushV
	func_2491(var_629_bool); // 0x67 NEW_2
	if(var_629_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_630_string = var_3_string; // 0x6c PushT
	if(var_630_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_631_string = ""; // 0x6f PushV
	var_631_string = var_2_object; // 0x70 MovT
	func_2068(var_631_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_642_string = "all"; // 0x75 PushS
	var_643_string = "idle"; // 0x76 PushS
	PlayAnimation(var_642_string, var_643_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_644_string = var_3_string; // 0x7b PushT
	if(var_644_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_645_string = "all"; // 0x7e PushS
	var_646_string = "idle"; // 0x7f PushS
	PlayAnimation(var_645_string, var_646_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_588(var_408_int)
{
	var_408_int = 0; // 0x24d MovI
	return 0; // 0x24e Return
}


func_1101(var_0_object, var_307_bool)
{
	var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_float = 0; var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0; var_317_float = 0; // 0x44d PushV
	var_318_bool = 0; var_319_object = Obj(); // 0x44e PushV
	var_319_object = var_0_object; // 0x44f MovT
	func_1817(var_318_bool, var_319_object); // 0x450 NEW_2
	var_320_bool = var_318_bool == 0; // 0x452 Not
	if(var_320_bool == 0) goto Label_1110; // 0x453 JumpB
	var_307_bool = 0; // 0x454 MovB
	return 10; // 0x455 Return
	
Label_1110:
	var_321_bool = 0; // 0x456 PushV
	func_1190(var_317_float, var_321_bool); // 0x457 NEW_2
	if(var_321_bool == 0) goto Label_1127; // 0x459 JumpB
	GetPFPosition(var_313_cvector); // 0x45a TObjFunc
	GetPFPosition(var_314_cvector); // 0x45c Func
	var_315_cvector = var_313_cvector - var_314_cvector; // 0x45e Sub2
	var_316_float = var_315_cvector | var_315_cvector; // 0x45f Or2
	GetAttackDistance(var_317_float); // 0x460 TObjFunc
	var_322_int = 50; // 0x462 PushI
	var_317_float = var_317_float + var_322_int; // 0x463 Add2
	var_323_float = var_317_float * var_317_float; // 0x464 Mult
	var_307_bool = var_316_float <= var_323_float; // 0x465 LE2
	return 10; // 0x466 Return
	
Label_1127:
	var_307_bool = 0; // 0x467 MovB
	return 10; // 0x468 Return
}


func_1358(var_0_object, var_1_object, var_164_bool, var_165_object, var_166_float, var_167_float, var_168_bool, var_169_bool)
{
	var_170_bool = 0; var_171_bool = 0; var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_float = 0; var_177_object = Obj(); var_178_bool = 0; var_179_bool = 0; var_180_object = Obj(); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_float = 0; var_185_object = Obj(); // 0x54e PushV
	var_0_object = 0; // 0x54f TMovB
	var_1_object = var_165_object; // 0x550 TMov
	var_179_bool = var_169_bool; // 0x551 Mov
	
Label_1362:
	var_186_bool = 0; var_187_object = Obj(); // 0x552 PushV
	var_187_object = var_165_object; // 0x553 Mov
	func_1498(var_186_bool, var_187_object); // 0x554 NEW_2
	var_190_bool = var_186_bool == 0; // 0x556 Not
	if(var_190_bool == 0) goto Label_1370; // 0x557 JumpB
	var_164_bool = 0; // 0x558 MovB
	return 16; // 0x559 Return
	
Label_1370:
	GetPosition(var_181_cvector); // 0x55a ObjFunc
	GetPosition(var_182_cvector); // 0x55c Func
	var_183_cvector = var_181_cvector - var_182_cvector; // 0x55e Sub2
	var_184_float = var_183_cvector | var_183_cvector; // 0x55f Or2
	var_191_bool = 0; // 0x560 PushV
	var_191_bool = 0; // 0x561 MovB
	var_192_int = 0; // 0x562 PushI
	var_193_bool = var_167_float > var_192_int; // 0x563 GT
	if(var_193_bool == 0) goto Label_1385; // 0x564 JumpB
	var_194_float = var_167_float * var_167_float; // 0x565 Mult
	var_195_bool = var_184_float > var_194_float; // 0x566 GT
	if(var_195_bool == 0) goto Label_1385; // 0x567 JumpB
	var_191_bool = 1; // 0x568 MovB
	
Label_1385:
	if(var_191_bool == 0) goto Label_1390; // 0x569 JumpB
	Stop(); // 0x56a Func
	var_164_bool = 0; // 0x56c MovB
	return 16; // 0x56d Return
	
Label_1390:
	var_196_float = var_166_float * var_166_float; // 0x56e Mult
	var_197_bool = var_184_float > var_196_float; // 0x56f GT
	if(var_197_bool == 0) goto Label_1452; // 0x570 JumpB
	GetPFPosition(var_181_cvector); // 0x571 ObjFunc
	FindPathTo(var_185_object, var_181_cvector); // 0x573 Func
	var_198_bool = var_185_object != 0; // 0x575 NullNeq
	if(var_198_bool == 0) goto Label_1401; // 0x576 JumpB
	var_180_object = var_185_object; // 0x577 Mov
	var_185_object = 0; // 0x578 SetNull
	
Label_1401:
	var_199_bool = var_180_object != 0; // 0x579 NullNeq
	if(var_199_bool == 0) goto Label_1434; // 0x57a JumpB
	var_200_bool = var_179_bool; // 0x57b Push
	if(var_200_bool == 0) goto Label_1411; // 0x57c JumpB
	var_179_bool = 0; // 0x57d MovB
	RotatePath(var_180_object, var_178_bool); // 0x57e Func
	var_201_bool = var_178_bool == 0; // 0x580 Not
	if(var_201_bool == 0) goto Label_1411; // 0x581 JumpB
	goto Label_1458; // 0x582 Jump
	
Label_1458:
	var_164_bool = !var_0_object; // 0x5b2 Not2
	return 16; // 0x5b3 Return
	
Label_1411:
	var_202_int = 0; // 0x583 PushI
	var_203_float = 0.3; // 0x584 PushF
	SetTimer(var_202_int, var_203_float); // 0x585 Func
	var_204_string = ""; // 0x587 PushV
	func_1505(var_204_string); // 0x588 NEW_2
	var_205_string = ""; // 0x58a PushV
	func_1507(var_205_string); // 0x58b NEW_2
	FollowPath(var_180_object, var_168_bool, var_178_bool, var_204_string, var_205_string); // 0x58d Func
	var_206_bool = var_178_bool == 0; // 0x58f Not
	if(var_206_bool == 0) goto Label_1432; // 0x590 JumpB
	var_207_object = var_0_object; // 0x591 PushT
	if(var_207_object == 0) goto Label_1430; // 0x592 JumpB
	var_180_object = 0; // 0x593 SetNull
	goto Label_1458; // 0x594 Jump
	
Label_1430:
	goto Label_1457; // 0x596 Jump
	
Label_1457:
	goto Label_1362; // 0x5b1 Jump
	
Label_1432:
	var_180_object = 0; // 0x598 SetNull
	goto Label_1450; // 0x599 Jump
	
Label_1450:
	var_185_object = 0; // 0x5aa SetNull
	goto Label_1456; // 0x5ab Jump
	
Label_1456:
	var_180_object = 0; // 0x5b0 SetNull
	
Label_1434:
	var_208_int = 0; // 0x59a PushI
	KillTimer(var_208_int); // 0x59b Func
	var_209_float = 0.5; // 0x59d PushF
	Sleep(var_209_float, var_178_bool); // 0x59e Func
	var_210_bool = var_178_bool == 0; // 0x5a0 Not
	if(var_210_bool == 0) goto Label_1446; // 0x5a1 JumpB
	var_211_object = var_0_object; // 0x5a2 PushT
	if(var_211_object == 0) goto Label_1446; // 0x5a3 JumpB
	var_180_object = 0; // 0x5a4 SetNull
	goto Label_1458; // 0x5a5 Jump
	
Label_1446:
	var_212_int = 0; // 0x5a6 PushI
	var_213_float = 0.3; // 0x5a7 PushF
	SetTimer(var_212_int, var_213_float); // 0x5a8 Func
	
Label_1452:
	var_214_int = 0; // 0x5ac PushI
	KillTimer(var_214_int); // 0x5ad Func
	goto Label_1458; // 0x5af Jump
}


func_591(var_0_object, var_3_string, var_5_int, var_32_object, var_33_bool, var_34_float, var_141_bool, var_233_bool)
{
	var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_float = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_float = 0; // 0x24f PushV
	func_820(var_54_cvector, var_55_bool, var_56_float); // 0x251 NEW_2
	var_5_int = 0; // 0x253 TMovI
	var_79_string = "@GetAttackDistance"; // 0x254 PushS
	var_80_int = 1; // 0x255 PushI
	var_81_bool = IsFuncExist(var_32_object, var_79_string, var_80_int); // 0x256 FuncExist
	if(var_81_bool == 0) goto Label_605; // 0x257 JumpB
	GetAttackDistance(var_46_float); // 0x258 ObjFunc
	var_82_int = 50; // 0x25a PushI
	var_46_float = var_46_float + var_82_int; // 0x25b Add2
	goto Label_606; // 0x25c Jump
	
Label_606:
	var_83_int = 150; // 0x25e PushI
	var_84_bool = var_46_float >= var_83_int; // 0x25f GE
	if(var_84_bool == 0) goto Label_610; // 0x260 JumpB
	var_46_float = 150; // 0x261 MovI
	
Label_610:
	var_3_string = 0; // 0x262 TMovB
	var_0_object = var_32_object; // 0x263 TMov
	IsPlayerActor(var_0_object, var_49_bool); // 0x264 Func
	var_85_bool = var_49_bool; // 0x266 Push
	if(var_85_bool == 0) goto Label_624; // 0x267 JumpB
	var_86_string = "attack"; // 0x268 PushS
	PlayGlobalMusic(var_86_string); // 0x269 Func
	var_87_object = Obj(); // 0x26b PushV
	func_2158(var_87_object); // 0x26c NEW_2
	SendPlayerEnemy(var_32_object, var_87_object); // 0x26e Func
	
Label_624:
	var_90_bool = var_33_bool; // 0x270 Push
	if(var_90_bool == 0) goto Label_628; // 0x271 JumpB
	var_50_bool = 0; // 0x272 MovB
	goto Label_629; // 0x273 Jump
	
Label_629:
	var_91_float = 400.0; // 0x275 PushF
	var_51_float = var_91_float + var_46_float; // 0x276 Add2
	
Label_631:
	var_92_bool = 0; // 0x277 PushV
	var_92_bool = 0; // 0x278 MovB
	var_93_bool = 0; var_94_object = Obj(); // 0x279 PushV
	var_94_object = var_0_object; // 0x27a MovT
	func_1817(var_93_bool, var_94_object); // 0x27b NEW_2
	if(var_93_bool == 0) goto Label_641; // 0x27d JumpB
	var_127_bool = var_3_string == 0; // 0x27e Not
	if(var_127_bool == 0) goto Label_641; // 0x27f JumpB
	var_92_bool = 1; // 0x280 MovB
	
Label_641:
	if(var_92_bool == 0) goto Label_803; // 0x281 JumpB
	func_1233(var_56_float); // 0x283 NEW_2
	GetPFPosition(var_47_cvector); // 0x285 TObjFunc
	GetPFPosition(var_48_cvector); // 0x287 Func
	var_52_cvector = var_47_cvector - var_48_cvector; // 0x289 Sub2
	var_53_float = var_52_cvector | var_52_cvector; // 0x28a Or2
	var_133_float = var_51_float * var_51_float; // 0x28b Mult
	var_134_bool = var_53_float >= var_133_float; // 0x28c GE
	if(var_134_bool == 0) goto Label_669; // 0x28d JumpB
	var_135_bool = 0; var_136_object = Obj(); var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_bool = 0; // 0x28e PushV
	var_136_object = var_0_object; // 0x28f MovT
	var_137_float = var_46_float; // 0x290 Mov
	var_138_float = 10000.0; // 0x291 MovF
	var_139_bool = 1; // 0x292 MovB
	var_140_bool = 0; // 0x293 MovB
	TaskCall(4); // 0x294 TaskCall
	func_1253(var_143_bool, var_135_bool, var_136_object, var_137_float, var_138_float, var_139_bool, var_140_bool); // 0x295 NEW_2
	TaskReturn(); // 0x296 TaskReturn
	var_218_bool = var_141_bool == 0; // 0x298 Not
	if(var_218_bool == 0) goto Label_667; // 0x299 JumpB
	goto Label_803; // 0x29a Jump
	
Label_803:
	WaitForAnimEnd(); // 0x323 Func
	var_219_string = var_3_string; // 0x325 PushT
	if(var_219_string == 0) goto Label_808; // 0x326 JumpB
	return 22; // 0x327 Return
	
Label_808:
	var_220_string = "all"; // 0x328 PushS
	var_221_string = "attack_off"; // 0x329 PushS
	PlayAnimation(var_220_string, var_221_string); // 0x32a Func
	WaitForAnimEnd(); // 0x32c Func
	var_222_bool = var_49_bool; // 0x32e Push
	if(var_222_bool == 0) goto Label_819; // 0x32f JumpB
	var_223_float = 2.0; // 0x330 PushF
	Sleep(var_223_float); // 0x331 Func
	
Label_819:
	return 22; // 0x333 Return
	
Label_667:
	var_50_bool = 0; // 0x29b MovB
	goto Label_802; // 0x29c Jump
	
Label_802:
	goto Label_631; // 0x322 Jump
	
Label_669:
	var_224_float = var_34_float * var_34_float; // 0x29d Mult
	var_225_bool = var_53_float >= var_224_float; // 0x29e GE
	if(var_225_bool == 0) goto Label_794; // 0x29f JumpB
	GetPFPosition(var_54_cvector); // 0x2a0 TObjFunc
	CanReachByPF(var_55_bool, var_54_cvector); // 0x2a2 Func
	var_226_bool = var_55_bool == 0; // 0x2a4 Not
	if(var_226_bool == 0) goto Label_693; // 0x2a5 JumpB
	var_227_bool = 0; var_228_object = Obj(); var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_bool = 0; // 0x2a6 PushV
	var_228_object = var_0_object; // 0x2a7 MovT
	var_229_float = var_46_float; // 0x2a8 Mov
	var_230_float = 10000.0; // 0x2a9 MovF
	var_231_bool = 1; // 0x2aa MovB
	var_232_bool = 0; // 0x2ab MovB
	TaskCall(4); // 0x2ac TaskCall
	func_1253(var_235_bool, var_227_bool, var_228_object, var_229_float, var_230_float, var_231_bool, var_232_bool); // 0x2ad NEW_2
	TaskReturn(); // 0x2ae TaskReturn
	var_236_bool = var_233_bool == 0; // 0x2b0 Not
	if(var_236_bool == 0) goto Label_691; // 0x2b1 JumpB
	goto Label_803; // 0x2b2 Jump
	
Label_691:
	var_50_bool = 0; // 0x2b3 MovB
	goto Label_631; // 0x2b4 Jump
	
Label_693:
	var_237_bool = var_50_bool == 0; // 0x2b5 Not
	if(var_237_bool == 0) goto Label_718; // 0x2b6 JumpB
	var_238_object = Obj(); // 0x2b7 PushV
	var_238_object = var_0_object; // 0x2b8 MovT
	func_1967(); // 0x2b9 NEW_2
	var_247_string = "all"; // 0x2bb PushS
	var_248_string = "attack_on"; // 0x2bc PushS
	PlayAnimation(var_247_string, var_248_string); // 0x2bd Func
	WaitForAnimEnd(); // 0x2bf Func
	func_1233(var_56_float); // 0x2c2 NEW_2
	StopAsync(); // 0x2c4 Func
	var_50_bool = 1; // 0x2c6 MovB
	var_249_bool = 0; var_250_object = Obj(); // 0x2c7 PushV
	var_250_object = var_0_object; // 0x2c8 MovT
	func_1817(var_249_bool, var_250_object); // 0x2c9 NEW_2
	var_251_bool = var_249_bool == 0; // 0x2cb Not
	if(var_251_bool == 0) goto Label_718; // 0x2cc JumpB
	goto Label_803; // 0x2cd Jump
	
Label_718:
	rand(var_56_float); // 0x2ce Func
	var_252_bool = 0; // 0x2d0 PushV
	var_252_bool = 1; // 0x2d1 MovB
	var_253_float = 0.25; // 0x2d2 PushF
	var_254_bool = var_56_float < var_253_float; // 0x2d3 LT
	if(var_254_bool == 0) goto Label_730; // 0x2d4 JumpB
	var_255_bool = 0; // 0x2d5 PushV
	func_1190(var_252_bool, var_255_bool); // 0x2d6 NEW_2
	if(var_255_bool == 0) goto Label_730; // 0x2d8 JumpB
	var_252_bool = 0; // 0x2d9 MovB
	
Label_730:
	if(var_252_bool == 0) goto Label_747; // 0x2da JumpB
	Face(var_0_object); // 0x2db Func
	func_1240(); // 0x2de NEW_2
	var_290_string = "all"; // 0x2e0 PushS
	var_291_string = "attack_stay"; // 0x2e1 PushS
	PlayAnimation(var_290_string, var_291_string); // 0x2e2 Func
	var_292_bool = 0; var_293_float = 0; // 0x2e4 PushV
	var_293_float = var_34_float; // 0x2e5 Mov
	func_1058(var_56_float, var_292_bool, var_293_float); // 0x2e6 NEW_2
	StopAsync(); // 0x2e8 Func
	goto Label_793; // 0x2ea Jump
	
Label_793:
	goto Label_802; // 0x319 Jump
	
Label_747:
	Face(var_0_object); // 0x2eb Func
	var_507_string = "all"; // 0x2ed PushS
	var_508_string = "fjump"; // 0x2ee PushS
	PlayAnimation(var_507_string, var_508_string); // 0x2ef Func
	WaitForAnimEnd(); // 0x2f1 Func
	func_1233(var_56_float); // 0x2f4 NEW_2
	var_509_cvector = CVector(0.0, 0.0, 0.0); // 0x2f6 PushVec
	SetSpeed(var_509_cvector); // 0x2f7 Func
	Stop(); // 0x2f9 Func
	StopAsync(); // 0x2fb Func
	var_510_bool = 0; // 0x2fd PushV
	func_1190(var_56_float, var_510_bool); // 0x2fe NEW_2
	var_511_bool = var_510_bool == 0; // 0x300 Not
	if(var_511_bool == 0) goto Label_793; // 0x301 JumpB
	var_512_bool = 0; var_513_object = Obj(); // 0x302 PushV
	var_513_object = var_0_object; // 0x303 MovT
	func_1817(var_512_bool, var_513_object); // 0x304 NEW_2
	var_514_bool = var_512_bool == 0; // 0x306 Not
	if(var_514_bool == 0) goto Label_777; // 0x307 JumpB
	goto Label_803; // 0x308 Jump
	
Label_777:
	GetPFPosition(var_47_cvector); // 0x309 TObjFunc
	GetPFPosition(var_48_cvector); // 0x30b Func
	var_52_cvector = var_47_cvector - var_48_cvector; // 0x30d Sub2
	var_53_float = var_52_cvector | var_52_cvector; // 0x30e Or2
	var_515_float = var_34_float * var_34_float; // 0x30f Mult
	var_516_bool = var_53_float < var_515_float; // 0x310 LT
	if(var_516_bool == 0) goto Label_793; // 0x311 JumpB
	var_517_bool = 0; var_518_float = 0; // 0x312 PushV
	var_518_float = var_34_float; // 0x313 Mov
	func_894(var_56_float, var_517_bool, var_518_float); // 0x314 NEW_2
	var_519_bool = var_517_bool == 0; // 0x316 Not
	if(var_519_bool == 0) goto Label_793; // 0x317 JumpB
	goto Label_803; // 0x318 Jump
	
Label_794:
	var_520_bool = 0; var_521_float = 0; // 0x31a PushV
	var_521_float = var_34_float; // 0x31b Mov
	func_894(var_56_float, var_520_bool, var_521_float); // 0x31c NEW_2
	var_522_bool = var_520_bool == 0; // 0x31e Not
	if(var_522_bool == 0) goto Label_801; // 0x31f JumpB
	goto Label_803; // 0x320 Jump
	
Label_801:
	var_50_bool = 1; // 0x321 MovB
	
Label_628:
	var_50_bool = 1; // 0x274 MovB
	
Label_605:
	var_46_float = var_34_float; // 0x25d Mov
}


func_855(var_0_object, var_390_float, var_391_int)
{
	var_392_object = Obj(); var_393_float = 0; var_394_float = 0; var_395_object = Obj(); var_396_float = 0; var_397_float = 0; // 0x357 PushV
	var_398_float = 0.9; // 0x358 PushF
	var_399_float = var_390_float * var_398_float; // 0x359 Mult
	GetVictim(var_399_float, var_395_object); // 0x35a Func
	ReportAttack(var_0_object); // 0x35c Func
	var_400_bool = var_395_object == var_0_object; // 0x35e Eq
	if(var_400_bool == 0) goto Label_892; // 0x35f JumpB
	var_401_float = 0; var_402_object = Obj(); var_403_int = 0; // 0x360 PushV
	var_402_object = var_395_object; // 0x361 Mov
	var_403_int = var_391_int; // 0x362 Mov
	func_585(var_403_int); // 0x363 NEW_2
	var_396_float = var_401_float; // 0x364 Mov
	var_404_float = 0; var_405_object = Obj(); var_406_float = 0; var_407_int = 0; // 0x366 PushV
	var_405_object = var_395_object; // 0x367 Mov
	var_406_float = var_396_float; // 0x368 Mov
	var_408_int = 0; var_409_object = Obj(); var_410_int = 0; // 0x369 PushV
	var_409_object = var_395_object; // 0x36a Mov
	var_410_int = var_391_int; // 0x36b Mov
	func_588(var_410_int); // 0x36c NEW_2
	var_407_int = var_408_int; // 0x36d Mov
	func_1703(var_404_float, var_405_object, var_406_float, var_407_int); // 0x36f NEW_2
	var_397_float = var_404_float; // 0x370 Mov
	var_465_int = 0; // 0x372 PushV
	func_1238(var_465_int); // 0x373 NEW_2
	ReportHit(var_0_object, var_465_int, var_397_float, var_396_float); // 0x375 Func
	var_466_object = Obj(); var_467_float = 0; // 0x377 PushV
	var_466_object = var_395_object; // 0x378 Mov
	var_467_float = var_397_float; // 0x379 Mov
	func_1245(); // 0x37a NEW_2
	
Label_892:
	return 6; // 0x37c Return
}


func_1625(var_69_string)
{
	RemoveRTEnvelope(); // 0x65a Func
	SetDeathState(); // 0x65c Func
	Stop(); // 0x65e Func
	StopAsync(); // 0x660 Func
	StopSecondaryAnimation(); // 0x662 Func
	var_70_string = ""; // 0x664 PushV
	var_70_string = var_69_string; // 0x665 Mov
	func_2117(var_70_string); // 0x666 NEW_2
	var_99_string = "all"; // 0x668 PushS
	PlayAnimation(var_99_string, var_69_string); // 0x669 Func
	WaitForAnimEnd(); // 0x66b Func
	var_100_string = "all"; // 0x66d PushS
	LockAnimationEnd(var_100_string, var_69_string); // 0x66e Func
	RemoveEnvelope(); // 0x670 Func
	return 0; // 0x672 Return
}


func_1885(var_23_object, var_24_int, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_int = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); // 0x75d PushV
	var_44_bool = 0; // 0x75e PushV
	var_44_bool = 0; // 0x75f MovB
	var_45_bool = 0; // 0x760 PushV
	var_45_bool = 0; // 0x761 MovB
	var_46_object = var_23_object; // 0x762 Push
	if(var_46_object == 0) goto Label_1896; // 0x763 JumpB
	var_47_int = 4; // 0x764 PushI
	var_48_bool = var_24_int != var_47_int; // 0x765 Neq
	if(var_48_bool == 0) goto Label_1896; // 0x766 JumpB
	var_45_bool = 1; // 0x767 MovB
	
Label_1896:
	if(var_45_bool == 0) goto Label_1901; // 0x768 JumpB
	var_49_int = 5; // 0x769 PushI
	var_50_bool = var_24_int != var_49_int; // 0x76a Neq
	if(var_50_bool == 0) goto Label_1901; // 0x76b JumpB
	var_44_bool = 1; // 0x76c MovB
	
Label_1901:
	if(var_44_bool == 0) goto Label_1948; // 0x76d JumpB
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x76e PushV
	var_53_cvector = CVector(0,0,0); var_54_object = Obj(); // 0x76f PushV
	var_54_object = var_23_object; // 0x770 Mov
	func_1671(var_54_object); // 0x771 NEW_2
	var_52_cvector = var_53_cvector; // 0x772 Mov
	func_2164(var_51_cvector, var_52_cvector); // 0x774 NEW_2
	var_35_cvector = var_51_cvector; // 0x775 Mov
	CreateVectorVector(var_36_object); // 0x777 Func
	var_37_int = 1; // 0x779 MovI
	
Label_1914:
	var_64_string = "hit"; // 0x77a PushS
	var_65_int = var_64_string + var_37_int; // 0x77b Add
	GetGeometryLocator(var_65_int, var_38_bool, var_39_cvector, var_40_cvector); // 0x77c Func
	var_66_bool = var_38_bool == 0; // 0x77e Not
	if(var_66_bool == 0) goto Label_1921; // 0x77f JumpB
	goto Label_1930; // 0x780 Jump
	
Label_1930:
	size(var_41_int); // 0x78a ObjFunc
	var_67_int = var_41_int; // 0x78c Push
	if(var_67_int == 0) goto Label_1947; // 0x78d JumpB
	irand(var_42_int, var_41_int); // 0x78e Func
	get(var_43_cvector, var_42_int); // 0x790 ObjFunc
	var_68_object = Obj(); var_69_int = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x792 PushV
	var_68_object = var_23_object; // 0x793 Mov
	var_69_int = var_24_int; // 0x794 Mov
	var_70_float = var_25_float; // 0x795 Mov
	var_71_cvector = var_43_cvector; // 0x796 Mov
	var_72_cvector = -var_35_cvector; // 0x797 Neg2
	func_1953(var_70_float, var_71_cvector, var_72_cvector); // 0x798 NEW_2
	return 18; // 0x79a Return
	
Label_1947:
	var_36_object = 0; // 0x79b SetNull
	
Label_1948:
	var_113_object = Obj(); // 0x79c PushV
	var_113_object = var_23_object; // 0x79d Mov
	func_1841(var_113_object); // 0x79e NEW_2
	return 18; // 0x7a0 Return
	
Label_1921:
	var_114_int = var_40_cvector | var_35_cvector; // 0x781 Or
	var_115_float = 0.70711; // 0x782 PushF
	var_116_bool = var_114_int >= var_115_float; // 0x783 GE
	if(var_116_bool == 0) goto Label_1927; // 0x784 JumpB
	add(var_39_cvector); // 0x785 ObjFunc
	
Label_1927:
	var_117_int = 1; // 0x787 PushI
	var_37_int = var_37_int + var_117_int; // 0x788 Add2
	goto Label_1914; // 0x789 Jump
}


func_2406(var_589_int)
{
	var_590_int = 0; var_591_int = 0; // 0x966 PushV
	var_592_string = "branch"; // 0x967 PushS
	GetVariable(var_592_string, var_591_int); // 0x968 Func
	var_593_int = 0; // 0x96a PushI
	var_594_bool = var_591_int == var_593_int; // 0x96b Eq
	if(var_594_bool == 0) goto Label_2416; // 0x96c JumpB
	var_589_int = 1; // 0x96d MovI
	return 2; // 0x96e Return
	
Label_2416:
	var_595_int = 1; // 0x970 PushI
	var_596_bool = var_591_int == var_595_int; // 0x971 Eq
	if(var_596_bool == 0) goto Label_2421; // 0x972 JumpB
	var_589_int = 2; // 0x973 MovI
	return 2; // 0x974 Return
	
Label_2421:
	var_589_int = 3; // 0x975 MovI
	return 2; // 0x976 Return
}


func_1129(var_305_bool)
{
	var_306_bool = 0; // 0x469 PushV
	var_306_bool = 0; // 0x46a MovB
	var_307_bool = 0; // 0x46b PushV
	func_1101(var_306_bool, var_307_bool); // 0x46c NEW_2
	if(var_307_bool == 0) goto Label_1140; // 0x46e JumpB
	var_324_bool = 0; // 0x46f PushV
	func_1145(var_305_bool, var_306_bool, var_324_bool); // 0x470 NEW_2
	if(var_324_bool == 0) goto Label_1140; // 0x472 JumpB
	var_306_bool = 1; // 0x473 MovB
	
Label_1140:
	if(var_306_bool == 0) goto Label_1143; // 0x474 JumpB
	var_305_bool = 1; // 0x475 MovB
	return 0; // 0x476 Return
	
Label_1143:
	var_305_bool = 0; // 0x477 MovB
	return 0; // 0x478 Return
}


func_2158(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x86e PushV
	self(var_25_object); // 0x86f Func
	var_23_object = var_25_object; // 0x871 Mov
	return 2; // 0x872 Return
}


func_2164(var_51_cvector, var_52_cvector)
{
	var_59_float = 0; var_60_float = 0; // 0x874 PushV
	var_61_int = var_52_cvector | var_52_cvector; // 0x875 Or
	var_60_float = sqrt(var_61_int); // 0x876 Sqrt2
	var_62_float = 0.0; // 0x877 PushF
	var_63_bool = var_60_float < var_62_float; // 0x878 LT
	if(var_63_bool == 0) goto Label_2172; // 0x879 JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x87a MovV
	return 2; // 0x87b Return
	
Label_2172:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x87c Div2
	return 2; // 0x87d Return
}


func_2423(var_26_int)
{
	var_27_int = 0; var_28_int = 0; // 0x977 PushV
	var_29_string = "branch"; // 0x978 PushS
	GetVariable(var_29_string, var_28_int); // 0x979 Func
	var_26_int = var_28_int; // 0x97b Mov
	return 2; // 0x97c Return
}


func_1145(var_0_object, var_4_bool, var_324_bool)
{
	var_325_object = Obj(); var_326_bool = 0; var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_object = Obj(); var_331_bool = 0; var_332_float = 0; var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); // 0x479 PushV
	GetScene(var_330_object); // 0x47a Func
	var_331_bool = 0; // 0x47c MovB
	
Label_1149:
	var_335_cvector = CVector(0,0,0); var_336_object = Obj(); // 0x47d PushV
	var_336_object = var_0_object; // 0x47e MovT
	func_1671(var_336_object); // 0x47f NEW_2
	var_341_int = -var_335_cvector; // 0x481 Neg
	FindDirLength(var_332_float, var_341_int, var_332_float); // 0x482 Func
	var_342_bool = var_332_float < var_4_bool; // 0x484 LT
	if(var_342_bool == 0) goto Label_1159; // 0x485 JumpB
	goto Label_1187; // 0x486 Jump
	
Label_1187:
	var_324_bool = var_331_bool; // 0x4a3 Mov
	return 10; // 0x4a4 Return
	
Label_1159:
	Face(var_0_object); // 0x487 Func
	var_343_string = "all"; // 0x489 PushS
	var_344_string = "bjump"; // 0x48a PushS
	PlayAnimation(var_343_string, var_344_string); // 0x48b Func
	GetPFPosition(var_333_cvector); // 0x48d TObjFunc
	GetPFPosition(var_334_cvector); // 0x48f Func
	WaitForAnimEnd(); // 0x491 Func
	func_1233(var_334_cvector); // 0x494 NEW_2
	StopAsync(); // 0x496 Func
	var_345_cvector = CVector(0.0, 0.0, 0.0); // 0x498 PushVec
	SetSpeed(var_345_cvector); // 0x499 Func
	var_331_bool = 1; // 0x49b MovB
	var_346_bool = 0; // 0x49c PushV
	func_1101(var_334_cvector, var_346_bool); // 0x49d NEW_2
	var_347_bool = var_346_bool == 0; // 0x49f Not
	if(var_347_bool == 0) goto Label_1186; // 0x4a0 JumpB
	goto Label_1187; // 0x4a1 Jump
	
Label_1186:
	goto Label_1149; // 0x4a2 Jump
}


func_1657(var_432_string, var_433_int)
{
	var_434_int = 2; // 0x67a PushI
	var_435_bool = var_433_int == var_434_int; // 0x67b Eq
	if(var_435_bool == 0) goto Label_1664; // 0x67c JumpB
	var_432_string = "fire"; // 0x67d MovS
	return 0; // 0x67e Return
	
Label_1664:
	var_436_int = 1; // 0x680 PushI
	var_437_bool = var_433_int == var_436_int; // 0x681 Eq
	if(var_437_bool == 0) goto Label_1669; // 0x682 JumpB
	var_432_string = "bullet"; // 0x683 MovS
	return 0; // 0x684 Return
	
Label_1669:
	var_432_string = "phys"; // 0x685 MovS
	return 0; // 0x686 Return
}


func_2429(var_23_object)
{
	var_24_int = 0; // 0x97e PushV
	func_2423(var_24_int); // 0x97f NEW_2
	var_28_int = 1; // 0x981 PushI
	var_29_bool = var_24_int == var_28_int; // 0x982 Eq
	if(var_29_bool == 0) goto Label_2439; // 0x983 JumpB
	WorkWithCorpse(var_23_object); // 0x984 Func
	goto Label_2441; // 0x986 Jump
	
Label_2441:
	return 0; // 0x989 Return
	
Label_2439:
	Barter(var_23_object); // 0x987 Func
}


func_2174(var_442_float, var_443_float, var_444_float)
{
	var_447_bool = var_443_float < var_444_float; // 0x87f LT
	if(var_447_bool == 0) goto Label_2179; // 0x880 JumpB
	var_442_float = var_443_float; // 0x881 Mov
	goto Label_2180; // 0x882 Jump
	
Label_2180:
	return 0; // 0x884 Return
	
Label_2179:
	var_442_float = var_444_float; // 0x883 Mov
}


func_894(var_0_object, var_353_bool, var_354_float)
{
	var_355_int = 0; var_356_bool = 0; var_357_int = 0; var_358_string = ""; var_359_int = 0; var_360_bool = 0; var_361_int = 0; var_362_string = ""; // 0x37e PushV
	func_1233(var_362_string); // 0x380 NEW_2
	irand(var_359_int, var_362_string); // 0x382 Func
	var_363_int = 1; // 0x384 PushI
	var_359_int = var_359_int + var_363_int; // 0x385 Add2
	Face(var_0_object); // 0x386 Func
	var_364_bool = 1; // 0x388 PushB
	SetAttackState(var_364_bool); // 0x389 Func
	func_2216(); // 0x38c NEW_2
	var_369_string = "all"; // 0x38e PushS
	var_370_string = "attack_begin"; // 0x38f PushS
	var_371_int = var_370_string + var_359_int; // 0x390 Add
	PlayAnimation(var_369_string, var_371_int); // 0x391 Func
	WaitForAnimEnd(); // 0x393 Func
	func_1201(var_361_int, var_362_string); // 0x396 NEW_2
	var_387_bool = 0; var_388_object = Obj(); // 0x398 PushV
	var_388_object = var_0_object; // 0x399 MovT
	func_1817(var_387_bool, var_388_object); // 0x39a NEW_2
	var_389_bool = var_387_bool == 0; // 0x39c Not
	if(var_389_bool == 0) goto Label_930; // 0x39d JumpB
	StopAsync(); // 0x39e Func
	var_353_bool = 0; // 0x3a0 MovB
	return 8; // 0x3a1 Return
	
Label_930:
	var_390_float = 0; var_391_int = 0; // 0x3a2 PushV
	var_390_float = var_354_float; // 0x3a3 Mov
	var_391_int = var_359_int; // 0x3a4 Mov
	func_855(var_362_string, var_390_float, var_391_int); // 0x3a5 NEW_2
	var_468_string = "all"; // 0x3a7 PushS
	var_469_string = "attack_middle"; // 0x3a8 PushS
	var_470_int = var_469_string + var_359_int; // 0x3a9 Add
	HasAnimation(var_360_bool, var_468_string, var_470_int); // 0x3aa Func
	var_471_bool = var_360_bool; // 0x3ac Push
	if(var_471_bool == 0) goto Label_1011; // 0x3ad JumpB
	func_2216(); // 0x3af NEW_2
	var_472_string = "all"; // 0x3b1 PushS
	var_473_string = "attack_middle"; // 0x3b2 PushS
	var_474_int = var_473_string + var_359_int; // 0x3b3 Add
	PlayAnimation(var_472_string, var_474_int); // 0x3b4 Func
	WaitForAnimEnd(); // 0x3b6 Func
	func_1233(var_362_string); // 0x3b9 NEW_2
	var_475_bool = 0; var_476_object = Obj(); // 0x3bb PushV
	var_476_object = var_0_object; // 0x3bc MovT
	func_1817(var_475_bool, var_476_object); // 0x3bd NEW_2
	var_477_bool = var_475_bool == 0; // 0x3bf Not
	if(var_477_bool == 0) goto Label_965; // 0x3c0 JumpB
	StopAsync(); // 0x3c1 Func
	var_353_bool = 0; // 0x3c3 MovB
	return 8; // 0x3c4 Return
	
Label_965:
	var_478_float = 0; var_479_int = 0; // 0x3c5 PushV
	var_478_float = var_354_float; // 0x3c6 Mov
	var_479_int = var_359_int; // 0x3c7 Mov
	func_855(var_362_string, var_478_float, var_479_int); // 0x3c8 NEW_2
	var_361_int = 1; // 0x3ca MovI
	
Label_971:
	var_480_string = "attack_middle"; // 0x3cb PushS
	var_481_int = var_480_string + var_359_int; // 0x3cc Add
	var_482_string = "_"; // 0x3cd PushS
	var_483_int = var_481_int + var_482_string; // 0x3ce Add
	var_362_string = var_483_int + var_361_int; // 0x3cf Add2
	var_484_string = "all"; // 0x3d0 PushS
	HasAnimation(var_360_bool, var_484_string, var_362_string); // 0x3d1 Func
	var_485_bool = var_360_bool == 0; // 0x3d3 Not
	if(var_485_bool == 0) goto Label_982; // 0x3d4 JumpB
	goto Label_1011; // 0x3d5 Jump
	
Label_1011:
	var_486_bool = 0; // 0x3f3 PushB
	SetAttackState(var_486_bool); // 0x3f4 Func
	var_487_string = "all"; // 0x3f6 PushS
	var_488_string = "attack_end"; // 0x3f7 PushS
	var_489_int = var_488_string + var_359_int; // 0x3f8 Add
	PlayAnimation(var_487_string, var_489_int); // 0x3f9 Func
	var_490_bool = 0; // 0x3fb PushV
	func_1247(var_490_bool); // 0x3fc NEW_2
	if(var_490_bool == 0) goto Label_1029; // 0x3fe JumpB
	var_491_bool = 0; var_492_float = 0; // 0x3ff PushV
	var_492_float = 0.75; // 0x400 MovF
	func_1031(var_491_bool, var_492_float); // 0x401 NEW_2
	StopAsync(); // 0x403 Func
	
Label_1029:
	var_353_bool = 1; // 0x405 MovB
	return 8; // 0x406 Return
	
Label_982:
	func_2216(); // 0x3d7 NEW_2
	var_500_string = "all"; // 0x3d9 PushS
	PlayAnimation(var_500_string, var_362_string); // 0x3da Func
	WaitForAnimEnd(); // 0x3dc Func
	func_1233(var_362_string); // 0x3df NEW_2
	var_501_bool = 0; var_502_object = Obj(); // 0x3e1 PushV
	var_502_object = var_0_object; // 0x3e2 MovT
	func_1817(var_501_bool, var_502_object); // 0x3e3 NEW_2
	var_503_bool = var_501_bool == 0; // 0x3e5 Not
	if(var_503_bool == 0) goto Label_1003; // 0x3e6 JumpB
	StopAsync(); // 0x3e7 Func
	var_353_bool = 0; // 0x3e9 MovB
	return 8; // 0x3ea Return
	
Label_1003:
	var_504_float = 0; var_505_int = 0; // 0x3eb PushV
	var_504_float = var_354_float; // 0x3ec Mov
	var_505_int = var_359_int; // 0x3ed Mov
	func_855(var_362_string, var_504_float, var_505_int); // 0x3ee NEW_2
	var_506_int = 1; // 0x3f0 PushI
	var_361_int = var_361_int + var_506_int; // 0x3f1 Add2
	goto Label_971; // 0x3f2 Jump
}


func_132(var_2_object, var_605_string)
{
	var_606_bool = 0; // 0x85 PushV
	func_2491(var_606_bool); // 0x86 NEW_2
	var_607_bool = var_606_bool == 0; // 0x88 Not
	if(var_607_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_608_bool = var_605_string == var_2_object; // 0x8b Eq
	if(var_608_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_609_string = ""; var_610_bool = 0; // 0x8e PushV
	var_609_string = var_605_string; // 0x8f Mov
	var_611_string = ""; // 0x90 PushS
	var_612_bool = var_605_string == var_611_string; // 0x91 Eq
	if(var_612_bool == 0) goto Label_149; // 0x92 JumpB
	var_610_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_2084(var_609_string, var_610_bool); // 0x96 NEW_2
	var_2_object = var_605_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_610_bool = 1; // 0x95 MovB
}


func_2181(var_452_float, var_453_float, var_454_float, var_455_float)
{
	var_456_bool = var_453_float < var_454_float; // 0x886 LT
	if(var_456_bool == 0) goto Label_2186; // 0x887 JumpB
	var_452_float = var_454_float; // 0x888 Mov
	return 0; // 0x889 Return
	
Label_2186:
	var_457_bool = var_453_float > var_455_float; // 0x88a GT
	if(var_457_bool == 0) goto Label_2190; // 0x88b JumpB
	var_452_float = var_455_float; // 0x88c Mov
	return 0; // 0x88d Return
	
Label_2190:
	var_452_float = var_453_float; // 0x88e Mov
	return 0; // 0x88f Return
}


func_1671(var_53_cvector)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x687 PushV
	GetPosition(var_57_cvector); // 0x688 Func
	GetPosition(var_58_cvector); // 0x68a ObjFunc
	var_53_cvector = var_58_cvector - var_57_cvector; // 0x68c Sub2
	return 4; // 0x68d Return
}


func_2442(var_32_string)
{
	var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; // 0x98a PushV
	CreateInvItem(var_36_object); // 0x98b Func
	SetItemName(var_32_string); // 0x98d ObjFunc
	var_39_string = "Organ"; // 0x98f PushS
	var_40_int = 1; // 0x990 PushI
	SetProperty(var_39_string, var_40_int); // 0x991 ObjFunc
	GetItemID(var_37_int); // 0x993 ObjFunc
	var_41_int = 0; // 0x995 PushI
	var_42_int = 1; // 0x996 PushI
	AddItem(var_38_bool, var_36_object, var_41_int, var_42_int); // 0x997 Func
	return 6; // 0x999 Return
}


func_1678(var_26_float)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x68e PushV
	GetPosition(var_31_cvector); // 0x68f Func
	GetPosition(var_32_cvector); // 0x691 ObjFunc
	var_33_cvector = var_32_cvector - var_31_cvector; // 0x693 Sub2
	var_26_float = var_33_cvector | var_33_cvector; // 0x694 Or2
	return 6; // 0x695 Return
}


func_2192(var_460_float)
{
	var_461_object = Obj(); var_462_object = Obj(); // 0x890 PushV
	CreateFloatVector(var_462_object); // 0x891 Func
	add(var_460_float); // 0x893 ObjFunc
	var_463_int = 15; // 0x895 PushI
	SendWorldWndMessage(var_463_int, var_462_object); // 0x896 Func
	return 2; // 0x898 Return
}


func_1686(var_159_bool, var_160_object)
{
	var_161_bool = 0; var_162_bool = 0; // 0x696 PushV
	IsPlayerActor(var_160_object, var_162_bool); // 0x697 Func
	var_159_bool = var_162_bool; // 0x699 Mov
	return 2; // 0x69a Return
}


func_408(var_0_object, var_1_object, var_2_object, var_3_string, var_18_bool, var_20_float, var_21_float)
{
	var_22_bool = 0; // 0x199 PushV
	func_1978(var_22_bool); // 0x19a NEW_2
	var_25_bool = var_22_bool == 0; // 0x19c Not
	if(var_25_bool == 0) goto Label_415; // 0x19d JumpB
	return 0; // 0x19e Return
	
Label_415:
	var_26_string = "player"; // 0x19f PushS
	FindActor(var_18_bool, var_26_string); // 0x1a0 Func
	var_2_object = 0; // 0x1a2 TMovB
	var_3_string = 0; // 0x1a3 TMovB
	var_0_object = var_20_float; // 0x1a4 TMov
	var_1_object = var_21_float; // 0x1a5 TMov
	var_27_int = 10; // 0x1a6 PushI
	var_28_float = 1.0; // 0x1a7 PushF
	SetTimer(var_27_int, var_28_float); // 0x1a8 Func
	func_487(); // 0x1ab NEW_2
	var_80_bool = var_3_string == 0; // 0x1ad Not
	if(var_80_bool == 0) goto Label_434; // 0x1ae JumpB
	var_81_int = 10; // 0x1af PushI
	KillTimer(var_81_int); // 0x1b0 Func
	
Label_434:
	return 0; // 0x1b2 Return
}


func_2202(var_40_float)
{
	var_41_float = 0; var_42_float = 0; // 0x89a PushV
	GetGameTime(var_42_float); // 0x89b Func
	var_40_float = var_42_float; // 0x89d Mov
	return 2; // 0x89e Return
}


func_1691(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0; // 0x69b PushV
	var_59_string = "HasProperty"; // 0x69c PushS
	var_60_int = 2; // 0x69d PushI
	var_61_bool = IsFuncExist(var_55_object, var_59_string, var_60_int); // 0x69e FuncExist
	var_62_bool = var_61_bool == 0; // 0x69f Not
	if(var_62_bool == 0) goto Label_1699; // 0x6a0 JumpB
	var_54_bool = 0; // 0x6a1 MovB
	return 2; // 0x6a2 Return
	
Label_1699:
	HasProperty(var_56_string, var_58_bool); // 0x6a3 ObjFunc
	var_54_bool = var_58_bool; // 0x6a5 Mov
	return 2; // 0x6a6 Return
}


func_2459()
{
	var_26_int = 0; // 0x99b PushV
	func_2423(var_26_int); // 0x99c NEW_2
	var_30_int = 1; // 0x99e PushI
	var_31_bool = var_26_int != var_30_int; // 0x99f Neq
	if(var_31_bool == 0) goto Label_2466; // 0x9a0 JumpB
	return 0; // 0x9a1 Return
	
Label_2466:
	var_32_string = ""; // 0x9a2 PushV
	var_32_string = "liver"; // 0x9a3 MovS
	func_2442(var_32_string); // 0x9a4 NEW_2
	var_43_string = ""; // 0x9a6 PushV
	var_43_string = "kidney"; // 0x9a7 MovS
	func_2442(var_43_string); // 0x9a8 NEW_2
	var_44_string = ""; // 0x9aa PushV
	var_44_string = "heart"; // 0x9ab MovS
	func_2442(var_44_string); // 0x9ac NEW_2
	var_45_string = ""; // 0x9ae PushV
	var_45_string = "blood"; // 0x9af MovS
	func_2442(var_45_string); // 0x9b0 NEW_2
	return 0; // 0x9b2 Return
}


func_2207(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x89f PushV
	IsPlayerActor(var_22_object, var_24_bool); // 0x8a0 Func
	var_25_bool = var_24_bool; // 0x8a2 Push
	if(var_25_bool == 0) goto Label_2215; // 0x8a3 JumpB
	var_26_string = "attack"; // 0x8a4 PushS
	PlayGlobalMusic(var_26_string); // 0x8a5 Func
	
Label_2215:
	return 2; // 0x8a7 Return
}


func_1953(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x7a1 PushV
	GetScene(var_32_object); // 0x7a2 Func
	var_34_string = "scripted"; // 0x7a4 PushS
	var_35_string = "blood_dir.xml"; // 0x7a5 PushS
	AddActorByType(var_33_object, var_34_string, var_32_object, var_28_cvector, var_29_cvector, var_35_string); // 0x7a6 Func
	var_36_object = Obj(); // 0x7a8 PushV
	var_36_object = var_25_object; // 0x7a9 Mov
	func_1841(var_36_object); // 0x7aa NEW_2
	return 4; // 0x7ac Return
}


func_1190(var_0_object, var_255_bool)
{
	var_256_bool = 0; var_257_bool = 0; // 0x4a6 PushV
	var_258_string = "IsAttacking"; // 0x4a7 PushS
	var_259_int = 1; // 0x4a8 PushI
	var_260_bool = IsFuncExist(var_0_object, var_258_string, var_259_int); // 0x4a9 FuncExist
	if(var_260_bool == 0) goto Label_1199; // 0x4aa JumpB
	IsAttacking(var_257_bool); // 0x4ab TObjFunc
	var_255_bool = var_257_bool; // 0x4ad Mov
	return 2; // 0x4ae Return
	
Label_1199:
	var_255_bool = 0; // 0x4af MovB
	return 2; // 0x4b0 Return
}


func_1703(var_404_float, var_405_object, var_406_float, var_407_int)
{
	var_411_int = 0; var_412_string = ""; var_413_int = 0; var_414_float = 0; var_415_float = 0; var_416_float = 0; var_417_int = 0; var_418_string = ""; var_419_int = 0; var_420_float = 0; var_421_float = 0; var_422_float = 0; // 0x6a7 PushV
	var_423_bool = 0; var_424_object = Obj(); var_425_string = ""; // 0x6a8 PushV
	var_424_object = var_405_object; // 0x6a9 Mov
	var_425_string = "health"; // 0x6aa MovS
	func_1691(var_423_bool, var_424_object, var_425_string); // 0x6ab NEW_2
	var_426_bool = var_423_bool == 0; // 0x6ad Not
	if(var_426_bool == 0) goto Label_1713; // 0x6ae JumpB
	var_404_float = 0.0; // 0x6af MovF
	return 12; // 0x6b0 Return
	
Label_1713:
	var_427_bool = 0; var_428_object = Obj(); var_429_string = ""; // 0x6b1 PushV
	var_428_object = var_405_object; // 0x6b2 Mov
	var_429_string = "armor"; // 0x6b3 MovS
	func_1691(var_427_bool, var_428_object, var_429_string); // 0x6b4 NEW_2
	var_430_bool = var_427_bool == 0; // 0x6b6 Not
	if(var_430_bool == 0) goto Label_1722; // 0x6b7 JumpB
	var_417_int = 0; // 0x6b8 MovI
	goto Label_1725; // 0x6b9 Jump
	
Label_1725:
	var_431_string = "armor_"; // 0x6bd PushS
	var_432_string = ""; var_433_int = 0; // 0x6be PushV
	var_433_int = var_407_int; // 0x6bf Mov
	func_1657(var_432_string, var_433_int); // 0x6c0 NEW_2
	var_418_string = var_431_string + var_432_string; // 0x6c2 Add2
	var_438_bool = 0; var_439_object = Obj(); var_440_string = ""; // 0x6c3 PushV
	var_439_object = var_405_object; // 0x6c4 Mov
	var_440_string = var_418_string; // 0x6c5 Mov
	func_1691(var_438_bool, var_439_object, var_440_string); // 0x6c6 NEW_2
	var_441_bool = var_438_bool == 0; // 0x6c8 Not
	if(var_441_bool == 0) goto Label_1740; // 0x6c9 JumpB
	var_419_int = 0; // 0x6ca MovI
	goto Label_1742; // 0x6cb Jump
	
Label_1742:
	var_442_float = 0; var_443_float = 0; var_444_float = 0; // 0x6ce PushV
	var_445_int = var_417_int + var_419_int; // 0x6cf Add
	var_446_float = 100.0; // 0x6d0 PushF
	var_443_float = var_445_int / var_445_int; // 0x6d1 Div2
	var_444_float = 1; // 0x6d2 MovI
	func_2174(var_442_float, var_443_float, var_444_float); // 0x6d3 NEW_2
	var_420_float = var_442_float; // 0x6d4 Mov
	var_448_string = "health"; // 0x6d6 PushS
	GetProperty(var_448_string, var_421_float); // 0x6d7 ObjFunc
	var_449_int = 1; // 0x6d9 PushI
	var_450_int = var_449_int - var_420_float; // 0x6da Sub
	var_422_float = var_406_float * var_450_int; // 0x6db Mult2
	var_451_string = "health"; // 0x6dc PushS
	var_452_float = 0; var_453_float = 0; var_454_float = 0; var_455_float = 0; // 0x6dd PushV
	var_453_float = var_421_float - var_422_float; // 0x6de Sub2
	var_454_float = 0; // 0x6df MovI
	var_455_float = 1; // 0x6e0 MovI
	func_2181(var_452_float, var_453_float, var_454_float, var_455_float); // 0x6e1 NEW_2
	SetProperty(var_451_string, var_452_float); // 0x6e3 ObjFunc
	var_458_bool = 0; var_459_object = Obj(); // 0x6e5 PushV
	var_459_object = var_405_object; // 0x6e6 Mov
	func_1686(var_458_bool, var_459_object); // 0x6e7 NEW_2
	if(var_458_bool == 0) goto Label_1774; // 0x6e9 JumpB
	var_460_float = 0; // 0x6ea PushV
	var_460_float = -var_422_float; // 0x6eb Neg2
	func_2192(var_460_float); // 0x6ec NEW_2
	
Label_1774:
	var_404_float = var_422_float; // 0x6ee Mov
	return 12; // 0x6ef Return
	
Label_1740:
	GetProperty(var_418_string, var_419_int); // 0x6cc ObjFunc
	
Label_1722:
	var_464_string = "armor"; // 0x6ba PushS
	GetProperty(var_464_string, var_417_int); // 0x6bb ObjFunc
}


func_2216()
{
	var_365_object = Obj(); var_366_object = Obj(); // 0x8a8 PushV
	GetScene(var_366_object); // 0x8a9 Func
	var_367_string = "battle"; // 0x8ab PushS
	var_368_object = Obj(); // 0x8ac PushV
	func_2158(var_368_object); // 0x8ad NEW_2
	BroadcastMessage(var_367_string, var_368_object, var_366_object); // 0x8af Func
	return 2; // 0x8b1 Return
}


func_1967()
{
	var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); // 0x7af PushV
	GetPosition(var_242_cvector); // 0x7b0 ObjFunc
	GetPosition(var_243_cvector); // 0x7b2 Func
	var_244_cvector = var_242_cvector - var_243_cvector; // 0x7b4 Sub2
	var_245_float = GetByIndex(var_244_cvector, 0); // 0x7b5 PushE
	var_246_float = GetByIndex(var_244_cvector, 2); // 0x7b6 PushE
	RotateAsync(var_245_float, var_246_float); // 0x7b7 Func
	return 6; // 0x7b9 Return
}


func_1201(var_2_object, var_5_int)
{
	var_372_float = 0; var_373_int = 0; var_374_float = 0; var_375_int = 0; // 0x4b1 PushV
	var_376_bool = var_2_object == 0; // 0x4b2 Not
	if(var_376_bool == 0) goto Label_1205; // 0x4b3 JumpB
	return 4; // 0x4b4 Return
	
Label_1205:
	var_377_int = var_5_int; // 0x4b5 PushT
	if(var_377_int == 0) goto Label_1213; // 0x4b6 JumpB
	var_378_int = -1; // 0x4b7 PushI
	var_5_int = var_5_int + var_378_int; // 0x4b8 Add2
	var_379_int = 0; // 0x4b9 PushI
	var_380_bool = var_5_int > var_379_int; // 0x4ba GT
	if(var_380_bool == 0) goto Label_1213; // 0x4bb JumpB
	return 4; // 0x4bc Return
	
Label_1213:
	rand(var_374_float); // 0x4bd Func
	var_381_float = 0; // 0x4bf PushV
	func_1251(var_381_float); // 0x4c0 NEW_2
	var_382_bool = var_374_float < var_381_float; // 0x4c2 LT
	if(var_382_bool == 0) goto Label_1232; // 0x4c3 JumpB
	irand(var_375_int, var_374_float); // 0x4c4 Func
	var_383_int = 1; // 0x4c6 PushI
	var_375_int = var_375_int + var_383_int; // 0x4c7 Add2
	var_384_string = "attack"; // 0x4c8 PushS
	var_385_int = var_384_string + var_375_int; // 0x4c9 Add
	Speak(var_385_int); // 0x4ca Func
	var_386_int = 0; // 0x4cc PushV
	func_1249(var_386_int); // 0x4cd NEW_2
	var_5_int = var_386_int; // 0x4ce TMov
	
Label_1232:
	return 4; // 0x4d0 Return
}


func_2227(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = ""; // 0x8b3 PushV
	var_54_string = "idle"; // 0x8b4 MovS
	var_55_int = var_52_int; // 0x8b5 Push
	if(var_55_int == 0) goto Label_2232; // 0x8b6 JumpB
	var_54_string = var_54_string + var_52_int; // 0x8b7 Add2
	
Label_2232:
	var_51_string = var_54_string; // 0x8b8 Mov
	return 2; // 0x8b9 Return
}


func_2483(var_586_int)
{
	var_586_int = 515572; // 0x9b3 MovI
	return 0; // 0x9b4 Return
}


func_1460(var_0_object, var_1_object, var_27_int)
{
	var_28_int = 0; // 0x5b5 PushI
	var_29_bool = var_27_int != var_28_int; // 0x5b6 Neq
	if(var_29_bool == 0) goto Label_1465; // 0x5b7 JumpB
	return 0; // 0x5b8 Return
	
Label_1465:
	var_30_bool = 0; var_31_object = Obj(); // 0x5b9 PushV
	var_31_object = var_1_object; // 0x5ba MovT
	func_1498(var_30_bool, var_31_object); // 0x5bb NEW_2
	var_66_bool = var_30_bool == 0; // 0x5bd Not
	if(var_66_bool == 0) goto Label_1472; // 0x5be JumpB
	var_0_object = 1; // 0x5bf TMovB
	
Label_1472:
	var_67_int = 0; // 0x5c0 PushI
	KillTimer(var_67_int); // 0x5c1 Func
	Stop(); // 0x5c3 Func
	return 0; // 0x5c5 Return
}


func_435(var_0_object, var_1_object, var_4_bool, var_22_bool)
{
	var_23_float = 0; var_24_float = 0; // 0x1b3 PushV
	var_25_bool = var_4_bool == 0; // 0x1b4 NullEq
	if(var_25_bool == 0) goto Label_440; // 0x1b5 JumpB
	var_22_bool = 0; // 0x1b6 MovB
	return 2; // 0x1b7 Return
	
Label_440:
	var_26_float = 0; var_27_object = Obj(); // 0x1b8 PushV
	var_27_object = var_4_bool; // 0x1b9 MovT
	func_1678(var_27_object); // 0x1ba NEW_2
	var_24_float = sqrt(var_26_float); // 0x1bc Sqrt2
	var_34_object = var_2_object; // 0x1bd PushT
	if(var_34_object == 0) goto Label_448; // 0x1be JumpB
	var_24_float = var_24_float - var_1_object; // 0x1bf Sub2
	
Label_448:
	var_22_bool = var_24_float < var_0_object; // 0x1c0 LT2
	return 2; // 0x1c1 Return
}


func_2485(var_585_int)
{
	var_585_int = 504031; // 0x9b5 MovI
	return 0; // 0x9b6 Return
}


func_2487(var_587_string)
{
	var_587_string = "ui/NPC_Citizen2.png"; // 0x9b7 MovS
	return 0; // 0x9b8 Return
}


func_2489(var_588_string)
{
	var_588_string = "ui/NPC_Citizen2_b.png"; // 0x9b9 MovS
	return 0; // 0x9ba Return
}


func_2234(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x8ba PushV
	var_48_int = 0; // 0x8bb MovI
	
Label_2236:
	var_50_string = "all"; // 0x8bc PushS
	var_51_string = ""; var_52_int = 0; // 0x8bd PushV
	var_52_int = var_48_int; // 0x8be Mov
	func_2227(var_51_string, var_52_int); // 0x8bf NEW_2
	HasAnimation(var_49_bool, var_50_string, var_51_string); // 0x8c1 Func
	var_56_bool = var_49_bool == 0; // 0x8c3 Not
	if(var_56_bool == 0) goto Label_2246; // 0x8c4 JumpB
	goto Label_2249; // 0x8c5 Jump
	
Label_2249:
	var_45_int = var_48_int; // 0x8c9 Mov
	return 4; // 0x8ca Return
	
Label_2246:
	var_57_int = 1; // 0x8c6 PushI
	var_48_int = var_48_int + var_57_int; // 0x8c7 Add2
	goto Label_2236; // 0x8c8 Jump
}


func_1978(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x7ba PushV
	IsLoaded(var_24_bool); // 0x7bb Func
	var_22_bool = var_24_bool; // 0x7bd Mov
	return 2; // 0x7be Return
}


func_2491(var_580_bool)
{
	var_580_bool = 0; // 0x9bb MovB
	return 0; // 0x9bc Return
}


func_2493(var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x9bd PushV
	var_24_string = "b1q05ToAttack"; // 0x9be PushS
	GetVariable(var_24_string, var_23_int); // 0x9bf Func
	var_25_int = 0; // 0x9c1 PushI
	var_21_bool = var_23_int != var_25_int; // 0x9c2 Neq2
	return 2; // 0x9c3 Return
}


func_1983(var_538_bool, var_540_float)
{
	var_541_float = 0; var_542_cvector = CVector(0,0,0); var_543_cvector = CVector(0,0,0); var_544_cvector = CVector(0,0,0); var_545_cvector = CVector(0,0,0); var_546_cvector = CVector(0,0,0); var_547_cvector = CVector(0,0,0); var_548_bool = 0; var_549_bool = 0; var_550_float = 0; var_551_cvector = CVector(0,0,0); var_552_cvector = CVector(0,0,0); var_553_cvector = CVector(0,0,0); var_554_cvector = CVector(0,0,0); var_555_cvector = CVector(0,0,0); var_556_cvector = CVector(0,0,0); var_557_bool = 0; var_558_bool = 0; // 0x7bf PushV
	GetPosition(var_551_cvector); // 0x7c0 ObjFunc
	GetEyesHeight(var_550_float); // 0x7c2 ObjFunc
	var_559_float = GetByIndex(var_551_cvector, 1); // 0x7c4 PushE
	var_559_float = var_559_float + var_550_float; // 0x7c5 Add2
	SetByIndex(var_551_cvector, 1) = var_559_float; // 0x7c6 PopE
	GetPosition(var_552_cvector); // 0x7c7 Func
	GetEyesHeight(var_550_float); // 0x7c9 Func
	var_560_float = GetByIndex(var_552_cvector, 1); // 0x7cb PushE
	var_560_float = var_560_float + var_550_float; // 0x7cc Add2
	SetByIndex(var_552_cvector, 1) = var_560_float; // 0x7cd PopE
	var_553_cvector = var_551_cvector - var_552_cvector; // 0x7ce Sub2
	var_561_float = GetByIndex(var_553_cvector, 1); // 0x7cf PushE
	var_561_float = 0; // 0x7d0 MovI
	SetByIndex(var_553_cvector, 1) = var_561_float; // 0x7d1 PopE
	var_562_int = var_553_cvector | var_553_cvector; // 0x7d2 Or
	var_563_float = sqrt(var_562_int); // 0x7d3 Sqrt
	var_553_cvector = var_553_cvector / var_553_cvector; // 0x7d4 Div2
	var_554_cvector = -var_553_cvector; // 0x7d5 Neg2
	var_564_float = var_553_cvector * var_540_float; // 0x7d6 Mult
	var_565_cvector = CVector(0,0,0); var_566_cvector = CVector(0,0,0); // 0x7d7 PushV
	var_567_cvector = CVector(0.0, 1.0, 0.0); // 0x7d8 PushVec
	var_566_cvector = var_554_cvector ^ var_567_cvector; // 0x7d9 Xor2
	func_2164(var_565_cvector, var_566_cvector); // 0x7da NEW_2
	var_573_int = 25; // 0x7dc PushI
	var_574_float = var_565_cvector * var_573_int; // 0x7dd Mult
	var_575_int = var_564_float + var_574_float; // 0x7de Add
	var_576_cvector = CVector(0.0, 10.0, 0.0); // 0x7df PushVec
	var_555_cvector = var_575_int - var_576_cvector; // 0x7e0 Sub2
	var_556_cvector = var_552_cvector + var_555_cvector; // 0x7e1 Add2
	IsOverrideActive(var_557_bool); // 0x7e2 Func
	var_577_bool = var_557_bool; // 0x7e4 Push
	if(var_577_bool == 0) goto Label_2024; // 0x7e5 JumpB
	var_538_bool = 0; // 0x7e6 MovB
	return 18; // 0x7e7 Return
	
Label_2024:
	StopWorld(); // 0x7e8 Func
	CameraTransit(var_556_cvector, var_554_cvector); // 0x7ea Func
	var_578_float = GetByIndex(var_555_cvector, 0); // 0x7ec PushE
	var_579_float = GetByIndex(var_555_cvector, 2); // 0x7ed PushE
	Rotate(var_578_float, var_579_float); // 0x7ee Func
	var_580_bool = 0; // 0x7f0 PushV
	func_2491(var_580_bool); // 0x7f1 NEW_2
	if(var_580_bool == 0) goto Label_2037; // 0x7f3 JumpB
	goto Label_2045; // 0x7f4 Jump
	
Label_2045:
	CameraWaitForPlayFinish(); // 0x7fd Func
	ResumeWorld(); // 0x7ff Func
	var_538_bool = 1; // 0x801 MovB
	return 18; // 0x802 Return
	
Label_2037:
	var_581_string = "head"; // 0x7f5 PushS
	HasAnimationTrack(var_558_bool, var_581_string); // 0x7f6 Func
	var_582_bool = var_558_bool; // 0x7f8 Push
	if(var_582_bool == 0) goto Label_2045; // 0x7f9 JumpB
	var_583_string = "head"; // 0x7fa PushS
	LookAsyncCamera(var_583_string); // 0x7fb Func
}


func_2500()
{
	var_23_string = "b1q05ToAttack"; // 0x9c4 PushS
	var_24_int = 1; // 0x9c5 PushI
	SetVariable(var_23_string, var_24_int); // 0x9c6 Func
	return 0; // 0x9c8 Return
}


func_2505(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x9c9 PushV
	GetScene(var_22_object); // 0x9ca Func
	var_23_object = Obj(); // 0x9cc PushV
	func_2158(var_23_object); // 0x9cd NEW_2
	RemoveStationaryActor(var_23_object); // 0x9cf ObjFunc
	func_2459(); // 0x9d2 NEW_2
	var_46_object = Obj(); // 0x9d4 PushV
	var_46_object = var_20_object; // 0x9d5 Mov
	TaskCall(5); // 0x9d6 TaskCall
	func_1509(var_46_object); // 0x9d7 NEW_2
	TaskReturn(); // 0x9d8 TaskReturn
	return 2; // 0x9da Return
}


func_1482(var_0_object)
{
	var_0_object = 1; // 0x5ca TMovB
	var_23_int = 0; // 0x5cb PushI
	KillTimer(var_23_int); // 0x5cc Func
	Stop(); // 0x5ce Func
	return 0; // 0x5d0 Return
}


func_2251()
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x8cb PushV
	var_29_object = Obj(); // 0x8cc PushV
	func_2356(var_29_object); // 0x8cd NEW_2
	var_28_object = var_29_object; // 0x8ce Mov
	var_36_string = "b1q05PatrolGroup"; // 0x8d0 PushS
	var_37_string = "pt_b1q05_patrol1"; // 0x8d1 PushS
	var_38_int = 0; // 0x8d2 PushI
	var_39_int = 530956; // 0x8d3 PushI
	var_40_float = 0; // 0x8d4 PushV
	func_2202(var_40_float); // 0x8d5 NEW_2
	AddMark(var_36_string, var_37_string, var_38_int, var_39_int, var_40_float); // 0x8d7 ObjFunc
	func_2289(); // 0x8da NEW_2
	func_2302(); // 0x8dd NEW_2
	return 2; // 0x8df Return
}


func_1233(var_0_object)
{
	var_128_object = Obj(); // 0x4d1 PushV
	var_128_object = var_0_object; // 0x4d2 MovT
	func_2207(var_128_object); // 0x4d3 NEW_2
	return 0; // 0x4d5 Return
}


func_1238(var_465_int)
{
	var_465_int = 0; // 0x4d6 MovI
	return 0; // 0x4d7 Return
}


func_1240()
{
	var_261_string = ""; // 0x4d8 PushV
	var_261_string = "attack_stay"; // 0x4d9 MovS
	func_2117(var_261_string); // 0x4da NEW_2
	return 0; // 0x4dc Return
}


func_473(var_2_object, var_3_string)
{
	func_568(); // 0x1da NEW_2
	var_20_int = 10; // 0x1dc PushI
	KillTimer(var_20_int); // 0x1dd Func
	var_21_object = var_2_object; // 0x1df PushT
	if(var_21_object == 0) goto Label_485; // 0x1e0 JumpB
	var_22_string = "head"; // 0x1e1 PushS
	UnlookAsync(var_22_string); // 0x1e2 Func
	var_2_object = 0; // 0x1e4 TMovB
	
Label_485:
	var_3_string = 1; // 0x1e5 TMovB
	return 0; // 0x1e6 Return
}


func_1498(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj(); // 0x5db PushV
	var_33_object = var_31_object; // 0x5dc Mov
	func_1817(var_32_bool, var_33_object); // 0x5dd NEW_2
	var_30_bool = var_32_bool; // 0x5de Mov
	return 0; // 0x5e0 Return
}


func_1245()
{
	return 0; // 0x4de Return
}


func_1247(var_490_bool)
{
	var_490_bool = 1; // 0x4df MovB
	return 0; // 0x4e0 Return
}


func_2273()
{
	var_76_object = Obj(); var_77_string = ""; var_78_float = 0; // 0x8e2 PushV
	var_79_object = Obj(); // 0x8e3 PushV
	func_2356(var_79_object); // 0x8e4 NEW_2
	var_76_object = var_79_object; // 0x8e5 Mov
	var_77_string = "pt_b1q05_patrol1"; // 0x8e7 MovS
	var_78_float = 2; // 0x8e8 MovI
	func_2373(var_76_object, var_77_string, var_78_float); // 0x8e9 NEW_2
	var_99_object = Obj(); // 0x8eb PushV
	func_2356(var_99_object); // 0x8ec NEW_2
	ShowMap(var_99_object); // 0x8ee ObjFunc
	return 0; // 0x8f0 Return
}


func_1249(var_386_int)
{
	var_386_int = 1; // 0x4e1 MovI
	return 0; // 0x4e2 Return
}


func_1251(var_381_float)
{
	var_381_float = 0.5; // 0x4e3 MovF
	return 0; // 0x4e4 Return
}


func_1505(var_204_string)
{
	var_204_string = "walk"; // 0x5e1 MovS
	return 0; // 0x5e2 Return
}


func_1253(var_2_object, var_135_bool, var_136_object, var_137_float, var_138_float, var_139_bool, var_140_bool)
{
	var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; var_147_bool = 0; // 0x4e5 PushV
	var_148_object = Obj(); // 0x4e6 PushV
	var_148_object = var_136_object; // 0x4e7 Mov
	func_2207(var_148_object); // 0x4e8 NEW_2
	var_149_int = 1; // 0x4ea PushI
	var_150_int = 5; // 0x4eb PushI
	SetTimer(var_149_int, var_150_int); // 0x4ec Func
	CanSee(var_146_bool, var_136_object); // 0x4ee Func
	var_151_bool = var_146_bool; // 0x4f0 Push
	if(var_151_bool == 0) goto Label_1272; // 0x4f1 JumpB
	var_2_object = 1; // 0x4f2 TMovB
	var_152_object = Obj(); // 0x4f3 PushV
	var_152_object = var_136_object; // 0x4f4 Mov
	func_2099(var_152_object); // 0x4f5 NEW_2
	goto Label_1273; // 0x4f7 Jump
	
Label_1273:
	var_159_bool = 0; var_160_object = Obj(); // 0x4f9 PushV
	var_160_object = var_136_object; // 0x4fa Mov
	func_1686(var_159_bool, var_160_object); // 0x4fb NEW_2
	if(var_159_bool == 0) goto Label_1283; // 0x4fd JumpB
	var_163_object = Obj(); // 0x4fe PushV
	func_2158(var_163_object); // 0x4ff NEW_2
	SendPlayerEnemy(var_136_object, var_163_object); // 0x501 Func
	
Label_1283:
	var_164_bool = 0; var_165_object = Obj(); var_166_float = 0; var_167_float = 0; var_168_bool = 0; var_169_bool = 0; // 0x503 PushV
	var_165_object = var_136_object; // 0x504 Mov
	var_166_float = var_137_float; // 0x505 Mov
	var_167_float = var_138_float; // 0x506 Mov
	var_168_bool = var_139_bool; // 0x507 Mov
	var_169_bool = var_140_bool; // 0x508 Mov
	func_1358(var_146_bool, var_147_bool, var_164_bool, var_165_object, var_166_float, var_167_float, var_168_bool, var_169_bool); // 0x509 NEW_2
	var_147_bool = var_164_bool; // 0x50a Mov
	var_215_object = var_2_object; // 0x50c PushT
	if(var_215_object == 0) goto Label_1297; // 0x50d JumpB
	var_216_string = "head"; // 0x50e PushS
	UnlookAsync(var_216_string); // 0x50f Func
	
Label_1297:
	var_217_int = 1; // 0x511 PushI
	KillTimer(var_217_int); // 0x512 Func
	var_135_bool = var_147_bool; // 0x514 Mov
	return 4; // 0x515 Return
	
Label_1272:
	var_2_object = 0; // 0x4f8 TMovB
}


func_1507(var_205_string)
{
	var_205_string = "run"; // 0x5e3 MovS
	return 0; // 0x5e4 Return
}


func_1509(var_46_object)
{
	EventDisable(0); // 0x5e6 EventDisable
	var_47_object = Obj(); // 0x5e7 PushV
	var_47_object = var_46_object; // 0x5e8 Mov
	func_1534(var_47_object); // 0x5e9 NEW_2
	var_127_int = 50; // 0x5eb PushI
	var_128_int = 40; // 0x5ec PushI
	SetRTEnvelope(var_127_int, var_128_int); // 0x5ed Func
	EventEnable(0); // 0x5ef EventEnable
	
Label_1520:
	Hold(); // 0x5f0 Func
	goto Label_1520; // 0x5f2 Jump
}


func_487()
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0; // 0x1e7 PushV
	WaitForAnimEnd(); // 0x1e8 Func
	var_43_bool = 0; // 0x1ea PushV
	func_1978(var_43_bool); // 0x1eb NEW_2
	var_44_bool = var_43_bool == 0; // 0x1ed Not
	if(var_44_bool == 0) goto Label_496; // 0x1ee JumpB
	return 14; // 0x1ef Return
	
Label_496:
	var_45_int = 0; // 0x1f0 PushV
	func_2234(var_45_int); // 0x1f1 NEW_2
	var_36_int = var_45_int; // 0x1f2 Mov
	var_37_int = 0; // 0x1f4 MovI
	
Label_501:
	var_58_bool = 0; // 0x1f5 PushV
	var_58_bool = 0; // 0x1f6 MovB
	var_59_int = 5; // 0x1f7 PushI
	var_60_bool = var_37_int < var_59_int; // 0x1f8 LT
	if(var_60_bool == 0) goto Label_511; // 0x1f9 JumpB
	var_61_bool = 0; // 0x1fa PushV
	func_1978(var_61_bool); // 0x1fb NEW_2
	if(var_61_bool == 0) goto Label_511; // 0x1fd JumpB
	var_58_bool = 1; // 0x1fe MovB
	
Label_511:
	if(var_58_bool == 0) goto Label_563; // 0x1ff JumpB
	var_62_int = 3; // 0x200 PushI
	irand(var_38_int, var_62_int); // 0x201 Func
	var_63_int = 0; // 0x203 PushI
	var_64_bool = var_38_int == var_63_int; // 0x204 Eq
	if(var_64_bool == 0) goto Label_535; // 0x205 JumpB
	var_65_int = var_36_int; // 0x206 Push
	if(var_65_int == 0) goto Label_534; // 0x207 JumpB
	irand(var_39_int, var_36_int); // 0x208 Func
	var_66_string = "all"; // 0x20a PushS
	var_67_string = ""; var_68_int = 0; // 0x20b PushV
	var_68_int = var_39_int; // 0x20c Mov
	func_2227(var_67_string, var_68_int); // 0x20d NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x20f Func
	WaitForAnimEnd(var_40_bool); // 0x211 Func
	var_69_bool = var_40_bool == 0; // 0x213 Not
	if(var_69_bool == 0) goto Label_534; // 0x214 JumpB
	goto Label_563; // 0x215 Jump
	
Label_563:
	ResetAAS(); // 0x233 Func
	return 14; // 0x235 Return
	
Label_534:
	goto Label_552; // 0x216 Jump
	
Label_552:
	var_70_bool = 0; // 0x228 PushV
	func_566(var_70_bool); // 0x229 NEW_2
	var_71_bool = var_70_bool == 0; // 0x22b Not
	if(var_71_bool == 0) goto Label_558; // 0x22c JumpB
	goto Label_563; // 0x22d Jump
	
Label_558:
	ResetAAS(); // 0x22e Func
	var_72_int = 1; // 0x230 PushI
	var_37_int = var_37_int + var_72_int; // 0x231 Add2
	goto Label_501; // 0x232 Jump
	
Label_535:
	var_73_int = 1; // 0x217 PushI
	var_74_bool = var_38_int == var_73_int; // 0x218 Eq
	if(var_74_bool == 0) goto Label_549; // 0x219 JumpB
	var_75_int = 4; // 0x21a PushI
	rand(var_41_float, var_75_int); // 0x21b Func
	var_76_int = 1; // 0x21d PushI
	var_77_int = var_41_float + var_76_int; // 0x21e Add
	Sleep(var_77_int, var_42_bool); // 0x21f Func
	var_78_bool = var_42_bool == 0; // 0x221 Not
	if(var_78_bool == 0) goto Label_548; // 0x222 JumpB
	goto Label_563; // 0x223 Jump
	
Label_548:
	goto Label_552; // 0x224 Jump
	
Label_549:
	var_79_int = var_37_int; // 0x225 Push
	if(var_79_int == 0) goto Label_552; // 0x226 JumpB
	goto Label_563; // 0x227 Jump
}


func_1776(var_47_bool)
{
	var_49_bool = 0; var_50_bool = 0; // 0x6f0 PushV
	IsDead(var_50_bool); // 0x6f1 ObjFunc
	var_47_bool = var_50_bool; // 0x6f3 Mov
	return 2; // 0x6f4 Return
}


func_2289()
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x8f1 PushV
	var_45_int = 582; // 0x8f2 PushI
	var_46_int = 2; // 0x8f3 PushI
	var_47_int = 530951; // 0x8f4 PushI
	CreateDiaryEntry(var_44_object, var_45_int, var_46_int, var_47_int); // 0x8f5 Func
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0; // 0x8f7 PushV
	var_49_object = var_44_object; // 0x8f8 Mov
	var_50_int = -1; // 0x8f9 MovI
	func_2328(var_48_bool, var_49_object, var_50_int); // 0x8fa NEW_2
	return 2; // 0x8fc Return
}


func_1781(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); // 0x6f5 PushV
	var_42_bool = var_37_object == 0; // 0x6f6 NullEq
	if(var_42_bool == 0) goto Label_1786; // 0x6f7 JumpB
	var_36_bool = 0; // 0x6f8 MovB
	return 4; // 0x6f9 Return
	
Label_1786:
	var_43_bool = 0; // 0x6fa PushV
	var_43_bool = 0; // 0x6fb MovB
	var_44_string = "IsDead"; // 0x6fc PushS
	var_45_int = 1; // 0x6fd PushI
	var_46_bool = IsFuncExist(var_37_object, var_44_string, var_45_int); // 0x6fe FuncExist
	if(var_46_bool == 0) goto Label_1798; // 0x6ff JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0x700 PushV
	var_48_object = var_37_object; // 0x701 Mov
	func_1776(var_48_object); // 0x702 NEW_2
	if(var_47_bool == 0) goto Label_1798; // 0x704 JumpB
	var_43_bool = 1; // 0x705 MovB
	
Label_1798:
	if(var_43_bool == 0) goto Label_1801; // 0x706 JumpB
	var_36_bool = 0; // 0x707 MovB
	return 4; // 0x708 Return
	
Label_1801:
	GetScene(var_40_object); // 0x709 Func
	var_51_bool = var_40_object == 0; // 0x70b NullEq
	if(var_51_bool == 0) goto Label_1807; // 0x70c JumpB
	var_36_bool = 0; // 0x70d MovB
	return 4; // 0x70e Return
	
Label_1807:
	GetScene(var_41_object); // 0x70f ObjFunc
	var_52_bool = var_40_object != var_41_object; // 0x711 Neq
	if(var_52_bool == 0) goto Label_1813; // 0x712 JumpB
	var_36_bool = 0; // 0x713 MovB
	return 4; // 0x714 Return
	
Label_1813:
	var_36_bool = 1; // 0x715 MovB
	return 4; // 0x716 Return
}


func_2302()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x8fe PushV
	var_68_int = 583; // 0x8ff PushI
	var_69_int = 2; // 0x900 PushI
	var_70_int = 530952; // 0x901 PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x902 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x904 PushV
	var_72_object = var_67_object; // 0x905 Mov
	var_73_int = 582; // 0x906 MovI
	func_2328(var_71_bool, var_72_object, var_73_int); // 0x907 NEW_2
	return 2; // 0x909 Return
}


