task_0_event_7(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_cvector, var_10_int, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_float = 0; // 0x31 PushV
	var_26_int = 10; // 0x32 PushI
	var_27_bool = var_19_bool == var_26_int; // 0x33 Eq
	if(var_27_bool == 0) goto Label_62; // 0x34 JumpB
	var_28_int = 0; // 0x35 PushV
	func_1312(var_28_int); // 0x36 NEW_2
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
	func_1625(); // 0xeb NEW_2
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
	func_1625(); // 0x1dd NEW_2
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
	func_1625(); // 0x247 NEW_2
	return 0; // 0x249 Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_int, var_20_int)
{
	var_21_int = 1; // 0x361 PushI
	if(var_21_int == 0) goto Label_1120; // 0x362 JumpB
	func_1523(); // 0x364 NEW_2
	var_23_int = 10685; // 0x366 PushI
	var_24_bool = var_20_int == var_23_int; // 0x367 Eq
	if(var_24_bool == 0) goto Label_883; // 0x368 JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0x369 PushV
	var_25_object = var_1_object; // 0x36a MovT
	var_26_object = var_0_bool; // 0x36b MovT
	func_1633(var_26_object); // 0x36c NEW_2
	var_57_object = Obj(); var_58_object = Obj(); // 0x36e PushV
	var_57_object = var_1_object; // 0x36f MovT
	var_58_object = var_0_bool; // 0x370 MovT
	func_1627(); // 0x371 NEW_2
	
Label_883:
	var_61_int = 10687; // 0x373 PushI
	var_62_bool = var_20_int == var_61_int; // 0x374 Eq
	if(var_62_bool == 0) goto Label_896; // 0x375 JumpB
	var_63_object = Obj(); var_64_object = Obj(); // 0x376 PushV
	var_63_object = var_1_object; // 0x377 MovT
	var_64_object = var_0_bool; // 0x378 MovT
	func_1653(); // 0x379 NEW_2
	var_67_object = Obj(); var_68_object = Obj(); // 0x37b PushV
	var_67_object = var_1_object; // 0x37c MovT
	var_68_object = var_0_bool; // 0x37d MovT
	func_1670(); // 0x37e NEW_2
	
Label_896:
	var_70_int = 10688; // 0x380 PushI
	var_71_bool = var_20_int == var_70_int; // 0x381 Eq
	if(var_71_bool == 0) goto Label_909; // 0x382 JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0x383 PushV
	var_72_object = var_1_object; // 0x384 MovT
	var_73_object = var_0_bool; // 0x385 MovT
	func_1653(); // 0x386 NEW_2
	var_74_object = Obj(); var_75_object = Obj(); // 0x388 PushV
	var_74_object = var_1_object; // 0x389 MovT
	var_75_object = var_0_bool; // 0x38a MovT
	func_1675(); // 0x38b NEW_2
	
Label_909:
	var_77_int = 10698; // 0x38d PushI
	var_78_bool = var_20_int == var_77_int; // 0x38e Eq
	if(var_78_bool == 0) goto Label_922; // 0x38f JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x390 PushV
	var_79_object = var_1_object; // 0x391 MovT
	var_80_object = var_0_bool; // 0x392 MovT
	func_1659(var_80_object); // 0x393 NEW_2
	var_85_object = Obj(); var_86_object = Obj(); // 0x395 PushV
	var_85_object = var_1_object; // 0x396 MovT
	var_86_object = var_0_bool; // 0x397 MovT
	func_1627(); // 0x398 NEW_2
	
Label_922:
	var_87_int = 10680; // 0x39a PushI
	var_88_bool = var_19_int == var_87_int; // 0x39b Eq
	if(var_88_bool == 0) goto Label_980; // 0x39c JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x39d PushV
	var_90_object = var_1_object; // 0x39e MovT
	func_1680(var_90_object); // 0x39f NEW_2
	if(var_89_bool == 0) goto Label_950; // 0x3a1 JumpB
	var_97_string = ""; // 0x3a2 PushV
	var_97_string = "Neutral"; // 0x3a3 MovS
	func_842(var_20_int, var_97_string); // 0x3a4 NEW_2
	var_114_int = 509701; // 0x3a6 PushI
	SetMessage(var_114_int); // 0x3a7 TObjFunc
	ClearReplies(); // 0x3a9 TObjFunc
	var_115_int = 509702; // 0x3ab PushI
	var_116_int = 10682; // 0x3ac PushI
	var_117_int = 10681; // 0x3ad PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x3ae TObjFunc
	var_118_int = 509711; // 0x3b0 PushI
	var_119_int = 10682; // 0x3b1 PushI
	var_120_int = 10691; // 0x3b2 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x3b3 TObjFunc
	return 0; // 0x3b5 Return
	
Label_950:
	var_121_string = ""; // 0x3b6 PushV
	var_121_string = "Neutral"; // 0x3b7 MovS
	func_842(var_20_int, var_121_string); // 0x3b8 NEW_2
	var_122_int = 509712; // 0x3ba PushI
	SetMessage(var_122_int); // 0x3bb TObjFunc
	ClearReplies(); // 0x3bd TObjFunc
	var_123_int = 509713; // 0x3bf PushI
	var_124_int = 10695; // 0x3c0 PushI
	var_125_int = 10694; // 0x3c1 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x3c2 TObjFunc
	var_126_int = 509720; // 0x3c4 PushI
	var_127_int = 10702; // 0x3c5 PushI
	var_128_int = 10701; // 0x3c6 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x3c7 TObjFunc
	var_129_int = 509723; // 0x3c9 PushI
	var_130_int = 10695; // 0x3ca PushI
	var_131_int = 10705; // 0x3cb PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x3cc TObjFunc
	var_132_int = 509724; // 0x3ce PushI
	var_133_int = -1; // 0x3cf PushI
	var_134_int = 10707; // 0x3d0 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x3d1 TObjFunc
	return 0; // 0x3d3 Return
	
Label_980:
	var_135_int = 10702; // 0x3d4 PushI
	var_136_bool = var_19_int == var_135_int; // 0x3d5 Eq
	if(var_136_bool == 0) goto Label_998; // 0x3d6 JumpB
	var_137_string = ""; // 0x3d7 PushV
	var_137_string = "Neutral"; // 0x3d8 MovS
	func_842(var_20_int, var_137_string); // 0x3d9 NEW_2
	var_138_int = 509721; // 0x3db PushI
	SetMessage(var_138_int); // 0x3dc TObjFunc
	ClearReplies(); // 0x3de TObjFunc
	var_139_int = 509722; // 0x3e0 PushI
	var_140_int = 10697; // 0x3e1 PushI
	var_141_int = 10703; // 0x3e2 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x3e3 TObjFunc
	return 0; // 0x3e5 Return
	
Label_998:
	var_142_int = 10695; // 0x3e6 PushI
	var_143_bool = var_19_int == var_142_int; // 0x3e7 Eq
	if(var_143_bool == 0) goto Label_1021; // 0x3e8 JumpB
	var_144_string = ""; // 0x3e9 PushV
	var_144_string = "Neutral"; // 0x3ea MovS
	func_842(var_20_int, var_144_string); // 0x3eb NEW_2
	var_145_int = 509714; // 0x3ed PushI
	SetMessage(var_145_int); // 0x3ee TObjFunc
	ClearReplies(); // 0x3f0 TObjFunc
	var_146_int = 509715; // 0x3f2 PushI
	var_147_int = 10697; // 0x3f3 PushI
	var_148_int = 10696; // 0x3f4 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x3f5 TObjFunc
	var_149_int = 509719; // 0x3f7 PushI
	var_150_int = -1; // 0x3f8 PushI
	var_151_int = 10700; // 0x3f9 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x3fa TObjFunc
	return 0; // 0x3fc Return
	
Label_1021:
	var_152_int = 10697; // 0x3fd PushI
	var_153_bool = var_19_int == var_152_int; // 0x3fe Eq
	if(var_153_bool == 0) goto Label_1044; // 0x3ff JumpB
	var_154_string = ""; // 0x400 PushV
	var_154_string = "Neutral"; // 0x401 MovS
	func_842(var_20_int, var_154_string); // 0x402 NEW_2
	var_155_int = 509716; // 0x404 PushI
	SetMessage(var_155_int); // 0x405 TObjFunc
	ClearReplies(); // 0x407 TObjFunc
	var_156_int = 509717; // 0x409 PushI
	var_157_int = -1; // 0x40a PushI
	var_158_int = 10698; // 0x40b PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x40c TObjFunc
	var_159_int = 509718; // 0x40e PushI
	var_160_int = -1; // 0x40f PushI
	var_161_int = 10699; // 0x410 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x411 TObjFunc
	return 0; // 0x413 Return
	
Label_1044:
	var_162_int = 10682; // 0x414 PushI
	var_163_bool = var_19_int == var_162_int; // 0x415 Eq
	if(var_163_bool == 0) goto Label_1067; // 0x416 JumpB
	var_164_string = ""; // 0x417 PushV
	var_164_string = "Neutral"; // 0x418 MovS
	func_842(var_20_int, var_164_string); // 0x419 NEW_2
	var_165_int = 509703; // 0x41b PushI
	SetMessage(var_165_int); // 0x41c TObjFunc
	ClearReplies(); // 0x41e TObjFunc
	var_166_int = 509704; // 0x420 PushI
	var_167_int = 10684; // 0x421 PushI
	var_168_int = 10683; // 0x422 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x423 TObjFunc
	var_169_int = 509710; // 0x425 PushI
	var_170_int = 10684; // 0x426 PushI
	var_171_int = 10689; // 0x427 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x428 TObjFunc
	return 0; // 0x42a Return
	
Label_1067:
	var_172_int = 10684; // 0x42b PushI
	var_173_bool = var_19_int == var_172_int; // 0x42c Eq
	if(var_173_bool == 0) goto Label_1085; // 0x42d JumpB
	var_174_string = ""; // 0x42e PushV
	var_174_string = "Neutral"; // 0x42f MovS
	func_842(var_20_int, var_174_string); // 0x430 NEW_2
	var_175_int = 509705; // 0x432 PushI
	SetMessage(var_175_int); // 0x433 TObjFunc
	ClearReplies(); // 0x435 TObjFunc
	var_176_int = 509706; // 0x437 PushI
	var_177_int = 10686; // 0x438 PushI
	var_178_int = 10685; // 0x439 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x43a TObjFunc
	return 0; // 0x43c Return
	
Label_1085:
	var_179_int = 10686; // 0x43d PushI
	var_180_bool = var_19_int == var_179_int; // 0x43e Eq
	if(var_180_bool == 0) goto Label_1108; // 0x43f JumpB
	var_181_string = ""; // 0x440 PushV
	var_181_string = "Neutral"; // 0x441 MovS
	func_842(var_20_int, var_181_string); // 0x442 NEW_2
	var_182_int = 509707; // 0x444 PushI
	SetMessage(var_182_int); // 0x445 TObjFunc
	ClearReplies(); // 0x447 TObjFunc
	var_183_int = 509708; // 0x449 PushI
	var_184_int = -1; // 0x44a PushI
	var_185_int = 10687; // 0x44b PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x44c TObjFunc
	var_186_int = 509709; // 0x44e PushI
	var_187_int = -1; // 0x44f PushI
	var_188_int = 10688; // 0x450 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x451 TObjFunc
	return 0; // 0x453 Return
	
Label_1108:
	var_3_int = 1; // 0x454 TMovB
	var_189_bool = 0; // 0x455 PushV
	func_1717(var_189_bool); // 0x456 NEW_2
	if(var_189_bool == 0) goto Label_1116; // 0x458 JumpB
	lshStopAnimation(); // 0x459 Func
	goto Label_1118; // 0x45b Jump
	
Label_1118:
	return 0; // 0x45e Return
	
Label_1116:
	StopAnimation(); // 0x45c Func
	
Label_1120:
	return 0; // 0x460 Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_object)
{
	var_20_int = 0; var_21_int = 0; // 0x478 PushV
	func_1280(); // 0x47a NEW_2
	var_22_int = 0; var_23_object = Obj(); // 0x47c PushV
	var_23_object = var_19_object; // 0x47d Mov
	func_1121(var_21_int, var_22_int, var_23_object); // 0x47e NEW_2
	var_21_int = var_22_int; // 0x47f Mov
	var_176_int = 0; // 0x481 PushI
	var_177_bool = var_21_int == var_176_int; // 0x482 Eq
	if(var_177_bool == 0) goto Label_1185; // 0x483 JumpB
	var_178_bool = 0; var_179_string = ""; var_180_string = ""; // 0x484 PushV
	var_179_string = "quest_d4_01"; // 0x485 MovS
	var_180_string = "key2_done"; // 0x486 MovS
	func_1589(var_178_bool, var_179_string, var_180_string); // 0x487 NEW_2
	var_184_object = Obj(); // 0x489 PushV
	var_184_object = var_19_object; // 0x48a Mov
	TaskCall(0); // 0x48b TaskCall
	func_0(var_187_cvector, var_188_int, var_189_int, var_190_int, var_184_object); // 0x48c NEW_2
	TaskReturn(); // 0x48d TaskReturn
	var_295_object = Obj(); // 0x48f PushV
	var_295_object = var_19_object; // 0x490 Mov
	TaskCall(1); // 0x491 TaskCall
	func_249(var_298_cvector, var_299_int, var_300_int, var_301_int, var_295_object); // 0x492 NEW_2
	TaskReturn(); // 0x493 TaskReturn
	var_359_object = Obj(); // 0x495 PushV
	var_359_object = var_19_object; // 0x496 Mov
	TaskCall(7); // 0x497 TaskCall
	func_1293(var_359_object); // 0x498 NEW_2
	TaskReturn(); // 0x499 TaskReturn
	TaskCall(2); // 0x49c TaskCall
	func_491(); // 0x49d NEW_2
	TaskReturn(); // 0x49e TaskReturn
	goto Label_1198; // 0x4a0 Jump
	
Label_1198:
	return 2; // 0x4ae Return
	
Label_1185:
	var_452_int = 1; // 0x4a1 PushI
	var_453_bool = var_21_int == var_452_int; // 0x4a2 Eq
	if(var_453_bool == 0) goto Label_1198; // 0x4a3 JumpB
	var_454_bool = 0; var_455_string = ""; var_456_string = ""; // 0x4a4 PushV
	var_455_string = "quest_d4_01"; // 0x4a5 MovS
	var_456_string = "key2_done"; // 0x4a6 MovS
	func_1589(var_454_bool, var_455_string, var_456_string); // 0x4a7 NEW_2
	TaskCall(2); // 0x4aa TaskCall
	func_491(); // 0x4ab NEW_2
	TaskReturn(); // 0x4ac TaskReturn
}


event_41(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_object)
{
	return 0; // 0x65a Return
}


main(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = GlobalVars[0]; // 0x46a PushGE
	var_20_int = 0; // 0x46b PushV
	func_1312(var_20_int); // 0x46c NEW_2
	var_19_int = var_20_int; // 0x46d Mov
	GlobalVars[0] = var_19_int; // 0x46f PopGE
	
Label_1136:
	var_28_int = 3; // 0x470 PushI
	Sleep(var_28_int); // 0x471 Func
	func_1199(); // 0x474 NEW_2
	goto Label_1136; // 0x476 Jump
}


func_1280()
{
	StopAnimation(); // 0x500 Func
	StopGroup0(); // 0x502 Func
	return 0; // 0x504 Return
}


func_0(var_3_int, var_4_int, var_5_int, var_184_object, var_190_int)
{
	GetPosition(var_190_int); // 0x1 Func
	var_4_int = 0; // 0x3 TMovI
	var_5_int = 0; // 0x4 TMovI
	var_191_int = 123; // 0x5 PushI
	var_192_float = 0.5; // 0x6 PushF
	SetTimer(var_191_int, var_192_float); // 0x7 Func
	var_3_int = 0; // 0x9 TMovI
	var_193_int = 10; // 0xa PushI
	var_194_int = 1; // 0xb PushI
	SetTimer(var_193_int, var_194_int); // 0xc Func
	
Label_14:
	var_195_bool = 0; var_196_object = Obj(); var_197_float = 0; var_198_float = 0; var_199_bool = 0; var_200_bool = 0; // 0xe PushV
	var_196_object = var_184_object; // 0xf Mov
	var_197_float = 250; // 0x10 MovI
	var_198_float = 3000; // 0x11 MovI
	var_199_bool = 1; // 0x12 MovB
	var_200_bool = 1; // 0x13 MovB
	func_98(var_190_int, var_184_object, var_195_bool, var_196_object, var_197_float, var_198_float, var_199_bool, var_200_bool); // 0x14 NEW_2
	var_278_int = 1; // 0x16 PushI
	var_3_int = var_3_int + var_278_int; // 0x17 Add2
	var_279_int = 0; // 0x18 PushV
	func_1312(var_279_int); // 0x19 NEW_2
	var_287_int = GlobalVars[0]; // 0x1b PushGE
	var_288_bool = var_279_int != var_287_int; // 0x1c Neq
	if(var_288_bool == 0) goto Label_31; // 0x1d JumpB
	goto Label_42; // 0x1e Jump
	
Label_42:
	var_289_int = 10; // 0x2a PushI
	KillTimer(var_289_int); // 0x2b Func
	var_290_int = 123; // 0x2d PushI
	KillTimer(var_290_int); // 0x2e Func
	return 0; // 0x30 Return
	
Label_31:
	var_291_int = 1; // 0x1f PushI
	Sleep(var_291_int); // 0x20 Func
	var_292_int = 0; // 0x22 PushV
	func_1312(var_292_int); // 0x23 NEW_2
	var_293_int = GlobalVars[0]; // 0x25 PushGE
	var_294_bool = var_292_int != var_293_int; // 0x26 Neq
	if(var_294_bool == 0) goto Label_41; // 0x27 JumpB
	goto Label_42; // 0x28 Jump
	
Label_41:
	goto Label_14; // 0x29 Jump
}


func_1540(var_105_int, var_106_string)
{
	var_107_int = 0; var_108_int = 0; // 0x604 PushV
	GetVariable(var_106_string, var_108_int); // 0x605 Func
	var_105_int = var_108_int; // 0x607 Mov
	return 2; // 0x608 Return
}


func_1285(var_363_object)
{
	var_364_int = 0; var_365_object = Obj(); // 0x506 PushV
	var_365_object = var_363_object; // 0x507 Mov
	TaskCall(4); // 0x508 TaskCall
	func_675(var_366_object, var_364_int, var_365_object); // 0x509 NEW_2
	TaskReturn(); // 0x50a TaskReturn
	return 0; // 0x50c Return
}


func_1545(var_46_int, var_47_int)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x609 PushV
	CreateIntVector(var_49_object); // 0x60a Func
	add(var_46_int); // 0x60c ObjFunc
	add(var_47_int); // 0x60e ObjFunc
	var_50_int = 3; // 0x610 PushI
	SendWorldWndMessage(var_50_int, var_49_object); // 0x611 Func
	return 2; // 0x613 Return
}


func_1293(var_359_object)
{
	var_360_bool = 0; var_361_bool = 0; // 0x50d PushV
	
Label_1294:
	IsOverrideActive(var_361_bool); // 0x50e Func
	var_362_bool = var_361_bool == 0; // 0x510 Not
	if(var_362_bool == 0) goto Label_1299; // 0x511 JumpB
	goto Label_1300; // 0x512 Jump
	
Label_1300:
	var_363_object = Obj(); // 0x514 PushV
	var_363_object = var_359_object; // 0x515 Mov
	func_1285(var_363_object); // 0x516 NEW_2
	Hold(); // 0x518 Func
	return 2; // 0x51a Return
	
Label_1299:
	goto Label_1294; // 0x513 Jump
}


func_1557(var_36_object, var_37_int)
{
	var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; // 0x615 PushV
	GetItemID(var_41_int); // 0x616 ObjFunc
	var_44_string = "Category"; // 0x618 PushS
	GetInvItemProperty(var_42_int, var_41_int, var_44_string); // 0x619 Func
	AddItem(var_43_bool, var_36_object, var_42_int, var_37_int); // 0x61b ObjFunc
	var_45_bool = var_43_bool == 0; // 0x61d Not
	if(var_45_bool == 0) goto Label_1570; // 0x61e JumpB
	DropItems(var_36_object, var_37_int); // 0x61f ObjFunc
	goto Label_1575; // 0x621 Jump
	
Label_1575:
	return 6; // 0x627 Return
	
Label_1570:
	var_46_int = 0; var_47_int = 0; // 0x622 PushV
	var_46_int = var_41_int; // 0x623 Mov
	var_47_int = var_37_int; // 0x624 Mov
	func_1545(var_46_int, var_47_int); // 0x625 NEW_2
}


func_1307(var_25_cvector)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x51b PushV
	GetPosition(var_27_cvector); // 0x51c Func
	var_25_cvector = var_27_cvector; // 0x51e Mov
	return 2; // 0x51f Return
}


