task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_2_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector)
{
	var_13_int = 1; // 0xd6 PushI
	if(var_13_int == 0) goto Label_399; // 0xd7 JumpB
	func_1481(); // 0xd9 Call
	var_15_int = 16575; // 0xdb PushI
	var_16_bool = var_12_cvector == var_15_int; // 0xdc Eq
	if(var_16_bool == 0) goto Label_232; // 0xdd JumpB
	var_17_object = Obj(); var_18_object = Obj(); // 0xde PushV
	var_17_object = var_1_object; // 0xdf MovT
	var_18_object = var_0_object; // 0xe0 MovT
	func_1608(); // 0xe1 Call
	var_60_object = Obj(); var_61_object = Obj(); // 0xe3 PushV
	var_60_object = var_1_object; // 0xe4 MovT
	var_61_object = var_0_object; // 0xe5 MovT
	func_1634(); // 0xe6 Call
	
Label_232:
	var_86_int = 16583; // 0xe8 PushI
	var_87_bool = var_12_cvector == var_86_int; // 0xe9 Eq
	if(var_87_bool == 0) goto Label_240; // 0xea JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0xeb PushV
	var_88_object = var_1_object; // 0xec MovT
	var_89_object = var_0_object; // 0xed MovT
	func_1627(); // 0xee Call
	
Label_240:
	var_96_int = 16570; // 0xf0 PushI
	var_97_bool = var_11_cvector == var_96_int; // 0xf1 Eq
	if(var_97_bool == 0) goto Label_333; // 0xf2 JumpB
	var_98_bool = 0; var_99_object = Obj(); // 0xf3 PushV
	var_99_object = var_1_object; // 0xf4 MovT
	func_1650(var_99_object); // 0xf5 Call
	if(var_98_bool == 0) goto Label_268; // 0xf7 JumpB
	var_106_object = Obj(); var_107_object = Obj(); // 0xf8 PushV
	var_106_object = var_1_object; // 0xf9 MovT
	var_107_object = var_0_object; // 0xfa MovT
	func_1590(); // 0xfb Call
	var_110_string = ""; // 0xfd PushV
	var_110_string = "Neutral"; // 0xfe MovS
	func_197(var_12_cvector, var_110_string); // 0xff Call
	var_125_int = 15453; // 0x101 PushI
	SetMessage(var_125_int); // 0x102 TObjFunc
	ClearReplies(); // 0x104 TObjFunc
	var_126_int = 15454; // 0x106 PushI
	var_127_int = 16572; // 0x107 PushI
	var_128_int = 16571; // 0x108 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_129_bool = 0; var_130_object = Obj(); // 0x10c PushV
	var_130_object = var_1_object; // 0x10d MovT
	func_1662(var_130_object); // 0x10e Call
	if(var_129_bool == 0) goto Label_293; // 0x110 JumpB
	var_135_object = Obj(); var_136_object = Obj(); // 0x111 PushV
	var_135_object = var_1_object; // 0x112 MovT
	var_136_object = var_0_object; // 0x113 MovT
	func_1596(); // 0x114 Call
	var_139_string = ""; // 0x116 PushV
	var_139_string = "Neutral"; // 0x117 MovS
	func_197(var_12_cvector, var_139_string); // 0x118 Call
	var_140_int = 15459; // 0x11a PushI
	SetMessage(var_140_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_141_int = 15460; // 0x11f PushI
	var_142_int = -1; // 0x120 PushI
	var_143_int = 16577; // 0x121 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x122 TObjFunc
	return 0; // 0x124 Return
	
Label_293:
	var_144_bool = 0; var_145_object = Obj(); // 0x125 PushV
	var_145_object = var_1_object; // 0x126 MovT
	func_1674(var_145_object); // 0x127 Call
	if(var_144_bool == 0) goto Label_318; // 0x129 JumpB
	var_150_object = Obj(); var_151_object = Obj(); // 0x12a PushV
	var_150_object = var_1_object; // 0x12b MovT
	var_151_object = var_0_object; // 0x12c MovT
	func_1602(); // 0x12d Call
	var_154_string = ""; // 0x12f PushV
	var_154_string = "Neutral"; // 0x130 MovS
	func_197(var_12_cvector, var_154_string); // 0x131 Call
	var_155_int = 15461; // 0x133 PushI
	SetMessage(var_155_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_156_int = 15462; // 0x138 PushI
	var_157_int = 16580; // 0x139 PushI
	var_158_int = 16579; // 0x13a PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x13b TObjFunc
	return 0; // 0x13d Return
	
Label_318:
	var_159_string = ""; // 0x13e PushV
	var_159_string = "Neutral"; // 0x13f MovS
	func_197(var_12_cvector, var_159_string); // 0x140 Call
	var_160_int = 15465; // 0x142 PushI
	SetMessage(var_160_int); // 0x143 TObjFunc
	ClearReplies(); // 0x145 TObjFunc
	var_161_int = 15466; // 0x147 PushI
	var_162_int = -1; // 0x148 PushI
	var_163_int = 16583; // 0x149 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_164_int = 16580; // 0x14d PushI
	var_165_bool = var_11_cvector == var_164_int; // 0x14e Eq
	if(var_165_bool == 0) goto Label_351; // 0x14f JumpB
	var_166_string = ""; // 0x150 PushV
	var_166_string = "Neutral"; // 0x151 MovS
	func_197(var_12_cvector, var_166_string); // 0x152 Call
	var_167_int = 15463; // 0x154 PushI
	SetMessage(var_167_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_168_int = 15464; // 0x159 PushI
	var_169_int = -1; // 0x15a PushI
	var_170_int = 16581; // 0x15b PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x15c TObjFunc
	return 0; // 0x15e Return
	
Label_351:
	var_171_int = 16572; // 0x15f PushI
	var_172_bool = var_11_cvector == var_171_int; // 0x160 Eq
	if(var_172_bool == 0) goto Label_369; // 0x161 JumpB
	var_173_string = ""; // 0x162 PushV
	var_173_string = "Neutral"; // 0x163 MovS
	func_197(var_12_cvector, var_173_string); // 0x164 Call
	var_174_int = 15455; // 0x166 PushI
	SetMessage(var_174_int); // 0x167 TObjFunc
	ClearReplies(); // 0x169 TObjFunc
	var_175_int = 15456; // 0x16b PushI
	var_176_int = 16574; // 0x16c PushI
	var_177_int = 16573; // 0x16d PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x16e TObjFunc
	return 0; // 0x170 Return
	
Label_369:
	var_178_int = 16574; // 0x171 PushI
	var_179_bool = var_11_cvector == var_178_int; // 0x172 Eq
	if(var_179_bool == 0) goto Label_387; // 0x173 JumpB
	var_180_string = ""; // 0x174 PushV
	var_180_string = "Neutral"; // 0x175 MovS
	func_197(var_12_cvector, var_180_string); // 0x176 Call
	var_181_int = 15457; // 0x178 PushI
	SetMessage(var_181_int); // 0x179 TObjFunc
	ClearReplies(); // 0x17b TObjFunc
	var_182_int = 15458; // 0x17d PushI
	var_183_int = -1; // 0x17e PushI
	var_184_int = 16575; // 0x17f PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x180 TObjFunc
	return 0; // 0x182 Return
	
Label_387:
	var_3_string = 1; // 0x183 TMovB
	var_185_bool = 0; // 0x184 PushV
	func_2063(var_185_bool); // 0x185 Call
	if(var_185_bool == 0) goto Label_395; // 0x187 JumpB
	lshStopAnimation(); // 0x188 Func
	goto Label_397; // 0x18a Jump
	
Label_397:
	return 0; // 0x18d Return
	
Label_395:
	StopAnimation(); // 0x18b Func
	
Label_399:
	return 0; // 0x18f Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_bool = 0; // 0x1a8 PushV
	IsOverrideActive(var_13_bool); // 0x1a9 Func
	var_14_bool = var_13_bool == 0; // 0x1ab Not
	if(var_14_bool == 0) goto Label_431; // 0x1ac JumpB
	WorkWithCorpse(var_11_cvector); // 0x1ad Func
	
Label_431:
	return 2; // 0x1af Return
}


task_3_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector)
{
	return 0; // 0x21e Return
}


task_3_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector)
{
	return 0; // 0x220 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	return 0; // 0x222 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	func_571(); // 0x245 Call
	var_13_object = Obj(); // 0x247 PushV
	var_13_object = var_11_cvector; // 0x248 Mov
	func_1896(); // 0x249 Call
	return 0; // 0x24b Return
}


task_4_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object; // 0x24d Eq
	if(var_12_bool == 0) goto Label_596; // 0x24e JumpB
	var_13_int = 100; // 0x24f PushI
	KillTimer(var_13_int); // 0x250 Func
	Face(var_0_object); // 0x252 Func
	
Label_596:
	return 0; // 0x254 Return
}


task_4_event_4(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object; // 0x256 Eq
	if(var_12_bool == 0) goto Label_608; // 0x257 JumpB
	var_13_int = 100; // 0x258 PushI
	var_14_float = 3.0; // 0x259 PushF
	SetTimer(var_13_int, var_14_float); // 0x25a Func
	var_15_object = Obj(); // 0x25c PushV
	var_15_object = var_0_object; // 0x25d MovT
	func_1385(); // 0x25e Call
	
Label_608:
	return 0; // 0x260 Return
}


	task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_46_object)
	{
	var_47_bool = 0; var_48_object = Obj(); // 0x262 PushV
	var_48_object = var_46_object; // 0x263 Mov
	func_1294(var_47_bool, var_48_object); // 0x264 Call
	var_75_bool = var_47_bool == 0; // 0x266 Not
	if(var_75_bool == 0) goto Label_621; // 0x267 JumpB
	var_76_object = Obj(); // 0x268 PushV
	var_76_object = var_46_object; // 0x269 Mov
	func_1920(var_76_object); // 0x26a Call
	return 0; // 0x26c Return
	
Label_621:
	func_571(); // 0x26e Call
	var_84_object = Obj(); // 0x270 PushV
	var_84_object = var_46_object; // 0x271 Mov
	func_1933(var_84_object); // 0x272 Call
	return 0; // 0x274 Return
	}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x276 PushV
	var_14_object = var_11_cvector; // 0x277 Mov
	var_15_object = var_12_cvector; // 0x278 Mov
	func_1977(var_13_bool, var_14_object, var_15_object); // 0x279 Call
	if(var_13_bool == 0) goto Label_640; // 0x27b JumpB
	var_46_object = Obj(); // 0x27c PushV
	var_46_object = var_11_cvector; // 0x27d Mov
	func_609(); // 0x27e Call
	
Label_640:
	return 0; // 0x280 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x282 PushV
	var_13_object = var_11_cvector; // 0x283 Mov
	func_1949(var_12_bool, var_13_object); // 0x284 Call
	if(var_12_bool == 0) goto Label_654; // 0x286 JumpB
	func_571(); // 0x288 Call
	var_58_object = Obj(); // 0x28a PushV
	var_58_object = var_11_cvector; // 0x28b Mov
	func_1971(var_58_object); // 0x28c Call
	
Label_654:
	return 0; // 0x28e Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	var_12_int = 100; // 0x290 PushI
	var_13_bool = var_11_cvector != var_12_int; // 0x291 Neq
	if(var_13_bool == 0) goto Label_660; // 0x292 JumpB
	return 0; // 0x293 Return
	
Label_660:
	var_14_int = 100; // 0x294 PushI
	KillTimer(var_14_int); // 0x295 Func
	StopGroup0(); // 0x297 Func
	return 0; // 0x299 Return
}


task_5_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; // 0x320 PushV
	var_12_bool = 0; // 0x321 MovB
	var_13_object = var_2_object; // 0x322 PushT
	if(var_13_object == 0) goto Label_807; // 0x323 JumpB
	var_14_bool = var_11_cvector == var_0_object; // 0x324 Eq
	if(var_14_bool == 0) goto Label_807; // 0x325 JumpB
	var_12_bool = 1; // 0x326 MovB
	
Label_807:
	if(var_12_bool == 0) goto Label_812; // 0x327 JumpB
	var_15_object = Obj(); // 0x328 PushV
	var_15_object = var_0_object; // 0x329 MovT
	func_1385(); // 0x32a Call
	
Label_812:
	return 0; // 0x32c Return
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; // 0x32e PushV
	var_12_bool = 0; // 0x32f MovB
	var_13_object = var_2_object; // 0x330 PushT
	if(var_13_object == 0) goto Label_821; // 0x331 JumpB
	var_14_bool = var_11_cvector == var_0_object; // 0x332 Eq
	if(var_14_bool == 0) goto Label_821; // 0x333 JumpB
	var_12_bool = 1; // 0x334 MovB
	
