task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0xd1 PushI
	if(var_9_int == 0) goto Label_434; // 0xd2 JumpB
	func_582(); // 0xd4 Call
	var_11_int = 15360; // 0xd6 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xd7 Eq
	if(var_12_bool == 0) goto Label_222; // 0xd8 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xd9 PushV
	var_13_object = var_1_object; // 0xda MovT
	var_14_object = var_0_object; // 0xdb MovT
	func_665(); // 0xdc Call
	
Label_222:
	var_57_int = 15363; // 0xde PushI
	var_58_bool = var_8_bool == var_57_int; // 0xdf Eq
	if(var_58_bool == 0) goto Label_230; // 0xe0 JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0xe1 PushV
	var_59_object = var_1_object; // 0xe2 MovT
	var_60_object = var_0_object; // 0xe3 MovT
	func_699(); // 0xe4 Call
	
Label_230:
	var_63_int = 15365; // 0xe6 PushI
	var_64_bool = var_8_bool == var_63_int; // 0xe7 Eq
	if(var_64_bool == 0) goto Label_253; // 0xe8 JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0xe9 PushV
	var_65_object = var_1_object; // 0xea MovT
	var_66_object = var_0_object; // 0xeb MovT
	func_682(); // 0xec Call
	var_85_object = Obj(); var_86_object = Obj(); // 0xee PushV
	var_85_object = var_1_object; // 0xef MovT
	var_86_object = var_0_object; // 0xf0 MovT
	func_654(var_86_object); // 0xf1 Call
	var_104_object = Obj(); var_105_object = Obj(); // 0xf3 PushV
	var_104_object = var_1_object; // 0xf4 MovT
	var_105_object = var_0_object; // 0xf5 MovT
	func_648(); // 0xf6 Call
	var_108_object = Obj(); var_109_object = Obj(); // 0xf8 PushV
	var_108_object = var_1_object; // 0xf9 MovT
	var_109_object = var_0_object; // 0xfa MovT
	func_711(); // 0xfb Call
	
Label_253:
	var_111_int = 15366; // 0xfd PushI
	var_112_bool = var_8_bool == var_111_int; // 0xfe Eq
	if(var_112_bool == 0) goto Label_261; // 0xff JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0x100 PushV
	var_113_object = var_1_object; // 0x101 MovT
	var_114_object = var_0_object; // 0x102 MovT
	func_705(); // 0x103 Call
	
Label_261:
	var_117_int = 15368; // 0x105 PushI
	var_118_bool = var_8_bool == var_117_int; // 0x106 Eq
	if(var_118_bool == 0) goto Label_269; // 0x107 JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x108 PushV
	var_119_object = var_1_object; // 0x109 MovT
	var_120_object = var_0_object; // 0x10a MovT
	func_711(); // 0x10b Call
	
Label_269:
	var_121_int = 15356; // 0x10d PushI
	var_122_bool = var_7_bool == var_121_int; // 0x10e Eq
	if(var_122_bool == 0) goto Label_363; // 0x10f JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x110 PushV
	var_124_object = var_1_object; // 0x111 MovT
	func_716(var_124_object); // 0x112 Call
	if(var_123_bool == 0) goto Label_292; // 0x114 JumpB
	var_129_string = ""; // 0x115 PushV
	var_129_string = "Neutral"; // 0x116 MovS
	func_192(var_8_bool, var_129_string); // 0x117 Call
	var_144_int = 14142; // 0x119 PushI
	SetMessage(var_144_int); // 0x11a TObjFunc
	ClearReplies(); // 0x11c TObjFunc
	var_145_int = 14143; // 0x11e PushI
	var_146_int = 15359; // 0x11f PushI
	var_147_int = 15357; // 0x120 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x121 TObjFunc
	return 0; // 0x123 Return
	
