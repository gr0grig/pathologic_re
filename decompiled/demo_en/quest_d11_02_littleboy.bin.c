task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0xe7 PushI
	if(var_9_int == 0) goto Label_461; // 0xe8 JumpB
	func_647(); // 0xea NEW_2
	var_11_int = 15360; // 0xec PushI
	var_12_bool = var_8_bool == var_11_int; // 0xed Eq
	if(var_12_bool == 0) goto Label_244; // 0xee JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xef PushV
	var_13_object = var_1_object; // 0xf0 MovT
	var_14_object = var_0_object; // 0xf1 MovT
	func_748(); // 0xf2 NEW_2
	
Label_244:
	var_54_int = 15363; // 0xf4 PushI
	var_55_bool = var_8_bool == var_54_int; // 0xf5 Eq
	if(var_55_bool == 0) goto Label_252; // 0xf6 JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0xf7 PushV
	var_56_object = var_1_object; // 0xf8 MovT
	var_57_object = var_0_object; // 0xf9 MovT
	func_782(); // 0xfa NEW_2
	
Label_252:
	var_60_int = 15365; // 0xfc PushI
	var_61_bool = var_8_bool == var_60_int; // 0xfd Eq
	if(var_61_bool == 0) goto Label_275; // 0xfe JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xff PushV
	var_62_object = var_1_object; // 0x100 MovT
	var_63_object = var_0_object; // 0x101 MovT
	func_765(); // 0x102 NEW_2
	var_81_object = Obj(); var_82_object = Obj(); // 0x104 PushV
	var_81_object = var_1_object; // 0x105 MovT
	var_82_object = var_0_object; // 0x106 MovT
	func_737(var_82_object); // 0x107 NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0x109 PushV
	var_105_object = var_1_object; // 0x10a MovT
	var_106_object = var_0_object; // 0x10b MovT
	func_731(); // 0x10c NEW_2
	var_109_object = Obj(); var_110_object = Obj(); // 0x10e PushV
	var_109_object = var_1_object; // 0x10f MovT
	var_110_object = var_0_object; // 0x110 MovT
	func_794(); // 0x111 NEW_2
	
Label_275:
	var_112_int = 15366; // 0x113 PushI
	var_113_bool = var_8_bool == var_112_int; // 0x114 Eq
	if(var_113_bool == 0) goto Label_283; // 0x115 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x116 PushV
	var_114_object = var_1_object; // 0x117 MovT
	var_115_object = var_0_object; // 0x118 MovT
	func_788(); // 0x119 NEW_2
	
Label_283:
	var_118_int = 15368; // 0x11b PushI
	var_119_bool = var_8_bool == var_118_int; // 0x11c Eq
	if(var_119_bool == 0) goto Label_291; // 0x11d JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x11e PushV
	var_120_object = var_1_object; // 0x11f MovT
	var_121_object = var_0_object; // 0x120 MovT
	func_794(); // 0x121 NEW_2
	
