task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xa5 PushI
	if(var_14_int == 0) goto Label_435; // 0xa6 JumpB
	func_829(); // 0xa8 NEW_2
	var_16_int = 45289; // 0xaa PushI
	var_17_bool = var_13_bool == var_16_int; // 0xab Eq
	if(var_17_bool == 0) goto Label_178; // 0xac JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xad PushV
	var_18_object = var_1_object; // 0xae MovT
	var_19_object = var_0_object; // 0xaf MovT
	func_857(); // 0xb0 NEW_2
	
Label_178:
	var_22_int = 43292; // 0xb2 PushI
	var_23_bool = var_12_bool == var_22_int; // 0xb3 Eq
	if(var_23_bool == 0) goto Label_211; // 0xb4 JumpB
	var_24_string = ""; // 0xb5 PushV
	var_24_string = "Neutral"; // 0xb6 MovS
	func_142(var_13_bool, var_24_string); // 0xb7 NEW_2
	var_41_int = 541166; // 0xb9 PushI
	SetMessage(var_41_int); // 0xba TObjFunc
	ClearReplies(); // 0xbc TObjFunc
	var_42_bool = 0; var_43_object = Obj(); // 0xbe PushV
	var_43_object = var_1_object; // 0xbf MovT
	func_863(var_43_object); // 0xc0 NEW_2
	if(var_42_bool == 0) goto Label_200; // 0xc2 JumpB
	var_50_int = 542863; // 0xc3 PushI
	var_51_int = 45290; // 0xc4 PushI
	var_52_int = 45289; // 0xc5 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xc6 TObjFunc
	
Label_200:
	var_53_int = 542768; // 0xc8 PushI
	var_54_int = -1; // 0xc9 PushI
	var_55_int = 45189; // 0xca PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xcb TObjFunc
	var_56_int = 542791; // 0xcd PushI
	var_57_int = -1; // 0xce PushI
	var_58_int = 45213; // 0xcf PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xd0 TObjFunc
	return 0; // 0xd2 Return
	
