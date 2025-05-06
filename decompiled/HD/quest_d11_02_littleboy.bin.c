task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0xe7 PushI
	if(var_9_int == 0) goto Label_461; // 0xe8 JumpB
	func_649(); // 0xea NEW_2
	var_11_int = 15360; // 0xec PushI
	var_12_bool = var_8_bool == var_11_int; // 0xed Eq
	if(var_12_bool == 0) goto Label_244; // 0xee JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xef PushV
	var_13_object = var_1_object; // 0xf0 MovT
	var_14_object = var_0_object; // 0xf1 MovT
	func_750(); // 0xf2 NEW_2
	
Label_244:
	var_54_int = 15363; // 0xf4 PushI
	var_55_bool = var_8_bool == var_54_int; // 0xf5 Eq
	if(var_55_bool == 0) goto Label_252; // 0xf6 JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0xf7 PushV
	var_56_object = var_1_object; // 0xf8 MovT
	var_57_object = var_0_object; // 0xf9 MovT
	func_784(); // 0xfa NEW_2
	
Label_252:
	var_60_int = 15365; // 0xfc PushI
	var_61_bool = var_8_bool == var_60_int; // 0xfd Eq
	if(var_61_bool == 0) goto Label_275; // 0xfe JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xff PushV
	var_62_object = var_1_object; // 0x100 MovT
	var_63_object = var_0_object; // 0x101 MovT
	func_767(); // 0x102 NEW_2
	var_81_object = Obj(); var_82_object = Obj(); // 0x104 PushV
	var_81_object = var_1_object; // 0x105 MovT
	var_82_object = var_0_object; // 0x106 MovT
	func_739(var_82_object); // 0x107 NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0x109 PushV
	var_105_object = var_1_object; // 0x10a MovT
	var_106_object = var_0_object; // 0x10b MovT
	func_733(); // 0x10c NEW_2
	var_109_object = Obj(); var_110_object = Obj(); // 0x10e PushV
	var_109_object = var_1_object; // 0x10f MovT
	var_110_object = var_0_object; // 0x110 MovT
	func_796(); // 0x111 NEW_2
	
Label_275:
	var_112_int = 15366; // 0x113 PushI
	var_113_bool = var_8_bool == var_112_int; // 0x114 Eq
	if(var_113_bool == 0) goto Label_283; // 0x115 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x116 PushV
	var_114_object = var_1_object; // 0x117 MovT
	var_115_object = var_0_object; // 0x118 MovT
	func_790(); // 0x119 NEW_2
	
Label_283:
	var_118_int = 15368; // 0x11b PushI
	var_119_bool = var_8_bool == var_118_int; // 0x11c Eq
	if(var_119_bool == 0) goto Label_291; // 0x11d JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x11e PushV
	var_120_object = var_1_object; // 0x11f MovT
	var_121_object = var_0_object; // 0x120 MovT
	func_796(); // 0x121 NEW_2
	
Label_291:
	var_122_int = 15356; // 0x123 PushI
	var_123_bool = var_7_bool == var_122_int; // 0x124 Eq
	if(var_123_bool == 0) goto Label_390; // 0x125 JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x126 PushV
	var_125_object = var_1_object; // 0x127 MovT
	func_801(var_125_object); // 0x128 NEW_2
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
	func_813(var_159_object); // 0x14e NEW_2
	if(var_158_bool == 0) goto Label_343; // 0x150 JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x151 PushV
	var_165_object = var_1_object; // 0x152 MovT
	func_849(var_165_object); // 0x153 NEW_2
	if(var_164_bool == 0) goto Label_343; // 0x155 JumpB
	var_157_bool = 1; // 0x156 MovB
	
