task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa5 PushI
	if(var_12_int == 0) goto Label_395; // 0xa6 JumpB
	func_1055(); // 0xa8 NEW_2
	var_14_int = 42007; // 0xaa PushI
	var_15_bool = var_11_object == var_14_int; // 0xab Eq
	if(var_15_bool == 0) goto Label_188; // 0xac JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xad PushV
	var_16_object = var_1_object; // 0xae MovT
	var_17_object = var_0_object; // 0xaf MovT
	func_1184(); // 0xb0 NEW_2
	var_22_object = Obj(); var_23_object = Obj(); // 0xb2 PushV
	var_22_object = var_1_object; // 0xb3 MovT
	var_23_object = var_0_object; // 0xb4 MovT
	func_1190(); // 0xb5 NEW_2
	var_56_object = Obj(); var_57_object = Obj(); // 0xb7 PushV
	var_56_object = var_1_object; // 0xb8 MovT
	var_57_object = var_0_object; // 0xb9 MovT
	func_1207(); // 0xba NEW_2
	
Label_188:
	var_60_int = 42008; // 0xbc PushI
	var_61_bool = var_11_object == var_60_int; // 0xbd Eq
	if(var_61_bool == 0) goto Label_196; // 0xbe JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xbf PushV
	var_62_object = var_1_object; // 0xc0 MovT
	var_63_object = var_0_object; // 0xc1 MovT
	func_1167(); // 0xc2 NEW_2
	
Label_196:
	var_78_int = 15679; // 0xc4 PushI
	var_79_bool = var_11_object == var_78_int; // 0xc5 Eq
	if(var_79_bool == 0) goto Label_204; // 0xc6 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0xc7 PushV
	var_80_object = var_1_object; // 0xc8 MovT
	var_81_object = var_0_object; // 0xc9 MovT
	func_1167(); // 0xca NEW_2
	
Label_204:
	var_82_int = 42005; // 0xcc PushI
	var_83_bool = var_11_object == var_82_int; // 0xcd Eq
	if(var_83_bool == 0) goto Label_212; // 0xce JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0xcf PushV
	var_84_object = var_1_object; // 0xd0 MovT
	var_85_object = var_0_object; // 0xd1 MovT
	func_1213(); // 0xd2 NEW_2
	
Label_212:
	var_94_int = 15673; // 0xd4 PushI
	var_95_bool = var_10_bool == var_94_int; // 0xd5 Eq
	if(var_95_bool == 0) goto Label_245; // 0xd6 JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0xd7 PushV
	var_97_object = var_1_object; // 0xd8 MovT
	func_1246(var_97_object); // 0xd9 NEW_2
	if(var_96_bool == 0) goto Label_245; // 0xdb JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0xdc PushV
	var_104_object = var_1_object; // 0xdd MovT
	var_105_object = var_0_object; // 0xde MovT
	func_1229(); // 0xdf NEW_2
	var_108_string = ""; // 0xe1 PushV
	var_108_string = "Neutral"; // 0xe2 MovS
	func_142(var_11_object, var_108_string); // 0xe3 NEW_2
	var_125_int = 514445; // 0xe5 PushI
	SetMessage(var_125_int); // 0xe6 TObjFunc
	ClearReplies(); // 0xe8 TObjFunc
	var_126_int = 514456; // 0xea PushI
	var_127_int = 15687; // 0xeb PushI
	var_128_int = 15686; // 0xec PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xed TObjFunc
	var_129_int = 514446; // 0xef PushI
	var_130_int = 15675; // 0xf0 PushI
	var_131_int = 15674; // 0xf1 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xf2 TObjFunc
	return 0; // 0xf4 Return
	
Label_245:
	var_132_int = 15675; // 0xf5 PushI
	var_133_bool = var_10_bool == var_132_int; // 0xf6 Eq
	if(var_133_bool == 0) goto Label_268; // 0xf7 JumpB
	var_134_string = ""; // 0xf8 PushV
	var_134_string = "Neutral"; // 0xf9 MovS
	func_142(var_11_object, var_134_string); // 0xfa NEW_2
	var_135_int = 514447; // 0xfc PushI
	SetMessage(var_135_int); // 0xfd TObjFunc
	ClearReplies(); // 0xff TObjFunc
	var_136_int = 514448; // 0x101 PushI
	var_137_int = 15677; // 0x102 PushI
	var_138_int = 15676; // 0x103 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x104 TObjFunc
	var_139_int = 514452; // 0x106 PushI
	var_140_int = 15681; // 0x107 PushI
	var_141_int = 15680; // 0x108 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_142_int = 15681; // 0x10c PushI
	var_143_bool = var_10_bool == var_142_int; // 0x10d Eq
	if(var_143_bool == 0) goto Label_291; // 0x10e JumpB
	var_144_string = ""; // 0x10f PushV
	var_144_string = "Neutral"; // 0x110 MovS
	func_142(var_11_object, var_144_string); // 0x111 NEW_2
	var_145_int = 514453; // 0x113 PushI
	SetMessage(var_145_int); // 0x114 TObjFunc
	ClearReplies(); // 0x116 TObjFunc
	var_146_int = 514454; // 0x118 PushI
	var_147_int = 15677; // 0x119 PushI
	var_148_int = 15682; // 0x11a PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x11b TObjFunc
	var_149_int = 514455; // 0x11d PushI
	var_150_int = 15677; // 0x11e PushI
	var_151_int = 15684; // 0x11f PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x120 TObjFunc
	return 0; // 0x122 Return
	
Label_291:
	var_152_int = 15677; // 0x123 PushI
	var_153_bool = var_10_bool == var_152_int; // 0x124 Eq
	if(var_153_bool == 0) goto Label_319; // 0x125 JumpB
	var_154_string = ""; // 0x126 PushV
	var_154_string = "Neutral"; // 0x127 MovS
	func_142(var_11_object, var_154_string); // 0x128 NEW_2
	var_155_int = 514449; // 0x12a PushI
	SetMessage(var_155_int); // 0x12b TObjFunc
	ClearReplies(); // 0x12d TObjFunc
	var_156_int = 514450; // 0x12f PushI
	var_157_int = 42006; // 0x130 PushI
	var_158_int = 15678; // 0x131 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x132 TObjFunc
	var_159_int = 514451; // 0x134 PushI
	var_160_int = -1; // 0x135 PushI
	var_161_int = 15679; // 0x136 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x137 TObjFunc
	var_162_int = 540038; // 0x139 PushI
	var_163_int = -1; // 0x13a PushI
	var_164_int = 42005; // 0x13b PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x13c TObjFunc
	return 0; // 0x13e Return
	
Label_319:
	var_165_int = 42006; // 0x13f PushI
	var_166_bool = var_10_bool == var_165_int; // 0x140 Eq
	if(var_166_bool == 0) goto Label_347; // 0x141 JumpB
	var_167_string = ""; // 0x142 PushV
	var_167_string = "Neutral"; // 0x143 MovS
	func_142(var_11_object, var_167_string); // 0x144 NEW_2
	var_168_int = 540039; // 0x146 PushI
	SetMessage(var_168_int); // 0x147 TObjFunc
	ClearReplies(); // 0x149 TObjFunc
	var_169_bool = 0; var_170_object = Obj(); // 0x14b PushV
	var_170_object = var_1_object; // 0x14c MovT
	func_1235(var_169_bool, var_170_object); // 0x14d NEW_2
	if(var_169_bool == 0) goto Label_341; // 0x14f JumpB
	var_178_int = 540040; // 0x150 PushI
	var_179_int = -1; // 0x151 PushI
	var_180_int = 42007; // 0x152 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x153 TObjFunc
	
Label_341:
	var_181_int = 540041; // 0x155 PushI
	var_182_int = -1; // 0x156 PushI
	var_183_int = 42008; // 0x157 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x158 TObjFunc
	return 0; // 0x15a Return
	
Label_347:
	var_184_int = 15687; // 0x15b PushI
	var_185_bool = var_10_bool == var_184_int; // 0x15c Eq
	if(var_185_bool == 0) goto Label_365; // 0x15d JumpB
	var_186_string = ""; // 0x15e PushV
	var_186_string = "Neutral"; // 0x15f MovS
	func_142(var_11_object, var_186_string); // 0x160 NEW_2
	var_187_int = 514457; // 0x162 PushI
	SetMessage(var_187_int); // 0x163 TObjFunc
	ClearReplies(); // 0x165 TObjFunc
	var_188_int = 514458; // 0x167 PushI
	var_189_int = 15689; // 0x168 PushI
	var_190_int = 15688; // 0x169 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x16a TObjFunc
	return 0; // 0x16c Return
	
