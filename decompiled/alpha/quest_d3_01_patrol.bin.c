task_1_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector, var_15_bool)
{
	var_16_int = 0; // 0x267 PushI
	var_17_bool = var_15_bool != var_16_int; // 0x268 Neq
	if(var_17_bool == 0) goto Label_619; // 0x269 JumpB
	return 0; // 0x26a Return
	
Label_619:
	var_18_bool = 0; var_19_object = Obj(); // 0x26b PushV
	var_19_object = var_1_int; // 0x26c MovT
	func_652(var_18_bool, var_19_object); // 0x26d Call
	var_54_bool = var_18_bool == 0; // 0x26f Not
	if(var_54_bool == 0) goto Label_626; // 0x270 JumpB
	var_0_object = 1; // 0x271 TMovB
	
Label_626:
	var_55_int = 0; // 0x272 PushI
	KillTimer(var_55_int); // 0x273 Func
	Stop(); // 0x275 Func
	return 0; // 0x277 Return
}


task_1_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector, var_15_bool)
{
	RequestClearPath(var_15_bool); // 0x279 Func
	return 0; // 0x27b Return
}


task_1_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector, var_15_bool)
{
	func_636(var_15_bool); // 0x285 Call
	var_17_object = Obj(); // 0x287 PushV
	var_17_object = var_15_bool; // 0x288 Mov
	func_1621(); // 0x289 Call
	return 0; // 0x28b Return
}


task_2_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector, var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0; // 0x2a4 PushV
	IsOverrideActive(var_17_bool); // 0x2a5 Func
	var_18_bool = var_17_bool == 0; // 0x2a7 Not
	if(var_18_bool == 0) goto Label_683; // 0x2a8 JumpB
	WorkWithCorpse(var_15_bool); // 0x2a9 Func
	
Label_683:
	return 2; // 0x2ab Return
}


task_2_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_float, var_10_float, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_cvector, var_17_cvector, var_18_bool)
{
	return 0; // 0x31a Return
}


task_2_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_string, var_9_object, var_10_object, var_11_object, var_12_string, var_13_bool, var_14_cvector, var_15_cvector, var_16_bool)
{
	return 0; // 0x31c Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_cvector, var_14_cvector, var_15_bool)
{
	return 0; // 0x31e Return
}


task_4_event_11(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_cvector, var_15_cvector, var_16_bool)
{
	var_17_int = 1; // 0x3a9 PushI
	if(var_17_int == 0) goto Label_1113; // 0x3aa JumpB
	func_1543(); // 0x3ac Call
	var_19_int = 9981; // 0x3ae PushI
	var_20_bool = var_15_cvector == var_19_int; // 0x3af Eq
	if(var_20_bool == 0) goto Label_965; // 0x3b0 JumpB
	var_21_string = ""; // 0x3b1 PushV
	var_21_string = "Neutral"; // 0x3b2 MovS
	func_920(var_16_bool, var_21_string); // 0x3b3 Call
	var_36_int = 9102; // 0x3b5 PushI
	SetMessage(var_36_int); // 0x3b6 TObjFunc
	ClearReplies(); // 0x3b8 TObjFunc
	var_37_int = 9103; // 0x3ba PushI
	var_38_int = 9989; // 0x3bb PushI
	var_39_int = 9982; // 0x3bc PushI
	AddReply(var_37_int, var_38_int, var_39_int); // 0x3bd TObjFunc
	var_40_int = 9104; // 0x3bf PushI
	var_41_int = 9985; // 0x3c0 PushI
	var_42_int = 9983; // 0x3c1 PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0x3c2 TObjFunc
	return 0; // 0x3c4 Return
	
Label_965:
	var_43_int = 9985; // 0x3c5 PushI
	var_44_bool = var_15_cvector == var_43_int; // 0x3c6 Eq
	if(var_44_bool == 0) goto Label_983; // 0x3c7 JumpB
	var_45_string = ""; // 0x3c8 PushV
	var_45_string = "Neutral"; // 0x3c9 MovS
	func_920(var_16_bool, var_45_string); // 0x3ca Call
	var_46_int = 9106; // 0x3cc PushI
	SetMessage(var_46_int); // 0x3cd TObjFunc
	ClearReplies(); // 0x3cf TObjFunc
	var_47_int = 9107; // 0x3d1 PushI
	var_48_int = 9984; // 0x3d2 PushI
	var_49_int = 9986; // 0x3d3 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0x3d4 TObjFunc
	return 0; // 0x3d6 Return
	
Label_983:
	var_50_int = 9984; // 0x3d7 PushI
	var_51_bool = var_15_cvector == var_50_int; // 0x3d8 Eq
	if(var_51_bool == 0) goto Label_1001; // 0x3d9 JumpB
	var_52_string = ""; // 0x3da PushV
	var_52_string = "Neutral"; // 0x3db MovS
	func_920(var_16_bool, var_52_string); // 0x3dc Call
	var_53_int = 9105; // 0x3de PushI
	SetMessage(var_53_int); // 0x3df TObjFunc
	ClearReplies(); // 0x3e1 TObjFunc
	var_54_int = 9108; // 0x3e3 PushI
	var_55_int = 9988; // 0x3e4 PushI
	var_56_int = 9987; // 0x3e5 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0x3e6 TObjFunc
	return 0; // 0x3e8 Return
	
Label_1001:
	var_57_int = 9988; // 0x3e9 PushI
	var_58_bool = var_15_cvector == var_57_int; // 0x3ea Eq
	if(var_58_bool == 0) goto Label_1019; // 0x3eb JumpB
	var_59_string = ""; // 0x3ec PushV
	var_59_string = "Neutral"; // 0x3ed MovS
	func_920(var_16_bool, var_59_string); // 0x3ee Call
	var_60_int = 9109; // 0x3f0 PushI
	SetMessage(var_60_int); // 0x3f1 TObjFunc
	ClearReplies(); // 0x3f3 TObjFunc
	var_61_int = 9112; // 0x3f5 PushI
	var_62_int = 9992; // 0x3f6 PushI
	var_63_int = 9991; // 0x3f7 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x3f8 TObjFunc
	return 0; // 0x3fa Return
	
Label_1019:
	var_64_int = 9989; // 0x3fb PushI
	var_65_bool = var_15_cvector == var_64_int; // 0x3fc Eq
	if(var_65_bool == 0) goto Label_1037; // 0x3fd JumpB
	var_66_string = ""; // 0x3fe PushV
	var_66_string = "Neutral"; // 0x3ff MovS
	func_920(var_16_bool, var_66_string); // 0x400 Call
	var_67_int = 9110; // 0x402 PushI
	SetMessage(var_67_int); // 0x403 TObjFunc
	ClearReplies(); // 0x405 TObjFunc
	var_68_int = 9111; // 0x407 PushI
	var_69_int = 9992; // 0x408 PushI
	var_70_int = 9990; // 0x409 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x40a TObjFunc
	return 0; // 0x40c Return
	
Label_1037:
	var_71_int = 9992; // 0x40d PushI
	var_72_bool = var_15_cvector == var_71_int; // 0x40e Eq
	if(var_72_bool == 0) goto Label_1060; // 0x40f JumpB
	var_73_string = ""; // 0x410 PushV
	var_73_string = "Neutral"; // 0x411 MovS
	func_920(var_16_bool, var_73_string); // 0x412 Call
	var_74_int = 9113; // 0x414 PushI
	SetMessage(var_74_int); // 0x415 TObjFunc
	ClearReplies(); // 0x417 TObjFunc
	var_75_int = 9114; // 0x419 PushI
	var_76_int = 9994; // 0x41a PushI
	var_77_int = 9993; // 0x41b PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x41c TObjFunc
	var_78_int = 9116; // 0x41e PushI
	var_79_int = -1; // 0x41f PushI
	var_80_int = 9995; // 0x420 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x421 TObjFunc
	return 0; // 0x423 Return
	
Label_1060:
	var_81_int = 9994; // 0x424 PushI
	var_82_bool = var_15_cvector == var_81_int; // 0x425 Eq
	if(var_82_bool == 0) goto Label_1083; // 0x426 JumpB
	var_83_string = ""; // 0x427 PushV
	var_83_string = "Neutral"; // 0x428 MovS
	func_920(var_16_bool, var_83_string); // 0x429 Call
	var_84_int = 9115; // 0x42b PushI
	SetMessage(var_84_int); // 0x42c TObjFunc
	ClearReplies(); // 0x42e TObjFunc
	var_85_int = 9117; // 0x430 PushI
	var_86_int = -1; // 0x431 PushI
	var_87_int = 9997; // 0x432 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x433 TObjFunc
	var_88_int = 9118; // 0x435 PushI
	var_89_int = 9999; // 0x436 PushI
	var_90_int = 9998; // 0x437 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x438 TObjFunc
	return 0; // 0x43a Return
	
Label_1083:
	var_91_int = 9999; // 0x43b PushI
	var_92_bool = var_15_cvector == var_91_int; // 0x43c Eq
	if(var_92_bool == 0) goto Label_1101; // 0x43d JumpB
	var_93_string = ""; // 0x43e PushV
	var_93_string = "Neutral"; // 0x43f MovS
	func_920(var_16_bool, var_93_string); // 0x440 Call
	var_94_int = 9119; // 0x442 PushI
	SetMessage(var_94_int); // 0x443 TObjFunc
	ClearReplies(); // 0x445 TObjFunc
	var_95_int = 9120; // 0x447 PushI
	var_96_int = -1; // 0x448 PushI
	var_97_int = 10000; // 0x449 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x44a TObjFunc
	return 0; // 0x44c Return
	
Label_1101:
	var_3_bool = 1; // 0x44d TMovB
	var_98_bool = 0; // 0x44e PushV
	func_1648(var_98_bool); // 0x44f Call
	if(var_98_bool == 0) goto Label_1109; // 0x451 JumpB
	lshStopAnimation(); // 0x452 Func
	goto Label_1111; // 0x454 Jump
	
Label_1111:
	return 0; // 0x457 Return
	
Label_1109:
	StopAnimation(); // 0x455 Func
	
Label_1113:
	return 0; // 0x459 Return
}


task_5_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_15_object)
{
	var_16_bool = 0; // 0x46c PushV
	func_1119(var_15_object, var_16_bool); // 0x46d Call
	if(var_16_bool == 0) goto Label_1143; // 0x46f JumpB
	func_1233(); // 0x471 Call
	var_17_object = Obj(); // 0x473 PushV
	var_17_object = var_15_object; // 0x474 Mov
	func_1121(var_15_object, var_17_object); // 0x475 Call
	
Label_1143:
	return 0; // 0x477 Return
}


