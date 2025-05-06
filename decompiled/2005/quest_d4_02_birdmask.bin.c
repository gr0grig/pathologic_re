task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xd7 PushI
	if(var_7_int == 0) goto Label_482; // 0xd8 JumpB
	func_709(); // 0xda NEW_2
	var_9_int = 13059; // 0xdc PushI
	var_10_bool = var_6_int == var_9_int; // 0xdd Eq
	if(var_10_bool == 0) goto Label_233; // 0xde JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xdf PushV
	var_11_object = var_1_object; // 0xe0 MovT
	var_12_object = var_0_object; // 0xe1 MovT
	func_828(); // 0xe2 NEW_2
	var_15_object = Obj(); var_16_object = Obj(); // 0xe4 PushV
	var_15_object = var_1_object; // 0xe5 MovT
	var_16_object = var_0_object; // 0xe6 MovT
	func_891(); // 0xe7 NEW_2
	
Label_233:
	var_46_int = 13065; // 0xe9 PushI
	var_47_bool = var_6_int == var_46_int; // 0xea Eq
	if(var_47_bool == 0) goto Label_256; // 0xeb JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0xec PushV
	var_48_object = var_1_object; // 0xed MovT
	var_49_object = var_0_object; // 0xee MovT
	func_834(); // 0xef NEW_2
	var_52_object = Obj(); var_53_object = Obj(); // 0xf1 PushV
	var_52_object = var_1_object; // 0xf2 MovT
	var_53_object = var_0_object; // 0xf3 MovT
	func_817(var_53_object); // 0xf4 NEW_2
	var_76_object = Obj(); var_77_object = Obj(); // 0xf6 PushV
	var_76_object = var_1_object; // 0xf7 MovT
	var_77_object = var_0_object; // 0xf8 MovT
	func_811(); // 0xf9 NEW_2
	var_80_object = Obj(); var_81_object = Obj(); // 0xfb PushV
	var_80_object = var_1_object; // 0xfc MovT
	var_81_object = var_0_object; // 0xfd MovT
	func_840(); // 0xfe NEW_2
	
Label_256:
	var_114_int = 13056; // 0x100 PushI
	var_115_bool = var_5_int == var_114_int; // 0x101 Eq
	if(var_115_bool == 0) goto Label_339; // 0x102 JumpB
	var_116_bool = 0; var_117_object = Obj(); // 0x103 PushV
	var_117_object = var_1_object; // 0x104 MovT
	func_901(var_117_object); // 0x105 NEW_2
	if(var_116_bool == 0) goto Label_284; // 0x107 JumpB
	var_124_string = ""; // 0x108 PushV
	var_124_string = "Neutral"; // 0x109 MovS
	func_192(var_6_int, var_124_string); // 0x10a NEW_2
	var_141_int = 511843; // 0x10c PushI
	SetMessage(var_141_int); // 0x10d TObjFunc
	ClearReplies(); // 0x10f TObjFunc
	var_142_int = 511844; // 0x111 PushI
	var_143_int = 13058; // 0x112 PushI
	var_144_int = 13057; // 0x113 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x114 TObjFunc
	var_145_int = 536103; // 0x116 PushI
	var_146_int = 37857; // 0x117 PushI
	var_147_int = 37856; // 0x118 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x119 TObjFunc
	return 0; // 0x11b Return
	
