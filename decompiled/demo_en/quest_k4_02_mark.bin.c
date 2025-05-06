task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xbb PushI
	if(var_8_int == 0) goto Label_488; // 0xbc JumpB
	func_816(); // 0xbe NEW_2
	var_10_int = 27077; // 0xc0 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc1 Eq
	if(var_11_bool == 0) goto Label_205; // 0xc2 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc3 PushV
	var_12_object = var_1_object; // 0xc4 MovT
	var_13_object = var_0_object; // 0xc5 MovT
	func_858(); // 0xc6 NEW_2
	var_55_object = Obj(); var_56_object = Obj(); // 0xc8 PushV
	var_55_object = var_1_object; // 0xc9 MovT
	var_56_object = var_0_object; // 0xca MovT
	func_881(); // 0xcb NEW_2
	
Label_205:
	var_81_int = 43034; // 0xcd PushI
	var_82_bool = var_7_bool == var_81_int; // 0xce Eq
	if(var_82_bool == 0) goto Label_218; // 0xcf JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0xd0 PushV
	var_83_object = var_1_object; // 0xd1 MovT
	var_84_object = var_0_object; // 0xd2 MovT
	func_858(); // 0xd3 NEW_2
	var_85_object = Obj(); var_86_object = Obj(); // 0xd5 PushV
	var_85_object = var_1_object; // 0xd6 MovT
	var_86_object = var_0_object; // 0xd7 MovT
	func_881(); // 0xd8 NEW_2
	
