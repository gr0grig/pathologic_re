task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xa7 PushI
	if(var_9_int == 0) goto Label_431; // 0xa8 JumpB
	func_1034(); // 0xaa NEW_2
	var_11_int = 15199; // 0xac PushI
	var_12_bool = var_8_bool == var_11_int; // 0xad Eq
	if(var_12_bool == 0) goto Label_180; // 0xae JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xaf PushV
	var_13_object = var_1_object; // 0xb0 MovT
	var_14_object = var_0_object; // 0xb1 MovT
	func_1105(); // 0xb2 NEW_2
	
Label_180:
	var_40_int = 40555; // 0xb4 PushI
	var_41_bool = var_8_bool == var_40_int; // 0xb5 Eq
	if(var_41_bool == 0) goto Label_188; // 0xb6 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xb7 PushV
	var_42_object = var_1_object; // 0xb8 MovT
	var_43_object = var_0_object; // 0xb9 MovT
	func_1105(); // 0xba NEW_2
	
Label_188:
	var_44_int = 40548; // 0xbc PushI
	var_45_bool = var_8_bool == var_44_int; // 0xbd Eq
	if(var_45_bool == 0) goto Label_196; // 0xbe JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xbf PushV
	var_46_object = var_1_object; // 0xc0 MovT
	var_47_object = var_0_object; // 0xc1 MovT
	func_1105(); // 0xc2 NEW_2
	
Label_196:
	var_48_int = 15184; // 0xc4 PushI
	var_49_bool = var_7_cvector == var_48_int; // 0xc5 Eq
	if(var_49_bool == 0) goto Label_224; // 0xc6 JumpB
	var_50_string = ""; // 0xc7 PushV
	var_50_string = "Neutral"; // 0xc8 MovS
	func_144(var_8_bool, var_50_string); // 0xc9 NEW_2
	var_67_int = 513949; // 0xcb PushI
	SetMessage(var_67_int); // 0xcc TObjFunc
	ClearReplies(); // 0xce TObjFunc
	var_68_bool = 0; var_69_object = Obj(); // 0xd0 PushV
	var_69_object = var_1_object; // 0xd1 MovT
	func_1114(var_69_object); // 0xd2 NEW_2
	if(var_68_bool == 0) goto Label_218; // 0xd4 JumpB
	var_76_int = 513950; // 0xd5 PushI
	var_77_int = 15186; // 0xd6 PushI
	var_78_int = 15185; // 0xd7 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xd8 TObjFunc
	
Label_218:
	var_79_int = 513980; // 0xda PushI
	var_80_int = -1; // 0xdb PushI
	var_81_int = 15215; // 0xdc PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_82_int = 15213; // 0xe0 PushI
	var_83_bool = var_7_cvector == var_82_int; // 0xe1 Eq
	if(var_83_bool == 0) goto Label_227; // 0xe2 JumpB
	
Label_227:
	var_84_int = 15186; // 0xe3 PushI
	var_85_bool = var_7_cvector == var_84_int; // 0xe4 Eq
	if(var_85_bool == 0) goto Label_250; // 0xe5 JumpB
	var_86_string = ""; // 0xe6 PushV
	var_86_string = "Sorrow"; // 0xe7 MovS
	func_144(var_8_bool, var_86_string); // 0xe8 NEW_2
	var_87_int = 513951; // 0xea PushI
	SetMessage(var_87_int); // 0xeb TObjFunc
	ClearReplies(); // 0xed TObjFunc
	var_88_int = 513952; // 0xef PushI
	var_89_int = 15188; // 0xf0 PushI
	var_90_int = 15187; // 0xf1 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xf2 TObjFunc
	var_91_int = 538654; // 0xf4 PushI
	var_92_int = -1; // 0xf5 PushI
	var_93_int = 40548; // 0xf6 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xf7 TObjFunc
	return 0; // 0xf9 Return
	
Label_250:
	var_94_int = 15188; // 0xfa PushI
	var_95_bool = var_7_cvector == var_94_int; // 0xfb Eq
	if(var_95_bool == 0) goto Label_268; // 0xfc JumpB
	var_96_string = ""; // 0xfd PushV
	var_96_string = "Sorrow"; // 0xfe MovS
	func_144(var_8_bool, var_96_string); // 0xff NEW_2
	var_97_int = 513953; // 0x101 PushI
	SetMessage(var_97_int); // 0x102 TObjFunc
	ClearReplies(); // 0x104 TObjFunc
	var_98_int = 513954; // 0x106 PushI
	var_99_int = 15190; // 0x107 PushI
	var_100_int = 15189; // 0x108 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_101_int = 15190; // 0x10c PushI
	var_102_bool = var_7_cvector == var_101_int; // 0x10d Eq
	if(var_102_bool == 0) goto Label_291; // 0x10e JumpB
	var_103_string = ""; // 0x10f PushV
	var_103_string = "Neutral"; // 0x110 MovS
	func_144(var_8_bool, var_103_string); // 0x111 NEW_2
	var_104_int = 513955; // 0x113 PushI
	SetMessage(var_104_int); // 0x114 TObjFunc
	ClearReplies(); // 0x116 TObjFunc
	var_105_int = 538657; // 0x118 PushI
	var_106_int = 40553; // 0x119 PushI
	var_107_int = 40551; // 0x11a PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x11b TObjFunc
	var_108_int = 538658; // 0x11d PushI
	var_109_int = 40554; // 0x11e PushI
	var_110_int = 40552; // 0x11f PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x120 TObjFunc
	return 0; // 0x122 Return
	
Label_291:
	var_111_int = 40554; // 0x123 PushI
	var_112_bool = var_7_cvector == var_111_int; // 0x124 Eq
	if(var_112_bool == 0) goto Label_314; // 0x125 JumpB
	var_113_string = ""; // 0x126 PushV
	var_113_string = "Neutral"; // 0x127 MovS
	func_144(var_8_bool, var_113_string); // 0x128 NEW_2
	var_114_int = 538660; // 0x12a PushI
	SetMessage(var_114_int); // 0x12b TObjFunc
	ClearReplies(); // 0x12d TObjFunc
	var_115_int = 538661; // 0x12f PushI
	var_116_int = -1; // 0x130 PushI
	var_117_int = 40555; // 0x131 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x132 TObjFunc
	var_118_int = 538662; // 0x134 PushI
	var_119_int = 40553; // 0x135 PushI
	var_120_int = 40556; // 0x136 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x137 TObjFunc
	return 0; // 0x139 Return
	