task_5_event_17(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0; // 0x478 PushV
	IsPlayerActor(var_15_object, var_17_bool); // 0x479 Func
	var_18_bool = var_17_bool; // 0x47b Push
	if(var_18_bool == 0) goto Label_1154; // 0x47c JumpB
	TaskCall(0); // 0x47e TaskCall
	func_0(); // 0x47f Call
	TaskReturn(); // 0x480 TaskReturn
	
Label_1154:
	return 2; // 0x482 Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; // 0x641 PushV
	var_19_object = var_15_object; // 0x642 Mov
	var_20_int = var_16_int; // 0x643 Mov
	var_21_float = var_17_float; // 0x644 Mov
	func_1387(var_20_int, var_21_float); // 0x645 Call
	return 0; // 0x647 Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0; // 0x648 PushV
	var_19_string = "health"; // 0x649 PushS
	var_20_bool = var_16_string == var_19_string; // 0x64a Eq
	if(var_20_bool == 0) goto Label_1620; // 0x64b JumpB
	var_21_string = "health"; // 0x64c PushS
	GetProperty(var_21_string, var_18_float); // 0x64d Func
	var_22_int = 0; // 0x64f PushI
	var_23_bool = var_18_float <= var_22_int; // 0x650 LE
	if(var_23_bool == 0) goto Label_1620; // 0x651 JumpB
	SignalDeath(var_15_object); // 0x652 Func
	
Label_1620:
	return 2; // 0x654 Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_15_object)
{
	var_16_object = Obj(); // 0x656 PushV
	var_16_object = var_15_object; // 0x657 Mov
	func_1582(var_16_object); // 0x658 Call
	return 0; // 0x65a Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool)
{
	var_2_int = 1; // 0x45a TMovB
	func_1155(var_13_cvector, var_14_bool); // 0x45c Call
	return 0; // 0x45e Return
}


func_512(var_0_object, var_1_int, var_111_bool, var_112_object, var_113_float, var_114_float, var_115_bool, var_116_bool)
{
	var_119_bool = 0; var_120_bool = 0; var_121_object = Obj(); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_float = 0; var_126_object = Obj(); var_127_bool = 0; var_128_bool = 0; var_129_object = Obj(); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_float = 0; var_134_object = Obj(); // 0x200 PushV
	var_0_object = 0; // 0x201 TMovB
	var_1_int = var_112_object; // 0x202 TMov
	var_128_bool = var_116_bool; // 0x203 Mov
	
Label_516:
	var_135_bool = 0; var_136_object = Obj(); // 0x204 PushV
	var_136_object = var_112_object; // 0x205 Mov
	func_652(var_135_bool, var_136_object); // 0x206 Call
	var_139_bool = var_135_bool == 0; // 0x208 Not
	if(var_139_bool == 0) goto Label_524; // 0x209 JumpB
	var_111_bool = 0; // 0x20a MovB
	return 16; // 0x20b Return
	
Label_524:
	GetPosition(var_130_cvector); // 0x20c ObjFunc
	GetPosition(var_131_cvector); // 0x20e Func
	var_132_cvector = var_130_cvector - var_131_cvector; // 0x210 Sub2
	var_133_float = var_132_cvector | var_132_cvector; // 0x211 Or2
	var_140_bool = 0; // 0x212 PushV
	var_140_bool = 0; // 0x213 MovB
	var_141_int = 0; // 0x214 PushI
	var_142_bool = var_114_float > var_141_int; // 0x215 GT
	if(var_142_bool == 0) goto Label_539; // 0x216 JumpB
	var_143_float = var_114_float * var_114_float; // 0x217 Mult
	var_144_bool = var_133_float > var_143_float; // 0x218 GT
	if(var_144_bool == 0) goto Label_539; // 0x219 JumpB
	var_140_bool = 1; // 0x21a MovB
	
Label_539:
	if(var_140_bool == 0) goto Label_544; // 0x21b JumpB
	Stop(); // 0x21c Func
	var_111_bool = 0; // 0x21e MovB
	return 16; // 0x21f Return
	
Label_544:
	var_145_float = var_113_float * var_113_float; // 0x220 Mult
	var_146_bool = var_133_float > var_145_float; // 0x221 GT
	if(var_146_bool == 0) goto Label_606; // 0x222 JumpB
	GetPFPosition(var_130_cvector); // 0x223 ObjFunc
	FindPathTo(var_134_object, var_130_cvector); // 0x225 Func
	var_147_bool = var_134_object != 0; // 0x227 NullNeq
	if(var_147_bool == 0) goto Label_555; // 0x228 JumpB
	var_129_object = var_134_object; // 0x229 Mov
	var_134_object = 0; // 0x22a SetNull
	
Label_555:
	var_148_bool = var_129_object != 0; // 0x22b NullNeq
	if(var_148_bool == 0) goto Label_588; // 0x22c JumpB
	var_149_bool = var_128_bool; // 0x22d Push
	if(var_149_bool == 0) goto Label_565; // 0x22e JumpB
	var_128_bool = 0; // 0x22f MovB
	RotatePath(var_129_object, var_127_bool); // 0x230 Func
	var_150_bool = var_127_bool == 0; // 0x232 Not
	if(var_150_bool == 0) goto Label_565; // 0x233 JumpB
	goto Label_612; // 0x234 Jump
	
Label_612:
	var_111_bool = !var_0_object; // 0x264 Not2
	return 16; // 0x265 Return
	
Label_565:
	var_151_int = 0; // 0x235 PushI
	var_152_float = 0.3; // 0x236 PushF
	SetTimer(var_151_int, var_152_float); // 0x237 Func
	var_153_string = ""; // 0x239 PushV
	func_659(var_153_string); // 0x23a Call
	var_154_string = ""; // 0x23c PushV
	func_661(var_154_string); // 0x23d Call
	FollowPath(var_129_object, var_115_bool, var_127_bool, var_153_string, var_154_string); // 0x23f Func
	var_155_bool = var_127_bool == 0; // 0x241 Not
	if(var_155_bool == 0) goto Label_586; // 0x242 JumpB
	var_156_object = var_0_object; // 0x243 PushT
	if(var_156_object == 0) goto Label_584; // 0x244 JumpB
	var_129_object = 0; // 0x245 SetNull
	goto Label_612; // 0x246 Jump
	
Label_584:
	goto Label_611; // 0x248 Jump
	
Label_611:
	goto Label_516; // 0x263 Jump
	
Label_586:
	var_129_object = 0; // 0x24a SetNull
	goto Label_604; // 0x24b Jump
	
Label_604:
	var_134_object = 0; // 0x25c SetNull
	goto Label_610; // 0x25d Jump
	
Label_610:
	var_129_object = 0; // 0x262 SetNull
	
Label_588:
	var_157_int = 0; // 0x24c PushI
	KillTimer(var_157_int); // 0x24d Func
	var_158_float = 0.5; // 0x24f PushF
	Sleep(var_158_float, var_127_bool); // 0x250 Func
	var_159_bool = var_127_bool == 0; // 0x252 Not
	if(var_159_bool == 0) goto Label_600; // 0x253 JumpB
	var_160_object = var_0_object; // 0x254 PushT
	if(var_160_object == 0) goto Label_600; // 0x255 JumpB
	var_129_object = 0; // 0x256 SetNull
	goto Label_612; // 0x257 Jump
	
Label_600:
	var_161_int = 0; // 0x258 PushI
	var_162_float = 0.3; // 0x259 PushF
	SetTimer(var_161_int, var_162_float); // 0x25a Func
	
Label_606:
	var_163_int = 0; // 0x25e PushI
	KillTimer(var_163_int); // 0x25f Func
	goto Label_612; // 0x261 Jump
}


func_0()
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x0 PushV
	var_26_string = "player"; // 0x1 PushS
	FindActor(var_25_object, var_26_string); // 0x2 Func
	var_27_bool = var_25_object == 0; // 0x4 Not
	if(var_27_bool == 0) goto Label_7; // 0x5 JumpB
	return 2; // 0x6 Return
	
Label_7:
	var_28_object = Obj(); var_29_bool = 0; var_30_float = 0; // 0x7 PushV
	var_28_object = var_25_object; // 0x8 Mov
	var_29_bool = 1; // 0x9 MovB
	var_30_float = 180.0; // 0xa MovF
	func_21(var_20_int, var_21_int, var_22_bool, var_23_int, var_24_object, var_25_object, var_28_object, var_29_bool, var_30_float); // 0xb Call
	return 2; // 0xd Return
}


func_636(var_0_object)
{
	var_0_object = 1; // 0x27c TMovB
	var_16_int = 0; // 0x27d PushI
	KillTimer(var_16_int); // 0x27e Func
	Stop(); // 0x280 Func
	return 0; // 0x282 Return
}


func_771(var_48_string)
{
	RemoveRTEnvelope(); // 0x304 Func
	SetDeathState(); // 0x306 Func
	Stop(); // 0x308 Func
	StopAsync(); // 0x30a Func
	StopSecondaryAnimation(); // 0x30c Func
	var_49_string = "all"; // 0x30e PushS
	PlayAnimation(var_49_string, var_48_string); // 0x30f Func
	WaitForAnimEnd(); // 0x311 Func
	var_50_string = "all"; // 0x313 PushS
	LockAnimationEnd(var_50_string, var_48_string); // 0x314 Func
	RemoveEnvelope(); // 0x316 Func
	return 0; // 0x318 Return
}


func_1155(var_0_object, var_1_int)
{
	var_15_int = 0; var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_object = Obj(); // 0x483 PushV
	GetPFPosition(var_22_object); // 0x484 Func
	GetDirection(var_0_object); // 0x486 Func
	
Label_1160:
	var_23_int = 60; // 0x488 PushI
	irand(var_19_int, var_23_int); // 0x489 Func
	var_24_int = 30; // 0x48b PushI
	var_25_int = var_19_int + var_24_int; // 0x48c Add
	Sleep(var_25_int, var_20_bool); // 0x48d Func
	var_26_bool = var_20_bool; // 0x48f Push
	if(var_26_bool == 0) goto Label_1173; // 0x490 JumpB
	func_1130(); // 0x492 Call
	goto Label_1231; // 0x494 Jump
	
Label_1231:
	goto Label_1160; // 0x4cf Jump
	
Label_1173:
	GetPFPosition(var_21_cvector); // 0x495 Func
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x497 PushV
	var_28_cvector = var_1_int; // 0x498 MovT
	var_29_cvector = var_21_cvector; // 0x499 Mov
	func_1560(var_27_float, var_28_cvector, var_29_cvector); // 0x49a Call
	var_32_int = 40000; // 0x49c PushI
	var_33_bool = var_27_float > var_32_int; // 0x49d GT
	if(var_33_bool == 0) goto Label_1217; // 0x49e JumpB
	FindPathTo(var_22_object, var_22_object); // 0x49f Func
	var_34_bool = var_22_object != 0; // 0x4a1 NullNeq
	if(var_34_bool == 0) goto Label_1212; // 0x4a2 JumpB
	RotatePath(var_22_object, var_20_bool); // 0x4a3 Func
	var_35_bool = var_20_bool == 0; // 0x4a5 Not
	if(var_35_bool == 0) goto Label_1192; // 0x4a6 JumpB
	goto Label_1230; // 0x4a7 Jump
	
Label_1230:
	goto Label_1173; // 0x4ce Jump
	
Label_1192:
	var_36_bool = 0; // 0x4a8 PushB
	FollowPath(var_22_object, var_36_bool, var_20_bool); // 0x4a9 Func
	var_37_bool = var_20_bool == 0; // 0x4ab Not
	if(var_37_bool == 0) goto Label_1198; // 0x4ac JumpB
	goto Label_1230; // 0x4ad Jump
	
Label_1198:
	var_38_float = GetByIndex(var_0_object, 0); // 0x4ae PushE
	var_39_float = GetByIndex(var_0_object, 2); // 0x4af PushE
	Rotate(var_38_float, var_39_float, var_20_bool); // 0x4b0 Func
	var_40_bool = var_20_bool == 0; // 0x4b2 Not
	if(var_40_bool == 0) goto Label_1205; // 0x4b3 JumpB
	goto Label_1230; // 0x4b4 Jump
	
Label_1205:
	WaitForAnimEnd(var_20_bool); // 0x4b5 Func
	var_41_bool = var_20_bool == 0; // 0x4b7 Not
	if(var_41_bool == 0) goto Label_1210; // 0x4b8 JumpB
	goto Label_1230; // 0x4b9 Jump
	
Label_1210:
	goto Label_1231; // 0x4ba Jump
	
Label_1212:
	var_42_int = 1; // 0x4bc PushI
	Sleep(var_42_int); // 0x4bd Func
	var_22_object = 0; // 0x4bf SetNull
	goto Label_1230; // 0x4c0 Jump
	
Label_1217:
	var_43_float = GetByIndex(var_0_object, 0); // 0x4c1 PushE
	var_44_float = GetByIndex(var_0_object, 2); // 0x4c2 PushE
	Rotate(var_43_float, var_44_float, var_20_bool); // 0x4c3 Func
	var_45_bool = var_20_bool == 0; // 0x4c5 Not
	if(var_45_bool == 0) goto Label_1224; // 0x4c6 JumpB
	goto Label_1230; // 0x4c7 Jump
	
Label_1224:
	WaitForAnimEnd(var_20_bool); // 0x4c8 Func
	var_46_bool = var_20_bool == 0; // 0x4ca Not
	if(var_46_bool == 0) goto Label_1229; // 0x4cb JumpB
	goto Label_1230; // 0x4cc Jump
	
Label_1229:
	goto Label_1231; // 0x4cd Jump
}


func_1543()
{
	var_18_bool = 0; // 0x607 PushV
	func_1648(var_18_bool); // 0x608 Call
	if(var_18_bool == 0) goto Label_1549; // 0x60a JumpB
	lshStopSpeech(); // 0x60b Func
	
Label_1549:
	return 0; // 0x60d Return
}


func_265(var_0_object, var_238_bool, var_239_float)
{
	var_240_int = 0; var_241_bool = 0; var_242_int = 0; var_243_bool = 0; // 0x109 PushV
	irand(var_242_int, var_243_bool); // 0x10a Func
	var_244_int = 1; // 0x10c PushI
	var_242_int = var_242_int + var_244_int; // 0x10d Add2
	Face(var_0_object); // 0x10e Func
	var_245_bool = 1; // 0x110 PushB
	SetAttackState(var_245_bool); // 0x111 Func
	var_246_string = "all"; // 0x113 PushS
	var_247_string = "attack_begin"; // 0x114 PushS
	var_248_int = var_247_string + var_242_int; // 0x115 Add
	PlayAnimation(var_246_string, var_248_int); // 0x116 Func
	WaitForAnimEnd(); // 0x118 Func
	func_472(var_242_int, var_243_bool); // 0x11b Call
	var_264_bool = 0; var_265_object = Obj(); // 0x11d PushV
	var_265_object = var_0_object; // 0x11e MovT
	func_1363(var_264_bool, var_265_object); // 0x11f Call
	var_266_bool = var_264_bool == 0; // 0x121 Not
	if(var_266_bool == 0) goto Label_295; // 0x122 JumpB
	StopAsync(); // 0x123 Func
	var_238_bool = 0; // 0x125 MovB
	return 4; // 0x126 Return
	
Label_295:
	var_267_float = 0; var_268_int = 0; // 0x127 PushV
	var_267_float = var_239_float; // 0x128 Mov
	var_268_int = var_242_int; // 0x129 Mov
	func_226(var_243_bool, var_267_float, var_268_int); // 0x12a Call
	var_337_string = "all"; // 0x12c PushS
	var_338_string = "attack_middle"; // 0x12d PushS
	var_339_int = var_338_string + var_242_int; // 0x12e Add
	HasAnimation(var_243_bool, var_337_string, var_339_int); // 0x12f Func
	var_340_bool = var_243_bool; // 0x131 Push
	if(var_340_bool == 0) goto Label_329; // 0x132 JumpB
	var_341_string = "all"; // 0x133 PushS
	var_342_string = "attack_middle"; // 0x134 PushS
	var_343_int = var_342_string + var_242_int; // 0x135 Add
	PlayAnimation(var_341_string, var_343_int); // 0x136 Func
	WaitForAnimEnd(); // 0x138 Func
	var_344_bool = 0; var_345_object = Obj(); // 0x13a PushV
	var_345_object = var_0_object; // 0x13b MovT
	func_1363(var_344_bool, var_345_object); // 0x13c Call
	var_346_bool = var_344_bool == 0; // 0x13e Not
	if(var_346_bool == 0) goto Label_324; // 0x13f JumpB
	StopAsync(); // 0x140 Func
	var_238_bool = 0; // 0x142 MovB
	return 4; // 0x143 Return
	
Label_324:
	var_347_float = 0; var_348_int = 0; // 0x144 PushV
	var_347_float = var_239_float; // 0x145 Mov
	var_348_int = var_242_int; // 0x146 Mov
	func_226(var_243_bool, var_347_float, var_348_int); // 0x147 Call
	
Label_329:
	var_349_bool = 0; // 0x149 PushB
	SetAttackState(var_349_bool); // 0x14a Func
	var_350_string = "all"; // 0x14c PushS
	var_351_string = "attack_end"; // 0x14d PushS
	var_352_int = var_351_string + var_242_int; // 0x14e Add
	PlayAnimation(var_350_string, var_352_int); // 0x14f Func
	var_353_bool = 0; var_354_float = 0; // 0x151 PushV
	var_354_float = 0.75; // 0x152 MovF
	func_345(var_353_bool, var_354_float); // 0x153 Call
	StopAsync(); // 0x155 Func
	var_238_bool = 1; // 0x157 MovB
	return 4; // 0x158 Return
}


func_652(var_135_bool, var_136_object)
{
	var_137_bool = 0; var_138_object = Obj(); // 0x28d PushV
	var_138_object = var_136_object; // 0x28e Mov
	func_1363(var_137_bool, var_138_object); // 0x28f Call
	var_135_bool = var_137_bool; // 0x290 Mov
	return 0; // 0x292 Return
}


func_1550(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x60e PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x60f Or
	var_58_float = sqrt(var_59_int); // 0x610 Sqrt2
	var_60_float = 0.0; // 0x611 PushF
	var_61_bool = var_58_float < var_60_float; // 0x612 LT
	if(var_61_bool == 0) goto Label_1558; // 0x613 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x614 MovV
	return 2; // 0x615 Return
	
Label_1558:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x616 Div2
	return 2; // 0x617 Return
}


func_15(var_278_float)
{
	var_278_float = 0.3; // 0x10 MovF
	return 0; // 0x11 Return
}


func_18(var_285_int)
{
	var_285_int = 0; // 0x13 MovI
	return 0; // 0x14 Return
}


func_659(var_153_string)
{
	var_153_string = "walk"; // 0x293 MovS
	return 0; // 0x294 Return
}


func_21(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_28_object, var_29_bool, var_30_float, var_117_bool)
{
	var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_float = 0; var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_float = 0; // 0x15 PushV
	var_1_int = 0; // 0x16 TMovI
	
Label_23:
	var_51_string = "all"; // 0x17 PushS
	var_52_string = "attack_begin"; // 0x18 PushS
	var_53_int = 1; // 0x19 PushI
	var_54_int = var_1_int + var_53_int; // 0x1a Add
	var_55_int = var_52_string + var_54_int; // 0x1b Add
	HasAnimation(var_41_bool, var_51_string, var_55_int); // 0x1c Func
	var_56_bool = var_41_bool == 0; // 0x1e Not
	if(var_56_bool == 0) goto Label_33; // 0x1f JumpB
	goto Label_36; // 0x20 Jump
	
Label_36:
	var_2_int = 0; // 0x24 TMovI
	
Label_37:
	var_57_string = "attack"; // 0x25 PushS
	var_58_int = 1; // 0x26 PushI
	var_59_int = var_2_int + var_58_int; // 0x27 Add
	var_60_int = var_57_string + var_59_int; // 0x28 Add
	IsExisting3DSound(var_42_bool, var_60_int); // 0x29 Func
	var_61_bool = var_42_bool == 0; // 0x2b Not
	if(var_61_bool == 0) goto Label_46; // 0x2c JumpB
	goto Label_49; // 0x2d Jump
	
Label_49:
	var_4_int = 0; // 0x31 TMovI
	var_62_string = "@GetAttackDistance"; // 0x32 PushS
	var_63_int = 1; // 0x33 PushI
	var_64_bool = IsFuncExist(var_28_object, var_62_string, var_63_int); // 0x34 FuncExist
	if(var_64_bool == 0) goto Label_59; // 0x35 JumpB
	GetAttackDistance(var_43_float); // 0x36 ObjFunc
	var_65_int = 50; // 0x38 PushI
	var_43_float = var_43_float + var_65_int; // 0x39 Add2
	goto Label_60; // 0x3a Jump
	
Label_60:
	var_66_int = 150; // 0x3c PushI
	var_67_bool = var_43_float >= var_66_int; // 0x3d GE
	if(var_67_bool == 0) goto Label_64; // 0x3e JumpB
	var_43_float = 150; // 0x3f MovI
	
Label_64:
	var_3_bool = 0; // 0x40 TMovB
	var_0_object = var_28_object; // 0x41 TMov
	IsPlayerActor(var_0_object, var_46_bool); // 0x42 Func
	var_68_bool = var_29_bool; // 0x44 Push
	if(var_68_bool == 0) goto Label_72; // 0x45 JumpB
	var_47_bool = 0; // 0x46 MovB
	goto Label_73; // 0x47 Jump
	
Label_73:
	var_69_bool = 0; // 0x49 PushV
	var_69_bool = 0; // 0x4a MovB
	var_70_bool = 0; var_71_object = Obj(); // 0x4b PushV
	var_71_object = var_0_object; // 0x4c MovT
	func_1363(var_70_bool, var_71_object); // 0x4d Call
	if(var_70_bool == 0) goto Label_83; // 0x4f JumpB
	var_104_bool = var_3_bool == 0; // 0x50 Not
	if(var_104_bool == 0) goto Label_83; // 0x51 JumpB
	var_69_bool = 1; // 0x52 MovB
	
Label_83:
	if(var_69_bool == 0) goto Label_209; // 0x53 JumpB
	GetPFPosition(var_44_cvector); // 0x54 TObjFunc
	GetPFPosition(var_45_cvector); // 0x56 Func
	var_48_cvector = var_44_cvector - var_45_cvector; // 0x58 Sub2
	var_49_float = var_48_cvector | var_48_cvector; // 0x59 Or2
	var_105_float = 400.0; // 0x5a PushF
	var_106_int = var_105_float + var_43_float; // 0x5b Add
	var_107_float = 400.0; // 0x5c PushF
	var_108_int = var_107_float + var_43_float; // 0x5d Add
	var_109_float = var_106_int * var_108_int; // 0x5e Mult
	var_110_bool = var_49_float >= var_109_float; // 0x5f GE
	if(var_110_bool == 0) goto Label_112; // 0x60 JumpB
	var_111_bool = 0; var_112_object = Obj(); var_113_float = 0; var_114_float = 0; var_115_bool = 0; var_116_bool = 0; // 0x61 PushV
	var_112_object = var_0_object; // 0x62 MovT
	var_113_float = var_43_float; // 0x63 Mov
	var_114_float = 10000.0; // 0x64 MovF
	var_115_bool = 1; // 0x65 MovB
	var_116_bool = 0; // 0x66 MovB
	TaskCall(1); // 0x67 TaskCall
	func_512(var_117_bool, var_118_object, var_111_bool, var_112_object, var_113_float, var_114_float, var_115_bool, var_116_bool); // 0x68 Call
	TaskReturn(); // 0x69 TaskReturn
	var_164_bool = var_117_bool == 0; // 0x6b Not
	if(var_164_bool == 0) goto Label_110; // 0x6c JumpB
	goto Label_209; // 0x6d Jump
	
Label_209:
	WaitForAnimEnd(); // 0xd1 Func
	var_165_bool = var_3_bool; // 0xd3 PushT
	if(var_165_bool == 0) goto Label_214; // 0xd4 JumpB
	return 20; // 0xd5 Return
	
Label_214:
	var_166_string = "all"; // 0xd6 PushS
	var_167_string = "attack_off"; // 0xd7 PushS
	PlayAnimation(var_166_string, var_167_string); // 0xd8 Func
	WaitForAnimEnd(); // 0xda Func
	var_168_bool = var_46_bool; // 0xdc Push
	if(var_168_bool == 0) goto Label_225; // 0xdd JumpB
	var_169_float = 2.0; // 0xde PushF
	Sleep(var_169_float); // 0xdf Func
	
Label_225:
	return 20; // 0xe1 Return
	
Label_110:
	var_47_bool = 0; // 0x6e MovB
	goto Label_208; // 0x6f Jump
	
Label_208:
	goto Label_73; // 0xd0 Jump
	
Label_112:
	var_170_float = var_30_float * var_30_float; // 0x70 Mult
	var_171_bool = var_49_float >= var_170_float; // 0x71 GE
	if(var_171_bool == 0) goto Label_200; // 0x72 JumpB
	var_172_bool = var_47_bool == 0; // 0x73 Not
	if(var_172_bool == 0) goto Label_130; // 0x74 JumpB
	var_173_object = Obj(); // 0x75 PushV
	var_173_object = var_0_object; // 0x76 MovT
	func_1454(); // 0x77 Call
	var_182_string = "all"; // 0x79 PushS
	var_183_string = "attack_on"; // 0x7a PushS
	PlayAnimation(var_182_string, var_183_string); // 0x7b Func
	WaitForAnimEnd(); // 0x7d Func
	StopAsync(); // 0x7f Func
	var_47_bool = 1; // 0x81 MovB
	
Label_130:
	rand(var_50_float); // 0x82 Func
	var_184_bool = 0; // 0x84 PushV
	var_184_bool = 1; // 0x85 MovB
	var_185_float = 0.6; // 0x86 PushF
	var_186_bool = var_50_float < var_185_float; // 0x87 LT
	if(var_186_bool == 0) goto Label_142; // 0x88 JumpB
	var_187_bool = 0; // 0x89 PushV
	func_461(var_184_bool, var_187_bool); // 0x8a Call
	if(var_187_bool == 0) goto Label_142; // 0x8c JumpB
	var_184_bool = 0; // 0x8d MovB
	
Label_142:
	if(var_184_bool == 0) goto Label_156; // 0x8e JumpB
	Face(var_0_object); // 0x8f Func
	var_193_string = "all"; // 0x91 PushS
	var_194_string = "attack_stay"; // 0x92 PushS
	PlayAnimation(var_193_string, var_194_string); // 0x93 Func
	var_195_bool = 0; var_196_float = 0; // 0x95 PushV
	var_196_float = var_30_float; // 0x96 Mov
	func_369(var_50_float, var_195_bool, var_196_float); // 0x97 Call
	StopAsync(); // 0x99 Func
	goto Label_199; // 0x9b Jump
	
Label_199:
	goto Label_208; // 0xc7 Jump
	
Label_156:
	Face(var_0_object); // 0x9c Func
	var_362_string = "all"; // 0x9e PushS
	var_363_string = "fjump"; // 0x9f PushS
	PlayAnimation(var_362_string, var_363_string); // 0xa0 Func
	WaitForAnimEnd(); // 0xa2 Func
	var_364_cvector = CVector(0.0, 0.0, 0.0); // 0xa4 PushVec
	SetSpeed(var_364_cvector); // 0xa5 Func
	Stop(); // 0xa7 Func
	StopAsync(); // 0xa9 Func
	var_365_bool = 0; // 0xab PushV
	func_461(var_50_float, var_365_bool); // 0xac Call
	var_366_bool = var_365_bool == 0; // 0xae Not
	if(var_366_bool == 0) goto Label_199; // 0xaf JumpB
	var_367_bool = 0; var_368_object = Obj(); // 0xb0 PushV
	var_368_object = var_0_object; // 0xb1 MovT
	func_1363(var_367_bool, var_368_object); // 0xb2 Call
	var_369_bool = var_367_bool == 0; // 0xb4 Not
	if(var_369_bool == 0) goto Label_183; // 0xb5 JumpB
	goto Label_209; // 0xb6 Jump
	
Label_183:
	GetPFPosition(var_44_cvector); // 0xb7 TObjFunc
	GetPFPosition(var_45_cvector); // 0xb9 Func
	var_48_cvector = var_44_cvector - var_45_cvector; // 0xbb Sub2
	var_49_float = var_48_cvector | var_48_cvector; // 0xbc Or2
	var_370_float = var_30_float * var_30_float; // 0xbd Mult
	var_371_bool = var_49_float < var_370_float; // 0xbe LT
	if(var_371_bool == 0) goto Label_199; // 0xbf JumpB
	var_372_bool = 0; var_373_float = 0; // 0xc0 PushV
	var_373_float = var_30_float; // 0xc1 Mov
	func_265(var_50_float, var_372_bool, var_373_float); // 0xc2 Call
	var_374_bool = var_372_bool == 0; // 0xc4 Not
	if(var_374_bool == 0) goto Label_199; // 0xc5 JumpB
	goto Label_209; // 0xc6 Jump
	
Label_200:
	var_375_bool = 0; var_376_float = 0; // 0xc8 PushV
	var_376_float = var_30_float; // 0xc9 Mov
	func_265(var_50_float, var_375_bool, var_376_float); // 0xca Call
	var_377_bool = var_375_bool == 0; // 0xcc Not
	if(var_377_bool == 0) goto Label_207; // 0xcd JumpB
	goto Label_209; // 0xce Jump
	
Label_207:
	var_47_bool = 1; // 0xcf MovB
	
Label_72:
	var_47_bool = 1; // 0x48 MovB
	
Label_59:
	var_43_float = var_30_float; // 0x3b Mov
	
Label_46:
	var_378_int = 1; // 0x2e PushI
	var_2_int = var_2_int + var_378_int; // 0x2f Add2
	goto Label_37; // 0x30 Jump
	
Label_33:
	var_379_int = 1; // 0x21 PushI
	var_1_int = var_1_int + var_379_int; // 0x22 Add2
	goto Label_23; // 0x23 Jump
}


func_661(var_154_string)
{
	var_154_string = "run"; // 0x295 MovS
	return 0; // 0x296 Return
}


func_663(var_25_object)
{
	var_26_object = Obj(); // 0x298 PushV
	var_26_object = var_25_object; // 0x299 Mov
	func_684(var_26_object); // 0x29a Call
	var_76_int = 50; // 0x29c PushI
	var_77_int = 40; // 0x29d PushI
	SetRTEnvelope(var_76_int, var_77_int); // 0x29e Func
	
Label_672:
	Hold(); // 0x2a0 Func
	goto Label_672; // 0x2a2 Jump
}


func_1560(var_27_float, var_28_cvector, var_29_cvector)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0x618 PushV
	var_31_cvector = var_29_cvector - var_28_cvector; // 0x619 Sub2
	var_27_float = var_31_cvector | var_31_cvector; // 0x61a Or2
	return 2; // 0x61b Return
}


