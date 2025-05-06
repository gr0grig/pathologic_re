task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xc1 PushI
	if(var_7_int == 0) goto Label_478; // 0xc2 JumpB
	func_569(); // 0xc4 Call
	var_9_int = 16338; // 0xc6 PushI
	var_10_bool = var_6_int == var_9_int; // 0xc7 Eq
	if(var_10_bool == 0) goto Label_206; // 0xc8 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xc9 PushV
	var_11_object = var_1_object; // 0xca MovT
	var_12_object = var_0_object; // 0xcb MovT
	func_597(); // 0xcc Call
	
Label_206:
	var_15_int = 16349; // 0xce PushI
	var_16_bool = var_6_int == var_15_int; // 0xcf Eq
	if(var_16_bool == 0) goto Label_214; // 0xd0 JumpB
	var_17_object = Obj(); var_18_object = Obj(); // 0xd1 PushV
	var_17_object = var_1_object; // 0xd2 MovT
	var_18_object = var_0_object; // 0xd3 MovT
	func_597(); // 0xd4 Call
	
Label_214:
	var_19_int = 16351; // 0xd6 PushI
	var_20_bool = var_6_int == var_19_int; // 0xd7 Eq
	if(var_20_bool == 0) goto Label_222; // 0xd8 JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xd9 PushV
	var_21_object = var_1_object; // 0xda MovT
	var_22_object = var_0_object; // 0xdb MovT
	func_597(); // 0xdc Call
	
Label_222:
	var_23_int = 16322; // 0xde PushI
	var_24_bool = var_5_int == var_23_int; // 0xdf Eq
	if(var_24_bool == 0) goto Label_300; // 0xe0 JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0xe1 PushV
	var_26_object = var_1_object; // 0xe2 MovT
	func_603(var_26_object); // 0xe3 Call
	if(var_25_bool == 0) goto Label_255; // 0xe5 JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0xe6 PushV
	var_33_object = var_1_object; // 0xe7 MovT
	var_34_object = var_0_object; // 0xe8 MovT
	func_591(); // 0xe9 Call
	var_37_string = ""; // 0xeb PushV
	var_37_string = "Neutral"; // 0xec MovS
	func_176(var_6_int, var_37_string); // 0xed Call
	var_52_int = 15058; // 0xef PushI
	SetMessage(var_52_int); // 0xf0 TObjFunc
	ClearReplies(); // 0xf2 TObjFunc
	var_53_int = 15059; // 0xf4 PushI
	var_54_int = 16324; // 0xf5 PushI
	var_55_int = 16323; // 0xf6 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xf7 TObjFunc
	var_56_int = 15072; // 0xf9 PushI
	var_57_int = -1; // 0xfa PushI
	var_58_int = 16336; // 0xfb PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xfc TObjFunc
	return 0; // 0xfe Return
	
