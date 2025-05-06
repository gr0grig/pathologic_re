task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xc2 PushI
	if(var_8_int == 0) goto Label_473; // 0xc3 JumpB
	func_648(); // 0xc5 NEW_2
	var_10_int = 15659; // 0xc7 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc8 Eq
	if(var_11_bool == 0) goto Label_212; // 0xc9 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xca PushV
	var_12_object = var_1_object; // 0xcb MovT
	var_13_object = var_0_object; // 0xcc MovT
	func_715(); // 0xcd NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0xcf PushV
	var_66_object = var_1_object; // 0xd0 MovT
	var_67_object = var_0_object; // 0xd1 MovT
	func_693(); // 0xd2 NEW_2
	
Label_212:
	var_92_int = 15660; // 0xd4 PushI
	var_93_bool = var_7_bool == var_92_int; // 0xd5 Eq
	if(var_93_bool == 0) goto Label_225; // 0xd6 JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0xd7 PushV
	var_94_object = var_1_object; // 0xd8 MovT
	var_95_object = var_0_object; // 0xd9 MovT
	func_715(); // 0xda NEW_2
	var_96_object = Obj(); var_97_object = Obj(); // 0xdc PushV
	var_96_object = var_1_object; // 0xdd MovT
	var_97_object = var_0_object; // 0xde MovT
	func_693(); // 0xdf NEW_2
	
Label_225:
	var_98_int = 15646; // 0xe1 PushI
	var_99_bool = var_6_int == var_98_int; // 0xe2 Eq
	if(var_99_bool == 0) goto Label_287; // 0xe3 JumpB
	var_100_bool = 0; // 0xe4 PushV
	var_100_bool = 0; // 0xe5 MovB
	var_101_bool = 0; var_102_object = Obj(); // 0xe6 PushV
	var_102_object = var_1_object; // 0xe7 MovT
	func_752(var_102_object); // 0xe8 NEW_2
	if(var_101_bool == 0) goto Label_241; // 0xea JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0xeb PushV
	var_110_object = var_1_object; // 0xec MovT
	func_764(var_110_object); // 0xed NEW_2
	if(var_109_bool == 0) goto Label_241; // 0xef JumpB
	var_100_bool = 1; // 0xf0 MovB
	
Label_241:
	if(var_100_bool == 0) goto Label_267; // 0xf1 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0xf2 PushV
	var_115_object = var_1_object; // 0xf3 MovT
	var_116_object = var_0_object; // 0xf4 MovT
	func_709(); // 0xf5 NEW_2
	var_119_string = ""; // 0xf7 PushV
	var_119_string = "Neutral"; // 0xf8 MovS
	func_171(var_7_bool, var_119_string); // 0xf9 NEW_2
	var_136_int = 514421; // 0xfb PushI
	SetMessage(var_136_int); // 0xfc TObjFunc
	ClearReplies(); // 0xfe TObjFunc
	var_137_int = 514422; // 0x100 PushI
	var_138_int = 15648; // 0x101 PushI
	var_139_int = 15647; // 0x102 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x103 TObjFunc
	var_140_int = 514443; // 0x105 PushI
	var_141_int = 15650; // 0x106 PushI
	var_142_int = 15670; // 0x107 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x108 TObjFunc
	return 0; // 0x10a Return
	
Label_267:
	var_143_string = ""; // 0x10b PushV
	var_143_string = "Neutral"; // 0x10c MovS
	func_171(var_7_bool, var_143_string); // 0x10d NEW_2
	var_144_int = 514502; // 0x10f PushI
	SetMessage(var_144_int); // 0x110 TObjFunc
	ClearReplies(); // 0x112 TObjFunc
	var_145_int = 514503; // 0x114 PushI
	var_146_int = -1; // 0x115 PushI
	var_147_int = 15740; // 0x116 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x117 TObjFunc
	var_148_int = 534053; // 0x119 PushI
	var_149_int = -1; // 0x11a PushI
	var_150_int = 35635; // 0x11b PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x11c TObjFunc
	return 0; // 0x11e Return
	
