task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xc0 PushI
	if(var_8_int == 0) goto Label_493; // 0xc1 JumpB
	func_821(); // 0xc3 NEW_2
	var_10_int = 34738; // 0xc5 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc6 Eq
	if(var_11_bool == 0) goto Label_205; // 0xc7 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc8 PushV
	var_12_object = var_1_object; // 0xc9 MovT
	var_13_object = var_0_object; // 0xca MovT
	func_876(); // 0xcb NEW_2
	
Label_205:
	var_43_int = 37544; // 0xcd PushI
	var_44_bool = var_7_bool == var_43_int; // 0xce Eq
	if(var_44_bool == 0) goto Label_213; // 0xcf JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0xd0 PushV
	var_45_object = var_1_object; // 0xd1 MovT
	var_46_object = var_0_object; // 0xd2 MovT
	func_876(); // 0xd3 NEW_2
	
Label_213:
	var_47_int = 34729; // 0xd5 PushI
	var_48_bool = var_6_int == var_47_int; // 0xd6 Eq
	if(var_48_bool == 0) goto Label_266; // 0xd7 JumpB
	var_49_bool = 0; var_50_object = Obj(); // 0xd8 PushV
	var_50_object = var_1_object; // 0xd9 MovT
	func_886(var_50_object); // 0xda NEW_2
	if(var_49_bool == 0) goto Label_246; // 0xdc JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xdd PushV
	var_57_object = var_1_object; // 0xde MovT
	var_58_object = var_0_object; // 0xdf MovT
	func_870(); // 0xe0 NEW_2
	var_61_string = ""; // 0xe2 PushV
	var_61_string = "Grin"; // 0xe3 MovS
	func_169(var_7_bool, var_61_string); // 0xe4 NEW_2
	var_78_int = 533209; // 0xe6 PushI
	SetMessage(var_78_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_79_int = 535195; // 0xeb PushI
	var_80_int = 36867; // 0xec PushI
	var_81_int = 36866; // 0xed PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xee TObjFunc
	var_82_int = 535202; // 0xf0 PushI
	var_83_int = 36867; // 0xf1 PushI
	var_84_int = 36873; // 0xf2 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_85_string = ""; // 0xf6 PushV
	var_85_string = "Untrust"; // 0xf7 MovS
	func_169(var_7_bool, var_85_string); // 0xf8 NEW_2
	var_86_int = 533219; // 0xfa PushI
	SetMessage(var_86_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_87_int = 533220; // 0xff PushI
	var_88_int = -1; // 0x100 PushI
	var_89_int = 34740; // 0x101 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x102 TObjFunc
	var_90_int = 535201; // 0x104 PushI
	var_91_int = -1; // 0x105 PushI
	var_92_int = 36872; // 0x106 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_93_int = 36867; // 0x10a PushI
	var_94_bool = var_6_int == var_93_int; // 0x10b Eq
	if(var_94_bool == 0) goto Label_289; // 0x10c JumpB
	var_95_string = ""; // 0x10d PushV
	var_95_string = "Untrust"; // 0x10e MovS
	func_169(var_7_bool, var_95_string); // 0x10f NEW_2
	var_96_int = 535196; // 0x111 PushI
	SetMessage(var_96_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_97_int = 535197; // 0x116 PushI
	var_98_int = 36869; // 0x117 PushI
	var_99_int = 36868; // 0x118 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x119 TObjFunc
	var_100_int = 535200; // 0x11b PushI
	var_101_int = 37527; // 0x11c PushI
	var_102_int = 36871; // 0x11d PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_103_int = 36869; // 0x121 PushI
	var_104_bool = var_6_int == var_103_int; // 0x122 Eq
	if(var_104_bool == 0) goto Label_312; // 0x123 JumpB
	var_105_string = ""; // 0x124 PushV
	var_105_string = "Untrust"; // 0x125 MovS
	func_169(var_7_bool, var_105_string); // 0x126 NEW_2
	var_106_int = 535198; // 0x128 PushI
	SetMessage(var_106_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_107_int = 535831; // 0x12d PushI
	var_108_int = 37526; // 0x12e PushI
	var_109_int = 37525; // 0x12f PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x130 TObjFunc
	var_110_int = 535828; // 0x132 PushI
	var_111_int = 37538; // 0x133 PushI
	var_112_int = 37522; // 0x134 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x135 TObjFunc
	return 0; // 0x137 Return
	
Label_312:
	var_113_int = 37526; // 0x138 PushI
	var_114_bool = var_6_int == var_113_int; // 0x139 Eq
	if(var_114_bool == 0) goto Label_335; // 0x13a JumpB
	var_115_string = ""; // 0x13b PushV
	var_115_string = "Untrust"; // 0x13c MovS
	func_169(var_7_bool, var_115_string); // 0x13d NEW_2
	var_116_int = 535832; // 0x13f PushI
	SetMessage(var_116_int); // 0x140 TObjFunc
	ClearReplies(); // 0x142 TObjFunc
	var_117_int = 535199; // 0x144 PushI
	var_118_int = 37527; // 0x145 PushI
	var_119_int = 36870; // 0x146 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x147 TObjFunc
	var_120_int = 535194; // 0x149 PushI
	var_121_int = 34731; // 0x14a PushI
	var_122_int = 36865; // 0x14b PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x14c TObjFunc
	return 0; // 0x14e Return
	
Label_335:
	var_123_int = 34731; // 0x14f PushI
	var_124_bool = var_6_int == var_123_int; // 0x150 Eq
	if(var_124_bool == 0) goto Label_358; // 0x151 JumpB
	var_125_string = ""; // 0x152 PushV
	var_125_string = "Untrust"; // 0x153 MovS
	func_169(var_7_bool, var_125_string); // 0x154 NEW_2
	var_126_int = 533211; // 0x156 PushI
	SetMessage(var_126_int); // 0x157 TObjFunc
	ClearReplies(); // 0x159 TObjFunc
	var_127_int = 533212; // 0x15b PushI
	var_128_int = 34733; // 0x15c PushI
	var_129_int = 34732; // 0x15d PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x15e TObjFunc
	var_130_int = 535834; // 0x160 PushI
	var_131_int = 37538; // 0x161 PushI
	var_132_int = 37528; // 0x162 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x163 TObjFunc
	return 0; // 0x165 Return
	
Label_358:
	var_133_int = 37538; // 0x166 PushI
	var_134_bool = var_6_int == var_133_int; // 0x167 Eq
	if(var_134_bool == 0) goto Label_376; // 0x168 JumpB
	var_135_string = ""; // 0x169 PushV
	var_135_string = "Smile"; // 0x16a MovS
	func_169(var_7_bool, var_135_string); // 0x16b NEW_2
	var_136_int = 535843; // 0x16d PushI
	SetMessage(var_136_int); // 0x16e TObjFunc
	ClearReplies(); // 0x170 TObjFunc
	var_137_int = 535844; // 0x172 PushI
	var_138_int = 37533; // 0x173 PushI
	var_139_int = 37539; // 0x174 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x175 TObjFunc
	return 0; // 0x177 Return
	
Label_376:
	var_140_int = 37527; // 0x178 PushI
	var_141_bool = var_6_int == var_140_int; // 0x179 Eq
	if(var_141_bool == 0) goto Label_399; // 0x17a JumpB
	var_142_string = ""; // 0x17b PushV
	var_142_string = "Untrust"; // 0x17c MovS
	func_169(var_7_bool, var_142_string); // 0x17d NEW_2
	var_143_int = 535833; // 0x17f PushI
	SetMessage(var_143_int); // 0x180 TObjFunc
	ClearReplies(); // 0x182 TObjFunc
	var_144_int = 535835; // 0x184 PushI
	var_145_int = 34733; // 0x185 PushI
	var_146_int = 37529; // 0x186 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x187 TObjFunc
	var_147_int = 535845; // 0x189 PushI
	var_148_int = 37533; // 0x18a PushI
	var_149_int = 37542; // 0x18b PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x18c TObjFunc
	return 0; // 0x18e Return
	
Label_399:
	var_150_int = 34733; // 0x18f PushI
	var_151_bool = var_6_int == var_150_int; // 0x190 Eq
	if(var_151_bool == 0) goto Label_422; // 0x191 JumpB
	var_152_string = ""; // 0x192 PushV
	var_152_string = "Neutral"; // 0x193 MovS
	func_169(var_7_bool, var_152_string); // 0x194 NEW_2
	var_153_int = 533213; // 0x196 PushI
	SetMessage(var_153_int); // 0x197 TObjFunc
	ClearReplies(); // 0x199 TObjFunc
	var_154_int = 533214; // 0x19b PushI
	var_155_int = 34735; // 0x19c PushI
	var_156_int = 34734; // 0x19d PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x19e TObjFunc
	var_157_int = 535842; // 0x1a0 PushI
	var_158_int = 34735; // 0x1a1 PushI
	var_159_int = 37537; // 0x1a2 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x1a3 TObjFunc
	return 0; // 0x1a5 Return
	
Label_422:
	var_160_int = 34735; // 0x1a6 PushI
	var_161_bool = var_6_int == var_160_int; // 0x1a7 Eq
	if(var_161_bool == 0) goto Label_440; // 0x1a8 JumpB
	var_162_string = ""; // 0x1a9 PushV
	var_162_string = "Neutral"; // 0x1aa MovS
	func_169(var_7_bool, var_162_string); // 0x1ab NEW_2
	var_163_int = 533215; // 0x1ad PushI
	SetMessage(var_163_int); // 0x1ae TObjFunc
	ClearReplies(); // 0x1b0 TObjFunc
	var_164_int = 533216; // 0x1b2 PushI
	var_165_int = 37533; // 0x1b3 PushI
	var_166_int = 34736; // 0x1b4 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x1b5 TObjFunc
	return 0; // 0x1b7 Return
	
Label_440:
	var_167_int = 37533; // 0x1b8 PushI
	var_168_bool = var_6_int == var_167_int; // 0x1b9 Eq
	if(var_168_bool == 0) goto Label_463; // 0x1ba JumpB
	var_169_string = ""; // 0x1bb PushV
	var_169_string = "Untrust"; // 0x1bc MovS
	func_169(var_7_bool, var_169_string); // 0x1bd NEW_2
	var_170_int = 535838; // 0x1bf PushI
	SetMessage(var_170_int); // 0x1c0 TObjFunc
	ClearReplies(); // 0x1c2 TObjFunc
	var_171_int = 535840; // 0x1c4 PushI
	var_172_int = 37536; // 0x1c5 PushI
	var_173_int = 37535; // 0x1c6 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1c7 TObjFunc
	var_174_int = 535846; // 0x1c9 PushI
	var_175_int = -1; // 0x1ca PushI
	var_176_int = 37544; // 0x1cb PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x1cc TObjFunc
	return 0; // 0x1ce Return
	
Label_463:
	var_177_int = 37536; // 0x1cf PushI
	var_178_bool = var_6_int == var_177_int; // 0x1d0 Eq
	if(var_178_bool == 0) goto Label_481; // 0x1d1 JumpB
	var_179_string = ""; // 0x1d2 PushV
	var_179_string = "Untrust"; // 0x1d3 MovS
	func_169(var_7_bool, var_179_string); // 0x1d4 NEW_2
	var_180_int = 535841; // 0x1d6 PushI
	SetMessage(var_180_int); // 0x1d7 TObjFunc
	ClearReplies(); // 0x1d9 TObjFunc
	var_181_int = 533218; // 0x1db PushI
	var_182_int = -1; // 0x1dc PushI
	var_183_int = 34738; // 0x1dd PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1de TObjFunc
	return 0; // 0x1e0 Return
	
Label_481:
	var_3_string = 1; // 0x1e1 TMovB
	var_184_bool = 0; // 0x1e2 PushV
	func_977(var_184_bool); // 0x1e3 NEW_2
	if(var_184_bool == 0) goto Label_489; // 0x1e5 JumpB
	lshStopAnimation(); // 0x1e6 Func
	goto Label_491; // 0x1e8 Jump
	
Label_491:
	return 0; // 0x1eb Return
	
Label_489:
	StopAnimation(); // 0x1e9 Func
	
Label_493:
	return 0; // 0x1ed Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x1ef PushV
	var_8_object = var_6_object; // 0x1f0 Mov
	TaskCall(0); // 0x1f1 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x1f2 NEW_2
	TaskReturn(); // 0x1f3 TaskReturn
	return 0; // 0x1f5 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1fa PushV
	var_9_string = "cleanup"; // 0x1fb PushS
	var_10_bool = var_6_string == var_9_string; // 0x1fc Eq
	if(var_10_bool == 0) goto Label_529; // 0x1fd JumpB
	var_0_object = 1; // 0x1fe TMovB
	IsLoaded(var_8_bool); // 0x1ff Func
	var_11_bool = 0; // 0x201 PushV
	var_11_bool = 0; // 0x202 MovB
	var_12_bool = var_8_bool == 0; // 0x203 Not
	if(var_12_bool == 0) goto Label_522; // 0x204 JumpB
	var_13_bool = 0; // 0x205 PushV
	func_550(var_13_bool); // 0x206 NEW_2
	if(var_13_bool == 0) goto Label_522; // 0x208 JumpB
	var_11_bool = 1; // 0x209 MovB
	
Label_522:
	if(var_11_bool == 0) goto Label_528; // 0x20a JumpB
	var_14_object = Obj(); // 0x20b PushV
	func_828(var_14_object); // 0x20c NEW_2
	RemoveActor(var_14_object); // 0x20e Func
	
Label_528:
	goto Label_533; // 0x210 Jump
	
Label_533:
	return 2; // 0x215 Return
	
Label_529:
	var_17_string = "restore"; // 0x211 PushS
	var_18_bool = var_6_string == var_17_string; // 0x212 Eq
	if(var_18_bool == 0) goto Label_533; // 0x213 JumpB
	var_0_object = 0; // 0x214 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x216 PushV
	var_6_bool = 0; // 0x217 MovB
	var_7_object = var_0_object; // 0x218 PushT
	if(var_7_object == 0) goto Label_543; // 0x219 JumpB
	var_8_bool = 0; // 0x21a PushV
	func_550(var_8_bool); // 0x21b NEW_2
	if(var_8_bool == 0) goto Label_543; // 0x21d JumpB
	var_6_bool = 1; // 0x21e MovB
	
Label_543:
	if(var_6_bool == 0) goto Label_549; // 0x21f JumpB
	var_9_object = Obj(); // 0x220 PushV
	func_828(var_9_object); // 0x221 NEW_2
	RemoveActor(var_9_object); // 0x223 Func
	
Label_549:
	return 0; // 0x225 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_502:
	Hold(); // 0x1f6 Func
	goto Label_502; // 0x1f8 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_552(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_971(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_969(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_973(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_975(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_952(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_bool = 0; var_79_object = Obj(); // 0x2f PushV
	var_80_object = Obj(); // 0x30 PushV
	func_828(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_637(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_242_bool = var_17_bool == 0; // 0x3f Not
	if(var_242_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_243_object = Obj(); // 0x46 PushV
	var_243_object = var_8_object; // 0x47 Mov
	func_620(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_898()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x382 PushV
	var_16_int = 640; // 0x383 PushI
	var_17_int = 2; // 0x384 PushI
	var_18_int = 533226; // 0x385 PushI
	CreateDiaryEntry(var_15_object, var_16_int, var_17_int, var_18_int); // 0x386 Func
	var_19_bool = 0; var_20_object = Obj(); var_21_int = 0; // 0x388 PushV
	var_20_object = var_15_object; // 0x389 Mov
	var_21_int = 637; // 0x38a MovI
	func_924(var_19_bool, var_20_object, var_21_int); // 0x38b NEW_2
	return 2; // 0x38d Return
}


func_834(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x342 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x343 Or
	var_49_float = sqrt(var_50_int); // 0x344 Sqrt2
	var_51_float = 0.0; // 0x345 PushF
	var_52_bool = var_49_float < var_51_float; // 0x346 LT
	if(var_52_bool == 0) goto Label_842; // 0x347 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x348 MovV
	return 2; // 0x349 Return
	
Label_842:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x34a Div2
	return 2; // 0x34b Return
}


func_775(var_218_string)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x307 PushV
	lshHasAnimation(var_222_bool, var_218_string); // 0x308 Func
	var_225_bool = var_222_bool; // 0x30a Push
	if(var_225_bool == 0) goto Label_786; // 0x30b JumpB
	lshGetAnimTimes(var_218_string, var_223_float, var_224_float); // 0x30c Func
	var_226_bool = 0; // 0x30e PushB
	lshPlayAnimation(var_223_float, var_224_float, var_226_bool); // 0x30f Func
	goto Label_790; // 0x311 Jump
	
Label_790:
	return 6; // 0x316 Return
	
Label_786:
	var_227_string = "Can't find lsh animation : "; // 0x312 PushS
	var_228_int = var_227_string + var_218_string; // 0x313 Add
	Trace(var_228_int); // 0x314 Func
}


func_969(var_66_int)
{
	var_66_int = 515529; // 0x3c9 MovI
	return 0; // 0x3ca Return
}


func_971(var_65_int)
{
	var_65_int = 502855; // 0x3cb MovI
	return 0; // 0x3cc Return
}


func_844(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x34c PushV
	GetVariable(var_183_string, var_185_int); // 0x34d Func
	var_182_int = var_185_int; // 0x34f Mov
	return 2; // 0x350 Return
}


func_973(var_67_string)
{
	var_67_string = "ui/NPC_Andrei.png"; // 0x3cd MovS
	return 0; // 0x3ce Return
}


func_911(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x38f PushV
	GetDiaryRoot(var_30_object); // 0x390 Func
	var_31_bool = var_30_object == 0; // 0x392 Not
	if(var_31_bool == 0) goto Label_921; // 0x393 JumpB
	var_32_string = "Can't retrieve diary root"; // 0x394 PushS
	Trace(var_32_string); // 0x395 Func
	var_28_object = 0; // 0x397 MovB
	return 2; // 0x398 Return
	
Label_921:
	var_28_object = var_30_object; // 0x399 Mov
	return 2; // 0x39a Return
}


func_975(var_68_string)
{
	var_68_string = "ui/NPC_Andrei_b.png"; // 0x3cf MovS
	return 0; // 0x3d0 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_139; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_886(var_181_object); // 0x59 NEW_2
	if(var_180_bool == 0) goto Label_117; // 0x5b JumpB
	var_188_object = Obj(); var_189_object = Obj(); // 0x5c PushV
	var_188_object = var_1_object; // 0x5d MovT
	var_189_object = var_0_object; // 0x5e MovT
	func_870(); // 0x5f NEW_2
	var_192_string = ""; // 0x61 PushV
	var_192_string = "Grin"; // 0x62 MovS
	func_169(var_174_object, var_192_string); // 0x63 NEW_2
	var_209_int = 533209; // 0x65 PushI
	SetMessage(var_209_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_210_int = 535195; // 0x6a PushI
	var_211_int = 36867; // 0x6b PushI
	var_212_int = 36866; // 0x6c PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x6d TObjFunc
	var_213_int = 535202; // 0x6f PushI
	var_214_int = 36867; // 0x70 PushI
	var_215_int = 36873; // 0x71 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x72 TObjFunc
	goto Label_139; // 0x74 Jump
	
Label_139:
	var_216_bool = 0; // 0x8b PushV
	func_977(var_216_bool); // 0x8c NEW_2
	if(var_216_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_217_string = var_3_string; // 0x91 PushT
	if(var_217_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_218_string = ""; // 0x94 PushV
	var_218_string = var_2_object; // 0x95 MovT
	func_775(var_218_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_229_string = "all"; // 0x9a PushS
	var_230_string = "idle"; // 0x9b PushS
	PlayAnimation(var_229_string, var_230_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_231_string = var_3_string; // 0xa0 PushT
	if(var_231_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_232_string = "all"; // 0xa3 PushS
	var_233_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_232_string, var_233_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_117:
	var_234_string = ""; // 0x75 PushV
	var_234_string = "Untrust"; // 0x76 MovS
	func_169(var_174_object, var_234_string); // 0x77 NEW_2
	var_235_int = 533219; // 0x79 PushI
	SetMessage(var_235_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_236_int = 533220; // 0x7e PushI
	var_237_int = -1; // 0x7f PushI
	var_238_int = 34740; // 0x80 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x81 TObjFunc
	var_239_int = 535201; // 0x83 PushI
	var_240_int = -1; // 0x84 PushI
	var_241_int = 36872; // 0x85 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_977(var_60_bool)
{
	var_60_bool = 1; // 0x3d1 MovB
	return 0; // 0x3d2 Return
}


func_849(var_37_bool, var_38_string, var_39_string)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x351 PushV
	FindActor(var_41_object, var_38_string); // 0x352 Func
	var_42_bool = var_41_object == 0; // 0x354 NullEq
	if(var_42_bool == 0) goto Label_856; // 0x355 JumpB
	var_37_bool = 0; // 0x356 MovB
	return 2; // 0x357 Return
	
Label_856:
	Trigger(var_41_object, var_39_string); // 0x358 Func
	var_37_bool = 1; // 0x35a MovB
	return 2; // 0x35b Return
}


func_791(var_196_string, var_197_bool)
{
	var_200_bool = 0; var_201_float = 0; var_202_float = 0; var_203_bool = 0; var_204_float = 0; var_205_float = 0; // 0x317 PushV
	lshHasAnimation(var_203_bool, var_196_string); // 0x318 Func
	var_206_bool = var_203_bool; // 0x31a Push
	if(var_206_bool == 0) goto Label_801; // 0x31b JumpB
	lshGetAnimTimes(var_196_string, var_204_float, var_205_float); // 0x31c Func
	lshPlayAnimation(var_204_float, var_205_float, var_197_bool); // 0x31e Func
	goto Label_805; // 0x320 Jump
	
Label_805:
	return 6; // 0x325 Return
	
Label_801:
	var_207_string = "Can't find lsh animation : "; // 0x321 PushS
	var_208_int = var_207_string + var_196_string; // 0x322 Add
	Trace(var_208_int); // 0x323 Func
}


func_924(var_19_bool, var_20_object, var_21_int)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_int = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; // 0x39c PushV
	var_28_object = Obj(); // 0x39d PushV
	func_911(var_28_object); // 0x39e NEW_2
	var_25_object = var_28_object; // 0x39f Mov
	Find(var_21_int, var_26_object); // 0x3a1 ObjFunc
	var_33_bool = var_26_object == 0; // 0x3a3 Not
	if(var_33_bool == 0) goto Label_939; // 0x3a4 JumpB
	var_34_string = "Can't find diary parent with id: "; // 0x3a5 PushS
	var_35_int = var_34_string + var_21_int; // 0x3a6 Add
	Trace(var_35_int); // 0x3a7 Func
	var_19_bool = 0; // 0x3a9 MovB
	return 6; // 0x3aa Return
	
Label_939:
	AddChild(var_20_object); // 0x3ab ObjFunc
	var_36_int = 7; // 0x3ad PushI
	SendWorldWndMessage(var_36_int); // 0x3ae Func
	GetCategory(var_27_int); // 0x3b0 ObjFunc
	SetDiarySection(var_27_int); // 0x3b2 Func
	var_19_bool = 0; // 0x3b4 MovB
	return 6; // 0x3b5 Return
}


func_732(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x2dc PushV
	var_132_string = "d"; // 0x2dd PushS
	var_133_int = 0; // 0x2de PushV
	func_861(var_133_int); // 0x2df NEW_2
	var_139_int = var_132_string + var_133_int; // 0x2e1 Add
	var_140_string = "m"; // 0x2e2 PushS
	var_127_string = var_139_int + var_140_string; // 0x2e3 Add2
	var_128_int = 0; // 0x2e4 MovI
	
Label_741:
	var_141_int = 1; // 0x2e5 PushI
	if(var_141_int == 0) goto Label_754; // 0x2e6 JumpB
	var_142_int = 1; // 0x2e7 PushI
	var_143_int = var_128_int + var_142_int; // 0x2e8 Add
	var_144_int = var_127_string + var_143_int; // 0x2e9 Add
	HasProperty(var_144_int, var_129_bool); // 0x2ea ObjFunc
	var_145_bool = var_129_bool == 0; // 0x2ec Not
	if(var_145_bool == 0) goto Label_751; // 0x2ed JumpB
	goto Label_754; // 0x2ee Jump
	
Label_754:
	var_146_bool = var_128_int == 0; // 0x2f2 Not
	if(var_146_bool == 0) goto Label_758; // 0x2f3 JumpB
	var_120_bool = 0; // 0x2f4 MovB
	return 10; // 0x2f5 Return
	
Label_758:
	var_130_int = 0; // 0x2f6 MovI
	var_147_int = 1; // 0x2f7 PushI
	var_148_bool = var_128_int > var_147_int; // 0x2f8 GT
	if(var_148_bool == 0) goto Label_764; // 0x2f9 JumpB
	irand(var_130_int, var_128_int); // 0x2fa Func
	
Label_764:
	var_149_int = 1; // 0x2fc PushI
	var_150_int = var_130_int + var_149_int; // 0x2fd Add
	var_151_int = var_127_string + var_150_int; // 0x2fe Add
	GetProperty(var_151_int, var_131_string); // 0x2ff ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x301 PushV
	var_153_string = var_131_string; // 0x302 Mov
	func_806(var_152_bool, var_153_string); // 0x303 NEW_2
	var_120_bool = var_152_bool; // 0x304 Mov
	return 10; // 0x306 Return
	
Label_751:
	var_154_int = 1; // 0x2ef PushI
	var_128_int = var_128_int + var_154_int; // 0x2f0 Add2
	goto Label_741; // 0x2f1 Jump
}


func_861(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x35d PushV
	GetGameTime(var_135_float); // 0x35e Func
	var_136_int = 1; // 0x360 PushI
	var_137_int = 0; // 0x361 PushV
	var_138_int = 24; // 0x362 PushI
	var_137_int = var_135_float / var_135_float; // 0x363 Div2
	var_133_int = var_136_int + var_137_int; // 0x364 Add2
	return 2; // 0x365 Return
}


func_550(var_8_bool)
{
	var_8_bool = 1; // 0x226 MovB
	return 0; // 0x227 Return
}


func_806(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x326 PushV
	var_116_bool = 0; // 0x327 PushV
	func_977(var_116_bool); // 0x328 NEW_2
	if(var_116_bool == 0) goto Label_819; // 0x32a JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x32b Func
	var_117_bool = var_115_bool; // 0x32d Push
	if(var_117_bool == 0) goto Label_819; // 0x32e JumpB
	lshPlaySpeech(var_113_string); // 0x32f Func
	var_112_bool = 1; // 0x331 MovB
	return 2; // 0x332 Return
	
Label_819:
	var_112_bool = 0; // 0x333 MovB
	return 2; // 0x334 Return
}


func_552(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x228 PushV
	GetPosition(var_31_cvector); // 0x229 ObjFunc
	GetEyesHeight(var_30_float); // 0x22b ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x22d PushE
	var_39_float = var_39_float + var_30_float; // 0x22e Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x22f PopE
	GetPosition(var_32_cvector); // 0x230 Func
	GetEyesHeight(var_30_float); // 0x232 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x234 PushE
	var_40_float = var_40_float + var_30_float; // 0x235 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x236 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x237 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x238 PushE
	var_41_float = 0; // 0x239 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x23a PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x23b Or
	var_43_float = sqrt(var_42_int); // 0x23c Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x23d Div2
	var_34_cvector = -var_33_cvector; // 0x23e Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x23f Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x240 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x241 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x242 Xor2
	func_834(var_45_cvector, var_46_cvector); // 0x243 NEW_2
	var_53_int = 25; // 0x245 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x246 Mult
	var_55_int = var_44_float + var_54_float; // 0x247 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x248 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x249 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x24a Add2
	IsOverrideActive(var_37_bool); // 0x24b Func
	var_57_bool = var_37_bool; // 0x24d Push
	if(var_57_bool == 0) goto Label_593; // 0x24e JumpB
	var_18_bool = 0; // 0x24f MovB
	return 18; // 0x250 Return
	
Label_593:
	StopWorld(); // 0x251 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x253 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x255 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x256 PushE
	Rotate(var_58_float, var_59_float); // 0x257 Func
	var_60_bool = 0; // 0x259 PushV
	func_977(var_60_bool); // 0x25a NEW_2
	if(var_60_bool == 0) goto Label_606; // 0x25c JumpB
	goto Label_614; // 0x25d Jump
	
Label_614:
	CameraWaitForPlayFinish(); // 0x266 Func
	ResumeWorld(); // 0x268 Func
	var_18_bool = 1; // 0x26a MovB
	return 18; // 0x26b Return
	
Label_606:
	var_61_string = "head"; // 0x25e PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x25f Func
	var_62_bool = var_38_bool; // 0x261 Push
	if(var_62_bool == 0) goto Label_614; // 0x262 JumpB
	var_63_string = "head"; // 0x263 PushS
	LookAsyncCamera(var_63_string); // 0x264 Func
}


func_169(var_2_object, var_192_string)
{
	var_193_bool = 0; // 0xaa PushV
	func_977(var_193_bool); // 0xab NEW_2
	var_194_bool = var_193_bool == 0; // 0xad Not
	if(var_194_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_195_bool = var_192_string == var_2_object; // 0xb0 Eq
	if(var_195_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_196_string = ""; var_197_bool = 0; // 0xb3 PushV
	var_196_string = var_192_string; // 0xb4 Mov
	var_198_string = ""; // 0xb5 PushS
	var_199_bool = var_192_string == var_198_string; // 0xb6 Eq
	if(var_199_bool == 0) goto Label_186; // 0xb7 JumpB
	var_197_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_791(var_196_string, var_197_bool); // 0xbb NEW_2
	var_2_object = var_192_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_197_bool = 1; // 0xba MovB
}


func_870()
{
	var_190_string = "ood7AndreiPrisoned1"; // 0x367 PushS
	var_191_int = 1; // 0x368 PushI
	SetVariable(var_190_string, var_191_int); // 0x369 Func
	return 0; // 0x36b Return
}


func_620()
{
	var_244_bool = 0; var_245_bool = 0; // 0x26c PushV
	CameraSwitchToNormal(); // 0x26d Func
	var_246_bool = 0; // 0x26f PushV
	func_977(var_246_bool); // 0x270 NEW_2
	if(var_246_bool == 0) goto Label_628; // 0x272 JumpB
	goto Label_636; // 0x273 Jump
	
Label_636:
	return 2; // 0x27c Return
	
Label_628:
	var_247_string = "head"; // 0x274 PushS
	HasAnimationTrack(var_245_bool, var_247_string); // 0x275 Func
	var_248_bool = var_245_bool; // 0x277 Push
	if(var_248_bool == 0) goto Label_636; // 0x278 JumpB
	var_249_string = "head"; // 0x279 PushS
	UnlookAsync(var_249_string); // 0x27a Func
}


func_876()
{
	func_898(); // 0x36e NEW_2
	var_37_bool = 0; var_38_string = ""; var_39_string = ""; // 0x370 PushV
	var_38_string = "quest_d7_04"; // 0x371 MovS
	var_39_string = "completed"; // 0x372 MovS
	func_849(var_37_bool, var_38_string, var_39_string); // 0x373 NEW_2
	return 0; // 0x375 Return
}


func_821()
{
	var_9_bool = 0; // 0x335 PushV
	func_977(var_9_bool); // 0x336 NEW_2
	if(var_9_bool == 0) goto Label_827; // 0x338 JumpB
	lshStopSpeech(); // 0x339 Func
	
Label_827:
	return 0; // 0x33b Return
}


func_886(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x377 PushV
	var_183_string = "ood7AndreiPrisoned1"; // 0x378 MovS
	func_844(var_182_int, var_183_string); // 0x379 NEW_2
	var_186_int = 0; // 0x37b PushI
	var_187_bool = var_182_int == var_186_int; // 0x37c Eq
	if(var_187_bool == 0) goto Label_896; // 0x37d JumpB
	var_180_bool = 1; // 0x37e MovB
	return 0; // 0x37f Return
	
Label_896:
	var_180_bool = 0; // 0x380 MovB
	return 0; // 0x381 Return
}


func_695(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x2b7 PushV
	var_96_string = "c"; // 0x2b8 MovS
	var_97_int = 0; // 0x2b9 MovI
	
Label_698:
	var_101_int = 1; // 0x2ba PushI
	if(var_101_int == 0) goto Label_711; // 0x2bb JumpB
	var_102_int = 1; // 0x2bc PushI
	var_103_int = var_97_int + var_102_int; // 0x2bd Add
	var_104_int = var_96_string + var_103_int; // 0x2be Add
	HasProperty(var_104_int, var_98_bool); // 0x2bf ObjFunc
	var_105_bool = var_98_bool == 0; // 0x2c1 Not
	if(var_105_bool == 0) goto Label_708; // 0x2c2 JumpB
	goto Label_711; // 0x2c3 Jump
	
Label_711:
	var_106_bool = var_97_int == 0; // 0x2c7 Not
	if(var_106_bool == 0) goto Label_715; // 0x2c8 JumpB
	var_89_bool = 0; // 0x2c9 MovB
	return 10; // 0x2ca Return
	
Label_715:
	var_99_int = 0; // 0x2cb MovI
	var_107_int = 1; // 0x2cc PushI
	var_108_bool = var_97_int > var_107_int; // 0x2cd GT
	if(var_108_bool == 0) goto Label_721; // 0x2ce JumpB
	irand(var_99_int, var_97_int); // 0x2cf Func
	
Label_721:
	var_109_int = 1; // 0x2d1 PushI
	var_110_int = var_99_int + var_109_int; // 0x2d2 Add
	var_111_int = var_96_string + var_110_int; // 0x2d3 Add
	GetProperty(var_111_int, var_100_string); // 0x2d4 ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x2d6 PushV
	var_113_string = var_100_string; // 0x2d7 Mov
	func_806(var_112_bool, var_113_string); // 0x2d8 NEW_2
	var_89_bool = var_112_bool; // 0x2d9 Mov
	return 10; // 0x2db Return
	
Label_708:
	var_118_int = 1; // 0x2c4 PushI
	var_97_int = var_97_int + var_118_int; // 0x2c5 Add2
	goto Label_698; // 0x2c6 Jump
}


func_952(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x3b8 PushV
	var_72_string = "branch"; // 0x3b9 PushS
	GetVariable(var_72_string, var_71_int); // 0x3ba Func
	var_73_int = 0; // 0x3bc PushI
	var_74_bool = var_71_int == var_73_int; // 0x3bd Eq
	if(var_74_bool == 0) goto Label_962; // 0x3be JumpB
	var_69_int = 1; // 0x3bf MovI
	return 2; // 0x3c0 Return
	
Label_962:
	var_75_int = 1; // 0x3c2 PushI
	var_76_bool = var_71_int == var_75_int; // 0x3c3 Eq
	if(var_76_bool == 0) goto Label_967; // 0x3c4 JumpB
	var_69_int = 2; // 0x3c5 MovI
	return 2; // 0x3c6 Return
	
Label_967:
	var_69_int = 3; // 0x3c7 MovI
	return 2; // 0x3c8 Return
}


func_828(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x33c PushV
	self(var_11_object); // 0x33d Func
	var_9_object = var_11_object; // 0x33f Mov
	return 2; // 0x340 Return
}


func_637(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x27d PushV
	var_87_string = "voice_common"; // 0x27e PushS
	GetVariable(var_87_string, var_85_int); // 0x27f Func
	var_88_int = var_85_int; // 0x281 Push
	if(var_88_int == 0) goto Label_675; // 0x282 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x283 PushV
	var_90_object = var_79_object; // 0x284 Mov
	func_695(var_90_object); // 0x285 NEW_2
	var_119_bool = var_89_bool == 0; // 0x287 Not
	if(var_119_bool == 0) goto Label_657; // 0x288 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x289 PushV
	var_121_object = var_79_object; // 0x28a Mov
	func_732(var_121_object); // 0x28b NEW_2
	var_155_bool = var_120_bool == 0; // 0x28d Not
	if(var_155_bool == 0) goto Label_657; // 0x28e JumpB
	var_78_bool = 0; // 0x28f MovB
	return 4; // 0x290 Return
	
Label_657:
	var_156_int = 2; // 0x291 PushI
	irand(var_86_int, var_156_int); // 0x292 Func
	var_157_int = var_86_int; // 0x294 Push
	if(var_157_int == 0) goto Label_670; // 0x295 JumpB
	var_158_string = "voice_common"; // 0x296 PushS
	var_159_int = 1; // 0x297 PushI
	var_160_int = var_85_int + var_159_int; // 0x298 Add
	var_161_int = 3; // 0x299 PushI
	var_162_int = var_160_int / var_161_int; // 0x29a Mod
	SetVariable(var_158_string, var_162_int); // 0x29b Func
	goto Label_674; // 0x29d Jump
	
Label_674:
	goto Label_693; // 0x2a2 Jump
	
Label_693:
	var_78_bool = 1; // 0x2b5 MovB
	return 4; // 0x2b6 Return
	
Label_670:
	var_163_string = "voice_common"; // 0x29e PushS
	var_164_int = 0; // 0x29f PushI
	SetVariable(var_163_string, var_164_int); // 0x2a0 Func
	
Label_675:
	var_165_bool = 0; var_166_object = Obj(); // 0x2a3 PushV
	var_166_object = var_79_object; // 0x2a4 Mov
	func_732(var_166_object); // 0x2a5 NEW_2
	var_167_bool = var_165_bool == 0; // 0x2a7 Not
	if(var_167_bool == 0) goto Label_689; // 0x2a8 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x2a9 PushV
	var_169_object = var_79_object; // 0x2aa Mov
	func_695(var_169_object); // 0x2ab NEW_2
	var_170_bool = var_168_bool == 0; // 0x2ad Not
	if(var_170_bool == 0) goto Label_689; // 0x2ae JumpB
	var_78_bool = 0; // 0x2af MovB
	return 4; // 0x2b0 Return
	
Label_689:
	var_171_string = "voice_common"; // 0x2b1 PushS
	var_172_int = 1; // 0x2b2 PushI
	SetVariable(var_171_string, var_172_int); // 0x2b3 Func
}