func_409(var_0_object, var_208_bool)
{
	var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_float = 0; var_213_float = 0; var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_float = 0; var_218_float = 0; // 0x199 PushV
	var_219_bool = 0; var_220_object = Obj(); // 0x19a PushV
	var_220_object = var_0_object; // 0x19b MovT
	func_1363(var_219_bool, var_220_object); // 0x19c Call
	var_221_bool = var_219_bool == 0; // 0x19e Not
	if(var_221_bool == 0) goto Label_418; // 0x19f JumpB
	var_208_bool = 0; // 0x1a0 MovB
	return 10; // 0x1a1 Return
	
Label_418:
	var_222_bool = 0; // 0x1a2 PushV
	func_461(var_218_float, var_222_bool); // 0x1a3 Call
	if(var_222_bool == 0) goto Label_440; // 0x1a5 JumpB
	GetPFPosition(var_214_cvector); // 0x1a6 TObjFunc
	GetPFPosition(var_215_cvector); // 0x1a8 Func
	var_216_cvector = var_214_cvector - var_215_cvector; // 0x1aa Sub2
	var_217_float = var_216_cvector | var_216_cvector; // 0x1ab Or2
	GetAttackDistance(var_218_float); // 0x1ac TObjFunc
	var_223_int = 50; // 0x1ae PushI
	var_218_float = var_218_float + var_223_int; // 0x1af Add2
	var_224_float = var_218_float * var_218_float; // 0x1b0 Mult
	var_225_bool = var_217_float <= var_224_float; // 0x1b1 LE
	if(var_225_bool == 0) goto Label_440; // 0x1b2 JumpB
	func_442(var_218_float); // 0x1b4 Call
	var_208_bool = 1; // 0x1b6 MovB
	return 10; // 0x1b7 Return
	
Label_440:
	var_208_bool = 0; // 0x1b8 MovB
	return 10; // 0x1b9 Return
}


