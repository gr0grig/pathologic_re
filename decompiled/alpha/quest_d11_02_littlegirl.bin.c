task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0xd1 PushI
	if(var_9_int == 0) goto Label_452; // 0xd2 JumpB
	func_600(); // 0xd4 Call
	var_11_int = 15373; // 0xd6 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xd7 Eq
	if(var_12_bool == 0) goto Label_222; // 0xd8 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xd9 PushV
	var_13_object = var_1_object; // 0xda MovT
	var_14_object = var_0_object; // 0xdb MovT
	func_689(); // 0xdc Call
	
Label_222:
	var_57_int = 15376; // 0xde PushI
	var_58_bool = var_8_bool == var_57_int; // 0xdf Eq
	if(var_58_bool == 0) goto Label_230; // 0xe0 JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0xe1 PushV
	var_59_object = var_1_object; // 0xe2 MovT
	var_60_object = var_0_object; // 0xe3 MovT
	func_723(); // 0xe4 Call
	
Label_230:
	var_63_int = 15378; // 0xe6 PushI
	var_64_bool = var_8_bool == var_63_int; // 0xe7 Eq
	if(var_64_bool == 0) goto Label_253; // 0xe8 JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0xe9 PushV
	var_65_object = var_1_object; // 0xea MovT
	var_66_object = var_0_object; // 0xeb MovT
	func_706(); // 0xec Call
	var_85_object = Obj(); var_86_object = Obj(); // 0xee PushV
	var_85_object = var_1_object; // 0xef MovT
	var_86_object = var_0_object; // 0xf0 MovT
	func_672(var_86_object); // 0xf1 Call
	var_104_object = Obj(); var_105_object = Obj(); // 0xf3 PushV
	var_104_object = var_1_object; // 0xf4 MovT
	var_105_object = var_0_object; // 0xf5 MovT
	func_666(); // 0xf6 Call
	var_108_object = Obj(); var_109_object = Obj(); // 0xf8 PushV
	var_108_object = var_1_object; // 0xf9 MovT
	var_109_object = var_0_object; // 0xfa MovT
	func_729(); // 0xfb Call
	
Label_253:
	var_111_int = 15379; // 0xfd PushI
	var_112_bool = var_8_bool == var_111_int; // 0xfe Eq
	if(var_112_bool == 0) goto Label_261; // 0xff JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0x100 PushV
	var_113_object = var_1_object; // 0x101 MovT
	var_114_object = var_0_object; // 0x102 MovT
	func_683(); // 0x103 Call
	
Label_261:
	var_117_int = 15381; // 0x105 PushI
	var_118_bool = var_8_bool == var_117_int; // 0x106 Eq
	if(var_118_bool == 0) goto Label_269; // 0x107 JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x108 PushV
	var_119_object = var_1_object; // 0x109 MovT
	var_120_object = var_0_object; // 0x10a MovT
	func_729(); // 0x10b Call
	
Label_269:
	var_121_int = 15370; // 0x10d PushI
	var_122_bool = var_7_bool == var_121_int; // 0x10e Eq
	if(var_122_bool == 0) goto Label_363; // 0x10f JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x110 PushV
	var_124_object = var_1_object; // 0x111 MovT
	func_746(var_124_object); // 0x112 Call
	if(var_123_bool == 0) goto Label_292; // 0x114 JumpB
	var_129_string = ""; // 0x115 PushV
	var_129_string = "Neutral"; // 0x116 MovS
	func_192(var_8_bool, var_129_string); // 0x117 Call
	var_144_int = 14156; // 0x119 PushI
	SetMessage(var_144_int); // 0x11a TObjFunc
	ClearReplies(); // 0x11c TObjFunc
	var_145_int = 14169; // 0x11e PushI
	var_146_int = 15384; // 0x11f PushI
	var_147_int = 15383; // 0x120 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x121 TObjFunc
	return 0; // 0x123 Return
	
