task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xa5 PushI
	if(var_14_int == 0) goto Label_436; // 0xa6 JumpB
	func_827(); // 0xa8 NEW_2
	var_16_int = 37547; // 0xaa PushI
	var_17_bool = var_13_bool == var_16_int; // 0xab Eq
	if(var_17_bool == 0) goto Label_178; // 0xac JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xad PushV
	var_18_object = var_1_object; // 0xae MovT
	var_19_object = var_0_object; // 0xaf MovT
	func_860(); // 0xb0 NEW_2
	
Label_178:
	var_22_int = 34820; // 0xb2 PushI
	var_23_bool = var_13_bool == var_22_int; // 0xb3 Eq
	if(var_23_bool == 0) goto Label_191; // 0xb4 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xb5 PushV
	var_24_object = var_1_object; // 0xb6 MovT
	var_25_object = var_0_object; // 0xb7 MovT
	func_882(); // 0xb8 NEW_2
	var_75_object = Obj(); var_76_object = Obj(); // 0xba PushV
	var_75_object = var_1_object; // 0xbb MovT
	var_76_object = var_0_object; // 0xbc MovT
	func_866(); // 0xbd NEW_2
	
Label_191:
	var_101_int = 37604; // 0xbf PushI
	var_102_bool = var_13_bool == var_101_int; // 0xc0 Eq
	if(var_102_bool == 0) goto Label_204; // 0xc1 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0xc2 PushV
	var_103_object = var_1_object; // 0xc3 MovT
	var_104_object = var_0_object; // 0xc4 MovT
	func_882(); // 0xc5 NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0xc7 PushV
	var_105_object = var_1_object; // 0xc8 MovT
	var_106_object = var_0_object; // 0xc9 MovT
	func_866(); // 0xca NEW_2
	
Label_204:
	var_107_int = 34821; // 0xcc PushI
	var_108_bool = var_12_bool == var_107_int; // 0xcd Eq
	if(var_108_bool == 0) goto Label_237; // 0xce JumpB
	var_109_string = ""; // 0xcf PushV
	var_109_string = "Neutral"; // 0xd0 MovS
	func_142(var_13_bool, var_109_string); // 0xd1 NEW_2
	var_126_int = 533313; // 0xd3 PushI
	SetMessage(var_126_int); // 0xd4 TObjFunc
	ClearReplies(); // 0xd6 TObjFunc
	var_127_bool = 0; var_128_object = Obj(); // 0xd8 PushV
	var_128_object = var_1_object; // 0xd9 MovT
	func_908(var_128_object); // 0xda NEW_2
	if(var_127_bool == 0) goto Label_226; // 0xdc JumpB
	var_135_int = 535847; // 0xdd PushI
	var_136_int = 37548; // 0xde PushI
	var_137_int = 37547; // 0xdf PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0xe0 TObjFunc
	
Label_226:
	var_138_int = 535882; // 0xe2 PushI
	var_139_int = -1; // 0xe3 PushI
	var_140_int = 37588; // 0xe4 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0xe5 TObjFunc
	var_141_int = 535851; // 0xe7 PushI
	var_142_int = -1; // 0xe8 PushI
	var_143_int = 37551; // 0xe9 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0xea TObjFunc
	return 0; // 0xec Return
	
Label_237:
	var_144_int = 37548; // 0xed PushI
	var_145_bool = var_12_bool == var_144_int; // 0xee Eq
	if(var_145_bool == 0) goto Label_260; // 0xef JumpB
	var_146_string = ""; // 0xf0 PushV
	var_146_string = "Neutral"; // 0xf1 MovS
	func_142(var_13_bool, var_146_string); // 0xf2 NEW_2
	var_147_int = 535848; // 0xf4 PushI
	SetMessage(var_147_int); // 0xf5 TObjFunc
	ClearReplies(); // 0xf7 TObjFunc
	var_148_int = 535883; // 0xf9 PushI
	var_149_int = 37590; // 0xfa PushI
	var_150_int = 37589; // 0xfb PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0xfc TObjFunc
	var_151_int = 535849; // 0xfe PushI
	var_152_int = 37590; // 0xff PushI
	var_153_int = 37549; // 0x100 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x101 TObjFunc
	return 0; // 0x103 Return
	
Label_260:
	var_154_int = 37590; // 0x104 PushI
	var_155_bool = var_12_bool == var_154_int; // 0x105 Eq
	if(var_155_bool == 0) goto Label_283; // 0x106 JumpB
	var_156_string = ""; // 0x107 PushV
	var_156_string = "Neutral"; // 0x108 MovS
	func_142(var_13_bool, var_156_string); // 0x109 NEW_2
	var_157_int = 535884; // 0x10b PushI
	SetMessage(var_157_int); // 0x10c TObjFunc
	ClearReplies(); // 0x10e TObjFunc
	var_158_int = 535885; // 0x110 PushI
	var_159_int = 37550; // 0x111 PushI
	var_160_int = 37591; // 0x112 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x113 TObjFunc
	var_161_int = 535886; // 0x115 PushI
	var_162_int = 37550; // 0x116 PushI
	var_163_int = 37592; // 0x117 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x118 TObjFunc
	return 0; // 0x11a Return
	
Label_283:
	var_164_int = 37550; // 0x11b PushI
	var_165_bool = var_12_bool == var_164_int; // 0x11c Eq
	if(var_165_bool == 0) goto Label_301; // 0x11d JumpB
	var_166_string = ""; // 0x11e PushV
	var_166_string = "Neutral"; // 0x11f MovS
	func_142(var_13_bool, var_166_string); // 0x120 NEW_2
	var_167_int = 535850; // 0x122 PushI
	SetMessage(var_167_int); // 0x123 TObjFunc
	ClearReplies(); // 0x125 TObjFunc
	var_168_int = 535887; // 0x127 PushI
	var_169_int = 37595; // 0x128 PushI
	var_170_int = 37594; // 0x129 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x12a TObjFunc
	return 0; // 0x12c Return
	