func_920(var_2_int, var_88_string)
{
	var_89_bool = 0; // 0x399 PushV
	func_1648(var_89_bool); // 0x39a Call
	var_90_bool = var_89_bool == 0; // 0x39c Not
	if(var_90_bool == 0) goto Label_927; // 0x39d JumpB
	return 0; // 0x39e Return
	
Label_927:
	var_91_bool = var_88_string == var_2_int; // 0x39f Eq
	if(var_91_bool == 0) goto Label_930; // 0x3a0 JumpB
	return 0; // 0x3a1 Return
	
Label_930:
	var_92_string = ""; // 0x3a2 PushV
	var_92_string = var_88_string; // 0x3a3 Mov
	func_1525(var_92_string); // 0x3a4 Call
	var_2_int = var_88_string; // 0x3a6 TMov
	return 0; // 0x3a7 Return
}


func_1564(var_317_float, var_318_float, var_319_float)
{
	var_322_bool = var_318_float < var_319_float; // 0x61d LT
	if(var_322_bool == 0) goto Label_1569; // 0x61e JumpB
	var_317_float = var_318_float; // 0x61f Mov
	goto Label_1570; // 0x620 Jump
	
Label_1570:
	return 0; // 0x622 Return
	
Label_1569:
	var_317_float = var_319_float; // 0x621 Mov
}