Label_365:
	var_191_int = 15689; // 0x16d PushI
	var_192_bool = var_10_bool == var_191_int; // 0x16e Eq
	if(var_192_bool == 0) goto Label_383; // 0x16f JumpB
	var_193_string = ""; // 0x170 PushV
	var_193_string = "Neutral"; // 0x171 MovS
	func_142(var_11_object, var_193_string); // 0x172 NEW_2
	var_194_int = 514459; // 0x174 PushI
	SetMessage(var_194_int); // 0x175 TObjFunc
	ClearReplies(); // 0x177 TObjFunc
	var_195_int = 514460; // 0x179 PushI
	var_196_int = 15681; // 0x17a PushI
	var_197_int = 15690; // 0x17b PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x17c TObjFunc
	return 0; // 0x17e Return
	
Label_383:
	var_3_string = 1; // 0x17f TMovB
	var_198_bool = 0; // 0x180 PushV
	func_1382(var_198_bool); // 0x181 NEW_2
	if(var_198_bool == 0) goto Label_391; // 0x183 JumpB
	lshStopAnimation(); // 0x184 Func
	goto Label_393; // 0x186 Jump
	
Label_393:
	return 0; // 0x189 Return
	
Label_391:
	StopAnimation(); // 0x187 Func
	
Label_395:
	return 0; // 0x18b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_int = 0; var_12_bool = 0; var_13_int = 0; var_14_bool = 0; // 0x198 PushV
	func_534(var_13_int, var_14_bool); // 0x19a NEW_2
	var_18_int = 0; var_19_object = Obj(); // 0x19c PushV
	var_19_object = var_10_object; // 0x19d Mov
	TaskCall(0); // 0x19e TaskCall
	func_0(var_20_object, var_18_int, var_19_object); // 0x19f NEW_2
	TaskReturn(); // 0x1a0 TaskReturn
	var_13_int = var_20_object; // 0x1a1 Mov
	var_158_int = 0; // 0x1a3 PushI
	var_159_bool = var_13_int == var_158_int; // 0x1a4 Eq
	if(var_159_bool == 0) goto Label_442; // 0x1a5 JumpB
	var_160_bool = GlobalVars[1]; // 0x1a6 PushGE
	var_160_bool = 1; // 0x1a7 MovB
	GlobalVars[1] = var_160_bool; // 0x1a8 PopGE
	var_161_string = "all"; // 0x1a9 PushS
	var_162_string = "attack_begin2"; // 0x1aa PushS
	PlayAnimation(var_161_string, var_162_string); // 0x1ab Func
	WaitForAnimEnd(var_14_bool); // 0x1ad Func
	var_163_string = "all"; // 0x1af PushS
	var_164_string = "attack_end2"; // 0x1b0 PushS
	PlayAnimation(var_163_string, var_164_string); // 0x1b1 Func
	WaitForAnimEnd(var_14_bool); // 0x1b3 Func
	var_165_bool = 0; var_166_string = ""; var_167_string = ""; // 0x1b5 PushV
	var_166_string = "quest_d11_01"; // 0x1b6 MovS
	var_167_string = "teleport"; // 0x1b7 MovS
	func_1131(var_165_bool, var_166_string, var_167_string); // 0x1b8 NEW_2
	
Label_442:
	return 4; // 0x1ba Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_534(var_9_object, var_10_object); // 0x1bd NEW_2
	var_14_bool = 0; var_15_string = ""; var_16_string = ""; // 0x1bf PushV
	var_15_string = "quest_d11_01"; // 0x1c0 MovS
	var_16_string = "soldier_attack"; // 0x1c1 MovS
	func_1131(var_14_bool, var_15_string, var_16_string); // 0x1c2 NEW_2
	var_20_string = "health"; // 0x1c4 PushS
	var_21_int = 0; // 0x1c5 PushI
	SetProperty(var_20_string, var_21_int); // 0x1c6 Func
	var_22_string = "d11q01"; // 0x1c8 PushS
	var_23_int = 3; // 0x1c9 PushI
	SetVariable(var_22_string, var_23_int); // 0x1ca Func
	var_24_bool = 0; var_25_string = ""; var_26_string = ""; // 0x1cc PushV
	var_25_string = "quest_d11_01"; // 0x1cd MovS
	var_26_string = "restore_andrei"; // 0x1ce MovS
	func_1131(var_24_bool, var_25_string, var_26_string); // 0x1cf NEW_2
	func_1258(); // 0x1d2 NEW_2
	return 0; // 0x1d4 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x200 PushI
	var_12_bool = var_10_int == var_11_int; // 0x201 Eq
	if(var_12_bool == 0) goto Label_533; // 0x202 JumpB
	var_13_bool = 0; // 0x203 PushV
	func_496(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x204 NEW_2
	if(var_13_bool == 0) goto Label_527; // 0x206 JumpB
	var_26_bool = var_2_object == 0; // 0x207 Not
	if(var_26_bool == 0) goto Label_526; // 0x208 JumpB
	var_27_object = Obj(); // 0x209 PushV
	var_27_object = var_4_bool; // 0x20a MovT
	func_1044(var_27_object); // 0x20b NEW_2
	var_2_object = 1; // 0x20d TMovB
	
Label_526:
	goto Label_533; // 0x20e Jump
	
Label_533:
	return 0; // 0x215 Return
	
Label_527:
	var_34_object = var_2_object; // 0x20f PushT
	if(var_34_object == 0) goto Label_533; // 0x210 JumpB
	var_35_string = "head"; // 0x211 PushS
	UnlookAsync(var_35_string); // 0x212 Func
	var_2_object = 0; // 0x214 TMovB
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x289 PushV
	IsOverrideActive(var_12_bool); // 0x28a Func
	var_13_bool = var_12_bool == 0; // 0x28c Not
	if(var_13_bool == 0) goto Label_658; // 0x28d JumpB
	var_14_object = Obj(); // 0x28e PushV
	var_14_object = var_10_object; // 0x28f Mov
	func_1361(var_14_object); // 0x290 NEW_2
	
Label_658:
	return 2; // 0x292 Return
}


task_3_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0; // 0x309 Return
}


task_3_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	return 0; // 0x30b Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	return 0; // 0x30d Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x579 PushV
	var_14_object = var_10_object; // 0x57a Mov
	var_15_int = var_11_int; // 0x57b Mov
	var_16_float = var_12_float; // 0x57c Mov
	func_841(var_14_object, var_15_int, var_16_float); // 0x57d NEW_2
	return 0; // 0x57f Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x581 PushV
	var_16_object = var_10_object; // 0x582 Mov
	var_17_int = var_11_int; // 0x583 Mov
	var_18_float = var_12_float; // 0x584 Mov
	var_19_cvector = var_14_cvector; // 0x585 Mov
	var_20_cvector = var_15_cvector; // 0x586 Mov
	func_909(var_18_float, var_19_cvector, var_20_cvector); // 0x587 NEW_2
	return 0; // 0x589 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x58a PushV
	var_14_bool = GlobalVars[1]; // 0x58b PushGE
	if(var_14_bool == 0) goto Label_1422; // 0x58c JumpB
	return 2; // 0x58d Return
	
Label_1422:
	var_15_string = "health"; // 0x58e PushS
	var_16_bool = var_11_string == var_15_string; // 0x58f Eq
	if(var_16_bool == 0) goto Label_1433; // 0x590 JumpB
	var_17_string = "health"; // 0x591 PushS
	GetProperty(var_17_string, var_13_float); // 0x592 Func
	var_18_int = 0; // 0x594 PushI
	var_19_bool = var_13_float <= var_18_int; // 0x595 LE
	if(var_19_bool == 0) goto Label_1433; // 0x596 JumpB
	SignalDeath(var_10_object); // 0x597 Func
	
Label_1433:
	return 2; // 0x599 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_object = Obj(); // 0x59b PushV
	var_11_object = var_10_object; // 0x59c Mov
	func_1384(var_11_object); // 0x59d NEW_2
	return 0; // 0x59f Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	var_10_bool = GlobalVars[1]; // 0x18c PushGE
	var_10_bool = 0; // 0x18d MovB
	GlobalVars[1] = var_10_bool; // 0x18e PopGE
	
