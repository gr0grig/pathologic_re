task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xa5 PushI
	if(var_14_int == 0) goto Label_438; // 0xa6 JumpB
	func_832(); // 0xa8 NEW_2
	var_16_int = 43083; // 0xaa PushI
	var_17_bool = var_13_bool == var_16_int; // 0xab Eq
	if(var_17_bool == 0) goto Label_178; // 0xac JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xad PushV
	var_18_object = var_1_object; // 0xae MovT
	var_19_object = var_0_object; // 0xaf MovT
	func_908(); // 0xb0 NEW_2
	
Label_178:
	var_22_int = 43082; // 0xb2 PushI
	var_23_bool = var_12_bool == var_22_int; // 0xb3 Eq
	if(var_23_bool == 0) goto Label_211; // 0xb4 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xb5 PushV
	var_24_object = var_1_object; // 0xb6 MovT
	var_25_object = var_0_object; // 0xb7 MovT
	func_901(); // 0xb8 NEW_2
	var_36_string = ""; // 0xba PushV
	var_36_string = "Neutral"; // 0xbb MovS
	func_142(var_13_bool, var_36_string); // 0xbc NEW_2
	var_53_int = 540992; // 0xbe PushI
	SetMessage(var_53_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_54_bool = 0; var_55_object = Obj(); // 0xc3 PushV
	var_55_object = var_1_object; // 0xc4 MovT
	func_914(var_55_object); // 0xc5 NEW_2
	if(var_54_bool == 0) goto Label_205; // 0xc7 JumpB
	var_62_int = 540993; // 0xc8 PushI
	var_63_int = 43484; // 0xc9 PushI
	var_64_int = 43083; // 0xca PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xcb TObjFunc
	
Label_205:
	var_65_int = 541006; // 0xcd PushI
	var_66_int = -1; // 0xce PushI
	var_67_int = 43099; // 0xcf PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xd0 TObjFunc
	return 0; // 0xd2 Return
	
Label_211:
	var_68_int = 43484; // 0xd3 PushI
	var_69_bool = var_12_bool == var_68_int; // 0xd4 Eq
	if(var_69_bool == 0) goto Label_234; // 0xd5 JumpB
	var_70_string = ""; // 0xd6 PushV
	var_70_string = "Neutral"; // 0xd7 MovS
	func_142(var_13_bool, var_70_string); // 0xd8 NEW_2
	var_71_int = 541338; // 0xda PushI
	SetMessage(var_71_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_72_int = 541378; // 0xdf PushI
	var_73_int = 43529; // 0xe0 PushI
	var_74_int = 43528; // 0xe1 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xe2 TObjFunc
	var_75_int = 541339; // 0xe4 PushI
	var_76_int = 43486; // 0xe5 PushI
	var_77_int = 43485; // 0xe6 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_78_int = 43529; // 0xea PushI
	var_79_bool = var_12_bool == var_78_int; // 0xeb Eq
	if(var_79_bool == 0) goto Label_257; // 0xec JumpB
	var_80_string = ""; // 0xed PushV
	var_80_string = "Neutral"; // 0xee MovS
	func_142(var_13_bool, var_80_string); // 0xef NEW_2
	var_81_int = 541379; // 0xf1 PushI
	SetMessage(var_81_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_82_int = 541381; // 0xf6 PushI
	var_83_int = 43532; // 0xf7 PushI
	var_84_int = 43531; // 0xf8 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xf9 TObjFunc
	var_85_int = 541380; // 0xfb PushI
	var_86_int = 43535; // 0xfc PushI
	var_87_int = 43530; // 0xfd PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_88_int = 43532; // 0x101 PushI
	var_89_bool = var_12_bool == var_88_int; // 0x102 Eq
	if(var_89_bool == 0) goto Label_280; // 0x103 JumpB
	var_90_string = ""; // 0x104 PushV
	var_90_string = "Neutral"; // 0x105 MovS
	func_142(var_13_bool, var_90_string); // 0x106 NEW_2
	var_91_int = 541382; // 0x108 PushI
	SetMessage(var_91_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_92_int = 541383; // 0x10d PushI
	var_93_int = 43537; // 0x10e PushI
	var_94_int = 43533; // 0x10f PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x110 TObjFunc
	var_95_int = 541384; // 0x112 PushI
	var_96_int = 43535; // 0x113 PushI
	var_97_int = 43534; // 0x114 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x115 TObjFunc
	return 0; // 0x117 Return
	
Label_280:
	var_98_int = 43535; // 0x118 PushI
	var_99_bool = var_12_bool == var_98_int; // 0x119 Eq
	if(var_99_bool == 0) goto Label_298; // 0x11a JumpB
	var_100_string = ""; // 0x11b PushV
	var_100_string = "Neutral"; // 0x11c MovS
	func_142(var_13_bool, var_100_string); // 0x11d NEW_2
	var_101_int = 541385; // 0x11f PushI
	SetMessage(var_101_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_102_int = 541386; // 0x124 PushI
	var_103_int = 43539; // 0x125 PushI
	var_104_int = 43536; // 0x126 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_105_int = 43537; // 0x12a PushI
	var_106_bool = var_12_bool == var_105_int; // 0x12b Eq
	if(var_106_bool == 0) goto Label_321; // 0x12c JumpB
	var_107_string = ""; // 0x12d PushV
	var_107_string = "Neutral"; // 0x12e MovS
	func_142(var_13_bool, var_107_string); // 0x12f NEW_2
	var_108_int = 541387; // 0x131 PushI
	SetMessage(var_108_int); // 0x132 TObjFunc
	ClearReplies(); // 0x134 TObjFunc
	var_109_int = 541388; // 0x136 PushI
	var_110_int = 43539; // 0x137 PushI
	var_111_int = 43538; // 0x138 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x139 TObjFunc
	var_112_int = 542763; // 0x13b PushI
	var_113_int = 45184; // 0x13c PushI
	var_114_int = 45183; // 0x13d PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x13e TObjFunc
	return 0; // 0x140 Return
	
Label_321:
	var_115_int = 45184; // 0x141 PushI
	var_116_bool = var_12_bool == var_115_int; // 0x142 Eq
	if(var_116_bool == 0) goto Label_339; // 0x143 JumpB
	var_117_string = ""; // 0x144 PushV
	var_117_string = "Neutral"; // 0x145 MovS
	func_142(var_13_bool, var_117_string); // 0x146 NEW_2
	var_118_int = 542764; // 0x148 PushI
	SetMessage(var_118_int); // 0x149 TObjFunc
	ClearReplies(); // 0x14b TObjFunc
	var_119_int = 542765; // 0x14d PushI
	var_120_int = 45186; // 0x14e PushI
	var_121_int = 45185; // 0x14f PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_122_int = 45186; // 0x153 PushI
	var_123_bool = var_12_bool == var_122_int; // 0x154 Eq
	if(var_123_bool == 0) goto Label_357; // 0x155 JumpB
	var_124_string = ""; // 0x156 PushV
	var_124_string = "Neutral"; // 0x157 MovS
	func_142(var_13_bool, var_124_string); // 0x158 NEW_2
	var_125_int = 542766; // 0x15a PushI
	SetMessage(var_125_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_126_int = 542767; // 0x15f PushI
	var_127_int = 43486; // 0x160 PushI
	var_128_int = 45187; // 0x161 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_129_int = 43539; // 0x165 PushI
	var_130_bool = var_12_bool == var_129_int; // 0x166 Eq
	if(var_130_bool == 0) goto Label_380; // 0x167 JumpB
	var_131_string = ""; // 0x168 PushV
	var_131_string = "Neutral"; // 0x169 MovS
	func_142(var_13_bool, var_131_string); // 0x16a NEW_2
	var_132_int = 541389; // 0x16c PushI
	SetMessage(var_132_int); // 0x16d TObjFunc
	ClearReplies(); // 0x16f TObjFunc
	var_133_int = 541390; // 0x171 PushI
	var_134_int = 43486; // 0x172 PushI
	var_135_int = 43541; // 0x173 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x174 TObjFunc
	var_136_int = 541392; // 0x176 PushI
	var_137_int = 43486; // 0x177 PushI
	var_138_int = 43545; // 0x178 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x179 TObjFunc
	return 0; // 0x17b Return
	
Label_380:
	var_139_int = 43486; // 0x17c PushI
	var_140_bool = var_12_bool == var_139_int; // 0x17d Eq
	if(var_140_bool == 0) goto Label_403; // 0x17e JumpB
	var_141_string = ""; // 0x17f PushV
	var_141_string = "Neutral"; // 0x180 MovS
	func_142(var_13_bool, var_141_string); // 0x181 NEW_2
	var_142_int = 541340; // 0x183 PushI
	SetMessage(var_142_int); // 0x184 TObjFunc
	ClearReplies(); // 0x186 TObjFunc
	var_143_int = 541341; // 0x188 PushI
	var_144_int = 43488; // 0x189 PushI
	var_145_int = 43487; // 0x18a PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x18b TObjFunc
	var_146_int = 541393; // 0x18d PushI
	var_147_int = -1; // 0x18e PushI
	var_148_int = 43547; // 0x18f PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x190 TObjFunc
	return 0; // 0x192 Return
	
Label_403:
	var_149_int = 43488; // 0x193 PushI
	var_150_bool = var_12_bool == var_149_int; // 0x194 Eq
	if(var_150_bool == 0) goto Label_426; // 0x195 JumpB
	var_151_string = ""; // 0x196 PushV
	var_151_string = "Neutral"; // 0x197 MovS
	func_142(var_13_bool, var_151_string); // 0x198 NEW_2
	var_152_int = 541342; // 0x19a PushI
	SetMessage(var_152_int); // 0x19b TObjFunc
	ClearReplies(); // 0x19d TObjFunc
	var_153_int = 541343; // 0x19f PushI
	var_154_int = -1; // 0x1a0 PushI
	var_155_int = 43489; // 0x1a1 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x1a2 TObjFunc
	var_156_int = 541391; // 0x1a4 PushI
	var_157_int = -1; // 0x1a5 PushI
	var_158_int = 43543; // 0x1a6 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x1a7 TObjFunc
	return 0; // 0x1a9 Return
	
Label_426:
	var_3_string = 1; // 0x1aa TMovB
	var_159_bool = 0; // 0x1ab PushV
	func_951(var_159_bool); // 0x1ac NEW_2
	if(var_159_bool == 0) goto Label_434; // 0x1ae JumpB
	lshStopAnimation(); // 0x1af Func
	goto Label_436; // 0x1b1 Jump
	
Label_436:
	return 0; // 0x1b4 Return
	
Label_434:
	StopAnimation(); // 0x1b2 Func
	
Label_438:
	return 0; // 0x1b6 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_590(var_11_bool, var_12_object); // 0x1bf NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x1c1 PushV
	var_17_object = var_12_object; // 0x1c2 Mov
	TaskCall(0); // 0x1c3 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x1c4 NEW_2
	TaskReturn(); // 0x1c5 TaskReturn
	return 0; // 0x1c7 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1ef PushS
	var_14_bool = var_12_string == var_13_string; // 0x1f0 Eq
	if(var_14_bool == 0) goto Label_501; // 0x1f1 JumpB
	func_474(var_12_string); // 0x1f3 NEW_2
	
Label_501:
	return 0; // 0x1f5 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1f6 PushT
	if(var_12_int == 0) goto Label_507; // 0x1f7 JumpB
	func_590(var_10_bool, var_11_bool); // 0x1f9 NEW_2
	
Label_507:
	var_16_bool = 0; // 0x1fb PushV
	var_16_bool = 0; // 0x1fc MovB
	var_17_int = var_5_int; // 0x1fd PushT
	if(var_17_int == 0) goto Label_516; // 0x1fe JumpB
	var_18_bool = 0; // 0x1ff PushV
	func_523(var_18_bool); // 0x200 NEW_2
	if(var_18_bool == 0) goto Label_516; // 0x202 JumpB
	var_16_bool = 1; // 0x203 MovB
	
Label_516:
	if(var_16_bool == 0) goto Label_522; // 0x204 JumpB
	var_19_object = Obj(); // 0x205 PushV
	func_839(var_19_object); // 0x206 NEW_2
	RemoveActor(var_19_object); // 0x208 Func
	
Label_522:
	return 0; // 0x20a Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x238 PushI
	var_14_bool = var_12_int == var_13_int; // 0x239 Eq
	if(var_14_bool == 0) goto Label_589; // 0x23a JumpB
	var_15_bool = 0; // 0x23b PushV
	func_552(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x23c NEW_2
	if(var_15_bool == 0) goto Label_583; // 0x23e JumpB
	var_28_bool = var_2_object == 0; // 0x23f Not
	if(var_28_bool == 0) goto Label_582; // 0x240 JumpB
	var_29_object = Obj(); // 0x241 PushV
	var_29_object = var_4_bool; // 0x242 MovT
	func_821(var_29_object); // 0x243 NEW_2
	var_2_object = 1; // 0x245 TMovB
	
Label_582:
	goto Label_589; // 0x246 Jump
	
Label_589:
	return 0; // 0x24d Return
	
Label_583:
	var_36_object = var_2_object; // 0x247 PushT
	if(var_36_object == 0) goto Label_589; // 0x248 JumpB
	var_37_string = "head"; // 0x249 PushS
	UnlookAsync(var_37_string); // 0x24a Func
	var_2_object = 0; // 0x24c TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x1b7 PushV
	var_12_float = 300; // 0x1b8 MovI
	var_13_float = 100; // 0x1b9 MovI
	func_456(var_11_bool, var_12_float, var_13_float); // 0x1ba NEW_2
	return 0; // 0x1bc Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_703(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_945(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_943(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_947(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_949(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_926(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_87_bool = var_24_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_17_object; // 0x30 Mov
	var_89_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_157_bool = var_26_bool == 0; // 0x38 Not
	if(var_157_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_158_object = Obj(); // 0x3f PushV
	var_158_object = var_17_object; // 0x40 Mov
	func_772(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_772()
{
	var_159_bool = 0; var_160_bool = 0; // 0x304 PushV
	var_161_bool = 1; // 0x305 PushB
	CameraSwitchToNormal(var_161_bool); // 0x306 Func
	var_162_bool = 0; // 0x308 PushV
	func_951(var_162_bool); // 0x309 NEW_2
	if(var_162_bool == 0) goto Label_781; // 0x30b JumpB
	goto Label_789; // 0x30c Jump
	
Label_789:
	return 2; // 0x315 Return
	
Label_781:
	var_163_string = "head"; // 0x30d PushS
	HasAnimationTrack(var_160_bool, var_163_string); // 0x30e Func
	var_164_bool = var_160_bool; // 0x310 Push
	if(var_164_bool == 0) goto Label_789; // 0x311 JumpB
	var_165_string = "head"; // 0x312 PushS
	UnlookAsync(var_165_string); // 0x313 Func
}


func_901()
{
	var_97_string = ""; var_98_bool = 0; // 0x386 PushV
	var_97_string = "itheater@door1"; // 0x387 MovS
	var_98_bool = 0; // 0x388 MovB
	func_860(var_97_string, var_98_bool); // 0x389 NEW_2
	return 0; // 0x38b Return
}


func_523(var_18_bool)
{
	var_18_bool = 1; // 0x20b MovB
	return 0; // 0x20c Return
}


func_908()
{
	var_20_string = "ook12TWhitemask1"; // 0x38d PushS
	var_21_int = 1; // 0x38e PushI
	SetVariable(var_20_string, var_21_int); // 0x38f Func
	return 0; // 0x391 Return
}


func_525(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x20e PushV
	func_698(var_23_bool); // 0x20f NEW_2
	var_26_bool = var_23_bool == 0; // 0x211 Not
	if(var_26_bool == 0) goto Label_532; // 0x212 JumpB
	return 0; // 0x213 Return
	
Label_532:
	var_27_string = "player"; // 0x214 PushS
	FindActor(var_17_bool, var_27_string); // 0x215 Func
	var_2_object = 0; // 0x217 TMovB
	var_3_string = 0; // 0x218 TMovB
	var_0_object = var_21_float; // 0x219 TMov
	var_1_object = var_22_float; // 0x21a TMov
	var_28_int = 10; // 0x21b PushI
	var_29_float = 1.0; // 0x21c PushF
	SetTimer(var_28_int, var_29_float); // 0x21d Func
	func_604(); // 0x220 NEW_2
	var_81_bool = var_3_string == 0; // 0x222 Not
	if(var_81_bool == 0) goto Label_551; // 0x223 JumpB
	var_82_int = 10; // 0x224 PushI
	KillTimer(var_82_int); // 0x225 Func
	
Label_551:
	return 0; // 0x227 Return
}


func_142(var_2_object, var_107_string)
{
	var_108_bool = 0; // 0x8f PushV
	func_951(var_108_bool); // 0x90 NEW_2
	var_109_bool = var_108_bool == 0; // 0x92 Not
	if(var_109_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_110_bool = var_107_string == var_2_object; // 0x95 Eq
	if(var_110_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_111_string = ""; var_112_bool = 0; // 0x98 PushV
	var_111_string = var_107_string; // 0x99 Mov
	var_113_string = ""; // 0x9a PushS
	var_114_bool = var_107_string == var_113_string; // 0x9b Eq
	if(var_114_bool == 0) goto Label_159; // 0x9c JumpB
	var_112_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_806(var_111_string, var_112_bool); // 0xa0 NEW_2
	var_2_object = var_107_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_112_bool = 1; // 0x9f MovB
}


func_914(var_125_bool)
{
	var_127_int = 0; var_128_string = ""; // 0x393 PushV
	var_128_string = "ook12TWhitemask1"; // 0x394 MovS
	func_855(var_127_int, var_128_string); // 0x395 NEW_2
	var_131_int = 0; // 0x397 PushI
	var_132_bool = var_127_int == var_131_int; // 0x398 Eq
	if(var_132_bool == 0) goto Label_924; // 0x399 JumpB
	var_125_bool = 1; // 0x39a MovB
	return 0; // 0x39b Return
	
Label_924:
	var_125_bool = 0; // 0x39c MovB
	return 0; // 0x39d Return
}


func_790(var_141_string)
{
	var_142_bool = 0; var_143_float = 0; var_144_float = 0; var_145_bool = 0; var_146_float = 0; var_147_float = 0; // 0x316 PushV
	lshHasAnimation(var_145_bool, var_141_string); // 0x317 Func
	var_148_bool = var_145_bool; // 0x319 Push
	if(var_148_bool == 0) goto Label_801; // 0x31a JumpB
	lshGetAnimTimes(var_141_string, var_146_float, var_147_float); // 0x31b Func
	var_149_bool = 0; // 0x31d PushB
	lshPlayAnimation(var_146_float, var_147_float, var_149_bool); // 0x31e Func
	goto Label_805; // 0x320 Jump
	
Label_805:
	return 6; // 0x325 Return
	
Label_801:
	var_150_string = "Can't find lsh animation : "; // 0x321 PushS
	var_151_int = var_150_string + var_141_string; // 0x322 Add
	Trace(var_151_int); // 0x323 Func
}


func_926(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x39e PushV
	var_82_string = "branch"; // 0x39f PushS
	GetVariable(var_82_string, var_81_int); // 0x3a0 Func
	var_83_int = 0; // 0x3a2 PushI
	var_84_bool = var_81_int == var_83_int; // 0x3a3 Eq
	if(var_84_bool == 0) goto Label_936; // 0x3a4 JumpB
	var_79_int = 1; // 0x3a5 MovI
	return 2; // 0x3a6 Return
	
Label_936:
	var_85_int = 1; // 0x3a8 PushI
	var_86_bool = var_81_int == var_85_int; // 0x3a9 Eq
	if(var_86_bool == 0) goto Label_941; // 0x3aa JumpB
	var_79_int = 2; // 0x3ab MovI
	return 2; // 0x3ac Return
	
Label_941:
	var_79_int = 3; // 0x3ad MovI
	return 2; // 0x3ae Return
}


func_806(var_111_string, var_112_bool)
{
	var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_bool = 0; var_119_float = 0; var_120_float = 0; // 0x326 PushV
	lshHasAnimation(var_118_bool, var_111_string); // 0x327 Func
	var_121_bool = var_118_bool; // 0x329 Push
	if(var_121_bool == 0) goto Label_816; // 0x32a JumpB
	lshGetAnimTimes(var_111_string, var_119_float, var_120_float); // 0x32b Func
	lshPlayAnimation(var_119_float, var_120_float, var_112_bool); // 0x32d Func
	goto Label_820; // 0x32f Jump
	
Label_820:
	return 6; // 0x334 Return
	
Label_816:
	var_122_string = "Can't find lsh animation : "; // 0x330 PushS
	var_123_int = var_122_string + var_111_string; // 0x331 Add
	Trace(var_123_int); // 0x332 Func
}


func_552(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x228 PushV
	var_18_bool = var_4_bool == 0; // 0x229 NullEq
	if(var_18_bool == 0) goto Label_557; // 0x22a JumpB
	var_15_bool = 0; // 0x22b MovB
	return 2; // 0x22c Return
	
Label_557:
	var_19_float = 0; var_20_object = Obj(); // 0x22d PushV
	var_20_object = var_4_bool; // 0x22e MovT
	func_690(var_20_object); // 0x22f NEW_2
	var_17_float = sqrt(var_19_float); // 0x231 Sqrt2
	var_27_object = var_2_object; // 0x232 PushT
	if(var_27_object == 0) goto Label_565; // 0x233 JumpB
	var_17_float = var_17_float - var_1_object; // 0x234 Sub2
	
Label_565:
	var_15_bool = var_17_float < var_0_object; // 0x235 LT2
	return 2; // 0x236 Return
}


func_683(var_71_bool)
{
	var_71_bool = 1; // 0x2ab MovB
	return 0; // 0x2ac Return
}


func_685()
{
	StopAnimation(); // 0x2ad Func
	StopGroup0(); // 0x2af Func
	return 0; // 0x2b1 Return
}


func_943(var_76_int)
{
	var_76_int = 515569; // 0x3af MovI
	return 0; // 0x3b0 Return
}


func_945(var_75_int)
{
	var_75_int = 503354; // 0x3b1 MovI
	return 0; // 0x3b2 Return
}


func_690(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x2b2 PushV
	GetPosition(var_24_cvector); // 0x2b3 Func
	GetPosition(var_25_cvector); // 0x2b5 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x2b7 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x2b8 Or2
	return 6; // 0x2b9 Return
}


func_947(var_77_string)
{
	var_77_string = "ui/NPC_wmask.png"; // 0x3b3 MovS
	return 0; // 0x3b4 Return
}


func_949(var_78_string)
{
	var_78_string = "ui/NPC_wmask_b.png"; // 0x3b5 MovS
	return 0; // 0x3b6 Return
}


func_821(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x335 PushV
	GetEyesHeight(var_32_float); // 0x336 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x338 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x339 PushE
	var_34_float = var_32_float; // 0x33a Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x33b PopE
	var_35_string = "head"; // 0x33c PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x33d Func
	return 4; // 0x33f Return
}


func_951(var_70_bool)
{
	var_70_bool = 0; // 0x3b7 MovB
	return 0; // 0x3b8 Return
}


func_698(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x2ba PushV
	IsLoaded(var_25_bool); // 0x2bb Func
	var_23_bool = var_25_bool; // 0x2bd Mov
	return 2; // 0x2be Return
}


func_703(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x2bf PushV
	GetPosition(var_40_cvector); // 0x2c0 ObjFunc
	GetEyesHeight(var_39_float); // 0x2c2 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x2c4 PushE
	var_48_float = var_48_float + var_39_float; // 0x2c5 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x2c6 PopE
	GetPosition(var_41_cvector); // 0x2c7 Func
	GetEyesHeight(var_39_float); // 0x2c9 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x2cb PushE
	var_49_float = var_49_float + var_39_float; // 0x2cc Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x2cd PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x2ce Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x2cf PushE
	var_50_float = 0; // 0x2d0 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x2d1 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x2d2 Or
	var_52_float = sqrt(var_51_int); // 0x2d3 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x2d4 Div2
	var_43_cvector = -var_42_cvector; // 0x2d5 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x2d6 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x2d7 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x2d8 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x2d9 Xor2
	func_845(var_54_cvector, var_55_cvector); // 0x2da NEW_2
	var_62_int = 25; // 0x2dc PushI
	var_63_float = var_54_cvector * var_62_int; // 0x2dd Mult
	var_64_int = var_53_float + var_63_float; // 0x2de Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x2df PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x2e0 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x2e1 Add2
	IsOverrideActive(var_46_bool); // 0x2e2 Func
	var_66_bool = var_46_bool; // 0x2e4 Push
	if(var_66_bool == 0) goto Label_744; // 0x2e5 JumpB
	var_27_bool = 0; // 0x2e6 MovB
	return 18; // 0x2e7 Return
	
Label_744:
	StopWorld(); // 0x2e8 Func
	var_67_bool = 1; // 0x2ea PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x2eb Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x2ed PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x2ee PushE
	Rotate(var_68_float, var_69_float); // 0x2ef Func
	var_70_bool = 0; // 0x2f1 PushV
	func_951(var_70_bool); // 0x2f2 NEW_2
	if(var_70_bool == 0) goto Label_758; // 0x2f4 JumpB
	goto Label_766; // 0x2f5 Jump
	
Label_766:
	CameraWaitForPlayFinish(); // 0x2fe Func
	ResumeWorld(); // 0x300 Func
	var_27_bool = 1; // 0x302 MovB
	return 18; // 0x303 Return
	
Label_758:
	var_71_string = "head"; // 0x2f6 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x2f7 Func
	var_72_bool = var_47_bool; // 0x2f9 Push
	if(var_72_bool == 0) goto Label_766; // 0x2fa JumpB
	var_73_string = "head"; // 0x2fb PushS
	LookAsyncCamera(var_73_string); // 0x2fc Func
}


func_832()
{
	var_15_bool = 0; // 0x340 PushV
	func_951(var_15_bool); // 0x341 NEW_2
	if(var_15_bool == 0) goto Label_838; // 0x343 JumpB
	lshStopSpeech(); // 0x344 Func
	
Label_838:
	return 0; // 0x346 Return
}


func_839(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x347 PushV
	self(var_21_object); // 0x348 Func
	var_19_object = var_21_object; // 0x34a Mov
	return 2; // 0x34b Return
}


func_456(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x1c8 PushV
	var_6_int = 0; // 0x1c9 TMovB
	
Label_458:
	var_18_int = 3; // 0x1ca PushI
	rand(var_16_float, var_18_int); // 0x1cb Func
	var_19_int = 3; // 0x1cd PushI
	var_20_int = var_16_float + var_19_int; // 0x1ce Add
	Sleep(var_20_int, var_17_bool); // 0x1cf Func
	var_6_int = 1; // 0x1d1 TMovB
	var_21_float = 0; var_22_float = 0; // 0x1d2 PushV
	var_21_float = var_12_float; // 0x1d3 Mov
	var_22_float = var_13_float; // 0x1d4 Mov
	func_525(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x1d5 NEW_2
	var_6_int = 0; // 0x1d7 TMovB
	goto Label_458; // 0x1d8 Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_112; // 0x4f JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x50 PushV
	var_95_object = var_1_object; // 0x51 MovT
	var_96_object = var_0_object; // 0x52 MovT
	func_901(); // 0x53 NEW_2
	var_107_string = ""; // 0x55 PushV
	var_107_string = "Neutral"; // 0x56 MovS
	func_142(var_89_object, var_107_string); // 0x57 NEW_2
	var_124_int = 540992; // 0x59 PushI
	SetMessage(var_124_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_125_bool = 0; var_126_object = Obj(); // 0x5e PushV
	var_126_object = var_1_object; // 0x5f MovT
	func_914(var_126_object); // 0x60 NEW_2
	if(var_125_bool == 0) goto Label_104; // 0x62 JumpB
	var_133_int = 540993; // 0x63 PushI
	var_134_int = 43484; // 0x64 PushI
	var_135_int = 43083; // 0x65 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x66 TObjFunc
	
Label_104:
	var_136_int = 541006; // 0x68 PushI
	var_137_int = -1; // 0x69 PushI
	var_138_int = 43099; // 0x6a PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_139_bool = 0; // 0x70 PushV
	func_951(var_139_bool); // 0x71 NEW_2
	if(var_139_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_140_string = var_3_string; // 0x76 PushT
	if(var_140_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_141_string = ""; // 0x79 PushV
	var_141_string = var_2_object; // 0x7a MovT
	func_790(var_141_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_152_string = "all"; // 0x7f PushS
	var_153_string = "idle"; // 0x80 PushS
	PlayAnimation(var_152_string, var_153_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_154_string = var_3_string; // 0x85 PushT
	if(var_154_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_155_string = "all"; // 0x88 PushS
	var_156_string = "idle"; // 0x89 PushS
	PlayAnimation(var_155_string, var_156_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
}


func_845(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x34d PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x34e Or
	var_58_float = sqrt(var_59_int); // 0x34f Sqrt2
	var_60_float = 0.0; // 0x350 PushF
	var_61_bool = var_58_float < var_60_float; // 0x351 LT
	if(var_61_bool == 0) goto Label_853; // 0x352 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x353 MovV
	return 2; // 0x354 Return
	
Label_853:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x355 Div2
	return 2; // 0x356 Return
}


func_590(var_2_object, var_3_string)
{
	func_685(); // 0x24f NEW_2
	var_13_int = 10; // 0x251 PushI
	KillTimer(var_13_int); // 0x252 Func
	var_14_object = var_2_object; // 0x254 PushT
	if(var_14_object == 0) goto Label_602; // 0x255 JumpB
	var_15_string = "head"; // 0x256 PushS
	UnlookAsync(var_15_string); // 0x257 Func
	var_2_object = 0; // 0x259 TMovB
	
Label_602:
	var_3_string = 1; // 0x25a TMovB
	return 0; // 0x25b Return
}


func_855(var_127_int, var_128_string)
{
	var_129_int = 0; var_130_int = 0; // 0x357 PushV
	GetVariable(var_128_string, var_130_int); // 0x358 Func
	var_127_int = var_130_int; // 0x35a Mov
	return 2; // 0x35b Return
}


func_474(var_5_int)
{
	var_5_int = 1; // 0x1da TMovB
	var_15_bool = 0; // 0x1db PushV
	var_15_bool = 0; // 0x1dc MovB
	var_16_bool = 0; // 0x1dd PushV
	func_698(var_16_bool); // 0x1de NEW_2
	var_19_bool = var_16_bool == 0; // 0x1e0 Not
	if(var_19_bool == 0) goto Label_487; // 0x1e1 JumpB
	var_20_bool = 0; // 0x1e2 PushV
	func_523(var_20_bool); // 0x1e3 NEW_2
	if(var_20_bool == 0) goto Label_487; // 0x1e5 JumpB
	var_15_bool = 1; // 0x1e6 MovB
	
Label_487:
	if(var_15_bool == 0) goto Label_493; // 0x1e7 JumpB
	var_21_object = Obj(); // 0x1e8 PushV
	func_839(var_21_object); // 0x1e9 NEW_2
	RemoveActor(var_21_object); // 0x1eb Func
	
Label_493:
	return 0; // 0x1ed Return
}


func_604()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x25c PushV
	WaitForAnimEnd(); // 0x25d Func
	var_44_bool = 0; // 0x25f PushV
	func_698(var_44_bool); // 0x260 NEW_2
	var_45_bool = var_44_bool == 0; // 0x262 Not
	if(var_45_bool == 0) goto Label_613; // 0x263 JumpB
	return 14; // 0x264 Return
	
Label_613:
	var_46_int = 0; // 0x265 PushV
	func_884(var_46_int); // 0x266 NEW_2
	var_37_int = var_46_int; // 0x267 Mov
	var_38_int = 0; // 0x269 MovI
	
Label_618:
	var_59_bool = 0; // 0x26a PushV
	var_59_bool = 0; // 0x26b MovB
	var_60_int = 5; // 0x26c PushI
	var_61_bool = var_38_int < var_60_int; // 0x26d LT
	if(var_61_bool == 0) goto Label_628; // 0x26e JumpB
	var_62_bool = 0; // 0x26f PushV
	func_698(var_62_bool); // 0x270 NEW_2
	if(var_62_bool == 0) goto Label_628; // 0x272 JumpB
	var_59_bool = 1; // 0x273 MovB
	
Label_628:
	if(var_59_bool == 0) goto Label_680; // 0x274 JumpB
	var_63_int = 3; // 0x275 PushI
	irand(var_39_int, var_63_int); // 0x276 Func
	var_64_int = 0; // 0x278 PushI
	var_65_bool = var_39_int == var_64_int; // 0x279 Eq
	if(var_65_bool == 0) goto Label_652; // 0x27a JumpB
	var_66_int = var_37_int; // 0x27b Push
	if(var_66_int == 0) goto Label_651; // 0x27c JumpB
	irand(var_40_int, var_37_int); // 0x27d Func
	var_67_string = "all"; // 0x27f PushS
	var_68_string = ""; var_69_int = 0; // 0x280 PushV
	var_69_int = var_40_int; // 0x281 Mov
	func_877(var_68_string, var_69_int); // 0x282 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x284 Func
	WaitForAnimEnd(var_41_bool); // 0x286 Func
	var_70_bool = var_41_bool == 0; // 0x288 Not
	if(var_70_bool == 0) goto Label_651; // 0x289 JumpB
	goto Label_680; // 0x28a Jump
	
Label_680:
	ResetAAS(); // 0x2a8 Func
	return 14; // 0x2aa Return
	
Label_651:
	goto Label_669; // 0x28b Jump
	
Label_669:
	var_71_bool = 0; // 0x29d PushV
	func_683(var_71_bool); // 0x29e NEW_2
	var_72_bool = var_71_bool == 0; // 0x2a0 Not
	if(var_72_bool == 0) goto Label_675; // 0x2a1 JumpB
	goto Label_680; // 0x2a2 Jump
	
Label_675:
	ResetAAS(); // 0x2a3 Func
	var_73_int = 1; // 0x2a5 PushI
	var_38_int = var_38_int + var_73_int; // 0x2a6 Add2
	goto Label_618; // 0x2a7 Jump
	
Label_652:
	var_74_int = 1; // 0x28c PushI
	var_75_bool = var_39_int == var_74_int; // 0x28d Eq
	if(var_75_bool == 0) goto Label_666; // 0x28e JumpB
	var_76_int = 4; // 0x28f PushI
	rand(var_42_float, var_76_int); // 0x290 Func
	var_77_int = 1; // 0x292 PushI
	var_78_int = var_42_float + var_77_int; // 0x293 Add
	Sleep(var_78_int, var_43_bool); // 0x294 Func
	var_79_bool = var_43_bool == 0; // 0x296 Not
	if(var_79_bool == 0) goto Label_665; // 0x297 JumpB
	goto Label_680; // 0x298 Jump
	
Label_665:
	goto Label_669; // 0x299 Jump
	
Label_666:
	var_80_int = var_38_int; // 0x29a Push
	if(var_80_int == 0) goto Label_669; // 0x29b JumpB
	goto Label_680; // 0x29c Jump
}


func_860(var_97_string, var_98_bool)
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x35c PushV
	FindActor(var_100_object, var_97_string); // 0x35d Func
	var_101_bool = var_100_object == 0; // 0x35f Not
	if(var_101_bool == 0) goto Label_872; // 0x360 JumpB
	var_102_string = "Door "; // 0x361 PushS
	var_103_int = var_102_string + var_97_string; // 0x362 Add
	var_104_string = " not found"; // 0x363 PushS
	var_105_int = var_103_int + var_104_string; // 0x364 Add
	Trace(var_105_int); // 0x365 Func
	goto Label_875; // 0x367 Jump
	
Label_875:
	return 2; // 0x36b Return
	
Label_872:
	var_106_string = "locked"; // 0x368 PushS
	SetProperty(var_106_string, var_98_bool); // 0x369 ObjFunc
}


func_877(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x36d PushV
	var_55_string = "idle"; // 0x36e MovS
	var_56_int = var_53_int; // 0x36f Push
	if(var_56_int == 0) goto Label_882; // 0x370 JumpB
	var_55_string = var_55_string + var_53_int; // 0x371 Add2
	
Label_882:
	var_52_string = var_55_string; // 0x372 Mov
	return 2; // 0x373 Return
}


func_884(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x374 PushV
	var_49_int = 0; // 0x375 MovI
	
Label_886:
	var_51_string = "all"; // 0x376 PushS
	var_52_string = ""; var_53_int = 0; // 0x377 PushV
	var_53_int = var_49_int; // 0x378 Mov
	func_877(var_52_string, var_53_int); // 0x379 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x37b Func
	var_57_bool = var_50_bool == 0; // 0x37d Not
	if(var_57_bool == 0) goto Label_896; // 0x37e JumpB
	goto Label_899; // 0x37f Jump
	
Label_899:
	var_46_int = var_49_int; // 0x383 Mov
	return 4; // 0x384 Return
	
Label_896:
	var_58_int = 1; // 0x380 PushI
	var_49_int = var_49_int + var_58_int; // 0x381 Add2
	goto Label_886; // 0x382 Jump
}