func_799(var_0_object, var_18_int, var_19_object)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0x31f PushV
	var_0_object = var_19_object; // 0x320 TMov
	var_29_bool = 0; var_30_object = Obj(); // 0x321 PushV
	var_30_object = var_19_object; // 0x322 Mov
	func_1465(var_30_object); // 0x323 Call
	var_69_bool = var_29_bool == 0; // 0x325 Not
	if(var_69_bool == 0) goto Label_809; // 0x326 JumpB
	var_18_int = -2; // 0x327 MovI
	return 8; // 0x328 Return
	
Label_809:
	CreateDialog(var_25_object); // 0x329 Func
	var_70_int = 0; // 0x32b PushV
	func_1644(var_70_int); // 0x32c Call
	SetNPCName(var_70_int); // 0x32e ObjFunc
	var_71_string = ""; // 0x330 PushV
	func_1646(var_71_string); // 0x331 Call
	SetPhoto(var_71_string); // 0x333 ObjFunc
	var_72_int = 0; // 0x335 PushV
	func_1627(var_72_int); // 0x336 Call
	SetPlayerName(var_72_int); // 0x338 ObjFunc
	var_27_int = -1; // 0x33a MovI
	IsOverrideActive(var_26_bool); // 0x33b Func
	var_80_bool = var_26_bool; // 0x33d Push
	if(var_80_bool == 0) goto Label_833; // 0x33e JumpB
	var_18_int = -2; // 0x33f MovI
	return 8; // 0x340 Return
	
Label_833:
	DoDialog(var_25_object); // 0x341 Func
	var_81_object = Obj(); var_82_object = Obj(); // 0x343 PushV
	var_81_object = var_19_object; // 0x344 Mov
	var_82_object = var_25_object; // 0x345 Mov
	TaskCall(4); // 0x346 TaskCall
	func_862(var_83_object, var_84_object, var_85_string, var_86_bool, var_81_object, var_82_object); // 0x347 Call
	TaskReturn(); // 0x348 TaskReturn
	IsDialogEnd(var_28_bool); // 0x34a ObjFunc
	
Label_844:
	var_118_bool = var_28_bool == 0; // 0x34c Not
	if(var_118_bool == 0) goto Label_851; // 0x34d JumpB
	sync(); // 0x34e Func
	IsDialogEnd(var_28_bool); // 0x350 ObjFunc
	goto Label_844; // 0x352 Jump
	
Label_851:
	var_119_object = Obj(); // 0x353 PushV
	var_119_object = var_19_object; // 0x354 Mov
	func_1521(); // 0x355 Call
	StopDialog(var_25_object); // 0x357 Func
	GetReturnValue(var_27_int); // 0x359 ObjFunc
	var_18_int = var_27_int; // 0x35b Mov
	return 8; // 0x35c Return
}


func_1571(var_327_float, var_328_float, var_329_float, var_330_float)
{
	var_331_bool = var_328_float < var_329_float; // 0x624 LT
	if(var_331_bool == 0) goto Label_1576; // 0x625 JumpB
	var_327_float = var_329_float; // 0x626 Mov
	return 0; // 0x627 Return
	
Label_1576:
	var_332_bool = var_328_float > var_330_float; // 0x628 GT
	if(var_332_bool == 0) goto Label_1580; // 0x629 JumpB
	var_327_float = var_330_float; // 0x62a Mov
	return 0; // 0x62b Return
	
Label_1580:
	var_327_float = var_328_float; // 0x62c Mov
	return 0; // 0x62d Return
}


func_1322(var_85_bool)
{
	var_87_bool = 0; var_88_bool = 0; // 0x52a PushV
	IsDead(var_88_bool); // 0x52b ObjFunc
	var_85_bool = var_88_bool; // 0x52d Mov
	return 2; // 0x52e Return
}


func_684(var_26_object)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_object = Obj(); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_object = Obj(); var_43_bool = 0; var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); // 0x2ac PushV
	var_47_bool = var_26_object == 0; // 0x2ad NullEq
	if(var_47_bool == 0) goto Label_692; // 0x2ae JumpB
	var_48_string = ""; // 0x2af PushV
	var_48_string = "fdie"; // 0x2b0 MovS
	func_771(var_48_string); // 0x2b1 Call
	goto Label_770; // 0x2b3 Jump
	
Label_770:
	return 20; // 0x302 Return
	
Label_692:
	GetPosition(var_37_cvector); // 0x2b4 ObjFunc
	GetPosition(var_38_cvector); // 0x2b6 Func
	GetDirection(var_39_cvector); // 0x2b8 Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x2ba Sub2
	var_51_float = GetByIndex(var_40_cvector, 0); // 0x2bb PushE
	var_52_float = GetByIndex(var_39_cvector, 0); // 0x2bc PushE
	var_53_float = var_51_float * var_52_float; // 0x2bd Mult
	var_54_float = GetByIndex(var_40_cvector, 2); // 0x2be PushE
	var_55_float = GetByIndex(var_39_cvector, 2); // 0x2bf PushE
	var_56_float = var_54_float * var_55_float; // 0x2c0 Mult
	var_57_int = var_53_float + var_56_float; // 0x2c1 Add
	var_58_int = 0; // 0x2c2 PushI
	var_59_bool = var_57_int >= var_58_int; // 0x2c3 GE
	if(var_59_bool == 0) goto Label_711; // 0x2c4 JumpB
	var_41_string = "fdie"; // 0x2c5 MovS
	goto Label_712; // 0x2c6 Jump
	
Label_712:
	RemoveRTEnvelope(); // 0x2c8 Func
	SetDeathState(); // 0x2ca Func
	Stop(); // 0x2cc Func
	StopAsync(); // 0x2ce Func
	var_42_object = var_26_object; // 0x2d0 Mov
	var_60_string = "GetScriptProperty"; // 0x2d1 PushS
	var_61_int = 2; // 0x2d2 PushI
	var_62_bool = IsFuncExist(var_26_object, var_60_string, var_61_int); // 0x2d3 FuncExist
	if(var_62_bool == 0) goto Label_736; // 0x2d4 JumpB
	var_63_string = "Owner"; // 0x2d5 PushS
	HasScriptProperty(var_43_bool, var_63_string); // 0x2d6 ObjFunc
	var_64_bool = var_43_bool; // 0x2d8 Push
	if(var_64_bool == 0) goto Label_736; // 0x2d9 JumpB
	var_65_string = "Owner"; // 0x2da PushS
	GetScriptProperty(var_42_object, var_65_string); // 0x2db ObjFunc
	var_66_bool = var_42_object == 0; // 0x2dd NullEq
	if(var_66_bool == 0) goto Label_736; // 0x2de JumpB
	var_42_object = var_26_object; // 0x2df Mov
	
Label_736:
	var_67_string = "@GetEyesHeight"; // 0x2e0 PushS
	var_68_int = 1; // 0x2e1 PushI
	var_69_bool = IsFuncExist(var_42_object, var_67_string, var_68_int); // 0x2e2 FuncExist
	if(var_69_bool == 0) goto Label_751; // 0x2e3 JumpB
	GetEyesHeight(var_45_float); // 0x2e4 ObjFunc
	var_46_cvector = CVector(0.0, 0.0, 0.0); // 0x2e6 MovV
	var_70_float = GetByIndex(var_46_cvector, 1); // 0x2e7 PushE
	var_70_float = var_45_float; // 0x2e8 Mov
	SetByIndex(var_46_cvector, 1) = var_70_float; // 0x2e9 PopE
	var_71_string = "head"; // 0x2ea PushS
	LookAsync(var_26_object, var_71_string, var_46_cvector); // 0x2eb Func
	var_44_bool = 1; // 0x2ed MovB
	goto Label_752; // 0x2ee Jump
	
Label_752:
	var_72_string = "all"; // 0x2f0 PushS
	PlayAnimation(var_72_string, var_41_string); // 0x2f1 Func
	WaitForAnimEnd(); // 0x2f3 Func
	var_73_bool = var_44_bool; // 0x2f5 Push
	if(var_73_bool == 0) goto Label_764; // 0x2f6 JumpB
	StopAsync(); // 0x2f7 Func
	var_74_string = "head"; // 0x2f9 PushS
	UnlookAsync(var_74_string); // 0x2fa Func
	
Label_764:
	var_75_string = "all"; // 0x2fc PushS
	LockAnimationEnd(var_75_string, var_41_string); // 0x2fd Func
	RemoveEnvelope(); // 0x2ff Func
	var_42_object = 0; // 0x301 SetNull
	
Label_751:
	var_44_bool = 0; // 0x2ef MovB
	
Label_711:
	var_41_string = "bdie"; // 0x2c7 MovS
}