Label_821:
	if(var_12_bool == 0) goto Label_829; // 0x335 JumpB
	var_15_string = "@Stop hunt"; // 0x336 PushS
	Trace(var_15_string); // 0x337 Func
	StopAnimation(); // 0x339 Func
	StopGroup0(); // 0x33b Func
	
Label_829:
	return 0; // 0x33d Return
}


	task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_cvector, var_46_object)
	{
	var_47_bool = 0; var_48_object = Obj(); // 0x39e PushV
	var_48_object = var_46_object; // 0x39f Mov
	func_1294(var_47_bool, var_48_object); // 0x3a0 Call
	var_75_bool = var_47_bool == 0; // 0x3a2 Not
	if(var_75_bool == 0) goto Label_933; // 0x3a3 JumpB
	return 0; // 0x3a4 Return
	
Label_933:
	var_76_object = Obj(); // 0x3a5 PushV
	var_76_object = var_46_object; // 0x3a6 Mov
	func_1920(var_76_object); // 0x3a7 Call
	var_83_bool = var_46_object == var_0_object; // 0x3a9 Eq
	if(var_83_bool == 0) goto Label_941; // 0x3aa JumpB
	var_1_object = 0; // 0x3ab SetNullT
	goto Label_948; // 0x3ac Jump
	
Label_948:
	return 0; // 0x3b4 Return
	
Label_941:
	var_1_object = var_46_object; // 0x3ad TMov
	var_84_object = var_2_object; // 0x3ae PushT
	if(var_84_object == 0) goto Label_948; // 0x3af JumpB
	StopAnimation(); // 0x3b0 Func
	StopGroup0(); // 0x3b2 Func
	}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_cvector)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); // 0x3b6 PushV
	var_14_object = var_11_cvector; // 0x3b7 Mov
	var_15_object = var_12_cvector; // 0x3b8 Mov
	func_1977(var_13_bool, var_14_object, var_15_object); // 0x3b9 Call
	if(var_13_bool == 0) goto Label_960; // 0x3bb JumpB
	var_46_object = Obj(); // 0x3bc PushV
	var_46_object = var_11_cvector; // 0x3bd Mov
	func_925(); // 0x3be Call
	
Label_960:
	return 0; // 0x3c0 Return
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x3cc PushV
	var_14_object = GlobalVars[0]; // 0x3cd PushGE
	in(var_13_bool, var_11_object); // 0x3ce ObjFunc
	var_15_bool = var_13_bool == 0; // 0x3d0 Not
	if(var_15_bool == 0) goto Label_982; // 0x3d1 JumpB
	var_16_object = Obj(); // 0x3d2 PushV
	var_16_object = var_11_object; // 0x3d3 Mov
	func_961(var_16_object); // 0x3d4 Call
	
Label_982:
	return 2; // 0x3d6 Return
}


task_6_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_string)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x3d7 PushV
	var_14_string = "attack"; // 0x3d8 PushS
	var_15_bool = var_11_string == var_14_string; // 0x3d9 Eq
	if(var_15_bool == 0) goto Label_999; // 0x3da JumpB
	var_16_object = Obj(); // 0x3db PushV
	func_1170(var_16_object); // 0x3dc Call
	var_13_object = var_16_object; // 0x3dd Mov
	func_1142(); // 0x3e0 Call
	var_20_object = Obj(); // 0x3e2 PushV
	var_20_object = var_13_object; // 0x3e3 Mov
	func_1933(var_20_object); // 0x3e4 Call
	var_13_object = 0; // 0x3e6 SetNull
	
Label_999:
	return 2; // 0x3e7 Return
}


task_6_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = ""; // 0x3e9 PushV
	var_13_string = "quest_d10_01"; // 0x3ea MovS
	var_14_string = "soldier_fight"; // 0x3eb MovS
	func_1573(var_12_bool, var_13_string, var_14_string); // 0x3ec Call
	return 0; // 0x3ee Return
}


task_6_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object, var_12_object)
{
	return 0; // 0x3f0 Return
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	func_1142(); // 0x3f2 Call
	TaskCall(0); // 0x3f5 TaskCall
	func_0(); // 0x3f6 Call
	TaskReturn(); // 0x3f7 TaskReturn
	return 0; // 0x3f9 Return
}


task_6_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0; // 0x3fa PushV
	var_14_bool = 0; var_15_object = Obj(); // 0x3fb PushV
	var_15_object = var_11_object; // 0x3fc Mov
	func_1294(var_14_bool, var_15_object); // 0x3fd Call
	var_48_bool = var_14_bool == 0; // 0x3ff Not
	if(var_48_bool == 0) goto Label_1026; // 0x400 JumpB
	return 2; // 0x401 Return
	
Label_1026:
	var_49_object = GlobalVars[0]; // 0x402 PushGE
	in(var_13_bool, var_11_object); // 0x403 ObjFunc
	var_50_bool = var_13_bool; // 0x405 Push
	if(var_50_bool == 0) goto Label_1040; // 0x406 JumpB
	func_1142(); // 0x408 Call
	var_51_object = Obj(); // 0x40a PushV
	var_51_object = var_11_object; // 0x40b Mov
	TaskCall(4); // 0x40c TaskCall
	func_547(var_52_object, var_51_object); // 0x40d Call
	TaskReturn(); // 0x40e TaskReturn
	
Label_1040:
	return 2; // 0x410 Return
}


task_6_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x41b PushV
	var_13_object = var_11_object; // 0x41c Mov
	func_1949(var_12_bool, var_13_object); // 0x41d Call
	if(var_12_bool == 0) goto Label_1063; // 0x41f JumpB
	func_1142(); // 0x421 Call
	var_57_object = Obj(); // 0x423 PushV
	var_57_object = var_11_object; // 0x424 Mov
	func_2017(var_57_object); // 0x425 Call
	
Label_1063:
	return 0; // 0x427 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; // 0x754 PushV
	var_15_object = var_11_object; // 0x755 Mov
	var_16_int = var_12_int; // 0x756 Mov
	var_17_float = var_13_float; // 0x757 Mov
	func_1318(var_16_int, var_17_float); // 0x758 Call
	return 0; // 0x75a Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0; // 0x75b PushV
	var_15_string = "health"; // 0x75c PushS
	var_16_bool = var_12_string == var_15_string; // 0x75d Eq
	if(var_16_bool == 0) goto Label_1895; // 0x75e JumpB
	var_17_string = "health"; // 0x75f PushS
	GetProperty(var_17_string, var_14_float); // 0x760 Func
	var_18_int = 0; // 0x762 PushI
	var_19_bool = var_14_float <= var_18_int; // 0x763 LE
	if(var_19_bool == 0) goto Label_1895; // 0x764 JumpB
	SignalDeath(var_11_object); // 0x765 Func
	
Label_1895:
	return 2; // 0x767 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_object = Obj(); // 0x769 PushV
	var_12_object = var_11_object; // 0x76a Mov
	func_2037(var_12_object); // 0x76b Call
	return 0; // 0x76d Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_object = Obj(); // 0x7ed PushV
	func_1488(var_11_object); // 0x7ee Call
	RemoveActor(var_11_object); // 0x7f0 Func
	Hold(); // 0x7f2 Func
	return 0; // 0x7f4 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	func_1902(); // 0x412 Call
	
Label_1044:
	func_1064(var_9_cvector, var_10_cvector); // 0x415 Call
	goto Label_1044; // 0x417 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_1541(var_118_float, var_119_cvector)
{
	var_120_float = GetByIndex(var_119_cvector, 0); // 0x606 PushE
	var_121_float = GetByIndex(var_119_cvector, 0); // 0x607 PushE
	var_122_float = var_120_float * var_121_float; // 0x608 Mult
	var_123_float = GetByIndex(var_119_cvector, 2); // 0x609 PushE
	var_124_float = GetByIndex(var_119_cvector, 2); // 0x60a PushE
	var_125_float = var_123_float * var_124_float; // 0x60b Mult
	var_126_int = var_122_float + var_125_float; // 0x60c Add
	var_118_float = sqrt(var_126_int); // 0x60d Sqrt2
	return 0; // 0x60e Return
}


func_6(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x6 PushV
	var_0_object = var_18_object; // 0x7 TMov
	var_28_bool = 0; var_29_object = Obj(); // 0x8 PushV
	var_29_object = var_18_object; // 0x9 Mov
	func_1403(var_29_object); // 0xa Call
	var_68_bool = var_28_bool == 0; // 0xc Not
	if(var_68_bool == 0) goto Label_16; // 0xd JumpB
	var_17_int = -2; // 0xe MovI
	return 8; // 0xf Return
	
Label_16:
	CreateDialog(var_24_object); // 0x10 Func
	var_69_int = 0; // 0x12 PushV
	func_2059(var_69_int); // 0x13 Call
	SetNPCName(var_69_int); // 0x15 ObjFunc
	var_70_string = ""; // 0x17 PushV
	func_2061(var_70_string); // 0x18 Call
	SetPhoto(var_70_string); // 0x1a ObjFunc
	var_71_int = 0; // 0x1c PushV
	func_1778(var_71_int); // 0x1d Call
	SetPlayerName(var_71_int); // 0x1f ObjFunc
	var_26_int = -1; // 0x21 MovI
	IsOverrideActive(var_25_bool); // 0x22 Func
	var_79_bool = var_25_bool; // 0x24 Push
	if(var_79_bool == 0) goto Label_40; // 0x25 JumpB
	var_17_int = -2; // 0x26 MovI
	return 8; // 0x27 Return
	
Label_40:
	DoDialog(var_24_object); // 0x28 Func
	var_80_object = Obj(); var_81_object = Obj(); // 0x2a PushV
	var_80_object = var_18_object; // 0x2b Mov
	var_81_object = var_24_object; // 0x2c Mov
	TaskCall(2); // 0x2d TaskCall
	func_69(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object); // 0x2e Call
	TaskReturn(); // 0x2f TaskReturn
	IsDialogEnd(var_27_bool); // 0x31 ObjFunc
	
Label_51:
	var_161_bool = var_27_bool == 0; // 0x33 Not
	if(var_161_bool == 0) goto Label_58; // 0x34 JumpB
	sync(); // 0x35 Func
	IsDialogEnd(var_27_bool); // 0x37 ObjFunc
	goto Label_51; // 0x39 Jump
	
Label_58:
	var_162_object = Obj(); // 0x3a PushV
	var_162_object = var_18_object; // 0x3b Mov
	func_1459(); // 0x3c Call
	StopDialog(var_24_object); // 0x3e Func
	GetReturnValue(var_26_int); // 0x40 ObjFunc
	var_17_int = var_26_int; // 0x42 Mov
	return 8; // 0x43 Return
}


func_519(var_78_string)
{
	RemoveRTEnvelope(); // 0x208 Func
	SetDeathState(); // 0x20a Func
	Stop(); // 0x20c Func
	StopAsync(); // 0x20e Func
	StopSecondaryAnimation(); // 0x210 Func
	var_79_string = "all"; // 0x212 PushS
	PlayAnimation(var_79_string, var_78_string); // 0x213 Func
	WaitForAnimEnd(); // 0x215 Func
	var_80_string = "all"; // 0x217 PushS
	LockAnimationEnd(var_80_string, var_78_string); // 0x218 Func
	RemoveEnvelope(); // 0x21a Func
	return 0; // 0x21c Return
}


func_2059(var_69_int)
{
	var_69_int = 14841; // 0x80b MovI
	return 0; // 0x80c Return
}


func_2061(var_70_string)
{
	var_70_string = "ui/NPC_Black.png"; // 0x80d MovS
	return 0; // 0x80e Return
}


func_2063(var_100_bool)
{
	var_100_bool = 0; // 0x80f MovB
	return 0; // 0x810 Return
}


func_1551(var_106_float, var_107_cvector, var_108_cvector)
{
	var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); // 0x610 PushV
	var_110_cvector = var_107_cvector; // 0x611 Mov
	var_111_cvector = var_108_cvector; // 0x612 Mov
	func_1532(var_109_float, var_110_cvector, var_111_cvector); // 0x613 Call
	var_118_float = 0; var_119_cvector = CVector(0,0,0); // 0x615 PushV
	var_119_cvector = var_107_cvector; // 0x616 Mov
	func_1541(var_118_float, var_119_cvector); // 0x617 Call
	var_127_float = 0; var_128_cvector = CVector(0,0,0); // 0x619 PushV
	var_128_cvector = var_108_cvector; // 0x61a Mov
	func_1541(var_127_float, var_128_cvector); // 0x61b Call
	var_129_float = var_118_float * var_127_float; // 0x61d Mult
	var_106_float = var_109_float / var_109_float; // 0x61e Div2
	return 0; // 0x61f Return
}


