task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xce PushI
	if(var_8_int == 0) goto Label_418; // 0xcf JumpB
	func_711(); // 0xd1 NEW_2
	var_10_int = 22542; // 0xd3 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xd4 Eq
	if(var_11_bool == 0) goto Label_219; // 0xd5 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xd6 PushV
	var_12_object = var_1_object; // 0xd7 MovT
	var_13_object = var_0_object; // 0xd8 MovT
	func_775(); // 0xd9 NEW_2
	
Label_219:
	var_52_int = 22539; // 0xdb PushI
	var_53_bool = var_6_int == var_52_int; // 0xdc Eq
	if(var_53_bool == 0) goto Label_293; // 0xdd JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0xde PushV
	var_55_object = var_1_object; // 0xdf MovT
	func_805(var_55_object); // 0xe0 NEW_2
	if(var_54_bool == 0) goto Label_242; // 0xe2 JumpB
	var_62_string = ""; // 0xe3 PushV
	var_62_string = "Neutral"; // 0xe4 MovS
	func_183(var_7_bool, var_62_string); // 0xe5 NEW_2
	var_79_int = 521352; // 0xe7 PushI
	SetMessage(var_79_int); // 0xe8 TObjFunc
	ClearReplies(); // 0xea TObjFunc
	var_80_int = 524063; // 0xec PushI
	var_81_int = 25361; // 0xed PushI
	var_82_int = 25360; // 0xee PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xef TObjFunc
	return 0; // 0xf1 Return
	
