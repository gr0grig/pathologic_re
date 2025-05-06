task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0x9b PushI
	if(var_14_int == 0) goto Label_385; // 0x9c JumpB
	func_774(); // 0x9e NEW_2
	var_16_int = 13218; // 0xa0 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xa1 Eq
	if(var_17_bool == 0) goto Label_173; // 0xa2 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xa3 PushV
	var_18_object = var_1_object; // 0xa4 MovT
	var_19_object = var_0_object; // 0xa5 MovT
	func_859(); // 0xa6 NEW_2
	var_67_object = Obj(); var_68_object = Obj(); // 0xa8 PushV
	var_67_object = var_1_object; // 0xa9 MovT
	var_68_object = var_0_object; // 0xaa MovT
	func_843(); // 0xab NEW_2
	
Label_173:
	var_93_int = 13214; // 0xad PushI
	var_94_bool = var_13_bool == var_93_int; // 0xae Eq
	if(var_94_bool == 0) goto Label_186; // 0xaf JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0xb0 PushV
	var_95_object = var_1_object; // 0xb1 MovT
	var_96_object = var_0_object; // 0xb2 MovT
	func_859(); // 0xb3 NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0xb5 PushV
	var_97_object = var_1_object; // 0xb6 MovT
	var_98_object = var_0_object; // 0xb7 MovT
	func_843(); // 0xb8 NEW_2
	
Label_186:
	var_99_int = 13215; // 0xba PushI
	var_100_bool = var_13_bool == var_99_int; // 0xbb Eq
	if(var_100_bool == 0) goto Label_199; // 0xbc JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0xbd PushV
	var_101_object = var_1_object; // 0xbe MovT
	var_102_object = var_0_object; // 0xbf MovT
	func_859(); // 0xc0 NEW_2
	var_103_object = Obj(); var_104_object = Obj(); // 0xc2 PushV
	var_103_object = var_1_object; // 0xc3 MovT
	var_104_object = var_0_object; // 0xc4 MovT
	func_843(); // 0xc5 NEW_2
	
Label_199:
	var_105_int = 13203; // 0xc7 PushI
	var_106_bool = var_12_bool == var_105_int; // 0xc8 Eq
	if(var_106_bool == 0) goto Label_222; // 0xc9 JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0xca PushV
	var_108_object = var_1_object; // 0xcb MovT
	func_887(var_108_object); // 0xcc NEW_2
	if(var_107_bool == 0) goto Label_222; // 0xce JumpB
	var_115_string = ""; // 0xcf PushV
	var_115_string = "Neutral"; // 0xd0 MovS
	func_132(var_13_bool, var_115_string); // 0xd1 NEW_2
	var_132_int = 511988; // 0xd3 PushI
	SetMessage(var_132_int); // 0xd4 TObjFunc
	ClearReplies(); // 0xd6 TObjFunc
	var_133_int = 511989; // 0xd8 PushI
	var_134_int = 13205; // 0xd9 PushI
	var_135_int = 13204; // 0xda PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0xdb TObjFunc
	return 0; // 0xdd Return
	
Label_222:
	var_136_int = 13205; // 0xde PushI
	var_137_bool = var_12_bool == var_136_int; // 0xdf Eq
	if(var_137_bool == 0) goto Label_245; // 0xe0 JumpB
	var_138_string = ""; // 0xe1 PushV
	var_138_string = "Neutral"; // 0xe2 MovS
	func_132(var_13_bool, var_138_string); // 0xe3 NEW_2
	var_139_int = 511990; // 0xe5 PushI
	SetMessage(var_139_int); // 0xe6 TObjFunc
	ClearReplies(); // 0xe8 TObjFunc
	var_140_int = 511991; // 0xea PushI
	var_141_int = 13207; // 0xeb PushI
	var_142_int = 13206; // 0xec PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0xed TObjFunc
	var_143_int = 512004; // 0xef PushI
	var_144_int = 13207; // 0xf0 PushI
	var_145_int = 13219; // 0xf1 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0xf2 TObjFunc
	return 0; // 0xf4 Return
	
Label_245:
	var_146_int = 13207; // 0xf5 PushI
	var_147_bool = var_12_bool == var_146_int; // 0xf6 Eq
	if(var_147_bool == 0) goto Label_268; // 0xf7 JumpB
	var_148_string = ""; // 0xf8 PushV
	var_148_string = "Neutral"; // 0xf9 MovS
	func_132(var_13_bool, var_148_string); // 0xfa NEW_2
	var_149_int = 511992; // 0xfc PushI
	SetMessage(var_149_int); // 0xfd TObjFunc
	ClearReplies(); // 0xff TObjFunc
	var_150_int = 511993; // 0x101 PushI
	var_151_int = 13209; // 0x102 PushI
	var_152_int = 13208; // 0x103 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x104 TObjFunc
	var_153_int = 512005; // 0x106 PushI
	var_154_int = 13209; // 0x107 PushI
	var_155_int = 13221; // 0x108 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_156_int = 13209; // 0x10c PushI
	var_157_bool = var_12_bool == var_156_int; // 0x10d Eq
	if(var_157_bool == 0) goto Label_291; // 0x10e JumpB
	var_158_string = ""; // 0x10f PushV
	var_158_string = "Neutral"; // 0x110 MovS
	func_132(var_13_bool, var_158_string); // 0x111 NEW_2
	var_159_int = 511994; // 0x113 PushI
	SetMessage(var_159_int); // 0x114 TObjFunc
	ClearReplies(); // 0x116 TObjFunc
	var_160_int = 511995; // 0x118 PushI
	var_161_int = 13211; // 0x119 PushI
	var_162_int = 13210; // 0x11a PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x11b TObjFunc
	var_163_int = 512006; // 0x11d PushI
	var_164_int = 13213; // 0x11e PushI
	var_165_int = 13223; // 0x11f PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x120 TObjFunc
	return 0; // 0x122 Return
	
