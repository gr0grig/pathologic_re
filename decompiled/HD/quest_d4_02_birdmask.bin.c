task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xd7 PushI
	if(var_7_int == 0) goto Label_482; // 0xd8 JumpB
	func_711(); // 0xda NEW_2
	var_9_int = 13059; // 0xdc PushI
	var_10_bool = var_6_int == var_9_int; // 0xdd Eq
	if(var_10_bool == 0) goto Label_233; // 0xde JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xdf PushV
	var_11_object = var_1_object; // 0xe0 MovT
	var_12_object = var_0_object; // 0xe1 MovT
	func_830(); // 0xe2 NEW_2
	var_15_object = Obj(); var_16_object = Obj(); // 0xe4 PushV
	var_15_object = var_1_object; // 0xe5 MovT
	var_16_object = var_0_object; // 0xe6 MovT
	func_893(); // 0xe7 NEW_2
	
Label_233:
	var_46_int = 13065; // 0xe9 PushI
	var_47_bool = var_6_int == var_46_int; // 0xea Eq
	if(var_47_bool == 0) goto Label_256; // 0xeb JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0xec PushV
	var_48_object = var_1_object; // 0xed MovT
	var_49_object = var_0_object; // 0xee MovT
	func_836(); // 0xef NEW_2
	var_52_object = Obj(); var_53_object = Obj(); // 0xf1 PushV
	var_52_object = var_1_object; // 0xf2 MovT
	var_53_object = var_0_object; // 0xf3 MovT
	func_819(var_53_object); // 0xf4 NEW_2
	var_76_object = Obj(); var_77_object = Obj(); // 0xf6 PushV
	var_76_object = var_1_object; // 0xf7 MovT
	var_77_object = var_0_object; // 0xf8 MovT
	func_813(); // 0xf9 NEW_2
	var_80_object = Obj(); var_81_object = Obj(); // 0xfb PushV
	var_80_object = var_1_object; // 0xfc MovT
	var_81_object = var_0_object; // 0xfd MovT
	func_842(); // 0xfe NEW_2
	