Label_343:
	if(var_157_bool == 0) goto Label_359; // 0x157 JumpB
	var_170_bool = 0; // 0x158 PushV
	var_170_bool = 0; // 0x159 MovB
	var_171_bool = 0; var_172_object = Obj(); // 0x15a PushV
	var_172_object = var_1_object; // 0x15b MovT
	func_837(var_172_object); // 0x15c NEW_2
	if(var_171_bool == 0) goto Label_357; // 0x15e JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x15f PushV
	var_178_object = var_1_object; // 0x160 MovT
	func_849(var_178_object); // 0x161 NEW_2
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
	func_825(var_184_object); // 0x171 NEW_2
	if(var_183_bool == 0) goto Label_378; // 0x173 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x174 PushV
	var_190_object = var_1_object; // 0x175 MovT
	func_861(var_190_object); // 0x176 NEW_2
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
	func_978(var_225_bool); // 0x1c3 NEW_2
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
	var_194_int = 1000; // 0x1dc PushI
	var_195_bool = var_11_object == var_194_int; // 0x1dd Eq
	if(var_195_bool == 0) goto Label_480; // 0x1de JumpB
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
	func_656(var_15_object); // 0x1f7 NEW_2
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
	func_656(var_10_object); // 0x20c NEW_2
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
	var_67_bool = var_20_bool == 0; // 0x7 Not
	if(var_67_bool == 0) goto Label_11; // 0x8 JumpB
	var_9_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_16_object); // 0xb Func
	var_68_int = 0; // 0xd PushV
	func_972(var_68_int); // 0xe NEW_2
	SetNPCName(var_68_int); // 0x10 ObjFunc
	var_69_int = 0; // 0x12 PushV
	func_970(var_69_int); // 0x13 NEW_2
	SetNPCDescription(var_69_int); // 0x15 ObjFunc
	var_70_string = ""; // 0x17 PushV
	func_974(var_70_string); // 0x18 NEW_2
	SetPhoto(var_70_string); // 0x1a ObjFunc
	var_71_string = ""; // 0x1c PushV
	func_976(var_71_string); // 0x1d NEW_2
	SetPhoto2(var_71_string); // 0x1f ObjFunc
	var_72_int = 0; // 0x21 PushV
	func_953(var_72_int); // 0x22 NEW_2
	SetPlayerName(var_72_int); // 0x24 ObjFunc
	var_18_int = -1; // 0x26 MovI
	IsOverrideActive(var_17_bool); // 0x27 Func
	var_80_bool = var_17_bool; // 0x29 Push
	if(var_80_bool == 0) goto Label_45; // 0x2a JumpB
	var_9_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_16_object); // 0x2d Func
	var_81_object = Obj(); var_82_object = Obj(); // 0x2f PushV
	var_81_object = var_10_object; // 0x30 Mov
	var_82_object = var_16_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_83_object, var_84_object, var_85_string, var_86_bool, var_81_object, var_82_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_19_bool); // 0x36 ObjFunc
	
Label_56:
	var_185_bool = var_19_bool == 0; // 0x38 Not
	if(var_185_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_19_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_186_object = Obj(); // 0x3f PushV
	var_186_object = var_10_object; // 0x40 Mov
	func_600(); // 0x41 NEW_2
	StopDialog(var_16_object); // 0x43 Func
	GetReturnValue(var_18_int); // 0x45 ObjFunc
	var_9_int = var_18_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_899()
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x383 PushV
	var_42_int = 199; // 0x384 PushI
	var_43_int = 2; // 0x385 PushI
	var_44_int = 515487; // 0x386 PushI
	CreateDiaryEntry(var_41_object, var_42_int, var_43_int, var_44_int); // 0x387 Func
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0; // 0x389 PushV
	var_46_object = var_41_object; // 0x38a Mov
	var_47_int = 197; // 0x38b MovI
	func_925(var_45_bool, var_46_object, var_47_int); // 0x38c NEW_2
	return 2; // 0x38e Return
}


func_649()
{
	var_10_bool = 0; // 0x289 PushV
	func_978(var_10_bool); // 0x28a NEW_2
	if(var_10_bool == 0) goto Label_655; // 0x28c JumpB
	lshStopSpeech(); // 0x28d Func
	
Label_655:
	return 0; // 0x28f Return
}


func_784()
{
	var_58_string = "ood11ULittleBoy1"; // 0x311 PushS
	var_59_int = 1; // 0x312 PushI
	SetVariable(var_58_string, var_59_int); // 0x313 Func
	return 0; // 0x315 Return
}


func_529(var_9_bool)
{
	var_9_bool = 1; // 0x211 MovB
	return 0; // 0x212 Return
}