Label_292:
	var_148_string = ""; // 0x124 PushV
	var_148_string = "Neutral"; // 0x125 MovS
	func_192(var_8_bool, var_148_string); // 0x126 Call
	var_149_int = 14147; // 0x128 PushI
	SetMessage(var_149_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_150_bool = 0; // 0x12d PushV
	var_150_bool = 1; // 0x12e MovB
	var_151_bool = 0; // 0x12f PushV
	var_151_bool = 0; // 0x130 MovB
	var_152_bool = 0; var_153_object = Obj(); // 0x131 PushV
	var_153_object = var_1_object; // 0x132 MovT
	func_728(var_153_object); // 0x133 Call
	if(var_152_bool == 0) goto Label_316; // 0x135 JumpB
	var_158_bool = 0; var_159_object = Obj(); // 0x136 PushV
	var_159_object = var_1_object; // 0x137 MovT
	func_764(var_159_object); // 0x138 Call
	if(var_158_bool == 0) goto Label_316; // 0x13a JumpB
	var_151_bool = 1; // 0x13b MovB
	
Label_316:
	if(var_151_bool == 0) goto Label_332; // 0x13c JumpB
	var_164_bool = 0; // 0x13d PushV
	var_164_bool = 0; // 0x13e MovB
	var_165_bool = 0; var_166_object = Obj(); // 0x13f PushV
	var_166_object = var_1_object; // 0x140 MovT
	func_752(var_166_object); // 0x141 Call
	if(var_165_bool == 0) goto Label_330; // 0x143 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x144 PushV
	var_172_object = var_1_object; // 0x145 MovT
	func_764(var_172_object); // 0x146 Call
	if(var_171_bool == 0) goto Label_330; // 0x148 JumpB
	var_164_bool = 1; // 0x149 MovB
	
Label_330:
	if(var_164_bool == 0) goto Label_332; // 0x14a JumpB
	var_150_bool = 0; // 0x14b MovB
	
Label_332:
	if(var_150_bool == 0) goto Label_338; // 0x14c JumpB
	var_173_int = 14149; // 0x14d PushI
	var_174_int = 15364; // 0x14e PushI
	var_175_int = 15363; // 0x14f PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x150 TObjFunc
	
Label_338:
	var_176_bool = 0; // 0x152 PushV
	var_176_bool = 0; // 0x153 MovB
	var_177_bool = 0; var_178_object = Obj(); // 0x154 PushV
	var_178_object = var_1_object; // 0x155 MovT
	func_740(var_178_object); // 0x156 Call
	if(var_177_bool == 0) goto Label_351; // 0x158 JumpB
	var_183_bool = 0; var_184_object = Obj(); // 0x159 PushV
	var_184_object = var_1_object; // 0x15a MovT
	func_776(var_184_object); // 0x15b Call
	if(var_183_bool == 0) goto Label_351; // 0x15d JumpB
	var_176_bool = 1; // 0x15e MovB
	
Label_351:
	if(var_176_bool == 0) goto Label_357; // 0x15f JumpB
	var_189_int = 14152; // 0x160 PushI
	var_190_int = 15367; // 0x161 PushI
	var_191_int = 15366; // 0x162 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x163 TObjFunc
	
Label_357:
	var_192_int = 14148; // 0x165 PushI
	var_193_int = -1; // 0x166 PushI
	var_194_int = 15362; // 0x167 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x168 TObjFunc
	return 0; // 0x16a Return
	
Label_363:
	var_195_int = 15367; // 0x16b PushI
	var_196_bool = var_7_bool == var_195_int; // 0x16c Eq
	if(var_196_bool == 0) goto Label_381; // 0x16d JumpB
	var_197_string = ""; // 0x16e PushV
	var_197_string = "Neutral"; // 0x16f MovS
	func_192(var_8_bool, var_197_string); // 0x170 Call
	var_198_int = 14153; // 0x172 PushI
	SetMessage(var_198_int); // 0x173 TObjFunc
	ClearReplies(); // 0x175 TObjFunc
	var_199_int = 14154; // 0x177 PushI
	var_200_int = -1; // 0x178 PushI
	var_201_int = 15368; // 0x179 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x17a TObjFunc
	return 0; // 0x17c Return
	
Label_381:
	var_202_int = 15364; // 0x17d PushI
	var_203_bool = var_7_bool == var_202_int; // 0x17e Eq
	if(var_203_bool == 0) goto Label_399; // 0x17f JumpB
	var_204_string = ""; // 0x180 PushV
	var_204_string = "Neutral"; // 0x181 MovS
	func_192(var_8_bool, var_204_string); // 0x182 Call
	var_205_int = 14150; // 0x184 PushI
	SetMessage(var_205_int); // 0x185 TObjFunc
	ClearReplies(); // 0x187 TObjFunc
	var_206_int = 14151; // 0x189 PushI
	var_207_int = -1; // 0x18a PushI
	var_208_int = 15365; // 0x18b PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x18c TObjFunc
	return 0; // 0x18e Return
	
Label_399:
	var_209_int = 15359; // 0x18f PushI
	var_210_bool = var_7_bool == var_209_int; // 0x190 Eq
	if(var_210_bool == 0) goto Label_422; // 0x191 JumpB
	var_211_string = ""; // 0x192 PushV
	var_211_string = "Neutral"; // 0x193 MovS
	func_192(var_8_bool, var_211_string); // 0x194 Call
	var_212_int = 14145; // 0x196 PushI
	SetMessage(var_212_int); // 0x197 TObjFunc
	ClearReplies(); // 0x199 TObjFunc
	var_213_int = 14146; // 0x19b PushI
	var_214_int = -1; // 0x19c PushI
	var_215_int = 15360; // 0x19d PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x19e TObjFunc
	var_216_int = 14144; // 0x1a0 PushI
	var_217_int = -1; // 0x1a1 PushI
	var_218_int = 15358; // 0x1a2 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1a3 TObjFunc
	return 0; // 0x1a5 Return
	
Label_422:
	var_3_string = 1; // 0x1a6 TMovB
	var_219_bool = 0; // 0x1a7 PushV
	func_899(var_219_bool); // 0x1a8 Call
	if(var_219_bool == 0) goto Label_430; // 0x1aa JumpB
	lshStopAnimation(); // 0x1ab Func
	goto Label_432; // 0x1ad Jump
	
Label_432:
	return 0; // 0x1b0 Return
	
Label_430:
	StopAnimation(); // 0x1ae Func
	
Label_434:
	return 0; // 0x1b2 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_object = var_1_object; // 0x1b9 PushT
	if(var_8_object == 0) goto Label_453; // 0x1ba JumpB
	var_9_int = 0; var_10_object = Obj(); // 0x1bb PushV
	var_10_object = var_7_object; // 0x1bc Mov
	TaskCall(0); // 0x1bd TaskCall
	func_0(var_11_object, var_9_int, var_10_object); // 0x1be Call
	TaskReturn(); // 0x1bf TaskReturn
	var_163_int = 1000; // 0x1c1 PushI
	var_164_bool = var_11_object == var_163_int; // 0x1c2 Eq
	if(var_164_bool == 0) goto Label_453; // 0x1c3 JumpB
	var_1_object = 0; // 0x1c4 TMovB
	
Label_453:
	return 0; // 0x1c5 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1ca PushV
	var_10_string = "cleanup"; // 0x1cb PushS
	var_11_bool = var_7_string == var_10_string; // 0x1cc Eq
	if(var_11_bool == 0) goto Label_481; // 0x1cd JumpB
	var_0_object = 1; // 0x1ce TMovB
	IsLoaded(var_9_bool); // 0x1cf Func
	var_12_bool = 0; // 0x1d1 PushV
	var_12_bool = 0; // 0x1d2 MovB
	var_13_bool = var_9_bool == 0; // 0x1d3 Not
	if(var_13_bool == 0) goto Label_474; // 0x1d4 JumpB
	var_14_bool = 0; // 0x1d5 PushV
	func_502(var_14_bool); // 0x1d6 Call
	if(var_14_bool == 0) goto Label_474; // 0x1d8 JumpB
	var_12_bool = 1; // 0x1d9 MovB
	
Label_474:
	if(var_12_bool == 0) goto Label_480; // 0x1da JumpB
	var_15_object = Obj(); // 0x1db PushV
	func_589(var_15_object); // 0x1dc Call
	RemoveActor(var_15_object); // 0x1de Func
	
Label_480:
	goto Label_485; // 0x1e0 Jump
	
Label_485:
	return 2; // 0x1e5 Return
	
Label_481:
	var_18_string = "restore"; // 0x1e1 PushS
	var_19_bool = var_7_string == var_18_string; // 0x1e2 Eq
	if(var_19_bool == 0) goto Label_485; // 0x1e3 JumpB
	var_0_object = 0; // 0x1e4 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; // 0x1e6 PushV
	var_7_bool = 0; // 0x1e7 MovB
	var_8_object = var_0_object; // 0x1e8 PushT
	if(var_8_object == 0) goto Label_495; // 0x1e9 JumpB
	var_9_bool = 0; // 0x1ea PushV
	func_502(var_9_bool); // 0x1eb Call
	if(var_9_bool == 0) goto Label_495; // 0x1ed JumpB
	var_7_bool = 1; // 0x1ee MovB
	
Label_495:
	if(var_7_bool == 0) goto Label_501; // 0x1ef JumpB
	var_10_object = Obj(); // 0x1f0 PushV
	func_589(var_10_object); // 0x1f1 Call
	RemoveActor(var_10_object); // 0x1f3 Func
	
Label_501:
	return 0; // 0x1f5 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = 1; // 0x1b3 TMovB
	func_454(); // 0x1b5 Call
	return 0; // 0x1b7 Return
}


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; // 0x0 PushV
	var_0_object = var_10_object; // 0x1 TMov
	var_20_bool = 0; var_21_object = Obj(); // 0x2 PushV
	var_21_object = var_10_object; // 0x3 Mov
	func_504(var_21_object); // 0x4 Call
	var_60_bool = var_20_bool == 0; // 0x6 Not
	if(var_60_bool == 0) goto Label_10; // 0x7 JumpB
	var_9_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_16_object); // 0xa Func
	var_61_int = 0; // 0xc PushV
	func_895(var_61_int); // 0xd Call
	SetNPCName(var_61_int); // 0xf ObjFunc
	var_62_string = ""; // 0x11 PushV
	func_897(var_62_string); // 0x12 Call
	SetPhoto(var_62_string); // 0x14 ObjFunc
	var_63_int = 0; // 0x16 PushV
	func_830(var_63_int); // 0x17 Call
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
	func_560(); // 0x36 Call
	StopDialog(var_16_object); // 0x38 Func
	GetReturnValue(var_18_int); // 0x3a ObjFunc
	var_9_int = var_18_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_897(var_62_string)
{
	var_62_string = "ui/NPC_None.png"; // 0x381 MovS
	return 0; // 0x382 Return
}


