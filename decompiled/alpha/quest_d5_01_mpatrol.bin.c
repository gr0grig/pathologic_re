task_1_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	var_13_int = 0; // 0x267 PushI
	var_14_bool = var_12_bool != var_13_int; // 0x268 Neq
	if(var_14_bool == 0) goto Label_619; // 0x269 JumpB
	return 0; // 0x26a Return
	
Label_619:
	var_15_bool = 0; var_16_object = Obj(); // 0x26b PushV
	var_16_object = var_1_int; // 0x26c MovT
	func_652(var_15_bool, var_16_object); // 0x26d Call
	var_51_bool = var_15_bool == 0; // 0x26f Not
	if(var_51_bool == 0) goto Label_626; // 0x270 JumpB
	var_0_object = 1; // 0x271 TMovB
	
Label_626:
	var_52_int = 0; // 0x272 PushI
	KillTimer(var_52_int); // 0x273 Func
	Stop(); // 0x275 Func
	return 0; // 0x277 Return
}


task_1_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	RequestClearPath(var_12_bool); // 0x279 Func
	return 0; // 0x27b Return
}


task_1_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	func_636(var_12_bool); // 0x285 Call
	var_14_object = Obj(); // 0x287 PushV
	var_14_object = var_12_bool; // 0x288 Mov
	func_1568(); // 0x289 Call
	return 0; // 0x28b Return
}


task_2_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x2a9 PushV
	IsOverrideActive(var_14_bool); // 0x2aa Func
	var_15_bool = var_14_bool == 0; // 0x2ac Not
	if(var_15_bool == 0) goto Label_688; // 0x2ad JumpB
	WorkWithCorpse(var_12_bool); // 0x2ae Func
	
Label_688:
	return 2; // 0x2b0 Return
}


task_2_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_object = Obj(); // 0x2b1 PushV
	func_1491(var_12_object); // 0x2b2 Call
	RemoveActor(var_12_object); // 0x2b4 Func
	Hold(); // 0x2b6 Func
	return 0; // 0x2b8 Return
}


task_2_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_float, var_10_float, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	return 0; // 0x327 Return
}


task_2_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_string, var_9_object, var_10_object, var_11_object, var_12_string, var_13_bool)
{
	return 0; // 0x329 Return
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	return 0; // 0x32b Return
}


task_4_event_11(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int)
{
	var_14_int = 1; // 0x3c5 PushI
	if(var_14_int == 0) goto Label_1133; // 0x3c6 JumpB
	func_1484(); // 0x3c8 Call
	var_16_int = 12905; // 0x3ca PushI
	var_17_bool = var_13_int == var_16_int; // 0x3cb Eq
	if(var_17_bool == 0) goto Label_983; // 0x3cc JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0x3cd PushV
	var_18_object = var_1_int; // 0x3ce MovT
	var_19_object = var_0_object; // 0x3cf MovT
	func_1574(); // 0x3d0 Call
	var_22_object = Obj(); var_23_object = Obj(); // 0x3d2 PushV
	var_22_object = var_1_int; // 0x3d3 MovT
	var_23_object = var_0_object; // 0x3d4 MovT
	func_1580(); // 0x3d5 Call
	
Label_983:
	var_42_int = 12906; // 0x3d7 PushI
	var_43_bool = var_13_int == var_42_int; // 0x3d8 Eq
	if(var_43_bool == 0) goto Label_996; // 0x3d9 JumpB
	var_44_object = Obj(); var_45_object = Obj(); // 0x3da PushV
	var_44_object = var_1_int; // 0x3db MovT
	var_45_object = var_0_object; // 0x3dc MovT
	func_1574(); // 0x3dd Call
	var_46_object = Obj(); var_47_object = Obj(); // 0x3df PushV
	var_46_object = var_1_int; // 0x3e0 MovT
	var_47_object = var_0_object; // 0x3e1 MovT
	func_1580(); // 0x3e2 Call
	
Label_996:
	var_48_int = 12892; // 0x3e4 PushI
	var_49_bool = var_12_int == var_48_int; // 0x3e5 Eq
	if(var_49_bool == 0) goto Label_1034; // 0x3e6 JumpB
	var_50_bool = 0; var_51_object = Obj(); // 0x3e7 PushV
	var_51_object = var_1_int; // 0x3e8 MovT
	func_1600(var_51_object); // 0x3e9 Call
	if(var_50_bool == 0) goto Label_1019; // 0x3eb JumpB
	var_58_string = ""; // 0x3ec PushV
	var_58_string = "Neutral"; // 0x3ed MovS
	func_948(var_13_int, var_58_string); // 0x3ee Call
	var_73_int = 11690; // 0x3f0 PushI
	SetMessage(var_73_int); // 0x3f1 TObjFunc
	ClearReplies(); // 0x3f3 TObjFunc
	var_74_int = 11691; // 0x3f5 PushI
	var_75_int = 12894; // 0x3f6 PushI
	var_76_int = 12893; // 0x3f7 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x3f8 TObjFunc
	return 0; // 0x3fa Return
	
Label_1019:
	var_77_string = ""; // 0x3fb PushV
	var_77_string = "Neutral"; // 0x3fc MovS
	func_948(var_13_int, var_77_string); // 0x3fd Call
	var_78_int = 12483; // 0x3ff PushI
	SetMessage(var_78_int); // 0x400 TObjFunc
	ClearReplies(); // 0x402 TObjFunc
	var_79_int = 12484; // 0x404 PushI
	var_80_int = -1; // 0x405 PushI
	var_81_int = 13652; // 0x406 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x407 TObjFunc
	return 0; // 0x409 Return
	
Label_1034:
	var_82_int = 12894; // 0x40a PushI
	var_83_bool = var_12_int == var_82_int; // 0x40b Eq
	if(var_83_bool == 0) goto Label_1062; // 0x40c JumpB
	var_84_string = ""; // 0x40d PushV
	var_84_string = "Neutral"; // 0x40e MovS
	func_948(var_13_int, var_84_string); // 0x40f Call
	var_85_int = 11692; // 0x411 PushI
	SetMessage(var_85_int); // 0x412 TObjFunc
	ClearReplies(); // 0x414 TObjFunc
	var_86_int = 11693; // 0x416 PushI
	var_87_int = 12901; // 0x417 PushI
	var_88_int = 12895; // 0x418 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x419 TObjFunc
	var_89_int = 11694; // 0x41b PushI
	var_90_int = 12898; // 0x41c PushI
	var_91_int = 12896; // 0x41d PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x41e TObjFunc
	var_92_int = 11695; // 0x420 PushI
	var_93_int = 12898; // 0x421 PushI
	var_94_int = 12897; // 0x422 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x423 TObjFunc
	return 0; // 0x425 Return
	
Label_1062:
	var_95_int = 12898; // 0x426 PushI
	var_96_bool = var_12_int == var_95_int; // 0x427 Eq
	if(var_96_bool == 0) goto Label_1080; // 0x428 JumpB
	var_97_string = ""; // 0x429 PushV
	var_97_string = "Neutral"; // 0x42a MovS
	func_948(var_13_int, var_97_string); // 0x42b Call
	var_98_int = 11696; // 0x42d PushI
	SetMessage(var_98_int); // 0x42e TObjFunc
	ClearReplies(); // 0x430 TObjFunc
	var_99_int = 11697; // 0x432 PushI
	var_100_int = 12901; // 0x433 PushI
	var_101_int = 12900; // 0x434 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x435 TObjFunc
	return 0; // 0x437 Return
	
Label_1080:
	var_102_int = 12901; // 0x438 PushI
	var_103_bool = var_12_int == var_102_int; // 0x439 Eq
	if(var_103_bool == 0) goto Label_1098; // 0x43a JumpB
	var_104_string = ""; // 0x43b PushV
	var_104_string = "Neutral"; // 0x43c MovS
	func_948(var_13_int, var_104_string); // 0x43d Call
	var_105_int = 11698; // 0x43f PushI
	SetMessage(var_105_int); // 0x440 TObjFunc
	ClearReplies(); // 0x442 TObjFunc
	var_106_int = 11699; // 0x444 PushI
	var_107_int = 12904; // 0x445 PushI
	var_108_int = 12902; // 0x446 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x447 TObjFunc
	return 0; // 0x449 Return
	
Label_1098:
	var_109_int = 12904; // 0x44a PushI
	var_110_bool = var_12_int == var_109_int; // 0x44b Eq
	if(var_110_bool == 0) goto Label_1121; // 0x44c JumpB
	var_111_string = ""; // 0x44d PushV
	var_111_string = "Neutral"; // 0x44e MovS
	func_948(var_13_int, var_111_string); // 0x44f Call
	var_112_int = 11700; // 0x451 PushI
	SetMessage(var_112_int); // 0x452 TObjFunc
	ClearReplies(); // 0x454 TObjFunc
	var_113_int = 11701; // 0x456 PushI
	var_114_int = -1; // 0x457 PushI
	var_115_int = 12905; // 0x458 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x459 TObjFunc
	var_116_int = 11702; // 0x45b PushI
	var_117_int = -1; // 0x45c PushI
	var_118_int = 12906; // 0x45d PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x45e TObjFunc
	return 0; // 0x460 Return
	
Label_1121:
	var_3_bool = 1; // 0x461 TMovB
	var_119_bool = 0; // 0x462 PushV
	func_1650(var_119_bool); // 0x463 Call
	if(var_119_bool == 0) goto Label_1129; // 0x465 JumpB
	lshStopAnimation(); // 0x466 Func
	goto Label_1131; // 0x468 Jump
	
Label_1131:
	return 0; // 0x46b Return
	
Label_1129:
	StopAnimation(); // 0x469 Func
	
Label_1133:
	return 0; // 0x46d Return
}


task_5_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object)
{
	var_13_bool = 0; // 0x47b PushV
	func_1156(var_13_bool); // 0x47c Call
	if(var_13_bool == 0) goto Label_1155; // 0x47e JumpB
	var_14_object = Obj(); // 0x47f PushV
	var_14_object = var_12_object; // 0x480 Mov
	func_1134(var_14_object); // 0x481 Call
	
Label_1155:
	return 0; // 0x483 Return
}


task_5_event_17(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x486 PushV
	IsPlayerActor(var_12_object, var_14_bool); // 0x487 Func
	var_15_bool = var_14_bool; // 0x489 Push
	if(var_15_bool == 0) goto Label_1168; // 0x48a JumpB
	var_16_bool = 0; var_17_string = ""; var_18_string = ""; // 0x48b PushV
	var_17_string = "quest_d5_01"; // 0x48c MovS
	var_18_string = "factory_fight"; // 0x48d MovS
	func_1530(var_16_bool, var_17_string, var_18_string); // 0x48e Call
	
Label_1168:
	return 2; // 0x490 Return
}