func_1049()
{
	return 0; // 0x419 Return
}


func_1568(var_89_int, var_90_string)
{
	var_91_int = 0; var_92_int = 0; // 0x620 PushV
	GetVariable(var_90_string, var_92_int); // 0x621 Func
	var_89_int = var_92_int; // 0x623 Mov
	return 2; // 0x624 Return
}


func_547(var_0_object, var_51_object)
{
	var_53_bool = 0; var_54_bool = 0; // 0x223 PushV
	var_0_object = var_51_object; // 0x224 TMov
	Face(var_51_object); // 0x225 Func
	
Label_551:
	var_55_float = 0.5; // 0x227 PushF
	Sleep(var_55_float, var_54_bool); // 0x228 Func
	var_56_bool = 0; // 0x22a PushV
	var_56_bool = 1; // 0x22b MovB
	var_57_bool = var_54_bool == 0; // 0x22c Not
	if(var_57_bool == 0) goto Label_565; // 0x22d JumpB
	var_58_bool = 0; var_59_object = Obj(); // 0x22e PushV
	var_59_object = var_0_object; // 0x22f MovT
	func_1294(var_58_bool, var_59_object); // 0x230 Call
	var_60_bool = var_58_bool == 0; // 0x232 Not
	if(var_60_bool == 0) goto Label_565; // 0x233 JumpB
	var_56_bool = 0; // 0x234 MovB
	
Label_565:
	if(var_56_bool == 0) goto Label_567; // 0x235 JumpB
	goto Label_568; // 0x236 Jump
	
Label_568:
	StopAsync(); // 0x238 Func
	return 2; // 0x23a Return
	
Label_567:
	goto Label_551; // 0x237 Jump
}


func_1573(var_12_bool, var_13_string, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x625 PushV
	FindActor(var_16_object, var_13_string); // 0x626 Func
	var_17_bool = var_16_object == 0; // 0x628 NullEq
	if(var_17_bool == 0) goto Label_1580; // 0x629 JumpB
	var_12_bool = 0; // 0x62a MovB
	return 2; // 0x62b Return
	
Label_1580:
	Trigger(var_16_object, var_14_string); // 0x62c Func
	var_12_bool = 1; // 0x62e MovB
	return 2; // 0x62f Return
}


func_1064(var_0_object, var_1_object)
{
	var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_object = Obj(); // 0x428 PushV
	GetPFPosition(var_22_object); // 0x429 Func
	GetDirection(var_0_object); // 0x42b Func
	
Label_1069:
	var_23_int = 60; // 0x42d PushI
	irand(var_19_int, var_23_int); // 0x42e Func
	var_24_int = 30; // 0x430 PushI
	var_25_int = var_19_int + var_24_int; // 0x431 Add
	Sleep(var_25_int, var_20_bool); // 0x432 Func
	var_26_bool = var_20_bool; // 0x434 Push
	if(var_26_bool == 0) goto Label_1082; // 0x435 JumpB
	func_1049(); // 0x437 Call
	goto Label_1140; // 0x439 Jump
	
Label_1140:
	goto Label_1069; // 0x474 Jump
	
Label_1082:
	GetPFPosition(var_21_cvector); // 0x43a Func
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x43c PushV
	var_28_cvector = var_1_object; // 0x43d MovT
	var_29_cvector = var_21_cvector; // 0x43e Mov
	func_1504(var_27_float, var_28_cvector, var_29_cvector); // 0x43f Call
	var_32_int = 40000; // 0x441 PushI
	var_33_bool = var_27_float > var_32_int; // 0x442 GT
	if(var_33_bool == 0) goto Label_1126; // 0x443 JumpB
	FindPathTo(var_22_object, var_22_object); // 0x444 Func
	var_34_bool = var_22_object != 0; // 0x446 NullNeq
	if(var_34_bool == 0) goto Label_1121; // 0x447 JumpB
	RotatePath(var_22_object, var_20_bool); // 0x448 Func
	var_35_bool = var_20_bool == 0; // 0x44a Not
	if(var_35_bool == 0) goto Label_1101; // 0x44b JumpB
	goto Label_1139; // 0x44c Jump
	
Label_1139:
	goto Label_1082; // 0x473 Jump
	
Label_1101:
	var_36_bool = 0; // 0x44d PushB
	FollowPath(var_22_object, var_36_bool, var_20_bool); // 0x44e Func
	var_37_bool = var_20_bool == 0; // 0x450 Not
	if(var_37_bool == 0) goto Label_1107; // 0x451 JumpB
	goto Label_1139; // 0x452 Jump
	
Label_1107:
	var_38_float = GetByIndex(var_0_object, 0); // 0x453 PushE
	var_39_float = GetByIndex(var_0_object, 2); // 0x454 PushE
	Rotate(var_38_float, var_39_float, var_20_bool); // 0x455 Func
	var_40_bool = var_20_bool == 0; // 0x457 Not
	if(var_40_bool == 0) goto Label_1114; // 0x458 JumpB
	goto Label_1139; // 0x459 Jump
	
Label_1114:
	WaitForAnimEnd(var_20_bool); // 0x45a Func
	var_41_bool = var_20_bool == 0; // 0x45c Not
	if(var_41_bool == 0) goto Label_1119; // 0x45d JumpB
	goto Label_1139; // 0x45e Jump
	
Label_1119:
	goto Label_1140; // 0x45f Jump
	
Label_1121:
	var_42_int = 1; // 0x461 PushI
	Sleep(var_42_int); // 0x462 Func
	var_22_object = 0; // 0x464 SetNull
	goto Label_1139; // 0x465 Jump
	
Label_1126:
	var_43_float = GetByIndex(var_0_object, 0); // 0x466 PushE
	var_44_float = GetByIndex(var_0_object, 2); // 0x467 PushE
	Rotate(var_43_float, var_44_float, var_20_bool); // 0x468 Func
	var_45_bool = var_20_bool == 0; // 0x46a Not
	if(var_45_bool == 0) goto Label_1133; // 0x46b JumpB
	goto Label_1139; // 0x46c Jump
	
Label_1133:
	WaitForAnimEnd(var_20_bool); // 0x46d Func
	var_46_bool = var_20_bool == 0; // 0x46f Not
	if(var_46_bool == 0) goto Label_1138; // 0x470 JumpB
	goto Label_1139; // 0x471 Jump
	
Label_1138:
	goto Label_1140; // 0x472 Jump
}


func_1585(var_32_float)
{
	var_33_float = 0; var_34_float = 0; // 0x631 PushV
	GetGameTime(var_34_float); // 0x632 Func
	var_32_float = var_34_float; // 0x634 Mov
	return 2; // 0x635 Return
}


func_1590()
{
	var_97_string = "ood10MSoldier1"; // 0x637 PushS
	var_98_int = 1; // 0x638 PushI
	SetVariable(var_97_string, var_98_int); // 0x639 Func
	return 0; // 0x63b Return
}


func_571()
{
	StopAsync(); // 0x23b Func
	var_57_int = 100; // 0x23d PushI
	KillTimer(var_57_int); // 0x23e Func
	StopGroup0(); // 0x240 Func
	return 0; // 0x242 Return
}


func_1596()
{
	var_134_string = "ood10MSoldier2"; // 0x63d PushS
	var_135_int = 1; // 0x63e PushI
	SetVariable(var_134_string, var_135_int); // 0x63f Func
	return 0; // 0x641 Return
}


func_1602()
{
	var_149_string = "ood10MSoldier3"; // 0x643 PushS
	var_150_int = 1; // 0x644 PushI
	SetVariable(var_149_string, var_150_int); // 0x645 Func
	return 0; // 0x647 Return
}


func_69(var_0_object, var_1_object, var_2_object, var_3_string, var_80_object, var_81_object)
{
	var_0_object = var_81_object; // 0x46 TMov
	var_1_object = var_80_object; // 0x47 TMov
	var_3_string = 0; // 0x48 TMovB
	var_86_int = 1; // 0x49 PushI
	if(var_86_int == 0) goto Label_167; // 0x4a JumpB
	var_87_bool = 0; var_88_object = Obj(); // 0x4b PushV
	var_88_object = var_1_object; // 0x4c MovT
	func_1650(var_88_object); // 0x4d Call
	if(var_87_bool == 0) goto Label_100; // 0x4f JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x50 PushV
	var_95_object = var_1_object; // 0x51 MovT
	var_96_object = var_0_object; // 0x52 MovT
	func_1590(); // 0x53 Call
	var_99_string = ""; // 0x55 PushV
	var_99_string = "Neutral"; // 0x56 MovS
	func_197(var_81_object, var_99_string); // 0x57 Call
	var_114_int = 15453; // 0x59 PushI
	SetMessage(var_114_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_115_int = 15454; // 0x5e PushI
	var_116_int = 16572; // 0x5f PushI
	var_117_int = 16571; // 0x60 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x61 TObjFunc
	goto Label_167; // 0x63 Jump
	
Label_167:
	var_118_bool = 0; // 0xa7 PushV
	func_2063(var_118_bool); // 0xa8 Call
	if(var_118_bool == 0) goto Label_182; // 0xaa JumpB
	
Label_171:
	lshWaitForAnimEnd(); // 0xab Func
	var_119_string = var_3_string; // 0xad PushT
	if(var_119_string == 0) goto Label_176; // 0xae JumpB
	goto Label_181; // 0xaf Jump
	
Label_181:
	goto Label_196; // 0xb5 Jump
	
Label_196:
	return 0; // 0xc4 Return
	
Label_176:
	var_120_string = ""; // 0xb0 PushV
	var_120_string = var_2_object; // 0xb1 MovT
	func_1463(var_120_string); // 0xb2 Call
	goto Label_171; // 0xb4 Jump
	
Label_182:
	var_121_string = "all"; // 0xb6 PushS
	var_122_string = "idle"; // 0xb7 PushS
	PlayAnimation(var_121_string, var_122_string); // 0xb8 Func
	
Label_186:
	WaitForAnimEnd(); // 0xba Func
	var_123_string = var_3_string; // 0xbc PushT
	if(var_123_string == 0) goto Label_191; // 0xbd JumpB
	goto Label_196; // 0xbe Jump
	
Label_191:
	var_124_string = "all"; // 0xbf PushS
	var_125_string = "idle"; // 0xc0 PushS
	PlayAnimation(var_124_string, var_125_string); // 0xc1 Func
	goto Label_186; // 0xc3 Jump
	
Label_100:
	var_126_bool = 0; var_127_object = Obj(); // 0x64 PushV
	var_127_object = var_1_object; // 0x65 MovT
	func_1662(var_127_object); // 0x66 Call
	if(var_126_bool == 0) goto Label_125; // 0x68 JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0x69 PushV
	var_132_object = var_1_object; // 0x6a MovT
	var_133_object = var_0_object; // 0x6b MovT
	func_1596(); // 0x6c Call
	var_136_string = ""; // 0x6e PushV
	var_136_string = "Neutral"; // 0x6f MovS
	func_197(var_81_object, var_136_string); // 0x70 Call
	var_137_int = 15459; // 0x72 PushI
	SetMessage(var_137_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_138_int = 15460; // 0x77 PushI
	var_139_int = -1; // 0x78 PushI
	var_140_int = 16577; // 0x79 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x7a TObjFunc
	goto Label_167; // 0x7c Jump
	
Label_125:
	var_141_bool = 0; var_142_object = Obj(); // 0x7d PushV
	var_142_object = var_1_object; // 0x7e MovT
	func_1674(var_142_object); // 0x7f Call
	if(var_141_bool == 0) goto Label_150; // 0x81 JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x82 PushV
	var_147_object = var_1_object; // 0x83 MovT
	var_148_object = var_0_object; // 0x84 MovT
	func_1602(); // 0x85 Call
	var_151_string = ""; // 0x87 PushV
	var_151_string = "Neutral"; // 0x88 MovS
	func_197(var_81_object, var_151_string); // 0x89 Call
	var_152_int = 15461; // 0x8b PushI
	SetMessage(var_152_int); // 0x8c TObjFunc
	ClearReplies(); // 0x8e TObjFunc
	var_153_int = 15462; // 0x90 PushI
	var_154_int = 16580; // 0x91 PushI
	var_155_int = 16579; // 0x92 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x93 TObjFunc
	goto Label_167; // 0x95 Jump
	
Label_150:
	var_156_string = ""; // 0x96 PushV
	var_156_string = "Neutral"; // 0x97 MovS
	func_197(var_81_object, var_156_string); // 0x98 Call
	var_157_int = 15465; // 0x9a PushI
	SetMessage(var_157_int); // 0x9b TObjFunc
	ClearReplies(); // 0x9d TObjFunc
	var_158_int = 15466; // 0x9f PushI
	var_159_int = -1; // 0xa0 PushI
	var_160_int = 16583; // 0xa1 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0xa2 TObjFunc
	goto Label_167; // 0xa4 Jump
}


func_1608()
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x648 PushV
	var_21_object = Obj(); // 0x649 PushV
	func_1728(var_21_object); // 0x64a Call
	var_20_object = var_21_object; // 0x64b Mov
	var_28_string = "d10q01SoldierGotoPetr"; // 0x64d PushS
	var_29_string = "pt_d10q01_petr"; // 0x64e PushS
	var_30_int = 1; // 0x64f PushI
	var_31_int = 15467; // 0x650 PushI
	var_32_float = 0; // 0x651 PushV
	func_1585(var_32_float); // 0x652 Call
	AddMark(var_28_string, var_29_string, var_30_int, var_31_int, var_32_float); // 0x654 ObjFunc
	func_2043(); // 0x657 Call
	return 2; // 0x659 Return
}


func_1627()
{
	var_90_bool = 0; var_91_string = ""; var_92_string = ""; // 0x65c PushV
	var_91_string = "quest_d10_01"; // 0x65d MovS
	var_92_string = "soldier_fight"; // 0x65e MovS
	func_1573(var_90_bool, var_91_string, var_92_string); // 0x65f Call
	return 0; // 0x661 Return
}


func_1634()
{
	var_62_object = Obj(); var_63_string = ""; var_64_float = 0; // 0x663 PushV
	var_65_object = Obj(); // 0x664 PushV
	func_1728(var_65_object); // 0x665 Call
	var_62_object = var_65_object; // 0x666 Mov
	var_63_string = "pt_d10q01_petr"; // 0x668 MovS
	var_64_float = 2; // 0x669 MovI
	func_1745(var_62_object, var_63_string, var_64_float); // 0x66a Call
	var_85_object = Obj(); // 0x66c PushV
	func_1728(var_85_object); // 0x66d Call
	ShowMap(var_85_object); // 0x66f ObjFunc
	return 0; // 0x671 Return
}


func_1650(var_87_bool)
{
	var_89_int = 0; var_90_string = ""; // 0x673 PushV
	var_90_string = "ood10MSoldier1"; // 0x674 MovS
	func_1568(var_89_int, var_90_string); // 0x675 Call
	var_93_int = 0; // 0x677 PushI
	var_94_bool = var_89_int == var_93_int; // 0x678 Eq
	if(var_94_bool == 0) goto Label_1660; // 0x679 JumpB
	var_87_bool = 1; // 0x67a MovB
	return 0; // 0x67b Return
	
Label_1660:
	var_87_bool = 0; // 0x67c MovB
	return 0; // 0x67d Return
}


func_1142()
{
	StopGroup0(); // 0x476 Func
	Stop(); // 0x478 Func
	return 0; // 0x47a Return
}


func_1147(var_172_string, var_173_int)
{
	var_174_int = 1; // 0x47c PushI
	var_175_bool = var_173_int == var_174_int; // 0x47d Eq
	if(var_175_bool == 0) goto Label_1153; // 0x47e JumpB
	var_172_string = "fire"; // 0x47f MovS
	return 0; // 0x480 Return
	
Label_1153:
	var_172_string = "phys"; // 0x481 MovS
	return 0; // 0x482 Return
}


func_1662(var_126_bool)
{
	var_128_int = 0; var_129_string = ""; // 0x67f PushV
	var_129_string = "ood10MSoldier2"; // 0x680 MovS
	func_1568(var_128_int, var_129_string); // 0x681 Call
	var_130_int = 0; // 0x683 PushI
	var_131_bool = var_128_int == var_130_int; // 0x684 Eq
	if(var_131_bool == 0) goto Label_1672; // 0x685 JumpB
	var_126_bool = 1; // 0x686 MovB
	return 0; // 0x687 Return
	
Label_1672:
	var_126_bool = 0; // 0x688 MovB
	return 0; // 0x689 Return
}


func_1155(var_100_cvector)
{
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); // 0x483 PushV
	GetPosition(var_104_cvector); // 0x484 Func
	GetPosition(var_105_cvector); // 0x486 ObjFunc
	var_100_cvector = var_105_cvector - var_104_cvector; // 0x488 Sub2
	return 4; // 0x489 Return
}