Label_291:
	var_122_int = 15356; // 0x123 PushI
	var_123_bool = var_7_bool == var_122_int; // 0x124 Eq
	if(var_123_bool == 0) goto Label_390; // 0x125 JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x126 PushV
	var_125_object = var_1_object; // 0x127 MovT
	func_799(var_125_object); // 0x128 NEW_2
	if(var_124_bool == 0) goto Label_319; // 0x12a JumpB
	var_130_string = ""; // 0x12b PushV
	var_130_string = "Neutral"; // 0x12c MovS
	func_208(var_8_bool, var_130_string); // 0x12d NEW_2
	var_147_int = 514142; // 0x12f PushI
	SetMessage(var_147_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_148_int = 514143; // 0x134 PushI
	var_149_int = 41559; // 0x135 PushI
	var_150_int = 15357; // 0x136 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x137 TObjFunc
	var_151_int = 539612; // 0x139 PushI
	var_152_int = 41559; // 0x13a PushI
	var_153_int = 41558; // 0x13b PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x13c TObjFunc
	return 0; // 0x13e Return
	
Label_319:
	var_154_string = ""; // 0x13f PushV
	var_154_string = "Neutral"; // 0x140 MovS
	func_208(var_8_bool, var_154_string); // 0x141 NEW_2
	var_155_int = 514147; // 0x143 PushI
	SetMessage(var_155_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_156_bool = 0; // 0x148 PushV
	var_156_bool = 1; // 0x149 MovB
	var_157_bool = 0; // 0x14a PushV
	var_157_bool = 0; // 0x14b MovB
	var_158_bool = 0; var_159_object = Obj(); // 0x14c PushV
	var_159_object = var_1_object; // 0x14d MovT
	func_811(var_159_object); // 0x14e NEW_2
	if(var_158_bool == 0) goto Label_343; // 0x150 JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x151 PushV
	var_165_object = var_1_object; // 0x152 MovT
	func_847(var_165_object); // 0x153 NEW_2
	if(var_164_bool == 0) goto Label_343; // 0x155 JumpB
	var_157_bool = 1; // 0x156 MovB
	
Label_343:
	if(var_157_bool == 0) goto Label_359; // 0x157 JumpB
	var_170_bool = 0; // 0x158 PushV
	var_170_bool = 0; // 0x159 MovB
	var_171_bool = 0; var_172_object = Obj(); // 0x15a PushV
	var_172_object = var_1_object; // 0x15b MovT
	func_835(var_172_object); // 0x15c NEW_2
	if(var_171_bool == 0) goto Label_357; // 0x15e JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x15f PushV
	var_178_object = var_1_object; // 0x160 MovT
	func_847(var_178_object); // 0x161 NEW_2
	if(var_177_bool == 0) goto Label_357; // 0x163 JumpB
	var_170_bool = 1; // 0x164 MovB
	
Label_357:
	if(var_170_bool == 0) goto Label_359; // 0x165 JumpB
	var_156_bool = 0; // 0x166 MovB
	
Label_359:
	if(var_156_bool == 0) goto Label_365; // 0x167 JumpB
	var_179_int = 514149; // 0x168 PushI
	var_180_int = 15364; // 0x169 PushI
	var_181_int = 15363; // 0x16a PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x16b TObjFunc
	
Label_365:
	var_182_bool = 0; // 0x16d PushV
	var_182_bool = 0; // 0x16e MovB
	var_183_bool = 0; var_184_object = Obj(); // 0x16f PushV
	var_184_object = var_1_object; // 0x170 MovT
	func_823(var_184_object); // 0x171 NEW_2
	if(var_183_bool == 0) goto Label_378; // 0x173 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x174 PushV
	var_190_object = var_1_object; // 0x175 MovT
	func_859(var_190_object); // 0x176 NEW_2
	if(var_189_bool == 0) goto Label_378; // 0x178 JumpB
	var_182_bool = 1; // 0x179 MovB
	
Label_378:
	if(var_182_bool == 0) goto Label_384; // 0x17a JumpB
	var_195_int = 514152; // 0x17b PushI
	var_196_int = 15367; // 0x17c PushI
	var_197_int = 15366; // 0x17d PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x17e TObjFunc
	
Label_384:
	var_198_int = 514148; // 0x180 PushI
	var_199_int = -1; // 0x181 PushI
	var_200_int = 15362; // 0x182 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x183 TObjFunc
	return 0; // 0x185 Return
	
Label_390:
	var_201_int = 15367; // 0x186 PushI
	var_202_bool = var_7_bool == var_201_int; // 0x187 Eq
	if(var_202_bool == 0) goto Label_408; // 0x188 JumpB
	var_203_string = ""; // 0x189 PushV
	var_203_string = "Neutral"; // 0x18a MovS
	func_208(var_8_bool, var_203_string); // 0x18b NEW_2
	var_204_int = 514153; // 0x18d PushI
	SetMessage(var_204_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_205_int = 514154; // 0x192 PushI
	var_206_int = -1; // 0x193 PushI
	var_207_int = 15368; // 0x194 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x195 TObjFunc
	return 0; // 0x197 Return
	
Label_408:
	var_208_int = 15364; // 0x198 PushI
	var_209_bool = var_7_bool == var_208_int; // 0x199 Eq
	if(var_209_bool == 0) goto Label_426; // 0x19a JumpB
	var_210_string = ""; // 0x19b PushV
	var_210_string = "Neutral"; // 0x19c MovS
	func_208(var_8_bool, var_210_string); // 0x19d NEW_2
	var_211_int = 514150; // 0x19f PushI
	SetMessage(var_211_int); // 0x1a0 TObjFunc
	ClearReplies(); // 0x1a2 TObjFunc
	var_212_int = 514151; // 0x1a4 PushI
	var_213_int = -1; // 0x1a5 PushI
	var_214_int = 15365; // 0x1a6 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1a7 TObjFunc
	return 0; // 0x1a9 Return
	
Label_426:
	var_215_int = 41559; // 0x1aa PushI
	var_216_bool = var_7_bool == var_215_int; // 0x1ab Eq
	if(var_216_bool == 0) goto Label_449; // 0x1ac JumpB
	var_217_string = ""; // 0x1ad PushV
	var_217_string = "Neutral"; // 0x1ae MovS
	func_208(var_8_bool, var_217_string); // 0x1af NEW_2
	var_218_int = 539613; // 0x1b1 PushI
	SetMessage(var_218_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_219_int = 514146; // 0x1b6 PushI
	var_220_int = -1; // 0x1b7 PushI
	var_221_int = 15360; // 0x1b8 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1b9 TObjFunc
	var_222_int = 514144; // 0x1bb PushI
	var_223_int = -1; // 0x1bc PushI
	var_224_int = 15358; // 0x1bd PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1be TObjFunc
	return 0; // 0x1c0 Return
	
Label_449:
	var_3_string = 1; // 0x1c1 TMovB
	var_225_bool = 0; // 0x1c2 PushV
	func_976(var_225_bool); // 0x1c3 NEW_2
	if(var_225_bool == 0) goto Label_457; // 0x1c5 JumpB
	lshStopAnimation(); // 0x1c6 Func
	goto Label_459; // 0x1c8 Jump
	
Label_459:
	return 0; // 0x1cb Return
	
Label_457:
	StopAnimation(); // 0x1c9 Func
	
Label_461:
	return 0; // 0x1cd Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_object = var_1_object; // 0x1d4 PushT
	if(var_8_object == 0) goto Label_480; // 0x1d5 JumpB
	var_9_int = 0; var_10_object = Obj(); // 0x1d6 PushV
	var_10_object = var_7_object; // 0x1d7 Mov
	TaskCall(0); // 0x1d8 TaskCall
	func_0(var_11_object, var_9_int, var_10_object); // 0x1d9 NEW_2
	TaskReturn(); // 0x1da TaskReturn
	var_192_int = 1000; // 0x1dc PushI
	var_193_bool = var_11_object == var_192_int; // 0x1dd Eq
	if(var_193_bool == 0) goto Label_480; // 0x1de JumpB
	var_1_object = 0; // 0x1df TMovB
	
Label_480:
	return 0; // 0x1e0 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1e5 PushV
	var_10_string = "cleanup"; // 0x1e6 PushS
	var_11_bool = var_7_string == var_10_string; // 0x1e7 Eq
	if(var_11_bool == 0) goto Label_508; // 0x1e8 JumpB
	var_0_object = 1; // 0x1e9 TMovB
	IsLoaded(var_9_bool); // 0x1ea Func
	var_12_bool = 0; // 0x1ec PushV
	var_12_bool = 0; // 0x1ed MovB
	var_13_bool = var_9_bool == 0; // 0x1ee Not
	if(var_13_bool == 0) goto Label_501; // 0x1ef JumpB
	var_14_bool = 0; // 0x1f0 PushV
	func_529(var_14_bool); // 0x1f1 NEW_2
	if(var_14_bool == 0) goto Label_501; // 0x1f3 JumpB
	var_12_bool = 1; // 0x1f4 MovB
	
Label_501:
	if(var_12_bool == 0) goto Label_507; // 0x1f5 JumpB
	var_15_object = Obj(); // 0x1f6 PushV
	func_654(var_15_object); // 0x1f7 NEW_2
	RemoveActor(var_15_object); // 0x1f9 Func
	
Label_507:
	goto Label_512; // 0x1fb Jump
	
Label_512:
	return 2; // 0x200 Return
	
Label_508:
	var_18_string = "restore"; // 0x1fc PushS
	var_19_bool = var_7_string == var_18_string; // 0x1fd Eq
	if(var_19_bool == 0) goto Label_512; // 0x1fe JumpB
	var_0_object = 0; // 0x1ff TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; // 0x201 PushV
	var_7_bool = 0; // 0x202 MovB
	var_8_object = var_0_object; // 0x203 PushT
	if(var_8_object == 0) goto Label_522; // 0x204 JumpB
	var_9_bool = 0; // 0x205 PushV
	func_529(var_9_bool); // 0x206 NEW_2
	if(var_9_bool == 0) goto Label_522; // 0x208 JumpB
	var_7_bool = 1; // 0x209 MovB
	
Label_522:
	if(var_7_bool == 0) goto Label_528; // 0x20a JumpB
	var_10_object = Obj(); // 0x20b PushV
	func_654(var_10_object); // 0x20c NEW_2
	RemoveActor(var_10_object); // 0x20e Func
	
Label_528:
	return 0; // 0x210 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = 1; // 0x1ce TMovB
	func_481(); // 0x1d0 NEW_2
	return 0; // 0x1d2 Return
}


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; // 0x0 PushV
	var_0_object = var_10_object; // 0x1 TMov
	var_20_bool = 0; var_21_object = Obj(); var_22_float = 0; // 0x2 PushV
	var_21_object = var_10_object; // 0x3 Mov
	var_22_float = 70.0; // 0x4 MovF
	func_531(var_21_object, var_22_float); // 0x5 NEW_2
	var_66_bool = var_20_bool == 0; // 0x7 Not
	if(var_66_bool == 0) goto Label_11; // 0x8 JumpB
	var_9_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_16_object); // 0xb Func
	var_67_int = 0; // 0xd PushV
	func_970(var_67_int); // 0xe NEW_2
	SetNPCName(var_67_int); // 0x10 ObjFunc
	var_68_int = 0; // 0x12 PushV
	func_968(var_68_int); // 0x13 NEW_2
	SetNPCDescription(var_68_int); // 0x15 ObjFunc
	var_69_string = ""; // 0x17 PushV
	func_972(var_69_string); // 0x18 NEW_2
	SetPhoto(var_69_string); // 0x1a ObjFunc
	var_70_string = ""; // 0x1c PushV
	func_974(var_70_string); // 0x1d NEW_2
	SetPhoto2(var_70_string); // 0x1f ObjFunc
	var_71_int = 0; // 0x21 PushV
	func_951(var_71_int); // 0x22 NEW_2
	SetPlayerName(var_71_int); // 0x24 ObjFunc
	var_18_int = -1; // 0x26 MovI
	IsOverrideActive(var_17_bool); // 0x27 Func
	var_79_bool = var_17_bool; // 0x29 Push
	if(var_79_bool == 0) goto Label_45; // 0x2a JumpB
	var_9_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_16_object); // 0x2d Func
	var_80_object = Obj(); var_81_object = Obj(); // 0x2f PushV
	var_80_object = var_10_object; // 0x30 Mov
	var_81_object = var_16_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_19_bool); // 0x36 ObjFunc
	
