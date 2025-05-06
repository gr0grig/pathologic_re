task_0_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	func_149(var_11_string, var_12_bool); // 0x8 NEW_2
	var_16_object = Obj(); // 0xa PushV
	var_16_object = var_12_bool; // 0xb Mov
	func_1224(var_16_object); // 0xc NEW_2
	return 0; // 0xe Return
}


task_0_event_26(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	var_13_string = "cleanup"; // 0x36 PushS
	var_14_bool = var_12_bool == var_13_string; // 0x37 Eq
	if(var_14_bool == 0) goto Label_60; // 0x38 JumpB
	func_33(var_12_bool); // 0x3a NEW_2
	
Label_60:
	return 0; // 0x3c Return
}


task_0_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_bool = var_6_bool; // 0x3d PushT
	if(var_12_bool == 0) goto Label_66; // 0x3e JumpB
	func_149(var_10_string, var_11_bool); // 0x40 NEW_2
	
Label_66:
	var_16_bool = 0; // 0x42 PushV
	var_16_bool = 0; // 0x43 MovB
	var_17_bool = var_5_bool; // 0x44 PushT
	if(var_17_bool == 0) goto Label_75; // 0x45 JumpB
	var_18_bool = 0; // 0x46 PushV
	func_82(var_18_bool); // 0x47 NEW_2
	if(var_18_bool == 0) goto Label_75; // 0x49 JumpB
	var_16_bool = 1; // 0x4a MovB
	
Label_75:
	if(var_16_bool == 0) goto Label_81; // 0x4b JumpB
	var_19_object = Obj(); // 0x4c PushV
	func_815(var_19_object); // 0x4d NEW_2
	RemoveActor(var_19_object); // 0x4f Func
	
Label_81:
	return 0; // 0x51 Return
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool)
{
	var_13_int = 10; // 0x7f PushI
	var_14_bool = var_12_bool == var_13_int; // 0x80 Eq
	if(var_14_bool == 0) goto Label_148; // 0x81 JumpB
	var_15_bool = 0; // 0x82 PushV
	func_111(var_10_object, var_11_string, var_12_bool, var_15_bool); // 0x83 NEW_2
	if(var_15_bool == 0) goto Label_142; // 0x85 JumpB
	var_28_bool = var_2_bool == 0; // 0x86 Not
	if(var_28_bool == 0) goto Label_141; // 0x87 JumpB
	var_29_object = Obj(); // 0x88 PushV
	var_29_object = var_4_object; // 0x89 MovT
	func_797(var_29_object); // 0x8a NEW_2
	var_2_bool = 1; // 0x8c TMovB
	
Label_141:
	goto Label_148; // 0x8d Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_142:
	var_36_bool = var_2_bool; // 0x8e PushT
	if(var_36_bool == 0) goto Label_148; // 0x8f JumpB
	var_37_string = "head"; // 0x90 PushS
	UnlookAsync(var_37_string); // 0x91 Func
	var_2_bool = 0; // 0x93 TMovB
}


task_2_event_11(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int)
{
	var_14_int = 1; // 0x1d5 PushI
	if(var_14_int == 0) goto Label_665; // 0x1d6 JumpB
	func_808(); // 0x1d8 NEW_2
	var_16_int = 31800; // 0x1da PushI
	var_17_bool = var_13_int == var_16_int; // 0x1db Eq
	if(var_17_bool == 0) goto Label_487; // 0x1dc JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0x1dd PushV
	var_18_object = var_1_int; // 0x1de MovT
	var_19_object = var_0_int; // 0x1df MovT
	func_942(); // 0x1e0 NEW_2
	var_67_object = Obj(); var_68_object = Obj(); // 0x1e2 PushV
	var_67_object = var_1_int; // 0x1e3 MovT
	var_68_object = var_0_int; // 0x1e4 MovT
	func_982(); // 0x1e5 NEW_2
	
Label_487:
	var_93_int = 31802; // 0x1e7 PushI
	var_94_bool = var_13_int == var_93_int; // 0x1e8 Eq
	if(var_94_bool == 0) goto Label_495; // 0x1e9 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x1ea PushV
	var_95_object = var_1_int; // 0x1eb MovT
	var_96_object = var_0_int; // 0x1ec MovT
	func_970(); // 0x1ed NEW_2
	
Label_495:
	var_99_int = 31804; // 0x1ef PushI
	var_100_bool = var_13_int == var_99_int; // 0x1f0 Eq
	if(var_100_bool == 0) goto Label_508; // 0x1f1 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0x1f2 PushV
	var_101_object = var_1_int; // 0x1f3 MovT
	var_102_object = var_0_int; // 0x1f4 MovT
	func_931(var_102_object); // 0x1f5 NEW_2
	var_125_object = Obj(); var_126_object = Obj(); // 0x1f7 PushV
	var_125_object = var_1_int; // 0x1f8 MovT
	var_126_object = var_0_int; // 0x1f9 MovT
	func_976(); // 0x1fa NEW_2
	
Label_508:
	var_129_int = 31806; // 0x1fc PushI
	var_130_bool = var_13_int == var_129_int; // 0x1fd Eq
	if(var_130_bool == 0) goto Label_521; // 0x1fe JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x1ff PushV
	var_131_object = var_1_int; // 0x200 MovT
	var_132_object = var_0_int; // 0x201 MovT
	func_931(var_132_object); // 0x202 NEW_2
	var_133_object = Obj(); var_134_object = Obj(); // 0x204 PushV
	var_133_object = var_1_int; // 0x205 MovT
	var_134_object = var_0_int; // 0x206 MovT
	func_976(); // 0x207 NEW_2
	
Label_521:
	var_135_int = 31888; // 0x209 PushI
	var_136_bool = var_12_int == var_135_int; // 0x20a Eq
	if(var_136_bool == 0) goto Label_609; // 0x20b JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x20c PushV
	var_138_object = var_1_int; // 0x20d MovT
	func_1091(var_138_object); // 0x20e NEW_2
	var_145_bool = var_137_bool == 0; // 0x210 Not
	if(var_145_bool == 0) goto Label_545; // 0x211 JumpB
	var_146_string = ""; // 0x212 PushV
	var_146_string = "Neutral"; // 0x213 MovS
	func_446(var_13_int, var_146_string); // 0x214 NEW_2
	var_163_int = 530541; // 0x216 PushI
	SetMessage(var_163_int); // 0x217 TObjFunc
	ClearReplies(); // 0x219 TObjFunc
	var_164_int = 530542; // 0x21b PushI
	var_165_int = -1; // 0x21c PushI
	var_166_int = 31889; // 0x21d PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x21e TObjFunc
	return 0; // 0x220 Return
	
Label_545:
	var_167_bool = 0; var_168_object = Obj(); // 0x221 PushV
	var_168_object = var_1_int; // 0x222 MovT
	func_1067(var_168_object); // 0x223 NEW_2
	if(var_167_bool == 0) goto Label_565; // 0x225 JumpB
	var_173_string = ""; // 0x226 PushV
	var_173_string = "Neutral"; // 0x227 MovS
	func_446(var_13_int, var_173_string); // 0x228 NEW_2
	var_174_int = 530427; // 0x22a PushI
	SetMessage(var_174_int); // 0x22b TObjFunc
	ClearReplies(); // 0x22d TObjFunc
	var_175_int = 530428; // 0x22f PushI
	var_176_int = -1; // 0x230 PushI
	var_177_int = 31800; // 0x231 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x232 TObjFunc
	return 0; // 0x234 Return
	
Label_565:
	var_178_string = ""; // 0x235 PushV
	var_178_string = "Neutral"; // 0x236 MovS
	func_446(var_13_int, var_178_string); // 0x237 NEW_2
	var_179_int = 530429; // 0x239 PushI
	SetMessage(var_179_int); // 0x23a TObjFunc
	ClearReplies(); // 0x23c TObjFunc
	var_180_bool = 0; // 0x23e PushV
	var_180_bool = 0; // 0x23f MovB
	var_181_bool = 0; // 0x240 PushV
	var_181_bool = 0; // 0x241 MovB
	var_182_bool = 0; var_183_object = Obj(); // 0x242 PushV
	var_183_object = var_1_int; // 0x243 MovT
	func_1079(var_183_object); // 0x244 NEW_2
	if(var_182_bool == 0) goto Label_589; // 0x246 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x247 PushV
	var_189_object = var_1_int; // 0x248 MovT
	func_1043(var_189_object); // 0x249 NEW_2
	if(var_188_bool == 0) goto Label_589; // 0x24b JumpB
	var_181_bool = 1; // 0x24c MovB
	
Label_589:
	if(var_181_bool == 0) goto Label_597; // 0x24d JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0x24e PushV
	var_195_object = var_1_int; // 0x24f MovT
	func_1055(var_195_object); // 0x250 NEW_2
	var_200_bool = var_194_bool == 0; // 0x252 Not
	if(var_200_bool == 0) goto Label_597; // 0x253 JumpB
	var_180_bool = 1; // 0x254 MovB
	
Label_597:
	if(var_180_bool == 0) goto Label_603; // 0x255 JumpB
	var_201_int = 530430; // 0x256 PushI
	var_202_int = 31803; // 0x257 PushI
	var_203_int = 31802; // 0x258 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x259 TObjFunc
	
Label_603:
	var_204_int = 530435; // 0x25b PushI
	var_205_int = -1; // 0x25c PushI
	var_206_int = 31807; // 0x25d PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x25e TObjFunc
	return 0; // 0x260 Return
	
Label_609:
	var_207_int = 31803; // 0x261 PushI
	var_208_bool = var_12_int == var_207_int; // 0x262 Eq
	if(var_208_bool == 0) goto Label_653; // 0x263 JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x264 PushV
	var_210_object = var_1_int; // 0x265 MovT
	func_998(var_210_object); // 0x266 NEW_2
	if(var_209_bool == 0) goto Label_632; // 0x268 JumpB
	var_230_string = ""; // 0x269 PushV
	var_230_string = "Neutral"; // 0x26a MovS
	func_446(var_13_int, var_230_string); // 0x26b NEW_2
	var_231_int = 530431; // 0x26d PushI
	SetMessage(var_231_int); // 0x26e TObjFunc
	ClearReplies(); // 0x270 TObjFunc
	var_232_int = 530432; // 0x272 PushI
	var_233_int = -1; // 0x273 PushI
	var_234_int = 31804; // 0x274 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x275 TObjFunc
	return 0; // 0x277 Return
	
Label_632:
	var_235_bool = 0; var_236_object = Obj(); // 0x278 PushV
	var_236_object = var_1_int; // 0x279 MovT
	func_998(var_236_object); // 0x27a NEW_2
	var_237_bool = var_235_bool == 0; // 0x27c Not
	if(var_237_bool == 0) goto Label_653; // 0x27d JumpB
	var_238_string = ""; // 0x27e PushV
	var_238_string = "Neutral"; // 0x27f MovS
	func_446(var_13_int, var_238_string); // 0x280 NEW_2
	var_239_int = 530433; // 0x282 PushI
	SetMessage(var_239_int); // 0x283 TObjFunc
	ClearReplies(); // 0x285 TObjFunc
	var_240_int = 530434; // 0x287 PushI
	var_241_int = -1; // 0x288 PushI
	var_242_int = 31806; // 0x289 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x28a TObjFunc
	return 0; // 0x28c Return
	
Label_653:
	var_3_bool = 1; // 0x28d TMovB
	var_243_bool = 0; // 0x28e PushV
	func_929(var_243_bool); // 0x28f NEW_2
	if(var_243_bool == 0) goto Label_661; // 0x291 JumpB
	lshStopAnimation(); // 0x292 Func
	goto Label_663; // 0x294 Jump
	
Label_663:
	return 0; // 0x297 Return
	
Label_661:
	StopAnimation(); // 0x295 Func
	
Label_665:
	return 0; // 0x299 Return
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x0 PushV
	var_12_float = 300; // 0x1 MovI
	var_13_float = 100; // 0x2 MovI
	func_15(var_11_bool, var_12_float, var_13_float); // 0x3 NEW_2
	return 0; // 0x5 Return
}


