task_0_event_7(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_cvector, var_10_int, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_float = 0; // 0x31 PushV
	var_26_int = 10; // 0x32 PushI
	var_27_bool = var_19_bool == var_26_int; // 0x33 Eq
	if(var_27_bool == 0) goto Label_62; // 0x34 JumpB
	var_28_int = 0; // 0x35 PushV
	func_1412(var_28_int); // 0x36 NEW_2
	var_36_int = GlobalVars[0]; // 0x38 PushGE
	var_37_bool = var_28_int != var_36_int; // 0x39 Neq
	if(var_37_bool == 0) goto Label_62; // 0x3a JumpB
	func_222(var_25_float); // 0x3c NEW_2
	
Label_62:
	var_39_int = 123; // 0x3e PushI
	var_40_bool = var_19_bool == var_39_int; // 0x3f Eq
	if(var_40_bool == 0) goto Label_93; // 0x40 JumpB
	GetPosition(var_23_cvector); // 0x41 Func
	var_24_cvector = var_23_cvector - var_2_cvector; // 0x43 Sub2
	var_25_float = var_24_cvector | var_24_cvector; // 0x44 Or2
	var_41_bool = 0; // 0x45 PushV
	var_41_bool = 1; // 0x46 MovB
	var_42_float = 10000.0; // 0x47 PushF
	var_43_bool = var_25_float > var_42_float; // 0x48 GT
	if(var_43_bool == 0) goto Label_77; // 0x49 JumpB
	var_44_bool = var_4_int != var_3_int; // 0x4a Neq
	if(var_44_bool == 0) goto Label_77; // 0x4b JumpB
	var_41_bool = 0; // 0x4c MovB
	
Label_77:
	if(var_41_bool == 0) goto Label_81; // 0x4d JumpB
	var_2_cvector = var_23_cvector; // 0x4e TMov
	var_4_int = var_3_int; // 0x4f TMovT
	return 6; // 0x50 Return
	
Label_81:
	var_45_int = 1; // 0x51 PushI
	var_5_int = var_5_int + var_45_int; // 0x52 Add2
	var_46_int = 7; // 0x53 PushI
	var_47_bool = var_5_int > var_46_int; // 0x54 GT
	if(var_47_bool == 0) goto Label_93; // 0x55 JumpB
	var_5_int = 0; // 0x56 TMovI
	var_48_string = "On Actor Stuck"; // 0x57 PushS
	Trace(var_48_string); // 0x58 Func
	func_222(var_25_float); // 0x5b NEW_2
	
Label_93:
	var_49_int = 0; // 0x5d PushV
	var_49_int = var_19_bool; // 0x5e Mov
	func_200(var_24_cvector, var_25_float, var_49_int); // 0x5f NEW_2
	return 6; // 0x61 Return
}


task_0_event_10(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_int, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	RequestClearPath(var_19_bool); // 0xdb Func
	return 0; // 0xdd Return
}


task_0_event_41(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_int, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	func_222(var_19_bool); // 0xe7 NEW_2
	var_21_object = Obj(); // 0xe9 PushV
	var_21_object = var_19_bool; // 0xea Mov
	func_1725(); // 0xeb NEW_2
	return 0; // 0xed Return
}


task_1_event_7(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_float = 0; // 0x117 PushV
	var_26_int = 123; // 0x118 PushI
	var_27_bool = var_19_bool == var_26_int; // 0x119 Eq
	if(var_27_bool == 0) goto Label_311; // 0x11a JumpB
	GetPosition(var_23_cvector); // 0x11b Func
	var_24_cvector = var_23_cvector - var_2_cvector; // 0x11d Sub2
	var_25_float = var_24_cvector | var_24_cvector; // 0x11e Or2
	var_28_bool = 0; // 0x11f PushV
	var_28_bool = 1; // 0x120 MovB
	var_29_float = 10000.0; // 0x121 PushF
	var_30_bool = var_25_float > var_29_float; // 0x122 GT
	if(var_30_bool == 0) goto Label_295; // 0x123 JumpB
	var_31_bool = var_4_int != var_3_int; // 0x124 Neq
	if(var_31_bool == 0) goto Label_295; // 0x125 JumpB
	var_28_bool = 0; // 0x126 MovB
	
Label_295:
	if(var_28_bool == 0) goto Label_299; // 0x127 JumpB
	var_2_cvector = var_23_cvector; // 0x128 TMov
	var_4_int = var_3_int; // 0x129 TMovT
	return 6; // 0x12a Return
	
Label_299:
	var_32_int = 1; // 0x12b PushI
	var_5_int = var_5_int + var_32_int; // 0x12c Add2
	var_33_int = 7; // 0x12d PushI
	var_34_bool = var_5_int > var_33_int; // 0x12e GT
	if(var_34_bool == 0) goto Label_311; // 0x12f JumpB
	var_5_int = 0; // 0x130 TMovI
	var_35_string = "On Actor Stuck 1"; // 0x131 PushS
	Trace(var_35_string); // 0x132 Func
	func_464(var_25_float); // 0x135 NEW_2
	
Label_311:
	var_37_int = 0; // 0x137 PushV
	var_37_int = var_19_bool; // 0x138 Mov
	func_442(var_24_cvector, var_25_float, var_37_int); // 0x139 NEW_2
	return 6; // 0x13b Return
}


task_1_event_28(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_bool = 0; var_24_cvector = CVector(0,0,0); // 0x13c PushV
	var_25_string = "OnActorStuck"; // 0x13d PushS
	Trace(var_25_string); // 0x13e Func
	func_464(var_24_cvector); // 0x141 NEW_2
	GetPosition(var_22_cvector); // 0x143 Func
	var_27_float = 0.3; // 0x145 PushF
	GetRandomPFPointInCircle(var_24_cvector, var_22_cvector, var_27_float, var_23_bool); // 0x146 Func
	var_28_bool = var_23_bool; // 0x148 Push
	if(var_28_bool == 0) goto Label_336; // 0x149 JumpB
	var_29_string = "Random point found"; // 0x14a PushS
	Trace(var_29_string); // 0x14b Func
	SetPosition(var_24_cvector); // 0x14d Func
	goto Label_339; // 0x14f Jump
	
Label_339:
	return 6; // 0x153 Return
	
Label_336:
	var_30_string = "Random point not found"; // 0x150 PushS
	Trace(var_30_string); // 0x151 Func
}


task_1_event_10(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_object, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	RequestClearPath(var_19_bool); // 0x1cd Func
	return 0; // 0x1cf Return
}


task_1_event_41(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_object, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	func_464(var_19_bool); // 0x1d9 NEW_2
	var_21_object = Obj(); // 0x1db PushV
	var_21_object = var_19_bool; // 0x1dc Mov
	func_1725(); // 0x1dd NEW_2
	return 0; // 0x1df Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	RequestClearPath(var_19_bool); // 0x234 Func
	return 0; // 0x236 Return
}