Label_56:
	var_184_bool = var_19_bool == 0; // 0x38 Not
	if(var_184_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_19_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_185_object = Obj(); // 0x3f PushV
	var_185_object = var_10_object; // 0x40 Mov
	func_599(); // 0x41 NEW_2
	StopDialog(var_16_object); // 0x43 Func
	GetReturnValue(var_18_int); // 0x45 ObjFunc
	var_9_int = var_18_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_897()
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x381 PushV
	var_42_int = 199; // 0x382 PushI
	var_43_int = 2; // 0x383 PushI
	var_44_int = 515487; // 0x384 PushI
	CreateDiaryEntry(var_41_object, var_42_int, var_43_int, var_44_int); // 0x385 Func
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0; // 0x387 PushV
	var_46_object = var_41_object; // 0x388 Mov
	var_47_int = 197; // 0x389 MovI
	func_923(var_45_bool, var_46_object, var_47_int); // 0x38a NEW_2
	return 2; // 0x38c Return
}


func_647()
{
	var_10_bool = 0; // 0x287 PushV
	func_976(var_10_bool); // 0x288 NEW_2
	if(var_10_bool == 0) goto Label_653; // 0x28a JumpB
	lshStopSpeech(); // 0x28b Func
	
Label_653:
	return 0; // 0x28d Return
}


func_654(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x28e PushV
	self(var_12_object); // 0x28f Func
	var_10_object = var_12_object; // 0x291 Mov
	return 2; // 0x292 Return
}