Label_287:
	var_151_int = 15648; // 0x11f PushI
	var_152_bool = var_6_int == var_151_int; // 0x120 Eq
	if(var_152_bool == 0) goto Label_310; // 0x121 JumpB
	var_153_string = ""; // 0x122 PushV
	var_153_string = "Neutral"; // 0x123 MovS
	func_171(var_7_bool, var_153_string); // 0x124 NEW_2
	var_154_int = 514423; // 0x126 PushI
	SetMessage(var_154_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_155_int = 514424; // 0x12b PushI
	var_156_int = 15650; // 0x12c PushI
	var_157_int = 15649; // 0x12d PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x12e TObjFunc
	var_158_int = 514440; // 0x130 PushI
	var_159_int = 15667; // 0x131 PushI
	var_160_int = 15666; // 0x132 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_161_int = 15667; // 0x136 PushI
	var_162_bool = var_6_int == var_161_int; // 0x137 Eq
	if(var_162_bool == 0) goto Label_328; // 0x138 JumpB
	var_163_string = ""; // 0x139 PushV
	var_163_string = "Neutral"; // 0x13a MovS
	func_171(var_7_bool, var_163_string); // 0x13b NEW_2
	var_164_int = 514441; // 0x13d PushI
	SetMessage(var_164_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_165_int = 514442; // 0x142 PushI
	var_166_int = 15650; // 0x143 PushI
	var_167_int = 15668; // 0x144 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_168_int = 15650; // 0x148 PushI
	var_169_bool = var_6_int == var_168_int; // 0x149 Eq
	if(var_169_bool == 0) goto Label_351; // 0x14a JumpB
	var_170_string = ""; // 0x14b PushV
	var_170_string = "Neutral"; // 0x14c MovS
	func_171(var_7_bool, var_170_string); // 0x14d NEW_2
	var_171_int = 514425; // 0x14f PushI
	SetMessage(var_171_int); // 0x150 TObjFunc
	ClearReplies(); // 0x152 TObjFunc
	var_172_int = 514426; // 0x154 PushI
	var_173_int = 15652; // 0x155 PushI
	var_174_int = 15651; // 0x156 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x157 TObjFunc
	var_175_int = 514436; // 0x159 PushI
	var_176_int = 15662; // 0x15a PushI
	var_177_int = 15661; // 0x15b PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x15c TObjFunc
	return 0; // 0x15e Return
	
Label_351:
	var_178_int = 15662; // 0x15f PushI
	var_179_bool = var_6_int == var_178_int; // 0x160 Eq
	if(var_179_bool == 0) goto Label_374; // 0x161 JumpB
	var_180_string = ""; // 0x162 PushV
	var_180_string = "Neutral"; // 0x163 MovS
	func_171(var_7_bool, var_180_string); // 0x164 NEW_2
	var_181_int = 514437; // 0x166 PushI
	SetMessage(var_181_int); // 0x167 TObjFunc
	ClearReplies(); // 0x169 TObjFunc
	var_182_int = 514438; // 0x16b PushI
	var_183_int = 15652; // 0x16c PushI
	var_184_int = 15663; // 0x16d PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x16e TObjFunc
	var_185_int = 514439; // 0x170 PushI
	var_186_int = 15652; // 0x171 PushI
	var_187_int = 15665; // 0x172 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_188_int = 15652; // 0x176 PushI
	var_189_bool = var_6_int == var_188_int; // 0x177 Eq
	if(var_189_bool == 0) goto Label_397; // 0x178 JumpB
	var_190_string = ""; // 0x179 PushV
	var_190_string = "Neutral"; // 0x17a MovS
	func_171(var_7_bool, var_190_string); // 0x17b NEW_2
	var_191_int = 514427; // 0x17d PushI
	SetMessage(var_191_int); // 0x17e TObjFunc
	ClearReplies(); // 0x180 TObjFunc
	var_192_int = 514428; // 0x182 PushI
	var_193_int = 15654; // 0x183 PushI
	var_194_int = 15653; // 0x184 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x185 TObjFunc
	var_195_int = 534052; // 0x187 PushI
	var_196_int = 15658; // 0x188 PushI
	var_197_int = 35633; // 0x189 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x18a TObjFunc
	return 0; // 0x18c Return
	
Label_397:
	var_198_int = 15654; // 0x18d PushI
	var_199_bool = var_6_int == var_198_int; // 0x18e Eq
	if(var_199_bool == 0) goto Label_420; // 0x18f JumpB
	var_200_string = ""; // 0x190 PushV
	var_200_string = "Neutral"; // 0x191 MovS
	func_171(var_7_bool, var_200_string); // 0x192 NEW_2
	var_201_int = 514429; // 0x194 PushI
	SetMessage(var_201_int); // 0x195 TObjFunc
	ClearReplies(); // 0x197 TObjFunc
	var_202_int = 514430; // 0x199 PushI
	var_203_int = 15656; // 0x19a PushI
	var_204_int = 15655; // 0x19b PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x19c TObjFunc
	var_205_int = 540067; // 0x19e PushI
	var_206_int = 15658; // 0x19f PushI
	var_207_int = 42030; // 0x1a0 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1a1 TObjFunc
	return 0; // 0x1a3 Return
	
Label_420:
	var_208_int = 15656; // 0x1a4 PushI
	var_209_bool = var_6_int == var_208_int; // 0x1a5 Eq
	if(var_209_bool == 0) goto Label_438; // 0x1a6 JumpB
	var_210_string = ""; // 0x1a7 PushV
	var_210_string = "Neutral"; // 0x1a8 MovS
	func_171(var_7_bool, var_210_string); // 0x1a9 NEW_2
	var_211_int = 514431; // 0x1ab PushI
	SetMessage(var_211_int); // 0x1ac TObjFunc
	ClearReplies(); // 0x1ae TObjFunc
	var_212_int = 514432; // 0x1b0 PushI
	var_213_int = 15658; // 0x1b1 PushI
	var_214_int = 15657; // 0x1b2 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1b3 TObjFunc
	return 0; // 0x1b5 Return
	
Label_438:
	var_215_int = 15658; // 0x1b6 PushI
	var_216_bool = var_6_int == var_215_int; // 0x1b7 Eq
	if(var_216_bool == 0) goto Label_461; // 0x1b8 JumpB
	var_217_string = ""; // 0x1b9 PushV
	var_217_string = "Neutral"; // 0x1ba MovS
	func_171(var_7_bool, var_217_string); // 0x1bb NEW_2
	var_218_int = 514433; // 0x1bd PushI
	SetMessage(var_218_int); // 0x1be TObjFunc
	ClearReplies(); // 0x1c0 TObjFunc
	var_219_int = 514434; // 0x1c2 PushI
	var_220_int = -1; // 0x1c3 PushI
	var_221_int = 15659; // 0x1c4 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1c5 TObjFunc
	var_222_int = 514435; // 0x1c7 PushI
	var_223_int = -1; // 0x1c8 PushI
	var_224_int = 15660; // 0x1c9 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1ca TObjFunc
	return 0; // 0x1cc Return
	
Label_461:
	var_3_string = 1; // 0x1cd TMovB
	var_225_bool = 0; // 0x1ce PushV
	func_905(var_225_bool); // 0x1cf NEW_2
	if(var_225_bool == 0) goto Label_469; // 0x1d1 JumpB
	lshStopAnimation(); // 0x1d2 Func
	goto Label_471; // 0x1d4 Jump
	
Label_471:
	return 0; // 0x1d7 Return
	
Label_469:
	StopAnimation(); // 0x1d5 Func
	
Label_473:
	return 0; // 0x1d9 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x1db PushV
	var_8_object = var_6_object; // 0x1dc Mov
	TaskCall(0); // 0x1dd TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x1de NEW_2
	TaskReturn(); // 0x1df TaskReturn
	return 0; // 0x1e1 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1e6 PushV
	var_9_string = "cleanup"; // 0x1e7 PushS
	var_10_bool = var_6_string == var_9_string; // 0x1e8 Eq
	if(var_10_bool == 0) goto Label_509; // 0x1e9 JumpB
	var_0_object = 1; // 0x1ea TMovB
	IsLoaded(var_8_bool); // 0x1eb Func
	var_11_bool = 0; // 0x1ed PushV
	var_11_bool = 0; // 0x1ee MovB
	var_12_bool = var_8_bool == 0; // 0x1ef Not
	if(var_12_bool == 0) goto Label_502; // 0x1f0 JumpB
	var_13_bool = 0; // 0x1f1 PushV
	func_530(var_13_bool); // 0x1f2 NEW_2
	if(var_13_bool == 0) goto Label_502; // 0x1f4 JumpB
	var_11_bool = 1; // 0x1f5 MovB
	
Label_502:
	if(var_11_bool == 0) goto Label_508; // 0x1f6 JumpB
	var_14_object = Obj(); // 0x1f7 PushV
	func_655(var_14_object); // 0x1f8 NEW_2
	RemoveActor(var_14_object); // 0x1fa Func
	
Label_508:
	goto Label_513; // 0x1fc Jump
	
Label_513:
	return 2; // 0x201 Return
	
Label_509:
	var_17_string = "restore"; // 0x1fd PushS
	var_18_bool = var_6_string == var_17_string; // 0x1fe Eq
	if(var_18_bool == 0) goto Label_513; // 0x1ff JumpB
	var_0_object = 0; // 0x200 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x202 PushV
	var_6_bool = 0; // 0x203 MovB
	var_7_object = var_0_object; // 0x204 PushT
	if(var_7_object == 0) goto Label_523; // 0x205 JumpB
	var_8_bool = 0; // 0x206 PushV
	func_530(var_8_bool); // 0x207 NEW_2
	if(var_8_bool == 0) goto Label_523; // 0x209 JumpB
	var_6_bool = 1; // 0x20a MovB
	
Label_523:
	if(var_6_bool == 0) goto Label_529; // 0x20b JumpB
	var_9_object = Obj(); // 0x20c PushV
	func_655(var_9_object); // 0x20d NEW_2
	RemoveActor(var_9_object); // 0x20f Func
	
Label_529:
	return 0; // 0x211 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_482:
	Hold(); // 0x1e2 Func
	goto Label_482; // 0x1e4 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_532(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_899(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_897(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_901(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_903(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_880(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_object = Obj(); var_79_object = Obj(); // 0x2f PushV
	var_78_object = var_8_object; // 0x30 Mov
	var_79_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_154_bool = var_17_bool == 0; // 0x38 Not
	if(var_154_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_155_object = Obj(); // 0x3f PushV
	var_155_object = var_8_object; // 0x40 Mov
	func_600(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_897(var_66_int)
{
	var_66_int = 515596; // 0x381 MovI
	return 0; // 0x382 Return
}


func_899(var_65_int)
{
	var_65_int = 514839; // 0x383 MovI
	return 0; // 0x384 Return
}


func_901(var_67_string)
{
	var_67_string = "ui/NPC_Citizen3.png"; // 0x385 MovS
	return 0; // 0x386 Return
}


func_709()
{
	var_102_string = "ood11Nude1"; // 0x2c6 PushS
	var_103_int = 1; // 0x2c7 PushI
	SetVariable(var_102_string, var_103_int); // 0x2c8 Func
	return 0; // 0x2ca Return
}


func_903(var_68_string)
{
	var_68_string = "ui/NPC_Citizen3_b.png"; // 0x387 MovS
	return 0; // 0x388 Return
}


func_648()
{
	var_9_bool = 0; // 0x288 PushV
	func_905(var_9_bool); // 0x289 NEW_2
	if(var_9_bool == 0) goto Label_654; // 0x28b JumpB
	lshStopSpeech(); // 0x28c Func
	
Label_654:
	return 0; // 0x28e Return
}


func_905(var_60_bool)
{
	var_60_bool = 0; // 0x389 MovB
	return 0; // 0x38a Return
}


func_776()
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x308 PushV
	var_39_int = 194; // 0x309 PushI
	var_40_int = 1; // 0x30a PushI
	var_41_int = 515479; // 0x30b PushI
	CreateDiaryEntry(var_38_object, var_39_int, var_40_int, var_41_int); // 0x30c Func
	var_42_bool = 0; var_43_object = Obj(); var_44_int = 0; // 0x30e PushV
	var_43_object = var_38_object; // 0x30f Mov
	var_44_int = 192; // 0x310 MovI
	func_802(var_42_bool, var_43_object, var_44_int); // 0x311 NEW_2
	return 2; // 0x313 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object; // 0x4b TMov
	var_1_object = var_78_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_84_int = 1; // 0x4e PushI
	if(var_84_int == 0) goto Label_141; // 0x4f JumpB
	var_85_bool = 0; // 0x50 PushV
	var_85_bool = 0; // 0x51 MovB
	var_86_bool = 0; var_87_object = Obj(); // 0x52 PushV
	var_87_object = var_1_object; // 0x53 MovT
	func_752(var_87_object); // 0x54 NEW_2
	if(var_86_bool == 0) goto Label_93; // 0x56 JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x57 PushV
	var_95_object = var_1_object; // 0x58 MovT
	func_764(var_95_object); // 0x59 NEW_2
	if(var_94_bool == 0) goto Label_93; // 0x5b JumpB
	var_85_bool = 1; // 0x5c MovB
	
Label_93:
	if(var_85_bool == 0) goto Label_119; // 0x5d JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x5e PushV
	var_100_object = var_1_object; // 0x5f MovT
	var_101_object = var_0_object; // 0x60 MovT
	func_709(); // 0x61 NEW_2
	var_104_string = ""; // 0x63 PushV
	var_104_string = "Neutral"; // 0x64 MovS
	func_171(var_79_object, var_104_string); // 0x65 NEW_2
	var_121_int = 514421; // 0x67 PushI
	SetMessage(var_121_int); // 0x68 TObjFunc
	ClearReplies(); // 0x6a TObjFunc
	var_122_int = 514422; // 0x6c PushI
	var_123_int = 15648; // 0x6d PushI
	var_124_int = 15647; // 0x6e PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x6f TObjFunc
	var_125_int = 514443; // 0x71 PushI
	var_126_int = 15650; // 0x72 PushI
	var_127_int = 15670; // 0x73 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x74 TObjFunc
	goto Label_141; // 0x76 Jump
	
Label_141:
	var_128_bool = 0; // 0x8d PushV
	func_905(var_128_bool); // 0x8e NEW_2
	if(var_128_bool == 0) goto Label_156; // 0x90 JumpB
	
Label_145:
	lshWaitForAnimEnd(); // 0x91 Func
	var_129_string = var_3_string; // 0x93 PushT
	if(var_129_string == 0) goto Label_150; // 0x94 JumpB
	goto Label_155; // 0x95 Jump
	
Label_155:
	goto Label_170; // 0x9b Jump
	
Label_170:
	return 0; // 0xaa Return
	
Label_150:
	var_130_string = ""; // 0x96 PushV
	var_130_string = var_2_object; // 0x97 MovT
	func_617(var_130_string); // 0x98 NEW_2
	goto Label_145; // 0x9a Jump
	
Label_156:
	var_141_string = "all"; // 0x9c PushS
	var_142_string = "idle"; // 0x9d PushS
	PlayAnimation(var_141_string, var_142_string); // 0x9e Func
	
Label_160:
	WaitForAnimEnd(); // 0xa0 Func
	var_143_string = var_3_string; // 0xa2 PushT
	if(var_143_string == 0) goto Label_165; // 0xa3 JumpB
	goto Label_170; // 0xa4 Jump
	
Label_165:
	var_144_string = "all"; // 0xa5 PushS
	var_145_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_144_string, var_145_string); // 0xa7 Func
	goto Label_160; // 0xa9 Jump
	
Label_119:
	var_146_string = ""; // 0x77 PushV
	var_146_string = "Neutral"; // 0x78 MovS
	func_171(var_79_object, var_146_string); // 0x79 NEW_2
	var_147_int = 514502; // 0x7b PushI
	SetMessage(var_147_int); // 0x7c TObjFunc
	ClearReplies(); // 0x7e TObjFunc
	var_148_int = 514503; // 0x80 PushI
	var_149_int = -1; // 0x81 PushI
	var_150_int = 15740; // 0x82 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x83 TObjFunc
	var_151_int = 534053; // 0x85 PushI
	var_152_int = -1; // 0x86 PushI
	var_153_int = 35635; // 0x87 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x88 TObjFunc
	goto Label_141; // 0x8a Jump
}


func_715()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x2cb PushV
	var_16_string = "d11q01"; // 0x2cc PushS
	var_17_int = 2; // 0x2cd PushI
	SetVariable(var_16_string, var_17_int); // 0x2ce Func
	var_18_object = Obj(); // 0x2d0 PushV
	func_830(var_18_object); // 0x2d1 NEW_2
	var_15_object = var_18_object; // 0x2d2 Mov
	var_25_string = "d11q01NudeGotoRastrel"; // 0x2d4 PushS
	var_26_string = "pt_d11q01_msoldier"; // 0x2d5 PushS
	var_27_int = 1; // 0x2d6 PushI
	var_28_int = 515482; // 0x2d7 PushI
	var_29_float = 0; // 0x2d8 PushV
	func_688(var_29_float); // 0x2d9 NEW_2
	AddMark(var_25_string, var_26_string, var_27_int, var_28_int, var_29_float); // 0x2db ObjFunc
	var_32_string = "d11q01NudeGotoBlock"; // 0x2dd PushS
	var_33_string = "pt_map_uprava_admin"; // 0x2de PushS
	var_34_int = 1; // 0x2df PushI
	var_35_int = 515305; // 0x2e0 PushI
	var_36_float = 0; // 0x2e1 PushV
	func_688(var_36_float); // 0x2e2 NEW_2
	AddMark(var_32_string, var_33_string, var_34_int, var_35_int, var_36_float); // 0x2e4 ObjFunc
	func_776(); // 0x2e7 NEW_2
	var_60_bool = 0; var_61_string = ""; var_62_string = ""; // 0x2e9 PushV
	var_61_string = "quest_d11_01"; // 0x2ea MovS
	var_62_string = "init_soldiers"; // 0x2eb MovS
	func_676(var_60_bool, var_61_string, var_62_string); // 0x2ec NEW_2
	return 2; // 0x2ee Return
}


func_655(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x28f PushV
	self(var_11_object); // 0x290 Func
	var_9_object = var_11_object; // 0x292 Mov
	return 2; // 0x293 Return
}


func_847(var_68_object, var_69_string, var_70_float)
{
	var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_object = Obj(); var_75_bool = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0; // 0x34f PushV
	GetMainOutdoorScene(var_78_object); // 0x350 Func
	var_80_bool = var_78_object == 0; // 0x352 NullEq
	if(var_80_bool == 0) goto Label_856; // 0x353 JumpB
	var_81_string = "Can't find main outdoor scene"; // 0x354 PushS
	Trace(var_81_string); // 0x355 Func
	return 8; // 0x357 Return
	
Label_856:
	GetLocator(var_69_string, var_79_bool, var_76_cvector, var_77_cvector); // 0x358 ObjFunc
	var_82_bool = var_79_bool == 0; // 0x35a Not
	if(var_82_bool == 0) goto Label_866; // 0x35b JumpB
	var_83_string = "Warning: outdoor scene locator "; // 0x35c PushS
	var_84_int = var_83_string + var_69_string; // 0x35d Add
	var_85_string = " doesnt exist"; // 0x35e PushS
	var_86_int = var_84_int + var_85_string; // 0x35f Add
	Trace(var_86_int); // 0x360 Func
	
Label_866:
	GetMap(var_68_object); // 0x362 ObjFunc
	var_87_bool = var_68_object == 0; // 0x364 NullEq
	if(var_87_bool == 0) goto Label_874; // 0x365 JumpB
	var_88_string = "Can't find map"; // 0x366 PushS
	Trace(var_88_string); // 0x367 Func
	return 8; // 0x369 Return
	
Label_874:
	var_89_float = GetByIndex(var_76_cvector, 0); // 0x36a PushE
	var_90_float = GetByIndex(var_76_cvector, 2); // 0x36b PushE
	SetMapParams(var_89_float, var_90_float, var_70_float); // 0x36c ObjFunc
	return 8; // 0x36e Return
}


func_530(var_8_bool)
{
	var_8_bool = 1; // 0x212 MovB
	return 0; // 0x213 Return
}


func_532(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x214 PushV
	GetPosition(var_31_cvector); // 0x215 ObjFunc
	GetEyesHeight(var_30_float); // 0x217 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x219 PushE
	var_39_float = var_39_float + var_30_float; // 0x21a Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x21b PopE
	GetPosition(var_32_cvector); // 0x21c Func
	GetEyesHeight(var_30_float); // 0x21e Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x220 PushE
	var_40_float = var_40_float + var_30_float; // 0x221 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x222 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x223 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x224 PushE
	var_41_float = 0; // 0x225 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x226 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x227 Or
	var_43_float = sqrt(var_42_int); // 0x228 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x229 Div2
	var_34_cvector = -var_33_cvector; // 0x22a Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x22b Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x22c PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x22d PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x22e Xor2
	func_661(var_45_cvector, var_46_cvector); // 0x22f NEW_2
	var_53_int = 25; // 0x231 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x232 Mult
	var_55_int = var_44_float + var_54_float; // 0x233 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x234 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x235 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x236 Add2
	IsOverrideActive(var_37_bool); // 0x237 Func
	var_57_bool = var_37_bool; // 0x239 Push
	if(var_57_bool == 0) goto Label_573; // 0x23a JumpB
	var_18_bool = 0; // 0x23b MovB
	return 18; // 0x23c Return
	
Label_573:
	StopWorld(); // 0x23d Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x23f Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x241 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x242 PushE
	Rotate(var_58_float, var_59_float); // 0x243 Func
	var_60_bool = 0; // 0x245 PushV
	func_905(var_60_bool); // 0x246 NEW_2
	if(var_60_bool == 0) goto Label_586; // 0x248 JumpB
	goto Label_594; // 0x249 Jump
	
Label_594:
	CameraWaitForPlayFinish(); // 0x252 Func
	ResumeWorld(); // 0x254 Func
	var_18_bool = 1; // 0x256 MovB
	return 18; // 0x257 Return
	
Label_586:
	var_61_string = "head"; // 0x24a PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x24b Func
	var_62_bool = var_38_bool; // 0x24d Push
	if(var_62_bool == 0) goto Label_594; // 0x24e JumpB
	var_63_string = "head"; // 0x24f PushS
	LookAsyncCamera(var_63_string); // 0x250 Func
}


func_661(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x295 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x296 Or
	var_49_float = sqrt(var_50_int); // 0x297 Sqrt2
	var_51_float = 0.0; // 0x298 PushF
	var_52_bool = var_49_float < var_51_float; // 0x299 LT
	if(var_52_bool == 0) goto Label_669; // 0x29a JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x29b MovV
	return 2; // 0x29c Return
	
Label_669:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x29d Div2
	return 2; // 0x29e Return
}


func_789(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x315 PushV
	GetDiaryRoot(var_53_object); // 0x316 Func
	var_54_bool = var_53_object == 0; // 0x318 Not
	if(var_54_bool == 0) goto Label_799; // 0x319 JumpB
	var_55_string = "Can't retrieve diary root"; // 0x31a PushS
	Trace(var_55_string); // 0x31b Func
	var_51_object = 0; // 0x31d MovB
	return 2; // 0x31e Return
	
Label_799:
	var_51_object = var_53_object; // 0x31f Mov
	return 2; // 0x320 Return
}


func_600()
{
	var_156_bool = 0; var_157_bool = 0; // 0x258 PushV
	CameraSwitchToNormal(); // 0x259 Func
	var_158_bool = 0; // 0x25b PushV
	func_905(var_158_bool); // 0x25c NEW_2
	if(var_158_bool == 0) goto Label_608; // 0x25e JumpB
	goto Label_616; // 0x25f Jump
	
Label_616:
	return 2; // 0x268 Return
	
Label_608:
	var_159_string = "head"; // 0x260 PushS
	HasAnimationTrack(var_157_bool, var_159_string); // 0x261 Func
	var_160_bool = var_157_bool; // 0x263 Push
	if(var_160_bool == 0) goto Label_616; // 0x264 JumpB
	var_161_string = "head"; // 0x265 PushS
	UnlookAsync(var_161_string); // 0x266 Func
}


func_671(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x29f PushV
	GetVariable(var_89_string, var_91_int); // 0x2a0 Func
	var_88_int = var_91_int; // 0x2a2 Mov
	return 2; // 0x2a3 Return
}


func_802(var_42_bool, var_43_object, var_44_int)
{
	var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0; // 0x322 PushV
	var_51_object = Obj(); // 0x323 PushV
	func_789(var_51_object); // 0x324 NEW_2
	var_48_object = var_51_object; // 0x325 Mov
	Find(var_44_int, var_49_object); // 0x327 ObjFunc
	var_56_bool = var_49_object == 0; // 0x329 Not
	if(var_56_bool == 0) goto Label_817; // 0x32a JumpB
	var_57_string = "Can't find diary parent with id: "; // 0x32b PushS
	var_58_int = var_57_string + var_44_int; // 0x32c Add
	Trace(var_58_int); // 0x32d Func
	var_42_bool = 0; // 0x32f MovB
	return 6; // 0x330 Return
	
Label_817:
	AddChild(var_43_object); // 0x331 ObjFunc
	var_59_int = 7; // 0x333 PushI
	SendWorldWndMessage(var_59_int); // 0x334 Func
	GetCategory(var_50_int); // 0x336 ObjFunc
	SetDiarySection(var_50_int); // 0x338 Func
	var_42_bool = 0; // 0x33a MovB
	return 6; // 0x33b Return
}


func_676(var_60_bool, var_61_string, var_62_string)
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x2a4 PushV
	FindActor(var_64_object, var_61_string); // 0x2a5 Func
	var_65_bool = var_64_object == 0; // 0x2a7 NullEq
	if(var_65_bool == 0) goto Label_683; // 0x2a8 JumpB
	var_60_bool = 0; // 0x2a9 MovB
	return 2; // 0x2aa Return
	
Label_683:
	Trigger(var_64_object, var_62_string); // 0x2ab Func
	var_60_bool = 1; // 0x2ad MovB
	return 2; // 0x2ae Return
}