Label_284:
	var_148_bool = 0; var_149_object = Obj(); // 0x11c PushV
	var_149_object = var_1_object; // 0x11d MovT
	func_925(var_149_object); // 0x11e NEW_2
	var_154_bool = var_148_bool == 0; // 0x120 Not
	if(var_154_bool == 0) goto Label_305; // 0x121 JumpB
	var_155_string = ""; // 0x122 PushV
	var_155_string = "Neutral"; // 0x123 MovS
	func_192(var_6_int, var_155_string); // 0x124 NEW_2
	var_156_int = 511847; // 0x126 PushI
	SetMessage(var_156_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_157_int = 511848; // 0x12b PushI
	var_158_int = -1; // 0x12c PushI
	var_159_int = 13061; // 0x12d PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x12e TObjFunc
	return 0; // 0x130 Return
	
Label_305:
	var_160_bool = 0; // 0x131 PushV
	var_160_bool = 0; // 0x132 MovB
	var_161_bool = 0; var_162_object = Obj(); // 0x133 PushV
	var_162_object = var_1_object; // 0x134 MovT
	func_913(var_162_object); // 0x135 NEW_2
	if(var_161_bool == 0) goto Label_318; // 0x137 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0x138 PushV
	var_168_object = var_1_object; // 0x139 MovT
	func_925(var_168_object); // 0x13a NEW_2
	if(var_167_bool == 0) goto Label_318; // 0x13c JumpB
	var_160_bool = 1; // 0x13d MovB
	
Label_318:
	if(var_160_bool == 0) goto Label_339; // 0x13e JumpB
	var_169_string = ""; // 0x13f PushV
	var_169_string = "Neutral"; // 0x140 MovS
	func_192(var_6_int, var_169_string); // 0x141 NEW_2
	var_170_int = 511849; // 0x143 PushI
	SetMessage(var_170_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_171_int = 536115; // 0x148 PushI
	var_172_int = 13064; // 0x149 PushI
	var_173_int = 37870; // 0x14a PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x14b TObjFunc
	var_174_int = 511850; // 0x14d PushI
	var_175_int = 13064; // 0x14e PushI
	var_176_int = 13063; // 0x14f PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_177_int = 13064; // 0x153 PushI
	var_178_bool = var_5_int == var_177_int; // 0x154 Eq
	if(var_178_bool == 0) goto Label_357; // 0x155 JumpB
	var_179_string = ""; // 0x156 PushV
	var_179_string = "Neutral"; // 0x157 MovS
	func_192(var_6_int, var_179_string); // 0x158 NEW_2
	var_180_int = 511851; // 0x15a PushI
	SetMessage(var_180_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_181_int = 511852; // 0x15f PushI
	var_182_int = -1; // 0x160 PushI
	var_183_int = 13065; // 0x161 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_184_int = 37857; // 0x165 PushI
	var_185_bool = var_5_int == var_184_int; // 0x166 Eq
	if(var_185_bool == 0) goto Label_375; // 0x167 JumpB
	var_186_string = ""; // 0x168 PushV
	var_186_string = "Neutral"; // 0x169 MovS
	func_192(var_6_int, var_186_string); // 0x16a NEW_2
	var_187_int = 536104; // 0x16c PushI
	SetMessage(var_187_int); // 0x16d TObjFunc
	ClearReplies(); // 0x16f TObjFunc
	var_188_int = 536105; // 0x171 PushI
	var_189_int = 13058; // 0x172 PushI
	var_190_int = 37858; // 0x173 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x174 TObjFunc
	return 0; // 0x176 Return
	
Label_375:
	var_191_int = 13058; // 0x177 PushI
	var_192_bool = var_5_int == var_191_int; // 0x178 Eq
	if(var_192_bool == 0) goto Label_393; // 0x179 JumpB
	var_193_string = ""; // 0x17a PushV
	var_193_string = "Neutral"; // 0x17b MovS
	func_192(var_6_int, var_193_string); // 0x17c NEW_2
	var_194_int = 511845; // 0x17e PushI
	SetMessage(var_194_int); // 0x17f TObjFunc
	ClearReplies(); // 0x181 TObjFunc
	var_195_int = 536106; // 0x183 PushI
	var_196_int = 37861; // 0x184 PushI
	var_197_int = 37860; // 0x185 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x186 TObjFunc
	return 0; // 0x188 Return
	
Label_393:
	var_198_int = 37861; // 0x189 PushI
	var_199_bool = var_5_int == var_198_int; // 0x18a Eq
	if(var_199_bool == 0) goto Label_416; // 0x18b JumpB
	var_200_string = ""; // 0x18c PushV
	var_200_string = "Neutral"; // 0x18d MovS
	func_192(var_6_int, var_200_string); // 0x18e NEW_2
	var_201_int = 536107; // 0x190 PushI
	SetMessage(var_201_int); // 0x191 TObjFunc
	ClearReplies(); // 0x193 TObjFunc
	var_202_int = 536108; // 0x195 PushI
	var_203_int = 37863; // 0x196 PushI
	var_204_int = 37862; // 0x197 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x198 TObjFunc
	var_205_int = 536114; // 0x19a PushI
	var_206_int = 37863; // 0x19b PushI
	var_207_int = 37868; // 0x19c PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x19d TObjFunc
	return 0; // 0x19f Return
	
Label_416:
	var_208_int = 37863; // 0x1a0 PushI
	var_209_bool = var_5_int == var_208_int; // 0x1a1 Eq
	if(var_209_bool == 0) goto Label_434; // 0x1a2 JumpB
	var_210_string = ""; // 0x1a3 PushV
	var_210_string = "Neutral"; // 0x1a4 MovS
	func_192(var_6_int, var_210_string); // 0x1a5 NEW_2
	var_211_int = 536109; // 0x1a7 PushI
	SetMessage(var_211_int); // 0x1a8 TObjFunc
	ClearReplies(); // 0x1aa TObjFunc
	var_212_int = 536110; // 0x1ac PushI
	var_213_int = 37865; // 0x1ad PushI
	var_214_int = 37864; // 0x1ae PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1af TObjFunc
	return 0; // 0x1b1 Return
	
Label_434:
	var_215_int = 37865; // 0x1b2 PushI
	var_216_bool = var_5_int == var_215_int; // 0x1b3 Eq
	if(var_216_bool == 0) goto Label_452; // 0x1b4 JumpB
	var_217_string = ""; // 0x1b5 PushV
	var_217_string = "Neutral"; // 0x1b6 MovS
	func_192(var_6_int, var_217_string); // 0x1b7 NEW_2
	var_218_int = 536111; // 0x1b9 PushI
	SetMessage(var_218_int); // 0x1ba TObjFunc
	ClearReplies(); // 0x1bc TObjFunc
	var_219_int = 536112; // 0x1be PushI
	var_220_int = 37867; // 0x1bf PushI
	var_221_int = 37866; // 0x1c0 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1c1 TObjFunc
	return 0; // 0x1c3 Return
	
Label_452:
	var_222_int = 37867; // 0x1c4 PushI
	var_223_bool = var_5_int == var_222_int; // 0x1c5 Eq
	if(var_223_bool == 0) goto Label_470; // 0x1c6 JumpB
	var_224_string = ""; // 0x1c7 PushV
	var_224_string = "Neutral"; // 0x1c8 MovS
	func_192(var_6_int, var_224_string); // 0x1c9 NEW_2
	var_225_int = 536113; // 0x1cb PushI
	SetMessage(var_225_int); // 0x1cc TObjFunc
	ClearReplies(); // 0x1ce TObjFunc
	var_226_int = 511846; // 0x1d0 PushI
	var_227_int = -1; // 0x1d1 PushI
	var_228_int = 13059; // 0x1d2 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x1d3 TObjFunc
	return 0; // 0x1d5 Return
	
Label_470:
	var_3_string = 1; // 0x1d6 TMovB
	var_229_bool = 0; // 0x1d7 PushV
	func_1046(var_229_bool); // 0x1d8 NEW_2
	if(var_229_bool == 0) goto Label_478; // 0x1da JumpB
	lshStopAnimation(); // 0x1db Func
	goto Label_480; // 0x1dd Jump
	
Label_480:
	return 0; // 0x1e0 Return
	
Label_478:
	StopAnimation(); // 0x1de Func
	
Label_482:
	return 0; // 0x1e2 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	func_583(); // 0x1ed NEW_2
	var_6_int = 0; var_7_object = Obj(); // 0x1ef PushV
	var_7_object = var_5_object; // 0x1f0 Mov
	TaskCall(0); // 0x1f1 TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x1f2 NEW_2
	TaskReturn(); // 0x1f3 TaskReturn
	return 0; // 0x1f5 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_483:
	var_5_int = 3; // 0x1e3 PushI
	Sleep(var_5_int); // 0x1e4 Func
	func_502(); // 0x1e7 NEW_2
	goto Label_483; // 0x1e9 Jump
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); var_19_float = 0; // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	var_19_float = 130.0; // 0x4 MovF
	func_593(var_18_object, var_19_float); // 0x5 NEW_2
	var_63_bool = var_17_bool == 0; // 0x7 Not
	if(var_63_bool == 0) goto Label_11; // 0x8 JumpB
	var_6_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_13_object); // 0xb Func
	var_64_int = 0; // 0xd PushV
	func_1040(var_64_int); // 0xe NEW_2
	SetNPCName(var_64_int); // 0x10 ObjFunc
	var_65_int = 0; // 0x12 PushV
	func_1038(var_65_int); // 0x13 NEW_2
	SetNPCDescription(var_65_int); // 0x15 ObjFunc
	var_66_string = ""; // 0x17 PushV
	func_1042(var_66_string); // 0x18 NEW_2
	SetPhoto(var_66_string); // 0x1a ObjFunc
	var_67_string = ""; // 0x1c PushV
	func_1044(var_67_string); // 0x1d NEW_2
	SetPhoto2(var_67_string); // 0x1f ObjFunc
	var_68_int = 0; // 0x21 PushV
	func_1021(var_68_int); // 0x22 NEW_2
	SetPlayerName(var_68_int); // 0x24 ObjFunc
	var_15_int = -1; // 0x26 MovI
	IsOverrideActive(var_14_bool); // 0x27 Func
	var_76_bool = var_14_bool; // 0x29 Push
	if(var_76_bool == 0) goto Label_45; // 0x2a JumpB
	var_6_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_13_object); // 0x2d Func
	var_77_object = Obj(); var_78_object = Obj(); // 0x2f PushV
	var_77_object = var_7_object; // 0x30 Mov
	var_78_object = var_13_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_16_bool); // 0x36 ObjFunc
	