func_782()
{
	var_58_string = "ood11ULittleBoy1"; // 0x30f PushS
	var_59_int = 1; // 0x310 PushI
	SetVariable(var_58_string, var_59_int); // 0x311 Func
	return 0; // 0x313 Return
}


func_910(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x38e PushV
	GetDiaryRoot(var_33_object); // 0x38f Func
	var_34_bool = var_33_object == 0; // 0x391 Not
	if(var_34_bool == 0) goto Label_920; // 0x392 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x393 PushS
	Trace(var_35_string); // 0x394 Func
	var_31_object = 0; // 0x396 MovB
	return 2; // 0x397 Return
	
Label_920:
	var_31_object = var_33_object; // 0x398 Mov
	return 2; // 0x399 Return
}


func_529(var_9_bool)
{
	var_9_bool = 1; // 0x211 MovB
	return 0; // 0x212 Return
}


func_531(var_20_bool, var_22_float)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; // 0x213 PushV
	GetPosition(var_33_cvector); // 0x214 ObjFunc
	GetEyesHeight(var_32_float); // 0x216 ObjFunc
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x218 PushE
	var_41_float = var_41_float + var_32_float; // 0x219 Add2
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x21a PopE
	GetPosition(var_34_cvector); // 0x21b Func
	GetEyesHeight(var_32_float); // 0x21d Func
	var_42_float = GetByIndex(var_34_cvector, 1); // 0x21f PushE
	var_42_float = var_42_float + var_32_float; // 0x220 Add2
	SetByIndex(var_34_cvector, 1) = var_42_float; // 0x221 PopE
	var_35_cvector = var_33_cvector - var_34_cvector; // 0x222 Sub2
	var_43_float = GetByIndex(var_35_cvector, 1); // 0x223 PushE
	var_43_float = 0; // 0x224 MovI
	SetByIndex(var_35_cvector, 1) = var_43_float; // 0x225 PopE
	var_44_int = var_35_cvector | var_35_cvector; // 0x226 Or
	var_45_float = sqrt(var_44_int); // 0x227 Sqrt
	var_35_cvector = var_35_cvector / var_35_cvector; // 0x228 Div2
	var_36_cvector = -var_35_cvector; // 0x229 Neg2
	var_46_float = var_35_cvector * var_22_float; // 0x22a Mult
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x22b PushV
	var_49_cvector = CVector(0.0, 1.0, 0.0); // 0x22c PushVec
	var_48_cvector = var_36_cvector ^ var_49_cvector; // 0x22d Xor2
	func_660(var_47_cvector, var_48_cvector); // 0x22e NEW_2
	var_55_int = 25; // 0x230 PushI
	var_56_float = var_47_cvector * var_55_int; // 0x231 Mult
	var_57_int = var_46_float + var_56_float; // 0x232 Add
	var_58_cvector = CVector(0.0, 10.0, 0.0); // 0x233 PushVec
	var_37_cvector = var_57_int - var_58_cvector; // 0x234 Sub2
	var_38_cvector = var_34_cvector + var_37_cvector; // 0x235 Add2
	IsOverrideActive(var_39_bool); // 0x236 Func
	var_59_bool = var_39_bool; // 0x238 Push
	if(var_59_bool == 0) goto Label_572; // 0x239 JumpB
	var_20_bool = 0; // 0x23a MovB
	return 18; // 0x23b Return
	
Label_572:
	StopWorld(); // 0x23c Func
	CameraTransit(var_38_cvector, var_36_cvector); // 0x23e Func
	var_60_float = GetByIndex(var_37_cvector, 0); // 0x240 PushE
	var_61_float = GetByIndex(var_37_cvector, 2); // 0x241 PushE
	Rotate(var_60_float, var_61_float); // 0x242 Func
	var_62_bool = 0; // 0x244 PushV
	func_976(var_62_bool); // 0x245 NEW_2
	if(var_62_bool == 0) goto Label_585; // 0x247 JumpB
	goto Label_593; // 0x248 Jump
	
Label_593:
	CameraWaitForPlayFinish(); // 0x251 Func
	ResumeWorld(); // 0x253 Func
	var_20_bool = 1; // 0x255 MovB
	return 18; // 0x256 Return
	
Label_585:
	var_63_string = "head"; // 0x249 PushS
	HasAnimationTrack(var_40_bool, var_63_string); // 0x24a Func
	var_64_bool = var_40_bool; // 0x24c Push
	if(var_64_bool == 0) goto Label_593; // 0x24d JumpB
	var_65_string = "head"; // 0x24e PushS
	LookAsyncCamera(var_65_string); // 0x24f Func
}


func_788()
{
	var_116_string = "ood11ULittleBoy2"; // 0x315 PushS
	var_117_int = 1; // 0x316 PushI
	SetVariable(var_116_string, var_117_int); // 0x317 Func
	return 0; // 0x319 Return
}


func_660(var_47_cvector, var_48_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x294 PushV
	var_52_int = var_48_cvector | var_48_cvector; // 0x295 Or
	var_51_float = sqrt(var_52_int); // 0x296 Sqrt2
	var_53_float = 0.0; // 0x297 PushF
	var_54_bool = var_51_float < var_53_float; // 0x298 LT
	if(var_54_bool == 0) goto Label_668; // 0x299 JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x29a MovV
	return 2; // 0x29b Return
	
Label_668:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x29c Div2
	return 2; // 0x29d Return
}


func_794()
{
	var_111_int = 1000; // 0x31b PushI
	SetReturnValue(var_111_int); // 0x31c ObjFunc
	return 0; // 0x31e Return
}


