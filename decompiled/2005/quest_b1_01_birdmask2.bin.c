task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xb4 PushI
	if(var_12_int == 0) goto Label_381; // 0xb5 JumpB
	func_708(); // 0xb7 NEW_2
	var_14_int = 19241; // 0xb9 PushI
	var_15_bool = var_10_bool == var_14_int; // 0xba Eq
	if(var_15_bool == 0) goto Label_233; // 0xbb JumpB
	var_16_bool = 0; var_17_object = Obj(); // 0xbc PushV
	var_17_object = var_1_object; // 0xbd MovT
	func_787(var_17_object); // 0xbe NEW_2
	if(var_16_bool == 0) goto Label_213; // 0xc0 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xc1 PushV
	var_24_object = var_1_object; // 0xc2 MovT
	var_25_object = var_0_object; // 0xc3 MovT
	func_776(); // 0xc4 NEW_2
	var_34_string = ""; // 0xc6 PushV
	var_34_string = "Neutral"; // 0xc7 MovS
	func_157(var_11_object, var_34_string); // 0xc8 NEW_2
	var_51_int = 518122; // 0xca PushI
	SetMessage(var_51_int); // 0xcb TObjFunc
	ClearReplies(); // 0xcd TObjFunc
	var_52_int = 518123; // 0xcf PushI
	var_53_int = 19396; // 0xd0 PushI
	var_54_int = 19242; // 0xd1 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_55_string = ""; // 0xd5 PushV
	var_55_string = "Neutral"; // 0xd6 MovS
	func_157(var_11_object, var_55_string); // 0xd7 NEW_2
	var_56_int = 520035; // 0xd9 PushI
	SetMessage(var_56_int); // 0xda TObjFunc
	ClearReplies(); // 0xdc TObjFunc
	var_57_int = 520036; // 0xde PushI
	var_58_int = -1; // 0xdf PushI
	var_59_int = 21221; // 0xe0 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xe1 TObjFunc
	var_60_int = 527021; // 0xe3 PushI
	var_61_int = -1; // 0xe4 PushI
	var_62_int = 28305; // 0xe5 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xe6 TObjFunc
	return 0; // 0xe8 Return
	
Label_233:
	var_63_int = 19396; // 0xe9 PushI
	var_64_bool = var_10_bool == var_63_int; // 0xea Eq
	if(var_64_bool == 0) goto Label_256; // 0xeb JumpB
	var_65_string = ""; // 0xec PushV
	var_65_string = "Neutral"; // 0xed MovS
	func_157(var_11_object, var_65_string); // 0xee NEW_2
	var_66_int = 518292; // 0xf0 PushI
	SetMessage(var_66_int); // 0xf1 TObjFunc
	ClearReplies(); // 0xf3 TObjFunc
	var_67_int = 518293; // 0xf5 PushI
	var_68_int = 19398; // 0xf6 PushI
	var_69_int = 19397; // 0xf7 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xf8 TObjFunc
	var_70_int = 527019; // 0xfa PushI
	var_71_int = 19398; // 0xfb PushI
	var_72_int = 28302; // 0xfc PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xfd TObjFunc
	return 0; // 0xff Return
	
Label_256:
	var_73_int = 19398; // 0x100 PushI
	var_74_bool = var_10_bool == var_73_int; // 0x101 Eq
	if(var_74_bool == 0) goto Label_274; // 0x102 JumpB
	var_75_string = ""; // 0x103 PushV
	var_75_string = "Neutral"; // 0x104 MovS
	func_157(var_11_object, var_75_string); // 0x105 NEW_2
	var_76_int = 518294; // 0x107 PushI
	SetMessage(var_76_int); // 0x108 TObjFunc
	ClearReplies(); // 0x10a TObjFunc
	var_77_int = 518295; // 0x10c PushI
	var_78_int = 19400; // 0x10d PushI
	var_79_int = 19399; // 0x10e PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x10f TObjFunc
	return 0; // 0x111 Return
	