func_897(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x381 PushV
	var_55_string = "idle"; // 0x382 MovS
	var_56_int = var_53_int; // 0x383 Push
	if(var_56_int == 0) goto Label_902; // 0x384 JumpB
	var_55_string = var_55_string + var_53_int; // 0x385 Add2
	
Label_902:
	var_52_string = var_55_string; // 0x386 Mov
	return 2; // 0x387 Return
}


func_1157(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); // 0x485 PushV
	GetMainOutdoorScene(var_27_object); // 0x486 Func
	var_29_bool = var_27_object == 0; // 0x488 NullEq
	if(var_29_bool == 0) goto Label_1168; // 0x489 JumpB
	var_30_string = "Can't find main outdoor scene"; // 0x48a PushS
	Trace(var_30_string); // 0x48b Func
	var_28_object = 0; // 0x48d SetNull
	var_24_object = var_28_object; // 0x48e Mov
	return 4; // 0x48f Return
	
Label_1168:
	GetMap(var_28_object); // 0x490 ObjFunc
	var_24_object = var_28_object; // 0x492 Mov
	return 4; // 0x493 Return
}


func_904(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x388 PushV
	var_49_int = 0; // 0x389 MovI
	
Label_906:
	var_51_string = "all"; // 0x38a PushS
	var_52_string = ""; var_53_int = 0; // 0x38b PushV
	var_53_int = var_49_int; // 0x38c Mov
	func_897(var_52_string, var_53_int); // 0x38d NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x38f Func
	var_57_bool = var_50_bool == 0; // 0x391 Not
	if(var_57_bool == 0) goto Label_916; // 0x392 JumpB
	goto Label_919; // 0x393 Jump
	
Label_919:
	var_46_int = var_49_int; // 0x397 Mov
	return 4; // 0x398 Return
	
Label_916:
	var_58_int = 1; // 0x394 PushI
	var_49_int = var_49_int + var_58_int; // 0x395 Add2
	goto Label_906; // 0x396 Jump
}


func_782(var_150_string, var_151_bool)
{
	var_154_bool = 0; var_155_float = 0; var_156_float = 0; var_157_bool = 0; var_158_float = 0; var_159_float = 0; // 0x30e PushV
	lshHasAnimation(var_157_bool, var_150_string); // 0x30f Func
	var_160_bool = var_157_bool; // 0x311 Push
	if(var_160_bool == 0) goto Label_792; // 0x312 JumpB
	lshGetAnimTimes(var_150_string, var_158_float, var_159_float); // 0x313 Func
	lshPlayAnimation(var_158_float, var_159_float, var_151_bool); // 0x315 Func
	goto Label_796; // 0x317 Jump
	
Label_796:
	return 6; // 0x31c Return
	
Label_792:
	var_161_string = "Can't find lsh animation : "; // 0x318 PushS
	var_162_int = var_161_string + var_150_string; // 0x319 Add
	Trace(var_162_int); // 0x31a Func
}