func_656(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x290 PushV
	self(var_12_object); // 0x291 Func
	var_10_object = var_12_object; // 0x293 Mov
	return 2; // 0x294 Return
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
	func_662(var_47_cvector, var_48_cvector); // 0x22e NEW_2
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
	var_60_bool = 1; // 0x23e PushB
	CameraTransit(var_38_cvector, var_36_cvector, var_60_bool); // 0x23f Func
	var_61_float = GetByIndex(var_37_cvector, 0); // 0x241 PushE
	var_62_float = GetByIndex(var_37_cvector, 2); // 0x242 PushE
	Rotate(var_61_float, var_62_float); // 0x243 Func
	var_63_bool = 0; // 0x245 PushV
	func_978(var_63_bool); // 0x246 NEW_2
	if(var_63_bool == 0) goto Label_586; // 0x248 JumpB
	goto Label_594; // 0x249 Jump
	
Label_594:
	CameraWaitForPlayFinish(); // 0x252 Func
	ResumeWorld(); // 0x254 Func
	var_20_bool = 1; // 0x256 MovB
	return 18; // 0x257 Return
	
Label_586:
	var_64_string = "head"; // 0x24a PushS
	HasAnimationTrack(var_40_bool, var_64_string); // 0x24b Func
	var_65_bool = var_40_bool; // 0x24d Push
	if(var_65_bool == 0) goto Label_594; // 0x24e JumpB
	var_66_string = "head"; // 0x24f PushS
	LookAsyncCamera(var_66_string); // 0x250 Func
}


func_912(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x390 PushV
	GetDiaryRoot(var_33_object); // 0x391 Func
	var_34_bool = var_33_object == 0; // 0x393 Not
	if(var_34_bool == 0) goto Label_922; // 0x394 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x395 PushS
	Trace(var_35_string); // 0x396 Func
	var_31_object = 0; // 0x398 MovB
	return 2; // 0x399 Return
	
Label_922:
	var_31_object = var_33_object; // 0x39a Mov
	return 2; // 0x39b Return
}


func_790()
{
	var_116_string = "ood11ULittleBoy2"; // 0x317 PushS
	var_117_int = 1; // 0x318 PushI
	SetVariable(var_116_string, var_117_int); // 0x319 Func
	return 0; // 0x31b Return
}


func_662(var_47_cvector, var_48_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x296 PushV
	var_52_int = var_48_cvector | var_48_cvector; // 0x297 Or
	var_51_float = sqrt(var_52_int); // 0x298 Sqrt2
	var_53_float = 0.0; // 0x299 PushF
	var_54_bool = var_51_float < var_53_float; // 0x29a LT
	if(var_54_bool == 0) goto Label_670; // 0x29b JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x29c MovV
	return 2; // 0x29d Return
	
Label_670:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x29e Div2
	return 2; // 0x29f Return
}


func_796()
{
	var_111_int = 1000; // 0x31d PushI
	SetReturnValue(var_111_int); // 0x31e ObjFunc
	return 0; // 0x320 Return
}


func_925(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x39d PushV
	var_31_object = Obj(); // 0x39e PushV
	func_912(var_31_object); // 0x39f NEW_2
	var_28_object = var_31_object; // 0x3a0 Mov
	Find(var_24_int, var_29_object); // 0x3a2 ObjFunc
	var_36_bool = var_29_object == 0; // 0x3a4 Not
	if(var_36_bool == 0) goto Label_940; // 0x3a5 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x3a6 PushS
	var_38_int = var_37_string + var_24_int; // 0x3a7 Add
	Trace(var_38_int); // 0x3a8 Func
	var_22_bool = 0; // 0x3aa MovB
	return 6; // 0x3ab Return
	
Label_940:
	AddChild(var_23_object); // 0x3ac ObjFunc
	var_39_int = 7; // 0x3ae PushI
	SendWorldWndMessage(var_39_int); // 0x3af Func
	GetCategory(var_30_int); // 0x3b1 ObjFunc
	SetDiarySection(var_30_int); // 0x3b3 Func
	var_22_bool = 0; // 0x3b5 MovB
	return 6; // 0x3b6 Return
}


func_672(var_90_int, var_91_string)
{
	var_92_int = 0; var_93_int = 0; // 0x2a0 PushV
	GetVariable(var_91_string, var_93_int); // 0x2a1 Func
	var_90_int = var_93_int; // 0x2a3 Mov
	return 2; // 0x2a4 Return
}


func_801(var_88_bool)
{
	var_90_int = 0; var_91_string = ""; // 0x322 PushV
	var_91_string = "d11q02"; // 0x323 MovS
	func_672(var_90_int, var_91_string); // 0x324 NEW_2
	var_94_int = 0; // 0x326 PushI
	var_95_bool = var_90_int == var_94_int; // 0x327 Eq
	if(var_95_bool == 0) goto Label_811; // 0x328 JumpB
	var_88_bool = 1; // 0x329 MovB
	return 0; // 0x32a Return
	
Label_811:
	var_88_bool = 0; // 0x32b MovB
	return 0; // 0x32c Return
}