func_1454()
{
	var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); // 0x5ae PushV
	GetPosition(var_177_cvector); // 0x5af ObjFunc
	GetPosition(var_178_cvector); // 0x5b1 Func
	var_179_cvector = var_177_cvector - var_178_cvector; // 0x5b3 Sub2
	var_180_float = GetByIndex(var_179_cvector, 0); // 0x5b4 PushE
	var_181_float = GetByIndex(var_179_cvector, 2); // 0x5b5 PushE
	RotateAsync(var_180_float, var_181_float); // 0x5b6 Func
	return 6; // 0x5b8 Return
}


func_1327(var_74_bool, var_75_object)
{
	var_76_object = Obj(); var_77_object = Obj(); var_78_object = Obj(); var_79_object = Obj(); // 0x52f PushV
	var_80_bool = var_75_object == 0; // 0x530 NullEq
	if(var_80_bool == 0) goto Label_1332; // 0x531 JumpB
	var_74_bool = 0; // 0x532 MovB
	return 4; // 0x533 Return
	
Label_1332:
	var_81_bool = 0; // 0x534 PushV
	var_81_bool = 0; // 0x535 MovB
	var_82_string = "IsDead"; // 0x536 PushS
	var_83_int = 1; // 0x537 PushI
	var_84_bool = IsFuncExist(var_75_object, var_82_string, var_83_int); // 0x538 FuncExist
	if(var_84_bool == 0) goto Label_1344; // 0x539 JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x53a PushV
	var_86_object = var_75_object; // 0x53b Mov
	func_1322(var_86_object); // 0x53c Call
	if(var_85_bool == 0) goto Label_1344; // 0x53e JumpB
	var_81_bool = 1; // 0x53f MovB
	
Label_1344:
	if(var_81_bool == 0) goto Label_1347; // 0x540 JumpB
	var_74_bool = 0; // 0x541 MovB
	return 4; // 0x542 Return
	
Label_1347:
	GetScene(var_78_object); // 0x543 Func
	var_89_bool = var_78_object == 0; // 0x545 NullEq
	if(var_89_bool == 0) goto Label_1353; // 0x546 JumpB
	var_74_bool = 0; // 0x547 MovB
	return 4; // 0x548 Return
	
Label_1353:
	GetScene(var_79_object); // 0x549 ObjFunc
	var_90_bool = var_78_object != var_79_object; // 0x54b Neq
	if(var_90_bool == 0) goto Label_1359; // 0x54c JumpB
	var_74_bool = 0; // 0x54d MovB
	return 4; // 0x54e Return
	
Label_1359:
	var_74_bool = 1; // 0x54f MovB
	return 4; // 0x550 Return
}


func_1582(var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x62e PushV
	var_19_string = "revolver_ammo"; // 0x62f PushS
	var_20_int = 0; // 0x630 PushI
	var_21_int = 2; // 0x631 PushI
	AddItem(var_18_bool, var_19_string, var_20_int, var_21_int); // 0x632 Func
	var_22_string = "alpha_pills"; // 0x634 PushS
	var_23_int = 0; // 0x635 PushI
	var_24_int = 2; // 0x636 PushI
	AddItem(var_18_bool, var_22_string, var_23_int, var_24_int); // 0x637 Func
	var_25_object = Obj(); // 0x639 PushV
	var_25_object = var_16_object; // 0x63a Mov
	TaskCall(2); // 0x63b TaskCall
	func_663(var_25_object); // 0x63c Call
	TaskReturn(); // 0x63d TaskReturn
	return 2; // 0x63f Return
}


func_1465(var_29_bool)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0x5b9 PushV
	GetPosition(var_40_cvector); // 0x5ba ObjFunc
	GetEyesHeight(var_39_float); // 0x5bc ObjFunc
	var_47_float = GetByIndex(var_40_cvector, 1); // 0x5be PushE
	var_47_float = var_47_float + var_39_float; // 0x5bf Add2
	SetByIndex(var_40_cvector, 1) = var_47_float; // 0x5c0 PopE
	GetPosition(var_41_cvector); // 0x5c1 Func
	GetEyesHeight(var_39_float); // 0x5c3 Func
	var_48_float = GetByIndex(var_41_cvector, 1); // 0x5c5 PushE
	var_48_float = var_48_float + var_39_float; // 0x5c6 Add2
	SetByIndex(var_41_cvector, 1) = var_48_float; // 0x5c7 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x5c8 Sub2
	var_49_float = GetByIndex(var_42_cvector, 1); // 0x5c9 PushE
	var_49_float = 0; // 0x5ca MovI
	SetByIndex(var_42_cvector, 1) = var_49_float; // 0x5cb PopE
	var_50_int = var_42_cvector | var_42_cvector; // 0x5cc Or
	var_51_float = sqrt(var_50_int); // 0x5cd Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x5ce Div2
	var_43_cvector = -var_42_cvector; // 0x5cf Neg2
	var_52_int = 70; // 0x5d0 PushI
	var_53_float = var_42_cvector * var_52_int; // 0x5d1 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x5d2 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x5d3 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x5d4 Xor2
	func_1550(var_54_cvector, var_55_cvector); // 0x5d5 Call
	var_62_int = 25; // 0x5d7 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x5d8 Mult
	var_64_int = var_53_float + var_63_float; // 0x5d9 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x5da PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x5db Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x5dc Add2
	IsOverrideActive(var_46_bool); // 0x5dd Func
	var_66_bool = var_46_bool; // 0x5df Push
	if(var_66_bool == 0) goto Label_1507; // 0x5e0 JumpB
	var_29_bool = 0; // 0x5e1 MovB
	return 16; // 0x5e2 Return
	
Label_1507:
	StopWorld(); // 0x5e3 Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x5e5 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x5e7 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x5e8 PushE
	Rotate(var_67_float, var_68_float); // 0x5e9 Func
	CameraWaitForPlayFinish(); // 0x5eb Func
	ResumeWorld(); // 0x5ed Func
	var_29_bool = 1; // 0x5ef MovB
	return 16; // 0x5f0 Return
}


func_442(var_0_object)
{
	var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); // 0x1ba PushV
	Face(var_0_object); // 0x1bb Func
	var_230_string = "all"; // 0x1bd PushS
	var_231_string = "bjump"; // 0x1be PushS
	PlayAnimation(var_230_string, var_231_string); // 0x1bf Func
	GetPFPosition(var_228_cvector); // 0x1c1 TObjFunc
	GetPFPosition(var_229_cvector); // 0x1c3 Func
	WaitForAnimEnd(); // 0x1c5 Func
	StopAsync(); // 0x1c7 Func
	var_232_cvector = CVector(0.0, 0.0, 0.0); // 0x1c9 PushVec
	SetSpeed(var_232_cvector); // 0x1ca Func
	return 4; // 0x1cc Return
}


func_461(var_0_object, var_187_bool)
{
	var_188_bool = 0; var_189_bool = 0; // 0x1cd PushV
	var_190_string = "IsAttacking"; // 0x1ce PushS
	var_191_int = 1; // 0x1cf PushI
	var_192_bool = IsFuncExist(var_0_object, var_190_string, var_191_int); // 0x1d0 FuncExist
	if(var_192_bool == 0) goto Label_470; // 0x1d1 JumpB
	IsAttacking(var_189_bool); // 0x1d2 TObjFunc
	var_187_bool = var_189_bool; // 0x1d4 Mov
	return 2; // 0x1d5 Return
	
Label_470:
	var_187_bool = 0; // 0x1d6 MovB
	return 2; // 0x1d7 Return
}


func_1233()
{
	StopGroup0(); // 0x4d1 Func
	Stop(); // 0x4d3 Func
	return 0; // 0x4d5 Return
}


func_1363(var_70_bool, var_71_object)
{
	var_72_int = 0; var_73_int = 0; // 0x553 PushV
	var_74_bool = 0; var_75_object = Obj(); // 0x554 PushV
	var_75_object = var_71_object; // 0x555 Mov
	func_1327(var_74_bool, var_75_object); // 0x556 Call
	var_91_bool = var_74_bool == 0; // 0x558 Not
	if(var_91_bool == 0) goto Label_1372; // 0x559 JumpB
	var_70_bool = 0; // 0x55a MovB
	return 2; // 0x55b Return
	
Label_1372:
	var_92_bool = 0; var_93_object = Obj(); var_94_string = ""; // 0x55c PushV
	var_93_object = var_71_object; // 0x55d Mov
	var_94_string = "noaccess"; // 0x55e MovS
	func_1246(var_92_bool, var_93_object, var_94_string); // 0x55f Call
	var_101_bool = var_92_bool == 0; // 0x561 Not
	if(var_101_bool == 0) goto Label_1381; // 0x562 JumpB
	var_70_bool = 1; // 0x563 MovB
	return 2; // 0x564 Return
	
Label_1381:
	var_102_string = "noaccess"; // 0x565 PushS
	GetProperty(var_102_string, var_73_int); // 0x566 ObjFunc
	var_103_int = 0; // 0x568 PushI
	var_70_bool = var_73_int == var_103_int; // 0x569 Eq2
	return 2; // 0x56a Return
}


func_1238(var_309_string, var_310_int)
{
	var_311_int = 1; // 0x4d7 PushI
	var_312_bool = var_310_int == var_311_int; // 0x4d8 Eq
	if(var_312_bool == 0) goto Label_1244; // 0x4d9 JumpB
	var_309_string = "fire"; // 0x4da MovS
	return 0; // 0x4db Return
	
Label_1244:
	var_309_string = "phys"; // 0x4dc MovS
	return 0; // 0x4dd Return
}


func_472(var_2_int, var_4_int)
{
	var_249_float = 0; var_250_int = 0; var_251_float = 0; var_252_int = 0; // 0x1d8 PushV
	var_253_bool = var_2_int == 0; // 0x1d9 Not
	if(var_253_bool == 0) goto Label_476; // 0x1da JumpB
	return 4; // 0x1db Return
	
Label_476:
	var_254_int = var_4_int; // 0x1dc PushT
	if(var_254_int == 0) goto Label_484; // 0x1dd JumpB
	var_255_int = -1; // 0x1de PushI
	var_4_int = var_4_int + var_255_int; // 0x1df Add2
	var_256_int = 0; // 0x1e0 PushI
	var_257_bool = var_4_int > var_256_int; // 0x1e1 GT
	if(var_257_bool == 0) goto Label_484; // 0x1e2 JumpB
	return 4; // 0x1e3 Return
	
Label_484:
	rand(var_251_float); // 0x1e4 Func
	var_258_float = 0; // 0x1e6 PushV
	func_510(var_258_float); // 0x1e7 Call
	var_259_bool = var_251_float < var_258_float; // 0x1e9 LT
	if(var_259_bool == 0) goto Label_503; // 0x1ea JumpB
	irand(var_252_int, var_251_float); // 0x1eb Func
	var_260_int = 1; // 0x1ed PushI
	var_252_int = var_252_int + var_260_int; // 0x1ee Add2
	var_261_string = "attack"; // 0x1ef PushS
	var_262_int = var_261_string + var_252_int; // 0x1f0 Add
	Speak(var_262_int); // 0x1f1 Func
	var_263_int = 0; // 0x1f3 PushV
	func_508(var_263_int); // 0x1f4 Call
	var_4_int = var_263_int; // 0x1f5 TMov
	
Label_503:
	return 4; // 0x1f7 Return
}