func_15(var_6_bool, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0xf PushV
	var_6_bool = 0; // 0x10 TMovB
	
Label_17:
	var_18_int = 3; // 0x11 PushI
	rand(var_16_float, var_18_int); // 0x12 Func
	var_19_int = 3; // 0x14 PushI
	var_20_int = var_16_float + var_19_int; // 0x15 Add
	Sleep(var_20_int, var_17_bool); // 0x16 Func
	var_6_bool = 1; // 0x18 TMovB
	var_21_float = 0; var_22_float = 0; // 0x19 PushV
	var_21_float = var_12_float; // 0x1a Mov
	var_22_float = var_13_float; // 0x1b Mov
	func_84(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x1c NEW_2
	var_6_bool = 0; // 0x1e TMovB
	goto Label_17; // 0x1f Jump
}


func_1043(var_188_bool)
{
	var_190_int = 0; var_191_string = ""; // 0x414 PushV
	var_191_string = "b10q04LaskaTalk"; // 0x415 MovS
	func_831(var_190_int, var_191_string); // 0x416 NEW_2
	var_192_int = 9; // 0x418 PushI
	var_193_bool = var_190_int == var_192_int; // 0x419 Eq
	if(var_193_bool == 0) goto Label_1053; // 0x41a JumpB
	var_188_bool = 1; // 0x41b MovB
	return 0; // 0x41c Return
	
Label_1053:
	var_188_bool = 0; // 0x41d MovB
	return 0; // 0x41e Return
}


func_149(var_2_bool, var_3_bool)
{
	func_244(); // 0x96 NEW_2
	var_13_int = 10; // 0x98 PushI
	KillTimer(var_13_int); // 0x99 Func
	var_14_bool = var_2_bool; // 0x9b PushT
	if(var_14_bool == 0) goto Label_161; // 0x9c JumpB
	var_15_string = "head"; // 0x9d PushS
	UnlookAsync(var_15_string); // 0x9e Func
	var_2_bool = 0; // 0xa0 TMovB
	
Label_161:
	var_3_bool = 1; // 0xa1 TMovB
	return 0; // 0xa2 Return
}


func_1174(var_69_object, var_70_string, var_71_float)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_object = Obj(); var_76_bool = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0; // 0x496 PushV
	GetMainOutdoorScene(var_79_object); // 0x497 Func
	var_81_bool = var_79_object == 0; // 0x499 NullEq
	if(var_81_bool == 0) goto Label_1183; // 0x49a JumpB
	var_82_string = "Can't find main outdoor scene"; // 0x49b PushS
	Trace(var_82_string); // 0x49c Func
	return 8; // 0x49e Return
	
Label_1183:
	GetLocator(var_70_string, var_80_bool, var_77_cvector, var_78_cvector); // 0x49f ObjFunc
	var_83_bool = var_80_bool == 0; // 0x4a1 Not
	if(var_83_bool == 0) goto Label_1193; // 0x4a2 JumpB
	var_84_string = "Warning: outdoor scene locator "; // 0x4a3 PushS
	var_85_int = var_84_string + var_70_string; // 0x4a4 Add
	var_86_string = " doesnt exist"; // 0x4a5 PushS
	var_87_int = var_85_int + var_86_string; // 0x4a6 Add
	Trace(var_87_int); // 0x4a7 Func
	
Label_1193:
	GetMap(var_69_object); // 0x4a9 ObjFunc
	var_88_bool = var_69_object == 0; // 0x4ab NullEq
	if(var_88_bool == 0) goto Label_1201; // 0x4ac JumpB
	var_89_string = "Can't find map"; // 0x4ad PushS
	Trace(var_89_string); // 0x4ae Func
	return 8; // 0x4b0 Return
	
Label_1201:
	var_90_float = GetByIndex(var_77_cvector, 0); // 0x4b1 PushE
	var_91_float = GetByIndex(var_77_cvector, 2); // 0x4b2 PushE
	SetMapParams(var_90_float, var_91_float, var_71_float); // 0x4b3 ObjFunc
	return 8; // 0x4b5 Return
}


func_921(var_77_int)
{
	var_77_int = 521048; // 0x399 MovI
	return 0; // 0x39a Return
}


func_666(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x29a PushV
	GetPosition(var_24_cvector); // 0x29b Func
	GetPosition(var_25_cvector); // 0x29d ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x29f Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x2a0 Or2
	return 6; // 0x2a1 Return
}


func_923(var_76_int)
{
	var_76_int = 521047; // 0x39b MovI
	return 0; // 0x39c Return
}


func_925(var_78_string)
{
	var_78_string = "ui/NPC_Morlok.png"; // 0x39d MovS
	return 0; // 0x39e Return
}


func_797(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x31d PushV
	GetEyesHeight(var_32_float); // 0x31e ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x320 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x321 PushE
	var_34_float = var_32_float; // 0x322 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x323 PopE
	var_35_string = "head"; // 0x324 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x325 Func
	return 4; // 0x327 Return
}


func_1055(var_194_bool)
{
	var_196_int = 0; var_197_string = ""; // 0x420 PushV
	var_197_string = "b10q04"; // 0x421 MovS
	func_831(var_196_int, var_197_string); // 0x422 NEW_2
	var_198_int = -1; // 0x424 PushI
	var_199_bool = var_196_int == var_198_int; // 0x425 Eq
	if(var_199_bool == 0) goto Label_1065; // 0x426 JumpB
	var_194_bool = 1; // 0x427 MovB
	return 0; // 0x428 Return
	
Label_1065:
	var_194_bool = 0; // 0x429 MovB
	return 0; // 0x42a Return
}


func_927(var_79_string)
{
	var_79_string = "ui/NPC_Morlok_b.png"; // 0x39f MovS
	return 0; // 0x3a0 Return
}


func_33(var_5_bool)
{
	var_5_bool = 1; // 0x21 TMovB
	var_15_bool = 0; // 0x22 PushV
	var_15_bool = 0; // 0x23 MovB
	var_16_bool = 0; // 0x24 PushV
	func_674(var_16_bool); // 0x25 NEW_2
	var_19_bool = var_16_bool == 0; // 0x27 Not
	if(var_19_bool == 0) goto Label_46; // 0x28 JumpB
	var_20_bool = 0; // 0x29 PushV
	func_82(var_20_bool); // 0x2a NEW_2
	if(var_20_bool == 0) goto Label_46; // 0x2c JumpB
	var_15_bool = 1; // 0x2d MovB
	
Label_46:
	if(var_15_bool == 0) goto Label_52; // 0x2e JumpB
	var_21_object = Obj(); // 0x2f PushV
	func_815(var_21_object); // 0x30 NEW_2
	RemoveActor(var_21_object); // 0x32 Func
	
Label_52:
	return 0; // 0x34 Return
}


func_674(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x2a2 PushV
	IsLoaded(var_25_bool); // 0x2a3 Func
	var_23_bool = var_25_bool; // 0x2a5 Mov
	return 2; // 0x2a6 Return
}


func_163()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0xa3 PushV
	WaitForAnimEnd(); // 0xa4 Func
	var_44_bool = 0; // 0xa6 PushV
	func_674(var_44_bool); // 0xa7 NEW_2
	var_45_bool = var_44_bool == 0; // 0xa9 Not
	if(var_45_bool == 0) goto Label_172; // 0xaa JumpB
	return 14; // 0xab Return
	
Label_172:
	var_46_int = 0; // 0xac PushV
	func_904(var_46_int); // 0xad NEW_2
	var_37_int = var_46_int; // 0xae Mov
	var_38_int = 0; // 0xb0 MovI
	