Label_291:
	var_166_int = 13211; // 0x123 PushI
	var_167_bool = var_12_bool == var_166_int; // 0x124 Eq
	if(var_167_bool == 0) goto Label_309; // 0x125 JumpB
	var_168_string = ""; // 0x126 PushV
	var_168_string = "Neutral"; // 0x127 MovS
	func_132(var_13_bool, var_168_string); // 0x128 NEW_2
	var_169_int = 511996; // 0x12a PushI
	SetMessage(var_169_int); // 0x12b TObjFunc
	ClearReplies(); // 0x12d TObjFunc
	var_170_int = 511997; // 0x12f PushI
	var_171_int = 13213; // 0x130 PushI
	var_172_int = 13212; // 0x131 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_173_int = 13213; // 0x135 PushI
	var_174_bool = var_12_bool == var_173_int; // 0x136 Eq
	if(var_174_bool == 0) goto Label_337; // 0x137 JumpB
	var_175_string = ""; // 0x138 PushV
	var_175_string = "Neutral"; // 0x139 MovS
	func_132(var_13_bool, var_175_string); // 0x13a NEW_2
	var_176_int = 511998; // 0x13c PushI
	SetMessage(var_176_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_177_int = 512001; // 0x141 PushI
	var_178_int = 13217; // 0x142 PushI
	var_179_int = 13216; // 0x143 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x144 TObjFunc
	var_180_int = 511999; // 0x146 PushI
	var_181_int = -1; // 0x147 PushI
	var_182_int = 13214; // 0x148 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x149 TObjFunc
	var_183_int = 515782; // 0x14b PushI
	var_184_int = 16855; // 0x14c PushI
	var_185_int = 16854; // 0x14d PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x14e TObjFunc
	return 0; // 0x150 Return
	
Label_337:
	var_186_int = 16855; // 0x151 PushI
	var_187_bool = var_12_bool == var_186_int; // 0x152 Eq
	if(var_187_bool == 0) goto Label_355; // 0x153 JumpB
	var_188_string = ""; // 0x154 PushV
	var_188_string = "Neutral"; // 0x155 MovS
	func_132(var_13_bool, var_188_string); // 0x156 NEW_2
	var_189_int = 515783; // 0x158 PushI
	SetMessage(var_189_int); // 0x159 TObjFunc
	ClearReplies(); // 0x15b TObjFunc
	var_190_int = 512000; // 0x15d PushI
	var_191_int = -1; // 0x15e PushI
	var_192_int = 13215; // 0x15f PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_193_int = 13217; // 0x163 PushI
	var_194_bool = var_12_bool == var_193_int; // 0x164 Eq
	if(var_194_bool == 0) goto Label_373; // 0x165 JumpB
	var_195_string = ""; // 0x166 PushV
	var_195_string = "Neutral"; // 0x167 MovS
	func_132(var_13_bool, var_195_string); // 0x168 NEW_2
	var_196_int = 512002; // 0x16a PushI
	SetMessage(var_196_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_197_int = 512003; // 0x16f PushI
	var_198_int = -1; // 0x170 PushI
	var_199_int = 13218; // 0x171 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x172 TObjFunc
	return 0; // 0x174 Return
	
Label_373:
	var_3_string = 1; // 0x175 TMovB
	var_200_bool = 0; // 0x176 PushV
	func_1028(var_200_bool); // 0x177 NEW_2
	if(var_200_bool == 0) goto Label_381; // 0x179 JumpB
	lshStopAnimation(); // 0x17a Func
	goto Label_383; // 0x17c Jump
	
Label_383:
	return 0; // 0x17f Return
	
Label_381:
	StopAnimation(); // 0x17d Func
	
Label_385:
	return 0; // 0x181 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_object = Obj(); // 0x189 PushV
	var_14_object = var_12_object; // 0x18a Mov
	TaskCall(0); // 0x18b TaskCall
	func_0(var_15_object, var_13_int, var_14_object); // 0x18c NEW_2
	TaskReturn(); // 0x18d TaskReturn
	return 0; // 0x18f Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1b7 PushS
	var_14_bool = var_12_string == var_13_string; // 0x1b8 Eq
	if(var_14_bool == 0) goto Label_445; // 0x1b9 JumpB
	func_418(var_12_string); // 0x1bb NEW_2
	
Label_445:
	return 0; // 0x1bd Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1be PushT
	if(var_12_int == 0) goto Label_451; // 0x1bf JumpB
	func_534(var_10_bool, var_11_bool); // 0x1c1 NEW_2
	
Label_451:
	var_16_bool = 0; // 0x1c3 PushV
	var_16_bool = 0; // 0x1c4 MovB
	var_17_int = var_5_int; // 0x1c5 PushT
	if(var_17_int == 0) goto Label_460; // 0x1c6 JumpB
	var_18_bool = 0; // 0x1c7 PushV
	func_467(var_18_bool); // 0x1c8 NEW_2
	if(var_18_bool == 0) goto Label_460; // 0x1ca JumpB
	var_16_bool = 1; // 0x1cb MovB
	
Label_460:
	if(var_16_bool == 0) goto Label_466; // 0x1cc JumpB
	var_19_object = Obj(); // 0x1cd PushV
	func_781(var_19_object); // 0x1ce NEW_2
	RemoveActor(var_19_object); // 0x1d0 Func
	
Label_466:
	return 0; // 0x1d2 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x200 PushI
	var_14_bool = var_12_int == var_13_int; // 0x201 Eq
	if(var_14_bool == 0) goto Label_533; // 0x202 JumpB
	var_15_bool = 0; // 0x203 PushV
	func_496(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x204 NEW_2
	if(var_15_bool == 0) goto Label_527; // 0x206 JumpB
	var_28_bool = var_2_object == 0; // 0x207 Not
	if(var_28_bool == 0) goto Label_526; // 0x208 JumpB
	var_29_object = Obj(); // 0x209 PushV
	var_29_object = var_4_bool; // 0x20a MovT
	func_763(var_29_object); // 0x20b NEW_2
	var_2_object = 1; // 0x20d TMovB
	
Label_526:
	goto Label_533; // 0x20e Jump
	
Label_533:
	return 0; // 0x215 Return
	
Label_527:
	var_36_object = var_2_object; // 0x20f PushT
	if(var_36_object == 0) goto Label_533; // 0x210 JumpB
	var_37_string = "head"; // 0x211 PushS
	UnlookAsync(var_37_string); // 0x212 Func
	var_2_object = 0; // 0x214 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x182 PushV
	var_12_float = 300; // 0x183 MovI
	var_13_float = 100; // 0x184 MovI
	func_400(var_11_bool, var_12_float, var_13_float); // 0x185 NEW_2
	return 0; // 0x187 Return
}


func_1024(var_73_string)
{
	var_73_string = "ui/NPC_Citizen1.png"; // 0x400 MovS
	return 0; // 0x401 Return
}


func_0(var_0_object, var_13_int, var_14_object)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; // 0x0 PushV
	var_0_object = var_14_object; // 0x1 TMov
	var_24_bool = 0; var_25_object = Obj(); var_26_float = 0; // 0x2 PushV
	var_25_object = var_14_object; // 0x3 Mov
	var_26_float = 70.0; // 0x4 MovF
	func_647(var_25_object, var_26_float); // 0x5 NEW_2
	var_70_bool = var_24_bool == 0; // 0x7 Not
	if(var_70_bool == 0) goto Label_11; // 0x8 JumpB
	var_13_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_20_object); // 0xb Func
	var_71_int = 0; // 0xd PushV
	func_1022(var_71_int); // 0xe NEW_2
	SetNPCName(var_71_int); // 0x10 ObjFunc
	var_72_int = 0; // 0x12 PushV
	func_1020(var_72_int); // 0x13 NEW_2
	SetNPCDescription(var_72_int); // 0x15 ObjFunc
	var_73_string = ""; // 0x17 PushV
	func_1024(var_73_string); // 0x18 NEW_2
	SetPhoto(var_73_string); // 0x1a ObjFunc
	var_74_string = ""; // 0x1c PushV
	func_1026(var_74_string); // 0x1d NEW_2
	SetPhoto2(var_74_string); // 0x1f ObjFunc
	var_75_int = 0; // 0x21 PushV
	func_1003(var_75_int); // 0x22 NEW_2
	SetPlayerName(var_75_int); // 0x24 ObjFunc
	var_22_int = -1; // 0x26 MovI
	IsOverrideActive(var_21_bool); // 0x27 Func
	var_83_bool = var_21_bool; // 0x29 Push
	if(var_83_bool == 0) goto Label_45; // 0x2a JumpB
	var_13_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_20_object); // 0x2d Func
	var_84_object = Obj(); var_85_object = Obj(); // 0x2f PushV
	var_84_object = var_14_object; // 0x30 Mov
	var_85_object = var_20_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_86_object, var_87_object, var_88_string, var_89_bool, var_84_object, var_85_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_23_bool); // 0x36 ObjFunc
	
