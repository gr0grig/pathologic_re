task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xbc PushI
	if(var_9_int == 0) goto Label_331; // 0xbd JumpB
	func_934(); // 0xbf NEW_2
	var_11_int = 31828; // 0xc1 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc2 Eq
	if(var_12_bool == 0) goto Label_201; // 0xc3 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc4 PushV
	var_13_object = var_1_object; // 0xc5 MovT
	var_14_object = var_0_object; // 0xc6 MovT
	func_1007(); // 0xc7 NEW_2
	
Label_201:
	var_46_int = 31827; // 0xc9 PushI
	var_47_bool = var_7_cvector == var_46_int; // 0xca Eq
	if(var_47_bool == 0) goto Label_250; // 0xcb JumpB
	var_48_bool = 0; var_49_object = Obj(); // 0xcc PushV
	var_49_object = var_1_object; // 0xcd MovT
	func_1021(var_49_object); // 0xce NEW_2
	var_56_bool = var_48_bool == 0; // 0xd0 Not
	if(var_56_bool == 0) goto Label_230; // 0xd1 JumpB
	var_57_string = ""; // 0xd2 PushV
	var_57_string = "Neutral"; // 0xd3 MovS
	func_165(var_8_bool, var_57_string); // 0xd4 NEW_2
	var_74_int = 530461; // 0xd6 PushI
	SetMessage(var_74_int); // 0xd7 TObjFunc
	ClearReplies(); // 0xd9 TObjFunc
	var_75_int = 531473; // 0xdb PushI
	var_76_int = 32825; // 0xdc PushI
	var_77_int = 32824; // 0xdd PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xde TObjFunc
	var_78_int = 531479; // 0xe0 PushI
	var_79_int = 32825; // 0xe1 PushI
	var_80_int = 32830; // 0xe2 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0xe3 TObjFunc
	return 0; // 0xe5 Return
	
Label_230:
	var_81_string = ""; // 0xe6 PushV
	var_81_string = "Neutral"; // 0xe7 MovS
	func_165(var_8_bool, var_81_string); // 0xe8 NEW_2
	var_82_int = 530463; // 0xea PushI
	SetMessage(var_82_int); // 0xeb TObjFunc
	ClearReplies(); // 0xed TObjFunc
	var_83_int = 530464; // 0xef PushI
	var_84_int = -1; // 0xf0 PushI
	var_85_int = 31830; // 0xf1 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xf2 TObjFunc
	var_86_int = 531472; // 0xf4 PushI
	var_87_int = -1; // 0xf5 PushI
	var_88_int = 32823; // 0xf6 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xf7 TObjFunc
	return 0; // 0xf9 Return
	
Label_250:
	var_89_int = 32825; // 0xfa PushI
	var_90_bool = var_7_cvector == var_89_int; // 0xfb Eq
	if(var_90_bool == 0) goto Label_273; // 0xfc JumpB
	var_91_string = ""; // 0xfd PushV
	var_91_string = "Neutral"; // 0xfe MovS
	func_165(var_8_bool, var_91_string); // 0xff NEW_2
	var_92_int = 531474; // 0x101 PushI
	SetMessage(var_92_int); // 0x102 TObjFunc
	ClearReplies(); // 0x104 TObjFunc
	var_93_int = 531475; // 0x106 PushI
	var_94_int = 32827; // 0x107 PushI
	var_95_int = 32826; // 0x108 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x109 TObjFunc
	var_96_int = 531480; // 0x10b PushI
	var_97_int = 32827; // 0x10c PushI
	var_98_int = 32832; // 0x10d PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x10e TObjFunc
	return 0; // 0x110 Return
	
Label_273:
	var_99_int = 32827; // 0x111 PushI
	var_100_bool = var_7_cvector == var_99_int; // 0x112 Eq
	if(var_100_bool == 0) goto Label_296; // 0x113 JumpB
	var_101_string = ""; // 0x114 PushV
	var_101_string = "Neutral"; // 0x115 MovS
	func_165(var_8_bool, var_101_string); // 0x116 NEW_2
	var_102_int = 531476; // 0x118 PushI
	SetMessage(var_102_int); // 0x119 TObjFunc
	ClearReplies(); // 0x11b TObjFunc
	var_103_int = 531477; // 0x11d PushI
	var_104_int = 32829; // 0x11e PushI
	var_105_int = 32828; // 0x11f PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x120 TObjFunc
	var_106_int = 531481; // 0x122 PushI
	var_107_int = 32829; // 0x123 PushI
	var_108_int = 32834; // 0x124 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x125 TObjFunc
	return 0; // 0x127 Return
	
