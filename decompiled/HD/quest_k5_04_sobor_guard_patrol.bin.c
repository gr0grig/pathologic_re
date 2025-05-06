task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xf9 PushI
	if(var_12_int == 0) goto Label_486; // 0xfa JumpB
	func_815(); // 0xfc NEW_2
	var_14_int = 41375; // 0xfe PushI
	var_15_bool = var_11_object == var_14_int; // 0xff Eq
	if(var_15_bool == 0) goto Label_262; // 0x100 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0x101 PushV
	var_16_object = var_1_object; // 0x102 MovT
	var_17_object = var_0_object; // 0x103 MovT
	func_878(); // 0x104 NEW_2
	
Label_262:
	var_43_int = 41380; // 0x106 PushI
	var_44_bool = var_11_object == var_43_int; // 0x107 Eq
	if(var_44_bool == 0) goto Label_285; // 0x108 JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x109 PushV
	var_45_object = var_1_object; // 0x10a MovT
	var_46_object = var_0_object; // 0x10b MovT
	func_887(); // 0x10c NEW_2
	var_57_object = Obj(); var_58_object = Obj(); // 0x10e PushV
	var_57_object = var_1_object; // 0x10f MovT
	var_58_object = var_0_object; // 0x110 MovT
	func_896(); // 0x111 NEW_2
	var_63_object = Obj(); var_64_object = Obj(); // 0x113 PushV
	var_63_object = var_1_object; // 0x114 MovT
	var_64_object = var_0_object; // 0x115 MovT
	func_902(); // 0x116 NEW_2
	var_67_object = Obj(); var_68_object = Obj(); // 0x118 PushV
	var_67_object = var_1_object; // 0x119 MovT
	var_68_object = var_0_object; // 0x11a MovT
	func_908(); // 0x11b NEW_2
	
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
	func_927(var_102_object); // 0x12f NEW_2
	if(var_101_bool == 0) goto Label_313; // 0x131 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x132 PushV
	var_110_object = var_1_object; // 0x133 MovT
	func_939(var_110_object); // 0x134 NEW_2
	var_115_bool = var_109_bool == 0; // 0x136 Not
	if(var_115_bool == 0) goto Label_313; // 0x137 JumpB
	var_100_bool = 1; // 0x138 MovB
	
Label_313:
	if(var_100_bool == 0) goto Label_330; // 0x139 JumpB
	var_116_bool = 0; // 0x13a PushV
	var_116_bool = 0; // 0x13b MovB
	var_117_bool = 0; var_118_object = Obj(); // 0x13c PushV
	var_118_object = var_1_object; // 0x13d MovT
	func_915(var_118_object); // 0x13e NEW_2
	if(var_117_bool == 0) goto Label_328; // 0x140 JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x141 PushV
	var_124_object = var_1_object; // 0x142 MovT
	func_939(var_124_object); // 0x143 NEW_2
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
	func_927(var_133_object); // 0x158 NEW_2
	if(var_132_bool == 0) goto Label_353; // 0x15a JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0x15b PushV
	var_135_object = var_1_object; // 0x15c MovT
	func_939(var_135_object); // 0x15d NEW_2
	if(var_134_bool == 0) goto Label_353; // 0x15f JumpB
	var_131_bool = 1; // 0x160 MovB
	
Label_353:
	if(var_131_bool == 0) goto Label_360; // 0x161 JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0x162 PushV
	var_137_object = var_1_object; // 0x163 MovT
	func_951(var_136_bool, var_137_object); // 0x164 NEW_2
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
	func_939(var_148_object); // 0x16f NEW_2
	if(var_147_bool == 0) goto Label_376; // 0x171 JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x172 PushV
	var_150_object = var_1_object; // 0x173 MovT
	func_951(var_149_bool, var_150_object); // 0x174 NEW_2
	if(var_149_bool == 0) goto Label_376; // 0x176 JumpB
	var_146_bool = 1; // 0x177 MovB
	
Label_376:
	if(var_146_bool == 0) goto Label_383; // 0x178 JumpB
	var_151_bool = 0; var_152_object = Obj(); // 0x179 PushV
	var_152_object = var_1_object; // 0x17a MovT
	func_915(var_152_object); // 0x17b NEW_2
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
	func_1064(var_190_bool); // 0x1dc NEW_2
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
	func_804(var_27_object); // 0x232 NEW_2
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