func_899(var_88_bool)
{
	var_88_bool = 0; // 0x383 MovB
	return 0; // 0x384 Return
}


func_764(var_124_bool)
{
	var_126_int = 0; var_127_string = ""; // 0x2fd PushV
	var_127_string = "ood11ULittleBoy1"; // 0x2fe MovS
	func_605(var_126_int, var_127_string); // 0x2ff Call
	var_128_int = 0; // 0x301 PushI
	var_129_bool = var_126_int == var_128_int; // 0x302 Eq
	if(var_129_bool == 0) goto Label_774; // 0x303 JumpB
	var_124_bool = 1; // 0x304 MovB
	return 0; // 0x305 Return
	
Label_774:
	var_124_bool = 0; // 0x306 MovB
	return 0; // 0x307 Return
}


func_776(var_149_bool)
{
	var_151_int = 0; var_152_string = ""; // 0x309 PushV
	var_152_string = "ood11ULittleBoy2"; // 0x30a MovS
	func_605(var_151_int, var_152_string); // 0x30b Call
	var_153_int = 0; // 0x30d PushI
	var_154_bool = var_151_int == var_153_int; // 0x30e Eq
	if(var_154_bool == 0) goto Label_786; // 0x30f JumpB
	var_149_bool = 1; // 0x310 MovB
	return 0; // 0x311 Return
	
Label_786:
	var_149_bool = 0; // 0x312 MovB
	return 0; // 0x313 Return
}