Label_292:
	var_148_string = ""; // 0x124 PushV
	var_148_string = "Neutral"; // 0x125 MovS
	func_192(var_8_bool, var_148_string); // 0x126 Call
	var_149_int = 14161; // 0x128 PushI
	SetMessage(var_149_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_150_bool = 0; // 0x12d PushV
	var_150_bool = 1; // 0x12e MovB
	var_151_bool = 0; // 0x12f PushV
	var_151_bool = 0; // 0x130 MovB
	var_152_bool = 0; var_153_object = Obj(); // 0x131 PushV
	var_153_object = var_1_object; // 0x132 MovT
	func_758(var_153_object); // 0x133 Call
	if(var_152_bool == 0) goto Label_316; // 0x135 JumpB
	var_158_bool = 0; var_159_object = Obj(); // 0x136 PushV
	var_159_object = var_1_object; // 0x137 MovT
	func_782(var_159_object); // 0x138 Call
	if(var_158_bool == 0) goto Label_316; // 0x13a JumpB
	var_151_bool = 1; // 0x13b MovB
	
Label_316:
	if(var_151_bool == 0) goto Label_332; // 0x13c JumpB
	var_164_bool = 0; // 0x13d PushV
	var_164_bool = 0; // 0x13e MovB
	var_165_bool = 0; var_166_object = Obj(); // 0x13f PushV
	var_166_object = var_1_object; // 0x140 MovT
	func_794(var_166_object); // 0x141 Call
	if(var_165_bool == 0) goto Label_330; // 0x143 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x144 PushV
	var_172_object = var_1_object; // 0x145 MovT
	func_782(var_172_object); // 0x146 Call
	if(var_171_bool == 0) goto Label_330; // 0x148 JumpB
	var_164_bool = 1; // 0x149 MovB
	
Label_330:
	if(var_164_bool == 0) goto Label_332; // 0x14a JumpB
	var_150_bool = 0; // 0x14b MovB
	
Label_332:
	if(var_150_bool == 0) goto Label_338; // 0x14c JumpB
	var_173_int = 14162; // 0x14d PushI
	var_174_int = 15377; // 0x14e PushI
	var_175_int = 15376; // 0x14f PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x150 TObjFunc
	
Label_338:
	var_176_bool = 0; // 0x152 PushV
	var_176_bool = 0; // 0x153 MovB
	var_177_bool = 0; var_178_object = Obj(); // 0x154 PushV
	var_178_object = var_1_object; // 0x155 MovT
	func_770(var_178_object); // 0x156 Call
	if(var_177_bool == 0) goto Label_351; // 0x158 JumpB
	var_183_bool = 0; var_184_object = Obj(); // 0x159 PushV
	var_184_object = var_1_object; // 0x15a MovT
	func_734(var_184_object); // 0x15b Call
	if(var_183_bool == 0) goto Label_351; // 0x15d JumpB
	var_176_bool = 1; // 0x15e MovB
	
Label_351:
	if(var_176_bool == 0) goto Label_357; // 0x15f JumpB
	var_189_int = 14165; // 0x160 PushI
	var_190_int = 15380; // 0x161 PushI
	var_191_int = 15379; // 0x162 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x163 TObjFunc
	
Label_357:
	var_192_int = 14168; // 0x165 PushI
	var_193_int = -1; // 0x166 PushI
	var_194_int = 15382; // 0x167 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x168 TObjFunc
	return 0; // 0x16a Return
	
Label_363:
	var_195_int = 15380; // 0x16b PushI
	var_196_bool = var_7_bool == var_195_int; // 0x16c Eq
	if(var_196_bool == 0) goto Label_381; // 0x16d JumpB
	var_197_string = ""; // 0x16e PushV
	var_197_string = "Neutral"; // 0x16f MovS
	func_192(var_8_bool, var_197_string); // 0x170 Call
	var_198_int = 14166; // 0x172 PushI
	SetMessage(var_198_int); // 0x173 TObjFunc
	ClearReplies(); // 0x175 TObjFunc
	var_199_int = 14167; // 0x177 PushI
	var_200_int = -1; // 0x178 PushI
	var_201_int = 15381; // 0x179 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x17a TObjFunc
	return 0; // 0x17c Return
	
Label_381:
	var_202_int = 15377; // 0x17d PushI
	var_203_bool = var_7_bool == var_202_int; // 0x17e Eq
	if(var_203_bool == 0) goto Label_399; // 0x17f JumpB
	var_204_string = ""; // 0x180 PushV
	var_204_string = "Neutral"; // 0x181 MovS
	func_192(var_8_bool, var_204_string); // 0x182 Call
	var_205_int = 14163; // 0x184 PushI
	SetMessage(var_205_int); // 0x185 TObjFunc
	ClearReplies(); // 0x187 TObjFunc
	var_206_int = 14164; // 0x189 PushI
	var_207_int = -1; // 0x18a PushI
	var_208_int = 15378; // 0x18b PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x18c TObjFunc
	return 0; // 0x18e Return
	
Label_399:
	var_209_int = 15384; // 0x18f PushI
	var_210_bool = var_7_bool == var_209_int; // 0x190 Eq
	if(var_210_bool == 0) goto Label_417; // 0x191 JumpB
	var_211_string = ""; // 0x192 PushV
	var_211_string = "Neutral"; // 0x193 MovS
	func_192(var_8_bool, var_211_string); // 0x194 Call
	var_212_int = 14170; // 0x196 PushI
	SetMessage(var_212_int); // 0x197 TObjFunc
	ClearReplies(); // 0x199 TObjFunc
	var_213_int = 14157; // 0x19b PushI
	var_214_int = 15372; // 0x19c PushI
	var_215_int = 15371; // 0x19d PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x19e TObjFunc
	return 0; // 0x1a0 Return
	
Label_417:
	var_216_int = 15372; // 0x1a1 PushI
	var_217_bool = var_7_bool == var_216_int; // 0x1a2 Eq
	if(var_217_bool == 0) goto Label_440; // 0x1a3 JumpB
	var_218_string = ""; // 0x1a4 PushV
	var_218_string = "Neutral"; // 0x1a5 MovS
	func_192(var_8_bool, var_218_string); // 0x1a6 Call
	var_219_int = 14158; // 0x1a8 PushI
	SetMessage(var_219_int); // 0x1a9 TObjFunc
	ClearReplies(); // 0x1ab TObjFunc
	var_220_int = 14159; // 0x1ad PushI
	var_221_int = -1; // 0x1ae PushI
	var_222_int = 15373; // 0x1af PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1b0 TObjFunc
	var_223_int = 14160; // 0x1b2 PushI
	var_224_int = -1; // 0x1b3 PushI
	var_225_int = 15374; // 0x1b4 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1b5 TObjFunc
	return 0; // 0x1b7 Return
	
Label_440:
	var_3_string = 1; // 0x1b8 TMovB
	var_226_bool = 0; // 0x1b9 PushV
	func_917(var_226_bool); // 0x1ba Call
	if(var_226_bool == 0) goto Label_448; // 0x1bc JumpB
	lshStopAnimation(); // 0x1bd Func
	goto Label_450; // 0x1bf Jump
	
Label_450:
	return 0; // 0x1c2 Return
	
Label_448:
	StopAnimation(); // 0x1c0 Func
	
Label_452:
	return 0; // 0x1c4 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_object = var_1_object; // 0x1cb PushT
	if(var_8_object == 0) goto Label_471; // 0x1cc JumpB
	var_9_int = 0; var_10_object = Obj(); // 0x1cd PushV
	var_10_object = var_7_object; // 0x1ce Mov
	TaskCall(0); // 0x1cf TaskCall
	func_0(var_11_object, var_9_int, var_10_object); // 0x1d0 Call
	TaskReturn(); // 0x1d1 TaskReturn
	var_163_int = 1000; // 0x1d3 PushI
	var_164_bool = var_11_object == var_163_int; // 0x1d4 Eq
	if(var_164_bool == 0) goto Label_471; // 0x1d5 JumpB
	var_1_object = 0; // 0x1d6 TMovB
	
Label_471:
	return 0; // 0x1d7 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1dc PushV
	var_10_string = "cleanup"; // 0x1dd PushS
	var_11_bool = var_7_string == var_10_string; // 0x1de Eq
	if(var_11_bool == 0) goto Label_499; // 0x1df JumpB
	var_0_object = 1; // 0x1e0 TMovB
	IsLoaded(var_9_bool); // 0x1e1 Func
	var_12_bool = 0; // 0x1e3 PushV
	var_12_bool = 0; // 0x1e4 MovB
	var_13_bool = var_9_bool == 0; // 0x1e5 Not
	if(var_13_bool == 0) goto Label_492; // 0x1e6 JumpB
	var_14_bool = 0; // 0x1e7 PushV
	func_520(var_14_bool); // 0x1e8 Call
	if(var_14_bool == 0) goto Label_492; // 0x1ea JumpB
	var_12_bool = 1; // 0x1eb MovB
	
Label_492:
	if(var_12_bool == 0) goto Label_498; // 0x1ec JumpB
	var_15_object = Obj(); // 0x1ed PushV
	func_607(var_15_object); // 0x1ee Call
	RemoveActor(var_15_object); // 0x1f0 Func
	
Label_498:
	goto Label_503; // 0x1f2 Jump
	
Label_503:
	return 2; // 0x1f7 Return
	
Label_499:
	var_18_string = "restore"; // 0x1f3 PushS
	var_19_bool = var_7_string == var_18_string; // 0x1f4 Eq
	if(var_19_bool == 0) goto Label_503; // 0x1f5 JumpB
	var_0_object = 0; // 0x1f6 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; // 0x1f8 PushV
	var_7_bool = 0; // 0x1f9 MovB
	var_8_object = var_0_object; // 0x1fa PushT
	if(var_8_object == 0) goto Label_513; // 0x1fb JumpB
	var_9_bool = 0; // 0x1fc PushV
	func_520(var_9_bool); // 0x1fd Call
	if(var_9_bool == 0) goto Label_513; // 0x1ff JumpB
	var_7_bool = 1; // 0x200 MovB
	
Label_513:
	if(var_7_bool == 0) goto Label_519; // 0x201 JumpB
	var_10_object = Obj(); // 0x202 PushV
	func_607(var_10_object); // 0x203 Call
	RemoveActor(var_10_object); // 0x205 Func
	
Label_519:
	return 0; // 0x207 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = 1; // 0x1c5 TMovB
	func_472(); // 0x1c7 Call
	return 0; // 0x1c9 Return
}


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; // 0x0 PushV
	var_0_object = var_10_object; // 0x1 TMov
	var_20_bool = 0; var_21_object = Obj(); // 0x2 PushV
	var_21_object = var_10_object; // 0x3 Mov
	func_522(var_21_object); // 0x4 Call
	var_60_bool = var_20_bool == 0; // 0x6 Not
	if(var_60_bool == 0) goto Label_10; // 0x7 JumpB
	var_9_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_16_object); // 0xa Func
	var_61_int = 0; // 0xc PushV
	func_913(var_61_int); // 0xd Call
	SetNPCName(var_61_int); // 0xf ObjFunc
	var_62_string = ""; // 0x11 PushV
	func_915(var_62_string); // 0x12 Call
	SetPhoto(var_62_string); // 0x14 ObjFunc
	var_63_int = 0; // 0x16 PushV
	func_848(var_63_int); // 0x17 Call
	SetPlayerName(var_63_int); // 0x19 ObjFunc
	var_18_int = -1; // 0x1b MovI
	IsOverrideActive(var_17_bool); // 0x1c Func
	var_71_bool = var_17_bool; // 0x1e Push
	if(var_71_bool == 0) goto Label_34; // 0x1f JumpB
	var_9_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_16_object); // 0x22 Func
	var_72_object = Obj(); var_73_object = Obj(); // 0x24 PushV
	var_72_object = var_10_object; // 0x25 Mov
	var_73_object = var_16_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_74_object, var_75_object, var_76_string, var_77_bool, var_72_object, var_73_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_19_bool); // 0x2b ObjFunc
	