func_677(var_100_int, var_101_int)
{
	var_102_object = Obj(); var_103_object = Obj(); // 0x2a5 PushV
	CreateIntVector(var_103_object); // 0x2a6 Func
	add(var_100_int); // 0x2a8 ObjFunc
	add(var_101_int); // 0x2aa ObjFunc
	var_104_int = 3; // 0x2ac PushI
	SendWorldWndMessage(var_104_int, var_103_object); // 0x2ad Func
	return 2; // 0x2af Return
}


func_813(var_142_bool)
{
	var_144_int = 0; var_145_string = ""; // 0x32e PushV
	var_145_string = "d11q02"; // 0x32f MovS
	func_672(var_144_int, var_145_string); // 0x330 NEW_2
	var_146_int = 2; // 0x332 PushI
	var_147_bool = var_144_int == var_146_int; // 0x333 Eq
	if(var_147_bool == 0) goto Label_823; // 0x334 JumpB
	var_142_bool = 1; // 0x335 MovB
	return 0; // 0x336 Return
	
Label_823:
	var_142_bool = 0; // 0x337 MovB
	return 0; // 0x338 Return
}


func_689(var_90_object, var_91_int)
{
	var_92_int = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_bool = 0; // 0x2b1 PushV
	GetItemID(var_95_int); // 0x2b2 ObjFunc
	var_98_string = "Category"; // 0x2b4 PushS
	GetInvItemProperty(var_96_int, var_95_int, var_98_string); // 0x2b5 Func
	AddItem(var_97_bool, var_90_object, var_96_int, var_91_int); // 0x2b7 ObjFunc
	var_99_bool = var_97_bool == 0; // 0x2b9 Not
	if(var_99_bool == 0) goto Label_702; // 0x2ba JumpB
	DropItems(var_90_object, var_91_int); // 0x2bb ObjFunc
	goto Label_707; // 0x2bd Jump
	
Label_707:
	return 6; // 0x2c3 Return
	
Label_702:
	var_100_int = 0; var_101_int = 0; // 0x2be PushV
	var_100_int = var_95_int; // 0x2bf Mov
	var_101_int = var_91_int; // 0x2c0 Mov
	func_677(var_100_int, var_101_int); // 0x2c1 NEW_2
}


func_825(var_167_bool)
{
	var_169_int = 0; var_170_string = ""; // 0x33a PushV
	var_170_string = "d11q02"; // 0x33b MovS
	func_672(var_169_int, var_170_string); // 0x33c NEW_2
	var_171_int = -1; // 0x33e PushI
	var_172_bool = var_169_int == var_171_int; // 0x33f Eq
	if(var_172_bool == 0) goto Label_835; // 0x340 JumpB
	var_167_bool = 1; // 0x341 MovB
	return 0; // 0x342 Return
	
Label_835:
	var_167_bool = 0; // 0x343 MovB
	return 0; // 0x344 Return
}


func_953(var_72_int)
{
	var_73_int = 0; var_74_int = 0; // 0x3b9 PushV
	var_75_string = "branch"; // 0x3ba PushS
	GetVariable(var_75_string, var_74_int); // 0x3bb Func
	var_76_int = 0; // 0x3bd PushI
	var_77_bool = var_74_int == var_76_int; // 0x3be Eq
	if(var_77_bool == 0) goto Label_963; // 0x3bf JumpB
	var_72_int = 1; // 0x3c0 MovI
	return 2; // 0x3c1 Return
	
Label_963:
	var_78_int = 1; // 0x3c3 PushI
	var_79_bool = var_74_int == var_78_int; // 0x3c4 Eq
	if(var_79_bool == 0) goto Label_968; // 0x3c5 JumpB
	var_72_int = 2; // 0x3c6 MovI
	return 2; // 0x3c7 Return
	
Label_968:
	var_72_int = 3; // 0x3c8 MovI
	return 2; // 0x3c9 Return
}