Label_301:
	var_171_int = 37595; // 0x12d PushI
	var_172_bool = var_12_bool == var_171_int; // 0x12e Eq
	if(var_172_bool == 0) goto Label_324; // 0x12f JumpB
	var_173_string = ""; // 0x130 PushV
	var_173_string = "Neutral"; // 0x131 MovS
	func_142(var_13_bool, var_173_string); // 0x132 NEW_2
	var_174_int = 535888; // 0x134 PushI
	SetMessage(var_174_int); // 0x135 TObjFunc
	ClearReplies(); // 0x137 TObjFunc
	var_175_int = 533308; // 0x139 PushI
	var_176_int = 34817; // 0x13a PushI
	var_177_int = 34816; // 0x13b PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x13c TObjFunc
	var_178_int = 535889; // 0x13e PushI
	var_179_int = 37605; // 0x13f PushI
	var_180_int = 37597; // 0x140 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x141 TObjFunc
	return 0; // 0x143 Return
	
Label_324:
	var_181_int = 37605; // 0x144 PushI
	var_182_bool = var_12_bool == var_181_int; // 0x145 Eq
	if(var_182_bool == 0) goto Label_342; // 0x146 JumpB
	var_183_string = ""; // 0x147 PushV
	var_183_string = "Neutral"; // 0x148 MovS
	func_142(var_13_bool, var_183_string); // 0x149 NEW_2
	var_184_int = 535896; // 0x14b PushI
	SetMessage(var_184_int); // 0x14c TObjFunc
	ClearReplies(); // 0x14e TObjFunc
	var_185_int = 535897; // 0x150 PushI
	var_186_int = 37600; // 0x151 PushI
	var_187_int = 37606; // 0x152 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x153 TObjFunc
	return 0; // 0x155 Return
	
Label_342:
	var_188_int = 34817; // 0x156 PushI
	var_189_bool = var_12_bool == var_188_int; // 0x157 Eq
	if(var_189_bool == 0) goto Label_365; // 0x158 JumpB
	var_190_string = ""; // 0x159 PushV
	var_190_string = "Neutral"; // 0x15a MovS
	func_142(var_13_bool, var_190_string); // 0x15b NEW_2
	var_191_int = 533309; // 0x15d PushI
	SetMessage(var_191_int); // 0x15e TObjFunc
	ClearReplies(); // 0x160 TObjFunc
	var_192_int = 533310; // 0x162 PushI
	var_193_int = 34819; // 0x163 PushI
	var_194_int = 34818; // 0x164 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x165 TObjFunc
	var_195_int = 535890; // 0x167 PushI
	var_196_int = 37601; // 0x168 PushI
	var_197_int = 37598; // 0x169 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x16a TObjFunc
	return 0; // 0x16c Return
	
Label_365:
	var_198_int = 37601; // 0x16d PushI
	var_199_bool = var_12_bool == var_198_int; // 0x16e Eq
	if(var_199_bool == 0) goto Label_383; // 0x16f JumpB
	var_200_string = ""; // 0x170 PushV
	var_200_string = "Neutral"; // 0x171 MovS
	func_142(var_13_bool, var_200_string); // 0x172 NEW_2
	var_201_int = 535893; // 0x174 PushI
	SetMessage(var_201_int); // 0x175 TObjFunc
	ClearReplies(); // 0x177 TObjFunc
	var_202_int = 535894; // 0x179 PushI
	var_203_int = 37600; // 0x17a PushI
	var_204_int = 37602; // 0x17b PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x17c TObjFunc
	return 0; // 0x17e Return
	