Label_45:
	var_161_bool = var_19_bool == 0; // 0x2d Not
	if(var_161_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_19_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_162_object = Obj(); // 0x34 PushV
	var_162_object = var_10_object; // 0x35 Mov
	func_578(); // 0x36 Call
	StopDialog(var_16_object); // 0x38 Func
	GetReturnValue(var_18_int); // 0x3a ObjFunc
	var_9_int = var_18_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_641(var_88_object, var_89_string, var_90_int)
{
	var_91_object = Obj(); var_92_object = Obj(); // 0x281 PushV
	CreateInvItem(var_92_object); // 0x282 Func
	SetItemName(var_89_string); // 0x284 ObjFunc
	var_93_object = Obj(); var_94_object = Obj(); var_95_int = 0; // 0x286 PushV
	var_93_object = var_88_object; // 0x287 Mov
	var_94_object = var_92_object; // 0x288 Mov
	var_95_int = var_90_int; // 0x289 Mov
	func_628(var_94_object, var_95_int); // 0x28a Call
	return 2; // 0x28c Return
}


func_770(var_143_bool)
{
	var_145_int = 0; var_146_string = ""; // 0x303 PushV
	var_146_string = "d11q02"; // 0x304 MovS
	func_623(var_145_int, var_146_string); // 0x305 Call
	var_147_int = -1; // 0x307 PushI
	var_148_bool = var_145_int == var_147_int; // 0x308 Eq
	if(var_148_bool == 0) goto Label_780; // 0x309 JumpB
	var_143_bool = 1; // 0x30a MovB
	return 0; // 0x30b Return
	
Label_780:
	var_143_bool = 0; // 0x30c MovB
	return 0; // 0x30d Return
}


func_897()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x381 PushV
	var_44_string = "Adding diary entry"; // 0x382 PushS
	Trace(var_44_string); // 0x383 Func
	var_45_int = 199; // 0x385 PushI
	var_46_int = 2; // 0x386 PushI
	var_47_int = 15487; // 0x387 PushI
	CreateDiaryEntry(var_43_object, var_45_int, var_46_int, var_47_int); // 0x388 Func
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0; // 0x38a PushV
	var_49_object = var_43_object; // 0x38b Mov
	var_50_int = 197; // 0x38c MovI
	func_819(var_48_bool, var_49_object, var_50_int); // 0x38d Call
	return 2; // 0x38f Return
}