func_1674(var_141_bool)
{
	var_143_int = 0; var_144_string = ""; // 0x68b PushV
	var_144_string = "ood10MSoldier3"; // 0x68c MovS
	func_1568(var_143_int, var_144_string); // 0x68d Call
	var_145_int = 0; // 0x68f PushI
	var_146_bool = var_143_int == var_145_int; // 0x690 Eq
	if(var_146_bool == 0) goto Label_1684; // 0x691 JumpB
	var_141_bool = 1; // 0x692 MovB
	return 0; // 0x693 Return
	
Label_1684:
	var_141_bool = 0; // 0x694 MovB
	return 0; // 0x695 Return
}


func_1162(var_35_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x48a PushV
	GetPosition(var_40_cvector); // 0x48b Func
	GetPosition(var_41_cvector); // 0x48d ObjFunc
	var_42_cvector = var_41_cvector - var_40_cvector; // 0x48f Sub2
	var_35_float = var_42_cvector | var_42_cvector; // 0x490 Or2
	return 6; // 0x491 Return
}


func_1170(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x492 PushV
	var_19_string = "player"; // 0x493 PushS
	FindActor(var_18_object, var_19_string); // 0x494 Func
	var_16_object = var_18_object; // 0x496 Mov
	return 2; // 0x497 Return
}


func_1686(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x696 PushV
	GetDiaryRoot(var_52_object); // 0x697 Func
	var_53_bool = var_52_object == 0; // 0x699 Not
	if(var_53_bool == 0) goto Label_1696; // 0x69a JumpB
	var_54_string = "Can't retrieve diary root"; // 0x69b PushS
	Trace(var_54_string); // 0x69c Func
	var_50_object = 0; // 0x69e MovB
	return 2; // 0x69f Return
	
Label_1696:
	var_50_object = var_52_object; // 0x6a0 Mov
	return 2; // 0x6a1 Return
}


func_1177(var_38_bool, var_39_object, var_40_string)
{
	var_41_bool = 0; var_42_bool = 0; // 0x499 PushV
	var_43_string = "HasProperty"; // 0x49a PushS
	var_44_int = 2; // 0x49b PushI
	var_45_bool = IsFuncExist(var_39_object, var_43_string, var_44_int); // 0x49c FuncExist
	var_46_bool = var_45_bool == 0; // 0x49d Not
	if(var_46_bool == 0) goto Label_1185; // 0x49e JumpB
	var_38_bool = 0; // 0x49f MovB
	return 2; // 0x4a0 Return
	
Label_1185:
	HasProperty(var_40_string, var_42_bool); // 0x4a1 ObjFunc
	var_38_bool = var_42_bool; // 0x4a3 Mov
	return 2; // 0x4a4 Return
}


func_666(var_0_object, var_1_object, var_2_object, var_64_object, var_65_bool)
{
	var_69_bool = 0; var_70_bool = 0; var_71_bool = 0; var_72_bool = 0; // 0x29a PushV
	var_0_object = var_64_object; // 0x29b TMov
	Face(var_0_object); // 0x29c Func
	var_73_bool = var_65_bool; // 0x29e Push
	if(var_73_bool == 0) goto Label_678; // 0x29f JumpB
	var_74_string = "all"; // 0x2a0 PushS
	var_75_string = "attack_on"; // 0x2a1 PushS
	PlayAnimation(var_74_string, var_75_string); // 0x2a2 Func
	WaitForAnimEnd(); // 0x2a4 Func
	
Label_678:
	var_76_string = "all"; // 0x2a6 PushS
	var_77_string = "attack_on"; // 0x2a7 PushS
	LockAnimationEnd(var_76_string, var_77_string); // 0x2a8 Func
	var_78_bool = 1; // 0x2aa PushB
	SetAttackState(var_78_bool); // 0x2ab Func
	
Label_685:
	var_79_bool = 0; var_80_object = Obj(); // 0x2ad PushV
	var_80_object = var_0_object; // 0x2ae MovT
	func_1294(var_79_bool, var_80_object); // 0x2af Call
	if(var_79_bool == 0) goto Label_787; // 0x2b1 JumpB
	CanSee(var_72_bool, var_0_object); // 0x2b2 Func
	var_81_bool = var_72_bool; // 0x2b4 Push
	if(var_81_bool == 0) goto Label_698; // 0x2b5 JumpB
	func_835(var_72_bool); // 0x2b7 Call
	goto Label_777; // 0x2b9 Jump
	
Label_777:
	var_209_bool = var_1_object != 0; // 0x309 NullNeq
	if(var_209_bool == 0) goto Label_783; // 0x30a JumpB
	func_830(var_71_bool, var_72_bool); // 0x30c Call
	goto Label_786; // 0x30e Jump
	
Label_786:
	goto Label_685; // 0x312 Jump
	
Label_783:
	var_210_int = 2; // 0x30f PushI
	Sleep(var_210_int); // 0x310 Func
	
Label_698:
	var_211_object = Obj(); // 0x2ba PushV
	var_211_object = var_0_object; // 0x2bb MovT
	func_1385(); // 0x2bc Call
	var_2_object = 1; // 0x2be TMovB
	var_220_string = "all"; // 0x2bf PushS
	var_221_string = "hunt"; // 0x2c0 PushS
	PlayAnimation(var_220_string, var_221_string); // 0x2c1 Func
	WaitForAnimEnd(var_71_bool); // 0x2c3 Func
	var_222_bool = var_71_bool == 0; // 0x2c5 Not
	if(var_222_bool == 0) goto Label_721; // 0x2c6 JumpB
	var_223_bool = var_1_object != 0; // 0x2c7 NullNeq
	if(var_223_bool == 0) goto Label_716; // 0x2c8 JumpB
	func_830(var_71_bool, var_72_bool); // 0x2ca Call
	
Label_716:
	var_224_string = "all"; // 0x2cc PushS
	var_225_string = "attack_on"; // 0x2cd PushS
	LockAnimationEnd(var_224_string, var_225_string); // 0x2ce Func
	goto Label_685; // 0x2d0 Jump
	
Label_721:
	var_226_bool = 0; var_227_object = Obj(); // 0x2d1 PushV
	var_227_object = var_0_object; // 0x2d2 MovT
	func_1294(var_226_bool, var_227_object); // 0x2d3 Call
	var_228_bool = var_226_bool == 0; // 0x2d5 Not
	if(var_228_bool == 0) goto Label_728; // 0x2d6 JumpB
	goto Label_787; // 0x2d7 Jump
	
Label_787:
	var_229_bool = 0; // 0x313 PushB
	SetAttackState(var_229_bool); // 0x314 Func
	StopAsync(); // 0x316 Func
	var_230_string = "all"; // 0x318 PushS
	var_231_string = "attack_off"; // 0x319 PushS
	PlayAnimation(var_230_string, var_231_string); // 0x31a Func
	WaitForAnimEnd(); // 0x31c Func
	return 4; // 0x31e Return
	
Label_728:
	CanSee(var_72_bool, var_0_object); // 0x2d8 Func
	var_232_bool = var_72_bool; // 0x2da Push
	if(var_232_bool == 0) goto Label_739; // 0x2db JumpB
	var_2_object = 0; // 0x2dc TMovB
	Face(var_0_object); // 0x2dd Func
	func_835(var_72_bool); // 0x2e0 Call
	goto Label_777; // 0x2e2 Jump
	
Label_739:
	var_233_string = "all"; // 0x2e3 PushS
	var_234_string = "attack_on"; // 0x2e4 PushS
	LockAnimationEnd(var_233_string, var_234_string); // 0x2e5 Func
	var_235_int = 3; // 0x2e7 PushI
	Sleep(var_235_int, var_71_bool); // 0x2e8 Func
	var_236_bool = var_71_bool == 0; // 0x2ea Not
	if(var_236_bool == 0) goto Label_758; // 0x2eb JumpB
	var_237_bool = var_1_object != 0; // 0x2ec NullNeq
	if(var_237_bool == 0) goto Label_753; // 0x2ed JumpB
	func_830(var_71_bool, var_72_bool); // 0x2ef Call
	
Label_753:
	var_238_string = "all"; // 0x2f1 PushS
	var_239_string = "attack_on"; // 0x2f2 PushS
	LockAnimationEnd(var_238_string, var_239_string); // 0x2f3 Func
	goto Label_685; // 0x2f5 Jump
	
Label_758:
	var_240_bool = 0; var_241_object = Obj(); // 0x2f6 PushV
	var_241_object = var_0_object; // 0x2f7 MovT
	func_1294(var_240_bool, var_241_object); // 0x2f8 Call
	var_242_bool = var_240_bool == 0; // 0x2fa Not
	if(var_242_bool == 0) goto Label_765; // 0x2fb JumpB
	goto Label_787; // 0x2fc Jump
	
Label_765:
	var_2_object = 0; // 0x2fd TMovB
	CanSee(var_72_bool, var_0_object); // 0x2fe Func
	var_243_bool = var_72_bool; // 0x300 Push
	if(var_243_bool == 0) goto Label_776; // 0x301 JumpB
	Face(var_0_object); // 0x302 Func
	func_835(var_72_bool); // 0x305 Call
	goto Label_777; // 0x307 Jump
	
Label_776:
	goto Label_787; // 0x308 Jump
}