func_1312(var_20_int)
{
	var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); var_24_int = 0; // 0x520 PushV
	GetScene(var_23_object); // 0x521 Func
	var_25_cvector = CVector(0,0,0); // 0x523 PushV
	func_1307(var_25_cvector); // 0x524 NEW_2
	GetRegionByPt(var_24_int, var_25_cvector); // 0x526 ObjFunc
	var_20_int = var_24_int; // 0x528 Mov
	return 4; // 0x529 Return
}


func_1576(var_30_object, var_31_string, var_32_int)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x628 PushV
	CreateInvItem(var_34_object); // 0x629 Func
	SetItemName(var_31_string); // 0x62b ObjFunc
	var_35_object = Obj(); var_36_object = Obj(); var_37_int = 0; // 0x62d PushV
	var_35_object = var_30_object; // 0x62e Mov
	var_36_object = var_34_object; // 0x62f Mov
	var_37_int = var_32_int; // 0x630 Mov
	func_1557(var_36_object, var_37_int); // 0x631 NEW_2
	return 2; // 0x633 Return
}


func_1323(var_241_bool, var_242_object, var_243_string)
{
	var_244_bool = 0; var_245_bool = 0; // 0x52b PushV
	var_246_string = "HasProperty"; // 0x52c PushS
	var_247_int = 2; // 0x52d PushI
	var_248_bool = IsFuncExist(var_242_object, var_246_string, var_247_int); // 0x52e FuncExist
	var_249_bool = var_248_bool == 0; // 0x52f Not
	if(var_249_bool == 0) goto Label_1331; // 0x530 JumpB
	var_241_bool = 0; // 0x531 MovB
	return 2; // 0x532 Return
	
Label_1331:
	HasProperty(var_243_string, var_245_bool); // 0x533 ObjFunc
	var_241_bool = var_245_bool; // 0x535 Mov
	return 2; // 0x536 Return
}