Label_56:
	var_163_bool = var_16_bool == 0; // 0x38 Not
	if(var_163_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_16_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_164_object = Obj(); // 0x3f PushV
	var_164_object = var_7_object; // 0x40 Mov
	func_661(); // 0x41 NEW_2
	StopDialog(var_13_object); // 0x43 Func
	GetReturnValue(var_15_int); // 0x45 ObjFunc
	var_6_int = var_15_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_901(var_84_bool)
{
	var_86_int = 0; var_87_string = ""; // 0x386 PushV
	var_87_string = "ood4BirdmaskHome1"; // 0x387 MovS
	func_726(var_86_int, var_87_string); // 0x388 NEW_2
	var_90_int = 0; // 0x38a PushI
	var_91_bool = var_86_int == var_90_int; // 0x38b Eq
	if(var_91_bool == 0) goto Label_911; // 0x38c JumpB
	var_84_bool = 1; // 0x38d MovB
	return 0; // 0x38e Return
	
Label_911:
	var_84_bool = 0; // 0x38f MovB
	return 0; // 0x390 Return
}


func_775(var_40_bool, var_41_string, var_42_string)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x307 PushV
	FindActor(var_44_object, var_41_string); // 0x308 Func
	var_45_bool = var_44_object == 0; // 0x30a NullEq
	if(var_45_bool == 0) goto Label_782; // 0x30b JumpB
	var_40_bool = 0; // 0x30c MovB
	return 2; // 0x30d Return
	
Label_782:
	Trigger(var_44_object, var_42_string); // 0x30e Func
	var_40_bool = 1; // 0x310 MovB
	return 2; // 0x311 Return
}


func_1038(var_65_int)
{
	var_65_int = 515571; // 0x40e MovI
	return 0; // 0x40f Return
}


func_1040(var_64_int)
{
	var_64_int = 504029; // 0x410 MovI
	return 0; // 0x411 Return
}


func_913(var_147_bool)
{
	var_149_int = 0; var_150_string = ""; // 0x392 PushV
	var_150_string = "ood4BirdmaskHome2"; // 0x393 MovS
	func_726(var_149_int, var_150_string); // 0x394 NEW_2
	var_151_int = 0; // 0x396 PushI
	var_152_bool = var_149_int == var_151_int; // 0x397 Eq
	if(var_152_bool == 0) goto Label_923; // 0x398 JumpB
	var_147_bool = 1; // 0x399 MovB
	return 0; // 0x39a Return
	
Label_923:
	var_147_bool = 0; // 0x39b MovB
	return 0; // 0x39c Return
}


func_1042(var_66_string)
{
	var_66_string = "ui/NPC_bmask.png"; // 0x412 MovS
	return 0; // 0x413 Return
}


func_787(var_30_string, var_31_int)
{
	var_32_string = ""; var_33_string = ""; // 0x313 PushV
	var_33_string = "idle"; // 0x314 MovS
	var_34_int = var_31_int; // 0x315 Push
	if(var_34_int == 0) goto Label_792; // 0x316 JumpB
	var_33_string = var_33_string + var_31_int; // 0x317 Add2
	
Label_792:
	var_30_string = var_33_string; // 0x318 Mov
	return 2; // 0x319 Return
}


func_1044(var_67_string)
{
	var_67_string = "ui/NPC_bmask_b.png"; // 0x414 MovS
	return 0; // 0x415 Return
}


func_661()
{
	var_165_bool = 0; var_166_bool = 0; // 0x295 PushV
	CameraSwitchToNormal(); // 0x296 Func
	var_167_bool = 0; // 0x298 PushV
	func_1046(var_167_bool); // 0x299 NEW_2
	if(var_167_bool == 0) goto Label_669; // 0x29b JumpB
	goto Label_677; // 0x29c Jump
	
Label_677:
	return 2; // 0x2a5 Return
	
Label_669:
	var_168_string = "head"; // 0x29d PushS
	HasAnimationTrack(var_166_bool, var_168_string); // 0x29e Func
	var_169_bool = var_166_bool; // 0x2a0 Push
	if(var_169_bool == 0) goto Label_677; // 0x2a1 JumpB
	var_170_string = "head"; // 0x2a2 PushS
	UnlookAsync(var_170_string); // 0x2a3 Func
}