Label_255:
	var_59_string = ""; // 0xff PushV
	var_59_string = "Neutral"; // 0x100 MovS
	func_176(var_6_int, var_59_string); // 0x101 Call
	var_60_int = 15073; // 0x103 PushI
	SetMessage(var_60_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_61_bool = 0; var_62_object = Obj(); // 0x108 PushV
	var_62_object = var_1_object; // 0x109 MovT
	func_615(var_62_object); // 0x10a Call
	if(var_61_bool == 0) goto Label_274; // 0x10c JumpB
	var_67_int = 15074; // 0x10d PushI
	var_68_int = 16339; // 0x10e PushI
	var_69_int = 16338; // 0x10f PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x110 TObjFunc
	
Label_274:
	var_70_bool = 0; var_71_object = Obj(); // 0x112 PushV
	var_71_object = var_1_object; // 0x113 MovT
	func_615(var_71_object); // 0x114 Call
	if(var_70_bool == 0) goto Label_284; // 0x116 JumpB
	var_72_int = 15085; // 0x117 PushI
	var_73_int = 16341; // 0x118 PushI
	var_74_int = 16349; // 0x119 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x11a TObjFunc
	
Label_284:
	var_75_bool = 0; var_76_object = Obj(); // 0x11c PushV
	var_76_object = var_1_object; // 0x11d MovT
	func_615(var_76_object); // 0x11e Call
	if(var_75_bool == 0) goto Label_294; // 0x120 JumpB
	var_77_int = 15086; // 0x121 PushI
	var_78_int = 16341; // 0x122 PushI
	var_79_int = 16351; // 0x123 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x124 TObjFunc
	
Label_294:
	var_80_int = 15087; // 0x126 PushI
	var_81_int = -1; // 0x127 PushI
	var_82_int = 16353; // 0x128 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x129 TObjFunc
	return 0; // 0x12b Return
	
Label_300:
	var_83_int = 16339; // 0x12c PushI
	var_84_bool = var_5_int == var_83_int; // 0x12d Eq
	if(var_84_bool == 0) goto Label_328; // 0x12e JumpB
	var_85_string = ""; // 0x12f PushV
	var_85_string = "Neutral"; // 0x130 MovS
	func_176(var_6_int, var_85_string); // 0x131 Call
	var_86_int = 15075; // 0x133 PushI
	SetMessage(var_86_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_87_int = 15076; // 0x138 PushI
	var_88_int = 16341; // 0x139 PushI
	var_89_int = 16340; // 0x13a PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x13b TObjFunc
	var_90_int = 15081; // 0x13d PushI
	var_91_int = -1; // 0x13e PushI
	var_92_int = 16345; // 0x13f PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x140 TObjFunc
	var_93_int = 15082; // 0x142 PushI
	var_94_int = 16347; // 0x143 PushI
	var_95_int = 16346; // 0x144 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_96_int = 16347; // 0x148 PushI
	var_97_bool = var_5_int == var_96_int; // 0x149 Eq
	if(var_97_bool == 0) goto Label_346; // 0x14a JumpB
	var_98_string = ""; // 0x14b PushV
	var_98_string = "Neutral"; // 0x14c MovS
	func_176(var_6_int, var_98_string); // 0x14d Call
	var_99_int = 15083; // 0x14f PushI
	SetMessage(var_99_int); // 0x150 TObjFunc
	ClearReplies(); // 0x152 TObjFunc
	var_100_int = 15084; // 0x154 PushI
	var_101_int = -1; // 0x155 PushI
	var_102_int = 16348; // 0x156 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x157 TObjFunc
	return 0; // 0x159 Return
	
Label_346:
	var_103_int = 16341; // 0x15a PushI
	var_104_bool = var_5_int == var_103_int; // 0x15b Eq
	if(var_104_bool == 0) goto Label_374; // 0x15c JumpB
	var_105_string = ""; // 0x15d PushV
	var_105_string = "Neutral"; // 0x15e MovS
	func_176(var_6_int, var_105_string); // 0x15f Call
	var_106_int = 15077; // 0x161 PushI
	SetMessage(var_106_int); // 0x162 TObjFunc
	ClearReplies(); // 0x164 TObjFunc
	var_107_int = 15078; // 0x166 PushI
	var_108_int = -1; // 0x167 PushI
	var_109_int = 16342; // 0x168 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x169 TObjFunc
	var_110_int = 15079; // 0x16b PushI
	var_111_int = -1; // 0x16c PushI
	var_112_int = 16343; // 0x16d PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x16e TObjFunc
	var_113_int = 15080; // 0x170 PushI
	var_114_int = -1; // 0x171 PushI
	var_115_int = 16344; // 0x172 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_116_int = 16324; // 0x176 PushI
	var_117_bool = var_5_int == var_116_int; // 0x177 Eq
	if(var_117_bool == 0) goto Label_397; // 0x178 JumpB
	var_118_string = ""; // 0x179 PushV
	var_118_string = "Neutral"; // 0x17a MovS
	func_176(var_6_int, var_118_string); // 0x17b Call
	var_119_int = 15060; // 0x17d PushI
	SetMessage(var_119_int); // 0x17e TObjFunc
	ClearReplies(); // 0x180 TObjFunc
	var_120_int = 15061; // 0x182 PushI
	var_121_int = 16326; // 0x183 PushI
	var_122_int = 16325; // 0x184 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x185 TObjFunc
	var_123_int = 15071; // 0x187 PushI
	var_124_int = -1; // 0x188 PushI
	var_125_int = 16335; // 0x189 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x18a TObjFunc
	return 0; // 0x18c Return
	
Label_397:
	var_126_int = 16326; // 0x18d PushI
	var_127_bool = var_5_int == var_126_int; // 0x18e Eq
	if(var_127_bool == 0) goto Label_420; // 0x18f JumpB
	var_128_string = ""; // 0x190 PushV
	var_128_string = "Neutral"; // 0x191 MovS
	func_176(var_6_int, var_128_string); // 0x192 Call
	var_129_int = 15062; // 0x194 PushI
	SetMessage(var_129_int); // 0x195 TObjFunc
	ClearReplies(); // 0x197 TObjFunc
	var_130_int = 15063; // 0x199 PushI
	var_131_int = 16328; // 0x19a PushI
	var_132_int = 16327; // 0x19b PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x19c TObjFunc
	var_133_int = 15067; // 0x19e PushI
	var_134_int = 16332; // 0x19f PushI
	var_135_int = 16331; // 0x1a0 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x1a1 TObjFunc
	return 0; // 0x1a3 Return
	
Label_420:
	var_136_int = 16332; // 0x1a4 PushI
	var_137_bool = var_5_int == var_136_int; // 0x1a5 Eq
	if(var_137_bool == 0) goto Label_443; // 0x1a6 JumpB
	var_138_string = ""; // 0x1a7 PushV
	var_138_string = "Neutral"; // 0x1a8 MovS
	func_176(var_6_int, var_138_string); // 0x1a9 Call
	var_139_int = 15068; // 0x1ab PushI
	SetMessage(var_139_int); // 0x1ac TObjFunc
	ClearReplies(); // 0x1ae TObjFunc
	var_140_int = 15069; // 0x1b0 PushI
	var_141_int = -1; // 0x1b1 PushI
	var_142_int = 16333; // 0x1b2 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x1b3 TObjFunc
	var_143_int = 15070; // 0x1b5 PushI
	var_144_int = -1; // 0x1b6 PushI
	var_145_int = 16334; // 0x1b7 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x1b8 TObjFunc
	return 0; // 0x1ba Return
	
Label_443:
	var_146_int = 16328; // 0x1bb PushI
	var_147_bool = var_5_int == var_146_int; // 0x1bc Eq
	if(var_147_bool == 0) goto Label_466; // 0x1bd JumpB
	var_148_string = ""; // 0x1be PushV
	var_148_string = "Neutral"; // 0x1bf MovS
	func_176(var_6_int, var_148_string); // 0x1c0 Call
	var_149_int = 15064; // 0x1c2 PushI
	SetMessage(var_149_int); // 0x1c3 TObjFunc
	ClearReplies(); // 0x1c5 TObjFunc
	var_150_int = 15065; // 0x1c7 PushI
	var_151_int = -1; // 0x1c8 PushI
	var_152_int = 16329; // 0x1c9 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x1ca TObjFunc
	var_153_int = 15066; // 0x1cc PushI
	var_154_int = -1; // 0x1cd PushI
	var_155_int = 16330; // 0x1ce PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x1cf TObjFunc
	return 0; // 0x1d1 Return
	
Label_466:
	var_3_string = 1; // 0x1d2 TMovB
	var_156_bool = 0; // 0x1d3 PushV
	func_648(var_156_bool); // 0x1d4 Call
	if(var_156_bool == 0) goto Label_474; // 0x1d6 JumpB
	lshStopAnimation(); // 0x1d7 Func
	goto Label_476; // 0x1d9 Jump
	
Label_476:
	return 0; // 0x1dc Return
	
Label_474:
	StopAnimation(); // 0x1da Func
	
Label_478:
	return 0; // 0x1de Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj(); // 0x1e4 PushV
	var_7_object = var_5_object; // 0x1e5 Mov
	TaskCall(0); // 0x1e6 TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x1e7 Call
	TaskReturn(); // 0x1e8 TaskReturn
	return 0; // 0x1ea Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_479:
	Hold(); // 0x1df Func
	goto Label_479; // 0x1e1 Jump
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	func_491(var_18_object); // 0x4 Call
	var_57_bool = var_17_bool == 0; // 0x6 Not
	if(var_57_bool == 0) goto Label_10; // 0x7 JumpB
	var_6_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_13_object); // 0xa Func
	var_58_int = 0; // 0xc PushV
	func_644(var_58_int); // 0xd Call
	SetNPCName(var_58_int); // 0xf ObjFunc
	var_59_string = ""; // 0x11 PushV
	func_646(var_59_string); // 0x12 Call
	SetPhoto(var_59_string); // 0x14 ObjFunc
	var_60_int = 0; // 0x16 PushV
	func_627(var_60_int); // 0x17 Call
	SetPlayerName(var_60_int); // 0x19 ObjFunc
	var_15_int = -1; // 0x1b MovI
	IsOverrideActive(var_14_bool); // 0x1c Func
	var_68_bool = var_14_bool; // 0x1e Push
	if(var_68_bool == 0) goto Label_34; // 0x1f JumpB
	var_6_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_13_object); // 0x22 Func
	var_69_object = Obj(); var_70_object = Obj(); // 0x24 PushV
	var_69_object = var_7_object; // 0x25 Mov
	var_70_object = var_13_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_16_bool); // 0x2b ObjFunc
	