func_648()
{
	var_106_string = "playsound"; // 0x289 PushS
	var_107_string = "giveitem"; // 0x28a PushS
	TriggerWorld(var_106_string, var_107_string); // 0x28b Func
	return 0; // 0x28d Return
}


func_654(var_85_object)
{
	var_87_string = "revolver ammo6 is given"; // 0x28f PushS
	Trace(var_87_string); // 0x290 Func
	var_88_object = Obj(); var_89_string = ""; var_90_int = 0; // 0x292 PushV
	var_88_object = var_85_object; // 0x293 Mov
	var_89_string = "revolver_ammo"; // 0x294 MovS
	var_90_int = 6; // 0x295 MovI
	func_623(var_88_object, var_89_string, var_90_int); // 0x296 Call
	return 0; // 0x298 Return
}


func_788(var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x314 PushV
	GetDiaryRoot(var_34_object); // 0x315 Func
	var_35_bool = var_34_object == 0; // 0x317 Not
	if(var_35_bool == 0) goto Label_798; // 0x318 JumpB
	var_36_string = "Can't retrieve diary root"; // 0x319 PushS
	Trace(var_36_string); // 0x31a Func
	var_32_object = 0; // 0x31c MovB
	return 2; // 0x31d Return
	
Label_798:
	var_32_object = var_34_object; // 0x31e Mov
	return 2; // 0x31f Return
}


func_665()
{
	var_15_string = "d11q02"; // 0x29a PushS
	var_16_int = 1; // 0x29b PushI
	SetVariable(var_15_string, var_16_int); // 0x29c Func
	func_847(); // 0x29f Call
	func_879(); // 0x2a2 Call
	var_51_bool = 0; var_52_string = ""; var_53_string = ""; // 0x2a4 PushV
	var_52_string = "quest_d11_02"; // 0x2a5 MovS
	var_53_string = "init_graveyard"; // 0x2a6 MovS
	func_636(var_51_bool, var_52_string, var_53_string); // 0x2a7 Call
	return 0; // 0x2a9 Return
}


func_801(var_23_bool, var_24_object, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0; // 0x321 PushV
	var_32_object = Obj(); // 0x322 PushV
	func_788(var_32_object); // 0x323 Call
	var_29_object = var_32_object; // 0x324 Mov
	Find(var_25_int, var_30_object); // 0x326 ObjFunc
	var_37_bool = var_30_object == 0; // 0x328 Not
	if(var_37_bool == 0) goto Label_816; // 0x329 JumpB
	var_38_string = "Can't find diary parent with id: "; // 0x32a PushS
	var_39_int = var_38_string + var_25_int; // 0x32b Add
	Trace(var_39_int); // 0x32c Func
	var_23_bool = 0; // 0x32e MovB
	return 6; // 0x32f Return
	
Label_816:
	AddChild(var_24_object); // 0x330 ObjFunc
	var_40_string = "player_diary"; // 0x332 PushS
	var_41_int = 1; // 0x333 PushI
	SetVariable(var_40_string, var_41_int); // 0x334 Func
	GetCategory(var_31_int); // 0x336 ObjFunc
	SetDiarySection(var_31_int); // 0x338 Func
	var_23_bool = 0; // 0x33a MovB
	return 6; // 0x33b Return
}