func_923(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x39b PushV
	var_31_object = Obj(); // 0x39c PushV
	func_910(var_31_object); // 0x39d NEW_2
	var_28_object = var_31_object; // 0x39e Mov
	Find(var_24_int, var_29_object); // 0x3a0 ObjFunc
	var_36_bool = var_29_object == 0; // 0x3a2 Not
	if(var_36_bool == 0) goto Label_938; // 0x3a3 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x3a4 PushS
	var_38_int = var_37_string + var_24_int; // 0x3a5 Add
	Trace(var_38_int); // 0x3a6 Func
	var_22_bool = 0; // 0x3a8 MovB
	return 6; // 0x3a9 Return
	
Label_938:
	AddChild(var_23_object); // 0x3aa ObjFunc
	var_39_int = 7; // 0x3ac PushI
	SendWorldWndMessage(var_39_int); // 0x3ad Func
	GetCategory(var_30_int); // 0x3af ObjFunc
	SetDiarySection(var_30_int); // 0x3b1 Func
	var_22_bool = 0; // 0x3b3 MovB
	return 6; // 0x3b4 Return
}


func_670(var_89_int, var_90_string)
{
	var_91_int = 0; var_92_int = 0; // 0x29e PushV
	GetVariable(var_90_string, var_92_int); // 0x29f Func
	var_89_int = var_92_int; // 0x2a1 Mov
	return 2; // 0x2a2 Return
}


func_799(var_87_bool)
{
	var_89_int = 0; var_90_string = ""; // 0x320 PushV
	var_90_string = "d11q02"; // 0x321 MovS
	func_670(var_89_int, var_90_string); // 0x322 NEW_2
	var_93_int = 0; // 0x324 PushI
	var_94_bool = var_89_int == var_93_int; // 0x325 Eq
	if(var_94_bool == 0) goto Label_809; // 0x326 JumpB
	var_87_bool = 1; // 0x327 MovB
	return 0; // 0x328 Return
	
Label_809:
	var_87_bool = 0; // 0x329 MovB
	return 0; // 0x32a Return
}


func_675(var_100_int, var_101_int)
{
	var_102_object = Obj(); var_103_object = Obj(); // 0x2a3 PushV
	CreateIntVector(var_103_object); // 0x2a4 Func
	add(var_100_int); // 0x2a6 ObjFunc
	add(var_101_int); // 0x2a8 ObjFunc
	var_104_int = 3; // 0x2aa PushI
	SendWorldWndMessage(var_104_int, var_103_object); // 0x2ab Func
	return 2; // 0x2ad Return
}


func_811(var_141_bool)
{
	var_143_int = 0; var_144_string = ""; // 0x32c PushV
	var_144_string = "d11q02"; // 0x32d MovS
	func_670(var_143_int, var_144_string); // 0x32e NEW_2
	var_145_int = 2; // 0x330 PushI
	var_146_bool = var_143_int == var_145_int; // 0x331 Eq
	if(var_146_bool == 0) goto Label_821; // 0x332 JumpB
	var_141_bool = 1; // 0x333 MovB
	return 0; // 0x334 Return
	
Label_821:
	var_141_bool = 0; // 0x335 MovB
	return 0; // 0x336 Return
}


func_687(var_90_object, var_91_int)
{
	var_92_int = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_bool = 0; // 0x2af PushV
	GetItemID(var_95_int); // 0x2b0 ObjFunc
	var_98_string = "Category"; // 0x2b2 PushS
	GetInvItemProperty(var_96_int, var_95_int, var_98_string); // 0x2b3 Func
	AddItem(var_97_bool, var_90_object, var_96_int, var_91_int); // 0x2b5 ObjFunc
	var_99_bool = var_97_bool == 0; // 0x2b7 Not
	if(var_99_bool == 0) goto Label_700; // 0x2b8 JumpB
	DropItems(var_90_object, var_91_int); // 0x2b9 ObjFunc
	goto Label_705; // 0x2bb Jump
	
Label_705:
	return 6; // 0x2c1 Return
	
Label_700:
	var_100_int = 0; var_101_int = 0; // 0x2bc PushV
	var_100_int = var_95_int; // 0x2bd Mov
	var_101_int = var_91_int; // 0x2be Mov
	func_675(var_100_int, var_101_int); // 0x2bf NEW_2
}


func_951(var_71_int)
{
	var_72_int = 0; var_73_int = 0; // 0x3b7 PushV
	var_74_string = "branch"; // 0x3b8 PushS
	GetVariable(var_74_string, var_73_int); // 0x3b9 Func
	var_75_int = 0; // 0x3bb PushI
	var_76_bool = var_73_int == var_75_int; // 0x3bc Eq
	if(var_76_bool == 0) goto Label_961; // 0x3bd JumpB
	var_71_int = 1; // 0x3be MovI
	return 2; // 0x3bf Return
	
Label_961:
	var_77_int = 1; // 0x3c1 PushI
	var_78_bool = var_73_int == var_77_int; // 0x3c2 Eq
	if(var_78_bool == 0) goto Label_966; // 0x3c3 JumpB
	var_71_int = 2; // 0x3c4 MovI
	return 2; // 0x3c5 Return
	
Label_966:
	var_71_int = 3; // 0x3c6 MovI
	return 2; // 0x3c7 Return
}


func_823(var_166_bool)
{
	var_168_int = 0; var_169_string = ""; // 0x338 PushV
	var_169_string = "d11q02"; // 0x339 MovS
	func_670(var_168_int, var_169_string); // 0x33a NEW_2
	var_170_int = -1; // 0x33c PushI
	var_171_bool = var_168_int == var_170_int; // 0x33d Eq
	if(var_171_bool == 0) goto Label_833; // 0x33e JumpB
	var_166_bool = 1; // 0x33f MovB
	return 0; // 0x340 Return
	
Label_833:
	var_166_bool = 0; // 0x341 MovB
	return 0; // 0x342 Return
}