func_1699(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; // 0x6a3 PushV
	var_50_object = Obj(); // 0x6a4 PushV
	func_1686(var_50_object); // 0x6a5 Call
	var_47_object = var_50_object; // 0x6a6 Mov
	Find(var_43_int, var_48_object); // 0x6a8 ObjFunc
	var_55_bool = var_48_object == 0; // 0x6aa Not
	if(var_55_bool == 0) goto Label_1714; // 0x6ab JumpB
	var_56_string = "Can't find diary parent with id: "; // 0x6ac PushS
	var_57_int = var_56_string + var_43_int; // 0x6ad Add
	Trace(var_57_int); // 0x6ae Func
	var_41_bool = 0; // 0x6b0 MovB
	return 6; // 0x6b1 Return
	
Label_1714:
	AddChild(var_42_object); // 0x6b2 ObjFunc
	var_58_string = "player_diary"; // 0x6b4 PushS
	var_59_int = 1; // 0x6b5 PushI
	SetVariable(var_58_string, var_59_int); // 0x6b6 Func
	GetCategory(var_49_int); // 0x6b8 ObjFunc
	SetDiarySection(var_49_int); // 0x6ba Func
	var_41_bool = 0; // 0x6bc MovB
	return 6; // 0x6bd Return
}


func_1189(var_147_float, var_148_object, var_149_float, var_150_int)
{
	var_151_int = 0; var_152_string = ""; var_153_int = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0; var_157_int = 0; var_158_string = ""; var_159_int = 0; var_160_float = 0; var_161_float = 0; var_162_float = 0; // 0x4a5 PushV
	var_163_bool = 0; var_164_object = Obj(); var_165_string = ""; // 0x4a6 PushV
	var_164_object = var_148_object; // 0x4a7 Mov
	var_165_string = "health"; // 0x4a8 MovS
	func_1177(var_163_bool, var_164_object, var_165_string); // 0x4a9 Call
	var_166_bool = var_163_bool == 0; // 0x4ab Not
	if(var_166_bool == 0) goto Label_1199; // 0x4ac JumpB
	var_147_float = 0.0; // 0x4ad MovF
	return 12; // 0x4ae Return
	
Label_1199:
	var_167_bool = 0; var_168_object = Obj(); var_169_string = ""; // 0x4af PushV
	var_168_object = var_148_object; // 0x4b0 Mov
	var_169_string = "armor"; // 0x4b1 MovS
	func_1177(var_167_bool, var_168_object, var_169_string); // 0x4b2 Call
	var_170_bool = var_167_bool == 0; // 0x4b4 Not
	if(var_170_bool == 0) goto Label_1208; // 0x4b5 JumpB
	var_157_int = 0; // 0x4b6 MovI
	goto Label_1211; // 0x4b7 Jump
	
Label_1211:
	var_171_string = "armor_"; // 0x4bb PushS
	var_172_string = ""; var_173_int = 0; // 0x4bc PushV
	var_173_int = var_150_int; // 0x4bd Mov
	func_1147(var_172_string, var_173_int); // 0x4be Call
	var_158_string = var_171_string + var_172_string; // 0x4c0 Add2
	var_176_bool = 0; var_177_object = Obj(); var_178_string = ""; // 0x4c1 PushV
	var_177_object = var_148_object; // 0x4c2 Mov
	var_178_string = var_158_string; // 0x4c3 Mov
	func_1177(var_176_bool, var_177_object, var_178_string); // 0x4c4 Call
	var_179_bool = var_176_bool == 0; // 0x4c6 Not
	if(var_179_bool == 0) goto Label_1226; // 0x4c7 JumpB
	var_159_int = 0; // 0x4c8 MovI
	goto Label_1228; // 0x4c9 Jump
	
Label_1228:
	var_180_float = 0; var_181_float = 0; var_182_float = 0; // 0x4cc PushV
	var_183_int = var_157_int + var_159_int; // 0x4cd Add
	var_184_float = 100.0; // 0x4ce PushF
	var_181_float = var_183_int / var_183_int; // 0x4cf Div2
	var_182_float = 1; // 0x4d0 MovI
	func_1508(var_180_float, var_181_float, var_182_float); // 0x4d1 Call
	var_160_float = var_180_float; // 0x4d2 Mov
	var_186_string = "health"; // 0x4d4 PushS
	GetProperty(var_186_string, var_161_float); // 0x4d5 ObjFunc
	var_187_int = 1; // 0x4d7 PushI
	var_188_int = var_187_int - var_160_float; // 0x4d8 Sub
	var_162_float = var_149_float * var_188_int; // 0x4d9 Mult2
	var_189_string = "health"; // 0x4da PushS
	var_190_float = 0; var_191_float = 0; var_192_float = 0; var_193_float = 0; // 0x4db PushV
	var_191_float = var_161_float - var_162_float; // 0x4dc Sub2
	var_192_float = 0; // 0x4dd MovI
	var_193_float = 1; // 0x4de MovI
	func_1515(var_190_float, var_191_float, var_192_float, var_193_float); // 0x4df Call
	SetProperty(var_189_string, var_190_float); // 0x4e1 ObjFunc
	var_147_float = var_162_float; // 0x4e3 Mov
	return 12; // 0x4e4 Return
	
Label_1226:
	GetProperty(var_158_string, var_159_int); // 0x4ca ObjFunc
	
Label_1208:
	var_196_string = "armor"; // 0x4b8 PushS
	GetProperty(var_196_string, var_157_int); // 0x4b9 ObjFunc
}


func_1728(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x6c0 PushV
	GetMainOutdoorScene(var_24_object); // 0x6c1 Func
	var_26_bool = var_24_object == 0; // 0x6c3 NullEq
	if(var_26_bool == 0) goto Label_1739; // 0x6c4 JumpB
	var_27_string = "Can't find main outdoor scene"; // 0x6c5 PushS
	Trace(var_27_string); // 0x6c6 Func
	var_25_object = 0; // 0x6c8 SetNull
	var_21_object = var_25_object; // 0x6c9 Mov
	return 4; // 0x6ca Return
	
Label_1739:
	GetMap(var_25_object); // 0x6cb ObjFunc
	var_21_object = var_25_object; // 0x6cd Mov
	return 4; // 0x6ce Return
}


func_197(var_2_object, var_99_string)
{
	var_100_bool = 0; // 0xc6 PushV
	func_2063(var_100_bool); // 0xc7 Call
	var_101_bool = var_100_bool == 0; // 0xc9 Not
	if(var_101_bool == 0) goto Label_204; // 0xca JumpB
	return 0; // 0xcb Return
	
Label_204:
	var_102_bool = var_99_string == var_2_object; // 0xcc Eq
	if(var_102_bool == 0) goto Label_207; // 0xcd JumpB
	return 0; // 0xce Return
	
Label_207:
	var_103_string = ""; // 0xcf PushV
	var_103_string = var_99_string; // 0xd0 Mov
	func_1463(var_103_string); // 0xd1 Call
	var_2_object = var_99_string; // 0xd3 TMov
	return 0; // 0xd4 Return
}


func_1745(var_62_object, var_63_string, var_64_float)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_object = Obj(); var_69_bool = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_object = Obj(); var_73_bool = 0; // 0x6d1 PushV
	GetMainOutdoorScene(var_72_object); // 0x6d2 Func
	var_74_bool = var_72_object == 0; // 0x6d4 NullEq
	if(var_74_bool == 0) goto Label_1754; // 0x6d5 JumpB
	var_75_string = "Can't find main outdoor scene"; // 0x6d6 PushS
	Trace(var_75_string); // 0x6d7 Func
	return 8; // 0x6d9 Return
	
Label_1754:
	GetLocator(var_63_string, var_73_bool, var_70_cvector, var_71_cvector); // 0x6da ObjFunc
	var_76_bool = var_73_bool == 0; // 0x6dc Not
	if(var_76_bool == 0) goto Label_1764; // 0x6dd JumpB
	var_77_string = "Warning: outdoor scene locator "; // 0x6de PushS
	var_78_int = var_77_string + var_63_string; // 0x6df Add
	var_79_string = " doesnt exist"; // 0x6e0 PushS
	var_80_int = var_78_int + var_79_string; // 0x6e1 Add
	Trace(var_80_int); // 0x6e2 Func
	
Label_1764:
	GetMap(var_62_object); // 0x6e4 ObjFunc
	var_81_bool = var_62_object == 0; // 0x6e6 NullEq
	if(var_81_bool == 0) goto Label_1772; // 0x6e7 JumpB
	var_82_string = "Can't find map"; // 0x6e8 PushS
	Trace(var_82_string); // 0x6e9 Func
	return 8; // 0x6eb Return
	
Label_1772:
	var_83_float = GetByIndex(var_70_cvector, 0); // 0x6ec PushE
	var_84_float = GetByIndex(var_70_cvector, 2); // 0x6ed PushE
	SetMapParams(var_83_float, var_84_float, var_64_float); // 0x6ee ObjFunc
	return 8; // 0x6f0 Return
}


func_1253(var_31_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x4e5 PushV
	IsDead(var_34_bool); // 0x4e6 ObjFunc
	var_31_bool = var_34_bool; // 0x4e8 Mov
	return 2; // 0x4e9 Return
}


func_1258(var_20_bool, var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x4ea PushV
	var_26_bool = var_21_object == 0; // 0x4eb NullEq
	if(var_26_bool == 0) goto Label_1263; // 0x4ec JumpB
	var_20_bool = 0; // 0x4ed MovB
	return 4; // 0x4ee Return
	
Label_1263:
	var_27_bool = 0; // 0x4ef PushV
	var_27_bool = 0; // 0x4f0 MovB
	var_28_string = "IsDead"; // 0x4f1 PushS
	var_29_int = 1; // 0x4f2 PushI
	var_30_bool = IsFuncExist(var_21_object, var_28_string, var_29_int); // 0x4f3 FuncExist
	if(var_30_bool == 0) goto Label_1275; // 0x4f4 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x4f5 PushV
	var_32_object = var_21_object; // 0x4f6 Mov
	func_1253(var_32_object); // 0x4f7 Call
	if(var_31_bool == 0) goto Label_1275; // 0x4f9 JumpB
	var_27_bool = 1; // 0x4fa MovB
	
Label_1275:
	if(var_27_bool == 0) goto Label_1278; // 0x4fb JumpB
	var_20_bool = 0; // 0x4fc MovB
	return 4; // 0x4fd Return
	
Label_1278:
	GetScene(var_24_object); // 0x4fe Func
	var_35_bool = var_24_object == 0; // 0x500 NullEq
	if(var_35_bool == 0) goto Label_1284; // 0x501 JumpB
	var_20_bool = 0; // 0x502 MovB
	return 4; // 0x503 Return
	
Label_1284:
	GetScene(var_25_object); // 0x504 ObjFunc
	var_36_bool = var_24_object != var_25_object; // 0x506 Neq
	if(var_36_bool == 0) goto Label_1290; // 0x507 JumpB
	var_20_bool = 0; // 0x508 MovB
	return 4; // 0x509 Return
	
Label_1290:
	var_20_bool = 1; // 0x50a MovB
	return 4; // 0x50b Return
}


func_1778(var_71_int)
{
	var_72_int = 0; var_73_int = 0; // 0x6f2 PushV
	var_74_string = "player"; // 0x6f3 PushS
	GetVariable(var_74_string, var_73_int); // 0x6f4 Func
	var_75_int = 0; // 0x6f6 PushI
	var_76_bool = var_73_int == var_75_int; // 0x6f7 Eq
	if(var_76_bool == 0) goto Label_1788; // 0x6f8 JumpB
	var_71_int = 200001; // 0x6f9 MovI
	return 2; // 0x6fa Return
	
Label_1788:
	var_77_int = 1; // 0x6fc PushI
	var_78_bool = var_73_int == var_77_int; // 0x6fd Eq
	if(var_78_bool == 0) goto Label_1793; // 0x6fe JumpB
	var_71_int = 200002; // 0x6ff MovI
	return 2; // 0x700 Return
	
Label_1793:
	var_71_int = 200003; // 0x701 MovI
	return 2; // 0x702 Return
}