func_558(var_384_float)
{
	var_385_float = 0; var_386_float = 0; // 0x22e PushV
	GetCameraFarDistance(var_386_float); // 0x22f Func
	var_384_float = var_386_float; // 0x231 Mov
	return 2; // 0x232 Return
}


func_1589(var_178_bool, var_179_string, var_180_string)
{
	var_181_object = Obj(); var_182_object = Obj(); // 0x635 PushV
	FindActor(var_182_object, var_179_string); // 0x636 Func
	var_183_bool = var_182_object == 0; // 0x638 NullEq
	if(var_183_bool == 0) goto Label_1596; // 0x639 JumpB
	var_178_bool = 0; // 0x63a MovB
	return 2; // 0x63b Return
	
Label_1596:
	Trigger(var_182_object, var_180_string); // 0x63c Func
	var_178_bool = 1; // 0x63e MovB
	return 2; // 0x63f Return
}


func_1335(var_234_bool)
{
	var_236_bool = 0; var_237_bool = 0; // 0x537 PushV
	IsDead(var_237_bool); // 0x538 ObjFunc
	var_234_bool = var_237_bool; // 0x53a Mov
	return 2; // 0x53b Return
}


func_570(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x23a TMovB
	var_1_object = 0; // 0x23b TMovB
	Stop(); // 0x23c Func
	StopGroup0(); // 0x23e Func
	return 0; // 0x240 Return
}


func_1340(var_223_bool, var_224_object)
{
	var_225_object = Obj(); var_226_object = Obj(); var_227_object = Obj(); var_228_object = Obj(); // 0x53c PushV
	var_229_bool = var_224_object == 0; // 0x53d NullEq
	if(var_229_bool == 0) goto Label_1345; // 0x53e JumpB
	var_223_bool = 0; // 0x53f MovB
	return 4; // 0x540 Return
	
Label_1345:
	var_230_bool = 0; // 0x541 PushV
	var_230_bool = 0; // 0x542 MovB
	var_231_string = "IsDead"; // 0x543 PushS
	var_232_int = 1; // 0x544 PushI
	var_233_bool = IsFuncExist(var_224_object, var_231_string, var_232_int); // 0x545 FuncExist
	if(var_233_bool == 0) goto Label_1357; // 0x546 JumpB
	var_234_bool = 0; var_235_object = Obj(); // 0x547 PushV
	var_235_object = var_224_object; // 0x548 Mov
	func_1335(var_235_object); // 0x549 NEW_2
	if(var_234_bool == 0) goto Label_1357; // 0x54b JumpB
	var_230_bool = 1; // 0x54c MovB
	
Label_1357:
	if(var_230_bool == 0) goto Label_1360; // 0x54d JumpB
	var_223_bool = 0; // 0x54e MovB
	return 4; // 0x54f Return
	
Label_1360:
	GetScene(var_227_object); // 0x550 Func
	var_238_bool = var_227_object == 0; // 0x552 NullEq
	if(var_238_bool == 0) goto Label_1366; // 0x553 JumpB
	var_223_bool = 0; // 0x554 MovB
	return 4; // 0x555 Return
	
Label_1366:
	GetScene(var_228_object); // 0x556 ObjFunc
	var_239_bool = var_227_object != var_228_object; // 0x558 Neq
	if(var_239_bool == 0) goto Label_1372; // 0x559 JumpB
	var_223_bool = 0; // 0x55a MovB
	return 4; // 0x55b Return
	
Label_1372:
	var_223_bool = 1; // 0x55c MovB
	return 4; // 0x55d Return
}


func_1601(var_53_string, var_54_int)
{
	var_55_string = ""; var_56_string = ""; // 0x641 PushV
	var_56_string = "idle"; // 0x642 MovS
	var_57_int = var_54_int; // 0x643 Push
	if(var_57_int == 0) goto Label_1606; // 0x644 JumpB
	var_56_string = var_56_string + var_54_int; // 0x645 Add2
	
Label_1606:
	var_53_string = var_56_string; // 0x646 Mov
	return 2; // 0x647 Return
}


func_1608(var_47_int)
{
	var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0; // 0x648 PushV
	var_50_int = 0; // 0x649 MovI
	
Label_1610:
	var_52_string = "all"; // 0x64a PushS
	var_53_string = ""; var_54_int = 0; // 0x64b PushV
	var_54_int = var_50_int; // 0x64c Mov
	func_1601(var_53_string, var_54_int); // 0x64d NEW_2
	HasAnimation(var_51_bool, var_52_string, var_53_string); // 0x64f Func
	var_58_bool = var_51_bool == 0; // 0x651 Not
	if(var_58_bool == 0) goto Label_1620; // 0x652 JumpB
	goto Label_1623; // 0x653 Jump
	
Label_1623:
	var_47_int = var_50_int; // 0x657 Mov
	return 4; // 0x658 Return
	
Label_1620:
	var_59_int = 1; // 0x654 PushI
	var_50_int = var_50_int + var_59_int; // 0x655 Add2
	goto Label_1610; // 0x656 Jump
}


func_586(var_394_bool)
{
	var_394_bool = 0; // 0x24a MovB
	return 0; // 0x24b Return
}


func_842(var_2_cvector, var_111_string)
{
	var_112_bool = 0; // 0x34b PushV
	func_1717(var_112_bool); // 0x34c NEW_2
	var_113_bool = var_112_bool == 0; // 0x34e Not
	if(var_113_bool == 0) goto Label_849; // 0x34f JumpB
	return 0; // 0x350 Return
	
Label_849:
	var_114_bool = var_111_string == var_2_cvector; // 0x351 Eq
	if(var_114_bool == 0) goto Label_852; // 0x352 JumpB
	return 0; // 0x353 Return
	
Label_852:
	var_115_string = ""; var_116_bool = 0; // 0x354 PushV
	var_115_string = var_111_string; // 0x355 Mov
	var_117_string = ""; // 0x356 PushS
	var_118_bool = var_111_string == var_117_string; // 0x357 Eq
	if(var_118_bool == 0) goto Label_859; // 0x358 JumpB
	var_116_bool = 0; // 0x359 MovB
	goto Label_860; // 0x35a Jump
	
Label_860:
	func_1508(var_115_string, var_116_bool); // 0x35c NEW_2
	var_2_cvector = var_111_string; // 0x35e TMov
	return 0; // 0x35f Return
	
Label_859:
	var_116_bool = 1; // 0x35b MovB
}


func_588(var_388_object, var_389_cvector)
{
	var_390_object = Obj(); var_391_object = Obj(); // 0x24c PushV
	FindShiftedPathTo(var_391_object, var_389_cvector); // 0x24d Func
	var_388_object = var_391_object; // 0x24f Mov
	return 2; // 0x250 Return
}


