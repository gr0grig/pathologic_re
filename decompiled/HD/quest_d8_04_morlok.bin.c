task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 1; // 0xa5 PushI
	if(var_17_int == 0) goto Label_387; // 0xa6 JumpB
	func_2103(); // 0xa8 NEW_2
	var_19_int = 34838; // 0xaa PushI
	var_20_bool = var_16_bool == var_19_int; // 0xab Eq
	if(var_20_bool == 0) goto Label_183; // 0xac JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xad PushV
	var_21_object = var_1_object; // 0xae MovT
	var_22_object = var_0_object; // 0xaf MovT
	func_2268(); // 0xb0 NEW_2
	var_48_object = Obj(); var_49_object = Obj(); // 0xb2 PushV
	var_48_object = var_1_object; // 0xb3 MovT
	var_49_object = var_0_object; // 0xb4 MovT
	func_2263(); // 0xb5 NEW_2
	
Label_183:
	var_51_int = 34839; // 0xb7 PushI
	var_52_bool = var_16_bool == var_51_int; // 0xb8 Eq
	if(var_52_bool == 0) goto Label_191; // 0xb9 JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0xba PushV
	var_53_object = var_1_object; // 0xbb MovT
	var_54_object = var_0_object; // 0xbc MovT
	func_2268(); // 0xbd NEW_2
	
Label_191:
	var_55_int = 34836; // 0xbf PushI
	var_56_bool = var_16_bool == var_55_int; // 0xc0 Eq
	if(var_56_bool == 0) goto Label_204; // 0xc1 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xc2 PushV
	var_57_object = var_1_object; // 0xc3 MovT
	var_58_object = var_0_object; // 0xc4 MovT
	func_2277(); // 0xc5 NEW_2
	var_73_object = Obj(); var_74_object = Obj(); // 0xc7 PushV
	var_73_object = var_1_object; // 0xc8 MovT
	var_74_object = var_0_object; // 0xc9 MovT
	func_2263(); // 0xca NEW_2
	
Label_204:
	var_75_int = 34832; // 0xcc PushI
	var_76_bool = var_15_object == var_75_int; // 0xcd Eq
	if(var_76_bool == 0) goto Label_237; // 0xce JumpB
	var_77_string = ""; // 0xcf PushV
	var_77_string = "Neutral"; // 0xd0 MovS
	func_142(var_16_bool, var_77_string); // 0xd1 NEW_2
	var_94_int = 533328; // 0xd3 PushI
	SetMessage(var_94_int); // 0xd4 TObjFunc
	ClearReplies(); // 0xd6 TObjFunc
	var_95_bool = 0; var_96_object = Obj(); // 0xd8 PushV
	var_96_object = var_1_object; // 0xd9 MovT
	func_2287(var_96_object); // 0xda NEW_2
	if(var_95_bool == 0) goto Label_226; // 0xdc JumpB
	var_103_int = 533329; // 0xdd PushI
	var_104_int = 37766; // 0xde PushI
	var_105_int = 34833; // 0xdf PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0xe0 TObjFunc
	
Label_226:
	var_106_int = 533336; // 0xe2 PushI
	var_107_int = -1; // 0xe3 PushI
	var_108_int = 34840; // 0xe4 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0xe5 TObjFunc
	var_109_int = 536033; // 0xe7 PushI
	var_110_int = -1; // 0xe8 PushI
	var_111_int = 37770; // 0xe9 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0xea TObjFunc
	return 0; // 0xec Return
	
Label_237:
	var_112_int = 37766; // 0xed PushI
	var_113_bool = var_15_object == var_112_int; // 0xee Eq
	if(var_113_bool == 0) goto Label_260; // 0xef JumpB
	var_114_string = ""; // 0xf0 PushV
	var_114_string = "Neutral"; // 0xf1 MovS
	func_142(var_16_bool, var_114_string); // 0xf2 NEW_2
	var_115_int = 536029; // 0xf4 PushI
	SetMessage(var_115_int); // 0xf5 TObjFunc
	ClearReplies(); // 0xf7 TObjFunc
	var_116_int = 536030; // 0xf9 PushI
	var_117_int = 37768; // 0xfa PushI
	var_118_int = 37767; // 0xfb PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0xfc TObjFunc
	var_119_int = 536034; // 0xfe PushI
	var_120_int = 37768; // 0xff PushI
	var_121_int = 37771; // 0x100 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x101 TObjFunc
	return 0; // 0x103 Return
	
Label_260:
	var_122_int = 37768; // 0x104 PushI
	var_123_bool = var_15_object == var_122_int; // 0x105 Eq
	if(var_123_bool == 0) goto Label_288; // 0x106 JumpB
	var_124_string = ""; // 0x107 PushV
	var_124_string = "Neutral"; // 0x108 MovS
	func_142(var_16_bool, var_124_string); // 0x109 NEW_2
	var_125_int = 536031; // 0x10b PushI
	SetMessage(var_125_int); // 0x10c TObjFunc
	ClearReplies(); // 0x10e TObjFunc
	var_126_int = 536032; // 0x110 PushI
	var_127_int = 34834; // 0x111 PushI
	var_128_int = 37769; // 0x112 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x113 TObjFunc
	var_129_int = 536035; // 0x115 PushI
	var_130_int = 34834; // 0x116 PushI
	var_131_int = 37773; // 0x117 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x118 TObjFunc
	var_132_int = 533332; // 0x11a PushI
	var_133_int = -1; // 0x11b PushI
	var_134_int = 34836; // 0x11c PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_135_int = 34834; // 0x120 PushI
	var_136_bool = var_15_object == var_135_int; // 0x121 Eq
	if(var_136_bool == 0) goto Label_311; // 0x122 JumpB
	var_137_string = ""; // 0x123 PushV
	var_137_string = "Neutral"; // 0x124 MovS
	func_142(var_16_bool, var_137_string); // 0x125 NEW_2
	var_138_int = 533330; // 0x127 PushI
	SetMessage(var_138_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_139_int = 533331; // 0x12c PushI
	var_140_int = 34837; // 0x12d PushI
	var_141_int = 34835; // 0x12e PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x12f TObjFunc
	var_142_int = 536036; // 0x131 PushI
	var_143_int = 37776; // 0x132 PushI
	var_144_int = 37775; // 0x133 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_145_int = 37776; // 0x137 PushI
	var_146_bool = var_15_object == var_145_int; // 0x138 Eq
	if(var_146_bool == 0) goto Label_334; // 0x139 JumpB
	var_147_string = ""; // 0x13a PushV
	var_147_string = "Neutral"; // 0x13b MovS
	func_142(var_16_bool, var_147_string); // 0x13c NEW_2
	var_148_int = 536037; // 0x13e PushI
	SetMessage(var_148_int); // 0x13f TObjFunc
	ClearReplies(); // 0x141 TObjFunc
	var_149_int = 536038; // 0x143 PushI
	var_150_int = 37778; // 0x144 PushI
	var_151_int = 37777; // 0x145 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x146 TObjFunc
	var_152_int = 536040; // 0x148 PushI
	var_153_int = 34837; // 0x149 PushI
	var_154_int = 37779; // 0x14a PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x14b TObjFunc
	return 0; // 0x14d Return
	
Label_334:
	var_155_int = 37778; // 0x14e PushI
	var_156_bool = var_15_object == var_155_int; // 0x14f Eq
	if(var_156_bool == 0) goto Label_352; // 0x150 JumpB
	var_157_string = ""; // 0x151 PushV
	var_157_string = "Neutral"; // 0x152 MovS
	func_142(var_16_bool, var_157_string); // 0x153 NEW_2
	var_158_int = 536039; // 0x155 PushI
	SetMessage(var_158_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_159_int = 536041; // 0x15a PushI
	var_160_int = 34837; // 0x15b PushI
	var_161_int = 37781; // 0x15c PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x15d TObjFunc
	return 0; // 0x15f Return
	
Label_352:
	var_162_int = 34837; // 0x160 PushI
	var_163_bool = var_15_object == var_162_int; // 0x161 Eq
	if(var_163_bool == 0) goto Label_375; // 0x162 JumpB
	var_164_string = ""; // 0x163 PushV
	var_164_string = "Neutral"; // 0x164 MovS
	func_142(var_16_bool, var_164_string); // 0x165 NEW_2
	var_165_int = 533333; // 0x167 PushI
	SetMessage(var_165_int); // 0x168 TObjFunc
	ClearReplies(); // 0x16a TObjFunc
	var_166_int = 533334; // 0x16c PushI
	var_167_int = -1; // 0x16d PushI
	var_168_int = 34838; // 0x16e PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x16f TObjFunc
	var_169_int = 533335; // 0x171 PushI
	var_170_int = -1; // 0x172 PushI
	var_171_int = 34839; // 0x173 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x174 TObjFunc
	return 0; // 0x176 Return
	
Label_375:
	var_3_string = 1; // 0x177 TMovB
	var_172_bool = 0; // 0x178 PushV
	func_2410(var_172_bool); // 0x179 NEW_2
	if(var_172_bool == 0) goto Label_383; // 0x17b JumpB
	lshStopAnimation(); // 0x17c Func
	goto Label_385; // 0x17e Jump
	
Label_385:
	return 0; // 0x181 Return
	
Label_383:
	StopAnimation(); // 0x17f Func
	
Label_387:
	return 0; // 0x183 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	func_560(); // 0x186 NEW_2
	var_16_int = -1; // 0x188 PushI
	var_17_int = 0; var_18_object = Obj(); // 0x189 PushV
	var_18_object = var_15_bool; // 0x18a Mov
	TaskCall(0); // 0x18b TaskCall
	func_0(var_19_object, var_17_int, var_18_object); // 0x18c NEW_2
	TaskReturn(); // 0x18d TaskReturn
	var_158_bool = var_16_int != var_19_object; // 0x18f Neq
	if(var_158_bool == 0) goto Label_406; // 0x190 JumpB
	var_159_bool = 0; var_160_string = ""; var_161_string = ""; // 0x191 PushV
	var_160_string = "quest_d8_04"; // 0x192 MovS
	var_161_string = "attack"; // 0x193 MovS
	func_2207(var_159_bool, var_160_string, var_161_string); // 0x194 NEW_2
	
Label_406:
	return 0; // 0x196 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0; // 0x197 PushV
	IsPlayerActor(var_15_bool, var_17_bool); // 0x198 Func
	var_18_bool = var_17_bool; // 0x19a Push
	if(var_18_bool == 0) goto Label_417; // 0x19b JumpB
	var_19_bool = 0; var_20_string = ""; var_21_string = ""; // 0x19c PushV
	var_20_string = "quest_d8_04"; // 0x19d MovS
	var_21_string = "attack"; // 0x19e MovS
	func_2207(var_19_bool, var_20_string, var_21_string); // 0x19f NEW_2
	
Label_417:
	return 2; // 0x1a1 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_string = "attack"; // 0x1a3 PushS
	var_17_bool = var_15_bool == var_16_string; // 0x1a4 Eq
	if(var_17_bool == 0) goto Label_434; // 0x1a5 JumpB
	func_560(); // 0x1a7 NEW_2
	var_18_object = Obj(); // 0x1a9 PushV
	var_19_object = Obj(); // 0x1aa PushV
	func_1670(var_19_object); // 0x1ab NEW_2
	var_18_object = var_19_object; // 0x1ac Mov
	TaskCall(3); // 0x1ae TaskCall
	func_565(var_18_object); // 0x1af NEW_2
	TaskReturn(); // 0x1b0 TaskReturn
	
Label_434:
	return 0; // 0x1b2 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	StopGroup0(); // 0x1c8 Func
	sync(); // 0x1ca Func
	return 0; // 0x1cc Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_bool = 0; // 0x1cd PushV
	var_15_bool = 0; // 0x1ce MovB
	var_16_object = var_0_object; // 0x1cf PushT
	if(var_16_object == 0) goto Label_470; // 0x1d0 JumpB
	var_17_bool = 0; // 0x1d1 PushV
	func_477(var_17_bool); // 0x1d2 NEW_2
	if(var_17_bool == 0) goto Label_470; // 0x1d4 JumpB
	var_15_bool = 1; // 0x1d5 MovB
	
Label_470:
	if(var_15_bool == 0) goto Label_476; // 0x1d6 JumpB
	var_18_object = Obj(); // 0x1d7 PushV
	func_2151(var_18_object); // 0x1d8 NEW_2
	RemoveActor(var_18_object); // 0x1da Func
	
Label_476:
	return 0; // 0x1dc Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_int)
{
	var_16_int = 1; // 0x50f PushI
	var_17_bool = var_15_int == var_16_int; // 0x510 Eq
	if(var_17_bool == 0) goto Label_1303; // 0x511 JumpB
	var_18_object = Obj(); // 0x512 PushV
	var_18_object = var_1_object; // 0x513 MovT
	func_2219(var_18_object); // 0x514 NEW_2
	goto Label_1307; // 0x516 Jump
	
Label_1307:
	return 0; // 0x51b Return
	
Label_1303:
	var_23_int = 0; // 0x517 PushV
	var_23_int = var_15_int; // 0x518 Mov
	func_1452(var_14_bool, var_15_int, var_23_int); // 0x519 NEW_2
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; // 0x52a PushV
	var_16_bool = 0; // 0x52b MovB
	var_17_bool = var_1_object == var_15_object; // 0x52c Eq
	if(var_17_bool == 0) goto Label_1329; // 0x52d JumpB
	var_18_bool = var_2_object == 0; // 0x52e Not
	if(var_18_bool == 0) goto Label_1329; // 0x52f JumpB
	var_16_bool = 1; // 0x530 MovB
	
Label_1329:
	if(var_16_bool == 0) goto Label_1335; // 0x531 JumpB
	var_2_object = 1; // 0x532 TMovB
	var_19_object = Obj(); // 0x533 PushV
	var_19_object = var_15_object; // 0x534 Mov
	func_2092(var_19_object); // 0x535 NEW_2
	
Label_1335:
	return 0; // 0x537 Return
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; // 0x539 PushV
	var_16_bool = 0; // 0x53a MovB
	var_17_bool = var_1_object == var_15_object; // 0x53b Eq
	if(var_17_bool == 0) goto Label_1344; // 0x53c JumpB
	var_18_object = var_2_object; // 0x53d PushT
	if(var_18_object == 0) goto Label_1344; // 0x53e JumpB
	var_16_bool = 1; // 0x53f MovB
	
Label_1344:
	if(var_16_bool == 0) goto Label_1349; // 0x540 JumpB
	var_2_object = 0; // 0x541 TMovB
	var_19_string = "head"; // 0x542 PushS
	UnlookAsync(var_19_string); // 0x543 Func
	
Label_1349:
	return 0; // 0x545 Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	RequestClearPath(var_15_object); // 0x5bf Func
	return 0; // 0x5c1 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	func_1308(var_15_object); // 0x5cb NEW_2
	var_20_object = Obj(); // 0x5cd PushV
	var_20_object = var_15_object; // 0x5ce Mov
	func_2451(); // 0x5cf NEW_2
	return 0; // 0x5d1 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x5ec PushV
	IsOverrideActive(var_17_bool); // 0x5ed Func
	var_18_bool = var_17_bool == 0; // 0x5ef Not
	if(var_18_bool == 0) goto Label_1525; // 0x5f0 JumpB
	var_19_object = Obj(); // 0x5f1 PushV
	var_19_object = var_15_object; // 0x5f2 Mov
	func_2389(var_19_object); // 0x5f3 NEW_2
	
Label_1525:
	return 2; // 0x5f5 Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0; // 0x66c Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	return 0; // 0x66e Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	return 0; // 0x670 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; // 0x975 PushV
	var_19_object = var_15_object; // 0x976 Mov
	var_20_int = var_16_int; // 0x977 Mov
	var_21_float = var_17_float; // 0x978 Mov
	func_1876(var_19_object, var_20_int, var_21_float); // 0x979 NEW_2
	return 0; // 0x97b Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0x97d PushV
	var_21_object = var_15_object; // 0x97e Mov
	var_22_int = var_16_int; // 0x97f Mov
	var_23_float = var_17_float; // 0x980 Mov
	var_24_cvector = var_19_cvector; // 0x981 Mov
	var_25_cvector = var_20_cvector; // 0x982 Mov
	func_1944(var_23_float, var_24_cvector, var_25_cvector); // 0x983 NEW_2
	return 0; // 0x985 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0; // 0x986 PushV
	var_19_string = "health"; // 0x987 PushS
	var_20_bool = var_16_string == var_19_string; // 0x988 Eq
	if(var_20_bool == 0) goto Label_2450; // 0x989 JumpB
	var_21_string = "health"; // 0x98a PushS
	GetProperty(var_21_string, var_18_float); // 0x98b Func
	var_22_int = 0; // 0x98d PushI
	var_23_bool = var_18_float <= var_22_int; // 0x98e LE
	if(var_23_bool == 0) goto Label_2450; // 0x98f JumpB
	SignalDeath(var_15_object); // 0x990 Func
	
Label_2450:
	return 2; // 0x992 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_string = ""; var_18_string = ""; // 0x994 PushV
	var_17_string = "quest_d8_04"; // 0x995 MovS
	var_18_string = "death"; // 0x996 MovS
	func_2207(var_16_bool, var_17_string, var_18_string); // 0x997 NEW_2
	var_22_object = Obj(); // 0x999 PushV
	var_22_object = var_15_object; // 0x99a Mov
	func_2412(var_22_object); // 0x99b NEW_2
	return 0; // 0x99d Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_object = Obj(); // 0x99e PushV
	func_2151(var_15_object); // 0x99f NEW_2
	RemoveActor(var_15_object); // 0x9a1 Func
	Hold(); // 0x9a3 Func
	return 0; // 0x9a5 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_float, var_11_int, var_12_bool, var_13_object, var_14_bool)
{
	var_15_float = 0; var_16_float = 0; // 0x1b3 PushV
	
Label_436:
	var_17_bool = 0; // 0x1b4 PushV
	func_1969(var_17_bool); // 0x1b5 NEW_2
	var_20_bool = var_17_bool == 0; // 0x1b7 Not
	if(var_20_bool == 0) goto Label_444; // 0x1b8 JumpB
	Hold(); // 0x1b9 Func
	goto Label_436; // 0x1bb Jump
	
Label_444:
	var_21_int = 3; // 0x1bc PushI
	rand(var_16_float, var_21_int); // 0x1bd Func
	var_22_int = 3; // 0x1bf PushI
	var_23_int = var_16_float + var_22_int; // 0x1c0 Add
	Sleep(var_23_int); // 0x1c1 Func
	func_479(); // 0x1c4 NEW_2
	goto Label_436; // 0x1c6 Jump
}


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x0 PushV
	var_0_object = var_18_object; // 0x1 TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0x2 PushV
	var_29_object = var_18_object; // 0x3 Mov
	var_30_float = 110.0; // 0x4 MovF
	func_1974(var_29_object, var_30_float); // 0x5 NEW_2
	var_75_bool = var_28_bool == 0; // 0x7 Not
	if(var_75_bool == 0) goto Label_11; // 0x8 JumpB
	var_17_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_24_object); // 0xb Func
	var_76_int = 0; // 0xd PushV
	func_2404(var_76_int); // 0xe NEW_2
	SetNPCName(var_76_int); // 0x10 ObjFunc
	var_77_int = 0; // 0x12 PushV
	func_2402(var_77_int); // 0x13 NEW_2
	SetNPCDescription(var_77_int); // 0x15 ObjFunc
	var_78_string = ""; // 0x17 PushV
	func_2406(var_78_string); // 0x18 NEW_2
	SetPhoto(var_78_string); // 0x1a ObjFunc
	var_79_string = ""; // 0x1c PushV
	func_2408(var_79_string); // 0x1d NEW_2
	SetPhoto2(var_79_string); // 0x1f ObjFunc
	var_80_int = 0; // 0x21 PushV
	func_2366(var_80_int); // 0x22 NEW_2
	SetPlayerName(var_80_int); // 0x24 ObjFunc
	var_26_int = -1; // 0x26 MovI
	IsOverrideActive(var_25_bool); // 0x27 Func
	var_88_bool = var_25_bool; // 0x29 Push
	if(var_88_bool == 0) goto Label_45; // 0x2a JumpB
	var_17_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_24_object); // 0x2d Func
	var_89_object = Obj(); var_90_object = Obj(); // 0x2f PushV
	var_89_object = var_18_object; // 0x30 Mov
	var_90_object = var_24_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_27_bool); // 0x36 ObjFunc
	