func_1795(var_20_int, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; // 0x703 PushV
	var_30_bool = var_20_int > var_21_int; // 0x704 GT
	if(var_30_bool == 0) goto Label_1802; // 0x705 JumpB
	var_31_string = "GenerateMoney: iMin > iMax"; // 0x706 PushS
	Trace(var_31_string); // 0x707 Func
	return 8; // 0x709 Return
	
Label_1802:
	var_26_int = 0; // 0x70a MovI
	var_32_bool = var_20_int != var_21_int; // 0x70b Neq
	if(var_32_bool == 0) goto Label_1809; // 0x70c JumpB
	var_33_int = var_21_int - var_20_int; // 0x70d Sub
	irand(var_27_int, var_33_int); // 0x70e Func
	goto Label_1813; // 0x710 Jump
	
Label_1813:
	var_26_int = var_26_int + var_20_int; // 0x715 Add2
	var_34_int = 0; // 0x716 PushI
	var_35_bool = var_26_int == var_34_int; // 0x717 Eq
	if(var_35_bool == 0) goto Label_1818; // 0x718 JumpB
	return 8; // 0x719 Return
	
Label_1818:
	var_36_string = "Money"; // 0x71a PushS
	GetInvItemByName(var_28_int, var_36_string); // 0x71b Func
	var_37_int = 0; // 0x71d PushI
	AddItem(var_29_bool, var_28_int, var_37_int, var_26_int); // 0x71e Func
	return 8; // 0x720 Return
	
Label_1809:
	var_38_int = 0; // 0x711 PushI
	var_39_bool = var_20_int == var_38_int; // 0x712 Eq
	if(var_39_bool == 0) goto Label_1813; // 0x713 JumpB
	return 8; // 0x714 Return
}


func_1294(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0; // 0x50e PushV
	var_20_bool = 0; var_21_object = Obj(); // 0x50f PushV
	var_21_object = var_17_object; // 0x510 Mov
	func_1258(var_20_bool, var_21_object); // 0x511 Call
	var_37_bool = var_20_bool == 0; // 0x513 Not
	if(var_37_bool == 0) goto Label_1303; // 0x514 JumpB
	var_16_bool = 0; // 0x515 MovB
	return 2; // 0x516 Return
	
Label_1303:
	var_38_bool = 0; var_39_object = Obj(); var_40_string = ""; // 0x517 PushV
	var_39_object = var_17_object; // 0x518 Mov
	var_40_string = "noaccess"; // 0x519 MovS
	func_1177(var_38_bool, var_39_object, var_40_string); // 0x51a Call
	var_47_bool = var_38_bool == 0; // 0x51c Not
	if(var_47_bool == 0) goto Label_1312; // 0x51d JumpB
	var_16_bool = 1; // 0x51e MovB
	return 2; // 0x51f Return
	
Label_1312:
	var_48_string = "noaccess"; // 0x520 PushS
	GetProperty(var_48_string, var_19_int); // 0x521 ObjFunc
	var_49_int = 0; // 0x523 PushI
	var_16_bool = var_19_int == var_49_int; // 0x524 Eq2
	return 2; // 0x525 Return
}


func_1825()
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_bool = 0; // 0x721 PushV
	var_19_int = 0; // 0x722 PushI
	ClearSubContainer(var_19_int); // 0x723 Func
	var_20_int = 0; var_21_int = 0; // 0x725 PushV
	var_20_int = 500; // 0x726 MovI
	var_21_int = 1000; // 0x727 MovI
	func_1795(var_20_int, var_21_int); // 0x728 Call
	var_40_int = 4; // 0x72a PushI
	irand(var_17_int, var_40_int); // 0x72b Func
	var_41_int = 0; // 0x72d PushI
	var_42_bool = var_17_int != var_41_int; // 0x72e Neq
	if(var_42_bool == 0) goto Label_1847; // 0x72f JumpB
	var_43_int = 0; var_44_string = ""; // 0x730 PushV
	var_44_string = "rifle_ammo"; // 0x731 MovS
	func_1862(var_43_int, var_44_string); // 0x732 Call
	var_47_int = 0; // 0x734 PushI
	AddItem(var_18_bool, var_43_int, var_47_int, var_17_int); // 0x735 Func
	
Label_1847:
	var_48_int = 3; // 0x737 PushI
	irand(var_17_int, var_48_int); // 0x738 Func
	var_49_int = 0; // 0x73a PushI
	var_50_bool = var_17_int == var_49_int; // 0x73b Eq
	if(var_50_bool == 0) goto Label_1861; // 0x73c JumpB
	var_51_int = 0; var_52_string = ""; // 0x73d PushV
	var_52_string = "rusk"; // 0x73e MovS
	func_1862(var_51_int, var_52_string); // 0x73f Call
	var_53_int = 0; // 0x741 PushI
	var_54_int = 1; // 0x742 PushI
	AddItem(var_18_bool, var_51_int, var_53_int, var_54_int); // 0x743 Func
	
Label_1861:
	return 4; // 0x745 Return
}


func_1318(var_15_object, var_16_int)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; // 0x526 PushV
	var_38_bool = 0; // 0x527 PushV
	var_38_bool = 0; // 0x528 MovB
	var_39_int = 4; // 0x529 PushI
	var_40_bool = var_16_int != var_39_int; // 0x52a Neq
	if(var_40_bool == 0) goto Label_1328; // 0x52b JumpB
	var_41_int = 5; // 0x52c PushI
	var_42_bool = var_16_int != var_41_int; // 0x52d Neq
	if(var_42_bool == 0) goto Label_1328; // 0x52e JumpB
	var_38_bool = 1; // 0x52f MovB
	
Label_1328:
	if(var_38_bool == 0) goto Label_1347; // 0x530 JumpB
	GetScene(var_28_object); // 0x531 Func
	GetPosition(var_30_cvector); // 0x533 Func
	GetEyesHeight(var_31_float); // 0x535 Func
	var_43_float = GetByIndex(var_30_cvector, 1); // 0x537 PushE
	var_44_int = 2; // 0x538 PushI
	var_45_float = var_31_float / var_44_int; // 0x539 Div
	var_43_float = var_43_float + var_45_float; // 0x53a Add2
	SetByIndex(var_30_cvector, 1) = var_43_float; // 0x53b PopE
	var_46_string = "scripted"; // 0x53c PushS
	var_47_cvector = CVector(0.0, 0.0, 1.0); // 0x53d PushVec
	var_48_string = "blood.xml"; // 0x53e PushS
	AddActorByType(var_29_object, var_46_string, var_28_object, var_30_cvector, var_47_cvector, var_48_string); // 0x53f Func
	var_29_object = 0; // 0x541 SetNull
	var_28_object = 0; // 0x542 SetNull
	
Label_1347:
	var_49_bool = var_15_object == 0; // 0x543 NullEq
	if(var_49_bool == 0) goto Label_1350; // 0x544 JumpB
	return 20; // 0x545 Return
	
Label_1350:
	GetSecondaryAnimationType(var_32_int); // 0x546 Func
	var_50_int = 0; // 0x548 PushI
	var_51_bool = var_32_int < var_50_int; // 0x549 LT
	if(var_51_bool == 0) goto Label_1356; // 0x54a JumpB
	return 20; // 0x54b Return
	
Label_1356:
	GetPosition(var_33_cvector); // 0x54c ObjFunc
	GetPosition(var_34_cvector); // 0x54e Func
	GetDirection(var_35_cvector); // 0x550 Func
	var_36_cvector = var_34_cvector - var_33_cvector; // 0x552 Sub2
	var_52_float = GetByIndex(var_36_cvector, 0); // 0x553 PushE
	var_53_float = GetByIndex(var_35_cvector, 0); // 0x554 PushE
	var_54_float = var_52_float * var_53_float; // 0x555 Mult
	var_55_float = GetByIndex(var_36_cvector, 2); // 0x556 PushE
	var_56_float = GetByIndex(var_35_cvector, 2); // 0x557 PushE
	var_57_float = var_55_float * var_56_float; // 0x558 Mult
	var_58_int = var_54_float + var_57_float; // 0x559 Add
	var_59_int = 0; // 0x55a PushI
	var_60_bool = var_58_int >= var_59_int; // 0x55b GE
	if(var_60_bool == 0) goto Label_1375; // 0x55c JumpB
	var_37_string = "fhit"; // 0x55d MovS
	goto Label_1376; // 0x55e Jump
	
Label_1376:
	var_61_string = "hit_react"; // 0x560 PushS
	var_62_string = "1"; // 0x561 PushS
	var_63_int = var_37_string + var_62_string; // 0x562 Add
	var_64_string = "2"; // 0x563 PushS
	var_65_int = var_37_string + var_64_string; // 0x564 Add
	var_66_int = -10; // 0x565 PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x566 Func
	return 20; // 0x568 Return
	
Label_1375:
	var_37_string = "bhit"; // 0x55f MovS
}


func_830(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x33e TMovT
	var_1_object = 0; // 0x33f SetNullT
	Face(var_0_object); // 0x340 Func
	return 0; // 0x342 Return
}


func_835(var_0_object)
{
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_object = Obj(); var_86_int = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_object = Obj(); var_90_object = Obj(); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_object = Obj(); var_95_int = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_object = Obj(); var_99_object = Obj(); // 0x343 PushV
	ReportAttack(var_0_object); // 0x344 Func
	GetDirection(var_91_cvector); // 0x346 Func
	var_100_cvector = CVector(0,0,0); var_101_object = Obj(); // 0x348 PushV
	var_101_object = var_0_object; // 0x349 MovT
	func_1155(var_101_object); // 0x34a Call
	var_92_cvector = var_100_cvector; // 0x34b Mov
	var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); // 0x34d PushV
	var_107_cvector = var_91_cvector; // 0x34e Mov
	var_108_cvector = var_92_cvector; // 0x34f Mov
	func_1551(var_106_float, var_107_cvector, var_108_cvector); // 0x350 Call
	var_130_float = 0.96593; // 0x352 PushF
	var_131_bool = var_106_float < var_130_float; // 0x353 LT
	if(var_131_bool == 0) goto Label_854; // 0x354 JumpB
	return 18; // 0x355 Return
	
Label_854:
	var_132_string = "all"; // 0x356 PushS
	var_133_string = "attack_begin1"; // 0x357 PushS
	PlayAnimation(var_132_string, var_133_string); // 0x358 Func
	WaitForAnimEnd(); // 0x35a Func
	var_134_string = "shot"; // 0x35c PushS
	Speak(var_134_string); // 0x35d Func
	GetDirection(var_91_cvector); // 0x35f Func
	var_135_cvector = CVector(0,0,0); var_136_object = Obj(); // 0x361 PushV
	var_136_object = var_0_object; // 0x362 MovT
	func_1155(var_136_object); // 0x363 Call
	var_92_cvector = var_135_cvector; // 0x364 Mov
	var_137_float = GetByIndex(var_92_cvector, 1); // 0x366 PushE
	var_138_float = 0; var_139_object = Obj(); // 0x367 PushV
	var_139_object = var_0_object; // 0x368 MovT
	func_1396(var_139_object); // 0x369 Call
	var_137_float = var_137_float + var_138_float; // 0x36b Add2
	SetByIndex(var_92_cvector, 1) = var_137_float; // 0x36c PopE
	var_144_float = 0.2618; // 0x36d PushF
	RandVecCone3D(var_93_cvector, var_92_cvector, var_144_float); // 0x36e Func
	GetVictimMaterial(var_93_cvector, var_94_object, var_95_int, var_96_cvector); // 0x370 Func
	var_145_bool = var_94_object != 0; // 0x372 NullNeq
	if(var_145_bool == 0) goto Label_913; // 0x373 JumpB
	var_146_bool = var_94_object == var_0_object; // 0x374 Eq
	if(var_146_bool == 0) goto Label_898; // 0x375 JumpB
	var_147_float = 0; var_148_object = Obj(); var_149_float = 0; var_150_int = 0; // 0x376 PushV
	var_148_object = var_0_object; // 0x377 MovT
	var_149_float = 1.5; // 0x378 MovF
	var_150_int = 0; // 0x379 MovI
	func_1189(var_147_float, var_148_object, var_149_float, var_150_int); // 0x37a Call
	var_97_float = var_147_float; // 0x37b Mov
	var_197_int = 2; // 0x37d PushI
	var_198_float = 1.5; // 0x37e PushF
	ReportHit(var_0_object, var_197_int, var_97_float, var_198_float); // 0x37f Func
	goto Label_913; // 0x381 Jump
	
