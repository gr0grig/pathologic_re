task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj(); // 0x12 PushV
	var_11_object = var_9_object; // 0x13 Mov
	func_990(var_10_bool, var_11_object); // 0x14 Call
	if(var_10_bool == 0) goto Label_30; // 0x16 JumpB
	func_127(var_8_bool, var_9_object); // 0x18 Call
	var_51_object = Obj(); // 0x1a PushV
	var_51_object = var_9_object; // 0x1b Mov
	func_997(var_51_object); // 0x1c Call
	
Label_30:
	return 0; // 0x1e Return
}


task_0_event_16(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = ""; // 0x20 PushV
	var_12_object = var_9_bool; // 0x21 Mov
	var_13_string = var_10_object; // 0x22 Mov
	func_1024(var_11_bool, var_12_object, var_13_string); // 0x23 Call
	if(var_11_bool == 0) goto Label_41; // 0x25 JumpB
	func_127(var_9_bool, var_10_object); // 0x27 Call
	
Label_41:
	var_59_object = Obj(); var_60_string = ""; // 0x29 PushV
	var_59_object = var_9_bool; // 0x2a Mov
	var_60_string = var_10_object; // 0x2b Mov
	func_1051(var_59_object, var_60_string); // 0x2c Call
	return 0; // 0x2e Return
}


task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj(); // 0x30 PushV
	var_11_object = var_9_object; // 0x31 Mov
	func_913(var_10_bool, var_11_object); // 0x32 Call
	var_44_bool = var_10_bool == 0; // 0x34 Not
	if(var_44_bool == 0) goto Label_55; // 0x35 JumpB
	return 0; // 0x36 Return
	
Label_55:
	func_127(var_8_bool, var_9_object); // 0x38 Call
	var_45_object = Obj(); // 0x3a PushV
	var_45_object = var_9_object; // 0x3b Mov
	func_1007(var_45_object); // 0x3c Call
	return 0; // 0x3e Return
}


task_0_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x79 Func
	return 0; // 0x7b Return
}


task_0_event_28(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	Stop(); // 0x7c Func
	return 0; // 0x7e Return
}


task_0_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_127(var_8_bool, var_9_object); // 0x88 Call
	var_10_object = Obj(); // 0x8a PushV
	var_10_object = var_9_object; // 0x8b Mov
	func_1082(); // 0x8c Call
	return 0; // 0x8e Return
}


task_2_event_22(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object)
{
	return 0; // 0xba Return
}


task_2_event_16(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	return 0; // 0xbc Return
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	return 0; // 0xbe Return
}


task_3_event_16(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = ""; // 0x124 PushV
	var_12_object = var_9_bool; // 0x125 Mov
	var_13_string = var_10_object; // 0x126 Mov
	func_1024(var_11_bool, var_12_object, var_13_string); // 0x127 Call
	if(var_11_bool == 0) goto Label_301; // 0x129 JumpB
	func_307(); // 0x12b Call
	
Label_301:
	var_59_object = Obj(); var_60_string = ""; // 0x12d PushV
	var_59_object = var_9_bool; // 0x12e Mov
	var_60_string = var_10_object; // 0x12f Mov
	func_1051(var_59_object, var_60_string); // 0x130 Call
	return 0; // 0x132 Return
}


task_3_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_307(); // 0x13c Call
	var_10_object = Obj(); // 0x13e PushV
	var_10_object = var_9_object; // 0x13f Mov
	func_1082(); // 0x140 Call
	return 0; // 0x142 Return
}


task_4_event_16(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_string, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = ""; // 0x165 PushV
	var_12_object = var_9_bool; // 0x166 Mov
	var_13_string = var_10_object; // 0x167 Mov
	func_1024(var_11_bool, var_12_object, var_13_string); // 0x168 Call
	if(var_11_bool == 0) goto Label_366; // 0x16a JumpB
	func_372(); // 0x16c Call
	
Label_366:
	var_61_object = Obj(); var_62_string = ""; // 0x16e PushV
	var_61_object = var_9_bool; // 0x16f Mov
	var_62_string = var_10_object; // 0x170 Mov
	func_1051(var_61_object, var_62_string); // 0x171 Call
	return 0; // 0x173 Return
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_372(); // 0x17d Call
	var_12_object = Obj(); // 0x17f PushV
	var_12_object = var_9_object; // 0x180 Mov
	func_1082(); // 0x181 Call
	return 0; // 0x183 Return
}


task_4_event_7(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_int = 111; // 0x185 PushI
	var_11_bool = var_9_object == var_10_int; // 0x186 Eq
	if(var_11_bool == 0) goto Label_398; // 0x187 JumpB
	var_12_string = "run"; // 0x188 PushS
	Speak(var_12_string); // 0x189 Func
	func_342(); // 0x18c Call
	
Label_398:
	return 0; // 0x18e Return
}


task_4_event_10(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object); // 0x1f6 Func
	return 0; // 0x1f8 Return
}


task_5_event_7(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int)
{
	var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x21c PushV
	var_14_int = 110; // 0x21d PushI
	var_15_bool = var_9_int == var_14_int; // 0x21e Eq
	if(var_15_bool == 0) goto Label_570; // 0x21f JumpB
	var_16_bool = 0; var_17_object = Obj(); // 0x220 PushV
	var_17_object = var_3_bool; // 0x221 MovT
	func_913(var_16_bool, var_17_object); // 0x222 Call
	var_50_bool = var_16_bool == 0; // 0x224 Not
	if(var_50_bool == 0) goto Label_554; // 0x225 JumpB
	func_591(); // 0x227 Call
	goto Label_569; // 0x229 Jump
	
Label_569:
	goto Label_574; // 0x239 Jump
	
Label_574:
	return 4; // 0x23e Return
	
Label_554:
	GetPosition(var_12_cvector); // 0x22a Func
	GetPosition(var_13_cvector); // 0x22c TObjFunc
	var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x22e PushV
	var_54_cvector = var_12_cvector; // 0x22f Mov
	var_55_cvector = var_13_cvector; // 0x230 Mov
	func_947(var_53_float, var_54_cvector, var_55_cvector); // 0x231 Call
	var_58_float = 2250000.0; // 0x233 PushF
	var_59_bool = var_53_float >= var_58_float; // 0x234 GE
	if(var_59_bool == 0) goto Label_569; // 0x235 JumpB
	func_591(); // 0x237 Call
	
Label_570:
	var_60_int = 0; // 0x23a PushV
	var_60_int = var_9_int; // 0x23b Mov
	func_701(var_11_cvector, var_12_cvector, var_13_cvector, var_60_int); // 0x23c Call
}


task_5_event_16(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_string)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_string = ""; // 0x240 PushV
	var_12_object = var_9_object; // 0x241 Mov
	var_13_string = var_10_string; // 0x242 Mov
	func_1024(var_11_bool, var_12_object, var_13_string); // 0x243 Call
	if(var_11_bool == 0) goto Label_585; // 0x245 JumpB
	func_591(); // 0x247 Call
	