func_1046(var_59_bool)
{
	var_59_bool = 0; // 0x416 MovB
	return 0; // 0x417 Return
}


func_794(var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0x31a PushV
	var_27_int = 0; // 0x31b MovI
	
Label_796:
	var_29_string = "all"; // 0x31c PushS
	var_30_string = ""; var_31_int = 0; // 0x31d PushV
	var_31_int = var_27_int; // 0x31e Mov
	func_787(var_30_string, var_31_int); // 0x31f NEW_2
	HasAnimation(var_28_bool, var_29_string, var_30_string); // 0x321 Func
	var_35_bool = var_28_bool == 0; // 0x323 Not
	if(var_35_bool == 0) goto Label_806; // 0x324 JumpB
	goto Label_809; // 0x325 Jump
	
Label_809:
	var_24_int = var_27_int; // 0x329 Mov
	return 4; // 0x32a Return
	
Label_806:
	var_36_int = 1; // 0x326 PushI
	var_27_int = var_27_int + var_36_int; // 0x327 Add2
	goto Label_796; // 0x328 Jump
}


func_925(var_134_bool)
{
	var_136_int = 0; var_137_string = ""; // 0x39e PushV
	var_137_string = "d4q02_survived"; // 0x39f MovS
	func_726(var_136_int, var_137_string); // 0x3a0 NEW_2
	var_138_int = 1; // 0x3a2 PushI
	var_139_bool = var_136_int == var_138_int; // 0x3a3 Eq
	if(var_139_bool == 0) goto Label_935; // 0x3a4 JumpB
	var_134_bool = 1; // 0x3a5 MovB
	return 0; // 0x3a6 Return
	
Label_935:
	var_134_bool = 0; // 0x3a7 MovB
	return 0; // 0x3a8 Return
}


func_678(var_118_string)
{
	var_119_bool = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_float = 0; // 0x2a6 PushV
	lshHasAnimation(var_122_bool, var_118_string); // 0x2a7 Func
	var_125_bool = var_122_bool; // 0x2a9 Push
	if(var_125_bool == 0) goto Label_689; // 0x2aa JumpB
	lshGetAnimTimes(var_118_string, var_123_float, var_124_float); // 0x2ab Func
	var_126_bool = 0; // 0x2ad PushB
	lshPlayAnimation(var_123_float, var_124_float, var_126_bool); // 0x2ae Func
	goto Label_693; // 0x2b0 Jump
	
Label_693:
	return 6; // 0x2b5 Return
	
Label_689:
	var_127_string = "Can't find lsh animation : "; // 0x2b1 PushS
	var_128_int = var_127_string + var_118_string; // 0x2b2 Add
	Trace(var_128_int); // 0x2b3 Func
}


func_937()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x3a9 PushV
	var_19_int = 138; // 0x3aa PushI
	var_20_int = 2; // 0x3ab PushI
	var_21_int = 515329; // 0x3ac PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x3ad Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x3af PushV
	var_23_object = var_18_object; // 0x3b0 Mov
	var_24_int = 21; // 0x3b1 MovI
	func_976(var_22_bool, var_23_object, var_24_int); // 0x3b2 NEW_2
	return 2; // 0x3b4 Return
}


func_811()
{
	var_78_string = "playsound"; // 0x32c PushS
	var_79_string = "giveitem"; // 0x32d PushS
	TriggerWorld(var_78_string, var_79_string); // 0x32e Func
	return 0; // 0x330 Return
}


func_817(var_52_object)
{
	var_54_string = "powder is given"; // 0x332 PushS
	Trace(var_54_string); // 0x333 Func
	var_55_object = Obj(); var_56_string = ""; var_57_int = 0; // 0x335 PushV
	var_55_object = var_52_object; // 0x336 Mov
	var_56_string = "powder"; // 0x337 MovS
	var_57_int = 1; // 0x338 MovI
	func_762(var_55_object, var_56_string, var_57_int); // 0x339 NEW_2
	return 0; // 0x33b Return
}


func_694(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x2b6 PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x2b7 Func
	var_106_bool = var_103_bool; // 0x2b9 Push
	if(var_106_bool == 0) goto Label_704; // 0x2ba JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x2bb Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x2bd Func
	goto Label_708; // 0x2bf Jump
	
Label_708:
	return 6; // 0x2c4 Return
	
Label_704:
	var_107_string = "Can't find lsh animation : "; // 0x2c0 PushS
	var_108_int = var_107_string + var_96_string; // 0x2c1 Add
	Trace(var_108_int); // 0x2c2 Func
}


func_950()
{
	var_103_object = Obj(); var_104_object = Obj(); // 0x3b6 PushV
	var_105_int = 94; // 0x3b7 PushI
	var_106_int = 2; // 0x3b8 PushI
	var_107_int = 512176; // 0x3b9 PushI
	CreateDiaryEntry(var_104_object, var_105_int, var_106_int, var_107_int); // 0x3ba Func
	var_108_bool = 0; var_109_object = Obj(); var_110_int = 0; // 0x3bc PushV
	var_109_object = var_104_object; // 0x3bd Mov
	var_110_int = 21; // 0x3be MovI
	func_976(var_108_bool, var_109_object, var_110_int); // 0x3bf NEW_2
	return 2; // 0x3c1 Return
}


func_828()
{
	var_13_string = "ood4BirdmaskHome1"; // 0x33d PushS
	var_14_int = 1; // 0x33e PushI
	SetVariable(var_13_string, var_14_int); // 0x33f Func
	return 0; // 0x341 Return
}