Label_913:
	var_199_string = "all"; // 0x391 PushS
	var_200_string = "attack_end1"; // 0x392 PushS
	PlayAnimation(var_199_string, var_200_string); // 0x393 Func
	WaitForAnimEnd(); // 0x395 Func
	var_201_string = "all"; // 0x397 PushS
	var_202_string = "attack_on"; // 0x398 PushS
	LockAnimationEnd(var_201_string, var_202_string); // 0x399 Func
	return 18; // 0x39b Return
	
Label_898:
	var_203_int = -1; // 0x382 PushI
	var_204_bool = var_95_int != var_203_int; // 0x383 Neq
	if(var_204_bool == 0) goto Label_913; // 0x384 JumpB
	GetScene(var_98_object); // 0x385 Func
	var_205_string = "scripted"; // 0x387 PushS
	var_206_cvector = CVector(0.0, 0.0, 1.0); // 0x388 PushVec
	var_207_string = "richochet.xml"; // 0x389 PushS
	AddActorByType(var_99_object, var_205_string, var_98_object, var_96_cvector, var_206_cvector, var_207_string); // 0x38a Func
	var_208_string = "Material"; // 0x38c PushS
	SetScriptProperty(var_208_string, var_95_int); // 0x38d ObjFunc
	var_99_object = 0; // 0x38f SetNull
	var_98_object = 0; // 0x390 SetNull
}


func_1862(var_43_int, var_44_string)
{
	var_45_int = 0; var_46_int = 0; // 0x746 PushV
	GetInvItemByName(var_46_int, var_44_string); // 0x747 Func
	var_43_int = var_46_int; // 0x749 Mov
	return 2; // 0x74a Return
}


func_1867(var_13_object)
{
	var_14_object = Obj(); // 0x74c PushV
	var_14_object = var_13_object; // 0x74d Mov
	TaskCall(3); // 0x74e TaskCall
	func_400(var_14_object); // 0x74f Call
	TaskReturn(); // 0x750 TaskReturn
	return 0; // 0x752 Return
}


func_1385()
{
	var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_cvector = CVector(0,0,0); // 0x569 PushV
	GetPosition(var_215_cvector); // 0x56a ObjFunc
	GetPosition(var_216_cvector); // 0x56c Func
	var_217_cvector = var_215_cvector - var_216_cvector; // 0x56e Sub2
	var_218_float = GetByIndex(var_217_cvector, 0); // 0x56f PushE
	var_219_float = GetByIndex(var_217_cvector, 2); // 0x570 PushE
	RotateAsync(var_218_float, var_219_float); // 0x571 Func
	return 6; // 0x573 Return
}


func_1902()
{
	var_11_object = GlobalVars[0]; // 0x76e PushGE
	var_12_object = Obj(); // 0x76f PushV
	func_1526(var_12_object); // 0x770 Call
	var_11_object = var_12_object; // 0x771 Mov
	GlobalVars[0] = var_11_object; // 0x773 PopGE
	return 0; // 0x774 Return
}


func_1396(var_138_float)
{
	var_140_float = 0; var_141_float = 0; var_142_float = 0; var_143_float = 0; // 0x574 PushV
	GetEyesHeight(var_142_float); // 0x575 Func
	GetEyesHeight(var_143_float); // 0x577 ObjFunc
	var_138_float = var_143_float - var_142_float; // 0x579 Sub2
	return 4; // 0x57a Return
}


func_1909(var_62_object, var_63_bool)
{
	var_64_object = Obj(); var_65_bool = 0; // 0x776 PushV
	var_64_object = var_62_object; // 0x777 Mov
	var_65_bool = var_63_bool; // 0x778 Mov
	TaskCall(5); // 0x779 TaskCall
	func_666(var_66_object, var_67_object, var_68_bool, var_64_object, var_65_bool); // 0x77a Call
	TaskReturn(); // 0x77b TaskReturn
	ResetAAS(); // 0x77d Func
	return 0; // 0x77f Return
}


func_1403(var_28_bool)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; // 0x57b PushV
	GetPosition(var_39_cvector); // 0x57c ObjFunc
	GetEyesHeight(var_38_float); // 0x57e ObjFunc
	var_46_float = GetByIndex(var_39_cvector, 1); // 0x580 PushE
	var_46_float = var_46_float + var_38_float; // 0x581 Add2
	SetByIndex(var_39_cvector, 1) = var_46_float; // 0x582 PopE
	GetPosition(var_40_cvector); // 0x583 Func
	GetEyesHeight(var_38_float); // 0x585 Func
	var_47_float = GetByIndex(var_40_cvector, 1); // 0x587 PushE
	var_47_float = var_47_float + var_38_float; // 0x588 Add2
	SetByIndex(var_40_cvector, 1) = var_47_float; // 0x589 PopE
	var_41_cvector = var_39_cvector - var_40_cvector; // 0x58a Sub2
	var_48_float = GetByIndex(var_41_cvector, 1); // 0x58b PushE
	var_48_float = 0; // 0x58c MovI
	SetByIndex(var_41_cvector, 1) = var_48_float; // 0x58d PopE
	var_49_int = var_41_cvector | var_41_cvector; // 0x58e Or
	var_50_float = sqrt(var_49_int); // 0x58f Sqrt
	var_41_cvector = var_41_cvector / var_41_cvector; // 0x590 Div2
	var_42_cvector = -var_41_cvector; // 0x591 Neg2
	var_51_int = 70; // 0x592 PushI
	var_52_float = var_41_cvector * var_51_int; // 0x593 Mult
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x594 PushV
	var_55_cvector = CVector(0.0, 1.0, 0.0); // 0x595 PushVec
	var_54_cvector = var_42_cvector ^ var_55_cvector; // 0x596 Xor2
	func_1494(var_53_cvector, var_54_cvector); // 0x597 Call
	var_61_int = 25; // 0x599 PushI
	var_62_float = var_53_cvector * var_61_int; // 0x59a Mult
	var_63_int = var_52_float + var_62_float; // 0x59b Add
	var_64_cvector = CVector(0.0, 10.0, 0.0); // 0x59c PushVec
	var_43_cvector = var_63_int - var_64_cvector; // 0x59d Sub2
	var_44_cvector = var_40_cvector + var_43_cvector; // 0x59e Add2
	IsOverrideActive(var_45_bool); // 0x59f Func
	var_65_bool = var_45_bool; // 0x5a1 Push
	if(var_65_bool == 0) goto Label_1445; // 0x5a2 JumpB
	var_28_bool = 0; // 0x5a3 MovB
	return 16; // 0x5a4 Return
	
Label_1445:
	StopWorld(); // 0x5a5 Func
	CameraTransit(var_44_cvector, var_42_cvector); // 0x5a7 Func
	var_66_float = GetByIndex(var_43_cvector, 0); // 0x5a9 PushE
	var_67_float = GetByIndex(var_43_cvector, 2); // 0x5aa PushE
	Rotate(var_66_float, var_67_float); // 0x5ab Func
	CameraWaitForPlayFinish(); // 0x5ad Func
	ResumeWorld(); // 0x5af Func
	var_28_bool = 1; // 0x5b1 MovB
	return 16; // 0x5b2 Return
}


func_1920(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x780 PushV
	var_24_bool = var_21_object == 0; // 0x781 NullEq
	if(var_24_bool == 0) goto Label_1924; // 0x782 JumpB
	return 2; // 0x783 Return
	
Label_1924:
	var_25_object = GlobalVars[0]; // 0x784 PushGE
	in(var_23_bool, var_21_object); // 0x785 ObjFunc
	var_26_bool = var_23_bool == 0; // 0x787 Not
	if(var_26_bool == 0) goto Label_1932; // 0x788 JumpB
	var_27_object = GlobalVars[0]; // 0x789 PushGE
	add(var_21_object); // 0x78a ObjFunc
	
Label_1932:
	return 2; // 0x78c Return
}


func_1933(var_20_object)
{
	var_21_object = Obj(); // 0x78e PushV
	var_21_object = var_20_object; // 0x78f Mov
	func_1920(var_21_object); // 0x790 Call
	var_28_object = Obj(); var_29_bool = 0; // 0x792 PushV
	var_28_object = var_20_object; // 0x793 Mov
	var_29_bool = 1; // 0x794 MovB
	func_1909(var_28_object, var_29_bool); // 0x795 Call
	return 0; // 0x797 Return
}


func_400(var_14_object)
{
	func_1825(); // 0x192 Call
	var_55_object = Obj(); // 0x194 PushV
	var_55_object = var_14_object; // 0x195 Mov
	func_409(var_55_object); // 0x196 Call
	return 0; // 0x198 Return
}


func_1944(var_53_bool, var_54_object)
{
	var_55_bool = 0; var_56_bool = 0; // 0x798 PushV
	IsPlayerActor(var_54_object, var_56_bool); // 0x799 Func
	var_53_bool = var_56_bool; // 0x79b Mov
	return 2; // 0x79c Return
}


func_409(var_55_object)
{
	EventDisable(0); // 0x19a EventDisable
	var_56_object = Obj(); // 0x19b PushV
	var_56_object = var_55_object; // 0x19c Mov
	func_432(var_56_object); // 0x19d Call
	var_106_int = 50; // 0x19f PushI
	var_107_int = 40; // 0x1a0 PushI
	SetRTEnvelope(var_106_int, var_107_int); // 0x1a1 Func
	EventEnable(0); // 0x1a3 EventEnable
	
Label_420:
	Hold(); // 0x1a4 Func
	goto Label_420; // 0x1a6 Jump
}


func_1949(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x79d PushV
	var_16_bool = 0; var_17_object = Obj(); // 0x79e PushV
	var_17_object = var_13_object; // 0x79f Mov
	func_1294(var_16_bool, var_17_object); // 0x7a0 Call
	var_50_bool = var_16_bool == 0; // 0x7a2 Not
	if(var_50_bool == 0) goto Label_1958; // 0x7a3 JumpB
	var_12_bool = 0; // 0x7a4 MovB
	return 2; // 0x7a5 Return
	
Label_1958:
	var_51_object = GlobalVars[0]; // 0x7a6 PushGE
	in(var_15_bool, var_13_object); // 0x7a7 ObjFunc
	var_52_bool = var_15_bool; // 0x7a9 Push
	if(var_52_bool == 0) goto Label_1965; // 0x7aa JumpB
	var_12_bool = 1; // 0x7ab MovB
	return 2; // 0x7ac Return
	
Label_1965:
	var_53_bool = 0; var_54_object = Obj(); // 0x7ad PushV
	var_54_object = var_13_object; // 0x7ae Mov
	func_1944(var_53_bool, var_54_object); // 0x7af Call
	var_12_bool = var_53_bool; // 0x7b0 Mov
	return 2; // 0x7b2 Return
}


func_432(var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_string = ""; var_62_object = Obj(); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_string = ""; var_72_object = Obj(); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); // 0x1b0 PushV
	var_77_bool = var_56_object == 0; // 0x1b1 NullEq
	if(var_77_bool == 0) goto Label_440; // 0x1b2 JumpB
	var_78_string = ""; // 0x1b3 PushV
	var_78_string = "fdie"; // 0x1b4 MovS
	func_519(var_78_string); // 0x1b5 Call
	goto Label_518; // 0x1b7 Jump
	
Label_518:
	return 20; // 0x206 Return
	
Label_440:
	GetPosition(var_67_cvector); // 0x1b8 ObjFunc
	GetPosition(var_68_cvector); // 0x1ba Func
	GetDirection(var_69_cvector); // 0x1bc Func
	var_70_cvector = var_68_cvector - var_67_cvector; // 0x1be Sub2
	var_81_float = GetByIndex(var_70_cvector, 0); // 0x1bf PushE
	var_82_float = GetByIndex(var_69_cvector, 0); // 0x1c0 PushE
	var_83_float = var_81_float * var_82_float; // 0x1c1 Mult
	var_84_float = GetByIndex(var_70_cvector, 2); // 0x1c2 PushE
	var_85_float = GetByIndex(var_69_cvector, 2); // 0x1c3 PushE
	var_86_float = var_84_float * var_85_float; // 0x1c4 Mult
	var_87_int = var_83_float + var_86_float; // 0x1c5 Add
	var_88_int = 0; // 0x1c6 PushI
	var_89_bool = var_87_int >= var_88_int; // 0x1c7 GE
	if(var_89_bool == 0) goto Label_459; // 0x1c8 JumpB
	var_71_string = "fdie"; // 0x1c9 MovS
	goto Label_460; // 0x1ca Jump
	