func_594()
{
	var_396_int = 0; var_397_int = 0; var_398_int = 0; var_399_int = 0; var_400_bool = 0; var_401_float = 0; var_402_bool = 0; var_403_int = 0; var_404_int = 0; var_405_int = 0; var_406_int = 0; var_407_bool = 0; var_408_float = 0; var_409_bool = 0; // 0x252 PushV
	WaitForAnimEnd(); // 0x253 Func
	var_410_bool = 0; // 0x255 PushV
	func_1400(var_410_bool); // 0x256 NEW_2
	var_413_bool = var_410_bool == 0; // 0x258 Not
	if(var_413_bool == 0) goto Label_603; // 0x259 JumpB
	return 14; // 0x25a Return
	
Label_603:
	var_414_int = 0; // 0x25b PushV
	func_1608(var_414_int); // 0x25c NEW_2
	var_403_int = var_414_int; // 0x25d Mov
	var_404_int = 0; // 0x25f MovI
	
Label_608:
	var_427_bool = 0; // 0x260 PushV
	var_427_bool = 0; // 0x261 MovB
	var_428_int = 5; // 0x262 PushI
	var_429_bool = var_404_int < var_428_int; // 0x263 LT
	if(var_429_bool == 0) goto Label_618; // 0x264 JumpB
	var_430_bool = 0; // 0x265 PushV
	func_1400(var_430_bool); // 0x266 NEW_2
	if(var_430_bool == 0) goto Label_618; // 0x268 JumpB
	var_427_bool = 1; // 0x269 MovB
	
Label_618:
	if(var_427_bool == 0) goto Label_670; // 0x26a JumpB
	var_431_int = 3; // 0x26b PushI
	irand(var_405_int, var_431_int); // 0x26c Func
	var_432_int = 0; // 0x26e PushI
	var_433_bool = var_405_int == var_432_int; // 0x26f Eq
	if(var_433_bool == 0) goto Label_642; // 0x270 JumpB
	var_434_int = var_403_int; // 0x271 Push
	if(var_434_int == 0) goto Label_641; // 0x272 JumpB
	irand(var_406_int, var_403_int); // 0x273 Func
	var_435_string = "all"; // 0x275 PushS
	var_436_string = ""; var_437_int = 0; // 0x276 PushV
	var_437_int = var_406_int; // 0x277 Mov
	func_1601(var_436_string, var_437_int); // 0x278 NEW_2
	PlayAnimation(var_435_string, var_436_string); // 0x27a Func
	WaitForAnimEnd(var_407_bool); // 0x27c Func
	var_438_bool = var_407_bool == 0; // 0x27e Not
	if(var_438_bool == 0) goto Label_641; // 0x27f JumpB
	goto Label_670; // 0x280 Jump
	
Label_670:
	ResetAAS(); // 0x29e Func
	return 14; // 0x2a0 Return
	
Label_641:
	goto Label_659; // 0x281 Jump
	
Label_659:
	var_439_bool = 0; // 0x293 PushV
	func_673(var_439_bool); // 0x294 NEW_2
	var_440_bool = var_439_bool == 0; // 0x296 Not
	if(var_440_bool == 0) goto Label_665; // 0x297 JumpB
	goto Label_670; // 0x298 Jump
	
Label_665:
	ResetAAS(); // 0x299 Func
	var_441_int = 1; // 0x29b PushI
	var_404_int = var_404_int + var_441_int; // 0x29c Add2
	goto Label_608; // 0x29d Jump
	
Label_642:
	var_442_int = 1; // 0x282 PushI
	var_443_bool = var_405_int == var_442_int; // 0x283 Eq
	if(var_443_bool == 0) goto Label_656; // 0x284 JumpB
	var_444_int = 4; // 0x285 PushI
	rand(var_408_float, var_444_int); // 0x286 Func
	var_445_int = 1; // 0x288 PushI
	var_446_int = var_408_float + var_445_int; // 0x289 Add
	Sleep(var_446_int, var_409_bool); // 0x28a Func
	var_447_bool = var_409_bool == 0; // 0x28c Not
	if(var_447_bool == 0) goto Label_655; // 0x28d JumpB
	goto Label_670; // 0x28e Jump
	
Label_655:
	goto Label_659; // 0x28f Jump
	
Label_656:
	var_448_int = var_404_int; // 0x290 Push
	if(var_448_int == 0) goto Label_659; // 0x291 JumpB
	goto Label_670; // 0x292 Jump
}


func_340(var_0_bool, var_1_object, var_304_bool, var_305_object, var_306_float, var_307_float, var_308_bool, var_309_bool)
{
	var_310_bool = 0; var_311_bool = 0; var_312_object = Obj(); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0; var_317_object = Obj(); var_318_bool = 0; var_319_bool = 0; var_320_object = Obj(); var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_float = 0; var_325_object = Obj(); // 0x154 PushV
	var_0_bool = 0; // 0x155 TMovB
	var_1_object = var_305_object; // 0x156 TMov
	var_319_bool = var_309_bool; // 0x157 Mov
	
Label_344:
	var_326_bool = 0; var_327_object = Obj(); // 0x158 PushV
	var_327_object = var_305_object; // 0x159 Mov
	func_480(var_326_bool, var_327_object); // 0x15a NEW_2
	var_330_bool = var_326_bool == 0; // 0x15c Not
	if(var_330_bool == 0) goto Label_352; // 0x15d JumpB
	var_304_bool = 0; // 0x15e MovB
	return 16; // 0x15f Return
	
Label_352:
	GetPosition(var_321_cvector); // 0x160 ObjFunc
	GetPosition(var_322_cvector); // 0x162 Func
	var_323_cvector = var_321_cvector - var_322_cvector; // 0x164 Sub2
	var_324_float = var_323_cvector | var_323_cvector; // 0x165 Or2
	var_331_bool = 0; // 0x166 PushV
	var_331_bool = 0; // 0x167 MovB
	var_332_int = 0; // 0x168 PushI
	var_333_bool = var_307_float > var_332_int; // 0x169 GT
	if(var_333_bool == 0) goto Label_367; // 0x16a JumpB
	var_334_float = var_307_float * var_307_float; // 0x16b Mult
	var_335_bool = var_324_float > var_334_float; // 0x16c GT
	if(var_335_bool == 0) goto Label_367; // 0x16d JumpB
	var_331_bool = 1; // 0x16e MovB
	
Label_367:
	if(var_331_bool == 0) goto Label_372; // 0x16f JumpB
	Stop(); // 0x170 Func
	var_304_bool = 0; // 0x172 MovB
	return 16; // 0x173 Return
	
Label_372:
	var_336_float = var_306_float * var_306_float; // 0x174 Mult
	var_337_bool = var_324_float > var_336_float; // 0x175 GT
	if(var_337_bool == 0) goto Label_434; // 0x176 JumpB
	GetPFPosition(var_321_cvector); // 0x177 ObjFunc
	FindPathTo(var_325_object, var_321_cvector); // 0x179 Func
	var_338_bool = var_325_object != 0; // 0x17b NullNeq
	if(var_338_bool == 0) goto Label_383; // 0x17c JumpB
	var_320_object = var_325_object; // 0x17d Mov
	var_325_object = 0; // 0x17e SetNull
	
Label_383:
	var_339_bool = var_320_object != 0; // 0x17f NullNeq
	if(var_339_bool == 0) goto Label_416; // 0x180 JumpB
	var_340_bool = var_319_bool; // 0x181 Push
	if(var_340_bool == 0) goto Label_393; // 0x182 JumpB
	var_319_bool = 0; // 0x183 MovB
	RotatePath(var_320_object, var_318_bool); // 0x184 Func
	var_341_bool = var_318_bool == 0; // 0x186 Not
	if(var_341_bool == 0) goto Label_393; // 0x187 JumpB
	goto Label_440; // 0x188 Jump
	
Label_440:
	var_304_bool = !var_0_bool; // 0x1b8 Not2
	return 16; // 0x1b9 Return
	
Label_393:
	var_342_int = 0; // 0x189 PushI
	var_343_float = 0.3; // 0x18a PushF
	SetTimer(var_342_int, var_343_float); // 0x18b Func
	var_344_string = ""; // 0x18d PushV
	func_487(var_344_string); // 0x18e NEW_2
	var_345_string = ""; // 0x190 PushV
	func_489(var_345_string); // 0x191 NEW_2
	FollowPath(var_320_object, var_308_bool, var_318_bool, var_344_string, var_345_string); // 0x193 Func
	var_346_bool = var_318_bool == 0; // 0x195 Not
	if(var_346_bool == 0) goto Label_414; // 0x196 JumpB
	var_347_bool = var_0_bool; // 0x197 PushT
	if(var_347_bool == 0) goto Label_412; // 0x198 JumpB
	var_320_object = 0; // 0x199 SetNull
	goto Label_440; // 0x19a Jump
	
Label_412:
	goto Label_439; // 0x19c Jump
	
Label_439:
	goto Label_344; // 0x1b7 Jump
	
Label_414:
	var_320_object = 0; // 0x19e SetNull
	goto Label_432; // 0x19f Jump
	
Label_432:
	var_325_object = 0; // 0x1b0 SetNull
	goto Label_438; // 0x1b1 Jump
	
Label_438:
	var_320_object = 0; // 0x1b6 SetNull
	
Label_416:
	var_348_int = 0; // 0x1a0 PushI
	KillTimer(var_348_int); // 0x1a1 Func
	var_349_float = 0.5; // 0x1a3 PushF
	Sleep(var_349_float, var_318_bool); // 0x1a4 Func
	var_350_bool = var_318_bool == 0; // 0x1a6 Not
	if(var_350_bool == 0) goto Label_428; // 0x1a7 JumpB
	var_351_bool = var_0_bool; // 0x1a8 PushT
	if(var_351_bool == 0) goto Label_428; // 0x1a9 JumpB
	var_320_object = 0; // 0x1aa SetNull
	goto Label_440; // 0x1ab Jump
	
Label_428:
	var_352_int = 0; // 0x1ac PushI
	var_353_float = 0.3; // 0x1ad PushF
	SetTimer(var_352_int, var_353_float); // 0x1ae Func
	
Label_434:
	var_354_int = 0; // 0x1b2 PushI
	KillTimer(var_354_int); // 0x1b3 Func
	goto Label_440; // 0x1b5 Jump
}


