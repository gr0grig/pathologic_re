task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xf9 PushI
	if(var_12_int == 0) goto Label_486; // 0xfa JumpB
	func_813(); // 0xfc NEW_2
	var_14_int = 41375; // 0xfe PushI
	var_15_bool = var_11_object == var_14_int; // 0xff Eq
	if(var_15_bool == 0) goto Label_262; // 0x100 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0x101 PushV
	var_16_object = var_1_object; // 0x102 MovT
	var_17_object = var_0_object; // 0x103 MovT
	func_876(); // 0x104 NEW_2
	
Label_262:
	var_43_int = 41380; // 0x106 PushI
	var_44_bool = var_11_object == var_43_int; // 0x107 Eq
	if(var_44_bool == 0) goto Label_285; // 0x108 JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x109 PushV
	var_45_object = var_1_object; // 0x10a MovT
	var_46_object = var_0_object; // 0x10b MovT
	func_885(); // 0x10c NEW_2
	var_57_object = Obj(); var_58_object = Obj(); // 0x10e PushV
	var_57_object = var_1_object; // 0x10f MovT
	var_58_object = var_0_object; // 0x110 MovT
	func_894(); // 0x111 NEW_2
	var_63_object = Obj(); var_64_object = Obj(); // 0x113 PushV
	var_63_object = var_1_object; // 0x114 MovT
	var_64_object = var_0_object; // 0x115 MovT
	func_900(); // 0x116 NEW_2
	var_67_object = Obj(); var_68_object = Obj(); // 0x118 PushV
	var_67_object = var_1_object; // 0x119 MovT
	var_68_object = var_0_object; // 0x11a MovT
	func_906(); // 0x11b NEW_2
	