Label_585:
	var_61_object = Obj(); var_62_string = ""; // 0x249 PushV
	var_61_object = var_9_object; // 0x24a Mov
	var_62_string = var_10_string; // 0x24b Mov
	func_1051(var_61_object, var_62_string); // 0x24c Call
	return 0; // 0x24e Return
}


task_5_event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object)
{
	func_591(); // 0x258 Call
	var_12_object = Obj(); // 0x25a PushV
	var_12_object = var_9_object; // 0x25b Mov
	func_1082(); // 0x25c Call
	return 0; // 0x25e Return
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object)
{
	var_10_object = Obj(); // 0x43b PushV
	var_10_object = var_9_object; // 0x43c Mov
	func_1017(); // 0x43d Call
	return 0; // 0x43f Return
}


main(var_0_bool, var_1_bool, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_float = 0; var_11_bool = 0; var_12_float = 0; // 0x0 PushV
	var_13_string = "health"; // 0x1 PushS
	HasProperty(var_13_string, var_11_bool); // 0x2 Func
	var_14_bool = var_11_bool; // 0x4 Push
	if(var_14_bool == 0) goto Label_12; // 0x5 JumpB
	var_15_string = "health"; // 0x6 PushS
	GetProperty(var_15_string, var_12_float); // 0x7 Func
	var_16_float = GlobalVars[0]; // 0x9 PushGE
	var_16_float = var_12_float; // 0xa Mov
	GlobalVars[0] = var_16_float; // 0xb PopGE
	
Label_12:
	func_63(var_11_bool, var_12_float); // 0xd Call
	goto Label_12; // 0xf Jump
}


func_1024(var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x400 PushV
	var_18_string = "health"; // 0x401 PushS
	var_19_bool = var_13_string == var_18_string; // 0x402 Eq
	if(var_19_bool == 0) goto Label_1049; // 0x403 JumpB
	var_20_string = "health"; // 0x404 PushS
	GetProperty(var_20_string, var_16_float); // 0x405 Func
	var_21_float = GlobalVars[0]; // 0x407 PushGE
	var_17_bool = var_16_float < var_21_float; // 0x408 LT2
	var_22_float = GlobalVars[0]; // 0x409 PushGE
	var_22_float = var_16_float; // 0x40a Mov
	GlobalVars[0] = var_22_float; // 0x40b PopGE
	var_23_bool = 0; // 0x40c PushV
	var_23_bool = 0; // 0x40d MovB
	var_24_bool = var_17_bool; // 0x40e Push
	if(var_24_bool == 0) goto Label_1046; // 0x40f JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0x410 PushV
	var_26_object = var_12_object; // 0x411 Mov
	func_913(var_25_bool, var_26_object); // 0x412 Call
	if(var_25_bool == 0) goto Label_1046; // 0x414 JumpB
	var_23_bool = 1; // 0x415 MovB
	
Label_1046:
	if(var_23_bool == 0) goto Label_1049; // 0x416 JumpB
	var_11_bool = 1; // 0x417 MovB
	return 4; // 0x418 Return
	
Label_1049:
	var_11_bool = 0; // 0x419 MovB
	return 4; // 0x41a Return
}


func_512(var_183_bool, var_184_object)
{
	var_185_bool = 0; var_186_object = Obj(); // 0x201 PushV
	var_186_object = var_184_object; // 0x202 Mov
	func_913(var_185_bool, var_186_object); // 0x203 Call
	var_183_bool = var_185_bool; // 0x204 Mov
	return 0; // 0x206 Return
}


func_637(var_0_bool, var_1_bool, var_2_object, var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_float = 0; var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; // 0x27d PushV
	var_0_bool = var_83_object; // 0x27e TMov
	var_94_cvector = CVector(0,0,0); var_95_float = 0; // 0x27f PushV
	var_95_float = 1.74533; // 0x280 MovF
	func_607(var_94_cvector, var_95_float); // 0x281 Call
	var_89_cvector = var_94_cvector; // 0x282 Mov
	var_90_float = var_89_cvector | var_89_cvector; // 0x284 Or2
	var_124_float = 10000.0; // 0x285 PushF
	var_125_bool = var_90_float < var_124_float; // 0x286 LT
	if(var_125_bool == 0) goto Label_657; // 0x287 JumpB
	var_126_string = "Can't retreat, distance: "; // 0x288 PushS
	var_127_float = sqrt(var_90_float); // 0x289 Sqrt
	var_128_int = var_126_string + var_127_float; // 0x28a Add
	Trace(var_128_int); // 0x28b Func
	var_129_float = 0.5; // 0x28d PushF
	Sleep(var_129_float); // 0x28e Func
	return 10; // 0x290 Return
	
Label_657:
	var_130_float = GetByIndex(var_89_cvector, 0); // 0x291 PushE
	var_131_float = GetByIndex(var_89_cvector, 2); // 0x292 PushE
	Rotate(var_130_float, var_131_float); // 0x293 Func
	var_132_cvector = CVector(0,0,0); // 0x295 PushV
	func_784(var_132_cvector); // 0x296 Call
	var_1_bool = var_132_cvector + var_89_cvector; // 0x298 Add2
	var_135_int = 120; // 0x299 PushI
	var_136_float = 0.5; // 0x29a PushF
	SetTimer(var_135_int, var_136_float); // 0x29b Func
	var_2_object = 0; // 0x29d TMovB
	
Label_670:
	var_137_int = 1; // 0x29e PushI
	MovePoint(var_137_int, var_137_int, var_91_bool); // 0x29f Func
	var_138_bool = var_91_bool; // 0x2a1 Push
	if(var_138_bool == 0) goto Label_698; // 0x2a2 JumpB
	var_139_bool = var_0_bool == 0; // 0x2a3 NullEq
	if(var_139_bool == 0) goto Label_679; // 0x2a4 JumpB
	goto Label_700; // 0x2a5 Jump
	
Label_700:
	return 10; // 0x2bc Return
	
Label_679:
	var_140_cvector = CVector(0,0,0); var_141_float = 0; // 0x2a7 PushV
	var_141_float = 2.61799; // 0x2a8 MovF
	func_607(var_140_cvector, var_141_float); // 0x2a9 Call
	var_92_cvector = var_140_cvector; // 0x2aa Mov
	var_93_float = var_92_cvector | var_92_cvector; // 0x2ac Or2
	var_142_float = 10000.0; // 0x2ad PushF
	var_143_bool = var_93_float >= var_142_float; // 0x2ae GE
	if(var_143_bool == 0) goto Label_697; // 0x2af JumpB
	var_144_cvector = CVector(0,0,0); // 0x2b0 PushV
	func_784(var_144_cvector); // 0x2b1 Call
	var_1_bool = var_144_cvector + var_92_cvector; // 0x2b3 Add2
	var_145_int = 120; // 0x2b4 PushI
	var_146_float = 0.5; // 0x2b5 PushF
	SetTimer(var_145_int, var_146_float); // 0x2b6 Func
	goto Label_698; // 0x2b8 Jump
	
Label_698:
	var_147_bool = var_2_object == 0; // 0x2ba Not
	if(var_147_bool == 0) goto Label_670; // 0x2bb JumpB
	
Label_697:
	goto Label_700; // 0x2b9 Jump
}


