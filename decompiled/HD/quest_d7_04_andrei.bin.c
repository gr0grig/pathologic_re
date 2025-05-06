task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xc0 PushI
	if(var_8_int == 0) goto Label_493; // 0xc1 JumpB
	func_823(); // 0xc3 NEW_2
	var_10_int = 34738; // 0xc5 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc6 Eq
	if(var_11_bool == 0) goto Label_205; // 0xc7 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc8 PushV
	var_12_object = var_1_object; // 0xc9 MovT
	var_13_object = var_0_object; // 0xca MovT
	func_878(); // 0xcb NEW_2
	
Label_205:
	var_43_int = 37544; // 0xcd PushI
	var_44_bool = var_7_bool == var_43_int; // 0xce Eq
	if(var_44_bool == 0) goto Label_213; // 0xcf JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0xd0 PushV
	var_45_object = var_1_object; // 0xd1 MovT
	var_46_object = var_0_object; // 0xd2 MovT
	func_878(); // 0xd3 NEW_2
	
Label_213:
	var_47_int = 34729; // 0xd5 PushI
	var_48_bool = var_6_int == var_47_int; // 0xd6 Eq
	if(var_48_bool == 0) goto Label_266; // 0xd7 JumpB
	var_49_bool = 0; var_50_object = Obj(); // 0xd8 PushV
	var_50_object = var_1_object; // 0xd9 MovT
	func_888(var_50_object); // 0xda NEW_2
	if(var_49_bool == 0) goto Label_246; // 0xdc JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xdd PushV
	var_57_object = var_1_object; // 0xde MovT
	var_58_object = var_0_object; // 0xdf MovT
	func_872(); // 0xe0 NEW_2
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
	func_979(var_184_bool); // 0x1e3 NEW_2
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
	func_830(var_14_object); // 0x20c NEW_2
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
	func_830(var_9_object); // 0x221 NEW_2
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
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_973(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_971(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_975(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_977(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_954(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_bool = 0; var_80_object = Obj(); // 0x2f PushV
	var_81_object = Obj(); // 0x30 PushV
	func_830(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_639(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_243_bool = var_17_bool == 0; // 0x3f Not
	if(var_243_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_244_object = Obj(); // 0x46 PushV
	var_244_object = var_8_object; // 0x47 Mov
	func_621(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_900()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x384 PushV
	var_16_int = 640; // 0x385 PushI
	var_17_int = 2; // 0x386 PushI
	var_18_int = 533226; // 0x387 PushI
	CreateDiaryEntry(var_15_object, var_16_int, var_17_int, var_18_int); // 0x388 Func
	var_19_bool = 0; var_20_object = Obj(); var_21_int = 0; // 0x38a PushV
	var_20_object = var_15_object; // 0x38b Mov
	var_21_int = 637; // 0x38c MovI
	func_926(var_19_bool, var_20_object, var_21_int); // 0x38d NEW_2
	return 2; // 0x38f Return
}


func_836(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x344 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x345 Or
	var_49_float = sqrt(var_50_int); // 0x346 Sqrt2
	var_51_float = 0.0; // 0x347 PushF
	var_52_bool = var_49_float < var_51_float; // 0x348 LT
	if(var_52_bool == 0) goto Label_844; // 0x349 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x34a MovV
	return 2; // 0x34b Return
	
Label_844:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x34c Div2
	return 2; // 0x34d Return
}


func_777(var_219_string)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; // 0x309 PushV
	lshHasAnimation(var_223_bool, var_219_string); // 0x30a Func
	var_226_bool = var_223_bool; // 0x30c Push
	if(var_226_bool == 0) goto Label_788; // 0x30d JumpB
	lshGetAnimTimes(var_219_string, var_224_float, var_225_float); // 0x30e Func
	var_227_bool = 0; // 0x310 PushB
	lshPlayAnimation(var_224_float, var_225_float, var_227_bool); // 0x311 Func
	goto Label_792; // 0x313 Jump
	
Label_792:
	return 6; // 0x318 Return
	
Label_788:
	var_228_string = "Can't find lsh animation : "; // 0x314 PushS
	var_229_int = var_228_string + var_219_string; // 0x315 Add
	Trace(var_229_int); // 0x316 Func
}


func_971(var_67_int)
{
	var_67_int = 515529; // 0x3cb MovI
	return 0; // 0x3cc Return
}


func_973(var_66_int)
{
	var_66_int = 502855; // 0x3cd MovI
	return 0; // 0x3ce Return
}


func_846(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x34e PushV
	GetVariable(var_184_string, var_186_int); // 0x34f Func
	var_183_int = var_186_int; // 0x351 Mov
	return 2; // 0x352 Return
}


func_975(var_68_string)
{
	var_68_string = "ui/NPC_Andrei.png"; // 0x3cf MovS
	return 0; // 0x3d0 Return
}


func_913(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x391 PushV
	GetDiaryRoot(var_30_object); // 0x392 Func
	var_31_bool = var_30_object == 0; // 0x394 Not
	if(var_31_bool == 0) goto Label_923; // 0x395 JumpB
	var_32_string = "Can't retrieve diary root"; // 0x396 PushS
	Trace(var_32_string); // 0x397 Func
	var_28_object = 0; // 0x399 MovB
	return 2; // 0x39a Return
	
Label_923:
	var_28_object = var_30_object; // 0x39b Mov
	return 2; // 0x39c Return
}


func_977(var_69_string)
{
	var_69_string = "ui/NPC_Andrei_b.png"; // 0x3d1 MovS
	return 0; // 0x3d2 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_139; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_888(var_182_object); // 0x59 NEW_2
	if(var_181_bool == 0) goto Label_117; // 0x5b JumpB
	var_189_object = Obj(); var_190_object = Obj(); // 0x5c PushV
	var_189_object = var_1_object; // 0x5d MovT
	var_190_object = var_0_object; // 0x5e MovT
	func_872(); // 0x5f NEW_2
	var_193_string = ""; // 0x61 PushV
	var_193_string = "Grin"; // 0x62 MovS
	func_169(var_175_object, var_193_string); // 0x63 NEW_2
	var_210_int = 533209; // 0x65 PushI
	SetMessage(var_210_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_211_int = 535195; // 0x6a PushI
	var_212_int = 36867; // 0x6b PushI
	var_213_int = 36866; // 0x6c PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x6d TObjFunc
	var_214_int = 535202; // 0x6f PushI
	var_215_int = 36867; // 0x70 PushI
	var_216_int = 36873; // 0x71 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x72 TObjFunc
	goto Label_139; // 0x74 Jump
	
Label_139:
	var_217_bool = 0; // 0x8b PushV
	func_979(var_217_bool); // 0x8c NEW_2
	if(var_217_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_218_string = var_3_string; // 0x91 PushT
	if(var_218_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_219_string = ""; // 0x94 PushV
	var_219_string = var_2_object; // 0x95 MovT
	func_777(var_219_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_230_string = "all"; // 0x9a PushS
	var_231_string = "idle"; // 0x9b PushS
	PlayAnimation(var_230_string, var_231_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_232_string = var_3_string; // 0xa0 PushT
	if(var_232_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_233_string = "all"; // 0xa3 PushS
	var_234_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_233_string, var_234_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_117:
	var_235_string = ""; // 0x75 PushV
	var_235_string = "Untrust"; // 0x76 MovS
	func_169(var_175_object, var_235_string); // 0x77 NEW_2
	var_236_int = 533219; // 0x79 PushI
	SetMessage(var_236_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_237_int = 533220; // 0x7e PushI
	var_238_int = -1; // 0x7f PushI
	var_239_int = 34740; // 0x80 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x81 TObjFunc
	var_240_int = 535201; // 0x83 PushI
	var_241_int = -1; // 0x84 PushI
	var_242_int = 36872; // 0x85 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_979(var_61_bool)
{
	var_61_bool = 1; // 0x3d3 MovB
	return 0; // 0x3d4 Return
}


func_851(var_37_bool, var_38_string, var_39_string)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x353 PushV
	FindActor(var_41_object, var_38_string); // 0x354 Func
	var_42_bool = var_41_object == 0; // 0x356 NullEq
	if(var_42_bool == 0) goto Label_858; // 0x357 JumpB
	var_37_bool = 0; // 0x358 MovB
	return 2; // 0x359 Return
	
Label_858:
	Trigger(var_41_object, var_39_string); // 0x35a Func
	var_37_bool = 1; // 0x35c MovB
	return 2; // 0x35d Return
}


func_793(var_197_string, var_198_bool)
{
	var_201_bool = 0; var_202_float = 0; var_203_float = 0; var_204_bool = 0; var_205_float = 0; var_206_float = 0; // 0x319 PushV
	lshHasAnimation(var_204_bool, var_197_string); // 0x31a Func
	var_207_bool = var_204_bool; // 0x31c Push
	if(var_207_bool == 0) goto Label_803; // 0x31d JumpB
	lshGetAnimTimes(var_197_string, var_205_float, var_206_float); // 0x31e Func
	lshPlayAnimation(var_205_float, var_206_float, var_198_bool); // 0x320 Func
	goto Label_807; // 0x322 Jump
	
Label_807:
	return 6; // 0x327 Return
	
Label_803:
	var_208_string = "Can't find lsh animation : "; // 0x323 PushS
	var_209_int = var_208_string + var_197_string; // 0x324 Add
	Trace(var_209_int); // 0x325 Func
}


func_926(var_19_bool, var_20_object, var_21_int)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_int = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; // 0x39e PushV
	var_28_object = Obj(); // 0x39f PushV
	func_913(var_28_object); // 0x3a0 NEW_2
	var_25_object = var_28_object; // 0x3a1 Mov
	Find(var_21_int, var_26_object); // 0x3a3 ObjFunc
	var_33_bool = var_26_object == 0; // 0x3a5 Not
	if(var_33_bool == 0) goto Label_941; // 0x3a6 JumpB
	var_34_string = "Can't find diary parent with id: "; // 0x3a7 PushS
	var_35_int = var_34_string + var_21_int; // 0x3a8 Add
	Trace(var_35_int); // 0x3a9 Func
	var_19_bool = 0; // 0x3ab MovB
	return 6; // 0x3ac Return
	
Label_941:
	AddChild(var_20_object); // 0x3ad ObjFunc
	var_36_int = 7; // 0x3af PushI
	SendWorldWndMessage(var_36_int); // 0x3b0 Func
	GetCategory(var_27_int); // 0x3b2 ObjFunc
	SetDiarySection(var_27_int); // 0x3b4 Func
	var_19_bool = 0; // 0x3b6 MovB
	return 6; // 0x3b7 Return
}


func_734(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x2de PushV
	var_133_string = "d"; // 0x2df PushS
	var_134_int = 0; // 0x2e0 PushV
	func_863(var_134_int); // 0x2e1 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x2e3 Add
	var_141_string = "m"; // 0x2e4 PushS
	var_128_string = var_140_int + var_141_string; // 0x2e5 Add2
	var_129_int = 0; // 0x2e6 MovI
	
Label_743:
	var_142_int = 1; // 0x2e7 PushI
	if(var_142_int == 0) goto Label_756; // 0x2e8 JumpB
	var_143_int = 1; // 0x2e9 PushI
	var_144_int = var_129_int + var_143_int; // 0x2ea Add
	var_145_int = var_128_string + var_144_int; // 0x2eb Add
	HasProperty(var_145_int, var_130_bool); // 0x2ec ObjFunc
	var_146_bool = var_130_bool == 0; // 0x2ee Not
	if(var_146_bool == 0) goto Label_753; // 0x2ef JumpB
	goto Label_756; // 0x2f0 Jump
	
Label_756:
	var_147_bool = var_129_int == 0; // 0x2f4 Not
	if(var_147_bool == 0) goto Label_760; // 0x2f5 JumpB
	var_121_bool = 0; // 0x2f6 MovB
	return 10; // 0x2f7 Return
	
Label_760:
	var_131_int = 0; // 0x2f8 MovI
	var_148_int = 1; // 0x2f9 PushI
	var_149_bool = var_129_int > var_148_int; // 0x2fa GT
	if(var_149_bool == 0) goto Label_766; // 0x2fb JumpB
	irand(var_131_int, var_129_int); // 0x2fc Func
	
Label_766:
	var_150_int = 1; // 0x2fe PushI
	var_151_int = var_131_int + var_150_int; // 0x2ff Add
	var_152_int = var_128_string + var_151_int; // 0x300 Add
	GetProperty(var_152_int, var_132_string); // 0x301 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x303 PushV
	var_154_string = var_132_string; // 0x304 Mov
	func_808(var_153_bool, var_154_string); // 0x305 NEW_2
	var_121_bool = var_153_bool; // 0x306 Mov
	return 10; // 0x308 Return
	
Label_753:
	var_155_int = 1; // 0x2f1 PushI
	var_129_int = var_129_int + var_155_int; // 0x2f2 Add2
	goto Label_743; // 0x2f3 Jump
}


func_863(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x35f PushV
	GetGameTime(var_136_float); // 0x360 Func
	var_137_int = 1; // 0x362 PushI
	var_138_int = 0; // 0x363 PushV
	var_139_int = 24; // 0x364 PushI
	var_138_int = var_136_float / var_136_float; // 0x365 Div2
	var_134_int = var_137_int + var_138_int; // 0x366 Add2
	return 2; // 0x367 Return
}


func_550(var_8_bool)
{
	var_8_bool = 1; // 0x226 MovB
	return 0; // 0x227 Return
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
	func_836(var_45_cvector, var_46_cvector); // 0x243 NEW_2
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
	var_58_bool = 1; // 0x253 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x254 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x256 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x257 PushE
	Rotate(var_59_float, var_60_float); // 0x258 Func
	var_61_bool = 0; // 0x25a PushV
	func_979(var_61_bool); // 0x25b NEW_2
	if(var_61_bool == 0) goto Label_607; // 0x25d JumpB
	goto Label_615; // 0x25e Jump
	
Label_615:
	CameraWaitForPlayFinish(); // 0x267 Func
	ResumeWorld(); // 0x269 Func
	var_18_bool = 1; // 0x26b MovB
	return 18; // 0x26c Return
	
Label_607:
	var_62_string = "head"; // 0x25f PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x260 Func
	var_63_bool = var_38_bool; // 0x262 Push
	if(var_63_bool == 0) goto Label_615; // 0x263 JumpB
	var_64_string = "head"; // 0x264 PushS
	LookAsyncCamera(var_64_string); // 0x265 Func
}


func_169(var_2_object, var_193_string)
{
	var_194_bool = 0; // 0xaa PushV
	func_979(var_194_bool); // 0xab NEW_2
	var_195_bool = var_194_bool == 0; // 0xad Not
	if(var_195_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_196_bool = var_193_string == var_2_object; // 0xb0 Eq
	if(var_196_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_197_string = ""; var_198_bool = 0; // 0xb3 PushV
	var_197_string = var_193_string; // 0xb4 Mov
	var_199_string = ""; // 0xb5 PushS
	var_200_bool = var_193_string == var_199_string; // 0xb6 Eq
	if(var_200_bool == 0) goto Label_186; // 0xb7 JumpB
	var_198_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_793(var_197_string, var_198_bool); // 0xbb NEW_2
	var_2_object = var_193_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_198_bool = 1; // 0xba MovB
}


func_808(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x328 PushV
	var_117_bool = 0; // 0x329 PushV
	func_979(var_117_bool); // 0x32a NEW_2
	if(var_117_bool == 0) goto Label_821; // 0x32c JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x32d Func
	var_118_bool = var_116_bool; // 0x32f Push
	if(var_118_bool == 0) goto Label_821; // 0x330 JumpB
	lshPlaySpeech(var_114_string); // 0x331 Func
	var_113_bool = 1; // 0x333 MovB
	return 2; // 0x334 Return
	
Label_821:
	var_113_bool = 0; // 0x335 MovB
	return 2; // 0x336 Return
}


func_872()
{
	var_191_string = "ood7AndreiPrisoned1"; // 0x369 PushS
	var_192_int = 1; // 0x36a PushI
	SetVariable(var_191_string, var_192_int); // 0x36b Func
	return 0; // 0x36d Return
}


func_621()
{
	var_245_bool = 0; var_246_bool = 0; // 0x26d PushV
	var_247_bool = 1; // 0x26e PushB
	CameraSwitchToNormal(var_247_bool); // 0x26f Func
	var_248_bool = 0; // 0x271 PushV
	func_979(var_248_bool); // 0x272 NEW_2
	if(var_248_bool == 0) goto Label_630; // 0x274 JumpB
	goto Label_638; // 0x275 Jump
	
Label_638:
	return 2; // 0x27e Return
	
Label_630:
	var_249_string = "head"; // 0x276 PushS
	HasAnimationTrack(var_246_bool, var_249_string); // 0x277 Func
	var_250_bool = var_246_bool; // 0x279 Push
	if(var_250_bool == 0) goto Label_638; // 0x27a JumpB
	var_251_string = "head"; // 0x27b PushS
	UnlookAsync(var_251_string); // 0x27c Func
}


func_878()
{
	func_900(); // 0x370 NEW_2
	var_37_bool = 0; var_38_string = ""; var_39_string = ""; // 0x372 PushV
	var_38_string = "quest_d7_04"; // 0x373 MovS
	var_39_string = "completed"; // 0x374 MovS
	func_851(var_37_bool, var_38_string, var_39_string); // 0x375 NEW_2
	return 0; // 0x377 Return
}


func_823()
{
	var_9_bool = 0; // 0x337 PushV
	func_979(var_9_bool); // 0x338 NEW_2
	if(var_9_bool == 0) goto Label_829; // 0x33a JumpB
	lshStopSpeech(); // 0x33b Func
	
Label_829:
	return 0; // 0x33d Return
}


func_888(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x379 PushV
	var_184_string = "ood7AndreiPrisoned1"; // 0x37a MovS
	func_846(var_183_int, var_184_string); // 0x37b NEW_2
	var_187_int = 0; // 0x37d PushI
	var_188_bool = var_183_int == var_187_int; // 0x37e Eq
	if(var_188_bool == 0) goto Label_898; // 0x37f JumpB
	var_181_bool = 1; // 0x380 MovB
	return 0; // 0x381 Return
	
Label_898:
	var_181_bool = 0; // 0x382 MovB
	return 0; // 0x383 Return
}


func_697(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x2b9 PushV
	var_97_string = "c"; // 0x2ba MovS
	var_98_int = 0; // 0x2bb MovI
	
Label_700:
	var_102_int = 1; // 0x2bc PushI
	if(var_102_int == 0) goto Label_713; // 0x2bd JumpB
	var_103_int = 1; // 0x2be PushI
	var_104_int = var_98_int + var_103_int; // 0x2bf Add
	var_105_int = var_97_string + var_104_int; // 0x2c0 Add
	HasProperty(var_105_int, var_99_bool); // 0x2c1 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x2c3 Not
	if(var_106_bool == 0) goto Label_710; // 0x2c4 JumpB
	goto Label_713; // 0x2c5 Jump
	
Label_713:
	var_107_bool = var_98_int == 0; // 0x2c9 Not
	if(var_107_bool == 0) goto Label_717; // 0x2ca JumpB
	var_90_bool = 0; // 0x2cb MovB
	return 10; // 0x2cc Return
	
Label_717:
	var_100_int = 0; // 0x2cd MovI
	var_108_int = 1; // 0x2ce PushI
	var_109_bool = var_98_int > var_108_int; // 0x2cf GT
	if(var_109_bool == 0) goto Label_723; // 0x2d0 JumpB
	irand(var_100_int, var_98_int); // 0x2d1 Func
	
Label_723:
	var_110_int = 1; // 0x2d3 PushI
	var_111_int = var_100_int + var_110_int; // 0x2d4 Add
	var_112_int = var_97_string + var_111_int; // 0x2d5 Add
	GetProperty(var_112_int, var_101_string); // 0x2d6 ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x2d8 PushV
	var_114_string = var_101_string; // 0x2d9 Mov
	func_808(var_113_bool, var_114_string); // 0x2da NEW_2
	var_90_bool = var_113_bool; // 0x2db Mov
	return 10; // 0x2dd Return
	
Label_710:
	var_119_int = 1; // 0x2c6 PushI
	var_98_int = var_98_int + var_119_int; // 0x2c7 Add2
	goto Label_700; // 0x2c8 Jump
}


func_954(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x3ba PushV
	var_73_string = "branch"; // 0x3bb PushS
	GetVariable(var_73_string, var_72_int); // 0x3bc Func
	var_74_int = 0; // 0x3be PushI
	var_75_bool = var_72_int == var_74_int; // 0x3bf Eq
	if(var_75_bool == 0) goto Label_964; // 0x3c0 JumpB
	var_70_int = 1; // 0x3c1 MovI
	return 2; // 0x3c2 Return
	
Label_964:
	var_76_int = 1; // 0x3c4 PushI
	var_77_bool = var_72_int == var_76_int; // 0x3c5 Eq
	if(var_77_bool == 0) goto Label_969; // 0x3c6 JumpB
	var_70_int = 2; // 0x3c7 MovI
	return 2; // 0x3c8 Return
	
Label_969:
	var_70_int = 3; // 0x3c9 MovI
	return 2; // 0x3ca Return
}


func_830(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x33e PushV
	self(var_11_object); // 0x33f Func
	var_9_object = var_11_object; // 0x341 Mov
	return 2; // 0x342 Return
}


func_639(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x27f PushV
	var_88_string = "voice_common"; // 0x280 PushS
	GetVariable(var_88_string, var_86_int); // 0x281 Func
	var_89_int = var_86_int; // 0x283 Push
	if(var_89_int == 0) goto Label_677; // 0x284 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x285 PushV
	var_91_object = var_80_object; // 0x286 Mov
	func_697(var_91_object); // 0x287 NEW_2
	var_120_bool = var_90_bool == 0; // 0x289 Not
	if(var_120_bool == 0) goto Label_659; // 0x28a JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x28b PushV
	var_122_object = var_80_object; // 0x28c Mov
	func_734(var_122_object); // 0x28d NEW_2
	var_156_bool = var_121_bool == 0; // 0x28f Not
	if(var_156_bool == 0) goto Label_659; // 0x290 JumpB
	var_79_bool = 0; // 0x291 MovB
	return 4; // 0x292 Return
	
Label_659:
	var_157_int = 2; // 0x293 PushI
	irand(var_87_int, var_157_int); // 0x294 Func
	var_158_int = var_87_int; // 0x296 Push
	if(var_158_int == 0) goto Label_672; // 0x297 JumpB
	var_159_string = "voice_common"; // 0x298 PushS
	var_160_int = 1; // 0x299 PushI
	var_161_int = var_86_int + var_160_int; // 0x29a Add
	var_162_int = 3; // 0x29b PushI
	var_163_int = var_161_int / var_162_int; // 0x29c Mod
	SetVariable(var_159_string, var_163_int); // 0x29d Func
	goto Label_676; // 0x29f Jump
	
Label_676:
	goto Label_695; // 0x2a4 Jump
	
Label_695:
	var_79_bool = 1; // 0x2b7 MovB
	return 4; // 0x2b8 Return
	
Label_672:
	var_164_string = "voice_common"; // 0x2a0 PushS
	var_165_int = 0; // 0x2a1 PushI
	SetVariable(var_164_string, var_165_int); // 0x2a2 Func
	
Label_677:
	var_166_bool = 0; var_167_object = Obj(); // 0x2a5 PushV
	var_167_object = var_80_object; // 0x2a6 Mov
	func_734(var_167_object); // 0x2a7 NEW_2
	var_168_bool = var_166_bool == 0; // 0x2a9 Not
	if(var_168_bool == 0) goto Label_691; // 0x2aa JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x2ab PushV
	var_170_object = var_80_object; // 0x2ac Mov
	func_697(var_170_object); // 0x2ad NEW_2
	var_171_bool = var_169_bool == 0; // 0x2af Not
	if(var_171_bool == 0) goto Label_691; // 0x2b0 JumpB
	var_79_bool = 0; // 0x2b1 MovB
	return 4; // 0x2b2 Return
	
Label_691:
	var_172_string = "voice_common"; // 0x2b3 PushS
	var_173_int = 1; // 0x2b4 PushI
	SetVariable(var_172_string, var_173_int); // 0x2b5 Func
}