Label_314:
	var_121_int = 40553; // 0x13a PushI
	var_122_bool = var_7_cvector == var_121_int; // 0x13b Eq
	if(var_122_bool == 0) goto Label_337; // 0x13c JumpB
	var_123_string = ""; // 0x13d PushV
	var_123_string = "Neutral"; // 0x13e MovS
	func_144(var_8_bool, var_123_string); // 0x13f NEW_2
	var_124_int = 538659; // 0x141 PushI
	SetMessage(var_124_int); // 0x142 TObjFunc
	ClearReplies(); // 0x144 TObjFunc
	var_125_int = 513956; // 0x146 PushI
	var_126_int = 15192; // 0x147 PushI
	var_127_int = 15191; // 0x148 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x149 TObjFunc
	var_128_int = 538663; // 0x14b PushI
	var_129_int = 15194; // 0x14c PushI
	var_130_int = 40558; // 0x14d PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x14e TObjFunc
	return 0; // 0x150 Return
	
Label_337:
	var_131_int = 15192; // 0x151 PushI
	var_132_bool = var_7_cvector == var_131_int; // 0x152 Eq
	if(var_132_bool == 0) goto Label_360; // 0x153 JumpB
	var_133_string = ""; // 0x154 PushV
	var_133_string = "Doubt"; // 0x155 MovS
	func_144(var_8_bool, var_133_string); // 0x156 NEW_2
	var_134_int = 513957; // 0x158 PushI
	SetMessage(var_134_int); // 0x159 TObjFunc
	ClearReplies(); // 0x15b TObjFunc
	var_135_int = 513958; // 0x15d PushI
	var_136_int = 15194; // 0x15e PushI
	var_137_int = 15193; // 0x15f PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x160 TObjFunc
	var_138_int = 538664; // 0x162 PushI
	var_139_int = 15196; // 0x163 PushI
	var_140_int = 40560; // 0x164 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x165 TObjFunc
	return 0; // 0x167 Return
	
Label_360:
	var_141_int = 15194; // 0x168 PushI
	var_142_bool = var_7_cvector == var_141_int; // 0x169 Eq
	if(var_142_bool == 0) goto Label_378; // 0x16a JumpB
	var_143_string = ""; // 0x16b PushV
	var_143_string = "Agression"; // 0x16c MovS
	func_144(var_8_bool, var_143_string); // 0x16d NEW_2
	var_144_int = 513959; // 0x16f PushI
	SetMessage(var_144_int); // 0x170 TObjFunc
	ClearReplies(); // 0x172 TObjFunc
	var_145_int = 513960; // 0x174 PushI
	var_146_int = 15196; // 0x175 PushI
	var_147_int = 15195; // 0x176 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x177 TObjFunc
	return 0; // 0x179 Return
	