Label_399:
	var_11_bool = 1; // 0x18f PushB
	if(var_11_bool == 0) goto Label_407; // 0x190 JumpB
	var_12_float = 0; var_13_float = 0; // 0x191 PushV
	var_12_float = 300; // 0x192 MovI
	var_13_float = 100; // 0x193 MovI
	func_469(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_12_float, var_13_float); // 0x194 NEW_2
	goto Label_399; // 0x196 Jump
	
Label_407:
	return 0; // 0x197 Return
}


func_0(var_0_object, var_18_int, var_19_object)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0x0 PushV
	var_0_object = var_19_object; // 0x1 TMov
	var_29_bool = 0; var_30_object = Obj(); var_31_float = 0; // 0x2 PushV
	var_30_object = var_19_object; // 0x3 Mov
	var_31_float = 70.0; // 0x4 MovF
	func_928(var_30_object, var_31_float); // 0x5 NEW_2
	var_75_bool = var_29_bool == 0; // 0x7 Not
	if(var_75_bool == 0) goto Label_11; // 0x8 JumpB
	var_18_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_25_object); // 0xb Func
	var_76_int = 0; // 0xd PushV
	func_1376(var_76_int); // 0xe NEW_2
	SetNPCName(var_76_int); // 0x10 ObjFunc
	var_77_int = 0; // 0x12 PushV
	func_1374(var_77_int); // 0x13 NEW_2
	SetNPCDescription(var_77_int); // 0x15 ObjFunc
	var_78_string = ""; // 0x17 PushV
	func_1378(var_78_string); // 0x18 NEW_2
	SetPhoto(var_78_string); // 0x1a ObjFunc
	var_79_string = ""; // 0x1c PushV
	func_1380(var_79_string); // 0x1d NEW_2
	SetPhoto2(var_79_string); // 0x1f ObjFunc
	var_80_int = 0; // 0x21 PushV
	func_1338(var_80_int); // 0x22 NEW_2
	SetPlayerName(var_80_int); // 0x24 ObjFunc
	var_27_int = -1; // 0x26 MovI
	IsOverrideActive(var_26_bool); // 0x27 Func
	var_88_bool = var_26_bool; // 0x29 Push
	if(var_88_bool == 0) goto Label_45; // 0x2a JumpB
	var_18_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_25_object); // 0x2d Func
	var_89_object = Obj(); var_90_object = Obj(); // 0x2f PushV
	var_89_object = var_19_object; // 0x30 Mov
	var_90_object = var_25_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_28_bool); // 0x36 ObjFunc
	
Label_56:
	var_150_bool = var_28_bool == 0; // 0x38 Not
	if(var_150_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_28_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_151_object = Obj(); // 0x3f PushV
	var_151_object = var_19_object; // 0x40 Mov
	func_996(); // 0x41 NEW_2
	StopDialog(var_25_object); // 0x43 Func
	GetReturnValue(var_27_int); // 0x45 ObjFunc
	var_18_int = var_27_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1284()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x504 PushV
	var_68_int = 768; // 0x505 PushI
	var_69_int = 1; // 0x506 PushI
	var_70_int = 540065; // 0x507 PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x508 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x50a PushV
	var_72_object = var_67_object; // 0x50b Mov
	var_73_int = 192; // 0x50c MovI
	func_1310(var_71_bool, var_72_object, var_73_int); // 0x50d NEW_2
	return 2; // 0x50f Return
}


func_1029(var_112_string, var_113_bool)
{
	var_116_bool = 0; var_117_float = 0; var_118_float = 0; var_119_bool = 0; var_120_float = 0; var_121_float = 0; // 0x405 PushV
	lshHasAnimation(var_119_bool, var_112_string); // 0x406 Func
	var_122_bool = var_119_bool; // 0x408 Push
	if(var_122_bool == 0) goto Label_1039; // 0x409 JumpB
	lshGetAnimTimes(var_112_string, var_120_float, var_121_float); // 0x40a Func
	lshPlayAnimation(var_120_float, var_121_float, var_113_bool); // 0x40c Func
	goto Label_1043; // 0x40e Jump
	
Label_1043:
	return 6; // 0x413 Return
	
Label_1039:
	var_123_string = "Can't find lsh animation : "; // 0x40f PushS
	var_124_int = var_123_string + var_112_string; // 0x410 Add
	Trace(var_124_int); // 0x411 Func
}


func_909(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x38d PushV
	GetScene(var_23_object); // 0x38e Func
	var_25_string = "scripted"; // 0x390 PushS
	var_26_string = "blood_dir.xml"; // 0x391 PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x392 Func
	var_27_object = Obj(); // 0x394 PushV
	var_27_object = var_16_object; // 0x395 Mov
	func_797(var_27_object); // 0x396 NEW_2
	return 4; // 0x398 Return
}