func_896()
{
	var_59_int = 0; var_60_int = 0; // 0x380 PushV
	var_61_string = "bottle_water"; // 0x381 PushS
	var_62_int = 20; // 0x382 PushI
	RemoveItemByType(var_60_int, var_61_string, var_62_int); // 0x383 ObjFunc
	return 2; // 0x385 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_686(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_1058(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_1056(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_1060(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_1062(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_1039(var_77_int); // 0x22 NEW_2
	SetPlayerName(var_77_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_85_bool = var_22_bool; // 0x29 Push
	if(var_85_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x2f PushV
	var_86_object = var_15_object; // 0x30 Mov
	var_87_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_192_bool = var_24_bool == 0; // 0x38 Not
	if(var_192_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_193_object = Obj(); // 0x3f PushV
	var_193_object = var_15_object; // 0x40 Mov
	func_755(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_773(var_176_string)
{
	var_177_bool = 0; var_178_float = 0; var_179_float = 0; var_180_bool = 0; var_181_float = 0; var_182_float = 0; // 0x305 PushV
	lshHasAnimation(var_180_bool, var_176_string); // 0x306 Func
	var_183_bool = var_180_bool; // 0x308 Push
	if(var_183_bool == 0) goto Label_784; // 0x309 JumpB
	lshGetAnimTimes(var_176_string, var_181_float, var_182_float); // 0x30a Func
	var_184_bool = 0; // 0x30c PushB
	lshPlayAnimation(var_181_float, var_182_float, var_184_bool); // 0x30d Func
	goto Label_788; // 0x30f Jump
	
Label_788:
	return 6; // 0x314 Return
	
Label_784:
	var_185_string = "Can't find lsh animation : "; // 0x310 PushS
	var_186_int = var_185_string + var_176_string; // 0x311 Add
	Trace(var_186_int); // 0x312 Func
}


func_902()
{
	var_65_string = "playsound"; // 0x387 PushS
	var_66_string = "giveitem"; // 0x388 PushS
	TriggerWorld(var_65_string, var_66_string); // 0x389 Func
	return 0; // 0x38b Return
}


func_908()
{
	var_69_string = ""; var_70_bool = 0; // 0x38d PushV
	var_69_string = "sobor@door1"; // 0x38e MovS
	var_70_bool = 0; // 0x38f MovB
	func_837(var_69_string, var_70_bool); // 0x390 NEW_2
	return 0; // 0x392 Return
}


func_1039(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x40f PushV
	var_80_string = "branch"; // 0x410 PushS
	GetVariable(var_80_string, var_79_int); // 0x411 Func
	var_81_int = 0; // 0x413 PushI
	var_82_bool = var_79_int == var_81_int; // 0x414 Eq
	if(var_82_bool == 0) goto Label_1049; // 0x415 JumpB
	var_77_int = 1; // 0x416 MovI
	return 2; // 0x417 Return
	
Label_1049:
	var_83_int = 1; // 0x419 PushI
	var_84_bool = var_79_int == var_83_int; // 0x41a Eq
	if(var_84_bool == 0) goto Label_1054; // 0x41b JumpB
	var_77_int = 2; // 0x41c MovI
	return 2; // 0x41d Return
	
Label_1054:
	var_77_int = 3; // 0x41e MovI
	return 2; // 0x41f Return
}


func_915(var_129_bool)
{
	var_131_int = 0; var_132_string = ""; // 0x394 PushV
	var_132_string = "k5q04"; // 0x395 MovS
	func_832(var_131_int, var_132_string); // 0x396 NEW_2
	var_133_int = 2; // 0x398 PushI
	var_134_bool = var_131_int == var_133_int; // 0x399 Eq
	if(var_134_bool == 0) goto Label_925; // 0x39a JumpB
	var_129_bool = 1; // 0x39b MovB
	return 0; // 0x39c Return
	
Label_925:
	var_129_bool = 0; // 0x39d MovB
	return 0; // 0x39e Return
}


func_789(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x315 PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x316 Func
	var_107_bool = var_104_bool; // 0x318 Push
	if(var_107_bool == 0) goto Label_799; // 0x319 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x31a Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x31c Func
	goto Label_803; // 0x31e Jump
	
Label_803:
	return 6; // 0x323 Return
	
Label_799:
	var_108_string = "Can't find lsh animation : "; // 0x31f PushS
	var_109_int = var_108_string + var_97_string; // 0x320 Add
	Trace(var_109_int); // 0x321 Func
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


func_927(var_113_bool)
{
	var_115_int = 0; var_116_string = ""; // 0x3a0 PushV
	var_116_string = "k5q04"; // 0x3a1 MovS
	func_832(var_115_int, var_116_string); // 0x3a2 NEW_2
	var_119_int = 3; // 0x3a4 PushI
	var_120_bool = var_115_int == var_119_int; // 0x3a5 Eq
	if(var_120_bool == 0) goto Label_937; // 0x3a6 JumpB
	var_113_bool = 1; // 0x3a7 MovB
	return 0; // 0x3a8 Return
	
Label_937:
	var_113_bool = 0; // 0x3a9 MovB
	return 0; // 0x3aa Return
}


func_1056(var_74_int)
{
	var_74_int = 515572; // 0x420 MovI
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


func_1058(var_73_int)
{
	var_73_int = 504031; // 0x422 MovI
	return 0; // 0x423 Return
}


func_1060(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png"; // 0x424 MovS
	return 0; // 0x425 Return
}


func_804(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x324 PushV
	GetEyesHeight(var_30_float); // 0x325 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x327 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x328 PushE
	var_32_float = var_30_float; // 0x329 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x32a PopE
	var_33_string = "head"; // 0x32b PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x32c Func
	return 4; // 0x32e Return
}


func_1062(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png"; // 0x426 MovS
	return 0; // 0x427 Return
}


func_1064(var_68_bool)
{
	var_68_bool = 0; // 0x428 MovB
	return 0; // 0x429 Return
}


func_681(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x2a9 PushV
	IsLoaded(var_15_bool); // 0x2aa Func
	var_13_bool = var_15_bool; // 0x2ac Mov
	return 2; // 0x2ad Return
}


func_939(var_121_bool)
{
	var_123_int = 0; var_124_string = ""; // 0x3ac PushV
	var_124_string = "k5q04_bring_water"; // 0x3ad MovS
	func_832(var_123_int, var_124_string); // 0x3ae NEW_2
	var_125_int = 0; // 0x3b0 PushI
	var_126_bool = var_123_int != var_125_int; // 0x3b1 Neq
	if(var_126_bool == 0) goto Label_949; // 0x3b2 JumpB
	var_121_bool = 1; // 0x3b3 MovB
	return 0; // 0x3b4 Return
	
Label_949:
	var_121_bool = 0; // 0x3b5 MovB
	return 0; // 0x3b6 Return
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
	func_822(var_52_cvector, var_53_cvector); // 0x2c9 NEW_2
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
	var_65_bool = 1; // 0x2d9 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x2da Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x2dc PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x2dd PushE
	Rotate(var_66_float, var_67_float); // 0x2de Func
	var_68_bool = 0; // 0x2e0 PushV
	func_1064(var_68_bool); // 0x2e1 NEW_2
	if(var_68_bool == 0) goto Label_741; // 0x2e3 JumpB
	goto Label_749; // 0x2e4 Jump
	
Label_749:
	CameraWaitForPlayFinish(); // 0x2ed Func
	ResumeWorld(); // 0x2ef Func
	var_25_bool = 1; // 0x2f1 MovB
	return 18; // 0x2f2 Return
	
Label_741:
	var_69_string = "head"; // 0x2e5 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x2e6 Func
	var_70_bool = var_45_bool; // 0x2e8 Push
	if(var_70_bool == 0) goto Label_749; // 0x2e9 JumpB
	var_71_string = "head"; // 0x2ea PushS
	LookAsyncCamera(var_71_string); // 0x2eb Func
}


func_815()
{
	var_13_bool = 0; // 0x32f PushV
	func_1064(var_13_bool); // 0x330 NEW_2
	if(var_13_bool == 0) goto Label_821; // 0x332 JumpB
	lshStopSpeech(); // 0x333 Func
	
Label_821:
	return 0; // 0x335 Return
}


func_822(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x336 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x337 Or
	var_56_float = sqrt(var_57_int); // 0x338 Sqrt2
	var_58_float = 0.0; // 0x339 PushF
	var_59_bool = var_56_float < var_58_float; // 0x33a LT
	if(var_59_bool == 0) goto Label_830; // 0x33b JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x33c MovV
	return 2; // 0x33d Return
	
Label_830:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x33e Div2
	return 2; // 0x33f Return
}


func_951(var_148_bool, var_149_object)
{
	var_150_bool = 0; var_151_object = Obj(); // 0x3b8 PushV
	var_151_object = var_149_object; // 0x3b9 Mov
	func_961(var_151_object); // 0x3ba NEW_2
	if(var_150_bool == 0) goto Label_959; // 0x3bc JumpB
	var_148_bool = 1; // 0x3bd MovB
	return 0; // 0x3be Return
	
Label_959:
	var_148_bool = 0; // 0x3bf MovB
	return 0; // 0x3c0 Return
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


func_832(var_115_int, var_116_string)
{
	var_117_int = 0; var_118_int = 0; // 0x340 PushV
	GetVariable(var_116_string, var_118_int); // 0x341 Func
	var_115_int = var_118_int; // 0x343 Mov
	return 2; // 0x344 Return
}


func_961(var_150_bool)
{
	var_152_int = 0; var_153_int = 0; // 0x3c1 PushV
	var_154_string = "bottle_water"; // 0x3c2 PushS
	GetItemCountOfType(var_153_int, var_154_string); // 0x3c3 ObjFunc
	var_155_int = 20; // 0x3c5 PushI
	var_156_bool = var_153_int >= var_155_int; // 0x3c6 GE
	if(var_156_bool == 0) goto Label_970; // 0x3c7 JumpB
	var_150_bool = 1; // 0x3c8 MovB
	return 2; // 0x3c9 Return
	
Label_970:
	var_150_bool = 0; // 0x3ca MovB
	return 2; // 0x3cb Return
}


func_837(var_69_string, var_70_bool)
{
	var_71_object = Obj(); var_72_object = Obj(); // 0x345 PushV
	FindActor(var_72_object, var_69_string); // 0x346 Func
	var_73_bool = var_72_object == 0; // 0x348 Not
	if(var_73_bool == 0) goto Label_849; // 0x349 JumpB
	var_74_string = "Door "; // 0x34a PushS
	var_75_int = var_74_string + var_69_string; // 0x34b Add
	var_76_string = " not found"; // 0x34c PushS
	var_77_int = var_75_int + var_76_string; // 0x34d Add
	Trace(var_77_int); // 0x34e Func
	goto Label_852; // 0x350 Jump
	
Label_852:
	return 2; // 0x354 Return
	
Label_849:
	var_78_string = "locked"; // 0x351 PushS
	SetProperty(var_78_string, var_70_bool); // 0x352 ObjFunc
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_196; // 0x4f JumpB
	var_93_string = ""; // 0x50 PushV
	var_93_string = "Neutral"; // 0x51 MovS
	func_226(var_87_object, var_93_string); // 0x52 NEW_2
	var_110_int = 539441; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_bool = 0; // 0x59 PushV
	var_111_bool = 1; // 0x5a MovB
	var_112_bool = 0; // 0x5b PushV
	var_112_bool = 0; // 0x5c MovB
	var_113_bool = 0; var_114_object = Obj(); // 0x5d PushV
	var_114_object = var_1_object; // 0x5e MovT
	func_927(var_114_object); // 0x5f NEW_2
	if(var_113_bool == 0) goto Label_105; // 0x61 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x62 PushV
	var_122_object = var_1_object; // 0x63 MovT
	func_939(var_122_object); // 0x64 NEW_2
	var_127_bool = var_121_bool == 0; // 0x66 Not
	if(var_127_bool == 0) goto Label_105; // 0x67 JumpB
	var_112_bool = 1; // 0x68 MovB
	
Label_105:
	if(var_112_bool == 0) goto Label_122; // 0x69 JumpB
	var_128_bool = 0; // 0x6a PushV
	var_128_bool = 0; // 0x6b MovB
	var_129_bool = 0; var_130_object = Obj(); // 0x6c PushV
	var_130_object = var_1_object; // 0x6d MovT
	func_915(var_130_object); // 0x6e NEW_2
	if(var_129_bool == 0) goto Label_120; // 0x70 JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x71 PushV
	var_136_object = var_1_object; // 0x72 MovT
	func_939(var_136_object); // 0x73 NEW_2
	var_137_bool = var_135_bool == 0; // 0x75 Not
	if(var_137_bool == 0) goto Label_120; // 0x76 JumpB
	var_128_bool = 1; // 0x77 MovB
	
Label_120:
	if(var_128_bool == 0) goto Label_122; // 0x78 JumpB
	var_111_bool = 0; // 0x79 MovB
	
Label_122:
	if(var_111_bool == 0) goto Label_128; // 0x7a JumpB
	var_138_int = 539442; // 0x7b PushI
	var_139_int = 41374; // 0x7c PushI
	var_140_int = 41373; // 0x7d PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x7e TObjFunc
	
Label_128:
	var_141_bool = 0; // 0x80 PushV
	var_141_bool = 1; // 0x81 MovB
	var_142_bool = 0; // 0x82 PushV
	var_142_bool = 0; // 0x83 MovB
	var_143_bool = 0; // 0x84 PushV
	var_143_bool = 0; // 0x85 MovB
	var_144_bool = 0; var_145_object = Obj(); // 0x86 PushV
	var_145_object = var_1_object; // 0x87 MovT
	func_927(var_145_object); // 0x88 NEW_2
	if(var_144_bool == 0) goto Label_145; // 0x8a JumpB
	var_146_bool = 0; var_147_object = Obj(); // 0x8b PushV
	var_147_object = var_1_object; // 0x8c MovT
	func_939(var_147_object); // 0x8d NEW_2
	if(var_146_bool == 0) goto Label_145; // 0x8f JumpB
	var_143_bool = 1; // 0x90 MovB
	
Label_145:
	if(var_143_bool == 0) goto Label_152; // 0x91 JumpB
	var_148_bool = 0; var_149_object = Obj(); // 0x92 PushV
	var_149_object = var_1_object; // 0x93 MovT
	func_951(var_148_bool, var_149_object); // 0x94 NEW_2
	if(var_148_bool == 0) goto Label_152; // 0x96 JumpB
	var_142_bool = 1; // 0x97 MovB
	
Label_152:
	if(var_142_bool == 0) goto Label_177; // 0x98 JumpB
	var_157_bool = 0; // 0x99 PushV
	var_157_bool = 0; // 0x9a MovB
	var_158_bool = 0; // 0x9b PushV
	var_158_bool = 0; // 0x9c MovB
	var_159_bool = 0; var_160_object = Obj(); // 0x9d PushV
	var_160_object = var_1_object; // 0x9e MovT
	func_939(var_160_object); // 0x9f NEW_2
	if(var_159_bool == 0) goto Label_168; // 0xa1 JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0xa2 PushV
	var_162_object = var_1_object; // 0xa3 MovT
	func_951(var_161_bool, var_162_object); // 0xa4 NEW_2
	if(var_161_bool == 0) goto Label_168; // 0xa6 JumpB
	var_158_bool = 1; // 0xa7 MovB
	
Label_168:
	if(var_158_bool == 0) goto Label_175; // 0xa8 JumpB
	var_163_bool = 0; var_164_object = Obj(); // 0xa9 PushV
	var_164_object = var_1_object; // 0xaa MovT
	func_915(var_164_object); // 0xab NEW_2
	if(var_163_bool == 0) goto Label_175; // 0xad JumpB
	var_157_bool = 1; // 0xae MovB
	
Label_175:
	if(var_157_bool == 0) goto Label_177; // 0xaf JumpB
	var_141_bool = 0; // 0xb0 MovB
	
Label_177:
	if(var_141_bool == 0) goto Label_183; // 0xb1 JumpB
	var_165_int = 539445; // 0xb2 PushI
	var_166_int = 41377; // 0xb3 PushI
	var_167_int = 41376; // 0xb4 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0xb5 TObjFunc
	
Label_183:
	var_168_int = 539450; // 0xb7 PushI
	var_169_int = -1; // 0xb8 PushI
	var_170_int = 41381; // 0xb9 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0xba TObjFunc
	var_171_int = 540739; // 0xbc PushI
	var_172_int = -1; // 0xbd PushI
	var_173_int = 42777; // 0xbe PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0xbf TObjFunc
	goto Label_196; // 0xc1 Jump
	
Label_196:
	var_174_bool = 0; // 0xc4 PushV
	func_1064(var_174_bool); // 0xc5 NEW_2
	if(var_174_bool == 0) goto Label_211; // 0xc7 JumpB
	
Label_200:
	lshWaitForAnimEnd(); // 0xc8 Func
	var_175_string = var_3_string; // 0xca PushT
	if(var_175_string == 0) goto Label_205; // 0xcb JumpB
	goto Label_210; // 0xcc Jump
	
Label_210:
	goto Label_225; // 0xd2 Jump
	
Label_225:
	return 0; // 0xe1 Return
	
Label_205:
	var_176_string = ""; // 0xcd PushV
	var_176_string = var_2_object; // 0xce MovT
	func_773(var_176_string); // 0xcf NEW_2
	goto Label_200; // 0xd1 Jump
	
Label_211:
	var_187_string = "all"; // 0xd3 PushS
	var_188_string = "idle"; // 0xd4 PushS
	PlayAnimation(var_187_string, var_188_string); // 0xd5 Func
	
Label_215:
	WaitForAnimEnd(); // 0xd7 Func
	var_189_string = var_3_string; // 0xd9 PushT
	if(var_189_string == 0) goto Label_220; // 0xda JumpB
	goto Label_225; // 0xdb Jump
	
Label_220:
	var_190_string = "all"; // 0xdc PushS
	var_191_string = "idle"; // 0xdd PushS
	PlayAnimation(var_190_string, var_191_string); // 0xde Func
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
	func_861(var_36_int); // 0x255 NEW_2
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
	func_854(var_58_string, var_59_int); // 0x271 NEW_2
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


func_972()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x3cc PushV
	var_22_int = 744; // 0x3cd PushI
	var_23_int = 2; // 0x3ce PushI
	var_24_int = 539461; // 0x3cf PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x3d0 Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x3d2 PushV
	var_26_object = var_21_object; // 0x3d3 Mov
	var_27_int = 740; // 0x3d4 MovI
	func_1011(var_25_bool, var_26_object, var_27_int); // 0x3d5 NEW_2
	return 2; // 0x3d7 Return
}


func_854(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x356 PushV
	var_45_string = "idle"; // 0x357 MovS
	var_46_int = var_43_int; // 0x358 Push
	if(var_46_int == 0) goto Label_859; // 0x359 JumpB
	var_45_string = var_45_string + var_43_int; // 0x35a Add2
	
Label_859:
	var_42_string = var_45_string; // 0x35b Mov
	return 2; // 0x35c Return
}


func_985()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x3d9 PushV
	var_51_int = 745; // 0x3da PushI
	var_52_int = 2; // 0x3db PushI
	var_53_int = 539462; // 0x3dc PushI
	CreateDiaryEntry(var_50_object, var_51_int, var_52_int, var_53_int); // 0x3dd Func
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0; // 0x3df PushV
	var_55_object = var_50_object; // 0x3e0 Mov
	var_56_int = 740; // 0x3e1 MovI
	func_1011(var_54_bool, var_55_object, var_56_int); // 0x3e2 NEW_2
	return 2; // 0x3e4 Return
}


func_861(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x35d PushV
	var_39_int = 0; // 0x35e MovI
	
Label_863:
	var_41_string = "all"; // 0x35f PushS
	var_42_string = ""; var_43_int = 0; // 0x360 PushV
	var_43_int = var_39_int; // 0x361 Mov
	func_854(var_42_string, var_43_int); // 0x362 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x364 Func
	var_47_bool = var_40_bool == 0; // 0x366 Not
	if(var_47_bool == 0) goto Label_873; // 0x367 JumpB
	goto Label_876; // 0x368 Jump
	
Label_876:
	var_36_int = var_39_int; // 0x36c Mov
	return 4; // 0x36d Return
	
Label_873:
	var_48_int = 1; // 0x369 PushI
	var_39_int = var_39_int + var_48_int; // 0x36a Add2
	goto Label_863; // 0x36b Jump
}


func_226(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0xe3 PushV
	func_1064(var_94_bool); // 0xe4 NEW_2
	var_95_bool = var_94_bool == 0; // 0xe6 Not
	if(var_95_bool == 0) goto Label_233; // 0xe7 JumpB
	return 0; // 0xe8 Return
	
Label_233:
	var_96_bool = var_93_string == var_2_object; // 0xe9 Eq
	if(var_96_bool == 0) goto Label_236; // 0xea JumpB
	return 0; // 0xeb Return
	
Label_236:
	var_97_string = ""; var_98_bool = 0; // 0xec PushV
	var_97_string = var_93_string; // 0xed Mov
	var_99_string = ""; // 0xee PushS
	var_100_bool = var_93_string == var_99_string; // 0xef Eq
	if(var_100_bool == 0) goto Label_243; // 0xf0 JumpB
	var_98_bool = 0; // 0xf1 MovB
	goto Label_244; // 0xf2 Jump
	
Label_244:
	func_789(var_97_string, var_98_bool); // 0xf4 NEW_2
	var_2_object = var_93_string; // 0xf6 TMov
	return 0; // 0xf7 Return
	
Label_243:
	var_98_bool = 1; // 0xf3 MovB
}


func_998(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x3e6 PushV
	GetDiaryRoot(var_36_object); // 0x3e7 Func
	var_37_bool = var_36_object == 0; // 0x3e9 Not
	if(var_37_bool == 0) goto Label_1008; // 0x3ea JumpB
	var_38_string = "Can't retrieve diary root"; // 0x3eb PushS
	Trace(var_38_string); // 0x3ec Func
	var_34_object = 0; // 0x3ee MovB
	return 2; // 0x3ef Return
	
Label_1008:
	var_34_object = var_36_object; // 0x3f0 Mov
	return 2; // 0x3f1 Return
}


func_878()
{
	var_18_string = "k5q04_bring_water"; // 0x36f PushS
	var_19_int = 1; // 0x370 PushI
	SetVariable(var_18_string, var_19_int); // 0x371 Func
	func_972(); // 0x374 NEW_2
	return 0; // 0x376 Return
}


func_755()
{
	var_194_bool = 0; var_195_bool = 0; // 0x2f3 PushV
	var_196_bool = 1; // 0x2f4 PushB
	CameraSwitchToNormal(var_196_bool); // 0x2f5 Func
	var_197_bool = 0; // 0x2f7 PushV
	func_1064(var_197_bool); // 0x2f8 NEW_2
	if(var_197_bool == 0) goto Label_764; // 0x2fa JumpB
	goto Label_772; // 0x2fb Jump
	
Label_772:
	return 2; // 0x304 Return
	
Label_764:
	var_198_string = "head"; // 0x2fc PushS
	HasAnimationTrack(var_195_bool, var_198_string); // 0x2fd Func
	var_199_bool = var_195_bool; // 0x2ff Push
	if(var_199_bool == 0) goto Label_772; // 0x300 JumpB
	var_200_string = "head"; // 0x301 PushS
	UnlookAsync(var_200_string); // 0x302 Func
}


func_1011(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x3f3 PushV
	var_34_object = Obj(); // 0x3f4 PushV
	func_998(var_34_object); // 0x3f5 NEW_2
	var_31_object = var_34_object; // 0x3f6 Mov
	Find(var_27_int, var_32_object); // 0x3f8 ObjFunc
	var_39_bool = var_32_object == 0; // 0x3fa Not
	if(var_39_bool == 0) goto Label_1026; // 0x3fb JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x3fc PushS
	var_41_int = var_40_string + var_27_int; // 0x3fd Add
	Trace(var_41_int); // 0x3fe Func
	var_25_bool = 0; // 0x400 MovB
	return 6; // 0x401 Return
	
Label_1026:
	AddChild(var_26_object); // 0x402 ObjFunc
	var_42_int = 7; // 0x404 PushI
	SendWorldWndMessage(var_42_int); // 0x405 Func
	GetCategory(var_33_int); // 0x407 ObjFunc
	SetDiarySection(var_33_int); // 0x409 Func
	var_25_bool = 0; // 0x40b MovB
	return 6; // 0x40c Return
}


func_887()
{
	var_47_string = "k5q04"; // 0x378 PushS
	var_48_int = 4; // 0x379 PushI
	SetVariable(var_47_string, var_48_int); // 0x37a Func
	func_985(); // 0x37d NEW_2
	return 0; // 0x37f Return
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


