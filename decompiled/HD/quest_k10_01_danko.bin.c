task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc0 PushI
	if(var_9_int == 0) goto Label_478; // 0xc1 JumpB
	func_1083(); // 0xc3 NEW_2
	var_11_int = 28227; // 0xc5 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc6 Eq
	if(var_12_bool == 0) goto Label_205; // 0xc7 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc8 PushV
	var_13_object = var_1_object; // 0xc9 MovT
	var_14_object = var_0_object; // 0xca MovT
	func_1144(); // 0xcb NEW_2
	
Label_205:
	var_48_int = 28226; // 0xcd PushI
	var_49_bool = var_7_cvector == var_48_int; // 0xce Eq
	if(var_49_bool == 0) goto Label_258; // 0xcf JumpB
	var_50_bool = 0; var_51_object = Obj(); // 0xd0 PushV
	var_51_object = var_1_object; // 0xd1 MovT
	func_1162(var_51_object); // 0xd2 NEW_2
	if(var_50_bool == 0) goto Label_238; // 0xd4 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0xd5 PushV
	var_58_object = var_1_object; // 0xd6 MovT
	var_59_object = var_0_object; // 0xd7 MovT
	func_1156(); // 0xd8 NEW_2
	var_62_string = ""; // 0xda PushV
	var_62_string = "Neutral"; // 0xdb MovS
	func_169(var_8_bool, var_62_string); // 0xdc NEW_2
	var_79_int = 526934; // 0xde PushI
	SetMessage(var_79_int); // 0xdf TObjFunc
	ClearReplies(); // 0xe1 TObjFunc
	var_80_int = 527936; // 0xe3 PushI
	var_81_int = 29290; // 0xe4 PushI
	var_82_int = 29289; // 0xe5 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xe6 TObjFunc
	var_83_int = 527942; // 0xe8 PushI
	var_84_int = 29297; // 0xe9 PushI
	var_85_int = 29295; // 0xea PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xeb TObjFunc
	return 0; // 0xed Return
	