Label_56:
	var_149_bool = var_27_bool == 0; // 0x38 Not
	if(var_149_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_27_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_150_object = Obj(); // 0x3f PushV
	var_150_object = var_18_object; // 0x40 Mov
	func_2043(); // 0x41 NEW_2
	StopDialog(var_24_object); // 0x43 Func
	GetReturnValue(var_26_int); // 0x45 ObjFunc
	var_17_int = var_26_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_2312()
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x908 PushV
	var_27_int = 651; // 0x909 PushI
	var_28_int = 2; // 0x90a PushI
	var_29_int = 533364; // 0x90b PushI
	CreateDiaryEntry(var_26_object, var_27_int, var_28_int, var_29_int); // 0x90c Func
	var_30_bool = 0; var_31_object = Obj(); var_32_int = 0; // 0x90e PushV
	var_31_object = var_26_object; // 0x90f Mov
	var_32_int = 649; // 0x910 MovI
	func_2338(var_30_bool, var_31_object, var_32_int); // 0x911 NEW_2
	return 2; // 0x913 Return
}


func_2061(var_133_string)
{
	var_134_bool = 0; var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_float = 0; var_139_float = 0; // 0x80d PushV
	lshHasAnimation(var_137_bool, var_133_string); // 0x80e Func
	var_140_bool = var_137_bool; // 0x810 Push
	if(var_140_bool == 0) goto Label_2072; // 0x811 JumpB
	lshGetAnimTimes(var_133_string, var_138_float, var_139_float); // 0x812 Func
	var_141_bool = 0; // 0x814 PushB
	lshPlayAnimation(var_138_float, var_139_float, var_141_bool); // 0x815 Func
	goto Label_2076; // 0x817 Jump
	
Label_2076:
	return 6; // 0x81c Return
	
Label_2072:
	var_142_string = "Can't find lsh animation : "; // 0x818 PushS
	var_143_int = var_142_string + var_133_string; // 0x819 Add
	Trace(var_143_int); // 0x81a Func
}


func_1808(var_28_bool, var_29_object)
{
	var_30_int = 0; var_31_int = 0; // 0x710 PushV
	var_32_bool = 0; var_33_object = Obj(); // 0x711 PushV
	var_33_object = var_29_object; // 0x712 Mov
	func_1772(var_32_bool, var_33_object); // 0x713 NEW_2
	var_49_bool = var_32_bool == 0; // 0x715 Not
	if(var_49_bool == 0) goto Label_1817; // 0x716 JumpB
	var_28_bool = 0; // 0x717 MovB
	return 2; // 0x718 Return
	
Label_1817:
	var_50_bool = 0; var_51_object = Obj(); var_52_string = ""; // 0x719 PushV
	var_51_object = var_29_object; // 0x71a Mov
	var_52_string = "noaccess"; // 0x71b MovS
	func_1682(var_50_bool, var_51_object, var_52_string); // 0x71c NEW_2
	var_59_bool = var_50_bool == 0; // 0x71e Not
	if(var_59_bool == 0) goto Label_1826; // 0x71f JumpB
	var_28_bool = 1; // 0x720 MovB
	return 2; // 0x721 Return
	
Label_1826:
	var_60_string = "noaccess"; // 0x722 PushS
	GetProperty(var_60_string, var_31_int); // 0x723 ObjFunc
	var_61_int = 0; // 0x725 PushI
	var_28_bool = var_31_int == var_61_int; // 0x726 Eq2
	return 2; // 0x727 Return
}


func_2325(var_39_object)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x915 PushV
	GetDiaryRoot(var_41_object); // 0x916 Func
	var_42_bool = var_41_object == 0; // 0x918 Not
	if(var_42_bool == 0) goto Label_2335; // 0x919 JumpB
	var_43_string = "Can't retrieve diary root"; // 0x91a PushS
	Trace(var_43_string); // 0x91b Func
	var_39_object = 0; // 0x91d MovB
	return 2; // 0x91e Return
	
Label_2335:
	var_39_object = var_41_object; // 0x91f Mov
	return 2; // 0x920 Return
}


func_1050(var_0_object, var_289_bool, var_290_float)
{
	var_291_bool = 0; var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; // 0x41a PushV
	
Label_1051:
	IsAnimationPlaying(var_296_bool); // 0x41b Func
	var_301_bool = var_296_bool == 0; // 0x41d Not
	if(var_301_bool == 0) goto Label_1056; // 0x41e JumpB
	goto Label_1088; // 0x41f Jump
	
Label_1088:
	func_1225(var_300_float); // 0x441 NEW_2
	var_289_bool = 0; // 0x443 MovB
	return 10; // 0x444 Return
	
Label_1056:
	var_302_bool = 0; // 0x420 PushV
	func_1121(var_302_bool); // 0x421 NEW_2
	if(var_302_bool == 0) goto Label_1062; // 0x423 JumpB
	var_289_bool = 1; // 0x424 MovB
	return 10; // 0x425 Return
	
Label_1062:
	var_345_bool = 0; var_346_object = Obj(); // 0x426 PushV
	var_346_object = var_0_object; // 0x427 MovT
	func_1808(var_345_bool, var_346_object); // 0x428 NEW_2
	var_347_bool = var_345_bool == 0; // 0x42a Not
	if(var_347_bool == 0) goto Label_1070; // 0x42b JumpB
	var_289_bool = 0; // 0x42c MovB
	return 10; // 0x42d Return
	
Label_1070:
	GetPFPosition(var_297_cvector); // 0x42e TObjFunc
	GetPFPosition(var_298_cvector); // 0x430 Func
	var_299_cvector = var_297_cvector - var_298_cvector; // 0x432 Sub2
	var_300_float = var_299_cvector | var_299_cvector; // 0x433 Or2
	var_348_float = var_290_float * var_290_float; // 0x434 Mult
	var_349_bool = var_300_float < var_348_float; // 0x435 LT
	if(var_349_bool == 0) goto Label_1085; // 0x436 JumpB
	var_350_bool = 0; var_351_float = 0; // 0x437 PushV
	var_351_float = var_290_float; // 0x438 Mov
	func_886(var_300_float, var_350_bool, var_351_float); // 0x439 NEW_2
	var_289_bool = 1; // 0x43b MovB
	return 10; // 0x43c Return
	
Label_1085:
	sync(); // 0x43d Func
	goto Label_1051; // 0x43f Jump
}


func_1308(var_2_object)
{
	var_16_int = 1; // 0x51c PushI
	KillTimer(var_16_int); // 0x51d Func
	var_17_object = var_2_object; // 0x51f PushT
	if(var_17_object == 0) goto Label_1317; // 0x520 JumpB
	var_2_object = 0; // 0x521 TMovB
	var_18_string = "head"; // 0x522 PushS
	UnlookAsync(var_18_string); // 0x523 Func
	
Label_1317:
	func_1474(var_15_object); // 0x526 NEW_2
	return 0; // 0x528 Return
}


func_2077(var_100_string, var_101_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0; // 0x81d PushV
	lshHasAnimation(var_107_bool, var_100_string); // 0x81e Func
	var_110_bool = var_107_bool; // 0x820 Push
	if(var_110_bool == 0) goto Label_2087; // 0x821 JumpB
	lshGetAnimTimes(var_100_string, var_108_float, var_109_float); // 0x822 Func
	lshPlayAnimation(var_108_float, var_109_float, var_101_bool); // 0x824 Func
	goto Label_2091; // 0x826 Jump
	
Label_2091:
	return 6; // 0x82b Return
	
Label_2087:
	var_111_string = "Can't find lsh animation : "; // 0x827 PushS
	var_112_int = var_111_string + var_100_string; // 0x828 Add
	Trace(var_112_int); // 0x829 Func
}


func_2338(var_30_bool, var_31_object, var_32_int)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; var_36_object = Obj(); var_37_object = Obj(); var_38_int = 0; // 0x922 PushV
	var_39_object = Obj(); // 0x923 PushV
	func_2325(var_39_object); // 0x924 NEW_2
	var_36_object = var_39_object; // 0x925 Mov
	Find(var_32_int, var_37_object); // 0x927 ObjFunc
	var_44_bool = var_37_object == 0; // 0x929 Not
	if(var_44_bool == 0) goto Label_2353; // 0x92a JumpB
	var_45_string = "Can't find diary parent with id: "; // 0x92b PushS
	var_46_int = var_45_string + var_32_int; // 0x92c Add
	Trace(var_46_int); // 0x92d Func
	var_30_bool = 0; // 0x92f MovB
	return 6; // 0x930 Return
	
Label_2353:
	AddChild(var_31_object); // 0x931 ObjFunc
	var_47_int = 7; // 0x933 PushI
	SendWorldWndMessage(var_47_int); // 0x934 Func
	GetCategory(var_38_int); // 0x936 ObjFunc
	SetDiarySection(var_38_int); // 0x938 Func
	var_30_bool = 0; // 0x93a MovB
	return 6; // 0x93b Return
}


func_2043()
{
	var_151_bool = 0; var_152_bool = 0; // 0x7fb PushV
	var_153_bool = 1; // 0x7fc PushB
	CameraSwitchToNormal(var_153_bool); // 0x7fd Func
	var_154_bool = 0; // 0x7ff PushV
	func_2410(var_154_bool); // 0x800 NEW_2
	if(var_154_bool == 0) goto Label_2052; // 0x802 JumpB
	goto Label_2060; // 0x803 Jump
	
Label_2060:
	return 2; // 0x80c Return
	
Label_2052:
	var_155_string = "head"; // 0x804 PushS
	HasAnimationTrack(var_152_bool, var_155_string); // 0x805 Func
	var_156_bool = var_152_bool; // 0x807 Push
	if(var_156_bool == 0) goto Label_2060; // 0x808 JumpB
	var_157_string = "head"; // 0x809 PushS
	UnlookAsync(var_157_string); // 0x80a Func
}


