task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xbb PushI
	if(var_8_int == 0) goto Label_488; // 0xbc JumpB
	func_818(); // 0xbe NEW_2
	var_10_int = 27077; // 0xc0 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc1 Eq
	if(var_11_bool == 0) goto Label_205; // 0xc2 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc3 PushV
	var_12_object = var_1_object; // 0xc4 MovT
	var_13_object = var_0_object; // 0xc5 MovT
	func_860(); // 0xc6 NEW_2
	var_55_object = Obj(); var_56_object = Obj(); // 0xc8 PushV
	var_55_object = var_1_object; // 0xc9 MovT
	var_56_object = var_0_object; // 0xca MovT
	func_883(); // 0xcb NEW_2
	
Label_205:
	var_81_int = 43034; // 0xcd PushI
	var_82_bool = var_7_bool == var_81_int; // 0xce Eq
	if(var_82_bool == 0) goto Label_218; // 0xcf JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0xd0 PushV
	var_83_object = var_1_object; // 0xd1 MovT
	var_84_object = var_0_object; // 0xd2 MovT
	func_860(); // 0xd3 NEW_2
	var_85_object = Obj(); var_86_object = Obj(); // 0xd5 PushV
	var_85_object = var_1_object; // 0xd6 MovT
	var_86_object = var_0_object; // 0xd7 MovT
	func_883(); // 0xd8 NEW_2
	