task_5_event_26(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_string)
{
	var_13_string = "attack"; // 0x492 PushS
	var_14_bool = var_12_string == var_13_string; // 0x493 Eq
	if(var_14_bool == 0) goto Label_1178; // 0x494 JumpB
	TaskCall(0); // 0x496 TaskCall
	func_0(); // 0x497 Call
	TaskReturn(); // 0x498 TaskReturn
	
Label_1178:
	return 0; // 0x49a Return
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; // 0x60c PushV
	var_16_object = var_12_object; // 0x60d Mov
	var_17_int = var_13_int; // 0x60e Mov
	var_18_float = var_14_float; // 0x60f Mov
	func_1328(var_17_int, var_18_float); // 0x610 Call
	return 0; // 0x612 Return
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0; // 0x613 PushV
	var_16_string = "health"; // 0x614 PushS
	var_17_bool = var_13_string == var_16_string; // 0x615 Eq
	if(var_17_bool == 0) goto Label_1567; // 0x616 JumpB
	var_18_string = "health"; // 0x617 PushS
	GetProperty(var_18_string, var_15_float); // 0x618 Func
	var_19_int = 0; // 0x61a PushI
	var_20_bool = var_15_float <= var_19_int; // 0x61b LE
	if(var_20_bool == 0) goto Label_1567; // 0x61c JumpB
	SignalDeath(var_12_object); // 0x61d Func
	
Label_1567:
	return 2; // 0x61f Return
}


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object)
{
	var_13_object = Obj(); // 0x621 PushV
	var_13_object = var_12_object; // 0x622 Mov
	func_1652(var_13_object); // 0x623 Call
	return 0; // 0x625 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	
Label_1142:
	Hold(); // 0x476 Func
	goto Label_1142; // 0x478 Jump
}


func_512(var_0_object, var_1_int, var_107_bool, var_108_object, var_109_float, var_110_float, var_111_bool, var_112_bool)
{
	var_115_bool = 0; var_116_bool = 0; var_117_object = Obj(); var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_float = 0; var_122_object = Obj(); var_123_bool = 0; var_124_bool = 0; var_125_object = Obj(); var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_float = 0; var_130_object = Obj(); // 0x200 PushV
	var_0_object = 0; // 0x201 TMovB
	var_1_int = var_108_object; // 0x202 TMov
	var_124_bool = var_112_bool; // 0x203 Mov
	
Label_516:
	var_131_bool = 0; var_132_object = Obj(); // 0x204 PushV
	var_132_object = var_108_object; // 0x205 Mov
	func_652(var_131_bool, var_132_object); // 0x206 Call
	var_135_bool = var_131_bool == 0; // 0x208 Not
	if(var_135_bool == 0) goto Label_524; // 0x209 JumpB
	var_107_bool = 0; // 0x20a MovB
	return 16; // 0x20b Return
	
Label_524:
	GetPosition(var_126_cvector); // 0x20c ObjFunc
	GetPosition(var_127_cvector); // 0x20e Func
	var_128_cvector = var_126_cvector - var_127_cvector; // 0x210 Sub2
	var_129_float = var_128_cvector | var_128_cvector; // 0x211 Or2
	var_136_bool = 0; // 0x212 PushV
	var_136_bool = 0; // 0x213 MovB
	var_137_int = 0; // 0x214 PushI
	var_138_bool = var_110_float > var_137_int; // 0x215 GT
	if(var_138_bool == 0) goto Label_539; // 0x216 JumpB
	var_139_float = var_110_float * var_110_float; // 0x217 Mult
	var_140_bool = var_129_float > var_139_float; // 0x218 GT
	if(var_140_bool == 0) goto Label_539; // 0x219 JumpB
	var_136_bool = 1; // 0x21a MovB
	
Label_539:
	if(var_136_bool == 0) goto Label_544; // 0x21b JumpB
	Stop(); // 0x21c Func
	var_107_bool = 0; // 0x21e MovB
	return 16; // 0x21f Return
	
Label_544:
	var_141_float = var_109_float * var_109_float; // 0x220 Mult
	var_142_bool = var_129_float > var_141_float; // 0x221 GT
	if(var_142_bool == 0) goto Label_606; // 0x222 JumpB
	GetPFPosition(var_126_cvector); // 0x223 ObjFunc
	FindPathTo(var_130_object, var_126_cvector); // 0x225 Func
	var_143_bool = var_130_object != 0; // 0x227 NullNeq
	if(var_143_bool == 0) goto Label_555; // 0x228 JumpB
	var_125_object = var_130_object; // 0x229 Mov
	var_130_object = 0; // 0x22a SetNull
	
Label_555:
	var_144_bool = var_125_object != 0; // 0x22b NullNeq
	if(var_144_bool == 0) goto Label_588; // 0x22c JumpB
	var_145_bool = var_124_bool; // 0x22d Push
	if(var_145_bool == 0) goto Label_565; // 0x22e JumpB
	var_124_bool = 0; // 0x22f MovB
	RotatePath(var_125_object, var_123_bool); // 0x230 Func
	var_146_bool = var_123_bool == 0; // 0x232 Not
	if(var_146_bool == 0) goto Label_565; // 0x233 JumpB
	goto Label_612; // 0x234 Jump
	
Label_612:
	var_107_bool = !var_0_object; // 0x264 Not2
	return 16; // 0x265 Return
	
Label_565:
	var_147_int = 0; // 0x235 PushI
	var_148_float = 0.3; // 0x236 PushF
	SetTimer(var_147_int, var_148_float); // 0x237 Func
	var_149_string = ""; // 0x239 PushV
	func_659(var_149_string); // 0x23a Call
	var_150_string = ""; // 0x23c PushV
	func_661(var_150_string); // 0x23d Call
	FollowPath(var_125_object, var_111_bool, var_123_bool, var_149_string, var_150_string); // 0x23f Func
	var_151_bool = var_123_bool == 0; // 0x241 Not
	if(var_151_bool == 0) goto Label_586; // 0x242 JumpB
	var_152_object = var_0_object; // 0x243 PushT
	if(var_152_object == 0) goto Label_584; // 0x244 JumpB
	var_125_object = 0; // 0x245 SetNull
	goto Label_612; // 0x246 Jump
	
Label_584:
	goto Label_611; // 0x248 Jump
	
Label_611:
	goto Label_516; // 0x263 Jump
	
Label_586:
	var_125_object = 0; // 0x24a SetNull
	goto Label_604; // 0x24b Jump
	
Label_604:
	var_130_object = 0; // 0x25c SetNull
	goto Label_610; // 0x25d Jump
	
Label_610:
	var_125_object = 0; // 0x262 SetNull
	
Label_588:
	var_153_int = 0; // 0x24c PushI
	KillTimer(var_153_int); // 0x24d Func
	var_154_float = 0.5; // 0x24f PushF
	Sleep(var_154_float, var_123_bool); // 0x250 Func
	var_155_bool = var_123_bool == 0; // 0x252 Not
	if(var_155_bool == 0) goto Label_600; // 0x253 JumpB
	var_156_object = var_0_object; // 0x254 PushT
	if(var_156_object == 0) goto Label_600; // 0x255 JumpB
	var_125_object = 0; // 0x256 SetNull
	goto Label_612; // 0x257 Jump
	
Label_600:
	var_157_int = 0; // 0x258 PushI
	var_158_float = 0.3; // 0x259 PushF
	SetTimer(var_157_int, var_158_float); // 0x25a Func
	
Label_606:
	var_159_int = 0; // 0x25e PushI
	KillTimer(var_159_int); // 0x25f Func
	goto Label_612; // 0x261 Jump
}


func_0()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x0 PushV
	var_22_string = "player"; // 0x1 PushS
	FindActor(var_21_object, var_22_string); // 0x2 Func
	var_23_bool = var_21_object == 0; // 0x4 Not
	if(var_23_bool == 0) goto Label_7; // 0x5 JumpB
	return 2; // 0x6 Return
	
Label_7:
	var_24_object = Obj(); var_25_bool = 0; var_26_float = 0; // 0x7 PushV
	var_24_object = var_21_object; // 0x8 Mov
	var_25_bool = 1; // 0x9 MovB
	var_26_float = 180.0; // 0xa MovF
	func_21(var_16_int, var_17_int, var_18_bool, var_19_int, var_20_object, var_21_object, var_24_object, var_25_bool, var_26_float); // 0xb Call
	return 2; // 0xd Return
}


func_636(var_0_object)
{
	var_0_object = 1; // 0x27c TMovB
	var_13_int = 0; // 0x27d PushI
	KillTimer(var_13_int); // 0x27e Func
	Stop(); // 0x280 Func
	return 0; // 0x282 Return
}


func_1156(var_13_bool)
{
	var_13_bool = 1; // 0x484 MovB
	return 0; // 0x485 Return
}


func_1542(var_39_float)
{
	var_40_float = 0; var_41_float = 0; // 0x606 PushV
	GetGameTime(var_41_float); // 0x607 Func
	var_39_float = var_41_float; // 0x609 Mov
	return 2; // 0x60a Return
}


func_265(var_0_object, var_234_bool, var_235_float)
{
	var_236_int = 0; var_237_bool = 0; var_238_int = 0; var_239_bool = 0; // 0x109 PushV
	irand(var_238_int, var_239_bool); // 0x10a Func
	var_240_int = 1; // 0x10c PushI
	var_238_int = var_238_int + var_240_int; // 0x10d Add2
	Face(var_0_object); // 0x10e Func
	var_241_bool = 1; // 0x110 PushB
	SetAttackState(var_241_bool); // 0x111 Func
	var_242_string = "all"; // 0x113 PushS
	var_243_string = "attack_begin"; // 0x114 PushS
	var_244_int = var_243_string + var_238_int; // 0x115 Add
	PlayAnimation(var_242_string, var_244_int); // 0x116 Func
	WaitForAnimEnd(); // 0x118 Func
	func_472(var_238_int, var_239_bool); // 0x11b Call
	var_260_bool = 0; var_261_object = Obj(); // 0x11d PushV
	var_261_object = var_0_object; // 0x11e MovT
	func_1304(var_260_bool, var_261_object); // 0x11f Call
	var_262_bool = var_260_bool == 0; // 0x121 Not
	if(var_262_bool == 0) goto Label_295; // 0x122 JumpB
	StopAsync(); // 0x123 Func
	var_234_bool = 0; // 0x125 MovB
	return 4; // 0x126 Return
	
Label_295:
	var_263_float = 0; var_264_int = 0; // 0x127 PushV
	var_263_float = var_235_float; // 0x128 Mov
	var_264_int = var_238_int; // 0x129 Mov
	func_226(var_239_bool, var_263_float, var_264_int); // 0x12a Call
	var_333_string = "all"; // 0x12c PushS
	var_334_string = "attack_middle"; // 0x12d PushS
	var_335_int = var_334_string + var_238_int; // 0x12e Add
	HasAnimation(var_239_bool, var_333_string, var_335_int); // 0x12f Func
	var_336_bool = var_239_bool; // 0x131 Push
	if(var_336_bool == 0) goto Label_329; // 0x132 JumpB
	var_337_string = "all"; // 0x133 PushS
	var_338_string = "attack_middle"; // 0x134 PushS
	var_339_int = var_338_string + var_238_int; // 0x135 Add
	PlayAnimation(var_337_string, var_339_int); // 0x136 Func
	WaitForAnimEnd(); // 0x138 Func
	var_340_bool = 0; var_341_object = Obj(); // 0x13a PushV
	var_341_object = var_0_object; // 0x13b MovT
	func_1304(var_340_bool, var_341_object); // 0x13c Call
	var_342_bool = var_340_bool == 0; // 0x13e Not
	if(var_342_bool == 0) goto Label_324; // 0x13f JumpB
	StopAsync(); // 0x140 Func
	var_234_bool = 0; // 0x142 MovB
	return 4; // 0x143 Return
	
Label_324:
	var_343_float = 0; var_344_int = 0; // 0x144 PushV
	var_343_float = var_235_float; // 0x145 Mov
	var_344_int = var_238_int; // 0x146 Mov
	func_226(var_239_bool, var_343_float, var_344_int); // 0x147 Call
	
Label_329:
	var_345_bool = 0; // 0x149 PushB
	SetAttackState(var_345_bool); // 0x14a Func
	var_346_string = "all"; // 0x14c PushS
	var_347_string = "attack_end"; // 0x14d PushS
	var_348_int = var_347_string + var_238_int; // 0x14e Add
	PlayAnimation(var_346_string, var_348_int); // 0x14f Func
	var_349_bool = 0; var_350_float = 0; // 0x151 PushV
	var_350_float = 0.75; // 0x152 MovF
	func_345(var_349_bool, var_350_float); // 0x153 Call
	StopAsync(); // 0x155 Func
	var_234_bool = 1; // 0x157 MovB
	return 4; // 0x158 Return
}