func_520(var_9_bool)
{
	var_9_bool = 1; // 0x208 MovB
	return 0; // 0x209 Return
}


func_522(var_20_bool)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; // 0x20a PushV
	GetPosition(var_31_cvector); // 0x20b ObjFunc
	GetEyesHeight(var_30_float); // 0x20d ObjFunc
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x20f PushE
	var_38_float = var_38_float + var_30_float; // 0x210 Add2
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x211 PopE
	GetPosition(var_32_cvector); // 0x212 Func
	GetEyesHeight(var_30_float); // 0x214 Func
	var_39_float = GetByIndex(var_32_cvector, 1); // 0x216 PushE
	var_39_float = var_39_float + var_30_float; // 0x217 Add2
	SetByIndex(var_32_cvector, 1) = var_39_float; // 0x218 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x219 Sub2
	var_40_float = GetByIndex(var_33_cvector, 1); // 0x21a PushE
	var_40_float = 0; // 0x21b MovI
	SetByIndex(var_33_cvector, 1) = var_40_float; // 0x21c PopE
	var_41_int = var_33_cvector | var_33_cvector; // 0x21d Or
	var_42_float = sqrt(var_41_int); // 0x21e Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x21f Div2
	var_34_cvector = -var_33_cvector; // 0x220 Neg2
	var_43_int = 70; // 0x221 PushI
	var_44_float = var_33_cvector * var_43_int; // 0x222 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x223 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x224 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x225 Xor2
	func_613(var_45_cvector, var_46_cvector); // 0x226 Call
	var_53_int = 25; // 0x228 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x229 Mult
	var_55_int = var_44_float + var_54_float; // 0x22a Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x22b PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x22c Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x22d Add2
	IsOverrideActive(var_37_bool); // 0x22e Func
	var_57_bool = var_37_bool; // 0x230 Push
	if(var_57_bool == 0) goto Label_564; // 0x231 JumpB
	var_20_bool = 0; // 0x232 MovB
	return 16; // 0x233 Return
	
Label_564:
	StopWorld(); // 0x234 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x236 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x238 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x239 PushE
	Rotate(var_58_float, var_59_float); // 0x23a Func
	CameraWaitForPlayFinish(); // 0x23c Func
	ResumeWorld(); // 0x23e Func
	var_20_bool = 1; // 0x240 MovB
	return 16; // 0x241 Return
}