func_1832(var_32_object)
{
	var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; // 0x728 PushV
	var_47_bool = var_32_object == 0; // 0x729 NullEq
	if(var_47_bool == 0) goto Label_1836; // 0x72a JumpB
	return 14; // 0x72b Return
	
Label_1836:
	IsDead(var_40_bool); // 0x72c Func
	var_48_bool = var_40_bool; // 0x72e Push
	if(var_48_bool == 0) goto Label_1841; // 0x72f JumpB
	return 14; // 0x730 Return
	
Label_1841:
	GetSecondaryAnimationType(var_41_int); // 0x731 Func
	var_49_int = 0; // 0x733 PushI
	var_50_bool = var_41_int < var_49_int; // 0x734 LT
	if(var_50_bool == 0) goto Label_1847; // 0x735 JumpB
	return 14; // 0x736 Return
	
Label_1847:
	GetPosition(var_42_cvector); // 0x737 ObjFunc
	GetPosition(var_43_cvector); // 0x739 Func
	GetDirection(var_44_cvector); // 0x73b Func
	var_45_cvector = var_43_cvector - var_42_cvector; // 0x73d Sub2
	var_51_float = GetByIndex(var_45_cvector, 0); // 0x73e PushE
	var_52_float = GetByIndex(var_44_cvector, 0); // 0x73f PushE
	var_53_float = var_51_float * var_52_float; // 0x740 Mult
	var_54_float = GetByIndex(var_45_cvector, 2); // 0x741 PushE
	var_55_float = GetByIndex(var_44_cvector, 2); // 0x742 PushE
	var_56_float = var_54_float * var_55_float; // 0x743 Mult
	var_57_int = var_53_float + var_56_float; // 0x744 Add
	var_58_int = 0; // 0x745 PushI
	var_59_bool = var_57_int >= var_58_int; // 0x746 GE
	if(var_59_bool == 0) goto Label_1866; // 0x747 JumpB
	var_46_string = "fhit"; // 0x748 MovS
	goto Label_1867; // 0x749 Jump
	
Label_1867:
	var_60_string = "hit_react"; // 0x74b PushS
	var_61_string = "1"; // 0x74c PushS
	var_62_int = var_46_string + var_61_string; // 0x74d Add
	var_63_string = "2"; // 0x74e PushS
	var_64_int = var_46_string + var_63_string; // 0x74f Add
	var_65_int = -10; // 0x750 PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x751 Func
	return 14; // 0x753 Return
	
Label_1866:
	var_46_string = "bhit"; // 0x74a MovS
}


func_2092(var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); // 0x82c PushV
	GetEyesHeight(var_22_float); // 0x82d ObjFunc
	var_23_cvector = CVector(0.0, 0.0, 0.0); // 0x82f MovV
	var_24_float = GetByIndex(var_23_cvector, 1); // 0x830 PushE
	var_24_float = var_22_float; // 0x831 Mov
	SetByIndex(var_23_cvector, 1) = var_24_float; // 0x832 PopE
	var_25_string = "head"; // 0x833 PushS
	LookAsync(var_19_object, var_25_string, var_23_cvector); // 0x834 Func
	return 4; // 0x836 Return
}


func_812(var_1_object, var_2_object, var_4_bool)
{
	var_54_bool = 0; var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); // 0x32c PushV
	var_1_object = 0; // 0x32d TMovI
	
Label_814:
	var_60_string = "all"; // 0x32e PushS
	var_61_string = "attack_begin"; // 0x32f PushS
	var_62_int = 1; // 0x330 PushI
	var_63_int = var_1_object + var_62_int; // 0x331 Add
	var_64_int = var_61_string + var_63_int; // 0x332 Add
	HasAnimation(var_57_bool, var_60_string, var_64_int); // 0x333 Func
	var_65_bool = var_57_bool == 0; // 0x335 Not
	if(var_65_bool == 0) goto Label_824; // 0x336 JumpB
	goto Label_827; // 0x337 Jump
	
Label_827:
	var_2_object = 0; // 0x33b TMovI
	
Label_828:
	var_66_string = "attack"; // 0x33c PushS
	var_67_int = 1; // 0x33d PushI
	var_68_int = var_2_object + var_67_int; // 0x33e Add
	var_69_int = var_66_string + var_68_int; // 0x33f Add
	IsExisting3DSound(var_58_bool, var_69_int); // 0x340 Func
	var_70_bool = var_58_bool == 0; // 0x342 Not
	if(var_70_bool == 0) goto Label_837; // 0x343 JumpB
	goto Label_840; // 0x344 Jump
	
Label_840:
	var_71_string = "all"; // 0x348 PushS
	var_72_string = "bjump"; // 0x349 PushS
	GetAnimationOffset(var_59_cvector, var_71_string, var_72_string); // 0x34a Func
	var_73_float = GetByIndex(var_59_cvector, 2); // 0x34c PushE
	var_4_bool = -var_73_float; // 0x34d Neg2
	return 6; // 0x34e Return
	
Label_837:
	var_74_int = 1; // 0x345 PushI
	var_2_object = var_2_object + var_74_int; // 0x346 Add2
	goto Label_828; // 0x347 Jump
	
Label_824:
	var_75_int = 1; // 0x338 PushI
	var_1_object = var_1_object + var_75_int; // 0x339 Add2
	goto Label_814; // 0x33a Jump
}


func_558(var_65_bool)
{
	var_65_bool = 1; // 0x22e MovB
	return 0; // 0x22f Return
}


func_560()
{
	StopAnimation(); // 0x230 Func
	StopGroup0(); // 0x232 Func
	return 0; // 0x234 Return
}


func_565(var_18_object)
{
	
Label_566:
	var_29_object = Obj(); var_30_bool = 0; var_31_float = 0; // 0x236 PushV
	var_29_object = var_18_object; // 0x237 Mov
	var_30_bool = 1; // 0x238 MovB
	var_31_float = 180.0; // 0x239 MovF
	func_583(var_25_int, var_26_bool, var_27_float, var_28_int, var_18_object, var_29_object, var_30_bool, var_31_float); // 0x23a NEW_2
	var_524_int = 1; // 0x23c PushI
	Sleep(var_524_int); // 0x23d Func
	goto Label_566; // 0x23f Jump
}


func_2103()
{
	var_18_bool = 0; // 0x837 PushV
	func_2410(var_18_bool); // 0x838 NEW_2
	if(var_18_bool == 0) goto Label_2109; // 0x83a JumpB
	lshStopSpeech(); // 0x83b Func
	
Label_2109:
	return 0; // 0x83d Return
}


func_2110(var_47_string)
{
	var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x83e PushV
	IsExisting3DSound(var_56_bool, var_47_string); // 0x83f Func
	var_64_bool = var_56_bool == 0; // 0x841 Not
	if(var_64_bool == 0) goto Label_2135; // 0x842 JumpB
	var_57_int = 0; // 0x843 MovI
	
Label_2116:
	var_65_int = 1; // 0x844 PushI
	var_66_int = var_57_int + var_65_int; // 0x845 Add
	var_67_int = var_47_string + var_66_int; // 0x846 Add
	IsExisting3DSound(var_58_bool, var_67_int); // 0x847 Func
	var_68_bool = var_58_bool == 0; // 0x849 Not
	if(var_68_bool == 0) goto Label_2124; // 0x84a JumpB
	goto Label_2127; // 0x84b Jump
	
Label_2127:
	var_69_bool = var_57_int == 0; // 0x84f Not
	if(var_69_bool == 0) goto Label_2130; // 0x850 JumpB
	return 16; // 0x851 Return
	
Label_2130:
	irand(var_59_int, var_57_int); // 0x852 Func
	var_70_int = 1; // 0x854 PushI
	var_71_int = var_59_int + var_70_int; // 0x855 Add
	var_47_string = var_47_string + var_71_int; // 0x856 Add2
	
Label_2135:
	Is3DSoundLoaded(var_60_bool, var_47_string); // 0x857 Func
	var_72_bool = var_60_bool; // 0x859 Push
	if(var_72_bool == 0) goto Label_2150; // 0x85a JumpB
	GetEyesHeight(var_61_float); // 0x85b Func
	GetDirection(var_62_cvector); // 0x85d Func
	var_73_int = 50; // 0x85f PushI
	var_63_cvector = var_62_cvector * var_73_int; // 0x860 Mult2
	var_74_float = GetByIndex(var_63_cvector, 1); // 0x861 PushE
	var_74_float = var_74_float + var_61_float; // 0x862 Add2
	SetByIndex(var_63_cvector, 1) = var_74_float; // 0x863 PopE
	PlayGlobalSound(var_47_string, var_63_cvector); // 0x864 Func
	
Label_2150:
	return 16; // 0x866 Return
	
Label_2124:
	var_75_int = 1; // 0x84c PushI
	var_57_int = var_57_int + var_75_int; // 0x84d Add2
	goto Label_2116; // 0x84e Jump
}


func_2366(var_80_int)
{
	var_81_int = 0; var_82_int = 0; // 0x93e PushV
	var_83_string = "branch"; // 0x93f PushS
	GetVariable(var_83_string, var_82_int); // 0x940 Func
	var_84_int = 0; // 0x942 PushI
	var_85_bool = var_82_int == var_84_int; // 0x943 Eq
	if(var_85_bool == 0) goto Label_2376; // 0x944 JumpB
	var_80_int = 1; // 0x945 MovI
	return 2; // 0x946 Return
	
Label_2376:
	var_86_int = 1; // 0x948 PushI
	var_87_bool = var_82_int == var_86_int; // 0x949 Eq
	if(var_87_bool == 0) goto Label_2381; // 0x94a JumpB
	var_80_int = 2; // 0x94b MovI
	return 2; // 0x94c Return
	
Label_2381:
	var_80_int = 3; // 0x94d MovI
	return 2; // 0x94e Return
}


func_577(var_398_float)
{
	var_398_float = 0.1; // 0x242 MovF
	return 0; // 0x243 Return
}


func_580(var_405_int)
{
	var_405_int = 0; // 0x245 MovI
	return 0; // 0x246 Return
}


func_1093(var_0_object, var_304_bool)
{
	var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_float = 0; var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0; // 0x445 PushV
	var_315_bool = 0; var_316_object = Obj(); // 0x446 PushV
	var_316_object = var_0_object; // 0x447 MovT
	func_1808(var_315_bool, var_316_object); // 0x448 NEW_2
	var_317_bool = var_315_bool == 0; // 0x44a Not
	if(var_317_bool == 0) goto Label_1102; // 0x44b JumpB
	var_304_bool = 0; // 0x44c MovB
	return 10; // 0x44d Return
	
Label_1102:
	var_318_bool = 0; // 0x44e PushV
	func_1182(var_314_float, var_318_bool); // 0x44f NEW_2
	if(var_318_bool == 0) goto Label_1119; // 0x451 JumpB
	GetPFPosition(var_310_cvector); // 0x452 TObjFunc
	GetPFPosition(var_311_cvector); // 0x454 Func
	var_312_cvector = var_310_cvector - var_311_cvector; // 0x456 Sub2
	var_313_float = var_312_cvector | var_312_cvector; // 0x457 Or2
	GetAttackDistance(var_314_float); // 0x458 TObjFunc
	var_319_int = 50; // 0x45a PushI
	var_314_float = var_314_float + var_319_int; // 0x45b Add2
	var_320_float = var_314_float * var_314_float; // 0x45c Mult
	var_304_bool = var_313_float <= var_320_float; // 0x45d LE2
	return 10; // 0x45e Return
	
Label_1119:
	var_304_bool = 0; // 0x45f MovB
	return 10; // 0x460 Return
}


func_1350(var_0_object, var_1_object, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool)
{
	var_167_bool = 0; var_168_bool = 0; var_169_object = Obj(); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_object = Obj(); var_175_bool = 0; var_176_bool = 0; var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_object = Obj(); // 0x546 PushV
	var_0_object = 0; // 0x547 TMovB
	var_1_object = var_162_object; // 0x548 TMov
	var_176_bool = var_166_bool; // 0x549 Mov
	
Label_1354:
	var_183_bool = 0; var_184_object = Obj(); // 0x54a PushV
	var_184_object = var_162_object; // 0x54b Mov
	func_1490(var_183_bool, var_184_object); // 0x54c NEW_2
	var_187_bool = var_183_bool == 0; // 0x54e Not
	if(var_187_bool == 0) goto Label_1362; // 0x54f JumpB
	var_161_bool = 0; // 0x550 MovB
	return 16; // 0x551 Return
	
Label_1362:
	GetPosition(var_178_cvector); // 0x552 ObjFunc
	GetPosition(var_179_cvector); // 0x554 Func
	var_180_cvector = var_178_cvector - var_179_cvector; // 0x556 Sub2
	var_181_float = var_180_cvector | var_180_cvector; // 0x557 Or2
	var_188_bool = 0; // 0x558 PushV
	var_188_bool = 0; // 0x559 MovB
	var_189_int = 0; // 0x55a PushI
	var_190_bool = var_164_float > var_189_int; // 0x55b GT
	if(var_190_bool == 0) goto Label_1377; // 0x55c JumpB
	var_191_float = var_164_float * var_164_float; // 0x55d Mult
	var_192_bool = var_181_float > var_191_float; // 0x55e GT
	if(var_192_bool == 0) goto Label_1377; // 0x55f JumpB
	var_188_bool = 1; // 0x560 MovB
	
Label_1377:
	if(var_188_bool == 0) goto Label_1382; // 0x561 JumpB
	Stop(); // 0x562 Func
	var_161_bool = 0; // 0x564 MovB
	return 16; // 0x565 Return
	
Label_1382:
	var_193_float = var_163_float * var_163_float; // 0x566 Mult
	var_194_bool = var_181_float > var_193_float; // 0x567 GT
	if(var_194_bool == 0) goto Label_1444; // 0x568 JumpB
	GetPFPosition(var_178_cvector); // 0x569 ObjFunc
	FindPathTo(var_182_object, var_178_cvector); // 0x56b Func
	var_195_bool = var_182_object != 0; // 0x56d NullNeq
	if(var_195_bool == 0) goto Label_1393; // 0x56e JumpB
	var_177_object = var_182_object; // 0x56f Mov
	var_182_object = 0; // 0x570 SetNull
	
Label_1393:
	var_196_bool = var_177_object != 0; // 0x571 NullNeq
	if(var_196_bool == 0) goto Label_1426; // 0x572 JumpB
	var_197_bool = var_176_bool; // 0x573 Push
	if(var_197_bool == 0) goto Label_1403; // 0x574 JumpB
	var_176_bool = 0; // 0x575 MovB
	RotatePath(var_177_object, var_175_bool); // 0x576 Func
	var_198_bool = var_175_bool == 0; // 0x578 Not
	if(var_198_bool == 0) goto Label_1403; // 0x579 JumpB
	goto Label_1450; // 0x57a Jump
	
Label_1450:
	var_161_bool = !var_0_object; // 0x5aa Not2
	return 16; // 0x5ab Return
	
Label_1403:
	var_199_int = 0; // 0x57b PushI
	var_200_float = 0.3; // 0x57c PushF
	SetTimer(var_199_int, var_200_float); // 0x57d Func
	var_201_string = ""; // 0x57f PushV
	func_1497(var_201_string); // 0x580 NEW_2
	var_202_string = ""; // 0x582 PushV
	func_1499(var_202_string); // 0x583 NEW_2
	FollowPath(var_177_object, var_165_bool, var_175_bool, var_201_string, var_202_string); // 0x585 Func
	var_203_bool = var_175_bool == 0; // 0x587 Not
	if(var_203_bool == 0) goto Label_1424; // 0x588 JumpB
	var_204_object = var_0_object; // 0x589 PushT
	if(var_204_object == 0) goto Label_1422; // 0x58a JumpB
	var_177_object = 0; // 0x58b SetNull
	goto Label_1450; // 0x58c Jump
	
Label_1422:
	goto Label_1449; // 0x58e Jump
	
Label_1449:
	goto Label_1354; // 0x5a9 Jump
	
Label_1424:
	var_177_object = 0; // 0x590 SetNull
	goto Label_1442; // 0x591 Jump
	
Label_1442:
	var_182_object = 0; // 0x5a2 SetNull
	goto Label_1448; // 0x5a3 Jump
	
Label_1448:
	var_177_object = 0; // 0x5a8 SetNull
	
Label_1426:
	var_205_int = 0; // 0x592 PushI
	KillTimer(var_205_int); // 0x593 Func
	var_206_float = 0.5; // 0x595 PushF
	Sleep(var_206_float, var_175_bool); // 0x596 Func
	var_207_bool = var_175_bool == 0; // 0x598 Not
	if(var_207_bool == 0) goto Label_1438; // 0x599 JumpB
	var_208_object = var_0_object; // 0x59a PushT
	if(var_208_object == 0) goto Label_1438; // 0x59b JumpB
	var_177_object = 0; // 0x59c SetNull
	goto Label_1450; // 0x59d Jump
	
Label_1438:
	var_209_int = 0; // 0x59e PushI
	var_210_float = 0.3; // 0x59f PushF
	SetTimer(var_209_int, var_210_float); // 0x5a0 Func
	
Label_1444:
	var_211_int = 0; // 0x5a4 PushI
	KillTimer(var_211_int); // 0x5a5 Func
	goto Label_1450; // 0x5a7 Jump
}