Label_274:
	var_80_int = 19400; // 0x112 PushI
	var_81_bool = var_10_bool == var_80_int; // 0x113 Eq
	if(var_81_bool == 0) goto Label_292; // 0x114 JumpB
	var_82_string = ""; // 0x115 PushV
	var_82_string = "Neutral"; // 0x116 MovS
	func_157(var_11_object, var_82_string); // 0x117 NEW_2
	var_83_int = 518296; // 0x119 PushI
	SetMessage(var_83_int); // 0x11a TObjFunc
	ClearReplies(); // 0x11c TObjFunc
	var_84_int = 518297; // 0x11e PushI
	var_85_int = 19402; // 0x11f PushI
	var_86_int = 19401; // 0x120 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x121 TObjFunc
	return 0; // 0x123 Return
	
Label_292:
	var_87_int = 19402; // 0x124 PushI
	var_88_bool = var_10_bool == var_87_int; // 0x125 Eq
	if(var_88_bool == 0) goto Label_310; // 0x126 JumpB
	var_89_string = ""; // 0x127 PushV
	var_89_string = "Neutral"; // 0x128 MovS
	func_157(var_11_object, var_89_string); // 0x129 NEW_2
	var_90_int = 518298; // 0x12b PushI
	SetMessage(var_90_int); // 0x12c TObjFunc
	ClearReplies(); // 0x12e TObjFunc
	var_91_int = 518299; // 0x130 PushI
	var_92_int = 19404; // 0x131 PushI
	var_93_int = 19403; // 0x132 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_94_int = 19404; // 0x136 PushI
	var_95_bool = var_10_bool == var_94_int; // 0x137 Eq
	if(var_95_bool == 0) goto Label_328; // 0x138 JumpB
	var_96_string = ""; // 0x139 PushV
	var_96_string = "Neutral"; // 0x13a MovS
	func_157(var_11_object, var_96_string); // 0x13b NEW_2
	var_97_int = 518300; // 0x13d PushI
	SetMessage(var_97_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_98_int = 518301; // 0x142 PushI
	var_99_int = 19407; // 0x143 PushI
	var_100_int = 19405; // 0x144 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_101_int = 19407; // 0x148 PushI
	var_102_bool = var_10_bool == var_101_int; // 0x149 Eq
	if(var_102_bool == 0) goto Label_346; // 0x14a JumpB
	var_103_string = ""; // 0x14b PushV
	var_103_string = "Neutral"; // 0x14c MovS
	func_157(var_11_object, var_103_string); // 0x14d NEW_2
	var_104_int = 518303; // 0x14f PushI
	SetMessage(var_104_int); // 0x150 TObjFunc
	ClearReplies(); // 0x152 TObjFunc
	var_105_int = 518304; // 0x154 PushI
	var_106_int = 19409; // 0x155 PushI
	var_107_int = 19408; // 0x156 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x157 TObjFunc
	return 0; // 0x159 Return
	
Label_346:
	var_108_int = 19409; // 0x15a PushI
	var_109_bool = var_10_bool == var_108_int; // 0x15b Eq
	if(var_109_bool == 0) goto Label_369; // 0x15c JumpB
	var_110_string = ""; // 0x15d PushV
	var_110_string = "Neutral"; // 0x15e MovS
	func_157(var_11_object, var_110_string); // 0x15f NEW_2
	var_111_int = 518305; // 0x161 PushI
	SetMessage(var_111_int); // 0x162 TObjFunc
	ClearReplies(); // 0x164 TObjFunc
	var_112_int = 518306; // 0x166 PushI
	var_113_int = -1; // 0x167 PushI
	var_114_int = 19410; // 0x168 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x169 TObjFunc
	var_115_int = 527020; // 0x16b PushI
	var_116_int = -1; // 0x16c PushI
	var_117_int = 28304; // 0x16d PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x16e TObjFunc
	return 0; // 0x170 Return
	
Label_369:
	var_3_string = 1; // 0x171 TMovB
	var_118_bool = 0; // 0x172 PushV
	func_750(var_118_bool); // 0x173 NEW_2
	if(var_118_bool == 0) goto Label_377; // 0x175 JumpB
	lshStopAnimation(); // 0x176 Func
	goto Label_379; // 0x178 Jump
	
Label_379:
	return 0; // 0x17b Return
	
Label_377:
	StopAnimation(); // 0x179 Func
	
Label_381:
	return 0; // 0x17d Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_468(var_9_object, var_10_object); // 0x18a NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x18c PushV
	var_15_object = var_10_object; // 0x18d Mov
	TaskCall(0); // 0x18e TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x18f NEW_2
	TaskReturn(); // 0x190 TaskReturn
	return 0; // 0x192 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x1be PushI
	var_12_bool = var_10_int == var_11_int; // 0x1bf Eq
	if(var_12_bool == 0) goto Label_467; // 0x1c0 JumpB
	var_13_bool = 0; // 0x1c1 PushV
	func_430(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x1c2 NEW_2
	if(var_13_bool == 0) goto Label_461; // 0x1c4 JumpB
	var_26_bool = var_2_object == 0; // 0x1c5 Not
	if(var_26_bool == 0) goto Label_460; // 0x1c6 JumpB
	var_27_object = Obj(); // 0x1c7 PushV
	var_27_object = var_4_bool; // 0x1c8 MovT
	func_697(var_27_object); // 0x1c9 NEW_2
	var_2_object = 1; // 0x1cb TMovB
	
Label_460:
	goto Label_467; // 0x1cc Jump
	
Label_467:
	return 0; // 0x1d3 Return
	
Label_461:
	var_34_object = var_2_object; // 0x1cd PushT
	if(var_34_object == 0) goto Label_467; // 0x1ce JumpB
	var_35_string = "head"; // 0x1cf PushS
	UnlookAsync(var_35_string); // 0x1d0 Func
	var_2_object = 0; // 0x1d2 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_382:
	var_10_float = 0; var_11_float = 0; // 0x17e PushV
	var_10_float = 300; // 0x17f MovI
	var_11_float = 100; // 0x180 MovI
	func_403(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0x181 NEW_2
	var_72_int = 3; // 0x183 PushI
	Sleep(var_72_int); // 0x184 Func
	goto Label_382; // 0x186 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 130.0; // 0x4 MovF
	func_581(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_744(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_742(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_746(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_748(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_799(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_157_bool = var_24_bool == 0; // 0x38 Not
	if(var_157_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_158_object = Obj(); // 0x3f PushV
	var_158_object = var_15_object; // 0x40 Mov
	func_649(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_576(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x240 PushV
	IsLoaded(var_14_bool); // 0x241 Func
	var_12_bool = var_14_bool; // 0x243 Mov
	return 2; // 0x244 Return
}


func_708()
{
	var_13_bool = 0; // 0x2c4 PushV
	func_750(var_13_bool); // 0x2c5 NEW_2
	if(var_13_bool == 0) goto Label_714; // 0x2c7 JumpB
	lshStopSpeech(); // 0x2c8 Func
	
Label_714:
	return 0; // 0x2ca Return
}


func_581(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x245 PushV
	GetPosition(var_38_cvector); // 0x246 ObjFunc
	GetEyesHeight(var_37_float); // 0x248 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x24a PushE
	var_46_float = var_46_float + var_37_float; // 0x24b Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x24c PopE
	GetPosition(var_39_cvector); // 0x24d Func
	GetEyesHeight(var_37_float); // 0x24f Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x251 PushE
	var_47_float = var_47_float + var_37_float; // 0x252 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x253 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x254 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x255 PushE
	var_48_float = 0; // 0x256 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x257 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x258 Or
	var_50_float = sqrt(var_49_int); // 0x259 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x25a Div2
	var_41_cvector = -var_40_cvector; // 0x25b Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x25c Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x25d PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x25e PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x25f Xor2
	func_715(var_52_cvector, var_53_cvector); // 0x260 NEW_2
	var_60_int = 25; // 0x262 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x263 Mult
	var_62_int = var_51_float + var_61_float; // 0x264 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x265 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x266 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x267 Add2
	IsOverrideActive(var_44_bool); // 0x268 Func
	var_64_bool = var_44_bool; // 0x26a Push
	if(var_64_bool == 0) goto Label_622; // 0x26b JumpB
	var_25_bool = 0; // 0x26c MovB
	return 18; // 0x26d Return
	
Label_622:
	StopWorld(); // 0x26e Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x270 Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x272 PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x273 PushE
	Rotate(var_65_float, var_66_float); // 0x274 Func
	var_67_bool = 0; // 0x276 PushV
	func_750(var_67_bool); // 0x277 NEW_2
	if(var_67_bool == 0) goto Label_635; // 0x279 JumpB
	goto Label_643; // 0x27a Jump
	
Label_643:
	CameraWaitForPlayFinish(); // 0x283 Func
	ResumeWorld(); // 0x285 Func
	var_25_bool = 1; // 0x287 MovB
	return 18; // 0x288 Return
	
Label_635:
	var_68_string = "head"; // 0x27b PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x27c Func
	var_69_bool = var_45_bool; // 0x27e Push
	if(var_69_bool == 0) goto Label_643; // 0x27f JumpB
	var_70_string = "head"; // 0x280 PushS
	LookAsyncCamera(var_70_string); // 0x281 Func
}


func_776()
{
	var_102_string = "oob1Birdmask2_1"; // 0x309 PushS
	var_103_int = 1; // 0x30a PushI
	SetVariable(var_102_string, var_103_int); // 0x30b Func
	var_104_bool = 0; var_105_string = ""; var_106_string = ""; // 0x30d PushV
	var_105_string = "quest_b1_01"; // 0x30e MovS
	var_106_string = "remove2"; // 0x30f MovS
	func_730(var_104_bool, var_105_string, var_106_string); // 0x310 NEW_2
	return 0; // 0x312 Return
}


func_649()
{
	var_159_bool = 0; var_160_bool = 0; // 0x289 PushV
	CameraSwitchToNormal(); // 0x28a Func
	var_161_bool = 0; // 0x28c PushV
	func_750(var_161_bool); // 0x28d NEW_2
	if(var_161_bool == 0) goto Label_657; // 0x28f JumpB
	goto Label_665; // 0x290 Jump
	
Label_665:
	return 2; // 0x299 Return
	
Label_657:
	var_162_string = "head"; // 0x291 PushS
	HasAnimationTrack(var_160_bool, var_162_string); // 0x292 Func
	var_163_bool = var_160_bool; // 0x294 Push
	if(var_163_bool == 0) goto Label_665; // 0x295 JumpB
	var_164_string = "head"; // 0x296 PushS
	UnlookAsync(var_164_string); // 0x297 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_127; // 0x4f JumpB
	var_92_bool = 0; var_93_object = Obj(); // 0x50 PushV
	var_93_object = var_1_object; // 0x51 MovT
	func_787(var_93_object); // 0x52 NEW_2
	if(var_92_bool == 0) goto Label_105; // 0x54 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x55 PushV
	var_100_object = var_1_object; // 0x56 MovT
	var_101_object = var_0_object; // 0x57 MovT
	func_776(); // 0x58 NEW_2
	var_110_string = ""; // 0x5a PushV
	var_110_string = "Neutral"; // 0x5b MovS
	func_157(var_86_object, var_110_string); // 0x5c NEW_2
	var_127_int = 518122; // 0x5e PushI
	SetMessage(var_127_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_128_int = 518123; // 0x63 PushI
	var_129_int = 19396; // 0x64 PushI
	var_130_int = 19242; // 0x65 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x66 TObjFunc
	goto Label_127; // 0x68 Jump
	
Label_127:
	var_131_bool = 0; // 0x7f PushV
	func_750(var_131_bool); // 0x80 NEW_2
	if(var_131_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_132_string = var_3_string; // 0x85 PushT
	if(var_132_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_133_string = ""; // 0x88 PushV
	var_133_string = var_2_object; // 0x89 MovT
	func_666(var_133_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_144_string = "all"; // 0x8e PushS
	var_145_string = "idle"; // 0x8f PushS
	PlayAnimation(var_144_string, var_145_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_146_string = var_3_string; // 0x94 PushT
	if(var_146_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_147_string = "all"; // 0x97 PushS
	var_148_string = "idle"; // 0x98 PushS
	PlayAnimation(var_147_string, var_148_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_105:
	var_149_string = ""; // 0x69 PushV
	var_149_string = "Neutral"; // 0x6a MovS
	func_157(var_86_object, var_149_string); // 0x6b NEW_2
	var_150_int = 520035; // 0x6d PushI
	SetMessage(var_150_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_151_int = 520036; // 0x72 PushI
	var_152_int = -1; // 0x73 PushI
	var_153_int = 21221; // 0x74 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x75 TObjFunc
	var_154_int = 527021; // 0x77 PushI
	var_155_int = -1; // 0x78 PushI
	var_156_int = 28305; // 0x79 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_715(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x2cb PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x2cc Or
	var_56_float = sqrt(var_57_int); // 0x2cd Sqrt2
	var_58_float = 0.0; // 0x2ce PushF
	var_59_bool = var_56_float < var_58_float; // 0x2cf LT
	if(var_59_bool == 0) goto Label_723; // 0x2d0 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x2d1 MovV
	return 2; // 0x2d2 Return
	
Label_723:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x2d3 Div2
	return 2; // 0x2d4 Return
}


func_787(var_92_bool)
{
	var_94_int = 0; var_95_string = ""; // 0x314 PushV
	var_95_string = "oob1Birdmask2_1"; // 0x315 MovS
	func_725(var_94_int, var_95_string); // 0x316 NEW_2
	var_98_int = 0; // 0x318 PushI
	var_99_bool = var_94_int == var_98_int; // 0x319 Eq
	if(var_99_bool == 0) goto Label_797; // 0x31a JumpB
	var_92_bool = 1; // 0x31b MovB
	return 0; // 0x31c Return
	
Label_797:
	var_92_bool = 0; // 0x31d MovB
	return 0; // 0x31e Return
}


func_403(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x194 PushV
	func_576(var_12_bool); // 0x195 NEW_2
	var_15_bool = var_12_bool == 0; // 0x197 Not
	if(var_15_bool == 0) goto Label_410; // 0x198 JumpB
	return 0; // 0x199 Return
	
Label_410:
	var_16_string = "player"; // 0x19a PushS
	FindActor(var_9_object, var_16_string); // 0x19b Func
	var_2_object = 0; // 0x19d TMovB
	var_3_string = 0; // 0x19e TMovB
	var_0_object = var_10_float; // 0x19f TMov
	var_1_object = var_11_float; // 0x1a0 TMov
	var_17_int = 10; // 0x1a1 PushI
	var_18_float = 1.0; // 0x1a2 PushF
	SetTimer(var_17_int, var_18_float); // 0x1a3 Func
	func_482(); // 0x1a6 NEW_2
	var_70_bool = var_3_string == 0; // 0x1a8 Not
	if(var_70_bool == 0) goto Label_429; // 0x1a9 JumpB
	var_71_int = 10; // 0x1aa PushI
	KillTimer(var_71_int); // 0x1ab Func
	
Label_429:
	return 0; // 0x1ad Return
}


func_468(var_2_object, var_3_string)
{
	func_563(); // 0x1d5 NEW_2
	var_11_int = 10; // 0x1d7 PushI
	KillTimer(var_11_int); // 0x1d8 Func
	var_12_object = var_2_object; // 0x1da PushT
	if(var_12_object == 0) goto Label_480; // 0x1db JumpB
	var_13_string = "head"; // 0x1dc PushS
	UnlookAsync(var_13_string); // 0x1dd Func
	var_2_object = 0; // 0x1df TMovB
	
Label_480:
	var_3_string = 1; // 0x1e0 TMovB
	return 0; // 0x1e1 Return
}


func_725(var_94_int, var_95_string)
{
	var_96_int = 0; var_97_int = 0; // 0x2d5 PushV
	GetVariable(var_95_string, var_97_int); // 0x2d6 Func
	var_94_int = var_97_int; // 0x2d8 Mov
	return 2; // 0x2d9 Return
}


func_666(var_133_string)
{
	var_134_bool = 0; var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_float = 0; var_139_float = 0; // 0x29a PushV
	lshHasAnimation(var_137_bool, var_133_string); // 0x29b Func
	var_140_bool = var_137_bool; // 0x29d Push
	if(var_140_bool == 0) goto Label_677; // 0x29e JumpB
	lshGetAnimTimes(var_133_string, var_138_float, var_139_float); // 0x29f Func
	var_141_bool = 0; // 0x2a1 PushB
	lshPlayAnimation(var_138_float, var_139_float, var_141_bool); // 0x2a2 Func
	goto Label_681; // 0x2a4 Jump
	
Label_681:
	return 6; // 0x2a9 Return
	
Label_677:
	var_142_string = "Can't find lsh animation : "; // 0x2a5 PushS
	var_143_int = var_142_string + var_133_string; // 0x2a6 Add
	Trace(var_143_int); // 0x2a7 Func
}


func_730(var_104_bool, var_105_string, var_106_string)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x2da PushV
	FindActor(var_108_object, var_105_string); // 0x2db Func
	var_109_bool = var_108_object == 0; // 0x2dd NullEq
	if(var_109_bool == 0) goto Label_737; // 0x2de JumpB
	var_104_bool = 0; // 0x2df MovB
	return 2; // 0x2e0 Return
	
Label_737:
	Trigger(var_108_object, var_106_string); // 0x2e1 Func
	var_104_bool = 1; // 0x2e3 MovB
	return 2; // 0x2e4 Return
}


func_157(var_2_object, var_110_string)
{
	var_111_bool = 0; // 0x9e PushV
	func_750(var_111_bool); // 0x9f NEW_2
	var_112_bool = var_111_bool == 0; // 0xa1 Not
	if(var_112_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_113_bool = var_110_string == var_2_object; // 0xa4 Eq
	if(var_113_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_114_string = ""; var_115_bool = 0; // 0xa7 PushV
	var_114_string = var_110_string; // 0xa8 Mov
	var_116_string = ""; // 0xa9 PushS
	var_117_bool = var_110_string == var_116_string; // 0xaa Eq
	if(var_117_bool == 0) goto Label_174; // 0xab JumpB
	var_115_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_682(var_114_string, var_115_bool); // 0xaf NEW_2
	var_2_object = var_110_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_115_bool = 1; // 0xae MovB
}


func_799(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x31f PushV
	var_79_string = "branch"; // 0x320 PushS
	GetVariable(var_79_string, var_78_int); // 0x321 Func
	var_80_int = 0; // 0x323 PushI
	var_81_bool = var_78_int == var_80_int; // 0x324 Eq
	if(var_81_bool == 0) goto Label_809; // 0x325 JumpB
	var_76_int = 1; // 0x326 MovI
	return 2; // 0x327 Return
	
Label_809:
	var_82_int = 1; // 0x329 PushI
	var_83_bool = var_78_int == var_82_int; // 0x32a Eq
	if(var_83_bool == 0) goto Label_814; // 0x32b JumpB
	var_76_int = 2; // 0x32c MovI
	return 2; // 0x32d Return
	
Label_814:
	var_76_int = 3; // 0x32e MovI
	return 2; // 0x32f Return
}


func_482()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x1e2 PushV
	WaitForAnimEnd(); // 0x1e3 Func
	var_33_bool = 0; // 0x1e5 PushV
	func_576(var_33_bool); // 0x1e6 NEW_2
	var_34_bool = var_33_bool == 0; // 0x1e8 Not
	if(var_34_bool == 0) goto Label_491; // 0x1e9 JumpB
	return 14; // 0x1ea Return
	
Label_491:
	var_35_int = 0; // 0x1eb PushV
	func_759(var_35_int); // 0x1ec NEW_2
	var_26_int = var_35_int; // 0x1ed Mov
	var_27_int = 0; // 0x1ef MovI
	
Label_496:
	var_48_bool = 0; // 0x1f0 PushV
	var_48_bool = 0; // 0x1f1 MovB
	var_49_int = 5; // 0x1f2 PushI
	var_50_bool = var_27_int < var_49_int; // 0x1f3 LT
	if(var_50_bool == 0) goto Label_506; // 0x1f4 JumpB
	var_51_bool = 0; // 0x1f5 PushV
	func_576(var_51_bool); // 0x1f6 NEW_2
	if(var_51_bool == 0) goto Label_506; // 0x1f8 JumpB
	var_48_bool = 1; // 0x1f9 MovB
	
Label_506:
	if(var_48_bool == 0) goto Label_558; // 0x1fa JumpB
	var_52_int = 3; // 0x1fb PushI
	irand(var_28_int, var_52_int); // 0x1fc Func
	var_53_int = 0; // 0x1fe PushI
	var_54_bool = var_28_int == var_53_int; // 0x1ff Eq
	if(var_54_bool == 0) goto Label_530; // 0x200 JumpB
	var_55_int = var_26_int; // 0x201 Push
	if(var_55_int == 0) goto Label_529; // 0x202 JumpB
	irand(var_29_int, var_26_int); // 0x203 Func
	var_56_string = "all"; // 0x205 PushS
	var_57_string = ""; var_58_int = 0; // 0x206 PushV
	var_58_int = var_29_int; // 0x207 Mov
	func_752(var_57_string, var_58_int); // 0x208 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x20a Func
	WaitForAnimEnd(var_30_bool); // 0x20c Func
	var_59_bool = var_30_bool == 0; // 0x20e Not
	if(var_59_bool == 0) goto Label_529; // 0x20f JumpB
	goto Label_558; // 0x210 Jump
	
Label_558:
	ResetAAS(); // 0x22e Func
	return 14; // 0x230 Return
	
Label_529:
	goto Label_547; // 0x211 Jump
	
Label_547:
	var_60_bool = 0; // 0x223 PushV
	func_561(var_60_bool); // 0x224 NEW_2
	var_61_bool = var_60_bool == 0; // 0x226 Not
	if(var_61_bool == 0) goto Label_553; // 0x227 JumpB
	goto Label_558; // 0x228 Jump
	
Label_553:
	ResetAAS(); // 0x229 Func
	var_62_int = 1; // 0x22b PushI
	var_27_int = var_27_int + var_62_int; // 0x22c Add2
	goto Label_496; // 0x22d Jump
	
Label_530:
	var_63_int = 1; // 0x212 PushI
	var_64_bool = var_28_int == var_63_int; // 0x213 Eq
	if(var_64_bool == 0) goto Label_544; // 0x214 JumpB
	var_65_int = 4; // 0x215 PushI
	rand(var_31_float, var_65_int); // 0x216 Func
	var_66_int = 1; // 0x218 PushI
	var_67_int = var_31_float + var_66_int; // 0x219 Add
	Sleep(var_67_int, var_32_bool); // 0x21a Func
	var_68_bool = var_32_bool == 0; // 0x21c Not
	if(var_68_bool == 0) goto Label_543; // 0x21d JumpB
	goto Label_558; // 0x21e Jump
	
Label_543:
	goto Label_547; // 0x21f Jump
	
Label_544:
	var_69_int = var_27_int; // 0x220 Push
	if(var_69_int == 0) goto Label_547; // 0x221 JumpB
	goto Label_558; // 0x222 Jump
}


func_742(var_73_int)
{
	var_73_int = 515571; // 0x2e6 MovI
	return 0; // 0x2e7 Return
}


func_744(var_72_int)
{
	var_72_int = 504029; // 0x2e8 MovI
	return 0; // 0x2e9 Return
}


func_682(var_114_string, var_115_bool)
{
	var_118_bool = 0; var_119_float = 0; var_120_float = 0; var_121_bool = 0; var_122_float = 0; var_123_float = 0; // 0x2aa PushV
	lshHasAnimation(var_121_bool, var_114_string); // 0x2ab Func
	var_124_bool = var_121_bool; // 0x2ad Push
	if(var_124_bool == 0) goto Label_692; // 0x2ae JumpB
	lshGetAnimTimes(var_114_string, var_122_float, var_123_float); // 0x2af Func
	lshPlayAnimation(var_122_float, var_123_float, var_115_bool); // 0x2b1 Func
	goto Label_696; // 0x2b3 Jump
	
Label_696:
	return 6; // 0x2b8 Return
	
Label_692:
	var_125_string = "Can't find lsh animation : "; // 0x2b4 PushS
	var_126_int = var_125_string + var_114_string; // 0x2b5 Add
	Trace(var_126_int); // 0x2b6 Func
}


func_746(var_74_string)
{
	var_74_string = "ui/NPC_bmask.png"; // 0x2ea MovS
	return 0; // 0x2eb Return
}


func_748(var_75_string)
{
	var_75_string = "ui/NPC_bmask_b.png"; // 0x2ec MovS
	return 0; // 0x2ed Return
}


func_430(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x1ae PushV
	var_16_bool = var_4_bool == 0; // 0x1af NullEq
	if(var_16_bool == 0) goto Label_435; // 0x1b0 JumpB
	var_13_bool = 0; // 0x1b1 MovB
	return 2; // 0x1b2 Return
	
Label_435:
	var_17_float = 0; var_18_object = Obj(); // 0x1b3 PushV
	var_18_object = var_4_bool; // 0x1b4 MovT
	func_568(var_18_object); // 0x1b5 NEW_2
	var_15_float = sqrt(var_17_float); // 0x1b7 Sqrt2
	var_25_object = var_2_object; // 0x1b8 PushT
	if(var_25_object == 0) goto Label_443; // 0x1b9 JumpB
	var_15_float = var_15_float - var_1_object; // 0x1ba Sub2
	
Label_443:
	var_13_bool = var_15_float < var_0_object; // 0x1bb LT2
	return 2; // 0x1bc Return
}


func_750(var_67_bool)
{
	var_67_bool = 0; // 0x2ee MovB
	return 0; // 0x2ef Return
}


func_752(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x2f0 PushV
	var_44_string = "idle"; // 0x2f1 MovS
	var_45_int = var_42_int; // 0x2f2 Push
	if(var_45_int == 0) goto Label_757; // 0x2f3 JumpB
	var_44_string = var_44_string + var_42_int; // 0x2f4 Add2
	
Label_757:
	var_41_string = var_44_string; // 0x2f5 Mov
	return 2; // 0x2f6 Return
}


func_561(var_60_bool)
{
	var_60_bool = 1; // 0x231 MovB
	return 0; // 0x232 Return
}


func_563()
{
	StopAnimation(); // 0x233 Func
	StopGroup0(); // 0x235 Func
	return 0; // 0x237 Return
}


func_759(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x2f7 PushV
	var_38_int = 0; // 0x2f8 MovI
	
Label_761:
	var_40_string = "all"; // 0x2f9 PushS
	var_41_string = ""; var_42_int = 0; // 0x2fa PushV
	var_42_int = var_38_int; // 0x2fb Mov
	func_752(var_41_string, var_42_int); // 0x2fc NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x2fe Func
	var_46_bool = var_39_bool == 0; // 0x300 Not
	if(var_46_bool == 0) goto Label_771; // 0x301 JumpB
	goto Label_774; // 0x302 Jump
	
Label_774:
	var_35_int = var_38_int; // 0x306 Mov
	return 4; // 0x307 Return
	
Label_771:
	var_47_int = 1; // 0x303 PushI
	var_38_int = var_38_int + var_47_int; // 0x304 Add2
	goto Label_761; // 0x305 Jump
}


func_568(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x238 PushV
	GetPosition(var_22_cvector); // 0x239 Func
	GetPosition(var_23_cvector); // 0x23b ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x23d Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x23e Or2
	return 6; // 0x23f Return
}


func_697(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x2b9 PushV
	GetEyesHeight(var_30_float); // 0x2ba ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x2bc MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x2bd PushE
	var_32_float = var_30_float; // 0x2be Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x2bf PopE
	var_33_string = "head"; // 0x2c0 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x2c1 Func
	return 4; // 0x2c3 Return
}