Label_177:
	var_59_bool = 0; // 0xb1 PushV
	var_59_bool = 0; // 0xb2 MovB
	var_60_int = 5; // 0xb3 PushI
	var_61_bool = var_38_int < var_60_int; // 0xb4 LT
	if(var_61_bool == 0) goto Label_187; // 0xb5 JumpB
	var_62_bool = 0; // 0xb6 PushV
	func_674(var_62_bool); // 0xb7 NEW_2
	if(var_62_bool == 0) goto Label_187; // 0xb9 JumpB
	var_59_bool = 1; // 0xba MovB
	
Label_187:
	if(var_59_bool == 0) goto Label_239; // 0xbb JumpB
	var_63_int = 3; // 0xbc PushI
	irand(var_39_int, var_63_int); // 0xbd Func
	var_64_int = 0; // 0xbf PushI
	var_65_bool = var_39_int == var_64_int; // 0xc0 Eq
	if(var_65_bool == 0) goto Label_211; // 0xc1 JumpB
	var_66_int = var_37_int; // 0xc2 Push
	if(var_66_int == 0) goto Label_210; // 0xc3 JumpB
	irand(var_40_int, var_37_int); // 0xc4 Func
	var_67_string = "all"; // 0xc6 PushS
	var_68_string = ""; var_69_int = 0; // 0xc7 PushV
	var_69_int = var_40_int; // 0xc8 Mov
	func_897(var_68_string, var_69_int); // 0xc9 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0xcb Func
	WaitForAnimEnd(var_41_bool); // 0xcd Func
	var_70_bool = var_41_bool == 0; // 0xcf Not
	if(var_70_bool == 0) goto Label_210; // 0xd0 JumpB
	goto Label_239; // 0xd1 Jump
	
Label_239:
	ResetAAS(); // 0xef Func
	return 14; // 0xf1 Return
	
Label_210:
	goto Label_228; // 0xd2 Jump
	
Label_228:
	var_71_bool = 0; // 0xe4 PushV
	func_242(var_71_bool); // 0xe5 NEW_2
	var_72_bool = var_71_bool == 0; // 0xe7 Not
	if(var_72_bool == 0) goto Label_234; // 0xe8 JumpB
	goto Label_239; // 0xe9 Jump
	
Label_234:
	ResetAAS(); // 0xea Func
	var_73_int = 1; // 0xec PushI
	var_38_int = var_38_int + var_73_int; // 0xed Add2
	goto Label_177; // 0xee Jump
	
Label_211:
	var_74_int = 1; // 0xd3 PushI
	var_75_bool = var_39_int == var_74_int; // 0xd4 Eq
	if(var_75_bool == 0) goto Label_225; // 0xd5 JumpB
	var_76_int = 4; // 0xd6 PushI
	rand(var_42_float, var_76_int); // 0xd7 Func
	var_77_int = 1; // 0xd9 PushI
	var_78_int = var_42_float + var_77_int; // 0xda Add
	Sleep(var_78_int, var_43_bool); // 0xdb Func
	var_79_bool = var_43_bool == 0; // 0xdd Not
	if(var_79_bool == 0) goto Label_224; // 0xde JumpB
	goto Label_239; // 0xdf Jump
	
Label_224:
	goto Label_228; // 0xe0 Jump
	
Label_225:
	var_80_int = var_38_int; // 0xe1 Push
	if(var_80_int == 0) goto Label_228; // 0xe2 JumpB
	goto Label_239; // 0xe3 Jump
}


func_929(var_15_bool)
{
	var_15_bool = 0; // 0x3a1 MovB
	return 0; // 0x3a2 Return
}


func_931(var_101_object)
{
	var_103_string = "avroks blood is given"; // 0x3a4 PushS
	Trace(var_103_string); // 0x3a5 Func
	var_104_object = Obj(); var_105_string = ""; var_106_int = 0; // 0x3a7 PushV
	var_104_object = var_101_object; // 0x3a8 Mov
	var_105_string = "avroks_blood"; // 0x3a9 MovS
	var_106_int = 1; // 0x3aa MovI
	func_867(var_104_object, var_105_string, var_106_int); // 0x3ab NEW_2
	return 0; // 0x3ad Return
}


func_679(var_28_bool, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; // 0x2a7 PushV
	GetPosition(var_41_cvector); // 0x2a8 ObjFunc
	GetEyesHeight(var_40_float); // 0x2aa ObjFunc
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x2ac PushE
	var_49_float = var_49_float + var_40_float; // 0x2ad Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x2ae PopE
	GetPosition(var_42_cvector); // 0x2af Func
	GetEyesHeight(var_40_float); // 0x2b1 Func
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x2b3 PushE
	var_50_float = var_50_float + var_40_float; // 0x2b4 Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x2b5 PopE
	var_43_cvector = var_41_cvector - var_42_cvector; // 0x2b6 Sub2
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x2b7 PushE
	var_51_float = 0; // 0x2b8 MovI
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x2b9 PopE
	var_52_int = var_43_cvector | var_43_cvector; // 0x2ba Or
	var_53_float = sqrt(var_52_int); // 0x2bb Sqrt
	var_43_cvector = var_43_cvector / var_43_cvector; // 0x2bc Div2
	var_44_cvector = -var_43_cvector; // 0x2bd Neg2
	var_54_float = var_43_cvector * var_30_float; // 0x2be Mult
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x2bf PushV
	var_57_cvector = CVector(0.0, 1.0, 0.0); // 0x2c0 PushVec
	var_56_cvector = var_44_cvector ^ var_57_cvector; // 0x2c1 Xor2
	func_821(var_55_cvector, var_56_cvector); // 0x2c2 NEW_2
	var_63_int = 25; // 0x2c4 PushI
	var_64_float = var_55_cvector * var_63_int; // 0x2c5 Mult
	var_65_int = var_54_float + var_64_float; // 0x2c6 Add
	var_66_cvector = CVector(0.0, 10.0, 0.0); // 0x2c7 PushVec
	var_45_cvector = var_65_int - var_66_cvector; // 0x2c8 Sub2
	var_46_cvector = var_42_cvector + var_45_cvector; // 0x2c9 Add2
	IsOverrideActive(var_47_bool); // 0x2ca Func
	var_67_bool = var_47_bool; // 0x2cc Push
	if(var_67_bool == 0) goto Label_720; // 0x2cd JumpB
	var_28_bool = 0; // 0x2ce MovB
	return 18; // 0x2cf Return
	
Label_720:
	StopWorld(); // 0x2d0 Func
	var_68_bool = 1; // 0x2d2 PushB
	CameraTransit(var_46_cvector, var_44_cvector, var_68_bool); // 0x2d3 Func
	var_69_float = GetByIndex(var_45_cvector, 0); // 0x2d5 PushE
	var_70_float = GetByIndex(var_45_cvector, 2); // 0x2d6 PushE
	Rotate(var_69_float, var_70_float); // 0x2d7 Func
	var_71_bool = 0; // 0x2d9 PushV
	func_929(var_71_bool); // 0x2da NEW_2
	if(var_71_bool == 0) goto Label_734; // 0x2dc JumpB
	goto Label_742; // 0x2dd Jump
	
Label_742:
	CameraWaitForPlayFinish(); // 0x2e6 Func
	ResumeWorld(); // 0x2e8 Func
	var_28_bool = 1; // 0x2ea MovB
	return 18; // 0x2eb Return
	
Label_734:
	var_72_string = "head"; // 0x2de PushS
	HasAnimationTrack(var_48_bool, var_72_string); // 0x2df Func
	var_73_bool = var_48_bool; // 0x2e1 Push
	if(var_73_bool == 0) goto Label_742; // 0x2e2 JumpB
	var_74_string = "head"; // 0x2e3 PushS
	LookAsyncCamera(var_74_string); // 0x2e4 Func
}


