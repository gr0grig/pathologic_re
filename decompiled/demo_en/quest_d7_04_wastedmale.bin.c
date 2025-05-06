task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xa5 PushI
	if(var_14_int == 0) goto Label_369; // 0xa6 JumpB
	func_758(); // 0xa8 NEW_2
	var_16_int = 37513; // 0xaa PushI
	var_17_bool = var_13_bool == var_16_int; // 0xab Eq
	if(var_17_bool == 0) goto Label_183; // 0xac JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xad PushV
	var_18_object = var_1_object; // 0xae MovT
	var_19_object = var_0_object; // 0xaf MovT
	func_863(); // 0xb0 NEW_2
	var_67_object = Obj(); var_68_object = Obj(); // 0xb2 PushV
	var_67_object = var_1_object; // 0xb3 MovT
	var_68_object = var_0_object; // 0xb4 MovT
	func_847(); // 0xb5 NEW_2
	
Label_183:
	var_93_int = 37516; // 0xb7 PushI
	var_94_bool = var_13_bool == var_93_int; // 0xb8 Eq
	if(var_94_bool == 0) goto Label_196; // 0xb9 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0xba PushV
	var_95_object = var_1_object; // 0xbb MovT
	var_96_object = var_0_object; // 0xbc MovT
	func_863(); // 0xbd NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0xbf PushV
	var_97_object = var_1_object; // 0xc0 MovT
	var_98_object = var_0_object; // 0xc1 MovT
	func_847(); // 0xc2 NEW_2
	
Label_196:
	var_99_int = 34726; // 0xc4 PushI
	var_100_bool = var_13_bool == var_99_int; // 0xc5 Eq
	if(var_100_bool == 0) goto Label_219; // 0xc6 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0xc7 PushV
	var_101_object = var_1_object; // 0xc8 MovT
	var_102_object = var_0_object; // 0xc9 MovT
	func_863(); // 0xca NEW_2
	var_103_object = Obj(); var_104_object = Obj(); // 0xcc PushV
	var_103_object = var_1_object; // 0xcd MovT
	var_104_object = var_0_object; // 0xce MovT
	func_891(var_104_object); // 0xcf NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0xd1 PushV
	var_127_object = var_1_object; // 0xd2 MovT
	var_128_object = var_0_object; // 0xd3 MovT
	func_912(var_128_object); // 0xd4 NEW_2
	var_138_object = Obj(); var_139_object = Obj(); // 0xd6 PushV
	var_138_object = var_1_object; // 0xd7 MovT
	var_139_object = var_0_object; // 0xd8 MovT
	func_847(); // 0xd9 NEW_2
	
Label_219:
	var_140_int = 37509; // 0xdb PushI
	var_141_bool = var_13_bool == var_140_int; // 0xdc Eq
	if(var_141_bool == 0) goto Label_232; // 0xdd JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0xde PushV
	var_142_object = var_1_object; // 0xdf MovT
	var_143_object = var_0_object; // 0xe0 MovT
	func_863(); // 0xe1 NEW_2
	var_144_object = Obj(); var_145_object = Obj(); // 0xe3 PushV
	var_144_object = var_1_object; // 0xe4 MovT
	var_145_object = var_0_object; // 0xe5 MovT
	func_847(); // 0xe6 NEW_2
	
Label_232:
	var_146_int = 34723; // 0xe8 PushI
	var_147_bool = var_12_bool == var_146_int; // 0xe9 Eq
	if(var_147_bool == 0) goto Label_265; // 0xea JumpB
	var_148_string = ""; // 0xeb PushV
	var_148_string = "Neutral"; // 0xec MovS
	func_142(var_13_bool, var_148_string); // 0xed NEW_2
	var_165_int = 533203; // 0xef PushI
	SetMessage(var_165_int); // 0xf0 TObjFunc
	ClearReplies(); // 0xf2 TObjFunc
	var_166_bool = 0; var_167_object = Obj(); // 0xf4 PushV
	var_167_object = var_1_object; // 0xf5 MovT
	func_923(var_167_object); // 0xf6 NEW_2
	if(var_166_bool == 0) goto Label_254; // 0xf8 JumpB
	var_174_int = 533204; // 0xf9 PushI
	var_175_int = 34725; // 0xfa PushI
	var_176_int = 34724; // 0xfb PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0xfc TObjFunc
	
Label_254:
	var_177_int = 533207; // 0xfe PushI
	var_178_int = -1; // 0xff PushI
	var_179_int = 34727; // 0x100 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x101 TObjFunc
	var_180_int = 535821; // 0x103 PushI
	var_181_int = -1; // 0x104 PushI
	var_182_int = 37514; // 0x105 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x106 TObjFunc
	return 0; // 0x108 Return
	