func_617(var_130_string)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0; // 0x269 PushV
	lshHasAnimation(var_134_bool, var_130_string); // 0x26a Func
	var_137_bool = var_134_bool; // 0x26c Push
	if(var_137_bool == 0) goto Label_628; // 0x26d JumpB
	lshGetAnimTimes(var_130_string, var_135_float, var_136_float); // 0x26e Func
	var_138_bool = 0; // 0x270 PushB
	lshPlayAnimation(var_135_float, var_136_float, var_138_bool); // 0x271 Func
	goto Label_632; // 0x273 Jump
	
Label_632:
	return 6; // 0x278 Return
	
Label_628:
	var_139_string = "Can't find lsh animation : "; // 0x274 PushS
	var_140_int = var_139_string + var_130_string; // 0x275 Add
	Trace(var_140_int); // 0x276 Func
}


func_171(var_2_object, var_104_string)
{
	var_105_bool = 0; // 0xac PushV
	func_905(var_105_bool); // 0xad NEW_2
	var_106_bool = var_105_bool == 0; // 0xaf Not
	if(var_106_bool == 0) goto Label_178; // 0xb0 JumpB
	return 0; // 0xb1 Return
	
Label_178:
	var_107_bool = var_104_string == var_2_object; // 0xb2 Eq
	if(var_107_bool == 0) goto Label_181; // 0xb3 JumpB
	return 0; // 0xb4 Return
	
Label_181:
	var_108_string = ""; var_109_bool = 0; // 0xb5 PushV
	var_108_string = var_104_string; // 0xb6 Mov
	var_110_string = ""; // 0xb7 PushS
	var_111_bool = var_104_string == var_110_string; // 0xb8 Eq
	if(var_111_bool == 0) goto Label_188; // 0xb9 JumpB
	var_109_bool = 0; // 0xba MovB
	goto Label_189; // 0xbb Jump
	
Label_189:
	func_633(var_108_string, var_109_bool); // 0xbd NEW_2
	var_2_object = var_104_string; // 0xbf TMov
	return 0; // 0xc0 Return
	
Label_188:
	var_109_bool = 1; // 0xbc MovB
}