func_142(var_2_object, var_108_string)
{
	var_109_bool = 0; // 0x8f PushV
	func_1382(var_109_bool); // 0x90 NEW_2
	var_110_bool = var_109_bool == 0; // 0x92 Not
	if(var_110_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_111_bool = var_108_string == var_2_object; // 0x95 Eq
	if(var_111_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_112_string = ""; var_113_bool = 0; // 0x98 PushV
	var_112_string = var_108_string; // 0x99 Mov
	var_114_string = ""; // 0x9a PushS
	var_115_bool = var_108_string == var_114_string; // 0x9b Eq
	if(var_115_bool == 0) goto Label_159; // 0x9c JumpB
	var_113_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_1029(var_112_string, var_113_bool); // 0xa0 NEW_2
	var_2_object = var_108_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_113_bool = 1; // 0x9f MovB
}


func_1167()
{
	var_64_string = "d11q01"; // 0x490 PushS
	var_65_int = 3; // 0x491 PushI
	SetVariable(var_64_string, var_65_int); // 0x492 Func
	func_1284(); // 0x495 NEW_2
	var_74_bool = 0; var_75_string = ""; var_76_string = ""; // 0x497 PushV
	var_75_string = "quest_d11_01"; // 0x498 MovS
	var_76_string = "restore_andrei"; // 0x499 MovS
	func_1131(var_74_bool, var_75_string, var_76_string); // 0x49a NEW_2
	var_77_int = 0; // 0x49c PushI
	SetReturnValue(var_77_int); // 0x49d ObjFunc
	return 0; // 0x49f Return
}


func_782(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x30e PushV
	GetPosition(var_48_cvector); // 0x30f Func
	GetPosition(var_49_cvector); // 0x311 ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x313 Sub2
	return 4; // 0x314 Return
}


func_1297(var_41_object)
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x511 PushV
	GetDiaryRoot(var_43_object); // 0x512 Func
	var_44_bool = var_43_object == 0; // 0x514 Not
	if(var_44_bool == 0) goto Label_1307; // 0x515 JumpB
	var_45_string = "Can't retrieve diary root"; // 0x516 PushS
	Trace(var_45_string); // 0x517 Func
	var_41_object = 0; // 0x519 MovB
	return 2; // 0x51a Return
	
Label_1307:
	var_41_object = var_43_object; // 0x51b Mov
	return 2; // 0x51c Return
}


func_659(var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); // 0x293 PushV
	var_39_bool = var_18_object == 0; // 0x294 NullEq
	if(var_39_bool == 0) goto Label_667; // 0x295 JumpB
	var_40_string = ""; // 0x296 PushV
	var_40_string = "fdie"; // 0x297 MovS
	func_750(var_40_string); // 0x298 NEW_2
	goto Label_749; // 0x29a Jump
	
Label_749:
	return 20; // 0x2ed Return
	
Label_667:
	GetPosition(var_29_cvector); // 0x29b ObjFunc
	GetPosition(var_30_cvector); // 0x29d Func
	GetDirection(var_31_cvector); // 0x29f Func
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x2a1 Sub2
	var_72_float = GetByIndex(var_32_cvector, 0); // 0x2a2 PushE
	var_73_float = GetByIndex(var_31_cvector, 0); // 0x2a3 PushE
	var_74_float = var_72_float * var_73_float; // 0x2a4 Mult
	var_75_float = GetByIndex(var_32_cvector, 2); // 0x2a5 PushE
	var_76_float = GetByIndex(var_31_cvector, 2); // 0x2a6 PushE
	var_77_float = var_75_float * var_76_float; // 0x2a7 Mult
	var_78_int = var_74_float + var_77_float; // 0x2a8 Add
	var_79_int = 0; // 0x2a9 PushI
	var_80_bool = var_78_int >= var_79_int; // 0x2aa GE
	if(var_80_bool == 0) goto Label_686; // 0x2ab JumpB
	var_33_string = "fdie"; // 0x2ac MovS
	goto Label_687; // 0x2ad Jump
	
Label_687:
	RemoveRTEnvelope(); // 0x2af Func
	SetDeathState(); // 0x2b1 Func
	Stop(); // 0x2b3 Func
	StopAsync(); // 0x2b5 Func
	var_34_object = var_18_object; // 0x2b7 Mov
	var_81_string = "GetScriptProperty"; // 0x2b8 PushS
	var_82_int = 2; // 0x2b9 PushI
	var_83_bool = IsFuncExist(var_18_object, var_81_string, var_82_int); // 0x2ba FuncExist
	if(var_83_bool == 0) goto Label_711; // 0x2bb JumpB
	var_84_string = "Owner"; // 0x2bc PushS
	HasScriptProperty(var_35_bool, var_84_string); // 0x2bd ObjFunc
	var_85_bool = var_35_bool; // 0x2bf Push
	if(var_85_bool == 0) goto Label_711; // 0x2c0 JumpB
	var_86_string = "Owner"; // 0x2c1 PushS
	GetScriptProperty(var_34_object, var_86_string); // 0x2c2 ObjFunc
	var_87_bool = var_34_object == 0; // 0x2c4 NullEq
	if(var_87_bool == 0) goto Label_711; // 0x2c5 JumpB
	var_34_object = var_18_object; // 0x2c6 Mov
	
Label_711:
	var_88_string = "@GetEyesHeight"; // 0x2c7 PushS
	var_89_int = 1; // 0x2c8 PushI
	var_90_bool = IsFuncExist(var_34_object, var_88_string, var_89_int); // 0x2c9 FuncExist
	if(var_90_bool == 0) goto Label_726; // 0x2ca JumpB
	GetEyesHeight(var_37_float); // 0x2cb ObjFunc
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x2cd MovV
	var_91_float = GetByIndex(var_38_cvector, 1); // 0x2ce PushE
	var_91_float = var_37_float; // 0x2cf Mov
	SetByIndex(var_38_cvector, 1) = var_91_float; // 0x2d0 PopE
	var_92_string = "head"; // 0x2d1 PushS
	LookAsync(var_18_object, var_92_string, var_38_cvector); // 0x2d2 Func
	var_36_bool = 1; // 0x2d4 MovB
	goto Label_727; // 0x2d5 Jump
	
Label_727:
	var_93_string = ""; // 0x2d7 PushV
	var_93_string = var_33_string; // 0x2d8 Mov
	func_1062(var_93_string); // 0x2d9 NEW_2
	var_94_string = "all"; // 0x2db PushS
	PlayAnimation(var_94_string, var_33_string); // 0x2dc Func
	WaitForAnimEnd(); // 0x2de Func
	var_95_bool = var_36_bool; // 0x2e0 Push
	if(var_95_bool == 0) goto Label_743; // 0x2e1 JumpB
	StopAsync(); // 0x2e2 Func
	var_96_string = "head"; // 0x2e4 PushS
	UnlookAsync(var_96_string); // 0x2e5 Func
	
Label_743:
	var_97_string = "all"; // 0x2e7 PushS
	LockAnimationEnd(var_97_string, var_33_string); // 0x2e8 Func
	RemoveEnvelope(); // 0x2ea Func
	var_34_object = 0; // 0x2ec SetNull
	
Label_726:
	var_36_bool = 0; // 0x2d6 MovB
	
Label_686:
	var_33_string = "bdie"; // 0x2ae MovS
}


func_1044(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x414 PushV
	GetEyesHeight(var_30_float); // 0x415 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x417 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x418 PushE
	var_32_float = var_30_float; // 0x419 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x41a PopE
	var_33_string = "head"; // 0x41b PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x41c Func
	return 4; // 0x41e Return
}


func_789(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x315 PushV
	GetPosition(var_22_cvector); // 0x316 Func
	GetPosition(var_23_cvector); // 0x318 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x31a Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x31b Or2
	return 6; // 0x31c Return
}


func_534(var_2_object, var_3_string)
{
	func_629(); // 0x217 NEW_2
	var_11_int = 10; // 0x219 PushI
	KillTimer(var_11_int); // 0x21a Func
	var_12_object = var_2_object; // 0x21c PushT
	if(var_12_object == 0) goto Label_546; // 0x21d JumpB
	var_13_string = "head"; // 0x21e PushS
	UnlookAsync(var_13_string); // 0x21f Func
	var_2_object = 0; // 0x221 TMovB
	
Label_546:
	var_3_string = 1; // 0x222 TMovB
	return 0; // 0x223 Return
}


func_923(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x39b PushV
	IsLoaded(var_16_bool); // 0x39c Func
	var_14_bool = var_16_bool; // 0x39e Mov
	return 2; // 0x39f Return
}


func_797(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x31d PushV
	var_42_bool = var_27_object == 0; // 0x31e NullEq
	if(var_42_bool == 0) goto Label_801; // 0x31f JumpB
	return 14; // 0x320 Return
	
Label_801:
	IsDead(var_35_bool); // 0x321 Func
	var_43_bool = var_35_bool; // 0x323 Push
	if(var_43_bool == 0) goto Label_806; // 0x324 JumpB
	return 14; // 0x325 Return
	
Label_806:
	GetSecondaryAnimationType(var_36_int); // 0x326 Func
	var_44_int = 0; // 0x328 PushI
	var_45_bool = var_36_int < var_44_int; // 0x329 LT
	if(var_45_bool == 0) goto Label_812; // 0x32a JumpB
	return 14; // 0x32b Return
	
Label_812:
	GetPosition(var_37_cvector); // 0x32c ObjFunc
	GetPosition(var_38_cvector); // 0x32e Func
	GetDirection(var_39_cvector); // 0x330 Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x332 Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x333 PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x334 PushE
	var_48_float = var_46_float * var_47_float; // 0x335 Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x336 PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x337 PushE
	var_51_float = var_49_float * var_50_float; // 0x338 Mult
	var_52_int = var_48_float + var_51_float; // 0x339 Add
	var_53_int = 0; // 0x33a PushI
	var_54_bool = var_52_int >= var_53_int; // 0x33b GE
	if(var_54_bool == 0) goto Label_831; // 0x33c JumpB
	var_41_string = "fhit"; // 0x33d MovS
	goto Label_832; // 0x33e Jump
	
Label_832:
	var_55_string = "hit_react"; // 0x340 PushS
	var_56_string = "1"; // 0x341 PushS
	var_57_int = var_41_string + var_56_string; // 0x342 Add
	var_58_string = "2"; // 0x343 PushS
	var_59_int = var_41_string + var_58_string; // 0x344 Add
	var_60_int = -10; // 0x345 PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x346 Func
	return 14; // 0x348 Return
	
Label_831:
	var_41_string = "bhit"; // 0x33f MovS
}


func_1310(var_32_bool, var_33_object, var_34_int)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_int = 0; var_38_object = Obj(); var_39_object = Obj(); var_40_int = 0; // 0x51e PushV
	var_41_object = Obj(); // 0x51f PushV
	func_1297(var_41_object); // 0x520 NEW_2
	var_38_object = var_41_object; // 0x521 Mov
	Find(var_34_int, var_39_object); // 0x523 ObjFunc
	var_46_bool = var_39_object == 0; // 0x525 Not
	if(var_46_bool == 0) goto Label_1325; // 0x526 JumpB
	var_47_string = "Can't find diary parent with id: "; // 0x527 PushS
	var_48_int = var_47_string + var_34_int; // 0x528 Add
	Trace(var_48_int); // 0x529 Func
	var_32_bool = 0; // 0x52b MovB
	return 6; // 0x52c Return
	
Label_1325:
	AddChild(var_33_object); // 0x52d ObjFunc
	var_49_int = 7; // 0x52f PushI
	SendWorldWndMessage(var_49_int); // 0x530 Func
	GetCategory(var_40_int); // 0x532 ObjFunc
	SetDiarySection(var_40_int); // 0x534 Func
	var_32_bool = 0; // 0x536 MovB
	return 6; // 0x537 Return
}