func_652(var_131_bool, var_132_object)
{
	var_133_bool = 0; var_134_object = Obj(); // 0x28d PushV
	var_134_object = var_132_object; // 0x28e Mov
	func_1304(var_133_bool, var_134_object); // 0x28f Call
	var_131_bool = var_133_bool; // 0x290 Mov
	return 0; // 0x292 Return
}


func_15(var_274_float)
{
	var_274_float = 0.3; // 0x10 MovF
	return 0; // 0x11 Return
}


func_784(var_51_string)
{
	RemoveRTEnvelope(); // 0x311 Func
	SetDeathState(); // 0x313 Func
	Stop(); // 0x315 Func
	StopAsync(); // 0x317 Func
	StopSecondaryAnimation(); // 0x319 Func
	var_52_string = "all"; // 0x31b PushS
	PlayAnimation(var_52_string, var_51_string); // 0x31c Func
	WaitForAnimEnd(); // 0x31e Func
	var_53_string = "all"; // 0x320 PushS
	LockAnimationEnd(var_53_string, var_51_string); // 0x321 Func
	RemoveEnvelope(); // 0x323 Func
	return 0; // 0x325 Return
}


func_18(var_281_int)
{
	var_281_int = 0; // 0x13 MovI
	return 0; // 0x14 Return
}


func_659(var_149_string)
{
	var_149_string = "walk"; // 0x293 MovS
	return 0; // 0x294 Return
}


func_1530(var_23_bool, var_24_string, var_25_string)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x5fa PushV
	FindActor(var_27_object, var_24_string); // 0x5fb Func
	var_28_bool = var_27_object == 0; // 0x5fd NullEq
	if(var_28_bool == 0) goto Label_1537; // 0x5fe JumpB
	var_23_bool = 0; // 0x5ff MovB
	return 2; // 0x600 Return
	
Label_1537:
	Trigger(var_27_object, var_25_string); // 0x601 Func
	var_23_bool = 1; // 0x603 MovB
	return 2; // 0x604 Return
}


func_21(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_24_object, var_25_bool, var_26_float, var_113_bool)
{
	var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_float = 0; var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_float = 0; // 0x15 PushV
	var_1_int = 0; // 0x16 TMovI
	
Label_23:
	var_47_string = "all"; // 0x17 PushS
	var_48_string = "attack_begin"; // 0x18 PushS
	var_49_int = 1; // 0x19 PushI
	var_50_int = var_1_int + var_49_int; // 0x1a Add
	var_51_int = var_48_string + var_50_int; // 0x1b Add
	HasAnimation(var_37_bool, var_47_string, var_51_int); // 0x1c Func
	var_52_bool = var_37_bool == 0; // 0x1e Not
	if(var_52_bool == 0) goto Label_33; // 0x1f JumpB
	goto Label_36; // 0x20 Jump
	
Label_36:
	var_2_int = 0; // 0x24 TMovI
	
Label_37:
	var_53_string = "attack"; // 0x25 PushS
	var_54_int = 1; // 0x26 PushI
	var_55_int = var_2_int + var_54_int; // 0x27 Add
	var_56_int = var_53_string + var_55_int; // 0x28 Add
	IsExisting3DSound(var_38_bool, var_56_int); // 0x29 Func
	var_57_bool = var_38_bool == 0; // 0x2b Not
	if(var_57_bool == 0) goto Label_46; // 0x2c JumpB
	goto Label_49; // 0x2d Jump
	
Label_49:
	var_4_int = 0; // 0x31 TMovI
	var_58_string = "@GetAttackDistance"; // 0x32 PushS
	var_59_int = 1; // 0x33 PushI
	var_60_bool = IsFuncExist(var_24_object, var_58_string, var_59_int); // 0x34 FuncExist
	if(var_60_bool == 0) goto Label_59; // 0x35 JumpB
	GetAttackDistance(var_39_float); // 0x36 ObjFunc
	var_61_int = 50; // 0x38 PushI
	var_39_float = var_39_float + var_61_int; // 0x39 Add2
	goto Label_60; // 0x3a Jump
	
Label_60:
	var_62_int = 150; // 0x3c PushI
	var_63_bool = var_39_float >= var_62_int; // 0x3d GE
	if(var_63_bool == 0) goto Label_64; // 0x3e JumpB
	var_39_float = 150; // 0x3f MovI
	
Label_64:
	var_3_bool = 0; // 0x40 TMovB
	var_0_object = var_24_object; // 0x41 TMov
	IsPlayerActor(var_0_object, var_42_bool); // 0x42 Func
	var_64_bool = var_25_bool; // 0x44 Push
	if(var_64_bool == 0) goto Label_72; // 0x45 JumpB
	var_43_bool = 0; // 0x46 MovB
	goto Label_73; // 0x47 Jump
	
Label_73:
	var_65_bool = 0; // 0x49 PushV
	var_65_bool = 0; // 0x4a MovB
	var_66_bool = 0; var_67_object = Obj(); // 0x4b PushV
	var_67_object = var_0_object; // 0x4c MovT
	func_1304(var_66_bool, var_67_object); // 0x4d Call
	if(var_66_bool == 0) goto Label_83; // 0x4f JumpB
	var_100_bool = var_3_bool == 0; // 0x50 Not
	if(var_100_bool == 0) goto Label_83; // 0x51 JumpB
	var_65_bool = 1; // 0x52 MovB
	
Label_83:
	if(var_65_bool == 0) goto Label_209; // 0x53 JumpB
	GetPFPosition(var_40_cvector); // 0x54 TObjFunc
	GetPFPosition(var_41_cvector); // 0x56 Func
	var_44_cvector = var_40_cvector - var_41_cvector; // 0x58 Sub2
	var_45_float = var_44_cvector | var_44_cvector; // 0x59 Or2
	var_101_float = 400.0; // 0x5a PushF
	var_102_int = var_101_float + var_39_float; // 0x5b Add
	var_103_float = 400.0; // 0x5c PushF
	var_104_int = var_103_float + var_39_float; // 0x5d Add
	var_105_float = var_102_int * var_104_int; // 0x5e Mult
	var_106_bool = var_45_float >= var_105_float; // 0x5f GE
	if(var_106_bool == 0) goto Label_112; // 0x60 JumpB
	var_107_bool = 0; var_108_object = Obj(); var_109_float = 0; var_110_float = 0; var_111_bool = 0; var_112_bool = 0; // 0x61 PushV
	var_108_object = var_0_object; // 0x62 MovT
	var_109_float = var_39_float; // 0x63 Mov
	var_110_float = 10000.0; // 0x64 MovF
	var_111_bool = 1; // 0x65 MovB
	var_112_bool = 0; // 0x66 MovB
	TaskCall(1); // 0x67 TaskCall
	func_512(var_113_bool, var_114_object, var_107_bool, var_108_object, var_109_float, var_110_float, var_111_bool, var_112_bool); // 0x68 Call
	TaskReturn(); // 0x69 TaskReturn
	var_160_bool = var_113_bool == 0; // 0x6b Not
	if(var_160_bool == 0) goto Label_110; // 0x6c JumpB
	goto Label_209; // 0x6d Jump
	
Label_209:
	WaitForAnimEnd(); // 0xd1 Func
	var_161_bool = var_3_bool; // 0xd3 PushT
	if(var_161_bool == 0) goto Label_214; // 0xd4 JumpB
	return 20; // 0xd5 Return
	
Label_214:
	var_162_string = "all"; // 0xd6 PushS
	var_163_string = "attack_off"; // 0xd7 PushS
	PlayAnimation(var_162_string, var_163_string); // 0xd8 Func
	WaitForAnimEnd(); // 0xda Func
	var_164_bool = var_42_bool; // 0xdc Push
	if(var_164_bool == 0) goto Label_225; // 0xdd JumpB
	var_165_float = 2.0; // 0xde PushF
	Sleep(var_165_float); // 0xdf Func
	
Label_225:
	return 20; // 0xe1 Return
	
Label_110:
	var_43_bool = 0; // 0x6e MovB
	goto Label_208; // 0x6f Jump
	
Label_208:
	goto Label_73; // 0xd0 Jump
	
Label_112:
	var_166_float = var_26_float * var_26_float; // 0x70 Mult
	var_167_bool = var_45_float >= var_166_float; // 0x71 GE
	if(var_167_bool == 0) goto Label_200; // 0x72 JumpB
	var_168_bool = var_43_bool == 0; // 0x73 Not
	if(var_168_bool == 0) goto Label_130; // 0x74 JumpB
	var_169_object = Obj(); // 0x75 PushV
	var_169_object = var_0_object; // 0x76 MovT
	func_1395(); // 0x77 Call
	var_178_string = "all"; // 0x79 PushS
	var_179_string = "attack_on"; // 0x7a PushS
	PlayAnimation(var_178_string, var_179_string); // 0x7b Func
	WaitForAnimEnd(); // 0x7d Func
	StopAsync(); // 0x7f Func
	var_43_bool = 1; // 0x81 MovB
	
Label_130:
	rand(var_46_float); // 0x82 Func
	var_180_bool = 0; // 0x84 PushV
	var_180_bool = 1; // 0x85 MovB
	var_181_float = 0.6; // 0x86 PushF
	var_182_bool = var_46_float < var_181_float; // 0x87 LT
	if(var_182_bool == 0) goto Label_142; // 0x88 JumpB
	var_183_bool = 0; // 0x89 PushV
	func_461(var_180_bool, var_183_bool); // 0x8a Call
	if(var_183_bool == 0) goto Label_142; // 0x8c JumpB
	var_180_bool = 0; // 0x8d MovB
	
Label_142:
	if(var_180_bool == 0) goto Label_156; // 0x8e JumpB
	Face(var_0_object); // 0x8f Func
	var_189_string = "all"; // 0x91 PushS
	var_190_string = "attack_stay"; // 0x92 PushS
	PlayAnimation(var_189_string, var_190_string); // 0x93 Func
	var_191_bool = 0; var_192_float = 0; // 0x95 PushV
	var_192_float = var_26_float; // 0x96 Mov
	func_369(var_46_float, var_191_bool, var_192_float); // 0x97 Call
	StopAsync(); // 0x99 Func
	goto Label_199; // 0x9b Jump
	
Label_199:
	goto Label_208; // 0xc7 Jump
	
Label_156:
	Face(var_0_object); // 0x9c Func
	var_358_string = "all"; // 0x9e PushS
	var_359_string = "fjump"; // 0x9f PushS
	PlayAnimation(var_358_string, var_359_string); // 0xa0 Func
	WaitForAnimEnd(); // 0xa2 Func
	var_360_cvector = CVector(0.0, 0.0, 0.0); // 0xa4 PushVec
	SetSpeed(var_360_cvector); // 0xa5 Func
	Stop(); // 0xa7 Func
	StopAsync(); // 0xa9 Func
	var_361_bool = 0; // 0xab PushV
	func_461(var_46_float, var_361_bool); // 0xac Call
	var_362_bool = var_361_bool == 0; // 0xae Not
	if(var_362_bool == 0) goto Label_199; // 0xaf JumpB
	var_363_bool = 0; var_364_object = Obj(); // 0xb0 PushV
	var_364_object = var_0_object; // 0xb1 MovT
	func_1304(var_363_bool, var_364_object); // 0xb2 Call
	var_365_bool = var_363_bool == 0; // 0xb4 Not
	if(var_365_bool == 0) goto Label_183; // 0xb5 JumpB
	goto Label_209; // 0xb6 Jump
	
Label_183:
	GetPFPosition(var_40_cvector); // 0xb7 TObjFunc
	GetPFPosition(var_41_cvector); // 0xb9 Func
	var_44_cvector = var_40_cvector - var_41_cvector; // 0xbb Sub2
	var_45_float = var_44_cvector | var_44_cvector; // 0xbc Or2
	var_366_float = var_26_float * var_26_float; // 0xbd Mult
	var_367_bool = var_45_float < var_366_float; // 0xbe LT
	if(var_367_bool == 0) goto Label_199; // 0xbf JumpB
	var_368_bool = 0; var_369_float = 0; // 0xc0 PushV
	var_369_float = var_26_float; // 0xc1 Mov
	func_265(var_46_float, var_368_bool, var_369_float); // 0xc2 Call
	var_370_bool = var_368_bool == 0; // 0xc4 Not
	if(var_370_bool == 0) goto Label_199; // 0xc5 JumpB
	goto Label_209; // 0xc6 Jump
	
Label_200:
	var_371_bool = 0; var_372_float = 0; // 0xc8 PushV
	var_372_float = var_26_float; // 0xc9 Mov
	func_265(var_46_float, var_371_bool, var_372_float); // 0xca Call
	var_373_bool = var_371_bool == 0; // 0xcc Not
	if(var_373_bool == 0) goto Label_207; // 0xcd JumpB
	goto Label_209; // 0xce Jump
	
Label_207:
	var_43_bool = 1; // 0xcf MovB
	
Label_72:
	var_43_bool = 1; // 0x48 MovB
	
Label_59:
	var_39_float = var_26_float; // 0x3b Mov
	
Label_46:
	var_374_int = 1; // 0x2e PushI
	var_2_int = var_2_int + var_374_int; // 0x2f Add2
	goto Label_37; // 0x30 Jump
	
Label_33:
	var_375_int = 1; // 0x21 PushI
	var_1_int = var_1_int + var_375_int; // 0x22 Add2
	goto Label_23; // 0x23 Jump
}