Label_265:
	var_183_int = 34725; // 0x109 PushI
	var_184_bool = var_12_bool == var_183_int; // 0x10a Eq
	if(var_184_bool == 0) goto Label_288; // 0x10b JumpB
	var_185_string = ""; // 0x10c PushV
	var_185_string = "Neutral"; // 0x10d MovS
	func_142(var_13_bool, var_185_string); // 0x10e NEW_2
	var_186_int = 533205; // 0x110 PushI
	SetMessage(var_186_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_187_int = 535813; // 0x115 PushI
	var_188_int = 37511; // 0x116 PushI
	var_189_int = 37505; // 0x117 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x118 TObjFunc
	var_190_int = 535815; // 0x11a PushI
	var_191_int = 37508; // 0x11b PushI
	var_192_int = 37507; // 0x11c PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_193_int = 37508; // 0x120 PushI
	var_194_bool = var_12_bool == var_193_int; // 0x121 Eq
	if(var_194_bool == 0) goto Label_311; // 0x122 JumpB
	var_195_string = ""; // 0x123 PushV
	var_195_string = "Neutral"; // 0x124 MovS
	func_142(var_13_bool, var_195_string); // 0x125 NEW_2
	var_196_int = 535816; // 0x127 PushI
	SetMessage(var_196_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_197_int = 535817; // 0x12c PushI
	var_198_int = -1; // 0x12d PushI
	var_199_int = 37509; // 0x12e PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x12f TObjFunc
	var_200_int = 535822; // 0x131 PushI
	var_201_int = 37506; // 0x132 PushI
	var_202_int = 37515; // 0x133 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_203_int = 37511; // 0x137 PushI
	var_204_bool = var_12_bool == var_203_int; // 0x138 Eq
	if(var_204_bool == 0) goto Label_334; // 0x139 JumpB
	var_205_string = ""; // 0x13a PushV
	var_205_string = "Neutral"; // 0x13b MovS
	func_142(var_13_bool, var_205_string); // 0x13c NEW_2
	var_206_int = 535818; // 0x13e PushI
	SetMessage(var_206_int); // 0x13f TObjFunc
	ClearReplies(); // 0x141 TObjFunc
	var_207_int = 535820; // 0x143 PushI
	var_208_int = -1; // 0x144 PushI
	var_209_int = 37513; // 0x145 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x146 TObjFunc
	var_210_int = 535819; // 0x148 PushI
	var_211_int = 37506; // 0x149 PushI
	var_212_int = 37512; // 0x14a PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x14b TObjFunc
	return 0; // 0x14d Return
	
Label_334:
	var_213_int = 37506; // 0x14e PushI
	var_214_bool = var_12_bool == var_213_int; // 0x14f Eq
	if(var_214_bool == 0) goto Label_357; // 0x150 JumpB
	var_215_string = ""; // 0x151 PushV
	var_215_string = "Neutral"; // 0x152 MovS
	func_142(var_13_bool, var_215_string); // 0x153 NEW_2
	var_216_int = 535814; // 0x155 PushI
	SetMessage(var_216_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_217_int = 535823; // 0x15a PushI
	var_218_int = -1; // 0x15b PushI
	var_219_int = 37516; // 0x15c PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x15d TObjFunc
	var_220_int = 533206; // 0x15f PushI
	var_221_int = -1; // 0x160 PushI
	var_222_int = 34726; // 0x161 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_3_string = 1; // 0x165 TMovB
	var_223_bool = 0; // 0x166 PushV
	func_1088(var_223_bool); // 0x167 NEW_2
	if(var_223_bool == 0) goto Label_365; // 0x169 JumpB
	lshStopAnimation(); // 0x16a Func
	goto Label_367; // 0x16c Jump
	
Label_367:
	return 0; // 0x16f Return
	
Label_365:
	StopAnimation(); // 0x16d Func
	
Label_369:
	return 0; // 0x171 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_object = Obj(); // 0x179 PushV
	var_14_object = var_12_object; // 0x17a Mov
	TaskCall(0); // 0x17b TaskCall
	func_0(var_15_object, var_13_int, var_14_object); // 0x17c NEW_2
	TaskReturn(); // 0x17d TaskReturn
	return 0; // 0x17f Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1a7 PushS
	var_14_bool = var_12_string == var_13_string; // 0x1a8 Eq
	if(var_14_bool == 0) goto Label_429; // 0x1a9 JumpB
	func_402(var_12_string); // 0x1ab NEW_2
	
Label_429:
	return 0; // 0x1ad Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1ae PushT
	if(var_12_int == 0) goto Label_435; // 0x1af JumpB
	func_518(var_10_bool, var_11_bool); // 0x1b1 NEW_2
	
Label_435:
	var_16_bool = 0; // 0x1b3 PushV
	var_16_bool = 0; // 0x1b4 MovB
	var_17_int = var_5_int; // 0x1b5 PushT
	if(var_17_int == 0) goto Label_444; // 0x1b6 JumpB
	var_18_bool = 0; // 0x1b7 PushV
	func_451(var_18_bool); // 0x1b8 NEW_2
	if(var_18_bool == 0) goto Label_444; // 0x1ba JumpB
	var_16_bool = 1; // 0x1bb MovB
	
Label_444:
	if(var_16_bool == 0) goto Label_450; // 0x1bc JumpB
	var_19_object = Obj(); // 0x1bd PushV
	func_765(var_19_object); // 0x1be NEW_2
	RemoveActor(var_19_object); // 0x1c0 Func
	
Label_450:
	return 0; // 0x1c2 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1f0 PushI
	var_14_bool = var_12_int == var_13_int; // 0x1f1 Eq
	if(var_14_bool == 0) goto Label_517; // 0x1f2 JumpB
	var_15_bool = 0; // 0x1f3 PushV
	func_480(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1f4 NEW_2
	if(var_15_bool == 0) goto Label_511; // 0x1f6 JumpB
	var_28_bool = var_2_object == 0; // 0x1f7 Not
	if(var_28_bool == 0) goto Label_510; // 0x1f8 JumpB
	var_29_object = Obj(); // 0x1f9 PushV
	var_29_object = var_4_bool; // 0x1fa MovT
	func_747(var_29_object); // 0x1fb NEW_2
	var_2_object = 1; // 0x1fd TMovB
	
Label_510:
	goto Label_517; // 0x1fe Jump
	
Label_517:
	return 0; // 0x205 Return
	
Label_511:
	var_36_object = var_2_object; // 0x1ff PushT
	if(var_36_object == 0) goto Label_517; // 0x200 JumpB
	var_37_string = "head"; // 0x201 PushS
	UnlookAsync(var_37_string); // 0x202 Func
	var_2_object = 0; // 0x204 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x172 PushV
	var_12_float = 300; // 0x173 MovI
	var_13_float = 100; // 0x174 MovI
	func_384(var_11_bool, var_12_float, var_13_float); // 0x175 NEW_2
	return 0; // 0x177 Return
}


func_384(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x180 PushV
	var_6_int = 0; // 0x181 TMovB
	
Label_386:
	var_18_int = 3; // 0x182 PushI
	rand(var_16_float, var_18_int); // 0x183 Func
	var_19_int = 3; // 0x185 PushI
	var_20_int = var_16_float + var_19_int; // 0x186 Add
	Sleep(var_20_int, var_17_bool); // 0x187 Func
	var_6_int = 1; // 0x189 TMovB
	var_21_float = 0; var_22_float = 0; // 0x18a PushV
	var_21_float = var_12_float; // 0x18b Mov
	var_22_float = var_13_float; // 0x18c Mov
	func_453(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x18d NEW_2
	var_6_int = 0; // 0x18f TMovB
	goto Label_386; // 0x190 Jump
}


func_0(var_0_object, var_13_int, var_14_object)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; // 0x0 PushV
	var_0_object = var_14_object; // 0x1 TMov
	var_24_bool = 0; var_25_object = Obj(); var_26_float = 0; // 0x2 PushV
	var_25_object = var_14_object; // 0x3 Mov
	var_26_float = 70.0; // 0x4 MovF
	func_631(var_25_object, var_26_float); // 0x5 NEW_2
	var_70_bool = var_24_bool == 0; // 0x7 Not
	if(var_70_bool == 0) goto Label_11; // 0x8 JumpB
	var_13_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_20_object); // 0xb Func
	var_71_int = 0; // 0xd PushV
	func_1082(var_71_int); // 0xe NEW_2
	SetNPCName(var_71_int); // 0x10 ObjFunc
	var_72_int = 0; // 0x12 PushV
	func_1080(var_72_int); // 0x13 NEW_2
	SetNPCDescription(var_72_int); // 0x15 ObjFunc
	var_73_string = ""; // 0x17 PushV
	func_1084(var_73_string); // 0x18 NEW_2
	SetPhoto(var_73_string); // 0x1a ObjFunc
	var_74_string = ""; // 0x1c PushV
	func_1086(var_74_string); // 0x1d NEW_2
	SetPhoto2(var_74_string); // 0x1f ObjFunc
	var_75_int = 0; // 0x21 PushV
	func_1039(var_75_int); // 0x22 NEW_2
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
	var_144_bool = var_23_bool == 0; // 0x38 Not
	if(var_144_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_23_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_145_object = Obj(); // 0x3f PushV
	var_145_object = var_14_object; // 0x40 Mov
	func_699(); // 0x41 NEW_2
	StopDialog(var_20_object); // 0x43 Func
	GetReturnValue(var_22_int); // 0x45 ObjFunc
	var_13_int = var_22_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_771(var_51_cvector, var_52_cvector)
{
	var_54_float = 0; var_55_float = 0; // 0x303 PushV
	var_56_int = var_52_cvector | var_52_cvector; // 0x304 Or
	var_55_float = sqrt(var_56_int); // 0x305 Sqrt2
	var_57_float = 0.0; // 0x306 PushF
	var_58_bool = var_55_float < var_57_float; // 0x307 LT
	if(var_58_bool == 0) goto Label_779; // 0x308 JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x309 MovV
	return 2; // 0x30a Return
	
Label_779:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x30b Div2
	return 2; // 0x30c Return
}


func_518(var_2_object, var_3_string)
{
	func_613(); // 0x207 NEW_2
	var_13_int = 10; // 0x209 PushI
	KillTimer(var_13_int); // 0x20a Func
	var_14_object = var_2_object; // 0x20c PushT
	if(var_14_object == 0) goto Label_530; // 0x20d JumpB
	var_15_string = "head"; // 0x20e PushS
	UnlookAsync(var_15_string); // 0x20f Func
	var_2_object = 0; // 0x211 TMovB
	
Label_530:
	var_3_string = 1; // 0x212 TMovB
	return 0; // 0x213 Return
}


func_781(var_111_int, var_112_string)
{
	var_113_int = 0; var_114_int = 0; // 0x30d PushV
	GetVariable(var_112_string, var_114_int); // 0x30e Func
	var_111_int = var_114_int; // 0x310 Mov
	return 2; // 0x311 Return
}


func_142(var_2_object, var_91_string)
{
	var_92_bool = 0; // 0x8f PushV
	func_1088(var_92_bool); // 0x90 NEW_2
	var_93_bool = var_92_bool == 0; // 0x92 Not
	if(var_93_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_94_bool = var_91_string == var_2_object; // 0x95 Eq
	if(var_94_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_95_string = ""; var_96_bool = 0; // 0x98 PushV
	var_95_string = var_91_string; // 0x99 Mov
	var_97_string = ""; // 0x9a PushS
	var_98_bool = var_91_string == var_97_string; // 0x9b Eq
	if(var_98_bool == 0) goto Label_159; // 0x9c JumpB
	var_96_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_732(var_95_string, var_96_bool); // 0xa0 NEW_2
	var_2_object = var_91_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_96_bool = 1; // 0x9f MovB
}


func_1039(var_75_int)
{
	var_76_int = 0; var_77_int = 0; // 0x40f PushV
	var_78_string = "branch"; // 0x410 PushS
	GetVariable(var_78_string, var_77_int); // 0x411 Func
	var_79_int = 0; // 0x413 PushI
	var_80_bool = var_77_int == var_79_int; // 0x414 Eq
	if(var_80_bool == 0) goto Label_1049; // 0x415 JumpB
	var_75_int = 1; // 0x416 MovI
	return 2; // 0x417 Return
	
Label_1049:
	var_81_int = 1; // 0x419 PushI
	var_82_bool = var_77_int == var_81_int; // 0x41a Eq
	if(var_82_bool == 0) goto Label_1054; // 0x41b JumpB
	var_75_int = 2; // 0x41c MovI
	return 2; // 0x41d Return
	
Label_1054:
	var_75_int = 3; // 0x41e MovI
	return 2; // 0x41f Return
}


func_912(var_127_object)
{
	var_129_string = "rifle ammo10 is given"; // 0x391 PushS
	Trace(var_129_string); // 0x392 Func
	var_130_object = Obj(); var_131_string = ""; var_132_int = 0; // 0x394 PushV
	var_130_object = var_127_object; // 0x395 Mov
	var_131_string = "rifle_ammo"; // 0x396 MovS
	var_132_int = 10; // 0x397 MovI
	func_817(var_130_object, var_131_string, var_132_int); // 0x398 NEW_2
	return 0; // 0x39a Return
}


func_402(var_5_int)
{
	var_5_int = 1; // 0x192 TMovB
	var_15_bool = 0; // 0x193 PushV
	var_15_bool = 0; // 0x194 MovB
	var_16_bool = 0; // 0x195 PushV
	func_626(var_16_bool); // 0x196 NEW_2
	var_19_bool = var_16_bool == 0; // 0x198 Not
	if(var_19_bool == 0) goto Label_415; // 0x199 JumpB
	var_20_bool = 0; // 0x19a PushV
	func_451(var_20_bool); // 0x19b NEW_2
	if(var_20_bool == 0) goto Label_415; // 0x19d JumpB
	var_15_bool = 1; // 0x19e MovB
	
Label_415:
	if(var_15_bool == 0) goto Label_421; // 0x19f JumpB
	var_21_object = Obj(); // 0x1a0 PushV
	func_765(var_21_object); // 0x1a1 NEW_2
	RemoveActor(var_21_object); // 0x1a3 Func
	
Label_421:
	return 0; // 0x1a5 Return
}


func_786(var_122_int, var_123_int)
{
	var_124_object = Obj(); var_125_object = Obj(); // 0x312 PushV
	CreateIntVector(var_125_object); // 0x313 Func
	add(var_122_int); // 0x315 ObjFunc
	add(var_123_int); // 0x317 ObjFunc
	var_126_int = 3; // 0x319 PushI
	SendWorldWndMessage(var_126_int, var_125_object); // 0x31a Func
	return 2; // 0x31c Return
}


func_532()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x214 PushV
	WaitForAnimEnd(); // 0x215 Func
	var_44_bool = 0; // 0x217 PushV
	func_626(var_44_bool); // 0x218 NEW_2
	var_45_bool = var_44_bool == 0; // 0x21a Not
	if(var_45_bool == 0) goto Label_541; // 0x21b JumpB
	return 14; // 0x21c Return
	
Label_541:
	var_46_int = 0; // 0x21d PushV
	func_1063(var_46_int); // 0x21e NEW_2
	var_37_int = var_46_int; // 0x21f Mov
	var_38_int = 0; // 0x221 MovI
	
Label_546:
	var_59_bool = 0; // 0x222 PushV
	var_59_bool = 0; // 0x223 MovB
	var_60_int = 5; // 0x224 PushI
	var_61_bool = var_38_int < var_60_int; // 0x225 LT
	if(var_61_bool == 0) goto Label_556; // 0x226 JumpB
	var_62_bool = 0; // 0x227 PushV
	func_626(var_62_bool); // 0x228 NEW_2
	if(var_62_bool == 0) goto Label_556; // 0x22a JumpB
	var_59_bool = 1; // 0x22b MovB
	
Label_556:
	if(var_59_bool == 0) goto Label_608; // 0x22c JumpB
	var_63_int = 3; // 0x22d PushI
	irand(var_39_int, var_63_int); // 0x22e Func
	var_64_int = 0; // 0x230 PushI
	var_65_bool = var_39_int == var_64_int; // 0x231 Eq
	if(var_65_bool == 0) goto Label_580; // 0x232 JumpB
	var_66_int = var_37_int; // 0x233 Push
	if(var_66_int == 0) goto Label_579; // 0x234 JumpB
	irand(var_40_int, var_37_int); // 0x235 Func
	var_67_string = "all"; // 0x237 PushS
	var_68_string = ""; var_69_int = 0; // 0x238 PushV
	var_69_int = var_40_int; // 0x239 Mov
	func_1056(var_68_string, var_69_int); // 0x23a NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x23c Func
	WaitForAnimEnd(var_41_bool); // 0x23e Func
	var_70_bool = var_41_bool == 0; // 0x240 Not
	if(var_70_bool == 0) goto Label_579; // 0x241 JumpB
	goto Label_608; // 0x242 Jump
	
Label_608:
	ResetAAS(); // 0x260 Func
	return 14; // 0x262 Return
	
Label_579:
	goto Label_597; // 0x243 Jump
	
Label_597:
	var_71_bool = 0; // 0x255 PushV
	func_611(var_71_bool); // 0x256 NEW_2
	var_72_bool = var_71_bool == 0; // 0x258 Not
	if(var_72_bool == 0) goto Label_603; // 0x259 JumpB
	goto Label_608; // 0x25a Jump
	
Label_603:
	ResetAAS(); // 0x25b Func
	var_73_int = 1; // 0x25d PushI
	var_38_int = var_38_int + var_73_int; // 0x25e Add2
	goto Label_546; // 0x25f Jump
	
Label_580:
	var_74_int = 1; // 0x244 PushI
	var_75_bool = var_39_int == var_74_int; // 0x245 Eq
	if(var_75_bool == 0) goto Label_594; // 0x246 JumpB
	var_76_int = 4; // 0x247 PushI
	rand(var_42_float, var_76_int); // 0x248 Func
	var_77_int = 1; // 0x24a PushI
	var_78_int = var_42_float + var_77_int; // 0x24b Add
	Sleep(var_78_int, var_43_bool); // 0x24c Func
	var_79_bool = var_43_bool == 0; // 0x24e Not
	if(var_79_bool == 0) goto Label_593; // 0x24f JumpB
	goto Label_608; // 0x250 Jump
	
Label_593:
	goto Label_597; // 0x251 Jump
	
Label_594:
	var_80_int = var_38_int; // 0x252 Push
	if(var_80_int == 0) goto Label_597; // 0x253 JumpB
	goto Label_608; // 0x254 Jump
}


func_923(var_109_bool)
{
	var_111_int = 0; var_112_string = ""; // 0x39c PushV
	var_112_string = "d7q04"; // 0x39d MovS
	func_781(var_111_int, var_112_string); // 0x39e NEW_2
	var_115_int = 1; // 0x3a0 PushI
	var_116_bool = var_111_int == var_115_int; // 0x3a1 Eq
	if(var_116_bool == 0) goto Label_933; // 0x3a2 JumpB
	var_109_bool = 1; // 0x3a3 MovB
	return 0; // 0x3a4 Return
	
Label_933:
	var_109_bool = 0; // 0x3a5 MovB
	return 0; // 0x3a6 Return
}


func_798(var_112_object, var_113_int)
{
	var_114_int = 0; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_int = 0; var_119_bool = 0; // 0x31e PushV
	GetItemID(var_117_int); // 0x31f ObjFunc
	var_120_string = "Category"; // 0x321 PushS
	GetInvItemProperty(var_118_int, var_117_int, var_120_string); // 0x322 Func
	AddItem(var_119_bool, var_112_object, var_118_int, var_113_int); // 0x324 ObjFunc
	var_121_bool = var_119_bool == 0; // 0x326 Not
	if(var_121_bool == 0) goto Label_811; // 0x327 JumpB
	DropItems(var_112_object, var_113_int); // 0x328 ObjFunc
	goto Label_816; // 0x32a Jump
	
Label_816:
	return 6; // 0x330 Return
	
Label_811:
	var_122_int = 0; var_123_int = 0; // 0x32b PushV
	var_122_int = var_117_int; // 0x32c Mov
	var_123_int = var_113_int; // 0x32d Mov
	func_786(var_122_int, var_123_int); // 0x32e NEW_2
}


func_1056(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x420 PushV
	var_55_string = "idle"; // 0x421 MovS
	var_56_int = var_53_int; // 0x422 Push
	if(var_56_int == 0) goto Label_1061; // 0x423 JumpB
	var_55_string = var_55_string + var_53_int; // 0x424 Add2
	
Label_1061:
	var_52_string = var_55_string; // 0x425 Mov
	return 2; // 0x426 Return
}


func_1063(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x427 PushV
	var_49_int = 0; // 0x428 MovI
	
Label_1065:
	var_51_string = "all"; // 0x429 PushS
	var_52_string = ""; var_53_int = 0; // 0x42a PushV
	var_53_int = var_49_int; // 0x42b Mov
	func_1056(var_52_string, var_53_int); // 0x42c NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x42e Func
	var_57_bool = var_50_bool == 0; // 0x430 Not
	if(var_57_bool == 0) goto Label_1075; // 0x431 JumpB
	goto Label_1078; // 0x432 Jump
	
Label_1078:
	var_46_int = var_49_int; // 0x436 Mov
	return 4; // 0x437 Return
	
Label_1075:
	var_58_int = 1; // 0x433 PushI
	var_49_int = var_49_int + var_58_int; // 0x434 Add2
	goto Label_1065; // 0x435 Jump
}


func_935()
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x3a7 PushV
	var_40_int = 639; // 0x3a8 PushI
	var_41_int = 2; // 0x3a9 PushI
	var_42_int = 533225; // 0x3aa PushI
	CreateDiaryEntry(var_39_object, var_40_int, var_41_int, var_42_int); // 0x3ab Func
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0; // 0x3ad PushV
	var_44_object = var_39_object; // 0x3ae Mov
	var_45_int = 637; // 0x3af MovI
	func_961(var_43_bool, var_44_object, var_45_int); // 0x3b0 NEW_2
	return 2; // 0x3b2 Return
}


func_817(var_130_object, var_131_string, var_132_int)
{
	var_133_object = Obj(); var_134_object = Obj(); // 0x331 PushV
	CreateInvItem(var_134_object); // 0x332 Func
	SetItemName(var_131_string); // 0x334 ObjFunc
	var_135_object = Obj(); var_136_object = Obj(); var_137_int = 0; // 0x336 PushV
	var_135_object = var_130_object; // 0x337 Mov
	var_136_object = var_134_object; // 0x338 Mov
	var_137_int = var_132_int; // 0x339 Mov
	func_798(var_136_object, var_137_int); // 0x33a NEW_2
	return 2; // 0x33c Return
}


func_948(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x3b4 PushV
	GetDiaryRoot(var_54_object); // 0x3b5 Func
	var_55_bool = var_54_object == 0; // 0x3b7 Not
	if(var_55_bool == 0) goto Label_958; // 0x3b8 JumpB
	var_56_string = "Can't retrieve diary root"; // 0x3b9 PushS
	Trace(var_56_string); // 0x3ba Func
	var_52_object = 0; // 0x3bc MovB
	return 2; // 0x3bd Return
	
Label_958:
	var_52_object = var_54_object; // 0x3be Mov
	return 2; // 0x3bf Return
}


func_1080(var_72_int)
{
	var_72_int = 515556; // 0x438 MovI
	return 0; // 0x439 Return
}


func_1082(var_71_int)
{
	var_71_int = 503341; // 0x43a MovI
	return 0; // 0x43b Return
}


func_699()
{
	var_146_bool = 0; var_147_bool = 0; // 0x2bb PushV
	CameraSwitchToNormal(); // 0x2bc Func
	var_148_bool = 0; // 0x2be PushV
	func_1088(var_148_bool); // 0x2bf NEW_2
	if(var_148_bool == 0) goto Label_707; // 0x2c1 JumpB
	goto Label_715; // 0x2c2 Jump
	
Label_715:
	return 2; // 0x2cb Return
	
Label_707:
	var_149_string = "head"; // 0x2c3 PushS
	HasAnimationTrack(var_147_bool, var_149_string); // 0x2c4 Func
	var_150_bool = var_147_bool; // 0x2c6 Push
	if(var_150_bool == 0) goto Label_715; // 0x2c7 JumpB
	var_151_string = "head"; // 0x2c8 PushS
	UnlookAsync(var_151_string); // 0x2c9 Func
}


func_1084(var_73_string)
{
	var_73_string = "ui/NPC_Citizen3.png"; // 0x43c MovS
	return 0; // 0x43d Return
}


func_1086(var_74_string)
{
	var_74_string = "ui/NPC_Citizen3_b.png"; // 0x43e MovS
	return 0; // 0x43f Return
}


func_830(var_61_bool, var_62_string, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x33e PushV
	FindActor(var_65_object, var_62_string); // 0x33f Func
	var_66_bool = var_65_object == 0; // 0x341 NullEq
	if(var_66_bool == 0) goto Label_837; // 0x342 JumpB
	var_61_bool = 0; // 0x343 MovB
	return 2; // 0x344 Return
	
Label_837:
	Trigger(var_65_object, var_63_string); // 0x345 Func
	var_61_bool = 1; // 0x347 MovB
	return 2; // 0x348 Return
}


func_1088(var_66_bool)
{
	var_66_bool = 0; // 0x440 MovB
	return 0; // 0x441 Return
}


func_961(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x3c1 PushV
	var_52_object = Obj(); // 0x3c2 PushV
	func_948(var_52_object); // 0x3c3 NEW_2
	var_49_object = var_52_object; // 0x3c4 Mov
	Find(var_45_int, var_50_object); // 0x3c6 ObjFunc
	var_57_bool = var_50_object == 0; // 0x3c8 Not
	if(var_57_bool == 0) goto Label_976; // 0x3c9 JumpB
	var_58_string = "Can't find diary parent with id: "; // 0x3ca PushS
	var_59_int = var_58_string + var_45_int; // 0x3cb Add
	Trace(var_59_int); // 0x3cc Func
	var_43_bool = 0; // 0x3ce MovB
	return 6; // 0x3cf Return
	
Label_976:
	AddChild(var_44_object); // 0x3d0 ObjFunc
	var_60_int = 7; // 0x3d2 PushI
	SendWorldWndMessage(var_60_int); // 0x3d3 Func
	GetCategory(var_51_int); // 0x3d5 ObjFunc
	SetDiarySection(var_51_int); // 0x3d7 Func
	var_43_bool = 0; // 0x3d9 MovB
	return 6; // 0x3da Return
}


func_451(var_18_bool)
{
	var_18_bool = 1; // 0x1c3 MovB
	return 0; // 0x1c4 Return
}


func_453(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1c6 PushV
	func_626(var_23_bool); // 0x1c7 NEW_2
	var_26_bool = var_23_bool == 0; // 0x1c9 Not
	if(var_26_bool == 0) goto Label_460; // 0x1ca JumpB
	return 0; // 0x1cb Return
	
Label_460:
	var_27_string = "player"; // 0x1cc PushS
	FindActor(var_17_bool, var_27_string); // 0x1cd Func
	var_2_object = 0; // 0x1cf TMovB
	var_3_string = 0; // 0x1d0 TMovB
	var_0_object = var_21_float; // 0x1d1 TMov
	var_1_object = var_22_float; // 0x1d2 TMov
	var_28_int = 10; // 0x1d3 PushI
	var_29_float = 1.0; // 0x1d4 PushF
	SetTimer(var_28_int, var_29_float); // 0x1d5 Func
	func_532(); // 0x1d8 NEW_2
	var_81_bool = var_3_string == 0; // 0x1da Not
	if(var_81_bool == 0) goto Label_479; // 0x1db JumpB
	var_82_int = 10; // 0x1dc PushI
	KillTimer(var_82_int); // 0x1dd Func
	
Label_479:
	return 0; // 0x1df Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_84_object, var_85_object)
{
	var_0_object = var_85_object; // 0x4b TMov
	var_1_object = var_84_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_90_int = 1; // 0x4e PushI
	if(var_90_int == 0) goto Label_112; // 0x4f JumpB
	var_91_string = ""; // 0x50 PushV
	var_91_string = "Neutral"; // 0x51 MovS
	func_142(var_85_object, var_91_string); // 0x52 NEW_2
	var_108_int = 533203; // 0x54 PushI
	SetMessage(var_108_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_109_bool = 0; var_110_object = Obj(); // 0x59 PushV
	var_110_object = var_1_object; // 0x5a MovT
	func_923(var_110_object); // 0x5b NEW_2
	if(var_109_bool == 0) goto Label_99; // 0x5d JumpB
	var_117_int = 533204; // 0x5e PushI
	var_118_int = 34725; // 0x5f PushI
	var_119_int = 34724; // 0x60 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x61 TObjFunc
	
Label_99:
	var_120_int = 533207; // 0x63 PushI
	var_121_int = -1; // 0x64 PushI
	var_122_int = 34727; // 0x65 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x66 TObjFunc
	var_123_int = 535821; // 0x68 PushI
	var_124_int = -1; // 0x69 PushI
	var_125_int = 37514; // 0x6a PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_126_bool = 0; // 0x70 PushV
	func_1088(var_126_bool); // 0x71 NEW_2
	if(var_126_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_127_string = var_3_string; // 0x76 PushT
	if(var_127_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_128_string = ""; // 0x79 PushV
	var_128_string = var_2_object; // 0x7a MovT
	func_716(var_128_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_139_string = "all"; // 0x7f PushS
	var_140_string = "idle"; // 0x80 PushS
	PlayAnimation(var_139_string, var_140_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_141_string = var_3_string; // 0x85 PushT
	if(var_141_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_142_string = "all"; // 0x88 PushS
	var_143_string = "idle"; // 0x89 PushS
	PlayAnimation(var_142_string, var_143_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
}


func_842(var_35_float)
{
	var_36_float = 0; var_37_float = 0; // 0x34a PushV
	GetGameTime(var_37_float); // 0x34b Func
	var_35_float = var_37_float; // 0x34d Mov
	return 2; // 0x34e Return
}


func_716(var_128_string)
{
	var_129_bool = 0; var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_float = 0; var_134_float = 0; // 0x2cc PushV
	lshHasAnimation(var_132_bool, var_128_string); // 0x2cd Func
	var_135_bool = var_132_bool; // 0x2cf Push
	if(var_135_bool == 0) goto Label_727; // 0x2d0 JumpB
	lshGetAnimTimes(var_128_string, var_133_float, var_134_float); // 0x2d1 Func
	var_136_bool = 0; // 0x2d3 PushB
	lshPlayAnimation(var_133_float, var_134_float, var_136_bool); // 0x2d4 Func
	goto Label_731; // 0x2d6 Jump
	
Label_731:
	return 6; // 0x2db Return
	
Label_727:
	var_137_string = "Can't find lsh animation : "; // 0x2d7 PushS
	var_138_int = var_137_string + var_128_string; // 0x2d8 Add
	Trace(var_138_int); // 0x2d9 Func
}


func_847()
{
	var_69_object = Obj(); var_70_string = ""; var_71_float = 0; // 0x350 PushV
	var_72_object = Obj(); // 0x351 PushV
	func_989(var_72_object); // 0x352 NEW_2
	var_69_object = var_72_object; // 0x353 Mov
	var_70_string = "pt_gatherer2"; // 0x355 MovS
	var_71_float = 2; // 0x356 MovI
	func_1006(var_69_object, var_70_string, var_71_float); // 0x357 NEW_2
	var_92_object = Obj(); // 0x359 PushV
	func_989(var_92_object); // 0x35a NEW_2
	ShowMap(var_92_object); // 0x35c ObjFunc
	return 0; // 0x35e Return
}


func_732(var_95_string, var_96_bool)
{
	var_99_bool = 0; var_100_float = 0; var_101_float = 0; var_102_bool = 0; var_103_float = 0; var_104_float = 0; // 0x2dc PushV
	lshHasAnimation(var_102_bool, var_95_string); // 0x2dd Func
	var_105_bool = var_102_bool; // 0x2df Push
	if(var_105_bool == 0) goto Label_742; // 0x2e0 JumpB
	lshGetAnimTimes(var_95_string, var_103_float, var_104_float); // 0x2e1 Func
	lshPlayAnimation(var_103_float, var_104_float, var_96_bool); // 0x2e3 Func
	goto Label_746; // 0x2e5 Jump
	
Label_746:
	return 6; // 0x2ea Return
	
Label_742:
	var_106_string = "Can't find lsh animation : "; // 0x2e6 PushS
	var_107_int = var_106_string + var_95_string; // 0x2e7 Add
	Trace(var_107_int); // 0x2e8 Func
}


func_989(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x3dd PushV
	GetMainOutdoorScene(var_27_object); // 0x3de Func
	var_29_bool = var_27_object == 0; // 0x3e0 NullEq
	if(var_29_bool == 0) goto Label_1000; // 0x3e1 JumpB
	var_30_string = "Can't find main outdoor scene"; // 0x3e2 PushS
	Trace(var_30_string); // 0x3e3 Func
	var_28_object = 0; // 0x3e5 SetNull
	var_24_object = var_28_object; // 0x3e6 Mov
	return 4; // 0x3e7 Return
	
Label_1000:
	GetMap(var_28_object); // 0x3e8 ObjFunc
	var_24_object = var_28_object; // 0x3ea Mov
	return 4; // 0x3eb Return
}


func_863()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x35f PushV
	var_22_string = "d7q04"; // 0x360 PushS
	var_23_int = 2; // 0x361 PushI
	SetVariable(var_22_string, var_23_int); // 0x362 Func
	var_24_object = Obj(); // 0x364 PushV
	func_989(var_24_object); // 0x365 NEW_2
	var_21_object = var_24_object; // 0x366 Mov
	var_31_string = "d7q04WastedGotoGatherer"; // 0x368 PushS
	var_32_string = "pt_gatherer2"; // 0x369 PushS
	var_33_int = 0; // 0x36a PushI
	var_34_int = 508638; // 0x36b PushI
	var_35_float = 0; // 0x36c PushV
	func_842(var_35_float); // 0x36d NEW_2
	AddMark(var_31_string, var_32_string, var_33_int, var_34_int, var_35_float); // 0x36f ObjFunc
	func_935(); // 0x372 NEW_2
	var_61_bool = 0; var_62_string = ""; var_63_string = ""; // 0x374 PushV
	var_62_string = "quest_d7_04"; // 0x375 MovS
	var_63_string = "init_andrei"; // 0x376 MovS
	func_830(var_61_bool, var_62_string, var_63_string); // 0x377 NEW_2
	return 2; // 0x379 Return
}


func_480(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1e0 PushV
	var_18_bool = var_4_bool == 0; // 0x1e1 NullEq
	if(var_18_bool == 0) goto Label_485; // 0x1e2 JumpB
	var_15_bool = 0; // 0x1e3 MovB
	return 2; // 0x1e4 Return
	
Label_485:
	var_19_float = 0; var_20_object = Obj(); // 0x1e5 PushV
	var_20_object = var_4_bool; // 0x1e6 MovT
	func_618(var_20_object); // 0x1e7 NEW_2
	var_17_float = sqrt(var_19_float); // 0x1e9 Sqrt2
	var_27_object = var_2_object; // 0x1ea PushT
	if(var_27_object == 0) goto Label_493; // 0x1eb JumpB
	var_17_float = var_17_float - var_1_object; // 0x1ec Sub2
	
Label_493:
	var_15_bool = var_17_float < var_0_object; // 0x1ed LT2
	return 2; // 0x1ee Return
}


func_611(var_71_bool)
{
	var_71_bool = 1; // 0x263 MovB
	return 0; // 0x264 Return
}


func_613()
{
	StopAnimation(); // 0x265 Func
	StopGroup0(); // 0x267 Func
	return 0; // 0x269 Return
}


func_618(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x26a PushV
	GetPosition(var_24_cvector); // 0x26b Func
	GetPosition(var_25_cvector); // 0x26d ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x26f Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x270 Or2
	return 6; // 0x271 Return
}


func_747(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2eb PushV
	GetEyesHeight(var_32_float); // 0x2ec ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2ee MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2ef PushE
	var_34_float = var_32_float; // 0x2f0 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x2f1 PopE
	var_35_string = "head"; // 0x2f2 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x2f3 Func
	return 4; // 0x2f5 Return
}


func_1006(var_69_object, var_70_string, var_71_float)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_object = Obj(); var_76_bool = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0; // 0x3ee PushV
	GetMainOutdoorScene(var_79_object); // 0x3ef Func
	var_81_bool = var_79_object == 0; // 0x3f1 NullEq
	if(var_81_bool == 0) goto Label_1015; // 0x3f2 JumpB
	var_82_string = "Can't find main outdoor scene"; // 0x3f3 PushS
	Trace(var_82_string); // 0x3f4 Func
	return 8; // 0x3f6 Return
	
Label_1015:
	GetLocator(var_70_string, var_80_bool, var_77_cvector, var_78_cvector); // 0x3f7 ObjFunc
	var_83_bool = var_80_bool == 0; // 0x3f9 Not
	if(var_83_bool == 0) goto Label_1025; // 0x3fa JumpB
	var_84_string = "Warning: outdoor scene locator "; // 0x3fb PushS
	var_85_int = var_84_string + var_70_string; // 0x3fc Add
	var_86_string = " doesnt exist"; // 0x3fd PushS
	var_87_int = var_85_int + var_86_string; // 0x3fe Add
	Trace(var_87_int); // 0x3ff Func
	
Label_1025:
	GetMap(var_69_object); // 0x401 ObjFunc
	var_88_bool = var_69_object == 0; // 0x403 NullEq
	if(var_88_bool == 0) goto Label_1033; // 0x404 JumpB
	var_89_string = "Can't find map"; // 0x405 PushS
	Trace(var_89_string); // 0x406 Func
	return 8; // 0x408 Return
	
Label_1033:
	var_90_float = GetByIndex(var_77_cvector, 0); // 0x409 PushE
	var_91_float = GetByIndex(var_77_cvector, 2); // 0x40a PushE
	SetMapParams(var_90_float, var_91_float, var_71_float); // 0x40b ObjFunc
	return 8; // 0x40d Return
}


func_626(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x272 PushV
	IsLoaded(var_25_bool); // 0x273 Func
	var_23_bool = var_25_bool; // 0x275 Mov
	return 2; // 0x276 Return
}


func_758()
{
	var_15_bool = 0; // 0x2f6 PushV
	func_1088(var_15_bool); // 0x2f7 NEW_2
	if(var_15_bool == 0) goto Label_764; // 0x2f9 JumpB
	lshStopSpeech(); // 0x2fa Func
	
Label_764:
	return 0; // 0x2fc Return
}


func_631(var_24_bool, var_26_float)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_bool = 0; // 0x277 PushV
	GetPosition(var_37_cvector); // 0x278 ObjFunc
	GetEyesHeight(var_36_float); // 0x27a ObjFunc
	var_45_float = GetByIndex(var_37_cvector, 1); // 0x27c PushE
	var_45_float = var_45_float + var_36_float; // 0x27d Add2
	SetByIndex(var_37_cvector, 1) = var_45_float; // 0x27e PopE
	GetPosition(var_38_cvector); // 0x27f Func
	GetEyesHeight(var_36_float); // 0x281 Func
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x283 PushE
	var_46_float = var_46_float + var_36_float; // 0x284 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x285 PopE
	var_39_cvector = var_37_cvector - var_38_cvector; // 0x286 Sub2
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x287 PushE
	var_47_float = 0; // 0x288 MovI
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x289 PopE
	var_48_int = var_39_cvector | var_39_cvector; // 0x28a Or
	var_49_float = sqrt(var_48_int); // 0x28b Sqrt
	var_39_cvector = var_39_cvector / var_39_cvector; // 0x28c Div2
	var_40_cvector = -var_39_cvector; // 0x28d Neg2
	var_50_float = var_39_cvector * var_26_float; // 0x28e Mult
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x28f PushV
	var_53_cvector = CVector(0.0, 1.0, 0.0); // 0x290 PushVec
	var_52_cvector = var_40_cvector ^ var_53_cvector; // 0x291 Xor2
	func_771(var_51_cvector, var_52_cvector); // 0x292 NEW_2
	var_59_int = 25; // 0x294 PushI
	var_60_float = var_51_cvector * var_59_int; // 0x295 Mult
	var_61_int = var_50_float + var_60_float; // 0x296 Add
	var_62_cvector = CVector(0.0, 10.0, 0.0); // 0x297 PushVec
	var_41_cvector = var_61_int - var_62_cvector; // 0x298 Sub2
	var_42_cvector = var_38_cvector + var_41_cvector; // 0x299 Add2
	IsOverrideActive(var_43_bool); // 0x29a Func
	var_63_bool = var_43_bool; // 0x29c Push
	if(var_63_bool == 0) goto Label_672; // 0x29d JumpB
	var_24_bool = 0; // 0x29e MovB
	return 18; // 0x29f Return
	
Label_672:
	StopWorld(); // 0x2a0 Func
	CameraTransit(var_42_cvector, var_40_cvector); // 0x2a2 Func
	var_64_float = GetByIndex(var_41_cvector, 0); // 0x2a4 PushE
	var_65_float = GetByIndex(var_41_cvector, 2); // 0x2a5 PushE
	Rotate(var_64_float, var_65_float); // 0x2a6 Func
	var_66_bool = 0; // 0x2a8 PushV
	func_1088(var_66_bool); // 0x2a9 NEW_2
	if(var_66_bool == 0) goto Label_685; // 0x2ab JumpB
	goto Label_693; // 0x2ac Jump
	
Label_693:
	CameraWaitForPlayFinish(); // 0x2b5 Func
	ResumeWorld(); // 0x2b7 Func
	var_24_bool = 1; // 0x2b9 MovB
	return 18; // 0x2ba Return
	
Label_685:
	var_67_string = "head"; // 0x2ad PushS
	HasAnimationTrack(var_44_bool, var_67_string); // 0x2ae Func
	var_68_bool = var_44_bool; // 0x2b0 Push
	if(var_68_bool == 0) goto Label_693; // 0x2b1 JumpB
	var_69_string = "head"; // 0x2b2 PushS
	LookAsyncCamera(var_69_string); // 0x2b3 Func
}


func_891(var_103_object)
{
	var_105_object = Obj(); var_106_object = Obj(); // 0x37b PushV
	var_107_string = "Rifle is given"; // 0x37c PushS
	Trace(var_107_string); // 0x37d Func
	CreateInvItem(var_106_object); // 0x37f Func
	var_108_string = "Rifle"; // 0x381 PushS
	SetItemName(var_108_string); // 0x382 ObjFunc
	var_109_string = "durability"; // 0x384 PushS
	var_110_int = 100; // 0x385 PushI
	SetProperty(var_109_string, var_110_int); // 0x386 ObjFunc
	var_111_object = Obj(); var_112_object = Obj(); var_113_int = 0; // 0x388 PushV
	var_111_object = var_103_object; // 0x389 Mov
	var_112_object = var_106_object; // 0x38a Mov
	var_113_int = 1; // 0x38b MovI
	func_798(var_112_object, var_113_int); // 0x38c NEW_2
	return 2; // 0x38e Return
}


func_765(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2fd PushV
	self(var_21_object); // 0x2fe Func
	var_19_object = var_21_object; // 0x300 Mov
	return 2; // 0x301 Return
}