Label_256:
	var_114_int = 13056; // 0x100 PushI
	var_115_bool = var_5_int == var_114_int; // 0x101 Eq
	if(var_115_bool == 0) goto Label_339; // 0x102 JumpB
	var_116_bool = 0; var_117_object = Obj(); // 0x103 PushV
	var_117_object = var_1_object; // 0x104 MovT
	func_903(var_117_object); // 0x105 NEW_2
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
	func_927(var_149_object); // 0x11e NEW_2
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
	func_915(var_162_object); // 0x135 NEW_2
	if(var_161_bool == 0) goto Label_318; // 0x137 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0x138 PushV
	var_168_object = var_1_object; // 0x139 MovT
	func_927(var_168_object); // 0x13a NEW_2
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
	func_1048(var_229_bool); // 0x1d8 NEW_2
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
	var_64_bool = var_17_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_6_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_13_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1042(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1040(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1044(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1046(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_1023(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_15_int = -1; // 0x26 MovI
	IsOverrideActive(var_14_bool); // 0x27 Func
	var_77_bool = var_14_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_6_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_13_object); // 0x2d Func
	var_78_object = Obj(); var_79_object = Obj(); // 0x2f PushV
	var_78_object = var_7_object; // 0x30 Mov
	var_79_object = var_13_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_16_bool); // 0x36 ObjFunc
	
Label_56:
	var_164_bool = var_16_bool == 0; // 0x38 Not
	if(var_164_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_16_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_165_object = Obj(); // 0x3f PushV
	var_165_object = var_7_object; // 0x40 Mov
	func_662(); // 0x41 NEW_2
	StopDialog(var_13_object); // 0x43 Func
	GetReturnValue(var_15_int); // 0x45 ObjFunc
	var_6_int = var_15_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_903(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x388 PushV
	var_88_string = "ood4BirdmaskHome1"; // 0x389 MovS
	func_728(var_87_int, var_88_string); // 0x38a NEW_2
	var_91_int = 0; // 0x38c PushI
	var_92_bool = var_87_int == var_91_int; // 0x38d Eq
	if(var_92_bool == 0) goto Label_913; // 0x38e JumpB
	var_85_bool = 1; // 0x38f MovB
	return 0; // 0x390 Return
	
Label_913:
	var_85_bool = 0; // 0x391 MovB
	return 0; // 0x392 Return
}


func_777(var_40_bool, var_41_string, var_42_string)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x309 PushV
	FindActor(var_44_object, var_41_string); // 0x30a Func
	var_45_bool = var_44_object == 0; // 0x30c NullEq
	if(var_45_bool == 0) goto Label_784; // 0x30d JumpB
	var_40_bool = 0; // 0x30e MovB
	return 2; // 0x30f Return
	
Label_784:
	Trigger(var_44_object, var_42_string); // 0x310 Func
	var_40_bool = 1; // 0x312 MovB
	return 2; // 0x313 Return
}


func_1040(var_66_int)
{
	var_66_int = 515571; // 0x410 MovI
	return 0; // 0x411 Return
}


func_1042(var_65_int)
{
	var_65_int = 504029; // 0x412 MovI
	return 0; // 0x413 Return
}


func_915(var_148_bool)
{
	var_150_int = 0; var_151_string = ""; // 0x394 PushV
	var_151_string = "ood4BirdmaskHome2"; // 0x395 MovS
	func_728(var_150_int, var_151_string); // 0x396 NEW_2
	var_152_int = 0; // 0x398 PushI
	var_153_bool = var_150_int == var_152_int; // 0x399 Eq
	if(var_153_bool == 0) goto Label_925; // 0x39a JumpB
	var_148_bool = 1; // 0x39b MovB
	return 0; // 0x39c Return
	
Label_925:
	var_148_bool = 0; // 0x39d MovB
	return 0; // 0x39e Return
}


func_1044(var_67_string)
{
	var_67_string = "ui/NPC_bmask.png"; // 0x414 MovS
	return 0; // 0x415 Return
}


func_789(var_30_string, var_31_int)
{
	var_32_string = ""; var_33_string = ""; // 0x315 PushV
	var_33_string = "idle"; // 0x316 MovS
	var_34_int = var_31_int; // 0x317 Push
	if(var_34_int == 0) goto Label_794; // 0x318 JumpB
	var_33_string = var_33_string + var_31_int; // 0x319 Add2
	
Label_794:
	var_30_string = var_33_string; // 0x31a Mov
	return 2; // 0x31b Return
}


func_1046(var_68_string)
{
	var_68_string = "ui/NPC_bmask_b.png"; // 0x416 MovS
	return 0; // 0x417 Return
}


func_662()
{
	var_166_bool = 0; var_167_bool = 0; // 0x296 PushV
	var_168_bool = 1; // 0x297 PushB
	CameraSwitchToNormal(var_168_bool); // 0x298 Func
	var_169_bool = 0; // 0x29a PushV
	func_1048(var_169_bool); // 0x29b NEW_2
	if(var_169_bool == 0) goto Label_671; // 0x29d JumpB
	goto Label_679; // 0x29e Jump
	
Label_679:
	return 2; // 0x2a7 Return
	
Label_671:
	var_170_string = "head"; // 0x29f PushS
	HasAnimationTrack(var_167_bool, var_170_string); // 0x2a0 Func
	var_171_bool = var_167_bool; // 0x2a2 Push
	if(var_171_bool == 0) goto Label_679; // 0x2a3 JumpB
	var_172_string = "head"; // 0x2a4 PushS
	UnlookAsync(var_172_string); // 0x2a5 Func
}


func_1048(var_60_bool)
{
	var_60_bool = 0; // 0x418 MovB
	return 0; // 0x419 Return
}


func_796(var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0x31c PushV
	var_27_int = 0; // 0x31d MovI
	
Label_798:
	var_29_string = "all"; // 0x31e PushS
	var_30_string = ""; var_31_int = 0; // 0x31f PushV
	var_31_int = var_27_int; // 0x320 Mov
	func_789(var_30_string, var_31_int); // 0x321 NEW_2
	HasAnimation(var_28_bool, var_29_string, var_30_string); // 0x323 Func
	var_35_bool = var_28_bool == 0; // 0x325 Not
	if(var_35_bool == 0) goto Label_808; // 0x326 JumpB
	goto Label_811; // 0x327 Jump
	
Label_811:
	var_24_int = var_27_int; // 0x32b Mov
	return 4; // 0x32c Return
	
Label_808:
	var_36_int = 1; // 0x328 PushI
	var_27_int = var_27_int + var_36_int; // 0x329 Add2
	goto Label_798; // 0x32a Jump
}


func_927(var_135_bool)
{
	var_137_int = 0; var_138_string = ""; // 0x3a0 PushV
	var_138_string = "d4q02_survived"; // 0x3a1 MovS
	func_728(var_137_int, var_138_string); // 0x3a2 NEW_2
	var_139_int = 1; // 0x3a4 PushI
	var_140_bool = var_137_int == var_139_int; // 0x3a5 Eq
	if(var_140_bool == 0) goto Label_937; // 0x3a6 JumpB
	var_135_bool = 1; // 0x3a7 MovB
	return 0; // 0x3a8 Return
	
Label_937:
	var_135_bool = 0; // 0x3a9 MovB
	return 0; // 0x3aa Return
}


func_680(var_119_string)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0; // 0x2a8 PushV
	lshHasAnimation(var_123_bool, var_119_string); // 0x2a9 Func
	var_126_bool = var_123_bool; // 0x2ab Push
	if(var_126_bool == 0) goto Label_691; // 0x2ac JumpB
	lshGetAnimTimes(var_119_string, var_124_float, var_125_float); // 0x2ad Func
	var_127_bool = 0; // 0x2af PushB
	lshPlayAnimation(var_124_float, var_125_float, var_127_bool); // 0x2b0 Func
	goto Label_695; // 0x2b2 Jump
	
Label_695:
	return 6; // 0x2b7 Return
	
Label_691:
	var_128_string = "Can't find lsh animation : "; // 0x2b3 PushS
	var_129_int = var_128_string + var_119_string; // 0x2b4 Add
	Trace(var_129_int); // 0x2b5 Func
}


func_939()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x3ab PushV
	var_19_int = 138; // 0x3ac PushI
	var_20_int = 2; // 0x3ad PushI
	var_21_int = 515329; // 0x3ae PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x3af Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x3b1 PushV
	var_23_object = var_18_object; // 0x3b2 Mov
	var_24_int = 21; // 0x3b3 MovI
	func_978(var_22_bool, var_23_object, var_24_int); // 0x3b4 NEW_2
	return 2; // 0x3b6 Return
}


func_813()
{
	var_78_string = "playsound"; // 0x32e PushS
	var_79_string = "giveitem"; // 0x32f PushS
	TriggerWorld(var_78_string, var_79_string); // 0x330 Func
	return 0; // 0x332 Return
}


func_819(var_52_object)
{
	var_54_string = "powder is given"; // 0x334 PushS
	Trace(var_54_string); // 0x335 Func
	var_55_object = Obj(); var_56_string = ""; var_57_int = 0; // 0x337 PushV
	var_55_object = var_52_object; // 0x338 Mov
	var_56_string = "powder"; // 0x339 MovS
	var_57_int = 1; // 0x33a MovI
	func_764(var_55_object, var_56_string, var_57_int); // 0x33b NEW_2
	return 0; // 0x33d Return
}


func_696(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x2b8 PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x2b9 Func
	var_107_bool = var_104_bool; // 0x2bb Push
	if(var_107_bool == 0) goto Label_706; // 0x2bc JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x2bd Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x2bf Func
	goto Label_710; // 0x2c1 Jump
	
Label_710:
	return 6; // 0x2c6 Return
	
Label_706:
	var_108_string = "Can't find lsh animation : "; // 0x2c2 PushS
	var_109_int = var_108_string + var_97_string; // 0x2c3 Add
	Trace(var_109_int); // 0x2c4 Func
}


func_952()
{
	var_103_object = Obj(); var_104_object = Obj(); // 0x3b8 PushV
	var_105_int = 94; // 0x3b9 PushI
	var_106_int = 2; // 0x3ba PushI
	var_107_int = 512176; // 0x3bb PushI
	CreateDiaryEntry(var_104_object, var_105_int, var_106_int, var_107_int); // 0x3bc Func
	var_108_bool = 0; var_109_object = Obj(); var_110_int = 0; // 0x3be PushV
	var_109_object = var_104_object; // 0x3bf Mov
	var_110_int = 21; // 0x3c0 MovI
	func_978(var_108_bool, var_109_object, var_110_int); // 0x3c1 NEW_2
	return 2; // 0x3c3 Return
}


func_830()
{
	var_13_string = "ood4BirdmaskHome1"; // 0x33f PushS
	var_14_int = 1; // 0x340 PushI
	SetVariable(var_13_string, var_14_int); // 0x341 Func
	return 0; // 0x343 Return
}


func_192(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0xc1 PushV
	func_1048(var_94_bool); // 0xc2 NEW_2
	var_95_bool = var_94_bool == 0; // 0xc4 Not
	if(var_95_bool == 0) goto Label_199; // 0xc5 JumpB
	return 0; // 0xc6 Return
	
Label_199:
	var_96_bool = var_93_string == var_2_object; // 0xc7 Eq
	if(var_96_bool == 0) goto Label_202; // 0xc8 JumpB
	return 0; // 0xc9 Return
	
Label_202:
	var_97_string = ""; var_98_bool = 0; // 0xca PushV
	var_97_string = var_93_string; // 0xcb Mov
	var_99_string = ""; // 0xcc PushS
	var_100_bool = var_93_string == var_99_string; // 0xcd Eq
	if(var_100_bool == 0) goto Label_209; // 0xce JumpB
	var_98_bool = 0; // 0xcf MovB
	goto Label_210; // 0xd0 Jump
	
Label_210:
	func_696(var_97_string, var_98_bool); // 0xd2 NEW_2
	var_2_object = var_93_string; // 0xd4 TMov
	return 0; // 0xd5 Return
	
Label_209:
	var_98_bool = 1; // 0xd1 MovB
}


func_836()
{
	var_50_string = "ood4BirdmaskHome2"; // 0x345 PushS
	var_51_int = 1; // 0x346 PushI
	SetVariable(var_50_string, var_51_int); // 0x347 Func
	return 0; // 0x349 Return
}


func_581(var_49_bool)
{
	var_49_bool = 1; // 0x245 MovB
	return 0; // 0x246 Return
}


func_965(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x3c5 PushV
	GetDiaryRoot(var_33_object); // 0x3c6 Func
	var_34_bool = var_33_object == 0; // 0x3c8 Not
	if(var_34_bool == 0) goto Label_975; // 0x3c9 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x3ca PushS
	Trace(var_35_string); // 0x3cb Func
	var_31_object = 0; // 0x3cd MovB
	return 2; // 0x3ce Return
	
Label_975:
	var_31_object = var_33_object; // 0x3cf Mov
	return 2; // 0x3d0 Return
}


func_711()
{
	var_8_bool = 0; // 0x2c7 PushV
	func_1048(var_8_bool); // 0x2c8 NEW_2
	if(var_8_bool == 0) goto Label_717; // 0x2ca JumpB
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


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object; // 0x4b TMov
	var_1_object = var_78_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_84_int = 1; // 0x4e PushI
	if(var_84_int == 0) goto Label_162; // 0x4f JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x50 PushV
	var_86_object = var_1_object; // 0x51 MovT
	func_903(var_86_object); // 0x52 NEW_2
	if(var_85_bool == 0) goto Label_105; // 0x54 JumpB
	var_93_string = ""; // 0x55 PushV
	var_93_string = "Neutral"; // 0x56 MovS
	func_192(var_79_object, var_93_string); // 0x57 NEW_2
	var_110_int = 511843; // 0x59 PushI
	SetMessage(var_110_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_111_int = 511844; // 0x5e PushI
	var_112_int = 13058; // 0x5f PushI
	var_113_int = 13057; // 0x60 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x61 TObjFunc
	var_114_int = 536103; // 0x63 PushI
	var_115_int = 37857; // 0x64 PushI
	var_116_int = 37856; // 0x65 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x66 TObjFunc
	goto Label_162; // 0x68 Jump
	
Label_162:
	var_117_bool = 0; // 0xa2 PushV
	func_1048(var_117_bool); // 0xa3 NEW_2
	if(var_117_bool == 0) goto Label_177; // 0xa5 JumpB
	
Label_166:
	lshWaitForAnimEnd(); // 0xa6 Func
	var_118_string = var_3_string; // 0xa8 PushT
	if(var_118_string == 0) goto Label_171; // 0xa9 JumpB
	goto Label_176; // 0xaa Jump
	
Label_176:
	goto Label_191; // 0xb0 Jump
	
Label_191:
	return 0; // 0xbf Return
	
Label_171:
	var_119_string = ""; // 0xab PushV
	var_119_string = var_2_object; // 0xac MovT
	func_680(var_119_string); // 0xad NEW_2
	goto Label_166; // 0xaf Jump
	
Label_177:
	var_130_string = "all"; // 0xb1 PushS
	var_131_string = "idle"; // 0xb2 PushS
	PlayAnimation(var_130_string, var_131_string); // 0xb3 Func
	
Label_181:
	WaitForAnimEnd(); // 0xb5 Func
	var_132_string = var_3_string; // 0xb7 PushT
	if(var_132_string == 0) goto Label_186; // 0xb8 JumpB
	goto Label_191; // 0xb9 Jump
	
Label_186:
	var_133_string = "all"; // 0xba PushS
	var_134_string = "idle"; // 0xbb PushS
	PlayAnimation(var_133_string, var_134_string); // 0xbc Func
	goto Label_181; // 0xbe Jump
	
Label_105:
	var_135_bool = 0; var_136_object = Obj(); // 0x69 PushV
	var_136_object = var_1_object; // 0x6a MovT
	func_927(var_136_object); // 0x6b NEW_2
	var_141_bool = var_135_bool == 0; // 0x6d Not
	if(var_141_bool == 0) goto Label_126; // 0x6e JumpB
	var_142_string = ""; // 0x6f PushV
	var_142_string = "Neutral"; // 0x70 MovS
	func_192(var_79_object, var_142_string); // 0x71 NEW_2
	var_143_int = 511847; // 0x73 PushI
	SetMessage(var_143_int); // 0x74 TObjFunc
	ClearReplies(); // 0x76 TObjFunc
	var_144_int = 511848; // 0x78 PushI
	var_145_int = -1; // 0x79 PushI
	var_146_int = 13061; // 0x7a PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x7b TObjFunc
	goto Label_162; // 0x7d Jump
	
Label_126:
	var_147_bool = 0; // 0x7e PushV
	var_147_bool = 0; // 0x7f MovB
	var_148_bool = 0; var_149_object = Obj(); // 0x80 PushV
	var_149_object = var_1_object; // 0x81 MovT
	func_915(var_149_object); // 0x82 NEW_2
	if(var_148_bool == 0) goto Label_139; // 0x84 JumpB
	var_154_bool = 0; var_155_object = Obj(); // 0x85 PushV
	var_155_object = var_1_object; // 0x86 MovT
	func_927(var_155_object); // 0x87 NEW_2
	if(var_154_bool == 0) goto Label_139; // 0x89 JumpB
	var_147_bool = 1; // 0x8a MovB
	
Label_139:
	if(var_147_bool == 0) goto Label_160; // 0x8b JumpB
	var_156_string = ""; // 0x8c PushV
	var_156_string = "Neutral"; // 0x8d MovS
	func_192(var_79_object, var_156_string); // 0x8e NEW_2
	var_157_int = 511849; // 0x90 PushI
	SetMessage(var_157_int); // 0x91 TObjFunc
	ClearReplies(); // 0x93 TObjFunc
	var_158_int = 536115; // 0x95 PushI
	var_159_int = 13064; // 0x96 PushI
	var_160_int = 37870; // 0x97 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x98 TObjFunc
	var_161_int = 511850; // 0x9a PushI
	var_162_int = 13064; // 0x9b PushI
	var_163_int = 13063; // 0x9c PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x9d TObjFunc
	goto Label_162; // 0x9f Jump
	
Label_160:
	return 0; // 0xa0 Return
}


func_842()
{
	var_82_object = Obj(); var_83_object = Obj(); var_84_object = Obj(); var_85_object = Obj(); // 0x34a PushV
	var_86_object = Obj(); // 0x34b PushV
	func_1006(var_86_object); // 0x34c NEW_2
	var_84_object = var_86_object; // 0x34d Mov
	var_93_string = "d4q02BirdmaskNearHome"; // 0x34f PushS
	FindMark(var_85_object, var_93_string); // 0x350 ObjFunc
	var_94_object = var_85_object; // 0x352 Push
	if(var_94_object == 0) goto Label_854; // 0x353 JumpB
	Remove(); // 0x354 ObjFunc
	
Label_854:
	var_95_string = "d4q02MladVladGotoAJLSelf"; // 0x356 PushS
	FindMark(var_85_object, var_95_string); // 0x357 ObjFunc
	var_96_object = var_85_object; // 0x359 Push
	if(var_96_object == 0) goto Label_861; // 0x35a JumpB
	Remove(); // 0x35b ObjFunc
	
Label_861:
	var_97_string = "d4q02MladVladGotoAnna"; // 0x35d PushS
	FindMark(var_85_object, var_97_string); // 0x35e ObjFunc
	var_98_object = var_85_object; // 0x360 Push
	if(var_98_object == 0) goto Label_868; // 0x361 JumpB
	Remove(); // 0x362 ObjFunc
	
Label_868:
	var_99_string = "d4q02MladVladGotoJulia"; // 0x364 PushS
	FindMark(var_85_object, var_99_string); // 0x365 ObjFunc
	var_100_object = var_85_object; // 0x367 Push
	if(var_100_object == 0) goto Label_875; // 0x368 JumpB
	Remove(); // 0x369 ObjFunc
	
Label_875:
	var_101_string = "d4q02MladVladGotoLara"; // 0x36b PushS
	FindMark(var_85_object, var_101_string); // 0x36c ObjFunc
	var_102_object = var_85_object; // 0x36e Push
	if(var_102_object == 0) goto Label_882; // 0x36f JumpB
	Remove(); // 0x370 ObjFunc
	
Label_882:
	func_952(); // 0x373 NEW_2
	var_111_bool = 0; var_112_string = ""; var_113_string = ""; // 0x375 PushV
	var_112_string = "quest_d4_02"; // 0x376 MovS
	var_113_string = "completed"; // 0x377 MovS
	func_777(var_111_bool, var_112_string, var_113_string); // 0x378 NEW_2
	return 4; // 0x37a Return
}


func_588(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0; // 0x24c PushV
	IsLoaded(var_22_bool); // 0x24d Func
	var_20_bool = var_22_bool; // 0x24f Mov
	return 2; // 0x250 Return
}


func_718(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0; // 0x2ce PushV
	var_49_int = var_45_cvector | var_45_cvector; // 0x2cf Or
	var_48_float = sqrt(var_49_int); // 0x2d0 Sqrt2
	var_50_float = 0.0; // 0x2d1 PushF
	var_51_bool = var_48_float < var_50_float; // 0x2d2 LT
	if(var_51_bool == 0) goto Label_726; // 0x2d3 JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x2d4 MovV
	return 2; // 0x2d5 Return
	
Label_726:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x2d6 Div2
	return 2; // 0x2d7 Return
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
	func_718(var_44_cvector, var_45_cvector); // 0x26c NEW_2
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
	var_57_bool = 1; // 0x27c PushB
	CameraTransit(var_35_cvector, var_33_cvector, var_57_bool); // 0x27d Func
	var_58_float = GetByIndex(var_34_cvector, 0); // 0x27f PushE
	var_59_float = GetByIndex(var_34_cvector, 2); // 0x280 PushE
	Rotate(var_58_float, var_59_float); // 0x281 Func
	var_60_bool = 0; // 0x283 PushV
	func_1048(var_60_bool); // 0x284 NEW_2
	if(var_60_bool == 0) goto Label_648; // 0x286 JumpB
	goto Label_656; // 0x287 Jump
	
Label_656:
	CameraWaitForPlayFinish(); // 0x290 Func
	ResumeWorld(); // 0x292 Func
	var_17_bool = 1; // 0x294 MovB
	return 18; // 0x295 Return
	
Label_648:
	var_61_string = "head"; // 0x288 PushS
	HasAnimationTrack(var_37_bool, var_61_string); // 0x289 Func
	var_62_bool = var_37_bool; // 0x28b Push
	if(var_62_bool == 0) goto Label_656; // 0x28c JumpB
	var_63_string = "head"; // 0x28d PushS
	LookAsyncCamera(var_63_string); // 0x28e Func
}


func_978(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x3d2 PushV
	var_31_object = Obj(); // 0x3d3 PushV
	func_965(var_31_object); // 0x3d4 NEW_2
	var_28_object = var_31_object; // 0x3d5 Mov
	Find(var_24_int, var_29_object); // 0x3d7 ObjFunc
	var_36_bool = var_29_object == 0; // 0x3d9 Not
	if(var_36_bool == 0) goto Label_993; // 0x3da JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x3db PushS
	var_38_int = var_37_string + var_24_int; // 0x3dc Add
	Trace(var_38_int); // 0x3dd Func
	var_22_bool = 0; // 0x3df MovB
	return 6; // 0x3e0 Return
	
Label_993:
	AddChild(var_23_object); // 0x3e1 ObjFunc
	var_39_int = 7; // 0x3e3 PushI
	SendWorldWndMessage(var_39_int); // 0x3e4 Func
	GetCategory(var_30_int); // 0x3e6 ObjFunc
	SetDiarySection(var_30_int); // 0x3e8 Func
	var_22_bool = 0; // 0x3ea MovB
	return 6; // 0x3eb Return
}


func_728(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0; // 0x2d8 PushV
	GetVariable(var_88_string, var_90_int); // 0x2d9 Func
	var_87_int = var_90_int; // 0x2db Mov
	return 2; // 0x2dc Return
}


func_733(var_71_int, var_72_int)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x2dd PushV
	CreateIntVector(var_74_object); // 0x2de Func
	add(var_71_int); // 0x2e0 ObjFunc
	add(var_72_int); // 0x2e2 ObjFunc
	var_75_int = 3; // 0x2e4 PushI
	SendWorldWndMessage(var_75_int, var_74_object); // 0x2e5 Func
	return 2; // 0x2e7 Return
}


func_745(var_61_object, var_62_int)
{
	var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_int = 0; var_68_bool = 0; // 0x2e9 PushV
	GetItemID(var_66_int); // 0x2ea ObjFunc
	var_69_string = "Category"; // 0x2ec PushS
	GetInvItemProperty(var_67_int, var_66_int, var_69_string); // 0x2ed Func
	AddItem(var_68_bool, var_61_object, var_67_int, var_62_int); // 0x2ef ObjFunc
	var_70_bool = var_68_bool == 0; // 0x2f1 Not
	if(var_70_bool == 0) goto Label_758; // 0x2f2 JumpB
	DropItems(var_61_object, var_62_int); // 0x2f3 ObjFunc
	goto Label_763; // 0x2f5 Jump
	
Label_763:
	return 6; // 0x2fb Return
	
Label_758:
	var_71_int = 0; var_72_int = 0; // 0x2f6 PushV
	var_71_int = var_66_int; // 0x2f7 Mov
	var_72_int = var_62_int; // 0x2f8 Mov
	func_733(var_71_int, var_72_int); // 0x2f9 NEW_2
}


func_1006(var_86_object)
{
	var_87_object = Obj(); var_88_object = Obj(); var_89_object = Obj(); var_90_object = Obj(); // 0x3ee PushV
	GetMainOutdoorScene(var_89_object); // 0x3ef Func
	var_91_bool = var_89_object == 0; // 0x3f1 NullEq
	if(var_91_bool == 0) goto Label_1017; // 0x3f2 JumpB
	var_92_string = "Can't find main outdoor scene"; // 0x3f3 PushS
	Trace(var_92_string); // 0x3f4 Func
	var_90_object = 0; // 0x3f6 SetNull
	var_86_object = var_90_object; // 0x3f7 Mov
	return 4; // 0x3f8 Return
	
Label_1017:
	GetMap(var_90_object); // 0x3f9 ObjFunc
	var_86_object = var_90_object; // 0x3fb Mov
	return 4; // 0x3fc Return
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
	func_796(var_24_int); // 0x200 NEW_2
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
	func_789(var_46_string, var_47_int); // 0x21c NEW_2
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


func_764(var_55_object, var_56_string, var_57_int)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x2fc PushV
	CreateInvItem(var_59_object); // 0x2fd Func
	SetItemName(var_56_string); // 0x2ff ObjFunc
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; // 0x301 PushV
	var_60_object = var_55_object; // 0x302 Mov
	var_61_object = var_59_object; // 0x303 Mov
	var_62_int = var_57_int; // 0x304 Mov
	func_745(var_61_object, var_62_int); // 0x305 NEW_2
	return 2; // 0x307 Return
}


func_893()
{
	func_939(); // 0x37f NEW_2
	var_40_bool = 0; var_41_string = ""; var_42_string = ""; // 0x381 PushV
	var_41_string = "quest_d4_02"; // 0x382 MovS
	var_42_string = "birdmask_talk"; // 0x383 MovS
	func_777(var_40_bool, var_41_string, var_42_string); // 0x384 NEW_2
	return 0; // 0x386 Return
}


func_1023(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x3ff PushV
	var_72_string = "branch"; // 0x400 PushS
	GetVariable(var_72_string, var_71_int); // 0x401 Func
	var_73_int = 0; // 0x403 PushI
	var_74_bool = var_71_int == var_73_int; // 0x404 Eq
	if(var_74_bool == 0) goto Label_1033; // 0x405 JumpB
	var_69_int = 1; // 0x406 MovI
	return 2; // 0x407 Return
	
Label_1033:
	var_75_int = 1; // 0x409 PushI
	var_76_bool = var_71_int == var_75_int; // 0x40a Eq
	if(var_76_bool == 0) goto Label_1038; // 0x40b JumpB
	var_69_int = 2; // 0x40c MovI
	return 2; // 0x40d Return
	
Label_1038:
	var_69_int = 3; // 0x40e MovI
	return 2; // 0x40f Return
}