func_1627()
{
	var_59_string = "playsound"; // 0x65c PushS
	var_60_string = "giveitem"; // 0x65d PushS
	TriggerWorld(var_59_string, var_60_string); // 0x65e Func
	return 0; // 0x660 Return
}


func_1376(var_219_bool, var_220_object)
{
	var_221_int = 0; var_222_int = 0; // 0x560 PushV
	var_223_bool = 0; var_224_object = Obj(); // 0x561 PushV
	var_224_object = var_220_object; // 0x562 Mov
	func_1340(var_223_bool, var_224_object); // 0x563 NEW_2
	var_240_bool = var_223_bool == 0; // 0x565 Not
	if(var_240_bool == 0) goto Label_1385; // 0x566 JumpB
	var_219_bool = 0; // 0x567 MovB
	return 2; // 0x568 Return
	
Label_1385:
	var_241_bool = 0; var_242_object = Obj(); var_243_string = ""; // 0x569 PushV
	var_242_object = var_220_object; // 0x56a Mov
	var_243_string = "noaccess"; // 0x56b MovS
	func_1323(var_241_bool, var_242_object, var_243_string); // 0x56c NEW_2
	var_250_bool = var_241_bool == 0; // 0x56e Not
	if(var_250_bool == 0) goto Label_1394; // 0x56f JumpB
	var_219_bool = 1; // 0x570 MovB
	return 2; // 0x571 Return
	
Label_1394:
	var_251_string = "noaccess"; // 0x572 PushS
	GetProperty(var_251_string, var_222_int); // 0x573 ObjFunc
	var_252_int = 0; // 0x575 PushI
	var_219_bool = var_222_int == var_252_int; // 0x576 Eq2
	return 2; // 0x577 Return
}


func_1633(var_25_object)
{
	var_27_string = "d4q01KeyWasted"; // 0x662 PushS
	var_28_int = 1; // 0x663 PushI
	SetVariable(var_27_string, var_28_int); // 0x664 Func
	var_29_string = "soborkey is given"; // 0x666 PushS
	Trace(var_29_string); // 0x667 Func
	var_30_object = Obj(); var_31_string = ""; var_32_int = 0; // 0x669 PushV
	var_30_object = var_25_object; // 0x66a Mov
	var_31_string = "d4q01_sobor_key"; // 0x66b MovS
	var_32_int = 1; // 0x66c MovI
	func_1576(var_30_object, var_31_string, var_32_int); // 0x66d NEW_2
	var_51_bool = 0; var_52_string = ""; var_53_string = ""; // 0x66f PushV
	var_52_string = "quest_d4_01"; // 0x670 MovS
	var_53_string = "init_sobor"; // 0x671 MovS
	func_1589(var_51_bool, var_52_string, var_53_string); // 0x672 NEW_2
	return 0; // 0x674 Return
}


func_98(var_0_bool, var_1_object, var_195_bool, var_196_object, var_197_float, var_198_float, var_199_bool, var_200_bool)
{
	var_201_bool = 0; var_202_bool = 0; var_203_object = Obj(); var_204_cvector = CVector(0,0,0); var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_float = 0; var_208_object = Obj(); var_209_bool = 0; var_210_bool = 0; var_211_object = Obj(); var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_object = Obj(); // 0x62 PushV
	var_0_bool = 0; // 0x63 TMovB
	var_1_object = var_196_object; // 0x64 TMov
	var_210_bool = var_200_bool; // 0x65 Mov
	
Label_102:
	var_217_bool = 0; var_218_object = Obj(); // 0x66 PushV
	var_218_object = var_196_object; // 0x67 Mov
	func_238(var_217_bool, var_218_object); // 0x68 NEW_2
	var_253_bool = var_217_bool == 0; // 0x6a Not
	if(var_253_bool == 0) goto Label_110; // 0x6b JumpB
	var_195_bool = 0; // 0x6c MovB
	return 16; // 0x6d Return
	
Label_110:
	GetPosition(var_212_cvector); // 0x6e ObjFunc
	GetPosition(var_213_cvector); // 0x70 Func
	var_214_cvector = var_212_cvector - var_213_cvector; // 0x72 Sub2
	var_215_float = var_214_cvector | var_214_cvector; // 0x73 Or2
	var_254_bool = 0; // 0x74 PushV
	var_254_bool = 0; // 0x75 MovB
	var_255_int = 0; // 0x76 PushI
	var_256_bool = var_198_float > var_255_int; // 0x77 GT
	if(var_256_bool == 0) goto Label_125; // 0x78 JumpB
	var_257_float = var_198_float * var_198_float; // 0x79 Mult
	var_258_bool = var_215_float > var_257_float; // 0x7a GT
	if(var_258_bool == 0) goto Label_125; // 0x7b JumpB
	var_254_bool = 1; // 0x7c MovB
	
Label_125:
	if(var_254_bool == 0) goto Label_130; // 0x7d JumpB
	Stop(); // 0x7e Func
	var_195_bool = 0; // 0x80 MovB
	return 16; // 0x81 Return
	
Label_130:
	var_259_float = var_197_float * var_197_float; // 0x82 Mult
	var_260_bool = var_215_float > var_259_float; // 0x83 GT
	if(var_260_bool == 0) goto Label_192; // 0x84 JumpB
	GetPFPosition(var_212_cvector); // 0x85 ObjFunc
	FindPathTo(var_216_object, var_212_cvector); // 0x87 Func
	var_261_bool = var_216_object != 0; // 0x89 NullNeq
	if(var_261_bool == 0) goto Label_141; // 0x8a JumpB
	var_211_object = var_216_object; // 0x8b Mov
	var_216_object = 0; // 0x8c SetNull
	
Label_141:
	var_262_bool = var_211_object != 0; // 0x8d NullNeq
	if(var_262_bool == 0) goto Label_174; // 0x8e JumpB
	var_263_bool = var_210_bool; // 0x8f Push
	if(var_263_bool == 0) goto Label_151; // 0x90 JumpB
	var_210_bool = 0; // 0x91 MovB
	RotatePath(var_211_object, var_209_bool); // 0x92 Func
	var_264_bool = var_209_bool == 0; // 0x94 Not
	if(var_264_bool == 0) goto Label_151; // 0x95 JumpB
	goto Label_198; // 0x96 Jump
	
Label_198:
	var_195_bool = !var_0_bool; // 0xc6 Not2
	return 16; // 0xc7 Return
	
Label_151:
	var_265_int = 0; // 0x97 PushI
	var_266_float = 0.3; // 0x98 PushF
	SetTimer(var_265_int, var_266_float); // 0x99 Func
	var_267_string = ""; // 0x9b PushV
	func_245(var_267_string); // 0x9c NEW_2
	var_268_string = ""; // 0x9e PushV
	func_247(var_268_string); // 0x9f NEW_2
	FollowPath(var_211_object, var_199_bool, var_209_bool, var_267_string, var_268_string); // 0xa1 Func
	var_269_bool = var_209_bool == 0; // 0xa3 Not
	if(var_269_bool == 0) goto Label_172; // 0xa4 JumpB
	var_270_bool = var_0_bool; // 0xa5 PushT
	if(var_270_bool == 0) goto Label_170; // 0xa6 JumpB
	var_211_object = 0; // 0xa7 SetNull
	goto Label_198; // 0xa8 Jump
	
Label_170:
	goto Label_197; // 0xaa Jump
	
Label_197:
	goto Label_102; // 0xc5 Jump
	
Label_172:
	var_211_object = 0; // 0xac SetNull
	goto Label_190; // 0xad Jump
	
Label_190:
	var_216_object = 0; // 0xbe SetNull
	goto Label_196; // 0xbf Jump
	
Label_196:
	var_211_object = 0; // 0xc4 SetNull
	
Label_174:
	var_271_int = 0; // 0xae PushI
	KillTimer(var_271_int); // 0xaf Func
	var_272_float = 0.5; // 0xb1 PushF
	Sleep(var_272_float, var_209_bool); // 0xb2 Func
	var_273_bool = var_209_bool == 0; // 0xb4 Not
	if(var_273_bool == 0) goto Label_186; // 0xb5 JumpB
	var_274_bool = var_0_bool; // 0xb6 PushT
	if(var_274_bool == 0) goto Label_186; // 0xb7 JumpB
	var_211_object = 0; // 0xb8 SetNull
	goto Label_198; // 0xb9 Jump
	
Label_186:
	var_275_int = 0; // 0xba PushI
	var_276_float = 0.3; // 0xbb PushF
	SetTimer(var_275_int, var_276_float); // 0xbc Func
	
Label_192:
	var_277_int = 0; // 0xc0 PushI
	KillTimer(var_277_int); // 0xc1 Func
	goto Label_198; // 0xc3 Jump
}


func_1121(var_22_int, var_23_object, var_26_object)
{
	var_24_int = 0; var_25_object = Obj(); // 0x462 PushV
	var_25_object = var_23_object; // 0x463 Mov
	TaskCall(4); // 0x464 TaskCall
	func_675(var_26_object, var_24_int, var_25_object); // 0x465 NEW_2
	TaskReturn(); // 0x466 TaskReturn
	var_22_int = var_26_object; // 0x467 Mov
	return 0; // 0x469 Return
}