func_706(var_84_object, var_85_string, var_86_int)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x2c2 PushV
	CreateInvItem(var_88_object); // 0x2c3 Func
	SetItemName(var_85_string); // 0x2c5 ObjFunc
	var_89_object = Obj(); var_90_object = Obj(); var_91_int = 0; // 0x2c7 PushV
	var_89_object = var_84_object; // 0x2c8 Mov
	var_90_object = var_88_object; // 0x2c9 Mov
	var_91_int = var_86_int; // 0x2ca Mov
	func_687(var_90_object, var_91_int); // 0x2cb NEW_2
	return 2; // 0x2cd Return
}


func_835(var_154_bool)
{
	var_156_int = 0; var_157_string = ""; // 0x344 PushV
	var_157_string = "d11q02"; // 0x345 MovS
	func_670(var_156_int, var_157_string); // 0x346 NEW_2
	var_158_int = 1000; // 0x348 PushI
	var_159_bool = var_156_int == var_158_int; // 0x349 Eq
	if(var_159_bool == 0) goto Label_845; // 0x34a JumpB
	var_154_bool = 1; // 0x34b MovB
	return 0; // 0x34c Return
	
Label_845:
	var_154_bool = 0; // 0x34d MovB
	return 0; // 0x34e Return
}


func_968(var_68_int)
{
	var_68_int = 515560; // 0x3c8 MovI
	return 0; // 0x3c9 Return
}