task_2_event_28(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	Stop(); // 0x237 Func
	return 0; // 0x239 Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	func_570(var_18_string, var_19_bool); // 0x243 NEW_2
	var_20_object = Obj(); // 0x245 PushV
	var_20_object = var_19_bool; // 0x246 Mov
	func_1725(); // 0x247 NEW_2
	return 0; // 0x249 Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_int, var_20_int)
{
	var_21_int = 1; // 0x357 PushI
	if(var_21_int == 0) goto Label_1220; // 0x358 JumpB
	func_1623(); // 0x35a NEW_2
	var_23_int = 10646; // 0x35c PushI
	var_24_bool = var_20_int == var_23_int; // 0x35d Eq
	if(var_24_bool == 0) goto Label_873; // 0x35e JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0x35f PushV
	var_25_object = var_1_object; // 0x360 MovT
	var_26_object = var_0_bool; // 0x361 MovT
	func_1739(var_26_object); // 0x362 NEW_2
	var_57_object = Obj(); var_58_object = Obj(); // 0x364 PushV
	var_57_object = var_1_object; // 0x365 MovT
	var_58_object = var_0_bool; // 0x366 MovT
	func_1727(); // 0x367 NEW_2
	
Label_873:
	var_61_int = 10650; // 0x369 PushI
	var_62_bool = var_20_int == var_61_int; // 0x36a Eq
	if(var_62_bool == 0) goto Label_886; // 0x36b JumpB
	var_63_object = Obj(); var_64_object = Obj(); // 0x36c PushV
	var_63_object = var_1_object; // 0x36d MovT
	var_64_object = var_0_bool; // 0x36e MovT
	func_1739(var_64_object); // 0x36f NEW_2
	var_65_object = Obj(); var_66_object = Obj(); // 0x371 PushV
	var_65_object = var_1_object; // 0x372 MovT
	var_66_object = var_0_bool; // 0x373 MovT
	func_1727(); // 0x374 NEW_2
	
Label_886:
	var_67_int = 10648; // 0x376 PushI
	var_68_bool = var_20_int == var_67_int; // 0x377 Eq
	if(var_68_bool == 0) goto Label_899; // 0x378 JumpB
	var_69_object = Obj(); var_70_object = Obj(); // 0x379 PushV
	var_69_object = var_1_object; // 0x37a MovT
	var_70_object = var_0_bool; // 0x37b MovT
	func_1733(); // 0x37c NEW_2
	var_73_object = Obj(); var_74_object = Obj(); // 0x37e PushV
	var_73_object = var_1_object; // 0x37f MovT
	var_74_object = var_0_bool; // 0x380 MovT
	func_1770(); // 0x381 NEW_2
	
Label_899:
	var_76_int = 10649; // 0x383 PushI
	var_77_bool = var_20_int == var_76_int; // 0x384 Eq
	if(var_77_bool == 0) goto Label_912; // 0x385 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x386 PushV
	var_78_object = var_1_object; // 0x387 MovT
	var_79_object = var_0_bool; // 0x388 MovT
	func_1733(); // 0x389 NEW_2
	var_80_object = Obj(); var_81_object = Obj(); // 0x38b PushV
	var_80_object = var_1_object; // 0x38c MovT
	var_81_object = var_0_bool; // 0x38d MovT
	func_1775(); // 0x38e NEW_2
	
Label_912:
	var_83_int = 10669; // 0x390 PushI
	var_84_bool = var_20_int == var_83_int; // 0x391 Eq
	if(var_84_bool == 0) goto Label_925; // 0x392 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x393 PushV
	var_85_object = var_1_object; // 0x394 MovT
	var_86_object = var_0_bool; // 0x395 MovT
	func_1759(var_86_object); // 0x396 NEW_2
	var_91_object = Obj(); var_92_object = Obj(); // 0x398 PushV
	var_91_object = var_1_object; // 0x399 MovT
	var_92_object = var_0_bool; // 0x39a MovT
	func_1727(); // 0x39b NEW_2
	
Label_925:
	var_93_int = 10641; // 0x39d PushI
	var_94_bool = var_19_int == var_93_int; // 0x39e Eq
	if(var_94_bool == 0) goto Label_973; // 0x39f JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x3a0 PushV
	var_96_object = var_1_object; // 0x3a1 MovT
	func_1780(var_96_object); // 0x3a2 NEW_2
	if(var_95_bool == 0) goto Label_953; // 0x3a4 JumpB
	var_103_string = ""; // 0x3a5 PushV
	var_103_string = "Neutral"; // 0x3a6 MovS
	func_832(var_20_int, var_103_string); // 0x3a7 NEW_2
	var_120_int = 509667; // 0x3a9 PushI
	SetMessage(var_120_int); // 0x3aa TObjFunc
	ClearReplies(); // 0x3ac TObjFunc
	var_121_int = 509668; // 0x3ae PushI
	var_122_int = 10643; // 0x3af PushI
	var_123_int = 10642; // 0x3b0 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x3b1 TObjFunc
	var_124_int = 509677; // 0x3b3 PushI
	var_125_int = 10653; // 0x3b4 PushI
	var_126_int = 10652; // 0x3b5 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x3b6 TObjFunc
	return 0; // 0x3b8 Return
	
Label_953:
	var_127_string = ""; // 0x3b9 PushV
	var_127_string = "Neutral"; // 0x3ba MovS
	func_832(var_20_int, var_127_string); // 0x3bb NEW_2
	var_128_int = 509681; // 0x3bd PushI
	SetMessage(var_128_int); // 0x3be TObjFunc
	ClearReplies(); // 0x3c0 TObjFunc
	var_129_int = 509682; // 0x3c2 PushI
	var_130_int = 10660; // 0x3c3 PushI
	var_131_int = 10659; // 0x3c4 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x3c5 TObjFunc
	var_132_int = 509699; // 0x3c7 PushI
	var_133_int = -1; // 0x3c8 PushI
	var_134_int = 10678; // 0x3c9 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x3ca TObjFunc
	return 0; // 0x3cc Return
	
Label_973:
	var_135_int = 10660; // 0x3cd PushI
	var_136_bool = var_19_int == var_135_int; // 0x3ce Eq
	if(var_136_bool == 0) goto Label_1001; // 0x3cf JumpB
	var_137_string = ""; // 0x3d0 PushV
	var_137_string = "Neutral"; // 0x3d1 MovS
	func_832(var_20_int, var_137_string); // 0x3d2 NEW_2
	var_138_int = 509683; // 0x3d4 PushI
	SetMessage(var_138_int); // 0x3d5 TObjFunc
	ClearReplies(); // 0x3d7 TObjFunc
	var_139_int = 509684; // 0x3d9 PushI
	var_140_int = 10662; // 0x3da PushI
	var_141_int = 10661; // 0x3db PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x3dc TObjFunc
	var_142_int = 509694; // 0x3de PushI
	var_143_int = 10672; // 0x3df PushI
	var_144_int = 10671; // 0x3e0 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x3e1 TObjFunc
	var_145_int = 509698; // 0x3e3 PushI
	var_146_int = 10662; // 0x3e4 PushI
	var_147_int = 10676; // 0x3e5 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x3e6 TObjFunc
	return 0; // 0x3e8 Return
	
Label_1001:
	var_148_int = 10672; // 0x3e9 PushI
	var_149_bool = var_19_int == var_148_int; // 0x3ea Eq
	if(var_149_bool == 0) goto Label_1024; // 0x3eb JumpB
	var_150_string = ""; // 0x3ec PushV
	var_150_string = "Neutral"; // 0x3ed MovS
	func_832(var_20_int, var_150_string); // 0x3ee NEW_2
	var_151_int = 509695; // 0x3f0 PushI
	SetMessage(var_151_int); // 0x3f1 TObjFunc
	ClearReplies(); // 0x3f3 TObjFunc
	var_152_int = 509696; // 0x3f5 PushI
	var_153_int = 10665; // 0x3f6 PushI
	var_154_int = 10673; // 0x3f7 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x3f8 TObjFunc
	var_155_int = 509697; // 0x3fa PushI
	var_156_int = -1; // 0x3fb PushI
	var_157_int = 10675; // 0x3fc PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x3fd TObjFunc
	return 0; // 0x3ff Return
	
Label_1024:
	var_158_int = 10662; // 0x400 PushI
	var_159_bool = var_19_int == var_158_int; // 0x401 Eq
	if(var_159_bool == 0) goto Label_1047; // 0x402 JumpB
	var_160_string = ""; // 0x403 PushV
	var_160_string = "Neutral"; // 0x404 MovS
	func_832(var_20_int, var_160_string); // 0x405 NEW_2
	var_161_int = 509685; // 0x407 PushI
	SetMessage(var_161_int); // 0x408 TObjFunc
	ClearReplies(); // 0x40a TObjFunc
	var_162_int = 509687; // 0x40c PushI
	var_163_int = 10665; // 0x40d PushI
	var_164_int = 10664; // 0x40e PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x40f TObjFunc
	var_165_int = 509686; // 0x411 PushI
	var_166_int = -1; // 0x412 PushI
	var_167_int = 10663; // 0x413 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x414 TObjFunc
	return 0; // 0x416 Return
	
Label_1047:
	var_168_int = 10665; // 0x417 PushI
	var_169_bool = var_19_int == var_168_int; // 0x418 Eq
	if(var_169_bool == 0) goto Label_1070; // 0x419 JumpB
	var_170_string = ""; // 0x41a PushV
	var_170_string = "Neutral"; // 0x41b MovS
	func_832(var_20_int, var_170_string); // 0x41c NEW_2
	var_171_int = 509688; // 0x41e PushI
	SetMessage(var_171_int); // 0x41f TObjFunc
	ClearReplies(); // 0x421 TObjFunc
	var_172_int = 509689; // 0x423 PushI
	var_173_int = -1; // 0x424 PushI
	var_174_int = 10666; // 0x425 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x426 TObjFunc
	var_175_int = 509690; // 0x428 PushI
	var_176_int = 10668; // 0x429 PushI
	var_177_int = 10667; // 0x42a PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x42b TObjFunc
	return 0; // 0x42d Return
	
Label_1070:
	var_178_int = 10668; // 0x42e PushI
	var_179_bool = var_19_int == var_178_int; // 0x42f Eq
	if(var_179_bool == 0) goto Label_1098; // 0x430 JumpB
	var_180_string = ""; // 0x431 PushV
	var_180_string = "Neutral"; // 0x432 MovS
	func_832(var_20_int, var_180_string); // 0x433 NEW_2
	var_181_int = 509691; // 0x435 PushI
	SetMessage(var_181_int); // 0x436 TObjFunc
	ClearReplies(); // 0x438 TObjFunc
	var_182_int = 509692; // 0x43a PushI
	var_183_int = -1; // 0x43b PushI
	var_184_int = 10669; // 0x43c PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x43d TObjFunc
	var_185_int = 509693; // 0x43f PushI
	var_186_int = -1; // 0x440 PushI
	var_187_int = 10670; // 0x441 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x442 TObjFunc
	var_188_int = 538762; // 0x444 PushI
	var_189_int = -1; // 0x445 PushI
	var_190_int = 40678; // 0x446 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x447 TObjFunc
	return 0; // 0x449 Return
	
Label_1098:
	var_191_int = 10653; // 0x44a PushI
	var_192_bool = var_19_int == var_191_int; // 0x44b Eq
	if(var_192_bool == 0) goto Label_1121; // 0x44c JumpB
	var_193_string = ""; // 0x44d PushV
	var_193_string = "Neutral"; // 0x44e MovS
	func_832(var_20_int, var_193_string); // 0x44f NEW_2
	var_194_int = 509678; // 0x451 PushI
	SetMessage(var_194_int); // 0x452 TObjFunc
	ClearReplies(); // 0x454 TObjFunc
	var_195_int = 509679; // 0x456 PushI
	var_196_int = 10643; // 0x457 PushI
	var_197_int = 10654; // 0x458 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x459 TObjFunc
	var_198_int = 509680; // 0x45b PushI
	var_199_int = 10643; // 0x45c PushI
	var_200_int = 10656; // 0x45d PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x45e TObjFunc
	return 0; // 0x460 Return
	
Label_1121:
	var_201_int = 10643; // 0x461 PushI
	var_202_bool = var_19_int == var_201_int; // 0x462 Eq
	if(var_202_bool == 0) goto Label_1139; // 0x463 JumpB
	var_203_string = ""; // 0x464 PushV
	var_203_string = "Neutral"; // 0x465 MovS
	func_832(var_20_int, var_203_string); // 0x466 NEW_2
	var_204_int = 509669; // 0x468 PushI
	SetMessage(var_204_int); // 0x469 TObjFunc
	ClearReplies(); // 0x46b TObjFunc
	var_205_int = 509670; // 0x46d PushI
	var_206_int = 10645; // 0x46e PushI
	var_207_int = 10644; // 0x46f PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x470 TObjFunc
	return 0; // 0x472 Return
	
Label_1139:
	var_208_int = 10645; // 0x473 PushI
	var_209_bool = var_19_int == var_208_int; // 0x474 Eq
	if(var_209_bool == 0) goto Label_1162; // 0x475 JumpB
	var_210_string = ""; // 0x476 PushV
	var_210_string = "Neutral"; // 0x477 MovS
	func_832(var_20_int, var_210_string); // 0x478 NEW_2
	var_211_int = 509671; // 0x47a PushI
	SetMessage(var_211_int); // 0x47b TObjFunc
	ClearReplies(); // 0x47d TObjFunc
	var_212_int = 509672; // 0x47f PushI
	var_213_int = 43766; // 0x480 PushI
	var_214_int = 10646; // 0x481 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x482 TObjFunc
	var_215_int = 509676; // 0x484 PushI
	var_216_int = 10647; // 0x485 PushI
	var_217_int = 10650; // 0x486 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x487 TObjFunc
	return 0; // 0x489 Return
	
Label_1162:
	var_218_int = 10647; // 0x48a PushI
	var_219_bool = var_19_int == var_218_int; // 0x48b Eq
	if(var_219_bool == 0) goto Label_1185; // 0x48c JumpB
	var_220_string = ""; // 0x48d PushV
	var_220_string = "Neutral"; // 0x48e MovS
	func_832(var_20_int, var_220_string); // 0x48f NEW_2
	var_221_int = 509673; // 0x491 PushI
	SetMessage(var_221_int); // 0x492 TObjFunc
	ClearReplies(); // 0x494 TObjFunc
	var_222_int = 541600; // 0x496 PushI
	var_223_int = 43766; // 0x497 PushI
	var_224_int = 43765; // 0x498 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x499 TObjFunc
	var_225_int = 541602; // 0x49b PushI
	var_226_int = 43766; // 0x49c PushI
	var_227_int = 43767; // 0x49d PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x49e TObjFunc
	return 0; // 0x4a0 Return
	
Label_1185:
	var_228_int = 43766; // 0x4a1 PushI
	var_229_bool = var_19_int == var_228_int; // 0x4a2 Eq
	if(var_229_bool == 0) goto Label_1208; // 0x4a3 JumpB
	var_230_string = ""; // 0x4a4 PushV
	var_230_string = "Neutral"; // 0x4a5 MovS
	func_832(var_20_int, var_230_string); // 0x4a6 NEW_2
	var_231_int = 541601; // 0x4a8 PushI
	SetMessage(var_231_int); // 0x4a9 TObjFunc
	ClearReplies(); // 0x4ab TObjFunc
	var_232_int = 509674; // 0x4ad PushI
	var_233_int = -1; // 0x4ae PushI
	var_234_int = 10648; // 0x4af PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x4b0 TObjFunc
	var_235_int = 509675; // 0x4b2 PushI
	var_236_int = -1; // 0x4b3 PushI
	var_237_int = 10649; // 0x4b4 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x4b5 TObjFunc
	return 0; // 0x4b7 Return
	
Label_1208:
	var_3_int = 1; // 0x4b8 TMovB
	var_238_bool = 0; // 0x4b9 PushV
	func_1817(var_238_bool); // 0x4ba NEW_2
	if(var_238_bool == 0) goto Label_1216; // 0x4bc JumpB
	lshStopAnimation(); // 0x4bd Func
	goto Label_1218; // 0x4bf Jump
	
Label_1218:
	return 0; // 0x4c2 Return
	
Label_1216:
	StopAnimation(); // 0x4c0 Func
	
Label_1220:
	return 0; // 0x4c4 Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_object)
{
	var_20_int = 0; var_21_int = 0; // 0x4dc PushV
	func_1380(); // 0x4de NEW_2
	var_22_int = 0; var_23_object = Obj(); // 0x4e0 PushV
	var_23_object = var_19_object; // 0x4e1 Mov
	func_1221(var_21_int, var_22_int, var_23_object); // 0x4e2 NEW_2
	var_21_int = var_22_int; // 0x4e3 Mov
	var_170_int = 0; // 0x4e5 PushI
	var_171_bool = var_21_int == var_170_int; // 0x4e6 Eq
	if(var_171_bool == 0) goto Label_1285; // 0x4e7 JumpB
	var_172_bool = 0; var_173_string = ""; var_174_string = ""; // 0x4e8 PushV
	var_173_string = "quest_d4_01"; // 0x4e9 MovS
	var_174_string = "key1_done"; // 0x4ea MovS
	func_1689(var_172_bool, var_173_string, var_174_string); // 0x4eb NEW_2
	var_178_object = Obj(); // 0x4ed PushV
	var_178_object = var_19_object; // 0x4ee Mov
	TaskCall(0); // 0x4ef TaskCall
	func_0(var_181_cvector, var_182_int, var_183_int, var_184_int, var_178_object); // 0x4f0 NEW_2
	TaskReturn(); // 0x4f1 TaskReturn
	var_289_object = Obj(); // 0x4f3 PushV
	var_289_object = var_19_object; // 0x4f4 Mov
	TaskCall(1); // 0x4f5 TaskCall
	func_249(var_292_cvector, var_293_int, var_294_int, var_295_int, var_289_object); // 0x4f6 NEW_2
	TaskReturn(); // 0x4f7 TaskReturn
	var_353_object = Obj(); // 0x4f9 PushV
	var_353_object = var_19_object; // 0x4fa Mov
	TaskCall(7); // 0x4fb TaskCall
	func_1393(var_353_object); // 0x4fc NEW_2
	TaskReturn(); // 0x4fd TaskReturn
	TaskCall(2); // 0x500 TaskCall
	func_491(); // 0x501 NEW_2
	TaskReturn(); // 0x502 TaskReturn
	goto Label_1298; // 0x504 Jump
	
Label_1298:
	return 2; // 0x512 Return
	
Label_1285:
	var_446_int = 1; // 0x505 PushI
	var_447_bool = var_21_int == var_446_int; // 0x506 Eq
	if(var_447_bool == 0) goto Label_1298; // 0x507 JumpB
	var_448_bool = 0; var_449_string = ""; var_450_string = ""; // 0x508 PushV
	var_449_string = "quest_d4_01"; // 0x509 MovS
	var_450_string = "key1_done"; // 0x50a MovS
	func_1689(var_448_bool, var_449_string, var_450_string); // 0x50b NEW_2
	TaskCall(2); // 0x50e TaskCall
	func_491(); // 0x50f NEW_2
	TaskReturn(); // 0x510 TaskReturn
}


event_41(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_object)
{
	return 0; // 0x6be Return
}


main(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = GlobalVars[0]; // 0x4ce PushGE
	var_20_int = 0; // 0x4cf PushV
	func_1412(var_20_int); // 0x4d0 NEW_2
	var_19_int = var_20_int; // 0x4d1 Mov
	GlobalVars[0] = var_19_int; // 0x4d3 PopGE
	
Label_1236:
	var_28_int = 3; // 0x4d4 PushI
	Sleep(var_28_int); // 0x4d5 Func
	func_1299(); // 0x4d8 NEW_2
	goto Label_1236; // 0x4da Jump
}


func_1792(var_87_int)
{
	var_88_int = 0; var_89_int = 0; // 0x700 PushV
	var_90_string = "branch"; // 0x701 PushS
	GetVariable(var_90_string, var_89_int); // 0x702 Func
	var_91_int = 0; // 0x704 PushI
	var_92_bool = var_89_int == var_91_int; // 0x705 Eq
	if(var_92_bool == 0) goto Label_1802; // 0x706 JumpB
	var_87_int = 1; // 0x707 MovI
	return 2; // 0x708 Return
	
Label_1802:
	var_93_int = 1; // 0x70a PushI
	var_94_bool = var_89_int == var_93_int; // 0x70b Eq
	if(var_94_bool == 0) goto Label_1807; // 0x70c JumpB
	var_87_int = 2; // 0x70d MovI
	return 2; // 0x70e Return
	
Label_1807:
	var_87_int = 3; // 0x70f MovI
	return 2; // 0x710 Return
}


func_0(var_3_int, var_4_int, var_5_int, var_178_object, var_184_int)
{
	GetPosition(var_184_int); // 0x1 Func
	var_4_int = 0; // 0x3 TMovI
	var_5_int = 0; // 0x4 TMovI
	var_185_int = 123; // 0x5 PushI
	var_186_float = 0.5; // 0x6 PushF
	SetTimer(var_185_int, var_186_float); // 0x7 Func
	var_3_int = 0; // 0x9 TMovI
	var_187_int = 10; // 0xa PushI
	var_188_int = 1; // 0xb PushI
	SetTimer(var_187_int, var_188_int); // 0xc Func
	
Label_14:
	var_189_bool = 0; var_190_object = Obj(); var_191_float = 0; var_192_float = 0; var_193_bool = 0; var_194_bool = 0; // 0xe PushV
	var_190_object = var_178_object; // 0xf Mov
	var_191_float = 250; // 0x10 MovI
	var_192_float = 3000; // 0x11 MovI
	var_193_bool = 1; // 0x12 MovB
	var_194_bool = 1; // 0x13 MovB
	func_98(var_184_int, var_178_object, var_189_bool, var_190_object, var_191_float, var_192_float, var_193_bool, var_194_bool); // 0x14 NEW_2
	var_272_int = 1; // 0x16 PushI
	var_3_int = var_3_int + var_272_int; // 0x17 Add2
	var_273_int = 0; // 0x18 PushV
	func_1412(var_273_int); // 0x19 NEW_2
	var_281_int = GlobalVars[0]; // 0x1b PushGE
	var_282_bool = var_273_int != var_281_int; // 0x1c Neq
	if(var_282_bool == 0) goto Label_31; // 0x1d JumpB
	goto Label_42; // 0x1e Jump
	
Label_42:
	var_283_int = 10; // 0x2a PushI
	KillTimer(var_283_int); // 0x2b Func
	var_284_int = 123; // 0x2d PushI
	KillTimer(var_284_int); // 0x2e Func
	return 0; // 0x30 Return
	
Label_31:
	var_285_int = 1; // 0x1f PushI
	Sleep(var_285_int); // 0x20 Func
	var_286_int = 0; // 0x22 PushV
	func_1412(var_286_int); // 0x23 NEW_2
	var_287_int = GlobalVars[0]; // 0x25 PushGE
	var_288_bool = var_286_int != var_287_int; // 0x26 Neq
	if(var_288_bool == 0) goto Label_41; // 0x27 JumpB
	goto Label_42; // 0x28 Jump
	
Label_41:
	goto Label_14; // 0x29 Jump
}


func_1809(var_84_int)
{
	var_84_int = 515569; // 0x711 MovI
	return 0; // 0x712 Return
}


func_1811(var_83_int)
{
	var_83_int = 503354; // 0x713 MovI
	return 0; // 0x714 Return
}


func_1299()
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0; // 0x513 PushV
	WaitForAnimEnd(); // 0x514 Func
	var_43_bool = 0; // 0x516 PushV
	func_1500(var_43_bool); // 0x517 NEW_2
	var_46_bool = var_43_bool == 0; // 0x519 Not
	if(var_46_bool == 0) goto Label_1308; // 0x51a JumpB
	return 14; // 0x51b Return
	
Label_1308:
	var_47_int = 0; // 0x51c PushV
	func_1708(var_47_int); // 0x51d NEW_2
	var_36_int = var_47_int; // 0x51e Mov
	var_37_int = 0; // 0x520 MovI
	
Label_1313:
	var_60_bool = 0; // 0x521 PushV
	var_60_bool = 0; // 0x522 MovB
	var_61_int = 5; // 0x523 PushI
	var_62_bool = var_37_int < var_61_int; // 0x524 LT
	if(var_62_bool == 0) goto Label_1323; // 0x525 JumpB
	var_63_bool = 0; // 0x526 PushV
	func_1500(var_63_bool); // 0x527 NEW_2
	if(var_63_bool == 0) goto Label_1323; // 0x529 JumpB
	var_60_bool = 1; // 0x52a MovB
	
Label_1323:
	if(var_60_bool == 0) goto Label_1375; // 0x52b JumpB
	var_64_int = 3; // 0x52c PushI
	irand(var_38_int, var_64_int); // 0x52d Func
	var_65_int = 0; // 0x52f PushI
	var_66_bool = var_38_int == var_65_int; // 0x530 Eq
	if(var_66_bool == 0) goto Label_1347; // 0x531 JumpB
	var_67_int = var_36_int; // 0x532 Push
	if(var_67_int == 0) goto Label_1346; // 0x533 JumpB
	irand(var_39_int, var_36_int); // 0x534 Func
	var_68_string = "all"; // 0x536 PushS
	var_69_string = ""; var_70_int = 0; // 0x537 PushV
	var_70_int = var_39_int; // 0x538 Mov
	func_1701(var_69_string, var_70_int); // 0x539 NEW_2
	PlayAnimation(var_68_string, var_69_string); // 0x53b Func
	WaitForAnimEnd(var_40_bool); // 0x53d Func
	var_71_bool = var_40_bool == 0; // 0x53f Not
	if(var_71_bool == 0) goto Label_1346; // 0x540 JumpB
	goto Label_1375; // 0x541 Jump
	
Label_1375:
	ResetAAS(); // 0x55f Func
	return 14; // 0x561 Return
	
Label_1346:
	goto Label_1364; // 0x542 Jump
	
Label_1364:
	var_72_bool = 0; // 0x554 PushV
	func_1378(var_72_bool); // 0x555 NEW_2
	var_73_bool = var_72_bool == 0; // 0x557 Not
	if(var_73_bool == 0) goto Label_1370; // 0x558 JumpB
	goto Label_1375; // 0x559 Jump
	
Label_1370:
	ResetAAS(); // 0x55a Func
	var_74_int = 1; // 0x55c PushI
	var_37_int = var_37_int + var_74_int; // 0x55d Add2
	goto Label_1313; // 0x55e Jump
	
Label_1347:
	var_75_int = 1; // 0x543 PushI
	var_76_bool = var_38_int == var_75_int; // 0x544 Eq
	if(var_76_bool == 0) goto Label_1361; // 0x545 JumpB
	var_77_int = 4; // 0x546 PushI
	rand(var_41_float, var_77_int); // 0x547 Func
	var_78_int = 1; // 0x549 PushI
	var_79_int = var_41_float + var_78_int; // 0x54a Add
	Sleep(var_79_int, var_42_bool); // 0x54b Func
	var_80_bool = var_42_bool == 0; // 0x54d Not
	if(var_80_bool == 0) goto Label_1360; // 0x54e JumpB
	goto Label_1375; // 0x54f Jump
	
Label_1360:
	goto Label_1364; // 0x550 Jump
	
Label_1361:
	var_81_int = var_37_int; // 0x551 Push
	if(var_81_int == 0) goto Label_1364; // 0x552 JumpB
	goto Label_1375; // 0x553 Jump
}


func_1813(var_85_string)
{
	var_85_string = "ui/NPC_wmask.png"; // 0x715 MovS
	return 0; // 0x716 Return
}


func_1815(var_86_string)
{
	var_86_string = "ui/NPC_wmask_b.png"; // 0x717 MovS
	return 0; // 0x718 Return
}


func_1817(var_78_bool)
{
	var_78_bool = 0; // 0x719 MovB
	return 0; // 0x71a Return
}


func_1574()
{
	var_163_bool = 0; var_164_bool = 0; // 0x626 PushV
	var_165_bool = 1; // 0x627 PushB
	CameraSwitchToNormal(var_165_bool); // 0x628 Func
	var_166_bool = 0; // 0x62a PushV
	func_1817(var_166_bool); // 0x62b NEW_2
	if(var_166_bool == 0) goto Label_1583; // 0x62d JumpB
	goto Label_1591; // 0x62e Jump
	
Label_1591:
	return 2; // 0x637 Return
	
Label_1583:
	var_167_string = "head"; // 0x62f PushS
	HasAnimationTrack(var_164_bool, var_167_string); // 0x630 Func
	var_168_bool = var_164_bool; // 0x632 Push
	if(var_168_bool == 0) goto Label_1591; // 0x633 JumpB
	var_169_string = "head"; // 0x634 PushS
	UnlookAsync(var_169_string); // 0x635 Func
}


func_558(var_378_float)
{
	var_379_float = 0; var_380_float = 0; // 0x22e PushV
	GetCameraFarDistance(var_380_float); // 0x22f Func
	var_378_float = var_380_float; // 0x231 Mov
	return 2; // 0x232 Return
}


func_1592(var_137_string)
{
	var_138_bool = 0; var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_float = 0; var_143_float = 0; // 0x638 PushV
	lshHasAnimation(var_141_bool, var_137_string); // 0x639 Func
	var_144_bool = var_141_bool; // 0x63b Push
	if(var_144_bool == 0) goto Label_1603; // 0x63c JumpB
	lshGetAnimTimes(var_137_string, var_142_float, var_143_float); // 0x63d Func
	var_145_bool = 0; // 0x63f PushB
	lshPlayAnimation(var_142_float, var_143_float, var_145_bool); // 0x640 Func
	goto Label_1607; // 0x642 Jump
	
Label_1607:
	return 6; // 0x647 Return
	
Label_1603:
	var_146_string = "Can't find lsh animation : "; // 0x643 PushS
	var_147_int = var_146_string + var_137_string; // 0x644 Add
	Trace(var_147_int); // 0x645 Func
}


func_570(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x23a TMovB
	var_1_object = 0; // 0x23b TMovB
	Stop(); // 0x23c Func
	StopGroup0(); // 0x23e Func
	return 0; // 0x240 Return
}


func_832(var_2_cvector, var_111_string)
{
	var_112_bool = 0; // 0x341 PushV
	func_1817(var_112_bool); // 0x342 NEW_2
	var_113_bool = var_112_bool == 0; // 0x344 Not
	if(var_113_bool == 0) goto Label_839; // 0x345 JumpB
	return 0; // 0x346 Return
	
Label_839:
	var_114_bool = var_111_string == var_2_cvector; // 0x347 Eq
	if(var_114_bool == 0) goto Label_842; // 0x348 JumpB
	return 0; // 0x349 Return
	
Label_842:
	var_115_string = ""; var_116_bool = 0; // 0x34a PushV
	var_115_string = var_111_string; // 0x34b Mov
	var_117_string = ""; // 0x34c PushS
	var_118_bool = var_111_string == var_117_string; // 0x34d Eq
	if(var_118_bool == 0) goto Label_849; // 0x34e JumpB
	var_116_bool = 0; // 0x34f MovB
	goto Label_850; // 0x350 Jump
	
Label_850:
	func_1608(var_115_string, var_116_bool); // 0x352 NEW_2
	var_2_cvector = var_111_string; // 0x354 TMov
	return 0; // 0x355 Return
	
Label_849:
	var_116_bool = 1; // 0x351 MovB
}


func_1608(var_115_string, var_116_bool)
{
	var_119_bool = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_float = 0; // 0x648 PushV
	lshHasAnimation(var_122_bool, var_115_string); // 0x649 Func
	var_125_bool = var_122_bool; // 0x64b Push
	if(var_125_bool == 0) goto Label_1618; // 0x64c JumpB
	lshGetAnimTimes(var_115_string, var_123_float, var_124_float); // 0x64d Func
	lshPlayAnimation(var_123_float, var_124_float, var_116_bool); // 0x64f Func
	goto Label_1622; // 0x651 Jump
	
Label_1622:
	return 6; // 0x656 Return
	
Label_1618:
	var_126_string = "Can't find lsh animation : "; // 0x652 PushS
	var_127_int = var_126_string + var_115_string; // 0x653 Add
	Trace(var_127_int); // 0x654 Func
}


func_586(var_388_bool)
{
	var_388_bool = 0; // 0x24a MovB
	return 0; // 0x24b Return
}


func_588(var_382_object, var_383_cvector)
{
	var_384_object = Obj(); var_385_object = Obj(); // 0x24c PushV
	FindShiftedPathTo(var_385_object, var_383_cvector); // 0x24d Func
	var_382_object = var_385_object; // 0x24f Mov
	return 2; // 0x250 Return
}


func_594()
{
	var_390_int = 0; var_391_int = 0; var_392_int = 0; var_393_int = 0; var_394_bool = 0; var_395_float = 0; var_396_bool = 0; var_397_int = 0; var_398_int = 0; var_399_int = 0; var_400_int = 0; var_401_bool = 0; var_402_float = 0; var_403_bool = 0; // 0x252 PushV
	WaitForAnimEnd(); // 0x253 Func
	var_404_bool = 0; // 0x255 PushV
	func_1500(var_404_bool); // 0x256 NEW_2
	var_407_bool = var_404_bool == 0; // 0x258 Not
	if(var_407_bool == 0) goto Label_603; // 0x259 JumpB
	return 14; // 0x25a Return
	
Label_603:
	var_408_int = 0; // 0x25b PushV
	func_1708(var_408_int); // 0x25c NEW_2
	var_397_int = var_408_int; // 0x25d Mov
	var_398_int = 0; // 0x25f MovI
	
Label_608:
	var_421_bool = 0; // 0x260 PushV
	var_421_bool = 0; // 0x261 MovB
	var_422_int = 5; // 0x262 PushI
	var_423_bool = var_398_int < var_422_int; // 0x263 LT
	if(var_423_bool == 0) goto Label_618; // 0x264 JumpB
	var_424_bool = 0; // 0x265 PushV
	func_1500(var_424_bool); // 0x266 NEW_2
	if(var_424_bool == 0) goto Label_618; // 0x268 JumpB
	var_421_bool = 1; // 0x269 MovB
	
Label_618:
	if(var_421_bool == 0) goto Label_670; // 0x26a JumpB
	var_425_int = 3; // 0x26b PushI
	irand(var_399_int, var_425_int); // 0x26c Func
	var_426_int = 0; // 0x26e PushI
	var_427_bool = var_399_int == var_426_int; // 0x26f Eq
	if(var_427_bool == 0) goto Label_642; // 0x270 JumpB
	var_428_int = var_397_int; // 0x271 Push
	if(var_428_int == 0) goto Label_641; // 0x272 JumpB
	irand(var_400_int, var_397_int); // 0x273 Func
	var_429_string = "all"; // 0x275 PushS
	var_430_string = ""; var_431_int = 0; // 0x276 PushV
	var_431_int = var_400_int; // 0x277 Mov
	func_1701(var_430_string, var_431_int); // 0x278 NEW_2
	PlayAnimation(var_429_string, var_430_string); // 0x27a Func
	WaitForAnimEnd(var_401_bool); // 0x27c Func
	var_432_bool = var_401_bool == 0; // 0x27e Not
	if(var_432_bool == 0) goto Label_641; // 0x27f JumpB
	goto Label_670; // 0x280 Jump
	
Label_670:
	ResetAAS(); // 0x29e Func
	return 14; // 0x2a0 Return
	
Label_641:
	goto Label_659; // 0x281 Jump
	
Label_659:
	var_433_bool = 0; // 0x293 PushV
	func_673(var_433_bool); // 0x294 NEW_2
	var_434_bool = var_433_bool == 0; // 0x296 Not
	if(var_434_bool == 0) goto Label_665; // 0x297 JumpB
	goto Label_670; // 0x298 Jump
	
Label_665:
	ResetAAS(); // 0x299 Func
	var_435_int = 1; // 0x29b PushI
	var_398_int = var_398_int + var_435_int; // 0x29c Add2
	goto Label_608; // 0x29d Jump
	
Label_642:
	var_436_int = 1; // 0x282 PushI
	var_437_bool = var_399_int == var_436_int; // 0x283 Eq
	if(var_437_bool == 0) goto Label_656; // 0x284 JumpB
	var_438_int = 4; // 0x285 PushI
	rand(var_402_float, var_438_int); // 0x286 Func
	var_439_int = 1; // 0x288 PushI
	var_440_int = var_402_float + var_439_int; // 0x289 Add
	Sleep(var_440_int, var_403_bool); // 0x28a Func
	var_441_bool = var_403_bool == 0; // 0x28c Not
	if(var_441_bool == 0) goto Label_655; // 0x28d JumpB
	goto Label_670; // 0x28e Jump
	
Label_655:
	goto Label_659; // 0x28f Jump
	
Label_656:
	var_442_int = var_398_int; // 0x290 Push
	if(var_442_int == 0) goto Label_659; // 0x291 JumpB
	goto Label_670; // 0x292 Jump
}


func_340(var_0_bool, var_1_object, var_298_bool, var_299_object, var_300_float, var_301_float, var_302_bool, var_303_bool)
{
	var_304_bool = 0; var_305_bool = 0; var_306_object = Obj(); var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_float = 0; var_311_object = Obj(); var_312_bool = 0; var_313_bool = 0; var_314_object = Obj(); var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_float = 0; var_319_object = Obj(); // 0x154 PushV
	var_0_bool = 0; // 0x155 TMovB
	var_1_object = var_299_object; // 0x156 TMov
	var_313_bool = var_303_bool; // 0x157 Mov
	
Label_344:
	var_320_bool = 0; var_321_object = Obj(); // 0x158 PushV
	var_321_object = var_299_object; // 0x159 Mov
	func_480(var_320_bool, var_321_object); // 0x15a NEW_2
	var_324_bool = var_320_bool == 0; // 0x15c Not
	if(var_324_bool == 0) goto Label_352; // 0x15d JumpB
	var_298_bool = 0; // 0x15e MovB
	return 16; // 0x15f Return
	
Label_352:
	GetPosition(var_315_cvector); // 0x160 ObjFunc
	GetPosition(var_316_cvector); // 0x162 Func
	var_317_cvector = var_315_cvector - var_316_cvector; // 0x164 Sub2
	var_318_float = var_317_cvector | var_317_cvector; // 0x165 Or2
	var_325_bool = 0; // 0x166 PushV
	var_325_bool = 0; // 0x167 MovB
	var_326_int = 0; // 0x168 PushI
	var_327_bool = var_301_float > var_326_int; // 0x169 GT
	if(var_327_bool == 0) goto Label_367; // 0x16a JumpB
	var_328_float = var_301_float * var_301_float; // 0x16b Mult
	var_329_bool = var_318_float > var_328_float; // 0x16c GT
	if(var_329_bool == 0) goto Label_367; // 0x16d JumpB
	var_325_bool = 1; // 0x16e MovB
	
Label_367:
	if(var_325_bool == 0) goto Label_372; // 0x16f JumpB
	Stop(); // 0x170 Func
	var_298_bool = 0; // 0x172 MovB
	return 16; // 0x173 Return
	
Label_372:
	var_330_float = var_300_float * var_300_float; // 0x174 Mult
	var_331_bool = var_318_float > var_330_float; // 0x175 GT
	if(var_331_bool == 0) goto Label_434; // 0x176 JumpB
	GetPFPosition(var_315_cvector); // 0x177 ObjFunc
	FindPathTo(var_319_object, var_315_cvector); // 0x179 Func
	var_332_bool = var_319_object != 0; // 0x17b NullNeq
	if(var_332_bool == 0) goto Label_383; // 0x17c JumpB
	var_314_object = var_319_object; // 0x17d Mov
	var_319_object = 0; // 0x17e SetNull
	
Label_383:
	var_333_bool = var_314_object != 0; // 0x17f NullNeq
	if(var_333_bool == 0) goto Label_416; // 0x180 JumpB
	var_334_bool = var_313_bool; // 0x181 Push
	if(var_334_bool == 0) goto Label_393; // 0x182 JumpB
	var_313_bool = 0; // 0x183 MovB
	RotatePath(var_314_object, var_312_bool); // 0x184 Func
	var_335_bool = var_312_bool == 0; // 0x186 Not
	if(var_335_bool == 0) goto Label_393; // 0x187 JumpB
	goto Label_440; // 0x188 Jump
	
Label_440:
	var_298_bool = !var_0_bool; // 0x1b8 Not2
	return 16; // 0x1b9 Return
	
Label_393:
	var_336_int = 0; // 0x189 PushI
	var_337_float = 0.3; // 0x18a PushF
	SetTimer(var_336_int, var_337_float); // 0x18b Func
	var_338_string = ""; // 0x18d PushV
	func_487(var_338_string); // 0x18e NEW_2
	var_339_string = ""; // 0x190 PushV
	func_489(var_339_string); // 0x191 NEW_2
	FollowPath(var_314_object, var_302_bool, var_312_bool, var_338_string, var_339_string); // 0x193 Func
	var_340_bool = var_312_bool == 0; // 0x195 Not
	if(var_340_bool == 0) goto Label_414; // 0x196 JumpB
	var_341_bool = var_0_bool; // 0x197 PushT
	if(var_341_bool == 0) goto Label_412; // 0x198 JumpB
	var_314_object = 0; // 0x199 SetNull
	goto Label_440; // 0x19a Jump
	
Label_412:
	goto Label_439; // 0x19c Jump
	
Label_439:
	goto Label_344; // 0x1b7 Jump
	
Label_414:
	var_314_object = 0; // 0x19e SetNull
	goto Label_432; // 0x19f Jump
	
Label_432:
	var_319_object = 0; // 0x1b0 SetNull
	goto Label_438; // 0x1b1 Jump
	
Label_438:
	var_314_object = 0; // 0x1b6 SetNull
	
Label_416:
	var_342_int = 0; // 0x1a0 PushI
	KillTimer(var_342_int); // 0x1a1 Func
	var_343_float = 0.5; // 0x1a3 PushF
	Sleep(var_343_float, var_312_bool); // 0x1a4 Func
	var_344_bool = var_312_bool == 0; // 0x1a6 Not
	if(var_344_bool == 0) goto Label_428; // 0x1a7 JumpB
	var_345_bool = var_0_bool; // 0x1a8 PushT
	if(var_345_bool == 0) goto Label_428; // 0x1a9 JumpB
	var_314_object = 0; // 0x1aa SetNull
	goto Label_440; // 0x1ab Jump
	
Label_428:
	var_346_int = 0; // 0x1ac PushI
	var_347_float = 0.3; // 0x1ad PushF
	SetTimer(var_346_int, var_347_float); // 0x1ae Func
	
Label_434:
	var_348_int = 0; // 0x1b2 PushI
	KillTimer(var_348_int); // 0x1b3 Func
	goto Label_440; // 0x1b5 Jump
}


func_1623()
{
	var_22_bool = 0; // 0x657 PushV
	func_1817(var_22_bool); // 0x658 NEW_2
	if(var_22_bool == 0) goto Label_1629; // 0x65a JumpB
	lshStopSpeech(); // 0x65b Func
	
Label_1629:
	return 0; // 0x65d Return
}


func_1630(var_62_cvector, var_63_cvector)
{
	var_65_float = 0; var_66_float = 0; // 0x65e PushV
	var_67_int = var_63_cvector | var_63_cvector; // 0x65f Or
	var_66_float = sqrt(var_67_int); // 0x660 Sqrt2
	var_68_float = 0.0; // 0x661 PushF
	var_69_bool = var_66_float < var_68_float; // 0x662 LT
	if(var_69_bool == 0) goto Label_1638; // 0x663 JumpB
	var_62_cvector = CVector(0.0, 0.0, 0.0); // 0x664 MovV
	return 2; // 0x665 Return
	
Label_1638:
	var_62_cvector = var_63_cvector / var_63_cvector; // 0x666 Div2
	return 2; // 0x667 Return
}


func_98(var_0_bool, var_1_object, var_189_bool, var_190_object, var_191_float, var_192_float, var_193_bool, var_194_bool)
{
	var_195_bool = 0; var_196_bool = 0; var_197_object = Obj(); var_198_cvector = CVector(0,0,0); var_199_cvector = CVector(0,0,0); var_200_cvector = CVector(0,0,0); var_201_float = 0; var_202_object = Obj(); var_203_bool = 0; var_204_bool = 0; var_205_object = Obj(); var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_float = 0; var_210_object = Obj(); // 0x62 PushV
	var_0_bool = 0; // 0x63 TMovB
	var_1_object = var_190_object; // 0x64 TMov
	var_204_bool = var_194_bool; // 0x65 Mov
	
Label_102:
	var_211_bool = 0; var_212_object = Obj(); // 0x66 PushV
	var_212_object = var_190_object; // 0x67 Mov
	func_238(var_211_bool, var_212_object); // 0x68 NEW_2
	var_247_bool = var_211_bool == 0; // 0x6a Not
	if(var_247_bool == 0) goto Label_110; // 0x6b JumpB
	var_189_bool = 0; // 0x6c MovB
	return 16; // 0x6d Return
	
Label_110:
	GetPosition(var_206_cvector); // 0x6e ObjFunc
	GetPosition(var_207_cvector); // 0x70 Func
	var_208_cvector = var_206_cvector - var_207_cvector; // 0x72 Sub2
	var_209_float = var_208_cvector | var_208_cvector; // 0x73 Or2
	var_248_bool = 0; // 0x74 PushV
	var_248_bool = 0; // 0x75 MovB
	var_249_int = 0; // 0x76 PushI
	var_250_bool = var_192_float > var_249_int; // 0x77 GT
	if(var_250_bool == 0) goto Label_125; // 0x78 JumpB
	var_251_float = var_192_float * var_192_float; // 0x79 Mult
	var_252_bool = var_209_float > var_251_float; // 0x7a GT
	if(var_252_bool == 0) goto Label_125; // 0x7b JumpB
	var_248_bool = 1; // 0x7c MovB
	
Label_125:
	if(var_248_bool == 0) goto Label_130; // 0x7d JumpB
	Stop(); // 0x7e Func
	var_189_bool = 0; // 0x80 MovB
	return 16; // 0x81 Return
	
Label_130:
	var_253_float = var_191_float * var_191_float; // 0x82 Mult
	var_254_bool = var_209_float > var_253_float; // 0x83 GT
	if(var_254_bool == 0) goto Label_192; // 0x84 JumpB
	GetPFPosition(var_206_cvector); // 0x85 ObjFunc
	FindPathTo(var_210_object, var_206_cvector); // 0x87 Func
	var_255_bool = var_210_object != 0; // 0x89 NullNeq
	if(var_255_bool == 0) goto Label_141; // 0x8a JumpB
	var_205_object = var_210_object; // 0x8b Mov
	var_210_object = 0; // 0x8c SetNull
	
Label_141:
	var_256_bool = var_205_object != 0; // 0x8d NullNeq
	if(var_256_bool == 0) goto Label_174; // 0x8e JumpB
	var_257_bool = var_204_bool; // 0x8f Push
	if(var_257_bool == 0) goto Label_151; // 0x90 JumpB
	var_204_bool = 0; // 0x91 MovB
	RotatePath(var_205_object, var_203_bool); // 0x92 Func
	var_258_bool = var_203_bool == 0; // 0x94 Not
	if(var_258_bool == 0) goto Label_151; // 0x95 JumpB
	goto Label_198; // 0x96 Jump
	
Label_198:
	var_189_bool = !var_0_bool; // 0xc6 Not2
	return 16; // 0xc7 Return
	
Label_151:
	var_259_int = 0; // 0x97 PushI
	var_260_float = 0.3; // 0x98 PushF
	SetTimer(var_259_int, var_260_float); // 0x99 Func
	var_261_string = ""; // 0x9b PushV
	func_245(var_261_string); // 0x9c NEW_2
	var_262_string = ""; // 0x9e PushV
	func_247(var_262_string); // 0x9f NEW_2
	FollowPath(var_205_object, var_193_bool, var_203_bool, var_261_string, var_262_string); // 0xa1 Func
	var_263_bool = var_203_bool == 0; // 0xa3 Not
	if(var_263_bool == 0) goto Label_172; // 0xa4 JumpB
	var_264_bool = var_0_bool; // 0xa5 PushT
	if(var_264_bool == 0) goto Label_170; // 0xa6 JumpB
	var_205_object = 0; // 0xa7 SetNull
	goto Label_198; // 0xa8 Jump
	
Label_170:
	goto Label_197; // 0xaa Jump
	
Label_197:
	goto Label_102; // 0xc5 Jump
	
Label_172:
	var_205_object = 0; // 0xac SetNull
	goto Label_190; // 0xad Jump
	
Label_190:
	var_210_object = 0; // 0xbe SetNull
	goto Label_196; // 0xbf Jump
	
Label_196:
	var_205_object = 0; // 0xc4 SetNull
	
Label_174:
	var_265_int = 0; // 0xae PushI
	KillTimer(var_265_int); // 0xaf Func
	var_266_float = 0.5; // 0xb1 PushF
	Sleep(var_266_float, var_203_bool); // 0xb2 Func
	var_267_bool = var_203_bool == 0; // 0xb4 Not
	if(var_267_bool == 0) goto Label_186; // 0xb5 JumpB
	var_268_bool = var_0_bool; // 0xb6 PushT
	if(var_268_bool == 0) goto Label_186; // 0xb7 JumpB
	var_205_object = 0; // 0xb8 SetNull
	goto Label_198; // 0xb9 Jump
	
Label_186:
	var_269_int = 0; // 0xba PushI
	var_270_float = 0.3; // 0xbb PushF
	SetTimer(var_269_int, var_270_float); // 0xbc Func
	
Label_192:
	var_271_int = 0; // 0xc0 PushI
	KillTimer(var_271_int); // 0xc1 Func
	goto Label_198; // 0xc3 Jump
}


func_1378(var_72_bool)
{
	var_72_bool = 1; // 0x562 MovB
	return 0; // 0x563 Return
}


func_1380()
{
	StopAnimation(); // 0x564 Func
	StopGroup0(); // 0x566 Func
	return 0; // 0x568 Return
}


func_1640(var_105_int, var_106_string)
{
	var_107_int = 0; var_108_int = 0; // 0x668 PushV
	GetVariable(var_106_string, var_108_int); // 0x669 Func
	var_105_int = var_108_int; // 0x66b Mov
	return 2; // 0x66c Return
}


func_1385(var_357_object)
{
	var_358_int = 0; var_359_object = Obj(); // 0x56a PushV
	var_359_object = var_357_object; // 0x56b Mov
	TaskCall(4); // 0x56c TaskCall
	func_675(var_360_object, var_358_int, var_359_object); // 0x56d NEW_2
	TaskReturn(); // 0x56e TaskReturn
	return 0; // 0x570 Return
}


func_1645(var_46_int, var_47_int)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x66d PushV
	CreateIntVector(var_49_object); // 0x66e Func
	add(var_46_int); // 0x670 ObjFunc
	add(var_47_int); // 0x672 ObjFunc
	var_50_int = 3; // 0x674 PushI
	SendWorldWndMessage(var_50_int, var_49_object); // 0x675 Func
	return 2; // 0x677 Return
}