Label_211:
	var_59_int = 45290; // 0xd3 PushI
	var_60_bool = var_12_bool == var_59_int; // 0xd4 Eq
	if(var_60_bool == 0) goto Label_234; // 0xd5 JumpB
	var_61_string = ""; // 0xd6 PushV
	var_61_string = "Neutral"; // 0xd7 MovS
	func_142(var_13_bool, var_61_string); // 0xd8 NEW_2
	var_62_int = 542864; // 0xda PushI
	SetMessage(var_62_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_63_int = 542865; // 0xdf PushI
	var_64_int = 45297; // 0xe0 PushI
	var_65_int = 45291; // 0xe1 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xe2 TObjFunc
	var_66_int = 542866; // 0xe4 PushI
	var_67_int = 45293; // 0xe5 PushI
	var_68_int = 45292; // 0xe6 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_69_int = 45293; // 0xea PushI
	var_70_bool = var_12_bool == var_69_int; // 0xeb Eq
	if(var_70_bool == 0) goto Label_262; // 0xec JumpB
	var_71_string = ""; // 0xed PushV
	var_71_string = "Neutral"; // 0xee MovS
	func_142(var_13_bool, var_71_string); // 0xef NEW_2
	var_72_int = 542867; // 0xf1 PushI
	SetMessage(var_72_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_73_int = 542868; // 0xf6 PushI
	var_74_int = -1; // 0xf7 PushI
	var_75_int = 45294; // 0xf8 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xf9 TObjFunc
	var_76_int = 542869; // 0xfb PushI
	var_77_int = -1; // 0xfc PushI
	var_78_int = 45295; // 0xfd PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xfe TObjFunc
	var_79_int = 542870; // 0x100 PushI
	var_80_int = -1; // 0x101 PushI
	var_81_int = 45296; // 0x102 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x103 TObjFunc
	return 0; // 0x105 Return
	
Label_262:
	var_82_int = 45297; // 0x106 PushI
	var_83_bool = var_12_bool == var_82_int; // 0x107 Eq
	if(var_83_bool == 0) goto Label_285; // 0x108 JumpB
	var_84_string = ""; // 0x109 PushV
	var_84_string = "Neutral"; // 0x10a MovS
	func_142(var_13_bool, var_84_string); // 0x10b NEW_2
	var_85_int = 542871; // 0x10d PushI
	SetMessage(var_85_int); // 0x10e TObjFunc
	ClearReplies(); // 0x110 TObjFunc
	var_86_int = 542872; // 0x112 PushI
	var_87_int = 45300; // 0x113 PushI
	var_88_int = 45298; // 0x114 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x115 TObjFunc
	var_89_int = 542873; // 0x117 PushI
	var_90_int = -1; // 0x118 PushI
	var_91_int = 45299; // 0x119 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x11a TObjFunc
	return 0; // 0x11c Return
	
Label_285:
	var_92_int = 45300; // 0x11d PushI
	var_93_bool = var_12_bool == var_92_int; // 0x11e Eq
	if(var_93_bool == 0) goto Label_308; // 0x11f JumpB
	var_94_string = ""; // 0x120 PushV
	var_94_string = "Neutral"; // 0x121 MovS
	func_142(var_13_bool, var_94_string); // 0x122 NEW_2
	var_95_int = 542874; // 0x124 PushI
	SetMessage(var_95_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_96_int = 542875; // 0x129 PushI
	var_97_int = 45311; // 0x12a PushI
	var_98_int = 45301; // 0x12b PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x12c TObjFunc
	var_99_int = 542876; // 0x12e PushI
	var_100_int = 45303; // 0x12f PushI
	var_101_int = 45302; // 0x130 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x131 TObjFunc
	return 0; // 0x133 Return
	
Label_308:
	var_102_int = 45303; // 0x134 PushI
	var_103_bool = var_12_bool == var_102_int; // 0x135 Eq
	if(var_103_bool == 0) goto Label_331; // 0x136 JumpB
	var_104_string = ""; // 0x137 PushV
	var_104_string = "Neutral"; // 0x138 MovS
	func_142(var_13_bool, var_104_string); // 0x139 NEW_2
	var_105_int = 542877; // 0x13b PushI
	SetMessage(var_105_int); // 0x13c TObjFunc
	ClearReplies(); // 0x13e TObjFunc
	var_106_int = 542878; // 0x140 PushI
	var_107_int = 45305; // 0x141 PushI
	var_108_int = 45304; // 0x142 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x143 TObjFunc
	var_109_int = 542882; // 0x145 PushI
	var_110_int = 45309; // 0x146 PushI
	var_111_int = 45308; // 0x147 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x148 TObjFunc
	return 0; // 0x14a Return
	
Label_331:
	var_112_int = 45309; // 0x14b PushI
	var_113_bool = var_12_bool == var_112_int; // 0x14c Eq
	if(var_113_bool == 0) goto Label_349; // 0x14d JumpB
	var_114_string = ""; // 0x14e PushV
	var_114_string = "Neutral"; // 0x14f MovS
	func_142(var_13_bool, var_114_string); // 0x150 NEW_2
	var_115_int = 542883; // 0x152 PushI
	SetMessage(var_115_int); // 0x153 TObjFunc
	ClearReplies(); // 0x155 TObjFunc
	var_116_int = 542884; // 0x157 PushI
	var_117_int = -1; // 0x158 PushI
	var_118_int = 45310; // 0x159 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x15a TObjFunc
	return 0; // 0x15c Return
	
Label_349:
	var_119_int = 45305; // 0x15d PushI
	var_120_bool = var_12_bool == var_119_int; // 0x15e Eq
	if(var_120_bool == 0) goto Label_372; // 0x15f JumpB
	var_121_string = ""; // 0x160 PushV
	var_121_string = "Neutral"; // 0x161 MovS
	func_142(var_13_bool, var_121_string); // 0x162 NEW_2
	var_122_int = 542879; // 0x164 PushI
	SetMessage(var_122_int); // 0x165 TObjFunc
	ClearReplies(); // 0x167 TObjFunc
	var_123_int = 542880; // 0x169 PushI
	var_124_int = -1; // 0x16a PushI
	var_125_int = 45306; // 0x16b PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x16c TObjFunc
	var_126_int = 542881; // 0x16e PushI
	var_127_int = -1; // 0x16f PushI
	var_128_int = 45307; // 0x170 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x171 TObjFunc
	return 0; // 0x173 Return
	
Label_372:
	var_129_int = 45311; // 0x174 PushI
	var_130_bool = var_12_bool == var_129_int; // 0x175 Eq
	if(var_130_bool == 0) goto Label_395; // 0x176 JumpB
	var_131_string = ""; // 0x177 PushV
	var_131_string = "Neutral"; // 0x178 MovS
	func_142(var_13_bool, var_131_string); // 0x179 NEW_2
	var_132_int = 542885; // 0x17b PushI
	SetMessage(var_132_int); // 0x17c TObjFunc
	ClearReplies(); // 0x17e TObjFunc
	var_133_int = 542886; // 0x180 PushI
	var_134_int = 45314; // 0x181 PushI
	var_135_int = 45312; // 0x182 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x183 TObjFunc
	var_136_int = 542887; // 0x185 PushI
	var_137_int = -1; // 0x186 PushI
	var_138_int = 45313; // 0x187 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x188 TObjFunc
	return 0; // 0x18a Return
	
Label_395:
	var_139_int = 45314; // 0x18b PushI
	var_140_bool = var_12_bool == var_139_int; // 0x18c Eq
	if(var_140_bool == 0) goto Label_423; // 0x18d JumpB
	var_141_string = ""; // 0x18e PushV
	var_141_string = "Neutral"; // 0x18f MovS
	func_142(var_13_bool, var_141_string); // 0x190 NEW_2
	var_142_int = 542888; // 0x192 PushI
	SetMessage(var_142_int); // 0x193 TObjFunc
	ClearReplies(); // 0x195 TObjFunc
	var_143_int = 542889; // 0x197 PushI
	var_144_int = -1; // 0x198 PushI
	var_145_int = 45315; // 0x199 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x19a TObjFunc
	var_146_int = 542890; // 0x19c PushI
	var_147_int = -1; // 0x19d PushI
	var_148_int = 45316; // 0x19e PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x19f TObjFunc
	var_149_int = 542891; // 0x1a1 PushI
	var_150_int = -1; // 0x1a2 PushI
	var_151_int = 45317; // 0x1a3 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1a4 TObjFunc
	return 0; // 0x1a6 Return
	
Label_423:
	var_3_string = 1; // 0x1a7 TMovB
	var_152_bool = 0; // 0x1a8 PushV
	func_900(var_152_bool); // 0x1a9 NEW_2
	if(var_152_bool == 0) goto Label_431; // 0x1ab JumpB
	lshStopAnimation(); // 0x1ac Func
	goto Label_433; // 0x1ae Jump
	
Label_433:
	return 0; // 0x1b1 Return
	
Label_431:
	StopAnimation(); // 0x1af Func
	
Label_435:
	return 0; // 0x1b3 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_587(var_11_bool, var_12_object); // 0x1bc NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x1be PushV
	var_17_object = var_12_object; // 0x1bf Mov
	TaskCall(0); // 0x1c0 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x1c1 NEW_2
	TaskReturn(); // 0x1c2 TaskReturn
	return 0; // 0x1c4 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1ec PushS
	var_14_bool = var_12_string == var_13_string; // 0x1ed Eq
	if(var_14_bool == 0) goto Label_498; // 0x1ee JumpB
	func_471(var_12_string); // 0x1f0 NEW_2
	
Label_498:
	return 0; // 0x1f2 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1f3 PushT
	if(var_12_int == 0) goto Label_504; // 0x1f4 JumpB
	func_587(var_10_bool, var_11_bool); // 0x1f6 NEW_2
	
Label_504:
	var_16_bool = 0; // 0x1f8 PushV
	var_16_bool = 0; // 0x1f9 MovB
	var_17_int = var_5_int; // 0x1fa PushT
	if(var_17_int == 0) goto Label_513; // 0x1fb JumpB
	var_18_bool = 0; // 0x1fc PushV
	func_520(var_18_bool); // 0x1fd NEW_2
	if(var_18_bool == 0) goto Label_513; // 0x1ff JumpB
	var_16_bool = 1; // 0x200 MovB
	
Label_513:
	if(var_16_bool == 0) goto Label_519; // 0x201 JumpB
	var_19_object = Obj(); // 0x202 PushV
	func_836(var_19_object); // 0x203 NEW_2
	RemoveActor(var_19_object); // 0x205 Func
	
Label_519:
	return 0; // 0x207 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x235 PushI
	var_14_bool = var_12_int == var_13_int; // 0x236 Eq
	if(var_14_bool == 0) goto Label_586; // 0x237 JumpB
	var_15_bool = 0; // 0x238 PushV
	func_549(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x239 NEW_2
	if(var_15_bool == 0) goto Label_580; // 0x23b JumpB
	var_28_bool = var_2_object == 0; // 0x23c Not
	if(var_28_bool == 0) goto Label_579; // 0x23d JumpB
	var_29_object = Obj(); // 0x23e PushV
	var_29_object = var_4_bool; // 0x23f MovT
	func_818(var_29_object); // 0x240 NEW_2
	var_2_object = 1; // 0x242 TMovB
	
Label_579:
	goto Label_586; // 0x243 Jump
	
Label_586:
	return 0; // 0x24a Return
	
Label_580:
	var_36_object = var_2_object; // 0x244 PushT
	if(var_36_object == 0) goto Label_586; // 0x245 JumpB
	var_37_string = "head"; // 0x246 PushS
	UnlookAsync(var_37_string); // 0x247 Func
	var_2_object = 0; // 0x249 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x1b4 PushV
	var_12_float = 300; // 0x1b5 MovI
	var_13_float = 100; // 0x1b6 MovI
	func_453(var_11_bool, var_12_float, var_13_float); // 0x1b7 NEW_2
	return 0; // 0x1b9 Return
}


func_896(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png"; // 0x380 MovS
	return 0; // 0x381 Return
}


func_769()
{
	var_150_bool = 0; var_151_bool = 0; // 0x301 PushV
	var_152_bool = 1; // 0x302 PushB
	CameraSwitchToNormal(var_152_bool); // 0x303 Func
	var_153_bool = 0; // 0x305 PushV
	func_900(var_153_bool); // 0x306 NEW_2
	if(var_153_bool == 0) goto Label_778; // 0x308 JumpB
	goto Label_786; // 0x309 Jump
	
Label_786:
	return 2; // 0x312 Return
	
Label_778:
	var_154_string = "head"; // 0x30a PushS
	HasAnimationTrack(var_151_bool, var_154_string); // 0x30b Func
	var_155_bool = var_151_bool; // 0x30d Push
	if(var_155_bool == 0) goto Label_786; // 0x30e JumpB
	var_156_string = "head"; // 0x30f PushS
	UnlookAsync(var_156_string); // 0x310 Func
}


func_898(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png"; // 0x382 MovS
	return 0; // 0x383 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_700(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_894(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_892(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_896(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_898(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_875(var_79_int); // 0x22 NEW_2
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
	var_148_bool = var_26_bool == 0; // 0x38 Not
	if(var_148_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_149_object = Obj(); // 0x3f PushV
	var_149_object = var_17_object; // 0x40 Mov
	func_769(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_900(var_70_bool)
{
	var_70_bool = 0; // 0x384 MovB
	return 0; // 0x385 Return
}


func_902(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x386 PushV
	var_55_string = "idle"; // 0x387 MovS
	var_56_int = var_53_int; // 0x388 Push
	if(var_56_int == 0) goto Label_907; // 0x389 JumpB
	var_55_string = var_55_string + var_53_int; // 0x38a Add2
	
Label_907:
	var_52_string = var_55_string; // 0x38b Mov
	return 2; // 0x38c Return
}


func_520(var_18_bool)
{
	var_18_bool = 1; // 0x208 MovB
	return 0; // 0x209 Return
}


func_522(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x20b PushV
	func_695(var_23_bool); // 0x20c NEW_2
	var_26_bool = var_23_bool == 0; // 0x20e Not
	if(var_26_bool == 0) goto Label_529; // 0x20f JumpB
	return 0; // 0x210 Return
	
Label_529:
	var_27_string = "player"; // 0x211 PushS
	FindActor(var_17_bool, var_27_string); // 0x212 Func
	var_2_object = 0; // 0x214 TMovB
	var_3_string = 0; // 0x215 TMovB
	var_0_object = var_21_float; // 0x216 TMov
	var_1_object = var_22_float; // 0x217 TMov
	var_28_int = 10; // 0x218 PushI
	var_29_float = 1.0; // 0x219 PushF
	SetTimer(var_28_int, var_29_float); // 0x21a Func
	func_601(); // 0x21d NEW_2
	var_81_bool = var_3_string == 0; // 0x21f Not
	if(var_81_bool == 0) goto Label_548; // 0x220 JumpB
	var_82_int = 10; // 0x221 PushI
	KillTimer(var_82_int); // 0x222 Func
	
Label_548:
	return 0; // 0x224 Return
}


func_909(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x38d PushV
	var_49_int = 0; // 0x38e MovI
	
Label_911:
	var_51_string = "all"; // 0x38f PushS
	var_52_string = ""; var_53_int = 0; // 0x390 PushV
	var_53_int = var_49_int; // 0x391 Mov
	func_902(var_52_string, var_53_int); // 0x392 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x394 Func
	var_57_bool = var_50_bool == 0; // 0x396 Not
	if(var_57_bool == 0) goto Label_921; // 0x397 JumpB
	goto Label_924; // 0x398 Jump
	
Label_924:
	var_46_int = var_49_int; // 0x39c Mov
	return 4; // 0x39d Return
	
Label_921:
	var_58_int = 1; // 0x399 PushI
	var_49_int = var_49_int + var_58_int; // 0x39a Add2
	goto Label_911; // 0x39b Jump
}


func_142(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0x8f PushV
	func_900(var_96_bool); // 0x90 NEW_2
	var_97_bool = var_96_bool == 0; // 0x92 Not
	if(var_97_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_98_bool = var_95_string == var_2_object; // 0x95 Eq
	if(var_98_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_99_string = ""; var_100_bool = 0; // 0x98 PushV
	var_99_string = var_95_string; // 0x99 Mov
	var_101_string = ""; // 0x9a PushS
	var_102_bool = var_95_string == var_101_string; // 0x9b Eq
	if(var_102_bool == 0) goto Label_159; // 0x9c JumpB
	var_100_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_803(var_99_string, var_100_bool); // 0xa0 NEW_2
	var_2_object = var_95_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_100_bool = 1; // 0x9f MovB
}


func_787(var_132_string)
{
	var_133_bool = 0; var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_float = 0; var_138_float = 0; // 0x313 PushV
	lshHasAnimation(var_136_bool, var_132_string); // 0x314 Func
	var_139_bool = var_136_bool; // 0x316 Push
	if(var_139_bool == 0) goto Label_798; // 0x317 JumpB
	lshGetAnimTimes(var_132_string, var_137_float, var_138_float); // 0x318 Func
	var_140_bool = 0; // 0x31a PushB
	lshPlayAnimation(var_137_float, var_138_float, var_140_bool); // 0x31b Func
	goto Label_802; // 0x31d Jump
	
Label_802:
	return 6; // 0x322 Return
	
Label_798:
	var_141_string = "Can't find lsh animation : "; // 0x31e PushS
	var_142_int = var_141_string + var_132_string; // 0x31f Add
	Trace(var_142_int); // 0x320 Func
}


func_803(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x323 PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x324 Func
	var_109_bool = var_106_bool; // 0x326 Push
	if(var_109_bool == 0) goto Label_813; // 0x327 JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x328 Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x32a Func
	goto Label_817; // 0x32c Jump
	
Label_817:
	return 6; // 0x331 Return
	
Label_813:
	var_110_string = "Can't find lsh animation : "; // 0x32d PushS
	var_111_int = var_110_string + var_99_string; // 0x32e Add
	Trace(var_111_int); // 0x32f Func
}


func_549(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x225 PushV
	var_18_bool = var_4_bool == 0; // 0x226 NullEq
	if(var_18_bool == 0) goto Label_554; // 0x227 JumpB
	var_15_bool = 0; // 0x228 MovB
	return 2; // 0x229 Return
	
Label_554:
	var_19_float = 0; var_20_object = Obj(); // 0x22a PushV
	var_20_object = var_4_bool; // 0x22b MovT
	func_687(var_20_object); // 0x22c NEW_2
	var_17_float = sqrt(var_19_float); // 0x22e Sqrt2
	var_27_object = var_2_object; // 0x22f PushT
	if(var_27_object == 0) goto Label_562; // 0x230 JumpB
	var_17_float = var_17_float - var_1_object; // 0x231 Sub2
	
Label_562:
	var_15_bool = var_17_float < var_0_object; // 0x232 LT2
	return 2; // 0x233 Return
}


func_680(var_71_bool)
{
	var_71_bool = 1; // 0x2a8 MovB
	return 0; // 0x2a9 Return
}


func_682()
{
	StopAnimation(); // 0x2aa Func
	StopGroup0(); // 0x2ac Func
	return 0; // 0x2ae Return
}


func_687(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x2af PushV
	GetPosition(var_24_cvector); // 0x2b0 Func
	GetPosition(var_25_cvector); // 0x2b2 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x2b4 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x2b5 Or2
	return 6; // 0x2b6 Return
}


func_818(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x332 PushV
	GetEyesHeight(var_32_float); // 0x333 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x335 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x336 PushE
	var_34_float = var_32_float; // 0x337 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x338 PopE
	var_35_string = "head"; // 0x339 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x33a Func
	return 4; // 0x33c Return
}


func_695(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x2b7 PushV
	IsLoaded(var_25_bool); // 0x2b8 Func
	var_23_bool = var_25_bool; // 0x2ba Mov
	return 2; // 0x2bb Return
}


func_700(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x2bc PushV
	GetPosition(var_40_cvector); // 0x2bd ObjFunc
	GetEyesHeight(var_39_float); // 0x2bf ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x2c1 PushE
	var_48_float = var_48_float + var_39_float; // 0x2c2 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x2c3 PopE
	GetPosition(var_41_cvector); // 0x2c4 Func
	GetEyesHeight(var_39_float); // 0x2c6 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x2c8 PushE
	var_49_float = var_49_float + var_39_float; // 0x2c9 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x2ca PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x2cb Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x2cc PushE
	var_50_float = 0; // 0x2cd MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x2ce PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x2cf Or
	var_52_float = sqrt(var_51_int); // 0x2d0 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x2d1 Div2
	var_43_cvector = -var_42_cvector; // 0x2d2 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x2d3 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x2d4 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x2d5 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x2d6 Xor2
	func_842(var_54_cvector, var_55_cvector); // 0x2d7 NEW_2
	var_62_int = 25; // 0x2d9 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x2da Mult
	var_64_int = var_53_float + var_63_float; // 0x2db Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x2dc PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x2dd Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x2de Add2
	IsOverrideActive(var_46_bool); // 0x2df Func
	var_66_bool = var_46_bool; // 0x2e1 Push
	if(var_66_bool == 0) goto Label_741; // 0x2e2 JumpB
	var_27_bool = 0; // 0x2e3 MovB
	return 18; // 0x2e4 Return
	
Label_741:
	StopWorld(); // 0x2e5 Func
	var_67_bool = 1; // 0x2e7 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x2e8 Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x2ea PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x2eb PushE
	Rotate(var_68_float, var_69_float); // 0x2ec Func
	var_70_bool = 0; // 0x2ee PushV
	func_900(var_70_bool); // 0x2ef NEW_2
	if(var_70_bool == 0) goto Label_755; // 0x2f1 JumpB
	goto Label_763; // 0x2f2 Jump
	
Label_763:
	CameraWaitForPlayFinish(); // 0x2fb Func
	ResumeWorld(); // 0x2fd Func
	var_27_bool = 1; // 0x2ff MovB
	return 18; // 0x300 Return
	
Label_755:
	var_71_string = "head"; // 0x2f3 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x2f4 Func
	var_72_bool = var_47_bool; // 0x2f6 Push
	if(var_72_bool == 0) goto Label_763; // 0x2f7 JumpB
	var_73_string = "head"; // 0x2f8 PushS
	LookAsyncCamera(var_73_string); // 0x2f9 Func
}


func_829()
{
	var_15_bool = 0; // 0x33d PushV
	func_900(var_15_bool); // 0x33e NEW_2
	if(var_15_bool == 0) goto Label_835; // 0x340 JumpB
	lshStopSpeech(); // 0x341 Func
	
Label_835:
	return 0; // 0x343 Return
}


func_836(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x344 PushV
	self(var_21_object); // 0x345 Func
	var_19_object = var_21_object; // 0x347 Mov
	return 2; // 0x348 Return
}


func_453(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x1c5 PushV
	var_6_int = 0; // 0x1c6 TMovB
	
Label_455:
	var_18_int = 3; // 0x1c7 PushI
	rand(var_16_float, var_18_int); // 0x1c8 Func
	var_19_int = 3; // 0x1ca PushI
	var_20_int = var_16_float + var_19_int; // 0x1cb Add
	Sleep(var_20_int, var_17_bool); // 0x1cc Func
	var_6_int = 1; // 0x1ce TMovB
	var_21_float = 0; var_22_float = 0; // 0x1cf PushV
	var_21_float = var_12_float; // 0x1d0 Mov
	var_22_float = var_13_float; // 0x1d1 Mov
	func_522(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x1d2 NEW_2
	var_6_int = 0; // 0x1d4 TMovB
	goto Label_455; // 0x1d5 Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_112; // 0x4f JumpB
	var_95_string = ""; // 0x50 PushV
	var_95_string = "Neutral"; // 0x51 MovS
	func_142(var_89_object, var_95_string); // 0x52 NEW_2
	var_112_int = 541166; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_bool = 0; var_114_object = Obj(); // 0x59 PushV
	var_114_object = var_1_object; // 0x5a MovT
	func_863(var_114_object); // 0x5b NEW_2
	if(var_113_bool == 0) goto Label_99; // 0x5d JumpB
	var_121_int = 542863; // 0x5e PushI
	var_122_int = 45290; // 0x5f PushI
	var_123_int = 45289; // 0x60 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x61 TObjFunc
	
Label_99:
	var_124_int = 542768; // 0x63 PushI
	var_125_int = -1; // 0x64 PushI
	var_126_int = 45189; // 0x65 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x66 TObjFunc
	var_127_int = 542791; // 0x68 PushI
	var_128_int = -1; // 0x69 PushI
	var_129_int = 45213; // 0x6a PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_130_bool = 0; // 0x70 PushV
	func_900(var_130_bool); // 0x71 NEW_2
	if(var_130_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_131_string = var_3_string; // 0x76 PushT
	if(var_131_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_132_string = ""; // 0x79 PushV
	var_132_string = var_2_object; // 0x7a MovT
	func_787(var_132_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_143_string = "all"; // 0x7f PushS
	var_144_string = "idle"; // 0x80 PushS
	PlayAnimation(var_143_string, var_144_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_145_string = var_3_string; // 0x85 PushT
	if(var_145_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_146_string = "all"; // 0x88 PushS
	var_147_string = "idle"; // 0x89 PushS
	PlayAnimation(var_146_string, var_147_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
}


func_587(var_2_object, var_3_string)
{
	func_682(); // 0x24c NEW_2
	var_13_int = 10; // 0x24e PushI
	KillTimer(var_13_int); // 0x24f Func
	var_14_object = var_2_object; // 0x251 PushT
	if(var_14_object == 0) goto Label_599; // 0x252 JumpB
	var_15_string = "head"; // 0x253 PushS
	UnlookAsync(var_15_string); // 0x254 Func
	var_2_object = 0; // 0x256 TMovB
	
Label_599:
	var_3_string = 1; // 0x257 TMovB
	return 0; // 0x258 Return
}


func_842(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x34a PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x34b Or
	var_58_float = sqrt(var_59_int); // 0x34c Sqrt2
	var_60_float = 0.0; // 0x34d PushF
	var_61_bool = var_58_float < var_60_float; // 0x34e LT
	if(var_61_bool == 0) goto Label_850; // 0x34f JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x350 MovV
	return 2; // 0x351 Return
	
Label_850:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x352 Div2
	return 2; // 0x353 Return
}


func_852(var_115_int, var_116_string)
{
	var_117_int = 0; var_118_int = 0; // 0x354 PushV
	GetVariable(var_116_string, var_118_int); // 0x355 Func
	var_115_int = var_118_int; // 0x357 Mov
	return 2; // 0x358 Return
}


func_471(var_5_int)
{
	var_5_int = 1; // 0x1d7 TMovB
	var_15_bool = 0; // 0x1d8 PushV
	var_15_bool = 0; // 0x1d9 MovB
	var_16_bool = 0; // 0x1da PushV
	func_695(var_16_bool); // 0x1db NEW_2
	var_19_bool = var_16_bool == 0; // 0x1dd Not
	if(var_19_bool == 0) goto Label_484; // 0x1de JumpB
	var_20_bool = 0; // 0x1df PushV
	func_520(var_20_bool); // 0x1e0 NEW_2
	if(var_20_bool == 0) goto Label_484; // 0x1e2 JumpB
	var_15_bool = 1; // 0x1e3 MovB
	
Label_484:
	if(var_15_bool == 0) goto Label_490; // 0x1e4 JumpB
	var_21_object = Obj(); // 0x1e5 PushV
	func_836(var_21_object); // 0x1e6 NEW_2
	RemoveActor(var_21_object); // 0x1e8 Func
	
Label_490:
	return 0; // 0x1ea Return
}


func_857()
{
	var_20_string = "ook12Littleboy1"; // 0x35a PushS
	var_21_int = 1; // 0x35b PushI
	SetVariable(var_20_string, var_21_int); // 0x35c Func
	return 0; // 0x35e Return
}


func_601()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x259 PushV
	WaitForAnimEnd(); // 0x25a Func
	var_44_bool = 0; // 0x25c PushV
	func_695(var_44_bool); // 0x25d NEW_2
	var_45_bool = var_44_bool == 0; // 0x25f Not
	if(var_45_bool == 0) goto Label_610; // 0x260 JumpB
	return 14; // 0x261 Return
	
Label_610:
	var_46_int = 0; // 0x262 PushV
	func_909(var_46_int); // 0x263 NEW_2
	var_37_int = var_46_int; // 0x264 Mov
	var_38_int = 0; // 0x266 MovI
	
Label_615:
	var_59_bool = 0; // 0x267 PushV
	var_59_bool = 0; // 0x268 MovB
	var_60_int = 5; // 0x269 PushI
	var_61_bool = var_38_int < var_60_int; // 0x26a LT
	if(var_61_bool == 0) goto Label_625; // 0x26b JumpB
	var_62_bool = 0; // 0x26c PushV
	func_695(var_62_bool); // 0x26d NEW_2
	if(var_62_bool == 0) goto Label_625; // 0x26f JumpB
	var_59_bool = 1; // 0x270 MovB
	
Label_625:
	if(var_59_bool == 0) goto Label_677; // 0x271 JumpB
	var_63_int = 3; // 0x272 PushI
	irand(var_39_int, var_63_int); // 0x273 Func
	var_64_int = 0; // 0x275 PushI
	var_65_bool = var_39_int == var_64_int; // 0x276 Eq
	if(var_65_bool == 0) goto Label_649; // 0x277 JumpB
	var_66_int = var_37_int; // 0x278 Push
	if(var_66_int == 0) goto Label_648; // 0x279 JumpB
	irand(var_40_int, var_37_int); // 0x27a Func
	var_67_string = "all"; // 0x27c PushS
	var_68_string = ""; var_69_int = 0; // 0x27d PushV
	var_69_int = var_40_int; // 0x27e Mov
	func_902(var_68_string, var_69_int); // 0x27f NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x281 Func
	WaitForAnimEnd(var_41_bool); // 0x283 Func
	var_70_bool = var_41_bool == 0; // 0x285 Not
	if(var_70_bool == 0) goto Label_648; // 0x286 JumpB
	goto Label_677; // 0x287 Jump
	
Label_677:
	ResetAAS(); // 0x2a5 Func
	return 14; // 0x2a7 Return
	
Label_648:
	goto Label_666; // 0x288 Jump
	
Label_666:
	var_71_bool = 0; // 0x29a PushV
	func_680(var_71_bool); // 0x29b NEW_2
	var_72_bool = var_71_bool == 0; // 0x29d Not
	if(var_72_bool == 0) goto Label_672; // 0x29e JumpB
	goto Label_677; // 0x29f Jump
	
Label_672:
	ResetAAS(); // 0x2a0 Func
	var_73_int = 1; // 0x2a2 PushI
	var_38_int = var_38_int + var_73_int; // 0x2a3 Add2
	goto Label_615; // 0x2a4 Jump
	
Label_649:
	var_74_int = 1; // 0x289 PushI
	var_75_bool = var_39_int == var_74_int; // 0x28a Eq
	if(var_75_bool == 0) goto Label_663; // 0x28b JumpB
	var_76_int = 4; // 0x28c PushI
	rand(var_42_float, var_76_int); // 0x28d Func
	var_77_int = 1; // 0x28f PushI
	var_78_int = var_42_float + var_77_int; // 0x290 Add
	Sleep(var_78_int, var_43_bool); // 0x291 Func
	var_79_bool = var_43_bool == 0; // 0x293 Not
	if(var_79_bool == 0) goto Label_662; // 0x294 JumpB
	goto Label_677; // 0x295 Jump
	
Label_662:
	goto Label_666; // 0x296 Jump
	
Label_663:
	var_80_int = var_38_int; // 0x297 Push
	if(var_80_int == 0) goto Label_666; // 0x298 JumpB
	goto Label_677; // 0x299 Jump
}


func_863(var_113_bool)
{
	var_115_int = 0; var_116_string = ""; // 0x360 PushV
	var_116_string = "ook12Littleboy1"; // 0x361 MovS
	func_852(var_115_int, var_116_string); // 0x362 NEW_2
	var_119_int = 0; // 0x364 PushI
	var_120_bool = var_115_int == var_119_int; // 0x365 Eq
	if(var_120_bool == 0) goto Label_873; // 0x366 JumpB
	var_113_bool = 1; // 0x367 MovB
	return 0; // 0x368 Return
	
Label_873:
	var_113_bool = 0; // 0x369 MovB
	return 0; // 0x36a Return
}


func_875(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x36b PushV
	var_82_string = "branch"; // 0x36c PushS
	GetVariable(var_82_string, var_81_int); // 0x36d Func
	var_83_int = 0; // 0x36f PushI
	var_84_bool = var_81_int == var_83_int; // 0x370 Eq
	if(var_84_bool == 0) goto Label_885; // 0x371 JumpB
	var_79_int = 1; // 0x372 MovI
	return 2; // 0x373 Return
	
Label_885:
	var_85_int = 1; // 0x375 PushI
	var_86_bool = var_81_int == var_85_int; // 0x376 Eq
	if(var_86_bool == 0) goto Label_890; // 0x377 JumpB
	var_79_int = 2; // 0x378 MovI
	return 2; // 0x379 Return
	
Label_890:
	var_79_int = 3; // 0x37a MovI
	return 2; // 0x37b Return
}


func_892(var_76_int)
{
	var_76_int = 515560; // 0x37c MovI
	return 0; // 0x37d Return
}


func_894(var_75_int)
{
	var_75_int = 503345; // 0x37e MovI
	return 0; // 0x37f Return
}