func_583(var_0_object, var_3_string, var_5_bool, var_29_object, var_30_bool, var_31_float, var_138_bool, var_230_bool)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_float = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_float = 0; // 0x247 PushV
	func_812(var_51_cvector, var_52_bool, var_53_float); // 0x249 NEW_2
	var_5_bool = 0; // 0x24b TMovI
	var_76_string = "@GetAttackDistance"; // 0x24c PushS
	var_77_int = 1; // 0x24d PushI
	var_78_bool = IsFuncExist(var_29_object, var_76_string, var_77_int); // 0x24e FuncExist
	if(var_78_bool == 0) goto Label_597; // 0x24f JumpB
	GetAttackDistance(var_43_float); // 0x250 ObjFunc
	var_79_int = 50; // 0x252 PushI
	var_43_float = var_43_float + var_79_int; // 0x253 Add2
	goto Label_598; // 0x254 Jump
	
Label_598:
	var_80_int = 150; // 0x256 PushI
	var_81_bool = var_43_float >= var_80_int; // 0x257 GE
	if(var_81_bool == 0) goto Label_602; // 0x258 JumpB
	var_43_float = 150; // 0x259 MovI
	
Label_602:
	var_3_string = 0; // 0x25a TMovB
	var_0_object = var_29_object; // 0x25b TMov
	IsPlayerActor(var_0_object, var_46_bool); // 0x25c Func
	var_82_bool = var_46_bool; // 0x25e Push
	if(var_82_bool == 0) goto Label_616; // 0x25f JumpB
	var_83_string = "attack"; // 0x260 PushS
	PlayGlobalMusic(var_83_string); // 0x261 Func
	var_84_object = Obj(); // 0x263 PushV
	func_2151(var_84_object); // 0x264 NEW_2
	SendPlayerEnemy(var_29_object, var_84_object); // 0x266 Func
	
Label_616:
	var_87_bool = var_30_bool; // 0x268 Push
	if(var_87_bool == 0) goto Label_620; // 0x269 JumpB
	var_47_bool = 0; // 0x26a MovB
	goto Label_621; // 0x26b Jump
	
Label_621:
	var_88_float = 400.0; // 0x26d PushF
	var_48_float = var_88_float + var_43_float; // 0x26e Add2
	
Label_623:
	var_89_bool = 0; // 0x26f PushV
	var_89_bool = 0; // 0x270 MovB
	var_90_bool = 0; var_91_object = Obj(); // 0x271 PushV
	var_91_object = var_0_object; // 0x272 MovT
	func_1808(var_90_bool, var_91_object); // 0x273 NEW_2
	if(var_90_bool == 0) goto Label_633; // 0x275 JumpB
	var_124_bool = var_3_string == 0; // 0x276 Not
	if(var_124_bool == 0) goto Label_633; // 0x277 JumpB
	var_89_bool = 1; // 0x278 MovB
	
Label_633:
	if(var_89_bool == 0) goto Label_795; // 0x279 JumpB
	func_1225(var_53_float); // 0x27b NEW_2
	GetPFPosition(var_44_cvector); // 0x27d TObjFunc
	GetPFPosition(var_45_cvector); // 0x27f Func
	var_49_cvector = var_44_cvector - var_45_cvector; // 0x281 Sub2
	var_50_float = var_49_cvector | var_49_cvector; // 0x282 Or2
	var_130_float = var_48_float * var_48_float; // 0x283 Mult
	var_131_bool = var_50_float >= var_130_float; // 0x284 GE
	if(var_131_bool == 0) goto Label_661; // 0x285 JumpB
	var_132_bool = 0; var_133_object = Obj(); var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_bool = 0; // 0x286 PushV
	var_133_object = var_0_object; // 0x287 MovT
	var_134_float = var_43_float; // 0x288 Mov
	var_135_float = 10000.0; // 0x289 MovF
	var_136_bool = 1; // 0x28a MovB
	var_137_bool = 0; // 0x28b MovB
	TaskCall(4); // 0x28c TaskCall
	func_1245(var_140_bool, var_132_bool, var_133_object, var_134_float, var_135_float, var_136_bool, var_137_bool); // 0x28d NEW_2
	TaskReturn(); // 0x28e TaskReturn
	var_215_bool = var_138_bool == 0; // 0x290 Not
	if(var_215_bool == 0) goto Label_659; // 0x291 JumpB
	goto Label_795; // 0x292 Jump
	
Label_795:
	WaitForAnimEnd(); // 0x31b Func
	var_216_string = var_3_string; // 0x31d PushT
	if(var_216_string == 0) goto Label_800; // 0x31e JumpB
	return 22; // 0x31f Return
	
Label_800:
	var_217_string = "all"; // 0x320 PushS
	var_218_string = "attack_off"; // 0x321 PushS
	PlayAnimation(var_217_string, var_218_string); // 0x322 Func
	WaitForAnimEnd(); // 0x324 Func
	var_219_bool = var_46_bool; // 0x326 Push
	if(var_219_bool == 0) goto Label_811; // 0x327 JumpB
	var_220_float = 2.0; // 0x328 PushF
	Sleep(var_220_float); // 0x329 Func
	
Label_811:
	return 22; // 0x32b Return
	
Label_659:
	var_47_bool = 0; // 0x293 MovB
	goto Label_794; // 0x294 Jump
	
Label_794:
	goto Label_623; // 0x31a Jump
	
Label_661:
	var_221_float = var_31_float * var_31_float; // 0x295 Mult
	var_222_bool = var_50_float >= var_221_float; // 0x296 GE
	if(var_222_bool == 0) goto Label_786; // 0x297 JumpB
	GetPFPosition(var_51_cvector); // 0x298 TObjFunc
	CanReachByPF(var_52_bool, var_51_cvector); // 0x29a Func
	var_223_bool = var_52_bool == 0; // 0x29c Not
	if(var_223_bool == 0) goto Label_685; // 0x29d JumpB
	var_224_bool = 0; var_225_object = Obj(); var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_bool = 0; // 0x29e PushV
	var_225_object = var_0_object; // 0x29f MovT
	var_226_float = var_43_float; // 0x2a0 Mov
	var_227_float = 10000.0; // 0x2a1 MovF
	var_228_bool = 1; // 0x2a2 MovB
	var_229_bool = 0; // 0x2a3 MovB
	TaskCall(4); // 0x2a4 TaskCall
	func_1245(var_232_bool, var_224_bool, var_225_object, var_226_float, var_227_float, var_228_bool, var_229_bool); // 0x2a5 NEW_2
	TaskReturn(); // 0x2a6 TaskReturn
	var_233_bool = var_230_bool == 0; // 0x2a8 Not
	if(var_233_bool == 0) goto Label_683; // 0x2a9 JumpB
	goto Label_795; // 0x2aa Jump
	
Label_683:
	var_47_bool = 0; // 0x2ab MovB
	goto Label_623; // 0x2ac Jump
	
Label_685:
	var_234_bool = var_47_bool == 0; // 0x2ad Not
	if(var_234_bool == 0) goto Label_710; // 0x2ae JumpB
	var_235_object = Obj(); // 0x2af PushV
	var_235_object = var_0_object; // 0x2b0 MovT
	func_1958(); // 0x2b1 NEW_2
	var_244_string = "all"; // 0x2b3 PushS
	var_245_string = "attack_on"; // 0x2b4 PushS
	PlayAnimation(var_244_string, var_245_string); // 0x2b5 Func
	WaitForAnimEnd(); // 0x2b7 Func
	func_1225(var_53_float); // 0x2ba NEW_2
	StopAsync(); // 0x2bc Func
	var_47_bool = 1; // 0x2be MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x2bf PushV
	var_247_object = var_0_object; // 0x2c0 MovT
	func_1808(var_246_bool, var_247_object); // 0x2c1 NEW_2
	var_248_bool = var_246_bool == 0; // 0x2c3 Not
	if(var_248_bool == 0) goto Label_710; // 0x2c4 JumpB
	goto Label_795; // 0x2c5 Jump
	
Label_710:
	rand(var_53_float); // 0x2c6 Func
	var_249_bool = 0; // 0x2c8 PushV
	var_249_bool = 1; // 0x2c9 MovB
	var_250_float = 0.25; // 0x2ca PushF
	var_251_bool = var_53_float < var_250_float; // 0x2cb LT
	if(var_251_bool == 0) goto Label_722; // 0x2cc JumpB
	var_252_bool = 0; // 0x2cd PushV
	func_1182(var_249_bool, var_252_bool); // 0x2ce NEW_2
	if(var_252_bool == 0) goto Label_722; // 0x2d0 JumpB
	var_249_bool = 0; // 0x2d1 MovB
	
Label_722:
	if(var_249_bool == 0) goto Label_739; // 0x2d2 JumpB
	Face(var_0_object); // 0x2d3 Func
	func_1232(); // 0x2d6 NEW_2
	var_287_string = "all"; // 0x2d8 PushS
	var_288_string = "attack_stay"; // 0x2d9 PushS
	PlayAnimation(var_287_string, var_288_string); // 0x2da Func
	var_289_bool = 0; var_290_float = 0; // 0x2dc PushV
	var_290_float = var_31_float; // 0x2dd Mov
	func_1050(var_53_float, var_289_bool, var_290_float); // 0x2de NEW_2
	StopAsync(); // 0x2e0 Func
	goto Label_785; // 0x2e2 Jump
	
Label_785:
	goto Label_794; // 0x311 Jump
	
Label_739:
	Face(var_0_object); // 0x2e3 Func
	var_508_string = "all"; // 0x2e5 PushS
	var_509_string = "fjump"; // 0x2e6 PushS
	PlayAnimation(var_508_string, var_509_string); // 0x2e7 Func
	WaitForAnimEnd(); // 0x2e9 Func
	func_1225(var_53_float); // 0x2ec NEW_2
	var_510_cvector = CVector(0.0, 0.0, 0.0); // 0x2ee PushVec
	SetSpeed(var_510_cvector); // 0x2ef Func
	Stop(); // 0x2f1 Func
	StopAsync(); // 0x2f3 Func
	var_511_bool = 0; // 0x2f5 PushV
	func_1182(var_53_float, var_511_bool); // 0x2f6 NEW_2
	var_512_bool = var_511_bool == 0; // 0x2f8 Not
	if(var_512_bool == 0) goto Label_785; // 0x2f9 JumpB
	var_513_bool = 0; var_514_object = Obj(); // 0x2fa PushV
	var_514_object = var_0_object; // 0x2fb MovT
	func_1808(var_513_bool, var_514_object); // 0x2fc NEW_2
	var_515_bool = var_513_bool == 0; // 0x2fe Not
	if(var_515_bool == 0) goto Label_769; // 0x2ff JumpB
	goto Label_795; // 0x300 Jump
	
Label_769:
	GetPFPosition(var_44_cvector); // 0x301 TObjFunc
	GetPFPosition(var_45_cvector); // 0x303 Func
	var_49_cvector = var_44_cvector - var_45_cvector; // 0x305 Sub2
	var_50_float = var_49_cvector | var_49_cvector; // 0x306 Or2
	var_516_float = var_31_float * var_31_float; // 0x307 Mult
	var_517_bool = var_50_float < var_516_float; // 0x308 LT
	if(var_517_bool == 0) goto Label_785; // 0x309 JumpB
	var_518_bool = 0; var_519_float = 0; // 0x30a PushV
	var_519_float = var_31_float; // 0x30b Mov
	func_886(var_53_float, var_518_bool, var_519_float); // 0x30c NEW_2
	var_520_bool = var_518_bool == 0; // 0x30e Not
	if(var_520_bool == 0) goto Label_785; // 0x30f JumpB
	goto Label_795; // 0x310 Jump
	
Label_786:
	var_521_bool = 0; var_522_float = 0; // 0x312 PushV
	var_522_float = var_31_float; // 0x313 Mov
	func_886(var_53_float, var_521_bool, var_522_float); // 0x314 NEW_2
	var_523_bool = var_521_bool == 0; // 0x316 Not
	if(var_523_bool == 0) goto Label_793; // 0x317 JumpB
	goto Label_795; // 0x318 Jump
	
Label_793:
	var_47_bool = 1; // 0x319 MovB
	
Label_620:
	var_47_bool = 1; // 0x26c MovB
	