func_192(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0xc1 PushV
	func_1046(var_93_bool); // 0xc2 NEW_2
	var_94_bool = var_93_bool == 0; // 0xc4 Not
	if(var_94_bool == 0) goto Label_199; // 0xc5 JumpB
	return 0; // 0xc6 Return
	
Label_199:
	var_95_bool = var_92_string == var_2_object; // 0xc7 Eq
	if(var_95_bool == 0) goto Label_202; // 0xc8 JumpB
	return 0; // 0xc9 Return
	
Label_202:
	var_96_string = ""; var_97_bool = 0; // 0xca PushV
	var_96_string = var_92_string; // 0xcb Mov
	var_98_string = ""; // 0xcc PushS
	var_99_bool = var_92_string == var_98_string; // 0xcd Eq
	if(var_99_bool == 0) goto Label_209; // 0xce JumpB
	var_97_bool = 0; // 0xcf MovB
	goto Label_210; // 0xd0 Jump
	
Label_210:
	func_694(var_96_string, var_97_bool); // 0xd2 NEW_2
	var_2_object = var_92_string; // 0xd4 TMov
	return 0; // 0xd5 Return
	
Label_209:
	var_97_bool = 1; // 0xd1 MovB
}


func_834()
{
	var_50_string = "ood4BirdmaskHome2"; // 0x343 PushS
	var_51_int = 1; // 0x344 PushI
	SetVariable(var_50_string, var_51_int); // 0x345 Func
	return 0; // 0x347 Return
}


func_963(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x3c3 PushV
	GetDiaryRoot(var_33_object); // 0x3c4 Func
	var_34_bool = var_33_object == 0; // 0x3c6 Not
	if(var_34_bool == 0) goto Label_973; // 0x3c7 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x3c8 PushS
	Trace(var_35_string); // 0x3c9 Func
	var_31_object = 0; // 0x3cb MovB
	return 2; // 0x3cc Return
	
Label_973:
	var_31_object = var_33_object; // 0x3cd Mov
	return 2; // 0x3ce Return
}


func_709()
{
	var_8_bool = 0; // 0x2c5 PushV
	func_1046(var_8_bool); // 0x2c6 NEW_2
	if(var_8_bool == 0) goto Label_715; // 0x2c8 JumpB
	lshStopSpeech(); // 0x2c9 Func
	
Label_715:
	return 0; // 0x2cb Return
}


func_581(var_49_bool)
{
	var_49_bool = 1; // 0x245 MovB
	return 0; // 0x246 Return
}


func_583()
{
	StopAnimation(); // 0x247 Func
	StopGroup0(); // 0x249 Func
	return 0; // 0x24b Return
}


