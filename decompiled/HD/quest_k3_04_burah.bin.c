task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc0 PushI
	if(var_9_int == 0) goto Label_370; // 0xc1 JumpB
	func_975(); // 0xc3 NEW_2
	var_11_int = 26978; // 0xc5 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc6 Eq
	if(var_12_bool == 0) goto Label_215; // 0xc7 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc8 PushV
	var_13_object = var_1_object; // 0xc9 MovT
	var_14_object = var_0_object; // 0xca MovT
	func_1082(); // 0xcb NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0xcd PushV
	var_42_object = var_1_object; // 0xce MovT
	var_43_object = var_0_object; // 0xcf MovT
	func_1095(var_43_object); // 0xd0 NEW_2
	var_70_object = Obj(); var_71_object = Obj(); // 0xd2 PushV
	var_70_object = var_1_object; // 0xd3 MovT
	var_71_object = var_0_object; // 0xd4 MovT
	func_1124(var_71_object); // 0xd5 NEW_2
	
Label_215:
	var_85_int = 26979; // 0xd7 PushI
	var_86_bool = var_8_bool == var_85_int; // 0xd8 Eq
	if(var_86_bool == 0) goto Label_223; // 0xd9 JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0xda PushV
	var_87_object = var_1_object; // 0xdb MovT
	var_88_object = var_0_object; // 0xdc MovT
	func_1073(); // 0xdd NEW_2
	
Label_223:
	var_91_int = 26977; // 0xdf PushI
	var_92_bool = var_7_cvector == var_91_int; // 0xe0 Eq
	if(var_92_bool == 0) goto Label_276; // 0xe1 JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0xe2 PushV
	var_94_object = var_1_object; // 0xe3 MovT
	func_1153(var_94_object); // 0xe4 NEW_2
	if(var_93_bool == 0) goto Label_256; // 0xe6 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0xe7 PushV
	var_101_object = var_1_object; // 0xe8 MovT
	var_102_object = var_0_object; // 0xe9 MovT
	func_1067(); // 0xea NEW_2
	var_105_string = ""; // 0xec PushV
	var_105_string = "Sorrow"; // 0xed MovS
	func_169(var_8_bool, var_105_string); // 0xee NEW_2
	var_122_int = 525635; // 0xf0 PushI
	SetMessage(var_122_int); // 0xf1 TObjFunc
	ClearReplies(); // 0xf3 TObjFunc
	var_123_int = 529332; // 0xf5 PushI
	var_124_int = 30788; // 0xf6 PushI
	var_125_int = 30787; // 0xf7 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0xf8 TObjFunc
	var_126_int = 540664; // 0xfa PushI
	var_127_int = 42695; // 0xfb PushI
	var_128_int = 42694; // 0xfc PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xfd TObjFunc
	return 0; // 0xff Return
	
Label_256:
	var_129_string = ""; // 0x100 PushV
	var_129_string = "Neutral"; // 0x101 MovS
	func_169(var_8_bool, var_129_string); // 0x102 NEW_2
	var_130_int = 525638; // 0x104 PushI
	SetMessage(var_130_int); // 0x105 TObjFunc
	ClearReplies(); // 0x107 TObjFunc
	var_131_int = 525639; // 0x109 PushI
	var_132_int = -1; // 0x10a PushI
	var_133_int = 26981; // 0x10b PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x10c TObjFunc
	var_134_int = 529336; // 0x10e PushI
	var_135_int = -1; // 0x10f PushI
	var_136_int = 30791; // 0x110 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x111 TObjFunc
	return 0; // 0x113 Return
	
Label_276:
	var_137_int = 42695; // 0x114 PushI
	var_138_bool = var_7_cvector == var_137_int; // 0x115 Eq
	if(var_138_bool == 0) goto Label_299; // 0x116 JumpB
	var_139_string = ""; // 0x117 PushV
	var_139_string = "Sorrow"; // 0x118 MovS
	func_169(var_8_bool, var_139_string); // 0x119 NEW_2
	var_140_int = 540665; // 0x11b PushI
	SetMessage(var_140_int); // 0x11c TObjFunc
	ClearReplies(); // 0x11e TObjFunc
	var_141_int = 540666; // 0x120 PushI
	var_142_int = 30788; // 0x121 PushI
	var_143_int = 42696; // 0x122 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x123 TObjFunc
	var_144_int = 540667; // 0x125 PushI
	var_145_int = 30790; // 0x126 PushI
	var_146_int = 42697; // 0x127 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x128 TObjFunc
	return 0; // 0x12a Return
	