Label_378:
	var_148_int = 15196; // 0x17a PushI
	var_149_bool = var_7_cvector == var_148_int; // 0x17b Eq
	if(var_149_bool == 0) goto Label_401; // 0x17c JumpB
	var_150_string = ""; // 0x17d PushV
	var_150_string = "Agression"; // 0x17e MovS
	func_144(var_8_bool, var_150_string); // 0x17f NEW_2
	var_151_int = 513961; // 0x181 PushI
	SetMessage(var_151_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_152_int = 513962; // 0x186 PushI
	var_153_int = 15198; // 0x187 PushI
	var_154_int = 15197; // 0x188 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x189 TObjFunc
	var_155_int = 538665; // 0x18b PushI
	var_156_int = 15198; // 0x18c PushI
	var_157_int = 40562; // 0x18d PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_158_int = 15198; // 0x191 PushI
	var_159_bool = var_7_cvector == var_158_int; // 0x192 Eq
	if(var_159_bool == 0) goto Label_419; // 0x193 JumpB
	var_160_string = ""; // 0x194 PushV
	var_160_string = "Doubt"; // 0x195 MovS
	func_144(var_8_bool, var_160_string); // 0x196 NEW_2
	var_161_int = 513963; // 0x198 PushI
	SetMessage(var_161_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_162_int = 513964; // 0x19d PushI
	var_163_int = -1; // 0x19e PushI
	var_164_int = 15199; // 0x19f PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x1a0 TObjFunc
	return 0; // 0x1a2 Return
	
Label_419:
	var_3_string = 1; // 0x1a3 TMovB
	var_165_bool = 0; // 0x1a4 PushV
	func_1103(var_165_bool); // 0x1a5 NEW_2
	if(var_165_bool == 0) goto Label_427; // 0x1a7 JumpB
	lshStopAnimation(); // 0x1a8 Func
	goto Label_429; // 0x1aa Jump
	
Label_429:
	return 0; // 0x1ad Return
	
Label_427:
	StopAnimation(); // 0x1ab Func
	
Label_431:
	return 0; // 0x1af Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1bc PushV
	var_10_string = "cleanup"; // 0x1bd PushS
	var_11_bool = var_7_string == var_10_string; // 0x1be Eq
	if(var_11_bool == 0) goto Label_459; // 0x1bf JumpB
	var_1_object = 1; // 0x1c0 TMovB
	IsLoaded(var_9_bool); // 0x1c1 Func
	var_12_bool = var_9_bool == 0; // 0x1c3 Not
	if(var_12_bool == 0) goto Label_458; // 0x1c4 JumpB
	var_13_object = Obj(); // 0x1c5 PushV
	func_1041(var_13_object); // 0x1c6 NEW_2
	RemoveActor(var_13_object); // 0x1c8 Func
	
Label_458:
	goto Label_463; // 0x1ca Jump
	
Label_463:
	return 2; // 0x1cf Return
	
Label_459:
	var_16_string = "restore"; // 0x1cb PushS
	var_17_bool = var_7_string == var_16_string; // 0x1cc Eq
	if(var_17_bool == 0) goto Label_463; // 0x1cd JumpB
	var_1_object = 0; // 0x1ce TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x1d0 PushT
	if(var_7_object == 0) goto Label_473; // 0x1d1 JumpB
	var_8_object = Obj(); // 0x1d2 PushV
	func_1041(var_8_object); // 0x1d3 NEW_2
	RemoveActor(var_8_object); // 0x1d5 Func
	Hold(); // 0x1d7 Func
	
Label_473:
	func_588(); // 0x1da NEW_2
	return 0; // 0x1dc Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_603(); // 0x1de NEW_2
	return 0; // 0x1e0 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x227 PushI
	var_9_bool = var_7_int == var_8_int; // 0x228 Eq
	if(var_9_bool == 0) goto Label_587; // 0x229 JumpB
	func_546(); // 0x22b NEW_2
	var_11_bool = 0; // 0x22d PushV
	var_11_bool = 0; // 0x22e MovB
	var_12_bool = 0; // 0x22f PushV
	func_760(var_12_bool); // 0x230 NEW_2
	if(var_12_bool == 0) goto Label_568; // 0x232 JumpB
	var_15_bool = 0; // 0x233 PushV
	func_515(var_15_bool); // 0x234 NEW_2
	if(var_15_bool == 0) goto Label_568; // 0x236 JumpB
	var_11_bool = 1; // 0x237 MovB
	
Label_568:
	if(var_11_bool == 0) goto Label_581; // 0x238 JumpB
	var_32_bool = 0; // 0x239 PushV
	func_495(var_32_bool); // 0x23a NEW_2
	if(var_32_bool == 0) goto Label_580; // 0x23c JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x23d PushV
	var_53_object = Obj(); // 0x23e PushV
	func_1041(var_53_object); // 0x23f NEW_2
	var_52_object = var_53_object; // 0x240 Mov
	func_908(var_52_object); // 0x242 NEW_2
	
Label_580:
	goto Label_587; // 0x244 Jump
	
Label_587:
	return 0; // 0x24b Return
	
Label_581:
	func_510(var_7_int); // 0x246 NEW_2
	func_537(); // 0x249 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x269 Push
	if(var_8_bool == 0) goto Label_623; // 0x26a JumpB
	func_537(); // 0x26c NEW_2
	goto Label_627; // 0x26e Jump
	
Label_627:
	return 0; // 0x273 Return
	
Label_623:
	var_14_string = ""; // 0x26f PushV
	var_14_string = "Neutral"; // 0x270 MovS
	func_988(var_14_string); // 0x271 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x274 PushV
	IsOverrideActive(var_9_bool); // 0x275 Func
	var_10_bool = var_9_bool == 0; // 0x277 Not
	if(var_10_bool == 0) goto Label_656; // 0x278 JumpB
	EventDisable(0); // 0x279 EventDisable
	func_728(); // 0x27b NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x27d PushV
	var_12_object = var_7_object; // 0x27e Mov
	func_751(var_12_object); // 0x27f NEW_2
	EventEnable(0); // 0x281 EventEnable
	var_25_object = Obj(); // 0x282 PushV
	var_25_object = var_7_object; // 0x283 Mov
	func_432(var_25_object); // 0x284 NEW_2
	var_257_string = ""; // 0x286 PushV
	var_257_string = "Neutral"; // 0x287 MovS
	func_988(var_257_string); // 0x288 NEW_2
	func_546(); // 0x28b NEW_2
	func_537(); // 0x28e NEW_2
	
Label_656:
	return 2; // 0x290 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_481(var_6_bool); // 0x1b9 NEW_2
	return 0; // 0x1bb Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_765(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1097(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1095(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1099(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1101(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1180(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1041(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_850(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_249_bool = var_36_bool == 0; // 0x3f Not
	if(var_249_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_250_object = Obj(); // 0x46 PushV
	var_250_object = var_27_object; // 0x47 Mov
	func_833(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1152(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x480 PushV
	var_31_object = Obj(); // 0x481 PushV
	func_1139(var_31_object); // 0x482 NEW_2
	var_28_object = var_31_object; // 0x483 Mov
	Find(var_24_int, var_29_object); // 0x485 ObjFunc
	var_36_bool = var_29_object == 0; // 0x487 Not
	if(var_36_bool == 0) goto Label_1167; // 0x488 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x489 PushS
	var_38_int = var_37_string + var_24_int; // 0x48a Add
	Trace(var_38_int); // 0x48b Func
	var_22_bool = 0; // 0x48d MovB
	return 6; // 0x48e Return
	
Label_1167:
	AddChild(var_23_object); // 0x48f ObjFunc
	var_39_int = 7; // 0x491 PushI
	SendWorldWndMessage(var_39_int); // 0x492 Func
	GetCategory(var_30_int); // 0x494 ObjFunc
	SetDiarySection(var_30_int); // 0x496 Func
	var_22_bool = 0; // 0x498 MovB
	return 6; // 0x499 Return
}


func_515(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x203 PushV
	var_20_string = "player"; // 0x204 PushS
	FindActor(var_18_object, var_20_string); // 0x205 Func
	var_21_bool = var_18_object == 0; // 0x207 Not
	if(var_21_bool == 0) goto Label_523; // 0x208 JumpB
	var_15_bool = 0; // 0x209 MovB
	return 4; // 0x20a Return
	
Label_523:
	var_22_float = 0; var_23_object = Obj(); // 0x20b PushV
	var_23_object = var_18_object; // 0x20c Mov
	func_733(var_23_object); // 0x20d NEW_2
	var_30_float = 90000.0; // 0x20f PushF
	var_31_bool = var_22_float > var_30_float; // 0x210 GT
	if(var_31_bool == 0) goto Label_532; // 0x211 JumpB
	var_15_bool = 0; // 0x212 MovB
	return 4; // 0x213 Return
	
Label_532:
	CanSee(var_19_bool, var_18_object); // 0x214 Func
	var_15_bool = var_19_bool; // 0x216 Mov
	return 4; // 0x217 Return
}


func_1034()
{
	var_10_bool = 0; // 0x40a PushV
	func_1103(var_10_bool); // 0x40b NEW_2
	if(var_10_bool == 0) goto Label_1040; // 0x40d JumpB
	lshStopSpeech(); // 0x40e Func
	
Label_1040:
	return 0; // 0x410 Return
}


func_908(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x38c PushV
	var_115_string = "c"; // 0x38d MovS
	var_116_int = 0; // 0x38e MovI
	
Label_911:
	var_120_int = 1; // 0x38f PushI
	if(var_120_int == 0) goto Label_924; // 0x390 JumpB
	var_121_int = 1; // 0x391 PushI
	var_122_int = var_116_int + var_121_int; // 0x392 Add
	var_123_int = var_115_string + var_122_int; // 0x393 Add
	HasProperty(var_123_int, var_117_bool); // 0x394 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x396 Not
	if(var_124_bool == 0) goto Label_921; // 0x397 JumpB
	goto Label_924; // 0x398 Jump
	
Label_924:
	var_125_bool = var_116_int == 0; // 0x39c Not
	if(var_125_bool == 0) goto Label_928; // 0x39d JumpB
	var_108_bool = 0; // 0x39e MovB
	return 10; // 0x39f Return
	
Label_928:
	var_118_int = 0; // 0x3a0 MovI
	var_126_int = 1; // 0x3a1 PushI
	var_127_bool = var_116_int > var_126_int; // 0x3a2 GT
	if(var_127_bool == 0) goto Label_934; // 0x3a3 JumpB
	irand(var_118_int, var_116_int); // 0x3a4 Func
	
Label_934:
	var_128_int = 1; // 0x3a6 PushI
	var_129_int = var_118_int + var_128_int; // 0x3a7 Add
	var_130_int = var_115_string + var_129_int; // 0x3a8 Add
	GetProperty(var_130_int, var_119_string); // 0x3a9 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x3ab PushV
	var_132_string = var_119_string; // 0x3ac Mov
	func_1019(var_131_bool, var_132_string); // 0x3ad NEW_2
	var_108_bool = var_131_bool; // 0x3ae Mov
	return 10; // 0x3b0 Return
	
Label_921:
	var_137_int = 1; // 0x399 PushI
	var_116_int = var_116_int + var_137_int; // 0x39a Add2
	goto Label_911; // 0x39b Jump
}


func_144(var_2_object, var_199_string)
{
	var_200_bool = 0; // 0x91 PushV
	func_1103(var_200_bool); // 0x92 NEW_2
	var_201_bool = var_200_bool == 0; // 0x94 Not
	if(var_201_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_202_bool = var_199_string == var_2_object; // 0x97 Eq
	if(var_202_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_203_string = ""; var_204_bool = 0; // 0x9a PushV
	var_203_string = var_199_string; // 0x9b Mov
	var_205_string = ""; // 0x9c PushS
	var_206_bool = var_199_string == var_205_string; // 0x9d Eq
	if(var_206_bool == 0) goto Label_161; // 0x9e JumpB
	var_204_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_1004(var_203_string, var_204_bool); // 0xa2 NEW_2
	var_2_object = var_199_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_204_bool = 1; // 0xa1 MovB
}


func_1041(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x411 PushV
	self(var_101_object); // 0x412 Func
	var_99_object = var_101_object; // 0x414 Mov
	return 2; // 0x415 Return
}


func_657()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x291 PushV
	WaitForAnimEnd(); // 0x292 Func
	var_23_bool = 0; // 0x294 PushV
	func_760(var_23_bool); // 0x295 NEW_2
	var_24_bool = var_23_bool == 0; // 0x297 Not
	if(var_24_bool == 0) goto Label_666; // 0x298 JumpB
	return 12; // 0x299 Return
	
Label_666:
	var_25_int = 0; // 0x29a PushV
	func_1078(var_25_int); // 0x29b NEW_2
	var_17_int = var_25_int; // 0x29c Mov
	var_18_int = 0; // 0x29e MovI
	
Label_671:
	var_38_bool = 0; // 0x29f PushV
	var_38_bool = 0; // 0x2a0 MovB
	var_39_int = 5; // 0x2a1 PushI
	var_40_bool = var_18_int < var_39_int; // 0x2a2 LT
	if(var_40_bool == 0) goto Label_681; // 0x2a3 JumpB
	var_41_bool = 0; // 0x2a4 PushV
	func_760(var_41_bool); // 0x2a5 NEW_2
	if(var_41_bool == 0) goto Label_681; // 0x2a7 JumpB
	var_38_bool = 1; // 0x2a8 MovB
	
Label_681:
	if(var_38_bool == 0) goto Label_723; // 0x2a9 JumpB
	var_42_bool = var_17_int == 0; // 0x2aa Not
	if(var_42_bool == 0) goto Label_691; // 0x2ab JumpB
	var_43_int = 3; // 0x2ac PushI
	Sleep(var_43_int, var_19_bool); // 0x2ad Func
	var_44_bool = var_19_bool == 0; // 0x2af Not
	if(var_44_bool == 0) goto Label_690; // 0x2b0 JumpB
	goto Label_723; // 0x2b1 Jump
	
Label_723:
	ResetAAS(); // 0x2d3 Func
	return 12; // 0x2d5 Return
	
Label_690:
	goto Label_712; // 0x2b2 Jump
	
Label_712:
	var_45_bool = 0; // 0x2c8 PushV
	func_726(var_45_bool); // 0x2c9 NEW_2
	var_46_bool = var_45_bool == 0; // 0x2cb Not
	if(var_46_bool == 0) goto Label_718; // 0x2cc JumpB
	goto Label_723; // 0x2cd Jump
	
Label_718:
	ResetAAS(); // 0x2ce Func
	var_47_int = 1; // 0x2d0 PushI
	var_18_int = var_18_int + var_47_int; // 0x2d1 Add2
	goto Label_671; // 0x2d2 Jump
	
Label_691:
	irand(var_20_int, var_17_int); // 0x2b3 Func
	var_48_int = 5; // 0x2b5 PushI
	irand(var_21_int, var_48_int); // 0x2b6 Func
	var_49_int = 0; // 0x2b8 PushI
	var_50_bool = var_21_int != var_49_int; // 0x2b9 Neq
	if(var_50_bool == 0) goto Label_700; // 0x2ba JumpB
	var_20_int = 0; // 0x2bb MovI
	
Label_700:
	var_51_string = "all"; // 0x2bc PushS
	var_52_string = ""; var_53_int = 0; // 0x2bd PushV
	var_53_int = var_20_int; // 0x2be Mov
	func_1071(var_52_string, var_53_int); // 0x2bf NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2c1 Func
	WaitForAnimEnd(var_22_bool); // 0x2c3 Func
	var_54_bool = var_22_bool == 0; // 0x2c5 Not
	if(var_54_bool == 0) goto Label_712; // 0x2c6 JumpB
	goto Label_723; // 0x2c7 Jump
}


func_1047(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x417 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x418 Or
	var_68_float = sqrt(var_69_int); // 0x419 Sqrt2
	var_70_float = 0.0; // 0x41a PushF
	var_71_bool = var_68_float < var_70_float; // 0x41b LT
	if(var_71_bool == 0) goto Label_1055; // 0x41c JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x41d MovV
	return 2; // 0x41e Return
	
Label_1055:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x41f Div2
	return 2; // 0x420 Return
}


func_537()
{
	var_259_float = 0; var_260_float = 0; // 0x219 PushV
	var_261_int = 8; // 0x21a PushI
	var_262_int = 16; // 0x21b PushI
	rand(var_260_float, var_261_int, var_262_int); // 0x21c Func
	var_263_int = 10; // 0x21e PushI
	SetTimer(var_263_int, var_260_float); // 0x21f Func
	return 2; // 0x221 Return
}


func_1180(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x49c PushV
	var_91_string = "branch"; // 0x49d PushS
	GetVariable(var_91_string, var_90_int); // 0x49e Func
	var_92_int = 0; // 0x4a0 PushI
	var_93_bool = var_90_int == var_92_int; // 0x4a1 Eq
	if(var_93_bool == 0) goto Label_1190; // 0x4a2 JumpB
	var_88_int = 1; // 0x4a3 MovI
	return 2; // 0x4a4 Return
	
Label_1190:
	var_94_int = 1; // 0x4a6 PushI
	var_95_bool = var_90_int == var_94_int; // 0x4a7 Eq
	if(var_95_bool == 0) goto Label_1195; // 0x4a8 JumpB
	var_88_int = 2; // 0x4a9 MovI
	return 2; // 0x4aa Return
	
Label_1195:
	var_88_int = 3; // 0x4ab MovI
	return 2; // 0x4ac Return
}


func_1057(var_219_int, var_220_string)
{
	var_221_int = 0; var_222_int = 0; // 0x421 PushV
	GetVariable(var_220_string, var_222_int); // 0x422 Func
	var_219_int = var_222_int; // 0x424 Mov
	return 2; // 0x425 Return
}


func_546()
{
	var_258_int = 10; // 0x222 PushI
	KillTimer(var_258_int); // 0x223 Func
	return 0; // 0x225 Return
}


func_1062(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x426 PushV
	GetGameTime(var_154_float); // 0x427 Func
	var_155_int = 1; // 0x429 PushI
	var_156_int = 0; // 0x42a PushV
	var_157_int = 24; // 0x42b PushI
	var_156_int = var_154_float / var_154_float; // 0x42c Div2
	var_152_int = var_155_int + var_156_int; // 0x42d Add2
	return 2; // 0x42e Return
}


func_1071(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x42f PushV
	var_34_string = "idle"; // 0x430 MovS
	var_35_int = var_32_int; // 0x431 Push
	if(var_35_int == 0) goto Label_1076; // 0x432 JumpB
	var_34_string = var_34_string + var_32_int; // 0x433 Add2
	
Label_1076:
	var_31_string = var_34_string; // 0x434 Mov
	return 2; // 0x435 Return
}


func_432(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x1b1 PushV
	var_27_object = var_25_object; // 0x1b2 Mov
	TaskCall(0); // 0x1b3 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x1b4 NEW_2
	TaskReturn(); // 0x1b5 TaskReturn
	return 0; // 0x1b7 Return
}


func_945(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x3b1 PushV
	var_151_string = "d"; // 0x3b2 PushS
	var_152_int = 0; // 0x3b3 PushV
	func_1062(var_152_int); // 0x3b4 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x3b6 Add
	var_159_string = "m"; // 0x3b7 PushS
	var_146_string = var_158_int + var_159_string; // 0x3b8 Add2
	var_147_int = 0; // 0x3b9 MovI
	
Label_954:
	var_160_int = 1; // 0x3ba PushI
	if(var_160_int == 0) goto Label_967; // 0x3bb JumpB
	var_161_int = 1; // 0x3bc PushI
	var_162_int = var_147_int + var_161_int; // 0x3bd Add
	var_163_int = var_146_string + var_162_int; // 0x3be Add
	HasProperty(var_163_int, var_148_bool); // 0x3bf ObjFunc
	var_164_bool = var_148_bool == 0; // 0x3c1 Not
	if(var_164_bool == 0) goto Label_964; // 0x3c2 JumpB
	goto Label_967; // 0x3c3 Jump
	
Label_967:
	var_165_bool = var_147_int == 0; // 0x3c7 Not
	if(var_165_bool == 0) goto Label_971; // 0x3c8 JumpB
	var_139_bool = 0; // 0x3c9 MovB
	return 10; // 0x3ca Return
	
Label_971:
	var_149_int = 0; // 0x3cb MovI
	var_166_int = 1; // 0x3cc PushI
	var_167_bool = var_147_int > var_166_int; // 0x3cd GT
	if(var_167_bool == 0) goto Label_977; // 0x3ce JumpB
	irand(var_149_int, var_147_int); // 0x3cf Func
	
Label_977:
	var_168_int = 1; // 0x3d1 PushI
	var_169_int = var_149_int + var_168_int; // 0x3d2 Add
	var_170_int = var_146_string + var_169_int; // 0x3d3 Add
	GetProperty(var_170_int, var_150_string); // 0x3d4 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x3d6 PushV
	var_172_string = var_150_string; // 0x3d7 Mov
	func_1019(var_171_bool, var_172_string); // 0x3d8 NEW_2
	var_139_bool = var_171_bool; // 0x3d9 Mov
	return 10; // 0x3db Return
	
Label_964:
	var_173_int = 1; // 0x3c4 PushI
	var_147_int = var_147_int + var_173_int; // 0x3c5 Add2
	goto Label_954; // 0x3c6 Jump
}


func_1078(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x436 PushV
	var_28_int = 0; // 0x437 MovI
	
Label_1080:
	var_30_string = "all"; // 0x438 PushS
	var_31_string = ""; var_32_int = 0; // 0x439 PushV
	var_32_int = var_28_int; // 0x43a Mov
	func_1071(var_31_string, var_32_int); // 0x43b NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x43d Func
	var_36_bool = var_29_bool == 0; // 0x43f Not
	if(var_36_bool == 0) goto Label_1090; // 0x440 JumpB
	goto Label_1093; // 0x441 Jump
	
Label_1093:
	var_25_int = var_28_int; // 0x445 Mov
	return 4; // 0x446 Return
	
Label_1090:
	var_37_int = 1; // 0x442 PushI
	var_28_int = var_28_int + var_37_int; // 0x443 Add2
	goto Label_1080; // 0x444 Jump
}


func_833()
{
	var_251_bool = 0; var_252_bool = 0; // 0x341 PushV
	CameraSwitchToNormal(); // 0x342 Func
	var_253_bool = 0; // 0x344 PushV
	func_1103(var_253_bool); // 0x345 NEW_2
	if(var_253_bool == 0) goto Label_841; // 0x347 JumpB
	goto Label_849; // 0x348 Jump
	
Label_849:
	return 2; // 0x351 Return
	
Label_841:
	var_254_string = "head"; // 0x349 PushS
	HasAnimationTrack(var_252_bool, var_254_string); // 0x34a Func
	var_255_bool = var_252_bool; // 0x34c Push
	if(var_255_bool == 0) goto Label_849; // 0x34d JumpB
	var_256_string = "head"; // 0x34e PushS
	UnlookAsync(var_256_string); // 0x34f Func
}


func_1095(var_85_int)
{
	var_85_int = 515592; // 0x447 MovI
	return 0; // 0x448 Return
}


func_1097(var_84_int)
{
	var_84_int = 511961; // 0x449 MovI
	return 0; // 0x44a Return
}


func_1099(var_86_string)
{
	var_86_string = "ui/NPC_Burah.png"; // 0x44b MovS
	return 0; // 0x44c Return
}


func_588()
{
	func_728(); // 0x24d NEW_2
	func_546(); // 0x250 NEW_2
	lshStopSpeech(); // 0x252 Func
	lshStopAnimation(); // 0x254 Func
	StopAsync(); // 0x256 Func
	Hold(); // 0x258 Func
	return 0; // 0x25a Return
}


func_1101(var_87_string)
{
	var_87_string = "ui/NPC_Burah_b.png"; // 0x44d MovS
	return 0; // 0x44e Return
}


func_1103(var_79_bool)
{
	var_79_bool = 1; // 0x44f MovB
	return 0; // 0x450 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_114; // 0x56 JumpB
	var_199_string = ""; // 0x57 PushV
	var_199_string = "Neutral"; // 0x58 MovS
	func_144(var_193_object, var_199_string); // 0x59 NEW_2
	var_216_int = 513949; // 0x5b PushI
	SetMessage(var_216_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_217_bool = 0; var_218_object = Obj(); // 0x60 PushV
	var_218_object = var_1_object; // 0x61 MovT
	func_1114(var_218_object); // 0x62 NEW_2
	if(var_217_bool == 0) goto Label_106; // 0x64 JumpB
	var_225_int = 513950; // 0x65 PushI
	var_226_int = 15186; // 0x66 PushI
	var_227_int = 15185; // 0x67 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x68 TObjFunc
	
Label_106:
	var_228_int = 513980; // 0x6a PushI
	var_229_int = -1; // 0x6b PushI
	var_230_int = 15215; // 0x6c PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_231_bool = 0; // 0x72 PushV
	func_1103(var_231_bool); // 0x73 NEW_2
	if(var_231_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_232_string = var_3_string; // 0x78 PushT
	if(var_232_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_233_string = ""; // 0x7b PushV
	var_233_string = var_2_object; // 0x7c MovT
	func_988(var_233_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_244_string = "all"; // 0x81 PushS
	var_245_string = "idle"; // 0x82 PushS
	PlayAnimation(var_244_string, var_245_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_246_string = var_3_string; // 0x87 PushT
	if(var_246_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_247_string = "all"; // 0x8a PushS
	var_248_string = "idle"; // 0x8b PushS
	PlayAnimation(var_247_string, var_248_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_850(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x352 PushV
	var_106_string = "voice_common"; // 0x353 PushS
	GetVariable(var_106_string, var_104_int); // 0x354 Func
	var_107_int = var_104_int; // 0x356 Push
	if(var_107_int == 0) goto Label_888; // 0x357 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x358 PushV
	var_109_object = var_98_object; // 0x359 Mov
	func_908(var_109_object); // 0x35a NEW_2
	var_138_bool = var_108_bool == 0; // 0x35c Not
	if(var_138_bool == 0) goto Label_870; // 0x35d JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x35e PushV
	var_140_object = var_98_object; // 0x35f Mov
	func_945(var_140_object); // 0x360 NEW_2
	var_174_bool = var_139_bool == 0; // 0x362 Not
	if(var_174_bool == 0) goto Label_870; // 0x363 JumpB
	var_97_bool = 0; // 0x364 MovB
	return 4; // 0x365 Return
	
Label_870:
	var_175_int = 2; // 0x366 PushI
	irand(var_105_int, var_175_int); // 0x367 Func
	var_176_int = var_105_int; // 0x369 Push
	if(var_176_int == 0) goto Label_883; // 0x36a JumpB
	var_177_string = "voice_common"; // 0x36b PushS
	var_178_int = 1; // 0x36c PushI
	var_179_int = var_104_int + var_178_int; // 0x36d Add
	var_180_int = 3; // 0x36e PushI
	var_181_int = var_179_int / var_180_int; // 0x36f Mod
	SetVariable(var_177_string, var_181_int); // 0x370 Func
	goto Label_887; // 0x372 Jump
	
Label_887:
	goto Label_906; // 0x377 Jump
	
Label_906:
	var_97_bool = 1; // 0x38a MovB
	return 4; // 0x38b Return
	
Label_883:
	var_182_string = "voice_common"; // 0x373 PushS
	var_183_int = 0; // 0x374 PushI
	SetVariable(var_182_string, var_183_int); // 0x375 Func
	
Label_888:
	var_184_bool = 0; var_185_object = Obj(); // 0x378 PushV
	var_185_object = var_98_object; // 0x379 Mov
	func_945(var_185_object); // 0x37a NEW_2
	var_186_bool = var_184_bool == 0; // 0x37c Not
	if(var_186_bool == 0) goto Label_902; // 0x37d JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x37e PushV
	var_188_object = var_98_object; // 0x37f Mov
	func_908(var_188_object); // 0x380 NEW_2
	var_189_bool = var_187_bool == 0; // 0x382 Not
	if(var_189_bool == 0) goto Label_902; // 0x383 JumpB
	var_97_bool = 0; // 0x384 MovB
	return 4; // 0x385 Return
	
Label_902:
	var_190_string = "voice_common"; // 0x386 PushS
	var_191_int = 1; // 0x387 PushI
	SetVariable(var_190_string, var_191_int); // 0x388 Func
}


func_1105()
{
	var_15_string = "d9q05"; // 0x452 PushS
	var_16_int = 2; // 0x453 PushI
	SetVariable(var_15_string, var_16_int); // 0x454 Func
	func_1126(); // 0x457 NEW_2
	return 0; // 0x459 Return
}


func_726(var_45_bool)
{
	var_45_bool = 1; // 0x2d6 MovB
	return 0; // 0x2d7 Return
}


func_728()
{
	StopAnimation(); // 0x2d8 Func
	StopGroup0(); // 0x2da Func
	return 0; // 0x2dc Return
}


func_1114(var_217_bool)
{
	var_219_int = 0; var_220_string = ""; // 0x45b PushV
	var_220_string = "d9q05"; // 0x45c MovS
	func_1057(var_219_int, var_220_string); // 0x45d NEW_2
	var_223_int = 1; // 0x45f PushI
	var_224_bool = var_219_int == var_223_int; // 0x460 Eq
	if(var_224_bool == 0) goto Label_1124; // 0x461 JumpB
	var_217_bool = 1; // 0x462 MovB
	return 0; // 0x463 Return
	
Label_1124:
	var_217_bool = 0; // 0x464 MovB
	return 0; // 0x465 Return
}


func_603()
{
	StopGroup0(); // 0x25b Func
	func_546(); // 0x25e NEW_2
	var_8_string = ""; // 0x260 PushV
	var_8_string = "Neutral"; // 0x261 MovS
	func_988(var_8_string); // 0x262 NEW_2
	func_537(); // 0x265 NEW_2
	return 0; // 0x267 Return
}


func_988(var_233_string)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0; // 0x3dc PushV
	lshHasAnimation(var_237_bool, var_233_string); // 0x3dd Func
	var_240_bool = var_237_bool; // 0x3df Push
	if(var_240_bool == 0) goto Label_999; // 0x3e0 JumpB
	lshGetAnimTimes(var_233_string, var_238_float, var_239_float); // 0x3e1 Func
	var_241_bool = 0; // 0x3e3 PushB
	lshPlayAnimation(var_238_float, var_239_float, var_241_bool); // 0x3e4 Func
	goto Label_1003; // 0x3e6 Jump
	
Label_1003:
	return 6; // 0x3eb Return
	
Label_999:
	var_242_string = "Can't find lsh animation : "; // 0x3e7 PushS
	var_243_int = var_242_string + var_233_string; // 0x3e8 Add
	Trace(var_243_int); // 0x3e9 Func
}


func_733(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x2dd PushV
	GetPosition(var_27_cvector); // 0x2de Func
	GetPosition(var_28_cvector); // 0x2e0 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2e2 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2e3 Or2
	return 6; // 0x2e4 Return
}


func_481(var_0_object)
{
	var_7_bool = 0; // 0x1e1 PushV
	func_760(var_7_bool); // 0x1e2 NEW_2
	var_10_bool = var_7_bool == 0; // 0x1e4 Not
	if(var_10_bool == 0) goto Label_488; // 0x1e5 JumpB
	Hold(); // 0x1e6 Func
	
Label_488:
	GetDirection(var_0_object); // 0x1e8 Func
	
Label_490:
	func_657(); // 0x1eb NEW_2
	goto Label_490; // 0x1ed Jump
}


func_741(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x2e5 PushV
	GetPosition(var_20_cvector); // 0x2e6 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x2e8 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x2e9 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x2ea PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x2eb Func
	var_15_bool = var_22_bool; // 0x2ed Mov
	return 6; // 0x2ee Return
}


func_1126()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x466 PushV
	var_19_int = 766; // 0x467 PushI
	var_20_int = 2; // 0x468 PushI
	var_21_int = 540063; // 0x469 PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x46a Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x46c PushV
	var_23_object = var_18_object; // 0x46d Mov
	var_24_int = 764; // 0x46e MovI
	func_1152(var_22_bool, var_23_object, var_24_int); // 0x46f NEW_2
	return 2; // 0x471 Return
}


func_1004(var_203_string, var_204_bool)
{
	var_207_bool = 0; var_208_float = 0; var_209_float = 0; var_210_bool = 0; var_211_float = 0; var_212_float = 0; // 0x3ec PushV
	lshHasAnimation(var_210_bool, var_203_string); // 0x3ed Func
	var_213_bool = var_210_bool; // 0x3ef Push
	if(var_213_bool == 0) goto Label_1014; // 0x3f0 JumpB
	lshGetAnimTimes(var_203_string, var_211_float, var_212_float); // 0x3f1 Func
	lshPlayAnimation(var_211_float, var_212_float, var_204_bool); // 0x3f3 Func
	goto Label_1018; // 0x3f5 Jump
	
Label_1018:
	return 6; // 0x3fa Return
	
Label_1014:
	var_214_string = "Can't find lsh animation : "; // 0x3f6 PushS
	var_215_int = var_214_string + var_203_string; // 0x3f7 Add
	Trace(var_215_int); // 0x3f8 Func
}


func_751(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x2ef PushV
	GetPosition(var_14_cvector); // 0x2f0 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x2f2 PushV
	var_16_cvector = var_14_cvector; // 0x2f3 Mov
	func_741(var_15_bool, var_16_cvector); // 0x2f4 NEW_2
	var_11_bool = var_15_bool; // 0x2f5 Mov
	return 2; // 0x2f7 Return
}


func_495(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x1ef PushV
	var_35_string = "player"; // 0x1f0 PushS
	FindActor(var_34_object, var_35_string); // 0x1f1 Func
	var_36_bool = var_34_object == 0; // 0x1f3 Not
	if(var_36_bool == 0) goto Label_503; // 0x1f4 JumpB
	var_32_bool = 0; // 0x1f5 MovB
	return 2; // 0x1f6 Return
	
Label_503:
	var_37_bool = 0; var_38_object = Obj(); // 0x1f7 PushV
	var_38_object = var_34_object; // 0x1f8 Mov
	func_751(var_38_object); // 0x1f9 NEW_2
	var_32_bool = var_37_bool; // 0x1fa Mov
	return 2; // 0x1fc Return
}


func_1139(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x473 PushV
	GetDiaryRoot(var_33_object); // 0x474 Func
	var_34_bool = var_33_object == 0; // 0x476 Not
	if(var_34_bool == 0) goto Label_1149; // 0x477 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x478 PushS
	Trace(var_35_string); // 0x479 Func
	var_31_object = 0; // 0x47b MovB
	return 2; // 0x47c Return
	
Label_1149:
	var_31_object = var_33_object; // 0x47d Mov
	return 2; // 0x47e Return
}


func_760(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2f8 PushV
	IsLoaded(var_9_bool); // 0x2f9 Func
	var_7_bool = var_9_bool; // 0x2fb Mov
	return 2; // 0x2fc Return
}


func_1019(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x3fb PushV
	var_135_bool = 0; // 0x3fc PushV
	func_1103(var_135_bool); // 0x3fd NEW_2
	if(var_135_bool == 0) goto Label_1032; // 0x3ff JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x400 Func
	var_136_bool = var_134_bool; // 0x402 Push
	if(var_136_bool == 0) goto Label_1032; // 0x403 JumpB
	lshPlaySpeech(var_132_string); // 0x404 Func
	var_131_bool = 1; // 0x406 MovB
	return 2; // 0x407 Return
	
Label_1032:
	var_131_bool = 0; // 0x408 MovB
	return 2; // 0x409 Return
}


func_765(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x2fd PushV
	GetPosition(var_50_cvector); // 0x2fe ObjFunc
	GetEyesHeight(var_49_float); // 0x300 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x302 PushE
	var_58_float = var_58_float + var_49_float; // 0x303 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x304 PopE
	GetPosition(var_51_cvector); // 0x305 Func
	GetEyesHeight(var_49_float); // 0x307 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x309 PushE
	var_59_float = var_59_float + var_49_float; // 0x30a Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x30b PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x30c Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x30d PushE
	var_60_float = 0; // 0x30e MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x30f PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x310 Or
	var_62_float = sqrt(var_61_int); // 0x311 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x312 Div2
	var_53_cvector = -var_52_cvector; // 0x313 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x314 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x315 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x316 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x317 Xor2
	func_1047(var_64_cvector, var_65_cvector); // 0x318 NEW_2
	var_72_int = 25; // 0x31a PushI
	var_73_float = var_64_cvector * var_72_int; // 0x31b Mult
	var_74_int = var_63_float + var_73_float; // 0x31c Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x31d PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x31e Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x31f Add2
	IsOverrideActive(var_56_bool); // 0x320 Func
	var_76_bool = var_56_bool; // 0x322 Push
	if(var_76_bool == 0) goto Label_806; // 0x323 JumpB
	var_37_bool = 0; // 0x324 MovB
	return 18; // 0x325 Return
	
Label_806:
	StopWorld(); // 0x326 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x328 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x32a PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x32b PushE
	Rotate(var_77_float, var_78_float); // 0x32c Func
	var_79_bool = 0; // 0x32e PushV
	func_1103(var_79_bool); // 0x32f NEW_2
	if(var_79_bool == 0) goto Label_819; // 0x331 JumpB
	goto Label_827; // 0x332 Jump
	
Label_827:
	CameraWaitForPlayFinish(); // 0x33b Func
	ResumeWorld(); // 0x33d Func
	var_37_bool = 1; // 0x33f MovB
	return 18; // 0x340 Return
	
Label_819:
	var_80_string = "head"; // 0x333 PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x334 Func
	var_81_bool = var_57_bool; // 0x336 Push
	if(var_81_bool == 0) goto Label_827; // 0x337 JumpB
	var_82_string = "head"; // 0x338 PushS
	LookAsyncCamera(var_82_string); // 0x339 Func
}


func_510(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1fe PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1ff PushE
	RotateAsync(var_84_float, var_85_float); // 0x200 Func
	return 0; // 0x202 Return
}