func_1055()
{
	var_13_bool = 0; // 0x41f PushV
	func_1382(var_13_bool); // 0x420 NEW_2
	if(var_13_bool == 0) goto Label_1061; // 0x422 JumpB
	lshStopSpeech(); // 0x423 Func
	
Label_1061:
	return 0; // 0x425 Return
}


func_928(var_29_bool, var_31_float)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0; // 0x3a0 PushV
	GetPosition(var_42_cvector); // 0x3a1 ObjFunc
	GetEyesHeight(var_41_float); // 0x3a3 ObjFunc
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x3a5 PushE
	var_50_float = var_50_float + var_41_float; // 0x3a6 Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x3a7 PopE
	GetPosition(var_43_cvector); // 0x3a8 Func
	GetEyesHeight(var_41_float); // 0x3aa Func
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x3ac PushE
	var_51_float = var_51_float + var_41_float; // 0x3ad Add2
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x3ae PopE
	var_44_cvector = var_42_cvector - var_43_cvector; // 0x3af Sub2
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x3b0 PushE
	var_52_float = 0; // 0x3b1 MovI
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x3b2 PopE
	var_53_int = var_44_cvector | var_44_cvector; // 0x3b3 Or
	var_54_float = sqrt(var_53_int); // 0x3b4 Sqrt
	var_44_cvector = var_44_cvector / var_44_cvector; // 0x3b5 Div2
	var_45_cvector = -var_44_cvector; // 0x3b6 Neg2
	var_55_float = var_44_cvector * var_31_float; // 0x3b7 Mult
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x3b8 PushV
	var_58_cvector = CVector(0.0, 1.0, 0.0); // 0x3b9 PushVec
	var_57_cvector = var_45_cvector ^ var_58_cvector; // 0x3ba Xor2
	func_1109(var_56_cvector, var_57_cvector); // 0x3bb NEW_2
	var_64_int = 25; // 0x3bd PushI
	var_65_float = var_56_cvector * var_64_int; // 0x3be Mult
	var_66_int = var_55_float + var_65_float; // 0x3bf Add
	var_67_cvector = CVector(0.0, 10.0, 0.0); // 0x3c0 PushVec
	var_46_cvector = var_66_int - var_67_cvector; // 0x3c1 Sub2
	var_47_cvector = var_43_cvector + var_46_cvector; // 0x3c2 Add2
	IsOverrideActive(var_48_bool); // 0x3c3 Func
	var_68_bool = var_48_bool; // 0x3c5 Push
	if(var_68_bool == 0) goto Label_969; // 0x3c6 JumpB
	var_29_bool = 0; // 0x3c7 MovB
	return 18; // 0x3c8 Return
	
Label_969:
	StopWorld(); // 0x3c9 Func
	CameraTransit(var_47_cvector, var_45_cvector); // 0x3cb Func
	var_69_float = GetByIndex(var_46_cvector, 0); // 0x3cd PushE
	var_70_float = GetByIndex(var_46_cvector, 2); // 0x3ce PushE
	Rotate(var_69_float, var_70_float); // 0x3cf Func
	var_71_bool = 0; // 0x3d1 PushV
	func_1382(var_71_bool); // 0x3d2 NEW_2
	if(var_71_bool == 0) goto Label_982; // 0x3d4 JumpB
	goto Label_990; // 0x3d5 Jump
	
Label_990:
	CameraWaitForPlayFinish(); // 0x3de Func
	ResumeWorld(); // 0x3e0 Func
	var_29_bool = 1; // 0x3e2 MovB
	return 18; // 0x3e3 Return
	
Label_982:
	var_72_string = "head"; // 0x3d6 PushS
	HasAnimationTrack(var_49_bool, var_72_string); // 0x3d7 Func
	var_73_bool = var_49_bool; // 0x3d9 Push
	if(var_73_bool == 0) goto Label_990; // 0x3da JumpB
	var_74_string = "head"; // 0x3db PushS
	LookAsyncCamera(var_74_string); // 0x3dc Func
}


func_1184()
{
	var_18_int = 0; var_19_int = 0; // 0x4a0 PushV
	var_20_string = "burah_serum"; // 0x4a1 PushS
	var_21_int = 1; // 0x4a2 PushI
	RemoveItemByType(var_19_int, var_20_string, var_21_int); // 0x4a3 ObjFunc
	return 2; // 0x4a5 Return
}


func_548()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x224 PushV
	WaitForAnimEnd(); // 0x225 Func
	var_35_bool = 0; // 0x227 PushV
	func_923(var_35_bool); // 0x228 NEW_2
	var_36_bool = var_35_bool == 0; // 0x22a Not
	if(var_36_bool == 0) goto Label_557; // 0x22b JumpB
	return 14; // 0x22c Return
	
Label_557:
	var_37_int = 0; // 0x22d PushV
	func_1150(var_37_int); // 0x22e NEW_2
	var_28_int = var_37_int; // 0x22f Mov
	var_29_int = 0; // 0x231 MovI
	
Label_562:
	var_50_bool = 0; // 0x232 PushV
	var_50_bool = 0; // 0x233 MovB
	var_51_int = 5; // 0x234 PushI
	var_52_bool = var_29_int < var_51_int; // 0x235 LT
	if(var_52_bool == 0) goto Label_572; // 0x236 JumpB
	var_53_bool = 0; // 0x237 PushV
	func_923(var_53_bool); // 0x238 NEW_2
	if(var_53_bool == 0) goto Label_572; // 0x23a JumpB
	var_50_bool = 1; // 0x23b MovB
	
Label_572:
	if(var_50_bool == 0) goto Label_624; // 0x23c JumpB
	var_54_int = 3; // 0x23d PushI
	irand(var_30_int, var_54_int); // 0x23e Func
	var_55_int = 0; // 0x240 PushI
	var_56_bool = var_30_int == var_55_int; // 0x241 Eq
	if(var_56_bool == 0) goto Label_596; // 0x242 JumpB
	var_57_int = var_28_int; // 0x243 Push
	if(var_57_int == 0) goto Label_595; // 0x244 JumpB
	irand(var_31_int, var_28_int); // 0x245 Func
	var_58_string = "all"; // 0x247 PushS
	var_59_string = ""; var_60_int = 0; // 0x248 PushV
	var_60_int = var_31_int; // 0x249 Mov
	func_1143(var_59_string, var_60_int); // 0x24a NEW_2
	PlayAnimation(var_58_string, var_59_string); // 0x24c Func
	WaitForAnimEnd(var_32_bool); // 0x24e Func
	var_61_bool = var_32_bool == 0; // 0x250 Not
	if(var_61_bool == 0) goto Label_595; // 0x251 JumpB
	goto Label_624; // 0x252 Jump
	
Label_624:
	ResetAAS(); // 0x270 Func
	return 14; // 0x272 Return
	
Label_595:
	goto Label_613; // 0x253 Jump
	
Label_613:
	var_62_bool = 0; // 0x265 PushV
	func_627(var_62_bool); // 0x266 NEW_2
	var_63_bool = var_62_bool == 0; // 0x268 Not
	if(var_63_bool == 0) goto Label_619; // 0x269 JumpB
	goto Label_624; // 0x26a Jump
	
Label_619:
	ResetAAS(); // 0x26b Func
	var_64_int = 1; // 0x26d PushI
	var_29_int = var_29_int + var_64_int; // 0x26e Add2
	goto Label_562; // 0x26f Jump
	
Label_596:
	var_65_int = 1; // 0x254 PushI
	var_66_bool = var_30_int == var_65_int; // 0x255 Eq
	if(var_66_bool == 0) goto Label_610; // 0x256 JumpB
	var_67_int = 4; // 0x257 PushI
	rand(var_33_float, var_67_int); // 0x258 Func
	var_68_int = 1; // 0x25a PushI
	var_69_int = var_33_float + var_68_int; // 0x25b Add
	Sleep(var_69_int, var_34_bool); // 0x25c Func
	var_70_bool = var_34_bool == 0; // 0x25e Not
	if(var_70_bool == 0) goto Label_609; // 0x25f JumpB
	goto Label_624; // 0x260 Jump
	
Label_609:
	goto Label_613; // 0x261 Jump
	