func_1653()
{
	var_65_string = "ood4WastedMale1"; // 0x676 PushS
	var_66_int = 1; // 0x677 PushI
	SetVariable(var_65_string, var_66_int); // 0x678 Func
	return 0; // 0x67a Return
}


func_1400(var_43_bool)
{
	var_44_bool = 0; var_45_bool = 0; // 0x578 PushV
	IsLoaded(var_45_bool); // 0x579 Func
	var_43_bool = var_45_bool; // 0x57b Mov
	return 2; // 0x57c Return
}


func_1659(var_79_object)
{
	var_81_string = "tvirin is given"; // 0x67c PushS
	Trace(var_81_string); // 0x67d Func
	var_82_object = Obj(); var_83_string = ""; var_84_int = 0; // 0x67f PushV
	var_82_object = var_79_object; // 0x680 Mov
	var_83_string = "tvirin"; // 0x681 MovS
	var_84_int = 1; // 0x682 MovI
	func_1576(var_82_object, var_83_string, var_84_int); // 0x683 NEW_2
	return 0; // 0x685 Return
}


func_1405(var_35_bool, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0; // 0x57d PushV
	GetPosition(var_48_cvector); // 0x57e ObjFunc
	GetEyesHeight(var_47_float); // 0x580 ObjFunc
	var_56_float = GetByIndex(var_48_cvector, 1); // 0x582 PushE
	var_56_float = var_56_float + var_47_float; // 0x583 Add2
	SetByIndex(var_48_cvector, 1) = var_56_float; // 0x584 PopE
	GetPosition(var_49_cvector); // 0x585 Func
	GetEyesHeight(var_47_float); // 0x587 Func
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x589 PushE
	var_57_float = var_57_float + var_47_float; // 0x58a Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x58b PopE
	var_50_cvector = var_48_cvector - var_49_cvector; // 0x58c Sub2
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x58d PushE
	var_58_float = 0; // 0x58e MovI
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x58f PopE
	var_59_int = var_50_cvector | var_50_cvector; // 0x590 Or
	var_60_float = sqrt(var_59_int); // 0x591 Sqrt
	var_50_cvector = var_50_cvector / var_50_cvector; // 0x592 Div2
	var_51_cvector = -var_50_cvector; // 0x593 Neg2
	var_61_float = var_50_cvector * var_37_float; // 0x594 Mult
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x595 PushV
	var_64_cvector = CVector(0.0, 1.0, 0.0); // 0x596 PushVec
	var_63_cvector = var_51_cvector ^ var_64_cvector; // 0x597 Xor2
	func_1530(var_62_cvector, var_63_cvector); // 0x598 NEW_2
	var_70_int = 25; // 0x59a PushI
	var_71_float = var_62_cvector * var_70_int; // 0x59b Mult
	var_72_int = var_61_float + var_71_float; // 0x59c Add
	var_73_cvector = CVector(0.0, 10.0, 0.0); // 0x59d PushVec
	var_52_cvector = var_72_int - var_73_cvector; // 0x59e Sub2
	var_53_cvector = var_49_cvector + var_52_cvector; // 0x59f Add2
	IsOverrideActive(var_54_bool); // 0x5a0 Func
	var_74_bool = var_54_bool; // 0x5a2 Push
	if(var_74_bool == 0) goto Label_1446; // 0x5a3 JumpB
	var_35_bool = 0; // 0x5a4 MovB
	return 18; // 0x5a5 Return
	
Label_1446:
	StopWorld(); // 0x5a6 Func
	var_75_bool = 1; // 0x5a8 PushB
	CameraTransit(var_53_cvector, var_51_cvector, var_75_bool); // 0x5a9 Func
	var_76_float = GetByIndex(var_52_cvector, 0); // 0x5ab PushE
	var_77_float = GetByIndex(var_52_cvector, 2); // 0x5ac PushE
	Rotate(var_76_float, var_77_float); // 0x5ad Func
	var_78_bool = 0; // 0x5af PushV
	func_1717(var_78_bool); // 0x5b0 NEW_2
	if(var_78_bool == 0) goto Label_1460; // 0x5b2 JumpB
	goto Label_1468; // 0x5b3 Jump
	
Label_1468:
	CameraWaitForPlayFinish(); // 0x5bc Func
	ResumeWorld(); // 0x5be Func
	var_35_bool = 1; // 0x5c0 MovB
	return 18; // 0x5c1 Return
	
Label_1460:
	var_79_string = "head"; // 0x5b4 PushS
	HasAnimationTrack(var_55_bool, var_79_string); // 0x5b5 Func
	var_80_bool = var_55_bool; // 0x5b7 Push
	if(var_80_bool == 0) goto Label_1468; // 0x5b8 JumpB
	var_81_string = "head"; // 0x5b9 PushS
	LookAsyncCamera(var_81_string); // 0x5ba Func
}


func_1670()
{
	var_69_int = 0; // 0x687 PushI
	SetReturnValue(var_69_int); // 0x688 ObjFunc
	return 0; // 0x68a Return
}


func_1675()
{
	var_76_int = 1; // 0x68c PushI
	SetReturnValue(var_76_int); // 0x68d ObjFunc
	return 0; // 0x68f Return
}


func_1680(var_103_bool)
{
	var_105_int = 0; var_106_string = ""; // 0x691 PushV
	var_106_string = "ood4WastedMale1"; // 0x692 MovS
	func_1540(var_105_int, var_106_string); // 0x693 NEW_2
	var_109_int = 0; // 0x695 PushI
	var_110_bool = var_105_int == var_109_int; // 0x696 Eq
	if(var_110_bool == 0) goto Label_1690; // 0x697 JumpB
	var_103_bool = 1; // 0x698 MovB
	return 0; // 0x699 Return
	
Label_1690:
	var_103_bool = 0; // 0x69a MovB
	return 0; // 0x69b Return
}


func_1692(var_87_int)
{
	var_88_int = 0; var_89_int = 0; // 0x69c PushV
	var_90_string = "branch"; // 0x69d PushS
	GetVariable(var_90_string, var_89_int); // 0x69e Func
	var_91_int = 0; // 0x6a0 PushI
	var_92_bool = var_89_int == var_91_int; // 0x6a1 Eq
	if(var_92_bool == 0) goto Label_1702; // 0x6a2 JumpB
	var_87_int = 1; // 0x6a3 MovI
	return 2; // 0x6a4 Return
	
Label_1702:
	var_93_int = 1; // 0x6a6 PushI
	var_94_bool = var_89_int == var_93_int; // 0x6a7 Eq
	if(var_94_bool == 0) goto Label_1707; // 0x6a8 JumpB
	var_87_int = 2; // 0x6a9 MovI
	return 2; // 0x6aa Return
	
Label_1707:
	var_87_int = 3; // 0x6ab MovI
	return 2; // 0x6ac Return
}


func_673(var_439_bool)
{
	var_439_bool = 1; // 0x2a1 MovB
	return 0; // 0x2a2 Return
}


func_675(var_0_bool, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x2a3 PushV
	var_0_bool = var_25_object; // 0x2a4 TMov
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0; // 0x2a5 PushV
	var_36_object = var_25_object; // 0x2a6 Mov
	var_37_float = 70.0; // 0x2a7 MovF
	func_1405(var_36_object, var_37_float); // 0x2a8 NEW_2
	var_82_bool = var_35_bool == 0; // 0x2aa Not
	if(var_82_bool == 0) goto Label_686; // 0x2ab JumpB
	var_24_int = -2; // 0x2ac MovI
	return 8; // 0x2ad Return
	
Label_686:
	CreateDialog(var_31_object); // 0x2ae Func
	var_83_int = 0; // 0x2b0 PushV
	func_1711(var_83_int); // 0x2b1 NEW_2
	SetNPCName(var_83_int); // 0x2b3 ObjFunc
	var_84_int = 0; // 0x2b5 PushV
	func_1709(var_84_int); // 0x2b6 NEW_2
	SetNPCDescription(var_84_int); // 0x2b8 ObjFunc
	var_85_string = ""; // 0x2ba PushV
	func_1713(var_85_string); // 0x2bb NEW_2
	SetPhoto(var_85_string); // 0x2bd ObjFunc
	var_86_string = ""; // 0x2bf PushV
	func_1715(var_86_string); // 0x2c0 NEW_2
	SetPhoto2(var_86_string); // 0x2c2 ObjFunc
	var_87_int = 0; // 0x2c4 PushV
	func_1692(var_87_int); // 0x2c5 NEW_2
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
	var_167_bool = var_34_bool == 0; // 0x2db Not
	if(var_167_bool == 0) goto Label_738; // 0x2dc JumpB
	sync(); // 0x2dd Func
	IsDialogEnd(var_34_bool); // 0x2df ObjFunc
	goto Label_731; // 0x2e1 Jump
	
Label_738:
	var_168_object = Obj(); // 0x2e2 PushV
	var_168_object = var_25_object; // 0x2e3 Mov
	func_1474(); // 0x2e4 NEW_2
	StopDialog(var_31_object); // 0x2e6 Func
	GetReturnValue(var_33_int); // 0x2e8 ObjFunc
	var_24_int = var_33_int; // 0x2ea Mov
	return 8; // 0x2eb Return
}


func_1709(var_84_int)
{
	var_84_int = 515556; // 0x6ad MovI
	return 0; // 0x6ae Return
}


func_1711(var_83_int)
{
	var_83_int = 503341; // 0x6af MovI
	return 0; // 0x6b0 Return
}


func_1199()
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0; // 0x4af PushV
	WaitForAnimEnd(); // 0x4b0 Func
	var_43_bool = 0; // 0x4b2 PushV
	func_1400(var_43_bool); // 0x4b3 NEW_2
	var_46_bool = var_43_bool == 0; // 0x4b5 Not
	if(var_46_bool == 0) goto Label_1208; // 0x4b6 JumpB
	return 14; // 0x4b7 Return
	