Label_45:
	var_142_bool = var_16_bool == 0; // 0x2d Not
	if(var_142_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_16_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_143_object = Obj(); // 0x34 PushV
	var_143_object = var_7_object; // 0x35 Mov
	func_547(); // 0x36 Call
	StopDialog(var_13_object); // 0x38 Func
	GetReturnValue(var_15_int); // 0x3a ObjFunc
	var_6_int = var_15_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_576(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0; // 0x240 PushV
	var_47_int = var_43_cvector | var_43_cvector; // 0x241 Or
	var_46_float = sqrt(var_47_int); // 0x242 Sqrt2
	var_48_float = 0.0; // 0x243 PushF
	var_49_bool = var_46_float < var_48_float; // 0x244 LT
	if(var_49_bool == 0) goto Label_584; // 0x245 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x246 MovV
	return 2; // 0x247 Return
	
Label_584:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x248 Div2
	return 2; // 0x249 Return
}


func_644(var_58_int)
{
	var_58_int = 3354; // 0x284 MovI
	return 0; // 0x285 Return
}


func_646(var_59_string)
{
	var_59_string = "ui/NPC_Black.png"; // 0x286 MovS
	return 0; // 0x287 Return
}


func_648(var_89_bool)
{
	var_89_bool = 0; // 0x288 MovB
	return 0; // 0x289 Return
}


func_586(var_78_int, var_79_string)
{
	var_80_int = 0; var_81_int = 0; // 0x24a PushV
	GetVariable(var_79_string, var_81_int); // 0x24b Func
	var_78_int = var_81_int; // 0x24d Mov
	return 2; // 0x24e Return
}


func_591()
{
	var_86_string = "ood12Whitemask1"; // 0x250 PushS
	var_87_int = 1; // 0x251 PushI
	SetVariable(var_86_string, var_87_int); // 0x252 Func
	return 0; // 0x254 Return
}


func_597()
{
	var_13_string = "ood12Whitemask2"; // 0x256 PushS
	var_14_int = 1; // 0x257 PushI
	SetVariable(var_13_string, var_14_int); // 0x258 Func
	return 0; // 0x25a Return
}


func_603(var_76_bool)
{
	var_78_int = 0; var_79_string = ""; // 0x25c PushV
	var_79_string = "ood12Whitemask1"; // 0x25d MovS
	func_586(var_78_int, var_79_string); // 0x25e Call
	var_82_int = 0; // 0x260 PushI
	var_83_bool = var_78_int == var_82_int; // 0x261 Eq
	if(var_83_bool == 0) goto Label_613; // 0x262 JumpB
	var_76_bool = 1; // 0x263 MovB
	return 0; // 0x264 Return
	
Label_613:
	var_76_bool = 0; // 0x265 MovB
	return 0; // 0x266 Return
}


func_547()
{
	CameraSwitchToNormal(); // 0x224 Func
	return 0; // 0x226 Return
}


func_615(var_120_bool)
{
	var_122_int = 0; var_123_string = ""; // 0x268 PushV
	var_123_string = "ood12Whitemask2"; // 0x269 MovS
	func_586(var_122_int, var_123_string); // 0x26a Call
	var_124_int = 0; // 0x26c PushI
	var_125_bool = var_122_int == var_124_int; // 0x26d Eq
	if(var_125_bool == 0) goto Label_625; // 0x26e JumpB
	var_120_bool = 1; // 0x26f MovB
	return 0; // 0x270 Return
	
Label_625:
	var_120_bool = 0; // 0x271 MovB
	return 0; // 0x272 Return
}


func_551(var_92_string)
{
	var_93_float = 0; var_94_float = 0; var_95_float = 0; var_96_float = 0; // 0x227 PushV
	var_97_string = "playing "; // 0x228 PushS
	var_98_int = var_97_string + var_92_string; // 0x229 Add
	Trace(var_98_int); // 0x22a Func
	lshGetAnimTimes(var_92_string, var_95_float, var_96_float); // 0x22c Func
	lshPlayAnimation(var_95_float, var_96_float); // 0x22e Func
	var_99_string = "start: "; // 0x230 PushS
	var_100_int = var_99_string + var_95_float; // 0x231 Add
	Trace(var_100_int); // 0x232 Func
	var_101_string = "end: "; // 0x234 PushS
	var_102_int = var_101_string + var_96_float; // 0x235 Add
	Trace(var_102_int); // 0x236 Func
	return 4; // 0x238 Return
}


func_491(var_17_bool)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; // 0x1eb PushV
	GetPosition(var_28_cvector); // 0x1ec ObjFunc
	GetEyesHeight(var_27_float); // 0x1ee ObjFunc
	var_35_float = GetByIndex(var_28_cvector, 1); // 0x1f0 PushE
	var_35_float = var_35_float + var_27_float; // 0x1f1 Add2
	SetByIndex(var_28_cvector, 1) = var_35_float; // 0x1f2 PopE
	GetPosition(var_29_cvector); // 0x1f3 Func
	GetEyesHeight(var_27_float); // 0x1f5 Func
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x1f7 PushE
	var_36_float = var_36_float + var_27_float; // 0x1f8 Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x1f9 PopE
	var_30_cvector = var_28_cvector - var_29_cvector; // 0x1fa Sub2
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x1fb PushE
	var_37_float = 0; // 0x1fc MovI
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x1fd PopE
	var_38_int = var_30_cvector | var_30_cvector; // 0x1fe Or
	var_39_float = sqrt(var_38_int); // 0x1ff Sqrt
	var_30_cvector = var_30_cvector / var_30_cvector; // 0x200 Div2
	var_31_cvector = -var_30_cvector; // 0x201 Neg2
	var_40_int = 70; // 0x202 PushI
	var_41_float = var_30_cvector * var_40_int; // 0x203 Mult
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x204 PushV
	var_44_cvector = CVector(0.0, 1.0, 0.0); // 0x205 PushVec
	var_43_cvector = var_31_cvector ^ var_44_cvector; // 0x206 Xor2
	func_576(var_42_cvector, var_43_cvector); // 0x207 Call
	var_50_int = 25; // 0x209 PushI
	var_51_float = var_42_cvector * var_50_int; // 0x20a Mult
	var_52_int = var_41_float + var_51_float; // 0x20b Add
	var_53_cvector = CVector(0.0, 10.0, 0.0); // 0x20c PushVec
	var_32_cvector = var_52_int - var_53_cvector; // 0x20d Sub2
	var_33_cvector = var_29_cvector + var_32_cvector; // 0x20e Add2
	IsOverrideActive(var_34_bool); // 0x20f Func
	var_54_bool = var_34_bool; // 0x211 Push
	if(var_54_bool == 0) goto Label_533; // 0x212 JumpB
	var_17_bool = 0; // 0x213 MovB
	return 16; // 0x214 Return
	
Label_533:
	StopWorld(); // 0x215 Func
	CameraTransit(var_33_cvector, var_31_cvector); // 0x217 Func
	var_55_float = GetByIndex(var_32_cvector, 0); // 0x219 PushE
	var_56_float = GetByIndex(var_32_cvector, 2); // 0x21a PushE
	Rotate(var_55_float, var_56_float); // 0x21b Func
	CameraWaitForPlayFinish(); // 0x21d Func
	ResumeWorld(); // 0x21f Func
	var_17_bool = 1; // 0x221 MovB
	return 16; // 0x222 Return
}