func_519(var_201_string)
{
	var_201_string = "walk"; // 0x207 MovS
	return 0; // 0x208 Return
}


func_776(var_116_string, var_117_int)
{
	var_118_int = 1; // 0x309 PushI
	var_119_bool = var_117_int == var_118_int; // 0x30a Eq
	if(var_119_bool == 0) goto Label_782; // 0x30b JumpB
	var_116_string = "fire"; // 0x30c MovS
	return 0; // 0x30d Return
	
Label_782:
	var_116_string = "phys"; // 0x30e MovS
	return 0; // 0x30f Return
}


func_521(var_202_string)
{
	var_202_string = "run"; // 0x209 MovS
	return 0; // 0x20a Return
}


func_523(var_3_bool, var_75_object)
{
	var_3_bool = var_75_object; // 0x20c TMov
	var_80_string = "retreat"; // 0x20d PushS
	Speak(var_80_string); // 0x20e Func
	var_81_int = 110; // 0x210 PushI
	var_82_int = 1; // 0x211 PushI
	SetTimer(var_81_int, var_82_int); // 0x212 Func
	var_83_object = Obj(); // 0x214 PushV
	var_83_object = var_75_object; // 0x215 Mov
	func_637(var_78_bool, var_79_object, var_75_object, var_83_object); // 0x216 Call
	var_148_int = 110; // 0x218 PushI
	KillTimer(var_148_int); // 0x219 Func
	return 0; // 0x21b Return
}


func_143(var_38_bool)
{
	var_38_bool = 0; // 0x8f MovB
	return 0; // 0x90 Return
}


func_399(var_0_bool, var_1_bool, var_160_bool, var_161_object, var_162_float, var_163_float, var_164_bool, var_165_bool)
{
	var_167_bool = 0; var_168_bool = 0; var_169_object = Obj(); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_object = Obj(); var_175_bool = 0; var_176_bool = 0; var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_object = Obj(); // 0x18f PushV
	var_0_bool = 0; // 0x190 TMovB
	var_1_bool = var_161_object; // 0x191 TMov
	var_176_bool = var_165_bool; // 0x192 Mov
	
Label_403:
	var_183_bool = 0; var_184_object = Obj(); // 0x193 PushV
	var_184_object = var_161_object; // 0x194 Mov
	func_512(var_183_bool, var_184_object); // 0x195 Call
	var_187_bool = var_183_bool == 0; // 0x197 Not
	if(var_187_bool == 0) goto Label_411; // 0x198 JumpB
	var_160_bool = 0; // 0x199 MovB
	return 16; // 0x19a Return
	
Label_411:
	GetPosition(var_178_cvector); // 0x19b ObjFunc
	GetPosition(var_179_cvector); // 0x19d Func
	var_180_cvector = var_178_cvector - var_179_cvector; // 0x19f Sub2
	var_181_float = var_180_cvector | var_180_cvector; // 0x1a0 Or2
	var_188_bool = 0; // 0x1a1 PushV
	var_188_bool = 0; // 0x1a2 MovB
	var_189_int = 0; // 0x1a3 PushI
	var_190_bool = var_163_float > var_189_int; // 0x1a4 GT
	if(var_190_bool == 0) goto Label_426; // 0x1a5 JumpB
	var_191_float = var_163_float * var_163_float; // 0x1a6 Mult
	var_192_bool = var_181_float > var_191_float; // 0x1a7 GT
	if(var_192_bool == 0) goto Label_426; // 0x1a8 JumpB
	var_188_bool = 1; // 0x1a9 MovB
	
Label_426:
	if(var_188_bool == 0) goto Label_431; // 0x1aa JumpB
	Stop(); // 0x1ab Func
	var_160_bool = 0; // 0x1ad MovB
	return 16; // 0x1ae Return
	
Label_431:
	var_193_float = var_162_float * var_162_float; // 0x1af Mult
	var_194_bool = var_181_float > var_193_float; // 0x1b0 GT
	if(var_194_bool == 0) goto Label_493; // 0x1b1 JumpB
	GetPFPosition(var_178_cvector); // 0x1b2 ObjFunc
	FindPathTo(var_182_object, var_178_cvector); // 0x1b4 Func
	var_195_bool = var_182_object != 0; // 0x1b6 NullNeq
	if(var_195_bool == 0) goto Label_442; // 0x1b7 JumpB
	var_177_object = var_182_object; // 0x1b8 Mov
	var_182_object = 0; // 0x1b9 SetNull
	
Label_442:
	var_196_bool = var_177_object != 0; // 0x1ba NullNeq
	if(var_196_bool == 0) goto Label_475; // 0x1bb JumpB
	var_197_bool = var_176_bool; // 0x1bc Push
	if(var_197_bool == 0) goto Label_452; // 0x1bd JumpB
	var_176_bool = 0; // 0x1be MovB
	RotatePath(var_177_object, var_175_bool); // 0x1bf Func
	var_198_bool = var_175_bool == 0; // 0x1c1 Not
	if(var_198_bool == 0) goto Label_452; // 0x1c2 JumpB
	goto Label_499; // 0x1c3 Jump
	
Label_499:
	var_160_bool = !var_0_bool; // 0x1f3 Not2
	return 16; // 0x1f4 Return
	
Label_452:
	var_199_int = 0; // 0x1c4 PushI
	var_200_float = 0.3; // 0x1c5 PushF
	SetTimer(var_199_int, var_200_float); // 0x1c6 Func
	var_201_string = ""; // 0x1c8 PushV
	func_519(var_201_string); // 0x1c9 Call
	var_202_string = ""; // 0x1cb PushV
	func_521(var_202_string); // 0x1cc Call
	FollowPath(var_177_object, var_164_bool, var_175_bool, var_201_string, var_202_string); // 0x1ce Func
	var_203_bool = var_175_bool == 0; // 0x1d0 Not
	if(var_203_bool == 0) goto Label_473; // 0x1d1 JumpB
	var_204_bool = var_0_bool; // 0x1d2 PushT
	if(var_204_bool == 0) goto Label_471; // 0x1d3 JumpB
	var_177_object = 0; // 0x1d4 SetNull
	goto Label_499; // 0x1d5 Jump
	
Label_471:
	goto Label_498; // 0x1d7 Jump
	
Label_498:
	goto Label_403; // 0x1f2 Jump
	
Label_473:
	var_177_object = 0; // 0x1d9 SetNull
	goto Label_491; // 0x1da Jump
	
Label_491:
	var_182_object = 0; // 0x1eb SetNull
	goto Label_497; // 0x1ec Jump
	
Label_497:
	var_177_object = 0; // 0x1f1 SetNull
	
Label_475:
	var_205_int = 0; // 0x1db PushI
	KillTimer(var_205_int); // 0x1dc Func
	var_206_float = 0.5; // 0x1de PushF
	Sleep(var_206_float, var_175_bool); // 0x1df Func
	var_207_bool = var_175_bool == 0; // 0x1e1 Not
	if(var_207_bool == 0) goto Label_487; // 0x1e2 JumpB
	var_208_bool = var_0_bool; // 0x1e3 PushT
	if(var_208_bool == 0) goto Label_487; // 0x1e4 JumpB
	var_177_object = 0; // 0x1e5 SetNull
	goto Label_499; // 0x1e6 Jump
	
Label_487:
	var_209_int = 0; // 0x1e7 PushI
	var_210_float = 0.3; // 0x1e8 PushF
	SetTimer(var_209_int, var_210_float); // 0x1e9 Func
	
Label_493:
	var_211_int = 0; // 0x1ed PushI
	KillTimer(var_211_int); // 0x1ee Func
	goto Label_499; // 0x1f0 Jump
}