Label_296:
	var_109_int = 32829; // 0x128 PushI
	var_110_bool = var_7_cvector == var_109_int; // 0x129 Eq
	if(var_110_bool == 0) goto Label_319; // 0x12a JumpB
	var_111_string = ""; // 0x12b PushV
	var_111_string = "Neutral"; // 0x12c MovS
	func_165(var_8_bool, var_111_string); // 0x12d NEW_2
	var_112_int = 531478; // 0x12f PushI
	SetMessage(var_112_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_113_int = 530462; // 0x134 PushI
	var_114_int = -1; // 0x135 PushI
	var_115_int = 31828; // 0x136 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x137 TObjFunc
	var_116_int = 531482; // 0x139 PushI
	var_117_int = -1; // 0x13a PushI
	var_118_int = 32836; // 0x13b PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x13c TObjFunc
	return 0; // 0x13e Return
	
Label_319:
	var_3_string = 1; // 0x13f TMovB
	var_119_bool = 0; // 0x140 PushV
	func_1112(var_119_bool); // 0x141 NEW_2
	if(var_119_bool == 0) goto Label_327; // 0x143 JumpB
	lshStopAnimation(); // 0x144 Func
	goto Label_329; // 0x146 Jump
	
Label_329:
	return 0; // 0x149 Return
	
Label_327:
	StopAnimation(); // 0x147 Func
	
Label_331:
	return 0; // 0x14b Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x158 PushV
	var_10_string = "cleanup"; // 0x159 PushS
	var_11_bool = var_7_string == var_10_string; // 0x15a Eq
	if(var_11_bool == 0) goto Label_359; // 0x15b JumpB
	var_1_object = 1; // 0x15c TMovB
	IsLoaded(var_9_bool); // 0x15d Func
	var_12_bool = var_9_bool == 0; // 0x15f Not
	if(var_12_bool == 0) goto Label_358; // 0x160 JumpB
	var_13_object = Obj(); // 0x161 PushV
	func_941(var_13_object); // 0x162 NEW_2
	RemoveActor(var_13_object); // 0x164 Func
	
Label_358:
	goto Label_363; // 0x166 Jump
	
Label_363:
	return 2; // 0x16b Return
	
Label_359:
	var_16_string = "restore"; // 0x167 PushS
	var_17_bool = var_7_string == var_16_string; // 0x168 Eq
	if(var_17_bool == 0) goto Label_363; // 0x169 JumpB
	var_1_object = 0; // 0x16a TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x16c PushT
	if(var_7_object == 0) goto Label_373; // 0x16d JumpB
	var_8_object = Obj(); // 0x16e PushV
	func_941(var_8_object); // 0x16f NEW_2
	RemoveActor(var_8_object); // 0x171 Func
	Hold(); // 0x173 Func
	
Label_373:
	func_488(); // 0x176 NEW_2
	return 0; // 0x178 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_503(); // 0x17a NEW_2
	return 0; // 0x17c Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x1c3 PushI
	var_9_bool = var_7_int == var_8_int; // 0x1c4 Eq
	if(var_9_bool == 0) goto Label_487; // 0x1c5 JumpB
	func_446(); // 0x1c7 NEW_2
	var_11_bool = 0; // 0x1c9 PushV
	var_11_bool = 0; // 0x1ca MovB
	var_12_bool = 0; // 0x1cb PushV
	func_660(var_12_bool); // 0x1cc NEW_2
	if(var_12_bool == 0) goto Label_468; // 0x1ce JumpB
	var_15_bool = 0; // 0x1cf PushV
	func_415(var_15_bool); // 0x1d0 NEW_2
	if(var_15_bool == 0) goto Label_468; // 0x1d2 JumpB
	var_11_bool = 1; // 0x1d3 MovB
	
Label_468:
	if(var_11_bool == 0) goto Label_481; // 0x1d4 JumpB
	var_32_bool = 0; // 0x1d5 PushV
	func_395(var_32_bool); // 0x1d6 NEW_2
	if(var_32_bool == 0) goto Label_480; // 0x1d8 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x1d9 PushV
	var_53_object = Obj(); // 0x1da PushV
	func_941(var_53_object); // 0x1db NEW_2
	var_52_object = var_53_object; // 0x1dc Mov
	func_808(var_52_object); // 0x1de NEW_2
	
Label_480:
	goto Label_487; // 0x1e0 Jump
	
Label_487:
	return 0; // 0x1e7 Return
	
Label_481:
	func_410(var_7_int); // 0x1e2 NEW_2
	func_437(); // 0x1e5 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x205 Push
	if(var_8_bool == 0) goto Label_523; // 0x206 JumpB
	func_437(); // 0x208 NEW_2
	goto Label_527; // 0x20a Jump
	
Label_527:
	return 0; // 0x20f Return
	
Label_523:
	var_14_string = ""; // 0x20b PushV
	var_14_string = "Neutral"; // 0x20c MovS
	func_888(var_14_string); // 0x20d NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x210 PushV
	IsOverrideActive(var_9_bool); // 0x211 Func
	var_10_bool = var_9_bool == 0; // 0x213 Not
	if(var_10_bool == 0) goto Label_556; // 0x214 JumpB
	EventDisable(0); // 0x215 EventDisable
	func_628(); // 0x217 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x219 PushV
	var_12_object = var_7_object; // 0x21a Mov
	func_651(var_12_object); // 0x21b NEW_2
	EventEnable(0); // 0x21d EventEnable
	var_25_object = Obj(); // 0x21e PushV
	var_25_object = var_7_object; // 0x21f Mov
	func_332(var_25_object); // 0x220 NEW_2
	var_266_string = ""; // 0x222 PushV
	var_266_string = "Neutral"; // 0x223 MovS
	func_888(var_266_string); // 0x224 NEW_2
	func_446(); // 0x227 NEW_2
	func_437(); // 0x22a NEW_2
	
Label_556:
	return 2; // 0x22c Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_381(var_6_bool); // 0x155 NEW_2
	return 0; // 0x157 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_665(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1106(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1104(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1108(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1110(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1087(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_941(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_750(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_258_bool = var_36_bool == 0; // 0x3f Not
	if(var_258_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_259_object = Obj(); // 0x46 PushV
	var_259_object = var_27_object; // 0x47 Mov
	func_733(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_641(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x281 PushV
	GetPosition(var_20_cvector); // 0x282 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x284 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x285 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x286 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x287 Func
	var_15_bool = var_22_bool; // 0x289 Mov
	return 6; // 0x28a Return
}


func_904(var_212_string, var_213_bool)
{
	var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_float = 0; var_221_float = 0; // 0x388 PushV
	lshHasAnimation(var_219_bool, var_212_string); // 0x389 Func
	var_222_bool = var_219_bool; // 0x38b Push
	if(var_222_bool == 0) goto Label_914; // 0x38c JumpB
	lshGetAnimTimes(var_212_string, var_220_float, var_221_float); // 0x38d Func
	lshPlayAnimation(var_220_float, var_221_float, var_213_bool); // 0x38f Func
	goto Label_918; // 0x391 Jump
	
Label_918:
	return 6; // 0x396 Return
	
Label_914:
	var_223_string = "Can't find lsh animation : "; // 0x392 PushS
	var_224_int = var_223_string + var_212_string; // 0x393 Add
	Trace(var_224_int); // 0x394 Func
}


func_1033()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x409 PushV
	var_19_int = 559; // 0x40a PushI
	var_20_int = 2; // 0x40b PushI
	var_21_int = 530538; // 0x40c PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x40d Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x40f PushV
	var_23_object = var_18_object; // 0x410 Mov
	var_24_int = 550; // 0x411 MovI
	func_1059(var_22_bool, var_23_object, var_24_int); // 0x412 NEW_2
	return 2; // 0x414 Return
}


func_651(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x28b PushV
	GetPosition(var_14_cvector); // 0x28c ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x28e PushV
	var_16_cvector = var_14_cvector; // 0x28f Mov
	func_641(var_15_bool, var_16_cvector); // 0x290 NEW_2
	var_11_bool = var_15_bool; // 0x291 Mov
	return 2; // 0x293 Return
}


func_395(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x18b PushV
	var_35_string = "player"; // 0x18c PushS
	FindActor(var_34_object, var_35_string); // 0x18d Func
	var_36_bool = var_34_object == 0; // 0x18f Not
	if(var_36_bool == 0) goto Label_403; // 0x190 JumpB
	var_32_bool = 0; // 0x191 MovB
	return 2; // 0x192 Return
	
Label_403:
	var_37_bool = 0; var_38_object = Obj(); // 0x193 PushV
	var_38_object = var_34_object; // 0x194 Mov
	func_651(var_38_object); // 0x195 NEW_2
	var_32_bool = var_37_bool; // 0x196 Mov
	return 2; // 0x198 Return
}


func_1021(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x3fe PushV
	var_202_string = "b10q04LaskaTalk"; // 0x3ff MovS
	func_957(var_201_int, var_202_string); // 0x400 NEW_2
	var_205_int = 9; // 0x402 PushI
	var_206_bool = var_201_int == var_205_int; // 0x403 Eq
	if(var_206_bool == 0) goto Label_1031; // 0x404 JumpB
	var_199_bool = 1; // 0x405 MovB
	return 0; // 0x406 Return
	
Label_1031:
	var_199_bool = 0; // 0x407 MovB
	return 0; // 0x408 Return
}


func_660(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x294 PushV
	IsLoaded(var_9_bool); // 0x295 Func
	var_7_bool = var_9_bool; // 0x297 Mov
	return 2; // 0x298 Return
}


func_1046(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x416 PushV
	GetDiaryRoot(var_33_object); // 0x417 Func
	var_34_bool = var_33_object == 0; // 0x419 Not
	if(var_34_bool == 0) goto Label_1056; // 0x41a JumpB
	var_35_string = "Can't retrieve diary root"; // 0x41b PushS
	Trace(var_35_string); // 0x41c Func
	var_31_object = 0; // 0x41e MovB
	return 2; // 0x41f Return
	
Label_1056:
	var_31_object = var_33_object; // 0x420 Mov
	return 2; // 0x421 Return
}


func_919(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x397 PushV
	var_135_bool = 0; // 0x398 PushV
	func_1112(var_135_bool); // 0x399 NEW_2
	if(var_135_bool == 0) goto Label_932; // 0x39b JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x39c Func
	var_136_bool = var_134_bool; // 0x39e Push
	if(var_136_bool == 0) goto Label_932; // 0x39f JumpB
	lshPlaySpeech(var_132_string); // 0x3a0 Func
	var_131_bool = 1; // 0x3a2 MovB
	return 2; // 0x3a3 Return
	
Label_932:
	var_131_bool = 0; // 0x3a4 MovB
	return 2; // 0x3a5 Return
}


func_665(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x299 PushV
	GetPosition(var_50_cvector); // 0x29a ObjFunc
	GetEyesHeight(var_49_float); // 0x29c ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x29e PushE
	var_58_float = var_58_float + var_49_float; // 0x29f Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2a0 PopE
	GetPosition(var_51_cvector); // 0x2a1 Func
	GetEyesHeight(var_49_float); // 0x2a3 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x2a5 PushE
	var_59_float = var_59_float + var_49_float; // 0x2a6 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x2a7 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x2a8 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x2a9 PushE
	var_60_float = 0; // 0x2aa MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x2ab PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x2ac Or
	var_62_float = sqrt(var_61_int); // 0x2ad Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x2ae Div2
	var_53_cvector = -var_52_cvector; // 0x2af Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x2b0 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x2b1 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x2b2 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x2b3 Xor2
	func_947(var_64_cvector, var_65_cvector); // 0x2b4 NEW_2
	var_72_int = 25; // 0x2b6 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x2b7 Mult
	var_74_int = var_63_float + var_73_float; // 0x2b8 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x2b9 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x2ba Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x2bb Add2
	IsOverrideActive(var_56_bool); // 0x2bc Func
	var_76_bool = var_56_bool; // 0x2be Push
	if(var_76_bool == 0) goto Label_706; // 0x2bf JumpB
	var_37_bool = 0; // 0x2c0 MovB
	return 18; // 0x2c1 Return
	
Label_706:
	StopWorld(); // 0x2c2 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x2c4 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x2c6 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x2c7 PushE
	Rotate(var_77_float, var_78_float); // 0x2c8 Func
	var_79_bool = 0; // 0x2ca PushV
	func_1112(var_79_bool); // 0x2cb NEW_2
	if(var_79_bool == 0) goto Label_719; // 0x2cd JumpB
	goto Label_727; // 0x2ce Jump
	
Label_727:
	CameraWaitForPlayFinish(); // 0x2d7 Func
	ResumeWorld(); // 0x2d9 Func
	var_37_bool = 1; // 0x2db MovB
	return 18; // 0x2dc Return
	
Label_719:
	var_80_string = "head"; // 0x2cf PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x2d0 Func
	var_81_bool = var_57_bool; // 0x2d2 Push
	if(var_81_bool == 0) goto Label_727; // 0x2d3 JumpB
	var_82_string = "head"; // 0x2d4 PushS
	LookAsyncCamera(var_82_string); // 0x2d5 Func
}


func_410(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x19a PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x19b PushE
	RotateAsync(var_84_float, var_85_float); // 0x19c Func
	return 0; // 0x19e Return
}


func_415(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x19f PushV
	var_20_string = "player"; // 0x1a0 PushS
	FindActor(var_18_object, var_20_string); // 0x1a1 Func
	var_21_bool = var_18_object == 0; // 0x1a3 Not
	if(var_21_bool == 0) goto Label_423; // 0x1a4 JumpB
	var_15_bool = 0; // 0x1a5 MovB
	return 4; // 0x1a6 Return
	
Label_423:
	var_22_float = 0; var_23_object = Obj(); // 0x1a7 PushV
	var_23_object = var_18_object; // 0x1a8 Mov
	func_633(var_23_object); // 0x1a9 NEW_2
	var_30_float = 90000.0; // 0x1ab PushF
	var_31_bool = var_22_float > var_30_float; // 0x1ac GT
	if(var_31_bool == 0) goto Label_432; // 0x1ad JumpB
	var_15_bool = 0; // 0x1ae MovB
	return 4; // 0x1af Return
	
Label_432:
	CanSee(var_19_bool, var_18_object); // 0x1b0 Func
	var_15_bool = var_19_bool; // 0x1b2 Mov
	return 4; // 0x1b3 Return
}


func_1059(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x423 PushV
	var_31_object = Obj(); // 0x424 PushV
	func_1046(var_31_object); // 0x425 NEW_2
	var_28_object = var_31_object; // 0x426 Mov
	Find(var_24_int, var_29_object); // 0x428 ObjFunc
	var_36_bool = var_29_object == 0; // 0x42a Not
	if(var_36_bool == 0) goto Label_1074; // 0x42b JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x42c PushS
	var_38_int = var_37_string + var_24_int; // 0x42d Add
	Trace(var_38_int); // 0x42e Func
	var_22_bool = 0; // 0x430 MovB
	return 6; // 0x431 Return
	
Label_1074:
	AddChild(var_23_object); // 0x432 ObjFunc
	var_39_int = 7; // 0x434 PushI
	SendWorldWndMessage(var_39_int); // 0x435 Func
	GetCategory(var_30_int); // 0x437 ObjFunc
	SetDiarySection(var_30_int); // 0x439 Func
	var_22_bool = 0; // 0x43b MovB
	return 6; // 0x43c Return
}


func_165(var_2_object, var_208_string)
{
	var_209_bool = 0; // 0xa6 PushV
	func_1112(var_209_bool); // 0xa7 NEW_2
	var_210_bool = var_209_bool == 0; // 0xa9 Not
	if(var_210_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_211_bool = var_208_string == var_2_object; // 0xac Eq
	if(var_211_bool == 0) goto Label_175; // 0xad JumpB
	return 0; // 0xae Return
	
Label_175:
	var_212_string = ""; var_213_bool = 0; // 0xaf PushV
	var_212_string = var_208_string; // 0xb0 Mov
	var_214_string = ""; // 0xb1 PushS
	var_215_bool = var_208_string == var_214_string; // 0xb2 Eq
	if(var_215_bool == 0) goto Label_182; // 0xb3 JumpB
	var_213_bool = 0; // 0xb4 MovB
	goto Label_183; // 0xb5 Jump
	
Label_183:
	func_904(var_212_string, var_213_bool); // 0xb7 NEW_2
	var_2_object = var_208_string; // 0xb9 TMov
	return 0; // 0xba Return
	
Label_182:
	var_213_bool = 1; // 0xb6 MovB
}


func_934()
{
	var_10_bool = 0; // 0x3a6 PushV
	func_1112(var_10_bool); // 0x3a7 NEW_2
	if(var_10_bool == 0) goto Label_940; // 0x3a9 JumpB
	lshStopSpeech(); // 0x3aa Func
	
Label_940:
	return 0; // 0x3ac Return
}


func_808(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x328 PushV
	var_115_string = "c"; // 0x329 MovS
	var_116_int = 0; // 0x32a MovI
	
Label_811:
	var_120_int = 1; // 0x32b PushI
	if(var_120_int == 0) goto Label_824; // 0x32c JumpB
	var_121_int = 1; // 0x32d PushI
	var_122_int = var_116_int + var_121_int; // 0x32e Add
	var_123_int = var_115_string + var_122_int; // 0x32f Add
	HasProperty(var_123_int, var_117_bool); // 0x330 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x332 Not
	if(var_124_bool == 0) goto Label_821; // 0x333 JumpB
	goto Label_824; // 0x334 Jump
	
Label_824:
	var_125_bool = var_116_int == 0; // 0x338 Not
	if(var_125_bool == 0) goto Label_828; // 0x339 JumpB
	var_108_bool = 0; // 0x33a MovB
	return 10; // 0x33b Return
	
Label_828:
	var_118_int = 0; // 0x33c MovI
	var_126_int = 1; // 0x33d PushI
	var_127_bool = var_116_int > var_126_int; // 0x33e GT
	if(var_127_bool == 0) goto Label_834; // 0x33f JumpB
	irand(var_118_int, var_116_int); // 0x340 Func
	
Label_834:
	var_128_int = 1; // 0x342 PushI
	var_129_int = var_118_int + var_128_int; // 0x343 Add
	var_130_int = var_115_string + var_129_int; // 0x344 Add
	GetProperty(var_130_int, var_119_string); // 0x345 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x347 PushV
	var_132_string = var_119_string; // 0x348 Mov
	func_919(var_131_bool, var_132_string); // 0x349 NEW_2
	var_108_bool = var_131_bool; // 0x34a Mov
	return 10; // 0x34c Return
	
Label_821:
	var_137_int = 1; // 0x335 PushI
	var_116_int = var_116_int + var_137_int; // 0x336 Add2
	goto Label_811; // 0x337 Jump
}


func_941(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x3ad PushV
	self(var_101_object); // 0x3ae Func
	var_99_object = var_101_object; // 0x3b0 Mov
	return 2; // 0x3b1 Return
}


func_557()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x22d PushV
	WaitForAnimEnd(); // 0x22e Func
	var_23_bool = 0; // 0x230 PushV
	func_660(var_23_bool); // 0x231 NEW_2
	var_24_bool = var_23_bool == 0; // 0x233 Not
	if(var_24_bool == 0) goto Label_566; // 0x234 JumpB
	return 12; // 0x235 Return
	
Label_566:
	var_25_int = 0; // 0x236 PushV
	func_990(var_25_int); // 0x237 NEW_2
	var_17_int = var_25_int; // 0x238 Mov
	var_18_int = 0; // 0x23a MovI
	
Label_571:
	var_38_bool = 0; // 0x23b PushV
	var_38_bool = 0; // 0x23c MovB
	var_39_int = 5; // 0x23d PushI
	var_40_bool = var_18_int < var_39_int; // 0x23e LT
	if(var_40_bool == 0) goto Label_581; // 0x23f JumpB
	var_41_bool = 0; // 0x240 PushV
	func_660(var_41_bool); // 0x241 NEW_2
	if(var_41_bool == 0) goto Label_581; // 0x243 JumpB
	var_38_bool = 1; // 0x244 MovB
	
Label_581:
	if(var_38_bool == 0) goto Label_623; // 0x245 JumpB
	var_42_bool = var_17_int == 0; // 0x246 Not
	if(var_42_bool == 0) goto Label_591; // 0x247 JumpB
	var_43_int = 3; // 0x248 PushI
	Sleep(var_43_int, var_19_bool); // 0x249 Func
	var_44_bool = var_19_bool == 0; // 0x24b Not
	if(var_44_bool == 0) goto Label_590; // 0x24c JumpB
	goto Label_623; // 0x24d Jump
	
Label_623:
	ResetAAS(); // 0x26f Func
	return 12; // 0x271 Return
	
Label_590:
	goto Label_612; // 0x24e Jump
	
Label_612:
	var_45_bool = 0; // 0x264 PushV
	func_626(var_45_bool); // 0x265 NEW_2
	var_46_bool = var_45_bool == 0; // 0x267 Not
	if(var_46_bool == 0) goto Label_618; // 0x268 JumpB
	goto Label_623; // 0x269 Jump
	
Label_618:
	ResetAAS(); // 0x26a Func
	var_47_int = 1; // 0x26c PushI
	var_18_int = var_18_int + var_47_int; // 0x26d Add2
	goto Label_571; // 0x26e Jump
	
Label_591:
	irand(var_20_int, var_17_int); // 0x24f Func
	var_48_int = 5; // 0x251 PushI
	irand(var_21_int, var_48_int); // 0x252 Func
	var_49_int = 0; // 0x254 PushI
	var_50_bool = var_21_int != var_49_int; // 0x255 Neq
	if(var_50_bool == 0) goto Label_600; // 0x256 JumpB
	var_20_int = 0; // 0x257 MovI
	
Label_600:
	var_51_string = "all"; // 0x258 PushS
	var_52_string = ""; var_53_int = 0; // 0x259 PushV
	var_53_int = var_20_int; // 0x25a Mov
	func_983(var_52_string, var_53_int); // 0x25b NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x25d Func
	WaitForAnimEnd(var_22_bool); // 0x25f Func
	var_54_bool = var_22_bool == 0; // 0x261 Not
	if(var_54_bool == 0) goto Label_612; // 0x262 JumpB
	goto Label_623; // 0x263 Jump
}


func_947(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x3b3 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x3b4 Or
	var_68_float = sqrt(var_69_int); // 0x3b5 Sqrt2
	var_70_float = 0.0; // 0x3b6 PushF
	var_71_bool = var_68_float < var_70_float; // 0x3b7 LT
	if(var_71_bool == 0) goto Label_955; // 0x3b8 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x3b9 MovV
	return 2; // 0x3ba Return
	
Label_955:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x3bb Div2
	return 2; // 0x3bc Return
}


func_437()
{
	var_268_float = 0; var_269_float = 0; // 0x1b5 PushV
	var_270_int = 8; // 0x1b6 PushI
	var_271_int = 16; // 0x1b7 PushI
	rand(var_269_float, var_270_int, var_271_int); // 0x1b8 Func
	var_272_int = 10; // 0x1ba PushI
	SetTimer(var_272_int, var_269_float); // 0x1bb Func
	return 2; // 0x1bd Return
}


func_957(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x3bd PushV
	GetVariable(var_202_string, var_204_int); // 0x3be Func
	var_201_int = var_204_int; // 0x3c0 Mov
	return 2; // 0x3c1 Return
}


func_446()
{
	var_267_int = 10; // 0x1be PushI
	KillTimer(var_267_int); // 0x1bf Func
	return 0; // 0x1c1 Return
}


func_1087(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x43f PushV
	var_91_string = "branch"; // 0x440 PushS
	GetVariable(var_91_string, var_90_int); // 0x441 Func
	var_92_int = 0; // 0x443 PushI
	var_93_bool = var_90_int == var_92_int; // 0x444 Eq
	if(var_93_bool == 0) goto Label_1097; // 0x445 JumpB
	var_88_int = 1; // 0x446 MovI
	return 2; // 0x447 Return
	
Label_1097:
	var_94_int = 1; // 0x449 PushI
	var_95_bool = var_90_int == var_94_int; // 0x44a Eq
	if(var_95_bool == 0) goto Label_1102; // 0x44b JumpB
	var_88_int = 2; // 0x44c MovI
	return 2; // 0x44d Return
	
Label_1102:
	var_88_int = 3; // 0x44e MovI
	return 2; // 0x44f Return
}


func_962(var_40_bool, var_41_string, var_42_string)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x3c2 PushV
	FindActor(var_44_object, var_41_string); // 0x3c3 Func
	var_45_bool = var_44_object == 0; // 0x3c5 NullEq
	if(var_45_bool == 0) goto Label_969; // 0x3c6 JumpB
	var_40_bool = 0; // 0x3c7 MovB
	return 2; // 0x3c8 Return
	
Label_969:
	Trigger(var_44_object, var_42_string); // 0x3c9 Func
	var_40_bool = 1; // 0x3cb MovB
	return 2; // 0x3cc Return
}


func_332(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x14d PushV
	var_27_object = var_25_object; // 0x14e Mov
	TaskCall(0); // 0x14f TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x150 NEW_2
	TaskReturn(); // 0x151 TaskReturn
	return 0; // 0x153 Return
}


func_845(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x34d PushV
	var_151_string = "d"; // 0x34e PushS
	var_152_int = 0; // 0x34f PushV
	func_974(var_152_int); // 0x350 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x352 Add
	var_159_string = "m"; // 0x353 PushS
	var_146_string = var_158_int + var_159_string; // 0x354 Add2
	var_147_int = 0; // 0x355 MovI
	
Label_854:
	var_160_int = 1; // 0x356 PushI
	if(var_160_int == 0) goto Label_867; // 0x357 JumpB
	var_161_int = 1; // 0x358 PushI
	var_162_int = var_147_int + var_161_int; // 0x359 Add
	var_163_int = var_146_string + var_162_int; // 0x35a Add
	HasProperty(var_163_int, var_148_bool); // 0x35b ObjFunc
	var_164_bool = var_148_bool == 0; // 0x35d Not
	if(var_164_bool == 0) goto Label_864; // 0x35e JumpB
	goto Label_867; // 0x35f Jump
	
Label_867:
	var_165_bool = var_147_int == 0; // 0x363 Not
	if(var_165_bool == 0) goto Label_871; // 0x364 JumpB
	var_139_bool = 0; // 0x365 MovB
	return 10; // 0x366 Return
	
Label_871:
	var_149_int = 0; // 0x367 MovI
	var_166_int = 1; // 0x368 PushI
	var_167_bool = var_147_int > var_166_int; // 0x369 GT
	if(var_167_bool == 0) goto Label_877; // 0x36a JumpB
	irand(var_149_int, var_147_int); // 0x36b Func
	
Label_877:
	var_168_int = 1; // 0x36d PushI
	var_169_int = var_149_int + var_168_int; // 0x36e Add
	var_170_int = var_146_string + var_169_int; // 0x36f Add
	GetProperty(var_170_int, var_150_string); // 0x370 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x372 PushV
	var_172_string = var_150_string; // 0x373 Mov
	func_919(var_171_bool, var_172_string); // 0x374 NEW_2
	var_139_bool = var_171_bool; // 0x375 Mov
	return 10; // 0x377 Return
	
Label_864:
	var_173_int = 1; // 0x360 PushI
	var_147_int = var_147_int + var_173_int; // 0x361 Add2
	goto Label_854; // 0x362 Jump
}


func_974(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x3ce PushV
	GetGameTime(var_154_float); // 0x3cf Func
	var_155_int = 1; // 0x3d1 PushI
	var_156_int = 0; // 0x3d2 PushV
	var_157_int = 24; // 0x3d3 PushI
	var_156_int = var_154_float / var_154_float; // 0x3d4 Div2
	var_152_int = var_155_int + var_156_int; // 0x3d5 Add2
	return 2; // 0x3d6 Return
}


func_1104(var_85_int)
{
	var_85_int = 515542; // 0x450 MovI
	return 0; // 0x451 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_135; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_1021(var_200_object); // 0x59 NEW_2
	var_207_bool = var_199_bool == 0; // 0x5b Not
	if(var_207_bool == 0) goto Label_113; // 0x5c JumpB
	var_208_string = ""; // 0x5d PushV
	var_208_string = "Neutral"; // 0x5e MovS
	func_165(var_193_object, var_208_string); // 0x5f NEW_2
	var_225_int = 530461; // 0x61 PushI
	SetMessage(var_225_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_226_int = 531473; // 0x66 PushI
	var_227_int = 32825; // 0x67 PushI
	var_228_int = 32824; // 0x68 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x69 TObjFunc
	var_229_int = 531479; // 0x6b PushI
	var_230_int = 32825; // 0x6c PushI
	var_231_int = 32830; // 0x6d PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6e TObjFunc
	goto Label_135; // 0x70 Jump
	
Label_135:
	var_232_bool = 0; // 0x87 PushV
	func_1112(var_232_bool); // 0x88 NEW_2
	if(var_232_bool == 0) goto Label_150; // 0x8a JumpB
	
Label_139:
	lshWaitForAnimEnd(); // 0x8b Func
	var_233_string = var_3_string; // 0x8d PushT
	if(var_233_string == 0) goto Label_144; // 0x8e JumpB
	goto Label_149; // 0x8f Jump
	
Label_149:
	goto Label_164; // 0x95 Jump
	
Label_164:
	return 0; // 0xa4 Return
	
Label_144:
	var_234_string = ""; // 0x90 PushV
	var_234_string = var_2_object; // 0x91 MovT
	func_888(var_234_string); // 0x92 NEW_2
	goto Label_139; // 0x94 Jump
	
Label_150:
	var_245_string = "all"; // 0x96 PushS
	var_246_string = "idle"; // 0x97 PushS
	PlayAnimation(var_245_string, var_246_string); // 0x98 Func
	
Label_154:
	WaitForAnimEnd(); // 0x9a Func
	var_247_string = var_3_string; // 0x9c PushT
	if(var_247_string == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_159:
	var_248_string = "all"; // 0x9f PushS
	var_249_string = "idle"; // 0xa0 PushS
	PlayAnimation(var_248_string, var_249_string); // 0xa1 Func
	goto Label_154; // 0xa3 Jump
	
Label_113:
	var_250_string = ""; // 0x71 PushV
	var_250_string = "Neutral"; // 0x72 MovS
	func_165(var_193_object, var_250_string); // 0x73 NEW_2
	var_251_int = 530463; // 0x75 PushI
	SetMessage(var_251_int); // 0x76 TObjFunc
	ClearReplies(); // 0x78 TObjFunc
	var_252_int = 530464; // 0x7a PushI
	var_253_int = -1; // 0x7b PushI
	var_254_int = 31830; // 0x7c PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x7d TObjFunc
	var_255_int = 531472; // 0x7f PushI
	var_256_int = -1; // 0x80 PushI
	var_257_int = 32823; // 0x81 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x82 TObjFunc
	goto Label_135; // 0x84 Jump
}


func_1106(var_84_int)
{
	var_84_int = 502867; // 0x452 MovI
	return 0; // 0x453 Return
}


func_1108(var_86_string)
{
	var_86_string = "ui/NPC_Laska.png"; // 0x454 MovS
	return 0; // 0x455 Return
}


func_1110(var_87_string)
{
	var_87_string = "ui/NPC_Laska_b.png"; // 0x456 MovS
	return 0; // 0x457 Return
}


func_983(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x3d7 PushV
	var_34_string = "idle"; // 0x3d8 MovS
	var_35_int = var_32_int; // 0x3d9 Push
	if(var_35_int == 0) goto Label_988; // 0x3da JumpB
	var_34_string = var_34_string + var_32_int; // 0x3db Add2
	
Label_988:
	var_31_string = var_34_string; // 0x3dc Mov
	return 2; // 0x3dd Return
}


func_1112(var_79_bool)
{
	var_79_bool = 1; // 0x458 MovB
	return 0; // 0x459 Return
}


func_733()
{
	var_260_bool = 0; var_261_bool = 0; // 0x2dd PushV
	CameraSwitchToNormal(); // 0x2de Func
	var_262_bool = 0; // 0x2e0 PushV
	func_1112(var_262_bool); // 0x2e1 NEW_2
	if(var_262_bool == 0) goto Label_741; // 0x2e3 JumpB
	goto Label_749; // 0x2e4 Jump
	
Label_749:
	return 2; // 0x2ed Return
	
Label_741:
	var_263_string = "head"; // 0x2e5 PushS
	HasAnimationTrack(var_261_bool, var_263_string); // 0x2e6 Func
	var_264_bool = var_261_bool; // 0x2e8 Push
	if(var_264_bool == 0) goto Label_749; // 0x2e9 JumpB
	var_265_string = "head"; // 0x2ea PushS
	UnlookAsync(var_265_string); // 0x2eb Func
}


func_990(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x3de PushV
	var_28_int = 0; // 0x3df MovI
	
Label_992:
	var_30_string = "all"; // 0x3e0 PushS
	var_31_string = ""; var_32_int = 0; // 0x3e1 PushV
	var_32_int = var_28_int; // 0x3e2 Mov
	func_983(var_31_string, var_32_int); // 0x3e3 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x3e5 Func
	var_36_bool = var_29_bool == 0; // 0x3e7 Not
	if(var_36_bool == 0) goto Label_1002; // 0x3e8 JumpB
	goto Label_1005; // 0x3e9 Jump
	
Label_1005:
	var_25_int = var_28_int; // 0x3ed Mov
	return 4; // 0x3ee Return
	
Label_1002:
	var_37_int = 1; // 0x3ea PushI
	var_28_int = var_28_int + var_37_int; // 0x3eb Add2
	goto Label_992; // 0x3ec Jump
}


func_488()
{
	func_628(); // 0x1e9 NEW_2
	func_446(); // 0x1ec NEW_2
	lshStopSpeech(); // 0x1ee Func
	lshStopAnimation(); // 0x1f0 Func
	StopAsync(); // 0x1f2 Func
	Hold(); // 0x1f4 Func
	return 0; // 0x1f6 Return
}


func_750(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x2ee PushV
	var_106_string = "voice_common"; // 0x2ef PushS
	GetVariable(var_106_string, var_104_int); // 0x2f0 Func
	var_107_int = var_104_int; // 0x2f2 Push
	if(var_107_int == 0) goto Label_788; // 0x2f3 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x2f4 PushV
	var_109_object = var_98_object; // 0x2f5 Mov
	func_808(var_109_object); // 0x2f6 NEW_2
	var_138_bool = var_108_bool == 0; // 0x2f8 Not
	if(var_138_bool == 0) goto Label_770; // 0x2f9 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x2fa PushV
	var_140_object = var_98_object; // 0x2fb Mov
	func_845(var_140_object); // 0x2fc NEW_2
	var_174_bool = var_139_bool == 0; // 0x2fe Not
	if(var_174_bool == 0) goto Label_770; // 0x2ff JumpB
	var_97_bool = 0; // 0x300 MovB
	return 4; // 0x301 Return
	
Label_770:
	var_175_int = 2; // 0x302 PushI
	irand(var_105_int, var_175_int); // 0x303 Func
	var_176_int = var_105_int; // 0x305 Push
	if(var_176_int == 0) goto Label_783; // 0x306 JumpB
	var_177_string = "voice_common"; // 0x307 PushS
	var_178_int = 1; // 0x308 PushI
	var_179_int = var_104_int + var_178_int; // 0x309 Add
	var_180_int = 3; // 0x30a PushI
	var_181_int = var_179_int / var_180_int; // 0x30b Mod
	SetVariable(var_177_string, var_181_int); // 0x30c Func
	goto Label_787; // 0x30e Jump
	
Label_787:
	goto Label_806; // 0x313 Jump
	
Label_806:
	var_97_bool = 1; // 0x326 MovB
	return 4; // 0x327 Return
	
Label_783:
	var_182_string = "voice_common"; // 0x30f PushS
	var_183_int = 0; // 0x310 PushI
	SetVariable(var_182_string, var_183_int); // 0x311 Func
	
Label_788:
	var_184_bool = 0; var_185_object = Obj(); // 0x314 PushV
	var_185_object = var_98_object; // 0x315 Mov
	func_845(var_185_object); // 0x316 NEW_2
	var_186_bool = var_184_bool == 0; // 0x318 Not
	if(var_186_bool == 0) goto Label_802; // 0x319 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x31a PushV
	var_188_object = var_98_object; // 0x31b Mov
	func_808(var_188_object); // 0x31c NEW_2
	var_189_bool = var_187_bool == 0; // 0x31e Not
	if(var_189_bool == 0) goto Label_802; // 0x31f JumpB
	var_97_bool = 0; // 0x320 MovB
	return 4; // 0x321 Return
	
Label_802:
	var_190_string = "voice_common"; // 0x322 PushS
	var_191_int = 1; // 0x323 PushI
	SetVariable(var_190_string, var_191_int); // 0x324 Func
}


func_1007()
{
	var_15_string = "b10q04LaskaTalk"; // 0x3f0 PushS
	var_16_int = 9; // 0x3f1 PushI
	SetVariable(var_15_string, var_16_int); // 0x3f2 Func
	func_1033(); // 0x3f5 NEW_2
	var_40_bool = 0; var_41_string = ""; var_42_string = ""; // 0x3f7 PushV
	var_41_string = "quest_b10_04"; // 0x3f8 MovS
	var_42_string = "restore_laska"; // 0x3f9 MovS
	func_962(var_40_bool, var_41_string, var_42_string); // 0x3fa NEW_2
	return 0; // 0x3fc Return
}


func_626(var_45_bool)
{
	var_45_bool = 1; // 0x272 MovB
	return 0; // 0x273 Return
}


func_628()
{
	StopAnimation(); // 0x274 Func
	StopGroup0(); // 0x276 Func
	return 0; // 0x278 Return
}


func_503()
{
	StopGroup0(); // 0x1f7 Func
	func_446(); // 0x1fa NEW_2
	var_8_string = ""; // 0x1fc PushV
	var_8_string = "Neutral"; // 0x1fd MovS
	func_888(var_8_string); // 0x1fe NEW_2
	func_437(); // 0x201 NEW_2
	return 0; // 0x203 Return
}


func_888(var_234_string)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0; // 0x378 PushV
	lshHasAnimation(var_238_bool, var_234_string); // 0x379 Func
	var_241_bool = var_238_bool; // 0x37b Push
	if(var_241_bool == 0) goto Label_899; // 0x37c JumpB
	lshGetAnimTimes(var_234_string, var_239_float, var_240_float); // 0x37d Func
	var_242_bool = 0; // 0x37f PushB
	lshPlayAnimation(var_239_float, var_240_float, var_242_bool); // 0x380 Func
	goto Label_903; // 0x382 Jump
	
Label_903:
	return 6; // 0x387 Return
	
Label_899:
	var_243_string = "Can't find lsh animation : "; // 0x383 PushS
	var_244_int = var_243_string + var_234_string; // 0x384 Add
	Trace(var_244_int); // 0x385 Func
}


func_633(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x279 PushV
	GetPosition(var_27_cvector); // 0x27a Func
	GetPosition(var_28_cvector); // 0x27c ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x27e Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x27f Or2
	return 6; // 0x280 Return
}


func_381(var_0_object)
{
	var_7_bool = 0; // 0x17d PushV
	func_660(var_7_bool); // 0x17e NEW_2
	var_10_bool = var_7_bool == 0; // 0x180 Not
	if(var_10_bool == 0) goto Label_388; // 0x181 JumpB
	Hold(); // 0x182 Func
	
Label_388:
	GetDirection(var_0_object); // 0x184 Func
	
Label_390:
	func_557(); // 0x187 NEW_2
	goto Label_390; // 0x189 Jump
}