func_176(var_2_object, var_88_string)
{
	var_89_bool = 0; // 0xb1 PushV
	func_648(var_89_bool); // 0xb2 Call
	var_90_bool = var_89_bool == 0; // 0xb4 Not
	if(var_90_bool == 0) goto Label_183; // 0xb5 JumpB
	return 0; // 0xb6 Return
	
Label_183:
	var_91_bool = var_88_string == var_2_object; // 0xb7 Eq
	if(var_91_bool == 0) goto Label_186; // 0xb8 JumpB
	return 0; // 0xb9 Return
	
Label_186:
	var_92_string = ""; // 0xba PushV
	var_92_string = var_88_string; // 0xbb Mov
	func_551(var_92_string); // 0xbc Call
	var_2_object = var_88_string; // 0xbe TMov
	return 0; // 0xbf Return
}


func_627(var_60_int)
{
	var_61_int = 0; var_62_int = 0; // 0x273 PushV
	var_63_string = "player"; // 0x274 PushS
	GetVariable(var_63_string, var_62_int); // 0x275 Func
	var_64_int = 0; // 0x277 PushI
	var_65_bool = var_62_int == var_64_int; // 0x278 Eq
	if(var_65_bool == 0) goto Label_637; // 0x279 JumpB
	var_60_int = 200001; // 0x27a MovI
	return 2; // 0x27b Return
	
Label_637:
	var_66_int = 1; // 0x27d PushI
	var_67_bool = var_62_int == var_66_int; // 0x27e Eq
	if(var_67_bool == 0) goto Label_642; // 0x27f JumpB
	var_60_int = 200002; // 0x280 MovI
	return 2; // 0x281 Return
	
Label_642:
	var_60_int = 200003; // 0x282 MovI
	return 2; // 0x283 Return
}