func_913(var_25_bool, var_26_object)
{
	var_27_int = 0; var_28_int = 0; // 0x391 PushV
	var_29_bool = 0; var_30_object = Obj(); // 0x392 PushV
	var_30_object = var_26_object; // 0x393 Mov
	func_877(var_29_bool, var_30_object); // 0x394 Call
	var_46_bool = var_29_bool == 0; // 0x396 Not
	if(var_46_bool == 0) goto Label_922; // 0x397 JumpB
	var_25_bool = 0; // 0x398 MovB
	return 2; // 0x399 Return
	
Label_922:
	var_47_bool = 0; var_48_object = Obj(); var_49_string = ""; // 0x39a PushV
	var_48_object = var_26_object; // 0x39b Mov
	var_49_string = "noaccess"; // 0x39c MovS
	func_796(var_47_bool, var_48_object, var_49_string); // 0x39d Call
	var_56_bool = var_47_bool == 0; // 0x39f Not
	if(var_56_bool == 0) goto Label_931; // 0x3a0 JumpB
	var_25_bool = 1; // 0x3a1 MovB
	return 2; // 0x3a2 Return
	
Label_931:
	var_57_string = "noaccess"; // 0x3a3 PushS
	GetProperty(var_57_string, var_28_int); // 0x3a4 ObjFunc
	var_58_int = 0; // 0x3a6 PushI
	var_25_bool = var_28_int == var_58_int; // 0x3a7 Eq2
	return 2; // 0x3a8 Return
}


func_145()
{
	return 0; // 0x91 Return
}


func_784(var_132_cvector)
{
	var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); // 0x310 PushV
	GetPosition(var_134_cvector); // 0x311 Func
	var_132_cvector = var_134_cvector; // 0x313 Mov
	return 2; // 0x314 Return
}


func_146()
{
	var_11_string = "death"; // 0x92 PushS
	Speak(var_11_string); // 0x93 Func
	var_12_string = ""; // 0x95 PushV
	var_12_string = "die"; // 0x96 MovS
	func_154(var_12_string); // 0x97 Call
	return 0; // 0x99 Return
}


func_789(var_117_cvector)
{
	var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); // 0x315 PushV
	GetPosition(var_121_cvector); // 0x316 Func
	GetPosition(var_122_cvector); // 0x318 ObjFunc
	var_117_cvector = var_122_cvector - var_121_cvector; // 0x31a Sub2
	return 4; // 0x31b Return
}


func_154(var_12_string)
{
	var_13_string = ""; // 0x9b PushV
	var_13_string = var_12_string; // 0x9c Mov
	func_163(var_13_string); // 0x9d Call
	
Label_159:
	Hold(); // 0x9f Func
	goto Label_159; // 0xa1 Jump
}


func_1051(var_61_object, var_62_string)
{
	var_63_float = 0; var_64_float = 0; // 0x41b PushV
	var_65_string = "health"; // 0x41c PushS
	var_66_bool = var_62_string == var_65_string; // 0x41d Eq
	if(var_66_bool == 0) goto Label_1081; // 0x41e JumpB
	var_67_string = "health"; // 0x41f PushS
	GetProperty(var_67_string, var_64_float); // 0x420 Func
	var_68_int = 0; // 0x422 PushI
	var_69_bool = var_64_float <= var_68_int; // 0x423 LE
	if(var_69_bool == 0) goto Label_1063; // 0x424 JumpB
	SignalDeath(var_61_object); // 0x425 Func
	
Label_1063:
	var_70_bool = 0; // 0x427 PushV
	var_70_bool = 0; // 0x428 MovB
	var_71_float = GlobalVars[0]; // 0x429 PushGE
	var_72_bool = var_64_float < var_71_float; // 0x42a LT
	if(var_72_bool == 0) goto Label_1074; // 0x42b JumpB
	var_73_bool = 0; var_74_object = Obj(); // 0x42c PushV
	var_74_object = var_61_object; // 0x42d Mov
	func_913(var_73_bool, var_74_object); // 0x42e Call
	if(var_73_bool == 0) goto Label_1074; // 0x430 JumpB
	var_70_bool = 1; // 0x431 MovB
	
Label_1074:
	if(var_70_bool == 0) goto Label_1081; // 0x432 JumpB
	var_75_object = Obj(); // 0x433 PushV
	var_75_object = var_61_object; // 0x434 Mov
	TaskCall(5); // 0x435 TaskCall
	func_523(var_79_object, var_75_object); // 0x436 Call
	TaskReturn(); // 0x437 TaskReturn
	
Label_1081:
	return 2; // 0x439 Return
}


func_796(var_47_bool, var_48_object, var_49_string)
{
	var_50_bool = 0; var_51_bool = 0; // 0x31c PushV
	var_52_string = "HasProperty"; // 0x31d PushS
	var_53_int = 2; // 0x31e PushI
	var_54_bool = IsFuncExist(var_48_object, var_52_string, var_53_int); // 0x31f FuncExist
	var_55_bool = var_54_bool == 0; // 0x320 Not
	if(var_55_bool == 0) goto Label_804; // 0x321 JumpB
	var_47_bool = 0; // 0x322 MovB
	return 2; // 0x323 Return
	
Label_804:
	HasProperty(var_49_string, var_51_bool); // 0x324 ObjFunc
	var_47_bool = var_51_bool; // 0x326 Mov
	return 2; // 0x327 Return
}


func_163(var_13_string)
{
	RemoveRTEnvelope(); // 0xa4 Func
	SetDeathState(); // 0xa6 Func
	Stop(); // 0xa8 Func
	StopAsync(); // 0xaa Func
	StopSecondaryAnimation(); // 0xac Func
	var_14_string = "all"; // 0xae PushS
	PlayAnimation(var_14_string, var_13_string); // 0xaf Func
	WaitForAnimEnd(); // 0xb1 Func
	var_15_string = "all"; // 0xb3 PushS
	LockAnimationEnd(var_15_string, var_13_string); // 0xb4 Func
	RemoveEnvelope(); // 0xb6 Func
	return 0; // 0xb8 Return
}