Label_460:
	RemoveRTEnvelope(); // 0x1cc Func
	SetDeathState(); // 0x1ce Func
	Stop(); // 0x1d0 Func
	StopAsync(); // 0x1d2 Func
	var_72_object = var_56_object; // 0x1d4 Mov
	var_90_string = "GetScriptProperty"; // 0x1d5 PushS
	var_91_int = 2; // 0x1d6 PushI
	var_92_bool = IsFuncExist(var_56_object, var_90_string, var_91_int); // 0x1d7 FuncExist
	if(var_92_bool == 0) goto Label_484; // 0x1d8 JumpB
	var_93_string = "Owner"; // 0x1d9 PushS
	HasScriptProperty(var_73_bool, var_93_string); // 0x1da ObjFunc
	var_94_bool = var_73_bool; // 0x1dc Push
	if(var_94_bool == 0) goto Label_484; // 0x1dd JumpB
	var_95_string = "Owner"; // 0x1de PushS
	GetScriptProperty(var_72_object, var_95_string); // 0x1df ObjFunc
	var_96_bool = var_72_object == 0; // 0x1e1 NullEq
	if(var_96_bool == 0) goto Label_484; // 0x1e2 JumpB
	var_72_object = var_56_object; // 0x1e3 Mov
	
Label_484:
	var_97_string = "@GetEyesHeight"; // 0x1e4 PushS
	var_98_int = 1; // 0x1e5 PushI
	var_99_bool = IsFuncExist(var_72_object, var_97_string, var_98_int); // 0x1e6 FuncExist
	if(var_99_bool == 0) goto Label_499; // 0x1e7 JumpB
	GetEyesHeight(var_75_float); // 0x1e8 ObjFunc
	var_76_cvector = CVector(0.0, 0.0, 0.0); // 0x1ea MovV
	var_100_float = GetByIndex(var_76_cvector, 1); // 0x1eb PushE
	var_100_float = var_75_float; // 0x1ec Mov
	SetByIndex(var_76_cvector, 1) = var_100_float; // 0x1ed PopE
	var_101_string = "head"; // 0x1ee PushS
	LookAsync(var_56_object, var_101_string, var_76_cvector); // 0x1ef Func
	var_74_bool = 1; // 0x1f1 MovB
	goto Label_500; // 0x1f2 Jump
	
Label_500:
	var_102_string = "all"; // 0x1f4 PushS
	PlayAnimation(var_102_string, var_71_string); // 0x1f5 Func
	WaitForAnimEnd(); // 0x1f7 Func
	var_103_bool = var_74_bool; // 0x1f9 Push
	if(var_103_bool == 0) goto Label_512; // 0x1fa JumpB
	StopAsync(); // 0x1fb Func
	var_104_string = "head"; // 0x1fd PushS
	UnlookAsync(var_104_string); // 0x1fe Func
	
Label_512:
	var_105_string = "all"; // 0x200 PushS
	LockAnimationEnd(var_105_string, var_71_string); // 0x201 Func
	RemoveEnvelope(); // 0x203 Func
	var_72_object = 0; // 0x205 SetNull
	
Label_499:
	var_74_bool = 0; // 0x1f3 MovB
	
Label_459:
	var_71_string = "bdie"; // 0x1cb MovS
}


func_1459()
{
	CameraSwitchToNormal(); // 0x5b4 Func
	return 0; // 0x5b6 Return
}


func_1971(var_58_object)
{
	var_59_object = Obj(); // 0x7b4 PushV
	var_59_object = var_58_object; // 0x7b5 Mov
	func_2017(var_59_object); // 0x7b6 Call
	return 0; // 0x7b8 Return
}


func_1463(var_103_string)
{
	var_104_float = 0; var_105_float = 0; var_106_float = 0; var_107_float = 0; // 0x5b7 PushV
	var_108_string = "playing "; // 0x5b8 PushS
	var_109_int = var_108_string + var_103_string; // 0x5b9 Add
	Trace(var_109_int); // 0x5ba Func
	lshGetAnimTimes(var_103_string, var_106_float, var_107_float); // 0x5bc Func
	lshPlayAnimation(var_106_float, var_107_float); // 0x5be Func
	var_110_string = "start: "; // 0x5c0 PushS
	var_111_int = var_110_string + var_106_float; // 0x5c1 Add
	Trace(var_111_int); // 0x5c2 Func
	var_112_string = "end: "; // 0x5c4 PushS
	var_113_int = var_112_string + var_107_float; // 0x5c5 Add
	Trace(var_113_int); // 0x5c6 Func
	return 4; // 0x5c8 Return
}


func_1977(var_13_bool, var_14_object, var_15_object)
{
	var_16_float = 0; var_17_bool = 0; var_18_float = 0; var_19_bool = 0; // 0x7b9 PushV
	var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; // 0x7ba PushV
	var_21_object = var_15_object; // 0x7bb Mov
	var_22_string = "reputation"; // 0x7bc MovS
	func_1177(var_20_bool, var_21_object, var_22_string); // 0x7bd Call
	var_29_bool = var_20_bool == 0; // 0x7bf Not
	if(var_29_bool == 0) goto Label_1987; // 0x7c0 JumpB
	var_13_bool = 0; // 0x7c1 MovB
	return 4; // 0x7c2 Return
	
Label_1987:
	var_30_string = "reputation"; // 0x7c3 PushS
	GetProperty(var_30_string, var_18_float); // 0x7c4 ObjFunc
	var_31_float = 0.5; // 0x7c6 PushF
	var_32_bool = var_18_float < var_31_float; // 0x7c7 LT
	if(var_32_bool == 0) goto Label_1995; // 0x7c8 JumpB
	var_13_bool = 0; // 0x7c9 MovB
	return 4; // 0x7ca Return
	
Label_1995:
	CanSee(var_19_bool, var_14_object); // 0x7cb Func
	var_33_bool = 0; // 0x7cd PushV
	var_33_bool = 1; // 0x7ce MovB
	var_34_bool = var_19_bool; // 0x7cf Push
	if(var_34_bool == 0) goto Label_2009; // 0x7d0 JumpB
	var_35_float = 0; var_36_object = Obj(); // 0x7d1 PushV
	var_36_object = var_14_object; // 0x7d2 Mov
	func_1162(var_36_object); // 0x7d3 Call
	var_43_float = 160000.0; // 0x7d5 PushF
	var_44_bool = var_35_float <= var_43_float; // 0x7d6 LE
	if(var_44_bool == 0) goto Label_2009; // 0x7d7 JumpB
	var_33_bool = 0; // 0x7d8 MovB
	
Label_2009:
	if(var_33_bool == 0) goto Label_2015; // 0x7d9 JumpB
	var_45_float = -0.2; // 0x7da PushF
	ReportReputationChange(var_14_object, var_15_object, var_45_float); // 0x7db Func
	var_13_bool = 1; // 0x7dd MovB
	return 4; // 0x7de Return
	
Label_2015:
	var_13_bool = 0; // 0x7df MovB
	return 4; // 0x7e0 Return
}


func_961(var_16_object)
{
	func_1142(); // 0x3c3 Call
	var_17_int = 0; var_18_object = Obj(); // 0x3c5 PushV
	var_18_object = var_16_object; // 0x3c6 Mov
	TaskCall(1); // 0x3c7 TaskCall
	func_6(var_19_object, var_17_int, var_18_object); // 0x3c8 Call
	TaskReturn(); // 0x3c9 TaskReturn
	return 0; // 0x3cb Return
}


func_1481()
{
	var_14_bool = 0; // 0x5c9 PushV
	func_2063(var_14_bool); // 0x5ca Call
	if(var_14_bool == 0) goto Label_1487; // 0x5cc JumpB
	lshStopSpeech(); // 0x5cd Func
	
Label_1487:
	return 0; // 0x5cf Return
}


func_1488(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x5d0 PushV
	self(var_13_object); // 0x5d1 Func
	var_11_object = var_13_object; // 0x5d3 Mov
	return 2; // 0x5d4 Return
}


func_1494(var_53_cvector, var_54_cvector)
{
	var_56_float = 0; var_57_float = 0; // 0x5d6 PushV
	var_58_int = var_54_cvector | var_54_cvector; // 0x5d7 Or
	var_57_float = sqrt(var_58_int); // 0x5d8 Sqrt2
	var_59_float = 0.0; // 0x5d9 PushF
	var_60_bool = var_57_float < var_59_float; // 0x5da LT
	if(var_60_bool == 0) goto Label_1502; // 0x5db JumpB
	var_53_cvector = CVector(0.0, 0.0, 0.0); // 0x5dc MovV
	return 2; // 0x5dd Return
	
Label_1502:
	var_53_cvector = var_54_cvector / var_54_cvector; // 0x5de Div2
	return 2; // 0x5df Return
}


func_1504(var_27_float, var_28_cvector, var_29_cvector)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0x5e0 PushV
	var_31_cvector = var_29_cvector - var_28_cvector; // 0x5e1 Sub2
	var_27_float = var_31_cvector | var_31_cvector; // 0x5e2 Or2
	return 2; // 0x5e3 Return
}


func_2017(var_57_object)
{
	var_58_bool = 0; var_59_bool = 0; // 0x7e1 PushV
	var_60_object = GlobalVars[0]; // 0x7e2 PushGE
	in(var_59_bool, var_57_object); // 0x7e3 ObjFunc
	var_61_bool = var_59_bool; // 0x7e5 Push
	if(var_61_bool == 0) goto Label_2028; // 0x7e6 JumpB
	var_62_object = Obj(); var_63_bool = 0; // 0x7e7 PushV
	var_62_object = var_57_object; // 0x7e8 Mov
	var_63_bool = 1; // 0x7e9 MovB
	func_1909(var_62_object, var_63_bool); // 0x7ea Call
	
Label_2028:
	return 2; // 0x7ec Return
}


func_1508(var_180_float, var_181_float, var_182_float)
{
	var_185_bool = var_181_float < var_182_float; // 0x5e5 LT
	if(var_185_bool == 0) goto Label_1513; // 0x5e6 JumpB
	var_180_float = var_181_float; // 0x5e7 Mov
	goto Label_1514; // 0x5e8 Jump
	
Label_1514:
	return 0; // 0x5ea Return
	
Label_1513:
	var_180_float = var_182_float; // 0x5e9 Mov
}


func_1515(var_190_float, var_191_float, var_192_float, var_193_float)
{
	var_194_bool = var_191_float < var_192_float; // 0x5ec LT
	if(var_194_bool == 0) goto Label_1520; // 0x5ed JumpB
	var_190_float = var_192_float; // 0x5ee Mov
	return 0; // 0x5ef Return
	
Label_1520:
	var_195_bool = var_191_float > var_193_float; // 0x5f0 GT
	if(var_195_bool == 0) goto Label_1524; // 0x5f1 JumpB
	var_190_float = var_193_float; // 0x5f2 Mov
	return 0; // 0x5f3 Return
	
Label_1524:
	var_190_float = var_191_float; // 0x5f4 Mov
	return 0; // 0x5f5 Return
}


func_2037(var_12_object)
{
	var_13_object = Obj(); // 0x7f6 PushV
	var_13_object = var_12_object; // 0x7f7 Mov
	func_1867(var_13_object); // 0x7f8 Call
	return 0; // 0x7fa Return
}


func_1526(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x5f6 PushV
	CreateObjectSet(var_14_object); // 0x5f7 Func
	var_12_object = var_14_object; // 0x5f9 Mov
	return 2; // 0x5fa Return
}


func_2043()
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x7fb PushV
	var_37_string = "Adding diary entry"; // 0x7fc PushS
	Trace(var_37_string); // 0x7fd Func
	var_38_int = 188; // 0x7ff PushI
	var_39_int = 1; // 0x800 PushI
	var_40_int = 15473; // 0x801 PushI
	CreateDiaryEntry(var_36_object, var_38_int, var_39_int, var_40_int); // 0x802 Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0x804 PushV
	var_42_object = var_36_object; // 0x805 Mov
	var_43_int = 186; // 0x806 MovI
	func_1699(var_41_bool, var_42_object, var_43_int); // 0x807 Call
	return 2; // 0x809 Return
}


func_1532(var_109_float, var_110_cvector, var_111_cvector)
{
	var_112_float = GetByIndex(var_110_cvector, 0); // 0x5fd PushE
	var_113_float = GetByIndex(var_111_cvector, 0); // 0x5fe PushE
	var_114_float = var_112_float * var_113_float; // 0x5ff Mult
	var_115_float = GetByIndex(var_110_cvector, 2); // 0x600 PushE
	var_116_float = GetByIndex(var_111_cvector, 2); // 0x601 PushE
	var_117_float = var_115_float * var_116_float; // 0x602 Mult
	var_109_float = var_114_float + var_117_float; // 0x603 Add2
	return 0; // 0x604 Return
}