func_1393(var_353_object)
{
	var_354_bool = 0; var_355_bool = 0; // 0x571 PushV
	
Label_1394:
	IsOverrideActive(var_355_bool); // 0x572 Func
	var_356_bool = var_355_bool == 0; // 0x574 Not
	if(var_356_bool == 0) goto Label_1399; // 0x575 JumpB
	goto Label_1400; // 0x576 Jump
	
Label_1400:
	var_357_object = Obj(); // 0x578 PushV
	var_357_object = var_353_object; // 0x579 Mov
	func_1385(var_357_object); // 0x57a NEW_2
	Hold(); // 0x57c Func
	return 2; // 0x57e Return
	
Label_1399:
	goto Label_1394; // 0x577 Jump
}


func_1657(var_36_object, var_37_int)
{
	var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; // 0x679 PushV
	GetItemID(var_41_int); // 0x67a ObjFunc
	var_44_string = "Category"; // 0x67c PushS
	GetInvItemProperty(var_42_int, var_41_int, var_44_string); // 0x67d Func
	AddItem(var_43_bool, var_36_object, var_42_int, var_37_int); // 0x67f ObjFunc
	var_45_bool = var_43_bool == 0; // 0x681 Not
	if(var_45_bool == 0) goto Label_1670; // 0x682 JumpB
	DropItems(var_36_object, var_37_int); // 0x683 ObjFunc
	goto Label_1675; // 0x685 Jump
	
Label_1675:
	return 6; // 0x68b Return
	
Label_1670:
	var_46_int = 0; var_47_int = 0; // 0x686 PushV
	var_46_int = var_41_int; // 0x687 Mov
	var_47_int = var_37_int; // 0x688 Mov
	func_1645(var_46_int, var_47_int); // 0x689 NEW_2
}