Label_383:
	var_205_int = 34819; // 0x17f PushI
	var_206_bool = var_12_bool == var_205_int; // 0x180 Eq
	if(var_206_bool == 0) goto Label_401; // 0x181 JumpB
	var_207_string = ""; // 0x182 PushV
	var_207_string = "Neutral"; // 0x183 MovS
	func_142(var_13_bool, var_207_string); // 0x184 NEW_2
	var_208_int = 533311; // 0x186 PushI
	SetMessage(var_208_int); // 0x187 TObjFunc
	ClearReplies(); // 0x189 TObjFunc
	var_209_int = 535891; // 0x18b PushI
	var_210_int = 37600; // 0x18c PushI
	var_211_int = 37599; // 0x18d PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_212_int = 37600; // 0x191 PushI
	var_213_bool = var_12_bool == var_212_int; // 0x192 Eq
	if(var_213_bool == 0) goto Label_424; // 0x193 JumpB
	var_214_string = ""; // 0x194 PushV
	var_214_string = "Neutral"; // 0x195 MovS
	func_142(var_13_bool, var_214_string); // 0x196 NEW_2
	var_215_int = 535892; // 0x198 PushI
	SetMessage(var_215_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_216_int = 533312; // 0x19d PushI
	var_217_int = -1; // 0x19e PushI
	var_218_int = 34820; // 0x19f PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1a0 TObjFunc
	var_219_int = 535895; // 0x1a2 PushI
	var_220_int = -1; // 0x1a3 PushI
	var_221_int = 37604; // 0x1a4 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1a5 TObjFunc
	return 0; // 0x1a7 Return
	
Label_424:
	var_3_string = 1; // 0x1a8 TMovB
	var_222_bool = 0; // 0x1a9 PushV
	func_1086(var_222_bool); // 0x1aa NEW_2
	if(var_222_bool == 0) goto Label_432; // 0x1ac JumpB
	lshStopAnimation(); // 0x1ad Func
	goto Label_434; // 0x1af Jump
	
Label_434:
	return 0; // 0x1b2 Return
	
Label_432:
	StopAnimation(); // 0x1b0 Func
	
Label_436:
	return 0; // 0x1b4 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_object = Obj(); // 0x1bc PushV
	var_14_object = var_12_object; // 0x1bd Mov
	TaskCall(0); // 0x1be TaskCall
	func_0(var_15_object, var_13_int, var_14_object); // 0x1bf NEW_2
	TaskReturn(); // 0x1c0 TaskReturn
	return 0; // 0x1c2 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1ea PushS
	var_14_bool = var_12_string == var_13_string; // 0x1eb Eq
	if(var_14_bool == 0) goto Label_496; // 0x1ec JumpB
	func_469(var_12_string); // 0x1ee NEW_2
	
Label_496:
	return 0; // 0x1f0 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1f1 PushT
	if(var_12_int == 0) goto Label_502; // 0x1f2 JumpB
	func_585(var_10_bool, var_11_bool); // 0x1f4 NEW_2
	
Label_502:
	var_16_bool = 0; // 0x1f6 PushV
	var_16_bool = 0; // 0x1f7 MovB
	var_17_int = var_5_int; // 0x1f8 PushT
	if(var_17_int == 0) goto Label_511; // 0x1f9 JumpB
	var_18_bool = 0; // 0x1fa PushV
	func_518(var_18_bool); // 0x1fb NEW_2
	if(var_18_bool == 0) goto Label_511; // 0x1fd JumpB
	var_16_bool = 1; // 0x1fe MovB
	
Label_511:
	if(var_16_bool == 0) goto Label_517; // 0x1ff JumpB
	var_19_object = Obj(); // 0x200 PushV
	func_834(var_19_object); // 0x201 NEW_2
	RemoveActor(var_19_object); // 0x203 Func
	
Label_517:
	return 0; // 0x205 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x233 PushI
	var_14_bool = var_12_int == var_13_int; // 0x234 Eq
	if(var_14_bool == 0) goto Label_584; // 0x235 JumpB
	var_15_bool = 0; // 0x236 PushV
	func_547(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x237 NEW_2
	if(var_15_bool == 0) goto Label_578; // 0x239 JumpB
	var_28_bool = var_2_object == 0; // 0x23a Not
	if(var_28_bool == 0) goto Label_577; // 0x23b JumpB
	var_29_object = Obj(); // 0x23c PushV
	var_29_object = var_4_bool; // 0x23d MovT
	func_816(var_29_object); // 0x23e NEW_2
	var_2_object = 1; // 0x240 TMovB
	
Label_577:
	goto Label_584; // 0x241 Jump
	
Label_584:
	return 0; // 0x248 Return
	
Label_578:
	var_36_object = var_2_object; // 0x242 PushT
	if(var_36_object == 0) goto Label_584; // 0x243 JumpB
	var_37_string = "head"; // 0x244 PushS
	UnlookAsync(var_37_string); // 0x245 Func
	var_2_object = 0; // 0x247 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x1b5 PushV
	var_12_float = 300; // 0x1b6 MovI
	var_13_float = 100; // 0x1b7 MovI
	func_451(var_11_bool, var_12_float, var_13_float); // 0x1b8 NEW_2
	return 0; // 0x1ba Return
}


func_0(var_0_object, var_13_int, var_14_object)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; // 0x0 PushV
	var_0_object = var_14_object; // 0x1 TMov
	var_24_bool = 0; var_25_object = Obj(); var_26_float = 0; // 0x2 PushV
	var_25_object = var_14_object; // 0x3 Mov
	var_26_float = 70.0; // 0x4 MovF
	func_698(var_25_object, var_26_float); // 0x5 NEW_2
	var_71_bool = var_24_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_13_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_20_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_1080(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_1078(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_1082(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_1084(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_1037(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_22_int = -1; // 0x26 MovI
	IsOverrideActive(var_21_bool); // 0x27 Func
	var_84_bool = var_21_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_13_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_20_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_14_object; // 0x30 Mov
	var_86_object = var_20_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_23_bool); // 0x36 ObjFunc
	
Label_56:
	var_145_bool = var_23_bool == 0; // 0x38 Not
	if(var_145_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_23_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_146_object = Obj(); // 0x3f PushV
	var_146_object = var_14_object; // 0x40 Mov
	func_767(); // 0x41 NEW_2
	StopDialog(var_20_object); // 0x43 Func
	GetReturnValue(var_22_int); // 0x45 ObjFunc
	var_13_int = var_22_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_518(var_18_bool)
{
	var_18_bool = 1; // 0x206 MovB
	return 0; // 0x207 Return
}


func_520(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x209 PushV
	func_693(var_23_bool); // 0x20a NEW_2
	var_26_bool = var_23_bool == 0; // 0x20c Not
	if(var_26_bool == 0) goto Label_527; // 0x20d JumpB
	return 0; // 0x20e Return
	
Label_527:
	var_27_string = "player"; // 0x20f PushS
	FindActor(var_17_bool, var_27_string); // 0x210 Func
	var_2_object = 0; // 0x212 TMovB
	var_3_string = 0; // 0x213 TMovB
	var_0_object = var_21_float; // 0x214 TMov
	var_1_object = var_22_float; // 0x215 TMov
	var_28_int = 10; // 0x216 PushI
	var_29_float = 1.0; // 0x217 PushF
	SetTimer(var_28_int, var_29_float); // 0x218 Func
	func_599(); // 0x21b NEW_2
	var_81_bool = var_3_string == 0; // 0x21d Not
	if(var_81_bool == 0) goto Label_546; // 0x21e JumpB
	var_82_int = 10; // 0x21f PushI
	KillTimer(var_82_int); // 0x220 Func
	
Label_546:
	return 0; // 0x222 Return
}


func_908(var_110_bool)
{
	var_112_int = 0; var_113_string = ""; // 0x38d PushV
	var_113_string = "ood8Doberman1"; // 0x38e MovS
	func_850(var_112_int, var_113_string); // 0x38f NEW_2
	var_116_int = 0; // 0x391 PushI
	var_117_bool = var_112_int == var_116_int; // 0x392 Eq
	if(var_117_bool == 0) goto Label_918; // 0x393 JumpB
	var_110_bool = 1; // 0x394 MovB
	return 0; // 0x395 Return
	
Label_918:
	var_110_bool = 0; // 0x396 MovB
	return 0; // 0x397 Return
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


func_142(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x8f PushV
	func_1086(var_93_bool); // 0x90 NEW_2
	var_94_bool = var_93_bool == 0; // 0x92 Not
	if(var_94_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_95_bool = var_92_string == var_2_object; // 0x95 Eq
	if(var_95_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_96_string = ""; var_97_bool = 0; // 0x98 PushV
	var_96_string = var_92_string; // 0x99 Mov
	var_98_string = ""; // 0x9a PushS
	var_99_bool = var_92_string == var_98_string; // 0x9b Eq
	if(var_99_bool == 0) goto Label_159; // 0x9c JumpB
	var_97_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_801(var_96_string, var_97_bool); // 0xa0 NEW_2
	var_2_object = var_92_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_97_bool = 1; // 0x9f MovB
}


func_785(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0; // 0x311 PushV
	lshHasAnimation(var_133_bool, var_129_string); // 0x312 Func
	var_136_bool = var_133_bool; // 0x314 Push
	if(var_136_bool == 0) goto Label_796; // 0x315 JumpB
	lshGetAnimTimes(var_129_string, var_134_float, var_135_float); // 0x316 Func
	var_137_bool = 0; // 0x318 PushB
	lshPlayAnimation(var_134_float, var_135_float, var_137_bool); // 0x319 Func
	goto Label_800; // 0x31b Jump
	
Label_800:
	return 6; // 0x320 Return
	
Label_796:
	var_138_string = "Can't find lsh animation : "; // 0x31c PushS
	var_139_int = var_138_string + var_129_string; // 0x31d Add
	Trace(var_139_int); // 0x31e Func
}


func_920()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x398 PushV
	var_46_int = 127; // 0x399 PushI
	var_47_int = 2; // 0x39a PushI
	var_48_int = 513772; // 0x39b PushI
	CreateDiaryEntry(var_45_object, var_46_int, var_47_int, var_48_int); // 0x39c Func
	var_49_bool = 0; var_50_object = Obj(); var_51_int = 0; // 0x39e PushV
	var_50_object = var_45_object; // 0x39f Mov
	var_51_int = -1; // 0x3a0 MovI
	func_959(var_49_bool, var_50_object, var_51_int); // 0x3a1 NEW_2
	return 2; // 0x3a3 Return
}


func_1054(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x41e PushV
	var_55_string = "idle"; // 0x41f MovS
	var_56_int = var_53_int; // 0x420 Push
	if(var_56_int == 0) goto Label_1059; // 0x421 JumpB
	var_55_string = var_55_string + var_53_int; // 0x422 Add2
	
Label_1059:
	var_52_string = var_55_string; // 0x423 Mov
	return 2; // 0x424 Return
}


func_801(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x321 PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x322 Func
	var_106_bool = var_103_bool; // 0x324 Push
	if(var_106_bool == 0) goto Label_811; // 0x325 JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x326 Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x328 Func
	goto Label_815; // 0x32a Jump
	
Label_815:
	return 6; // 0x32f Return
	
Label_811:
	var_107_string = "Can't find lsh animation : "; // 0x32b PushS
	var_108_int = var_107_string + var_96_string; // 0x32c Add
	Trace(var_108_int); // 0x32d Func
}


func_547(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x223 PushV
	var_18_bool = var_4_bool == 0; // 0x224 NullEq
	if(var_18_bool == 0) goto Label_552; // 0x225 JumpB
	var_15_bool = 0; // 0x226 MovB
	return 2; // 0x227 Return
	
Label_552:
	var_19_float = 0; var_20_object = Obj(); // 0x228 PushV
	var_20_object = var_4_bool; // 0x229 MovT
	func_685(var_20_object); // 0x22a NEW_2
	var_17_float = sqrt(var_19_float); // 0x22c Sqrt2
	var_27_object = var_2_object; // 0x22d PushT
	if(var_27_object == 0) goto Label_560; // 0x22e JumpB
	var_17_float = var_17_float - var_1_object; // 0x22f Sub2
	
Label_560:
	var_15_bool = var_17_float < var_0_object; // 0x230 LT2
	return 2; // 0x231 Return
}


func_1061(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x425 PushV
	var_49_int = 0; // 0x426 MovI
	
Label_1063:
	var_51_string = "all"; // 0x427 PushS
	var_52_string = ""; var_53_int = 0; // 0x428 PushV
	var_53_int = var_49_int; // 0x429 Mov
	func_1054(var_52_string, var_53_int); // 0x42a NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x42c Func
	var_57_bool = var_50_bool == 0; // 0x42e Not
	if(var_57_bool == 0) goto Label_1073; // 0x42f JumpB
	goto Label_1076; // 0x430 Jump
	
Label_1076:
	var_46_int = var_49_int; // 0x434 Mov
	return 4; // 0x435 Return
	
Label_1073:
	var_58_int = 1; // 0x431 PushI
	var_49_int = var_49_int + var_58_int; // 0x432 Add2
	goto Label_1063; // 0x433 Jump
}


func_678(var_71_bool)
{
	var_71_bool = 1; // 0x2a6 MovB
	return 0; // 0x2a7 Return
}


func_933()
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x3a5 PushV
	var_69_int = 648; // 0x3a6 PushI
	var_70_int = 2; // 0x3a7 PushI
	var_71_int = 533321; // 0x3a8 PushI
	CreateDiaryEntry(var_68_object, var_69_int, var_70_int, var_71_int); // 0x3a9 Func
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0; // 0x3ab PushV
	var_73_object = var_68_object; // 0x3ac Mov
	var_74_int = 127; // 0x3ad MovI
	func_959(var_72_bool, var_73_object, var_74_int); // 0x3ae NEW_2
	return 2; // 0x3b0 Return
}


func_680()
{
	StopAnimation(); // 0x2a8 Func
	StopGroup0(); // 0x2aa Func
	return 0; // 0x2ac Return
}


func_685(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x2ad PushV
	GetPosition(var_24_cvector); // 0x2ae Func
	GetPosition(var_25_cvector); // 0x2b0 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x2b2 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x2b3 Or2
	return 6; // 0x2b4 Return
}


func_816(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x330 PushV
	GetEyesHeight(var_32_float); // 0x331 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x333 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x334 PushE
	var_34_float = var_32_float; // 0x335 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x336 PopE
	var_35_string = "head"; // 0x337 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x338 Func
	return 4; // 0x33a Return
}


func_946(var_58_object)
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x3b2 PushV
	GetDiaryRoot(var_60_object); // 0x3b3 Func
	var_61_bool = var_60_object == 0; // 0x3b5 Not
	if(var_61_bool == 0) goto Label_956; // 0x3b6 JumpB
	var_62_string = "Can't retrieve diary root"; // 0x3b7 PushS
	Trace(var_62_string); // 0x3b8 Func
	var_58_object = 0; // 0x3ba MovB
	return 2; // 0x3bb Return
	
Label_956:
	var_58_object = var_60_object; // 0x3bc Mov
	return 2; // 0x3bd Return
}


func_693(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x2b5 PushV
	IsLoaded(var_25_bool); // 0x2b6 Func
	var_23_bool = var_25_bool; // 0x2b8 Mov
	return 2; // 0x2b9 Return
}


func_1078(var_73_int)
{
	var_73_int = 518097; // 0x436 MovI
	return 0; // 0x437 Return
}


func_1080(var_72_int)
{
	var_72_int = 518096; // 0x438 MovI
	return 0; // 0x439 Return
}


func_1082(var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png"; // 0x43a MovS
	return 0; // 0x43b Return
}


func_698(var_24_bool, var_26_float)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_bool = 0; // 0x2ba PushV
	GetPosition(var_37_cvector); // 0x2bb ObjFunc
	GetEyesHeight(var_36_float); // 0x2bd ObjFunc
	var_45_float = GetByIndex(var_37_cvector, 1); // 0x2bf PushE
	var_45_float = var_45_float + var_36_float; // 0x2c0 Add2
	SetByIndex(var_37_cvector, 1) = var_45_float; // 0x2c1 PopE
	GetPosition(var_38_cvector); // 0x2c2 Func
	GetEyesHeight(var_36_float); // 0x2c4 Func
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x2c6 PushE
	var_46_float = var_46_float + var_36_float; // 0x2c7 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x2c8 PopE
	var_39_cvector = var_37_cvector - var_38_cvector; // 0x2c9 Sub2
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x2ca PushE
	var_47_float = 0; // 0x2cb MovI
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x2cc PopE
	var_48_int = var_39_cvector | var_39_cvector; // 0x2cd Or
	var_49_float = sqrt(var_48_int); // 0x2ce Sqrt
	var_39_cvector = var_39_cvector / var_39_cvector; // 0x2cf Div2
	var_40_cvector = -var_39_cvector; // 0x2d0 Neg2
	var_50_float = var_39_cvector * var_26_float; // 0x2d1 Mult
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x2d2 PushV
	var_53_cvector = CVector(0.0, 1.0, 0.0); // 0x2d3 PushVec
	var_52_cvector = var_40_cvector ^ var_53_cvector; // 0x2d4 Xor2
	func_840(var_51_cvector, var_52_cvector); // 0x2d5 NEW_2
	var_59_int = 25; // 0x2d7 PushI
	var_60_float = var_51_cvector * var_59_int; // 0x2d8 Mult
	var_61_int = var_50_float + var_60_float; // 0x2d9 Add
	var_62_cvector = CVector(0.0, 10.0, 0.0); // 0x2da PushVec
	var_41_cvector = var_61_int - var_62_cvector; // 0x2db Sub2
	var_42_cvector = var_38_cvector + var_41_cvector; // 0x2dc Add2
	IsOverrideActive(var_43_bool); // 0x2dd Func
	var_63_bool = var_43_bool; // 0x2df Push
	if(var_63_bool == 0) goto Label_739; // 0x2e0 JumpB
	var_24_bool = 0; // 0x2e1 MovB
	return 18; // 0x2e2 Return
	
Label_739:
	StopWorld(); // 0x2e3 Func
	var_64_bool = 1; // 0x2e5 PushB
	CameraTransit(var_42_cvector, var_40_cvector, var_64_bool); // 0x2e6 Func
	var_65_float = GetByIndex(var_41_cvector, 0); // 0x2e8 PushE
	var_66_float = GetByIndex(var_41_cvector, 2); // 0x2e9 PushE
	Rotate(var_65_float, var_66_float); // 0x2ea Func
	var_67_bool = 0; // 0x2ec PushV
	func_1086(var_67_bool); // 0x2ed NEW_2
	if(var_67_bool == 0) goto Label_753; // 0x2ef JumpB
	goto Label_761; // 0x2f0 Jump
	
Label_761:
	CameraWaitForPlayFinish(); // 0x2f9 Func
	ResumeWorld(); // 0x2fb Func
	var_24_bool = 1; // 0x2fd MovB
	return 18; // 0x2fe Return
	
Label_753:
	var_68_string = "head"; // 0x2f1 PushS
	HasAnimationTrack(var_44_bool, var_68_string); // 0x2f2 Func
	var_69_bool = var_44_bool; // 0x2f4 Push
	if(var_69_bool == 0) goto Label_761; // 0x2f5 JumpB
	var_70_string = "head"; // 0x2f6 PushS
	LookAsyncCamera(var_70_string); // 0x2f7 Func
}


func_827()
{
	var_15_bool = 0; // 0x33b PushV
	func_1086(var_15_bool); // 0x33c NEW_2
	if(var_15_bool == 0) goto Label_833; // 0x33e JumpB
	lshStopSpeech(); // 0x33f Func
	
Label_833:
	return 0; // 0x341 Return
}


func_1084(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png"; // 0x43c MovS
	return 0; // 0x43d Return
}


func_1086(var_67_bool)
{
	var_67_bool = 0; // 0x43e MovB
	return 0; // 0x43f Return
}


func_959(var_49_bool, var_50_object, var_51_int)
{
	var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0; var_55_object = Obj(); var_56_object = Obj(); var_57_int = 0; // 0x3bf PushV
	var_58_object = Obj(); // 0x3c0 PushV
	func_946(var_58_object); // 0x3c1 NEW_2
	var_55_object = var_58_object; // 0x3c2 Mov
	Find(var_51_int, var_56_object); // 0x3c4 ObjFunc
	var_63_bool = var_56_object == 0; // 0x3c6 Not
	if(var_63_bool == 0) goto Label_974; // 0x3c7 JumpB
	var_64_string = "Can't find diary parent with id: "; // 0x3c8 PushS
	var_65_int = var_64_string + var_51_int; // 0x3c9 Add
	Trace(var_65_int); // 0x3ca Func
	var_49_bool = 0; // 0x3cc MovB
	return 6; // 0x3cd Return
	
Label_974:
	AddChild(var_50_object); // 0x3ce ObjFunc
	var_66_int = 7; // 0x3d0 PushI
	SendWorldWndMessage(var_66_int); // 0x3d1 Func
	GetCategory(var_57_int); // 0x3d3 ObjFunc
	SetDiarySection(var_57_int); // 0x3d5 Func
	var_49_bool = 0; // 0x3d7 MovB
	return 6; // 0x3d8 Return
}


func_834(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x342 PushV
	self(var_21_object); // 0x343 Func
	var_19_object = var_21_object; // 0x345 Mov
	return 2; // 0x346 Return
}


func_451(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x1c3 PushV
	var_6_int = 0; // 0x1c4 TMovB
	
Label_453:
	var_18_int = 3; // 0x1c5 PushI
	rand(var_16_float, var_18_int); // 0x1c6 Func
	var_19_int = 3; // 0x1c8 PushI
	var_20_int = var_16_float + var_19_int; // 0x1c9 Add
	Sleep(var_20_int, var_17_bool); // 0x1ca Func
	var_6_int = 1; // 0x1cc TMovB
	var_21_float = 0; var_22_float = 0; // 0x1cd PushV
	var_21_float = var_12_float; // 0x1ce Mov
	var_22_float = var_13_float; // 0x1cf Mov
	func_520(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x1d0 NEW_2
	var_6_int = 0; // 0x1d2 TMovB
	goto Label_453; // 0x1d3 Jump
}


func_840(var_51_cvector, var_52_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x348 PushV
	var_56_int = var_52_cvector | var_52_cvector; // 0x349 Or
	var_55_float = sqrt(var_56_int); // 0x34a Sqrt2
	var_57_float = 0.0; // 0x34b PushF
	var_58_bool = var_55_float < var_57_float; // 0x34c LT
	if(var_58_bool == 0) goto Label_848; // 0x34d JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x34e MovV
	return 2; // 0x34f Return
	
Label_848:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x350 Div2
	return 2; // 0x351 Return
}


func_585(var_2_object, var_3_string)
{
	func_680(); // 0x24a NEW_2
	var_13_int = 10; // 0x24c PushI
	KillTimer(var_13_int); // 0x24d Func
	var_14_object = var_2_object; // 0x24f PushT
	if(var_14_object == 0) goto Label_597; // 0x250 JumpB
	var_15_string = "head"; // 0x251 PushS
	UnlookAsync(var_15_string); // 0x252 Func
	var_2_object = 0; // 0x254 TMovB
	
Label_597:
	var_3_string = 1; // 0x255 TMovB
	return 0; // 0x256 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_112; // 0x4f JumpB
	var_92_string = ""; // 0x50 PushV
	var_92_string = "Neutral"; // 0x51 MovS
	func_142(var_86_object, var_92_string); // 0x52 NEW_2
	var_109_int = 533313; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_bool = 0; var_111_object = Obj(); // 0x59 PushV
	var_111_object = var_1_object; // 0x5a MovT
	func_908(var_111_object); // 0x5b NEW_2
	if(var_110_bool == 0) goto Label_99; // 0x5d JumpB
	var_118_int = 535847; // 0x5e PushI
	var_119_int = 37548; // 0x5f PushI
	var_120_int = 37547; // 0x60 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x61 TObjFunc
	
Label_99:
	var_121_int = 535882; // 0x63 PushI
	var_122_int = -1; // 0x64 PushI
	var_123_int = 37588; // 0x65 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x66 TObjFunc
	var_124_int = 535851; // 0x68 PushI
	var_125_int = -1; // 0x69 PushI
	var_126_int = 37551; // 0x6a PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_127_bool = 0; // 0x70 PushV
	func_1086(var_127_bool); // 0x71 NEW_2
	if(var_127_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_128_string = var_3_string; // 0x76 PushT
	if(var_128_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_129_string = ""; // 0x79 PushV
	var_129_string = var_2_object; // 0x7a MovT
	func_785(var_129_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_140_string = "all"; // 0x7f PushS
	var_141_string = "idle"; // 0x80 PushS
	PlayAnimation(var_140_string, var_141_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_142_string = var_3_string; // 0x85 PushT
	if(var_142_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_143_string = "all"; // 0x88 PushS
	var_144_string = "idle"; // 0x89 PushS
	PlayAnimation(var_143_string, var_144_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
}


func_850(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0; // 0x352 PushV
	GetVariable(var_113_string, var_115_int); // 0x353 Func
	var_112_int = var_115_int; // 0x355 Mov
	return 2; // 0x356 Return
}


func_469(var_5_int)
{
	var_5_int = 1; // 0x1d5 TMovB
	var_15_bool = 0; // 0x1d6 PushV
	var_15_bool = 0; // 0x1d7 MovB
	var_16_bool = 0; // 0x1d8 PushV
	func_693(var_16_bool); // 0x1d9 NEW_2
	var_19_bool = var_16_bool == 0; // 0x1db Not
	if(var_19_bool == 0) goto Label_482; // 0x1dc JumpB
	var_20_bool = 0; // 0x1dd PushV
	func_518(var_20_bool); // 0x1de NEW_2
	if(var_20_bool == 0) goto Label_482; // 0x1e0 JumpB
	var_15_bool = 1; // 0x1e1 MovB
	
Label_482:
	if(var_15_bool == 0) goto Label_488; // 0x1e2 JumpB
	var_21_object = Obj(); // 0x1e3 PushV
	func_834(var_21_object); // 0x1e4 NEW_2
	RemoveActor(var_21_object); // 0x1e6 Func
	
Label_488:
	return 0; // 0x1e8 Return
}


func_599()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x257 PushV
	WaitForAnimEnd(); // 0x258 Func
	var_44_bool = 0; // 0x25a PushV
	func_693(var_44_bool); // 0x25b NEW_2
	var_45_bool = var_44_bool == 0; // 0x25d Not
	if(var_45_bool == 0) goto Label_608; // 0x25e JumpB
	return 14; // 0x25f Return
	
Label_608:
	var_46_int = 0; // 0x260 PushV
	func_1061(var_46_int); // 0x261 NEW_2
	var_37_int = var_46_int; // 0x262 Mov
	var_38_int = 0; // 0x264 MovI
	
Label_613:
	var_59_bool = 0; // 0x265 PushV
	var_59_bool = 0; // 0x266 MovB
	var_60_int = 5; // 0x267 PushI
	var_61_bool = var_38_int < var_60_int; // 0x268 LT
	if(var_61_bool == 0) goto Label_623; // 0x269 JumpB
	var_62_bool = 0; // 0x26a PushV
	func_693(var_62_bool); // 0x26b NEW_2
	if(var_62_bool == 0) goto Label_623; // 0x26d JumpB
	var_59_bool = 1; // 0x26e MovB
	
Label_623:
	if(var_59_bool == 0) goto Label_675; // 0x26f JumpB
	var_63_int = 3; // 0x270 PushI
	irand(var_39_int, var_63_int); // 0x271 Func
	var_64_int = 0; // 0x273 PushI
	var_65_bool = var_39_int == var_64_int; // 0x274 Eq
	if(var_65_bool == 0) goto Label_647; // 0x275 JumpB
	var_66_int = var_37_int; // 0x276 Push
	if(var_66_int == 0) goto Label_646; // 0x277 JumpB
	irand(var_40_int, var_37_int); // 0x278 Func
	var_67_string = "all"; // 0x27a PushS
	var_68_string = ""; var_69_int = 0; // 0x27b PushV
	var_69_int = var_40_int; // 0x27c Mov
	func_1054(var_68_string, var_69_int); // 0x27d NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x27f Func
	WaitForAnimEnd(var_41_bool); // 0x281 Func
	var_70_bool = var_41_bool == 0; // 0x283 Not
	if(var_70_bool == 0) goto Label_646; // 0x284 JumpB
	goto Label_675; // 0x285 Jump
	
Label_675:
	ResetAAS(); // 0x2a3 Func
	return 14; // 0x2a5 Return
	
Label_646:
	goto Label_664; // 0x286 Jump
	
Label_664:
	var_71_bool = 0; // 0x298 PushV
	func_678(var_71_bool); // 0x299 NEW_2
	var_72_bool = var_71_bool == 0; // 0x29b Not
	if(var_72_bool == 0) goto Label_670; // 0x29c JumpB
	goto Label_675; // 0x29d Jump
	
Label_670:
	ResetAAS(); // 0x29e Func
	var_73_int = 1; // 0x2a0 PushI
	var_38_int = var_38_int + var_73_int; // 0x2a1 Add2
	goto Label_613; // 0x2a2 Jump
	
Label_647:
	var_74_int = 1; // 0x287 PushI
	var_75_bool = var_39_int == var_74_int; // 0x288 Eq
	if(var_75_bool == 0) goto Label_661; // 0x289 JumpB
	var_76_int = 4; // 0x28a PushI
	rand(var_42_float, var_76_int); // 0x28b Func
	var_77_int = 1; // 0x28d PushI
	var_78_int = var_42_float + var_77_int; // 0x28e Add
	Sleep(var_78_int, var_43_bool); // 0x28f Func
	var_79_bool = var_43_bool == 0; // 0x291 Not
	if(var_79_bool == 0) goto Label_660; // 0x292 JumpB
	goto Label_675; // 0x293 Jump
	
Label_660:
	goto Label_664; // 0x294 Jump
	
Label_661:
	var_80_int = var_38_int; // 0x295 Push
	if(var_80_int == 0) goto Label_664; // 0x296 JumpB
	goto Label_675; // 0x297 Jump
}


func_855(var_41_float)
{
	var_42_float = 0; var_43_float = 0; // 0x357 PushV
	GetGameTime(var_43_float); // 0x358 Func
	var_41_float = var_43_float; // 0x35a Mov
	return 2; // 0x35b Return
}


func_987(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0x3db PushV
	GetMainOutdoorScene(var_33_object); // 0x3dc Func
	var_35_bool = var_33_object == 0; // 0x3de NullEq
	if(var_35_bool == 0) goto Label_998; // 0x3df JumpB
	var_36_string = "Can't find main outdoor scene"; // 0x3e0 PushS
	Trace(var_36_string); // 0x3e1 Func
	var_34_object = 0; // 0x3e3 SetNull
	var_30_object = var_34_object; // 0x3e4 Mov
	return 4; // 0x3e5 Return
	
Label_998:
	GetMap(var_34_object); // 0x3e6 ObjFunc
	var_30_object = var_34_object; // 0x3e8 Mov
	return 4; // 0x3e9 Return
}


func_860()
{
	var_20_string = "ood8Doberman1"; // 0x35d PushS
	var_21_int = 1; // 0x35e PushI
	SetVariable(var_20_string, var_21_int); // 0x35f Func
	return 0; // 0x361 Return
}


func_866()
{
	var_77_object = Obj(); var_78_string = ""; var_79_float = 0; // 0x363 PushV
	var_80_object = Obj(); // 0x364 PushV
	func_987(var_80_object); // 0x365 NEW_2
	var_77_object = var_80_object; // 0x366 Mov
	var_78_string = "pt_map_kapella"; // 0x368 MovS
	var_79_float = 2; // 0x369 MovI
	func_1004(var_77_object, var_78_string, var_79_float); // 0x36a NEW_2
	var_100_object = Obj(); // 0x36c PushV
	func_987(var_100_object); // 0x36d NEW_2
	ShowMap(var_100_object); // 0x36f ObjFunc
	return 0; // 0x371 Return
}


func_1004(var_77_object, var_78_string, var_79_float)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_bool = 0; // 0x3ec PushV
	GetMainOutdoorScene(var_87_object); // 0x3ed Func
	var_89_bool = var_87_object == 0; // 0x3ef NullEq
	if(var_89_bool == 0) goto Label_1013; // 0x3f0 JumpB
	var_90_string = "Can't find main outdoor scene"; // 0x3f1 PushS
	Trace(var_90_string); // 0x3f2 Func
	return 8; // 0x3f4 Return
	
Label_1013:
	GetLocator(var_78_string, var_88_bool, var_85_cvector, var_86_cvector); // 0x3f5 ObjFunc
	var_91_bool = var_88_bool == 0; // 0x3f7 Not
	if(var_91_bool == 0) goto Label_1023; // 0x3f8 JumpB
	var_92_string = "Warning: outdoor scene locator "; // 0x3f9 PushS
	var_93_int = var_92_string + var_78_string; // 0x3fa Add
	var_94_string = " doesnt exist"; // 0x3fb PushS
	var_95_int = var_93_int + var_94_string; // 0x3fc Add
	Trace(var_95_int); // 0x3fd Func
	
Label_1023:
	GetMap(var_77_object); // 0x3ff ObjFunc
	var_96_bool = var_77_object == 0; // 0x401 NullEq
	if(var_96_bool == 0) goto Label_1031; // 0x402 JumpB
	var_97_string = "Can't find map"; // 0x403 PushS
	Trace(var_97_string); // 0x404 Func
	return 8; // 0x406 Return
	
Label_1031:
	var_98_float = GetByIndex(var_85_cvector, 0); // 0x407 PushE
	var_99_float = GetByIndex(var_85_cvector, 2); // 0x408 PushE
	SetMapParams(var_98_float, var_99_float, var_79_float); // 0x409 ObjFunc
	return 8; // 0x40b Return
}


func_882()
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x372 PushV
	var_28_string = "d8q02"; // 0x373 PushS
	var_29_int = 1; // 0x374 PushI
	SetVariable(var_28_string, var_29_int); // 0x375 Func
	var_30_object = Obj(); // 0x377 PushV
	func_987(var_30_object); // 0x378 NEW_2
	var_27_object = var_30_object; // 0x379 Mov
	var_37_string = "d8q02GotoKapella"; // 0x37b PushS
	var_38_string = "pt_map_kapella"; // 0x37c PushS
	var_39_int = 0; // 0x37d PushI
	var_40_int = 540068; // 0x37e PushI
	var_41_float = 0; // 0x37f PushV
	func_855(var_41_float); // 0x380 NEW_2
	AddMark(var_37_string, var_38_string, var_39_int, var_40_int, var_41_float); // 0x382 ObjFunc
	func_920(); // 0x385 NEW_2
	func_933(); // 0x388 NEW_2
	return 2; // 0x38a Return
}


func_767()
{
	var_147_bool = 0; var_148_bool = 0; // 0x2ff PushV
	var_149_bool = 1; // 0x300 PushB
	CameraSwitchToNormal(var_149_bool); // 0x301 Func
	var_150_bool = 0; // 0x303 PushV
	func_1086(var_150_bool); // 0x304 NEW_2
	if(var_150_bool == 0) goto Label_776; // 0x306 JumpB
	goto Label_784; // 0x307 Jump
	
Label_784:
	return 2; // 0x310 Return
	
Label_776:
	var_151_string = "head"; // 0x308 PushS
	HasAnimationTrack(var_148_bool, var_151_string); // 0x309 Func
	var_152_bool = var_148_bool; // 0x30b Push
	if(var_152_bool == 0) goto Label_784; // 0x30c JumpB
	var_153_string = "head"; // 0x30d PushS
	UnlookAsync(var_153_string); // 0x30e Func
}