func_808()
{
	var_15_bool = 0; // 0x328 PushV
	func_929(var_15_bool); // 0x329 NEW_2
	if(var_15_bool == 0) goto Label_814; // 0x32b JumpB
	lshStopSpeech(); // 0x32c Func
	
Label_814:
	return 0; // 0x32e Return
}


func_1067(var_167_bool)
{
	var_169_int = 0; var_170_string = ""; // 0x42c PushV
	var_170_string = "b10q04LaskaTalk"; // 0x42d MovS
	func_831(var_169_int, var_170_string); // 0x42e NEW_2
	var_171_int = 0; // 0x430 PushI
	var_172_bool = var_169_int == var_171_int; // 0x431 Eq
	if(var_172_bool == 0) goto Label_1077; // 0x432 JumpB
	var_167_bool = 1; // 0x433 MovB
	return 0; // 0x434 Return
	
Label_1077:
	var_167_bool = 0; // 0x435 MovB
	return 0; // 0x436 Return
}


func_942()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x3ae PushV
	var_22_string = "b10q04LaskaTalk"; // 0x3af PushS
	var_23_int = 1; // 0x3b0 PushI
	SetVariable(var_22_string, var_23_int); // 0x3b1 Func
	var_24_object = Obj(); // 0x3b3 PushV
	func_1157(var_24_object); // 0x3b4 NEW_2
	var_21_object = var_24_object; // 0x3b5 Mov
	var_31_string = "b10q04MorlokGotoLaska"; // 0x3b7 PushS
	var_32_string = "pt_map_laska"; // 0x3b8 PushS
	var_33_int = 0; // 0x3b9 PushI
	var_34_int = 530551; // 0x3ba PushI
	var_35_float = 0; // 0x3bb PushV
	func_892(var_35_float); // 0x3bc NEW_2
	AddMark(var_31_string, var_32_string, var_33_int, var_34_int, var_35_float); // 0x3be ObjFunc
	func_1103(); // 0x3c1 NEW_2
	var_61_bool = 0; var_62_string = ""; var_63_string = ""; // 0x3c3 PushV
	var_62_string = "quest_b10_04"; // 0x3c4 MovS
	var_63_string = "init_storojka"; // 0x3c5 MovS
	func_880(var_61_bool, var_62_string, var_63_string); // 0x3c6 NEW_2
	return 2; // 0x3c8 Return
}


func_815(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x32f PushV
	self(var_21_object); // 0x330 Func
	var_19_object = var_21_object; // 0x332 Mov
	return 2; // 0x333 Return
}


func_821(var_55_cvector, var_56_cvector)
{
	var_58_float = 0; var_59_float = 0; // 0x335 PushV
	var_60_int = var_56_cvector | var_56_cvector; // 0x336 Or
	var_59_float = sqrt(var_60_int); // 0x337 Sqrt2
	var_61_float = 0.0; // 0x338 PushF
	var_62_bool = var_59_float < var_61_float; // 0x339 LT
	if(var_62_bool == 0) goto Label_829; // 0x33a JumpB
	var_55_cvector = CVector(0.0, 0.0, 0.0); // 0x33b MovV
	return 2; // 0x33c Return
	
Label_829:
	var_55_cvector = var_56_cvector / var_56_cvector; // 0x33d Div2
	return 2; // 0x33e Return
}


func_1207(var_80_int)
{
	var_81_int = 0; var_82_int = 0; // 0x4b7 PushV
	var_83_string = "branch"; // 0x4b8 PushS
	GetVariable(var_83_string, var_82_int); // 0x4b9 Func
	var_84_int = 0; // 0x4bb PushI
	var_85_bool = var_82_int == var_84_int; // 0x4bc Eq
	if(var_85_bool == 0) goto Label_1217; // 0x4bd JumpB
	var_80_int = 1; // 0x4be MovI
	return 2; // 0x4bf Return
	
Label_1217:
	var_86_int = 1; // 0x4c1 PushI
	var_87_bool = var_82_int == var_86_int; // 0x4c2 Eq
	if(var_87_bool == 0) goto Label_1222; // 0x4c3 JumpB
	var_80_int = 2; // 0x4c4 MovI
	return 2; // 0x4c5 Return
	
Label_1222:
	var_80_int = 3; // 0x4c6 MovI
	return 2; // 0x4c7 Return
}


func_1079(var_182_bool)
{
	var_184_int = 0; var_185_string = ""; // 0x438 PushV
	var_185_string = "oob10MorlokLaska1"; // 0x439 MovS
	func_831(var_184_int, var_185_string); // 0x43a NEW_2
	var_186_int = 0; // 0x43c PushI
	var_187_bool = var_184_int == var_186_int; // 0x43d Eq
	if(var_187_bool == 0) goto Label_1089; // 0x43e JumpB
	var_182_bool = 1; // 0x43f MovB
	return 0; // 0x440 Return
	
Label_1089:
	var_182_bool = 0; // 0x441 MovB
	return 0; // 0x442 Return
}


func_446(var_2_bool, var_146_string)
{
	var_147_bool = 0; // 0x1bf PushV
	func_929(var_147_bool); // 0x1c0 NEW_2
	var_148_bool = var_147_bool == 0; // 0x1c2 Not
	if(var_148_bool == 0) goto Label_453; // 0x1c3 JumpB
	return 0; // 0x1c4 Return
	
Label_453:
	var_149_bool = var_146_string == var_2_bool; // 0x1c5 Eq
	if(var_149_bool == 0) goto Label_456; // 0x1c6 JumpB
	return 0; // 0x1c7 Return
	
Label_456:
	var_150_string = ""; var_151_bool = 0; // 0x1c8 PushV
	var_150_string = var_146_string; // 0x1c9 Mov
	var_152_string = ""; // 0x1ca PushS
	var_153_bool = var_146_string == var_152_string; // 0x1cb Eq
	if(var_153_bool == 0) goto Label_463; // 0x1cc JumpB
	var_151_bool = 0; // 0x1cd MovB
	goto Label_464; // 0x1ce Jump
	
Label_464:
	func_782(var_150_string, var_151_bool); // 0x1d0 NEW_2
	var_2_bool = var_146_string; // 0x1d2 TMov
	return 0; // 0x1d3 Return
	
Label_463:
	var_151_bool = 1; // 0x1cf MovB
}


func_831(var_139_int, var_140_string)
{
	var_141_int = 0; var_142_int = 0; // 0x33f PushV
	GetVariable(var_140_string, var_142_int); // 0x340 Func
	var_139_int = var_142_int; // 0x342 Mov
	return 2; // 0x343 Return
}