func_661(var_150_string)
{
	var_150_string = "run"; // 0x295 MovS
	return 0; // 0x296 Return
}


func_663(var_22_object)
{
	var_23_bool = 0; var_24_string = ""; var_25_string = ""; // 0x298 PushV
	var_24_string = "quest_d5_01"; // 0x299 MovS
	var_25_string = "dead"; // 0x29a MovS
	func_1530(var_23_bool, var_24_string, var_25_string); // 0x29b Call
	var_29_object = Obj(); // 0x29d PushV
	var_29_object = var_22_object; // 0x29e Mov
	func_697(var_29_object); // 0x29f Call
	var_79_int = 50; // 0x2a1 PushI
	var_80_int = 40; // 0x2a2 PushI
	SetRTEnvelope(var_79_int, var_80_int); // 0x2a3 Func
	
Label_677:
	Hold(); // 0x2a5 Func
	goto Label_677; // 0x2a7 Jump
}


func_1304(var_66_bool, var_67_object)
{
	var_68_int = 0; var_69_int = 0; // 0x518 PushV
	var_70_bool = 0; var_71_object = Obj(); // 0x519 PushV
	var_71_object = var_67_object; // 0x51a Mov
	func_1268(var_70_bool, var_71_object); // 0x51b Call
	var_87_bool = var_70_bool == 0; // 0x51d Not
	if(var_87_bool == 0) goto Label_1313; // 0x51e JumpB
	var_66_bool = 0; // 0x51f MovB
	return 2; // 0x520 Return
	
Label_1313:
	var_88_bool = 0; var_89_object = Obj(); var_90_string = ""; // 0x521 PushV
	var_89_object = var_67_object; // 0x522 Mov
	var_90_string = "noaccess"; // 0x523 MovS
	func_1187(var_88_bool, var_89_object, var_90_string); // 0x524 Call
	var_97_bool = var_88_bool == 0; // 0x526 Not
	if(var_97_bool == 0) goto Label_1322; // 0x527 JumpB
	var_66_bool = 1; // 0x528 MovB
	return 2; // 0x529 Return
	
Label_1322:
	var_98_string = "noaccess"; // 0x52a PushS
	GetProperty(var_98_string, var_69_int); // 0x52b ObjFunc
	var_99_int = 0; // 0x52d PushI
	var_66_bool = var_69_int == var_99_int; // 0x52e Eq2
	return 2; // 0x52f Return
}


func_409(var_0_object, var_204_bool)
{
	var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_float = 0; var_209_float = 0; var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_float = 0; var_214_float = 0; // 0x199 PushV
	var_215_bool = 0; var_216_object = Obj(); // 0x19a PushV
	var_216_object = var_0_object; // 0x19b MovT
	func_1304(var_215_bool, var_216_object); // 0x19c Call
	var_217_bool = var_215_bool == 0; // 0x19e Not
	if(var_217_bool == 0) goto Label_418; // 0x19f JumpB
	var_204_bool = 0; // 0x1a0 MovB
	return 10; // 0x1a1 Return
	
Label_418:
	var_218_bool = 0; // 0x1a2 PushV
	func_461(var_214_float, var_218_bool); // 0x1a3 Call
	if(var_218_bool == 0) goto Label_440; // 0x1a5 JumpB
	GetPFPosition(var_210_cvector); // 0x1a6 TObjFunc
	GetPFPosition(var_211_cvector); // 0x1a8 Func
	var_212_cvector = var_210_cvector - var_211_cvector; // 0x1aa Sub2
	var_213_float = var_212_cvector | var_212_cvector; // 0x1ab Or2
	GetAttackDistance(var_214_float); // 0x1ac TObjFunc
	var_219_int = 50; // 0x1ae PushI
	var_214_float = var_214_float + var_219_int; // 0x1af Add2
	var_220_float = var_214_float * var_214_float; // 0x1b0 Mult
	var_221_bool = var_213_float <= var_220_float; // 0x1b1 LE
	if(var_221_bool == 0) goto Label_440; // 0x1b2 JumpB
	func_442(var_214_float); // 0x1b4 Call
	var_204_bool = 1; // 0x1b6 MovB
	return 10; // 0x1b7 Return
	
Label_440:
	var_204_bool = 0; // 0x1b8 MovB
	return 10; // 0x1b9 Return
}


func_1179(var_305_string, var_306_int)
{
	var_307_int = 1; // 0x49c PushI
	var_308_bool = var_306_int == var_307_int; // 0x49d Eq
	if(var_308_bool == 0) goto Label_1185; // 0x49e JumpB
	var_305_string = "fire"; // 0x49f MovS
	return 0; // 0x4a0 Return
	
Label_1185:
	var_305_string = "phys"; // 0x4a1 MovS
	return 0; // 0x4a2 Return
}


func_1406(var_26_bool)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; // 0x57e PushV
	GetPosition(var_37_cvector); // 0x57f ObjFunc
	GetEyesHeight(var_36_float); // 0x581 ObjFunc
	var_44_float = GetByIndex(var_37_cvector, 1); // 0x583 PushE
	var_44_float = var_44_float + var_36_float; // 0x584 Add2
	SetByIndex(var_37_cvector, 1) = var_44_float; // 0x585 PopE
	GetPosition(var_38_cvector); // 0x586 Func
	GetEyesHeight(var_36_float); // 0x588 Func
	var_45_float = GetByIndex(var_38_cvector, 1); // 0x58a PushE
	var_45_float = var_45_float + var_36_float; // 0x58b Add2
	SetByIndex(var_38_cvector, 1) = var_45_float; // 0x58c PopE
	var_39_cvector = var_37_cvector - var_38_cvector; // 0x58d Sub2
	var_46_float = GetByIndex(var_39_cvector, 1); // 0x58e PushE
	var_46_float = 0; // 0x58f MovI
	SetByIndex(var_39_cvector, 1) = var_46_float; // 0x590 PopE
	var_47_int = var_39_cvector | var_39_cvector; // 0x591 Or
	var_48_float = sqrt(var_47_int); // 0x592 Sqrt
	var_39_cvector = var_39_cvector / var_39_cvector; // 0x593 Div2
	var_40_cvector = -var_39_cvector; // 0x594 Neg2
	var_49_int = 70; // 0x595 PushI
	var_50_float = var_39_cvector * var_49_int; // 0x596 Mult
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x597 PushV
	var_53_cvector = CVector(0.0, 1.0, 0.0); // 0x598 PushVec
	var_52_cvector = var_40_cvector ^ var_53_cvector; // 0x599 Xor2
	func_1497(var_51_cvector, var_52_cvector); // 0x59a Call
	var_59_int = 25; // 0x59c PushI
	var_60_float = var_51_cvector * var_59_int; // 0x59d Mult
	var_61_int = var_50_float + var_60_float; // 0x59e Add
	var_62_cvector = CVector(0.0, 10.0, 0.0); // 0x59f PushVec
	var_41_cvector = var_61_int - var_62_cvector; // 0x5a0 Sub2
	var_42_cvector = var_38_cvector + var_41_cvector; // 0x5a1 Add2
	IsOverrideActive(var_43_bool); // 0x5a2 Func
	var_63_bool = var_43_bool; // 0x5a4 Push
	if(var_63_bool == 0) goto Label_1448; // 0x5a5 JumpB
	var_26_bool = 0; // 0x5a6 MovB
	return 16; // 0x5a7 Return
	