func_1407(var_25_cvector)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x57f PushV
	GetPosition(var_27_cvector); // 0x580 Func
	var_25_cvector = var_27_cvector; // 0x582 Mov
	return 2; // 0x583 Return
}


func_1412(var_20_int)
{
	var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); var_24_int = 0; // 0x584 PushV
	GetScene(var_23_object); // 0x585 Func
	var_25_cvector = CVector(0,0,0); // 0x587 PushV
	func_1407(var_25_cvector); // 0x588 NEW_2
	GetRegionByPt(var_24_int, var_25_cvector); // 0x58a ObjFunc
	var_20_int = var_24_int; // 0x58c Mov
	return 4; // 0x58d Return
}


func_1676(var_30_object, var_31_string, var_32_int)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x68c PushV
	CreateInvItem(var_34_object); // 0x68d Func
	SetItemName(var_31_string); // 0x68f ObjFunc
	var_35_object = Obj(); var_36_object = Obj(); var_37_int = 0; // 0x691 PushV
	var_35_object = var_30_object; // 0x692 Mov
	var_36_object = var_34_object; // 0x693 Mov
	var_37_int = var_32_int; // 0x694 Mov
	func_1657(var_36_object, var_37_int); // 0x695 NEW_2
	return 2; // 0x697 Return
}