func_782(var_124_bool)
{
	var_126_int = 0; var_127_string = ""; // 0x30f PushV
	var_127_string = "ood11ULittleGirl2"; // 0x310 MovS
	func_623(var_126_int, var_127_string); // 0x311 Call
	var_128_int = 0; // 0x313 PushI
	var_129_bool = var_126_int == var_128_int; // 0x314 Eq
	if(var_129_bool == 0) goto Label_792; // 0x315 JumpB
	var_124_bool = 1; // 0x316 MovB
	return 0; // 0x317 Return
	
Label_792:
	var_124_bool = 0; // 0x318 MovB
	return 0; // 0x319 Return
}


func_654(var_51_bool, var_52_string, var_53_string)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x28e PushV
	FindActor(var_55_object, var_52_string); // 0x28f Func
	var_56_bool = var_55_object == 0; // 0x291 NullEq
	if(var_56_bool == 0) goto Label_661; // 0x292 JumpB
	var_51_bool = 0; // 0x293 MovB
	return 2; // 0x294 Return
	
Label_661:
	Trigger(var_55_object, var_53_string); // 0x295 Func
	var_51_bool = 1; // 0x297 MovB
	return 2; // 0x298 Return
}


func_913(var_61_int)
{
	var_61_int = 3346; // 0x391 MovI
	return 0; // 0x392 Return
}


func_915(var_62_string)
{
	var_62_string = "ui/NPC_None.png"; // 0x393 MovS
	return 0; // 0x394 Return
}


func_917(var_88_bool)
{
	var_88_bool = 0; // 0x395 MovB
	return 0; // 0x396 Return
}


func_666()
{
	var_106_string = "playsound"; // 0x29b PushS
	var_107_string = "giveitem"; // 0x29c PushS
	TriggerWorld(var_106_string, var_107_string); // 0x29d Func
	return 0; // 0x29f Return
}


func_794(var_131_bool)
{
	var_133_int = 0; var_134_string = ""; // 0x31b PushV
	var_134_string = "d11q02"; // 0x31c MovS
	func_623(var_133_int, var_134_string); // 0x31d Call
	var_135_int = 1000; // 0x31f PushI
	var_136_bool = var_133_int == var_135_int; // 0x320 Eq
	if(var_136_bool == 0) goto Label_804; // 0x321 JumpB
	var_131_bool = 1; // 0x322 MovB
	return 0; // 0x323 Return
	
Label_804:
	var_131_bool = 0; // 0x324 MovB
	return 0; // 0x325 Return
}


func_672(var_85_object)
{
	var_87_string = "powder is given"; // 0x2a1 PushS
	Trace(var_87_string); // 0x2a2 Func
	var_88_object = Obj(); var_89_string = ""; var_90_int = 0; // 0x2a4 PushV
	var_88_object = var_85_object; // 0x2a5 Mov
	var_89_string = "powder"; // 0x2a6 MovS
	var_90_int = 1; // 0x2a7 MovI
	func_641(var_88_object, var_89_string, var_90_int); // 0x2a8 Call
	return 0; // 0x2aa Return
}


func_806(var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x326 PushV
	GetDiaryRoot(var_34_object); // 0x327 Func
	var_35_bool = var_34_object == 0; // 0x329 Not
	if(var_35_bool == 0) goto Label_816; // 0x32a JumpB
	var_36_string = "Can't retrieve diary root"; // 0x32b PushS
	Trace(var_36_string); // 0x32c Func
	var_32_object = 0; // 0x32e MovB
	return 2; // 0x32f Return
	
Label_816:
	var_32_object = var_34_object; // 0x330 Mov
	return 2; // 0x331 Return
}


func_683()
{
	var_115_string = "ood11ULittleGirl1"; // 0x2ac PushS
	var_116_int = 1; // 0x2ad PushI
	SetVariable(var_115_string, var_116_int); // 0x2ae Func
	return 0; // 0x2b0 Return
}


func_689()
{
	var_15_string = "d11q02"; // 0x2b2 PushS
	var_16_int = 1; // 0x2b3 PushI
	SetVariable(var_15_string, var_16_int); // 0x2b4 Func
	func_865(); // 0x2b7 Call
	func_897(); // 0x2ba Call
	var_51_bool = 0; var_52_string = ""; var_53_string = ""; // 0x2bc PushV
	var_52_string = "quest_d11_02"; // 0x2bd MovS
	var_53_string = "init_graveyard"; // 0x2be MovS
	func_654(var_51_bool, var_52_string, var_53_string); // 0x2bf Call
	return 0; // 0x2c1 Return
}