func_688(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x2b0 PushV
	GetGameTime(var_31_float); // 0x2b1 Func
	var_29_float = var_31_float; // 0x2b3 Mov
	return 2; // 0x2b4 Return
}


func_880(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x370 PushV
	var_72_string = "branch"; // 0x371 PushS
	GetVariable(var_72_string, var_71_int); // 0x372 Func
	var_73_int = 0; // 0x374 PushI
	var_74_bool = var_71_int == var_73_int; // 0x375 Eq
	if(var_74_bool == 0) goto Label_890; // 0x376 JumpB
	var_69_int = 1; // 0x377 MovI
	return 2; // 0x378 Return
	
Label_890:
	var_75_int = 1; // 0x37a PushI
	var_76_bool = var_71_int == var_75_int; // 0x37b Eq
	if(var_76_bool == 0) goto Label_895; // 0x37c JumpB
	var_69_int = 2; // 0x37d MovI
	return 2; // 0x37e Return
	
Label_895:
	var_69_int = 3; // 0x37f MovI
	return 2; // 0x380 Return
}


func_752(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x2f1 PushV
	var_89_string = "d11q01"; // 0x2f2 MovS
	func_671(var_88_int, var_89_string); // 0x2f3 NEW_2
	var_92_int = 1; // 0x2f5 PushI
	var_93_bool = var_88_int == var_92_int; // 0x2f6 Eq
	if(var_93_bool == 0) goto Label_762; // 0x2f7 JumpB
	var_86_bool = 1; // 0x2f8 MovB
	return 0; // 0x2f9 Return
	
Label_762:
	var_86_bool = 0; // 0x2fa MovB
	return 0; // 0x2fb Return
}