func_323(var_0_int, var_1_int, var_2_bool, var_3_bool, var_89_object, var_90_object)
{
	var_0_int = var_90_object; // 0x144 TMov
	var_1_int = var_89_object; // 0x145 TMov
	var_3_bool = 0; // 0x146 TMovB
	var_95_int = 1; // 0x147 PushI
	if(var_95_int == 0) goto Label_416; // 0x148 JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0x149 PushV
	var_97_object = var_1_int; // 0x14a MovT
	func_1091(var_97_object); // 0x14b NEW_2
	var_104_bool = var_96_bool == 0; // 0x14d Not
	if(var_104_bool == 0) goto Label_350; // 0x14e JumpB
	var_105_string = ""; // 0x14f PushV
	var_105_string = "Neutral"; // 0x150 MovS
	func_446(var_90_object, var_105_string); // 0x151 NEW_2
	var_122_int = 530541; // 0x153 PushI
	SetMessage(var_122_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_123_int = 530542; // 0x158 PushI
	var_124_int = -1; // 0x159 PushI
	var_125_int = 31889; // 0x15a PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x15b TObjFunc
	goto Label_416; // 0x15d Jump
	
Label_416:
	var_126_bool = 0; // 0x1a0 PushV
	func_929(var_126_bool); // 0x1a1 NEW_2
	if(var_126_bool == 0) goto Label_431; // 0x1a3 JumpB
	
Label_420:
	lshWaitForAnimEnd(); // 0x1a4 Func
	var_127_bool = var_3_bool; // 0x1a6 PushT
	if(var_127_bool == 0) goto Label_425; // 0x1a7 JumpB
	goto Label_430; // 0x1a8 Jump
	
Label_430:
	goto Label_445; // 0x1ae Jump
	
Label_445:
	return 0; // 0x1bd Return
	
Label_425:
	var_128_string = ""; // 0x1a9 PushV
	var_128_string = var_2_bool; // 0x1aa MovT
	func_766(var_128_string); // 0x1ab NEW_2
	goto Label_420; // 0x1ad Jump
	
Label_431:
	var_139_string = "all"; // 0x1af PushS
	var_140_string = "idle"; // 0x1b0 PushS
	PlayAnimation(var_139_string, var_140_string); // 0x1b1 Func
	
Label_435:
	WaitForAnimEnd(); // 0x1b3 Func
	var_141_bool = var_3_bool; // 0x1b5 PushT
	if(var_141_bool == 0) goto Label_440; // 0x1b6 JumpB
	goto Label_445; // 0x1b7 Jump
	
Label_440:
	var_142_string = "all"; // 0x1b8 PushS
	var_143_string = "idle"; // 0x1b9 PushS
	PlayAnimation(var_142_string, var_143_string); // 0x1ba Func
	goto Label_435; // 0x1bc Jump
	
Label_350:
	var_144_bool = 0; var_145_object = Obj(); // 0x15e PushV
	var_145_object = var_1_int; // 0x15f MovT
	func_1067(var_145_object); // 0x160 NEW_2
	if(var_144_bool == 0) goto Label_370; // 0x162 JumpB
	var_150_string = ""; // 0x163 PushV
	var_150_string = "Neutral"; // 0x164 MovS
	func_446(var_90_object, var_150_string); // 0x165 NEW_2
	var_151_int = 530427; // 0x167 PushI
	SetMessage(var_151_int); // 0x168 TObjFunc
	ClearReplies(); // 0x16a TObjFunc
	var_152_int = 530428; // 0x16c PushI
	var_153_int = -1; // 0x16d PushI
	var_154_int = 31800; // 0x16e PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x16f TObjFunc
	goto Label_416; // 0x171 Jump
	
Label_370:
	var_155_string = ""; // 0x172 PushV
	var_155_string = "Neutral"; // 0x173 MovS
	func_446(var_90_object, var_155_string); // 0x174 NEW_2
	var_156_int = 530429; // 0x176 PushI
	SetMessage(var_156_int); // 0x177 TObjFunc
	ClearReplies(); // 0x179 TObjFunc
	var_157_bool = 0; // 0x17b PushV
	var_157_bool = 0; // 0x17c MovB
	var_158_bool = 0; // 0x17d PushV
	var_158_bool = 0; // 0x17e MovB
	var_159_bool = 0; var_160_object = Obj(); // 0x17f PushV
	var_160_object = var_1_int; // 0x180 MovT
	func_1079(var_160_object); // 0x181 NEW_2
	if(var_159_bool == 0) goto Label_394; // 0x183 JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0x184 PushV
	var_166_object = var_1_int; // 0x185 MovT
	func_1043(var_166_object); // 0x186 NEW_2
	if(var_165_bool == 0) goto Label_394; // 0x188 JumpB
	var_158_bool = 1; // 0x189 MovB
	
Label_394:
	if(var_158_bool == 0) goto Label_402; // 0x18a JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x18b PushV
	var_172_object = var_1_int; // 0x18c MovT
	func_1055(var_172_object); // 0x18d NEW_2
	var_177_bool = var_171_bool == 0; // 0x18f Not
	if(var_177_bool == 0) goto Label_402; // 0x190 JumpB
	var_157_bool = 1; // 0x191 MovB
	
Label_402:
	if(var_157_bool == 0) goto Label_408; // 0x192 JumpB
	var_178_int = 530430; // 0x193 PushI
	var_179_int = 31803; // 0x194 PushI
	var_180_int = 31802; // 0x195 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x196 TObjFunc
	
Label_408:
	var_181_int = 530435; // 0x198 PushI
	var_182_int = -1; // 0x199 PushI
	var_183_int = 31807; // 0x19a PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x19b TObjFunc
	goto Label_416; // 0x19d Jump
}


func_1091(var_137_bool)
{
	var_139_int = 0; var_140_string = ""; // 0x444 PushV
	var_140_string = "b10q04MorlokTalk"; // 0x445 MovS
	func_831(var_139_int, var_140_string); // 0x446 NEW_2
	var_143_int = 0; // 0x448 PushI
	var_144_bool = var_139_int != var_143_int; // 0x449 Neq
	if(var_144_bool == 0) goto Label_1101; // 0x44a JumpB
	var_137_bool = 1; // 0x44b MovB
	return 0; // 0x44c Return
	
Label_1101:
	var_137_bool = 0; // 0x44d MovB
	return 0; // 0x44e Return
}


func_836(var_120_int, var_121_int)
{
	var_122_object = Obj(); var_123_object = Obj(); // 0x344 PushV
	CreateIntVector(var_123_object); // 0x345 Func
	add(var_120_int); // 0x347 ObjFunc
	add(var_121_int); // 0x349 ObjFunc
	var_124_int = 3; // 0x34b PushI
	SendWorldWndMessage(var_124_int, var_123_object); // 0x34c Func
	return 2; // 0x34e Return
}


func_1224(var_16_object)
{
	var_17_int = 0; var_18_object = Obj(); // 0x4c9 PushV
	var_18_object = var_16_object; // 0x4ca Mov
	TaskCall(1); // 0x4cb TaskCall
	func_249(var_19_object, var_17_int, var_18_object); // 0x4cc NEW_2
	TaskReturn(); // 0x4cd TaskReturn
	return 0; // 0x4cf Return
}


func_970()
{
	var_97_string = "oob10MorlokLaska1"; // 0x3cb PushS
	var_98_int = 1; // 0x3cc PushI
	SetVariable(var_97_string, var_98_int); // 0x3cd Func
	return 0; // 0x3cf Return
}


func_1103()
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x44f PushV
	var_40_int = 550; // 0x450 PushI
	var_41_int = 2; // 0x451 PushI
	var_42_int = 530441; // 0x452 PushI
	CreateDiaryEntry(var_39_object, var_40_int, var_41_int, var_42_int); // 0x453 Func
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0; // 0x455 PushV
	var_44_object = var_39_object; // 0x456 Mov
	var_45_int = 545; // 0x457 MovI
	func_1129(var_43_bool, var_44_object, var_45_int); // 0x458 NEW_2
	return 2; // 0x45a Return
}


func_976()
{
	var_127_string = "playsound"; // 0x3d1 PushS
	var_128_string = "giveitem"; // 0x3d2 PushS
	TriggerWorld(var_127_string, var_128_string); // 0x3d3 Func
	return 0; // 0x3d5 Return
}