Label_597:
	var_43_float = var_31_float; // 0x255 Mov
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_89_object, var_90_object)
{
	var_0_object = var_90_object; // 0x4b TMov
	var_1_object = var_89_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_95_int = 1; // 0x4e PushI
	if(var_95_int == 0) goto Label_112; // 0x4f JumpB
	var_96_string = ""; // 0x50 PushV
	var_96_string = "Neutral"; // 0x51 MovS
	func_142(var_90_object, var_96_string); // 0x52 NEW_2
	var_113_int = 533328; // 0x54 PushI
	SetMessage(var_113_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_114_bool = 0; var_115_object = Obj(); // 0x59 PushV
	var_115_object = var_1_object; // 0x5a MovT
	func_2287(var_115_object); // 0x5b NEW_2
	if(var_114_bool == 0) goto Label_99; // 0x5d JumpB
	var_122_int = 533329; // 0x5e PushI
	var_123_int = 37766; // 0x5f PushI
	var_124_int = 34833; // 0x60 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x61 TObjFunc
	
Label_99:
	var_125_int = 533336; // 0x63 PushI
	var_126_int = -1; // 0x64 PushI
	var_127_int = 34840; // 0x65 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x66 TObjFunc
	var_128_int = 536033; // 0x68 PushI
	var_129_int = -1; // 0x69 PushI
	var_130_int = 37770; // 0x6a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_131_bool = 0; // 0x70 PushV
	func_2410(var_131_bool); // 0x71 NEW_2
	if(var_131_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_132_string = var_3_string; // 0x76 PushT
	if(var_132_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_133_string = ""; // 0x79 PushV
	var_133_string = var_2_object; // 0x7a MovT
	func_2061(var_133_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_144_string = "all"; // 0x7f PushS
	var_145_string = "idle"; // 0x80 PushS
	PlayAnimation(var_144_string, var_145_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_146_string = var_3_string; // 0x85 PushT
	if(var_146_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_147_string = "all"; // 0x88 PushS
	var_148_string = "idle"; // 0x89 PushS
	PlayAnimation(var_147_string, var_148_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
}


func_847(var_0_object, var_387_float, var_388_int)
{
	var_389_object = Obj(); var_390_float = 0; var_391_float = 0; var_392_object = Obj(); var_393_float = 0; var_394_float = 0; // 0x34f PushV
	var_395_float = 0.9; // 0x350 PushF
	var_396_float = var_387_float * var_395_float; // 0x351 Mult
	GetVictim(var_396_float, var_392_object); // 0x352 Func
	ReportAttack(var_0_object); // 0x354 Func
	var_397_bool = var_392_object == var_0_object; // 0x356 Eq
	if(var_397_bool == 0) goto Label_884; // 0x357 JumpB
	var_398_float = 0; var_399_object = Obj(); var_400_int = 0; // 0x358 PushV
	var_399_object = var_392_object; // 0x359 Mov
	var_400_int = var_388_int; // 0x35a Mov
	func_577(var_400_int); // 0x35b NEW_2
	var_393_float = var_398_float; // 0x35c Mov
	var_401_float = 0; var_402_object = Obj(); var_403_float = 0; var_404_int = 0; // 0x35e PushV
	var_402_object = var_392_object; // 0x35f Mov
	var_403_float = var_393_float; // 0x360 Mov
	var_405_int = 0; var_406_object = Obj(); var_407_int = 0; // 0x361 PushV
	var_406_object = var_392_object; // 0x362 Mov
	var_407_int = var_388_int; // 0x363 Mov
	func_580(var_407_int); // 0x364 NEW_2
	var_404_int = var_405_int; // 0x365 Mov
	func_1694(var_401_float, var_402_object, var_403_float, var_404_int); // 0x367 NEW_2
	var_394_float = var_401_float; // 0x368 Mov
	var_466_int = 0; // 0x36a PushV
	func_1230(var_466_int); // 0x36b NEW_2
	ReportHit(var_0_object, var_466_int, var_394_float, var_393_float); // 0x36d Func
	var_467_object = Obj(); var_468_float = 0; // 0x36f PushV
	var_467_object = var_392_object; // 0x370 Mov
	var_468_float = var_394_float; // 0x371 Mov
	func_1237(); // 0x372 NEW_2
	
Label_884:
	return 6; // 0x374 Return
}


func_2383(var_20_int)
{
	var_21_int = 0; var_22_int = 0; // 0x94f PushV
	var_23_string = "branch"; // 0x950 PushS
	GetVariable(var_23_string, var_22_int); // 0x951 Func
	var_20_int = var_22_int; // 0x953 Mov
	return 2; // 0x954 Return
}


func_1617(var_46_string)
{
	RemoveRTEnvelope(); // 0x652 Func
	SetDeathState(); // 0x654 Func
	Stop(); // 0x656 Func
	StopAsync(); // 0x658 Func
	StopSecondaryAnimation(); // 0x65a Func
	var_47_string = ""; // 0x65c PushV
	var_47_string = var_46_string; // 0x65d Mov
	func_2110(var_47_string); // 0x65e NEW_2
	var_76_string = "all"; // 0x660 PushS
	PlayAnimation(var_76_string, var_46_string); // 0x661 Func
	WaitForAnimEnd(); // 0x663 Func
	var_77_string = "all"; // 0x665 PushS
	LockAnimationEnd(var_77_string, var_46_string); // 0x666 Func
	RemoveEnvelope(); // 0x668 Func
	return 0; // 0x66a Return
}


func_1876(var_19_object, var_20_int, var_21_float)
{
	var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_int = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); // 0x754 PushV
	var_40_bool = 0; // 0x755 PushV
	var_40_bool = 0; // 0x756 MovB
	var_41_bool = 0; // 0x757 PushV
	var_41_bool = 0; // 0x758 MovB
	var_42_object = var_19_object; // 0x759 Push
	if(var_42_object == 0) goto Label_1887; // 0x75a JumpB
	var_43_int = 4; // 0x75b PushI
	var_44_bool = var_20_int != var_43_int; // 0x75c Neq
	if(var_44_bool == 0) goto Label_1887; // 0x75d JumpB
	var_41_bool = 1; // 0x75e MovB
	
Label_1887:
	if(var_41_bool == 0) goto Label_1892; // 0x75f JumpB
	var_45_int = 5; // 0x760 PushI
	var_46_bool = var_20_int != var_45_int; // 0x761 Neq
	if(var_46_bool == 0) goto Label_1892; // 0x762 JumpB
	var_40_bool = 1; // 0x763 MovB
	
Label_1892:
	if(var_40_bool == 0) goto Label_1939; // 0x764 JumpB
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x765 PushV
	var_49_cvector = CVector(0,0,0); var_50_object = Obj(); // 0x766 PushV
	var_50_object = var_19_object; // 0x767 Mov
	func_1663(var_50_object); // 0x768 NEW_2
	var_48_cvector = var_49_cvector; // 0x769 Mov
	func_2157(var_47_cvector, var_48_cvector); // 0x76b NEW_2
	var_31_cvector = var_47_cvector; // 0x76c Mov
	CreateVectorVector(var_32_object); // 0x76e Func
	var_33_int = 1; // 0x770 MovI
	
Label_1905:
	var_60_string = "hit"; // 0x771 PushS
	var_61_int = var_60_string + var_33_int; // 0x772 Add
	GetGeometryLocator(var_61_int, var_34_bool, var_35_cvector, var_36_cvector); // 0x773 Func
	var_62_bool = var_34_bool == 0; // 0x775 Not
	if(var_62_bool == 0) goto Label_1912; // 0x776 JumpB
	goto Label_1921; // 0x777 Jump
	
Label_1921:
	size(var_37_int); // 0x781 ObjFunc
	var_63_int = var_37_int; // 0x783 Push
	if(var_63_int == 0) goto Label_1938; // 0x784 JumpB
	irand(var_38_int, var_37_int); // 0x785 Func
	get(var_39_cvector, var_38_int); // 0x787 ObjFunc
	var_64_object = Obj(); var_65_int = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x789 PushV
	var_64_object = var_19_object; // 0x78a Mov
	var_65_int = var_20_int; // 0x78b Mov
	var_66_float = var_21_float; // 0x78c Mov
	var_67_cvector = var_39_cvector; // 0x78d Mov
	var_68_cvector = -var_31_cvector; // 0x78e Neg2
	func_1944(var_66_float, var_67_cvector, var_68_cvector); // 0x78f NEW_2
	return 18; // 0x791 Return
	
Label_1938:
	var_32_object = 0; // 0x792 SetNull
	
Label_1939:
	var_109_object = Obj(); // 0x793 PushV
	var_109_object = var_19_object; // 0x794 Mov
	func_1832(var_109_object); // 0x795 NEW_2
	return 18; // 0x797 Return
	
Label_1912:
	var_110_int = var_36_cvector | var_31_cvector; // 0x778 Or
	var_111_float = 0.70711; // 0x779 PushF
	var_112_bool = var_110_int >= var_111_float; // 0x77a GE
	if(var_112_bool == 0) goto Label_1918; // 0x77b JumpB
	add(var_35_cvector); // 0x77c ObjFunc
	
Label_1918:
	var_113_int = 1; // 0x77e PushI
	var_33_int = var_33_int + var_113_int; // 0x77f Add2
	goto Label_1905; // 0x780 Jump
}


func_2389(var_19_object)
{
	var_20_int = 0; // 0x956 PushV
	func_2383(var_20_int); // 0x957 NEW_2
	var_24_int = 1; // 0x959 PushI
	var_25_bool = var_20_int == var_24_int; // 0x95a Eq
	if(var_25_bool == 0) goto Label_2399; // 0x95b JumpB
	WorkWithCorpse(var_19_object); // 0x95c Func
	goto Label_2401; // 0x95e Jump
	
Label_2401:
	return 0; // 0x961 Return
	
Label_2399:
	Barter(var_19_object); // 0x95f Func
}


func_1121(var_302_bool)
{
	var_303_bool = 0; // 0x461 PushV
	var_303_bool = 0; // 0x462 MovB
	var_304_bool = 0; // 0x463 PushV
	func_1093(var_303_bool, var_304_bool); // 0x464 NEW_2
	if(var_304_bool == 0) goto Label_1132; // 0x466 JumpB
	var_321_bool = 0; // 0x467 PushV
	func_1137(var_302_bool, var_303_bool, var_321_bool); // 0x468 NEW_2
	if(var_321_bool == 0) goto Label_1132; // 0x46a JumpB
	var_303_bool = 1; // 0x46b MovB
	
Label_1132:
	if(var_303_bool == 0) goto Label_1135; // 0x46c JumpB
	var_302_bool = 1; // 0x46d MovB
	return 0; // 0x46e Return
	
Label_1135:
	var_302_bool = 0; // 0x46f MovB
	return 0; // 0x470 Return
}


func_2402(var_77_int)
{
	var_77_int = 521048; // 0x962 MovI
	return 0; // 0x963 Return
}


func_2404(var_76_int)
{
	var_76_int = 521047; // 0x964 MovI
	return 0; // 0x965 Return
}


func_2406(var_78_string)
{
	var_78_string = "ui/NPC_Morlok.png"; // 0x966 MovS
	return 0; // 0x967 Return
}


func_2151(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x867 PushV
	self(var_17_object); // 0x868 Func
	var_15_object = var_17_object; // 0x86a Mov
	return 2; // 0x86b Return
}


func_2408(var_79_string)
{
	var_79_string = "ui/NPC_Morlok_b.png"; // 0x968 MovS
	return 0; // 0x969 Return
}


func_2410(var_71_bool)
{
	var_71_bool = 0; // 0x96a MovB
	return 0; // 0x96b Return
}


func_2412(var_22_object)
{
	var_23_object = Obj(); // 0x96d PushV
	var_23_object = var_22_object; // 0x96e Mov
	TaskCall(5); // 0x96f TaskCall
	func_1501(var_23_object); // 0x970 NEW_2
	TaskReturn(); // 0x971 TaskReturn
	return 0; // 0x973 Return
}


func_2157(var_47_cvector, var_48_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x86d PushV
	var_57_int = var_48_cvector | var_48_cvector; // 0x86e Or
	var_56_float = sqrt(var_57_int); // 0x86f Sqrt2
	var_58_float = 0.0; // 0x870 PushF
	var_59_bool = var_56_float < var_58_float; // 0x871 LT
	if(var_59_bool == 0) goto Label_2165; // 0x872 JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x873 MovV
	return 2; // 0x874 Return
	
Label_2165:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x875 Div2
	return 2; // 0x876 Return
}


func_1137(var_0_object, var_4_bool, var_321_bool)
{
	var_322_object = Obj(); var_323_bool = 0; var_324_float = 0; var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); // 0x471 PushV
	GetScene(var_327_object); // 0x472 Func
	var_328_bool = 0; // 0x474 MovB
	
Label_1141:
	var_332_cvector = CVector(0,0,0); var_333_object = Obj(); // 0x475 PushV
	var_333_object = var_0_object; // 0x476 MovT
	func_1663(var_333_object); // 0x477 NEW_2
	var_338_int = -var_332_cvector; // 0x479 Neg
	FindDirLength(var_329_float, var_338_int, var_329_float); // 0x47a Func
	var_339_bool = var_329_float < var_4_bool; // 0x47c LT
	if(var_339_bool == 0) goto Label_1151; // 0x47d JumpB
	goto Label_1179; // 0x47e Jump
	
Label_1179:
	var_321_bool = var_328_bool; // 0x49b Mov
	return 10; // 0x49c Return
	
Label_1151:
	Face(var_0_object); // 0x47f Func
	var_340_string = "all"; // 0x481 PushS
	var_341_string = "bjump"; // 0x482 PushS
	PlayAnimation(var_340_string, var_341_string); // 0x483 Func
	GetPFPosition(var_330_cvector); // 0x485 TObjFunc
	GetPFPosition(var_331_cvector); // 0x487 Func
	WaitForAnimEnd(); // 0x489 Func
	func_1225(var_331_cvector); // 0x48c NEW_2
	StopAsync(); // 0x48e Func
	var_342_cvector = CVector(0.0, 0.0, 0.0); // 0x490 PushVec
	SetSpeed(var_342_cvector); // 0x491 Func
	var_328_bool = 1; // 0x493 MovB
	var_343_bool = 0; // 0x494 PushV
	func_1093(var_331_cvector, var_343_bool); // 0x495 NEW_2
	var_344_bool = var_343_bool == 0; // 0x497 Not
	if(var_344_bool == 0) goto Label_1178; // 0x498 JumpB
	goto Label_1179; // 0x499 Jump
	
Label_1178:
	goto Label_1141; // 0x49a Jump
}


func_1649(var_429_string, var_430_int)
{
	var_431_int = 2; // 0x672 PushI
	var_432_bool = var_430_int == var_431_int; // 0x673 Eq
	if(var_432_bool == 0) goto Label_1656; // 0x674 JumpB
	var_429_string = "fire"; // 0x675 MovS
	return 0; // 0x676 Return
	
Label_1656:
	var_433_int = 1; // 0x678 PushI
	var_434_bool = var_430_int == var_433_int; // 0x679 Eq
	if(var_434_bool == 0) goto Label_1661; // 0x67a JumpB
	var_429_string = "bullet"; // 0x67b MovS
	return 0; // 0x67c Return
	
Label_1661:
	var_429_string = "phys"; // 0x67d MovS
	return 0; // 0x67e Return
}


func_886(var_0_object, var_350_bool, var_351_float)
{
	var_352_int = 0; var_353_bool = 0; var_354_int = 0; var_355_string = ""; var_356_int = 0; var_357_bool = 0; var_358_int = 0; var_359_string = ""; // 0x376 PushV
	func_1225(var_359_string); // 0x378 NEW_2
	irand(var_356_int, var_359_string); // 0x37a Func
	var_360_int = 1; // 0x37c PushI
	var_356_int = var_356_int + var_360_int; // 0x37d Add2
	Face(var_0_object); // 0x37e Func
	var_361_bool = 1; // 0x380 PushB
	SetAttackState(var_361_bool); // 0x381 Func
	func_2228(); // 0x384 NEW_2
	var_366_string = "all"; // 0x386 PushS
	var_367_string = "attack_begin"; // 0x387 PushS
	var_368_int = var_367_string + var_356_int; // 0x388 Add
	PlayAnimation(var_366_string, var_368_int); // 0x389 Func
	WaitForAnimEnd(); // 0x38b Func
	func_1193(var_358_int, var_359_string); // 0x38e NEW_2
	var_384_bool = 0; var_385_object = Obj(); // 0x390 PushV
	var_385_object = var_0_object; // 0x391 MovT
	func_1808(var_384_bool, var_385_object); // 0x392 NEW_2
	var_386_bool = var_384_bool == 0; // 0x394 Not
	if(var_386_bool == 0) goto Label_922; // 0x395 JumpB
	StopAsync(); // 0x396 Func
	var_350_bool = 0; // 0x398 MovB
	return 8; // 0x399 Return
	
Label_922:
	var_387_float = 0; var_388_int = 0; // 0x39a PushV
	var_387_float = var_351_float; // 0x39b Mov
	var_388_int = var_356_int; // 0x39c Mov
	func_847(var_359_string, var_387_float, var_388_int); // 0x39d NEW_2
	var_469_string = "all"; // 0x39f PushS
	var_470_string = "attack_middle"; // 0x3a0 PushS
	var_471_int = var_470_string + var_356_int; // 0x3a1 Add
	HasAnimation(var_357_bool, var_469_string, var_471_int); // 0x3a2 Func
	var_472_bool = var_357_bool; // 0x3a4 Push
	if(var_472_bool == 0) goto Label_1003; // 0x3a5 JumpB
	func_2228(); // 0x3a7 NEW_2
	var_473_string = "all"; // 0x3a9 PushS
	var_474_string = "attack_middle"; // 0x3aa PushS
	var_475_int = var_474_string + var_356_int; // 0x3ab Add
	PlayAnimation(var_473_string, var_475_int); // 0x3ac Func
	WaitForAnimEnd(); // 0x3ae Func
	func_1225(var_359_string); // 0x3b1 NEW_2
	var_476_bool = 0; var_477_object = Obj(); // 0x3b3 PushV
	var_477_object = var_0_object; // 0x3b4 MovT
	func_1808(var_476_bool, var_477_object); // 0x3b5 NEW_2
	var_478_bool = var_476_bool == 0; // 0x3b7 Not
	if(var_478_bool == 0) goto Label_957; // 0x3b8 JumpB
	StopAsync(); // 0x3b9 Func
	var_350_bool = 0; // 0x3bb MovB
	return 8; // 0x3bc Return
	
Label_957:
	var_479_float = 0; var_480_int = 0; // 0x3bd PushV
	var_479_float = var_351_float; // 0x3be Mov
	var_480_int = var_356_int; // 0x3bf Mov
	func_847(var_359_string, var_479_float, var_480_int); // 0x3c0 NEW_2
	var_358_int = 1; // 0x3c2 MovI
	
Label_963:
	var_481_string = "attack_middle"; // 0x3c3 PushS
	var_482_int = var_481_string + var_356_int; // 0x3c4 Add
	var_483_string = "_"; // 0x3c5 PushS
	var_484_int = var_482_int + var_483_string; // 0x3c6 Add
	var_359_string = var_484_int + var_358_int; // 0x3c7 Add2
	var_485_string = "all"; // 0x3c8 PushS
	HasAnimation(var_357_bool, var_485_string, var_359_string); // 0x3c9 Func
	var_486_bool = var_357_bool == 0; // 0x3cb Not
	if(var_486_bool == 0) goto Label_974; // 0x3cc JumpB
	goto Label_1003; // 0x3cd Jump
	
Label_1003:
	var_487_bool = 0; // 0x3eb PushB
	SetAttackState(var_487_bool); // 0x3ec Func
	var_488_string = "all"; // 0x3ee PushS
	var_489_string = "attack_end"; // 0x3ef PushS
	var_490_int = var_489_string + var_356_int; // 0x3f0 Add
	PlayAnimation(var_488_string, var_490_int); // 0x3f1 Func
	var_491_bool = 0; // 0x3f3 PushV
	func_1239(var_491_bool); // 0x3f4 NEW_2
	if(var_491_bool == 0) goto Label_1021; // 0x3f6 JumpB
	var_492_bool = 0; var_493_float = 0; // 0x3f7 PushV
	var_493_float = 0.75; // 0x3f8 MovF
	func_1023(var_492_bool, var_493_float); // 0x3f9 NEW_2
	StopAsync(); // 0x3fb Func
	
Label_1021:
	var_350_bool = 1; // 0x3fd MovB
	return 8; // 0x3fe Return
	
Label_974:
	func_2228(); // 0x3cf NEW_2
	var_501_string = "all"; // 0x3d1 PushS
	PlayAnimation(var_501_string, var_359_string); // 0x3d2 Func
	WaitForAnimEnd(); // 0x3d4 Func
	func_1225(var_359_string); // 0x3d7 NEW_2
	var_502_bool = 0; var_503_object = Obj(); // 0x3d9 PushV
	var_503_object = var_0_object; // 0x3da MovT
	func_1808(var_502_bool, var_503_object); // 0x3db NEW_2
	var_504_bool = var_502_bool == 0; // 0x3dd Not
	if(var_504_bool == 0) goto Label_995; // 0x3de JumpB
	StopAsync(); // 0x3df Func
	var_350_bool = 0; // 0x3e1 MovB
	return 8; // 0x3e2 Return
	
Label_995:
	var_505_float = 0; var_506_int = 0; // 0x3e3 PushV
	var_505_float = var_351_float; // 0x3e4 Mov
	var_506_int = var_356_int; // 0x3e5 Mov
	func_847(var_359_string, var_505_float, var_506_int); // 0x3e6 NEW_2
	var_507_int = 1; // 0x3e8 PushI
	var_358_int = var_358_int + var_507_int; // 0x3e9 Add2
	goto Label_963; // 0x3ea Jump
}


func_2167(var_439_float, var_440_float, var_441_float)
{
	var_444_bool = var_440_float < var_441_float; // 0x878 LT
	if(var_444_bool == 0) goto Label_2172; // 0x879 JumpB
	var_439_float = var_440_float; // 0x87a Mov
	goto Label_2173; // 0x87b Jump
	
Label_2173:
	return 0; // 0x87d Return
	
Label_2172:
	var_439_float = var_441_float; // 0x87c Mov
}


func_2174(var_449_float, var_450_float, var_451_float, var_452_float)
{
	var_453_bool = var_450_float < var_451_float; // 0x87f LT
	if(var_453_bool == 0) goto Label_2179; // 0x880 JumpB
	var_449_float = var_451_float; // 0x881 Mov
	return 0; // 0x882 Return
	
Label_2179:
	var_454_bool = var_450_float > var_452_float; // 0x883 GT
	if(var_454_bool == 0) goto Label_2183; // 0x884 JumpB
	var_449_float = var_452_float; // 0x885 Mov
	return 0; // 0x886 Return
	
Label_2183:
	var_449_float = var_450_float; // 0x887 Mov
	return 0; // 0x888 Return
}


func_1663(var_49_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x67f PushV
	GetPosition(var_53_cvector); // 0x680 Func
	GetPosition(var_54_cvector); // 0x682 ObjFunc
	var_49_cvector = var_54_cvector - var_53_cvector; // 0x684 Sub2
	return 4; // 0x685 Return
}


func_1670(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x686 PushV
	var_22_string = "player"; // 0x687 PushS
	FindActor(var_21_object, var_22_string); // 0x688 Func
	var_19_object = var_21_object; // 0x68a Mov
	return 2; // 0x68b Return
}


func_2185(var_116_int, var_117_string)
{
	var_118_int = 0; var_119_int = 0; // 0x889 PushV
	GetVariable(var_117_string, var_119_int); // 0x88a Func
	var_116_int = var_119_int; // 0x88c Mov
	return 2; // 0x88d Return
}


func_1677(var_156_bool, var_157_object)
{
	var_158_bool = 0; var_159_bool = 0; // 0x68d PushV
	IsPlayerActor(var_157_object, var_159_bool); // 0x68e Func
	var_156_bool = var_159_bool; // 0x690 Mov
	return 2; // 0x691 Return
}


func_142(var_2_object, var_96_string)
{
	var_97_bool = 0; // 0x8f PushV
	func_2410(var_97_bool); // 0x90 NEW_2
	var_98_bool = var_97_bool == 0; // 0x92 Not
	if(var_98_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_99_bool = var_96_string == var_2_object; // 0x95 Eq
	if(var_99_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_100_string = ""; var_101_bool = 0; // 0x98 PushV
	var_100_string = var_96_string; // 0x99 Mov
	var_102_string = ""; // 0x9a PushS
	var_103_bool = var_96_string == var_102_string; // 0x9b Eq
	if(var_103_bool == 0) goto Label_159; // 0x9c JumpB
	var_101_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_2077(var_100_string, var_101_bool); // 0xa0 NEW_2
	var_2_object = var_96_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_101_bool = 1; // 0x9f MovB
}


func_2190(var_457_float)
{
	var_458_object = Obj(); var_459_object = Obj(); // 0x88e PushV
	CreateFloatVector(var_459_object); // 0x88f Func
	add(var_457_float); // 0x891 ObjFunc
	var_460_int = 0; // 0x893 PushI
	var_461_bool = var_457_float < var_460_int; // 0x894 LT
	if(var_461_bool == 0) goto Label_2202; // 0x895 JumpB
	var_462_float = 0.7; // 0x896 PushF
	var_463_int = 500; // 0x897 PushI
	RumblePlay(var_462_float, var_463_int); // 0x898 Func
	
Label_2202:
	var_464_int = 15; // 0x89a PushI
	SendWorldWndMessage(var_464_int, var_459_object); // 0x89b Func
	return 2; // 0x89d Return
}


func_1682(var_50_bool, var_51_object, var_52_string)
{
	var_53_bool = 0; var_54_bool = 0; // 0x692 PushV
	var_55_string = "HasProperty"; // 0x693 PushS
	var_56_int = 2; // 0x694 PushI
	var_57_bool = IsFuncExist(var_51_object, var_55_string, var_56_int); // 0x695 FuncExist
	var_58_bool = var_57_bool == 0; // 0x696 Not
	if(var_58_bool == 0) goto Label_1690; // 0x697 JumpB
	var_50_bool = 0; // 0x698 MovB
	return 2; // 0x699 Return
	
Label_1690:
	HasProperty(var_52_string, var_54_bool); // 0x69a ObjFunc
	var_50_bool = var_54_bool; // 0x69c Mov
	return 2; // 0x69d Return
}


func_1944(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); // 0x798 PushV
	GetScene(var_28_object); // 0x799 Func
	var_30_string = "scripted"; // 0x79b PushS
	var_31_string = "blood_dir.xml"; // 0x79c PushS
	AddActorByType(var_29_object, var_30_string, var_28_object, var_24_cvector, var_25_cvector, var_31_string); // 0x79d Func
	var_32_object = Obj(); // 0x79f PushV
	var_32_object = var_21_object; // 0x7a0 Mov
	func_1832(var_32_object); // 0x7a1 NEW_2
	return 4; // 0x7a3 Return
}


func_1182(var_0_object, var_252_bool)
{
	var_253_bool = 0; var_254_bool = 0; // 0x49e PushV
	var_255_string = "IsAttacking"; // 0x49f PushS
	var_256_int = 1; // 0x4a0 PushI
	var_257_bool = IsFuncExist(var_0_object, var_255_string, var_256_int); // 0x4a1 FuncExist
	if(var_257_bool == 0) goto Label_1191; // 0x4a2 JumpB
	IsAttacking(var_254_bool); // 0x4a3 TObjFunc
	var_252_bool = var_254_bool; // 0x4a5 Mov
	return 2; // 0x4a6 Return
	
Label_1191:
	var_252_bool = 0; // 0x4a7 MovB
	return 2; // 0x4a8 Return
}


func_2207(var_16_bool, var_17_string, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x89f PushV
	FindActor(var_20_object, var_17_string); // 0x8a0 Func
	var_21_bool = var_20_object == 0; // 0x8a2 NullEq
	if(var_21_bool == 0) goto Label_2214; // 0x8a3 JumpB
	var_16_bool = 0; // 0x8a4 MovB
	return 2; // 0x8a5 Return
	
Label_2214:
	Trigger(var_20_object, var_18_string); // 0x8a6 Func
	var_16_bool = 1; // 0x8a8 MovB
	return 2; // 0x8a9 Return
}


func_1694(var_401_float, var_402_object, var_403_float, var_404_int)
{
	var_408_int = 0; var_409_string = ""; var_410_int = 0; var_411_float = 0; var_412_float = 0; var_413_float = 0; var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; // 0x69e PushV
	var_420_bool = 0; var_421_object = Obj(); var_422_string = ""; // 0x69f PushV
	var_421_object = var_402_object; // 0x6a0 Mov
	var_422_string = "health"; // 0x6a1 MovS
	func_1682(var_420_bool, var_421_object, var_422_string); // 0x6a2 NEW_2
	var_423_bool = var_420_bool == 0; // 0x6a4 Not
	if(var_423_bool == 0) goto Label_1704; // 0x6a5 JumpB
	var_401_float = 0.0; // 0x6a6 MovF
	return 12; // 0x6a7 Return
	
Label_1704:
	var_424_bool = 0; var_425_object = Obj(); var_426_string = ""; // 0x6a8 PushV
	var_425_object = var_402_object; // 0x6a9 Mov
	var_426_string = "armor"; // 0x6aa MovS
	func_1682(var_424_bool, var_425_object, var_426_string); // 0x6ab NEW_2
	var_427_bool = var_424_bool == 0; // 0x6ad Not
	if(var_427_bool == 0) goto Label_1713; // 0x6ae JumpB
	var_414_int = 0; // 0x6af MovI
	goto Label_1716; // 0x6b0 Jump
	
Label_1716:
	var_428_string = "armor_"; // 0x6b4 PushS
	var_429_string = ""; var_430_int = 0; // 0x6b5 PushV
	var_430_int = var_404_int; // 0x6b6 Mov
	func_1649(var_429_string, var_430_int); // 0x6b7 NEW_2
	var_415_string = var_428_string + var_429_string; // 0x6b9 Add2
	var_435_bool = 0; var_436_object = Obj(); var_437_string = ""; // 0x6ba PushV
	var_436_object = var_402_object; // 0x6bb Mov
	var_437_string = var_415_string; // 0x6bc Mov
	func_1682(var_435_bool, var_436_object, var_437_string); // 0x6bd NEW_2
	var_438_bool = var_435_bool == 0; // 0x6bf Not
	if(var_438_bool == 0) goto Label_1731; // 0x6c0 JumpB
	var_416_int = 0; // 0x6c1 MovI
	goto Label_1733; // 0x6c2 Jump
	
Label_1733:
	var_439_float = 0; var_440_float = 0; var_441_float = 0; // 0x6c5 PushV
	var_442_int = var_414_int + var_416_int; // 0x6c6 Add
	var_443_float = 100.0; // 0x6c7 PushF
	var_440_float = var_442_int / var_442_int; // 0x6c8 Div2
	var_441_float = 1; // 0x6c9 MovI
	func_2167(var_439_float, var_440_float, var_441_float); // 0x6ca NEW_2
	var_417_float = var_439_float; // 0x6cb Mov
	var_445_string = "health"; // 0x6cd PushS
	GetProperty(var_445_string, var_418_float); // 0x6ce ObjFunc
	var_446_int = 1; // 0x6d0 PushI
	var_447_int = var_446_int - var_417_float; // 0x6d1 Sub
	var_419_float = var_403_float * var_447_int; // 0x6d2 Mult2
	var_448_string = "health"; // 0x6d3 PushS
	var_449_float = 0; var_450_float = 0; var_451_float = 0; var_452_float = 0; // 0x6d4 PushV
	var_450_float = var_418_float - var_419_float; // 0x6d5 Sub2
	var_451_float = 0; // 0x6d6 MovI
	var_452_float = 1; // 0x6d7 MovI
	func_2174(var_449_float, var_450_float, var_451_float, var_452_float); // 0x6d8 NEW_2
	SetProperty(var_448_string, var_449_float); // 0x6da ObjFunc
	var_455_bool = 0; var_456_object = Obj(); // 0x6dc PushV
	var_456_object = var_402_object; // 0x6dd Mov
	func_1677(var_455_bool, var_456_object); // 0x6de NEW_2
	if(var_455_bool == 0) goto Label_1765; // 0x6e0 JumpB
	var_457_float = 0; // 0x6e1 PushV
	var_457_float = -var_419_float; // 0x6e2 Neg2
	func_2190(var_457_float); // 0x6e3 NEW_2
	
Label_1765:
	var_401_float = var_419_float; // 0x6e5 Mov
	return 12; // 0x6e6 Return
	
Label_1731:
	GetProperty(var_415_string, var_416_int); // 0x6c3 ObjFunc
	
Label_1713:
	var_465_string = "armor"; // 0x6b1 PushS
	GetProperty(var_465_string, var_414_int); // 0x6b2 ObjFunc
}


func_1958()
{
	var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); // 0x7a6 PushV
	GetPosition(var_239_cvector); // 0x7a7 ObjFunc
	GetPosition(var_240_cvector); // 0x7a9 Func
	var_241_cvector = var_239_cvector - var_240_cvector; // 0x7ab Sub2
	var_242_float = GetByIndex(var_241_cvector, 0); // 0x7ac PushE
	var_243_float = GetByIndex(var_241_cvector, 2); // 0x7ad PushE
	RotateAsync(var_242_float, var_243_float); // 0x7ae Func
	return 6; // 0x7b0 Return
}


func_1193(var_2_object, var_5_bool)
{
	var_369_float = 0; var_370_int = 0; var_371_float = 0; var_372_int = 0; // 0x4a9 PushV
	var_373_bool = var_2_object == 0; // 0x4aa Not
	if(var_373_bool == 0) goto Label_1197; // 0x4ab JumpB
	return 4; // 0x4ac Return
	
Label_1197:
	var_374_bool = var_5_bool; // 0x4ad PushT
	if(var_374_bool == 0) goto Label_1205; // 0x4ae JumpB
	var_375_int = -1; // 0x4af PushI
	var_5_bool = var_5_bool + var_375_int; // 0x4b0 Add2
	var_376_int = 0; // 0x4b1 PushI
	var_377_bool = var_5_bool > var_376_int; // 0x4b2 GT
	if(var_377_bool == 0) goto Label_1205; // 0x4b3 JumpB
	return 4; // 0x4b4 Return
	
Label_1205:
	rand(var_371_float); // 0x4b5 Func
	var_378_float = 0; // 0x4b7 PushV
	func_1243(var_378_float); // 0x4b8 NEW_2
	var_379_bool = var_371_float < var_378_float; // 0x4ba LT
	if(var_379_bool == 0) goto Label_1224; // 0x4bb JumpB
	irand(var_372_int, var_371_float); // 0x4bc Func
	var_380_int = 1; // 0x4be PushI
	var_372_int = var_372_int + var_380_int; // 0x4bf Add2
	var_381_string = "attack"; // 0x4c0 PushS
	var_382_int = var_381_string + var_372_int; // 0x4c1 Add
	Speak(var_382_int); // 0x4c2 Func
	var_383_int = 0; // 0x4c4 PushV
	func_1241(var_383_int); // 0x4c5 NEW_2
	var_5_bool = var_383_int; // 0x4c6 TMov
	
Label_1224:
	return 4; // 0x4c8 Return
}


func_2219(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0; // 0x8ab PushV
	IsPlayerActor(var_18_object, var_20_bool); // 0x8ac Func
	var_21_bool = var_20_bool; // 0x8ae Push
	if(var_21_bool == 0) goto Label_2227; // 0x8af JumpB
	var_22_string = "attack"; // 0x8b0 PushS
	PlayGlobalMusic(var_22_string); // 0x8b1 Func
	
Label_2227:
	return 2; // 0x8b3 Return
}


func_1452(var_0_object, var_1_object, var_23_int)
{
	var_24_int = 0; // 0x5ad PushI
	var_25_bool = var_23_int != var_24_int; // 0x5ae Neq
	if(var_25_bool == 0) goto Label_1457; // 0x5af JumpB
	return 0; // 0x5b0 Return
	
Label_1457:
	var_26_bool = 0; var_27_object = Obj(); // 0x5b1 PushV
	var_27_object = var_1_object; // 0x5b2 MovT
	func_1490(var_26_bool, var_27_object); // 0x5b3 NEW_2
	var_62_bool = var_26_bool == 0; // 0x5b5 Not
	if(var_62_bool == 0) goto Label_1464; // 0x5b6 JumpB
	var_0_object = 1; // 0x5b7 TMovB
	
Label_1464:
	var_63_int = 0; // 0x5b8 PushI
	KillTimer(var_63_int); // 0x5b9 Func
	Stop(); // 0x5bb Func
	return 0; // 0x5bd Return
}


func_1969(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; // 0x7b1 PushV
	IsLoaded(var_19_bool); // 0x7b2 Func
	var_17_bool = var_19_bool; // 0x7b4 Mov
	return 2; // 0x7b5 Return
}


func_2228()
{
	var_362_object = Obj(); var_363_object = Obj(); // 0x8b4 PushV
	GetScene(var_363_object); // 0x8b5 Func
	var_364_string = "battle"; // 0x8b7 PushS
	var_365_object = Obj(); // 0x8b8 PushV
	func_2151(var_365_object); // 0x8b9 NEW_2
	BroadcastMessage(var_364_string, var_365_object, var_363_object); // 0x8bb Func
	return 2; // 0x8bd Return
}


func_1974(var_28_bool, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; // 0x7b6 PushV
	GetPosition(var_41_cvector); // 0x7b7 ObjFunc
	GetEyesHeight(var_40_float); // 0x7b9 ObjFunc
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x7bb PushE
	var_49_float = var_49_float + var_40_float; // 0x7bc Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x7bd PopE
	GetPosition(var_42_cvector); // 0x7be Func
	GetEyesHeight(var_40_float); // 0x7c0 Func
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x7c2 PushE
	var_50_float = var_50_float + var_40_float; // 0x7c3 Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x7c4 PopE
	var_43_cvector = var_41_cvector - var_42_cvector; // 0x7c5 Sub2
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x7c6 PushE
	var_51_float = 0; // 0x7c7 MovI
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x7c8 PopE
	var_52_int = var_43_cvector | var_43_cvector; // 0x7c9 Or
	var_53_float = sqrt(var_52_int); // 0x7ca Sqrt
	var_43_cvector = var_43_cvector / var_43_cvector; // 0x7cb Div2
	var_44_cvector = -var_43_cvector; // 0x7cc Neg2
	var_54_float = var_43_cvector * var_30_float; // 0x7cd Mult
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x7ce PushV
	var_57_cvector = CVector(0.0, 1.0, 0.0); // 0x7cf PushVec
	var_56_cvector = var_44_cvector ^ var_57_cvector; // 0x7d0 Xor2
	func_2157(var_55_cvector, var_56_cvector); // 0x7d1 NEW_2
	var_63_int = 25; // 0x7d3 PushI
	var_64_float = var_55_cvector * var_63_int; // 0x7d4 Mult
	var_65_int = var_54_float + var_64_float; // 0x7d5 Add
	var_66_cvector = CVector(0.0, 10.0, 0.0); // 0x7d6 PushVec
	var_45_cvector = var_65_int - var_66_cvector; // 0x7d7 Sub2
	var_46_cvector = var_42_cvector + var_45_cvector; // 0x7d8 Add2
	IsOverrideActive(var_47_bool); // 0x7d9 Func
	var_67_bool = var_47_bool; // 0x7db Push
	if(var_67_bool == 0) goto Label_2015; // 0x7dc JumpB
	var_28_bool = 0; // 0x7dd MovB
	return 18; // 0x7de Return
	
Label_2015:
	StopWorld(); // 0x7df Func
	var_68_bool = 1; // 0x7e1 PushB
	CameraTransit(var_46_cvector, var_44_cvector, var_68_bool); // 0x7e2 Func
	var_69_float = GetByIndex(var_45_cvector, 0); // 0x7e4 PushE
	var_70_float = GetByIndex(var_45_cvector, 2); // 0x7e5 PushE
	Rotate(var_69_float, var_70_float); // 0x7e6 Func
	var_71_bool = 0; // 0x7e8 PushV
	func_2410(var_71_bool); // 0x7e9 NEW_2
	if(var_71_bool == 0) goto Label_2029; // 0x7eb JumpB
	goto Label_2037; // 0x7ec Jump
	
Label_2037:
	CameraWaitForPlayFinish(); // 0x7f5 Func
	ResumeWorld(); // 0x7f7 Func
	var_28_bool = 1; // 0x7f9 MovB
	return 18; // 0x7fa Return
	
Label_2029:
	var_72_string = "head"; // 0x7ed PushS
	HasAnimationTrack(var_48_bool, var_72_string); // 0x7ee Func
	var_73_bool = var_48_bool; // 0x7f0 Push
	if(var_73_bool == 0) goto Label_2037; // 0x7f1 JumpB
	var_74_string = "head"; // 0x7f2 PushS
	LookAsyncCamera(var_74_string); // 0x7f3 Func
}


func_2239(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x8bf PushV
	var_49_string = "idle"; // 0x8c0 MovS
	var_50_int = var_47_int; // 0x8c1 Push
	if(var_50_int == 0) goto Label_2244; // 0x8c2 JumpB
	var_49_string = var_49_string + var_47_int; // 0x8c3 Add2
	
Label_2244:
	var_46_string = var_49_string; // 0x8c4 Mov
	return 2; // 0x8c5 Return
}


func_1474(var_0_object)
{
	var_0_object = 1; // 0x5c2 TMovB
	var_19_int = 0; // 0x5c3 PushI
	KillTimer(var_19_int); // 0x5c4 Func
	Stop(); // 0x5c6 Func
	return 0; // 0x5c8 Return
}


func_2246(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x8c6 PushV
	var_43_int = 0; // 0x8c7 MovI
	
Label_2248:
	var_45_string = "all"; // 0x8c8 PushS
	var_46_string = ""; var_47_int = 0; // 0x8c9 PushV
	var_47_int = var_43_int; // 0x8ca Mov
	func_2239(var_46_string, var_47_int); // 0x8cb NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x8cd Func
	var_51_bool = var_44_bool == 0; // 0x8cf Not
	if(var_51_bool == 0) goto Label_2258; // 0x8d0 JumpB
	goto Label_2261; // 0x8d1 Jump
	
Label_2261:
	var_40_int = var_43_int; // 0x8d5 Mov
	return 4; // 0x8d6 Return
	
Label_2258:
	var_52_int = 1; // 0x8d2 PushI
	var_43_int = var_43_int + var_52_int; // 0x8d3 Add2
	goto Label_2248; // 0x8d4 Jump
}


func_1225(var_0_object)
{
	var_125_object = Obj(); // 0x4c9 PushV
	var_125_object = var_0_object; // 0x4ca MovT
	func_2219(var_125_object); // 0x4cb NEW_2
	return 0; // 0x4cd Return
}


func_1230(var_466_int)
{
	var_466_int = 0; // 0x4ce MovI
	return 0; // 0x4cf Return
}


func_1232()
{
	var_258_string = ""; // 0x4d0 PushV
	var_258_string = "attack_stay"; // 0x4d1 MovS
	func_2110(var_258_string); // 0x4d2 NEW_2
	return 0; // 0x4d4 Return
}


func_1490(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj(); // 0x5d3 PushV
	var_29_object = var_27_object; // 0x5d4 Mov
	func_1808(var_28_bool, var_29_object); // 0x5d5 NEW_2
	var_26_bool = var_28_bool; // 0x5d6 Mov
	return 0; // 0x5d8 Return
}


func_1237()
{
	return 0; // 0x4d6 Return
}


func_2263()
{
	var_50_int = 1; // 0x8d8 PushI
	SetReturnValue(var_50_int); // 0x8d9 ObjFunc
	return 0; // 0x8db Return
}


func_1239(var_491_bool)
{
	var_491_bool = 1; // 0x4d7 MovB
	return 0; // 0x4d8 Return
}


func_1241(var_383_int)
{
	var_383_int = 1; // 0x4d9 MovI
	return 0; // 0x4da Return
}


func_1497(var_201_string)
{
	var_201_string = "walk"; // 0x5d9 MovS
	return 0; // 0x5da Return
}


func_1243(var_378_float)
{
	var_378_float = 0.5; // 0x4db MovF
	return 0; // 0x4dc Return
}


func_2268()
{
	var_23_string = "d8q04"; // 0x8dd PushS
	var_24_int = 2; // 0x8de PushI
	SetVariable(var_23_string, var_24_int); // 0x8df Func
	func_2312(); // 0x8e2 NEW_2
	return 0; // 0x8e4 Return
}


func_1245(var_2_object, var_132_bool, var_133_object, var_134_float, var_135_float, var_136_bool, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0; // 0x4dd PushV
	var_145_object = Obj(); // 0x4de PushV
	var_145_object = var_133_object; // 0x4df Mov
	func_2219(var_145_object); // 0x4e0 NEW_2
	var_146_int = 1; // 0x4e2 PushI
	var_147_int = 5; // 0x4e3 PushI
	SetTimer(var_146_int, var_147_int); // 0x4e4 Func
	CanSee(var_143_bool, var_133_object); // 0x4e6 Func
	var_148_bool = var_143_bool; // 0x4e8 Push
	if(var_148_bool == 0) goto Label_1264; // 0x4e9 JumpB
	var_2_object = 1; // 0x4ea TMovB
	var_149_object = Obj(); // 0x4eb PushV
	var_149_object = var_133_object; // 0x4ec Mov
	func_2092(var_149_object); // 0x4ed NEW_2
	goto Label_1265; // 0x4ef Jump
	
Label_1265:
	var_156_bool = 0; var_157_object = Obj(); // 0x4f1 PushV
	var_157_object = var_133_object; // 0x4f2 Mov
	func_1677(var_156_bool, var_157_object); // 0x4f3 NEW_2
	if(var_156_bool == 0) goto Label_1275; // 0x4f5 JumpB
	var_160_object = Obj(); // 0x4f6 PushV
	func_2151(var_160_object); // 0x4f7 NEW_2
	SendPlayerEnemy(var_133_object, var_160_object); // 0x4f9 Func
	
Label_1275:
	var_161_bool = 0; var_162_object = Obj(); var_163_float = 0; var_164_float = 0; var_165_bool = 0; var_166_bool = 0; // 0x4fb PushV
	var_162_object = var_133_object; // 0x4fc Mov
	var_163_float = var_134_float; // 0x4fd Mov
	var_164_float = var_135_float; // 0x4fe Mov
	var_165_bool = var_136_bool; // 0x4ff Mov
	var_166_bool = var_137_bool; // 0x500 Mov
	func_1350(var_143_bool, var_144_bool, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool); // 0x501 NEW_2
	var_144_bool = var_161_bool; // 0x502 Mov
	var_212_object = var_2_object; // 0x504 PushT
	if(var_212_object == 0) goto Label_1289; // 0x505 JumpB
	var_213_string = "head"; // 0x506 PushS
	UnlookAsync(var_213_string); // 0x507 Func
	
Label_1289:
	var_214_int = 1; // 0x509 PushI
	KillTimer(var_214_int); // 0x50a Func
	var_132_bool = var_144_bool; // 0x50c Mov
	return 4; // 0x50d Return
	
Label_1264:
	var_2_object = 0; // 0x4f0 TMovB
}


func_1499(var_202_string)
{
	var_202_string = "run"; // 0x5db MovS
	return 0; // 0x5dc Return
}


func_477(var_17_bool)
{
	var_17_bool = 1; // 0x1dd MovB
	return 0; // 0x1de Return
}


func_1501(var_23_object)
{
	EventDisable(0); // 0x5de EventDisable
	var_24_object = Obj(); // 0x5df PushV
	var_24_object = var_23_object; // 0x5e0 Mov
	func_1526(var_24_object); // 0x5e1 NEW_2
	var_104_int = 50; // 0x5e3 PushI
	var_105_int = 40; // 0x5e4 PushI
	SetRTEnvelope(var_104_int, var_105_int); // 0x5e5 Func
	EventEnable(0); // 0x5e7 EventEnable
	
Label_1512:
	Hold(); // 0x5e8 Func
	goto Label_1512; // 0x5ea Jump
}


func_479()
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_float = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_float = 0; var_37_bool = 0; // 0x1df PushV
	WaitForAnimEnd(); // 0x1e0 Func
	var_38_bool = 0; // 0x1e2 PushV
	func_1969(var_38_bool); // 0x1e3 NEW_2
	var_39_bool = var_38_bool == 0; // 0x1e5 Not
	if(var_39_bool == 0) goto Label_488; // 0x1e6 JumpB
	return 14; // 0x1e7 Return
	
Label_488:
	var_40_int = 0; // 0x1e8 PushV
	func_2246(var_40_int); // 0x1e9 NEW_2
	var_31_int = var_40_int; // 0x1ea Mov
	var_32_int = 0; // 0x1ec MovI
	
Label_493:
	var_53_bool = 0; // 0x1ed PushV
	var_53_bool = 0; // 0x1ee MovB
	var_54_int = 5; // 0x1ef PushI
	var_55_bool = var_32_int < var_54_int; // 0x1f0 LT
	if(var_55_bool == 0) goto Label_503; // 0x1f1 JumpB
	var_56_bool = 0; // 0x1f2 PushV
	func_1969(var_56_bool); // 0x1f3 NEW_2
	if(var_56_bool == 0) goto Label_503; // 0x1f5 JumpB
	var_53_bool = 1; // 0x1f6 MovB
	
Label_503:
	if(var_53_bool == 0) goto Label_555; // 0x1f7 JumpB
	var_57_int = 3; // 0x1f8 PushI
	irand(var_33_int, var_57_int); // 0x1f9 Func
	var_58_int = 0; // 0x1fb PushI
	var_59_bool = var_33_int == var_58_int; // 0x1fc Eq
	if(var_59_bool == 0) goto Label_527; // 0x1fd JumpB
	var_60_int = var_31_int; // 0x1fe Push
	if(var_60_int == 0) goto Label_526; // 0x1ff JumpB
	irand(var_34_int, var_31_int); // 0x200 Func
	var_61_string = "all"; // 0x202 PushS
	var_62_string = ""; var_63_int = 0; // 0x203 PushV
	var_63_int = var_34_int; // 0x204 Mov
	func_2239(var_62_string, var_63_int); // 0x205 NEW_2
	PlayAnimation(var_61_string, var_62_string); // 0x207 Func
	WaitForAnimEnd(var_35_bool); // 0x209 Func
	var_64_bool = var_35_bool == 0; // 0x20b Not
	if(var_64_bool == 0) goto Label_526; // 0x20c JumpB
	goto Label_555; // 0x20d Jump
	
Label_555:
	ResetAAS(); // 0x22b Func
	return 14; // 0x22d Return
	
Label_526:
	goto Label_544; // 0x20e Jump
	
Label_544:
	var_65_bool = 0; // 0x220 PushV
	func_558(var_65_bool); // 0x221 NEW_2
	var_66_bool = var_65_bool == 0; // 0x223 Not
	if(var_66_bool == 0) goto Label_550; // 0x224 JumpB
	goto Label_555; // 0x225 Jump
	
Label_550:
	ResetAAS(); // 0x226 Func
	var_67_int = 1; // 0x228 PushI
	var_32_int = var_32_int + var_67_int; // 0x229 Add2
	goto Label_493; // 0x22a Jump
	
Label_527:
	var_68_int = 1; // 0x20f PushI
	var_69_bool = var_33_int == var_68_int; // 0x210 Eq
	if(var_69_bool == 0) goto Label_541; // 0x211 JumpB
	var_70_int = 4; // 0x212 PushI
	rand(var_36_float, var_70_int); // 0x213 Func
	var_71_int = 1; // 0x215 PushI
	var_72_int = var_36_float + var_71_int; // 0x216 Add
	Sleep(var_72_int, var_37_bool); // 0x217 Func
	var_73_bool = var_37_bool == 0; // 0x219 Not
	if(var_73_bool == 0) goto Label_540; // 0x21a JumpB
	goto Label_555; // 0x21b Jump
	
Label_540:
	goto Label_544; // 0x21c Jump
	
Label_541:
	var_74_int = var_32_int; // 0x21d Push
	if(var_74_int == 0) goto Label_544; // 0x21e JumpB
	goto Label_555; // 0x21f Jump
}


func_2277()
{
	func_2299(); // 0x8e7 NEW_2
	var_67_bool = 0; var_68_string = ""; var_69_string = ""; // 0x8e9 PushV
	var_68_string = "quest_d8_04"; // 0x8ea MovS
	var_69_string = "fail"; // 0x8eb MovS
	func_2207(var_67_bool, var_68_string, var_69_string); // 0x8ec NEW_2
	return 0; // 0x8ee Return
}


func_1767(var_43_bool)
{
	var_45_bool = 0; var_46_bool = 0; // 0x6e7 PushV
	IsDead(var_46_bool); // 0x6e8 ObjFunc
	var_43_bool = var_46_bool; // 0x6ea Mov
	return 2; // 0x6eb Return
}


func_1772(var_32_bool, var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); // 0x6ec PushV
	var_38_bool = var_33_object == 0; // 0x6ed NullEq
	if(var_38_bool == 0) goto Label_1777; // 0x6ee JumpB
	var_32_bool = 0; // 0x6ef MovB
	return 4; // 0x6f0 Return
	
Label_1777:
	var_39_bool = 0; // 0x6f1 PushV
	var_39_bool = 0; // 0x6f2 MovB
	var_40_string = "IsDead"; // 0x6f3 PushS
	var_41_int = 1; // 0x6f4 PushI
	var_42_bool = IsFuncExist(var_33_object, var_40_string, var_41_int); // 0x6f5 FuncExist
	if(var_42_bool == 0) goto Label_1789; // 0x6f6 JumpB
	var_43_bool = 0; var_44_object = Obj(); // 0x6f7 PushV
	var_44_object = var_33_object; // 0x6f8 Mov
	func_1767(var_44_object); // 0x6f9 NEW_2
	if(var_43_bool == 0) goto Label_1789; // 0x6fb JumpB
	var_39_bool = 1; // 0x6fc MovB
	
Label_1789:
	if(var_39_bool == 0) goto Label_1792; // 0x6fd JumpB
	var_32_bool = 0; // 0x6fe MovB
	return 4; // 0x6ff Return
	
Label_1792:
	GetScene(var_36_object); // 0x700 Func
	var_47_bool = var_36_object == 0; // 0x702 NullEq
	if(var_47_bool == 0) goto Label_1798; // 0x703 JumpB
	var_32_bool = 0; // 0x704 MovB
	return 4; // 0x705 Return
	
Label_1798:
	GetScene(var_37_object); // 0x706 ObjFunc
	var_48_bool = var_36_object != var_37_object; // 0x708 Neq
	if(var_48_bool == 0) goto Label_1804; // 0x709 JumpB
	var_32_bool = 0; // 0x70a MovB
	return 4; // 0x70b Return
	
Label_1804:
	var_32_bool = 1; // 0x70c MovB
	return 4; // 0x70d Return
}


func_2287(var_114_bool)
{
	var_116_int = 0; var_117_string = ""; // 0x8f0 PushV
	var_117_string = "d8q04"; // 0x8f1 MovS
	func_2185(var_116_int, var_117_string); // 0x8f2 NEW_2
	var_120_int = 1; // 0x8f4 PushI
	var_121_bool = var_116_int == var_120_int; // 0x8f5 Eq
	if(var_121_bool == 0) goto Label_2297; // 0x8f6 JumpB
	var_114_bool = 1; // 0x8f7 MovB
	return 0; // 0x8f8 Return
	
Label_2297:
	var_114_bool = 0; // 0x8f9 MovB
	return 0; // 0x8fa Return
}


func_1526(var_24_object)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_object = Obj(); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); // 0x5f6 PushV
	var_45_bool = var_24_object == 0; // 0x5f7 NullEq
	if(var_45_bool == 0) goto Label_1534; // 0x5f8 JumpB
	var_46_string = ""; // 0x5f9 PushV
	var_46_string = "fdie"; // 0x5fa MovS
	func_1617(var_46_string); // 0x5fb NEW_2
	goto Label_1616; // 0x5fd Jump
	
Label_1616:
	return 20; // 0x650 Return
	
Label_1534:
	GetPosition(var_35_cvector); // 0x5fe ObjFunc
	GetPosition(var_36_cvector); // 0x600 Func
	GetDirection(var_37_cvector); // 0x602 Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x604 Sub2
	var_78_float = GetByIndex(var_38_cvector, 0); // 0x605 PushE
	var_79_float = GetByIndex(var_37_cvector, 0); // 0x606 PushE
	var_80_float = var_78_float * var_79_float; // 0x607 Mult
	var_81_float = GetByIndex(var_38_cvector, 2); // 0x608 PushE
	var_82_float = GetByIndex(var_37_cvector, 2); // 0x609 PushE
	var_83_float = var_81_float * var_82_float; // 0x60a Mult
	var_84_int = var_80_float + var_83_float; // 0x60b Add
	var_85_int = 0; // 0x60c PushI
	var_86_bool = var_84_int >= var_85_int; // 0x60d GE
	if(var_86_bool == 0) goto Label_1553; // 0x60e JumpB
	var_39_string = "fdie"; // 0x60f MovS
	goto Label_1554; // 0x610 Jump
	
Label_1554:
	RemoveRTEnvelope(); // 0x612 Func
	SetDeathState(); // 0x614 Func
	Stop(); // 0x616 Func
	StopAsync(); // 0x618 Func
	var_40_object = var_24_object; // 0x61a Mov
	var_87_string = "GetScriptProperty"; // 0x61b PushS
	var_88_int = 2; // 0x61c PushI
	var_89_bool = IsFuncExist(var_24_object, var_87_string, var_88_int); // 0x61d FuncExist
	if(var_89_bool == 0) goto Label_1578; // 0x61e JumpB
	var_90_string = "Owner"; // 0x61f PushS
	HasScriptProperty(var_41_bool, var_90_string); // 0x620 ObjFunc
	var_91_bool = var_41_bool; // 0x622 Push
	if(var_91_bool == 0) goto Label_1578; // 0x623 JumpB
	var_92_string = "Owner"; // 0x624 PushS
	GetScriptProperty(var_40_object, var_92_string); // 0x625 ObjFunc
	var_93_bool = var_40_object == 0; // 0x627 NullEq
	if(var_93_bool == 0) goto Label_1578; // 0x628 JumpB
	var_40_object = var_24_object; // 0x629 Mov
	
Label_1578:
	var_94_string = "@GetEyesHeight"; // 0x62a PushS
	var_95_int = 1; // 0x62b PushI
	var_96_bool = IsFuncExist(var_40_object, var_94_string, var_95_int); // 0x62c FuncExist
	if(var_96_bool == 0) goto Label_1593; // 0x62d JumpB
	GetEyesHeight(var_43_float); // 0x62e ObjFunc
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x630 MovV
	var_97_float = GetByIndex(var_44_cvector, 1); // 0x631 PushE
	var_97_float = var_43_float; // 0x632 Mov
	SetByIndex(var_44_cvector, 1) = var_97_float; // 0x633 PopE
	var_98_string = "head"; // 0x634 PushS
	LookAsync(var_24_object, var_98_string, var_44_cvector); // 0x635 Func
	var_42_bool = 1; // 0x637 MovB
	goto Label_1594; // 0x638 Jump
	
Label_1594:
	var_99_string = ""; // 0x63a PushV
	var_99_string = var_39_string; // 0x63b Mov
	func_2110(var_99_string); // 0x63c NEW_2
	var_100_string = "all"; // 0x63e PushS
	PlayAnimation(var_100_string, var_39_string); // 0x63f Func
	WaitForAnimEnd(); // 0x641 Func
	var_101_bool = var_42_bool; // 0x643 Push
	if(var_101_bool == 0) goto Label_1610; // 0x644 JumpB
	StopAsync(); // 0x645 Func
	var_102_string = "head"; // 0x647 PushS
	UnlookAsync(var_102_string); // 0x648 Func
	
Label_1610:
	var_103_string = "all"; // 0x64a PushS
	LockAnimationEnd(var_103_string, var_39_string); // 0x64b Func
	RemoveEnvelope(); // 0x64d Func
	var_40_object = 0; // 0x64f SetNull
	
Label_1593:
	var_42_bool = 0; // 0x639 MovB
	
Label_1553:
	var_39_string = "bdie"; // 0x611 MovS
}


func_2299()
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x8fb PushV
	var_61_int = 654; // 0x8fc PushI
	var_62_int = 2; // 0x8fd PushI
	var_63_int = 533367; // 0x8fe PushI
	CreateDiaryEntry(var_60_object, var_61_int, var_62_int, var_63_int); // 0x8ff Func
	var_64_bool = 0; var_65_object = Obj(); var_66_int = 0; // 0x901 PushV
	var_65_object = var_60_object; // 0x902 Mov
	var_66_int = 649; // 0x903 MovI
	func_2338(var_64_bool, var_65_object, var_66_int); // 0x904 NEW_2
	return 2; // 0x906 Return
}