func_693()
{
	var_68_object = Obj(); var_69_string = ""; var_70_float = 0; // 0x2b6 PushV
	var_71_object = Obj(); // 0x2b7 PushV
	func_830(var_71_object); // 0x2b8 NEW_2
	var_68_object = var_71_object; // 0x2b9 Mov
	var_69_string = "pt_map_uprava_admin"; // 0x2bb MovS
	var_70_float = 2; // 0x2bc MovI
	func_847(var_68_object, var_69_string, var_70_float); // 0x2bd NEW_2
	var_91_object = Obj(); // 0x2bf PushV
	func_830(var_91_object); // 0x2c0 NEW_2
	ShowMap(var_91_object); // 0x2c2 ObjFunc
	return 0; // 0x2c4 Return
}


func_633(var_108_string, var_109_bool)
{
	var_112_bool = 0; var_113_float = 0; var_114_float = 0; var_115_bool = 0; var_116_float = 0; var_117_float = 0; // 0x279 PushV
	lshHasAnimation(var_115_bool, var_108_string); // 0x27a Func
	var_118_bool = var_115_bool; // 0x27c Push
	if(var_118_bool == 0) goto Label_643; // 0x27d JumpB
	lshGetAnimTimes(var_108_string, var_116_float, var_117_float); // 0x27e Func
	lshPlayAnimation(var_116_float, var_117_float, var_109_bool); // 0x280 Func
	goto Label_647; // 0x282 Jump
	
Label_647:
	return 6; // 0x287 Return
	
Label_643:
	var_119_string = "Can't find lsh animation : "; // 0x283 PushS
	var_120_int = var_119_string + var_108_string; // 0x284 Add
	Trace(var_120_int); // 0x285 Func
}


func_764(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x2fd PushV
	var_97_string = "ood11Nude1"; // 0x2fe MovS
	func_671(var_96_int, var_97_string); // 0x2ff NEW_2
	var_98_int = 0; // 0x301 PushI
	var_99_bool = var_96_int == var_98_int; // 0x302 Eq
	if(var_99_bool == 0) goto Label_774; // 0x303 JumpB
	var_94_bool = 1; // 0x304 MovB
	return 0; // 0x305 Return
	
Label_774:
	var_94_bool = 0; // 0x306 MovB
	return 0; // 0x307 Return
}


func_830(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x33e PushV
	GetMainOutdoorScene(var_21_object); // 0x33f Func
	var_23_bool = var_21_object == 0; // 0x341 NullEq
	if(var_23_bool == 0) goto Label_841; // 0x342 JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x343 PushS
	Trace(var_24_string); // 0x344 Func
	var_22_object = 0; // 0x346 SetNull
	var_18_object = var_22_object; // 0x347 Mov
	return 4; // 0x348 Return
	
Label_841:
	GetMap(var_22_object); // 0x349 ObjFunc
	var_18_object = var_22_object; // 0x34b Mov
	return 4; // 0x34c Return
}