func_708(var_84_object, var_85_string, var_86_int)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x2c4 PushV
	CreateInvItem(var_88_object); // 0x2c5 Func
	SetItemName(var_85_string); // 0x2c7 ObjFunc
	var_89_object = Obj(); var_90_object = Obj(); var_91_int = 0; // 0x2c9 PushV
	var_89_object = var_84_object; // 0x2ca Mov
	var_90_object = var_88_object; // 0x2cb Mov
	var_91_int = var_86_int; // 0x2cc Mov
	func_689(var_90_object, var_91_int); // 0x2cd NEW_2
	return 2; // 0x2cf Return
}


func_837(var_155_bool)
{
	var_157_int = 0; var_158_string = ""; // 0x346 PushV
	var_158_string = "d11q02"; // 0x347 MovS
	func_672(var_157_int, var_158_string); // 0x348 NEW_2
	var_159_int = 1000; // 0x34a PushI
	var_160_bool = var_157_int == var_159_int; // 0x34b Eq
	if(var_160_bool == 0) goto Label_847; // 0x34c JumpB
	var_155_bool = 1; // 0x34d MovB
	return 0; // 0x34e Return
	
Label_847:
	var_155_bool = 0; // 0x34f MovB
	return 0; // 0x350 Return
}


func_970(var_69_int)
{
	var_69_int = 515560; // 0x3ca MovI
	return 0; // 0x3cb Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_81_object, var_82_object)
{
	var_0_object = var_82_object; // 0x4b TMov
	var_1_object = var_81_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_87_int = 1; // 0x4e PushI
	if(var_87_int == 0) goto Label_178; // 0x4f JumpB
	var_88_bool = 0; var_89_object = Obj(); // 0x50 PushV
	var_89_object = var_1_object; // 0x51 MovT
	func_801(var_89_object); // 0x52 NEW_2
	if(var_88_bool == 0) goto Label_105; // 0x54 JumpB
	var_96_string = ""; // 0x55 PushV
	var_96_string = "Neutral"; // 0x56 MovS
	func_208(var_82_object, var_96_string); // 0x57 NEW_2
	var_113_int = 514142; // 0x59 PushI
	SetMessage(var_113_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_114_int = 514143; // 0x5e PushI
	var_115_int = 41559; // 0x5f PushI
	var_116_int = 15357; // 0x60 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x61 TObjFunc
	var_117_int = 539612; // 0x63 PushI
	var_118_int = 41559; // 0x64 PushI
	var_119_int = 41558; // 0x65 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x66 TObjFunc
	goto Label_178; // 0x68 Jump
	
Label_178:
	var_120_bool = 0; // 0xb2 PushV
	func_978(var_120_bool); // 0xb3 NEW_2
	if(var_120_bool == 0) goto Label_193; // 0xb5 JumpB
	
Label_182:
	lshWaitForAnimEnd(); // 0xb6 Func
	var_121_string = var_3_string; // 0xb8 PushT
	if(var_121_string == 0) goto Label_187; // 0xb9 JumpB
	goto Label_192; // 0xba Jump
	
Label_192:
	goto Label_207; // 0xc0 Jump
	
Label_207:
	return 0; // 0xcf Return
	
Label_187:
	var_122_string = ""; // 0xbb PushV
	var_122_string = var_2_object; // 0xbc MovT
	func_618(var_122_string); // 0xbd NEW_2
	goto Label_182; // 0xbf Jump
	
Label_193:
	var_133_string = "all"; // 0xc1 PushS
	var_134_string = "idle"; // 0xc2 PushS
	PlayAnimation(var_133_string, var_134_string); // 0xc3 Func
	
Label_197:
	WaitForAnimEnd(); // 0xc5 Func
	var_135_string = var_3_string; // 0xc7 PushT
	if(var_135_string == 0) goto Label_202; // 0xc8 JumpB
	goto Label_207; // 0xc9 Jump
	
Label_202:
	var_136_string = "all"; // 0xca PushS
	var_137_string = "idle"; // 0xcb PushS
	PlayAnimation(var_136_string, var_137_string); // 0xcc Func
	goto Label_197; // 0xce Jump
	
Label_105:
	var_138_string = ""; // 0x69 PushV
	var_138_string = "Neutral"; // 0x6a MovS
	func_208(var_82_object, var_138_string); // 0x6b NEW_2
	var_139_int = 514147; // 0x6d PushI
	SetMessage(var_139_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_140_bool = 0; // 0x72 PushV
	var_140_bool = 1; // 0x73 MovB
	var_141_bool = 0; // 0x74 PushV
	var_141_bool = 0; // 0x75 MovB
	var_142_bool = 0; var_143_object = Obj(); // 0x76 PushV
	var_143_object = var_1_object; // 0x77 MovT
	func_813(var_143_object); // 0x78 NEW_2
	if(var_142_bool == 0) goto Label_129; // 0x7a JumpB
	var_148_bool = 0; var_149_object = Obj(); // 0x7b PushV
	var_149_object = var_1_object; // 0x7c MovT
	func_849(var_149_object); // 0x7d NEW_2
	if(var_148_bool == 0) goto Label_129; // 0x7f JumpB
	var_141_bool = 1; // 0x80 MovB
	
Label_129:
	if(var_141_bool == 0) goto Label_145; // 0x81 JumpB
	var_154_bool = 0; // 0x82 PushV
	var_154_bool = 0; // 0x83 MovB
	var_155_bool = 0; var_156_object = Obj(); // 0x84 PushV
	var_156_object = var_1_object; // 0x85 MovT
	func_837(var_156_object); // 0x86 NEW_2
	if(var_155_bool == 0) goto Label_143; // 0x88 JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0x89 PushV
	var_162_object = var_1_object; // 0x8a MovT
	func_849(var_162_object); // 0x8b NEW_2
	if(var_161_bool == 0) goto Label_143; // 0x8d JumpB
	var_154_bool = 1; // 0x8e MovB
	
Label_143:
	if(var_154_bool == 0) goto Label_145; // 0x8f JumpB
	var_140_bool = 0; // 0x90 MovB
	
Label_145:
	if(var_140_bool == 0) goto Label_151; // 0x91 JumpB
	var_163_int = 514149; // 0x92 PushI
	var_164_int = 15364; // 0x93 PushI
	var_165_int = 15363; // 0x94 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x95 TObjFunc
	
Label_151:
	var_166_bool = 0; // 0x97 PushV
	var_166_bool = 0; // 0x98 MovB
	var_167_bool = 0; var_168_object = Obj(); // 0x99 PushV
	var_168_object = var_1_object; // 0x9a MovT
	func_825(var_168_object); // 0x9b NEW_2
	if(var_167_bool == 0) goto Label_164; // 0x9d JumpB
	var_173_bool = 0; var_174_object = Obj(); // 0x9e PushV
	var_174_object = var_1_object; // 0x9f MovT
	func_861(var_174_object); // 0xa0 NEW_2
	if(var_173_bool == 0) goto Label_164; // 0xa2 JumpB
	var_166_bool = 1; // 0xa3 MovB
	
Label_164:
	if(var_166_bool == 0) goto Label_170; // 0xa4 JumpB
	var_179_int = 514152; // 0xa5 PushI
	var_180_int = 15367; // 0xa6 PushI
	var_181_int = 15366; // 0xa7 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xa8 TObjFunc
	
Label_170:
	var_182_int = 514148; // 0xaa PushI
	var_183_int = -1; // 0xab PushI
	var_184_int = 15362; // 0xac PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xad TObjFunc
	goto Label_178; // 0xaf Jump
}


func_972(var_68_int)
{
	var_68_int = 503345; // 0x3cc MovI
	return 0; // 0x3cd Return
}


func_974(var_70_string)
{
	var_70_string = "ui/NPC_Citizen3.png"; // 0x3ce MovS
	return 0; // 0x3cf Return
}


func_976(var_71_string)
{
	var_71_string = "ui/NPC_Citizen3_b.png"; // 0x3d0 MovS
	return 0; // 0x3d1 Return
}


func_208(var_2_object, var_96_string)
{
	var_97_bool = 0; // 0xd1 PushV
	func_978(var_97_bool); // 0xd2 NEW_2
	var_98_bool = var_97_bool == 0; // 0xd4 Not
	if(var_98_bool == 0) goto Label_215; // 0xd5 JumpB
	return 0; // 0xd6 Return
	
Label_215:
	var_99_bool = var_96_string == var_2_object; // 0xd7 Eq
	if(var_99_bool == 0) goto Label_218; // 0xd8 JumpB
	return 0; // 0xd9 Return
	
Label_218:
	var_100_string = ""; var_101_bool = 0; // 0xda PushV
	var_100_string = var_96_string; // 0xdb Mov
	var_102_string = ""; // 0xdc PushS
	var_103_bool = var_96_string == var_102_string; // 0xdd Eq
	if(var_103_bool == 0) goto Label_225; // 0xde JumpB
	var_101_bool = 0; // 0xdf MovB
	goto Label_226; // 0xe0 Jump
	
Label_226:
	func_634(var_100_string, var_101_bool); // 0xe2 NEW_2
	var_2_object = var_96_string; // 0xe4 TMov
	return 0; // 0xe5 Return
	
Label_225:
	var_101_bool = 1; // 0xe1 MovB
}


func_849(var_148_bool)
{
	var_150_int = 0; var_151_string = ""; // 0x352 PushV
	var_151_string = "ood11ULittleBoy1"; // 0x353 MovS
	func_672(var_150_int, var_151_string); // 0x354 NEW_2
	var_152_int = 0; // 0x356 PushI
	var_153_bool = var_150_int == var_152_int; // 0x357 Eq
	if(var_153_bool == 0) goto Label_859; // 0x358 JumpB
	var_148_bool = 1; // 0x359 MovB
	return 0; // 0x35a Return
	
Label_859:
	var_148_bool = 0; // 0x35b MovB
	return 0; // 0x35c Return
}


func_978(var_63_bool)
{
	var_63_bool = 0; // 0x3d2 MovB
	return 0; // 0x3d3 Return
}


func_721(var_48_bool, var_49_string, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x2d1 PushV
	FindActor(var_52_object, var_49_string); // 0x2d2 Func
	var_53_bool = var_52_object == 0; // 0x2d4 NullEq
	if(var_53_bool == 0) goto Label_728; // 0x2d5 JumpB
	var_48_bool = 0; // 0x2d6 MovB
	return 2; // 0x2d7 Return
	
Label_728:
	Trigger(var_52_object, var_50_string); // 0x2d8 Func
	var_48_bool = 1; // 0x2da MovB
	return 2; // 0x2db Return
}


func_600()
{
	var_187_bool = 0; var_188_bool = 0; // 0x258 PushV
	var_189_bool = 1; // 0x259 PushB
	CameraSwitchToNormal(var_189_bool); // 0x25a Func
	var_190_bool = 0; // 0x25c PushV
	func_978(var_190_bool); // 0x25d NEW_2
	if(var_190_bool == 0) goto Label_609; // 0x25f JumpB
	goto Label_617; // 0x260 Jump
	
Label_617:
	return 2; // 0x269 Return
	
Label_609:
	var_191_string = "head"; // 0x261 PushS
	HasAnimationTrack(var_188_bool, var_191_string); // 0x262 Func
	var_192_bool = var_188_bool; // 0x264 Push
	if(var_192_bool == 0) goto Label_617; // 0x265 JumpB
	var_193_string = "head"; // 0x266 PushS
	UnlookAsync(var_193_string); // 0x267 Func
}


func_861(var_173_bool)
{
	var_175_int = 0; var_176_string = ""; // 0x35e PushV
	var_176_string = "ood11ULittleBoy2"; // 0x35f MovS
	func_672(var_175_int, var_176_string); // 0x360 NEW_2
	var_177_int = 0; // 0x362 PushI
	var_178_bool = var_175_int == var_177_int; // 0x363 Eq
	if(var_178_bool == 0) goto Label_871; // 0x364 JumpB
	var_173_bool = 1; // 0x365 MovB
	return 0; // 0x366 Return
	
Label_871:
	var_173_bool = 0; // 0x367 MovB
	return 0; // 0x368 Return
}


func_733()
{
	var_107_string = "playsound"; // 0x2de PushS
	var_108_string = "giveitem"; // 0x2df PushS
	TriggerWorld(var_107_string, var_108_string); // 0x2e0 Func
	return 0; // 0x2e2 Return
}


func_481()
{
	
Label_481:
	Hold(); // 0x1e1 Func
	goto Label_481; // 0x1e3 Jump
}


func_739(var_81_object)
{
	var_83_string = "revolver ammo6 is given"; // 0x2e4 PushS
	Trace(var_83_string); // 0x2e5 Func
	var_84_object = Obj(); var_85_string = ""; var_86_int = 0; // 0x2e7 PushV
	var_84_object = var_81_object; // 0x2e8 Mov
	var_85_string = "revolver_ammo"; // 0x2e9 MovS
	var_86_int = 6; // 0x2ea MovI
	func_708(var_84_object, var_85_string, var_86_int); // 0x2eb NEW_2
	return 0; // 0x2ed Return
}


func_873()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x369 PushV
	var_19_int = 197; // 0x36a PushI
	var_20_int = 2; // 0x36b PushI
	var_21_int = 515485; // 0x36c PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x36d Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x36f PushV
	var_23_object = var_18_object; // 0x370 Mov
	var_24_int = -1; // 0x371 MovI
	func_925(var_22_bool, var_23_object, var_24_int); // 0x372 NEW_2
	return 2; // 0x374 Return
}


func_618(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0; // 0x26a PushV
	lshHasAnimation(var_126_bool, var_122_string); // 0x26b Func
	var_129_bool = var_126_bool; // 0x26d Push
	if(var_129_bool == 0) goto Label_629; // 0x26e JumpB
	lshGetAnimTimes(var_122_string, var_127_float, var_128_float); // 0x26f Func
	var_130_bool = 0; // 0x271 PushB
	lshPlayAnimation(var_127_float, var_128_float, var_130_bool); // 0x272 Func
	goto Label_633; // 0x274 Jump
	
Label_633:
	return 6; // 0x279 Return
	
Label_629:
	var_131_string = "Can't find lsh animation : "; // 0x275 PushS
	var_132_int = var_131_string + var_122_string; // 0x276 Add
	Trace(var_132_int); // 0x277 Func
}


func_750()
{
	var_15_string = "d11q02"; // 0x2ef PushS
	var_16_int = 1; // 0x2f0 PushI
	SetVariable(var_15_string, var_16_int); // 0x2f1 Func
	func_873(); // 0x2f4 NEW_2
	func_899(); // 0x2f7 NEW_2
	var_48_bool = 0; var_49_string = ""; var_50_string = ""; // 0x2f9 PushV
	var_49_string = "quest_d11_02"; // 0x2fa MovS
	var_50_string = "init_graveyard"; // 0x2fb MovS
	func_721(var_48_bool, var_49_string, var_50_string); // 0x2fc NEW_2
	return 0; // 0x2fe Return
}


func_886()
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x376 PushV
	var_72_int = 198; // 0x377 PushI
	var_73_int = 2; // 0x378 PushI
	var_74_int = 515486; // 0x379 PushI
	CreateDiaryEntry(var_71_object, var_72_int, var_73_int, var_74_int); // 0x37a Func
	var_75_bool = 0; var_76_object = Obj(); var_77_int = 0; // 0x37c PushV
	var_76_object = var_71_object; // 0x37d Mov
	var_77_int = 197; // 0x37e MovI
	func_925(var_75_bool, var_76_object, var_77_int); // 0x37f NEW_2
	return 2; // 0x381 Return
}


func_634(var_100_string, var_101_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0; // 0x27a PushV
	lshHasAnimation(var_107_bool, var_100_string); // 0x27b Func
	var_110_bool = var_107_bool; // 0x27d Push
	if(var_110_bool == 0) goto Label_644; // 0x27e JumpB
	lshGetAnimTimes(var_100_string, var_108_float, var_109_float); // 0x27f Func
	lshPlayAnimation(var_108_float, var_109_float, var_101_bool); // 0x281 Func
	goto Label_648; // 0x283 Jump
	
Label_648:
	return 6; // 0x288 Return
	
Label_644:
	var_111_string = "Can't find lsh animation : "; // 0x284 PushS
	var_112_int = var_111_string + var_100_string; // 0x285 Add
	Trace(var_112_int); // 0x286 Func
}


func_767()
{
	var_64_int = 0; var_65_string = ""; // 0x300 PushV
	var_65_string = "d11q02"; // 0x301 MovS
	func_672(var_64_int, var_65_string); // 0x302 NEW_2
	var_68_int = 1000; // 0x304 PushI
	var_69_bool = var_64_int != var_68_int; // 0x305 Neq
	if(var_69_bool == 0) goto Label_783; // 0x306 JumpB
	func_886(); // 0x308 NEW_2
	var_78_bool = 0; var_79_string = ""; var_80_string = ""; // 0x30a PushV
	var_79_string = "quest_d11_02"; // 0x30b MovS
	var_80_string = "completed"; // 0x30c MovS
	func_721(var_78_bool, var_79_string, var_80_string); // 0x30d NEW_2
	
Label_783:
	return 0; // 0x30f Return
}