Label_238:
	var_86_string = ""; // 0xee PushV
	var_86_string = "Neutral"; // 0xef MovS
	func_169(var_8_bool, var_86_string); // 0xf0 NEW_2
	var_87_int = 526936; // 0xf2 PushI
	SetMessage(var_87_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_88_int = 527935; // 0xf7 PushI
	var_89_int = -1; // 0xf8 PushI
	var_90_int = 29288; // 0xf9 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xfa TObjFunc
	var_91_int = 526937; // 0xfc PushI
	var_92_int = -1; // 0xfd PushI
	var_93_int = 28229; // 0xfe PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xff TObjFunc
	return 0; // 0x101 Return
	
Label_258:
	var_94_int = 29297; // 0x102 PushI
	var_95_bool = var_7_cvector == var_94_int; // 0x103 Eq
	if(var_95_bool == 0) goto Label_276; // 0x104 JumpB
	var_96_string = ""; // 0x105 PushV
	var_96_string = "Sorrow"; // 0x106 MovS
	func_169(var_8_bool, var_96_string); // 0x107 NEW_2
	var_97_int = 527943; // 0x109 PushI
	SetMessage(var_97_int); // 0x10a TObjFunc
	ClearReplies(); // 0x10c TObjFunc
	var_98_int = 527944; // 0x10e PushI
	var_99_int = 29292; // 0x10f PushI
	var_100_int = 29298; // 0x110 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x111 TObjFunc
	return 0; // 0x113 Return
	
Label_276:
	var_101_int = 29290; // 0x114 PushI
	var_102_bool = var_7_cvector == var_101_int; // 0x115 Eq
	if(var_102_bool == 0) goto Label_294; // 0x116 JumpB
	var_103_string = ""; // 0x117 PushV
	var_103_string = "Smile"; // 0x118 MovS
	func_169(var_8_bool, var_103_string); // 0x119 NEW_2
	var_104_int = 527937; // 0x11b PushI
	SetMessage(var_104_int); // 0x11c TObjFunc
	ClearReplies(); // 0x11e TObjFunc
	var_105_int = 527945; // 0x120 PushI
	var_106_int = 29300; // 0x121 PushI
	var_107_int = 29299; // 0x122 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x123 TObjFunc
	return 0; // 0x125 Return
	
Label_294:
	var_108_int = 29300; // 0x126 PushI
	var_109_bool = var_7_cvector == var_108_int; // 0x127 Eq
	if(var_109_bool == 0) goto Label_312; // 0x128 JumpB
	var_110_string = ""; // 0x129 PushV
	var_110_string = "Smile"; // 0x12a MovS
	func_169(var_8_bool, var_110_string); // 0x12b NEW_2
	var_111_int = 527946; // 0x12d PushI
	SetMessage(var_111_int); // 0x12e TObjFunc
	ClearReplies(); // 0x130 TObjFunc
	var_112_int = 527947; // 0x132 PushI
	var_113_int = 29292; // 0x133 PushI
	var_114_int = 29301; // 0x134 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x135 TObjFunc
	return 0; // 0x137 Return
	
Label_312:
	var_115_int = 29292; // 0x138 PushI
	var_116_bool = var_7_cvector == var_115_int; // 0x139 Eq
	if(var_116_bool == 0) goto Label_335; // 0x13a JumpB
	var_117_string = ""; // 0x13b PushV
	var_117_string = "Sorrow"; // 0x13c MovS
	func_169(var_8_bool, var_117_string); // 0x13d NEW_2
	var_118_int = 527939; // 0x13f PushI
	SetMessage(var_118_int); // 0x140 TObjFunc
	ClearReplies(); // 0x142 TObjFunc
	var_119_int = 527948; // 0x144 PushI
	var_120_int = 29304; // 0x145 PushI
	var_121_int = 29303; // 0x146 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x147 TObjFunc
	var_122_int = 527940; // 0x149 PushI
	var_123_int = 29294; // 0x14a PushI
	var_124_int = 29293; // 0x14b PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x14c TObjFunc
	return 0; // 0x14e Return
	
Label_335:
	var_125_int = 29294; // 0x14f PushI
	var_126_bool = var_7_cvector == var_125_int; // 0x150 Eq
	if(var_126_bool == 0) goto Label_353; // 0x151 JumpB
	var_127_string = ""; // 0x152 PushV
	var_127_string = "Neutral"; // 0x153 MovS
	func_169(var_8_bool, var_127_string); // 0x154 NEW_2
	var_128_int = 527941; // 0x156 PushI
	SetMessage(var_128_int); // 0x157 TObjFunc
	ClearReplies(); // 0x159 TObjFunc
	var_129_int = 527953; // 0x15b PushI
	var_130_int = 29309; // 0x15c PushI
	var_131_int = 29308; // 0x15d PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x15e TObjFunc
	return 0; // 0x160 Return
	
Label_353:
	var_132_int = 29309; // 0x161 PushI
	var_133_bool = var_7_cvector == var_132_int; // 0x162 Eq
	if(var_133_bool == 0) goto Label_371; // 0x163 JumpB
	var_134_string = ""; // 0x164 PushV
	var_134_string = "Untrust"; // 0x165 MovS
	func_169(var_8_bool, var_134_string); // 0x166 NEW_2
	var_135_int = 527954; // 0x168 PushI
	SetMessage(var_135_int); // 0x169 TObjFunc
	ClearReplies(); // 0x16b TObjFunc
	var_136_int = 527956; // 0x16d PushI
	var_137_int = 29304; // 0x16e PushI
	var_138_int = 29311; // 0x16f PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x170 TObjFunc
	return 0; // 0x172 Return
	
Label_371:
	var_139_int = 29304; // 0x173 PushI
	var_140_bool = var_7_cvector == var_139_int; // 0x174 Eq
	if(var_140_bool == 0) goto Label_389; // 0x175 JumpB
	var_141_string = ""; // 0x176 PushV
	var_141_string = "Sorrow"; // 0x177 MovS
	func_169(var_8_bool, var_141_string); // 0x178 NEW_2
	var_142_int = 527949; // 0x17a PushI
	SetMessage(var_142_int); // 0x17b TObjFunc
	ClearReplies(); // 0x17d TObjFunc
	var_143_int = 527950; // 0x17f PushI
	var_144_int = 29310; // 0x180 PushI
	var_145_int = 29305; // 0x181 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x182 TObjFunc
	return 0; // 0x184 Return
	
Label_389:
	var_146_int = 29310; // 0x185 PushI
	var_147_bool = var_7_cvector == var_146_int; // 0x186 Eq
	if(var_147_bool == 0) goto Label_412; // 0x187 JumpB
	var_148_string = ""; // 0x188 PushV
	var_148_string = "Sorrow"; // 0x189 MovS
	func_169(var_8_bool, var_148_string); // 0x18a NEW_2
	var_149_int = 527955; // 0x18c PushI
	SetMessage(var_149_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_150_int = 527960; // 0x191 PushI
	var_151_int = 29317; // 0x192 PushI
	var_152_int = 29316; // 0x193 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x194 TObjFunc
	var_153_int = 527957; // 0x196 PushI
	var_154_int = 29314; // 0x197 PushI
	var_155_int = 29313; // 0x198 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_156_int = 29314; // 0x19c PushI
	var_157_bool = var_7_cvector == var_156_int; // 0x19d Eq
	if(var_157_bool == 0) goto Label_430; // 0x19e JumpB
	var_158_string = ""; // 0x19f PushV
	var_158_string = "Untrust"; // 0x1a0 MovS
	func_169(var_8_bool, var_158_string); // 0x1a1 NEW_2
	var_159_int = 527958; // 0x1a3 PushI
	SetMessage(var_159_int); // 0x1a4 TObjFunc
	ClearReplies(); // 0x1a6 TObjFunc
	var_160_int = 527959; // 0x1a8 PushI
	var_161_int = 29319; // 0x1a9 PushI
	var_162_int = 29315; // 0x1aa PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x1ab TObjFunc
	return 0; // 0x1ad Return
	
Label_430:
	var_163_int = 29317; // 0x1ae PushI
	var_164_bool = var_7_cvector == var_163_int; // 0x1af Eq
	if(var_164_bool == 0) goto Label_448; // 0x1b0 JumpB
	var_165_string = ""; // 0x1b1 PushV
	var_165_string = "Untrust"; // 0x1b2 MovS
	func_169(var_8_bool, var_165_string); // 0x1b3 NEW_2
	var_166_int = 527961; // 0x1b5 PushI
	SetMessage(var_166_int); // 0x1b6 TObjFunc
	ClearReplies(); // 0x1b8 TObjFunc
	var_167_int = 527962; // 0x1ba PushI
	var_168_int = 29319; // 0x1bb PushI
	var_169_int = 29318; // 0x1bc PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x1bd TObjFunc
	return 0; // 0x1bf Return
	
Label_448:
	var_170_int = 29319; // 0x1c0 PushI
	var_171_bool = var_7_cvector == var_170_int; // 0x1c1 Eq
	if(var_171_bool == 0) goto Label_466; // 0x1c2 JumpB
	var_172_string = ""; // 0x1c3 PushV
	var_172_string = "Untrust"; // 0x1c4 MovS
	func_169(var_8_bool, var_172_string); // 0x1c5 NEW_2
	var_173_int = 527963; // 0x1c7 PushI
	SetMessage(var_173_int); // 0x1c8 TObjFunc
	ClearReplies(); // 0x1ca TObjFunc
	var_174_int = 526935; // 0x1cc PushI
	var_175_int = -1; // 0x1cd PushI
	var_176_int = 28227; // 0x1ce PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x1cf TObjFunc
	return 0; // 0x1d1 Return
	
Label_466:
	var_3_string = 1; // 0x1d2 TMovB
	var_177_bool = 0; // 0x1d3 PushV
	func_1266(var_177_bool); // 0x1d4 NEW_2
	if(var_177_bool == 0) goto Label_474; // 0x1d6 JumpB
	lshStopAnimation(); // 0x1d7 Func
	goto Label_476; // 0x1d9 Jump
	
Label_476:
	return 0; // 0x1dc Return
	
Label_474:
	StopAnimation(); // 0x1da Func
	
Label_478:
	return 0; // 0x1de Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1eb PushV
	var_10_string = "cleanup"; // 0x1ec PushS
	var_11_bool = var_7_string == var_10_string; // 0x1ed Eq
	if(var_11_bool == 0) goto Label_506; // 0x1ee JumpB
	var_1_object = 1; // 0x1ef TMovB
	IsLoaded(var_9_bool); // 0x1f0 Func
	var_12_bool = var_9_bool == 0; // 0x1f2 Not
	if(var_12_bool == 0) goto Label_505; // 0x1f3 JumpB
	var_13_object = Obj(); // 0x1f4 PushV
	func_1090(var_13_object); // 0x1f5 NEW_2
	RemoveActor(var_13_object); // 0x1f7 Func
	
Label_505:
	goto Label_510; // 0x1f9 Jump
	
Label_510:
	return 2; // 0x1fe Return
	
Label_506:
	var_16_string = "restore"; // 0x1fa PushS
	var_17_bool = var_7_string == var_16_string; // 0x1fb Eq
	if(var_17_bool == 0) goto Label_510; // 0x1fc JumpB
	var_1_object = 0; // 0x1fd TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x1ff PushT
	if(var_7_object == 0) goto Label_520; // 0x200 JumpB
	var_8_object = Obj(); // 0x201 PushV
	func_1090(var_8_object); // 0x202 NEW_2
	RemoveActor(var_8_object); // 0x204 Func
	Hold(); // 0x206 Func
	
Label_520:
	func_635(); // 0x209 NEW_2
	return 0; // 0x20b Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_650(); // 0x20d NEW_2
	return 0; // 0x20f Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x256 PushI
	var_9_bool = var_7_int == var_8_int; // 0x257 Eq
	if(var_9_bool == 0) goto Label_634; // 0x258 JumpB
	func_593(); // 0x25a NEW_2
	var_11_bool = 0; // 0x25c PushV
	var_11_bool = 0; // 0x25d MovB
	var_12_bool = 0; // 0x25e PushV
	func_807(var_12_bool); // 0x25f NEW_2
	if(var_12_bool == 0) goto Label_615; // 0x261 JumpB
	var_15_bool = 0; // 0x262 PushV
	func_562(var_15_bool); // 0x263 NEW_2
	if(var_15_bool == 0) goto Label_615; // 0x265 JumpB
	var_11_bool = 1; // 0x266 MovB
	
Label_615:
	if(var_11_bool == 0) goto Label_628; // 0x267 JumpB
	var_32_bool = 0; // 0x268 PushV
	func_542(var_32_bool); // 0x269 NEW_2
	if(var_32_bool == 0) goto Label_627; // 0x26b JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x26c PushV
	var_53_object = Obj(); // 0x26d PushV
	func_1090(var_53_object); // 0x26e NEW_2
	var_52_object = var_53_object; // 0x26f Mov
	func_957(var_52_object); // 0x271 NEW_2
	
Label_627:
	goto Label_634; // 0x273 Jump
	
Label_634:
	return 0; // 0x27a Return
	
Label_628:
	func_557(var_7_int); // 0x275 NEW_2
	func_584(); // 0x278 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x298 Push
	if(var_8_bool == 0) goto Label_670; // 0x299 JumpB
	func_584(); // 0x29b NEW_2
	goto Label_674; // 0x29d Jump
	
Label_674:
	return 0; // 0x2a2 Return
	
Label_670:
	var_14_string = ""; // 0x29e PushV
	var_14_string = "Neutral"; // 0x29f MovS
	func_1037(var_14_string); // 0x2a0 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2a3 PushV
	IsOverrideActive(var_9_bool); // 0x2a4 Func
	var_10_bool = var_9_bool == 0; // 0x2a6 Not
	if(var_10_bool == 0) goto Label_703; // 0x2a7 JumpB
	EventDisable(0); // 0x2a8 EventDisable
	func_775(); // 0x2aa NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x2ac PushV
	var_12_object = var_7_object; // 0x2ad Mov
	func_798(var_12_object); // 0x2ae NEW_2
	EventEnable(0); // 0x2b0 EventEnable
	var_25_object = Obj(); // 0x2b1 PushV
	var_25_object = var_7_object; // 0x2b2 Mov
	func_479(var_25_object); // 0x2b3 NEW_2
	var_271_string = ""; // 0x2b5 PushV
	var_271_string = "Neutral"; // 0x2b6 MovS
	func_1037(var_271_string); // 0x2b7 NEW_2
	func_593(); // 0x2ba NEW_2
	func_584(); // 0x2bd NEW_2
	
Label_703:
	return 2; // 0x2bf Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_528(var_6_bool); // 0x1e8 NEW_2
	return 0; // 0x1ea Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_812(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1260(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1258(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1262(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1264(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1241(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_1090(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_899(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_262_bool = var_36_bool == 0; // 0x3f Not
	if(var_262_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_263_object = Obj(); // 0x46 PushV
	var_263_object = var_27_object; // 0x47 Mov
	func_881(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_899(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x383 PushV
	var_107_string = "voice_common"; // 0x384 PushS
	GetVariable(var_107_string, var_105_int); // 0x385 Func
	var_108_int = var_105_int; // 0x387 Push
	if(var_108_int == 0) goto Label_937; // 0x388 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x389 PushV
	var_110_object = var_99_object; // 0x38a Mov
	func_957(var_110_object); // 0x38b NEW_2
	var_139_bool = var_109_bool == 0; // 0x38d Not
	if(var_139_bool == 0) goto Label_919; // 0x38e JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x38f PushV
	var_141_object = var_99_object; // 0x390 Mov
	func_994(var_141_object); // 0x391 NEW_2
	var_175_bool = var_140_bool == 0; // 0x393 Not
	if(var_175_bool == 0) goto Label_919; // 0x394 JumpB
	var_98_bool = 0; // 0x395 MovB
	return 4; // 0x396 Return
	
Label_919:
	var_176_int = 2; // 0x397 PushI
	irand(var_106_int, var_176_int); // 0x398 Func
	var_177_int = var_106_int; // 0x39a Push
	if(var_177_int == 0) goto Label_932; // 0x39b JumpB
	var_178_string = "voice_common"; // 0x39c PushS
	var_179_int = 1; // 0x39d PushI
	var_180_int = var_105_int + var_179_int; // 0x39e Add
	var_181_int = 3; // 0x39f PushI
	var_182_int = var_180_int / var_181_int; // 0x3a0 Mod
	SetVariable(var_178_string, var_182_int); // 0x3a1 Func
	goto Label_936; // 0x3a3 Jump
	
Label_936:
	goto Label_955; // 0x3a8 Jump
	
Label_955:
	var_98_bool = 1; // 0x3bb MovB
	return 4; // 0x3bc Return
	
Label_932:
	var_183_string = "voice_common"; // 0x3a4 PushS
	var_184_int = 0; // 0x3a5 PushI
	SetVariable(var_183_string, var_184_int); // 0x3a6 Func
	
Label_937:
	var_185_bool = 0; var_186_object = Obj(); // 0x3a9 PushV
	var_186_object = var_99_object; // 0x3aa Mov
	func_994(var_186_object); // 0x3ab NEW_2
	var_187_bool = var_185_bool == 0; // 0x3ad Not
	if(var_187_bool == 0) goto Label_951; // 0x3ae JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x3af PushV
	var_189_object = var_99_object; // 0x3b0 Mov
	func_957(var_189_object); // 0x3b1 NEW_2
	var_190_bool = var_188_bool == 0; // 0x3b3 Not
	if(var_190_bool == 0) goto Label_951; // 0x3b4 JumpB
	var_98_bool = 0; // 0x3b5 MovB
	return 4; // 0x3b6 Return
	
Label_951:
	var_191_string = "voice_common"; // 0x3b7 PushS
	var_192_int = 1; // 0x3b8 PushI
	SetVariable(var_191_string, var_192_int); // 0x3b9 Func
}


func_1156()
{
	var_210_string = "k10q01KnowAboutRubin"; // 0x485 PushS
	var_211_int = 1; // 0x486 PushI
	SetVariable(var_210_string, var_211_int); // 0x487 Func
	return 0; // 0x489 Return
}


func_773(var_45_bool)
{
	var_45_bool = 1; // 0x305 MovB
	return 0; // 0x306 Return
}


func_775()
{
	StopAnimation(); // 0x307 Func
	StopGroup0(); // 0x309 Func
	return 0; // 0x30b Return
}


func_1162(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x48b PushV
	var_203_string = "k10q01"; // 0x48c MovS
	func_1106(var_202_int, var_203_string); // 0x48d NEW_2
	var_206_int = 0; // 0x48f PushI
	var_207_bool = var_202_int == var_206_int; // 0x490 Eq
	if(var_207_bool == 0) goto Label_1172; // 0x491 JumpB
	var_200_bool = 1; // 0x492 MovB
	return 0; // 0x493 Return
	
Label_1172:
	var_200_bool = 0; // 0x494 MovB
	return 0; // 0x495 Return
}


func_650()
{
	StopGroup0(); // 0x28a Func
	func_593(); // 0x28d NEW_2
	var_8_string = ""; // 0x28f PushV
	var_8_string = "Neutral"; // 0x290 MovS
	func_1037(var_8_string); // 0x291 NEW_2
	func_584(); // 0x294 NEW_2
	return 0; // 0x296 Return
}


func_780(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x30c PushV
	GetPosition(var_27_cvector); // 0x30d Func
	GetPosition(var_28_cvector); // 0x30f ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x311 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x312 Or2
	return 6; // 0x313 Return
}


func_1037(var_238_string)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0; // 0x40d PushV
	lshHasAnimation(var_242_bool, var_238_string); // 0x40e Func
	var_245_bool = var_242_bool; // 0x410 Push
	if(var_245_bool == 0) goto Label_1048; // 0x411 JumpB
	lshGetAnimTimes(var_238_string, var_243_float, var_244_float); // 0x412 Func
	var_246_bool = 0; // 0x414 PushB
	lshPlayAnimation(var_243_float, var_244_float, var_246_bool); // 0x415 Func
	goto Label_1052; // 0x417 Jump
	
Label_1052:
	return 6; // 0x41c Return
	
Label_1048:
	var_247_string = "Can't find lsh animation : "; // 0x418 PushS
	var_248_int = var_247_string + var_238_string; // 0x419 Add
	Trace(var_248_int); // 0x41a Func
}


func_528(var_0_object)
{
	var_7_bool = 0; // 0x210 PushV
	func_807(var_7_bool); // 0x211 NEW_2
	var_10_bool = var_7_bool == 0; // 0x213 Not
	if(var_10_bool == 0) goto Label_535; // 0x214 JumpB
	Hold(); // 0x215 Func
	
Label_535:
	GetDirection(var_0_object); // 0x217 Func
	
Label_537:
	func_704(); // 0x21a NEW_2
	goto Label_537; // 0x21c Jump
}


func_788(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x314 PushV
	GetPosition(var_20_cvector); // 0x315 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x317 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x318 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x319 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x31a Func
	var_15_bool = var_22_bool; // 0x31c Mov
	return 6; // 0x31d Return
}


func_1174()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x496 PushV
	var_19_int = 447; // 0x497 PushI
	var_20_int = 1; // 0x498 PushI
	var_21_int = 527005; // 0x499 PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x49a Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x49c PushV
	var_23_object = var_18_object; // 0x49d Mov
	var_24_int = -1; // 0x49e MovI
	func_1213(var_22_bool, var_23_object, var_24_int); // 0x49f NEW_2
	return 2; // 0x4a1 Return
}


func_1053(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; // 0x41d PushV
	lshHasAnimation(var_223_bool, var_216_string); // 0x41e Func
	var_226_bool = var_223_bool; // 0x420 Push
	if(var_226_bool == 0) goto Label_1063; // 0x421 JumpB
	lshGetAnimTimes(var_216_string, var_224_float, var_225_float); // 0x422 Func
	lshPlayAnimation(var_224_float, var_225_float, var_217_bool); // 0x424 Func
	goto Label_1067; // 0x426 Jump
	
Label_1067:
	return 6; // 0x42b Return
	
Label_1063:
	var_227_string = "Can't find lsh animation : "; // 0x427 PushS
	var_228_int = var_227_string + var_216_string; // 0x428 Add
	Trace(var_228_int); // 0x429 Func
}


func_542(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x21e PushV
	var_35_string = "player"; // 0x21f PushS
	FindActor(var_34_object, var_35_string); // 0x220 Func
	var_36_bool = var_34_object == 0; // 0x222 Not
	if(var_36_bool == 0) goto Label_550; // 0x223 JumpB
	var_32_bool = 0; // 0x224 MovB
	return 2; // 0x225 Return
	
Label_550:
	var_37_bool = 0; var_38_object = Obj(); // 0x226 PushV
	var_38_object = var_34_object; // 0x227 Mov
	func_798(var_38_object); // 0x228 NEW_2
	var_32_bool = var_37_bool; // 0x229 Mov
	return 2; // 0x22b Return
}


func_798(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x31e PushV
	GetPosition(var_14_cvector); // 0x31f ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x321 PushV
	var_16_cvector = var_14_cvector; // 0x322 Mov
	func_788(var_15_bool, var_16_cvector); // 0x323 NEW_2
	var_11_bool = var_15_bool; // 0x324 Mov
	return 2; // 0x326 Return
}


func_1187()
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x4a3 PushV
	var_42_int = 448; // 0x4a4 PushI
	var_43_int = 1; // 0x4a5 PushI
	var_44_int = 527006; // 0x4a6 PushI
	CreateDiaryEntry(var_41_object, var_42_int, var_43_int, var_44_int); // 0x4a7 Func
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0; // 0x4a9 PushV
	var_46_object = var_41_object; // 0x4aa Mov
	var_47_int = 447; // 0x4ab MovI
	func_1213(var_45_bool, var_46_object, var_47_int); // 0x4ac NEW_2
	return 2; // 0x4ae Return
}


func_807(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x327 PushV
	IsLoaded(var_9_bool); // 0x328 Func
	var_7_bool = var_9_bool; // 0x32a Mov
	return 2; // 0x32b Return
}


func_169(var_2_object, var_212_string)
{
	var_213_bool = 0; // 0xaa PushV
	func_1266(var_213_bool); // 0xab NEW_2
	var_214_bool = var_213_bool == 0; // 0xad Not
	if(var_214_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_215_bool = var_212_string == var_2_object; // 0xb0 Eq
	if(var_215_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_216_string = ""; var_217_bool = 0; // 0xb3 PushV
	var_216_string = var_212_string; // 0xb4 Mov
	var_218_string = ""; // 0xb5 PushS
	var_219_bool = var_212_string == var_218_string; // 0xb6 Eq
	if(var_219_bool == 0) goto Label_186; // 0xb7 JumpB
	var_217_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_1053(var_216_string, var_217_bool); // 0xbb NEW_2
	var_2_object = var_212_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_217_bool = 1; // 0xba MovB
}


func_812(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x32c PushV
	GetPosition(var_50_cvector); // 0x32d ObjFunc
	GetEyesHeight(var_49_float); // 0x32f ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x331 PushE
	var_58_float = var_58_float + var_49_float; // 0x332 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x333 PopE
	GetPosition(var_51_cvector); // 0x334 Func
	GetEyesHeight(var_49_float); // 0x336 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x338 PushE
	var_59_float = var_59_float + var_49_float; // 0x339 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x33a PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x33b Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x33c PushE
	var_60_float = 0; // 0x33d MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x33e PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x33f Or
	var_62_float = sqrt(var_61_int); // 0x340 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x341 Div2
	var_53_cvector = -var_52_cvector; // 0x342 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x343 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x344 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x345 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x346 Xor2
	func_1096(var_64_cvector, var_65_cvector); // 0x347 NEW_2
	var_72_int = 25; // 0x349 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x34a Mult
	var_74_int = var_63_float + var_73_float; // 0x34b Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x34c PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x34d Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x34e Add2
	IsOverrideActive(var_56_bool); // 0x34f Func
	var_76_bool = var_56_bool; // 0x351 Push
	if(var_76_bool == 0) goto Label_853; // 0x352 JumpB
	var_37_bool = 0; // 0x353 MovB
	return 18; // 0x354 Return
	
Label_853:
	StopWorld(); // 0x355 Func
	var_77_bool = 1; // 0x357 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x358 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x35a PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x35b PushE
	Rotate(var_78_float, var_79_float); // 0x35c Func
	var_80_bool = 0; // 0x35e PushV
	func_1266(var_80_bool); // 0x35f NEW_2
	if(var_80_bool == 0) goto Label_867; // 0x361 JumpB
	goto Label_875; // 0x362 Jump
	
Label_875:
	CameraWaitForPlayFinish(); // 0x36b Func
	ResumeWorld(); // 0x36d Func
	var_37_bool = 1; // 0x36f MovB
	return 18; // 0x370 Return
	
Label_867:
	var_81_string = "head"; // 0x363 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x364 Func
	var_82_bool = var_57_bool; // 0x366 Push
	if(var_82_bool == 0) goto Label_875; // 0x367 JumpB
	var_83_string = "head"; // 0x368 PushS
	LookAsyncCamera(var_83_string); // 0x369 Func
}


func_557(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x22d PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x22e PushE
	RotateAsync(var_84_float, var_85_float); // 0x22f Func
	return 0; // 0x231 Return
}


func_1068(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x42c PushV
	var_136_bool = 0; // 0x42d PushV
	func_1266(var_136_bool); // 0x42e NEW_2
	if(var_136_bool == 0) goto Label_1081; // 0x430 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x431 Func
	var_137_bool = var_135_bool; // 0x433 Push
	if(var_137_bool == 0) goto Label_1081; // 0x434 JumpB
	lshPlaySpeech(var_133_string); // 0x435 Func
	var_132_bool = 1; // 0x437 MovB
	return 2; // 0x438 Return
	
Label_1081:
	var_132_bool = 0; // 0x439 MovB
	return 2; // 0x43a Return
}


func_1200(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x4b0 PushV
	GetDiaryRoot(var_33_object); // 0x4b1 Func
	var_34_bool = var_33_object == 0; // 0x4b3 Not
	if(var_34_bool == 0) goto Label_1210; // 0x4b4 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x4b5 PushS
	Trace(var_35_string); // 0x4b6 Func
	var_31_object = 0; // 0x4b8 MovB
	return 2; // 0x4b9 Return
	
Label_1210:
	var_31_object = var_33_object; // 0x4ba Mov
	return 2; // 0x4bb Return
}


func_562(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x232 PushV
	var_20_string = "player"; // 0x233 PushS
	FindActor(var_18_object, var_20_string); // 0x234 Func
	var_21_bool = var_18_object == 0; // 0x236 Not
	if(var_21_bool == 0) goto Label_570; // 0x237 JumpB
	var_15_bool = 0; // 0x238 MovB
	return 4; // 0x239 Return
	
Label_570:
	var_22_float = 0; var_23_object = Obj(); // 0x23a PushV
	var_23_object = var_18_object; // 0x23b Mov
	func_780(var_23_object); // 0x23c NEW_2
	var_30_float = 90000.0; // 0x23e PushF
	var_31_bool = var_22_float > var_30_float; // 0x23f GT
	if(var_31_bool == 0) goto Label_579; // 0x240 JumpB
	var_15_bool = 0; // 0x241 MovB
	return 4; // 0x242 Return
	
Label_579:
	CanSee(var_19_bool, var_18_object); // 0x243 Func
	var_15_bool = var_19_bool; // 0x245 Mov
	return 4; // 0x246 Return
}


func_1083()
{
	var_10_bool = 0; // 0x43b PushV
	func_1266(var_10_bool); // 0x43c NEW_2
	if(var_10_bool == 0) goto Label_1089; // 0x43e JumpB
	lshStopSpeech(); // 0x43f Func
	
Label_1089:
	return 0; // 0x441 Return
}


func_957(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x3bd PushV
	var_116_string = "c"; // 0x3be MovS
	var_117_int = 0; // 0x3bf MovI
	
Label_960:
	var_121_int = 1; // 0x3c0 PushI
	if(var_121_int == 0) goto Label_973; // 0x3c1 JumpB
	var_122_int = 1; // 0x3c2 PushI
	var_123_int = var_117_int + var_122_int; // 0x3c3 Add
	var_124_int = var_116_string + var_123_int; // 0x3c4 Add
	HasProperty(var_124_int, var_118_bool); // 0x3c5 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x3c7 Not
	if(var_125_bool == 0) goto Label_970; // 0x3c8 JumpB
	goto Label_973; // 0x3c9 Jump
	
Label_973:
	var_126_bool = var_117_int == 0; // 0x3cd Not
	if(var_126_bool == 0) goto Label_977; // 0x3ce JumpB
	var_109_bool = 0; // 0x3cf MovB
	return 10; // 0x3d0 Return
	
Label_977:
	var_119_int = 0; // 0x3d1 MovI
	var_127_int = 1; // 0x3d2 PushI
	var_128_bool = var_117_int > var_127_int; // 0x3d3 GT
	if(var_128_bool == 0) goto Label_983; // 0x3d4 JumpB
	irand(var_119_int, var_117_int); // 0x3d5 Func
	
Label_983:
	var_129_int = 1; // 0x3d7 PushI
	var_130_int = var_119_int + var_129_int; // 0x3d8 Add
	var_131_int = var_116_string + var_130_int; // 0x3d9 Add
	GetProperty(var_131_int, var_120_string); // 0x3da ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x3dc PushV
	var_133_string = var_120_string; // 0x3dd Mov
	func_1068(var_132_bool, var_133_string); // 0x3de NEW_2
	var_109_bool = var_132_bool; // 0x3df Mov
	return 10; // 0x3e1 Return
	
Label_970:
	var_138_int = 1; // 0x3ca PushI
	var_117_int = var_117_int + var_138_int; // 0x3cb Add2
	goto Label_960; // 0x3cc Jump
}


func_1213(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x4bd PushV
	var_31_object = Obj(); // 0x4be PushV
	func_1200(var_31_object); // 0x4bf NEW_2
	var_28_object = var_31_object; // 0x4c0 Mov
	Find(var_24_int, var_29_object); // 0x4c2 ObjFunc
	var_36_bool = var_29_object == 0; // 0x4c4 Not
	if(var_36_bool == 0) goto Label_1228; // 0x4c5 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x4c6 PushS
	var_38_int = var_37_string + var_24_int; // 0x4c7 Add
	Trace(var_38_int); // 0x4c8 Func
	var_22_bool = 0; // 0x4ca MovB
	return 6; // 0x4cb Return
	
Label_1228:
	AddChild(var_23_object); // 0x4cc ObjFunc
	var_39_int = 7; // 0x4ce PushI
	SendWorldWndMessage(var_39_int); // 0x4cf Func
	GetCategory(var_30_int); // 0x4d1 ObjFunc
	SetDiarySection(var_30_int); // 0x4d3 Func
	var_22_bool = 0; // 0x4d5 MovB
	return 6; // 0x4d6 Return
}


func_704()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2c0 PushV
	WaitForAnimEnd(); // 0x2c1 Func
	var_23_bool = 0; // 0x2c3 PushV
	func_807(var_23_bool); // 0x2c4 NEW_2
	var_24_bool = var_23_bool == 0; // 0x2c6 Not
	if(var_24_bool == 0) goto Label_713; // 0x2c7 JumpB
	return 12; // 0x2c8 Return
	
Label_713:
	var_25_int = 0; // 0x2c9 PushV
	func_1127(var_25_int); // 0x2ca NEW_2
	var_17_int = var_25_int; // 0x2cb Mov
	var_18_int = 0; // 0x2cd MovI
	
Label_718:
	var_38_bool = 0; // 0x2ce PushV
	var_38_bool = 0; // 0x2cf MovB
	var_39_int = 5; // 0x2d0 PushI
	var_40_bool = var_18_int < var_39_int; // 0x2d1 LT
	if(var_40_bool == 0) goto Label_728; // 0x2d2 JumpB
	var_41_bool = 0; // 0x2d3 PushV
	func_807(var_41_bool); // 0x2d4 NEW_2
	if(var_41_bool == 0) goto Label_728; // 0x2d6 JumpB
	var_38_bool = 1; // 0x2d7 MovB
	
Label_728:
	if(var_38_bool == 0) goto Label_770; // 0x2d8 JumpB
	var_42_bool = var_17_int == 0; // 0x2d9 Not
	if(var_42_bool == 0) goto Label_738; // 0x2da JumpB
	var_43_int = 3; // 0x2db PushI
	Sleep(var_43_int, var_19_bool); // 0x2dc Func
	var_44_bool = var_19_bool == 0; // 0x2de Not
	if(var_44_bool == 0) goto Label_737; // 0x2df JumpB
	goto Label_770; // 0x2e0 Jump
	
Label_770:
	ResetAAS(); // 0x302 Func
	return 12; // 0x304 Return
	
Label_737:
	goto Label_759; // 0x2e1 Jump
	
Label_759:
	var_45_bool = 0; // 0x2f7 PushV
	func_773(var_45_bool); // 0x2f8 NEW_2
	var_46_bool = var_45_bool == 0; // 0x2fa Not
	if(var_46_bool == 0) goto Label_765; // 0x2fb JumpB
	goto Label_770; // 0x2fc Jump
	
Label_765:
	ResetAAS(); // 0x2fd Func
	var_47_int = 1; // 0x2ff PushI
	var_18_int = var_18_int + var_47_int; // 0x300 Add2
	goto Label_718; // 0x301 Jump
	
Label_738:
	irand(var_20_int, var_17_int); // 0x2e2 Func
	var_48_int = 5; // 0x2e4 PushI
	irand(var_21_int, var_48_int); // 0x2e5 Func
	var_49_int = 0; // 0x2e7 PushI
	var_50_bool = var_21_int != var_49_int; // 0x2e8 Neq
	if(var_50_bool == 0) goto Label_747; // 0x2e9 JumpB
	var_20_int = 0; // 0x2ea MovI
	
Label_747:
	var_51_string = "all"; // 0x2eb PushS
	var_52_string = ""; var_53_int = 0; // 0x2ec PushV
	var_53_int = var_20_int; // 0x2ed Mov
	func_1120(var_52_string, var_53_int); // 0x2ee NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2f0 Func
	WaitForAnimEnd(var_22_bool); // 0x2f2 Func
	var_54_bool = var_22_bool == 0; // 0x2f4 Not
	if(var_54_bool == 0) goto Label_759; // 0x2f5 JumpB
	goto Label_770; // 0x2f6 Jump
}


func_1090(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x442 PushV
	self(var_102_object); // 0x443 Func
	var_100_object = var_102_object; // 0x445 Mov
	return 2; // 0x446 Return
}


func_584()
{
	var_273_float = 0; var_274_float = 0; // 0x248 PushV
	var_275_int = 8; // 0x249 PushI
	var_276_int = 16; // 0x24a PushI
	rand(var_274_float, var_275_int, var_276_int); // 0x24b Func
	var_277_int = 10; // 0x24d PushI
	SetTimer(var_277_int, var_274_float); // 0x24e Func
	return 2; // 0x250 Return
}


func_1096(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x448 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x449 Or
	var_68_float = sqrt(var_69_int); // 0x44a Sqrt2
	var_70_float = 0.0; // 0x44b PushF
	var_71_bool = var_68_float < var_70_float; // 0x44c LT
	if(var_71_bool == 0) goto Label_1104; // 0x44d JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x44e MovV
	return 2; // 0x44f Return
	
Label_1104:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x450 Div2
	return 2; // 0x451 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_139; // 0x56 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x57 PushV
	var_201_object = var_1_object; // 0x58 MovT
	func_1162(var_201_object); // 0x59 NEW_2
	if(var_200_bool == 0) goto Label_117; // 0x5b JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0x5c PushV
	var_208_object = var_1_object; // 0x5d MovT
	var_209_object = var_0_object; // 0x5e MovT
	func_1156(); // 0x5f NEW_2
	var_212_string = ""; // 0x61 PushV
	var_212_string = "Neutral"; // 0x62 MovS
	func_169(var_194_object, var_212_string); // 0x63 NEW_2
	var_229_int = 526934; // 0x65 PushI
	SetMessage(var_229_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_230_int = 527936; // 0x6a PushI
	var_231_int = 29290; // 0x6b PushI
	var_232_int = 29289; // 0x6c PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x6d TObjFunc
	var_233_int = 527942; // 0x6f PushI
	var_234_int = 29297; // 0x70 PushI
	var_235_int = 29295; // 0x71 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x72 TObjFunc
	goto Label_139; // 0x74 Jump
	
Label_139:
	var_236_bool = 0; // 0x8b PushV
	func_1266(var_236_bool); // 0x8c NEW_2
	if(var_236_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_237_string = var_3_string; // 0x91 PushT
	if(var_237_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_238_string = ""; // 0x94 PushV
	var_238_string = var_2_object; // 0x95 MovT
	func_1037(var_238_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_249_string = "all"; // 0x9a PushS
	var_250_string = "idle"; // 0x9b PushS
	PlayAnimation(var_249_string, var_250_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_251_string = var_3_string; // 0xa0 PushT
	if(var_251_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_252_string = "all"; // 0xa3 PushS
	var_253_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_252_string, var_253_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_117:
	var_254_string = ""; // 0x75 PushV
	var_254_string = "Neutral"; // 0x76 MovS
	func_169(var_194_object, var_254_string); // 0x77 NEW_2
	var_255_int = 526936; // 0x79 PushI
	SetMessage(var_255_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_256_int = 527935; // 0x7e PushI
	var_257_int = -1; // 0x7f PushI
	var_258_int = 29288; // 0x80 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x81 TObjFunc
	var_259_int = 526937; // 0x83 PushI
	var_260_int = -1; // 0x84 PushI
	var_261_int = 28229; // 0x85 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_593()
{
	var_272_int = 10; // 0x251 PushI
	KillTimer(var_272_int); // 0x252 Func
	return 0; // 0x254 Return
}


func_1106(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x452 PushV
	GetVariable(var_203_string, var_205_int); // 0x453 Func
	var_202_int = var_205_int; // 0x455 Mov
	return 2; // 0x456 Return
}


func_1111(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x457 PushV
	GetGameTime(var_155_float); // 0x458 Func
	var_156_int = 1; // 0x45a PushI
	var_157_int = 0; // 0x45b PushV
	var_158_int = 24; // 0x45c PushI
	var_157_int = var_155_float / var_155_float; // 0x45d Div2
	var_153_int = var_156_int + var_157_int; // 0x45e Add2
	return 2; // 0x45f Return
}


func_1241(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x4d9 PushV
	var_92_string = "branch"; // 0x4da PushS
	GetVariable(var_92_string, var_91_int); // 0x4db Func
	var_93_int = 0; // 0x4dd PushI
	var_94_bool = var_91_int == var_93_int; // 0x4de Eq
	if(var_94_bool == 0) goto Label_1251; // 0x4df JumpB
	var_89_int = 1; // 0x4e0 MovI
	return 2; // 0x4e1 Return
	
Label_1251:
	var_95_int = 1; // 0x4e3 PushI
	var_96_bool = var_91_int == var_95_int; // 0x4e4 Eq
	if(var_96_bool == 0) goto Label_1256; // 0x4e5 JumpB
	var_89_int = 2; // 0x4e6 MovI
	return 2; // 0x4e7 Return
	
Label_1256:
	var_89_int = 3; // 0x4e8 MovI
	return 2; // 0x4e9 Return
}


func_479(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x1e0 PushV
	var_27_object = var_25_object; // 0x1e1 Mov
	TaskCall(0); // 0x1e2 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x1e3 NEW_2
	TaskReturn(); // 0x1e4 TaskReturn
	return 0; // 0x1e6 Return
}


func_1120(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x460 PushV
	var_34_string = "idle"; // 0x461 MovS
	var_35_int = var_32_int; // 0x462 Push
	if(var_35_int == 0) goto Label_1125; // 0x463 JumpB
	var_34_string = var_34_string + var_32_int; // 0x464 Add2
	
Label_1125:
	var_31_string = var_34_string; // 0x465 Mov
	return 2; // 0x466 Return
}


func_994(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x3e2 PushV
	var_152_string = "d"; // 0x3e3 PushS
	var_153_int = 0; // 0x3e4 PushV
	func_1111(var_153_int); // 0x3e5 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x3e7 Add
	var_160_string = "m"; // 0x3e8 PushS
	var_147_string = var_159_int + var_160_string; // 0x3e9 Add2
	var_148_int = 0; // 0x3ea MovI
	
Label_1003:
	var_161_int = 1; // 0x3eb PushI
	if(var_161_int == 0) goto Label_1016; // 0x3ec JumpB
	var_162_int = 1; // 0x3ed PushI
	var_163_int = var_148_int + var_162_int; // 0x3ee Add
	var_164_int = var_147_string + var_163_int; // 0x3ef Add
	HasProperty(var_164_int, var_149_bool); // 0x3f0 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x3f2 Not
	if(var_165_bool == 0) goto Label_1013; // 0x3f3 JumpB
	goto Label_1016; // 0x3f4 Jump
	
Label_1016:
	var_166_bool = var_148_int == 0; // 0x3f8 Not
	if(var_166_bool == 0) goto Label_1020; // 0x3f9 JumpB
	var_140_bool = 0; // 0x3fa MovB
	return 10; // 0x3fb Return
	
Label_1020:
	var_150_int = 0; // 0x3fc MovI
	var_167_int = 1; // 0x3fd PushI
	var_168_bool = var_148_int > var_167_int; // 0x3fe GT
	if(var_168_bool == 0) goto Label_1026; // 0x3ff JumpB
	irand(var_150_int, var_148_int); // 0x400 Func
	
Label_1026:
	var_169_int = 1; // 0x402 PushI
	var_170_int = var_150_int + var_169_int; // 0x403 Add
	var_171_int = var_147_string + var_170_int; // 0x404 Add
	GetProperty(var_171_int, var_151_string); // 0x405 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x407 PushV
	var_173_string = var_151_string; // 0x408 Mov
	func_1068(var_172_bool, var_173_string); // 0x409 NEW_2
	var_140_bool = var_172_bool; // 0x40a Mov
	return 10; // 0x40c Return
	
Label_1013:
	var_174_int = 1; // 0x3f5 PushI
	var_148_int = var_148_int + var_174_int; // 0x3f6 Add2
	goto Label_1003; // 0x3f7 Jump
}


func_1127(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x467 PushV
	var_28_int = 0; // 0x468 MovI
	
Label_1129:
	var_30_string = "all"; // 0x469 PushS
	var_31_string = ""; var_32_int = 0; // 0x46a PushV
	var_32_int = var_28_int; // 0x46b Mov
	func_1120(var_31_string, var_32_int); // 0x46c NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x46e Func
	var_36_bool = var_29_bool == 0; // 0x470 Not
	if(var_36_bool == 0) goto Label_1139; // 0x471 JumpB
	goto Label_1142; // 0x472 Jump
	
Label_1142:
	var_25_int = var_28_int; // 0x476 Mov
	return 4; // 0x477 Return
	
Label_1139:
	var_37_int = 1; // 0x473 PushI
	var_28_int = var_28_int + var_37_int; // 0x474 Add2
	goto Label_1129; // 0x475 Jump
}


func_1258(var_86_int)
{
	var_86_int = 515573; // 0x4ea MovI
	return 0; // 0x4eb Return
}


func_1260(var_85_int)
{
	var_85_int = 504032; // 0x4ec MovI
	return 0; // 0x4ed Return
}


func_1262(var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr.png"; // 0x4ee MovS
	return 0; // 0x4ef Return
}


func_1264(var_88_string)
{
	var_88_string = "ui/NPC_Bakalavr_b.png"; // 0x4f0 MovS
	return 0; // 0x4f1 Return
}


func_881()
{
	var_264_bool = 0; var_265_bool = 0; // 0x371 PushV
	var_266_bool = 1; // 0x372 PushB
	CameraSwitchToNormal(var_266_bool); // 0x373 Func
	var_267_bool = 0; // 0x375 PushV
	func_1266(var_267_bool); // 0x376 NEW_2
	if(var_267_bool == 0) goto Label_890; // 0x378 JumpB
	goto Label_898; // 0x379 Jump
	
Label_898:
	return 2; // 0x382 Return
	
Label_890:
	var_268_string = "head"; // 0x37a PushS
	HasAnimationTrack(var_265_bool, var_268_string); // 0x37b Func
	var_269_bool = var_265_bool; // 0x37d Push
	if(var_269_bool == 0) goto Label_898; // 0x37e JumpB
	var_270_string = "head"; // 0x37f PushS
	UnlookAsync(var_270_string); // 0x380 Func
}


func_1266(var_80_bool)
{
	var_80_bool = 1; // 0x4f2 MovB
	return 0; // 0x4f3 Return
}


func_1144()
{
	var_15_string = "k10q01"; // 0x479 PushS
	var_16_int = 1; // 0x47a PushI
	SetVariable(var_15_string, var_16_int); // 0x47b Func
	func_1174(); // 0x47e NEW_2
	func_1187(); // 0x481 NEW_2
	return 0; // 0x483 Return
}


func_635()
{
	func_775(); // 0x27c NEW_2
	func_593(); // 0x27f NEW_2
	lshStopSpeech(); // 0x281 Func
	lshStopAnimation(); // 0x283 Func
	StopAsync(); // 0x285 Func
	Hold(); // 0x287 Func
	return 0; // 0x289 Return
}