func_345(var_353_bool, var_354_float)
{
	var_355_float = 0; var_356_bool = 0; var_357_float = 0; var_358_bool = 0; // 0x159 PushV
	rand(var_357_float); // 0x15a Func
	var_359_bool = var_357_float < var_354_float; // 0x15c LT
	if(var_359_bool == 0) goto Label_365; // 0x15d JumpB
	
Label_350:
	IsAnimationPlaying(var_358_bool); // 0x15e Func
	var_360_bool = var_358_bool == 0; // 0x160 Not
	if(var_360_bool == 0) goto Label_355; // 0x161 JumpB
	goto Label_364; // 0x162 Jump
	
Label_364:
	goto Label_367; // 0x16c Jump
	
Label_367:
	var_353_bool = 0; // 0x16f MovB
	return 4; // 0x170 Return
	
Label_355:
	var_361_bool = 0; // 0x163 PushV
	func_409(var_358_bool, var_361_bool); // 0x164 Call
	if(var_361_bool == 0) goto Label_361; // 0x166 JumpB
	var_353_bool = 1; // 0x167 MovB
	return 4; // 0x168 Return
	
Label_361:
	sync(); // 0x169 Func
	goto Label_350; // 0x16b Jump
	
Label_365:
	WaitForAnimEnd(); // 0x16d Func
}


func_1627(var_72_int)
{
	var_73_int = 0; var_74_int = 0; // 0x65b PushV
	var_75_string = "player"; // 0x65c PushS
	GetVariable(var_75_string, var_74_int); // 0x65d Func
	var_76_int = 0; // 0x65f PushI
	var_77_bool = var_74_int == var_76_int; // 0x660 Eq
	if(var_77_bool == 0) goto Label_1637; // 0x661 JumpB
	var_72_int = 200001; // 0x662 MovI
	return 2; // 0x663 Return
	
Label_1637:
	var_78_int = 1; // 0x665 PushI
	var_79_bool = var_74_int == var_78_int; // 0x666 Eq
	if(var_79_bool == 0) goto Label_1642; // 0x667 JumpB
	var_72_int = 200002; // 0x668 MovI
	return 2; // 0x669 Return
	
Label_1642:
	var_72_int = 200003; // 0x66a MovI
	return 2; // 0x66b Return
}


func_862(var_0_object, var_1_int, var_2_int, var_3_bool, var_81_object, var_82_object)
{
	var_0_object = var_82_object; // 0x35f TMov
	var_1_int = var_81_object; // 0x360 TMov
	var_3_bool = 0; // 0x361 TMovB
	var_87_int = 1; // 0x362 PushI
	if(var_87_int == 0) goto Label_890; // 0x363 JumpB
	var_88_string = ""; // 0x364 PushV
	var_88_string = "Neutral"; // 0x365 MovS
	func_920(var_82_object, var_88_string); // 0x366 Call
	var_103_int = 9102; // 0x368 PushI
	SetMessage(var_103_int); // 0x369 TObjFunc
	ClearReplies(); // 0x36b TObjFunc
	var_104_int = 9103; // 0x36d PushI
	var_105_int = 9989; // 0x36e PushI
	var_106_int = 9982; // 0x36f PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x370 TObjFunc
	var_107_int = 9104; // 0x372 PushI
	var_108_int = 9985; // 0x373 PushI
	var_109_int = 9983; // 0x374 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x375 TObjFunc
	goto Label_890; // 0x377 Jump
	
Label_890:
	var_110_bool = 0; // 0x37a PushV
	func_1648(var_110_bool); // 0x37b Call
	if(var_110_bool == 0) goto Label_905; // 0x37d JumpB
	
Label_894:
	lshWaitForAnimEnd(); // 0x37e Func
	var_111_bool = var_3_bool; // 0x380 PushT
	if(var_111_bool == 0) goto Label_899; // 0x381 JumpB
	goto Label_904; // 0x382 Jump
	
Label_904:
	goto Label_919; // 0x388 Jump
	
Label_919:
	return 0; // 0x397 Return
	
Label_899:
	var_112_string = ""; // 0x383 PushV
	var_112_string = var_2_int; // 0x384 MovT
	func_1525(var_112_string); // 0x385 Call
	goto Label_894; // 0x387 Jump
	
Label_905:
	var_113_string = "all"; // 0x389 PushS
	var_114_string = "idle"; // 0x38a PushS
	PlayAnimation(var_113_string, var_114_string); // 0x38b Func
	
Label_909:
	WaitForAnimEnd(); // 0x38d Func
	var_115_bool = var_3_bool; // 0x38f PushT
	if(var_115_bool == 0) goto Label_914; // 0x390 JumpB
	goto Label_919; // 0x391 Jump
	
Label_914:
	var_116_string = "all"; // 0x392 PushS
	var_117_string = "idle"; // 0x393 PushS
	PlayAnimation(var_116_string, var_117_string); // 0x394 Func
	goto Label_909; // 0x396 Jump
}


func_1119(var_2_int, var_16_bool)
{
	var_16_bool = var_2_int; // 0x45f MovT
	return 0; // 0x460 Return
}


func_1246(var_92_bool, var_93_object, var_94_string)
{
	var_95_bool = 0; var_96_bool = 0; // 0x4de PushV
	var_97_string = "HasProperty"; // 0x4df PushS
	var_98_int = 2; // 0x4e0 PushI
	var_99_bool = IsFuncExist(var_93_object, var_97_string, var_98_int); // 0x4e1 FuncExist
	var_100_bool = var_99_bool == 0; // 0x4e2 Not
	if(var_100_bool == 0) goto Label_1254; // 0x4e3 JumpB
	var_92_bool = 0; // 0x4e4 MovB
	return 2; // 0x4e5 Return
	
Label_1254:
	HasProperty(var_94_string, var_96_bool); // 0x4e6 ObjFunc
	var_92_bool = var_96_bool; // 0x4e8 Mov
	return 2; // 0x4e9 Return
}


func_1121(var_2_int, var_17_object)
{
	var_18_int = 0; var_19_object = Obj(); // 0x462 PushV
	var_19_object = var_17_object; // 0x463 Mov
	TaskCall(3); // 0x464 TaskCall
	func_799(var_20_object, var_18_int, var_19_object); // 0x465 Call
	TaskReturn(); // 0x466 TaskReturn
	var_2_int = 0; // 0x468 TMovB
	return 0; // 0x469 Return
}


func_226(var_0_object, var_267_float, var_268_int)
{
	var_269_object = Obj(); var_270_float = 0; var_271_float = 0; var_272_object = Obj(); var_273_float = 0; var_274_float = 0; // 0xe2 PushV
	var_275_float = 0.9; // 0xe3 PushF
	var_276_float = var_267_float * var_275_float; // 0xe4 Mult
	GetVictim(var_276_float, var_272_object); // 0xe5 Func
	ReportAttack(var_0_object); // 0xe7 Func
	var_277_bool = var_272_object == var_0_object; // 0xe9 Eq
	if(var_277_bool == 0) goto Label_263; // 0xea JumpB
	var_278_float = 0; var_279_object = Obj(); var_280_int = 0; // 0xeb PushV
	var_279_object = var_272_object; // 0xec Mov
	var_280_int = var_268_int; // 0xed Mov
	func_15(var_280_int); // 0xee Call
	var_273_float = var_278_float; // 0xef Mov
	var_281_float = 0; var_282_object = Obj(); var_283_float = 0; var_284_int = 0; // 0xf1 PushV
	var_282_object = var_272_object; // 0xf2 Mov
	var_283_float = var_273_float; // 0xf3 Mov
	var_285_int = 0; var_286_object = Obj(); var_287_int = 0; // 0xf4 PushV
	var_286_object = var_272_object; // 0xf5 Mov
	var_287_int = var_268_int; // 0xf6 Mov
	func_18(var_287_int); // 0xf7 Call
	var_284_int = var_285_int; // 0xf8 Mov
	func_1258(var_281_float, var_282_object, var_283_float, var_284_int); // 0xfa Call
	var_274_float = var_281_float; // 0xfb Mov
	var_334_int = 0; // 0xfd PushV
	func_504(var_334_int); // 0xfe Call
	ReportHit(var_0_object, var_334_int, var_274_float, var_273_float); // 0x100 Func
	var_335_object = Obj(); var_336_float = 0; // 0x102 PushV
	var_335_object = var_272_object; // 0x103 Mov
	var_336_float = var_274_float; // 0x104 Mov
	func_506(); // 0x105 Call
	
Label_263:
	return 6; // 0x107 Return
}