func_808(var_91_float, var_92_object, var_93_float, var_94_int)
{
	var_95_int = 0; var_96_string = ""; var_97_int = 0; var_98_float = 0; var_99_float = 0; var_100_float = 0; var_101_int = 0; var_102_string = ""; var_103_int = 0; var_104_float = 0; var_105_float = 0; var_106_float = 0; // 0x328 PushV
	var_107_bool = 0; var_108_object = Obj(); var_109_string = ""; // 0x329 PushV
	var_108_object = var_92_object; // 0x32a Mov
	var_109_string = "health"; // 0x32b MovS
	func_796(var_107_bool, var_108_object, var_109_string); // 0x32c Call
	var_110_bool = var_107_bool == 0; // 0x32e Not
	if(var_110_bool == 0) goto Label_818; // 0x32f JumpB
	var_91_float = 0.0; // 0x330 MovF
	return 12; // 0x331 Return
	
Label_818:
	var_111_bool = 0; var_112_object = Obj(); var_113_string = ""; // 0x332 PushV
	var_112_object = var_92_object; // 0x333 Mov
	var_113_string = "armor"; // 0x334 MovS
	func_796(var_111_bool, var_112_object, var_113_string); // 0x335 Call
	var_114_bool = var_111_bool == 0; // 0x337 Not
	if(var_114_bool == 0) goto Label_827; // 0x338 JumpB
	var_101_int = 0; // 0x339 MovI
	goto Label_830; // 0x33a Jump
	
Label_830:
	var_115_string = "armor_"; // 0x33e PushS
	var_116_string = ""; var_117_int = 0; // 0x33f PushV
	var_117_int = var_94_int; // 0x340 Mov
	func_776(var_116_string, var_117_int); // 0x341 Call
	var_102_string = var_115_string + var_116_string; // 0x343 Add2
	var_120_bool = 0; var_121_object = Obj(); var_122_string = ""; // 0x344 PushV
	var_121_object = var_92_object; // 0x345 Mov
	var_122_string = var_102_string; // 0x346 Mov
	func_796(var_120_bool, var_121_object, var_122_string); // 0x347 Call
	var_123_bool = var_120_bool == 0; // 0x349 Not
	if(var_123_bool == 0) goto Label_845; // 0x34a JumpB
	var_103_int = 0; // 0x34b MovI
	goto Label_847; // 0x34c Jump
	
Label_847:
	var_124_float = 0; var_125_float = 0; var_126_float = 0; // 0x34f PushV
	var_127_int = var_101_int + var_103_int; // 0x350 Add
	var_128_float = 100.0; // 0x351 PushF
	var_125_float = var_127_int / var_127_int; // 0x352 Div2
	var_126_float = 1; // 0x353 MovI
	func_951(var_124_float, var_125_float, var_126_float); // 0x354 Call
	var_104_float = var_124_float; // 0x355 Mov
	var_130_string = "health"; // 0x357 PushS
	GetProperty(var_130_string, var_105_float); // 0x358 ObjFunc
	var_131_int = 1; // 0x35a PushI
	var_132_int = var_131_int - var_104_float; // 0x35b Sub
	var_106_float = var_93_float * var_132_int; // 0x35c Mult2
	var_133_string = "health"; // 0x35d PushS
	var_134_float = 0; var_135_float = 0; var_136_float = 0; var_137_float = 0; // 0x35e PushV
	var_135_float = var_105_float - var_106_float; // 0x35f Sub2
	var_136_float = 0; // 0x360 MovI
	var_137_float = 1; // 0x361 MovI
	func_958(var_134_float, var_135_float, var_136_float, var_137_float); // 0x362 Call
	SetProperty(var_133_string, var_134_float); // 0x364 ObjFunc
	var_91_float = var_106_float; // 0x366 Mov
	return 12; // 0x367 Return
	
Label_845:
	GetProperty(var_102_string, var_103_int); // 0x34d ObjFunc
	
Label_827:
	var_140_string = "armor"; // 0x33b PushS
	GetProperty(var_140_string, var_101_int); // 0x33c ObjFunc
}


func_937(var_110_cvector, var_111_cvector)
{
	var_112_float = 0; var_113_float = 0; // 0x3a9 PushV
	var_114_int = var_111_cvector | var_111_cvector; // 0x3aa Or
	var_113_float = sqrt(var_114_int); // 0x3ab Sqrt2
	var_115_float = 0.0; // 0x3ac PushF
	var_116_bool = var_113_float < var_115_float; // 0x3ad LT
	if(var_116_bool == 0) goto Label_945; // 0x3ae JumpB
	var_110_cvector = CVector(0.0, 0.0, 0.0); // 0x3af MovV
	return 2; // 0x3b0 Return
	
Label_945:
	var_110_cvector = var_111_cvector / var_111_cvector; // 0x3b1 Div2
	return 2; // 0x3b2 Return
}


func_307()
{
	Stop(); // 0x133 Func
	StopAnimation(); // 0x135 Func
	StopAsync(); // 0x137 Func
	return 0; // 0x139 Return
}


func_947(var_53_float, var_54_cvector, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x3b3 PushV
	var_57_cvector = var_55_cvector - var_54_cvector; // 0x3b4 Sub2
	var_53_float = var_57_cvector | var_57_cvector; // 0x3b5 Or2
	return 2; // 0x3b6 Return
}