func_682()
{
	var_67_int = 0; var_68_string = ""; // 0x2ab PushV
	var_68_string = "d11q02"; // 0x2ac MovS
	func_605(var_67_int, var_68_string); // 0x2ad Call
	var_71_int = 1000; // 0x2af PushI
	var_72_bool = var_67_int != var_71_int; // 0x2b0 Neq
	if(var_72_bool == 0) goto Label_698; // 0x2b1 JumpB
	func_863(); // 0x2b3 Call
	var_82_bool = 0; var_83_string = ""; var_84_string = ""; // 0x2b5 PushV
	var_83_string = "quest_d11_02"; // 0x2b6 MovS
	var_84_string = "completed"; // 0x2b7 MovS
	func_636(var_82_bool, var_83_string, var_84_string); // 0x2b8 Call
	
Label_698:
	return 0; // 0x2ba Return
}


func_560()
{
	CameraSwitchToNormal(); // 0x231 Func
	return 0; // 0x233 Return
}


func_564(var_91_string)
{
	var_92_float = 0; var_93_float = 0; var_94_float = 0; var_95_float = 0; // 0x234 PushV
	var_96_string = "playing "; // 0x235 PushS
	var_97_int = var_96_string + var_91_string; // 0x236 Add
	Trace(var_97_int); // 0x237 Func
	lshGetAnimTimes(var_91_string, var_94_float, var_95_float); // 0x239 Func
	lshPlayAnimation(var_94_float, var_95_float); // 0x23b Func
	var_98_string = "start: "; // 0x23d PushS
	var_99_int = var_98_string + var_94_float; // 0x23e Add
	Trace(var_99_int); // 0x23f Func
	var_100_string = "end: "; // 0x241 PushS
	var_101_int = var_100_string + var_95_float; // 0x242 Add
	Trace(var_101_int); // 0x243 Func
	return 4; // 0x245 Return
}


func_699()
{
	var_61_string = "ood11ULittleBoy1"; // 0x2bc PushS
	var_62_int = 1; // 0x2bd PushI
	SetVariable(var_61_string, var_62_int); // 0x2be Func
	return 0; // 0x2c0 Return
}