Label_1448:
	StopWorld(); // 0x5a8 Func
	CameraTransit(var_42_cvector, var_40_cvector); // 0x5aa Func
	var_64_float = GetByIndex(var_41_cvector, 0); // 0x5ac PushE
	var_65_float = GetByIndex(var_41_cvector, 2); // 0x5ad PushE
	Rotate(var_64_float, var_65_float); // 0x5ae Func
	CameraWaitForPlayFinish(); // 0x5b0 Func
	ResumeWorld(); // 0x5b2 Func
	var_26_bool = 1; // 0x5b4 MovB
	return 16; // 0x5b5 Return
}


func_1187(var_88_bool, var_89_object, var_90_string)
{
	var_91_bool = 0; var_92_bool = 0; // 0x4a3 PushV
	var_93_string = "HasProperty"; // 0x4a4 PushS
	var_94_int = 2; // 0x4a5 PushI
	var_95_bool = IsFuncExist(var_89_object, var_93_string, var_94_int); // 0x4a6 FuncExist
	var_96_bool = var_95_bool == 0; // 0x4a7 Not
	if(var_96_bool == 0) goto Label_1195; // 0x4a8 JumpB
	var_88_bool = 0; // 0x4a9 MovB
	return 2; // 0x4aa Return
	
Label_1195:
	HasProperty(var_90_string, var_92_bool); // 0x4ab ObjFunc
	var_88_bool = var_92_bool; // 0x4ad Mov
	return 2; // 0x4ae Return
}


func_1574()
{
	var_20_string = "ood5PatrolGuard1"; // 0x627 PushS
	var_21_int = 1; // 0x628 PushI
	SetVariable(var_20_string, var_21_int); // 0x629 Func
	return 0; // 0x62b Return
}


func_1580()
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x62c PushV
	var_26_string = "d5q01"; // 0x62d PushS
	var_27_int = 6; // 0x62e PushI
	SetVariable(var_26_string, var_27_int); // 0x62f Func
	var_28_object = Obj(); // 0x631 PushV
	func_1612(var_28_object); // 0x632 Call
	var_25_object = var_28_object; // 0x633 Mov
	var_35_string = "d5q01PatrolGotoGrif"; // 0x635 PushS
	var_36_string = "pt_map_grif"; // 0x636 PushS
	var_37_int = 1; // 0x637 PushI
	var_38_int = 15349; // 0x638 PushI
	var_39_float = 0; // 0x639 PushV
	func_1542(var_39_float); // 0x63a Call
	AddMark(var_35_string, var_36_string, var_37_int, var_38_int, var_39_float); // 0x63c ObjFunc
	return 2; // 0x63e Return
}


func_812(var_0_object, var_15_int, var_16_object)
{
	var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0; // 0x32c PushV
	var_0_object = var_16_object; // 0x32d TMov
	var_26_bool = 0; var_27_object = Obj(); // 0x32e PushV
	var_27_object = var_16_object; // 0x32f Mov
	func_1406(var_27_object); // 0x330 Call
	var_66_bool = var_26_bool == 0; // 0x332 Not
	if(var_66_bool == 0) goto Label_822; // 0x333 JumpB
	var_15_int = -2; // 0x334 MovI
	return 8; // 0x335 Return
	
Label_822:
	CreateDialog(var_22_object); // 0x336 Func
	var_67_int = 0; // 0x338 PushV
	func_1646(var_67_int); // 0x339 Call
	SetNPCName(var_67_int); // 0x33b ObjFunc
	var_68_string = ""; // 0x33d PushV
	func_1648(var_68_string); // 0x33e Call
	SetPhoto(var_68_string); // 0x340 ObjFunc
	var_69_int = 0; // 0x342 PushV
	func_1629(var_69_int); // 0x343 Call
	SetPlayerName(var_69_int); // 0x345 ObjFunc
	var_24_int = -1; // 0x347 MovI
	IsOverrideActive(var_23_bool); // 0x348 Func
	var_77_bool = var_23_bool; // 0x34a Push
	if(var_77_bool == 0) goto Label_846; // 0x34b JumpB
	var_15_int = -2; // 0x34c MovI
	return 8; // 0x34d Return
	
Label_846:
	DoDialog(var_22_object); // 0x34e Func
	var_78_object = Obj(); var_79_object = Obj(); // 0x350 PushV
	var_78_object = var_16_object; // 0x351 Mov
	var_79_object = var_22_object; // 0x352 Mov
	TaskCall(4); // 0x353 TaskCall
	func_875(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object); // 0x354 Call
	TaskReturn(); // 0x355 TaskReturn
	IsDialogEnd(var_25_bool); // 0x357 ObjFunc
	
Label_857:
	var_125_bool = var_25_bool == 0; // 0x359 Not
	if(var_125_bool == 0) goto Label_864; // 0x35a JumpB
	sync(); // 0x35b Func
	IsDialogEnd(var_25_bool); // 0x35d ObjFunc
	goto Label_857; // 0x35f Jump
	
Label_864:
	var_126_object = Obj(); // 0x360 PushV
	var_126_object = var_16_object; // 0x361 Mov
	func_1462(); // 0x362 Call
	StopDialog(var_22_object); // 0x364 Func
	GetReturnValue(var_24_int); // 0x366 ObjFunc
	var_15_int = var_24_int; // 0x368 Mov
	return 8; // 0x369 Return
}


func_1199(var_277_float, var_278_object, var_279_float, var_280_int)
{
	var_284_int = 0; var_285_string = ""; var_286_int = 0; var_287_float = 0; var_288_float = 0; var_289_float = 0; var_290_int = 0; var_291_string = ""; var_292_int = 0; var_293_float = 0; var_294_float = 0; var_295_float = 0; // 0x4af PushV
	var_296_bool = 0; var_297_object = Obj(); var_298_string = ""; // 0x4b0 PushV
	var_297_object = var_278_object; // 0x4b1 Mov
	var_298_string = "health"; // 0x4b2 MovS
	func_1187(var_296_bool, var_297_object, var_298_string); // 0x4b3 Call
	var_299_bool = var_296_bool == 0; // 0x4b5 Not
	if(var_299_bool == 0) goto Label_1209; // 0x4b6 JumpB
	var_277_float = 0.0; // 0x4b7 MovF
	return 12; // 0x4b8 Return
	
Label_1209:
	var_300_bool = 0; var_301_object = Obj(); var_302_string = ""; // 0x4b9 PushV
	var_301_object = var_278_object; // 0x4ba Mov
	var_302_string = "armor"; // 0x4bb MovS
	func_1187(var_300_bool, var_301_object, var_302_string); // 0x4bc Call
	var_303_bool = var_300_bool == 0; // 0x4be Not
	if(var_303_bool == 0) goto Label_1218; // 0x4bf JumpB
	var_290_int = 0; // 0x4c0 MovI
	goto Label_1221; // 0x4c1 Jump
	
Label_1221:
	var_304_string = "armor_"; // 0x4c5 PushS
	var_305_string = ""; var_306_int = 0; // 0x4c6 PushV
	var_306_int = var_280_int; // 0x4c7 Mov
	func_1179(var_305_string, var_306_int); // 0x4c8 Call
	var_291_string = var_304_string + var_305_string; // 0x4ca Add2
	var_309_bool = 0; var_310_object = Obj(); var_311_string = ""; // 0x4cb PushV
	var_310_object = var_278_object; // 0x4cc Mov
	var_311_string = var_291_string; // 0x4cd Mov
	func_1187(var_309_bool, var_310_object, var_311_string); // 0x4ce Call
	var_312_bool = var_309_bool == 0; // 0x4d0 Not
	if(var_312_bool == 0) goto Label_1236; // 0x4d1 JumpB
	var_292_int = 0; // 0x4d2 MovI
	goto Label_1238; // 0x4d3 Jump
	
Label_1238:
	var_313_float = 0; var_314_float = 0; var_315_float = 0; // 0x4d6 PushV
	var_316_int = var_290_int + var_292_int; // 0x4d7 Add
	var_317_float = 100.0; // 0x4d8 PushF
	var_314_float = var_316_int / var_316_int; // 0x4d9 Div2
	var_315_float = 1; // 0x4da MovI
	func_1507(var_313_float, var_314_float, var_315_float); // 0x4db Call
	var_293_float = var_313_float; // 0x4dc Mov
	var_319_string = "health"; // 0x4de PushS
	GetProperty(var_319_string, var_294_float); // 0x4df ObjFunc
	var_320_int = 1; // 0x4e1 PushI
	var_321_int = var_320_int - var_293_float; // 0x4e2 Sub
	var_295_float = var_279_float * var_321_int; // 0x4e3 Mult2
	var_322_string = "health"; // 0x4e4 PushS
	var_323_float = 0; var_324_float = 0; var_325_float = 0; var_326_float = 0; // 0x4e5 PushV
	var_324_float = var_294_float - var_295_float; // 0x4e6 Sub2
	var_325_float = 0; // 0x4e7 MovI
	var_326_float = 1; // 0x4e8 MovI
	func_1514(var_323_float, var_324_float, var_325_float, var_326_float); // 0x4e9 Call
	SetProperty(var_322_string, var_323_float); // 0x4eb ObjFunc
	var_277_float = var_295_float; // 0x4ed Mov
	return 12; // 0x4ee Return
	
Label_1236:
	GetProperty(var_291_string, var_292_int); // 0x4d4 ObjFunc
	
Label_1218:
	var_329_string = "armor"; // 0x4c2 PushS
	GetProperty(var_329_string, var_290_int); // 0x4c3 ObjFunc
}


func_1328(var_16_object, var_17_int)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_object = Obj(); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; // 0x530 PushV
	var_39_bool = 0; // 0x531 PushV
	var_39_bool = 0; // 0x532 MovB
	var_40_int = 4; // 0x533 PushI
	var_41_bool = var_17_int != var_40_int; // 0x534 Neq
	if(var_41_bool == 0) goto Label_1338; // 0x535 JumpB
	var_42_int = 5; // 0x536 PushI
	var_43_bool = var_17_int != var_42_int; // 0x537 Neq
	if(var_43_bool == 0) goto Label_1338; // 0x538 JumpB
	var_39_bool = 1; // 0x539 MovB
	