func_1423(var_235_bool, var_236_object, var_237_string)
{
	var_238_bool = 0; var_239_bool = 0; // 0x58f PushV
	var_240_string = "HasProperty"; // 0x590 PushS
	var_241_int = 2; // 0x591 PushI
	var_242_bool = IsFuncExist(var_236_object, var_240_string, var_241_int); // 0x592 FuncExist
	var_243_bool = var_242_bool == 0; // 0x593 Not
	if(var_243_bool == 0) goto Label_1431; // 0x594 JumpB
	var_235_bool = 0; // 0x595 MovB
	return 2; // 0x596 Return
	
Label_1431:
	HasProperty(var_237_string, var_239_bool); // 0x597 ObjFunc
	var_235_bool = var_239_bool; // 0x599 Mov
	return 2; // 0x59a Return
}


func_1689(var_172_bool, var_173_string, var_174_string)
{
	var_175_object = Obj(); var_176_object = Obj(); // 0x699 PushV
	FindActor(var_176_object, var_173_string); // 0x69a Func
	var_177_bool = var_176_object == 0; // 0x69c NullEq
	if(var_177_bool == 0) goto Label_1696; // 0x69d JumpB
	var_172_bool = 0; // 0x69e MovB
	return 2; // 0x69f Return
	
Label_1696:
	Trigger(var_176_object, var_174_string); // 0x6a0 Func
	var_172_bool = 1; // 0x6a2 MovB
	return 2; // 0x6a3 Return
}