func_569()
{
	var_8_bool = 0; // 0x239 PushV
	func_648(var_8_bool); // 0x23a Call
	if(var_8_bool == 0) goto Label_575; // 0x23c JumpB
	lshStopSpeech(); // 0x23d Func
	
Label_575:
	return 0; // 0x23f Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object; // 0x40 TMov
	var_1_object = var_69_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_75_int = 1; // 0x43 PushI
	if(var_75_int == 0) goto Label_146; // 0x44 JumpB
	var_76_bool = 0; var_77_object = Obj(); // 0x45 PushV
	var_77_object = var_1_object; // 0x46 MovT
	func_603(var_77_object); // 0x47 Call
	if(var_76_bool == 0) goto Label_99; // 0x49 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x4a PushV
	var_84_object = var_1_object; // 0x4b MovT
	var_85_object = var_0_object; // 0x4c MovT
	func_591(); // 0x4d Call
	var_88_string = ""; // 0x4f PushV
	var_88_string = "Neutral"; // 0x50 MovS
	func_176(var_70_object, var_88_string); // 0x51 Call
	var_103_int = 15058; // 0x53 PushI
	SetMessage(var_103_int); // 0x54 TObjFunc
	ClearReplies(); // 0x56 TObjFunc
	var_104_int = 15059; // 0x58 PushI
	var_105_int = 16324; // 0x59 PushI
	var_106_int = 16323; // 0x5a PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x5b TObjFunc
	var_107_int = 15072; // 0x5d PushI
	var_108_int = -1; // 0x5e PushI
	var_109_int = 16336; // 0x5f PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x60 TObjFunc
	goto Label_146; // 0x62 Jump
	
Label_146:
	var_110_bool = 0; // 0x92 PushV
	func_648(var_110_bool); // 0x93 Call
	if(var_110_bool == 0) goto Label_161; // 0x95 JumpB
	
Label_150:
	lshWaitForAnimEnd(); // 0x96 Func
	var_111_string = var_3_string; // 0x98 PushT
	if(var_111_string == 0) goto Label_155; // 0x99 JumpB
	goto Label_160; // 0x9a Jump
	
Label_160:
	goto Label_175; // 0xa0 Jump
	
Label_175:
	return 0; // 0xaf Return
	
Label_155:
	var_112_string = ""; // 0x9b PushV
	var_112_string = var_2_object; // 0x9c MovT
	func_551(var_112_string); // 0x9d Call
	goto Label_150; // 0x9f Jump
	
Label_161:
	var_113_string = "all"; // 0xa1 PushS
	var_114_string = "idle"; // 0xa2 PushS
	PlayAnimation(var_113_string, var_114_string); // 0xa3 Func
	
Label_165:
	WaitForAnimEnd(); // 0xa5 Func
	var_115_string = var_3_string; // 0xa7 PushT
	if(var_115_string == 0) goto Label_170; // 0xa8 JumpB
	goto Label_175; // 0xa9 Jump
	
Label_170:
	var_116_string = "all"; // 0xaa PushS
	var_117_string = "idle"; // 0xab PushS
	PlayAnimation(var_116_string, var_117_string); // 0xac Func
	goto Label_165; // 0xae Jump
	
Label_99:
	var_118_string = ""; // 0x63 PushV
	var_118_string = "Neutral"; // 0x64 MovS
	func_176(var_70_object, var_118_string); // 0x65 Call
	var_119_int = 15073; // 0x67 PushI
	SetMessage(var_119_int); // 0x68 TObjFunc
	ClearReplies(); // 0x6a TObjFunc
	var_120_bool = 0; var_121_object = Obj(); // 0x6c PushV
	var_121_object = var_1_object; // 0x6d MovT
	func_615(var_121_object); // 0x6e Call
	if(var_120_bool == 0) goto Label_118; // 0x70 JumpB
	var_126_int = 15074; // 0x71 PushI
	var_127_int = 16339; // 0x72 PushI
	var_128_int = 16338; // 0x73 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x74 TObjFunc
	
Label_118:
	var_129_bool = 0; var_130_object = Obj(); // 0x76 PushV
	var_130_object = var_1_object; // 0x77 MovT
	func_615(var_130_object); // 0x78 Call
	if(var_129_bool == 0) goto Label_128; // 0x7a JumpB
	var_131_int = 15085; // 0x7b PushI
	var_132_int = 16341; // 0x7c PushI
	var_133_int = 16349; // 0x7d PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x7e TObjFunc
	
Label_128:
	var_134_bool = 0; var_135_object = Obj(); // 0x80 PushV
	var_135_object = var_1_object; // 0x81 MovT
	func_615(var_135_object); // 0x82 Call
	if(var_134_bool == 0) goto Label_138; // 0x84 JumpB
	var_136_int = 15086; // 0x85 PushI
	var_137_int = 16341; // 0x86 PushI
	var_138_int = 16351; // 0x87 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x88 TObjFunc
	
Label_138:
	var_139_int = 15087; // 0x8a PushI
	var_140_int = -1; // 0x8b PushI
	var_141_int = 16353; // 0x8c PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x8d TObjFunc
	goto Label_146; // 0x8f Jump
}