Label_218:
	var_87_int = 27074; // 0xda PushI
	var_88_bool = var_6_int == var_87_int; // 0xdb Eq
	if(var_88_bool == 0) goto Label_266; // 0xdc JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0xdd PushV
	var_90_object = var_1_object; // 0xde MovT
	func_897(var_90_object); // 0xdf NEW_2
	if(var_89_bool == 0) goto Label_246; // 0xe1 JumpB
	var_97_string = ""; // 0xe2 PushV
	var_97_string = "Declaim"; // 0xe3 MovS
	func_164(var_7_bool, var_97_string); // 0xe4 NEW_2
	var_114_int = 525762; // 0xe6 PushI
	SetMessage(var_114_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_115_int = 529224; // 0xeb PushI
	var_116_int = 43014; // 0xec PushI
	var_117_int = 30677; // 0xed PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0xee TObjFunc
	var_118_int = 529229; // 0xf0 PushI
	var_119_int = 43754; // 0xf1 PushI
	var_120_int = 30682; // 0xf2 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_121_string = ""; // 0xf6 PushV
	var_121_string = "Neutral"; // 0xf7 MovS
	func_164(var_7_bool, var_121_string); // 0xf8 NEW_2
	var_122_int = 525766; // 0xfa PushI
	SetMessage(var_122_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_123_int = 525767; // 0xff PushI
	var_124_int = -1; // 0x100 PushI
	var_125_int = 27079; // 0x101 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x102 TObjFunc
	var_126_int = 529227; // 0x104 PushI
	var_127_int = -1; // 0x105 PushI
	var_128_int = 30680; // 0x106 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_129_int = 43754; // 0x10a PushI
	var_130_bool = var_6_int == var_129_int; // 0x10b Eq
	if(var_130_bool == 0) goto Label_289; // 0x10c JumpB
	var_131_string = ""; // 0x10d PushV
	var_131_string = "Declaim"; // 0x10e MovS
	func_164(var_7_bool, var_131_string); // 0x10f NEW_2
	var_132_int = 541585; // 0x111 PushI
	SetMessage(var_132_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_133_int = 541586; // 0x116 PushI
	var_134_int = 30678; // 0x117 PushI
	var_135_int = 43755; // 0x118 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x119 TObjFunc
	var_136_int = 541587; // 0x11b PushI
	var_137_int = 43016; // 0x11c PushI
	var_138_int = 43757; // 0x11d PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_139_int = 43014; // 0x121 PushI
	var_140_bool = var_6_int == var_139_int; // 0x122 Eq
	if(var_140_bool == 0) goto Label_312; // 0x123 JumpB
	var_141_string = ""; // 0x124 PushV
	var_141_string = "Declaim"; // 0x125 MovS
	func_164(var_7_bool, var_141_string); // 0x126 NEW_2
	var_142_int = 540934; // 0x128 PushI
	SetMessage(var_142_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_143_int = 540935; // 0x12d PushI
	var_144_int = 43016; // 0x12e PushI
	var_145_int = 43015; // 0x12f PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x130 TObjFunc
	var_146_int = 540938; // 0x132 PushI
	var_147_int = 43019; // 0x133 PushI
	var_148_int = 43018; // 0x134 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x135 TObjFunc
	return 0; // 0x137 Return
	
Label_312:
	var_149_int = 43019; // 0x138 PushI
	var_150_bool = var_6_int == var_149_int; // 0x139 Eq
	if(var_150_bool == 0) goto Label_330; // 0x13a JumpB
	var_151_string = ""; // 0x13b PushV
	var_151_string = "Shyness"; // 0x13c MovS
	func_164(var_7_bool, var_151_string); // 0x13d NEW_2
	var_152_int = 540939; // 0x13f PushI
	SetMessage(var_152_int); // 0x140 TObjFunc
	ClearReplies(); // 0x142 TObjFunc
	var_153_int = 540940; // 0x144 PushI
	var_154_int = 43016; // 0x145 PushI
	var_155_int = 43020; // 0x146 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x147 TObjFunc
	return 0; // 0x149 Return
	
Label_330:
	var_156_int = 43016; // 0x14a PushI
	var_157_bool = var_6_int == var_156_int; // 0x14b Eq
	if(var_157_bool == 0) goto Label_353; // 0x14c JumpB
	var_158_string = ""; // 0x14d PushV
	var_158_string = "Gasp"; // 0x14e MovS
	func_164(var_7_bool, var_158_string); // 0x14f NEW_2
	var_159_int = 540936; // 0x151 PushI
	SetMessage(var_159_int); // 0x152 TObjFunc
	ClearReplies(); // 0x154 TObjFunc
	var_160_int = 540937; // 0x156 PushI
	var_161_int = 43022; // 0x157 PushI
	var_162_int = 43017; // 0x158 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x159 TObjFunc
	var_163_int = 540943; // 0x15b PushI
	var_164_int = 43022; // 0x15c PushI
	var_165_int = 43024; // 0x15d PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x15e TObjFunc
	return 0; // 0x160 Return
	
Label_353:
	var_166_int = 43022; // 0x161 PushI
	var_167_bool = var_6_int == var_166_int; // 0x162 Eq
	if(var_167_bool == 0) goto Label_376; // 0x163 JumpB
	var_168_string = ""; // 0x164 PushV
	var_168_string = "Neutral"; // 0x165 MovS
	func_164(var_7_bool, var_168_string); // 0x166 NEW_2
	var_169_int = 540941; // 0x168 PushI
	SetMessage(var_169_int); // 0x169 TObjFunc
	ClearReplies(); // 0x16b TObjFunc
	var_170_int = 540942; // 0x16d PushI
	var_171_int = 30678; // 0x16e PushI
	var_172_int = 43023; // 0x16f PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x170 TObjFunc
	var_173_int = 540944; // 0x172 PushI
	var_174_int = 43027; // 0x173 PushI
	var_175_int = 43026; // 0x174 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x175 TObjFunc
	return 0; // 0x177 Return
	
Label_376:
	var_176_int = 43027; // 0x178 PushI
	var_177_bool = var_6_int == var_176_int; // 0x179 Eq
	if(var_177_bool == 0) goto Label_394; // 0x17a JumpB
	var_178_string = ""; // 0x17b PushV
	var_178_string = "Neutral"; // 0x17c MovS
	func_164(var_7_bool, var_178_string); // 0x17d NEW_2
	var_179_int = 540945; // 0x17f PushI
	SetMessage(var_179_int); // 0x180 TObjFunc
	ClearReplies(); // 0x182 TObjFunc
	var_180_int = 540946; // 0x184 PushI
	var_181_int = 43029; // 0x185 PushI
	var_182_int = 43028; // 0x186 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x187 TObjFunc
	return 0; // 0x189 Return
	
Label_394:
	var_183_int = 43029; // 0x18a PushI
	var_184_bool = var_6_int == var_183_int; // 0x18b Eq
	if(var_184_bool == 0) goto Label_412; // 0x18c JumpB
	var_185_string = ""; // 0x18d PushV
	var_185_string = "Neutral"; // 0x18e MovS
	func_164(var_7_bool, var_185_string); // 0x18f NEW_2
	var_186_int = 540947; // 0x191 PushI
	SetMessage(var_186_int); // 0x192 TObjFunc
	ClearReplies(); // 0x194 TObjFunc
	var_187_int = 540948; // 0x196 PushI
	var_188_int = 30678; // 0x197 PushI
	var_189_int = 43030; // 0x198 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_190_int = 30678; // 0x19c PushI
	var_191_bool = var_6_int == var_190_int; // 0x19d Eq
	if(var_191_bool == 0) goto Label_435; // 0x19e JumpB
	var_192_string = ""; // 0x19f PushV
	var_192_string = "Neutral"; // 0x1a0 MovS
	func_164(var_7_bool, var_192_string); // 0x1a1 NEW_2
	var_193_int = 529225; // 0x1a3 PushI
	SetMessage(var_193_int); // 0x1a4 TObjFunc
	ClearReplies(); // 0x1a6 TObjFunc
	var_194_int = 529226; // 0x1a8 PushI
	var_195_int = 30681; // 0x1a9 PushI
	var_196_int = 30679; // 0x1aa PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x1ab TObjFunc
	var_197_int = 540949; // 0x1ad PushI
	var_198_int = 30681; // 0x1ae PushI
	var_199_int = 43032; // 0x1af PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x1b0 TObjFunc
	return 0; // 0x1b2 Return
	
Label_435:
	var_200_int = 30681; // 0x1b3 PushI
	var_201_bool = var_6_int == var_200_int; // 0x1b4 Eq
	if(var_201_bool == 0) goto Label_453; // 0x1b5 JumpB
	var_202_string = ""; // 0x1b6 PushV
	var_202_string = "Shyness"; // 0x1b7 MovS
	func_164(var_7_bool, var_202_string); // 0x1b8 NEW_2
	var_203_int = 529228; // 0x1ba PushI
	SetMessage(var_203_int); // 0x1bb TObjFunc
	ClearReplies(); // 0x1bd TObjFunc
	var_204_int = 525763; // 0x1bf PushI
	var_205_int = 27076; // 0x1c0 PushI
	var_206_int = 27075; // 0x1c1 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x1c2 TObjFunc
	return 0; // 0x1c4 Return
	
Label_453:
	var_207_int = 27076; // 0x1c5 PushI
	var_208_bool = var_6_int == var_207_int; // 0x1c6 Eq
	if(var_208_bool == 0) goto Label_476; // 0x1c7 JumpB
	var_209_string = ""; // 0x1c8 PushV
	var_209_string = "Shyness"; // 0x1c9 MovS
	func_164(var_7_bool, var_209_string); // 0x1ca NEW_2
	var_210_int = 525764; // 0x1cc PushI
	SetMessage(var_210_int); // 0x1cd TObjFunc
	ClearReplies(); // 0x1cf TObjFunc
	var_211_int = 525765; // 0x1d1 PushI
	var_212_int = -1; // 0x1d2 PushI
	var_213_int = 27077; // 0x1d3 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1d4 TObjFunc
	var_214_int = 540950; // 0x1d6 PushI
	var_215_int = -1; // 0x1d7 PushI
	var_216_int = 43034; // 0x1d8 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x1d9 TObjFunc
	return 0; // 0x1db Return
	
Label_476:
	var_3_string = 1; // 0x1dc TMovB
	var_217_bool = 0; // 0x1dd PushV
	func_1038(var_217_bool); // 0x1de NEW_2
	if(var_217_bool == 0) goto Label_484; // 0x1e0 JumpB
	lshStopAnimation(); // 0x1e1 Func
	goto Label_486; // 0x1e3 Jump
	
Label_486:
	return 0; // 0x1e6 Return
	
Label_484:
	StopAnimation(); // 0x1e4 Func
	
Label_488:
	return 0; // 0x1e8 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x1ea PushV
	var_8_object = var_6_object; // 0x1eb Mov
	TaskCall(0); // 0x1ec TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x1ed NEW_2
	TaskReturn(); // 0x1ee TaskReturn
	return 0; // 0x1f0 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1f5 PushV
	var_9_string = "cleanup"; // 0x1f6 PushS
	var_10_bool = var_6_string == var_9_string; // 0x1f7 Eq
	if(var_10_bool == 0) goto Label_524; // 0x1f8 JumpB
	var_0_object = 1; // 0x1f9 TMovB
	IsLoaded(var_8_bool); // 0x1fa Func
	var_11_bool = 0; // 0x1fc PushV
	var_11_bool = 0; // 0x1fd MovB
	var_12_bool = var_8_bool == 0; // 0x1fe Not
	if(var_12_bool == 0) goto Label_517; // 0x1ff JumpB
	var_13_bool = 0; // 0x200 PushV
	func_545(var_13_bool); // 0x201 NEW_2
	if(var_13_bool == 0) goto Label_517; // 0x203 JumpB
	var_11_bool = 1; // 0x204 MovB
	
Label_517:
	if(var_11_bool == 0) goto Label_523; // 0x205 JumpB
	var_14_object = Obj(); // 0x206 PushV
	func_823(var_14_object); // 0x207 NEW_2
	RemoveActor(var_14_object); // 0x209 Func
	
Label_523:
	goto Label_528; // 0x20b Jump
	
Label_528:
	return 2; // 0x210 Return
	
Label_524:
	var_17_string = "restore"; // 0x20c PushS
	var_18_bool = var_6_string == var_17_string; // 0x20d Eq
	if(var_18_bool == 0) goto Label_528; // 0x20e JumpB
	var_0_object = 0; // 0x20f TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x211 PushV
	var_6_bool = 0; // 0x212 MovB
	var_7_object = var_0_object; // 0x213 PushT
	if(var_7_object == 0) goto Label_538; // 0x214 JumpB
	var_8_bool = 0; // 0x215 PushV
	func_545(var_8_bool); // 0x216 NEW_2
	if(var_8_bool == 0) goto Label_538; // 0x218 JumpB
	var_6_bool = 1; // 0x219 MovB
	
Label_538:
	if(var_6_bool == 0) goto Label_544; // 0x21a JumpB
	var_9_object = Obj(); // 0x21b PushV
	func_823(var_9_object); // 0x21c NEW_2
	RemoveActor(var_9_object); // 0x21e Func
	
Label_544:
	return 0; // 0x220 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_497:
	Hold(); // 0x1f1 Func
	goto Label_497; // 0x1f3 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_547(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1032(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1030(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1034(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1036(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_1013(var_69_int); // 0x22 NEW_2
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
	func_823(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_632(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_238_bool = var_17_bool == 0; // 0x3f Not
	if(var_238_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_239_object = Obj(); // 0x46 PushV
	var_239_object = var_8_object; // 0x47 Mov
	func_615(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_897(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x382 PushV
	var_183_string = "k4q02"; // 0x383 MovS
	func_839(var_182_int, var_183_string); // 0x384 NEW_2
	var_186_int = 1; // 0x386 PushI
	var_187_bool = var_182_int == var_186_int; // 0x387 Eq
	if(var_187_bool == 0) goto Label_907; // 0x388 JumpB
	var_180_bool = 1; // 0x389 MovB
	return 0; // 0x38a Return
	
Label_907:
	var_180_bool = 0; // 0x38b MovB
	return 0; // 0x38c Return
}


func_770(var_214_string)
{
	var_215_bool = 0; var_216_float = 0; var_217_float = 0; var_218_bool = 0; var_219_float = 0; var_220_float = 0; // 0x302 PushV
	lshHasAnimation(var_218_bool, var_214_string); // 0x303 Func
	var_221_bool = var_218_bool; // 0x305 Push
	if(var_221_bool == 0) goto Label_781; // 0x306 JumpB
	lshGetAnimTimes(var_214_string, var_219_float, var_220_float); // 0x307 Func
	var_222_bool = 0; // 0x309 PushB
	lshPlayAnimation(var_219_float, var_220_float, var_222_bool); // 0x30a Func
	goto Label_785; // 0x30c Jump
	
Label_785:
	return 6; // 0x311 Return
	
Label_781:
	var_223_string = "Can't find lsh animation : "; // 0x30d PushS
	var_224_int = var_223_string + var_214_string; // 0x30e Add
	Trace(var_224_int); // 0x30f Func
}


func_1030(var_66_int)
{
	var_66_int = 515544; // 0x406 MovI
	return 0; // 0x407 Return
}


func_1032(var_65_int)
{
	var_65_int = 502869; // 0x408 MovI
	return 0; // 0x409 Return
}


func_1034(var_67_string)
{
	var_67_string = "ui/NPC_Mark.png"; // 0x40a MovS
	return 0; // 0x40b Return
}


func_1036(var_68_string)
{
	var_68_string = "ui/NPC_Mark_b.png"; // 0x40c MovS
	return 0; // 0x40d Return
}


func_909()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x38d PushV
	var_34_int = 381; // 0x38e PushI
	var_35_int = 2; // 0x38f PushI
	var_36_int = 525787; // 0x390 PushI
	CreateDiaryEntry(var_33_object, var_34_int, var_35_int, var_36_int); // 0x391 Func
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0; // 0x393 PushV
	var_38_object = var_33_object; // 0x394 Mov
	var_39_int = 378; // 0x395 MovI
	func_935(var_37_bool, var_38_object, var_39_int); // 0x396 NEW_2
	return 2; // 0x398 Return
}


func_1038(var_60_bool)
{
	var_60_bool = 1; // 0x40e MovB
	return 0; // 0x40f Return
}


func_786(var_192_string, var_193_bool)
{
	var_196_bool = 0; var_197_float = 0; var_198_float = 0; var_199_bool = 0; var_200_float = 0; var_201_float = 0; // 0x312 PushV
	lshHasAnimation(var_199_bool, var_192_string); // 0x313 Func
	var_202_bool = var_199_bool; // 0x315 Push
	if(var_202_bool == 0) goto Label_796; // 0x316 JumpB
	lshGetAnimTimes(var_192_string, var_200_float, var_201_float); // 0x317 Func
	lshPlayAnimation(var_200_float, var_201_float, var_193_bool); // 0x319 Func
	goto Label_800; // 0x31b Jump
	
Label_800:
	return 6; // 0x320 Return
	
Label_796:
	var_203_string = "Can't find lsh animation : "; // 0x31c PushS
	var_204_int = var_203_string + var_192_string; // 0x31d Add
	Trace(var_204_int); // 0x31e Func
}


func_922(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x39a PushV
	GetDiaryRoot(var_48_object); // 0x39b Func
	var_49_bool = var_48_object == 0; // 0x39d Not
	if(var_49_bool == 0) goto Label_932; // 0x39e JumpB
	var_50_string = "Can't retrieve diary root"; // 0x39f PushS
	Trace(var_50_string); // 0x3a0 Func
	var_46_object = 0; // 0x3a2 MovB
	return 2; // 0x3a3 Return
	
Label_932:
	var_46_object = var_48_object; // 0x3a4 Mov
	return 2; // 0x3a5 Return
}


func_545(var_8_bool)
{
	var_8_bool = 1; // 0x221 MovB
	return 0; // 0x222 Return
}


func_801(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x321 PushV
	var_116_bool = 0; // 0x322 PushV
	func_1038(var_116_bool); // 0x323 NEW_2
	if(var_116_bool == 0) goto Label_814; // 0x325 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x326 Func
	var_117_bool = var_115_bool; // 0x328 Push
	if(var_117_bool == 0) goto Label_814; // 0x329 JumpB
	lshPlaySpeech(var_113_string); // 0x32a Func
	var_112_bool = 1; // 0x32c MovB
	return 2; // 0x32d Return
	
Label_814:
	var_112_bool = 0; // 0x32e MovB
	return 2; // 0x32f Return
}


func_547(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x223 PushV
	GetPosition(var_31_cvector); // 0x224 ObjFunc
	GetEyesHeight(var_30_float); // 0x226 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x228 PushE
	var_39_float = var_39_float + var_30_float; // 0x229 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x22a PopE
	GetPosition(var_32_cvector); // 0x22b Func
	GetEyesHeight(var_30_float); // 0x22d Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x22f PushE
	var_40_float = var_40_float + var_30_float; // 0x230 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x231 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x232 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x233 PushE
	var_41_float = 0; // 0x234 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x235 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x236 Or
	var_43_float = sqrt(var_42_int); // 0x237 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x238 Div2
	var_34_cvector = -var_33_cvector; // 0x239 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x23a Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x23b PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x23c PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x23d Xor2
	func_829(var_45_cvector, var_46_cvector); // 0x23e NEW_2
	var_53_int = 25; // 0x240 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x241 Mult
	var_55_int = var_44_float + var_54_float; // 0x242 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x243 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x244 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x245 Add2
	IsOverrideActive(var_37_bool); // 0x246 Func
	var_57_bool = var_37_bool; // 0x248 Push
	if(var_57_bool == 0) goto Label_588; // 0x249 JumpB
	var_18_bool = 0; // 0x24a MovB
	return 18; // 0x24b Return
	
Label_588:
	StopWorld(); // 0x24c Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x24e Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x250 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x251 PushE
	Rotate(var_58_float, var_59_float); // 0x252 Func
	var_60_bool = 0; // 0x254 PushV
	func_1038(var_60_bool); // 0x255 NEW_2
	if(var_60_bool == 0) goto Label_601; // 0x257 JumpB
	goto Label_609; // 0x258 Jump
	
Label_609:
	CameraWaitForPlayFinish(); // 0x261 Func
	ResumeWorld(); // 0x263 Func
	var_18_bool = 1; // 0x265 MovB
	return 18; // 0x266 Return
	
Label_601:
	var_61_string = "head"; // 0x259 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x25a Func
	var_62_bool = var_38_bool; // 0x25c Push
	if(var_62_bool == 0) goto Label_609; // 0x25d JumpB
	var_63_string = "head"; // 0x25e PushS
	LookAsyncCamera(var_63_string); // 0x25f Func
}


func_164(var_2_object, var_188_string)
{
	var_189_bool = 0; // 0xa5 PushV
	func_1038(var_189_bool); // 0xa6 NEW_2
	var_190_bool = var_189_bool == 0; // 0xa8 Not
	if(var_190_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_191_bool = var_188_string == var_2_object; // 0xab Eq
	if(var_191_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_192_string = ""; var_193_bool = 0; // 0xae PushV
	var_192_string = var_188_string; // 0xaf Mov
	var_194_string = ""; // 0xb0 PushS
	var_195_bool = var_188_string == var_194_string; // 0xb1 Eq
	if(var_195_bool == 0) goto Label_181; // 0xb2 JumpB
	var_193_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_786(var_192_string, var_193_bool); // 0xb6 NEW_2
	var_2_object = var_188_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_193_bool = 1; // 0xb5 MovB
}


func_935(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x3a7 PushV
	var_46_object = Obj(); // 0x3a8 PushV
	func_922(var_46_object); // 0x3a9 NEW_2
	var_43_object = var_46_object; // 0x3aa Mov
	Find(var_39_int, var_44_object); // 0x3ac ObjFunc
	var_51_bool = var_44_object == 0; // 0x3ae Not
	if(var_51_bool == 0) goto Label_950; // 0x3af JumpB
	var_52_string = "Can't find diary parent with id: "; // 0x3b0 PushS
	var_53_int = var_52_string + var_39_int; // 0x3b1 Add
	Trace(var_53_int); // 0x3b2 Func
	var_37_bool = 0; // 0x3b4 MovB
	return 6; // 0x3b5 Return
	
Label_950:
	AddChild(var_38_object); // 0x3b6 ObjFunc
	var_54_int = 7; // 0x3b8 PushI
	SendWorldWndMessage(var_54_int); // 0x3b9 Func
	GetCategory(var_45_int); // 0x3bb ObjFunc
	SetDiarySection(var_45_int); // 0x3bd Func
	var_37_bool = 0; // 0x3bf MovB
	return 6; // 0x3c0 Return
}


func_816()
{
	var_9_bool = 0; // 0x330 PushV
	func_1038(var_9_bool); // 0x331 NEW_2
	if(var_9_bool == 0) goto Label_822; // 0x333 JumpB
	lshStopSpeech(); // 0x334 Func
	
Label_822:
	return 0; // 0x336 Return
}


func_690(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x2b2 PushV
	var_96_string = "c"; // 0x2b3 MovS
	var_97_int = 0; // 0x2b4 MovI
	
Label_693:
	var_101_int = 1; // 0x2b5 PushI
	if(var_101_int == 0) goto Label_706; // 0x2b6 JumpB
	var_102_int = 1; // 0x2b7 PushI
	var_103_int = var_97_int + var_102_int; // 0x2b8 Add
	var_104_int = var_96_string + var_103_int; // 0x2b9 Add
	HasProperty(var_104_int, var_98_bool); // 0x2ba ObjFunc
	var_105_bool = var_98_bool == 0; // 0x2bc Not
	if(var_105_bool == 0) goto Label_703; // 0x2bd JumpB
	goto Label_706; // 0x2be Jump
	
Label_706:
	var_106_bool = var_97_int == 0; // 0x2c2 Not
	if(var_106_bool == 0) goto Label_710; // 0x2c3 JumpB
	var_89_bool = 0; // 0x2c4 MovB
	return 10; // 0x2c5 Return
	
Label_710:
	var_99_int = 0; // 0x2c6 MovI
	var_107_int = 1; // 0x2c7 PushI
	var_108_bool = var_97_int > var_107_int; // 0x2c8 GT
	if(var_108_bool == 0) goto Label_716; // 0x2c9 JumpB
	irand(var_99_int, var_97_int); // 0x2ca Func
	
Label_716:
	var_109_int = 1; // 0x2cc PushI
	var_110_int = var_99_int + var_109_int; // 0x2cd Add
	var_111_int = var_96_string + var_110_int; // 0x2ce Add
	GetProperty(var_111_int, var_100_string); // 0x2cf ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x2d1 PushV
	var_113_string = var_100_string; // 0x2d2 Mov
	func_801(var_112_bool, var_113_string); // 0x2d3 NEW_2
	var_89_bool = var_112_bool; // 0x2d4 Mov
	return 10; // 0x2d6 Return
	
Label_703:
	var_118_int = 1; // 0x2bf PushI
	var_97_int = var_97_int + var_118_int; // 0x2c0 Add2
	goto Label_693; // 0x2c1 Jump
}


func_823(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x337 PushV
	self(var_11_object); // 0x338 Func
	var_9_object = var_11_object; // 0x33a Mov
	return 2; // 0x33b Return
}


func_829(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x33d PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x33e Or
	var_49_float = sqrt(var_50_int); // 0x33f Sqrt2
	var_51_float = 0.0; // 0x340 PushF
	var_52_bool = var_49_float < var_51_float; // 0x341 LT
	if(var_52_bool == 0) goto Label_837; // 0x342 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x343 MovV
	return 2; // 0x344 Return
	
Label_837:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x345 Div2
	return 2; // 0x346 Return
}


func_963(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x3c3 PushV
	GetMainOutdoorScene(var_21_object); // 0x3c4 Func
	var_23_bool = var_21_object == 0; // 0x3c6 NullEq
	if(var_23_bool == 0) goto Label_974; // 0x3c7 JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x3c8 PushS
	Trace(var_24_string); // 0x3c9 Func
	var_22_object = 0; // 0x3cb SetNull
	var_18_object = var_22_object; // 0x3cc Mov
	return 4; // 0x3cd Return
	
Label_974:
	GetMap(var_22_object); // 0x3ce ObjFunc
	var_18_object = var_22_object; // 0x3d0 Mov
	return 4; // 0x3d1 Return
}


func_839(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x347 PushV
	GetVariable(var_183_string, var_185_int); // 0x348 Func
	var_182_int = var_185_int; // 0x34a Mov
	return 2; // 0x34b Return
}


func_844(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x34c PushV
	GetGameTime(var_31_float); // 0x34d Func
	var_29_float = var_31_float; // 0x34f Mov
	return 2; // 0x350 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_134; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_897(var_181_object); // 0x59 NEW_2
	if(var_180_bool == 0) goto Label_112; // 0x5b JumpB
	var_188_string = ""; // 0x5c PushV
	var_188_string = "Declaim"; // 0x5d MovS
	func_164(var_174_object, var_188_string); // 0x5e NEW_2
	var_205_int = 525762; // 0x60 PushI
	SetMessage(var_205_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_206_int = 529224; // 0x65 PushI
	var_207_int = 43014; // 0x66 PushI
	var_208_int = 30677; // 0x67 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x68 TObjFunc
	var_209_int = 529229; // 0x6a PushI
	var_210_int = 43754; // 0x6b PushI
	var_211_int = 30682; // 0x6c PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x6d TObjFunc
	goto Label_134; // 0x6f Jump
	
Label_134:
	var_212_bool = 0; // 0x86 PushV
	func_1038(var_212_bool); // 0x87 NEW_2
	if(var_212_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_213_string = var_3_string; // 0x8c PushT
	if(var_213_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_214_string = ""; // 0x8f PushV
	var_214_string = var_2_object; // 0x90 MovT
	func_770(var_214_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_225_string = "all"; // 0x95 PushS
	var_226_string = "idle"; // 0x96 PushS
	PlayAnimation(var_225_string, var_226_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_227_string = var_3_string; // 0x9b PushT
	if(var_227_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_228_string = "all"; // 0x9e PushS
	var_229_string = "idle"; // 0x9f PushS
	PlayAnimation(var_228_string, var_229_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
	
Label_112:
	var_230_string = ""; // 0x70 PushV
	var_230_string = "Neutral"; // 0x71 MovS
	func_164(var_174_object, var_230_string); // 0x72 NEW_2
	var_231_int = 525766; // 0x74 PushI
	SetMessage(var_231_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_232_int = 525767; // 0x79 PushI
	var_233_int = -1; // 0x7a PushI
	var_234_int = 27079; // 0x7b PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x7c TObjFunc
	var_235_int = 529227; // 0x7e PushI
	var_236_int = -1; // 0x7f PushI
	var_237_int = 30680; // 0x80 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
}


func_849(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x351 PushV
	GetGameTime(var_135_float); // 0x352 Func
	var_136_int = 1; // 0x354 PushI
	var_137_int = 0; // 0x355 PushV
	var_138_int = 24; // 0x356 PushI
	var_137_int = var_135_float / var_135_float; // 0x357 Div2
	var_133_int = var_136_int + var_137_int; // 0x358 Add2
	return 2; // 0x359 Return
}


func_980(var_57_object, var_58_string, var_59_float)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0; // 0x3d4 PushV
	GetMainOutdoorScene(var_67_object); // 0x3d5 Func
	var_69_bool = var_67_object == 0; // 0x3d7 NullEq
	if(var_69_bool == 0) goto Label_989; // 0x3d8 JumpB
	var_70_string = "Can't find main outdoor scene"; // 0x3d9 PushS
	Trace(var_70_string); // 0x3da Func
	return 8; // 0x3dc Return
	
Label_989:
	GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector); // 0x3dd ObjFunc
	var_71_bool = var_68_bool == 0; // 0x3df Not
	if(var_71_bool == 0) goto Label_999; // 0x3e0 JumpB
	var_72_string = "Warning: outdoor scene locator "; // 0x3e1 PushS
	var_73_int = var_72_string + var_58_string; // 0x3e2 Add
	var_74_string = " doesnt exist"; // 0x3e3 PushS
	var_75_int = var_73_int + var_74_string; // 0x3e4 Add
	Trace(var_75_int); // 0x3e5 Func
	
Label_999:
	GetMap(var_57_object); // 0x3e7 ObjFunc
	var_76_bool = var_57_object == 0; // 0x3e9 NullEq
	if(var_76_bool == 0) goto Label_1007; // 0x3ea JumpB
	var_77_string = "Can't find map"; // 0x3eb PushS
	Trace(var_77_string); // 0x3ec Func
	return 8; // 0x3ee Return
	
Label_1007:
	var_78_float = GetByIndex(var_65_cvector, 0); // 0x3ef PushE
	var_79_float = GetByIndex(var_65_cvector, 2); // 0x3f0 PushE
	SetMapParams(var_78_float, var_79_float, var_59_float); // 0x3f1 ObjFunc
	return 8; // 0x3f3 Return
}


func_727(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x2d7 PushV
	var_132_string = "d"; // 0x2d8 PushS
	var_133_int = 0; // 0x2d9 PushV
	func_849(var_133_int); // 0x2da NEW_2
	var_139_int = var_132_string + var_133_int; // 0x2dc Add
	var_140_string = "m"; // 0x2dd PushS
	var_127_string = var_139_int + var_140_string; // 0x2de Add2
	var_128_int = 0; // 0x2df MovI
	
Label_736:
	var_141_int = 1; // 0x2e0 PushI
	if(var_141_int == 0) goto Label_749; // 0x2e1 JumpB
	var_142_int = 1; // 0x2e2 PushI
	var_143_int = var_128_int + var_142_int; // 0x2e3 Add
	var_144_int = var_127_string + var_143_int; // 0x2e4 Add
	HasProperty(var_144_int, var_129_bool); // 0x2e5 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x2e7 Not
	if(var_145_bool == 0) goto Label_746; // 0x2e8 JumpB
	goto Label_749; // 0x2e9 Jump
	
Label_749:
	var_146_bool = var_128_int == 0; // 0x2ed Not
	if(var_146_bool == 0) goto Label_753; // 0x2ee JumpB
	var_120_bool = 0; // 0x2ef MovB
	return 10; // 0x2f0 Return
	
Label_753:
	var_130_int = 0; // 0x2f1 MovI
	var_147_int = 1; // 0x2f2 PushI
	var_148_bool = var_128_int > var_147_int; // 0x2f3 GT
	if(var_148_bool == 0) goto Label_759; // 0x2f4 JumpB
	irand(var_130_int, var_128_int); // 0x2f5 Func
	
Label_759:
	var_149_int = 1; // 0x2f7 PushI
	var_150_int = var_130_int + var_149_int; // 0x2f8 Add
	var_151_int = var_127_string + var_150_int; // 0x2f9 Add
	GetProperty(var_151_int, var_131_string); // 0x2fa ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x2fc PushV
	var_153_string = var_131_string; // 0x2fd Mov
	func_801(var_152_bool, var_153_string); // 0x2fe NEW_2
	var_120_bool = var_152_bool; // 0x2ff Mov
	return 10; // 0x301 Return
	
Label_746:
	var_154_int = 1; // 0x2ea PushI
	var_128_int = var_128_int + var_154_int; // 0x2eb Add2
	goto Label_736; // 0x2ec Jump
}


func_858()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x35a PushV
	var_16_string = "k4q02"; // 0x35b PushS
	var_17_int = 2; // 0x35c PushI
	SetVariable(var_16_string, var_17_int); // 0x35d Func
	var_18_object = Obj(); // 0x35f PushV
	func_963(var_18_object); // 0x360 NEW_2
	var_15_object = var_18_object; // 0x361 Mov
	var_25_string = "k4q02MarkGotoTheater"; // 0x363 PushS
	var_26_string = "pt_map_theater"; // 0x364 PushS
	var_27_int = 0; // 0x365 PushI
	var_28_int = 539602; // 0x366 PushI
	var_29_float = 0; // 0x367 PushV
	func_844(var_29_float); // 0x368 NEW_2
	AddMark(var_25_string, var_26_string, var_27_int, var_28_int, var_29_float); // 0x36a ObjFunc
	func_909(); // 0x36d NEW_2
	return 2; // 0x36f Return
}


func_615()
{
	var_240_bool = 0; var_241_bool = 0; // 0x267 PushV
	CameraSwitchToNormal(); // 0x268 Func
	var_242_bool = 0; // 0x26a PushV
	func_1038(var_242_bool); // 0x26b NEW_2
	if(var_242_bool == 0) goto Label_623; // 0x26d JumpB
	goto Label_631; // 0x26e Jump
	
Label_631:
	return 2; // 0x277 Return
	
Label_623:
	var_243_string = "head"; // 0x26f PushS
	HasAnimationTrack(var_241_bool, var_243_string); // 0x270 Func
	var_244_bool = var_241_bool; // 0x272 Push
	if(var_244_bool == 0) goto Label_631; // 0x273 JumpB
	var_245_string = "head"; // 0x274 PushS
	UnlookAsync(var_245_string); // 0x275 Func
}


func_881()
{
	var_57_object = Obj(); var_58_string = ""; var_59_float = 0; // 0x372 PushV
	var_60_object = Obj(); // 0x373 PushV
	func_963(var_60_object); // 0x374 NEW_2
	var_57_object = var_60_object; // 0x375 Mov
	var_58_string = "pt_map_theater"; // 0x377 MovS
	var_59_float = 2; // 0x378 MovI
	func_980(var_57_object, var_58_string, var_59_float); // 0x379 NEW_2
	var_80_object = Obj(); // 0x37b PushV
	func_963(var_80_object); // 0x37c NEW_2
	ShowMap(var_80_object); // 0x37e ObjFunc
	return 0; // 0x380 Return
}


func_1013(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x3f5 PushV
	var_72_string = "branch"; // 0x3f6 PushS
	GetVariable(var_72_string, var_71_int); // 0x3f7 Func
	var_73_int = 0; // 0x3f9 PushI
	var_74_bool = var_71_int == var_73_int; // 0x3fa Eq
	if(var_74_bool == 0) goto Label_1023; // 0x3fb JumpB
	var_69_int = 1; // 0x3fc MovI
	return 2; // 0x3fd Return
	
Label_1023:
	var_75_int = 1; // 0x3ff PushI
	var_76_bool = var_71_int == var_75_int; // 0x400 Eq
	if(var_76_bool == 0) goto Label_1028; // 0x401 JumpB
	var_69_int = 2; // 0x402 MovI
	return 2; // 0x403 Return
	
Label_1028:
	var_69_int = 3; // 0x404 MovI
	return 2; // 0x405 Return
}


func_632(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x278 PushV
	var_87_string = "voice_common"; // 0x279 PushS
	GetVariable(var_87_string, var_85_int); // 0x27a Func
	var_88_int = var_85_int; // 0x27c Push
	if(var_88_int == 0) goto Label_670; // 0x27d JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x27e PushV
	var_90_object = var_79_object; // 0x27f Mov
	func_690(var_90_object); // 0x280 NEW_2
	var_119_bool = var_89_bool == 0; // 0x282 Not
	if(var_119_bool == 0) goto Label_652; // 0x283 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x284 PushV
	var_121_object = var_79_object; // 0x285 Mov
	func_727(var_121_object); // 0x286 NEW_2
	var_155_bool = var_120_bool == 0; // 0x288 Not
	if(var_155_bool == 0) goto Label_652; // 0x289 JumpB
	var_78_bool = 0; // 0x28a MovB
	return 4; // 0x28b Return
	
Label_652:
	var_156_int = 2; // 0x28c PushI
	irand(var_86_int, var_156_int); // 0x28d Func
	var_157_int = var_86_int; // 0x28f Push
	if(var_157_int == 0) goto Label_665; // 0x290 JumpB
	var_158_string = "voice_common"; // 0x291 PushS
	var_159_int = 1; // 0x292 PushI
	var_160_int = var_85_int + var_159_int; // 0x293 Add
	var_161_int = 3; // 0x294 PushI
	var_162_int = var_160_int / var_161_int; // 0x295 Mod
	SetVariable(var_158_string, var_162_int); // 0x296 Func
	goto Label_669; // 0x298 Jump
	
Label_669:
	goto Label_688; // 0x29d Jump
	
Label_688:
	var_78_bool = 1; // 0x2b0 MovB
	return 4; // 0x2b1 Return
	
Label_665:
	var_163_string = "voice_common"; // 0x299 PushS
	var_164_int = 0; // 0x29a PushI
	SetVariable(var_163_string, var_164_int); // 0x29b Func
	
Label_670:
	var_165_bool = 0; var_166_object = Obj(); // 0x29e PushV
	var_166_object = var_79_object; // 0x29f Mov
	func_727(var_166_object); // 0x2a0 NEW_2
	var_167_bool = var_165_bool == 0; // 0x2a2 Not
	if(var_167_bool == 0) goto Label_684; // 0x2a3 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x2a4 PushV
	var_169_object = var_79_object; // 0x2a5 Mov
	func_690(var_169_object); // 0x2a6 NEW_2
	var_170_bool = var_168_bool == 0; // 0x2a8 Not
	if(var_170_bool == 0) goto Label_684; // 0x2a9 JumpB
	var_78_bool = 0; // 0x2aa MovB
	return 4; // 0x2ab Return
	
Label_684:
	var_171_string = "voice_common"; // 0x2ac PushS
	var_172_int = 1; // 0x2ad PushI
	SetVariable(var_171_string, var_172_int); // 0x2ae Func
}