Label_610:
	var_71_int = var_29_int; // 0x262 Push
	if(var_71_int == 0) goto Label_613; // 0x263 JumpB
	goto Label_624; // 0x264 Jump
}


func_1190()
{
	var_24_string = "d11q01"; // 0x4a7 PushS
	var_25_int = 3; // 0x4a8 PushI
	SetVariable(var_24_string, var_25_int); // 0x4a9 Func
	func_1271(); // 0x4ac NEW_2
	var_49_bool = 0; var_50_string = ""; var_51_string = ""; // 0x4ae PushV
	var_50_string = "quest_d11_01"; // 0x4af MovS
	var_51_string = "restore_andrei"; // 0x4b0 MovS
	func_1131(var_49_bool, var_50_string, var_51_string); // 0x4b1 NEW_2
	var_55_int = 1; // 0x4b3 PushI
	SetReturnValue(var_55_int); // 0x4b4 ObjFunc
	return 0; // 0x4b6 Return
}


func_1062(var_41_string)
{
	var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x426 PushV
	IsExisting3DSound(var_50_bool, var_41_string); // 0x427 Func
	var_58_bool = var_50_bool == 0; // 0x429 Not
	if(var_58_bool == 0) goto Label_1087; // 0x42a JumpB
	var_51_int = 0; // 0x42b MovI
	
Label_1068:
	var_59_int = 1; // 0x42c PushI
	var_60_int = var_51_int + var_59_int; // 0x42d Add
	var_61_int = var_41_string + var_60_int; // 0x42e Add
	IsExisting3DSound(var_52_bool, var_61_int); // 0x42f Func
	var_62_bool = var_52_bool == 0; // 0x431 Not
	if(var_62_bool == 0) goto Label_1076; // 0x432 JumpB
	goto Label_1079; // 0x433 Jump
	
Label_1079:
	var_63_bool = var_51_int == 0; // 0x437 Not
	if(var_63_bool == 0) goto Label_1082; // 0x438 JumpB
	return 16; // 0x439 Return
	
Label_1082:
	irand(var_53_int, var_51_int); // 0x43a Func
	var_64_int = 1; // 0x43c PushI
	var_65_int = var_53_int + var_64_int; // 0x43d Add
	var_41_string = var_41_string + var_65_int; // 0x43e Add2
	
Label_1087:
	Is3DSoundLoaded(var_54_bool, var_41_string); // 0x43f Func
	var_66_bool = var_54_bool; // 0x441 Push
	if(var_66_bool == 0) goto Label_1102; // 0x442 JumpB
	GetEyesHeight(var_55_float); // 0x443 Func
	GetDirection(var_56_cvector); // 0x445 Func
	var_67_int = 50; // 0x447 PushI
	var_57_cvector = var_56_cvector * var_67_int; // 0x448 Mult2
	var_68_float = GetByIndex(var_57_cvector, 1); // 0x449 PushE
	var_68_float = var_68_float + var_55_float; // 0x44a Add2
	SetByIndex(var_57_cvector, 1) = var_68_float; // 0x44b PopE
	PlayGlobalSound(var_41_string, var_57_cvector); // 0x44c Func
	
Label_1102:
	return 16; // 0x44e Return
	
Label_1076:
	var_69_int = 1; // 0x434 PushI
	var_51_int = var_51_int + var_69_int; // 0x435 Add2
	goto Label_1068; // 0x436 Jump
}


func_1207()
{
	var_58_string = "playsound"; // 0x4b8 PushS
	var_59_string = "giveitem"; // 0x4b9 PushS
	TriggerWorld(var_58_string, var_59_string); // 0x4ba Func
	return 0; // 0x4bc Return
}


func_1338(var_80_int)
{
	var_81_int = 0; var_82_int = 0; // 0x53a PushV
	var_83_string = "branch"; // 0x53b PushS
	GetVariable(var_83_string, var_82_int); // 0x53c Func
	var_84_int = 0; // 0x53e PushI
	var_85_bool = var_82_int == var_84_int; // 0x53f Eq
	if(var_85_bool == 0) goto Label_1348; // 0x540 JumpB
	var_80_int = 1; // 0x541 MovI
	return 2; // 0x542 Return
	
Label_1348:
	var_86_int = 1; // 0x544 PushI
	var_87_bool = var_82_int == var_86_int; // 0x545 Eq
	if(var_87_bool == 0) goto Label_1353; // 0x546 JumpB
	var_80_int = 2; // 0x547 MovI
	return 2; // 0x548 Return
	
Label_1353:
	var_80_int = 3; // 0x549 MovI
	return 2; // 0x54a Return
}


func_1213()
{
	var_86_string = "d11q01"; // 0x4be PushS
	var_87_int = 3; // 0x4bf PushI
	SetVariable(var_86_string, var_87_int); // 0x4c0 Func
	var_88_bool = 0; var_89_string = ""; var_90_string = ""; // 0x4c2 PushV
	var_89_string = "quest_d11_01"; // 0x4c3 MovS
	var_90_string = "soldier_attack"; // 0x4c4 MovS
	func_1131(var_88_bool, var_89_string, var_90_string); // 0x4c5 NEW_2
	var_91_bool = 0; var_92_string = ""; var_93_string = ""; // 0x4c7 PushV
	var_92_string = "quest_d11_01"; // 0x4c8 MovS
	var_93_string = "restore_andrei"; // 0x4c9 MovS
	func_1131(var_91_bool, var_92_string, var_93_string); // 0x4ca NEW_2
	return 0; // 0x4cc Return
}