func_830(var_63_int)
{
	var_64_int = 0; var_65_int = 0; // 0x33e PushV
	var_66_string = "player"; // 0x33f PushS
	GetVariable(var_66_string, var_65_int); // 0x340 Func
	var_67_int = 0; // 0x342 PushI
	var_68_bool = var_65_int == var_67_int; // 0x343 Eq
	if(var_68_bool == 0) goto Label_840; // 0x344 JumpB
	var_63_int = 200001; // 0x345 MovI
	return 2; // 0x346 Return
	
Label_840:
	var_69_int = 1; // 0x348 PushI
	var_70_bool = var_65_int == var_69_int; // 0x349 Eq
	if(var_70_bool == 0) goto Label_845; // 0x34a JumpB
	var_63_int = 200002; // 0x34b MovI
	return 2; // 0x34c Return
	
Label_845:
	var_63_int = 200003; // 0x34d MovI
	return 2; // 0x34e Return
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
	func_716(var_80_object); // 0x47 Call
	if(var_79_bool == 0) goto Label_89; // 0x49 JumpB
	var_87_string = ""; // 0x4a PushV
	var_87_string = "Neutral"; // 0x4b MovS
	func_192(var_73_object, var_87_string); // 0x4c Call
	var_102_int = 14142; // 0x4e PushI
	SetMessage(var_102_int); // 0x4f TObjFunc
	ClearReplies(); // 0x51 TObjFunc
	var_103_int = 14143; // 0x53 PushI
	var_104_int = 15359; // 0x54 PushI
	var_105_int = 15357; // 0x55 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x56 TObjFunc
	goto Label_162; // 0x58 Jump
	
Label_162:
	var_106_bool = 0; // 0xa2 PushV
	func_899(var_106_bool); // 0xa3 Call
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
	func_564(var_108_string); // 0xad Call
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
	var_115_int = 14147; // 0x5d PushI
	SetMessage(var_115_int); // 0x5e TObjFunc
	ClearReplies(); // 0x60 TObjFunc
	var_116_bool = 0; // 0x62 PushV
	var_116_bool = 1; // 0x63 MovB
	var_117_bool = 0; // 0x64 PushV
	var_117_bool = 0; // 0x65 MovB
	var_118_bool = 0; var_119_object = Obj(); // 0x66 PushV
	var_119_object = var_1_object; // 0x67 MovT
	func_728(var_119_object); // 0x68 Call
	if(var_118_bool == 0) goto Label_113; // 0x6a JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x6b PushV
	var_125_object = var_1_object; // 0x6c MovT
	func_764(var_125_object); // 0x6d Call
	if(var_124_bool == 0) goto Label_113; // 0x6f JumpB
	var_117_bool = 1; // 0x70 MovB
	
Label_113:
	if(var_117_bool == 0) goto Label_129; // 0x71 JumpB
	var_130_bool = 0; // 0x72 PushV
	var_130_bool = 0; // 0x73 MovB
	var_131_bool = 0; var_132_object = Obj(); // 0x74 PushV
	var_132_object = var_1_object; // 0x75 MovT
	func_752(var_132_object); // 0x76 Call
	if(var_131_bool == 0) goto Label_127; // 0x78 JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x79 PushV
	var_138_object = var_1_object; // 0x7a MovT
	func_764(var_138_object); // 0x7b Call
	if(var_137_bool == 0) goto Label_127; // 0x7d JumpB
	var_130_bool = 1; // 0x7e MovB
	
Label_127:
	if(var_130_bool == 0) goto Label_129; // 0x7f JumpB
	var_116_bool = 0; // 0x80 MovB
	
Label_129:
	if(var_116_bool == 0) goto Label_135; // 0x81 JumpB
	var_139_int = 14149; // 0x82 PushI
	var_140_int = 15364; // 0x83 PushI
	var_141_int = 15363; // 0x84 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x85 TObjFunc
	
Label_135:
	var_142_bool = 0; // 0x87 PushV
	var_142_bool = 0; // 0x88 MovB
	var_143_bool = 0; var_144_object = Obj(); // 0x89 PushV
	var_144_object = var_1_object; // 0x8a MovT
	func_740(var_144_object); // 0x8b Call
	if(var_143_bool == 0) goto Label_148; // 0x8d JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x8e PushV
	var_150_object = var_1_object; // 0x8f MovT
	func_776(var_150_object); // 0x90 Call
	if(var_149_bool == 0) goto Label_148; // 0x92 JumpB
	var_142_bool = 1; // 0x93 MovB
	
Label_148:
	if(var_142_bool == 0) goto Label_154; // 0x94 JumpB
	var_155_int = 14152; // 0x95 PushI
	var_156_int = 15367; // 0x96 PushI
	var_157_int = 15366; // 0x97 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x98 TObjFunc
	
Label_154:
	var_158_int = 14148; // 0x9a PushI
	var_159_int = -1; // 0x9b PushI
	var_160_int = 15362; // 0x9c PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x9d TObjFunc
	goto Label_162; // 0x9f Jump
}


func_192(var_2_object, var_87_string)
{
	var_88_bool = 0; // 0xc1 PushV
	func_899(var_88_bool); // 0xc2 Call
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
	func_564(var_91_string); // 0xcc Call
	var_2_object = var_87_string; // 0xce TMov
	return 0; // 0xcf Return
}


func_705()
{
	var_115_string = "ood11ULittleBoy2"; // 0x2c2 PushS
	var_116_int = 1; // 0x2c3 PushI
	SetVariable(var_115_string, var_116_int); // 0x2c4 Func
	return 0; // 0x2c6 Return
}


func_582()
{
	var_10_bool = 0; // 0x246 PushV
	func_899(var_10_bool); // 0x247 Call
	if(var_10_bool == 0) goto Label_588; // 0x249 JumpB
	lshStopSpeech(); // 0x24a Func
	
Label_588:
	return 0; // 0x24c Return
}


func_711()
{
	var_110_int = 1000; // 0x2c8 PushI
	SetReturnValue(var_110_int); // 0x2c9 ObjFunc
	return 0; // 0x2cb Return
}


func_454()
{
	
Label_454:
	Hold(); // 0x1c6 Func
	goto Label_454; // 0x1c8 Jump
}


func_716(var_79_bool)
{
	var_81_int = 0; var_82_string = ""; // 0x2cd PushV
	var_82_string = "d11q02"; // 0x2ce MovS
	func_605(var_81_int, var_82_string); // 0x2cf Call
	var_85_int = 0; // 0x2d1 PushI
	var_86_bool = var_81_int == var_85_int; // 0x2d2 Eq
	if(var_86_bool == 0) goto Label_726; // 0x2d3 JumpB
	var_79_bool = 1; // 0x2d4 MovB
	return 0; // 0x2d5 Return
	
Label_726:
	var_79_bool = 0; // 0x2d6 MovB
	return 0; // 0x2d7 Return
}