func_819(var_23_bool, var_24_object, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0; // 0x333 PushV
	var_32_object = Obj(); // 0x334 PushV
	func_806(var_32_object); // 0x335 Call
	var_29_object = var_32_object; // 0x336 Mov
	Find(var_25_int, var_30_object); // 0x338 ObjFunc
	var_37_bool = var_30_object == 0; // 0x33a Not
	if(var_37_bool == 0) goto Label_834; // 0x33b JumpB
	var_38_string = "Can't find diary parent with id: "; // 0x33c PushS
	var_39_int = var_38_string + var_25_int; // 0x33d Add
	Trace(var_39_int); // 0x33e Func
	var_23_bool = 0; // 0x340 MovB
	return 6; // 0x341 Return
	
Label_834:
	AddChild(var_24_object); // 0x342 ObjFunc
	var_40_string = "player_diary"; // 0x344 PushS
	var_41_int = 1; // 0x345 PushI
	SetVariable(var_40_string, var_41_int); // 0x346 Func
	GetCategory(var_31_int); // 0x348 ObjFunc
	SetDiarySection(var_31_int); // 0x34a Func
	var_23_bool = 0; // 0x34c MovB
	return 6; // 0x34d Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_72_object, var_73_object)
{
	var_0_object = var_73_object; // 0x40 TMov
	var_1_object = var_72_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_78_int = 1; // 0x43 PushI
	if(var_78_int == 0) goto Label_162; // 0x44 JumpB
	var_79_bool = 0; var_80_object = Obj(); // 0x45 PushV
	var_80_object = var_1_object; // 0x46 MovT
	func_746(var_80_object); // 0x47 Call
	if(var_79_bool == 0) goto Label_89; // 0x49 JumpB
	var_87_string = ""; // 0x4a PushV
	var_87_string = "Neutral"; // 0x4b MovS
	func_192(var_73_object, var_87_string); // 0x4c Call
	var_102_int = 14156; // 0x4e PushI
	SetMessage(var_102_int); // 0x4f TObjFunc
	ClearReplies(); // 0x51 TObjFunc
	var_103_int = 14169; // 0x53 PushI
	var_104_int = 15384; // 0x54 PushI
	var_105_int = 15383; // 0x55 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x56 TObjFunc
	goto Label_162; // 0x58 Jump
	
Label_162:
	var_106_bool = 0; // 0xa2 PushV
	func_917(var_106_bool); // 0xa3 Call
	if(var_106_bool == 0) goto Label_177; // 0xa5 JumpB
	
Label_166:
	lshWaitForAnimEnd(); // 0xa6 Func
	var_107_string = var_3_string; // 0xa8 PushT
	if(var_107_string == 0) goto Label_171; // 0xa9 JumpB
	goto Label_176; // 0xaa Jump
	
Label_176:
	goto Label_191; // 0xb0 Jump
	
Label_191:
	return 0; // 0xbf Return
	
Label_171:
	var_108_string = ""; // 0xab PushV
	var_108_string = var_2_object; // 0xac MovT
	func_582(var_108_string); // 0xad Call
	goto Label_166; // 0xaf Jump
	
Label_177:
	var_109_string = "all"; // 0xb1 PushS
	var_110_string = "idle"; // 0xb2 PushS
	PlayAnimation(var_109_string, var_110_string); // 0xb3 Func
	
Label_181:
	WaitForAnimEnd(); // 0xb5 Func
	var_111_string = var_3_string; // 0xb7 PushT
	if(var_111_string == 0) goto Label_186; // 0xb8 JumpB
	goto Label_191; // 0xb9 Jump
	
Label_186:
	var_112_string = "all"; // 0xba PushS
	var_113_string = "idle"; // 0xbb PushS
	PlayAnimation(var_112_string, var_113_string); // 0xbc Func
	goto Label_181; // 0xbe Jump
	
Label_89:
	var_114_string = ""; // 0x59 PushV
	var_114_string = "Neutral"; // 0x5a MovS
	func_192(var_73_object, var_114_string); // 0x5b Call
	var_115_int = 14161; // 0x5d PushI
	SetMessage(var_115_int); // 0x5e TObjFunc
	ClearReplies(); // 0x60 TObjFunc
	var_116_bool = 0; // 0x62 PushV
	var_116_bool = 1; // 0x63 MovB
	var_117_bool = 0; // 0x64 PushV
	var_117_bool = 0; // 0x65 MovB
	var_118_bool = 0; var_119_object = Obj(); // 0x66 PushV
	var_119_object = var_1_object; // 0x67 MovT
	func_758(var_119_object); // 0x68 Call
	if(var_118_bool == 0) goto Label_113; // 0x6a JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x6b PushV
	var_125_object = var_1_object; // 0x6c MovT
	func_782(var_125_object); // 0x6d Call
	if(var_124_bool == 0) goto Label_113; // 0x6f JumpB
	var_117_bool = 1; // 0x70 MovB
	
Label_113:
	if(var_117_bool == 0) goto Label_129; // 0x71 JumpB
	var_130_bool = 0; // 0x72 PushV
	var_130_bool = 0; // 0x73 MovB
	var_131_bool = 0; var_132_object = Obj(); // 0x74 PushV
	var_132_object = var_1_object; // 0x75 MovT
	func_794(var_132_object); // 0x76 Call
	if(var_131_bool == 0) goto Label_127; // 0x78 JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x79 PushV
	var_138_object = var_1_object; // 0x7a MovT
	func_782(var_138_object); // 0x7b Call
	if(var_137_bool == 0) goto Label_127; // 0x7d JumpB
	var_130_bool = 1; // 0x7e MovB
	
Label_127:
	if(var_130_bool == 0) goto Label_129; // 0x7f JumpB
	var_116_bool = 0; // 0x80 MovB
	
Label_129:
	if(var_116_bool == 0) goto Label_135; // 0x81 JumpB
	var_139_int = 14162; // 0x82 PushI
	var_140_int = 15377; // 0x83 PushI
	var_141_int = 15376; // 0x84 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x85 TObjFunc
	
Label_135:
	var_142_bool = 0; // 0x87 PushV
	var_142_bool = 0; // 0x88 MovB
	var_143_bool = 0; var_144_object = Obj(); // 0x89 PushV
	var_144_object = var_1_object; // 0x8a MovT
	func_770(var_144_object); // 0x8b Call
	if(var_143_bool == 0) goto Label_148; // 0x8d JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x8e PushV
	var_150_object = var_1_object; // 0x8f MovT
	func_734(var_150_object); // 0x90 Call
	if(var_149_bool == 0) goto Label_148; // 0x92 JumpB
	var_142_bool = 1; // 0x93 MovB
	
Label_148:
	if(var_142_bool == 0) goto Label_154; // 0x94 JumpB
	var_155_int = 14165; // 0x95 PushI
	var_156_int = 15380; // 0x96 PushI
	var_157_int = 15379; // 0x97 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x98 TObjFunc
	
Label_154:
	var_158_int = 14168; // 0x9a PushI
	var_159_int = -1; // 0x9b PushI
	var_160_int = 15382; // 0x9c PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x9d TObjFunc
	goto Label_162; // 0x9f Jump
}


func_192(var_2_object, var_87_string)
{
	var_88_bool = 0; // 0xc1 PushV
	func_917(var_88_bool); // 0xc2 Call
	var_89_bool = var_88_bool == 0; // 0xc4 Not
	if(var_89_bool == 0) goto Label_199; // 0xc5 JumpB
	return 0; // 0xc6 Return
	
Label_199:
	var_90_bool = var_87_string == var_2_object; // 0xc7 Eq
	if(var_90_bool == 0) goto Label_202; // 0xc8 JumpB
	return 0; // 0xc9 Return
	
Label_202:
	var_91_string = ""; // 0xca PushV
	var_91_string = var_87_string; // 0xcb Mov
	func_582(var_91_string); // 0xcc Call
	var_2_object = var_87_string; // 0xce TMov
	return 0; // 0xcf Return
}


func_578()
{
	CameraSwitchToNormal(); // 0x243 Func
	return 0; // 0x245 Return
}


func_706()
{
	var_67_int = 0; var_68_string = ""; // 0x2c3 PushV
	var_68_string = "d11q02"; // 0x2c4 MovS
	func_623(var_67_int, var_68_string); // 0x2c5 Call
	var_71_int = 1000; // 0x2c7 PushI
	var_72_bool = var_67_int != var_71_int; // 0x2c8 Neq
	if(var_72_bool == 0) goto Label_722; // 0x2c9 JumpB
	func_881(); // 0x2cb Call
	var_82_bool = 0; var_83_string = ""; var_84_string = ""; // 0x2cd PushV
	var_83_string = "quest_d11_02"; // 0x2ce MovS
	var_84_string = "completed"; // 0x2cf MovS
	func_654(var_82_bool, var_83_string, var_84_string); // 0x2d0 Call
	
Label_722:
	return 0; // 0x2d2 Return
}


func_582(var_91_string)
{
	var_92_float = 0; var_93_float = 0; var_94_float = 0; var_95_float = 0; // 0x246 PushV
	var_96_string = "playing "; // 0x247 PushS
	var_97_int = var_96_string + var_91_string; // 0x248 Add
	Trace(var_97_int); // 0x249 Func
	lshGetAnimTimes(var_91_string, var_94_float, var_95_float); // 0x24b Func
	lshPlayAnimation(var_94_float, var_95_float); // 0x24d Func
	var_98_string = "start: "; // 0x24f PushS
	var_99_int = var_98_string + var_94_float; // 0x250 Add
	Trace(var_99_int); // 0x251 Func
	var_100_string = "end: "; // 0x253 PushS
	var_101_int = var_100_string + var_95_float; // 0x254 Add
	Trace(var_101_int); // 0x255 Func
	return 4; // 0x257 Return
}


func_848(var_63_int)
{
	var_64_int = 0; var_65_int = 0; // 0x350 PushV
	var_66_string = "player"; // 0x351 PushS
	GetVariable(var_66_string, var_65_int); // 0x352 Func
	var_67_int = 0; // 0x354 PushI
	var_68_bool = var_65_int == var_67_int; // 0x355 Eq
	if(var_68_bool == 0) goto Label_858; // 0x356 JumpB
	var_63_int = 200001; // 0x357 MovI
	return 2; // 0x358 Return
	
Label_858:
	var_69_int = 1; // 0x35a PushI
	var_70_bool = var_65_int == var_69_int; // 0x35b Eq
	if(var_70_bool == 0) goto Label_863; // 0x35c JumpB
	var_63_int = 200002; // 0x35d MovI
	return 2; // 0x35e Return
	
Label_863:
	var_63_int = 200003; // 0x35f MovI
	return 2; // 0x360 Return
}


func_723()
{
	var_61_string = "ood11ULittleGirl2"; // 0x2d4 PushS
	var_62_int = 1; // 0x2d5 PushI
	SetVariable(var_61_string, var_62_int); // 0x2d6 Func
	return 0; // 0x2d8 Return
}


func_600()
{
	var_10_bool = 0; // 0x258 PushV
	func_917(var_10_bool); // 0x259 Call
	if(var_10_bool == 0) goto Label_606; // 0x25b JumpB
	lshStopSpeech(); // 0x25c Func
	
Label_606:
	return 0; // 0x25e Return
}


func_729()
{
	var_110_int = 1000; // 0x2da PushI
	SetReturnValue(var_110_int); // 0x2db ObjFunc
	return 0; // 0x2dd Return
}


func_472()
{
	
Label_472:
	Hold(); // 0x1d8 Func
	goto Label_472; // 0x1da Jump
}


func_734(var_149_bool)
{
	var_151_int = 0; var_152_string = ""; // 0x2df PushV
	var_152_string = "ood11ULittleGirl1"; // 0x2e0 MovS
	func_623(var_151_int, var_152_string); // 0x2e1 Call
	var_153_int = 0; // 0x2e3 PushI
	var_154_bool = var_151_int == var_153_int; // 0x2e4 Eq
	if(var_154_bool == 0) goto Label_744; // 0x2e5 JumpB
	var_149_bool = 1; // 0x2e6 MovB
	return 0; // 0x2e7 Return
	
Label_744:
	var_149_bool = 0; // 0x2e8 MovB
	return 0; // 0x2e9 Return
}


func_607(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x25f PushV
	self(var_12_object); // 0x260 Func
	var_10_object = var_12_object; // 0x262 Mov
	return 2; // 0x263 Return
}


func_865()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x361 PushV
	var_19_string = "Adding diary entry"; // 0x362 PushS
	Trace(var_19_string); // 0x363 Func
	var_20_int = 197; // 0x365 PushI
	var_21_int = 2; // 0x366 PushI
	var_22_int = 15485; // 0x367 PushI
	CreateDiaryEntry(var_18_object, var_20_int, var_21_int, var_22_int); // 0x368 Func
	var_23_bool = 0; var_24_object = Obj(); var_25_int = 0; // 0x36a PushV
	var_24_object = var_18_object; // 0x36b Mov
	var_25_int = -1; // 0x36c MovI
	func_819(var_23_bool, var_24_object, var_25_int); // 0x36d Call
	return 2; // 0x36f Return
}


