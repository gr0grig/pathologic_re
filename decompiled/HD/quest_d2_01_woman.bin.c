task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xb4 PushI
	if(var_8_int == 0) goto Label_386; // 0xb5 JumpB
	func_563(); // 0xb7 NEW_2
	var_10_int = 8110; // 0xb9 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xba Eq
	if(var_11_bool == 0) goto Label_203; // 0xbb JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xbc PushV
	var_12_object = var_1_object; // 0xbd MovT
	var_13_object = var_0_object; // 0xbe MovT
	func_658(); // 0xbf NEW_2
	var_16_object = Obj(); var_17_object = Obj(); // 0xc1 PushV
	var_16_object = var_1_object; // 0xc2 MovT
	var_17_object = var_0_object; // 0xc3 MovT
	func_664(var_17_object); // 0xc4 NEW_2
	var_87_object = Obj(); var_88_object = Obj(); // 0xc6 PushV
	var_87_object = var_1_object; // 0xc7 MovT
	var_88_object = var_0_object; // 0xc8 MovT
	func_652(); // 0xc9 NEW_2
	
Label_203:
	var_91_int = 7438; // 0xcb PushI
	var_92_bool = var_6_int == var_91_int; // 0xcc Eq
	if(var_92_bool == 0) goto Label_251; // 0xcd JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0xce PushV
	var_94_object = var_1_object; // 0xcf MovT
	func_701(var_94_object); // 0xd0 NEW_2
	if(var_93_bool == 0) goto Label_236; // 0xd2 JumpB
	var_101_string = ""; // 0xd3 PushV
	var_101_string = "Neutral"; // 0xd4 MovS
	func_157(var_7_bool, var_101_string); // 0xd5 NEW_2
	var_118_int = 506748; // 0xd7 PushI
	SetMessage(var_118_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_119_int = 506749; // 0xdc PushI
	var_120_int = 7440; // 0xdd PushI
	var_121_int = 7439; // 0xde PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0xdf TObjFunc
	var_122_int = 507345; // 0xe1 PushI
	var_123_int = 7440; // 0xe2 PushI
	var_124_int = 8098; // 0xe3 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0xe4 TObjFunc
	var_125_int = 507350; // 0xe6 PushI
	var_126_int = 7440; // 0xe7 PushI
	var_127_int = 8104; // 0xe8 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0xe9 TObjFunc
	return 0; // 0xeb Return
	
Label_236:
	var_128_string = ""; // 0xec PushV
	var_128_string = "Neutral"; // 0xed MovS
	func_157(var_7_bool, var_128_string); // 0xee NEW_2
	var_129_int = 506753; // 0xf0 PushI
	SetMessage(var_129_int); // 0xf1 TObjFunc
	ClearReplies(); // 0xf3 TObjFunc
	var_130_int = 506754; // 0xf5 PushI
	var_131_int = 8102; // 0xf6 PushI
	var_132_int = 7444; // 0xf7 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0xf8 TObjFunc
	return 0; // 0xfa Return
	
Label_251:
	var_133_int = 8102; // 0xfb PushI
	var_134_bool = var_6_int == var_133_int; // 0xfc Eq
	if(var_134_bool == 0) goto Label_269; // 0xfd JumpB
	var_135_string = ""; // 0xfe PushV
	var_135_string = "Neutral"; // 0xff MovS
	func_157(var_7_bool, var_135_string); // 0x100 NEW_2
	var_136_int = 507348; // 0x102 PushI
	SetMessage(var_136_int); // 0x103 TObjFunc
	ClearReplies(); // 0x105 TObjFunc
	var_137_int = 507349; // 0x107 PushI
	var_138_int = -1; // 0x108 PushI
	var_139_int = 8103; // 0x109 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x10a TObjFunc
	return 0; // 0x10c Return
	
Label_269:
	var_140_int = 7440; // 0x10d PushI
	var_141_bool = var_6_int == var_140_int; // 0x10e Eq
	if(var_141_bool == 0) goto Label_292; // 0x10f JumpB
	var_142_string = ""; // 0x110 PushV
	var_142_string = "Neutral"; // 0x111 MovS
	func_157(var_7_bool, var_142_string); // 0x112 NEW_2
	var_143_int = 506750; // 0x114 PushI
	SetMessage(var_143_int); // 0x115 TObjFunc
	ClearReplies(); // 0x117 TObjFunc
	var_144_int = 506751; // 0x119 PushI
	var_145_int = 8099; // 0x11a PushI
	var_146_int = 7441; // 0x11b PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x11c TObjFunc
	var_147_int = 507356; // 0x11e PushI
	var_148_int = 8106; // 0x11f PushI
	var_149_int = 8111; // 0x120 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x121 TObjFunc
	return 0; // 0x123 Return
	
Label_292:
	var_150_int = 8099; // 0x124 PushI
	var_151_bool = var_6_int == var_150_int; // 0x125 Eq
	if(var_151_bool == 0) goto Label_310; // 0x126 JumpB
	var_152_string = ""; // 0x127 PushV
	var_152_string = "Neutral"; // 0x128 MovS
	func_157(var_7_bool, var_152_string); // 0x129 NEW_2
	var_153_int = 507346; // 0x12b PushI
	SetMessage(var_153_int); // 0x12c TObjFunc
	ClearReplies(); // 0x12e TObjFunc
	var_154_int = 507347; // 0x130 PushI
	var_155_int = 8106; // 0x131 PushI
	var_156_int = 8100; // 0x132 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_157_int = 8106; // 0x136 PushI
	var_158_bool = var_6_int == var_157_int; // 0x137 Eq
	if(var_158_bool == 0) goto Label_333; // 0x138 JumpB
	var_159_string = ""; // 0x139 PushV
	var_159_string = "Neutral"; // 0x13a MovS
	func_157(var_7_bool, var_159_string); // 0x13b NEW_2
	var_160_int = 507351; // 0x13d PushI
	SetMessage(var_160_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_161_int = 507352; // 0x142 PushI
	var_162_int = 7442; // 0x143 PushI
	var_163_int = 8107; // 0x144 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x145 TObjFunc
	var_164_int = 507357; // 0x147 PushI
	var_165_int = 7442; // 0x148 PushI
	var_166_int = 8113; // 0x149 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_167_int = 7442; // 0x14d PushI
	var_168_bool = var_6_int == var_167_int; // 0x14e Eq
	if(var_168_bool == 0) goto Label_356; // 0x14f JumpB
	var_169_string = ""; // 0x150 PushV
	var_169_string = "Neutral"; // 0x151 MovS
	func_157(var_7_bool, var_169_string); // 0x152 NEW_2
	var_170_int = 506752; // 0x154 PushI
	SetMessage(var_170_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_171_int = 507353; // 0x159 PushI
	var_172_int = 8109; // 0x15a PushI
	var_173_int = 8108; // 0x15b PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x15c TObjFunc
	var_174_int = 507358; // 0x15e PushI
	var_175_int = 8109; // 0x15f PushI
	var_176_int = 8115; // 0x160 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x161 TObjFunc
	return 0; // 0x163 Return
	
Label_356:
	var_177_int = 8109; // 0x164 PushI
	var_178_bool = var_6_int == var_177_int; // 0x165 Eq
	if(var_178_bool == 0) goto Label_374; // 0x166 JumpB
	var_179_string = ""; // 0x167 PushV
	var_179_string = "Neutral"; // 0x168 MovS
	func_157(var_7_bool, var_179_string); // 0x169 NEW_2
	var_180_int = 507354; // 0x16b PushI
	SetMessage(var_180_int); // 0x16c TObjFunc
	ClearReplies(); // 0x16e TObjFunc
	var_181_int = 507355; // 0x170 PushI
	var_182_int = -1; // 0x171 PushI
	var_183_int = 8110; // 0x172 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_3_string = 1; // 0x176 TMovB
	var_184_bool = 0; // 0x177 PushV
	func_809(var_184_bool); // 0x178 NEW_2
	if(var_184_bool == 0) goto Label_382; // 0x17a JumpB
	lshStopAnimation(); // 0x17b Func
	goto Label_384; // 0x17d Jump
	
Label_384:
	return 0; // 0x180 Return
	
Label_382:
	StopAnimation(); // 0x17e Func
	
Label_386:
	return 0; // 0x182 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x184 PushV
	var_8_object = var_6_object; // 0x185 Mov
	TaskCall(0); // 0x186 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x187 NEW_2
	TaskReturn(); // 0x188 TaskReturn
	return 0; // 0x18a Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x18f PushV
	var_9_string = "cleanup"; // 0x190 PushS
	var_10_bool = var_6_string == var_9_string; // 0x191 Eq
	if(var_10_bool == 0) goto Label_422; // 0x192 JumpB
	var_0_object = 1; // 0x193 TMovB
	IsLoaded(var_8_bool); // 0x194 Func
	var_11_bool = 0; // 0x196 PushV
	var_11_bool = 0; // 0x197 MovB
	var_12_bool = var_8_bool == 0; // 0x198 Not
	if(var_12_bool == 0) goto Label_415; // 0x199 JumpB
	var_13_bool = 0; // 0x19a PushV
	func_443(var_13_bool); // 0x19b NEW_2
	if(var_13_bool == 0) goto Label_415; // 0x19d JumpB
	var_11_bool = 1; // 0x19e MovB
	
Label_415:
	if(var_11_bool == 0) goto Label_421; // 0x19f JumpB
	var_14_object = Obj(); // 0x1a0 PushV
	func_570(var_14_object); // 0x1a1 NEW_2
	RemoveActor(var_14_object); // 0x1a3 Func
	
Label_421:
	goto Label_426; // 0x1a5 Jump
	
Label_426:
	return 2; // 0x1aa Return
	
Label_422:
	var_17_string = "restore"; // 0x1a6 PushS
	var_18_bool = var_6_string == var_17_string; // 0x1a7 Eq
	if(var_18_bool == 0) goto Label_426; // 0x1a8 JumpB
	var_0_object = 0; // 0x1a9 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1ab PushV
	var_6_bool = 0; // 0x1ac MovB
	var_7_object = var_0_object; // 0x1ad PushT
	if(var_7_object == 0) goto Label_436; // 0x1ae JumpB
	var_8_bool = 0; // 0x1af PushV
	func_443(var_8_bool); // 0x1b0 NEW_2
	if(var_8_bool == 0) goto Label_436; // 0x1b2 JumpB
	var_6_bool = 1; // 0x1b3 MovB
	
Label_436:
	if(var_6_bool == 0) goto Label_442; // 0x1b4 JumpB
	var_9_object = Obj(); // 0x1b5 PushV
	func_570(var_9_object); // 0x1b6 NEW_2
	RemoveActor(var_9_object); // 0x1b8 Func
	
Label_442:
	return 0; // 0x1ba Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_395:
	Hold(); // 0x18b Func
	goto Label_395; // 0x18d Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_445(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_803(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_801(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_805(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_807(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_784(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_object = Obj(); var_80_object = Obj(); // 0x2f PushV
	var_79_object = var_8_object; // 0x30 Mov
	var_80_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_144_bool = var_17_bool == 0; // 0x38 Not
	if(var_144_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_145_object = Obj(); // 0x3f PushV
	var_145_object = var_8_object; // 0x40 Mov
	func_514(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_576(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x240 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x241 Or
	var_49_float = sqrt(var_50_int); // 0x242 Sqrt2
	var_51_float = 0.0; // 0x243 PushF
	var_52_bool = var_49_float < var_51_float; // 0x244 LT
	if(var_52_bool == 0) goto Label_584; // 0x245 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x246 MovV
	return 2; // 0x247 Return
	
Label_584:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x248 Div2
	return 2; // 0x249 Return
}


func_514()
{
	var_146_bool = 0; var_147_bool = 0; // 0x202 PushV
	var_148_bool = 1; // 0x203 PushB
	CameraSwitchToNormal(var_148_bool); // 0x204 Func
	var_149_bool = 0; // 0x206 PushV
	func_809(var_149_bool); // 0x207 NEW_2
	if(var_149_bool == 0) goto Label_523; // 0x209 JumpB
	goto Label_531; // 0x20a Jump
	
Label_531:
	return 2; // 0x213 Return
	
Label_523:
	var_150_string = "head"; // 0x20b PushS
	HasAnimationTrack(var_147_bool, var_150_string); // 0x20c Func
	var_151_bool = var_147_bool; // 0x20e Push
	if(var_151_bool == 0) goto Label_531; // 0x20f JumpB
	var_152_string = "head"; // 0x210 PushS
	UnlookAsync(var_152_string); // 0x211 Func
}


func_647(var_33_float)
{
	var_34_float = 0; var_35_float = 0; // 0x287 PushV
	GetGameTime(var_35_float); // 0x288 Func
	var_33_float = var_35_float; // 0x28a Mov
	return 2; // 0x28b Return
}


func_713()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x2c9 PushV
	var_38_int = 54; // 0x2ca PushI
	var_39_int = 1; // 0x2cb PushI
	var_40_int = 512136; // 0x2cc PushI
	CreateDiaryEntry(var_37_object, var_38_int, var_39_int, var_40_int); // 0x2cd Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0x2cf PushV
	var_42_object = var_37_object; // 0x2d0 Mov
	var_43_int = 10; // 0x2d1 MovI
	func_739(var_41_bool, var_42_object, var_43_int); // 0x2d2 NEW_2
	return 2; // 0x2d4 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_127; // 0x4f JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x50 PushV
	var_87_object = var_1_object; // 0x51 MovT
	func_701(var_87_object); // 0x52 NEW_2
	if(var_86_bool == 0) goto Label_110; // 0x54 JumpB
	var_94_string = ""; // 0x55 PushV
	var_94_string = "Neutral"; // 0x56 MovS
	func_157(var_80_object, var_94_string); // 0x57 NEW_2
	var_111_int = 506748; // 0x59 PushI
	SetMessage(var_111_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_112_int = 506749; // 0x5e PushI
	var_113_int = 7440; // 0x5f PushI
	var_114_int = 7439; // 0x60 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x61 TObjFunc
	var_115_int = 507345; // 0x63 PushI
	var_116_int = 7440; // 0x64 PushI
	var_117_int = 8098; // 0x65 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x66 TObjFunc
	var_118_int = 507350; // 0x68 PushI
	var_119_int = 7440; // 0x69 PushI
	var_120_int = 8104; // 0x6a PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x6b TObjFunc
	goto Label_127; // 0x6d Jump
	
Label_127:
	var_121_bool = 0; // 0x7f PushV
	func_809(var_121_bool); // 0x80 NEW_2
	if(var_121_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_122_string = var_3_string; // 0x85 PushT
	if(var_122_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_123_string = ""; // 0x88 PushV
	var_123_string = var_2_object; // 0x89 MovT
	func_532(var_123_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_134_string = "all"; // 0x8e PushS
	var_135_string = "idle"; // 0x8f PushS
	PlayAnimation(var_134_string, var_135_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_136_string = var_3_string; // 0x94 PushT
	if(var_136_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_137_string = "all"; // 0x97 PushS
	var_138_string = "idle"; // 0x98 PushS
	PlayAnimation(var_137_string, var_138_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_110:
	var_139_string = ""; // 0x6e PushV
	var_139_string = "Neutral"; // 0x6f MovS
	func_157(var_80_object, var_139_string); // 0x70 NEW_2
	var_140_int = 506753; // 0x72 PushI
	SetMessage(var_140_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_141_int = 506754; // 0x77 PushI
	var_142_int = 8102; // 0x78 PushI
	var_143_int = 7444; // 0x79 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_586(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x24a PushV
	GetVariable(var_89_string, var_91_int); // 0x24b Func
	var_88_int = var_91_int; // 0x24d Mov
	return 2; // 0x24e Return
}


func_652()
{
	var_89_string = "playsound"; // 0x28d PushS
	var_90_string = "giveitem"; // 0x28e PushS
	TriggerWorld(var_89_string, var_90_string); // 0x28f Func
	return 0; // 0x291 Return
}


func_591(var_76_int, var_77_int)
{
	var_78_object = Obj(); var_79_object = Obj(); // 0x24f PushV
	CreateIntVector(var_79_object); // 0x250 Func
	add(var_76_int); // 0x252 ObjFunc
	add(var_77_int); // 0x254 ObjFunc
	var_80_int = 3; // 0x256 PushI
	SendWorldWndMessage(var_80_int, var_79_object); // 0x257 Func
	return 2; // 0x259 Return
}


func_784(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x310 PushV
	var_73_string = "branch"; // 0x311 PushS
	GetVariable(var_73_string, var_72_int); // 0x312 Func
	var_74_int = 0; // 0x314 PushI
	var_75_bool = var_72_int == var_74_int; // 0x315 Eq
	if(var_75_bool == 0) goto Label_794; // 0x316 JumpB
	var_70_int = 1; // 0x317 MovI
	return 2; // 0x318 Return
	
Label_794:
	var_76_int = 1; // 0x31a PushI
	var_77_bool = var_72_int == var_76_int; // 0x31b Eq
	if(var_77_bool == 0) goto Label_799; // 0x31c JumpB
	var_70_int = 2; // 0x31d MovI
	return 2; // 0x31e Return
	
Label_799:
	var_70_int = 3; // 0x31f MovI
	return 2; // 0x320 Return
}


func_658()
{
	var_14_string = "ood2WomanD1"; // 0x293 PushS
	var_15_int = 1; // 0x294 PushI
	SetVariable(var_14_string, var_15_int); // 0x295 Func
	return 0; // 0x297 Return
}


func_767(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x2ff PushV
	GetMainOutdoorScene(var_25_object); // 0x300 Func
	var_27_bool = var_25_object == 0; // 0x302 NullEq
	if(var_27_bool == 0) goto Label_778; // 0x303 JumpB
	var_28_string = "Can't find main outdoor scene"; // 0x304 PushS
	Trace(var_28_string); // 0x305 Func
	var_26_object = 0; // 0x307 SetNull
	var_22_object = var_26_object; // 0x308 Mov
	return 4; // 0x309 Return
	
Label_778:
	GetMap(var_26_object); // 0x30a ObjFunc
	var_22_object = var_26_object; // 0x30c Mov
	return 4; // 0x30d Return
}


func_532(var_123_string)
{
	var_124_bool = 0; var_125_float = 0; var_126_float = 0; var_127_bool = 0; var_128_float = 0; var_129_float = 0; // 0x214 PushV
	lshHasAnimation(var_127_bool, var_123_string); // 0x215 Func
	var_130_bool = var_127_bool; // 0x217 Push
	if(var_130_bool == 0) goto Label_543; // 0x218 JumpB
	lshGetAnimTimes(var_123_string, var_128_float, var_129_float); // 0x219 Func
	var_131_bool = 0; // 0x21b PushB
	lshPlayAnimation(var_128_float, var_129_float, var_131_bool); // 0x21c Func
	goto Label_547; // 0x21e Jump
	
Label_547:
	return 6; // 0x223 Return
	
Label_543:
	var_132_string = "Can't find lsh animation : "; // 0x21f PushS
	var_133_int = var_132_string + var_123_string; // 0x220 Add
	Trace(var_133_int); // 0x221 Func
}


func_726(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x2d6 PushV
	GetDiaryRoot(var_52_object); // 0x2d7 Func
	var_53_bool = var_52_object == 0; // 0x2d9 Not
	if(var_53_bool == 0) goto Label_736; // 0x2da JumpB
	var_54_string = "Can't retrieve diary root"; // 0x2db PushS
	Trace(var_54_string); // 0x2dc Func
	var_50_object = 0; // 0x2de MovB
	return 2; // 0x2df Return
	
Label_736:
	var_50_object = var_52_object; // 0x2e0 Mov
	return 2; // 0x2e1 Return
}


func_664(var_16_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x298 PushV
	var_20_string = "d2q01"; // 0x299 PushS
	var_21_int = 5; // 0x29a PushI
	SetVariable(var_20_string, var_21_int); // 0x29b Func
	var_22_object = Obj(); // 0x29d PushV
	func_767(var_22_object); // 0x29e NEW_2
	var_19_object = var_22_object; // 0x29f Mov
	var_29_string = "d2q01WomanDGotoAlexandr"; // 0x2a1 PushS
	var_30_string = "pt_map_alexandr"; // 0x2a2 PushS
	var_31_int = 1; // 0x2a3 PushI
	var_32_int = 515271; // 0x2a4 PushI
	var_33_float = 0; // 0x2a5 PushV
	func_647(var_33_float); // 0x2a6 NEW_2
	AddMark(var_29_string, var_30_string, var_31_int, var_32_int, var_33_float); // 0x2a8 ObjFunc
	func_713(); // 0x2ab NEW_2
	var_59_string = "key is given"; // 0x2ad PushS
	Trace(var_59_string); // 0x2ae Func
	var_60_object = Obj(); var_61_string = ""; var_62_int = 0; // 0x2b0 PushV
	var_60_object = var_16_object; // 0x2b1 Mov
	var_61_string = "d2q01_key"; // 0x2b2 MovS
	var_62_int = 1; // 0x2b3 MovI
	func_622(var_60_object, var_61_string, var_62_int); // 0x2b4 NEW_2
	var_81_bool = 0; var_82_string = ""; var_83_string = ""; // 0x2b6 PushV
	var_82_string = "quest_d2_01"; // 0x2b7 MovS
	var_83_string = "cursed_women"; // 0x2b8 MovS
	func_635(var_81_bool, var_82_string, var_83_string); // 0x2b9 NEW_2
	return 2; // 0x2bb Return
}


func_603(var_66_object, var_67_int)
{
	var_68_int = 0; var_69_int = 0; var_70_bool = 0; var_71_int = 0; var_72_int = 0; var_73_bool = 0; // 0x25b PushV
	GetItemID(var_71_int); // 0x25c ObjFunc
	var_74_string = "Category"; // 0x25e PushS
	GetInvItemProperty(var_72_int, var_71_int, var_74_string); // 0x25f Func
	AddItem(var_73_bool, var_66_object, var_72_int, var_67_int); // 0x261 ObjFunc
	var_75_bool = var_73_bool == 0; // 0x263 Not
	if(var_75_bool == 0) goto Label_616; // 0x264 JumpB
	DropItems(var_66_object, var_67_int); // 0x265 ObjFunc
	goto Label_621; // 0x267 Jump
	
Label_621:
	return 6; // 0x26d Return
	
Label_616:
	var_76_int = 0; var_77_int = 0; // 0x268 PushV
	var_76_int = var_71_int; // 0x269 Mov
	var_77_int = var_67_int; // 0x26a Mov
	func_591(var_76_int, var_77_int); // 0x26b NEW_2
}


func_157(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0x9e PushV
	func_809(var_95_bool); // 0x9f NEW_2
	var_96_bool = var_95_bool == 0; // 0xa1 Not
	if(var_96_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_97_bool = var_94_string == var_2_object; // 0xa4 Eq
	if(var_97_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_98_string = ""; var_99_bool = 0; // 0xa7 PushV
	var_98_string = var_94_string; // 0xa8 Mov
	var_100_string = ""; // 0xa9 PushS
	var_101_bool = var_94_string == var_100_string; // 0xaa Eq
	if(var_101_bool == 0) goto Label_174; // 0xab JumpB
	var_99_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_548(var_98_string, var_99_bool); // 0xaf NEW_2
	var_2_object = var_94_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_99_bool = 1; // 0xae MovB
}


func_801(var_67_int)
{
	var_67_int = 515567; // 0x321 MovI
	return 0; // 0x322 Return
}


func_803(var_66_int)
{
	var_66_int = 503352; // 0x323 MovI
	return 0; // 0x324 Return
}


func_548(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x224 PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x225 Func
	var_108_bool = var_105_bool; // 0x227 Push
	if(var_108_bool == 0) goto Label_558; // 0x228 JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x229 Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x22b Func
	goto Label_562; // 0x22d Jump
	
Label_562:
	return 6; // 0x232 Return
	
Label_558:
	var_109_string = "Can't find lsh animation : "; // 0x22e PushS
	var_110_int = var_109_string + var_98_string; // 0x22f Add
	Trace(var_110_int); // 0x230 Func
}


func_805(var_68_string)
{
	var_68_string = "ui/NPC_Citizen3.png"; // 0x325 MovS
	return 0; // 0x326 Return
}


func_739(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; // 0x2e3 PushV
	var_50_object = Obj(); // 0x2e4 PushV
	func_726(var_50_object); // 0x2e5 NEW_2
	var_47_object = var_50_object; // 0x2e6 Mov
	Find(var_43_int, var_48_object); // 0x2e8 ObjFunc
	var_55_bool = var_48_object == 0; // 0x2ea Not
	if(var_55_bool == 0) goto Label_754; // 0x2eb JumpB
	var_56_string = "Can't find diary parent with id: "; // 0x2ec PushS
	var_57_int = var_56_string + var_43_int; // 0x2ed Add
	Trace(var_57_int); // 0x2ee Func
	var_41_bool = 0; // 0x2f0 MovB
	return 6; // 0x2f1 Return
	
Label_754:
	AddChild(var_42_object); // 0x2f2 ObjFunc
	var_58_int = 7; // 0x2f4 PushI
	SendWorldWndMessage(var_58_int); // 0x2f5 Func
	GetCategory(var_49_int); // 0x2f7 ObjFunc
	SetDiarySection(var_49_int); // 0x2f9 Func
	var_41_bool = 0; // 0x2fb MovB
	return 6; // 0x2fc Return
}


func_807(var_69_string)
{
	var_69_string = "ui/NPC_Citizen3_b.png"; // 0x327 MovS
	return 0; // 0x328 Return
}


func_635(var_81_bool, var_82_string, var_83_string)
{
	var_84_object = Obj(); var_85_object = Obj(); // 0x27b PushV
	FindActor(var_85_object, var_82_string); // 0x27c Func
	var_86_bool = var_85_object == 0; // 0x27e NullEq
	if(var_86_bool == 0) goto Label_642; // 0x27f JumpB
	var_81_bool = 0; // 0x280 MovB
	return 2; // 0x281 Return
	
Label_642:
	Trigger(var_85_object, var_83_string); // 0x282 Func
	var_81_bool = 1; // 0x284 MovB
	return 2; // 0x285 Return
}


func_809(var_61_bool)
{
	var_61_bool = 0; // 0x329 MovB
	return 0; // 0x32a Return
}


func_622(var_60_object, var_61_string, var_62_int)
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x26e PushV
	CreateInvItem(var_64_object); // 0x26f Func
	SetItemName(var_61_string); // 0x271 ObjFunc
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; // 0x273 PushV
	var_65_object = var_60_object; // 0x274 Mov
	var_66_object = var_64_object; // 0x275 Mov
	var_67_int = var_62_int; // 0x276 Mov
	func_603(var_66_object, var_67_int); // 0x277 NEW_2
	return 2; // 0x279 Return
}


func_563()
{
	var_9_bool = 0; // 0x233 PushV
	func_809(var_9_bool); // 0x234 NEW_2
	if(var_9_bool == 0) goto Label_569; // 0x236 JumpB
	lshStopSpeech(); // 0x237 Func
	
Label_569:
	return 0; // 0x239 Return
}


func_570(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x23a PushV
	self(var_11_object); // 0x23b Func
	var_9_object = var_11_object; // 0x23d Mov
	return 2; // 0x23e Return
}


func_443(var_8_bool)
{
	var_8_bool = 1; // 0x1bb MovB
	return 0; // 0x1bc Return
}


func_701(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x2be PushV
	var_89_string = "ood2WomanD1"; // 0x2bf MovS
	func_586(var_88_int, var_89_string); // 0x2c0 NEW_2
	var_92_int = 0; // 0x2c2 PushI
	var_93_bool = var_88_int == var_92_int; // 0x2c3 Eq
	if(var_93_bool == 0) goto Label_711; // 0x2c4 JumpB
	var_86_bool = 1; // 0x2c5 MovB
	return 0; // 0x2c6 Return
	
Label_711:
	var_86_bool = 0; // 0x2c7 MovB
	return 0; // 0x2c8 Return
}


func_445(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x1bd PushV
	GetPosition(var_31_cvector); // 0x1be ObjFunc
	GetEyesHeight(var_30_float); // 0x1c0 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x1c2 PushE
	var_39_float = var_39_float + var_30_float; // 0x1c3 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x1c4 PopE
	GetPosition(var_32_cvector); // 0x1c5 Func
	GetEyesHeight(var_30_float); // 0x1c7 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x1c9 PushE
	var_40_float = var_40_float + var_30_float; // 0x1ca Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x1cb PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x1cc Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x1cd PushE
	var_41_float = 0; // 0x1ce MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x1cf PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x1d0 Or
	var_43_float = sqrt(var_42_int); // 0x1d1 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x1d2 Div2
	var_34_cvector = -var_33_cvector; // 0x1d3 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x1d4 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x1d5 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x1d6 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x1d7 Xor2
	func_576(var_45_cvector, var_46_cvector); // 0x1d8 NEW_2
	var_53_int = 25; // 0x1da PushI
	var_54_float = var_45_cvector * var_53_int; // 0x1db Mult
	var_55_int = var_44_float + var_54_float; // 0x1dc Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x1dd PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x1de Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x1df Add2
	IsOverrideActive(var_37_bool); // 0x1e0 Func
	var_57_bool = var_37_bool; // 0x1e2 Push
	if(var_57_bool == 0) goto Label_486; // 0x1e3 JumpB
	var_18_bool = 0; // 0x1e4 MovB
	return 18; // 0x1e5 Return
	
Label_486:
	StopWorld(); // 0x1e6 Func
	var_58_bool = 1; // 0x1e8 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x1e9 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x1eb PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x1ec PushE
	Rotate(var_59_float, var_60_float); // 0x1ed Func
	var_61_bool = 0; // 0x1ef PushV
	func_809(var_61_bool); // 0x1f0 NEW_2
	if(var_61_bool == 0) goto Label_500; // 0x1f2 JumpB
	goto Label_508; // 0x1f3 Jump
	
Label_508:
	CameraWaitForPlayFinish(); // 0x1fc Func
	ResumeWorld(); // 0x1fe Func
	var_18_bool = 1; // 0x200 MovB
	return 18; // 0x201 Return
	
Label_500:
	var_62_string = "head"; // 0x1f4 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x1f5 Func
	var_63_bool = var_38_bool; // 0x1f7 Push
	if(var_63_bool == 0) goto Label_508; // 0x1f8 JumpB
	var_64_string = "head"; // 0x1f9 PushS
	LookAsyncCamera(var_64_string); // 0x1fa Func
}