func_589(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x24d PushV
	self(var_12_object); // 0x24e Func
	var_10_object = var_12_object; // 0x250 Mov
	return 2; // 0x251 Return
}


func_847()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x34f PushV
	var_19_string = "Adding diary entry"; // 0x350 PushS
	Trace(var_19_string); // 0x351 Func
	var_20_int = 197; // 0x353 PushI
	var_21_int = 2; // 0x354 PushI
	var_22_int = 15485; // 0x355 PushI
	CreateDiaryEntry(var_18_object, var_20_int, var_21_int, var_22_int); // 0x356 Func
	var_23_bool = 0; var_24_object = Obj(); var_25_int = 0; // 0x358 PushV
	var_24_object = var_18_object; // 0x359 Mov
	var_25_int = -1; // 0x35a MovI
	func_801(var_23_bool, var_24_object, var_25_int); // 0x35b Call
	return 2; // 0x35d Return
}


func_595(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x253 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x254 Or
	var_49_float = sqrt(var_50_int); // 0x255 Sqrt2
	var_51_float = 0.0; // 0x256 PushF
	var_52_bool = var_49_float < var_51_float; // 0x257 LT
	if(var_52_bool == 0) goto Label_603; // 0x258 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x259 MovV
	return 2; // 0x25a Return
	
Label_603:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x25b Div2
	return 2; // 0x25c Return
}


func_728(var_118_bool)
{
	var_120_int = 0; var_121_string = ""; // 0x2d9 PushV
	var_121_string = "d11q02"; // 0x2da MovS
	func_605(var_120_int, var_121_string); // 0x2db Call
	var_122_int = 2; // 0x2dd PushI
	var_123_bool = var_120_int == var_122_int; // 0x2de Eq
	if(var_123_bool == 0) goto Label_738; // 0x2df JumpB
	var_118_bool = 1; // 0x2e0 MovB
	return 0; // 0x2e1 Return
	
Label_738:
	var_118_bool = 0; // 0x2e2 MovB
	return 0; // 0x2e3 Return
}


func_605(var_81_int, var_82_string)
{
	var_83_int = 0; var_84_int = 0; // 0x25d PushV
	GetVariable(var_82_string, var_84_int); // 0x25e Func
	var_81_int = var_84_int; // 0x260 Mov
	return 2; // 0x261 Return
}


func_863()
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x35f PushV
	var_75_string = "Adding diary entry"; // 0x360 PushS
	Trace(var_75_string); // 0x361 Func
	var_76_int = 198; // 0x363 PushI
	var_77_int = 2; // 0x364 PushI
	var_78_int = 15486; // 0x365 PushI
	CreateDiaryEntry(var_74_object, var_76_int, var_77_int, var_78_int); // 0x366 Func
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0; // 0x368 PushV
	var_80_object = var_74_object; // 0x369 Mov
	var_81_int = 197; // 0x36a MovI
	func_801(var_79_bool, var_80_object, var_81_int); // 0x36b Call
	return 2; // 0x36d Return
}


func_610(var_94_object, var_95_int)
{
	var_96_int = 0; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_int = 0; var_101_bool = 0; // 0x262 PushV
	GetItemID(var_99_int); // 0x263 ObjFunc
	var_102_string = "Category"; // 0x265 PushS
	GetInvItemProperty(var_100_int, var_99_int, var_102_string); // 0x266 Func
	AddItem(var_101_bool, var_94_object, var_100_int, var_95_int); // 0x268 ObjFunc
	var_103_bool = var_101_bool == 0; // 0x26a Not
	if(var_103_bool == 0) goto Label_622; // 0x26b JumpB
	DropItems(var_94_object, var_95_int); // 0x26c ObjFunc
	
Label_622:
	return 6; // 0x26e Return
}


func_740(var_143_bool)
{
	var_145_int = 0; var_146_string = ""; // 0x2e5 PushV
	var_146_string = "d11q02"; // 0x2e6 MovS
	func_605(var_145_int, var_146_string); // 0x2e7 Call
	var_147_int = -1; // 0x2e9 PushI
	var_148_bool = var_145_int == var_147_int; // 0x2ea Eq
	if(var_148_bool == 0) goto Label_750; // 0x2eb JumpB
	var_143_bool = 1; // 0x2ec MovB
	return 0; // 0x2ed Return
	
Label_750:
	var_143_bool = 0; // 0x2ee MovB
	return 0; // 0x2ef Return
}