func_613(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x265 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x266 Or
	var_49_float = sqrt(var_50_int); // 0x267 Sqrt2
	var_51_float = 0.0; // 0x268 PushF
	var_52_bool = var_49_float < var_51_float; // 0x269 LT
	if(var_52_bool == 0) goto Label_621; // 0x26a JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x26b MovV
	return 2; // 0x26c Return
	
Label_621:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x26d Div2
	return 2; // 0x26e Return
}


func_746(var_79_bool)
{
	var_81_int = 0; var_82_string = ""; // 0x2eb PushV
	var_82_string = "d11q02"; // 0x2ec MovS
	func_623(var_81_int, var_82_string); // 0x2ed Call
	var_85_int = 0; // 0x2ef PushI
	var_86_bool = var_81_int == var_85_int; // 0x2f0 Eq
	if(var_86_bool == 0) goto Label_756; // 0x2f1 JumpB
	var_79_bool = 1; // 0x2f2 MovB
	return 0; // 0x2f3 Return
	
Label_756:
	var_79_bool = 0; // 0x2f4 MovB
	return 0; // 0x2f5 Return
}


func_623(var_81_int, var_82_string)
{
	var_83_int = 0; var_84_int = 0; // 0x26f PushV
	GetVariable(var_82_string, var_84_int); // 0x270 Func
	var_81_int = var_84_int; // 0x272 Mov
	return 2; // 0x273 Return
}