func_848(var_110_object, var_111_int)
{
	var_112_int = 0; var_113_int = 0; var_114_bool = 0; var_115_int = 0; var_116_int = 0; var_117_bool = 0; // 0x350 PushV
	GetItemID(var_115_int); // 0x351 ObjFunc
	var_118_string = "Category"; // 0x353 PushS
	GetInvItemProperty(var_116_int, var_115_int, var_118_string); // 0x354 Func
	AddItem(var_117_bool, var_110_object, var_116_int, var_111_int); // 0x356 ObjFunc
	var_119_bool = var_117_bool == 0; // 0x358 Not
	if(var_119_bool == 0) goto Label_861; // 0x359 JumpB
	DropItems(var_110_object, var_111_int); // 0x35a ObjFunc
	goto Label_866; // 0x35c Jump
	
Label_866:
	return 6; // 0x362 Return
	
Label_861:
	var_120_int = 0; var_121_int = 0; // 0x35d PushV
	var_120_int = var_115_int; // 0x35e Mov
	var_121_int = var_111_int; // 0x35f Mov
	func_836(var_120_int, var_121_int); // 0x360 NEW_2
}


func_82(var_18_bool)
{
	var_18_bool = 1; // 0x52 MovB
	return 0; // 0x53 Return
}


func_84(var_0_int, var_1_int, var_2_bool, var_3_bool, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x55 PushV
	func_674(var_23_bool); // 0x56 NEW_2
	var_26_bool = var_23_bool == 0; // 0x58 Not
	if(var_26_bool == 0) goto Label_91; // 0x59 JumpB
	return 0; // 0x5a Return
	
Label_91:
	var_27_string = "player"; // 0x5b PushS
	FindActor(var_17_bool, var_27_string); // 0x5c Func
	var_2_bool = 0; // 0x5e TMovB
	var_3_bool = 0; // 0x5f TMovB
	var_0_int = var_21_float; // 0x60 TMov
	var_1_int = var_22_float; // 0x61 TMov
	var_28_int = 10; // 0x62 PushI
	var_29_float = 1.0; // 0x63 PushF
	SetTimer(var_28_int, var_29_float); // 0x64 Func
	func_163(); // 0x67 NEW_2
	var_81_bool = var_3_bool == 0; // 0x69 Not
	if(var_81_bool == 0) goto Label_110; // 0x6a JumpB
	var_82_int = 10; // 0x6b PushI
	KillTimer(var_82_int); // 0x6c Func
	
Label_110:
	return 0; // 0x6e Return
}


func_982()
{
	var_69_object = Obj(); var_70_string = ""; var_71_float = 0; // 0x3d7 PushV
	var_72_object = Obj(); // 0x3d8 PushV
	func_1157(var_72_object); // 0x3d9 NEW_2
	var_69_object = var_72_object; // 0x3da Mov
	var_70_string = "pt_map_laska"; // 0x3dc MovS
	var_71_float = 2; // 0x3dd MovI
	func_1174(var_69_object, var_70_string, var_71_float); // 0x3de NEW_2
	var_92_object = Obj(); // 0x3e0 PushV
	func_1157(var_92_object); // 0x3e1 NEW_2
	ShowMap(var_92_object); // 0x3e3 ObjFunc
	return 0; // 0x3e5 Return
}


func_1116(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x45c PushV
	GetDiaryRoot(var_54_object); // 0x45d Func
	var_55_bool = var_54_object == 0; // 0x45f Not
	if(var_55_bool == 0) goto Label_1126; // 0x460 JumpB
	var_56_string = "Can't retrieve diary root"; // 0x461 PushS
	Trace(var_56_string); // 0x462 Func
	var_52_object = 0; // 0x464 MovB
	return 2; // 0x465 Return
	
Label_1126:
	var_52_object = var_54_object; // 0x466 Mov
	return 2; // 0x467 Return
}


func_867(var_104_object, var_105_string, var_106_int)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x363 PushV
	CreateInvItem(var_108_object); // 0x364 Func
	SetItemName(var_105_string); // 0x366 ObjFunc
	var_109_object = Obj(); var_110_object = Obj(); var_111_int = 0; // 0x368 PushV
	var_109_object = var_104_object; // 0x369 Mov
	var_110_object = var_108_object; // 0x36a Mov
	var_111_int = var_106_int; // 0x36b Mov
	func_848(var_110_object, var_111_int); // 0x36c NEW_2
	return 2; // 0x36e Return
}


func_998(var_209_bool)
{
	var_211_bool = 0; // 0x3e7 PushV
	var_211_bool = 0; // 0x3e8 MovB
	var_212_bool = 0; // 0x3e9 PushV
	var_212_bool = 0; // 0x3ea MovB
	var_213_bool = 0; // 0x3eb PushV
	var_213_bool = 0; // 0x3ec MovB
	var_214_int = 0; var_215_string = ""; // 0x3ed PushV
	var_215_string = "b10q04NotkinTalk"; // 0x3ee MovS
	func_831(var_214_int, var_215_string); // 0x3ef NEW_2
	var_216_int = 9; // 0x3f1 PushI
	var_217_bool = var_214_int == var_216_int; // 0x3f2 Eq
	if(var_217_bool == 0) goto Label_1020; // 0x3f3 JumpB
	var_218_int = 0; var_219_string = ""; // 0x3f4 PushV
	var_219_string = "b10q04Spi4kaTalk"; // 0x3f5 MovS
	func_831(var_218_int, var_219_string); // 0x3f6 NEW_2
	var_220_int = 9; // 0x3f8 PushI
	var_221_bool = var_218_int == var_220_int; // 0x3f9 Eq
	if(var_221_bool == 0) goto Label_1020; // 0x3fa JumpB
	var_213_bool = 1; // 0x3fb MovB
	
Label_1020:
	if(var_213_bool == 0) goto Label_1029; // 0x3fc JumpB
	var_222_int = 0; var_223_string = ""; // 0x3fd PushV
	var_223_string = "b10q04MishkaTalk"; // 0x3fe MovS
	func_831(var_222_int, var_223_string); // 0x3ff NEW_2
	var_224_int = 9; // 0x401 PushI
	var_225_bool = var_222_int == var_224_int; // 0x402 Eq
	if(var_225_bool == 0) goto Label_1029; // 0x403 JumpB
	var_212_bool = 1; // 0x404 MovB
	
Label_1029:
	if(var_212_bool == 0) goto Label_1038; // 0x405 JumpB
	var_226_int = 0; var_227_string = ""; // 0x406 PushV
	var_227_string = "b10q04LaskaTalk"; // 0x407 MovS
	func_831(var_226_int, var_227_string); // 0x408 NEW_2
	var_228_int = 9; // 0x40a PushI
	var_229_bool = var_226_int == var_228_int; // 0x40b Eq
	if(var_229_bool == 0) goto Label_1038; // 0x40c JumpB
	var_211_bool = 1; // 0x40d MovB
	
Label_1038:
	if(var_211_bool == 0) goto Label_1041; // 0x40e JumpB
	var_209_bool = 1; // 0x40f MovB
	return 0; // 0x410 Return
	
Label_1041:
	var_209_bool = 0; // 0x411 MovB
	return 0; // 0x412 Return
}