func_841(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x349 PushV
	var_35_bool = 0; // 0x34a PushV
	var_35_bool = 0; // 0x34b MovB
	var_36_bool = 0; // 0x34c PushV
	var_36_bool = 0; // 0x34d MovB
	var_37_object = var_14_object; // 0x34e Push
	if(var_37_object == 0) goto Label_852; // 0x34f JumpB
	var_38_int = 4; // 0x350 PushI
	var_39_bool = var_15_int != var_38_int; // 0x351 Neq
	if(var_39_bool == 0) goto Label_852; // 0x352 JumpB
	var_36_bool = 1; // 0x353 MovB
	
Label_852:
	if(var_36_bool == 0) goto Label_857; // 0x354 JumpB
	var_40_int = 5; // 0x355 PushI
	var_41_bool = var_15_int != var_40_int; // 0x356 Neq
	if(var_41_bool == 0) goto Label_857; // 0x357 JumpB
	var_35_bool = 1; // 0x358 MovB
	
Label_857:
	if(var_35_bool == 0) goto Label_904; // 0x359 JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x35a PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x35b PushV
	var_45_object = var_14_object; // 0x35c Mov
	func_782(var_45_object); // 0x35d NEW_2
	var_43_cvector = var_44_cvector; // 0x35e Mov
	func_1109(var_42_cvector, var_43_cvector); // 0x360 NEW_2
	var_26_cvector = var_42_cvector; // 0x361 Mov
	CreateVectorVector(var_27_object); // 0x363 Func
	var_28_int = 1; // 0x365 MovI
	
Label_870:
	var_55_string = "hit"; // 0x366 PushS
	var_56_int = var_55_string + var_28_int; // 0x367 Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x368 Func
	var_57_bool = var_29_bool == 0; // 0x36a Not
	if(var_57_bool == 0) goto Label_877; // 0x36b JumpB
	goto Label_886; // 0x36c Jump
	
Label_886:
	size(var_32_int); // 0x376 ObjFunc
	var_58_int = var_32_int; // 0x378 Push
	if(var_58_int == 0) goto Label_903; // 0x379 JumpB
	irand(var_33_int, var_32_int); // 0x37a Func
	get(var_34_cvector, var_33_int); // 0x37c ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x37e PushV
	var_59_object = var_14_object; // 0x37f Mov
	var_60_int = var_15_int; // 0x380 Mov
	var_61_float = var_16_float; // 0x381 Mov
	var_62_cvector = var_34_cvector; // 0x382 Mov
	var_63_cvector = -var_26_cvector; // 0x383 Neg2
	func_909(var_61_float, var_62_cvector, var_63_cvector); // 0x384 NEW_2
	return 18; // 0x386 Return
	
Label_903:
	var_27_object = 0; // 0x387 SetNull
	
Label_904:
	var_104_object = Obj(); // 0x388 PushV
	var_104_object = var_14_object; // 0x389 Mov
	func_797(var_104_object); // 0x38a NEW_2
	return 18; // 0x38c Return
	
Label_877:
	var_105_int = var_31_cvector | var_26_cvector; // 0x36d Or
	var_106_float = 0.70711; // 0x36e PushF
	var_107_bool = var_105_int >= var_106_float; // 0x36f GE
	if(var_107_bool == 0) goto Label_883; // 0x370 JumpB
	add(var_30_cvector); // 0x371 ObjFunc
	
Label_883:
	var_108_int = 1; // 0x373 PushI
	var_28_int = var_28_int + var_108_int; // 0x374 Add2
	goto Label_870; // 0x375 Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_89_object, var_90_object)
{
	var_0_object = var_90_object; // 0x4b TMov
	var_1_object = var_89_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_95_int = 1; // 0x4e PushI
	if(var_95_int == 0) goto Label_112; // 0x4f JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0x50 PushV
	var_97_object = var_1_object; // 0x51 MovT
	func_1246(var_97_object); // 0x52 NEW_2
	if(var_96_bool == 0) goto Label_110; // 0x54 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x55 PushV
	var_104_object = var_1_object; // 0x56 MovT
	var_105_object = var_0_object; // 0x57 MovT
	func_1229(); // 0x58 NEW_2
	var_108_string = ""; // 0x5a PushV
	var_108_string = "Neutral"; // 0x5b MovS
	func_142(var_90_object, var_108_string); // 0x5c NEW_2
	var_125_int = 514445; // 0x5e PushI
	SetMessage(var_125_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_126_int = 514456; // 0x63 PushI
	var_127_int = 15687; // 0x64 PushI
	var_128_int = 15686; // 0x65 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x66 TObjFunc
	var_129_int = 514446; // 0x68 PushI
	var_130_int = 15675; // 0x69 PushI
	var_131_int = 15674; // 0x6a PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_132_bool = 0; // 0x70 PushV
	func_1382(var_132_bool); // 0x71 NEW_2
	if(var_132_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_133_string = var_3_string; // 0x76 PushT
	if(var_133_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_134_string = ""; // 0x79 PushV
	var_134_string = var_2_object; // 0x7a MovT
	func_1013(var_134_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_145_string = "all"; // 0x7f PushS
	var_146_string = "idle"; // 0x80 PushS
	PlayAnimation(var_145_string, var_146_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_147_string = var_3_string; // 0x85 PushT
	if(var_147_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_148_string = "all"; // 0x88 PushS
	var_149_string = "idle"; // 0x89 PushS
	PlayAnimation(var_148_string, var_149_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
	
Label_110:
	return 0; // 0x6e Return
}


func_1355(var_15_int)
{
	var_16_int = 0; var_17_int = 0; // 0x54b PushV
	var_18_string = "branch"; // 0x54c PushS
	GetVariable(var_18_string, var_17_int); // 0x54d Func
	var_15_int = var_17_int; // 0x54f Mov
	return 2; // 0x550 Return
}


func_1229()
{
	var_106_string = "ood11Officer1"; // 0x4ce PushS
	var_107_int = 1; // 0x4cf PushI
	SetVariable(var_106_string, var_107_int); // 0x4d0 Func
	return 0; // 0x4d2 Return
}


func_1103(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x44f PushV
	self(var_16_object); // 0x450 Func
	var_14_object = var_16_object; // 0x452 Mov
	return 2; // 0x453 Return
}


func_1361(var_14_object)
{
	var_15_int = 0; // 0x552 PushV
	func_1355(var_15_int); // 0x553 NEW_2
	var_19_int = 1; // 0x555 PushI
	var_20_bool = var_15_int == var_19_int; // 0x556 Eq
	if(var_20_bool == 0) goto Label_1371; // 0x557 JumpB
	WorkWithCorpse(var_14_object); // 0x558 Func
	goto Label_1373; // 0x55a Jump
	
Label_1373:
	return 0; // 0x55d Return
	
Label_1371:
	Barter(var_14_object); // 0x55b Func
}


func_1235(var_169_bool, var_170_object)
{
	var_171_bool = 0; var_172_object = Obj(); var_173_string = ""; // 0x4d4 PushV
	var_172_object = var_170_object; // 0x4d5 Mov
	var_173_string = "burah_serum"; // 0x4d6 MovS
	func_1124(var_172_object, var_173_string); // 0x4d7 NEW_2
	if(var_171_bool == 0) goto Label_1244; // 0x4d9 JumpB
	var_169_bool = 1; // 0x4da MovB
	return 0; // 0x4db Return
	
Label_1244:
	var_169_bool = 0; // 0x4dc MovB
	return 0; // 0x4dd Return
}


func_469(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_12_float, var_13_float)
{
	var_14_bool = 0; // 0x1d6 PushV
	func_923(var_14_bool); // 0x1d7 NEW_2
	var_17_bool = var_14_bool == 0; // 0x1d9 Not
	if(var_17_bool == 0) goto Label_476; // 0x1da JumpB
	return 0; // 0x1db Return
	
Label_476:
	var_18_string = "player"; // 0x1dc PushS
	FindActor(var_9_object, var_18_string); // 0x1dd Func
	var_2_object = 0; // 0x1df TMovB
	var_3_string = 0; // 0x1e0 TMovB
	var_0_object = var_12_float; // 0x1e1 TMov
	var_1_object = var_13_float; // 0x1e2 TMov
	var_19_int = 10; // 0x1e3 PushI
	var_20_float = 1.0; // 0x1e4 PushF
	SetTimer(var_19_int, var_20_float); // 0x1e5 Func
	func_548(); // 0x1e8 NEW_2
	var_72_bool = var_3_string == 0; // 0x1ea Not
	if(var_72_bool == 0) goto Label_495; // 0x1eb JumpB
	var_73_int = 10; // 0x1ec PushI
	KillTimer(var_73_int); // 0x1ed Func
	
Label_495:
	return 0; // 0x1ef Return
}


func_1109(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x455 PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x456 Or
	var_51_float = sqrt(var_52_int); // 0x457 Sqrt2
	var_53_float = 0.0; // 0x458 PushF
	var_54_bool = var_51_float < var_53_float; // 0x459 LT
	if(var_54_bool == 0) goto Label_1117; // 0x45a JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x45b MovV
	return 2; // 0x45c Return
	
Label_1117:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x45d Div2
	return 2; // 0x45e Return
}


func_1246(var_96_bool)
{
	var_98_int = 0; var_99_string = ""; // 0x4df PushV
	var_99_string = "ood11Officer1"; // 0x4e0 MovS
	func_1119(var_98_int, var_99_string); // 0x4e1 NEW_2
	var_102_int = 0; // 0x4e3 PushI
	var_103_bool = var_98_int == var_102_int; // 0x4e4 Eq
	if(var_103_bool == 0) goto Label_1256; // 0x4e5 JumpB
	var_96_bool = 1; // 0x4e6 MovB
	return 0; // 0x4e7 Return
	
Label_1256:
	var_96_bool = 0; // 0x4e8 MovB
	return 0; // 0x4e9 Return
}


func_1374(var_77_int)
{
	var_77_int = 515572; // 0x55e MovI
	return 0; // 0x55f Return
}


func_1376(var_76_int)
{
	var_76_int = 504031; // 0x560 MovI
	return 0; // 0x561 Return
}


func_1119(var_98_int, var_99_string)
{
	var_100_int = 0; var_101_int = 0; // 0x45f PushV
	GetVariable(var_99_string, var_101_int); // 0x460 Func
	var_98_int = var_101_int; // 0x462 Mov
	return 2; // 0x463 Return
}


func_1378(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2.png"; // 0x562 MovS
	return 0; // 0x563 Return
}


func_1380(var_79_string)
{
	var_79_string = "ui/NPC_Citizen2_b.png"; // 0x564 MovS
	return 0; // 0x565 Return
}


func_996()
{
	var_152_bool = 0; var_153_bool = 0; // 0x3e4 PushV
	CameraSwitchToNormal(); // 0x3e5 Func
	var_154_bool = 0; // 0x3e7 PushV
	func_1382(var_154_bool); // 0x3e8 NEW_2
	if(var_154_bool == 0) goto Label_1004; // 0x3ea JumpB
	goto Label_1012; // 0x3eb Jump
	
Label_1012:
	return 2; // 0x3f4 Return
	
Label_1004:
	var_155_string = "head"; // 0x3ec PushS
	HasAnimationTrack(var_153_bool, var_155_string); // 0x3ed Func
	var_156_bool = var_153_bool; // 0x3ef Push
	if(var_156_bool == 0) goto Label_1012; // 0x3f0 JumpB
	var_157_string = "head"; // 0x3f1 PushS
	UnlookAsync(var_157_string); // 0x3f2 Func
}


func_1382(var_71_bool)
{
	var_71_bool = 0; // 0x566 MovB
	return 0; // 0x567 Return
}


func_1124(var_171_bool, var_173_string)
{
	var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_bool = 0; // 0x464 PushV
	GetInvItemByName(var_176_int, var_173_string); // 0x465 Func
	HasItem(var_176_int, var_177_bool); // 0x467 ObjFunc
	var_171_bool = var_177_bool; // 0x469 Mov
	return 4; // 0x46a Return
}


func_1384(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x568 PushV
	GetScene(var_13_object); // 0x569 Func
	var_14_object = Obj(); // 0x56b PushV
	func_1103(var_14_object); // 0x56c NEW_2
	RemoveStationaryActor(var_14_object); // 0x56e ObjFunc
	var_17_object = Obj(); // 0x570 PushV
	var_17_object = var_11_object; // 0x571 Mov
	TaskCall(3); // 0x572 TaskCall
	func_634(var_17_object); // 0x573 NEW_2
	TaskReturn(); // 0x574 TaskReturn
	return 2; // 0x576 Return
}


func_1258()
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x4ea PushV
	var_29_int = 794; // 0x4eb PushI
	var_30_int = 1; // 0x4ec PushI
	var_31_int = 543369; // 0x4ed PushI
	CreateDiaryEntry(var_28_object, var_29_int, var_30_int, var_31_int); // 0x4ee Func
	var_32_bool = 0; var_33_object = Obj(); var_34_int = 0; // 0x4f0 PushV
	var_33_object = var_28_object; // 0x4f1 Mov
	var_34_int = 192; // 0x4f2 MovI
	func_1310(var_32_bool, var_33_object, var_34_int); // 0x4f3 NEW_2
	return 2; // 0x4f5 Return
}


func_1131(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x46b PushV
	FindActor(var_18_object, var_15_string); // 0x46c Func
	var_19_bool = var_18_object == 0; // 0x46e NullEq
	if(var_19_bool == 0) goto Label_1138; // 0x46f JumpB
	var_14_bool = 0; // 0x470 MovB
	return 2; // 0x471 Return
	
Label_1138:
	Trigger(var_18_object, var_16_string); // 0x472 Func
	var_14_bool = 1; // 0x474 MovB
	return 2; // 0x475 Return
}


func_750(var_40_string)
{
	RemoveRTEnvelope(); // 0x2ef Func
	SetDeathState(); // 0x2f1 Func
	Stop(); // 0x2f3 Func
	StopAsync(); // 0x2f5 Func
	StopSecondaryAnimation(); // 0x2f7 Func
	var_41_string = ""; // 0x2f9 PushV
	var_41_string = var_40_string; // 0x2fa Mov
	func_1062(var_41_string); // 0x2fb NEW_2
	var_70_string = "all"; // 0x2fd PushS
	PlayAnimation(var_70_string, var_40_string); // 0x2fe Func
	WaitForAnimEnd(); // 0x300 Func
	var_71_string = "all"; // 0x302 PushS
	LockAnimationEnd(var_71_string, var_40_string); // 0x303 Func
	RemoveEnvelope(); // 0x305 Func
	return 0; // 0x307 Return
}


func_496(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x1f0 PushV
	var_16_bool = var_4_bool == 0; // 0x1f1 NullEq
	if(var_16_bool == 0) goto Label_501; // 0x1f2 JumpB
	var_13_bool = 0; // 0x1f3 MovB
	return 2; // 0x1f4 Return
	
Label_501:
	var_17_float = 0; var_18_object = Obj(); // 0x1f5 PushV
	var_18_object = var_4_bool; // 0x1f6 MovT
	func_789(var_18_object); // 0x1f7 NEW_2
	var_15_float = sqrt(var_17_float); // 0x1f9 Sqrt2
	var_25_object = var_2_object; // 0x1fa PushT
	if(var_25_object == 0) goto Label_509; // 0x1fb JumpB
	var_15_float = var_15_float - var_1_object; // 0x1fc Sub2
	
Label_509:
	var_13_bool = var_15_float < var_0_object; // 0x1fd LT2
	return 2; // 0x1fe Return
}


func_627(var_62_bool)
{
	var_62_bool = 1; // 0x273 MovB
	return 0; // 0x274 Return
}


func_1013(var_134_string)
{
	var_135_bool = 0; var_136_float = 0; var_137_float = 0; var_138_bool = 0; var_139_float = 0; var_140_float = 0; // 0x3f5 PushV
	lshHasAnimation(var_138_bool, var_134_string); // 0x3f6 Func
	var_141_bool = var_138_bool; // 0x3f8 Push
	if(var_141_bool == 0) goto Label_1024; // 0x3f9 JumpB
	lshGetAnimTimes(var_134_string, var_139_float, var_140_float); // 0x3fa Func
	var_142_bool = 0; // 0x3fc PushB
	lshPlayAnimation(var_139_float, var_140_float, var_142_bool); // 0x3fd Func
	goto Label_1028; // 0x3ff Jump
	
Label_1028:
	return 6; // 0x404 Return
	
Label_1024:
	var_143_string = "Can't find lsh animation : "; // 0x400 PushS
	var_144_int = var_143_string + var_134_string; // 0x401 Add
	Trace(var_144_int); // 0x402 Func
}


func_629()
{
	StopAnimation(); // 0x275 Func
	StopGroup0(); // 0x277 Func
	return 0; // 0x279 Return
}


func_1143(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = ""; // 0x477 PushV
	var_46_string = "idle"; // 0x478 MovS
	var_47_int = var_44_int; // 0x479 Push
	if(var_47_int == 0) goto Label_1148; // 0x47a JumpB
	var_46_string = var_46_string + var_44_int; // 0x47b Add2
	
Label_1148:
	var_43_string = var_46_string; // 0x47c Mov
	return 2; // 0x47d Return
}


func_634(var_17_object)
{
	EventDisable(0); // 0x27b EventDisable
	var_18_object = Obj(); // 0x27c PushV
	var_18_object = var_17_object; // 0x27d Mov
	func_659(var_18_object); // 0x27e NEW_2
	var_98_int = 50; // 0x280 PushI
	var_99_int = 40; // 0x281 PushI
	SetRTEnvelope(var_98_int, var_99_int); // 0x282 Func
	EventEnable(0); // 0x284 EventEnable
	
Label_645:
	Hold(); // 0x285 Func
	goto Label_645; // 0x287 Jump
}


func_1271()
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x4f7 PushV
	var_28_int = 769; // 0x4f8 PushI
	var_29_int = 1; // 0x4f9 PushI
	var_30_int = 540066; // 0x4fa PushI
	CreateDiaryEntry(var_27_object, var_28_int, var_29_int, var_30_int); // 0x4fb Func
	var_31_bool = 0; var_32_object = Obj(); var_33_int = 0; // 0x4fd PushV
	var_32_object = var_27_object; // 0x4fe Mov
	var_33_int = 192; // 0x4ff MovI
	func_1310(var_31_bool, var_32_object, var_33_int); // 0x500 NEW_2
	return 2; // 0x502 Return
}


func_1150(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x47e PushV
	var_40_int = 0; // 0x47f MovI
	
Label_1152:
	var_42_string = "all"; // 0x480 PushS
	var_43_string = ""; var_44_int = 0; // 0x481 PushV
	var_44_int = var_40_int; // 0x482 Mov
	func_1143(var_43_string, var_44_int); // 0x483 NEW_2
	HasAnimation(var_41_bool, var_42_string, var_43_string); // 0x485 Func
	var_48_bool = var_41_bool == 0; // 0x487 Not
	if(var_48_bool == 0) goto Label_1162; // 0x488 JumpB
	goto Label_1165; // 0x489 Jump
	
Label_1165:
	var_37_int = var_40_int; // 0x48d Mov
	return 4; // 0x48e Return
	
Label_1162:
	var_49_int = 1; // 0x48a PushI
	var_40_int = var_40_int + var_49_int; // 0x48b Add2
	goto Label_1152; // 0x48c Jump
}