func_951(var_124_float, var_125_float, var_126_float)
{
	var_129_bool = var_125_float < var_126_float; // 0x3b8 LT
	if(var_129_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_124_float = var_125_float; // 0x3ba Mov
	goto Label_957; // 0x3bb Jump
	
Label_957:
	return 0; // 0x3bd Return
	
Label_956:
	var_124_float = var_126_float; // 0x3bc Mov
}


func_701(var_0_bool, var_1_bool, var_2_object, var_60_int)
{
	var_61_cvector = CVector(0,0,0); var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_float = 0; // 0x2bd PushV
	var_69_int = 120; // 0x2be PushI
	var_70_bool = var_60_int != var_69_int; // 0x2bf Neq
	if(var_70_bool == 0) goto Label_706; // 0x2c0 JumpB
	return 8; // 0x2c1 Return
	
Label_706:
	var_71_bool = var_0_bool == 0; // 0x2c2 NullEq
	if(var_71_bool == 0) goto Label_715; // 0x2c3 JumpB
	Stop(); // 0x2c4 Func
	var_72_int = 1; // 0x2c6 PushI
	KillTimer(var_72_int); // 0x2c7 Func
	var_2_object = 1; // 0x2c9 TMovB
	goto Label_752; // 0x2ca Jump
	
Label_752:
	return 8; // 0x2f0 Return
	
Label_715:
	GetDirection(var_65_cvector); // 0x2cb Func
	var_73_float = 7000.0; // 0x2cd PushF
	FindDirLength(var_66_float, var_65_cvector, var_73_float); // 0x2ce Func
	var_74_cvector = CVector(0,0,0); var_75_float = 0; // 0x2d0 PushV
	var_75_float = 1.74533; // 0x2d1 MovF
	func_607(var_74_cvector, var_75_float); // 0x2d2 Call
	var_67_cvector = var_74_cvector; // 0x2d3 Mov
	var_68_float = var_67_cvector | var_67_cvector; // 0x2d5 Or2
	var_104_bool = 0; // 0x2d6 PushV
	var_104_bool = 0; // 0x2d7 MovB
	var_105_float = 10000.0; // 0x2d8 PushF
	var_106_bool = var_68_float >= var_105_float; // 0x2d9 GE
	if(var_106_bool == 0) goto Label_745; // 0x2da JumpB
	var_107_bool = 0; // 0x2db PushV
	var_107_bool = 1; // 0x2dc MovB
	var_108_float = var_66_float * var_66_float; // 0x2dd Mult
	var_109_float = 2.25; // 0x2de PushF
	var_110_float = var_108_float * var_109_float; // 0x2df Mult
	var_111_bool = var_68_float >= var_110_float; // 0x2e0 GE
	if(var_111_bool == 0) goto Label_743; // 0x2e1 JumpB
	var_112_bool = 0; // 0x2e2 PushV
	func_760(var_107_bool, var_112_bool); // 0x2e3 Call
	if(var_112_bool == 0) goto Label_743; // 0x2e5 JumpB
	var_107_bool = 0; // 0x2e6 MovB
	
Label_743:
	if(var_107_bool == 0) goto Label_745; // 0x2e7 JumpB
	var_104_bool = 1; // 0x2e8 MovB
	
Label_745:
	if(var_104_bool == 0) goto Label_752; // 0x2e9 JumpB
	Stop(); // 0x2ea Func
	var_132_cvector = CVector(0,0,0); // 0x2ec PushV
	func_784(var_132_cvector); // 0x2ed Call
	var_1_bool = var_132_cvector + var_67_cvector; // 0x2ef Add2
}


func_958(var_134_float, var_135_float, var_136_float, var_137_float)
{
	var_138_bool = var_135_float < var_136_float; // 0x3bf LT
	if(var_138_bool == 0) goto Label_963; // 0x3c0 JumpB
	var_134_float = var_136_float; // 0x3c1 Mov
	return 0; // 0x3c2 Return
	
Label_963:
	var_139_bool = var_135_float > var_137_float; // 0x3c3 GT
	if(var_139_bool == 0) goto Label_967; // 0x3c4 JumpB
	var_134_float = var_137_float; // 0x3c5 Mov
	return 0; // 0x3c6 Return
	
Label_967:
	var_134_float = var_135_float; // 0x3c7 Mov
	return 0; // 0x3c8 Return
}


func_63(var_0_bool, var_1_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_bool = 0; var_29_object = Obj(); var_30_bool = 0; // 0x3f PushV
	var_0_bool = 0; // 0x40 TMovB
	var_1_bool = 0; // 0x41 TMovB
	var_31_float = 0.5; // 0x42 PushF
	rand(var_24_float, var_31_float); // 0x43 Func
	Sleep(var_24_float); // 0x45 Func
	
Label_71:
	var_32_bool = var_0_bool == 0; // 0x47 Not
	if(var_32_bool == 0) goto Label_119; // 0x48 JumpB
	var_33_bool = var_1_bool == 0; // 0x49 Not
	if(var_33_bool == 0) goto Label_91; // 0x4a JumpB
	
Label_75:
	GetPosition(var_26_cvector); // 0x4b Func
	GetCameraFarDistance(var_27_float); // 0x4d Func
	var_34_float = 2.5; // 0x4f PushF
	var_27_float = var_27_float * var_34_float; // 0x50 Mult2
	GetRandomPFPointInCircle(var_25_cvector, var_26_cvector, var_27_float, var_28_bool); // 0x51 Func
	var_35_bool = var_28_bool; // 0x53 Push
	if(var_35_bool == 0) goto Label_86; // 0x54 JumpB
	goto Label_90; // 0x55 Jump
	
Label_90:
	goto Label_92; // 0x5a Jump
	
Label_92:
	FindShiftedPathTo(var_29_object, var_25_cvector); // 0x5c Func
	var_36_bool = var_29_object != 0; // 0x5e NullNeq
	if(var_36_bool == 0) goto Label_114; // 0x5f JumpB
	RotatePath(var_29_object, var_30_bool); // 0x60 Func
	var_37_bool = var_30_bool; // 0x62 Push
	if(var_37_bool == 0) goto Label_113; // 0x63 JumpB
	var_38_bool = 0; // 0x64 PushV
	func_143(var_38_bool); // 0x65 Call
	FollowPath(var_29_object, var_38_bool, var_30_bool); // 0x67 Func
	var_29_object = 0; // 0x69 SetNull
	var_39_bool = var_30_bool; // 0x6a Push
	if(var_39_bool == 0) goto Label_113; // 0x6b JumpB
	TaskCall(1); // 0x6d TaskCall
	func_145(); // 0x6e Call
	TaskReturn(); // 0x6f TaskReturn
	
Label_113:
	goto Label_117; // 0x71 Jump
	
Label_117:
	var_29_object = 0; // 0x75 SetNull
	goto Label_71; // 0x76 Jump
	
Label_114:
	var_40_int = 1; // 0x72 PushI
	Sleep(var_40_int); // 0x73 Func
	
Label_86:
	var_41_int = 1; // 0x56 PushI
	Sleep(var_41_int); // 0x57 Func
	goto Label_75; // 0x59 Jump
	
Label_91:
	var_1_bool = 0; // 0x5b TMovB
	
Label_119:
	return 14; // 0x77 Return
}


func_191(var_0_bool, var_46_object, var_150_bool)
{
	var_48_float = 0; var_49_float = 0; var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_float = 0; var_55_int = 0; var_56_object = Obj(); var_57_float = 0; var_58_float = 0; var_59_float = 0; var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_float = 0; var_65_int = 0; var_66_object = Obj(); var_67_float = 0; // 0xbf PushV
	var_0_bool = var_46_object; // 0xc0 TMov
	GetAttackDistance(var_58_float); // 0xc1 Func
	var_68_int = 10; // 0xc3 PushI
	var_59_float = var_58_float + var_68_int; // 0xc4 Add2
	Face(var_0_bool); // 0xc5 Func
	
Label_199:
	var_69_bool = 0; var_70_object = Obj(); // 0xc7 PushV
	var_70_object = var_0_bool; // 0xc8 MovT
	func_977(var_69_bool, var_70_object); // 0xc9 Call
	if(var_69_bool == 0) goto Label_288; // 0xcb JumpB
	GetPosition(var_61_cvector); // 0xcc TObjFunc
	GetPosition(var_62_cvector); // 0xce Func
	var_63_cvector = var_61_cvector - var_62_cvector; // 0xd0 Sub2
	var_64_float = var_63_cvector | var_63_cvector; // 0xd1 Or2
	var_76_float = var_59_float * var_59_float; // 0xd2 Mult
	var_77_bool = var_64_float < var_76_float; // 0xd3 LT
	if(var_77_bool == 0) goto Label_273; // 0xd4 JumpB
	var_78_int = 2; // 0xd5 PushI
	irand(var_65_int, var_78_int); // 0xd6 Func
	var_79_string = "attack"; // 0xd8 PushS
	var_80_int = 1; // 0xd9 PushI
	var_81_int = var_65_int + var_80_int; // 0xda Add
	var_82_int = var_79_string + var_81_int; // 0xdb Add
	Speak(var_82_int); // 0xdc Func
	var_83_bool = 1; // 0xde PushB
	SetAttackState(var_83_bool); // 0xdf Func
	var_84_string = "all"; // 0xe1 PushS
	var_85_string = "attack_begin"; // 0xe2 PushS
	PlayAnimation(var_84_string, var_85_string); // 0xe3 Func
	WaitForAnimEnd(var_60_bool); // 0xe5 Func
	var_86_bool = var_60_bool == 0; // 0xe7 Not
	if(var_86_bool == 0) goto Label_237; // 0xe8 JumpB
	var_87_bool = 0; // 0xe9 PushB
	SetAttackState(var_87_bool); // 0xea Func
	goto Label_288; // 0xec Jump
	
Label_288:
	StopAsync(); // 0x120 Func
	return 20; // 0x122 Return
	
Label_237:
	var_88_bool = 0; var_89_object = Obj(); // 0xed PushV
	var_89_object = var_0_bool; // 0xee MovT
	func_913(var_88_bool, var_89_object); // 0xef Call
	if(var_88_bool == 0) goto Label_260; // 0xf1 JumpB
	GetVictim(var_58_float, var_66_object); // 0xf2 Func
	ReportAttack(var_0_bool); // 0xf4 Func
	var_90_bool = var_66_object == var_0_bool; // 0xf6 Eq
	if(var_90_bool == 0) goto Label_259; // 0xf7 JumpB
	var_91_float = 0; var_92_object = Obj(); var_93_float = 0; var_94_int = 0; // 0xf8 PushV
	var_92_object = var_66_object; // 0xf9 Mov
	var_93_float = 0.05; // 0xfa MovF
	var_94_int = 0; // 0xfb MovI
	func_808(var_91_float, var_92_object, var_93_float, var_94_int); // 0xfc Call
	var_67_float = var_91_float; // 0xfd Mov
	var_141_int = 0; // 0xff PushI
	var_142_float = 0.05; // 0x100 PushF
	ReportHit(var_0_bool, var_141_int, var_67_float, var_142_float); // 0x101 Func
	
Label_259:
	var_66_object = 0; // 0x103 SetNull
	
Label_260:
	var_143_bool = 0; // 0x104 PushB
	SetAttackState(var_143_bool); // 0x105 Func
	var_144_string = "all"; // 0x107 PushS
	var_145_string = "attack_end"; // 0x108 PushS
	PlayAnimation(var_144_string, var_145_string); // 0x109 Func
	WaitForAnimEnd(var_60_bool); // 0x10b Func
	var_146_bool = var_60_bool == 0; // 0x10d Not
	if(var_146_bool == 0) goto Label_272; // 0x10e JumpB
	goto Label_288; // 0x10f Jump
	
Label_272:
	goto Label_287; // 0x110 Jump
	
Label_287:
	goto Label_199; // 0x11f Jump
	
Label_273:
	StopAsync(); // 0x111 Func
	var_147_bool = 0; var_148_object = Obj(); var_149_float = 0; // 0x113 PushV
	var_148_object = var_0_bool; // 0x114 MovT
	var_149_float = var_59_float; // 0x115 Mov
	TaskCall(4); // 0x116 TaskCall
	func_323(var_147_bool, var_148_object, var_149_float); // 0x117 Call
	TaskReturn(); // 0x118 TaskReturn
	var_213_bool = var_150_bool == 0; // 0x11a Not
	if(var_213_bool == 0) goto Label_285; // 0x11b JumpB
	goto Label_288; // 0x11c Jump
	
Label_285:
	Face(var_0_bool); // 0x11d Func
}


func_323(var_147_bool, var_148_object, var_149_float)
{
	var_152_bool = 0; var_153_bool = 0; // 0x143 PushV
	func_342(); // 0x145 Call
	var_160_bool = 0; var_161_object = Obj(); var_162_float = 0; var_163_float = 0; var_164_bool = 0; var_165_bool = 0; // 0x147 PushV
	var_161_object = var_148_object; // 0x148 Mov
	var_166_float = 0.9; // 0x149 PushF
	var_162_float = var_149_float * var_166_float; // 0x14a Mult2
	var_163_float = 5000; // 0x14b MovI
	var_164_bool = 1; // 0x14c MovB
	var_165_bool = 1; // 0x14d MovB
	func_399(var_152_bool, var_153_bool, var_160_bool, var_161_object, var_162_float, var_163_float, var_164_bool, var_165_bool); // 0x14e Call
	var_153_bool = var_160_bool; // 0x14f Mov
	func_352(); // 0x152 Call
	var_147_bool = var_153_bool; // 0x154 Mov
	return 2; // 0x155 Return
}


func_969(var_123_float, var_124_cvector, var_125_cvector)
{
	var_126_int = var_124_cvector | var_125_cvector; // 0x3ca Or
	var_127_int = var_124_cvector | var_124_cvector; // 0x3cb Or
	var_128_int = var_125_cvector | var_125_cvector; // 0x3cc Or
	var_129_float = var_127_int * var_128_int; // 0x3cd Mult
	var_130_float = sqrt(var_129_float); // 0x3ce Sqrt
	var_123_float = var_126_int / var_126_int; // 0x3cf Div2
	return 0; // 0x3d0 Return
}


func_591()
{
	var_10_int = 110; // 0x24f PushI
	KillTimer(var_10_int); // 0x250 Func
	func_753(var_9_object); // 0x253 Call
	return 0; // 0x255 Return
}


func_977(var_69_bool, var_70_object)
{
	var_71_bool = 0; var_72_bool = 0; // 0x3d1 PushV
	var_73_bool = 0; var_74_object = Obj(); // 0x3d2 PushV
	var_74_object = var_70_object; // 0x3d3 Mov
	func_913(var_73_bool, var_74_object); // 0x3d4 Call
	var_75_bool = var_73_bool == 0; // 0x3d6 Not
	if(var_75_bool == 0) goto Label_986; // 0x3d7 JumpB
	var_69_bool = 0; // 0x3d8 MovB
	return 2; // 0x3d9 Return
	
Label_986:
	IsPlayerActor(var_70_object, var_72_bool); // 0x3da Func
	var_69_bool = var_72_bool; // 0x3dc Mov
	return 2; // 0x3dd Return
}


func_342()
{
	var_13_float = 0; var_14_float = 0; // 0x156 PushV
	var_15_int = 10; // 0x157 PushI
	rand(var_14_float, var_15_int); // 0x158 Func
	var_16_int = 111; // 0x15a PushI
	var_17_int = 10; // 0x15b PushI
	var_18_int = var_14_float + var_17_int; // 0x15c Add
	SetTimer(var_16_int, var_18_int); // 0x15d Func
	return 2; // 0x15f Return
}


func_990(var_10_bool, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj(); // 0x3df PushV
	var_13_object = var_11_object; // 0x3e0 Mov
	func_977(var_12_bool, var_13_object); // 0x3e1 Call
	var_10_bool = var_12_bool; // 0x3e2 Mov
	return 0; // 0x3e4 Return
}


func_607(var_94_cvector, var_95_float)
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_float = 0; var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_float = 0; // 0x25f PushV
	GetPosition(var_102_cvector); // 0x260 Func
	GetPosition(var_103_cvector); // 0x262 TObjFunc
	GetDirection(var_104_cvector); // 0x264 Func
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); // 0x266 PushV
	var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); // 0x267 PushV
	var_111_cvector = var_102_cvector - var_103_cvector; // 0x268 Sub2
	func_937(var_110_cvector, var_111_cvector); // 0x269 Call
	var_117_float = 0.75; // 0x26b PushF
	var_118_float = var_104_cvector * var_117_float; // 0x26c Mult
	var_109_cvector = var_110_cvector + var_118_float; // 0x26d Add2
	func_937(var_108_cvector, var_109_cvector); // 0x26e Call
	var_105_cvector = var_108_cvector; // 0x26f Mov
	var_119_int = 32; // 0x271 PushI
	var_120_float = 7000.0; // 0x272 PushF
	FindLongestDir(var_106_cvector, var_107_float, var_105_cvector, var_95_float, var_119_int, var_120_float); // 0x273 Func
	var_121_int = 100; // 0x275 PushI
	var_107_float = var_107_float - var_121_int; // 0x276 Sub2
	var_122_int = 0; // 0x277 PushI
	var_123_bool = var_107_float < var_122_int; // 0x278 LT
	if(var_123_bool == 0) goto Label_635; // 0x279 JumpB
	var_107_float = 0; // 0x27a MovI
	