Label_1338:
	if(var_39_bool == 0) goto Label_1357; // 0x53a JumpB
	GetScene(var_29_object); // 0x53b Func
	GetPosition(var_31_cvector); // 0x53d Func
	GetEyesHeight(var_32_float); // 0x53f Func
	var_44_float = GetByIndex(var_31_cvector, 1); // 0x541 PushE
	var_45_int = 2; // 0x542 PushI
	var_46_float = var_32_float / var_45_int; // 0x543 Div
	var_44_float = var_44_float + var_46_float; // 0x544 Add2
	SetByIndex(var_31_cvector, 1) = var_44_float; // 0x545 PopE
	var_47_string = "scripted"; // 0x546 PushS
	var_48_cvector = CVector(0.0, 0.0, 1.0); // 0x547 PushVec
	var_49_string = "blood.xml"; // 0x548 PushS
	AddActorByType(var_30_object, var_47_string, var_29_object, var_31_cvector, var_48_cvector, var_49_string); // 0x549 Func
	var_30_object = 0; // 0x54b SetNull
	var_29_object = 0; // 0x54c SetNull
	
Label_1357:
	var_50_bool = var_16_object == 0; // 0x54d NullEq
	if(var_50_bool == 0) goto Label_1360; // 0x54e JumpB
	return 20; // 0x54f Return
	
Label_1360:
	GetSecondaryAnimationType(var_33_int); // 0x550 Func
	var_51_int = 0; // 0x552 PushI
	var_52_bool = var_33_int < var_51_int; // 0x553 LT
	if(var_52_bool == 0) goto Label_1366; // 0x554 JumpB
	return 20; // 0x555 Return
	
Label_1366:
	GetPosition(var_34_cvector); // 0x556 ObjFunc
	GetPosition(var_35_cvector); // 0x558 Func
	GetDirection(var_36_cvector); // 0x55a Func
	var_37_cvector = var_35_cvector - var_34_cvector; // 0x55c Sub2
	var_53_float = GetByIndex(var_37_cvector, 0); // 0x55d PushE
	var_54_float = GetByIndex(var_36_cvector, 0); // 0x55e PushE
	var_55_float = var_53_float * var_54_float; // 0x55f Mult
	var_56_float = GetByIndex(var_37_cvector, 2); // 0x560 PushE
	var_57_float = GetByIndex(var_36_cvector, 2); // 0x561 PushE
	var_58_float = var_56_float * var_57_float; // 0x562 Mult
	var_59_int = var_55_float + var_58_float; // 0x563 Add
	var_60_int = 0; // 0x564 PushI
	var_61_bool = var_59_int >= var_60_int; // 0x565 GE
	if(var_61_bool == 0) goto Label_1385; // 0x566 JumpB
	var_38_string = "fhit"; // 0x567 MovS
	goto Label_1386; // 0x568 Jump
	
Label_1386:
	var_62_string = "hit_react"; // 0x56a PushS
	var_63_string = "1"; // 0x56b PushS
	var_64_int = var_38_string + var_63_string; // 0x56c Add
	var_65_string = "2"; // 0x56d PushS
	var_66_int = var_38_string + var_65_string; // 0x56e Add
	var_67_int = -10; // 0x56f PushI
	FadeSecondaryAnimation(var_62_string, var_64_int, var_66_int, var_67_int); // 0x570 Func
	return 20; // 0x572 Return
	
Label_1385:
	var_38_string = "bhit"; // 0x569 MovS
}


func_948(var_2_int, var_93_string)
{
	var_94_bool = 0; // 0x3b5 PushV
	func_1650(var_94_bool); // 0x3b6 Call
	var_95_bool = var_94_bool == 0; // 0x3b8 Not
	if(var_95_bool == 0) goto Label_955; // 0x3b9 JumpB
	return 0; // 0x3ba Return
	
Label_955:
	var_96_bool = var_93_string == var_2_int; // 0x3bb Eq
	if(var_96_bool == 0) goto Label_958; // 0x3bc JumpB
	return 0; // 0x3bd Return
	
Label_958:
	var_97_string = ""; // 0x3be PushV
	var_97_string = var_93_string; // 0x3bf Mov
	func_1466(var_97_string); // 0x3c0 Call
	var_2_int = var_93_string; // 0x3c2 TMov
	return 0; // 0x3c3 Return
}


func_1462()
{
	CameraSwitchToNormal(); // 0x5b7 Func
	return 0; // 0x5b9 Return
}


func_697(var_29_object)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_object = Obj(); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; var_45_object = Obj(); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); // 0x2b9 PushV
	var_50_bool = var_29_object == 0; // 0x2ba NullEq
	if(var_50_bool == 0) goto Label_705; // 0x2bb JumpB
	var_51_string = ""; // 0x2bc PushV
	var_51_string = "fdie"; // 0x2bd MovS
	func_784(var_51_string); // 0x2be Call
	goto Label_783; // 0x2c0 Jump
	
Label_783:
	return 20; // 0x30f Return
	
Label_705:
	GetPosition(var_40_cvector); // 0x2c1 ObjFunc
	GetPosition(var_41_cvector); // 0x2c3 Func
	GetDirection(var_42_cvector); // 0x2c5 Func
	var_43_cvector = var_41_cvector - var_40_cvector; // 0x2c7 Sub2
	var_54_float = GetByIndex(var_43_cvector, 0); // 0x2c8 PushE
	var_55_float = GetByIndex(var_42_cvector, 0); // 0x2c9 PushE
	var_56_float = var_54_float * var_55_float; // 0x2ca Mult
	var_57_float = GetByIndex(var_43_cvector, 2); // 0x2cb PushE
	var_58_float = GetByIndex(var_42_cvector, 2); // 0x2cc PushE
	var_59_float = var_57_float * var_58_float; // 0x2cd Mult
	var_60_int = var_56_float + var_59_float; // 0x2ce Add
	var_61_int = 0; // 0x2cf PushI
	var_62_bool = var_60_int >= var_61_int; // 0x2d0 GE
	if(var_62_bool == 0) goto Label_724; // 0x2d1 JumpB
	var_44_string = "fdie"; // 0x2d2 MovS
	goto Label_725; // 0x2d3 Jump
	
Label_725:
	RemoveRTEnvelope(); // 0x2d5 Func
	SetDeathState(); // 0x2d7 Func
	Stop(); // 0x2d9 Func
	StopAsync(); // 0x2db Func
	var_45_object = var_29_object; // 0x2dd Mov
	var_63_string = "GetScriptProperty"; // 0x2de PushS
	var_64_int = 2; // 0x2df PushI
	var_65_bool = IsFuncExist(var_29_object, var_63_string, var_64_int); // 0x2e0 FuncExist
	if(var_65_bool == 0) goto Label_749; // 0x2e1 JumpB
	var_66_string = "Owner"; // 0x2e2 PushS
	HasScriptProperty(var_46_bool, var_66_string); // 0x2e3 ObjFunc
	var_67_bool = var_46_bool; // 0x2e5 Push
	if(var_67_bool == 0) goto Label_749; // 0x2e6 JumpB
	var_68_string = "Owner"; // 0x2e7 PushS
	GetScriptProperty(var_45_object, var_68_string); // 0x2e8 ObjFunc
	var_69_bool = var_45_object == 0; // 0x2ea NullEq
	if(var_69_bool == 0) goto Label_749; // 0x2eb JumpB
	var_45_object = var_29_object; // 0x2ec Mov
	
Label_749:
	var_70_string = "@GetEyesHeight"; // 0x2ed PushS
	var_71_int = 1; // 0x2ee PushI
	var_72_bool = IsFuncExist(var_45_object, var_70_string, var_71_int); // 0x2ef FuncExist
	if(var_72_bool == 0) goto Label_764; // 0x2f0 JumpB
	GetEyesHeight(var_48_float); // 0x2f1 ObjFunc
	var_49_cvector = CVector(0.0, 0.0, 0.0); // 0x2f3 MovV
	var_73_float = GetByIndex(var_49_cvector, 1); // 0x2f4 PushE
	var_73_float = var_48_float; // 0x2f5 Mov
	SetByIndex(var_49_cvector, 1) = var_73_float; // 0x2f6 PopE
	var_74_string = "head"; // 0x2f7 PushS
	LookAsync(var_29_object, var_74_string, var_49_cvector); // 0x2f8 Func
	var_47_bool = 1; // 0x2fa MovB
	goto Label_765; // 0x2fb Jump
	
Label_765:
	var_75_string = "all"; // 0x2fd PushS
	PlayAnimation(var_75_string, var_44_string); // 0x2fe Func
	WaitForAnimEnd(); // 0x300 Func
	var_76_bool = var_47_bool; // 0x302 Push
	if(var_76_bool == 0) goto Label_777; // 0x303 JumpB
	StopAsync(); // 0x304 Func
	var_77_string = "head"; // 0x306 PushS
	UnlookAsync(var_77_string); // 0x307 Func
	
Label_777:
	var_78_string = "all"; // 0x309 PushS
	LockAnimationEnd(var_78_string, var_44_string); // 0x30a Func
	RemoveEnvelope(); // 0x30c Func
	var_45_object = 0; // 0x30e SetNull
	
Label_764:
	var_47_bool = 0; // 0x2fc MovB
	
Label_724:
	var_44_string = "bdie"; // 0x2d4 MovS
}


func_442(var_0_object)
{
	var_222_cvector = CVector(0,0,0); var_223_cvector = CVector(0,0,0); var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); // 0x1ba PushV
	Face(var_0_object); // 0x1bb Func
	var_226_string = "all"; // 0x1bd PushS
	var_227_string = "bjump"; // 0x1be PushS
	PlayAnimation(var_226_string, var_227_string); // 0x1bf Func
	GetPFPosition(var_224_cvector); // 0x1c1 TObjFunc
	GetPFPosition(var_225_cvector); // 0x1c3 Func
	WaitForAnimEnd(); // 0x1c5 Func
	StopAsync(); // 0x1c7 Func
	var_228_cvector = CVector(0.0, 0.0, 0.0); // 0x1c9 PushVec
	SetSpeed(var_228_cvector); // 0x1ca Func
	return 4; // 0x1cc Return
}


func_1466(var_97_string)
{
	var_98_float = 0; var_99_float = 0; var_100_float = 0; var_101_float = 0; // 0x5ba PushV
	var_102_string = "playing "; // 0x5bb PushS
	var_103_int = var_102_string + var_97_string; // 0x5bc Add
	Trace(var_103_int); // 0x5bd Func
	lshGetAnimTimes(var_97_string, var_100_float, var_101_float); // 0x5bf Func
	lshPlayAnimation(var_100_float, var_101_float); // 0x5c1 Func
	var_104_string = "start: "; // 0x5c3 PushS
	var_105_int = var_104_string + var_100_float; // 0x5c4 Add
	Trace(var_105_int); // 0x5c5 Func
	var_106_string = "end: "; // 0x5c7 PushS
	var_107_int = var_106_string + var_101_float; // 0x5c8 Add
	Trace(var_107_int); // 0x5c9 Func
	return 4; // 0x5cb Return
}