Label_56:
	var_138_bool = var_23_bool == 0; // 0x38 Not
	if(var_138_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_23_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_139_object = Obj(); // 0x3f PushV
	var_139_object = var_14_object; // 0x40 Mov
	func_715(); // 0x41 NEW_2
	StopDialog(var_20_object); // 0x43 Func
	GetReturnValue(var_22_int); // 0x45 ObjFunc
	var_13_int = var_22_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1026(var_74_string)
{
	var_74_string = "ui/NPC_Citizen1_b.png"; // 0x402 MovS
	return 0; // 0x403 Return
}


func_642(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x282 PushV
	IsLoaded(var_25_bool); // 0x283 Func
	var_23_bool = var_25_bool; // 0x285 Mov
	return 2; // 0x286 Return
}


func_132(var_2_object, var_99_string)
{
	var_100_bool = 0; // 0x85 PushV
	func_1028(var_100_bool); // 0x86 NEW_2
	var_101_bool = var_100_bool == 0; // 0x88 Not
	if(var_101_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_102_bool = var_99_string == var_2_object; // 0x8b Eq
	if(var_102_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_103_string = ""; var_104_bool = 0; // 0x8e PushV
	var_103_string = var_99_string; // 0x8f Mov
	var_105_string = ""; // 0x90 PushS
	var_106_bool = var_99_string == var_105_string; // 0x91 Eq
	if(var_106_bool == 0) goto Label_149; // 0x92 JumpB
	var_104_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_748(var_103_string, var_104_bool); // 0x96 NEW_2
	var_2_object = var_99_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_104_bool = 1; // 0x95 MovB
}


func_1028(var_66_bool)
{
	var_66_bool = 0; // 0x404 MovB
	return 0; // 0x405 Return
}


func_774()
{
	var_15_bool = 0; // 0x306 PushV
	func_1028(var_15_bool); // 0x307 NEW_2
	if(var_15_bool == 0) goto Label_780; // 0x309 JumpB
	lshStopSpeech(); // 0x30a Func
	
Label_780:
	return 0; // 0x30c Return
}


func_647(var_24_bool, var_26_float)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_bool = 0; // 0x287 PushV
	GetPosition(var_37_cvector); // 0x288 ObjFunc
	GetEyesHeight(var_36_float); // 0x28a ObjFunc
	var_45_float = GetByIndex(var_37_cvector, 1); // 0x28c PushE
	var_45_float = var_45_float + var_36_float; // 0x28d Add2
	SetByIndex(var_37_cvector, 1) = var_45_float; // 0x28e PopE
	GetPosition(var_38_cvector); // 0x28f Func
	GetEyesHeight(var_36_float); // 0x291 Func
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x293 PushE
	var_46_float = var_46_float + var_36_float; // 0x294 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x295 PopE
	var_39_cvector = var_37_cvector - var_38_cvector; // 0x296 Sub2
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x297 PushE
	var_47_float = 0; // 0x298 MovI
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x299 PopE
	var_48_int = var_39_cvector | var_39_cvector; // 0x29a Or
	var_49_float = sqrt(var_48_int); // 0x29b Sqrt
	var_39_cvector = var_39_cvector / var_39_cvector; // 0x29c Div2
	var_40_cvector = -var_39_cvector; // 0x29d Neg2
	var_50_float = var_39_cvector * var_26_float; // 0x29e Mult
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x29f PushV
	var_53_cvector = CVector(0.0, 1.0, 0.0); // 0x2a0 PushVec
	var_52_cvector = var_40_cvector ^ var_53_cvector; // 0x2a1 Xor2
	func_787(var_51_cvector, var_52_cvector); // 0x2a2 NEW_2
	var_59_int = 25; // 0x2a4 PushI
	var_60_float = var_51_cvector * var_59_int; // 0x2a5 Mult
	var_61_int = var_50_float + var_60_float; // 0x2a6 Add
	var_62_cvector = CVector(0.0, 10.0, 0.0); // 0x2a7 PushVec
	var_41_cvector = var_61_int - var_62_cvector; // 0x2a8 Sub2
	var_42_cvector = var_38_cvector + var_41_cvector; // 0x2a9 Add2
	IsOverrideActive(var_43_bool); // 0x2aa Func
	var_63_bool = var_43_bool; // 0x2ac Push
	if(var_63_bool == 0) goto Label_688; // 0x2ad JumpB
	var_24_bool = 0; // 0x2ae MovB
	return 18; // 0x2af Return
	
Label_688:
	StopWorld(); // 0x2b0 Func
	CameraTransit(var_42_cvector, var_40_cvector); // 0x2b2 Func
	var_64_float = GetByIndex(var_41_cvector, 0); // 0x2b4 PushE
	var_65_float = GetByIndex(var_41_cvector, 2); // 0x2b5 PushE
	Rotate(var_64_float, var_65_float); // 0x2b6 Func
	var_66_bool = 0; // 0x2b8 PushV
	func_1028(var_66_bool); // 0x2b9 NEW_2
	if(var_66_bool == 0) goto Label_701; // 0x2bb JumpB
	goto Label_709; // 0x2bc Jump
	
Label_709:
	CameraWaitForPlayFinish(); // 0x2c5 Func
	ResumeWorld(); // 0x2c7 Func
	var_24_bool = 1; // 0x2c9 MovB
	return 18; // 0x2ca Return
	
Label_701:
	var_67_string = "head"; // 0x2bd PushS
	HasAnimationTrack(var_44_bool, var_67_string); // 0x2be Func
	var_68_bool = var_44_bool; // 0x2c0 Push
	if(var_68_bool == 0) goto Label_709; // 0x2c1 JumpB
	var_69_string = "head"; // 0x2c2 PushS
	LookAsyncCamera(var_69_string); // 0x2c3 Func
}


func_899()
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x383 PushV
	var_40_int = 152; // 0x384 PushI
	var_41_int = 2; // 0x385 PushI
	var_42_int = 515358; // 0x386 PushI
	CreateDiaryEntry(var_39_object, var_40_int, var_41_int, var_42_int); // 0x387 Func
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0; // 0x389 PushV
	var_44_object = var_39_object; // 0x38a Mov
	var_45_int = 148; // 0x38b MovI
	func_925(var_43_bool, var_44_object, var_45_int); // 0x38c NEW_2
	return 2; // 0x38e Return
}


func_781(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x30d PushV
	self(var_21_object); // 0x30e Func
	var_19_object = var_21_object; // 0x310 Mov
	return 2; // 0x311 Return
}


func_400(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x190 PushV
	var_6_int = 0; // 0x191 TMovB
	
Label_402:
	var_18_int = 3; // 0x192 PushI
	rand(var_16_float, var_18_int); // 0x193 Func
	var_19_int = 3; // 0x195 PushI
	var_20_int = var_16_float + var_19_int; // 0x196 Add
	Sleep(var_20_int, var_17_bool); // 0x197 Func
	var_6_int = 1; // 0x199 TMovB
	var_21_float = 0; var_22_float = 0; // 0x19a PushV
	var_21_float = var_12_float; // 0x19b Mov
	var_22_float = var_13_float; // 0x19c Mov
	func_469(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x19d NEW_2
	var_6_int = 0; // 0x19f TMovB
	goto Label_402; // 0x1a0 Jump
}


func_912(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x390 PushV
	GetDiaryRoot(var_54_object); // 0x391 Func
	var_55_bool = var_54_object == 0; // 0x393 Not
	if(var_55_bool == 0) goto Label_922; // 0x394 JumpB
	var_56_string = "Can't retrieve diary root"; // 0x395 PushS
	Trace(var_56_string); // 0x396 Func
	var_52_object = 0; // 0x398 MovB
	return 2; // 0x399 Return
	
Label_922:
	var_52_object = var_54_object; // 0x39a Mov
	return 2; // 0x39b Return
}


func_787(var_51_cvector, var_52_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x313 PushV
	var_56_int = var_52_cvector | var_52_cvector; // 0x314 Or
	var_55_float = sqrt(var_56_int); // 0x315 Sqrt2
	var_57_float = 0.0; // 0x316 PushF
	var_58_bool = var_55_float < var_57_float; // 0x317 LT
	if(var_58_bool == 0) goto Label_795; // 0x318 JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x319 MovV
	return 2; // 0x31a Return
	
Label_795:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x31b Div2
	return 2; // 0x31c Return
}


func_534(var_2_object, var_3_string)
{
	func_629(); // 0x217 NEW_2
	var_13_int = 10; // 0x219 PushI
	KillTimer(var_13_int); // 0x21a Func
	var_14_object = var_2_object; // 0x21c PushT
	if(var_14_object == 0) goto Label_546; // 0x21d JumpB
	var_15_string = "head"; // 0x21e PushS
	UnlookAsync(var_15_string); // 0x21f Func
	var_2_object = 0; // 0x221 TMovB
	
Label_546:
	var_3_string = 1; // 0x222 TMovB
	return 0; // 0x223 Return
}


func_925(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x39d PushV
	var_52_object = Obj(); // 0x39e PushV
	func_912(var_52_object); // 0x39f NEW_2
	var_49_object = var_52_object; // 0x3a0 Mov
	Find(var_45_int, var_50_object); // 0x3a2 ObjFunc
	var_57_bool = var_50_object == 0; // 0x3a4 Not
	if(var_57_bool == 0) goto Label_940; // 0x3a5 JumpB
	var_58_string = "Can't find diary parent with id: "; // 0x3a6 PushS
	var_59_int = var_58_string + var_45_int; // 0x3a7 Add
	Trace(var_59_int); // 0x3a8 Func
	var_43_bool = 0; // 0x3aa MovB
	return 6; // 0x3ab Return
	
Label_940:
	AddChild(var_44_object); // 0x3ac ObjFunc
	var_60_int = 7; // 0x3ae PushI
	SendWorldWndMessage(var_60_int); // 0x3af Func
	GetCategory(var_51_int); // 0x3b1 ObjFunc
	SetDiarySection(var_51_int); // 0x3b3 Func
	var_43_bool = 0; // 0x3b5 MovB
	return 6; // 0x3b6 Return
}


func_797(var_93_int, var_94_string)
{
	var_95_int = 0; var_96_int = 0; // 0x31d PushV
	GetVariable(var_94_string, var_96_int); // 0x31e Func
	var_93_int = var_96_int; // 0x320 Mov
	return 2; // 0x321 Return
}


func_418(var_5_int)
{
	var_5_int = 1; // 0x1a2 TMovB
	var_15_bool = 0; // 0x1a3 PushV
	var_15_bool = 0; // 0x1a4 MovB
	var_16_bool = 0; // 0x1a5 PushV
	func_642(var_16_bool); // 0x1a6 NEW_2
	var_19_bool = var_16_bool == 0; // 0x1a8 Not
	if(var_19_bool == 0) goto Label_431; // 0x1a9 JumpB
	var_20_bool = 0; // 0x1aa PushV
	func_467(var_20_bool); // 0x1ab NEW_2
	if(var_20_bool == 0) goto Label_431; // 0x1ad JumpB
	var_15_bool = 1; // 0x1ae MovB
	
Label_431:
	if(var_15_bool == 0) goto Label_437; // 0x1af JumpB
	var_21_object = Obj(); // 0x1b0 PushV
	func_781(var_21_object); // 0x1b1 NEW_2
	RemoveActor(var_21_object); // 0x1b3 Func
	
Label_437:
	return 0; // 0x1b5 Return
}


func_802(var_61_bool, var_62_string, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x322 PushV
	FindActor(var_65_object, var_62_string); // 0x323 Func
	var_66_bool = var_65_object == 0; // 0x325 NullEq
	if(var_66_bool == 0) goto Label_809; // 0x326 JumpB
	var_61_bool = 0; // 0x327 MovB
	return 2; // 0x328 Return
	
Label_809:
	Trigger(var_65_object, var_63_string); // 0x329 Func
	var_61_bool = 1; // 0x32b MovB
	return 2; // 0x32c Return
}


func_548()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x224 PushV
	WaitForAnimEnd(); // 0x225 Func
	var_44_bool = 0; // 0x227 PushV
	func_642(var_44_bool); // 0x228 NEW_2
	var_45_bool = var_44_bool == 0; // 0x22a Not
	if(var_45_bool == 0) goto Label_557; // 0x22b JumpB
	return 14; // 0x22c Return
	
Label_557:
	var_46_int = 0; // 0x22d PushV
	func_826(var_46_int); // 0x22e NEW_2
	var_37_int = var_46_int; // 0x22f Mov
	var_38_int = 0; // 0x231 MovI
	
Label_562:
	var_59_bool = 0; // 0x232 PushV
	var_59_bool = 0; // 0x233 MovB
	var_60_int = 5; // 0x234 PushI
	var_61_bool = var_38_int < var_60_int; // 0x235 LT
	if(var_61_bool == 0) goto Label_572; // 0x236 JumpB
	var_62_bool = 0; // 0x237 PushV
	func_642(var_62_bool); // 0x238 NEW_2
	if(var_62_bool == 0) goto Label_572; // 0x23a JumpB
	var_59_bool = 1; // 0x23b MovB
	
Label_572:
	if(var_59_bool == 0) goto Label_624; // 0x23c JumpB
	var_63_int = 3; // 0x23d PushI
	irand(var_39_int, var_63_int); // 0x23e Func
	var_64_int = 0; // 0x240 PushI
	var_65_bool = var_39_int == var_64_int; // 0x241 Eq
	if(var_65_bool == 0) goto Label_596; // 0x242 JumpB
	var_66_int = var_37_int; // 0x243 Push
	if(var_66_int == 0) goto Label_595; // 0x244 JumpB
	irand(var_40_int, var_37_int); // 0x245 Func
	var_67_string = "all"; // 0x247 PushS
	var_68_string = ""; var_69_int = 0; // 0x248 PushV
	var_69_int = var_40_int; // 0x249 Mov
	func_819(var_68_string, var_69_int); // 0x24a NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x24c Func
	WaitForAnimEnd(var_41_bool); // 0x24e Func
	var_70_bool = var_41_bool == 0; // 0x250 Not
	if(var_70_bool == 0) goto Label_595; // 0x251 JumpB
	goto Label_624; // 0x252 Jump
	
Label_624:
	ResetAAS(); // 0x270 Func
	return 14; // 0x272 Return
	
Label_595:
	goto Label_613; // 0x253 Jump
	
Label_613:
	var_71_bool = 0; // 0x265 PushV
	func_627(var_71_bool); // 0x266 NEW_2
	var_72_bool = var_71_bool == 0; // 0x268 Not
	if(var_72_bool == 0) goto Label_619; // 0x269 JumpB
	goto Label_624; // 0x26a Jump
	
Label_619:
	ResetAAS(); // 0x26b Func
	var_73_int = 1; // 0x26d PushI
	var_38_int = var_38_int + var_73_int; // 0x26e Add2
	goto Label_562; // 0x26f Jump
	
Label_596:
	var_74_int = 1; // 0x254 PushI
	var_75_bool = var_39_int == var_74_int; // 0x255 Eq
	if(var_75_bool == 0) goto Label_610; // 0x256 JumpB
	var_76_int = 4; // 0x257 PushI
	rand(var_42_float, var_76_int); // 0x258 Func
	var_77_int = 1; // 0x25a PushI
	var_78_int = var_42_float + var_77_int; // 0x25b Add
	Sleep(var_78_int, var_43_bool); // 0x25c Func
	var_79_bool = var_43_bool == 0; // 0x25e Not
	if(var_79_bool == 0) goto Label_609; // 0x25f JumpB
	goto Label_624; // 0x260 Jump
	
Label_609:
	goto Label_613; // 0x261 Jump
	
Label_610:
	var_80_int = var_38_int; // 0x262 Push
	if(var_80_int == 0) goto Label_613; // 0x263 JumpB
	goto Label_624; // 0x264 Jump
}


func_814(var_35_float)
{
	var_36_float = 0; var_37_float = 0; // 0x32e PushV
	GetGameTime(var_37_float); // 0x32f Func
	var_35_float = var_37_float; // 0x331 Mov
	return 2; // 0x332 Return
}


func_819(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x333 PushV
	var_55_string = "idle"; // 0x334 MovS
	var_56_int = var_53_int; // 0x335 Push
	if(var_56_int == 0) goto Label_824; // 0x336 JumpB
	var_55_string = var_55_string + var_53_int; // 0x337 Add2
	
Label_824:
	var_52_string = var_55_string; // 0x338 Mov
	return 2; // 0x339 Return
}


func_953(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x3b9 PushV
	GetMainOutdoorScene(var_27_object); // 0x3ba Func
	var_29_bool = var_27_object == 0; // 0x3bc NullEq
	if(var_29_bool == 0) goto Label_964; // 0x3bd JumpB
	var_30_string = "Can't find main outdoor scene"; // 0x3be PushS
	Trace(var_30_string); // 0x3bf Func
	var_28_object = 0; // 0x3c1 SetNull
	var_24_object = var_28_object; // 0x3c2 Mov
	return 4; // 0x3c3 Return
	
Label_964:
	GetMap(var_28_object); // 0x3c4 ObjFunc
	var_24_object = var_28_object; // 0x3c6 Mov
	return 4; // 0x3c7 Return
}


func_826(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x33a PushV
	var_49_int = 0; // 0x33b MovI
	
Label_828:
	var_51_string = "all"; // 0x33c PushS
	var_52_string = ""; var_53_int = 0; // 0x33d PushV
	var_53_int = var_49_int; // 0x33e Mov
	func_819(var_52_string, var_53_int); // 0x33f NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x341 Func
	var_57_bool = var_50_bool == 0; // 0x343 Not
	if(var_57_bool == 0) goto Label_838; // 0x344 JumpB
	goto Label_841; // 0x345 Jump
	
Label_841:
	var_46_int = var_49_int; // 0x349 Mov
	return 4; // 0x34a Return
	
Label_838:
	var_58_int = 1; // 0x346 PushI
	var_49_int = var_49_int + var_58_int; // 0x347 Add2
	goto Label_828; // 0x348 Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_84_object, var_85_object)
{
	var_0_object = var_85_object; // 0x4b TMov
	var_1_object = var_84_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_90_int = 1; // 0x4e PushI
	if(var_90_int == 0) goto Label_102; // 0x4f JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x50 PushV
	var_92_object = var_1_object; // 0x51 MovT
	func_887(var_92_object); // 0x52 NEW_2
	if(var_91_bool == 0) goto Label_100; // 0x54 JumpB
	var_99_string = ""; // 0x55 PushV
	var_99_string = "Neutral"; // 0x56 MovS
	func_132(var_85_object, var_99_string); // 0x57 NEW_2
	var_116_int = 511988; // 0x59 PushI
	SetMessage(var_116_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_117_int = 511989; // 0x5e PushI
	var_118_int = 13205; // 0x5f PushI
	var_119_int = 13204; // 0x60 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_120_bool = 0; // 0x66 PushV
	func_1028(var_120_bool); // 0x67 NEW_2
	if(var_120_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_121_string = var_3_string; // 0x6c PushT
	if(var_121_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_122_string = ""; // 0x6f PushV
	var_122_string = var_2_object; // 0x70 MovT
	func_732(var_122_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_133_string = "all"; // 0x75 PushS
	var_134_string = "idle"; // 0x76 PushS
	PlayAnimation(var_133_string, var_134_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_135_string = var_3_string; // 0x7b PushT
	if(var_135_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_136_string = "all"; // 0x7e PushS
	var_137_string = "idle"; // 0x7f PushS
	PlayAnimation(var_136_string, var_137_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
	
Label_100:
	return 0; // 0x64 Return
}


func_715()
{
	var_140_bool = 0; var_141_bool = 0; // 0x2cb PushV
	CameraSwitchToNormal(); // 0x2cc Func
	var_142_bool = 0; // 0x2ce PushV
	func_1028(var_142_bool); // 0x2cf NEW_2
	if(var_142_bool == 0) goto Label_723; // 0x2d1 JumpB
	goto Label_731; // 0x2d2 Jump
	
Label_731:
	return 2; // 0x2db Return
	
Label_723:
	var_143_string = "head"; // 0x2d3 PushS
	HasAnimationTrack(var_141_bool, var_143_string); // 0x2d4 Func
	var_144_bool = var_141_bool; // 0x2d6 Push
	if(var_144_bool == 0) goto Label_731; // 0x2d7 JumpB
	var_145_string = "head"; // 0x2d8 PushS
	UnlookAsync(var_145_string); // 0x2d9 Func
}


func_843()
{
	var_69_object = Obj(); var_70_string = ""; var_71_float = 0; // 0x34c PushV
	var_72_object = Obj(); // 0x34d PushV
	func_953(var_72_object); // 0x34e NEW_2
	var_69_object = var_72_object; // 0x34f Mov
	var_70_string = "pt_d5q01_girl_corpse1"; // 0x351 MovS
	var_71_float = 2; // 0x352 MovI
	func_970(var_69_object, var_70_string, var_71_float); // 0x353 NEW_2
	var_92_object = Obj(); // 0x355 PushV
	func_953(var_92_object); // 0x356 NEW_2
	ShowMap(var_92_object); // 0x358 ObjFunc
	return 0; // 0x35a Return
}


func_970(var_69_object, var_70_string, var_71_float)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_object = Obj(); var_76_bool = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0; // 0x3ca PushV
	GetMainOutdoorScene(var_79_object); // 0x3cb Func
	var_81_bool = var_79_object == 0; // 0x3cd NullEq
	if(var_81_bool == 0) goto Label_979; // 0x3ce JumpB
	var_82_string = "Can't find main outdoor scene"; // 0x3cf PushS
	Trace(var_82_string); // 0x3d0 Func
	return 8; // 0x3d2 Return
	
Label_979:
	GetLocator(var_70_string, var_80_bool, var_77_cvector, var_78_cvector); // 0x3d3 ObjFunc
	var_83_bool = var_80_bool == 0; // 0x3d5 Not
	if(var_83_bool == 0) goto Label_989; // 0x3d6 JumpB
	var_84_string = "Warning: outdoor scene locator "; // 0x3d7 PushS
	var_85_int = var_84_string + var_70_string; // 0x3d8 Add
	var_86_string = " doesnt exist"; // 0x3d9 PushS
	var_87_int = var_85_int + var_86_string; // 0x3da Add
	Trace(var_87_int); // 0x3db Func
	
Label_989:
	GetMap(var_69_object); // 0x3dd ObjFunc
	var_88_bool = var_69_object == 0; // 0x3df NullEq
	if(var_88_bool == 0) goto Label_997; // 0x3e0 JumpB
	var_89_string = "Can't find map"; // 0x3e1 PushS
	Trace(var_89_string); // 0x3e2 Func
	return 8; // 0x3e4 Return
	
Label_997:
	var_90_float = GetByIndex(var_77_cvector, 0); // 0x3e5 PushE
	var_91_float = GetByIndex(var_77_cvector, 2); // 0x3e6 PushE
	SetMapParams(var_90_float, var_91_float, var_71_float); // 0x3e7 ObjFunc
	return 8; // 0x3e9 Return
}


func_467(var_18_bool)
{
	var_18_bool = 1; // 0x1d3 MovB
	return 0; // 0x1d4 Return
}


func_469(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1d6 PushV
	func_642(var_23_bool); // 0x1d7 NEW_2
	var_26_bool = var_23_bool == 0; // 0x1d9 Not
	if(var_26_bool == 0) goto Label_476; // 0x1da JumpB
	return 0; // 0x1db Return
	
Label_476:
	var_27_string = "player"; // 0x1dc PushS
	FindActor(var_17_bool, var_27_string); // 0x1dd Func
	var_2_object = 0; // 0x1df TMovB
	var_3_string = 0; // 0x1e0 TMovB
	var_0_object = var_21_float; // 0x1e1 TMov
	var_1_object = var_22_float; // 0x1e2 TMov
	var_28_int = 10; // 0x1e3 PushI
	var_29_float = 1.0; // 0x1e4 PushF
	SetTimer(var_28_int, var_29_float); // 0x1e5 Func
	func_548(); // 0x1e8 NEW_2
	var_81_bool = var_3_string == 0; // 0x1ea Not
	if(var_81_bool == 0) goto Label_495; // 0x1eb JumpB
	var_82_int = 10; // 0x1ec PushI
	KillTimer(var_82_int); // 0x1ed Func
	
Label_495:
	return 0; // 0x1ef Return
}


func_859()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x35b PushV
	var_22_string = "d5q02"; // 0x35c PushS
	var_23_int = 4; // 0x35d PushI
	SetVariable(var_22_string, var_23_int); // 0x35e Func
	var_24_object = Obj(); // 0x360 PushV
	func_953(var_24_object); // 0x361 NEW_2
	var_21_object = var_24_object; // 0x362 Mov
	var_31_string = "d5q02NudeMeeting"; // 0x364 PushS
	var_32_string = "pt_d5q01_girl_corpse1"; // 0x365 PushS
	var_33_int = 0; // 0x366 PushI
	var_34_int = 515364; // 0x367 PushI
	var_35_float = 0; // 0x368 PushV
	func_814(var_35_float); // 0x369 NEW_2
	AddMark(var_31_string, var_32_string, var_33_int, var_34_int, var_35_float); // 0x36b ObjFunc
	func_899(); // 0x36e NEW_2
	var_61_bool = 0; var_62_string = ""; var_63_string = ""; // 0x370 PushV
	var_62_string = "quest_d5_02"; // 0x371 MovS
	var_63_string = "remove_girl"; // 0x372 MovS
	func_802(var_61_bool, var_62_string, var_63_string); // 0x373 NEW_2
	return 2; // 0x375 Return
}


func_732(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0; // 0x2dc PushV
	lshHasAnimation(var_126_bool, var_122_string); // 0x2dd Func
	var_129_bool = var_126_bool; // 0x2df Push
	if(var_129_bool == 0) goto Label_743; // 0x2e0 JumpB
	lshGetAnimTimes(var_122_string, var_127_float, var_128_float); // 0x2e1 Func
	var_130_bool = 0; // 0x2e3 PushB
	lshPlayAnimation(var_127_float, var_128_float, var_130_bool); // 0x2e4 Func
	goto Label_747; // 0x2e6 Jump
	
Label_747:
	return 6; // 0x2eb Return
	
Label_743:
	var_131_string = "Can't find lsh animation : "; // 0x2e7 PushS
	var_132_int = var_131_string + var_122_string; // 0x2e8 Add
	Trace(var_132_int); // 0x2e9 Func
}


func_1003(var_75_int)
{
	var_76_int = 0; var_77_int = 0; // 0x3eb PushV
	var_78_string = "branch"; // 0x3ec PushS
	GetVariable(var_78_string, var_77_int); // 0x3ed Func
	var_79_int = 0; // 0x3ef PushI
	var_80_bool = var_77_int == var_79_int; // 0x3f0 Eq
	if(var_80_bool == 0) goto Label_1013; // 0x3f1 JumpB
	var_75_int = 1; // 0x3f2 MovI
	return 2; // 0x3f3 Return
	
Label_1013:
	var_81_int = 1; // 0x3f5 PushI
	var_82_bool = var_77_int == var_81_int; // 0x3f6 Eq
	if(var_82_bool == 0) goto Label_1018; // 0x3f7 JumpB
	var_75_int = 2; // 0x3f8 MovI
	return 2; // 0x3f9 Return
	
Label_1018:
	var_75_int = 3; // 0x3fa MovI
	return 2; // 0x3fb Return
}


func_748(var_103_string, var_104_bool)
{
	var_107_bool = 0; var_108_float = 0; var_109_float = 0; var_110_bool = 0; var_111_float = 0; var_112_float = 0; // 0x2ec PushV
	lshHasAnimation(var_110_bool, var_103_string); // 0x2ed Func
	var_113_bool = var_110_bool; // 0x2ef Push
	if(var_113_bool == 0) goto Label_758; // 0x2f0 JumpB
	lshGetAnimTimes(var_103_string, var_111_float, var_112_float); // 0x2f1 Func
	lshPlayAnimation(var_111_float, var_112_float, var_104_bool); // 0x2f3 Func
	goto Label_762; // 0x2f5 Jump
	
Label_762:
	return 6; // 0x2fa Return
	
Label_758:
	var_114_string = "Can't find lsh animation : "; // 0x2f6 PushS
	var_115_int = var_114_string + var_103_string; // 0x2f7 Add
	Trace(var_115_int); // 0x2f8 Func
}


func_496(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1f0 PushV
	var_18_bool = var_4_bool == 0; // 0x1f1 NullEq
	if(var_18_bool == 0) goto Label_501; // 0x1f2 JumpB
	var_15_bool = 0; // 0x1f3 MovB
	return 2; // 0x1f4 Return
	
Label_501:
	var_19_float = 0; var_20_object = Obj(); // 0x1f5 PushV
	var_20_object = var_4_bool; // 0x1f6 MovT
	func_634(var_20_object); // 0x1f7 NEW_2
	var_17_float = sqrt(var_19_float); // 0x1f9 Sqrt2
	var_27_object = var_2_object; // 0x1fa PushT
	if(var_27_object == 0) goto Label_509; // 0x1fb JumpB
	var_17_float = var_17_float - var_1_object; // 0x1fc Sub2
	
Label_509:
	var_15_bool = var_17_float < var_0_object; // 0x1fd LT2
	return 2; // 0x1fe Return
}


func_627(var_71_bool)
{
	var_71_bool = 1; // 0x273 MovB
	return 0; // 0x274 Return
}


func_629()
{
	StopAnimation(); // 0x275 Func
	StopGroup0(); // 0x277 Func
	return 0; // 0x279 Return
}


func_887(var_91_bool)
{
	var_93_int = 0; var_94_string = ""; // 0x378 PushV
	var_94_string = "d5q02"; // 0x379 MovS
	func_797(var_93_int, var_94_string); // 0x37a NEW_2
	var_97_int = 3; // 0x37c PushI
	var_98_bool = var_93_int == var_97_int; // 0x37d Eq
	if(var_98_bool == 0) goto Label_897; // 0x37e JumpB
	var_91_bool = 1; // 0x37f MovB
	return 0; // 0x380 Return
	
Label_897:
	var_91_bool = 0; // 0x381 MovB
	return 0; // 0x382 Return
}


func_634(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x27a PushV
	GetPosition(var_24_cvector); // 0x27b Func
	GetPosition(var_25_cvector); // 0x27d ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x27f Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x280 Or2
	return 6; // 0x281 Return
}


func_763(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2fb PushV
	GetEyesHeight(var_32_float); // 0x2fc ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2fe MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2ff PushE
	var_34_float = var_32_float; // 0x300 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x301 PopE
	var_35_string = "head"; // 0x302 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x303 Func
	return 4; // 0x305 Return
}


func_1020(var_72_int)
{
	var_72_int = 515593; // 0x3fc MovI
	return 0; // 0x3fd Return
}


func_1022(var_71_int)
{
	var_71_int = 512582; // 0x3fe MovI
	return 0; // 0x3ff Return
}