Label_635:
	var_94_cvector = var_106_cvector * var_107_float; // 0x27b Mult2
	return 12; // 0x27c Return
}


func_352()
{
	var_10_int = 111; // 0x160 PushI
	KillTimer(var_10_int); // 0x161 Func
	return 0; // 0x163 Return
}


func_997(var_51_object)
{
	var_52_object = Obj(); // 0x3e6 PushV
	var_52_object = var_51_object; // 0x3e7 Mov
	TaskCall(3); // 0x3e8 TaskCall
	func_191(var_51_object, var_53_object, var_52_object); // 0x3e9 Call
	TaskReturn(); // 0x3ea TaskReturn
	ResetAAS(); // 0x3ec Func
	return 0; // 0x3ee Return
}


func_872(var_40_bool)
{
	var_42_bool = 0; var_43_bool = 0; // 0x368 PushV
	IsDead(var_43_bool); // 0x369 ObjFunc
	var_40_bool = var_43_bool; // 0x36b Mov
	return 2; // 0x36c Return
}


func_877(var_29_bool, var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0x36d PushV
	var_35_bool = var_30_object == 0; // 0x36e NullEq
	if(var_35_bool == 0) goto Label_882; // 0x36f JumpB
	var_29_bool = 0; // 0x370 MovB
	return 4; // 0x371 Return
	
Label_882:
	var_36_bool = 0; // 0x372 PushV
	var_36_bool = 0; // 0x373 MovB
	var_37_string = "IsDead"; // 0x374 PushS
	var_38_int = 1; // 0x375 PushI
	var_39_bool = IsFuncExist(var_30_object, var_37_string, var_38_int); // 0x376 FuncExist
	if(var_39_bool == 0) goto Label_894; // 0x377 JumpB
	var_40_bool = 0; var_41_object = Obj(); // 0x378 PushV
	var_41_object = var_30_object; // 0x379 Mov
	func_872(var_41_object); // 0x37a Call
	if(var_40_bool == 0) goto Label_894; // 0x37c JumpB
	var_36_bool = 1; // 0x37d MovB
	
Label_894:
	if(var_36_bool == 0) goto Label_897; // 0x37e JumpB
	var_29_bool = 0; // 0x37f MovB
	return 4; // 0x380 Return
	
Label_897:
	GetScene(var_33_object); // 0x381 Func
	var_44_bool = var_33_object == 0; // 0x383 NullEq
	if(var_44_bool == 0) goto Label_903; // 0x384 JumpB
	var_29_bool = 0; // 0x385 MovB
	return 4; // 0x386 Return
	
Label_903:
	GetScene(var_34_object); // 0x387 ObjFunc
	var_45_bool = var_33_object != var_34_object; // 0x389 Neq
	if(var_45_bool == 0) goto Label_909; // 0x38a JumpB
	var_29_bool = 0; // 0x38b MovB
	return 4; // 0x38c Return
	
Label_909:
	var_29_bool = 1; // 0x38d MovB
	return 4; // 0x38e Return
}