func_1435(var_228_bool)
{
	var_230_bool = 0; var_231_bool = 0; // 0x59b PushV
	IsDead(var_231_bool); // 0x59c ObjFunc
	var_228_bool = var_231_bool; // 0x59e Mov
	return 2; // 0x59f Return
}


func_1440(var_217_bool, var_218_object)
{
	var_219_object = Obj(); var_220_object = Obj(); var_221_object = Obj(); var_222_object = Obj(); // 0x5a0 PushV
	var_223_bool = var_218_object == 0; // 0x5a1 NullEq
	if(var_223_bool == 0) goto Label_1445; // 0x5a2 JumpB
	var_217_bool = 0; // 0x5a3 MovB
	return 4; // 0x5a4 Return
	
Label_1445:
	var_224_bool = 0; // 0x5a5 PushV
	var_224_bool = 0; // 0x5a6 MovB
	var_225_string = "IsDead"; // 0x5a7 PushS
	var_226_int = 1; // 0x5a8 PushI
	var_227_bool = IsFuncExist(var_218_object, var_225_string, var_226_int); // 0x5a9 FuncExist
	if(var_227_bool == 0) goto Label_1457; // 0x5aa JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x5ab PushV
	var_229_object = var_218_object; // 0x5ac Mov
	func_1435(var_229_object); // 0x5ad NEW_2
	if(var_228_bool == 0) goto Label_1457; // 0x5af JumpB
	var_224_bool = 1; // 0x5b0 MovB
	
Label_1457:
	if(var_224_bool == 0) goto Label_1460; // 0x5b1 JumpB
	var_217_bool = 0; // 0x5b2 MovB
	return 4; // 0x5b3 Return
	
Label_1460:
	GetScene(var_221_object); // 0x5b4 Func
	var_232_bool = var_221_object == 0; // 0x5b6 NullEq
	if(var_232_bool == 0) goto Label_1466; // 0x5b7 JumpB
	var_217_bool = 0; // 0x5b8 MovB
	return 4; // 0x5b9 Return
	
Label_1466:
	GetScene(var_222_object); // 0x5ba ObjFunc
	var_233_bool = var_221_object != var_222_object; // 0x5bc Neq
	if(var_233_bool == 0) goto Label_1472; // 0x5bd JumpB
	var_217_bool = 0; // 0x5be MovB
	return 4; // 0x5bf Return
	
Label_1472:
	var_217_bool = 1; // 0x5c0 MovB
	return 4; // 0x5c1 Return
}


func_673(var_433_bool)
{
	var_433_bool = 1; // 0x2a1 MovB
	return 0; // 0x2a2 Return
}


func_675(var_0_bool, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x2a3 PushV
	var_0_bool = var_25_object; // 0x2a4 TMov
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0; // 0x2a5 PushV
	var_36_object = var_25_object; // 0x2a6 Mov
	var_37_float = 70.0; // 0x2a7 MovF
	func_1505(var_36_object, var_37_float); // 0x2a8 NEW_2
	var_82_bool = var_35_bool == 0; // 0x2aa Not
	if(var_82_bool == 0) goto Label_686; // 0x2ab JumpB
	var_24_int = -2; // 0x2ac MovI
	return 8; // 0x2ad Return
	
Label_686:
	CreateDialog(var_31_object); // 0x2ae Func
	var_83_int = 0; // 0x2b0 PushV
	func_1811(var_83_int); // 0x2b1 NEW_2
	SetNPCName(var_83_int); // 0x2b3 ObjFunc
	var_84_int = 0; // 0x2b5 PushV
	func_1809(var_84_int); // 0x2b6 NEW_2
	SetNPCDescription(var_84_int); // 0x2b8 ObjFunc
	var_85_string = ""; // 0x2ba PushV
	func_1813(var_85_string); // 0x2bb NEW_2
	SetPhoto(var_85_string); // 0x2bd ObjFunc
	var_86_string = ""; // 0x2bf PushV
	func_1815(var_86_string); // 0x2c0 NEW_2
	SetPhoto2(var_86_string); // 0x2c2 ObjFunc
	var_87_int = 0; // 0x2c4 PushV
	func_1792(var_87_int); // 0x2c5 NEW_2
	SetPlayerName(var_87_int); // 0x2c7 ObjFunc
	var_33_int = -1; // 0x2c9 MovI
	IsOverrideActive(var_32_bool); // 0x2ca Func
	var_95_bool = var_32_bool; // 0x2cc Push
	if(var_95_bool == 0) goto Label_720; // 0x2cd JumpB
	var_24_int = -2; // 0x2ce MovI
	return 8; // 0x2cf Return
	
Label_720:
	DoDialog(var_31_object); // 0x2d0 Func
	var_96_object = Obj(); var_97_object = Obj(); // 0x2d2 PushV
	var_96_object = var_25_object; // 0x2d3 Mov
	var_97_object = var_31_object; // 0x2d4 Mov
	TaskCall(5); // 0x2d5 TaskCall
	func_749(var_98_object, var_99_object, var_100_string, var_101_bool, var_96_object, var_97_object); // 0x2d6 NEW_2
	TaskReturn(); // 0x2d7 TaskReturn
	IsDialogEnd(var_34_bool); // 0x2d9 ObjFunc
	
Label_731:
	var_161_bool = var_34_bool == 0; // 0x2db Not
	if(var_161_bool == 0) goto Label_738; // 0x2dc JumpB
	sync(); // 0x2dd Func
	IsDialogEnd(var_34_bool); // 0x2df ObjFunc
	goto Label_731; // 0x2e1 Jump
	
Label_738:
	var_162_object = Obj(); // 0x2e2 PushV
	var_162_object = var_25_object; // 0x2e3 Mov
	func_1574(); // 0x2e4 NEW_2
	StopDialog(var_31_object); // 0x2e6 Func
	GetReturnValue(var_33_int); // 0x2e8 ObjFunc
	var_24_int = var_33_int; // 0x2ea Mov
	return 8; // 0x2eb Return
}


func_1701(var_53_string, var_54_int)
{
	var_55_string = ""; var_56_string = ""; // 0x6a5 PushV
	var_56_string = "idle"; // 0x6a6 MovS
	var_57_int = var_54_int; // 0x6a7 Push
	if(var_57_int == 0) goto Label_1706; // 0x6a8 JumpB
	var_56_string = var_56_string + var_54_int; // 0x6a9 Add2
	
Label_1706:
	var_53_string = var_56_string; // 0x6aa Mov
	return 2; // 0x6ab Return
}