func_1600(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x641 PushV
	var_88_string = "ood5PatrolGuard1"; // 0x642 MovS
	func_1525(var_87_int, var_88_string); // 0x643 Call
	var_91_int = 0; // 0x645 PushI
	var_92_bool = var_87_int == var_91_int; // 0x646 Eq
	if(var_92_bool == 0) goto Label_1610; // 0x647 JumpB
	var_85_bool = 1; // 0x648 MovB
	return 0; // 0x649 Return
	
Label_1610:
	var_85_bool = 0; // 0x64a MovB
	return 0; // 0x64b Return
}


func_1484()
{
	var_15_bool = 0; // 0x5cc PushV
	func_1650(var_15_bool); // 0x5cd Call
	if(var_15_bool == 0) goto Label_1490; // 0x5cf JumpB
	lshStopSpeech(); // 0x5d0 Func
	
Label_1490:
	return 0; // 0x5d2 Return
}


func_461(var_0_object, var_183_bool)
{
	var_184_bool = 0; var_185_bool = 0; // 0x1cd PushV
	var_186_string = "IsAttacking"; // 0x1ce PushS
	var_187_int = 1; // 0x1cf PushI
	var_188_bool = IsFuncExist(var_0_object, var_186_string, var_187_int); // 0x1d0 FuncExist
	if(var_188_bool == 0) goto Label_470; // 0x1d1 JumpB
	IsAttacking(var_185_bool); // 0x1d2 TObjFunc
	var_183_bool = var_185_bool; // 0x1d4 Mov
	return 2; // 0x1d5 Return
	
Label_470:
	var_183_bool = 0; // 0x1d6 MovB
	return 2; // 0x1d7 Return
}


func_1612(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x64c PushV
	GetMainOutdoorScene(var_31_object); // 0x64d Func
	var_33_bool = var_31_object == 0; // 0x64f NullEq
	if(var_33_bool == 0) goto Label_1623; // 0x650 JumpB
	var_34_string = "Can't find main outdoor scene"; // 0x651 PushS
	Trace(var_34_string); // 0x652 Func
	var_32_object = 0; // 0x654 SetNull
	var_28_object = var_32_object; // 0x655 Mov
	return 4; // 0x656 Return
	
Label_1623:
	GetMap(var_32_object); // 0x657 ObjFunc
	var_28_object = var_32_object; // 0x659 Mov
	return 4; // 0x65a Return
}


func_1491(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x5d3 PushV
	self(var_14_object); // 0x5d4 Func
	var_12_object = var_14_object; // 0x5d6 Mov
	return 2; // 0x5d7 Return
}


func_472(var_2_int, var_4_int)
{
	var_245_float = 0; var_246_int = 0; var_247_float = 0; var_248_int = 0; // 0x1d8 PushV
	var_249_bool = var_2_int == 0; // 0x1d9 Not
	if(var_249_bool == 0) goto Label_476; // 0x1da JumpB
	return 4; // 0x1db Return
	
Label_476:
	var_250_int = var_4_int; // 0x1dc PushT
	if(var_250_int == 0) goto Label_484; // 0x1dd JumpB
	var_251_int = -1; // 0x1de PushI
	var_4_int = var_4_int + var_251_int; // 0x1df Add2
	var_252_int = 0; // 0x1e0 PushI
	var_253_bool = var_4_int > var_252_int; // 0x1e1 GT
	if(var_253_bool == 0) goto Label_484; // 0x1e2 JumpB
	return 4; // 0x1e3 Return
	
Label_484:
	rand(var_247_float); // 0x1e4 Func
	var_254_float = 0; // 0x1e6 PushV
	func_510(var_254_float); // 0x1e7 Call
	var_255_bool = var_247_float < var_254_float; // 0x1e9 LT
	if(var_255_bool == 0) goto Label_503; // 0x1ea JumpB
	irand(var_248_int, var_247_float); // 0x1eb Func
	var_256_int = 1; // 0x1ed PushI
	var_248_int = var_248_int + var_256_int; // 0x1ee Add2
	var_257_string = "attack"; // 0x1ef PushS
	var_258_int = var_257_string + var_248_int; // 0x1f0 Add
	Speak(var_258_int); // 0x1f1 Func
	var_259_int = 0; // 0x1f3 PushV
	func_508(var_259_int); // 0x1f4 Call
	var_4_int = var_259_int; // 0x1f5 TMov
	
Label_503:
	return 4; // 0x1f7 Return
}


func_345(var_349_bool, var_350_float)
{
	var_351_float = 0; var_352_bool = 0; var_353_float = 0; var_354_bool = 0; // 0x159 PushV
	rand(var_353_float); // 0x15a Func
	var_355_bool = var_353_float < var_350_float; // 0x15c LT
	if(var_355_bool == 0) goto Label_365; // 0x15d JumpB
	
Label_350:
	IsAnimationPlaying(var_354_bool); // 0x15e Func
	var_356_bool = var_354_bool == 0; // 0x160 Not
	if(var_356_bool == 0) goto Label_355; // 0x161 JumpB
	goto Label_364; // 0x162 Jump
	
Label_364:
	goto Label_367; // 0x16c Jump
	
Label_367:
	var_349_bool = 0; // 0x16f MovB
	return 4; // 0x170 Return
	
Label_355:
	var_357_bool = 0; // 0x163 PushV
	func_409(var_354_bool, var_357_bool); // 0x164 Call
	if(var_357_bool == 0) goto Label_361; // 0x166 JumpB
	var_349_bool = 1; // 0x167 MovB
	return 4; // 0x168 Return
	
Label_361:
	sync(); // 0x169 Func
	goto Label_350; // 0x16b Jump
	
Label_365:
	WaitForAnimEnd(); // 0x16d Func
}


func_1497(var_51_cvector, var_52_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x5d9 PushV
	var_56_int = var_52_cvector | var_52_cvector; // 0x5da Or
	var_55_float = sqrt(var_56_int); // 0x5db Sqrt2
	var_57_float = 0.0; // 0x5dc PushF
	var_58_bool = var_55_float < var_57_float; // 0x5dd LT
	if(var_58_bool == 0) goto Label_1505; // 0x5de JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x5df MovV
	return 2; // 0x5e0 Return
	
Label_1505:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x5e1 Div2
	return 2; // 0x5e2 Return
}


func_1629(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x65d PushV
	var_72_string = "player"; // 0x65e PushS
	GetVariable(var_72_string, var_71_int); // 0x65f Func
	var_73_int = 0; // 0x661 PushI
	var_74_bool = var_71_int == var_73_int; // 0x662 Eq
	if(var_74_bool == 0) goto Label_1639; // 0x663 JumpB
	var_69_int = 200001; // 0x664 MovI
	return 2; // 0x665 Return
	
Label_1639:
	var_75_int = 1; // 0x667 PushI
	var_76_bool = var_71_int == var_75_int; // 0x668 Eq
	if(var_76_bool == 0) goto Label_1644; // 0x669 JumpB
	var_69_int = 200002; // 0x66a MovI
	return 2; // 0x66b Return
	
Label_1644:
	var_69_int = 200003; // 0x66c MovI
	return 2; // 0x66d Return
}


func_226(var_0_object, var_263_float, var_264_int)
{
	var_265_object = Obj(); var_266_float = 0; var_267_float = 0; var_268_object = Obj(); var_269_float = 0; var_270_float = 0; // 0xe2 PushV
	var_271_float = 0.9; // 0xe3 PushF
	var_272_float = var_263_float * var_271_float; // 0xe4 Mult
	GetVictim(var_272_float, var_268_object); // 0xe5 Func
	ReportAttack(var_0_object); // 0xe7 Func
	var_273_bool = var_268_object == var_0_object; // 0xe9 Eq
	if(var_273_bool == 0) goto Label_263; // 0xea JumpB
	var_274_float = 0; var_275_object = Obj(); var_276_int = 0; // 0xeb PushV
	var_275_object = var_268_object; // 0xec Mov
	var_276_int = var_264_int; // 0xed Mov
	func_15(var_276_int); // 0xee Call
	var_269_float = var_274_float; // 0xef Mov
	var_277_float = 0; var_278_object = Obj(); var_279_float = 0; var_280_int = 0; // 0xf1 PushV
	var_278_object = var_268_object; // 0xf2 Mov
	var_279_float = var_269_float; // 0xf3 Mov
	var_281_int = 0; var_282_object = Obj(); var_283_int = 0; // 0xf4 PushV
	var_282_object = var_268_object; // 0xf5 Mov
	var_283_int = var_264_int; // 0xf6 Mov
	func_18(var_283_int); // 0xf7 Call
	var_280_int = var_281_int; // 0xf8 Mov
	func_1199(var_277_float, var_278_object, var_279_float, var_280_int); // 0xfa Call
	var_270_float = var_277_float; // 0xfb Mov
	var_330_int = 0; // 0xfd PushV
	func_504(var_330_int); // 0xfe Call
	ReportHit(var_0_object, var_330_int, var_270_float, var_269_float); // 0x100 Func
	var_331_object = Obj(); var_332_float = 0; // 0x102 PushV
	var_331_object = var_268_object; // 0x103 Mov
	var_332_float = var_270_float; // 0x104 Mov
	func_506(); // 0x105 Call
	
Label_263:
	return 6; // 0x107 Return
}


func_1507(var_313_float, var_314_float, var_315_float)
{
	var_318_bool = var_314_float < var_315_float; // 0x5e4 LT
	if(var_318_bool == 0) goto Label_1512; // 0x5e5 JumpB
	var_313_float = var_314_float; // 0x5e6 Mov
	goto Label_1513; // 0x5e7 Jump
	
Label_1513:
	return 0; // 0x5e9 Return
	
Label_1512:
	var_313_float = var_315_float; // 0x5e8 Mov
}


func_1514(var_323_float, var_324_float, var_325_float, var_326_float)
{
	var_327_bool = var_324_float < var_325_float; // 0x5eb LT
	if(var_327_bool == 0) goto Label_1519; // 0x5ec JumpB
	var_323_float = var_325_float; // 0x5ed Mov
	return 0; // 0x5ee Return
	
Label_1519:
	var_328_bool = var_324_float > var_326_float; // 0x5ef GT
	if(var_328_bool == 0) goto Label_1523; // 0x5f0 JumpB
	var_323_float = var_326_float; // 0x5f1 Mov
	return 0; // 0x5f2 Return
	
Label_1523:
	var_323_float = var_324_float; // 0x5f3 Mov
	return 0; // 0x5f4 Return
}