func_1129(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x469 PushV
	var_52_object = Obj(); // 0x46a PushV
	func_1116(var_52_object); // 0x46b NEW_2
	var_49_object = var_52_object; // 0x46c Mov
	Find(var_45_int, var_50_object); // 0x46e ObjFunc
	var_57_bool = var_50_object == 0; // 0x470 Not
	if(var_57_bool == 0) goto Label_1144; // 0x471 JumpB
	var_58_string = "Can't find diary parent with id: "; // 0x472 PushS
	var_59_int = var_58_string + var_45_int; // 0x473 Add
	Trace(var_59_int); // 0x474 Func
	var_43_bool = 0; // 0x476 MovB
	return 6; // 0x477 Return
	
Label_1144:
	AddChild(var_44_object); // 0x478 ObjFunc
	var_60_int = 7; // 0x47a PushI
	SendWorldWndMessage(var_60_int); // 0x47b Func
	GetCategory(var_51_int); // 0x47d ObjFunc
	SetDiarySection(var_51_int); // 0x47f Func
	var_43_bool = 0; // 0x481 MovB
	return 6; // 0x482 Return
}


func_748()
{
	var_186_bool = 0; var_187_bool = 0; // 0x2ec PushV
	var_188_bool = 1; // 0x2ed PushB
	CameraSwitchToNormal(var_188_bool); // 0x2ee Func
	var_189_bool = 0; // 0x2f0 PushV
	func_929(var_189_bool); // 0x2f1 NEW_2
	if(var_189_bool == 0) goto Label_757; // 0x2f3 JumpB
	goto Label_765; // 0x2f4 Jump
	
Label_765:
	return 2; // 0x2fd Return
	
Label_757:
	var_190_string = "head"; // 0x2f5 PushS
	HasAnimationTrack(var_187_bool, var_190_string); // 0x2f6 Func
	var_191_bool = var_187_bool; // 0x2f8 Push
	if(var_191_bool == 0) goto Label_765; // 0x2f9 JumpB
	var_192_string = "head"; // 0x2fa PushS
	UnlookAsync(var_192_string); // 0x2fb Func
}


func_111(var_0_int, var_1_int, var_4_object, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x6f PushV
	var_18_bool = var_4_object == 0; // 0x70 NullEq
	if(var_18_bool == 0) goto Label_116; // 0x71 JumpB
	var_15_bool = 0; // 0x72 MovB
	return 2; // 0x73 Return
	
Label_116:
	var_19_float = 0; var_20_object = Obj(); // 0x74 PushV
	var_20_object = var_4_object; // 0x75 MovT
	func_666(var_20_object); // 0x76 NEW_2
	var_17_float = sqrt(var_19_float); // 0x78 Sqrt2
	var_27_bool = var_2_bool; // 0x79 PushT
	if(var_27_bool == 0) goto Label_124; // 0x7a JumpB
	var_17_float = var_17_float - var_1_int; // 0x7b Sub2
	
Label_124:
	var_15_bool = var_17_float < var_0_int; // 0x7c LT2
	return 2; // 0x7d Return
}


func_880(var_61_bool, var_62_string, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x370 PushV
	FindActor(var_65_object, var_62_string); // 0x371 Func
	var_66_bool = var_65_object == 0; // 0x373 NullEq
	if(var_66_bool == 0) goto Label_887; // 0x374 JumpB
	var_61_bool = 0; // 0x375 MovB
	return 2; // 0x376 Return
	
Label_887:
	Trigger(var_65_object, var_63_string); // 0x377 Func
	var_61_bool = 1; // 0x379 MovB
	return 2; // 0x37a Return
}


func_242(var_71_bool)
{
	var_71_bool = 1; // 0xf2 MovB
	return 0; // 0xf3 Return
}


func_244()
{
	StopAnimation(); // 0xf4 Func
	StopGroup0(); // 0xf6 Func
	return 0; // 0xf8 Return
}


func_249(var_0_int, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0xf9 PushV
	var_0_int = var_18_object; // 0xfa TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0xfb PushV
	var_29_object = var_18_object; // 0xfc Mov
	var_30_float = 110.0; // 0xfd MovF
	func_679(var_29_object, var_30_float); // 0xfe NEW_2
	var_75_bool = var_28_bool == 0; // 0x100 Not
	if(var_75_bool == 0) goto Label_260; // 0x101 JumpB
	var_17_int = -2; // 0x102 MovI
	return 8; // 0x103 Return
	
Label_260:
	CreateDialog(var_24_object); // 0x104 Func
	var_76_int = 0; // 0x106 PushV
	func_923(var_76_int); // 0x107 NEW_2
	SetNPCName(var_76_int); // 0x109 ObjFunc
	var_77_int = 0; // 0x10b PushV
	func_921(var_77_int); // 0x10c NEW_2
	SetNPCDescription(var_77_int); // 0x10e ObjFunc
	var_78_string = ""; // 0x110 PushV
	func_925(var_78_string); // 0x111 NEW_2
	SetPhoto(var_78_string); // 0x113 ObjFunc
	var_79_string = ""; // 0x115 PushV
	func_927(var_79_string); // 0x116 NEW_2
	SetPhoto2(var_79_string); // 0x118 ObjFunc
	var_80_int = 0; // 0x11a PushV
	func_1207(var_80_int); // 0x11b NEW_2
	SetPlayerName(var_80_int); // 0x11d ObjFunc
	var_26_int = -1; // 0x11f MovI
	IsOverrideActive(var_25_bool); // 0x120 Func
	var_88_bool = var_25_bool; // 0x122 Push
	if(var_88_bool == 0) goto Label_294; // 0x123 JumpB
	var_17_int = -2; // 0x124 MovI
	return 8; // 0x125 Return
	
Label_294:
	DoDialog(var_24_object); // 0x126 Func
	var_89_object = Obj(); var_90_object = Obj(); // 0x128 PushV
	var_89_object = var_18_object; // 0x129 Mov
	var_90_object = var_24_object; // 0x12a Mov
	TaskCall(2); // 0x12b TaskCall
	func_323(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object); // 0x12c NEW_2
	TaskReturn(); // 0x12d TaskReturn
	IsDialogEnd(var_27_bool); // 0x12f ObjFunc
	
Label_305:
	var_184_bool = var_27_bool == 0; // 0x131 Not
	if(var_184_bool == 0) goto Label_312; // 0x132 JumpB
	sync(); // 0x133 Func
	IsDialogEnd(var_27_bool); // 0x135 ObjFunc
	goto Label_305; // 0x137 Jump
	
Label_312:
	var_185_object = Obj(); // 0x138 PushV
	var_185_object = var_18_object; // 0x139 Mov
	func_748(); // 0x13a NEW_2
	StopDialog(var_24_object); // 0x13c Func
	GetReturnValue(var_26_int); // 0x13e ObjFunc
	var_17_int = var_26_int; // 0x140 Mov
	return 8; // 0x141 Return
}


func_892(var_35_float)
{
	var_36_float = 0; var_37_float = 0; // 0x37c PushV
	GetGameTime(var_37_float); // 0x37d Func
	var_35_float = var_37_float; // 0x37f Mov
	return 2; // 0x380 Return
}


func_766(var_128_string)
{
	var_129_bool = 0; var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_float = 0; var_134_float = 0; // 0x2fe PushV
	lshHasAnimation(var_132_bool, var_128_string); // 0x2ff Func
	var_135_bool = var_132_bool; // 0x301 Push
	if(var_135_bool == 0) goto Label_777; // 0x302 JumpB
	lshGetAnimTimes(var_128_string, var_133_float, var_134_float); // 0x303 Func
	var_136_bool = 0; // 0x305 PushB
	lshPlayAnimation(var_133_float, var_134_float, var_136_bool); // 0x306 Func
	goto Label_781; // 0x308 Jump
	
Label_781:
	return 6; // 0x30d Return
	
Label_777:
	var_137_string = "Can't find lsh animation : "; // 0x309 PushS
	var_138_int = var_137_string + var_128_string; // 0x30a Add
	Trace(var_138_int); // 0x30b Func
}