func_1708(var_47_int)
{
	var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0; // 0x6ac PushV
	var_50_int = 0; // 0x6ad MovI
	
Label_1710:
	var_52_string = "all"; // 0x6ae PushS
	var_53_string = ""; var_54_int = 0; // 0x6af PushV
	var_54_int = var_50_int; // 0x6b0 Mov
	func_1701(var_53_string, var_54_int); // 0x6b1 NEW_2
	HasAnimation(var_51_bool, var_52_string, var_53_string); // 0x6b3 Func
	var_58_bool = var_51_bool == 0; // 0x6b5 Not
	if(var_58_bool == 0) goto Label_1720; // 0x6b6 JumpB
	goto Label_1723; // 0x6b7 Jump
	
Label_1723:
	var_47_int = var_50_int; // 0x6bb Mov
	return 4; // 0x6bc Return
	
Label_1720:
	var_59_int = 1; // 0x6b8 PushI
	var_50_int = var_50_int + var_59_int; // 0x6b9 Add2
	goto Label_1710; // 0x6ba Jump
}


func_442(var_0_bool, var_1_object, var_37_int)
{
	var_38_int = 0; // 0x1bb PushI
	var_39_bool = var_37_int != var_38_int; // 0x1bc Neq
	if(var_39_bool == 0) goto Label_447; // 0x1bd JumpB
	return 0; // 0x1be Return
	
Label_447:
	var_40_bool = 0; var_41_object = Obj(); // 0x1bf PushV
	var_41_object = var_1_object; // 0x1c0 MovT
	func_480(var_40_bool, var_41_object); // 0x1c1 NEW_2
	var_76_bool = var_40_bool == 0; // 0x1c3 Not
	if(var_76_bool == 0) goto Label_454; // 0x1c4 JumpB
	var_0_bool = 1; // 0x1c5 TMovB
	
Label_454:
	var_77_int = 0; // 0x1c6 PushI
	KillTimer(var_77_int); // 0x1c7 Func
	Stop(); // 0x1c9 Func
	return 0; // 0x1cb Return
}


func_1727()
{
	var_59_string = "playsound"; // 0x6c0 PushS
	var_60_string = "giveitem"; // 0x6c1 PushS
	TriggerWorld(var_59_string, var_60_string); // 0x6c2 Func
	return 0; // 0x6c4 Return
}


func_1476(var_213_bool, var_214_object)
{
	var_215_int = 0; var_216_int = 0; // 0x5c4 PushV
	var_217_bool = 0; var_218_object = Obj(); // 0x5c5 PushV
	var_218_object = var_214_object; // 0x5c6 Mov
	func_1440(var_217_bool, var_218_object); // 0x5c7 NEW_2
	var_234_bool = var_217_bool == 0; // 0x5c9 Not
	if(var_234_bool == 0) goto Label_1485; // 0x5ca JumpB
	var_213_bool = 0; // 0x5cb MovB
	return 2; // 0x5cc Return
	
Label_1485:
	var_235_bool = 0; var_236_object = Obj(); var_237_string = ""; // 0x5cd PushV
	var_236_object = var_214_object; // 0x5ce Mov
	var_237_string = "noaccess"; // 0x5cf MovS
	func_1423(var_235_bool, var_236_object, var_237_string); // 0x5d0 NEW_2
	var_244_bool = var_235_bool == 0; // 0x5d2 Not
	if(var_244_bool == 0) goto Label_1494; // 0x5d3 JumpB
	var_213_bool = 1; // 0x5d4 MovB
	return 2; // 0x5d5 Return
	
Label_1494:
	var_245_string = "noaccess"; // 0x5d6 PushS
	GetProperty(var_245_string, var_216_int); // 0x5d7 ObjFunc
	var_246_int = 0; // 0x5d9 PushI
	var_213_bool = var_216_int == var_246_int; // 0x5da Eq2
	return 2; // 0x5db Return
}


func_1733()
{
	var_71_string = "ood4WhiteMask1"; // 0x6c6 PushS
	var_72_int = 1; // 0x6c7 PushI
	SetVariable(var_71_string, var_72_int); // 0x6c8 Func
	return 0; // 0x6ca Return
}


func_1221(var_22_int, var_23_object, var_26_object)
{
	var_24_int = 0; var_25_object = Obj(); // 0x4c6 PushV
	var_25_object = var_23_object; // 0x4c7 Mov
	TaskCall(4); // 0x4c8 TaskCall
	func_675(var_26_object, var_24_int, var_25_object); // 0x4c9 NEW_2
	TaskReturn(); // 0x4ca TaskReturn
	var_22_int = var_26_object; // 0x4cb Mov
	return 0; // 0x4cd Return
}


func_200(var_0_bool, var_1_object, var_49_int)
{
	var_50_int = 0; // 0xc9 PushI
	var_51_bool = var_49_int != var_50_int; // 0xca Neq
	if(var_51_bool == 0) goto Label_205; // 0xcb JumpB
	return 0; // 0xcc Return
	
Label_205:
	var_52_bool = 0; var_53_object = Obj(); // 0xcd PushV
	var_53_object = var_1_object; // 0xce MovT
	func_238(var_52_bool, var_53_object); // 0xcf NEW_2
	var_88_bool = var_52_bool == 0; // 0xd1 Not
	if(var_88_bool == 0) goto Label_212; // 0xd2 JumpB
	var_0_bool = 1; // 0xd3 TMovB
	
Label_212:
	var_89_int = 0; // 0xd4 PushI
	KillTimer(var_89_int); // 0xd5 Func
	Stop(); // 0xd7 Func
	return 0; // 0xd9 Return
}


func_1739(var_25_object)
{
	var_27_string = "d4q01KeyWhite"; // 0x6cc PushS
	var_28_int = 1; // 0x6cd PushI
	SetVariable(var_27_string, var_28_int); // 0x6ce Func
	var_29_string = "theaterkey is given"; // 0x6d0 PushS
	Trace(var_29_string); // 0x6d1 Func
	var_30_object = Obj(); var_31_string = ""; var_32_int = 0; // 0x6d3 PushV
	var_30_object = var_25_object; // 0x6d4 Mov
	var_31_string = "d4q01_theater_key"; // 0x6d5 MovS
	var_32_int = 1; // 0x6d6 MovI
	func_1676(var_30_object, var_31_string, var_32_int); // 0x6d7 NEW_2
	var_51_bool = 0; var_52_string = ""; var_53_string = ""; // 0x6d9 PushV
	var_52_string = "quest_d4_01"; // 0x6da MovS
	var_53_string = "init_theater"; // 0x6db MovS
	func_1689(var_51_bool, var_52_string, var_53_string); // 0x6dc NEW_2
	return 0; // 0x6de Return
}


func_464(var_0_bool)
{
	var_0_bool = 1; // 0x1d0 TMovB
	var_20_int = 0; // 0x1d1 PushI
	KillTimer(var_20_int); // 0x1d2 Func
	Stop(); // 0x1d4 Func
	return 0; // 0x1d6 Return
}


func_1500(var_43_bool)
{
	var_44_bool = 0; var_45_bool = 0; // 0x5dc PushV
	IsLoaded(var_45_bool); // 0x5dd Func
	var_43_bool = var_45_bool; // 0x5df Mov
	return 2; // 0x5e0 Return
}


func_222(var_0_bool)
{
	var_0_bool = 1; // 0xde TMovB
	var_20_int = 0; // 0xdf PushI
	KillTimer(var_20_int); // 0xe0 Func
	Stop(); // 0xe2 Func
	return 0; // 0xe4 Return
}


func_1759(var_85_object)
{
	var_87_string = "tvirin is given"; // 0x6e0 PushS
	Trace(var_87_string); // 0x6e1 Func
	var_88_object = Obj(); var_89_string = ""; var_90_int = 0; // 0x6e3 PushV
	var_88_object = var_85_object; // 0x6e4 Mov
	var_89_string = "tvirin"; // 0x6e5 MovS
	var_90_int = 1; // 0x6e6 MovI
	func_1676(var_88_object, var_89_string, var_90_int); // 0x6e7 NEW_2
	return 0; // 0x6e9 Return
}


func_480(var_320_bool, var_321_object)
{
	var_322_bool = 0; var_323_object = Obj(); // 0x1e1 PushV
	var_323_object = var_321_object; // 0x1e2 Mov
	func_1476(var_322_bool, var_323_object); // 0x1e3 NEW_2
	var_320_bool = var_322_bool; // 0x1e4 Mov
	return 0; // 0x1e6 Return
}


func_1505(var_35_bool, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0; // 0x5e1 PushV
	GetPosition(var_48_cvector); // 0x5e2 ObjFunc
	GetEyesHeight(var_47_float); // 0x5e4 ObjFunc
	var_56_float = GetByIndex(var_48_cvector, 1); // 0x5e6 PushE
	var_56_float = var_56_float + var_47_float; // 0x5e7 Add2
	SetByIndex(var_48_cvector, 1) = var_56_float; // 0x5e8 PopE
	GetPosition(var_49_cvector); // 0x5e9 Func
	GetEyesHeight(var_47_float); // 0x5eb Func
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x5ed PushE
	var_57_float = var_57_float + var_47_float; // 0x5ee Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x5ef PopE
	var_50_cvector = var_48_cvector - var_49_cvector; // 0x5f0 Sub2
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x5f1 PushE
	var_58_float = 0; // 0x5f2 MovI
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x5f3 PopE
	var_59_int = var_50_cvector | var_50_cvector; // 0x5f4 Or
	var_60_float = sqrt(var_59_int); // 0x5f5 Sqrt
	var_50_cvector = var_50_cvector / var_50_cvector; // 0x5f6 Div2
	var_51_cvector = -var_50_cvector; // 0x5f7 Neg2
	var_61_float = var_50_cvector * var_37_float; // 0x5f8 Mult
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x5f9 PushV
	var_64_cvector = CVector(0.0, 1.0, 0.0); // 0x5fa PushVec
	var_63_cvector = var_51_cvector ^ var_64_cvector; // 0x5fb Xor2
	func_1630(var_62_cvector, var_63_cvector); // 0x5fc NEW_2
	var_70_int = 25; // 0x5fe PushI
	var_71_float = var_62_cvector * var_70_int; // 0x5ff Mult
	var_72_int = var_61_float + var_71_float; // 0x600 Add
	var_73_cvector = CVector(0.0, 10.0, 0.0); // 0x601 PushVec
	var_52_cvector = var_72_int - var_73_cvector; // 0x602 Sub2
	var_53_cvector = var_49_cvector + var_52_cvector; // 0x603 Add2
	IsOverrideActive(var_54_bool); // 0x604 Func
	var_74_bool = var_54_bool; // 0x606 Push
	if(var_74_bool == 0) goto Label_1546; // 0x607 JumpB
	var_35_bool = 0; // 0x608 MovB
	return 18; // 0x609 Return
	
Label_1546:
	StopWorld(); // 0x60a Func
	var_75_bool = 1; // 0x60c PushB
	CameraTransit(var_53_cvector, var_51_cvector, var_75_bool); // 0x60d Func
	var_76_float = GetByIndex(var_52_cvector, 0); // 0x60f PushE
	var_77_float = GetByIndex(var_52_cvector, 2); // 0x610 PushE
	Rotate(var_76_float, var_77_float); // 0x611 Func
	var_78_bool = 0; // 0x613 PushV
	func_1817(var_78_bool); // 0x614 NEW_2
	if(var_78_bool == 0) goto Label_1560; // 0x616 JumpB
	goto Label_1568; // 0x617 Jump
	
Label_1568:
	CameraWaitForPlayFinish(); // 0x620 Func
	ResumeWorld(); // 0x622 Func
	var_35_bool = 1; // 0x624 MovB
	return 18; // 0x625 Return
	
Label_1560:
	var_79_string = "head"; // 0x618 PushS
	HasAnimationTrack(var_55_bool, var_79_string); // 0x619 Func
	var_80_bool = var_55_bool; // 0x61b Push
	if(var_80_bool == 0) goto Label_1568; // 0x61c JumpB
	var_81_string = "head"; // 0x61d PushS
	LookAsyncCamera(var_81_string); // 0x61e Func
}