Label_299:
	var_147_int = 30788; // 0x12b PushI
	var_148_bool = var_7_cvector == var_147_int; // 0x12c Eq
	if(var_148_bool == 0) goto Label_317; // 0x12d JumpB
	var_149_string = ""; // 0x12e PushV
	var_149_string = "Agression"; // 0x12f MovS
	func_169(var_8_bool, var_149_string); // 0x130 NEW_2
	var_150_int = 529333; // 0x132 PushI
	SetMessage(var_150_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_151_int = 540668; // 0x137 PushI
	var_152_int = 42699; // 0x138 PushI
	var_153_int = 42698; // 0x139 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x13a TObjFunc
	return 0; // 0x13c Return
	
Label_317:
	var_154_int = 42699; // 0x13d PushI
	var_155_bool = var_7_cvector == var_154_int; // 0x13e Eq
	if(var_155_bool == 0) goto Label_335; // 0x13f JumpB
	var_156_string = ""; // 0x140 PushV
	var_156_string = "Agression"; // 0x141 MovS
	func_169(var_8_bool, var_156_string); // 0x142 NEW_2
	var_157_int = 540669; // 0x144 PushI
	SetMessage(var_157_int); // 0x145 TObjFunc
	ClearReplies(); // 0x147 TObjFunc
	var_158_int = 529334; // 0x149 PushI
	var_159_int = 30790; // 0x14a PushI
	var_160_int = 30789; // 0x14b PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x14c TObjFunc
	return 0; // 0x14e Return
	
Label_335:
	var_161_int = 30790; // 0x14f PushI
	var_162_bool = var_7_cvector == var_161_int; // 0x150 Eq
	if(var_162_bool == 0) goto Label_358; // 0x151 JumpB
	var_163_string = ""; // 0x152 PushV
	var_163_string = "Doubt"; // 0x153 MovS
	func_169(var_8_bool, var_163_string); // 0x154 NEW_2
	var_164_int = 529335; // 0x156 PushI
	SetMessage(var_164_int); // 0x157 TObjFunc
	ClearReplies(); // 0x159 TObjFunc
	var_165_int = 525636; // 0x15b PushI
	var_166_int = -1; // 0x15c PushI
	var_167_int = 26978; // 0x15d PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x15e TObjFunc
	var_168_int = 525637; // 0x160 PushI
	var_169_int = -1; // 0x161 PushI
	var_170_int = 26979; // 0x162 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x163 TObjFunc
	return 0; // 0x165 Return
	
Label_358:
	var_3_string = 1; // 0x166 TMovB
	var_171_bool = 0; // 0x167 PushV
	func_1244(var_171_bool); // 0x168 NEW_2
	if(var_171_bool == 0) goto Label_366; // 0x16a JumpB
	lshStopAnimation(); // 0x16b Func
	goto Label_368; // 0x16d Jump
	
Label_368:
	return 0; // 0x170 Return
	
Label_366:
	StopAnimation(); // 0x16e Func
	
Label_370:
	return 0; // 0x172 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x17f PushV
	var_10_string = "cleanup"; // 0x180 PushS
	var_11_bool = var_7_string == var_10_string; // 0x181 Eq
	if(var_11_bool == 0) goto Label_398; // 0x182 JumpB
	var_1_object = 1; // 0x183 TMovB
	IsLoaded(var_9_bool); // 0x184 Func
	var_12_bool = var_9_bool == 0; // 0x186 Not
	if(var_12_bool == 0) goto Label_397; // 0x187 JumpB
	var_13_object = Obj(); // 0x188 PushV
	func_982(var_13_object); // 0x189 NEW_2
	RemoveActor(var_13_object); // 0x18b Func
	
Label_397:
	goto Label_402; // 0x18d Jump
	
Label_402:
	return 2; // 0x192 Return
	
Label_398:
	var_16_string = "restore"; // 0x18e PushS
	var_17_bool = var_7_string == var_16_string; // 0x18f Eq
	if(var_17_bool == 0) goto Label_402; // 0x190 JumpB
	var_1_object = 0; // 0x191 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x193 PushT
	if(var_7_object == 0) goto Label_412; // 0x194 JumpB
	var_8_object = Obj(); // 0x195 PushV
	func_982(var_8_object); // 0x196 NEW_2
	RemoveActor(var_8_object); // 0x198 Func
	Hold(); // 0x19a Func
	
Label_412:
	func_527(); // 0x19d NEW_2
	return 0; // 0x19f Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_542(); // 0x1a1 NEW_2
	return 0; // 0x1a3 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x1ea PushI
	var_9_bool = var_7_int == var_8_int; // 0x1eb Eq
	if(var_9_bool == 0) goto Label_526; // 0x1ec JumpB
	func_485(); // 0x1ee NEW_2
	var_11_bool = 0; // 0x1f0 PushV
	var_11_bool = 0; // 0x1f1 MovB
	var_12_bool = 0; // 0x1f2 PushV
	func_699(var_12_bool); // 0x1f3 NEW_2
	if(var_12_bool == 0) goto Label_507; // 0x1f5 JumpB
	var_15_bool = 0; // 0x1f6 PushV
	func_454(var_15_bool); // 0x1f7 NEW_2
	if(var_15_bool == 0) goto Label_507; // 0x1f9 JumpB
	var_11_bool = 1; // 0x1fa MovB
	
Label_507:
	if(var_11_bool == 0) goto Label_520; // 0x1fb JumpB
	var_32_bool = 0; // 0x1fc PushV
	func_434(var_32_bool); // 0x1fd NEW_2
	if(var_32_bool == 0) goto Label_519; // 0x1ff JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x200 PushV
	var_53_object = Obj(); // 0x201 PushV
	func_982(var_53_object); // 0x202 NEW_2
	var_52_object = var_53_object; // 0x203 Mov
	func_849(var_52_object); // 0x205 NEW_2
	
Label_519:
	goto Label_526; // 0x207 Jump
	
Label_526:
	return 0; // 0x20e Return
	
Label_520:
	func_449(var_7_int); // 0x209 NEW_2
	func_476(); // 0x20c NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x22c Push
	if(var_8_bool == 0) goto Label_562; // 0x22d JumpB
	func_476(); // 0x22f NEW_2
	goto Label_566; // 0x231 Jump
	
Label_566:
	return 0; // 0x236 Return
	
Label_562:
	var_14_string = ""; // 0x232 PushV
	var_14_string = "Neutral"; // 0x233 MovS
	func_929(var_14_string); // 0x234 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x237 PushV
	IsOverrideActive(var_9_bool); // 0x238 Func
	var_10_bool = var_9_bool == 0; // 0x23a Not
	if(var_10_bool == 0) goto Label_595; // 0x23b JumpB
	EventDisable(0); // 0x23c EventDisable
	func_667(); // 0x23e NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x240 PushV
	var_12_object = var_7_object; // 0x241 Mov
	func_690(var_12_object); // 0x242 NEW_2
	EventEnable(0); // 0x244 EventEnable
	var_25_object = Obj(); // 0x245 PushV
	var_25_object = var_7_object; // 0x246 Mov
	func_371(var_25_object); // 0x247 NEW_2
	var_271_string = ""; // 0x249 PushV
	var_271_string = "Neutral"; // 0x24a MovS
	func_929(var_271_string); // 0x24b NEW_2
	func_485(); // 0x24e NEW_2
	func_476(); // 0x251 NEW_2
	
Label_595:
	return 2; // 0x253 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_420(var_6_bool); // 0x17c NEW_2
	return 0; // 0x17e Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_704(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1238(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1236(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1240(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1242(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1219(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_982(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_791(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_262_bool = var_36_bool == 0; // 0x3f Not
	if(var_262_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_263_object = Obj(); // 0x46 PushV
	var_263_object = var_27_object; // 0x47 Mov
	func_773(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1153(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x482 PushV
	var_203_string = "ook3BurahIndoor1"; // 0x483 MovS
	func_998(var_202_int, var_203_string); // 0x484 NEW_2
	var_206_int = 0; // 0x486 PushI
	var_207_bool = var_202_int == var_206_int; // 0x487 Eq
	if(var_207_bool == 0) goto Label_1163; // 0x488 JumpB
	var_200_bool = 1; // 0x489 MovB
	return 0; // 0x48a Return
	
Label_1163:
	var_200_bool = 0; // 0x48b MovB
	return 0; // 0x48c Return
}


func_773()
{
	var_264_bool = 0; var_265_bool = 0; // 0x305 PushV
	var_266_bool = 1; // 0x306 PushB
	CameraSwitchToNormal(var_266_bool); // 0x307 Func
	var_267_bool = 0; // 0x309 PushV
	func_1244(var_267_bool); // 0x30a NEW_2
	if(var_267_bool == 0) goto Label_782; // 0x30c JumpB
	goto Label_790; // 0x30d Jump
	
Label_790:
	return 2; // 0x316 Return
	
Label_782:
	var_268_string = "head"; // 0x30e PushS
	HasAnimationTrack(var_265_bool, var_268_string); // 0x30f Func
	var_269_bool = var_265_bool; // 0x311 Push
	if(var_269_bool == 0) goto Label_790; // 0x312 JumpB
	var_270_string = "head"; // 0x313 PushS
	UnlookAsync(var_270_string); // 0x314 Func
}


func_1034(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x40a PushV
	GetGameTime(var_155_float); // 0x40b Func
	var_156_int = 1; // 0x40d PushI
	var_157_int = 0; // 0x40e PushV
	var_158_int = 24; // 0x40f PushI
	var_157_int = var_155_float / var_155_float; // 0x410 Div2
	var_153_int = var_156_int + var_157_int; // 0x411 Add2
	return 2; // 0x412 Return
}


func_1165()
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x48d PushV
	var_21_int = 357; // 0x48e PushI
	var_22_int = 2; // 0x48f PushI
	var_23_int = 525657; // 0x490 PushI
	CreateDiaryEntry(var_20_object, var_21_int, var_22_int, var_23_int); // 0x491 Func
	var_24_bool = 0; var_25_object = Obj(); var_26_int = 0; // 0x493 PushV
	var_25_object = var_20_object; // 0x494 Mov
	var_26_int = 354; // 0x495 MovI
	func_1191(var_24_bool, var_25_object, var_26_int); // 0x496 NEW_2
	return 2; // 0x498 Return
}


func_527()
{
	func_667(); // 0x210 NEW_2
	func_485(); // 0x213 NEW_2
	lshStopSpeech(); // 0x215 Func
	lshStopAnimation(); // 0x217 Func
	StopAsync(); // 0x219 Func
	Hold(); // 0x21b Func
	return 0; // 0x21d Return
}


func_1043(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x413 PushV
	var_34_string = "idle"; // 0x414 MovS
	var_35_int = var_32_int; // 0x415 Push
	if(var_35_int == 0) goto Label_1048; // 0x416 JumpB
	var_34_string = var_34_string + var_32_int; // 0x417 Add2
	
Label_1048:
	var_31_string = var_34_string; // 0x418 Mov
	return 2; // 0x419 Return
}


func_791(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x317 PushV
	var_107_string = "voice_common"; // 0x318 PushS
	GetVariable(var_107_string, var_105_int); // 0x319 Func
	var_108_int = var_105_int; // 0x31b Push
	if(var_108_int == 0) goto Label_829; // 0x31c JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x31d PushV
	var_110_object = var_99_object; // 0x31e Mov
	func_849(var_110_object); // 0x31f NEW_2
	var_139_bool = var_109_bool == 0; // 0x321 Not
	if(var_139_bool == 0) goto Label_811; // 0x322 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x323 PushV
	var_141_object = var_99_object; // 0x324 Mov
	func_886(var_141_object); // 0x325 NEW_2
	var_175_bool = var_140_bool == 0; // 0x327 Not
	if(var_175_bool == 0) goto Label_811; // 0x328 JumpB
	var_98_bool = 0; // 0x329 MovB
	return 4; // 0x32a Return
	
Label_811:
	var_176_int = 2; // 0x32b PushI
	irand(var_106_int, var_176_int); // 0x32c Func
	var_177_int = var_106_int; // 0x32e Push
	if(var_177_int == 0) goto Label_824; // 0x32f JumpB
	var_178_string = "voice_common"; // 0x330 PushS
	var_179_int = 1; // 0x331 PushI
	var_180_int = var_105_int + var_179_int; // 0x332 Add
	var_181_int = 3; // 0x333 PushI
	var_182_int = var_180_int / var_181_int; // 0x334 Mod
	SetVariable(var_178_string, var_182_int); // 0x335 Func
	goto Label_828; // 0x337 Jump
	
Label_828:
	goto Label_847; // 0x33c Jump
	
Label_847:
	var_98_bool = 1; // 0x34f MovB
	return 4; // 0x350 Return
	
Label_824:
	var_183_string = "voice_common"; // 0x338 PushS
	var_184_int = 0; // 0x339 PushI
	SetVariable(var_183_string, var_184_int); // 0x33a Func
	
Label_829:
	var_185_bool = 0; var_186_object = Obj(); // 0x33d PushV
	var_186_object = var_99_object; // 0x33e Mov
	func_886(var_186_object); // 0x33f NEW_2
	var_187_bool = var_185_bool == 0; // 0x341 Not
	if(var_187_bool == 0) goto Label_843; // 0x342 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x343 PushV
	var_189_object = var_99_object; // 0x344 Mov
	func_849(var_189_object); // 0x345 NEW_2
	var_190_bool = var_188_bool == 0; // 0x347 Not
	if(var_190_bool == 0) goto Label_843; // 0x348 JumpB
	var_98_bool = 0; // 0x349 MovB
	return 4; // 0x34a Return
	
Label_843:
	var_191_string = "voice_common"; // 0x34b PushS
	var_192_int = 1; // 0x34c PushI
	SetVariable(var_191_string, var_192_int); // 0x34d Func
}


func_665(var_45_bool)
{
	var_45_bool = 1; // 0x299 MovB
	return 0; // 0x29a Return
}


func_1178(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x49a PushV
	GetDiaryRoot(var_35_object); // 0x49b Func
	var_36_bool = var_35_object == 0; // 0x49d Not
	if(var_36_bool == 0) goto Label_1188; // 0x49e JumpB
	var_37_string = "Can't retrieve diary root"; // 0x49f PushS
	Trace(var_37_string); // 0x4a0 Func
	var_33_object = 0; // 0x4a2 MovB
	return 2; // 0x4a3 Return
	
Label_1188:
	var_33_object = var_35_object; // 0x4a4 Mov
	return 2; // 0x4a5 Return
}


func_1050(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x41a PushV
	var_28_int = 0; // 0x41b MovI
	
Label_1052:
	var_30_string = "all"; // 0x41c PushS
	var_31_string = ""; var_32_int = 0; // 0x41d PushV
	var_32_int = var_28_int; // 0x41e Mov
	func_1043(var_31_string, var_32_int); // 0x41f NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x421 Func
	var_36_bool = var_29_bool == 0; // 0x423 Not
	if(var_36_bool == 0) goto Label_1062; // 0x424 JumpB
	goto Label_1065; // 0x425 Jump
	
Label_1065:
	var_25_int = var_28_int; // 0x429 Mov
	return 4; // 0x42a Return
	
Label_1062:
	var_37_int = 1; // 0x426 PushI
	var_28_int = var_28_int + var_37_int; // 0x427 Add2
	goto Label_1052; // 0x428 Jump
}


func_667()
{
	StopAnimation(); // 0x29b Func
	StopGroup0(); // 0x29d Func
	return 0; // 0x29f Return
}


func_542()
{
	StopGroup0(); // 0x21e Func
	func_485(); // 0x221 NEW_2
	var_8_string = ""; // 0x223 PushV
	var_8_string = "Neutral"; // 0x224 MovS
	func_929(var_8_string); // 0x225 NEW_2
	func_476(); // 0x228 NEW_2
	return 0; // 0x22a Return
}


func_672(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x2a0 PushV
	GetPosition(var_27_cvector); // 0x2a1 Func
	GetPosition(var_28_cvector); // 0x2a3 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2a5 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2a6 Or2
	return 6; // 0x2a7 Return
}


func_929(var_238_string)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0; // 0x3a1 PushV
	lshHasAnimation(var_242_bool, var_238_string); // 0x3a2 Func
	var_245_bool = var_242_bool; // 0x3a4 Push
	if(var_245_bool == 0) goto Label_940; // 0x3a5 JumpB
	lshGetAnimTimes(var_238_string, var_243_float, var_244_float); // 0x3a6 Func
	var_246_bool = 0; // 0x3a8 PushB
	lshPlayAnimation(var_243_float, var_244_float, var_246_bool); // 0x3a9 Func
	goto Label_944; // 0x3ab Jump
	
Label_944:
	return 6; // 0x3b0 Return
	
Label_940:
	var_247_string = "Can't find lsh animation : "; // 0x3ac PushS
	var_248_int = var_247_string + var_238_string; // 0x3ad Add
	Trace(var_248_int); // 0x3ae Func
}


func_420(var_0_object)
{
	var_7_bool = 0; // 0x1a4 PushV
	func_699(var_7_bool); // 0x1a5 NEW_2
	var_10_bool = var_7_bool == 0; // 0x1a7 Not
	if(var_10_bool == 0) goto Label_427; // 0x1a8 JumpB
	Hold(); // 0x1a9 Func
	
Label_427:
	GetDirection(var_0_object); // 0x1ab Func
	
Label_429:
	func_596(); // 0x1ae NEW_2
	goto Label_429; // 0x1b0 Jump
}


func_1191(var_24_bool, var_25_object, var_26_int)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; // 0x4a7 PushV
	var_33_object = Obj(); // 0x4a8 PushV
	func_1178(var_33_object); // 0x4a9 NEW_2
	var_30_object = var_33_object; // 0x4aa Mov
	Find(var_26_int, var_31_object); // 0x4ac ObjFunc
	var_38_bool = var_31_object == 0; // 0x4ae Not
	if(var_38_bool == 0) goto Label_1206; // 0x4af JumpB
	var_39_string = "Can't find diary parent with id: "; // 0x4b0 PushS
	var_40_int = var_39_string + var_26_int; // 0x4b1 Add
	Trace(var_40_int); // 0x4b2 Func
	var_24_bool = 0; // 0x4b4 MovB
	return 6; // 0x4b5 Return
	
Label_1206:
	AddChild(var_25_object); // 0x4b6 ObjFunc
	var_41_int = 7; // 0x4b8 PushI
	SendWorldWndMessage(var_41_int); // 0x4b9 Func
	GetCategory(var_32_int); // 0x4bb ObjFunc
	SetDiarySection(var_32_int); // 0x4bd Func
	var_24_bool = 0; // 0x4bf MovB
	return 6; // 0x4c0 Return
}