Label_1208:
	var_47_int = 0; // 0x4b8 PushV
	func_1608(var_47_int); // 0x4b9 NEW_2
	var_36_int = var_47_int; // 0x4ba Mov
	var_37_int = 0; // 0x4bc MovI
	
Label_1213:
	var_60_bool = 0; // 0x4bd PushV
	var_60_bool = 0; // 0x4be MovB
	var_61_int = 5; // 0x4bf PushI
	var_62_bool = var_37_int < var_61_int; // 0x4c0 LT
	if(var_62_bool == 0) goto Label_1223; // 0x4c1 JumpB
	var_63_bool = 0; // 0x4c2 PushV
	func_1400(var_63_bool); // 0x4c3 NEW_2
	if(var_63_bool == 0) goto Label_1223; // 0x4c5 JumpB
	var_60_bool = 1; // 0x4c6 MovB
	
Label_1223:
	if(var_60_bool == 0) goto Label_1275; // 0x4c7 JumpB
	var_64_int = 3; // 0x4c8 PushI
	irand(var_38_int, var_64_int); // 0x4c9 Func
	var_65_int = 0; // 0x4cb PushI
	var_66_bool = var_38_int == var_65_int; // 0x4cc Eq
	if(var_66_bool == 0) goto Label_1247; // 0x4cd JumpB
	var_67_int = var_36_int; // 0x4ce Push
	if(var_67_int == 0) goto Label_1246; // 0x4cf JumpB
	irand(var_39_int, var_36_int); // 0x4d0 Func
	var_68_string = "all"; // 0x4d2 PushS
	var_69_string = ""; var_70_int = 0; // 0x4d3 PushV
	var_70_int = var_39_int; // 0x4d4 Mov
	func_1601(var_69_string, var_70_int); // 0x4d5 NEW_2
	PlayAnimation(var_68_string, var_69_string); // 0x4d7 Func
	WaitForAnimEnd(var_40_bool); // 0x4d9 Func
	var_71_bool = var_40_bool == 0; // 0x4db Not
	if(var_71_bool == 0) goto Label_1246; // 0x4dc JumpB
	goto Label_1275; // 0x4dd Jump
	
Label_1275:
	ResetAAS(); // 0x4fb Func
	return 14; // 0x4fd Return
	
Label_1246:
	goto Label_1264; // 0x4de Jump
	
Label_1264:
	var_72_bool = 0; // 0x4f0 PushV
	func_1278(var_72_bool); // 0x4f1 NEW_2
	var_73_bool = var_72_bool == 0; // 0x4f3 Not
	if(var_73_bool == 0) goto Label_1270; // 0x4f4 JumpB
	goto Label_1275; // 0x4f5 Jump
	
Label_1270:
	ResetAAS(); // 0x4f6 Func
	var_74_int = 1; // 0x4f8 PushI
	var_37_int = var_37_int + var_74_int; // 0x4f9 Add2
	goto Label_1213; // 0x4fa Jump
	
Label_1247:
	var_75_int = 1; // 0x4df PushI
	var_76_bool = var_38_int == var_75_int; // 0x4e0 Eq
	if(var_76_bool == 0) goto Label_1261; // 0x4e1 JumpB
	var_77_int = 4; // 0x4e2 PushI
	rand(var_41_float, var_77_int); // 0x4e3 Func
	var_78_int = 1; // 0x4e5 PushI
	var_79_int = var_41_float + var_78_int; // 0x4e6 Add
	Sleep(var_79_int, var_42_bool); // 0x4e7 Func
	var_80_bool = var_42_bool == 0; // 0x4e9 Not
	if(var_80_bool == 0) goto Label_1260; // 0x4ea JumpB
	goto Label_1275; // 0x4eb Jump
	
Label_1260:
	goto Label_1264; // 0x4ec Jump
	
Label_1261:
	var_81_int = var_37_int; // 0x4ed Push
	if(var_81_int == 0) goto Label_1264; // 0x4ee JumpB
	goto Label_1275; // 0x4ef Jump
}


func_1713(var_85_string)
{
	var_85_string = "ui/NPC_Citizen3.png"; // 0x6b1 MovS
	return 0; // 0x6b2 Return
}


func_1715(var_86_string)
{
	var_86_string = "ui/NPC_Citizen3_b.png"; // 0x6b3 MovS
	return 0; // 0x6b4 Return
}