func_1007(var_45_object)
{
	var_46_object = Obj(); // 0x3f0 PushV
	var_46_object = var_45_object; // 0x3f1 Mov
	TaskCall(3); // 0x3f2 TaskCall
	func_191(var_45_object, var_47_object, var_46_object); // 0x3f3 Call
	TaskReturn(); // 0x3f4 TaskReturn
	ResetAAS(); // 0x3f6 Func
	return 0; // 0x3f8 Return
}


func_753(var_2_object)
{
	Stop(); // 0x2f1 Func
	var_11_int = 120; // 0x2f3 PushI
	KillTimer(var_11_int); // 0x2f4 Func
	var_2_object = 1; // 0x2f6 TMovB
	return 0; // 0x2f7 Return
}


func_372()
{
	func_352(); // 0x175 Call
	func_505(var_9_object); // 0x178 Call
	return 0; // 0x17a Return
}


func_760(var_0_bool, var_112_bool)
{
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); // 0x2f8 PushV
	GetDirection(var_115_cvector); // 0x2f9 Func
	var_117_cvector = CVector(0,0,0); var_118_object = Obj(); // 0x2fb PushV
	var_118_object = var_0_bool; // 0x2fc MovT
	func_789(var_118_object); // 0x2fd Call
	var_116_cvector = var_117_cvector; // 0x2fe Mov
	var_123_float = 0; var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); // 0x300 PushV
	var_124_cvector = var_115_cvector; // 0x301 Mov
	var_125_cvector = var_116_cvector; // 0x302 Mov
	func_969(var_123_float, var_124_cvector, var_125_cvector); // 0x303 Call
	var_131_float = -0.34202; // 0x305 PushF
	var_112_bool = var_123_float >= var_131_float; // 0x306 GE2
	return 4; // 0x307 Return
}


func_505(var_0_bool)
{
	var_0_bool = 1; // 0x1f9 TMovB
	var_11_int = 0; // 0x1fa PushI
	KillTimer(var_11_int); // 0x1fb Func
	Stop(); // 0x1fd Func
	return 0; // 0x1ff Return
}


func_1017()
{
	TaskCall(2); // 0x3fb TaskCall
	func_146(); // 0x3fc Call
	TaskReturn(); // 0x3fd TaskReturn
	return 0; // 0x3ff Return
}


func_127(var_0_bool, var_1_bool)
{
	var_0_bool = 1; // 0x7f TMovB
	var_1_bool = 0; // 0x80 TMovB
	Stop(); // 0x81 Func
	StopGroup0(); // 0x83 Func
	return 0; // 0x85 Return
}