func_1258(var_281_float, var_282_object, var_283_float, var_284_int)
{
	var_288_int = 0; var_289_string = ""; var_290_int = 0; var_291_float = 0; var_292_float = 0; var_293_float = 0; var_294_int = 0; var_295_string = ""; var_296_int = 0; var_297_float = 0; var_298_float = 0; var_299_float = 0; // 0x4ea PushV
	var_300_bool = 0; var_301_object = Obj(); var_302_string = ""; // 0x4eb PushV
	var_301_object = var_282_object; // 0x4ec Mov
	var_302_string = "health"; // 0x4ed MovS
	func_1246(var_300_bool, var_301_object, var_302_string); // 0x4ee Call
	var_303_bool = var_300_bool == 0; // 0x4f0 Not
	if(var_303_bool == 0) goto Label_1268; // 0x4f1 JumpB
	var_281_float = 0.0; // 0x4f2 MovF
	return 12; // 0x4f3 Return
	
Label_1268:
	var_304_bool = 0; var_305_object = Obj(); var_306_string = ""; // 0x4f4 PushV
	var_305_object = var_282_object; // 0x4f5 Mov
	var_306_string = "armor"; // 0x4f6 MovS
	func_1246(var_304_bool, var_305_object, var_306_string); // 0x4f7 Call
	var_307_bool = var_304_bool == 0; // 0x4f9 Not
	if(var_307_bool == 0) goto Label_1277; // 0x4fa JumpB
	var_294_int = 0; // 0x4fb MovI
	goto Label_1280; // 0x4fc Jump
	
Label_1280:
	var_308_string = "armor_"; // 0x500 PushS
	var_309_string = ""; var_310_int = 0; // 0x501 PushV
	var_310_int = var_284_int; // 0x502 Mov
	func_1238(var_309_string, var_310_int); // 0x503 Call
	var_295_string = var_308_string + var_309_string; // 0x505 Add2
	var_313_bool = 0; var_314_object = Obj(); var_315_string = ""; // 0x506 PushV
	var_314_object = var_282_object; // 0x507 Mov
	var_315_string = var_295_string; // 0x508 Mov
	func_1246(var_313_bool, var_314_object, var_315_string); // 0x509 Call
	var_316_bool = var_313_bool == 0; // 0x50b Not
	if(var_316_bool == 0) goto Label_1295; // 0x50c JumpB
	var_296_int = 0; // 0x50d MovI
	goto Label_1297; // 0x50e Jump
	
Label_1297:
	var_317_float = 0; var_318_float = 0; var_319_float = 0; // 0x511 PushV
	var_320_int = var_294_int + var_296_int; // 0x512 Add
	var_321_float = 100.0; // 0x513 PushF
	var_318_float = var_320_int / var_320_int; // 0x514 Div2
	var_319_float = 1; // 0x515 MovI
	func_1564(var_317_float, var_318_float, var_319_float); // 0x516 Call
	var_297_float = var_317_float; // 0x517 Mov
	var_323_string = "health"; // 0x519 PushS
	GetProperty(var_323_string, var_298_float); // 0x51a ObjFunc
	var_324_int = 1; // 0x51c PushI
	var_325_int = var_324_int - var_297_float; // 0x51d Sub
	var_299_float = var_283_float * var_325_int; // 0x51e Mult2
	var_326_string = "health"; // 0x51f PushS
	var_327_float = 0; var_328_float = 0; var_329_float = 0; var_330_float = 0; // 0x520 PushV
	var_328_float = var_298_float - var_299_float; // 0x521 Sub2
	var_329_float = 0; // 0x522 MovI
	var_330_float = 1; // 0x523 MovI
	func_1571(var_327_float, var_328_float, var_329_float, var_330_float); // 0x524 Call
	SetProperty(var_326_string, var_327_float); // 0x526 ObjFunc
	var_281_float = var_299_float; // 0x528 Mov
	return 12; // 0x529 Return
	
Label_1295:
	GetProperty(var_295_string, var_296_int); // 0x50f ObjFunc
	
Label_1277:
	var_333_string = "armor"; // 0x4fd PushS
	GetProperty(var_333_string, var_294_int); // 0x4fe ObjFunc
}


func_1130()
{
	return 0; // 0x46a Return
}


func_1644(var_70_int)
{
	var_70_int = 4031; // 0x66c MovI
	return 0; // 0x66d Return
}


func_1387(var_19_object, var_20_int)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_object = Obj(); var_33_object = Obj(); var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x56b PushV
	var_42_bool = 0; // 0x56c PushV
	var_42_bool = 0; // 0x56d MovB
	var_43_int = 4; // 0x56e PushI
	var_44_bool = var_20_int != var_43_int; // 0x56f Neq
	if(var_44_bool == 0) goto Label_1397; // 0x570 JumpB
	var_45_int = 5; // 0x571 PushI
	var_46_bool = var_20_int != var_45_int; // 0x572 Neq
	if(var_46_bool == 0) goto Label_1397; // 0x573 JumpB
	var_42_bool = 1; // 0x574 MovB
	
Label_1397:
	if(var_42_bool == 0) goto Label_1416; // 0x575 JumpB
	GetScene(var_32_object); // 0x576 Func
	GetPosition(var_34_cvector); // 0x578 Func
	GetEyesHeight(var_35_float); // 0x57a Func
	var_47_float = GetByIndex(var_34_cvector, 1); // 0x57c PushE
	var_48_int = 2; // 0x57d PushI
	var_49_float = var_35_float / var_48_int; // 0x57e Div
	var_47_float = var_47_float + var_49_float; // 0x57f Add2
	SetByIndex(var_34_cvector, 1) = var_47_float; // 0x580 PopE
	var_50_string = "scripted"; // 0x581 PushS
	var_51_cvector = CVector(0.0, 0.0, 1.0); // 0x582 PushVec
	var_52_string = "blood.xml"; // 0x583 PushS
	AddActorByType(var_33_object, var_50_string, var_32_object, var_34_cvector, var_51_cvector, var_52_string); // 0x584 Func
	var_33_object = 0; // 0x586 SetNull
	var_32_object = 0; // 0x587 SetNull
	
Label_1416:
	var_53_bool = var_19_object == 0; // 0x588 NullEq
	if(var_53_bool == 0) goto Label_1419; // 0x589 JumpB
	return 20; // 0x58a Return
	
Label_1419:
	GetSecondaryAnimationType(var_36_int); // 0x58b Func
	var_54_int = 0; // 0x58d PushI
	var_55_bool = var_36_int < var_54_int; // 0x58e LT
	if(var_55_bool == 0) goto Label_1425; // 0x58f JumpB
	return 20; // 0x590 Return
	
Label_1425:
	GetPosition(var_37_cvector); // 0x591 ObjFunc
	GetPosition(var_38_cvector); // 0x593 Func
	GetDirection(var_39_cvector); // 0x595 Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x597 Sub2
	var_56_float = GetByIndex(var_40_cvector, 0); // 0x598 PushE
	var_57_float = GetByIndex(var_39_cvector, 0); // 0x599 PushE
	var_58_float = var_56_float * var_57_float; // 0x59a Mult
	var_59_float = GetByIndex(var_40_cvector, 2); // 0x59b PushE
	var_60_float = GetByIndex(var_39_cvector, 2); // 0x59c PushE
	var_61_float = var_59_float * var_60_float; // 0x59d Mult
	var_62_int = var_58_float + var_61_float; // 0x59e Add
	var_63_int = 0; // 0x59f PushI
	var_64_bool = var_62_int >= var_63_int; // 0x5a0 GE
	if(var_64_bool == 0) goto Label_1444; // 0x5a1 JumpB
	var_41_string = "fhit"; // 0x5a2 MovS
	goto Label_1445; // 0x5a3 Jump
	
Label_1445:
	var_65_string = "hit_react"; // 0x5a5 PushS
	var_66_string = "1"; // 0x5a6 PushS
	var_67_int = var_41_string + var_66_string; // 0x5a7 Add
	var_68_string = "2"; // 0x5a8 PushS
	var_69_int = var_41_string + var_68_string; // 0x5a9 Add
	var_70_int = -10; // 0x5aa PushI
	FadeSecondaryAnimation(var_65_string, var_67_int, var_69_int, var_70_int); // 0x5ab Func
	return 20; // 0x5ad Return
	
Label_1444:
	var_41_string = "bhit"; // 0x5a4 MovS
}


func_1646(var_71_string)
{
	var_71_string = "ui/NPC_Black.png"; // 0x66e MovS
	return 0; // 0x66f Return
}


func_1648(var_89_bool)
{
	var_89_bool = 0; // 0x670 MovB
	return 0; // 0x671 Return
}


func_369(var_0_object, var_195_bool, var_196_float)
{
	var_197_bool = 0; var_198_cvector = CVector(0,0,0); var_199_cvector = CVector(0,0,0); var_200_cvector = CVector(0,0,0); var_201_float = 0; var_202_bool = 0; var_203_cvector = CVector(0,0,0); var_204_cvector = CVector(0,0,0); var_205_cvector = CVector(0,0,0); var_206_float = 0; // 0x171 PushV
	
Label_370:
	IsAnimationPlaying(var_202_bool); // 0x172 Func
	var_207_bool = var_202_bool == 0; // 0x174 Not
	if(var_207_bool == 0) goto Label_375; // 0x175 JumpB
	goto Label_407; // 0x176 Jump
	
Label_407:
	var_195_bool = 0; // 0x197 MovB
	return 10; // 0x198 Return
	
Label_375:
	var_208_bool = 0; // 0x177 PushV
	func_409(var_206_float, var_208_bool); // 0x178 Call
	if(var_208_bool == 0) goto Label_381; // 0x17a JumpB
	var_195_bool = 1; // 0x17b MovB
	return 10; // 0x17c Return
	
Label_381:
	var_233_bool = 0; var_234_object = Obj(); // 0x17d PushV
	var_234_object = var_0_object; // 0x17e MovT
	func_1363(var_233_bool, var_234_object); // 0x17f Call
	var_235_bool = var_233_bool == 0; // 0x181 Not
	if(var_235_bool == 0) goto Label_389; // 0x182 JumpB
	var_195_bool = 0; // 0x183 MovB
	return 10; // 0x184 Return
	
Label_389:
	GetPFPosition(var_203_cvector); // 0x185 TObjFunc
	GetPFPosition(var_204_cvector); // 0x187 Func
	var_205_cvector = var_203_cvector - var_204_cvector; // 0x189 Sub2
	var_206_float = var_205_cvector | var_205_cvector; // 0x18a Or2
	var_236_float = var_196_float * var_196_float; // 0x18b Mult
	var_237_bool = var_206_float < var_236_float; // 0x18c LT
	if(var_237_bool == 0) goto Label_404; // 0x18d JumpB
	var_238_bool = 0; var_239_float = 0; // 0x18e PushV
	var_239_float = var_196_float; // 0x18f Mov
	func_265(var_206_float, var_238_bool, var_239_float); // 0x190 Call
	var_195_bool = 1; // 0x192 MovB
	return 10; // 0x193 Return
	
Label_404:
	sync(); // 0x194 Func
	goto Label_370; // 0x196 Jump
}


func_1521()
{
	CameraSwitchToNormal(); // 0x5f2 Func
	return 0; // 0x5f4 Return
}


func_1525(var_92_string)
{
	var_93_float = 0; var_94_float = 0; var_95_float = 0; var_96_float = 0; // 0x5f5 PushV
	var_97_string = "playing "; // 0x5f6 PushS
	var_98_int = var_97_string + var_92_string; // 0x5f7 Add
	Trace(var_98_int); // 0x5f8 Func
	lshGetAnimTimes(var_92_string, var_95_float, var_96_float); // 0x5fa Func
	lshPlayAnimation(var_95_float, var_96_float); // 0x5fc Func
	var_99_string = "start: "; // 0x5fe PushS
	var_100_int = var_99_string + var_95_float; // 0x5ff Add
	Trace(var_100_int); // 0x600 Func
	var_101_string = "end: "; // 0x602 PushS
	var_102_int = var_101_string + var_96_float; // 0x603 Add
	Trace(var_102_int); // 0x604 Func
	return 4; // 0x606 Return
}


func_504(var_334_int)
{
	var_334_int = 0; // 0x1f8 MovI
	return 0; // 0x1f9 Return
}


func_506()
{
	return 0; // 0x1fb Return
}


func_508(var_263_int)
{
	var_263_int = 1; // 0x1fc MovI
	return 0; // 0x1fd Return
}


func_510(var_258_float)
{
	var_258_float = 0.5; // 0x1fe MovF
	return 0; // 0x1ff Return
}