func_970(var_67_int)
{
	var_67_int = 503345; // 0x3ca MovI
	return 0; // 0x3cb Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_80_object, var_81_object)
{
	var_0_object = var_81_object; // 0x4b TMov
	var_1_object = var_80_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_86_int = 1; // 0x4e PushI
	if(var_86_int == 0) goto Label_178; // 0x4f JumpB
	var_87_bool = 0; var_88_object = Obj(); // 0x50 PushV
	var_88_object = var_1_object; // 0x51 MovT
	func_799(var_88_object); // 0x52 NEW_2
	if(var_87_bool == 0) goto Label_105; // 0x54 JumpB
	var_95_string = ""; // 0x55 PushV
	var_95_string = "Neutral"; // 0x56 MovS
	func_208(var_81_object, var_95_string); // 0x57 NEW_2
	var_112_int = 514142; // 0x59 PushI
	SetMessage(var_112_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_113_int = 514143; // 0x5e PushI
	var_114_int = 41559; // 0x5f PushI
	var_115_int = 15357; // 0x60 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x61 TObjFunc
	var_116_int = 539612; // 0x63 PushI
	var_117_int = 41559; // 0x64 PushI
	var_118_int = 41558; // 0x65 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x66 TObjFunc
	goto Label_178; // 0x68 Jump
	
Label_178:
	var_119_bool = 0; // 0xb2 PushV
	func_976(var_119_bool); // 0xb3 NEW_2
	if(var_119_bool == 0) goto Label_193; // 0xb5 JumpB
	
Label_182:
	lshWaitForAnimEnd(); // 0xb6 Func
	var_120_string = var_3_string; // 0xb8 PushT
	if(var_120_string == 0) goto Label_187; // 0xb9 JumpB
	goto Label_192; // 0xba Jump
	
Label_192:
	goto Label_207; // 0xc0 Jump
	
Label_207:
	return 0; // 0xcf Return
	
Label_187:
	var_121_string = ""; // 0xbb PushV
	var_121_string = var_2_object; // 0xbc MovT
	func_616(var_121_string); // 0xbd NEW_2
	goto Label_182; // 0xbf Jump
	
Label_193:
	var_132_string = "all"; // 0xc1 PushS
	var_133_string = "idle"; // 0xc2 PushS
	PlayAnimation(var_132_string, var_133_string); // 0xc3 Func
	
Label_197:
	WaitForAnimEnd(); // 0xc5 Func
	var_134_string = var_3_string; // 0xc7 PushT
	if(var_134_string == 0) goto Label_202; // 0xc8 JumpB
	goto Label_207; // 0xc9 Jump
	
Label_202:
	var_135_string = "all"; // 0xca PushS
	var_136_string = "idle"; // 0xcb PushS
	PlayAnimation(var_135_string, var_136_string); // 0xcc Func
	goto Label_197; // 0xce Jump
	
Label_105:
	var_137_string = ""; // 0x69 PushV
	var_137_string = "Neutral"; // 0x6a MovS
	func_208(var_81_object, var_137_string); // 0x6b NEW_2
	var_138_int = 514147; // 0x6d PushI
	SetMessage(var_138_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_139_bool = 0; // 0x72 PushV
	var_139_bool = 1; // 0x73 MovB
	var_140_bool = 0; // 0x74 PushV
	var_140_bool = 0; // 0x75 MovB
	var_141_bool = 0; var_142_object = Obj(); // 0x76 PushV
	var_142_object = var_1_object; // 0x77 MovT
	func_811(var_142_object); // 0x78 NEW_2
	if(var_141_bool == 0) goto Label_129; // 0x7a JumpB
	var_147_bool = 0; var_148_object = Obj(); // 0x7b PushV
	var_148_object = var_1_object; // 0x7c MovT
	func_847(var_148_object); // 0x7d NEW_2
	if(var_147_bool == 0) goto Label_129; // 0x7f JumpB
	var_140_bool = 1; // 0x80 MovB
	
Label_129:
	if(var_140_bool == 0) goto Label_145; // 0x81 JumpB
	var_153_bool = 0; // 0x82 PushV
	var_153_bool = 0; // 0x83 MovB
	var_154_bool = 0; var_155_object = Obj(); // 0x84 PushV
	var_155_object = var_1_object; // 0x85 MovT
	func_835(var_155_object); // 0x86 NEW_2
	if(var_154_bool == 0) goto Label_143; // 0x88 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x89 PushV
	var_161_object = var_1_object; // 0x8a MovT
	func_847(var_161_object); // 0x8b NEW_2
	if(var_160_bool == 0) goto Label_143; // 0x8d JumpB
	var_153_bool = 1; // 0x8e MovB
	
Label_143:
	if(var_153_bool == 0) goto Label_145; // 0x8f JumpB
	var_139_bool = 0; // 0x90 MovB
	
Label_145:
	if(var_139_bool == 0) goto Label_151; // 0x91 JumpB
	var_162_int = 514149; // 0x92 PushI
	var_163_int = 15364; // 0x93 PushI
	var_164_int = 15363; // 0x94 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x95 TObjFunc
	
Label_151:
	var_165_bool = 0; // 0x97 PushV
	var_165_bool = 0; // 0x98 MovB
	var_166_bool = 0; var_167_object = Obj(); // 0x99 PushV
	var_167_object = var_1_object; // 0x9a MovT
	func_823(var_167_object); // 0x9b NEW_2
	if(var_166_bool == 0) goto Label_164; // 0x9d JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0x9e PushV
	var_173_object = var_1_object; // 0x9f MovT
	func_859(var_173_object); // 0xa0 NEW_2
	if(var_172_bool == 0) goto Label_164; // 0xa2 JumpB
	var_165_bool = 1; // 0xa3 MovB
	
Label_164:
	if(var_165_bool == 0) goto Label_170; // 0xa4 JumpB
	var_178_int = 514152; // 0xa5 PushI
	var_179_int = 15367; // 0xa6 PushI
	var_180_int = 15366; // 0xa7 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0xa8 TObjFunc
	
Label_170:
	var_181_int = 514148; // 0xaa PushI
	var_182_int = -1; // 0xab PushI
	var_183_int = 15362; // 0xac PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0xad TObjFunc
	goto Label_178; // 0xaf Jump
}


func_972(var_69_string)
{
	var_69_string = "ui/NPC_Citizen3.png"; // 0x3cc MovS
	return 0; // 0x3cd Return
}


func_974(var_70_string)
{
	var_70_string = "ui/NPC_Citizen3_b.png"; // 0x3ce MovS
	return 0; // 0x3cf Return
}


func_847(var_147_bool)
{
	var_149_int = 0; var_150_string = ""; // 0x350 PushV
	var_150_string = "ood11ULittleBoy1"; // 0x351 MovS
	func_670(var_149_int, var_150_string); // 0x352 NEW_2
	var_151_int = 0; // 0x354 PushI
	var_152_bool = var_149_int == var_151_int; // 0x355 Eq
	if(var_152_bool == 0) goto Label_857; // 0x356 JumpB
	var_147_bool = 1; // 0x357 MovB
	return 0; // 0x358 Return
	
Label_857:
	var_147_bool = 0; // 0x359 MovB
	return 0; // 0x35a Return
}


func_208(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0xd1 PushV
	func_976(var_96_bool); // 0xd2 NEW_2
	var_97_bool = var_96_bool == 0; // 0xd4 Not
	if(var_97_bool == 0) goto Label_215; // 0xd5 JumpB
	return 0; // 0xd6 Return
	
Label_215:
	var_98_bool = var_95_string == var_2_object; // 0xd7 Eq
	if(var_98_bool == 0) goto Label_218; // 0xd8 JumpB
	return 0; // 0xd9 Return
	
Label_218:
	var_99_string = ""; var_100_bool = 0; // 0xda PushV
	var_99_string = var_95_string; // 0xdb Mov
	var_101_string = ""; // 0xdc PushS
	var_102_bool = var_95_string == var_101_string; // 0xdd Eq
	if(var_102_bool == 0) goto Label_225; // 0xde JumpB
	var_100_bool = 0; // 0xdf MovB
	goto Label_226; // 0xe0 Jump
	
Label_226:
	func_632(var_99_string, var_100_bool); // 0xe2 NEW_2
	var_2_object = var_95_string; // 0xe4 TMov
	return 0; // 0xe5 Return
	
Label_225:
	var_100_bool = 1; // 0xe1 MovB
}


func_976(var_62_bool)
{
	var_62_bool = 0; // 0x3d0 MovB
	return 0; // 0x3d1 Return
}


func_719(var_48_bool, var_49_string, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x2cf PushV
	FindActor(var_52_object, var_49_string); // 0x2d0 Func
	var_53_bool = var_52_object == 0; // 0x2d2 NullEq
	if(var_53_bool == 0) goto Label_726; // 0x2d3 JumpB
	var_48_bool = 0; // 0x2d4 MovB
	return 2; // 0x2d5 Return
	
Label_726:
	Trigger(var_52_object, var_50_string); // 0x2d6 Func
	var_48_bool = 1; // 0x2d8 MovB
	return 2; // 0x2d9 Return
}


func_599()
{
	var_186_bool = 0; var_187_bool = 0; // 0x257 PushV
	CameraSwitchToNormal(); // 0x258 Func
	var_188_bool = 0; // 0x25a PushV
	func_976(var_188_bool); // 0x25b NEW_2
	if(var_188_bool == 0) goto Label_607; // 0x25d JumpB
	goto Label_615; // 0x25e Jump
	
Label_615:
	return 2; // 0x267 Return
	
Label_607:
	var_189_string = "head"; // 0x25f PushS
	HasAnimationTrack(var_187_bool, var_189_string); // 0x260 Func
	var_190_bool = var_187_bool; // 0x262 Push
	if(var_190_bool == 0) goto Label_615; // 0x263 JumpB
	var_191_string = "head"; // 0x264 PushS
	UnlookAsync(var_191_string); // 0x265 Func
}


func_859(var_172_bool)
{
	var_174_int = 0; var_175_string = ""; // 0x35c PushV
	var_175_string = "ood11ULittleBoy2"; // 0x35d MovS
	func_670(var_174_int, var_175_string); // 0x35e NEW_2
	var_176_int = 0; // 0x360 PushI
	var_177_bool = var_174_int == var_176_int; // 0x361 Eq
	if(var_177_bool == 0) goto Label_869; // 0x362 JumpB
	var_172_bool = 1; // 0x363 MovB
	return 0; // 0x364 Return
	
Label_869:
	var_172_bool = 0; // 0x365 MovB
	return 0; // 0x366 Return
}


func_731()
{
	var_107_string = "playsound"; // 0x2dc PushS
	var_108_string = "giveitem"; // 0x2dd PushS
	TriggerWorld(var_107_string, var_108_string); // 0x2de Func
	return 0; // 0x2e0 Return
}


func_737(var_81_object)
{
	var_83_string = "revolver ammo6 is given"; // 0x2e2 PushS
	Trace(var_83_string); // 0x2e3 Func
	var_84_object = Obj(); var_85_string = ""; var_86_int = 0; // 0x2e5 PushV
	var_84_object = var_81_object; // 0x2e6 Mov
	var_85_string = "revolver_ammo"; // 0x2e7 MovS
	var_86_int = 6; // 0x2e8 MovI
	func_706(var_84_object, var_85_string, var_86_int); // 0x2e9 NEW_2
	return 0; // 0x2eb Return
}


func_481()
{
	
Label_481:
	Hold(); // 0x1e1 Func
	goto Label_481; // 0x1e3 Jump
}


func_871()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x367 PushV
	var_19_int = 197; // 0x368 PushI
	var_20_int = 2; // 0x369 PushI
	var_21_int = 515485; // 0x36a PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x36b Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x36d PushV
	var_23_object = var_18_object; // 0x36e Mov
	var_24_int = -1; // 0x36f MovI
	func_923(var_22_bool, var_23_object, var_24_int); // 0x370 NEW_2
	return 2; // 0x372 Return
}


func_616(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0; // 0x268 PushV
	lshHasAnimation(var_125_bool, var_121_string); // 0x269 Func
	var_128_bool = var_125_bool; // 0x26b Push
	if(var_128_bool == 0) goto Label_627; // 0x26c JumpB
	lshGetAnimTimes(var_121_string, var_126_float, var_127_float); // 0x26d Func
	var_129_bool = 0; // 0x26f PushB
	lshPlayAnimation(var_126_float, var_127_float, var_129_bool); // 0x270 Func
	goto Label_631; // 0x272 Jump
	
Label_631:
	return 6; // 0x277 Return
	
Label_627:
	var_130_string = "Can't find lsh animation : "; // 0x273 PushS
	var_131_int = var_130_string + var_121_string; // 0x274 Add
	Trace(var_131_int); // 0x275 Func
}


func_748()
{
	var_15_string = "d11q02"; // 0x2ed PushS
	var_16_int = 1; // 0x2ee PushI
	SetVariable(var_15_string, var_16_int); // 0x2ef Func
	func_871(); // 0x2f2 NEW_2
	func_897(); // 0x2f5 NEW_2
	var_48_bool = 0; var_49_string = ""; var_50_string = ""; // 0x2f7 PushV
	var_49_string = "quest_d11_02"; // 0x2f8 MovS
	var_50_string = "init_graveyard"; // 0x2f9 MovS
	func_719(var_48_bool, var_49_string, var_50_string); // 0x2fa NEW_2
	return 0; // 0x2fc Return
}


func_884()
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x374 PushV
	var_72_int = 198; // 0x375 PushI
	var_73_int = 2; // 0x376 PushI
	var_74_int = 515486; // 0x377 PushI
	CreateDiaryEntry(var_71_object, var_72_int, var_73_int, var_74_int); // 0x378 Func
	var_75_bool = 0; var_76_object = Obj(); var_77_int = 0; // 0x37a PushV
	var_76_object = var_71_object; // 0x37b Mov
	var_77_int = 197; // 0x37c MovI
	func_923(var_75_bool, var_76_object, var_77_int); // 0x37d NEW_2
	return 2; // 0x37f Return
}


func_632(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x278 PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x279 Func
	var_109_bool = var_106_bool; // 0x27b Push
	if(var_109_bool == 0) goto Label_642; // 0x27c JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x27d Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x27f Func
	goto Label_646; // 0x281 Jump
	
Label_646:
	return 6; // 0x286 Return
	
Label_642:
	var_110_string = "Can't find lsh animation : "; // 0x282 PushS
	var_111_int = var_110_string + var_99_string; // 0x283 Add
	Trace(var_111_int); // 0x284 Func
}


func_765()
{
	var_64_int = 0; var_65_string = ""; // 0x2fe PushV
	var_65_string = "d11q02"; // 0x2ff MovS
	func_670(var_64_int, var_65_string); // 0x300 NEW_2
	var_68_int = 1000; // 0x302 PushI
	var_69_bool = var_64_int != var_68_int; // 0x303 Neq
	if(var_69_bool == 0) goto Label_781; // 0x304 JumpB
	func_884(); // 0x306 NEW_2
	var_78_bool = 0; var_79_string = ""; var_80_string = ""; // 0x308 PushV
	var_79_string = "quest_d11_02"; // 0x309 MovS
	var_80_string = "completed"; // 0x30a MovS
	func_719(var_78_bool, var_79_string, var_80_string); // 0x30b NEW_2
	
Label_781:
	return 0; // 0x30d Return
}