func_881()
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x371 PushV
	var_75_string = "Adding diary entry"; // 0x372 PushS
	Trace(var_75_string); // 0x373 Func
	var_76_int = 198; // 0x375 PushI
	var_77_int = 2; // 0x376 PushI
	var_78_int = 15486; // 0x377 PushI
	CreateDiaryEntry(var_74_object, var_76_int, var_77_int, var_78_int); // 0x378 Func
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0; // 0x37a PushV
	var_80_object = var_74_object; // 0x37b Mov
	var_81_int = 197; // 0x37c MovI
	func_819(var_79_bool, var_80_object, var_81_int); // 0x37d Call
	return 2; // 0x37f Return
}


func_628(var_94_object, var_95_int)
{
	var_96_int = 0; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_int = 0; var_101_bool = 0; // 0x274 PushV
	GetItemID(var_99_int); // 0x275 ObjFunc
	var_102_string = "Category"; // 0x277 PushS
	GetInvItemProperty(var_100_int, var_99_int, var_102_string); // 0x278 Func
	AddItem(var_101_bool, var_94_object, var_100_int, var_95_int); // 0x27a ObjFunc
	var_103_bool = var_101_bool == 0; // 0x27c Not
	if(var_103_bool == 0) goto Label_640; // 0x27d JumpB
	DropItems(var_94_object, var_95_int); // 0x27e ObjFunc
	
Label_640:
	return 6; // 0x280 Return
}


func_758(var_118_bool)
{
	var_120_int = 0; var_121_string = ""; // 0x2f7 PushV
	var_121_string = "d11q02"; // 0x2f8 MovS
	func_623(var_120_int, var_121_string); // 0x2f9 Call
	var_122_int = 2; // 0x2fb PushI
	var_123_bool = var_120_int == var_122_int; // 0x2fc Eq
	if(var_123_bool == 0) goto Label_768; // 0x2fd JumpB
	var_118_bool = 1; // 0x2fe MovB
	return 0; // 0x2ff Return
	
Label_768:
	var_118_bool = 0; // 0x300 MovB
	return 0; // 0x301 Return
}