func_840()
{
	var_82_object = Obj(); var_83_object = Obj(); var_84_object = Obj(); var_85_object = Obj(); // 0x348 PushV
	var_86_object = Obj(); // 0x349 PushV
	func_1004(var_86_object); // 0x34a NEW_2
	var_84_object = var_86_object; // 0x34b Mov
	var_93_string = "d4q02BirdmaskNearHome"; // 0x34d PushS
	FindMark(var_85_object, var_93_string); // 0x34e ObjFunc
	var_94_object = var_85_object; // 0x350 Push
	if(var_94_object == 0) goto Label_852; // 0x351 JumpB
	Remove(); // 0x352 ObjFunc
	
Label_852:
	var_95_string = "d4q02MladVladGotoAJLSelf"; // 0x354 PushS
	FindMark(var_85_object, var_95_string); // 0x355 ObjFunc
	var_96_object = var_85_object; // 0x357 Push
	if(var_96_object == 0) goto Label_859; // 0x358 JumpB
	Remove(); // 0x359 ObjFunc
	
Label_859:
	var_97_string = "d4q02MladVladGotoAnna"; // 0x35b PushS
	FindMark(var_85_object, var_97_string); // 0x35c ObjFunc
	var_98_object = var_85_object; // 0x35e Push
	if(var_98_object == 0) goto Label_866; // 0x35f JumpB
	Remove(); // 0x360 ObjFunc
	
Label_866:
	var_99_string = "d4q02MladVladGotoJulia"; // 0x362 PushS
	FindMark(var_85_object, var_99_string); // 0x363 ObjFunc
	var_100_object = var_85_object; // 0x365 Push
	if(var_100_object == 0) goto Label_873; // 0x366 JumpB
	Remove(); // 0x367 ObjFunc
	
Label_873:
	var_101_string = "d4q02MladVladGotoLara"; // 0x369 PushS
	FindMark(var_85_object, var_101_string); // 0x36a ObjFunc
	var_102_object = var_85_object; // 0x36c Push
	if(var_102_object == 0) goto Label_880; // 0x36d JumpB
	Remove(); // 0x36e ObjFunc
	
Label_880:
	func_950(); // 0x371 NEW_2
	var_111_bool = 0; var_112_string = ""; var_113_string = ""; // 0x373 PushV
	var_112_string = "quest_d4_02"; // 0x374 MovS
	var_113_string = "completed"; // 0x375 MovS
	func_775(var_111_bool, var_112_string, var_113_string); // 0x376 NEW_2
	return 4; // 0x378 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_77_object, var_78_object)
{
	var_0_object = var_78_object; // 0x4b TMov
	var_1_object = var_77_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_83_int = 1; // 0x4e PushI
	if(var_83_int == 0) goto Label_162; // 0x4f JumpB
	var_84_bool = 0; var_85_object = Obj(); // 0x50 PushV
	var_85_object = var_1_object; // 0x51 MovT
	func_901(var_85_object); // 0x52 NEW_2
	if(var_84_bool == 0) goto Label_105; // 0x54 JumpB
	var_92_string = ""; // 0x55 PushV
	var_92_string = "Neutral"; // 0x56 MovS
	func_192(var_78_object, var_92_string); // 0x57 NEW_2
	var_109_int = 511843; // 0x59 PushI
	SetMessage(var_109_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_110_int = 511844; // 0x5e PushI
	var_111_int = 13058; // 0x5f PushI
	var_112_int = 13057; // 0x60 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x61 TObjFunc
	var_113_int = 536103; // 0x63 PushI
	var_114_int = 37857; // 0x64 PushI
	var_115_int = 37856; // 0x65 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x66 TObjFunc
	goto Label_162; // 0x68 Jump
	
Label_162:
	var_116_bool = 0; // 0xa2 PushV
	func_1046(var_116_bool); // 0xa3 NEW_2
	if(var_116_bool == 0) goto Label_177; // 0xa5 JumpB
	
Label_166:
	lshWaitForAnimEnd(); // 0xa6 Func
	var_117_string = var_3_string; // 0xa8 PushT
	if(var_117_string == 0) goto Label_171; // 0xa9 JumpB
	goto Label_176; // 0xaa Jump
	
Label_176:
	goto Label_191; // 0xb0 Jump
	
Label_191:
	return 0; // 0xbf Return
	
Label_171:
	var_118_string = ""; // 0xab PushV
	var_118_string = var_2_object; // 0xac MovT
	func_678(var_118_string); // 0xad NEW_2
	goto Label_166; // 0xaf Jump
	
Label_177:
	var_129_string = "all"; // 0xb1 PushS
	var_130_string = "idle"; // 0xb2 PushS
	PlayAnimation(var_129_string, var_130_string); // 0xb3 Func
	
Label_181:
	WaitForAnimEnd(); // 0xb5 Func
	var_131_string = var_3_string; // 0xb7 PushT
	if(var_131_string == 0) goto Label_186; // 0xb8 JumpB
	goto Label_191; // 0xb9 Jump
	
Label_186:
	var_132_string = "all"; // 0xba PushS
	var_133_string = "idle"; // 0xbb PushS
	PlayAnimation(var_132_string, var_133_string); // 0xbc Func
	goto Label_181; // 0xbe Jump
	
Label_105:
	var_134_bool = 0; var_135_object = Obj(); // 0x69 PushV
	var_135_object = var_1_object; // 0x6a MovT
	func_925(var_135_object); // 0x6b NEW_2
	var_140_bool = var_134_bool == 0; // 0x6d Not
	if(var_140_bool == 0) goto Label_126; // 0x6e JumpB
	var_141_string = ""; // 0x6f PushV
	var_141_string = "Neutral"; // 0x70 MovS
	func_192(var_78_object, var_141_string); // 0x71 NEW_2
	var_142_int = 511847; // 0x73 PushI
	SetMessage(var_142_int); // 0x74 TObjFunc
	ClearReplies(); // 0x76 TObjFunc
	var_143_int = 511848; // 0x78 PushI
	var_144_int = -1; // 0x79 PushI
	var_145_int = 13061; // 0x7a PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x7b TObjFunc
	goto Label_162; // 0x7d Jump
	
Label_126:
	var_146_bool = 0; // 0x7e PushV
	var_146_bool = 0; // 0x7f MovB
	var_147_bool = 0; var_148_object = Obj(); // 0x80 PushV
	var_148_object = var_1_object; // 0x81 MovT
	func_913(var_148_object); // 0x82 NEW_2
	if(var_147_bool == 0) goto Label_139; // 0x84 JumpB
	var_153_bool = 0; var_154_object = Obj(); // 0x85 PushV
	var_154_object = var_1_object; // 0x86 MovT
	func_925(var_154_object); // 0x87 NEW_2
	if(var_153_bool == 0) goto Label_139; // 0x89 JumpB
	var_146_bool = 1; // 0x8a MovB
	
Label_139:
	if(var_146_bool == 0) goto Label_160; // 0x8b JumpB
	var_155_string = ""; // 0x8c PushV
	var_155_string = "Neutral"; // 0x8d MovS
	func_192(var_78_object, var_155_string); // 0x8e NEW_2
	var_156_int = 511849; // 0x90 PushI
	SetMessage(var_156_int); // 0x91 TObjFunc
	ClearReplies(); // 0x93 TObjFunc
	var_157_int = 536115; // 0x95 PushI
	var_158_int = 13064; // 0x96 PushI
	var_159_int = 37870; // 0x97 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x98 TObjFunc
	var_160_int = 511850; // 0x9a PushI
	var_161_int = 13064; // 0x9b PushI
	var_162_int = 13063; // 0x9c PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x9d TObjFunc
	goto Label_162; // 0x9f Jump
	
Label_160:
	return 0; // 0xa0 Return
}


func_588(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0; // 0x24c PushV
	IsLoaded(var_22_bool); // 0x24d Func
	var_20_bool = var_22_bool; // 0x24f Mov
	return 2; // 0x250 Return
}


func_716(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0; // 0x2cc PushV
	var_49_int = var_45_cvector | var_45_cvector; // 0x2cd Or
	var_48_float = sqrt(var_49_int); // 0x2ce Sqrt2
	var_50_float = 0.0; // 0x2cf PushF
	var_51_bool = var_48_float < var_50_float; // 0x2d0 LT
	if(var_51_bool == 0) goto Label_724; // 0x2d1 JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x2d2 MovV
	return 2; // 0x2d3 Return
	
Label_724:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x2d4 Div2
	return 2; // 0x2d5 Return
}


func_976(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x3d0 PushV
	var_31_object = Obj(); // 0x3d1 PushV
	func_963(var_31_object); // 0x3d2 NEW_2
	var_28_object = var_31_object; // 0x3d3 Mov
	Find(var_24_int, var_29_object); // 0x3d5 ObjFunc
	var_36_bool = var_29_object == 0; // 0x3d7 Not
	if(var_36_bool == 0) goto Label_991; // 0x3d8 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x3d9 PushS
	var_38_int = var_37_string + var_24_int; // 0x3da Add
	Trace(var_38_int); // 0x3db Func
	var_22_bool = 0; // 0x3dd MovB
	return 6; // 0x3de Return
	
Label_991:
	AddChild(var_23_object); // 0x3df ObjFunc
	var_39_int = 7; // 0x3e1 PushI
	SendWorldWndMessage(var_39_int); // 0x3e2 Func
	GetCategory(var_30_int); // 0x3e4 ObjFunc
	SetDiarySection(var_30_int); // 0x3e6 Func
	var_22_bool = 0; // 0x3e8 MovB
	return 6; // 0x3e9 Return
}


func_593(var_17_bool, var_19_float)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; // 0x251 PushV
	GetPosition(var_30_cvector); // 0x252 ObjFunc
	GetEyesHeight(var_29_float); // 0x254 ObjFunc
	var_38_float = GetByIndex(var_30_cvector, 1); // 0x256 PushE
	var_38_float = var_38_float + var_29_float; // 0x257 Add2
	SetByIndex(var_30_cvector, 1) = var_38_float; // 0x258 PopE
	GetPosition(var_31_cvector); // 0x259 Func
	GetEyesHeight(var_29_float); // 0x25b Func
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x25d PushE
	var_39_float = var_39_float + var_29_float; // 0x25e Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x25f PopE
	var_32_cvector = var_30_cvector - var_31_cvector; // 0x260 Sub2
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x261 PushE
	var_40_float = 0; // 0x262 MovI
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x263 PopE
	var_41_int = var_32_cvector | var_32_cvector; // 0x264 Or
	var_42_float = sqrt(var_41_int); // 0x265 Sqrt
	var_32_cvector = var_32_cvector / var_32_cvector; // 0x266 Div2
	var_33_cvector = -var_32_cvector; // 0x267 Neg2
	var_43_float = var_32_cvector * var_19_float; // 0x268 Mult
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x269 PushV
	var_46_cvector = CVector(0.0, 1.0, 0.0); // 0x26a PushVec
	var_45_cvector = var_33_cvector ^ var_46_cvector; // 0x26b Xor2
	func_716(var_44_cvector, var_45_cvector); // 0x26c NEW_2
	var_52_int = 25; // 0x26e PushI
	var_53_float = var_44_cvector * var_52_int; // 0x26f Mult
	var_54_int = var_43_float + var_53_float; // 0x270 Add
	var_55_cvector = CVector(0.0, 10.0, 0.0); // 0x271 PushVec
	var_34_cvector = var_54_int - var_55_cvector; // 0x272 Sub2
	var_35_cvector = var_31_cvector + var_34_cvector; // 0x273 Add2
	IsOverrideActive(var_36_bool); // 0x274 Func
	var_56_bool = var_36_bool; // 0x276 Push
	if(var_56_bool == 0) goto Label_634; // 0x277 JumpB
	var_17_bool = 0; // 0x278 MovB
	return 18; // 0x279 Return
	
Label_634:
	StopWorld(); // 0x27a Func
	CameraTransit(var_35_cvector, var_33_cvector); // 0x27c Func
	var_57_float = GetByIndex(var_34_cvector, 0); // 0x27e PushE
	var_58_float = GetByIndex(var_34_cvector, 2); // 0x27f PushE
	Rotate(var_57_float, var_58_float); // 0x280 Func
	var_59_bool = 0; // 0x282 PushV
	func_1046(var_59_bool); // 0x283 NEW_2
	if(var_59_bool == 0) goto Label_647; // 0x285 JumpB
	goto Label_655; // 0x286 Jump
	
Label_655:
	CameraWaitForPlayFinish(); // 0x28f Func
	ResumeWorld(); // 0x291 Func
	var_17_bool = 1; // 0x293 MovB
	return 18; // 0x294 Return
	
Label_647:
	var_60_string = "head"; // 0x287 PushS
	HasAnimationTrack(var_37_bool, var_60_string); // 0x288 Func
	var_61_bool = var_37_bool; // 0x28a Push
	if(var_61_bool == 0) goto Label_655; // 0x28b JumpB
	var_62_string = "head"; // 0x28c PushS
	LookAsyncCamera(var_62_string); // 0x28d Func
}


func_726(var_86_int, var_87_string)
{
	var_88_int = 0; var_89_int = 0; // 0x2d6 PushV
	GetVariable(var_87_string, var_89_int); // 0x2d7 Func
	var_86_int = var_89_int; // 0x2d9 Mov
	return 2; // 0x2da Return
}


func_731(var_71_int, var_72_int)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x2db PushV
	CreateIntVector(var_74_object); // 0x2dc Func
	add(var_71_int); // 0x2de ObjFunc
	add(var_72_int); // 0x2e0 ObjFunc
	var_75_int = 3; // 0x2e2 PushI
	SendWorldWndMessage(var_75_int, var_74_object); // 0x2e3 Func
	return 2; // 0x2e5 Return
}