func_1023(var_492_bool, var_493_float)
{
	var_494_float = 0; var_495_bool = 0; var_496_float = 0; var_497_bool = 0; // 0x3ff PushV
	rand(var_496_float); // 0x400 Func
	var_498_bool = var_496_float < var_493_float; // 0x402 LT
	if(var_498_bool == 0) goto Label_1043; // 0x403 JumpB
	
Label_1028:
	IsAnimationPlaying(var_497_bool); // 0x404 Func
	var_499_bool = var_497_bool == 0; // 0x406 Not
	if(var_499_bool == 0) goto Label_1033; // 0x407 JumpB
	goto Label_1042; // 0x408 Jump
	
Label_1042:
	goto Label_1048; // 0x412 Jump
	
Label_1048:
	var_492_bool = 0; // 0x418 MovB
	return 4; // 0x419 Return
	
Label_1033:
	var_500_bool = 0; // 0x409 PushV
	func_1121(var_500_bool); // 0x40a NEW_2
	if(var_500_bool == 0) goto Label_1039; // 0x40c JumpB
	var_492_bool = 1; // 0x40d MovB
	return 4; // 0x40e Return
	
Label_1039:
	sync(); // 0x40f Func
	goto Label_1028; // 0x411 Jump
	
Label_1043:
	WaitForAnimEnd(); // 0x413 Func
	func_1225(var_497_bool); // 0x416 NEW_2
}