func_487(var_338_string)
{
	var_338_string = "walk"; // 0x1e7 MovS
	return 0; // 0x1e8 Return
}


func_489(var_339_string)
{
	var_339_string = "run"; // 0x1e9 MovS
	return 0; // 0x1ea Return
}


func_1770()
{
	var_75_int = 0; // 0x6eb PushI
	SetReturnValue(var_75_int); // 0x6ec ObjFunc
	return 0; // 0x6ee Return
}


func_491()
{
	
Label_491:
	func_499(var_361_bool, var_362_bool); // 0x1ec NEW_2
	var_445_int = 1; // 0x1ee PushI
	Sleep(var_445_int); // 0x1ef Func
	goto Label_491; // 0x1f1 Jump
}


func_749(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_96_object, var_97_object)
{
	var_0_bool = var_97_object; // 0x2ee TMov
	var_1_object = var_96_object; // 0x2ef TMov
	var_3_int = 0; // 0x2f0 TMovB
	var_102_int = 1; // 0x2f1 PushI
	if(var_102_int == 0) goto Label_802; // 0x2f2 JumpB
	var_103_bool = 0; var_104_object = Obj(); // 0x2f3 PushV
	var_104_object = var_1_object; // 0x2f4 MovT
	func_1780(var_104_object); // 0x2f5 NEW_2
	if(var_103_bool == 0) goto Label_780; // 0x2f7 JumpB
	var_111_string = ""; // 0x2f8 PushV
	var_111_string = "Neutral"; // 0x2f9 MovS
	func_832(var_97_object, var_111_string); // 0x2fa NEW_2
	var_128_int = 509667; // 0x2fc PushI
	SetMessage(var_128_int); // 0x2fd TObjFunc
	ClearReplies(); // 0x2ff TObjFunc
	var_129_int = 509668; // 0x301 PushI
	var_130_int = 10643; // 0x302 PushI
	var_131_int = 10642; // 0x303 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x304 TObjFunc
	var_132_int = 509677; // 0x306 PushI
	var_133_int = 10653; // 0x307 PushI
	var_134_int = 10652; // 0x308 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x309 TObjFunc
	goto Label_802; // 0x30b Jump
	
Label_802:
	var_135_bool = 0; // 0x322 PushV
	func_1817(var_135_bool); // 0x323 NEW_2
	if(var_135_bool == 0) goto Label_817; // 0x325 JumpB
	
Label_806:
	lshWaitForAnimEnd(); // 0x326 Func
	var_136_int = var_3_int; // 0x328 PushT
	if(var_136_int == 0) goto Label_811; // 0x329 JumpB
	goto Label_816; // 0x32a Jump
	
Label_816:
	goto Label_831; // 0x330 Jump
	
Label_831:
	return 0; // 0x33f Return
	
Label_811:
	var_137_string = ""; // 0x32b PushV
	var_137_string = var_2_cvector; // 0x32c MovT
	func_1592(var_137_string); // 0x32d NEW_2
	goto Label_806; // 0x32f Jump
	
Label_817:
	var_148_string = "all"; // 0x331 PushS
	var_149_string = "idle"; // 0x332 PushS
	PlayAnimation(var_148_string, var_149_string); // 0x333 Func
	
Label_821:
	WaitForAnimEnd(); // 0x335 Func
	var_150_int = var_3_int; // 0x337 PushT
	if(var_150_int == 0) goto Label_826; // 0x338 JumpB
	goto Label_831; // 0x339 Jump
	
Label_826:
	var_151_string = "all"; // 0x33a PushS
	var_152_string = "idle"; // 0x33b PushS
	PlayAnimation(var_151_string, var_152_string); // 0x33c Func
	goto Label_821; // 0x33e Jump
	
Label_780:
	var_153_string = ""; // 0x30c PushV
	var_153_string = "Neutral"; // 0x30d MovS
	func_832(var_97_object, var_153_string); // 0x30e NEW_2
	var_154_int = 509681; // 0x310 PushI
	SetMessage(var_154_int); // 0x311 TObjFunc
	ClearReplies(); // 0x313 TObjFunc
	var_155_int = 509682; // 0x315 PushI
	var_156_int = 10660; // 0x316 PushI
	var_157_int = 10659; // 0x317 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x318 TObjFunc
	var_158_int = 509699; // 0x31a PushI
	var_159_int = -1; // 0x31b PushI
	var_160_int = 10678; // 0x31c PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x31d TObjFunc
	goto Label_802; // 0x31f Jump
}


func_238(var_211_bool, var_212_object)
{
	var_213_bool = 0; var_214_object = Obj(); // 0xef PushV
	var_214_object = var_212_object; // 0xf0 Mov
	func_1476(var_213_bool, var_214_object); // 0xf1 NEW_2
	var_211_bool = var_213_bool; // 0xf2 Mov
	return 0; // 0xf4 Return
}


func_1775()
{
	var_82_int = 1; // 0x6f0 PushI
	SetReturnValue(var_82_int); // 0x6f1 ObjFunc
	return 0; // 0x6f3 Return
}


func_499(var_0_bool, var_1_object)
{
	var_363_float = 0; var_364_cvector = CVector(0,0,0); var_365_cvector = CVector(0,0,0); var_366_bool = 0; var_367_object = Obj(); var_368_bool = 0; var_369_float = 0; var_370_cvector = CVector(0,0,0); var_371_cvector = CVector(0,0,0); var_372_bool = 0; var_373_object = Obj(); var_374_bool = 0; // 0x1f3 PushV
	var_0_bool = 0; // 0x1f4 TMovB
	var_1_object = 0; // 0x1f5 TMovB
	var_375_float = 0.5; // 0x1f6 PushF
	rand(var_369_float, var_375_float); // 0x1f7 Func
	Sleep(var_369_float); // 0x1f9 Func
	
Label_507:
	var_376_bool = var_0_bool == 0; // 0x1fb Not
	if(var_376_bool == 0) goto Label_557; // 0x1fc JumpB
	var_377_bool = var_1_object == 0; // 0x1fd Not
	if(var_377_bool == 0) goto Label_526; // 0x1fe JumpB
	
Label_511:
	GetPosition(var_371_cvector); // 0x1ff Func
	var_378_float = 0; // 0x201 PushV
	func_558(var_378_float); // 0x202 NEW_2
	GetRandomPFPointInCircle(var_370_cvector, var_371_cvector, var_378_float, var_372_bool); // 0x204 Func
	var_381_bool = var_372_bool; // 0x206 Push
	if(var_381_bool == 0) goto Label_521; // 0x207 JumpB
	goto Label_525; // 0x208 Jump
	
Label_525:
	goto Label_527; // 0x20d Jump
	
Label_527:
	var_382_object = Obj(); var_383_cvector = CVector(0,0,0); // 0x20f PushV
	var_383_cvector = var_370_cvector; // 0x210 Mov
	func_588(var_382_object, var_383_cvector); // 0x211 NEW_2
	var_373_object = var_382_object; // 0x212 Mov
	var_386_bool = var_373_object != 0; // 0x214 NullNeq
	if(var_386_bool == 0) goto Label_552; // 0x215 JumpB
	RotatePath(var_373_object, var_374_bool); // 0x216 Func
	var_387_bool = var_374_bool; // 0x218 Push
	if(var_387_bool == 0) goto Label_551; // 0x219 JumpB
	var_388_bool = 0; // 0x21a PushV
	func_586(var_388_bool); // 0x21b NEW_2
	FollowPath(var_373_object, var_388_bool, var_374_bool); // 0x21d Func
	var_373_object = 0; // 0x21f SetNull
	var_389_bool = var_374_bool; // 0x220 Push
	if(var_389_bool == 0) goto Label_551; // 0x221 JumpB
	TaskCall(3); // 0x223 TaskCall
	func_594(); // 0x224 NEW_2
	TaskReturn(); // 0x225 TaskReturn
	
Label_551:
	goto Label_555; // 0x227 Jump
	
Label_555:
	var_373_object = 0; // 0x22b SetNull
	goto Label_507; // 0x22c Jump
	
Label_552:
	var_443_int = 1; // 0x228 PushI
	Sleep(var_443_int); // 0x229 Func
	
Label_521:
	var_444_int = 1; // 0x209 PushI
	Sleep(var_444_int); // 0x20a Func
	goto Label_511; // 0x20c Jump
	
Label_526:
	var_1_object = 0; // 0x20e TMovB
	
Label_557:
	return 12; // 0x22d Return
}


func_1780(var_103_bool)
{
	var_105_int = 0; var_106_string = ""; // 0x6f5 PushV
	var_106_string = "ood4WhiteMask1"; // 0x6f6 MovS
	func_1640(var_105_int, var_106_string); // 0x6f7 NEW_2
	var_109_int = 0; // 0x6f9 PushI
	var_110_bool = var_105_int == var_109_int; // 0x6fa Eq
	if(var_110_bool == 0) goto Label_1790; // 0x6fb JumpB
	var_103_bool = 1; // 0x6fc MovB
	return 0; // 0x6fd Return
	
Label_1790:
	var_103_bool = 0; // 0x6fe MovB
	return 0; // 0x6ff Return
}


func_245(var_261_string)
{
	var_261_string = "walk"; // 0xf5 MovS
	return 0; // 0xf6 Return
}


func_247(var_262_string)
{
	var_262_string = "run"; // 0xf7 MovS
	return 0; // 0xf8 Return
}


func_249(var_3_int, var_4_int, var_5_int, var_289_object, var_295_int)
{
	GetPosition(var_295_int); // 0xfa Func
	var_4_int = 0; // 0xfc TMovI
	var_5_int = 0; // 0xfd TMovI
	var_296_int = 123; // 0xfe PushI
	var_297_float = 0.5; // 0xff PushF
	SetTimer(var_296_int, var_297_float); // 0x100 Func
	var_3_int = 0; // 0x102 TMovI
	
Label_259:
	var_298_bool = 0; var_299_object = Obj(); var_300_float = 0; var_301_float = 0; var_302_bool = 0; var_303_bool = 0; // 0x103 PushV
	var_299_object = var_289_object; // 0x104 Mov
	var_300_float = 250; // 0x105 MovI
	var_301_float = 3000; // 0x106 MovI
	var_302_bool = 1; // 0x107 MovB
	var_303_bool = 1; // 0x108 MovB
	func_340(var_295_int, var_289_object, var_298_bool, var_299_object, var_300_float, var_301_float, var_302_bool, var_303_bool); // 0x109 NEW_2
	var_349_bool = var_298_bool == 0; // 0x10b Not
	if(var_349_bool == 0) goto Label_275; // 0x10c JumpB
	var_350_int = 1; // 0x10d PushI
	var_3_int = var_3_int + var_350_int; // 0x10e Add2
	var_351_int = 1; // 0x10f PushI
	Sleep(var_351_int); // 0x110 Func
	goto Label_259; // 0x112 Jump
	
Label_275:
	var_352_int = 123; // 0x113 PushI
	KillTimer(var_352_int); // 0x114 Func
	return 0; // 0x116 Return
}