func_1717(var_78_bool)
{
	var_78_bool = 0; // 0x6b5 MovB
	return 0; // 0x6b6 Return
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


func_1474()
{
	var_169_bool = 0; var_170_bool = 0; // 0x5c2 PushV
	var_171_bool = 1; // 0x5c3 PushB
	CameraSwitchToNormal(var_171_bool); // 0x5c4 Func
	var_172_bool = 0; // 0x5c6 PushV
	func_1717(var_172_bool); // 0x5c7 NEW_2
	if(var_172_bool == 0) goto Label_1483; // 0x5c9 JumpB
	goto Label_1491; // 0x5ca Jump
	
Label_1491:
	return 2; // 0x5d3 Return
	
Label_1483:
	var_173_string = "head"; // 0x5cb PushS
	HasAnimationTrack(var_170_bool, var_173_string); // 0x5cc Func
	var_174_bool = var_170_bool; // 0x5ce Push
	if(var_174_bool == 0) goto Label_1491; // 0x5cf JumpB
	var_175_string = "head"; // 0x5d0 PushS
	UnlookAsync(var_175_string); // 0x5d1 Func
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


func_464(var_0_bool)
{
	var_0_bool = 1; // 0x1d0 TMovB
	var_20_int = 0; // 0x1d1 PushI
	KillTimer(var_20_int); // 0x1d2 Func
	Stop(); // 0x1d4 Func
	return 0; // 0x1d6 Return
}


func_1492(var_137_string)
{
	var_138_bool = 0; var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_float = 0; var_143_float = 0; // 0x5d4 PushV
	lshHasAnimation(var_141_bool, var_137_string); // 0x5d5 Func
	var_144_bool = var_141_bool; // 0x5d7 Push
	if(var_144_bool == 0) goto Label_1503; // 0x5d8 JumpB
	lshGetAnimTimes(var_137_string, var_142_float, var_143_float); // 0x5d9 Func
	var_145_bool = 0; // 0x5db PushB
	lshPlayAnimation(var_142_float, var_143_float, var_145_bool); // 0x5dc Func
	goto Label_1507; // 0x5de Jump
	
Label_1507:
	return 6; // 0x5e3 Return
	
Label_1503:
	var_146_string = "Can't find lsh animation : "; // 0x5df PushS
	var_147_int = var_146_string + var_137_string; // 0x5e0 Add
	Trace(var_147_int); // 0x5e1 Func
}


func_222(var_0_bool)
{
	var_0_bool = 1; // 0xde TMovB
	var_20_int = 0; // 0xdf PushI
	KillTimer(var_20_int); // 0xe0 Func
	Stop(); // 0xe2 Func
	return 0; // 0xe4 Return
}


func_480(var_326_bool, var_327_object)
{
	var_328_bool = 0; var_329_object = Obj(); // 0x1e1 PushV
	var_329_object = var_327_object; // 0x1e2 Mov
	func_1376(var_328_bool, var_329_object); // 0x1e3 NEW_2
	var_326_bool = var_328_bool; // 0x1e4 Mov
	return 0; // 0x1e6 Return
}


func_1508(var_115_string, var_116_bool)
{
	var_119_bool = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_float = 0; // 0x5e4 PushV
	lshHasAnimation(var_122_bool, var_115_string); // 0x5e5 Func
	var_125_bool = var_122_bool; // 0x5e7 Push
	if(var_125_bool == 0) goto Label_1518; // 0x5e8 JumpB
	lshGetAnimTimes(var_115_string, var_123_float, var_124_float); // 0x5e9 Func
	lshPlayAnimation(var_123_float, var_124_float, var_116_bool); // 0x5eb Func
	goto Label_1522; // 0x5ed Jump
	
Label_1522:
	return 6; // 0x5f2 Return
	
Label_1518:
	var_126_string = "Can't find lsh animation : "; // 0x5ee PushS
	var_127_int = var_126_string + var_115_string; // 0x5ef Add
	Trace(var_127_int); // 0x5f0 Func
}


func_487(var_344_string)
{
	var_344_string = "walk"; // 0x1e7 MovS
	return 0; // 0x1e8 Return
}


func_489(var_345_string)
{
	var_345_string = "run"; // 0x1e9 MovS
	return 0; // 0x1ea Return
}


func_491()
{
	
Label_491:
	func_499(var_367_bool, var_368_bool); // 0x1ec NEW_2
	var_451_int = 1; // 0x1ee PushI
	Sleep(var_451_int); // 0x1ef Func
	goto Label_491; // 0x1f1 Jump
}


func_749(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_96_object, var_97_object)
{
	var_0_bool = var_97_object; // 0x2ee TMov
	var_1_object = var_96_object; // 0x2ef TMov
	var_3_int = 0; // 0x2f0 TMovB
	var_102_int = 1; // 0x2f1 PushI
	if(var_102_int == 0) goto Label_812; // 0x2f2 JumpB
	var_103_bool = 0; var_104_object = Obj(); // 0x2f3 PushV
	var_104_object = var_1_object; // 0x2f4 MovT
	func_1680(var_104_object); // 0x2f5 NEW_2
	if(var_103_bool == 0) goto Label_780; // 0x2f7 JumpB
	var_111_string = ""; // 0x2f8 PushV
	var_111_string = "Neutral"; // 0x2f9 MovS
	func_842(var_97_object, var_111_string); // 0x2fa NEW_2
	var_128_int = 509701; // 0x2fc PushI
	SetMessage(var_128_int); // 0x2fd TObjFunc
	ClearReplies(); // 0x2ff TObjFunc
	var_129_int = 509702; // 0x301 PushI
	var_130_int = 10682; // 0x302 PushI
	var_131_int = 10681; // 0x303 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x304 TObjFunc
	var_132_int = 509711; // 0x306 PushI
	var_133_int = 10682; // 0x307 PushI
	var_134_int = 10691; // 0x308 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x309 TObjFunc
	goto Label_812; // 0x30b Jump
	
Label_812:
	var_135_bool = 0; // 0x32c PushV
	func_1717(var_135_bool); // 0x32d NEW_2
	if(var_135_bool == 0) goto Label_827; // 0x32f JumpB
	
Label_816:
	lshWaitForAnimEnd(); // 0x330 Func
	var_136_int = var_3_int; // 0x332 PushT
	if(var_136_int == 0) goto Label_821; // 0x333 JumpB
	goto Label_826; // 0x334 Jump
	
Label_826:
	goto Label_841; // 0x33a Jump
	
Label_841:
	return 0; // 0x349 Return
	
Label_821:
	var_137_string = ""; // 0x335 PushV
	var_137_string = var_2_cvector; // 0x336 MovT
	func_1492(var_137_string); // 0x337 NEW_2
	goto Label_816; // 0x339 Jump
	
Label_827:
	var_148_string = "all"; // 0x33b PushS
	var_149_string = "idle"; // 0x33c PushS
	PlayAnimation(var_148_string, var_149_string); // 0x33d Func
	
Label_831:
	WaitForAnimEnd(); // 0x33f Func
	var_150_int = var_3_int; // 0x341 PushT
	if(var_150_int == 0) goto Label_836; // 0x342 JumpB
	goto Label_841; // 0x343 Jump
	
Label_836:
	var_151_string = "all"; // 0x344 PushS
	var_152_string = "idle"; // 0x345 PushS
	PlayAnimation(var_151_string, var_152_string); // 0x346 Func
	goto Label_831; // 0x348 Jump
	
Label_780:
	var_153_string = ""; // 0x30c PushV
	var_153_string = "Neutral"; // 0x30d MovS
	func_842(var_97_object, var_153_string); // 0x30e NEW_2
	var_154_int = 509712; // 0x310 PushI
	SetMessage(var_154_int); // 0x311 TObjFunc
	ClearReplies(); // 0x313 TObjFunc
	var_155_int = 509713; // 0x315 PushI
	var_156_int = 10695; // 0x316 PushI
	var_157_int = 10694; // 0x317 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x318 TObjFunc
	var_158_int = 509720; // 0x31a PushI
	var_159_int = 10702; // 0x31b PushI
	var_160_int = 10701; // 0x31c PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x31d TObjFunc
	var_161_int = 509723; // 0x31f PushI
	var_162_int = 10695; // 0x320 PushI
	var_163_int = 10705; // 0x321 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x322 TObjFunc
	var_164_int = 509724; // 0x324 PushI
	var_165_int = -1; // 0x325 PushI
	var_166_int = 10707; // 0x326 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x327 TObjFunc
	goto Label_812; // 0x329 Jump
}


func_238(var_217_bool, var_218_object)
{
	var_219_bool = 0; var_220_object = Obj(); // 0xef PushV
	var_220_object = var_218_object; // 0xf0 Mov
	func_1376(var_219_bool, var_220_object); // 0xf1 NEW_2
	var_217_bool = var_219_bool; // 0xf2 Mov
	return 0; // 0xf4 Return
}


func_499(var_0_bool, var_1_object)
{
	var_369_float = 0; var_370_cvector = CVector(0,0,0); var_371_cvector = CVector(0,0,0); var_372_bool = 0; var_373_object = Obj(); var_374_bool = 0; var_375_float = 0; var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_bool = 0; var_379_object = Obj(); var_380_bool = 0; // 0x1f3 PushV
	var_0_bool = 0; // 0x1f4 TMovB
	var_1_object = 0; // 0x1f5 TMovB
	var_381_float = 0.5; // 0x1f6 PushF
	rand(var_375_float, var_381_float); // 0x1f7 Func
	Sleep(var_375_float); // 0x1f9 Func
	
Label_507:
	var_382_bool = var_0_bool == 0; // 0x1fb Not
	if(var_382_bool == 0) goto Label_557; // 0x1fc JumpB
	var_383_bool = var_1_object == 0; // 0x1fd Not
	if(var_383_bool == 0) goto Label_526; // 0x1fe JumpB
	
Label_511:
	GetPosition(var_377_cvector); // 0x1ff Func
	var_384_float = 0; // 0x201 PushV
	func_558(var_384_float); // 0x202 NEW_2
	GetRandomPFPointInCircle(var_376_cvector, var_377_cvector, var_384_float, var_378_bool); // 0x204 Func
	var_387_bool = var_378_bool; // 0x206 Push
	if(var_387_bool == 0) goto Label_521; // 0x207 JumpB
	goto Label_525; // 0x208 Jump
	
Label_525:
	goto Label_527; // 0x20d Jump
	
Label_527:
	var_388_object = Obj(); var_389_cvector = CVector(0,0,0); // 0x20f PushV
	var_389_cvector = var_376_cvector; // 0x210 Mov
	func_588(var_388_object, var_389_cvector); // 0x211 NEW_2
	var_379_object = var_388_object; // 0x212 Mov
	var_392_bool = var_379_object != 0; // 0x214 NullNeq
	if(var_392_bool == 0) goto Label_552; // 0x215 JumpB
	RotatePath(var_379_object, var_380_bool); // 0x216 Func
	var_393_bool = var_380_bool; // 0x218 Push
	if(var_393_bool == 0) goto Label_551; // 0x219 JumpB
	var_394_bool = 0; // 0x21a PushV
	func_586(var_394_bool); // 0x21b NEW_2
	FollowPath(var_379_object, var_394_bool, var_380_bool); // 0x21d Func
	var_379_object = 0; // 0x21f SetNull
	var_395_bool = var_380_bool; // 0x220 Push
	if(var_395_bool == 0) goto Label_551; // 0x221 JumpB
	TaskCall(3); // 0x223 TaskCall
	func_594(); // 0x224 NEW_2
	TaskReturn(); // 0x225 TaskReturn
	
Label_551:
	goto Label_555; // 0x227 Jump
	
Label_555:
	var_379_object = 0; // 0x22b SetNull
	goto Label_507; // 0x22c Jump
	
Label_552:
	var_449_int = 1; // 0x228 PushI
	Sleep(var_449_int); // 0x229 Func
	
Label_521:
	var_450_int = 1; // 0x209 PushI
	Sleep(var_450_int); // 0x20a Func
	goto Label_511; // 0x20c Jump
	
Label_526:
	var_1_object = 0; // 0x20e TMovB
	
Label_557:
	return 12; // 0x22d Return
}


func_1523()
{
	var_22_bool = 0; // 0x5f3 PushV
	func_1717(var_22_bool); // 0x5f4 NEW_2
	if(var_22_bool == 0) goto Label_1529; // 0x5f6 JumpB
	lshStopSpeech(); // 0x5f7 Func
	
Label_1529:
	return 0; // 0x5f9 Return
}


func_245(var_267_string)
{
	var_267_string = "walk"; // 0xf5 MovS
	return 0; // 0xf6 Return
}


func_247(var_268_string)
{
	var_268_string = "run"; // 0xf7 MovS
	return 0; // 0xf8 Return
}


func_249(var_3_int, var_4_int, var_5_int, var_295_object, var_301_int)
{
	GetPosition(var_301_int); // 0xfa Func
	var_4_int = 0; // 0xfc TMovI
	var_5_int = 0; // 0xfd TMovI
	var_302_int = 123; // 0xfe PushI
	var_303_float = 0.5; // 0xff PushF
	SetTimer(var_302_int, var_303_float); // 0x100 Func
	var_3_int = 0; // 0x102 TMovI
	
Label_259:
	var_304_bool = 0; var_305_object = Obj(); var_306_float = 0; var_307_float = 0; var_308_bool = 0; var_309_bool = 0; // 0x103 PushV
	var_305_object = var_295_object; // 0x104 Mov
	var_306_float = 250; // 0x105 MovI
	var_307_float = 3000; // 0x106 MovI
	var_308_bool = 1; // 0x107 MovB
	var_309_bool = 1; // 0x108 MovB
	func_340(var_301_int, var_295_object, var_304_bool, var_305_object, var_306_float, var_307_float, var_308_bool, var_309_bool); // 0x109 NEW_2
	var_355_bool = var_304_bool == 0; // 0x10b Not
	if(var_355_bool == 0) goto Label_275; // 0x10c JumpB
	var_356_int = 1; // 0x10d PushI
	var_3_int = var_3_int + var_356_int; // 0x10e Add2
	var_357_int = 1; // 0x10f PushI
	Sleep(var_357_int); // 0x110 Func
	goto Label_259; // 0x112 Jump
	
Label_275:
	var_358_int = 123; // 0x113 PushI
	KillTimer(var_358_int); // 0x114 Func
	return 0; // 0x116 Return
}


func_1530(var_62_cvector, var_63_cvector)
{
	var_65_float = 0; var_66_float = 0; // 0x5fa PushV
	var_67_int = var_63_cvector | var_63_cvector; // 0x5fb Or
	var_66_float = sqrt(var_67_int); // 0x5fc Sqrt2
	var_68_float = 0.0; // 0x5fd PushF
	var_69_bool = var_66_float < var_68_float; // 0x5fe LT
	if(var_69_bool == 0) goto Label_1538; // 0x5ff JumpB
	var_62_cvector = CVector(0.0, 0.0, 0.0); // 0x600 MovV
	return 2; // 0x601 Return
	
Label_1538:
	var_62_cvector = var_63_cvector / var_63_cvector; // 0x602 Div2
	return 2; // 0x603 Return
}


func_1278(var_72_bool)
{
	var_72_bool = 1; // 0x4fe MovB
	return 0; // 0x4ff Return
}