func_743(var_61_object, var_62_int)
{
	var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_int = 0; var_68_bool = 0; // 0x2e7 PushV
	GetItemID(var_66_int); // 0x2e8 ObjFunc
	var_69_string = "Category"; // 0x2ea PushS
	GetInvItemProperty(var_67_int, var_66_int, var_69_string); // 0x2eb Func
	AddItem(var_68_bool, var_61_object, var_67_int, var_62_int); // 0x2ed ObjFunc
	var_70_bool = var_68_bool == 0; // 0x2ef Not
	if(var_70_bool == 0) goto Label_756; // 0x2f0 JumpB
	DropItems(var_61_object, var_62_int); // 0x2f1 ObjFunc
	goto Label_761; // 0x2f3 Jump
	
Label_761:
	return 6; // 0x2f9 Return
	
Label_756:
	var_71_int = 0; var_72_int = 0; // 0x2f4 PushV
	var_71_int = var_66_int; // 0x2f5 Mov
	var_72_int = var_62_int; // 0x2f6 Mov
	func_731(var_71_int, var_72_int); // 0x2f7 NEW_2
}


func_1004(var_86_object)
{
	var_87_object = Obj(); var_88_object = Obj(); var_89_object = Obj(); var_90_object = Obj(); // 0x3ec PushV
	GetMainOutdoorScene(var_89_object); // 0x3ed Func
	var_91_bool = var_89_object == 0; // 0x3ef NullEq
	if(var_91_bool == 0) goto Label_1015; // 0x3f0 JumpB
	var_92_string = "Can't find main outdoor scene"; // 0x3f1 PushS
	Trace(var_92_string); // 0x3f2 Func
	var_90_object = 0; // 0x3f4 SetNull
	var_86_object = var_90_object; // 0x3f5 Mov
	return 4; // 0x3f6 Return
	
Label_1015:
	GetMap(var_90_object); // 0x3f7 ObjFunc
	var_86_object = var_90_object; // 0x3f9 Mov
	return 4; // 0x3fa Return
}