func_680(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x2a8 PushV
	GetPosition(var_20_cvector); // 0x2a9 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x2ab Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x2ac PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x2ad PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x2ae Func
	var_15_bool = var_22_bool; // 0x2b0 Mov
	return 6; // 0x2b1 Return
}


func_169(var_2_object, var_212_string)
{
	var_213_bool = 0; // 0xaa PushV
	func_1244(var_213_bool); // 0xab NEW_2
	var_214_bool = var_213_bool == 0; // 0xad Not
	if(var_214_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_215_bool = var_212_string == var_2_object; // 0xb0 Eq
	if(var_215_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_216_string = ""; var_217_bool = 0; // 0xb3 PushV
	var_216_string = var_212_string; // 0xb4 Mov
	var_218_string = ""; // 0xb5 PushS
	var_219_bool = var_212_string == var_218_string; // 0xb6 Eq
	if(var_219_bool == 0) goto Label_186; // 0xb7 JumpB
	var_217_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_945(var_216_string, var_217_bool); // 0xbb NEW_2
	var_2_object = var_212_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_217_bool = 1; // 0xba MovB
}


func_1067()
{
	var_210_string = "ook3BurahIndoor1"; // 0x42c PushS
	var_211_int = 1; // 0x42d PushI
	SetVariable(var_210_string, var_211_int); // 0x42e Func
	return 0; // 0x430 Return
}


func_945(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; // 0x3b1 PushV
	lshHasAnimation(var_223_bool, var_216_string); // 0x3b2 Func
	var_226_bool = var_223_bool; // 0x3b4 Push
	if(var_226_bool == 0) goto Label_955; // 0x3b5 JumpB
	lshGetAnimTimes(var_216_string, var_224_float, var_225_float); // 0x3b6 Func
	lshPlayAnimation(var_224_float, var_225_float, var_217_bool); // 0x3b8 Func
	goto Label_959; // 0x3ba Jump
	
Label_959:
	return 6; // 0x3bf Return
	
Label_955:
	var_227_string = "Can't find lsh animation : "; // 0x3bb PushS
	var_228_int = var_227_string + var_216_string; // 0x3bc Add
	Trace(var_228_int); // 0x3bd Func
}


func_1073()
{
	var_89_string = "k3q04"; // 0x432 PushS
	var_90_int = 3; // 0x433 PushI
	SetVariable(var_89_string, var_90_int); // 0x434 Func
	func_1165(); // 0x437 NEW_2
	return 0; // 0x439 Return
}


func_690(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x2b2 PushV
	GetPosition(var_14_cvector); // 0x2b3 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x2b5 PushV
	var_16_cvector = var_14_cvector; // 0x2b6 Mov
	func_680(var_15_bool, var_16_cvector); // 0x2b7 NEW_2
	var_11_bool = var_15_bool; // 0x2b8 Mov
	return 2; // 0x2ba Return
}


func_434(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x1b2 PushV
	var_35_string = "player"; // 0x1b3 PushS
	FindActor(var_34_object, var_35_string); // 0x1b4 Func
	var_36_bool = var_34_object == 0; // 0x1b6 Not
	if(var_36_bool == 0) goto Label_442; // 0x1b7 JumpB
	var_32_bool = 0; // 0x1b8 MovB
	return 2; // 0x1b9 Return
	
Label_442:
	var_37_bool = 0; var_38_object = Obj(); // 0x1ba PushV
	var_38_object = var_34_object; // 0x1bb Mov
	func_690(var_38_object); // 0x1bc NEW_2
	var_32_bool = var_37_bool; // 0x1bd Mov
	return 2; // 0x1bf Return
}


func_1082()
{
	var_15_string = "k3q04"; // 0x43b PushS
	var_16_int = 3; // 0x43c PushI
	SetVariable(var_15_string, var_16_int); // 0x43d Func
	var_17_string = "k3q04Promise"; // 0x43f PushS
	var_18_int = 1; // 0x440 PushI
	SetVariable(var_17_string, var_18_int); // 0x441 Func
	func_1165(); // 0x444 NEW_2
	return 0; // 0x446 Return
}


func_699(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2bb PushV
	IsLoaded(var_9_bool); // 0x2bc Func
	var_7_bool = var_9_bool; // 0x2be Mov
	return 2; // 0x2bf Return
}


func_704(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x2c0 PushV
	GetPosition(var_50_cvector); // 0x2c1 ObjFunc
	GetEyesHeight(var_49_float); // 0x2c3 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2c5 PushE
	var_58_float = var_58_float + var_49_float; // 0x2c6 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2c7 PopE
	GetPosition(var_51_cvector); // 0x2c8 Func
	GetEyesHeight(var_49_float); // 0x2ca Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x2cc PushE
	var_59_float = var_59_float + var_49_float; // 0x2cd Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x2ce PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x2cf Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x2d0 PushE
	var_60_float = 0; // 0x2d1 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x2d2 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x2d3 Or
	var_62_float = sqrt(var_61_int); // 0x2d4 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x2d5 Div2
	var_53_cvector = -var_52_cvector; // 0x2d6 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x2d7 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x2d8 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x2d9 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x2da Xor2
	func_988(var_64_cvector, var_65_cvector); // 0x2db NEW_2
	var_72_int = 25; // 0x2dd PushI
	var_73_float = var_64_cvector * var_72_int; // 0x2de Mult
	var_74_int = var_63_float + var_73_float; // 0x2df Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x2e0 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x2e1 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x2e2 Add2
	IsOverrideActive(var_56_bool); // 0x2e3 Func
	var_76_bool = var_56_bool; // 0x2e5 Push
	if(var_76_bool == 0) goto Label_745; // 0x2e6 JumpB
	var_37_bool = 0; // 0x2e7 MovB
	return 18; // 0x2e8 Return
	
Label_745:
	StopWorld(); // 0x2e9 Func
	var_77_bool = 1; // 0x2eb PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x2ec Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x2ee PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x2ef PushE
	Rotate(var_78_float, var_79_float); // 0x2f0 Func
	var_80_bool = 0; // 0x2f2 PushV
	func_1244(var_80_bool); // 0x2f3 NEW_2
	if(var_80_bool == 0) goto Label_759; // 0x2f5 JumpB
	goto Label_767; // 0x2f6 Jump
	
Label_767:
	CameraWaitForPlayFinish(); // 0x2ff Func
	ResumeWorld(); // 0x301 Func
	var_37_bool = 1; // 0x303 MovB
	return 18; // 0x304 Return
	
Label_759:
	var_81_string = "head"; // 0x2f7 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x2f8 Func
	var_82_bool = var_57_bool; // 0x2fa Push
	if(var_82_bool == 0) goto Label_767; // 0x2fb JumpB
	var_83_string = "head"; // 0x2fc PushS
	LookAsyncCamera(var_83_string); // 0x2fd Func
}


func_449(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1c1 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1c2 PushE
	RotateAsync(var_84_float, var_85_float); // 0x1c3 Func
	return 0; // 0x1c5 Return
}


func_960(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x3c0 PushV
	var_136_bool = 0; // 0x3c1 PushV
	func_1244(var_136_bool); // 0x3c2 NEW_2
	if(var_136_bool == 0) goto Label_973; // 0x3c4 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x3c5 Func
	var_137_bool = var_135_bool; // 0x3c7 Push
	if(var_137_bool == 0) goto Label_973; // 0x3c8 JumpB
	lshPlaySpeech(var_133_string); // 0x3c9 Func
	var_132_bool = 1; // 0x3cb MovB
	return 2; // 0x3cc Return
	
Label_973:
	var_132_bool = 0; // 0x3cd MovB
	return 2; // 0x3ce Return
}


func_1219(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x4c3 PushV
	var_92_string = "branch"; // 0x4c4 PushS
	GetVariable(var_92_string, var_91_int); // 0x4c5 Func
	var_93_int = 0; // 0x4c7 PushI
	var_94_bool = var_91_int == var_93_int; // 0x4c8 Eq
	if(var_94_bool == 0) goto Label_1229; // 0x4c9 JumpB
	var_89_int = 1; // 0x4ca MovI
	return 2; // 0x4cb Return
	
Label_1229:
	var_95_int = 1; // 0x4cd PushI
	var_96_bool = var_91_int == var_95_int; // 0x4ce Eq
	if(var_96_bool == 0) goto Label_1234; // 0x4cf JumpB
	var_89_int = 2; // 0x4d0 MovI
	return 2; // 0x4d1 Return
	
Label_1234:
	var_89_int = 3; // 0x4d2 MovI
	return 2; // 0x4d3 Return
}


func_454(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x1c6 PushV
	var_20_string = "player"; // 0x1c7 PushS
	FindActor(var_18_object, var_20_string); // 0x1c8 Func
	var_21_bool = var_18_object == 0; // 0x1ca Not
	if(var_21_bool == 0) goto Label_462; // 0x1cb JumpB
	var_15_bool = 0; // 0x1cc MovB
	return 4; // 0x1cd Return
	
Label_462:
	var_22_float = 0; var_23_object = Obj(); // 0x1ce PushV
	var_23_object = var_18_object; // 0x1cf Mov
	func_672(var_23_object); // 0x1d0 NEW_2
	var_30_float = 90000.0; // 0x1d2 PushF
	var_31_bool = var_22_float > var_30_float; // 0x1d3 GT
	if(var_31_bool == 0) goto Label_471; // 0x1d4 JumpB
	var_15_bool = 0; // 0x1d5 MovB
	return 4; // 0x1d6 Return
	
Label_471:
	CanSee(var_19_bool, var_18_object); // 0x1d7 Func
	var_15_bool = var_19_bool; // 0x1d9 Mov
	return 4; // 0x1da Return
}


func_1095(var_42_object)
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x447 PushV
	var_46_string = "grass combination (good) is given"; // 0x448 PushS
	Trace(var_46_string); // 0x449 Func
	CreateInvItem(var_45_object); // 0x44b Func
	var_47_string = "grass_combination"; // 0x44d PushS
	SetItemName(var_47_string); // 0x44e ObjFunc
	var_48_string = "im_inc"; // 0x450 PushS
	var_49_float = 0.4; // 0x451 PushF
	SetProperty(var_48_string, var_49_float); // 0x452 ObjFunc
	var_50_string = "hl_inc"; // 0x454 PushS
	var_51_float = -0.01; // 0x455 PushF
	SetProperty(var_50_string, var_51_float); // 0x456 ObjFunc
	var_52_string = "tr_inc"; // 0x458 PushS
	var_53_float = 0.03; // 0x459 PushF
	SetProperty(var_52_string, var_53_float); // 0x45a ObjFunc
	var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; // 0x45c PushV
	var_54_object = var_42_object; // 0x45d Mov
	var_55_object = var_45_object; // 0x45e Mov
	var_56_int = 1; // 0x45f MovI
	func_1015(var_55_object, var_56_int); // 0x460 NEW_2
	return 2; // 0x462 Return
}


func_975()
{
	var_10_bool = 0; // 0x3cf PushV
	func_1244(var_10_bool); // 0x3d0 NEW_2
	if(var_10_bool == 0) goto Label_981; // 0x3d2 JumpB
	lshStopSpeech(); // 0x3d3 Func
	
Label_981:
	return 0; // 0x3d5 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_139; // 0x56 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x57 PushV
	var_201_object = var_1_object; // 0x58 MovT
	func_1153(var_201_object); // 0x59 NEW_2
	if(var_200_bool == 0) goto Label_117; // 0x5b JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0x5c PushV
	var_208_object = var_1_object; // 0x5d MovT
	var_209_object = var_0_object; // 0x5e MovT
	func_1067(); // 0x5f NEW_2
	var_212_string = ""; // 0x61 PushV
	var_212_string = "Sorrow"; // 0x62 MovS
	func_169(var_194_object, var_212_string); // 0x63 NEW_2
	var_229_int = 525635; // 0x65 PushI
	SetMessage(var_229_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_230_int = 529332; // 0x6a PushI
	var_231_int = 30788; // 0x6b PushI
	var_232_int = 30787; // 0x6c PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x6d TObjFunc
	var_233_int = 540664; // 0x6f PushI
	var_234_int = 42695; // 0x70 PushI
	var_235_int = 42694; // 0x71 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x72 TObjFunc
	goto Label_139; // 0x74 Jump
	
Label_139:
	var_236_bool = 0; // 0x8b PushV
	func_1244(var_236_bool); // 0x8c NEW_2
	if(var_236_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_237_string = var_3_string; // 0x91 PushT
	if(var_237_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_238_string = ""; // 0x94 PushV
	var_238_string = var_2_object; // 0x95 MovT
	func_929(var_238_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_249_string = "all"; // 0x9a PushS
	var_250_string = "idle"; // 0x9b PushS
	PlayAnimation(var_249_string, var_250_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_251_string = var_3_string; // 0xa0 PushT
	if(var_251_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_252_string = "all"; // 0xa3 PushS
	var_253_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_252_string, var_253_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_117:
	var_254_string = ""; // 0x75 PushV
	var_254_string = "Neutral"; // 0x76 MovS
	func_169(var_194_object, var_254_string); // 0x77 NEW_2
	var_255_int = 525638; // 0x79 PushI
	SetMessage(var_255_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_256_int = 525639; // 0x7e PushI
	var_257_int = -1; // 0x7f PushI
	var_258_int = 26981; // 0x80 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x81 TObjFunc
	var_259_int = 529336; // 0x83 PushI
	var_260_int = -1; // 0x84 PushI
	var_261_int = 30791; // 0x85 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_849(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x351 PushV
	var_116_string = "c"; // 0x352 MovS
	var_117_int = 0; // 0x353 MovI
	
Label_852:
	var_121_int = 1; // 0x354 PushI
	if(var_121_int == 0) goto Label_865; // 0x355 JumpB
	var_122_int = 1; // 0x356 PushI
	var_123_int = var_117_int + var_122_int; // 0x357 Add
	var_124_int = var_116_string + var_123_int; // 0x358 Add
	HasProperty(var_124_int, var_118_bool); // 0x359 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x35b Not
	if(var_125_bool == 0) goto Label_862; // 0x35c JumpB
	goto Label_865; // 0x35d Jump
	
Label_865:
	var_126_bool = var_117_int == 0; // 0x361 Not
	if(var_126_bool == 0) goto Label_869; // 0x362 JumpB
	var_109_bool = 0; // 0x363 MovB
	return 10; // 0x364 Return
	
Label_869:
	var_119_int = 0; // 0x365 MovI
	var_127_int = 1; // 0x366 PushI
	var_128_bool = var_117_int > var_127_int; // 0x367 GT
	if(var_128_bool == 0) goto Label_875; // 0x368 JumpB
	irand(var_119_int, var_117_int); // 0x369 Func
	
Label_875:
	var_129_int = 1; // 0x36b PushI
	var_130_int = var_119_int + var_129_int; // 0x36c Add
	var_131_int = var_116_string + var_130_int; // 0x36d Add
	GetProperty(var_131_int, var_120_string); // 0x36e ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x370 PushV
	var_133_string = var_120_string; // 0x371 Mov
	func_960(var_132_bool, var_133_string); // 0x372 NEW_2
	var_109_bool = var_132_bool; // 0x373 Mov
	return 10; // 0x375 Return
	
Label_862:
	var_138_int = 1; // 0x35e PushI
	var_117_int = var_117_int + var_138_int; // 0x35f Add2
	goto Label_852; // 0x360 Jump
}


func_1236(var_86_int)
{
	var_86_int = 515592; // 0x4d4 MovI
	return 0; // 0x4d5 Return
}


func_596()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x254 PushV
	WaitForAnimEnd(); // 0x255 Func
	var_23_bool = 0; // 0x257 PushV
	func_699(var_23_bool); // 0x258 NEW_2
	var_24_bool = var_23_bool == 0; // 0x25a Not
	if(var_24_bool == 0) goto Label_605; // 0x25b JumpB
	return 12; // 0x25c Return
	
Label_605:
	var_25_int = 0; // 0x25d PushV
	func_1050(var_25_int); // 0x25e NEW_2
	var_17_int = var_25_int; // 0x25f Mov
	var_18_int = 0; // 0x261 MovI
	
Label_610:
	var_38_bool = 0; // 0x262 PushV
	var_38_bool = 0; // 0x263 MovB
	var_39_int = 5; // 0x264 PushI
	var_40_bool = var_18_int < var_39_int; // 0x265 LT
	if(var_40_bool == 0) goto Label_620; // 0x266 JumpB
	var_41_bool = 0; // 0x267 PushV
	func_699(var_41_bool); // 0x268 NEW_2
	if(var_41_bool == 0) goto Label_620; // 0x26a JumpB
	var_38_bool = 1; // 0x26b MovB
	
Label_620:
	if(var_38_bool == 0) goto Label_662; // 0x26c JumpB
	var_42_bool = var_17_int == 0; // 0x26d Not
	if(var_42_bool == 0) goto Label_630; // 0x26e JumpB
	var_43_int = 3; // 0x26f PushI
	Sleep(var_43_int, var_19_bool); // 0x270 Func
	var_44_bool = var_19_bool == 0; // 0x272 Not
	if(var_44_bool == 0) goto Label_629; // 0x273 JumpB
	goto Label_662; // 0x274 Jump
	
Label_662:
	ResetAAS(); // 0x296 Func
	return 12; // 0x298 Return
	
Label_629:
	goto Label_651; // 0x275 Jump
	
Label_651:
	var_45_bool = 0; // 0x28b PushV
	func_665(var_45_bool); // 0x28c NEW_2
	var_46_bool = var_45_bool == 0; // 0x28e Not
	if(var_46_bool == 0) goto Label_657; // 0x28f JumpB
	goto Label_662; // 0x290 Jump
	
Label_657:
	ResetAAS(); // 0x291 Func
	var_47_int = 1; // 0x293 PushI
	var_18_int = var_18_int + var_47_int; // 0x294 Add2
	goto Label_610; // 0x295 Jump
	
Label_630:
	irand(var_20_int, var_17_int); // 0x276 Func
	var_48_int = 5; // 0x278 PushI
	irand(var_21_int, var_48_int); // 0x279 Func
	var_49_int = 0; // 0x27b PushI
	var_50_bool = var_21_int != var_49_int; // 0x27c Neq
	if(var_50_bool == 0) goto Label_639; // 0x27d JumpB
	var_20_int = 0; // 0x27e MovI
	
Label_639:
	var_51_string = "all"; // 0x27f PushS
	var_52_string = ""; var_53_int = 0; // 0x280 PushV
	var_53_int = var_20_int; // 0x281 Mov
	func_1043(var_52_string, var_53_int); // 0x282 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x284 Func
	WaitForAnimEnd(var_22_bool); // 0x286 Func
	var_54_bool = var_22_bool == 0; // 0x288 Not
	if(var_54_bool == 0) goto Label_651; // 0x289 JumpB
	goto Label_662; // 0x28a Jump
}


func_1238(var_85_int)
{
	var_85_int = 511961; // 0x4d6 MovI
	return 0; // 0x4d7 Return
}


func_982(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x3d6 PushV
	self(var_102_object); // 0x3d7 Func
	var_100_object = var_102_object; // 0x3d9 Mov
	return 2; // 0x3da Return
}


func_1240(var_87_string)
{
	var_87_string = "ui/NPC_Burah.png"; // 0x4d8 MovS
	return 0; // 0x4d9 Return
}


func_1242(var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png"; // 0x4da MovS
	return 0; // 0x4db Return
}


func_1244(var_80_bool)
{
	var_80_bool = 1; // 0x4dc MovB
	return 0; // 0x4dd Return
}


func_476()
{
	var_273_float = 0; var_274_float = 0; // 0x1dc PushV
	var_275_int = 8; // 0x1dd PushI
	var_276_int = 16; // 0x1de PushI
	rand(var_274_float, var_275_int, var_276_int); // 0x1df Func
	var_277_int = 10; // 0x1e1 PushI
	SetTimer(var_277_int, var_274_float); // 0x1e2 Func
	return 2; // 0x1e4 Return
}


func_988(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x3dc PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x3dd Or
	var_68_float = sqrt(var_69_int); // 0x3de Sqrt2
	var_70_float = 0.0; // 0x3df PushF
	var_71_bool = var_68_float < var_70_float; // 0x3e0 LT
	if(var_71_bool == 0) goto Label_996; // 0x3e1 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x3e2 MovV
	return 2; // 0x3e3 Return
	
Label_996:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x3e4 Div2
	return 2; // 0x3e5 Return
}


func_1124(var_70_object)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x464 PushV
	var_74_string = "grass combination (bad) is given"; // 0x465 PushS
	Trace(var_74_string); // 0x466 Func
	CreateInvItem(var_73_object); // 0x468 Func
	var_75_string = "grass_combination"; // 0x46a PushS
	SetItemName(var_75_string); // 0x46b ObjFunc
	var_76_string = "im_inc"; // 0x46d PushS
	var_77_float = 0.2; // 0x46e PushF
	SetProperty(var_76_string, var_77_float); // 0x46f ObjFunc
	var_78_string = "hl_inc"; // 0x471 PushS
	var_79_float = -0.08; // 0x472 PushF
	SetProperty(var_78_string, var_79_float); // 0x473 ObjFunc
	var_80_string = "tr_inc"; // 0x475 PushS
	var_81_float = 0.12; // 0x476 PushF
	SetProperty(var_80_string, var_81_float); // 0x477 ObjFunc
	var_82_object = Obj(); var_83_object = Obj(); var_84_int = 0; // 0x479 PushV
	var_82_object = var_70_object; // 0x47a Mov
	var_83_object = var_73_object; // 0x47b Mov
	var_84_int = 1; // 0x47c MovI
	func_1015(var_83_object, var_84_int); // 0x47d NEW_2
	return 2; // 0x47f Return
}


func_485()
{
	var_272_int = 10; // 0x1e5 PushI
	KillTimer(var_272_int); // 0x1e6 Func
	return 0; // 0x1e8 Return
}


func_998(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x3e6 PushV
	GetVariable(var_203_string, var_205_int); // 0x3e7 Func
	var_202_int = var_205_int; // 0x3e9 Mov
	return 2; // 0x3ea Return
}


func_1003(var_65_int, var_66_int)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x3eb PushV
	CreateIntVector(var_68_object); // 0x3ec Func
	add(var_65_int); // 0x3ee ObjFunc
	add(var_66_int); // 0x3f0 ObjFunc
	var_69_int = 3; // 0x3f2 PushI
	SendWorldWndMessage(var_69_int, var_68_object); // 0x3f3 Func
	return 2; // 0x3f5 Return
}


func_371(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x174 PushV
	var_27_object = var_25_object; // 0x175 Mov
	TaskCall(0); // 0x176 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x177 NEW_2
	TaskReturn(); // 0x178 TaskReturn
	return 0; // 0x17a Return
}


func_886(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x376 PushV
	var_152_string = "d"; // 0x377 PushS
	var_153_int = 0; // 0x378 PushV
	func_1034(var_153_int); // 0x379 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x37b Add
	var_160_string = "m"; // 0x37c PushS
	var_147_string = var_159_int + var_160_string; // 0x37d Add2
	var_148_int = 0; // 0x37e MovI
	
Label_895:
	var_161_int = 1; // 0x37f PushI
	if(var_161_int == 0) goto Label_908; // 0x380 JumpB
	var_162_int = 1; // 0x381 PushI
	var_163_int = var_148_int + var_162_int; // 0x382 Add
	var_164_int = var_147_string + var_163_int; // 0x383 Add
	HasProperty(var_164_int, var_149_bool); // 0x384 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x386 Not
	if(var_165_bool == 0) goto Label_905; // 0x387 JumpB
	goto Label_908; // 0x388 Jump
	
Label_908:
	var_166_bool = var_148_int == 0; // 0x38c Not
	if(var_166_bool == 0) goto Label_912; // 0x38d JumpB
	var_140_bool = 0; // 0x38e MovB
	return 10; // 0x38f Return
	
Label_912:
	var_150_int = 0; // 0x390 MovI
	var_167_int = 1; // 0x391 PushI
	var_168_bool = var_148_int > var_167_int; // 0x392 GT
	if(var_168_bool == 0) goto Label_918; // 0x393 JumpB
	irand(var_150_int, var_148_int); // 0x394 Func
	
Label_918:
	var_169_int = 1; // 0x396 PushI
	var_170_int = var_150_int + var_169_int; // 0x397 Add
	var_171_int = var_147_string + var_170_int; // 0x398 Add
	GetProperty(var_171_int, var_151_string); // 0x399 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x39b PushV
	var_173_string = var_151_string; // 0x39c Mov
	func_960(var_172_bool, var_173_string); // 0x39d NEW_2
	var_140_bool = var_172_bool; // 0x39e Mov
	return 10; // 0x3a0 Return
	
Label_905:
	var_174_int = 1; // 0x389 PushI
	var_148_int = var_148_int + var_174_int; // 0x38a Add2
	goto Label_895; // 0x38b Jump
}


func_1015(var_55_object, var_56_int)
{
	var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; // 0x3f7 PushV
	GetItemID(var_60_int); // 0x3f8 ObjFunc
	var_63_string = "Category"; // 0x3fa PushS
	GetInvItemProperty(var_61_int, var_60_int, var_63_string); // 0x3fb Func
	AddItem(var_62_bool, var_55_object, var_61_int, var_56_int); // 0x3fd ObjFunc
	var_64_bool = var_62_bool == 0; // 0x3ff Not
	if(var_64_bool == 0) goto Label_1028; // 0x400 JumpB
	DropItems(var_55_object, var_56_int); // 0x401 ObjFunc
	goto Label_1033; // 0x403 Jump
	
Label_1033:
	return 6; // 0x409 Return
	
Label_1028:
	var_65_int = 0; var_66_int = 0; // 0x404 PushV
	var_65_int = var_60_int; // 0x405 Mov
	var_66_int = var_56_int; // 0x406 Mov
	func_1003(var_65_int, var_66_int); // 0x407 NEW_2
}