Label_242:
	var_83_bool = 0; var_84_object = Obj(); // 0xf2 PushV
	var_84_object = var_1_object; // 0xf3 MovT
	func_817(var_83_bool, var_84_object); // 0xf4 NEW_2
	var_91_bool = var_83_bool == 0; // 0xf6 Not
	if(var_91_bool == 0) goto Label_268; // 0xf7 JumpB
	var_92_string = ""; // 0xf8 PushV
	var_92_string = "Neutral"; // 0xf9 MovS
	func_183(var_7_bool, var_92_string); // 0xfa NEW_2
	var_93_int = 521356; // 0xfc PushI
	SetMessage(var_93_int); // 0xfd TObjFunc
	ClearReplies(); // 0xff TObjFunc
	var_94_int = 521357; // 0x101 PushI
	var_95_int = 25366; // 0x102 PushI
	var_96_int = 22544; // 0x103 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x104 TObjFunc
	var_97_int = 524069; // 0x106 PushI
	var_98_int = 25368; // 0x107 PushI
	var_99_int = 25367; // 0x108 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_100_bool = 0; var_101_object = Obj(); // 0x10c PushV
	var_101_object = var_1_object; // 0x10d MovT
	func_817(var_100_bool, var_101_object); // 0x10e NEW_2
	if(var_100_bool == 0) goto Label_293; // 0x110 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x111 PushV
	var_102_object = var_1_object; // 0x112 MovT
	var_103_object = var_0_object; // 0x113 MovT
	func_799(); // 0x114 NEW_2
	var_106_string = ""; // 0x116 PushV
	var_106_string = "Neutral"; // 0x117 MovS
	func_183(var_7_bool, var_106_string); // 0x118 NEW_2
	var_107_int = 521358; // 0x11a PushI
	SetMessage(var_107_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_108_int = 521359; // 0x11f PushI
	var_109_int = -1; // 0x120 PushI
	var_110_int = 22546; // 0x121 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x122 TObjFunc
	return 0; // 0x124 Return
	
Label_293:
	var_111_int = 25368; // 0x125 PushI
	var_112_bool = var_6_int == var_111_int; // 0x126 Eq
	if(var_112_bool == 0) goto Label_311; // 0x127 JumpB
	var_113_string = ""; // 0x128 PushV
	var_113_string = "Neutral"; // 0x129 MovS
	func_183(var_7_bool, var_113_string); // 0x12a NEW_2
	var_114_int = 524070; // 0x12c PushI
	SetMessage(var_114_int); // 0x12d TObjFunc
	ClearReplies(); // 0x12f TObjFunc
	var_115_int = 524071; // 0x131 PushI
	var_116_int = 25366; // 0x132 PushI
	var_117_int = 25369; // 0x133 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_118_int = 25366; // 0x137 PushI
	var_119_bool = var_6_int == var_118_int; // 0x138 Eq
	if(var_119_bool == 0) goto Label_329; // 0x139 JumpB
	var_120_string = ""; // 0x13a PushV
	var_120_string = "Neutral"; // 0x13b MovS
	func_183(var_7_bool, var_120_string); // 0x13c NEW_2
	var_121_int = 524068; // 0x13e PushI
	SetMessage(var_121_int); // 0x13f TObjFunc
	ClearReplies(); // 0x141 TObjFunc
	var_122_int = 524072; // 0x143 PushI
	var_123_int = 25372; // 0x144 PushI
	var_124_int = 25371; // 0x145 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x146 TObjFunc
	return 0; // 0x148 Return
	
Label_329:
	var_125_int = 25372; // 0x149 PushI
	var_126_bool = var_6_int == var_125_int; // 0x14a Eq
	if(var_126_bool == 0) goto Label_347; // 0x14b JumpB
	var_127_string = ""; // 0x14c PushV
	var_127_string = "Neutral"; // 0x14d MovS
	func_183(var_7_bool, var_127_string); // 0x14e NEW_2
	var_128_int = 524073; // 0x150 PushI
	SetMessage(var_128_int); // 0x151 TObjFunc
	ClearReplies(); // 0x153 TObjFunc
	var_129_int = 524074; // 0x155 PushI
	var_130_int = -1; // 0x156 PushI
	var_131_int = 25373; // 0x157 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x158 TObjFunc
	return 0; // 0x15a Return
	
Label_347:
	var_132_int = 25361; // 0x15b PushI
	var_133_bool = var_6_int == var_132_int; // 0x15c Eq
	if(var_133_bool == 0) goto Label_365; // 0x15d JumpB
	var_134_string = ""; // 0x15e PushV
	var_134_string = "Neutral"; // 0x15f MovS
	func_183(var_7_bool, var_134_string); // 0x160 NEW_2
	var_135_int = 524064; // 0x162 PushI
	SetMessage(var_135_int); // 0x163 TObjFunc
	ClearReplies(); // 0x165 TObjFunc
	var_136_int = 524065; // 0x167 PushI
	var_137_int = 25363; // 0x168 PushI
	var_138_int = 25362; // 0x169 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x16a TObjFunc
	return 0; // 0x16c Return
	
Label_365:
	var_139_int = 25363; // 0x16d PushI
	var_140_bool = var_6_int == var_139_int; // 0x16e Eq
	if(var_140_bool == 0) goto Label_388; // 0x16f JumpB
	var_141_string = ""; // 0x170 PushV
	var_141_string = "Neutral"; // 0x171 MovS
	func_183(var_7_bool, var_141_string); // 0x172 NEW_2
	var_142_int = 524066; // 0x174 PushI
	SetMessage(var_142_int); // 0x175 TObjFunc
	ClearReplies(); // 0x177 TObjFunc
	var_143_int = 521353; // 0x179 PushI
	var_144_int = 22541; // 0x17a PushI
	var_145_int = 22540; // 0x17b PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x17c TObjFunc
	var_146_int = 524067; // 0x17e PushI
	var_147_int = 22541; // 0x17f PushI
	var_148_int = 25364; // 0x180 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x181 TObjFunc
	return 0; // 0x183 Return
	
Label_388:
	var_149_int = 22541; // 0x184 PushI
	var_150_bool = var_6_int == var_149_int; // 0x185 Eq
	if(var_150_bool == 0) goto Label_406; // 0x186 JumpB
	var_151_string = ""; // 0x187 PushV
	var_151_string = "Neutral"; // 0x188 MovS
	func_183(var_7_bool, var_151_string); // 0x189 NEW_2
	var_152_int = 521354; // 0x18b PushI
	SetMessage(var_152_int); // 0x18c TObjFunc
	ClearReplies(); // 0x18e TObjFunc
	var_153_int = 521355; // 0x190 PushI
	var_154_int = -1; // 0x191 PushI
	var_155_int = 22542; // 0x192 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x193 TObjFunc
	return 0; // 0x195 Return
	
Label_406:
	var_3_string = 1; // 0x196 TMovB
	var_156_bool = 0; // 0x197 PushV
	func_913(var_156_bool); // 0x198 NEW_2
	if(var_156_bool == 0) goto Label_414; // 0x19a JumpB
	lshStopAnimation(); // 0x19b Func
	goto Label_416; // 0x19d Jump
	
Label_416:
	return 0; // 0x1a0 Return
	
Label_414:
	StopAnimation(); // 0x19e Func
	
Label_418:
	return 0; // 0x1a2 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_583(); // 0x1a5 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x1a7 PushV
	var_8_object = var_6_object; // 0x1a8 Mov
	TaskCall(0); // 0x1a9 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x1aa NEW_2
	TaskReturn(); // 0x1ab TaskReturn
	return 0; // 0x1ad Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x1d8 PushS
	var_8_bool = var_6_string == var_7_string; // 0x1d9 Eq
	if(var_8_bool == 0) goto Label_478; // 0x1da JumpB
	func_451(var_6_string); // 0x1dc NEW_2
	
Label_478:
	return 0; // 0x1de Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x1df Func
	sync(); // 0x1e1 Func
	return 0; // 0x1e3 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1e4 PushV
	var_6_bool = 0; // 0x1e5 MovB
	var_7_object = var_0_object; // 0x1e6 PushT
	if(var_7_object == 0) goto Label_493; // 0x1e7 JumpB
	var_8_bool = 0; // 0x1e8 PushV
	func_500(var_8_bool); // 0x1e9 NEW_2
	if(var_8_bool == 0) goto Label_493; // 0x1eb JumpB
	var_6_bool = 1; // 0x1ec MovB
	
Label_493:
	if(var_6_bool == 0) goto Label_499; // 0x1ed JumpB
	var_9_object = Obj(); // 0x1ee PushV
	func_718(var_9_object); // 0x1ef NEW_2
	RemoveActor(var_9_object); // 0x1f1 Func
	
Label_499:
	return 0; // 0x1f3 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x1ae PushV
	
Label_431:
	var_8_bool = 0; // 0x1af PushV
	func_588(var_8_bool); // 0x1b0 NEW_2
	var_11_bool = var_8_bool == 0; // 0x1b2 Not
	if(var_11_bool == 0) goto Label_439; // 0x1b3 JumpB
	Hold(); // 0x1b4 Func
	goto Label_431; // 0x1b6 Jump
	
Label_439:
	var_12_int = 3; // 0x1b7 PushI
	rand(var_7_float, var_12_int); // 0x1b8 Func
	var_13_int = 3; // 0x1ba PushI
	var_14_int = var_7_float + var_13_int; // 0x1bb Add
	Sleep(var_14_int); // 0x1bc Func
	func_502(); // 0x1bf NEW_2
	goto Label_431; // 0x1c1 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 130.0; // 0x4 MovF
	func_593(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_907(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_905(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_909(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_911(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_888(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_object = Obj(); var_80_object = Obj(); // 0x2f PushV
	var_79_object = var_8_object; // 0x30 Mov
	var_80_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_161_bool = var_17_bool == 0; // 0x38 Not
	if(var_161_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_162_object = Obj(); // 0x3f PushV
	var_162_object = var_8_object; // 0x40 Mov
	func_662(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_775()
{
	var_14_float = 0; var_15_float = 0; // 0x307 PushV
	var_16_string = "b7q03"; // 0x308 PushS
	var_17_int = 2; // 0x309 PushI
	SetVariable(var_16_string, var_17_int); // 0x30a Func
	func_834(); // 0x30d NEW_2
	var_41_string = "disease"; // 0x30f PushS
	GetProperty(var_41_string, var_15_float); // 0x310 ObjFunc
	var_42_float = 0.5; // 0x312 PushF
	var_43_bool = var_15_float < var_42_float; // 0x313 LT
	if(var_43_bool == 0) goto Label_793; // 0x314 JumpB
	var_44_string = "disease"; // 0x315 PushS
	var_45_float = 0.5; // 0x316 PushF
	SetProperty(var_44_string, var_45_float); // 0x317 ObjFunc
	
Label_793:
	var_46_bool = 0; var_47_string = ""; var_48_string = ""; // 0x319 PushV
	var_47_string = "quest_b7_03"; // 0x31a MovS
	var_48_string = "remove_birdmask"; // 0x31b MovS
	func_739(var_46_bool, var_47_string, var_48_string); // 0x31c NEW_2
	return 2; // 0x31e Return
}


func_905(var_67_int)
{
	var_67_int = 515571; // 0x389 MovI
	return 0; // 0x38a Return
}


func_907(var_66_int)
{
	var_66_int = 504029; // 0x38b MovI
	return 0; // 0x38c Return
}


func_909(var_68_string)
{
	var_68_string = "ui/NPC_bmask.png"; // 0x38d MovS
	return 0; // 0x38e Return
}


func_911(var_69_string)
{
	var_69_string = "ui/NPC_bmask_b.png"; // 0x38f MovS
	return 0; // 0x390 Return
}


func_913(var_61_bool)
{
	var_61_bool = 0; // 0x391 MovB
	return 0; // 0x392 Return
}


func_662()
{
	var_163_bool = 0; var_164_bool = 0; // 0x296 PushV
	var_165_bool = 1; // 0x297 PushB
	CameraSwitchToNormal(var_165_bool); // 0x298 Func
	var_166_bool = 0; // 0x29a PushV
	func_913(var_166_bool); // 0x29b NEW_2
	if(var_166_bool == 0) goto Label_671; // 0x29d JumpB
	goto Label_679; // 0x29e Jump
	
Label_679:
	return 2; // 0x2a7 Return
	
Label_671:
	var_167_string = "head"; // 0x29f PushS
	HasAnimationTrack(var_164_bool, var_167_string); // 0x2a0 Func
	var_168_bool = var_164_bool; // 0x2a2 Push
	if(var_168_bool == 0) goto Label_679; // 0x2a3 JumpB
	var_169_string = "head"; // 0x2a4 PushS
	UnlookAsync(var_169_string); // 0x2a5 Func
}


func_799()
{
	var_154_string = "b7q03SerumWorks"; // 0x320 PushS
	var_155_int = 1; // 0x321 PushI
	SetVariable(var_154_string, var_155_int); // 0x322 Func
	return 0; // 0x324 Return
}


func_805(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x326 PushV
	var_89_string = "b7q03"; // 0x327 MovS
	func_734(var_88_int, var_89_string); // 0x328 NEW_2
	var_92_int = 1; // 0x32a PushI
	var_93_bool = var_88_int == var_92_int; // 0x32b Eq
	if(var_93_bool == 0) goto Label_815; // 0x32c JumpB
	var_86_bool = 1; // 0x32d MovB
	return 0; // 0x32e Return
	
Label_815:
	var_86_bool = 0; // 0x32f MovB
	return 0; // 0x330 Return
}


func_680(var_117_string)
{
	var_118_bool = 0; var_119_float = 0; var_120_float = 0; var_121_bool = 0; var_122_float = 0; var_123_float = 0; // 0x2a8 PushV
	lshHasAnimation(var_121_bool, var_117_string); // 0x2a9 Func
	var_124_bool = var_121_bool; // 0x2ab Push
	if(var_124_bool == 0) goto Label_691; // 0x2ac JumpB
	lshGetAnimTimes(var_117_string, var_122_float, var_123_float); // 0x2ad Func
	var_125_bool = 0; // 0x2af PushB
	lshPlayAnimation(var_122_float, var_123_float, var_125_bool); // 0x2b0 Func
	goto Label_695; // 0x2b2 Jump
	
Label_695:
	return 6; // 0x2b7 Return
	
Label_691:
	var_126_string = "Can't find lsh animation : "; // 0x2b3 PushS
	var_127_int = var_126_string + var_117_string; // 0x2b4 Add
	Trace(var_127_int); // 0x2b5 Func
}


func_817(var_133_bool, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj(); // 0x332 PushV
	var_136_object = var_134_object; // 0x333 Mov
	func_827(var_136_object); // 0x334 NEW_2
	if(var_135_bool == 0) goto Label_825; // 0x336 JumpB
	var_133_bool = 1; // 0x337 MovB
	return 0; // 0x338 Return
	
Label_825:
	var_133_bool = 0; // 0x339 MovB
	return 0; // 0x33a Return
}


func_183(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0xb8 PushV
	func_913(var_95_bool); // 0xb9 NEW_2
	var_96_bool = var_95_bool == 0; // 0xbb Not
	if(var_96_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_97_bool = var_94_string == var_2_object; // 0xbe Eq
	if(var_97_bool == 0) goto Label_193; // 0xbf JumpB
	return 0; // 0xc0 Return
	
Label_193:
	var_98_string = ""; var_99_bool = 0; // 0xc1 PushV
	var_98_string = var_94_string; // 0xc2 Mov
	var_100_string = ""; // 0xc3 PushS
	var_101_bool = var_94_string == var_100_string; // 0xc4 Eq
	if(var_101_bool == 0) goto Label_200; // 0xc5 JumpB
	var_99_bool = 0; // 0xc6 MovB
	goto Label_201; // 0xc7 Jump
	
Label_201:
	func_696(var_98_string, var_99_bool); // 0xc9 NEW_2
	var_2_object = var_94_string; // 0xcb TMov
	return 0; // 0xcc Return
	
Label_200:
	var_99_bool = 1; // 0xc8 MovB
}


func_696(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x2b8 PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x2b9 Func
	var_108_bool = var_105_bool; // 0x2bb Push
	if(var_108_bool == 0) goto Label_706; // 0x2bc JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x2bd Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x2bf Func
	goto Label_710; // 0x2c1 Jump
	
Label_710:
	return 6; // 0x2c6 Return
	
Label_706:
	var_109_string = "Can't find lsh animation : "; // 0x2c2 PushS
	var_110_int = var_109_string + var_98_string; // 0x2c3 Add
	Trace(var_110_int); // 0x2c4 Func
}


func_827(var_135_bool)
{
	var_137_float = 0; var_138_float = 0; // 0x33b PushV
	var_139_string = "disease"; // 0x33c PushS
	GetProperty(var_139_string, var_138_float); // 0x33d ObjFunc
	var_140_int = 0; // 0x33f PushI
	var_135_bool = var_138_float == var_140_int; // 0x340 Eq2
	return 2; // 0x341 Return
}


func_834()
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x342 PushV
	var_20_int = 282; // 0x343 PushI
	var_21_int = 2; // 0x344 PushI
	var_22_int = 521365; // 0x345 PushI
	CreateDiaryEntry(var_19_object, var_20_int, var_21_int, var_22_int); // 0x346 Func
	var_23_bool = 0; var_24_object = Obj(); var_25_int = 0; // 0x348 PushV
	var_24_object = var_19_object; // 0x349 Mov
	var_25_int = 280; // 0x34a MovI
	func_860(var_23_bool, var_24_object, var_25_int); // 0x34b NEW_2
	return 2; // 0x34d Return
}


func_451(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x1c3 PushV
	var_0_object = 1; // 0x1c4 TMovB
	IsLoaded(var_10_bool); // 0x1c5 Func
	var_11_bool = 0; // 0x1c7 PushV
	var_11_bool = 0; // 0x1c8 MovB
	var_12_bool = var_10_bool == 0; // 0x1c9 Not
	if(var_12_bool == 0) goto Label_464; // 0x1ca JumpB
	var_13_bool = 0; // 0x1cb PushV
	func_500(var_13_bool); // 0x1cc NEW_2
	if(var_13_bool == 0) goto Label_464; // 0x1ce JumpB
	var_11_bool = 1; // 0x1cf MovB
	
Label_464:
	if(var_11_bool == 0) goto Label_470; // 0x1d0 JumpB
	var_14_object = Obj(); // 0x1d1 PushV
	func_718(var_14_object); // 0x1d2 NEW_2
	RemoveActor(var_14_object); // 0x1d4 Func
	
Label_470:
	return 2; // 0x1d6 Return
}


func_581(var_56_bool)
{
	var_56_bool = 1; // 0x245 MovB
	return 0; // 0x246 Return
}


func_711()
{
	var_9_bool = 0; // 0x2c7 PushV
	func_913(var_9_bool); // 0x2c8 NEW_2
	if(var_9_bool == 0) goto Label_717; // 0x2ca JumpB
	lshStopSpeech(); // 0x2cb Func
	
Label_717:
	return 0; // 0x2cd Return
}


func_583()
{
	StopAnimation(); // 0x247 Func
	StopGroup0(); // 0x249 Func
	return 0; // 0x24b Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_153; // 0x4f JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x50 PushV
	var_87_object = var_1_object; // 0x51 MovT
	func_805(var_87_object); // 0x52 NEW_2
	if(var_86_bool == 0) goto Label_100; // 0x54 JumpB
	var_94_string = ""; // 0x55 PushV
	var_94_string = "Neutral"; // 0x56 MovS
	func_183(var_80_object, var_94_string); // 0x57 NEW_2
	var_111_int = 521352; // 0x59 PushI
	SetMessage(var_111_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_112_int = 524063; // 0x5e PushI
	var_113_int = 25361; // 0x5f PushI
	var_114_int = 25360; // 0x60 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x61 TObjFunc
	goto Label_153; // 0x63 Jump
	
Label_153:
	var_115_bool = 0; // 0x99 PushV
	func_913(var_115_bool); // 0x9a NEW_2
	if(var_115_bool == 0) goto Label_168; // 0x9c JumpB
	
Label_157:
	lshWaitForAnimEnd(); // 0x9d Func
	var_116_string = var_3_string; // 0x9f PushT
	if(var_116_string == 0) goto Label_162; // 0xa0 JumpB
	goto Label_167; // 0xa1 Jump
	
Label_167:
	goto Label_182; // 0xa7 Jump
	
Label_182:
	return 0; // 0xb6 Return
	
Label_162:
	var_117_string = ""; // 0xa2 PushV
	var_117_string = var_2_object; // 0xa3 MovT
	func_680(var_117_string); // 0xa4 NEW_2
	goto Label_157; // 0xa6 Jump
	
Label_168:
	var_128_string = "all"; // 0xa8 PushS
	var_129_string = "idle"; // 0xa9 PushS
	PlayAnimation(var_128_string, var_129_string); // 0xaa Func
	
Label_172:
	WaitForAnimEnd(); // 0xac Func
	var_130_string = var_3_string; // 0xae PushT
	if(var_130_string == 0) goto Label_177; // 0xaf JumpB
	goto Label_182; // 0xb0 Jump
	
Label_177:
	var_131_string = "all"; // 0xb1 PushS
	var_132_string = "idle"; // 0xb2 PushS
	PlayAnimation(var_131_string, var_132_string); // 0xb3 Func
	goto Label_172; // 0xb5 Jump
	
Label_100:
	var_133_bool = 0; var_134_object = Obj(); // 0x64 PushV
	var_134_object = var_1_object; // 0x65 MovT
	func_817(var_133_bool, var_134_object); // 0x66 NEW_2
	var_141_bool = var_133_bool == 0; // 0x68 Not
	if(var_141_bool == 0) goto Label_126; // 0x69 JumpB
	var_142_string = ""; // 0x6a PushV
	var_142_string = "Neutral"; // 0x6b MovS
	func_183(var_80_object, var_142_string); // 0x6c NEW_2
	var_143_int = 521356; // 0x6e PushI
	SetMessage(var_143_int); // 0x6f TObjFunc
	ClearReplies(); // 0x71 TObjFunc
	var_144_int = 521357; // 0x73 PushI
	var_145_int = 25366; // 0x74 PushI
	var_146_int = 22544; // 0x75 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x76 TObjFunc
	var_147_int = 524069; // 0x78 PushI
	var_148_int = 25368; // 0x79 PushI
	var_149_int = 25367; // 0x7a PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x7b TObjFunc
	goto Label_153; // 0x7d Jump
	
Label_126:
	var_150_bool = 0; var_151_object = Obj(); // 0x7e PushV
	var_151_object = var_1_object; // 0x7f MovT
	func_817(var_150_bool, var_151_object); // 0x80 NEW_2
	if(var_150_bool == 0) goto Label_151; // 0x82 JumpB
	var_152_object = Obj(); var_153_object = Obj(); // 0x83 PushV
	var_152_object = var_1_object; // 0x84 MovT
	var_153_object = var_0_object; // 0x85 MovT
	func_799(); // 0x86 NEW_2
	var_156_string = ""; // 0x88 PushV
	var_156_string = "Neutral"; // 0x89 MovS
	func_183(var_80_object, var_156_string); // 0x8a NEW_2
	var_157_int = 521358; // 0x8c PushI
	SetMessage(var_157_int); // 0x8d TObjFunc
	ClearReplies(); // 0x8f TObjFunc
	var_158_int = 521359; // 0x91 PushI
	var_159_int = -1; // 0x92 PushI
	var_160_int = 22546; // 0x93 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x94 TObjFunc
	goto Label_153; // 0x96 Jump
	
Label_151:
	return 0; // 0x97 Return
}


func_588(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x24c PushV
	IsLoaded(var_10_bool); // 0x24d Func
	var_8_bool = var_10_bool; // 0x24f Mov
	return 2; // 0x250 Return
}


func_718(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2ce PushV
	self(var_11_object); // 0x2cf Func
	var_9_object = var_11_object; // 0x2d1 Mov
	return 2; // 0x2d2 Return
}


func_847(var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x34f PushV
	GetDiaryRoot(var_34_object); // 0x350 Func
	var_35_bool = var_34_object == 0; // 0x352 Not
	if(var_35_bool == 0) goto Label_857; // 0x353 JumpB
	var_36_string = "Can't retrieve diary root"; // 0x354 PushS
	Trace(var_36_string); // 0x355 Func
	var_32_object = 0; // 0x357 MovB
	return 2; // 0x358 Return
	
Label_857:
	var_32_object = var_34_object; // 0x359 Mov
	return 2; // 0x35a Return
}


func_593(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x251 PushV
	GetPosition(var_31_cvector); // 0x252 ObjFunc
	GetEyesHeight(var_30_float); // 0x254 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x256 PushE
	var_39_float = var_39_float + var_30_float; // 0x257 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x258 PopE
	GetPosition(var_32_cvector); // 0x259 Func
	GetEyesHeight(var_30_float); // 0x25b Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x25d PushE
	var_40_float = var_40_float + var_30_float; // 0x25e Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x25f PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x260 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x261 PushE
	var_41_float = 0; // 0x262 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x263 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x264 Or
	var_43_float = sqrt(var_42_int); // 0x265 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x266 Div2
	var_34_cvector = -var_33_cvector; // 0x267 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x268 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x269 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x26a PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x26b Xor2
	func_724(var_45_cvector, var_46_cvector); // 0x26c NEW_2
	var_53_int = 25; // 0x26e PushI
	var_54_float = var_45_cvector * var_53_int; // 0x26f Mult
	var_55_int = var_44_float + var_54_float; // 0x270 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x271 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x272 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x273 Add2
	IsOverrideActive(var_37_bool); // 0x274 Func
	var_57_bool = var_37_bool; // 0x276 Push
	if(var_57_bool == 0) goto Label_634; // 0x277 JumpB
	var_18_bool = 0; // 0x278 MovB
	return 18; // 0x279 Return
	
Label_634:
	StopWorld(); // 0x27a Func
	var_58_bool = 1; // 0x27c PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x27d Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x27f PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x280 PushE
	Rotate(var_59_float, var_60_float); // 0x281 Func
	var_61_bool = 0; // 0x283 PushV
	func_913(var_61_bool); // 0x284 NEW_2
	if(var_61_bool == 0) goto Label_648; // 0x286 JumpB
	goto Label_656; // 0x287 Jump
	
Label_656:
	CameraWaitForPlayFinish(); // 0x290 Func
	ResumeWorld(); // 0x292 Func
	var_18_bool = 1; // 0x294 MovB
	return 18; // 0x295 Return
	
Label_648:
	var_62_string = "head"; // 0x288 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x289 Func
	var_63_bool = var_38_bool; // 0x28b Push
	if(var_63_bool == 0) goto Label_656; // 0x28c JumpB
	var_64_string = "head"; // 0x28d PushS
	LookAsyncCamera(var_64_string); // 0x28e Func
}


func_724(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x2d4 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x2d5 Or
	var_49_float = sqrt(var_50_int); // 0x2d6 Sqrt2
	var_51_float = 0.0; // 0x2d7 PushF
	var_52_bool = var_49_float < var_51_float; // 0x2d8 LT
	if(var_52_bool == 0) goto Label_732; // 0x2d9 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2da MovV
	return 2; // 0x2db Return
	
Label_732:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2dc Div2
	return 2; // 0x2dd Return
}


func_860(var_23_bool, var_24_object, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0; // 0x35c PushV
	var_32_object = Obj(); // 0x35d PushV
	func_847(var_32_object); // 0x35e NEW_2
	var_29_object = var_32_object; // 0x35f Mov
	Find(var_25_int, var_30_object); // 0x361 ObjFunc
	var_37_bool = var_30_object == 0; // 0x363 Not
	if(var_37_bool == 0) goto Label_875; // 0x364 JumpB
	var_38_string = "Can't find diary parent with id: "; // 0x365 PushS
	var_39_int = var_38_string + var_25_int; // 0x366 Add
	Trace(var_39_int); // 0x367 Func
	var_23_bool = 0; // 0x369 MovB
	return 6; // 0x36a Return
	
Label_875:
	AddChild(var_24_object); // 0x36b ObjFunc
	var_40_int = 7; // 0x36d PushI
	SendWorldWndMessage(var_40_int); // 0x36e Func
	GetCategory(var_31_int); // 0x370 ObjFunc
	SetDiarySection(var_31_int); // 0x372 Func
	var_23_bool = 0; // 0x374 MovB
	return 6; // 0x375 Return
}


func_734(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x2de PushV
	GetVariable(var_89_string, var_91_int); // 0x2df Func
	var_88_int = var_91_int; // 0x2e1 Mov
	return 2; // 0x2e2 Return
}


func_739(var_46_bool, var_47_string, var_48_string)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x2e3 PushV
	FindActor(var_50_object, var_47_string); // 0x2e4 Func
	var_51_bool = var_50_object == 0; // 0x2e6 NullEq
	if(var_51_bool == 0) goto Label_746; // 0x2e7 JumpB
	var_46_bool = 0; // 0x2e8 MovB
	return 2; // 0x2e9 Return
	
Label_746:
	Trigger(var_50_object, var_48_string); // 0x2ea Func
	var_46_bool = 1; // 0x2ec MovB
	return 2; // 0x2ed Return
}


func_751(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x2ef PushV
	var_40_string = "idle"; // 0x2f0 MovS
	var_41_int = var_38_int; // 0x2f1 Push
	if(var_41_int == 0) goto Label_756; // 0x2f2 JumpB
	var_40_string = var_40_string + var_38_int; // 0x2f3 Add2
	
Label_756:
	var_37_string = var_40_string; // 0x2f4 Mov
	return 2; // 0x2f5 Return
}


func_500(var_8_bool)
{
	var_8_bool = 1; // 0x1f4 MovB
	return 0; // 0x1f5 Return
}


func_502()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x1f6 PushV
	WaitForAnimEnd(); // 0x1f7 Func
	var_29_bool = 0; // 0x1f9 PushV
	func_588(var_29_bool); // 0x1fa NEW_2
	var_30_bool = var_29_bool == 0; // 0x1fc Not
	if(var_30_bool == 0) goto Label_511; // 0x1fd JumpB
	return 14; // 0x1fe Return
	
Label_511:
	var_31_int = 0; // 0x1ff PushV
	func_758(var_31_int); // 0x200 NEW_2
	var_22_int = var_31_int; // 0x201 Mov
	var_23_int = 0; // 0x203 MovI
	
Label_516:
	var_44_bool = 0; // 0x204 PushV
	var_44_bool = 0; // 0x205 MovB
	var_45_int = 5; // 0x206 PushI
	var_46_bool = var_23_int < var_45_int; // 0x207 LT
	if(var_46_bool == 0) goto Label_526; // 0x208 JumpB
	var_47_bool = 0; // 0x209 PushV
	func_588(var_47_bool); // 0x20a NEW_2
	if(var_47_bool == 0) goto Label_526; // 0x20c JumpB
	var_44_bool = 1; // 0x20d MovB
	
Label_526:
	if(var_44_bool == 0) goto Label_578; // 0x20e JumpB
	var_48_int = 3; // 0x20f PushI
	irand(var_24_int, var_48_int); // 0x210 Func
	var_49_int = 0; // 0x212 PushI
	var_50_bool = var_24_int == var_49_int; // 0x213 Eq
	if(var_50_bool == 0) goto Label_550; // 0x214 JumpB
	var_51_int = var_22_int; // 0x215 Push
	if(var_51_int == 0) goto Label_549; // 0x216 JumpB
	irand(var_25_int, var_22_int); // 0x217 Func
	var_52_string = "all"; // 0x219 PushS
	var_53_string = ""; var_54_int = 0; // 0x21a PushV
	var_54_int = var_25_int; // 0x21b Mov
	func_751(var_53_string, var_54_int); // 0x21c NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x21e Func
	WaitForAnimEnd(var_26_bool); // 0x220 Func
	var_55_bool = var_26_bool == 0; // 0x222 Not
	if(var_55_bool == 0) goto Label_549; // 0x223 JumpB
	goto Label_578; // 0x224 Jump
	
Label_578:
	ResetAAS(); // 0x242 Func
	return 14; // 0x244 Return
	
Label_549:
	goto Label_567; // 0x225 Jump
	
Label_567:
	var_56_bool = 0; // 0x237 PushV
	func_581(var_56_bool); // 0x238 NEW_2
	var_57_bool = var_56_bool == 0; // 0x23a Not
	if(var_57_bool == 0) goto Label_573; // 0x23b JumpB
	goto Label_578; // 0x23c Jump
	
Label_573:
	ResetAAS(); // 0x23d Func
	var_58_int = 1; // 0x23f PushI
	var_23_int = var_23_int + var_58_int; // 0x240 Add2
	goto Label_516; // 0x241 Jump
	
Label_550:
	var_59_int = 1; // 0x226 PushI
	var_60_bool = var_24_int == var_59_int; // 0x227 Eq
	if(var_60_bool == 0) goto Label_564; // 0x228 JumpB
	var_61_int = 4; // 0x229 PushI
	rand(var_27_float, var_61_int); // 0x22a Func
	var_62_int = 1; // 0x22c PushI
	var_63_int = var_27_float + var_62_int; // 0x22d Add
	Sleep(var_63_int, var_28_bool); // 0x22e Func
	var_64_bool = var_28_bool == 0; // 0x230 Not
	if(var_64_bool == 0) goto Label_563; // 0x231 JumpB
	goto Label_578; // 0x232 Jump
	
Label_563:
	goto Label_567; // 0x233 Jump
	
Label_564:
	var_65_int = var_23_int; // 0x234 Push
	if(var_65_int == 0) goto Label_567; // 0x235 JumpB
	goto Label_578; // 0x236 Jump
}


func_758(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x2f6 PushV
	var_34_int = 0; // 0x2f7 MovI
	
Label_760:
	var_36_string = "all"; // 0x2f8 PushS
	var_37_string = ""; var_38_int = 0; // 0x2f9 PushV
	var_38_int = var_34_int; // 0x2fa Mov
	func_751(var_37_string, var_38_int); // 0x2fb NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x2fd Func
	var_42_bool = var_35_bool == 0; // 0x2ff Not
	if(var_42_bool == 0) goto Label_770; // 0x300 JumpB
	goto Label_773; // 0x301 Jump
	
Label_773:
	var_31_int = var_34_int; // 0x305 Mov
	return 4; // 0x306 Return
	
Label_770:
	var_43_int = 1; // 0x302 PushI
	var_34_int = var_34_int + var_43_int; // 0x303 Add2
	goto Label_760; // 0x304 Jump
}


func_888(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x378 PushV
	var_73_string = "branch"; // 0x379 PushS
	GetVariable(var_73_string, var_72_int); // 0x37a Func
	var_74_int = 0; // 0x37c PushI
	var_75_bool = var_72_int == var_74_int; // 0x37d Eq
	if(var_75_bool == 0) goto Label_898; // 0x37e JumpB
	var_70_int = 1; // 0x37f MovI
	return 2; // 0x380 Return
	
Label_898:
	var_76_int = 1; // 0x382 PushI
	var_77_bool = var_72_int == var_76_int; // 0x383 Eq
	if(var_77_bool == 0) goto Label_903; // 0x384 JumpB
	var_70_int = 2; // 0x385 MovI
	return 2; // 0x386 Return
	
Label_903:
	var_70_int = 3; // 0x387 MovI
	return 2; // 0x388 Return
}