Label_218:
	var_87_int = 27074; // 0xda PushI
	var_88_bool = var_6_int == var_87_int; // 0xdb Eq
	if(var_88_bool == 0) goto Label_266; // 0xdc JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0xdd PushV
	var_90_object = var_1_object; // 0xde MovT
	func_899(var_90_object); // 0xdf NEW_2
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
	func_1040(var_217_bool); // 0x1de NEW_2
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
	func_825(var_14_object); // 0x207 NEW_2
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
	func_825(var_9_object); // 0x21c NEW_2
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
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_1034(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_1032(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_1036(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_1038(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_1015(var_70_int); // 0x22 NEW_2
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
	func_825(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_634(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_239_bool = var_17_bool == 0; // 0x3f Not
	if(var_239_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_240_object = Obj(); // 0x46 PushV
	var_240_object = var_8_object; // 0x47 Mov
	func_616(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_899(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x384 PushV
	var_184_string = "k4q02"; // 0x385 MovS
	func_841(var_183_int, var_184_string); // 0x386 NEW_2
	var_187_int = 1; // 0x388 PushI
	var_188_bool = var_183_int == var_187_int; // 0x389 Eq
	if(var_188_bool == 0) goto Label_909; // 0x38a JumpB
	var_181_bool = 1; // 0x38b MovB
	return 0; // 0x38c Return
	
Label_909:
	var_181_bool = 0; // 0x38d MovB
	return 0; // 0x38e Return
}


func_772(var_215_string)
{
	var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_float = 0; var_221_float = 0; // 0x304 PushV
	lshHasAnimation(var_219_bool, var_215_string); // 0x305 Func
	var_222_bool = var_219_bool; // 0x307 Push
	if(var_222_bool == 0) goto Label_783; // 0x308 JumpB
	lshGetAnimTimes(var_215_string, var_220_float, var_221_float); // 0x309 Func
	var_223_bool = 0; // 0x30b PushB
	lshPlayAnimation(var_220_float, var_221_float, var_223_bool); // 0x30c Func
	goto Label_787; // 0x30e Jump
	
Label_787:
	return 6; // 0x313 Return
	
Label_783:
	var_224_string = "Can't find lsh animation : "; // 0x30f PushS
	var_225_int = var_224_string + var_215_string; // 0x310 Add
	Trace(var_225_int); // 0x311 Func
}


func_1032(var_67_int)
{
	var_67_int = 515544; // 0x408 MovI
	return 0; // 0x409 Return
}


func_1034(var_66_int)
{
	var_66_int = 502869; // 0x40a MovI
	return 0; // 0x40b Return
}


func_1036(var_68_string)
{
	var_68_string = "ui/NPC_Mark.png"; // 0x40c MovS
	return 0; // 0x40d Return
}


func_1038(var_69_string)
{
	var_69_string = "ui/NPC_Mark_b.png"; // 0x40e MovS
	return 0; // 0x40f Return
}


func_911()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x38f PushV
	var_34_int = 381; // 0x390 PushI
	var_35_int = 2; // 0x391 PushI
	var_36_int = 525787; // 0x392 PushI
	CreateDiaryEntry(var_33_object, var_34_int, var_35_int, var_36_int); // 0x393 Func
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0; // 0x395 PushV
	var_38_object = var_33_object; // 0x396 Mov
	var_39_int = 378; // 0x397 MovI
	func_937(var_37_bool, var_38_object, var_39_int); // 0x398 NEW_2
	return 2; // 0x39a Return
}


func_1040(var_61_bool)
{
	var_61_bool = 1; // 0x410 MovB
	return 0; // 0x411 Return
}


func_788(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x314 PushV
	lshHasAnimation(var_200_bool, var_193_string); // 0x315 Func
	var_203_bool = var_200_bool; // 0x317 Push
	if(var_203_bool == 0) goto Label_798; // 0x318 JumpB
	lshGetAnimTimes(var_193_string, var_201_float, var_202_float); // 0x319 Func
	lshPlayAnimation(var_201_float, var_202_float, var_194_bool); // 0x31b Func
	goto Label_802; // 0x31d Jump
	
Label_802:
	return 6; // 0x322 Return
	
Label_798:
	var_204_string = "Can't find lsh animation : "; // 0x31e PushS
	var_205_int = var_204_string + var_193_string; // 0x31f Add
	Trace(var_205_int); // 0x320 Func
}


func_924(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x39c PushV
	GetDiaryRoot(var_48_object); // 0x39d Func
	var_49_bool = var_48_object == 0; // 0x39f Not
	if(var_49_bool == 0) goto Label_934; // 0x3a0 JumpB
	var_50_string = "Can't retrieve diary root"; // 0x3a1 PushS
	Trace(var_50_string); // 0x3a2 Func
	var_46_object = 0; // 0x3a4 MovB
	return 2; // 0x3a5 Return
	
Label_934:
	var_46_object = var_48_object; // 0x3a6 Mov
	return 2; // 0x3a7 Return
}


func_545(var_8_bool)
{
	var_8_bool = 1; // 0x221 MovB
	return 0; // 0x222 Return
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
	func_831(var_45_cvector, var_46_cvector); // 0x23e NEW_2
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
	var_58_bool = 1; // 0x24e PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x24f Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x251 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x252 PushE
	Rotate(var_59_float, var_60_float); // 0x253 Func
	var_61_bool = 0; // 0x255 PushV
	func_1040(var_61_bool); // 0x256 NEW_2
	if(var_61_bool == 0) goto Label_602; // 0x258 JumpB
	goto Label_610; // 0x259 Jump
	
Label_610:
	CameraWaitForPlayFinish(); // 0x262 Func
	ResumeWorld(); // 0x264 Func
	var_18_bool = 1; // 0x266 MovB
	return 18; // 0x267 Return
	
Label_602:
	var_62_string = "head"; // 0x25a PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x25b Func
	var_63_bool = var_38_bool; // 0x25d Push
	if(var_63_bool == 0) goto Label_610; // 0x25e JumpB
	var_64_string = "head"; // 0x25f PushS
	LookAsyncCamera(var_64_string); // 0x260 Func
}


func_164(var_2_object, var_189_string)
{
	var_190_bool = 0; // 0xa5 PushV
	func_1040(var_190_bool); // 0xa6 NEW_2
	var_191_bool = var_190_bool == 0; // 0xa8 Not
	if(var_191_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_192_bool = var_189_string == var_2_object; // 0xab Eq
	if(var_192_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_193_string = ""; var_194_bool = 0; // 0xae PushV
	var_193_string = var_189_string; // 0xaf Mov
	var_195_string = ""; // 0xb0 PushS
	var_196_bool = var_189_string == var_195_string; // 0xb1 Eq
	if(var_196_bool == 0) goto Label_181; // 0xb2 JumpB
	var_194_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_788(var_193_string, var_194_bool); // 0xb6 NEW_2
	var_2_object = var_189_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_194_bool = 1; // 0xb5 MovB
}


func_803(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x323 PushV
	var_117_bool = 0; // 0x324 PushV
	func_1040(var_117_bool); // 0x325 NEW_2
	if(var_117_bool == 0) goto Label_816; // 0x327 JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x328 Func
	var_118_bool = var_116_bool; // 0x32a Push
	if(var_118_bool == 0) goto Label_816; // 0x32b JumpB
	lshPlaySpeech(var_114_string); // 0x32c Func
	var_113_bool = 1; // 0x32e MovB
	return 2; // 0x32f Return
	
Label_816:
	var_113_bool = 0; // 0x330 MovB
	return 2; // 0x331 Return
}


func_937(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x3a9 PushV
	var_46_object = Obj(); // 0x3aa PushV
	func_924(var_46_object); // 0x3ab NEW_2
	var_43_object = var_46_object; // 0x3ac Mov
	Find(var_39_int, var_44_object); // 0x3ae ObjFunc
	var_51_bool = var_44_object == 0; // 0x3b0 Not
	if(var_51_bool == 0) goto Label_952; // 0x3b1 JumpB
	var_52_string = "Can't find diary parent with id: "; // 0x3b2 PushS
	var_53_int = var_52_string + var_39_int; // 0x3b3 Add
	Trace(var_53_int); // 0x3b4 Func
	var_37_bool = 0; // 0x3b6 MovB
	return 6; // 0x3b7 Return
	
Label_952:
	AddChild(var_38_object); // 0x3b8 ObjFunc
	var_54_int = 7; // 0x3ba PushI
	SendWorldWndMessage(var_54_int); // 0x3bb Func
	GetCategory(var_45_int); // 0x3bd ObjFunc
	SetDiarySection(var_45_int); // 0x3bf Func
	var_37_bool = 0; // 0x3c1 MovB
	return 6; // 0x3c2 Return
}


func_818()
{
	var_9_bool = 0; // 0x332 PushV
	func_1040(var_9_bool); // 0x333 NEW_2
	if(var_9_bool == 0) goto Label_824; // 0x335 JumpB
	lshStopSpeech(); // 0x336 Func
	
Label_824:
	return 0; // 0x338 Return
}


func_692(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x2b4 PushV
	var_97_string = "c"; // 0x2b5 MovS
	var_98_int = 0; // 0x2b6 MovI
	
Label_695:
	var_102_int = 1; // 0x2b7 PushI
	if(var_102_int == 0) goto Label_708; // 0x2b8 JumpB
	var_103_int = 1; // 0x2b9 PushI
	var_104_int = var_98_int + var_103_int; // 0x2ba Add
	var_105_int = var_97_string + var_104_int; // 0x2bb Add
	HasProperty(var_105_int, var_99_bool); // 0x2bc ObjFunc
	var_106_bool = var_99_bool == 0; // 0x2be Not
	if(var_106_bool == 0) goto Label_705; // 0x2bf JumpB
	goto Label_708; // 0x2c0 Jump
	
Label_708:
	var_107_bool = var_98_int == 0; // 0x2c4 Not
	if(var_107_bool == 0) goto Label_712; // 0x2c5 JumpB
	var_90_bool = 0; // 0x2c6 MovB
	return 10; // 0x2c7 Return
	
Label_712:
	var_100_int = 0; // 0x2c8 MovI
	var_108_int = 1; // 0x2c9 PushI
	var_109_bool = var_98_int > var_108_int; // 0x2ca GT
	if(var_109_bool == 0) goto Label_718; // 0x2cb JumpB
	irand(var_100_int, var_98_int); // 0x2cc Func
	
Label_718:
	var_110_int = 1; // 0x2ce PushI
	var_111_int = var_100_int + var_110_int; // 0x2cf Add
	var_112_int = var_97_string + var_111_int; // 0x2d0 Add
	GetProperty(var_112_int, var_101_string); // 0x2d1 ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x2d3 PushV
	var_114_string = var_101_string; // 0x2d4 Mov
	func_803(var_113_bool, var_114_string); // 0x2d5 NEW_2
	var_90_bool = var_113_bool; // 0x2d6 Mov
	return 10; // 0x2d8 Return
	
Label_705:
	var_119_int = 1; // 0x2c1 PushI
	var_98_int = var_98_int + var_119_int; // 0x2c2 Add2
	goto Label_695; // 0x2c3 Jump
}


func_825(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x339 PushV
	self(var_11_object); // 0x33a Func
	var_9_object = var_11_object; // 0x33c Mov
	return 2; // 0x33d Return
}


func_831(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x33f PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x340 Or
	var_49_float = sqrt(var_50_int); // 0x341 Sqrt2
	var_51_float = 0.0; // 0x342 PushF
	var_52_bool = var_49_float < var_51_float; // 0x343 LT
	if(var_52_bool == 0) goto Label_839; // 0x344 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x345 MovV
	return 2; // 0x346 Return
	
Label_839:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x347 Div2
	return 2; // 0x348 Return
}


func_965(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x3c5 PushV
	GetMainOutdoorScene(var_21_object); // 0x3c6 Func
	var_23_bool = var_21_object == 0; // 0x3c8 NullEq
	if(var_23_bool == 0) goto Label_976; // 0x3c9 JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x3ca PushS
	Trace(var_24_string); // 0x3cb Func
	var_22_object = 0; // 0x3cd SetNull
	var_18_object = var_22_object; // 0x3ce Mov
	return 4; // 0x3cf Return
	
Label_976:
	GetMap(var_22_object); // 0x3d0 ObjFunc
	var_18_object = var_22_object; // 0x3d2 Mov
	return 4; // 0x3d3 Return
}


func_841(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x349 PushV
	GetVariable(var_184_string, var_186_int); // 0x34a Func
	var_183_int = var_186_int; // 0x34c Mov
	return 2; // 0x34d Return
}


func_846(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x34e PushV
	GetGameTime(var_31_float); // 0x34f Func
	var_29_float = var_31_float; // 0x351 Mov
	return 2; // 0x352 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_134; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_899(var_182_object); // 0x59 NEW_2
	if(var_181_bool == 0) goto Label_112; // 0x5b JumpB
	var_189_string = ""; // 0x5c PushV
	var_189_string = "Declaim"; // 0x5d MovS
	func_164(var_175_object, var_189_string); // 0x5e NEW_2
	var_206_int = 525762; // 0x60 PushI
	SetMessage(var_206_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_207_int = 529224; // 0x65 PushI
	var_208_int = 43014; // 0x66 PushI
	var_209_int = 30677; // 0x67 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x68 TObjFunc
	var_210_int = 529229; // 0x6a PushI
	var_211_int = 43754; // 0x6b PushI
	var_212_int = 30682; // 0x6c PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x6d TObjFunc
	goto Label_134; // 0x6f Jump
	
Label_134:
	var_213_bool = 0; // 0x86 PushV
	func_1040(var_213_bool); // 0x87 NEW_2
	if(var_213_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_214_string = var_3_string; // 0x8c PushT
	if(var_214_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_215_string = ""; // 0x8f PushV
	var_215_string = var_2_object; // 0x90 MovT
	func_772(var_215_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_226_string = "all"; // 0x95 PushS
	var_227_string = "idle"; // 0x96 PushS
	PlayAnimation(var_226_string, var_227_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_228_string = var_3_string; // 0x9b PushT
	if(var_228_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_229_string = "all"; // 0x9e PushS
	var_230_string = "idle"; // 0x9f PushS
	PlayAnimation(var_229_string, var_230_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
	
Label_112:
	var_231_string = ""; // 0x70 PushV
	var_231_string = "Neutral"; // 0x71 MovS
	func_164(var_175_object, var_231_string); // 0x72 NEW_2
	var_232_int = 525766; // 0x74 PushI
	SetMessage(var_232_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_233_int = 525767; // 0x79 PushI
	var_234_int = -1; // 0x7a PushI
	var_235_int = 27079; // 0x7b PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x7c TObjFunc
	var_236_int = 529227; // 0x7e PushI
	var_237_int = -1; // 0x7f PushI
	var_238_int = 30680; // 0x80 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
}


func_851(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x353 PushV
	GetGameTime(var_136_float); // 0x354 Func
	var_137_int = 1; // 0x356 PushI
	var_138_int = 0; // 0x357 PushV
	var_139_int = 24; // 0x358 PushI
	var_138_int = var_136_float / var_136_float; // 0x359 Div2
	var_134_int = var_137_int + var_138_int; // 0x35a Add2
	return 2; // 0x35b Return
}


func_982(var_57_object, var_58_string, var_59_float)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0; // 0x3d6 PushV
	GetMainOutdoorScene(var_67_object); // 0x3d7 Func
	var_69_bool = var_67_object == 0; // 0x3d9 NullEq
	if(var_69_bool == 0) goto Label_991; // 0x3da JumpB
	var_70_string = "Can't find main outdoor scene"; // 0x3db PushS
	Trace(var_70_string); // 0x3dc Func
	return 8; // 0x3de Return
	
Label_991:
	GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector); // 0x3df ObjFunc
	var_71_bool = var_68_bool == 0; // 0x3e1 Not
	if(var_71_bool == 0) goto Label_1001; // 0x3e2 JumpB
	var_72_string = "Warning: outdoor scene locator "; // 0x3e3 PushS
	var_73_int = var_72_string + var_58_string; // 0x3e4 Add
	var_74_string = " doesnt exist"; // 0x3e5 PushS
	var_75_int = var_73_int + var_74_string; // 0x3e6 Add
	Trace(var_75_int); // 0x3e7 Func
	
Label_1001:
	GetMap(var_57_object); // 0x3e9 ObjFunc
	var_76_bool = var_57_object == 0; // 0x3eb NullEq
	if(var_76_bool == 0) goto Label_1009; // 0x3ec JumpB
	var_77_string = "Can't find map"; // 0x3ed PushS
	Trace(var_77_string); // 0x3ee Func
	return 8; // 0x3f0 Return
	
Label_1009:
	var_78_float = GetByIndex(var_65_cvector, 0); // 0x3f1 PushE
	var_79_float = GetByIndex(var_65_cvector, 2); // 0x3f2 PushE
	SetMapParams(var_78_float, var_79_float, var_59_float); // 0x3f3 ObjFunc
	return 8; // 0x3f5 Return
}


func_729(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x2d9 PushV
	var_133_string = "d"; // 0x2da PushS
	var_134_int = 0; // 0x2db PushV
	func_851(var_134_int); // 0x2dc NEW_2
	var_140_int = var_133_string + var_134_int; // 0x2de Add
	var_141_string = "m"; // 0x2df PushS
	var_128_string = var_140_int + var_141_string; // 0x2e0 Add2
	var_129_int = 0; // 0x2e1 MovI
	
Label_738:
	var_142_int = 1; // 0x2e2 PushI
	if(var_142_int == 0) goto Label_751; // 0x2e3 JumpB
	var_143_int = 1; // 0x2e4 PushI
	var_144_int = var_129_int + var_143_int; // 0x2e5 Add
	var_145_int = var_128_string + var_144_int; // 0x2e6 Add
	HasProperty(var_145_int, var_130_bool); // 0x2e7 ObjFunc
	var_146_bool = var_130_bool == 0; // 0x2e9 Not
	if(var_146_bool == 0) goto Label_748; // 0x2ea JumpB
	goto Label_751; // 0x2eb Jump
	
Label_751:
	var_147_bool = var_129_int == 0; // 0x2ef Not
	if(var_147_bool == 0) goto Label_755; // 0x2f0 JumpB
	var_121_bool = 0; // 0x2f1 MovB
	return 10; // 0x2f2 Return
	
Label_755:
	var_131_int = 0; // 0x2f3 MovI
	var_148_int = 1; // 0x2f4 PushI
	var_149_bool = var_129_int > var_148_int; // 0x2f5 GT
	if(var_149_bool == 0) goto Label_761; // 0x2f6 JumpB
	irand(var_131_int, var_129_int); // 0x2f7 Func
	
Label_761:
	var_150_int = 1; // 0x2f9 PushI
	var_151_int = var_131_int + var_150_int; // 0x2fa Add
	var_152_int = var_128_string + var_151_int; // 0x2fb Add
	GetProperty(var_152_int, var_132_string); // 0x2fc ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x2fe PushV
	var_154_string = var_132_string; // 0x2ff Mov
	func_803(var_153_bool, var_154_string); // 0x300 NEW_2
	var_121_bool = var_153_bool; // 0x301 Mov
	return 10; // 0x303 Return
	
Label_748:
	var_155_int = 1; // 0x2ec PushI
	var_129_int = var_129_int + var_155_int; // 0x2ed Add2
	goto Label_738; // 0x2ee Jump
}


func_860()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x35c PushV
	var_16_string = "k4q02"; // 0x35d PushS
	var_17_int = 2; // 0x35e PushI
	SetVariable(var_16_string, var_17_int); // 0x35f Func
	var_18_object = Obj(); // 0x361 PushV
	func_965(var_18_object); // 0x362 NEW_2
	var_15_object = var_18_object; // 0x363 Mov
	var_25_string = "k4q02MarkGotoTheater"; // 0x365 PushS
	var_26_string = "pt_map_theater"; // 0x366 PushS
	var_27_int = 0; // 0x367 PushI
	var_28_int = 539602; // 0x368 PushI
	var_29_float = 0; // 0x369 PushV
	func_846(var_29_float); // 0x36a NEW_2
	AddMark(var_25_string, var_26_string, var_27_int, var_28_int, var_29_float); // 0x36c ObjFunc
	func_911(); // 0x36f NEW_2
	return 2; // 0x371 Return
}


func_616()
{
	var_241_bool = 0; var_242_bool = 0; // 0x268 PushV
	var_243_bool = 1; // 0x269 PushB
	CameraSwitchToNormal(var_243_bool); // 0x26a Func
	var_244_bool = 0; // 0x26c PushV
	func_1040(var_244_bool); // 0x26d NEW_2
	if(var_244_bool == 0) goto Label_625; // 0x26f JumpB
	goto Label_633; // 0x270 Jump
	
Label_633:
	return 2; // 0x279 Return
	
Label_625:
	var_245_string = "head"; // 0x271 PushS
	HasAnimationTrack(var_242_bool, var_245_string); // 0x272 Func
	var_246_bool = var_242_bool; // 0x274 Push
	if(var_246_bool == 0) goto Label_633; // 0x275 JumpB
	var_247_string = "head"; // 0x276 PushS
	UnlookAsync(var_247_string); // 0x277 Func
}


func_883()
{
	var_57_object = Obj(); var_58_string = ""; var_59_float = 0; // 0x374 PushV
	var_60_object = Obj(); // 0x375 PushV
	func_965(var_60_object); // 0x376 NEW_2
	var_57_object = var_60_object; // 0x377 Mov
	var_58_string = "pt_map_theater"; // 0x379 MovS
	var_59_float = 2; // 0x37a MovI
	func_982(var_57_object, var_58_string, var_59_float); // 0x37b NEW_2
	var_80_object = Obj(); // 0x37d PushV
	func_965(var_80_object); // 0x37e NEW_2
	ShowMap(var_80_object); // 0x380 ObjFunc
	return 0; // 0x382 Return
}


func_1015(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x3f7 PushV
	var_73_string = "branch"; // 0x3f8 PushS
	GetVariable(var_73_string, var_72_int); // 0x3f9 Func
	var_74_int = 0; // 0x3fb PushI
	var_75_bool = var_72_int == var_74_int; // 0x3fc Eq
	if(var_75_bool == 0) goto Label_1025; // 0x3fd JumpB
	var_70_int = 1; // 0x3fe MovI
	return 2; // 0x3ff Return
	
Label_1025:
	var_76_int = 1; // 0x401 PushI
	var_77_bool = var_72_int == var_76_int; // 0x402 Eq
	if(var_77_bool == 0) goto Label_1030; // 0x403 JumpB
	var_70_int = 2; // 0x404 MovI
	return 2; // 0x405 Return
	
Label_1030:
	var_70_int = 3; // 0x406 MovI
	return 2; // 0x407 Return
}


func_634(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x27a PushV
	var_88_string = "voice_common"; // 0x27b PushS
	GetVariable(var_88_string, var_86_int); // 0x27c Func
	var_89_int = var_86_int; // 0x27e Push
	if(var_89_int == 0) goto Label_672; // 0x27f JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x280 PushV
	var_91_object = var_80_object; // 0x281 Mov
	func_692(var_91_object); // 0x282 NEW_2
	var_120_bool = var_90_bool == 0; // 0x284 Not
	if(var_120_bool == 0) goto Label_654; // 0x285 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x286 PushV
	var_122_object = var_80_object; // 0x287 Mov
	func_729(var_122_object); // 0x288 NEW_2
	var_156_bool = var_121_bool == 0; // 0x28a Not
	if(var_156_bool == 0) goto Label_654; // 0x28b JumpB
	var_79_bool = 0; // 0x28c MovB
	return 4; // 0x28d Return
	
Label_654:
	var_157_int = 2; // 0x28e PushI
	irand(var_87_int, var_157_int); // 0x28f Func
	var_158_int = var_87_int; // 0x291 Push
	if(var_158_int == 0) goto Label_667; // 0x292 JumpB
	var_159_string = "voice_common"; // 0x293 PushS
	var_160_int = 1; // 0x294 PushI
	var_161_int = var_86_int + var_160_int; // 0x295 Add
	var_162_int = 3; // 0x296 PushI
	var_163_int = var_161_int / var_162_int; // 0x297 Mod
	SetVariable(var_159_string, var_163_int); // 0x298 Func
	goto Label_671; // 0x29a Jump
	
Label_671:
	goto Label_690; // 0x29f Jump
	
Label_690:
	var_79_bool = 1; // 0x2b2 MovB
	return 4; // 0x2b3 Return
	
Label_667:
	var_164_string = "voice_common"; // 0x29b PushS
	var_165_int = 0; // 0x29c PushI
	SetVariable(var_164_string, var_165_int); // 0x29d Func
	
Label_672:
	var_166_bool = 0; var_167_object = Obj(); // 0x2a0 PushV
	var_167_object = var_80_object; // 0x2a1 Mov
	func_729(var_167_object); // 0x2a2 NEW_2
	var_168_bool = var_166_bool == 0; // 0x2a4 Not
	if(var_168_bool == 0) goto Label_686; // 0x2a5 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x2a6 PushV
	var_170_object = var_80_object; // 0x2a7 Mov
	func_692(var_170_object); // 0x2a8 NEW_2
	var_171_bool = var_169_bool == 0; // 0x2aa Not
	if(var_171_bool == 0) goto Label_686; // 0x2ab JumpB
	var_79_bool = 0; // 0x2ac MovB
	return 4; // 0x2ad Return
	
Label_686:
	var_172_string = "voice_common"; // 0x2ae PushS
	var_173_int = 1; // 0x2af PushI
	SetVariable(var_172_string, var_173_int); // 0x2b0 Func
}