func_502()
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_bool = 0; var_11_float = 0; var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_bool = 0; var_18_float = 0; var_19_bool = 0; // 0x1f6 PushV
	WaitForAnimEnd(); // 0x1f7 Func
	var_20_bool = 0; // 0x1f9 PushV
	func_588(var_20_bool); // 0x1fa NEW_2
	var_23_bool = var_20_bool == 0; // 0x1fc Not
	if(var_23_bool == 0) goto Label_511; // 0x1fd JumpB
	return 14; // 0x1fe Return
	
Label_511:
	var_24_int = 0; // 0x1ff PushV
	func_794(var_24_int); // 0x200 NEW_2
	var_13_int = var_24_int; // 0x201 Mov
	var_14_int = 0; // 0x203 MovI
	
Label_516:
	var_37_bool = 0; // 0x204 PushV
	var_37_bool = 0; // 0x205 MovB
	var_38_int = 5; // 0x206 PushI
	var_39_bool = var_14_int < var_38_int; // 0x207 LT
	if(var_39_bool == 0) goto Label_526; // 0x208 JumpB
	var_40_bool = 0; // 0x209 PushV
	func_588(var_40_bool); // 0x20a NEW_2
	if(var_40_bool == 0) goto Label_526; // 0x20c JumpB
	var_37_bool = 1; // 0x20d MovB
	
Label_526:
	if(var_37_bool == 0) goto Label_578; // 0x20e JumpB
	var_41_int = 3; // 0x20f PushI
	irand(var_15_int, var_41_int); // 0x210 Func
	var_42_int = 0; // 0x212 PushI
	var_43_bool = var_15_int == var_42_int; // 0x213 Eq
	if(var_43_bool == 0) goto Label_550; // 0x214 JumpB
	var_44_int = var_13_int; // 0x215 Push
	if(var_44_int == 0) goto Label_549; // 0x216 JumpB
	irand(var_16_int, var_13_int); // 0x217 Func
	var_45_string = "all"; // 0x219 PushS
	var_46_string = ""; var_47_int = 0; // 0x21a PushV
	var_47_int = var_16_int; // 0x21b Mov
	func_787(var_46_string, var_47_int); // 0x21c NEW_2
	PlayAnimation(var_45_string, var_46_string); // 0x21e Func
	WaitForAnimEnd(var_17_bool); // 0x220 Func
	var_48_bool = var_17_bool == 0; // 0x222 Not
	if(var_48_bool == 0) goto Label_549; // 0x223 JumpB
	goto Label_578; // 0x224 Jump
	
Label_578:
	ResetAAS(); // 0x242 Func
	return 14; // 0x244 Return
	
Label_549:
	goto Label_567; // 0x225 Jump
	
Label_567:
	var_49_bool = 0; // 0x237 PushV
	func_581(var_49_bool); // 0x238 NEW_2
	var_50_bool = var_49_bool == 0; // 0x23a Not
	if(var_50_bool == 0) goto Label_573; // 0x23b JumpB
	goto Label_578; // 0x23c Jump
	
Label_573:
	ResetAAS(); // 0x23d Func
	var_51_int = 1; // 0x23f PushI
	var_14_int = var_14_int + var_51_int; // 0x240 Add2
	goto Label_516; // 0x241 Jump
	
Label_550:
	var_52_int = 1; // 0x226 PushI
	var_53_bool = var_15_int == var_52_int; // 0x227 Eq
	if(var_53_bool == 0) goto Label_564; // 0x228 JumpB
	var_54_int = 4; // 0x229 PushI
	rand(var_18_float, var_54_int); // 0x22a Func
	var_55_int = 1; // 0x22c PushI
	var_56_int = var_18_float + var_55_int; // 0x22d Add
	Sleep(var_56_int, var_19_bool); // 0x22e Func
	var_57_bool = var_19_bool == 0; // 0x230 Not
	if(var_57_bool == 0) goto Label_563; // 0x231 JumpB
	goto Label_578; // 0x232 Jump
	
Label_563:
	goto Label_567; // 0x233 Jump
	
Label_564:
	var_58_int = var_14_int; // 0x234 Push
	if(var_58_int == 0) goto Label_567; // 0x235 JumpB
	goto Label_578; // 0x236 Jump
}


func_762(var_55_object, var_56_string, var_57_int)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x2fa PushV
	CreateInvItem(var_59_object); // 0x2fb Func
	SetItemName(var_56_string); // 0x2fd ObjFunc
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; // 0x2ff PushV
	var_60_object = var_55_object; // 0x300 Mov
	var_61_object = var_59_object; // 0x301 Mov
	var_62_int = var_57_int; // 0x302 Mov
	func_743(var_61_object, var_62_int); // 0x303 NEW_2
	return 2; // 0x305 Return
}


func_891()
{
	func_937(); // 0x37d NEW_2
	var_40_bool = 0; var_41_string = ""; var_42_string = ""; // 0x37f PushV
	var_41_string = "quest_d4_02"; // 0x380 MovS
	var_42_string = "birdmask_talk"; // 0x381 MovS
	func_775(var_40_bool, var_41_string, var_42_string); // 0x382 NEW_2
	return 0; // 0x384 Return
}


func_1021(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x3fd PushV
	var_71_string = "branch"; // 0x3fe PushS
	GetVariable(var_71_string, var_70_int); // 0x3ff Func
	var_72_int = 0; // 0x401 PushI
	var_73_bool = var_70_int == var_72_int; // 0x402 Eq
	if(var_73_bool == 0) goto Label_1031; // 0x403 JumpB
	var_68_int = 1; // 0x404 MovI
	return 2; // 0x405 Return
	
Label_1031:
	var_74_int = 1; // 0x407 PushI
	var_75_bool = var_70_int == var_74_int; // 0x408 Eq
	if(var_75_bool == 0) goto Label_1036; // 0x409 JumpB
	var_68_int = 2; // 0x40a MovI
	return 2; // 0x40b Return
	
Label_1036:
	var_68_int = 3; // 0x40c MovI
	return 2; // 0x40d Return
}