func_623(var_88_object, var_89_string, var_90_int)
{
	var_91_object = Obj(); var_92_object = Obj(); // 0x26f PushV
	CreateInvItem(var_92_object); // 0x270 Func
	SetItemName(var_89_string); // 0x272 ObjFunc
	var_93_object = Obj(); var_94_object = Obj(); var_95_int = 0; // 0x274 PushV
	var_93_object = var_88_object; // 0x275 Mov
	var_94_object = var_92_object; // 0x276 Mov
	var_95_int = var_90_int; // 0x277 Mov
	func_610(var_94_object, var_95_int); // 0x278 Call
	return 2; // 0x27a Return
}


func_752(var_131_bool)
{
	var_133_int = 0; var_134_string = ""; // 0x2f1 PushV
	var_134_string = "d11q02"; // 0x2f2 MovS
	func_605(var_133_int, var_134_string); // 0x2f3 Call
	var_135_int = 1000; // 0x2f5 PushI
	var_136_bool = var_133_int == var_135_int; // 0x2f6 Eq
	if(var_136_bool == 0) goto Label_762; // 0x2f7 JumpB
	var_131_bool = 1; // 0x2f8 MovB
	return 0; // 0x2f9 Return
	
Label_762:
	var_131_bool = 0; // 0x2fa MovB
	return 0; // 0x2fb Return
}


func_879()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x36f PushV
	var_44_string = "Adding diary entry"; // 0x370 PushS
	Trace(var_44_string); // 0x371 Func
	var_45_int = 199; // 0x373 PushI
	var_46_int = 2; // 0x374 PushI
	var_47_int = 15487; // 0x375 PushI
	CreateDiaryEntry(var_43_object, var_45_int, var_46_int, var_47_int); // 0x376 Func
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0; // 0x378 PushV
	var_49_object = var_43_object; // 0x379 Mov
	var_50_int = 197; // 0x37a MovI
	func_801(var_48_bool, var_49_object, var_50_int); // 0x37b Call
	return 2; // 0x37d Return
}


func_502(var_9_bool)
{
	var_9_bool = 1; // 0x1f6 MovB
	return 0; // 0x1f7 Return
}


func_504(var_20_bool)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; // 0x1f8 PushV
	GetPosition(var_31_cvector); // 0x1f9 ObjFunc
	GetEyesHeight(var_30_float); // 0x1fb ObjFunc
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x1fd PushE
	var_38_float = var_38_float + var_30_float; // 0x1fe Add2
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x1ff PopE
	GetPosition(var_32_cvector); // 0x200 Func
	GetEyesHeight(var_30_float); // 0x202 Func
	var_39_float = GetByIndex(var_32_cvector, 1); // 0x204 PushE
	var_39_float = var_39_float + var_30_float; // 0x205 Add2
	SetByIndex(var_32_cvector, 1) = var_39_float; // 0x206 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x207 Sub2
	var_40_float = GetByIndex(var_33_cvector, 1); // 0x208 PushE
	var_40_float = 0; // 0x209 MovI
	SetByIndex(var_33_cvector, 1) = var_40_float; // 0x20a PopE
	var_41_int = var_33_cvector | var_33_cvector; // 0x20b Or
	var_42_float = sqrt(var_41_int); // 0x20c Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x20d Div2
	var_34_cvector = -var_33_cvector; // 0x20e Neg2
	var_43_int = 70; // 0x20f PushI
	var_44_float = var_33_cvector * var_43_int; // 0x210 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x211 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x212 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x213 Xor2
	func_595(var_45_cvector, var_46_cvector); // 0x214 Call
	var_53_int = 25; // 0x216 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x217 Mult
	var_55_int = var_44_float + var_54_float; // 0x218 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x219 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x21a Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x21b Add2
	IsOverrideActive(var_37_bool); // 0x21c Func
	var_57_bool = var_37_bool; // 0x21e Push
	if(var_57_bool == 0) goto Label_546; // 0x21f JumpB
	var_20_bool = 0; // 0x220 MovB
	return 16; // 0x221 Return
	
Label_546:
	StopWorld(); // 0x222 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x224 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x226 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x227 PushE
	Rotate(var_58_float, var_59_float); // 0x228 Func
	CameraWaitForPlayFinish(); // 0x22a Func
	ResumeWorld(); // 0x22c Func
	var_20_bool = 1; // 0x22e MovB
	return 16; // 0x22f Return
}


func_636(var_51_bool, var_52_string, var_53_string)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x27c PushV
	FindActor(var_55_object, var_52_string); // 0x27d Func
	var_56_bool = var_55_object == 0; // 0x27f NullEq
	if(var_56_bool == 0) goto Label_643; // 0x280 JumpB
	var_51_bool = 0; // 0x281 MovB
	return 2; // 0x282 Return
	
Label_643:
	Trigger(var_55_object, var_53_string); // 0x283 Func
	var_51_bool = 1; // 0x285 MovB
	return 2; // 0x286 Return
}


func_895(var_61_int)
{
	var_61_int = 3345; // 0x37f MovI
	return 0; // 0x380 Return
}