func_875(var_0_object, var_1_int, var_2_int, var_3_bool, var_78_object, var_79_object)
{
	var_0_object = var_79_object; // 0x36c TMov
	var_1_int = var_78_object; // 0x36d TMov
	var_3_bool = 0; // 0x36e TMovB
	var_84_int = 1; // 0x36f PushI
	if(var_84_int == 0) goto Label_918; // 0x370 JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x371 PushV
	var_86_object = var_1_int; // 0x372 MovT
	func_1600(var_86_object); // 0x373 Call
	if(var_85_bool == 0) goto Label_901; // 0x375 JumpB
	var_93_string = ""; // 0x376 PushV
	var_93_string = "Neutral"; // 0x377 MovS
	func_948(var_79_object, var_93_string); // 0x378 Call
	var_108_int = 11690; // 0x37a PushI
	SetMessage(var_108_int); // 0x37b TObjFunc
	ClearReplies(); // 0x37d TObjFunc
	var_109_int = 11691; // 0x37f PushI
	var_110_int = 12894; // 0x380 PushI
	var_111_int = 12893; // 0x381 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x382 TObjFunc
	goto Label_918; // 0x384 Jump
	
Label_918:
	var_112_bool = 0; // 0x396 PushV
	func_1650(var_112_bool); // 0x397 Call
	if(var_112_bool == 0) goto Label_933; // 0x399 JumpB
	
Label_922:
	lshWaitForAnimEnd(); // 0x39a Func
	var_113_bool = var_3_bool; // 0x39c PushT
	if(var_113_bool == 0) goto Label_927; // 0x39d JumpB
	goto Label_932; // 0x39e Jump
	
Label_932:
	goto Label_947; // 0x3a4 Jump
	
Label_947:
	return 0; // 0x3b3 Return
	
Label_927:
	var_114_string = ""; // 0x39f PushV
	var_114_string = var_2_int; // 0x3a0 MovT
	func_1466(var_114_string); // 0x3a1 Call
	goto Label_922; // 0x3a3 Jump
	
Label_933:
	var_115_string = "all"; // 0x3a5 PushS
	var_116_string = "idle"; // 0x3a6 PushS
	PlayAnimation(var_115_string, var_116_string); // 0x3a7 Func
	
Label_937:
	WaitForAnimEnd(); // 0x3a9 Func
	var_117_bool = var_3_bool; // 0x3ab PushT
	if(var_117_bool == 0) goto Label_942; // 0x3ac JumpB
	goto Label_947; // 0x3ad Jump
	
Label_942:
	var_118_string = "all"; // 0x3ae PushS
	var_119_string = "idle"; // 0x3af PushS
	PlayAnimation(var_118_string, var_119_string); // 0x3b0 Func
	goto Label_937; // 0x3b2 Jump
	
Label_901:
	var_120_string = ""; // 0x385 PushV
	var_120_string = "Neutral"; // 0x386 MovS
	func_948(var_79_object, var_120_string); // 0x387 Call
	var_121_int = 12483; // 0x389 PushI
	SetMessage(var_121_int); // 0x38a TObjFunc
	ClearReplies(); // 0x38c TObjFunc
	var_122_int = 12484; // 0x38e PushI
	var_123_int = -1; // 0x38f PushI
	var_124_int = 13652; // 0x390 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x391 TObjFunc
	goto Label_918; // 0x393 Jump
}


func_1646(var_67_int)
{
	var_67_int = 4031; // 0x66e MovI
	return 0; // 0x66f Return
}


func_1134(var_14_object)
{
	var_15_int = 0; var_16_object = Obj(); // 0x46f PushV
	var_16_object = var_14_object; // 0x470 Mov
	TaskCall(3); // 0x471 TaskCall
	func_812(var_17_object, var_15_int, var_16_object); // 0x472 Call
	TaskReturn(); // 0x473 TaskReturn
	return 0; // 0x475 Return
}


func_1648(var_68_string)
{
	var_68_string = "ui/NPC_Black.png"; // 0x670 MovS
	return 0; // 0x671 Return
}


func_369(var_0_object, var_191_bool, var_192_float)
{
	var_193_bool = 0; var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_cvector = CVector(0,0,0); var_197_float = 0; var_198_bool = 0; var_199_cvector = CVector(0,0,0); var_200_cvector = CVector(0,0,0); var_201_cvector = CVector(0,0,0); var_202_float = 0; // 0x171 PushV
	
Label_370:
	IsAnimationPlaying(var_198_bool); // 0x172 Func
	var_203_bool = var_198_bool == 0; // 0x174 Not
	if(var_203_bool == 0) goto Label_375; // 0x175 JumpB
	goto Label_407; // 0x176 Jump
	
Label_407:
	var_191_bool = 0; // 0x197 MovB
	return 10; // 0x198 Return
	
Label_375:
	var_204_bool = 0; // 0x177 PushV
	func_409(var_202_float, var_204_bool); // 0x178 Call
	if(var_204_bool == 0) goto Label_381; // 0x17a JumpB
	var_191_bool = 1; // 0x17b MovB
	return 10; // 0x17c Return
	
Label_381:
	var_229_bool = 0; var_230_object = Obj(); // 0x17d PushV
	var_230_object = var_0_object; // 0x17e MovT
	func_1304(var_229_bool, var_230_object); // 0x17f Call
	var_231_bool = var_229_bool == 0; // 0x181 Not
	if(var_231_bool == 0) goto Label_389; // 0x182 JumpB
	var_191_bool = 0; // 0x183 MovB
	return 10; // 0x184 Return
	
Label_389:
	GetPFPosition(var_199_cvector); // 0x185 TObjFunc
	GetPFPosition(var_200_cvector); // 0x187 Func
	var_201_cvector = var_199_cvector - var_200_cvector; // 0x189 Sub2
	var_202_float = var_201_cvector | var_201_cvector; // 0x18a Or2
	var_232_float = var_192_float * var_192_float; // 0x18b Mult
	var_233_bool = var_202_float < var_232_float; // 0x18c LT
	if(var_233_bool == 0) goto Label_404; // 0x18d JumpB
	var_234_bool = 0; var_235_float = 0; // 0x18e PushV
	var_235_float = var_192_float; // 0x18f Mov
	func_265(var_202_float, var_234_bool, var_235_float); // 0x190 Call
	var_191_bool = 1; // 0x192 MovB
	return 10; // 0x193 Return
	
Label_404:
	sync(); // 0x194 Func
	goto Label_370; // 0x196 Jump
}


func_1650(var_94_bool)
{
	var_94_bool = 0; // 0x672 MovB
	return 0; // 0x673 Return
}


func_1395()
{
	var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); // 0x573 PushV
	GetPosition(var_173_cvector); // 0x574 ObjFunc
	GetPosition(var_174_cvector); // 0x576 Func
	var_175_cvector = var_173_cvector - var_174_cvector; // 0x578 Sub2
	var_176_float = GetByIndex(var_175_cvector, 0); // 0x579 PushE
	var_177_float = GetByIndex(var_175_cvector, 2); // 0x57a PushE
	RotateAsync(var_176_float, var_177_float); // 0x57b Func
	return 6; // 0x57d Return
}


func_1263(var_81_bool)
{
	var_83_bool = 0; var_84_bool = 0; // 0x4ef PushV
	IsDead(var_84_bool); // 0x4f0 ObjFunc
	var_81_bool = var_84_bool; // 0x4f2 Mov
	return 2; // 0x4f3 Return
}


func_1268(var_70_bool, var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj(); var_74_object = Obj(); var_75_object = Obj(); // 0x4f4 PushV
	var_76_bool = var_71_object == 0; // 0x4f5 NullEq
	if(var_76_bool == 0) goto Label_1273; // 0x4f6 JumpB
	var_70_bool = 0; // 0x4f7 MovB
	return 4; // 0x4f8 Return
	
Label_1273:
	var_77_bool = 0; // 0x4f9 PushV
	var_77_bool = 0; // 0x4fa MovB
	var_78_string = "IsDead"; // 0x4fb PushS
	var_79_int = 1; // 0x4fc PushI
	var_80_bool = IsFuncExist(var_71_object, var_78_string, var_79_int); // 0x4fd FuncExist
	if(var_80_bool == 0) goto Label_1285; // 0x4fe JumpB
	var_81_bool = 0; var_82_object = Obj(); // 0x4ff PushV
	var_82_object = var_71_object; // 0x500 Mov
	func_1263(var_82_object); // 0x501 Call
	if(var_81_bool == 0) goto Label_1285; // 0x503 JumpB
	var_77_bool = 1; // 0x504 MovB
	
Label_1285:
	if(var_77_bool == 0) goto Label_1288; // 0x505 JumpB
	var_70_bool = 0; // 0x506 MovB
	return 4; // 0x507 Return
	
Label_1288:
	GetScene(var_74_object); // 0x508 Func
	var_85_bool = var_74_object == 0; // 0x50a NullEq
	if(var_85_bool == 0) goto Label_1294; // 0x50b JumpB
	var_70_bool = 0; // 0x50c MovB
	return 4; // 0x50d Return
	
Label_1294:
	GetScene(var_75_object); // 0x50e ObjFunc
	var_86_bool = var_74_object != var_75_object; // 0x510 Neq
	if(var_86_bool == 0) goto Label_1300; // 0x511 JumpB
	var_70_bool = 0; // 0x512 MovB
	return 4; // 0x513 Return
	
Label_1300:
	var_70_bool = 1; // 0x514 MovB
	return 4; // 0x515 Return
}


func_1652(var_13_object)
{
	var_14_bool = 0; var_15_bool = 0; // 0x674 PushV
	var_16_string = "revolver_ammo"; // 0x675 PushS
	var_17_int = 0; // 0x676 PushI
	var_18_int = 2; // 0x677 PushI
	AddItem(var_15_bool, var_16_string, var_17_int, var_18_int); // 0x678 Func
	var_19_string = "alpha_pills"; // 0x67a PushS
	var_20_int = 0; // 0x67b PushI
	var_21_int = 2; // 0x67c PushI
	AddItem(var_15_bool, var_19_string, var_20_int, var_21_int); // 0x67d Func
	var_22_object = Obj(); // 0x67f PushV
	var_22_object = var_13_object; // 0x680 Mov
	TaskCall(2); // 0x681 TaskCall
	func_663(var_22_object); // 0x682 Call
	TaskReturn(); // 0x683 TaskReturn
	return 2; // 0x685 Return
}


func_1525(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0; // 0x5f5 PushV
	GetVariable(var_88_string, var_90_int); // 0x5f6 Func
	var_87_int = var_90_int; // 0x5f8 Mov
	return 2; // 0x5f9 Return
}


func_504(var_330_int)
{
	var_330_int = 0; // 0x1f8 MovI
	return 0; // 0x1f9 Return
}


func_506()
{
	return 0; // 0x1fb Return
}


func_508(var_259_int)
{
	var_259_int = 1; // 0x1fc MovI
	return 0; // 0x1fd Return
}


func_510(var_254_float)
{
	var_254_float = 0.5; // 0x1fe MovF
	return 0; // 0x1ff Return
}