Label_285:
	var_79_int = 41372; // 0x11d PushI
	var_80_bool = var_10_bool == var_79_int; // 0x11e Eq
	if(var_80_bool == 0) goto Label_402; // 0x11f JumpB
	var_81_string = ""; // 0x120 PushV
	var_81_string = "Neutral"; // 0x121 MovS
	func_226(var_11_object, var_81_string); // 0x122 NEW_2
	var_98_int = 539441; // 0x124 PushI
	SetMessage(var_98_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_99_bool = 0; // 0x129 PushV
	var_99_bool = 1; // 0x12a MovB
	var_100_bool = 0; // 0x12b PushV
	var_100_bool = 0; // 0x12c MovB
	var_101_bool = 0; var_102_object = Obj(); // 0x12d PushV
	var_102_object = var_1_object; // 0x12e MovT
	func_925(var_102_object); // 0x12f NEW_2
	if(var_101_bool == 0) goto Label_313; // 0x131 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x132 PushV
	var_110_object = var_1_object; // 0x133 MovT
	func_937(var_110_object); // 0x134 NEW_2
	var_115_bool = var_109_bool == 0; // 0x136 Not
	if(var_115_bool == 0) goto Label_313; // 0x137 JumpB
	var_100_bool = 1; // 0x138 MovB
	
Label_313:
	if(var_100_bool == 0) goto Label_330; // 0x139 JumpB
	var_116_bool = 0; // 0x13a PushV
	var_116_bool = 0; // 0x13b MovB
	var_117_bool = 0; var_118_object = Obj(); // 0x13c PushV
	var_118_object = var_1_object; // 0x13d MovT
	func_913(var_118_object); // 0x13e NEW_2
	if(var_117_bool == 0) goto Label_328; // 0x140 JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x141 PushV
	var_124_object = var_1_object; // 0x142 MovT
	func_937(var_124_object); // 0x143 NEW_2
	var_125_bool = var_123_bool == 0; // 0x145 Not
	if(var_125_bool == 0) goto Label_328; // 0x146 JumpB
	var_116_bool = 1; // 0x147 MovB
	
Label_328:
	if(var_116_bool == 0) goto Label_330; // 0x148 JumpB
	var_99_bool = 0; // 0x149 MovB
	
Label_330:
	if(var_99_bool == 0) goto Label_336; // 0x14a JumpB
	var_126_int = 539442; // 0x14b PushI
	var_127_int = 41374; // 0x14c PushI
	var_128_int = 41373; // 0x14d PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x14e TObjFunc
	
Label_336:
	var_129_bool = 0; // 0x150 PushV
	var_129_bool = 1; // 0x151 MovB
	var_130_bool = 0; // 0x152 PushV
	var_130_bool = 0; // 0x153 MovB
	var_131_bool = 0; // 0x154 PushV
	var_131_bool = 0; // 0x155 MovB
	var_132_bool = 0; var_133_object = Obj(); // 0x156 PushV
	var_133_object = var_1_object; // 0x157 MovT
	func_925(var_133_object); // 0x158 NEW_2
	if(var_132_bool == 0) goto Label_353; // 0x15a JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0x15b PushV
	var_135_object = var_1_object; // 0x15c MovT
	func_937(var_135_object); // 0x15d NEW_2
	if(var_134_bool == 0) goto Label_353; // 0x15f JumpB
	var_131_bool = 1; // 0x160 MovB
	
Label_353:
	if(var_131_bool == 0) goto Label_360; // 0x161 JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0x162 PushV
	var_137_object = var_1_object; // 0x163 MovT
	func_949(var_136_bool, var_137_object); // 0x164 NEW_2
	if(var_136_bool == 0) goto Label_360; // 0x166 JumpB
	var_130_bool = 1; // 0x167 MovB
	
Label_360:
	if(var_130_bool == 0) goto Label_385; // 0x168 JumpB
	var_145_bool = 0; // 0x169 PushV
	var_145_bool = 0; // 0x16a MovB
	var_146_bool = 0; // 0x16b PushV
	var_146_bool = 0; // 0x16c MovB
	var_147_bool = 0; var_148_object = Obj(); // 0x16d PushV
	var_148_object = var_1_object; // 0x16e MovT
	func_937(var_148_object); // 0x16f NEW_2
	if(var_147_bool == 0) goto Label_376; // 0x171 JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x172 PushV
	var_150_object = var_1_object; // 0x173 MovT
	func_949(var_149_bool, var_150_object); // 0x174 NEW_2
	if(var_149_bool == 0) goto Label_376; // 0x176 JumpB
	var_146_bool = 1; // 0x177 MovB
	
Label_376:
	if(var_146_bool == 0) goto Label_383; // 0x178 JumpB
	var_151_bool = 0; var_152_object = Obj(); // 0x179 PushV
	var_152_object = var_1_object; // 0x17a MovT
	func_913(var_152_object); // 0x17b NEW_2
	if(var_151_bool == 0) goto Label_383; // 0x17d JumpB
	var_145_bool = 1; // 0x17e MovB
	
Label_383:
	if(var_145_bool == 0) goto Label_385; // 0x17f JumpB
	var_129_bool = 0; // 0x180 MovB
	
Label_385:
	if(var_129_bool == 0) goto Label_391; // 0x181 JumpB
	var_153_int = 539445; // 0x182 PushI
	var_154_int = 41377; // 0x183 PushI
	var_155_int = 41376; // 0x184 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x185 TObjFunc
	
Label_391:
	var_156_int = 539450; // 0x187 PushI
	var_157_int = -1; // 0x188 PushI
	var_158_int = 41381; // 0x189 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x18a TObjFunc
	var_159_int = 540739; // 0x18c PushI
	var_160_int = -1; // 0x18d PushI
	var_161_int = 42777; // 0x18e PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_162_int = 41377; // 0x192 PushI
	var_163_bool = var_10_bool == var_162_int; // 0x193 Eq
	if(var_163_bool == 0) goto Label_420; // 0x194 JumpB
	var_164_string = ""; // 0x195 PushV
	var_164_string = "Neutral"; // 0x196 MovS
	func_226(var_11_object, var_164_string); // 0x197 NEW_2
	var_165_int = 539446; // 0x199 PushI
	SetMessage(var_165_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_166_int = 540737; // 0x19e PushI
	var_167_int = 42776; // 0x19f PushI
	var_168_int = 42775; // 0x1a0 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x1a1 TObjFunc
	return 0; // 0x1a3 Return
	
Label_420:
	var_169_int = 42776; // 0x1a4 PushI
	var_170_bool = var_10_bool == var_169_int; // 0x1a5 Eq
	if(var_170_bool == 0) goto Label_438; // 0x1a6 JumpB
	var_171_string = ""; // 0x1a7 PushV
	var_171_string = "Neutral"; // 0x1a8 MovS
	func_226(var_11_object, var_171_string); // 0x1a9 NEW_2
	var_172_int = 540738; // 0x1ab PushI
	SetMessage(var_172_int); // 0x1ac TObjFunc
	ClearReplies(); // 0x1ae TObjFunc
	var_173_int = 539447; // 0x1b0 PushI
	var_174_int = 41379; // 0x1b1 PushI
	var_175_int = 41378; // 0x1b2 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x1b3 TObjFunc
	return 0; // 0x1b5 Return
	
Label_438:
	var_176_int = 41379; // 0x1b6 PushI
	var_177_bool = var_10_bool == var_176_int; // 0x1b7 Eq
	if(var_177_bool == 0) goto Label_456; // 0x1b8 JumpB
	var_178_string = ""; // 0x1b9 PushV
	var_178_string = "Neutral"; // 0x1ba MovS
	func_226(var_11_object, var_178_string); // 0x1bb NEW_2
	var_179_int = 539448; // 0x1bd PushI
	SetMessage(var_179_int); // 0x1be TObjFunc
	ClearReplies(); // 0x1c0 TObjFunc
	var_180_int = 539449; // 0x1c2 PushI
	var_181_int = -1; // 0x1c3 PushI
	var_182_int = 41380; // 0x1c4 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x1c5 TObjFunc
	return 0; // 0x1c7 Return
	
Label_456:
	var_183_int = 41374; // 0x1c8 PushI
	var_184_bool = var_10_bool == var_183_int; // 0x1c9 Eq
	if(var_184_bool == 0) goto Label_474; // 0x1ca JumpB
	var_185_string = ""; // 0x1cb PushV
	var_185_string = "Neutral"; // 0x1cc MovS
	func_226(var_11_object, var_185_string); // 0x1cd NEW_2
	var_186_int = 539443; // 0x1cf PushI
	SetMessage(var_186_int); // 0x1d0 TObjFunc
	ClearReplies(); // 0x1d2 TObjFunc
	var_187_int = 539444; // 0x1d4 PushI
	var_188_int = -1; // 0x1d5 PushI
	var_189_int = 41375; // 0x1d6 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x1d7 TObjFunc
	return 0; // 0x1d9 Return
	
Label_474:
	var_3_string = 1; // 0x1da TMovB
	var_190_bool = 0; // 0x1db PushV
	func_1062(var_190_bool); // 0x1dc NEW_2
	if(var_190_bool == 0) goto Label_482; // 0x1de JumpB
	lshStopAnimation(); // 0x1df Func
	goto Label_484; // 0x1e1 Jump
	
Label_484:
	return 0; // 0x1e4 Return
	
Label_482:
	StopAnimation(); // 0x1e2 Func
	
Label_486:
	return 0; // 0x1e6 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_573(var_9_object, var_10_object); // 0x1f3 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x1f5 PushV
	var_15_object = var_10_object; // 0x1f6 Mov
	TaskCall(0); // 0x1f7 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x1f8 NEW_2
	TaskReturn(); // 0x1f9 TaskReturn
	return 0; // 0x1fb Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x227 PushI
	var_12_bool = var_10_int == var_11_int; // 0x228 Eq
	if(var_12_bool == 0) goto Label_572; // 0x229 JumpB
	var_13_bool = 0; // 0x22a PushV
	func_535(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x22b NEW_2
	if(var_13_bool == 0) goto Label_566; // 0x22d JumpB
	var_26_bool = var_2_object == 0; // 0x22e Not
	if(var_26_bool == 0) goto Label_565; // 0x22f JumpB
	var_27_object = Obj(); // 0x230 PushV
	var_27_object = var_4_bool; // 0x231 MovT
	func_802(var_27_object); // 0x232 NEW_2
	var_2_object = 1; // 0x234 TMovB
	
Label_565:
	goto Label_572; // 0x235 Jump
	
Label_572:
	return 0; // 0x23c Return
	
Label_566:
	var_34_object = var_2_object; // 0x236 PushT
	if(var_34_object == 0) goto Label_572; // 0x237 JumpB
	var_35_string = "head"; // 0x238 PushS
	UnlookAsync(var_35_string); // 0x239 Func
	var_2_object = 0; // 0x23b TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_487:
	var_10_int = 1; // 0x1e7 PushI
	Sleep(var_10_int); // 0x1e8 Func
	var_11_float = 0; var_12_float = 0; // 0x1ea PushV
	var_11_float = 300; // 0x1eb MovI
	var_12_float = 100; // 0x1ec MovI
	func_508(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x1ed NEW_2
	goto Label_487; // 0x1ef Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_686(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_1056(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_1054(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_1058(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_1060(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_1037(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_191_bool = var_24_bool == 0; // 0x38 Not
	if(var_191_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_192_object = Obj(); // 0x3f PushV
	var_192_object = var_15_object; // 0x40 Mov
	func_754(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_771(var_175_string)
{
	var_176_bool = 0; var_177_float = 0; var_178_float = 0; var_179_bool = 0; var_180_float = 0; var_181_float = 0; // 0x303 PushV
	lshHasAnimation(var_179_bool, var_175_string); // 0x304 Func
	var_182_bool = var_179_bool; // 0x306 Push
	if(var_182_bool == 0) goto Label_782; // 0x307 JumpB
	lshGetAnimTimes(var_175_string, var_180_float, var_181_float); // 0x308 Func
	var_183_bool = 0; // 0x30a PushB
	lshPlayAnimation(var_180_float, var_181_float, var_183_bool); // 0x30b Func
	goto Label_786; // 0x30d Jump
	
Label_786:
	return 6; // 0x312 Return
	
Label_782:
	var_184_string = "Can't find lsh animation : "; // 0x30e PushS
	var_185_int = var_184_string + var_175_string; // 0x30f Add
	Trace(var_185_int); // 0x310 Func
}


func_900()
{
	var_65_string = "playsound"; // 0x385 PushS
	var_66_string = "giveitem"; // 0x386 PushS
	TriggerWorld(var_65_string, var_66_string); // 0x387 Func
	return 0; // 0x389 Return
}


func_906()
{
	var_69_string = ""; var_70_bool = 0; // 0x38b PushV
	var_69_string = "sobor@door1"; // 0x38c MovS
	var_70_bool = 0; // 0x38d MovB
	func_835(var_69_string, var_70_bool); // 0x38e NEW_2
	return 0; // 0x390 Return
}


func_1037(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x40d PushV
	var_79_string = "branch"; // 0x40e PushS
	GetVariable(var_79_string, var_78_int); // 0x40f Func
	var_80_int = 0; // 0x411 PushI
	var_81_bool = var_78_int == var_80_int; // 0x412 Eq
	if(var_81_bool == 0) goto Label_1047; // 0x413 JumpB
	var_76_int = 1; // 0x414 MovI
	return 2; // 0x415 Return
	
Label_1047:
	var_82_int = 1; // 0x417 PushI
	var_83_bool = var_78_int == var_82_int; // 0x418 Eq
	if(var_83_bool == 0) goto Label_1052; // 0x419 JumpB
	var_76_int = 2; // 0x41a MovI
	return 2; // 0x41b Return
	
Label_1052:
	var_76_int = 3; // 0x41c MovI
	return 2; // 0x41d Return
}


func_913(var_128_bool)
{
	var_130_int = 0; var_131_string = ""; // 0x392 PushV
	var_131_string = "k5q04"; // 0x393 MovS
	func_830(var_130_int, var_131_string); // 0x394 NEW_2
	var_132_int = 2; // 0x396 PushI
	var_133_bool = var_130_int == var_132_int; // 0x397 Eq
	if(var_133_bool == 0) goto Label_923; // 0x398 JumpB
	var_128_bool = 1; // 0x399 MovB
	return 0; // 0x39a Return
	
Label_923:
	var_128_bool = 0; // 0x39b MovB
	return 0; // 0x39c Return
}


func_787(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x313 PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x314 Func
	var_106_bool = var_103_bool; // 0x316 Push
	if(var_106_bool == 0) goto Label_797; // 0x317 JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x318 Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x31a Func
	goto Label_801; // 0x31c Jump
	
Label_801:
	return 6; // 0x321 Return
	
Label_797:
	var_107_string = "Can't find lsh animation : "; // 0x31d PushS
	var_108_int = var_107_string + var_96_string; // 0x31e Add
	Trace(var_108_int); // 0x31f Func
}


func_535(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x217 PushV
	var_16_bool = var_4_bool == 0; // 0x218 NullEq
	if(var_16_bool == 0) goto Label_540; // 0x219 JumpB
	var_13_bool = 0; // 0x21a MovB
	return 2; // 0x21b Return
	
Label_540:
	var_17_float = 0; var_18_object = Obj(); // 0x21c PushV
	var_18_object = var_4_bool; // 0x21d MovT
	func_673(var_18_object); // 0x21e NEW_2
	var_15_float = sqrt(var_17_float); // 0x220 Sqrt2
	var_25_object = var_2_object; // 0x221 PushT
	if(var_25_object == 0) goto Label_548; // 0x222 JumpB
	var_15_float = var_15_float - var_1_object; // 0x223 Sub2
	
Label_548:
	var_13_bool = var_15_float < var_0_object; // 0x224 LT2
	return 2; // 0x225 Return
}


func_666(var_61_bool)
{
	var_61_bool = 1; // 0x29a MovB
	return 0; // 0x29b Return
}


func_668()
{
	StopAnimation(); // 0x29c Func
	StopGroup0(); // 0x29e Func
	return 0; // 0x2a0 Return
}


func_925(var_112_bool)
{
	var_114_int = 0; var_115_string = ""; // 0x39e PushV
	var_115_string = "k5q04"; // 0x39f MovS
	func_830(var_114_int, var_115_string); // 0x3a0 NEW_2
	var_118_int = 3; // 0x3a2 PushI
	var_119_bool = var_114_int == var_118_int; // 0x3a3 Eq
	if(var_119_bool == 0) goto Label_935; // 0x3a4 JumpB
	var_112_bool = 1; // 0x3a5 MovB
	return 0; // 0x3a6 Return
	
Label_935:
	var_112_bool = 0; // 0x3a7 MovB
	return 0; // 0x3a8 Return
}


func_1054(var_73_int)
{
	var_73_int = 515572; // 0x41e MovI
	return 0; // 0x41f Return
}


func_1056(var_72_int)
{
	var_72_int = 504031; // 0x420 MovI
	return 0; // 0x421 Return
}


func_673(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x2a1 PushV
	GetPosition(var_22_cvector); // 0x2a2 Func
	GetPosition(var_23_cvector); // 0x2a4 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x2a6 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x2a7 Or2
	return 6; // 0x2a8 Return
}


func_1058(var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png"; // 0x422 MovS
	return 0; // 0x423 Return
}


func_802(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x322 PushV
	GetEyesHeight(var_30_float); // 0x323 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x325 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x326 PushE
	var_32_float = var_30_float; // 0x327 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x328 PopE
	var_33_string = "head"; // 0x329 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x32a Func
	return 4; // 0x32c Return
}


func_1060(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png"; // 0x424 MovS
	return 0; // 0x425 Return
}


func_1062(var_67_bool)
{
	var_67_bool = 0; // 0x426 MovB
	return 0; // 0x427 Return
}


func_937(var_120_bool)
{
	var_122_int = 0; var_123_string = ""; // 0x3aa PushV
	var_123_string = "k5q04_bring_water"; // 0x3ab MovS
	func_830(var_122_int, var_123_string); // 0x3ac NEW_2
	var_124_int = 0; // 0x3ae PushI
	var_125_bool = var_122_int != var_124_int; // 0x3af Neq
	if(var_125_bool == 0) goto Label_947; // 0x3b0 JumpB
	var_120_bool = 1; // 0x3b1 MovB
	return 0; // 0x3b2 Return
	
Label_947:
	var_120_bool = 0; // 0x3b3 MovB
	return 0; // 0x3b4 Return
}


func_681(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x2a9 PushV
	IsLoaded(var_15_bool); // 0x2aa Func
	var_13_bool = var_15_bool; // 0x2ac Mov
	return 2; // 0x2ad Return
}


func_813()
{
	var_13_bool = 0; // 0x32d PushV
	func_1062(var_13_bool); // 0x32e NEW_2
	if(var_13_bool == 0) goto Label_819; // 0x330 JumpB
	lshStopSpeech(); // 0x331 Func
	
Label_819:
	return 0; // 0x333 Return
}


func_686(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x2ae PushV
	GetPosition(var_38_cvector); // 0x2af ObjFunc
	GetEyesHeight(var_37_float); // 0x2b1 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x2b3 PushE
	var_46_float = var_46_float + var_37_float; // 0x2b4 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x2b5 PopE
	GetPosition(var_39_cvector); // 0x2b6 Func
	GetEyesHeight(var_37_float); // 0x2b8 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x2ba PushE
	var_47_float = var_47_float + var_37_float; // 0x2bb Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x2bc PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x2bd Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x2be PushE
	var_48_float = 0; // 0x2bf MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x2c0 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x2c1 Or
	var_50_float = sqrt(var_49_int); // 0x2c2 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x2c3 Div2
	var_41_cvector = -var_40_cvector; // 0x2c4 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x2c5 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x2c6 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x2c7 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x2c8 Xor2
	func_820(var_52_cvector, var_53_cvector); // 0x2c9 NEW_2
	var_60_int = 25; // 0x2cb PushI
	var_61_float = var_52_cvector * var_60_int; // 0x2cc Mult
	var_62_int = var_51_float + var_61_float; // 0x2cd Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x2ce PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x2cf Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x2d0 Add2
	IsOverrideActive(var_44_bool); // 0x2d1 Func
	var_64_bool = var_44_bool; // 0x2d3 Push
	if(var_64_bool == 0) goto Label_727; // 0x2d4 JumpB
	var_25_bool = 0; // 0x2d5 MovB
	return 18; // 0x2d6 Return
	
Label_727:
	StopWorld(); // 0x2d7 Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x2d9 Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x2db PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x2dc PushE
	Rotate(var_65_float, var_66_float); // 0x2dd Func
	var_67_bool = 0; // 0x2df PushV
	func_1062(var_67_bool); // 0x2e0 NEW_2
	if(var_67_bool == 0) goto Label_740; // 0x2e2 JumpB
	goto Label_748; // 0x2e3 Jump
	
Label_748:
	CameraWaitForPlayFinish(); // 0x2ec Func
	ResumeWorld(); // 0x2ee Func
	var_25_bool = 1; // 0x2f0 MovB
	return 18; // 0x2f1 Return
	
Label_740:
	var_68_string = "head"; // 0x2e4 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x2e5 Func
	var_69_bool = var_45_bool; // 0x2e7 Push
	if(var_69_bool == 0) goto Label_748; // 0x2e8 JumpB
	var_70_string = "head"; // 0x2e9 PushS
	LookAsyncCamera(var_70_string); // 0x2ea Func
}


func_820(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x334 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x335 Or
	var_56_float = sqrt(var_57_int); // 0x336 Sqrt2
	var_58_float = 0.0; // 0x337 PushF
	var_59_bool = var_56_float < var_58_float; // 0x338 LT
	if(var_59_bool == 0) goto Label_828; // 0x339 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x33a MovV
	return 2; // 0x33b Return
	
Label_828:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x33c Div2
	return 2; // 0x33d Return
}


func_949(var_147_bool, var_148_object)
{
	var_149_bool = 0; var_150_object = Obj(); // 0x3b6 PushV
	var_150_object = var_148_object; // 0x3b7 Mov
	func_959(var_150_object); // 0x3b8 NEW_2
	if(var_149_bool == 0) goto Label_957; // 0x3ba JumpB
	var_147_bool = 1; // 0x3bb MovB
	return 0; // 0x3bc Return
	
Label_957:
	var_147_bool = 0; // 0x3bd MovB
	return 0; // 0x3be Return
}


func_573(var_2_object, var_3_string)
{
	func_668(); // 0x23e NEW_2
	var_11_int = 10; // 0x240 PushI
	KillTimer(var_11_int); // 0x241 Func
	var_12_object = var_2_object; // 0x243 PushT
	if(var_12_object == 0) goto Label_585; // 0x244 JumpB
	var_13_string = "head"; // 0x245 PushS
	UnlookAsync(var_13_string); // 0x246 Func
	var_2_object = 0; // 0x248 TMovB
	
Label_585:
	var_3_string = 1; // 0x249 TMovB
	return 0; // 0x24a Return
}


func_830(var_114_int, var_115_string)
{
	var_116_int = 0; var_117_int = 0; // 0x33e PushV
	GetVariable(var_115_string, var_117_int); // 0x33f Func
	var_114_int = var_117_int; // 0x341 Mov
	return 2; // 0x342 Return
}


func_959(var_149_bool)
{
	var_151_int = 0; var_152_int = 0; // 0x3bf PushV
	var_153_string = "bottle_water"; // 0x3c0 PushS
	GetItemCountOfType(var_152_int, var_153_string); // 0x3c1 ObjFunc
	var_154_int = 20; // 0x3c3 PushI
	var_155_bool = var_152_int >= var_154_int; // 0x3c4 GE
	if(var_155_bool == 0) goto Label_968; // 0x3c5 JumpB
	var_149_bool = 1; // 0x3c6 MovB
	return 2; // 0x3c7 Return
	
Label_968:
	var_149_bool = 0; // 0x3c8 MovB
	return 2; // 0x3c9 Return
}


func_835(var_69_string, var_70_bool)
{
	var_71_object = Obj(); var_72_object = Obj(); // 0x343 PushV
	FindActor(var_72_object, var_69_string); // 0x344 Func
	var_73_bool = var_72_object == 0; // 0x346 Not
	if(var_73_bool == 0) goto Label_847; // 0x347 JumpB
	var_74_string = "Door "; // 0x348 PushS
	var_75_int = var_74_string + var_69_string; // 0x349 Add
	var_76_string = " not found"; // 0x34a PushS
	var_77_int = var_75_int + var_76_string; // 0x34b Add
	Trace(var_77_int); // 0x34c Func
	goto Label_850; // 0x34e Jump
	
Label_850:
	return 2; // 0x352 Return
	
Label_847:
	var_78_string = "locked"; // 0x34f PushS
	SetProperty(var_78_string, var_70_bool); // 0x350 ObjFunc
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_196; // 0x4f JumpB
	var_92_string = ""; // 0x50 PushV
	var_92_string = "Neutral"; // 0x51 MovS
	func_226(var_86_object, var_92_string); // 0x52 NEW_2
	var_109_int = 539441; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_bool = 0; // 0x59 PushV
	var_110_bool = 1; // 0x5a MovB
	var_111_bool = 0; // 0x5b PushV
	var_111_bool = 0; // 0x5c MovB
	var_112_bool = 0; var_113_object = Obj(); // 0x5d PushV
	var_113_object = var_1_object; // 0x5e MovT
	func_925(var_113_object); // 0x5f NEW_2
	if(var_112_bool == 0) goto Label_105; // 0x61 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x62 PushV
	var_121_object = var_1_object; // 0x63 MovT
	func_937(var_121_object); // 0x64 NEW_2
	var_126_bool = var_120_bool == 0; // 0x66 Not
	if(var_126_bool == 0) goto Label_105; // 0x67 JumpB
	var_111_bool = 1; // 0x68 MovB
	
Label_105:
	if(var_111_bool == 0) goto Label_122; // 0x69 JumpB
	var_127_bool = 0; // 0x6a PushV
	var_127_bool = 0; // 0x6b MovB
	var_128_bool = 0; var_129_object = Obj(); // 0x6c PushV
	var_129_object = var_1_object; // 0x6d MovT
	func_913(var_129_object); // 0x6e NEW_2
	if(var_128_bool == 0) goto Label_120; // 0x70 JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0x71 PushV
	var_135_object = var_1_object; // 0x72 MovT
	func_937(var_135_object); // 0x73 NEW_2
	var_136_bool = var_134_bool == 0; // 0x75 Not
	if(var_136_bool == 0) goto Label_120; // 0x76 JumpB
	var_127_bool = 1; // 0x77 MovB
	
Label_120:
	if(var_127_bool == 0) goto Label_122; // 0x78 JumpB
	var_110_bool = 0; // 0x79 MovB
	
Label_122:
	if(var_110_bool == 0) goto Label_128; // 0x7a JumpB
	var_137_int = 539442; // 0x7b PushI
	var_138_int = 41374; // 0x7c PushI
	var_139_int = 41373; // 0x7d PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x7e TObjFunc
	
Label_128:
	var_140_bool = 0; // 0x80 PushV
	var_140_bool = 1; // 0x81 MovB
	var_141_bool = 0; // 0x82 PushV
	var_141_bool = 0; // 0x83 MovB
	var_142_bool = 0; // 0x84 PushV
	var_142_bool = 0; // 0x85 MovB
	var_143_bool = 0; var_144_object = Obj(); // 0x86 PushV
	var_144_object = var_1_object; // 0x87 MovT
	func_925(var_144_object); // 0x88 NEW_2
	if(var_143_bool == 0) goto Label_145; // 0x8a JumpB
	var_145_bool = 0; var_146_object = Obj(); // 0x8b PushV
	var_146_object = var_1_object; // 0x8c MovT
	func_937(var_146_object); // 0x8d NEW_2
	if(var_145_bool == 0) goto Label_145; // 0x8f JumpB
	var_142_bool = 1; // 0x90 MovB
	
Label_145:
	if(var_142_bool == 0) goto Label_152; // 0x91 JumpB
	var_147_bool = 0; var_148_object = Obj(); // 0x92 PushV
	var_148_object = var_1_object; // 0x93 MovT
	func_949(var_147_bool, var_148_object); // 0x94 NEW_2
	if(var_147_bool == 0) goto Label_152; // 0x96 JumpB
	var_141_bool = 1; // 0x97 MovB
	
Label_152:
	if(var_141_bool == 0) goto Label_177; // 0x98 JumpB
	var_156_bool = 0; // 0x99 PushV
	var_156_bool = 0; // 0x9a MovB
	var_157_bool = 0; // 0x9b PushV
	var_157_bool = 0; // 0x9c MovB
	var_158_bool = 0; var_159_object = Obj(); // 0x9d PushV
	var_159_object = var_1_object; // 0x9e MovT
	func_937(var_159_object); // 0x9f NEW_2
	if(var_158_bool == 0) goto Label_168; // 0xa1 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0xa2 PushV
	var_161_object = var_1_object; // 0xa3 MovT
	func_949(var_160_bool, var_161_object); // 0xa4 NEW_2
	if(var_160_bool == 0) goto Label_168; // 0xa6 JumpB
	var_157_bool = 1; // 0xa7 MovB
	
Label_168:
	if(var_157_bool == 0) goto Label_175; // 0xa8 JumpB
	var_162_bool = 0; var_163_object = Obj(); // 0xa9 PushV
	var_163_object = var_1_object; // 0xaa MovT
	func_913(var_163_object); // 0xab NEW_2
	if(var_162_bool == 0) goto Label_175; // 0xad JumpB
	var_156_bool = 1; // 0xae MovB
	
Label_175:
	if(var_156_bool == 0) goto Label_177; // 0xaf JumpB
	var_140_bool = 0; // 0xb0 MovB
	
Label_177:
	if(var_140_bool == 0) goto Label_183; // 0xb1 JumpB
	var_164_int = 539445; // 0xb2 PushI
	var_165_int = 41377; // 0xb3 PushI
	var_166_int = 41376; // 0xb4 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0xb5 TObjFunc
	
Label_183:
	var_167_int = 539450; // 0xb7 PushI
	var_168_int = -1; // 0xb8 PushI
	var_169_int = 41381; // 0xb9 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xba TObjFunc
	var_170_int = 540739; // 0xbc PushI
	var_171_int = -1; // 0xbd PushI
	var_172_int = 42777; // 0xbe PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xbf TObjFunc
	goto Label_196; // 0xc1 Jump
	
Label_196:
	var_173_bool = 0; // 0xc4 PushV
	func_1062(var_173_bool); // 0xc5 NEW_2
	if(var_173_bool == 0) goto Label_211; // 0xc7 JumpB
	
Label_200:
	lshWaitForAnimEnd(); // 0xc8 Func
	var_174_string = var_3_string; // 0xca PushT
	if(var_174_string == 0) goto Label_205; // 0xcb JumpB
	goto Label_210; // 0xcc Jump
	
Label_210:
	goto Label_225; // 0xd2 Jump
	
Label_225:
	return 0; // 0xe1 Return
	
Label_205:
	var_175_string = ""; // 0xcd PushV
	var_175_string = var_2_object; // 0xce MovT
	func_771(var_175_string); // 0xcf NEW_2
	goto Label_200; // 0xd1 Jump
	
Label_211:
	var_186_string = "all"; // 0xd3 PushS
	var_187_string = "idle"; // 0xd4 PushS
	PlayAnimation(var_186_string, var_187_string); // 0xd5 Func
	
Label_215:
	WaitForAnimEnd(); // 0xd7 Func
	var_188_string = var_3_string; // 0xd9 PushT
	if(var_188_string == 0) goto Label_220; // 0xda JumpB
	goto Label_225; // 0xdb Jump
	
Label_220:
	var_189_string = "all"; // 0xdc PushS
	var_190_string = "idle"; // 0xdd PushS
	PlayAnimation(var_189_string, var_190_string); // 0xde Func
	goto Label_215; // 0xe0 Jump
}


func_587()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x24b PushV
	WaitForAnimEnd(); // 0x24c Func
	var_34_bool = 0; // 0x24e PushV
	func_681(var_34_bool); // 0x24f NEW_2
	var_35_bool = var_34_bool == 0; // 0x251 Not
	if(var_35_bool == 0) goto Label_596; // 0x252 JumpB
	return 14; // 0x253 Return
	
Label_596:
	var_36_int = 0; // 0x254 PushV
	func_859(var_36_int); // 0x255 NEW_2
	var_27_int = var_36_int; // 0x256 Mov
	var_28_int = 0; // 0x258 MovI
	
Label_601:
	var_49_bool = 0; // 0x259 PushV
	var_49_bool = 0; // 0x25a MovB
	var_50_int = 5; // 0x25b PushI
	var_51_bool = var_28_int < var_50_int; // 0x25c LT
	if(var_51_bool == 0) goto Label_611; // 0x25d JumpB
	var_52_bool = 0; // 0x25e PushV
	func_681(var_52_bool); // 0x25f NEW_2
	if(var_52_bool == 0) goto Label_611; // 0x261 JumpB
	var_49_bool = 1; // 0x262 MovB
	
Label_611:
	if(var_49_bool == 0) goto Label_663; // 0x263 JumpB
	var_53_int = 3; // 0x264 PushI
	irand(var_29_int, var_53_int); // 0x265 Func
	var_54_int = 0; // 0x267 PushI
	var_55_bool = var_29_int == var_54_int; // 0x268 Eq
	if(var_55_bool == 0) goto Label_635; // 0x269 JumpB
	var_56_int = var_27_int; // 0x26a Push
	if(var_56_int == 0) goto Label_634; // 0x26b JumpB
	irand(var_30_int, var_27_int); // 0x26c Func
	var_57_string = "all"; // 0x26e PushS
	var_58_string = ""; var_59_int = 0; // 0x26f PushV
	var_59_int = var_30_int; // 0x270 Mov
	func_852(var_58_string, var_59_int); // 0x271 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x273 Func
	WaitForAnimEnd(var_31_bool); // 0x275 Func
	var_60_bool = var_31_bool == 0; // 0x277 Not
	if(var_60_bool == 0) goto Label_634; // 0x278 JumpB
	goto Label_663; // 0x279 Jump
	
Label_663:
	ResetAAS(); // 0x297 Func
	return 14; // 0x299 Return
	
Label_634:
	goto Label_652; // 0x27a Jump
	
Label_652:
	var_61_bool = 0; // 0x28c PushV
	func_666(var_61_bool); // 0x28d NEW_2
	var_62_bool = var_61_bool == 0; // 0x28f Not
	if(var_62_bool == 0) goto Label_658; // 0x290 JumpB
	goto Label_663; // 0x291 Jump
	
Label_658:
	ResetAAS(); // 0x292 Func
	var_63_int = 1; // 0x294 PushI
	var_28_int = var_28_int + var_63_int; // 0x295 Add2
	goto Label_601; // 0x296 Jump
	
Label_635:
	var_64_int = 1; // 0x27b PushI
	var_65_bool = var_29_int == var_64_int; // 0x27c Eq
	if(var_65_bool == 0) goto Label_649; // 0x27d JumpB
	var_66_int = 4; // 0x27e PushI
	rand(var_32_float, var_66_int); // 0x27f Func
	var_67_int = 1; // 0x281 PushI
	var_68_int = var_32_float + var_67_int; // 0x282 Add
	Sleep(var_68_int, var_33_bool); // 0x283 Func
	var_69_bool = var_33_bool == 0; // 0x285 Not
	if(var_69_bool == 0) goto Label_648; // 0x286 JumpB
	goto Label_663; // 0x287 Jump
	
Label_648:
	goto Label_652; // 0x288 Jump
	
Label_649:
	var_70_int = var_28_int; // 0x289 Push
	if(var_70_int == 0) goto Label_652; // 0x28a JumpB
	goto Label_663; // 0x28b Jump
}


func_970()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x3ca PushV
	var_22_int = 744; // 0x3cb PushI
	var_23_int = 2; // 0x3cc PushI
	var_24_int = 539461; // 0x3cd PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x3ce Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x3d0 PushV
	var_26_object = var_21_object; // 0x3d1 Mov
	var_27_int = 740; // 0x3d2 MovI
	func_1009(var_25_bool, var_26_object, var_27_int); // 0x3d3 NEW_2
	return 2; // 0x3d5 Return
}


func_852(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x354 PushV
	var_45_string = "idle"; // 0x355 MovS
	var_46_int = var_43_int; // 0x356 Push
	if(var_46_int == 0) goto Label_857; // 0x357 JumpB
	var_45_string = var_45_string + var_43_int; // 0x358 Add2
	
Label_857:
	var_42_string = var_45_string; // 0x359 Mov
	return 2; // 0x35a Return
}


func_983()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x3d7 PushV
	var_51_int = 745; // 0x3d8 PushI
	var_52_int = 2; // 0x3d9 PushI
	var_53_int = 539462; // 0x3da PushI
	CreateDiaryEntry(var_50_object, var_51_int, var_52_int, var_53_int); // 0x3db Func
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0; // 0x3dd PushV
	var_55_object = var_50_object; // 0x3de Mov
	var_56_int = 740; // 0x3df MovI
	func_1009(var_54_bool, var_55_object, var_56_int); // 0x3e0 NEW_2
	return 2; // 0x3e2 Return
}


func_859(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x35b PushV
	var_39_int = 0; // 0x35c MovI
	
Label_861:
	var_41_string = "all"; // 0x35d PushS
	var_42_string = ""; var_43_int = 0; // 0x35e PushV
	var_43_int = var_39_int; // 0x35f Mov
	func_852(var_42_string, var_43_int); // 0x360 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x362 Func
	var_47_bool = var_40_bool == 0; // 0x364 Not
	if(var_47_bool == 0) goto Label_871; // 0x365 JumpB
	goto Label_874; // 0x366 Jump
	
Label_874:
	var_36_int = var_39_int; // 0x36a Mov
	return 4; // 0x36b Return
	
Label_871:
	var_48_int = 1; // 0x367 PushI
	var_39_int = var_39_int + var_48_int; // 0x368 Add2
	goto Label_861; // 0x369 Jump
}


func_226(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0xe3 PushV
	func_1062(var_93_bool); // 0xe4 NEW_2
	var_94_bool = var_93_bool == 0; // 0xe6 Not
	if(var_94_bool == 0) goto Label_233; // 0xe7 JumpB
	return 0; // 0xe8 Return
	
Label_233:
	var_95_bool = var_92_string == var_2_object; // 0xe9 Eq
	if(var_95_bool == 0) goto Label_236; // 0xea JumpB
	return 0; // 0xeb Return
	
Label_236:
	var_96_string = ""; var_97_bool = 0; // 0xec PushV
	var_96_string = var_92_string; // 0xed Mov
	var_98_string = ""; // 0xee PushS
	var_99_bool = var_92_string == var_98_string; // 0xef Eq
	if(var_99_bool == 0) goto Label_243; // 0xf0 JumpB
	var_97_bool = 0; // 0xf1 MovB
	goto Label_244; // 0xf2 Jump
	
Label_244:
	func_787(var_96_string, var_97_bool); // 0xf4 NEW_2
	var_2_object = var_92_string; // 0xf6 TMov
	return 0; // 0xf7 Return
	
Label_243:
	var_97_bool = 1; // 0xf3 MovB
}


func_996(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x3e4 PushV
	GetDiaryRoot(var_36_object); // 0x3e5 Func
	var_37_bool = var_36_object == 0; // 0x3e7 Not
	if(var_37_bool == 0) goto Label_1006; // 0x3e8 JumpB
	var_38_string = "Can't retrieve diary root"; // 0x3e9 PushS
	Trace(var_38_string); // 0x3ea Func
	var_34_object = 0; // 0x3ec MovB
	return 2; // 0x3ed Return
	
Label_1006:
	var_34_object = var_36_object; // 0x3ee Mov
	return 2; // 0x3ef Return
}


func_876()
{
	var_18_string = "k5q04_bring_water"; // 0x36d PushS
	var_19_int = 1; // 0x36e PushI
	SetVariable(var_18_string, var_19_int); // 0x36f Func
	func_970(); // 0x372 NEW_2
	return 0; // 0x374 Return
}


func_1009(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x3f1 PushV
	var_34_object = Obj(); // 0x3f2 PushV
	func_996(var_34_object); // 0x3f3 NEW_2
	var_31_object = var_34_object; // 0x3f4 Mov
	Find(var_27_int, var_32_object); // 0x3f6 ObjFunc
	var_39_bool = var_32_object == 0; // 0x3f8 Not
	if(var_39_bool == 0) goto Label_1024; // 0x3f9 JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x3fa PushS
	var_41_int = var_40_string + var_27_int; // 0x3fb Add
	Trace(var_41_int); // 0x3fc Func
	var_25_bool = 0; // 0x3fe MovB
	return 6; // 0x3ff Return
	
Label_1024:
	AddChild(var_26_object); // 0x400 ObjFunc
	var_42_int = 7; // 0x402 PushI
	SendWorldWndMessage(var_42_int); // 0x403 Func
	GetCategory(var_33_int); // 0x405 ObjFunc
	SetDiarySection(var_33_int); // 0x407 Func
	var_25_bool = 0; // 0x409 MovB
	return 6; // 0x40a Return
}


func_754()
{
	var_193_bool = 0; var_194_bool = 0; // 0x2f2 PushV
	CameraSwitchToNormal(); // 0x2f3 Func
	var_195_bool = 0; // 0x2f5 PushV
	func_1062(var_195_bool); // 0x2f6 NEW_2
	if(var_195_bool == 0) goto Label_762; // 0x2f8 JumpB
	goto Label_770; // 0x2f9 Jump
	
Label_770:
	return 2; // 0x302 Return
	
Label_762:
	var_196_string = "head"; // 0x2fa PushS
	HasAnimationTrack(var_194_bool, var_196_string); // 0x2fb Func
	var_197_bool = var_194_bool; // 0x2fd Push
	if(var_197_bool == 0) goto Label_770; // 0x2fe JumpB
	var_198_string = "head"; // 0x2ff PushS
	UnlookAsync(var_198_string); // 0x300 Func
}


func_885()
{
	var_47_string = "k5q04"; // 0x376 PushS
	var_48_int = 4; // 0x377 PushI
	SetVariable(var_47_string, var_48_int); // 0x378 Func
	func_983(); // 0x37b NEW_2
	return 0; // 0x37d Return
}


func_508(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x1fd PushV
	func_681(var_13_bool); // 0x1fe NEW_2
	var_16_bool = var_13_bool == 0; // 0x200 Not
	if(var_16_bool == 0) goto Label_515; // 0x201 JumpB
	return 0; // 0x202 Return
	
Label_515:
	var_17_string = "player"; // 0x203 PushS
	FindActor(var_9_object, var_17_string); // 0x204 Func
	var_2_object = 0; // 0x206 TMovB
	var_3_string = 0; // 0x207 TMovB
	var_0_object = var_11_float; // 0x208 TMov
	var_1_object = var_12_float; // 0x209 TMov
	var_18_int = 10; // 0x20a PushI
	var_19_float = 1.0; // 0x20b PushF
	SetTimer(var_18_int, var_19_float); // 0x20c Func
	func_587(); // 0x20f NEW_2
	var_71_bool = var_3_string == 0; // 0x211 Not
	if(var_71_bool == 0) goto Label_534; // 0x212 JumpB
	var_72_int = 10; // 0x213 PushI
	KillTimer(var_72_int); // 0x214 Func
	
Label_534:
	return 0; // 0x216 Return
}


func_894()
{
	var_59_int = 0; var_60_int = 0; // 0x37e PushV
	var_61_string = "bottle_water"; // 0x37f PushS
	var_62_int = 20; // 0x380 PushI
	RemoveItemByType(var_60_int, var_61_string, var_62_int); // 0x381 ObjFunc
	return 2; // 0x383 Return
}


