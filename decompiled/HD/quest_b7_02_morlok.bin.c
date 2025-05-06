task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xaf PushI
	if(var_8_int == 0) goto Label_361; // 0xb0 JumpB
	func_654(); // 0xb2 NEW_2
	var_10_int = 22419; // 0xb4 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xb5 Eq
	if(var_11_bool == 0) goto Label_188; // 0xb6 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xb7 PushV
	var_12_object = var_1_object; // 0xb8 MovT
	var_13_object = var_0_object; // 0xb9 MovT
	func_718(); // 0xba NEW_2
	
Label_188:
	var_45_int = 22414; // 0xbc PushI
	var_46_bool = var_6_int == var_45_int; // 0xbd Eq
	if(var_46_bool == 0) goto Label_231; // 0xbe JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0xbf PushV
	var_48_object = var_1_object; // 0xc0 MovT
	func_738(var_48_object); // 0xc1 NEW_2
	if(var_47_bool == 0) goto Label_216; // 0xc3 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xc4 PushV
	var_55_object = var_1_object; // 0xc5 MovT
	var_56_object = var_0_object; // 0xc6 MovT
	func_732(); // 0xc7 NEW_2
	var_59_string = ""; // 0xc9 PushV
	var_59_string = "Neutral"; // 0xca MovS
	func_152(var_7_bool, var_59_string); // 0xcb NEW_2
	var_76_int = 521220; // 0xcd PushI
	SetMessage(var_76_int); // 0xce TObjFunc
	ClearReplies(); // 0xd0 TObjFunc
	var_77_int = 521221; // 0xd2 PushI
	var_78_int = 29945; // 0xd3 PushI
	var_79_int = 22415; // 0xd4 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xd5 TObjFunc
	return 0; // 0xd7 Return
	
Label_216:
	var_80_string = ""; // 0xd8 PushV
	var_80_string = "Neutral"; // 0xd9 MovS
	func_152(var_7_bool, var_80_string); // 0xda NEW_2
	var_81_int = 521222; // 0xdc PushI
	SetMessage(var_81_int); // 0xdd TObjFunc
	ClearReplies(); // 0xdf TObjFunc
	var_82_int = 521223; // 0xe1 PushI
	var_83_int = -1; // 0xe2 PushI
	var_84_int = 22417; // 0xe3 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_85_int = 29945; // 0xe7 PushI
	var_86_bool = var_6_int == var_85_int; // 0xe8 Eq
	if(var_86_bool == 0) goto Label_249; // 0xe9 JumpB
	var_87_string = ""; // 0xea PushV
	var_87_string = "Neutral"; // 0xeb MovS
	func_152(var_7_bool, var_87_string); // 0xec NEW_2
	var_88_int = 528551; // 0xee PushI
	SetMessage(var_88_int); // 0xef TObjFunc
	ClearReplies(); // 0xf1 TObjFunc
	var_89_int = 528552; // 0xf3 PushI
	var_90_int = 29947; // 0xf4 PushI
	var_91_int = 29946; // 0xf5 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xf6 TObjFunc
	return 0; // 0xf8 Return
	
Label_249:
	var_92_int = 29947; // 0xf9 PushI
	var_93_bool = var_6_int == var_92_int; // 0xfa Eq
	if(var_93_bool == 0) goto Label_272; // 0xfb JumpB
	var_94_string = ""; // 0xfc PushV
	var_94_string = "Neutral"; // 0xfd MovS
	func_152(var_7_bool, var_94_string); // 0xfe NEW_2
	var_95_int = 528553; // 0x100 PushI
	SetMessage(var_95_int); // 0x101 TObjFunc
	ClearReplies(); // 0x103 TObjFunc
	var_96_int = 528554; // 0x105 PushI
	var_97_int = 29949; // 0x106 PushI
	var_98_int = 29948; // 0x107 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x108 TObjFunc
	var_99_int = 528564; // 0x10a PushI
	var_100_int = 29949; // 0x10b PushI
	var_101_int = 29959; // 0x10c PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x10d TObjFunc
	return 0; // 0x10f Return
	
Label_272:
	var_102_int = 29949; // 0x110 PushI
	var_103_bool = var_6_int == var_102_int; // 0x111 Eq
	if(var_103_bool == 0) goto Label_290; // 0x112 JumpB
	var_104_string = ""; // 0x113 PushV
	var_104_string = "Neutral"; // 0x114 MovS
	func_152(var_7_bool, var_104_string); // 0x115 NEW_2
	var_105_int = 528555; // 0x117 PushI
	SetMessage(var_105_int); // 0x118 TObjFunc
	ClearReplies(); // 0x11a TObjFunc
	var_106_int = 528560; // 0x11c PushI
	var_107_int = 29956; // 0x11d PushI
	var_108_int = 29955; // 0x11e PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x11f TObjFunc
	return 0; // 0x121 Return
	
Label_290:
	var_109_int = 29956; // 0x122 PushI
	var_110_bool = var_6_int == var_109_int; // 0x123 Eq
	if(var_110_bool == 0) goto Label_313; // 0x124 JumpB
	var_111_string = ""; // 0x125 PushV
	var_111_string = "Neutral"; // 0x126 MovS
	func_152(var_7_bool, var_111_string); // 0x127 NEW_2
	var_112_int = 528561; // 0x129 PushI
	SetMessage(var_112_int); // 0x12a TObjFunc
	ClearReplies(); // 0x12c TObjFunc
	var_113_int = 528556; // 0x12e PushI
	var_114_int = 29951; // 0x12f PushI
	var_115_int = 29950; // 0x130 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x131 TObjFunc
	var_116_int = 528558; // 0x133 PushI
	var_117_int = 29951; // 0x134 PushI
	var_118_int = 29952; // 0x135 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x136 TObjFunc
	return 0; // 0x138 Return
	
Label_313:
	var_119_int = 29951; // 0x139 PushI
	var_120_bool = var_6_int == var_119_int; // 0x13a Eq
	if(var_120_bool == 0) goto Label_331; // 0x13b JumpB
	var_121_string = ""; // 0x13c PushV
	var_121_string = "Neutral"; // 0x13d MovS
	func_152(var_7_bool, var_121_string); // 0x13e NEW_2
	var_122_int = 528557; // 0x140 PushI
	SetMessage(var_122_int); // 0x141 TObjFunc
	ClearReplies(); // 0x143 TObjFunc
	var_123_int = 528559; // 0x145 PushI
	var_124_int = 29957; // 0x146 PushI
	var_125_int = 29954; // 0x147 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x148 TObjFunc
	return 0; // 0x14a Return
	
Label_331:
	var_126_int = 29957; // 0x14b PushI
	var_127_bool = var_6_int == var_126_int; // 0x14c Eq
	if(var_127_bool == 0) goto Label_349; // 0x14d JumpB
	var_128_string = ""; // 0x14e PushV
	var_128_string = "Neutral"; // 0x14f MovS
	func_152(var_7_bool, var_128_string); // 0x150 NEW_2
	var_129_int = 528562; // 0x152 PushI
	SetMessage(var_129_int); // 0x153 TObjFunc
	ClearReplies(); // 0x155 TObjFunc
	var_130_int = 521225; // 0x157 PushI
	var_131_int = -1; // 0x158 PushI
	var_132_int = 22419; // 0x159 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x15a TObjFunc
	return 0; // 0x15c Return
	
Label_349:
	var_3_string = 1; // 0x15d TMovB
	var_133_bool = 0; // 0x15e PushV
	func_829(var_133_bool); // 0x15f NEW_2
	if(var_133_bool == 0) goto Label_357; // 0x161 JumpB
	lshStopAnimation(); // 0x162 Func
	goto Label_359; // 0x164 Jump
	
Label_359:
	return 0; // 0x167 Return
	
Label_357:
	StopAnimation(); // 0x165 Func
	
Label_361:
	return 0; // 0x169 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_526(); // 0x16c NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x16e PushV
	var_8_object = var_6_object; // 0x16f Mov
	TaskCall(0); // 0x170 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x171 NEW_2
	TaskReturn(); // 0x172 TaskReturn
	return 0; // 0x174 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x19f PushS
	var_8_bool = var_6_string == var_7_string; // 0x1a0 Eq
	if(var_8_bool == 0) goto Label_421; // 0x1a1 JumpB
	func_394(var_6_string); // 0x1a3 NEW_2
	
Label_421:
	return 0; // 0x1a5 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x1a6 Func
	sync(); // 0x1a8 Func
	return 0; // 0x1aa Return
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
	func_661(var_9_object); // 0x1b6 NEW_2
	RemoveActor(var_9_object); // 0x1b8 Func
	
Label_442:
	return 0; // 0x1ba Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x175 PushV
	
Label_374:
	var_8_bool = 0; // 0x176 PushV
	func_531(var_8_bool); // 0x177 NEW_2
	var_11_bool = var_8_bool == 0; // 0x179 Not
	if(var_11_bool == 0) goto Label_382; // 0x17a JumpB
	Hold(); // 0x17b Func
	goto Label_374; // 0x17d Jump
	
Label_382:
	var_12_int = 3; // 0x17e PushI
	rand(var_7_float, var_12_int); // 0x17f Func
	var_13_int = 3; // 0x181 PushI
	var_14_int = var_7_float + var_13_int; // 0x182 Add
	Sleep(var_14_int); // 0x183 Func
	func_445(); // 0x186 NEW_2
	goto Label_374; // 0x188 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 110.0; // 0x4 MovF
	func_536(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_823(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_821(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_825(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_827(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_804(var_70_int); // 0x22 NEW_2
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
	var_142_bool = var_17_bool == 0; // 0x38 Not
	if(var_142_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_143_object = Obj(); // 0x3f PushV
	var_143_object = var_8_object; // 0x40 Mov
	func_605(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_776(var_21_bool, var_22_object, var_23_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; // 0x308 PushV
	var_30_object = Obj(); // 0x309 PushV
	func_763(var_30_object); // 0x30a NEW_2
	var_27_object = var_30_object; // 0x30b Mov
	Find(var_23_int, var_28_object); // 0x30d ObjFunc
	var_35_bool = var_28_object == 0; // 0x30f Not
	if(var_35_bool == 0) goto Label_791; // 0x310 JumpB
	var_36_string = "Can't find diary parent with id: "; // 0x311 PushS
	var_37_int = var_36_string + var_23_int; // 0x312 Add
	Trace(var_37_int); // 0x313 Func
	var_21_bool = 0; // 0x315 MovB
	return 6; // 0x316 Return
	
Label_791:
	AddChild(var_22_object); // 0x317 ObjFunc
	var_38_int = 7; // 0x319 PushI
	SendWorldWndMessage(var_38_int); // 0x31a Func
	GetCategory(var_29_int); // 0x31c ObjFunc
	SetDiarySection(var_29_int); // 0x31e Func
	var_21_bool = 0; // 0x320 MovB
	return 6; // 0x321 Return
}


func_394(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x18a PushV
	var_0_object = 1; // 0x18b TMovB
	IsLoaded(var_10_bool); // 0x18c Func
	var_11_bool = 0; // 0x18e PushV
	var_11_bool = 0; // 0x18f MovB
	var_12_bool = var_10_bool == 0; // 0x190 Not
	if(var_12_bool == 0) goto Label_407; // 0x191 JumpB
	var_13_bool = 0; // 0x192 PushV
	func_443(var_13_bool); // 0x193 NEW_2
	if(var_13_bool == 0) goto Label_407; // 0x195 JumpB
	var_11_bool = 1; // 0x196 MovB
	
Label_407:
	if(var_11_bool == 0) goto Label_413; // 0x197 JumpB
	var_14_object = Obj(); // 0x198 PushV
	func_661(var_14_object); // 0x199 NEW_2
	RemoveActor(var_14_object); // 0x19b Func
	
Label_413:
	return 2; // 0x19d Return
}


func_524(var_56_bool)
{
	var_56_bool = 1; // 0x20c MovB
	return 0; // 0x20d Return
}


func_654()
{
	var_9_bool = 0; // 0x28e PushV
	func_829(var_9_bool); // 0x28f NEW_2
	if(var_9_bool == 0) goto Label_660; // 0x291 JumpB
	lshStopSpeech(); // 0x292 Func
	
Label_660:
	return 0; // 0x294 Return
}


func_526()
{
	StopAnimation(); // 0x20e Func
	StopGroup0(); // 0x210 Func
	return 0; // 0x212 Return
}


func_531(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x213 PushV
	IsLoaded(var_10_bool); // 0x214 Func
	var_8_bool = var_10_bool; // 0x216 Mov
	return 2; // 0x217 Return
}


func_661(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x295 PushV
	self(var_11_object); // 0x296 Func
	var_9_object = var_11_object; // 0x298 Mov
	return 2; // 0x299 Return
}


func_536(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x218 PushV
	GetPosition(var_31_cvector); // 0x219 ObjFunc
	GetEyesHeight(var_30_float); // 0x21b ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x21d PushE
	var_39_float = var_39_float + var_30_float; // 0x21e Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x21f PopE
	GetPosition(var_32_cvector); // 0x220 Func
	GetEyesHeight(var_30_float); // 0x222 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x224 PushE
	var_40_float = var_40_float + var_30_float; // 0x225 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x226 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x227 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x228 PushE
	var_41_float = 0; // 0x229 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x22a PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x22b Or
	var_43_float = sqrt(var_42_int); // 0x22c Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x22d Div2
	var_34_cvector = -var_33_cvector; // 0x22e Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x22f Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x230 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x231 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x232 Xor2
	func_667(var_45_cvector, var_46_cvector); // 0x233 NEW_2
	var_53_int = 25; // 0x235 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x236 Mult
	var_55_int = var_44_float + var_54_float; // 0x237 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x238 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x239 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x23a Add2
	IsOverrideActive(var_37_bool); // 0x23b Func
	var_57_bool = var_37_bool; // 0x23d Push
	if(var_57_bool == 0) goto Label_577; // 0x23e JumpB
	var_18_bool = 0; // 0x23f MovB
	return 18; // 0x240 Return
	
Label_577:
	StopWorld(); // 0x241 Func
	var_58_bool = 1; // 0x243 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x244 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x246 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x247 PushE
	Rotate(var_59_float, var_60_float); // 0x248 Func
	var_61_bool = 0; // 0x24a PushV
	func_829(var_61_bool); // 0x24b NEW_2
	if(var_61_bool == 0) goto Label_591; // 0x24d JumpB
	goto Label_599; // 0x24e Jump
	
Label_599:
	CameraWaitForPlayFinish(); // 0x257 Func
	ResumeWorld(); // 0x259 Func
	var_18_bool = 1; // 0x25b MovB
	return 18; // 0x25c Return
	
Label_591:
	var_62_string = "head"; // 0x24f PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x250 Func
	var_63_bool = var_38_bool; // 0x252 Push
	if(var_63_bool == 0) goto Label_599; // 0x253 JumpB
	var_64_string = "head"; // 0x254 PushS
	LookAsyncCamera(var_64_string); // 0x255 Func
}


func_152(var_2_object, var_98_string)
{
	var_99_bool = 0; // 0x99 PushV
	func_829(var_99_bool); // 0x9a NEW_2
	var_100_bool = var_99_bool == 0; // 0x9c Not
	if(var_100_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_101_bool = var_98_string == var_2_object; // 0x9f Eq
	if(var_101_bool == 0) goto Label_162; // 0xa0 JumpB
	return 0; // 0xa1 Return
	
Label_162:
	var_102_string = ""; var_103_bool = 0; // 0xa2 PushV
	var_102_string = var_98_string; // 0xa3 Mov
	var_104_string = ""; // 0xa4 PushS
	var_105_bool = var_98_string == var_104_string; // 0xa5 Eq
	if(var_105_bool == 0) goto Label_169; // 0xa6 JumpB
	var_103_bool = 0; // 0xa7 MovB
	goto Label_170; // 0xa8 Jump
	
Label_170:
	func_639(var_102_string, var_103_bool); // 0xaa NEW_2
	var_2_object = var_98_string; // 0xac TMov
	return 0; // 0xad Return
	
Label_169:
	var_103_bool = 1; // 0xa9 MovB
}


func_667(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x29b PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x29c Or
	var_49_float = sqrt(var_50_int); // 0x29d Sqrt2
	var_51_float = 0.0; // 0x29e PushF
	var_52_bool = var_49_float < var_51_float; // 0x29f LT
	if(var_52_bool == 0) goto Label_675; // 0x2a0 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2a1 MovV
	return 2; // 0x2a2 Return
	
Label_675:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2a3 Div2
	return 2; // 0x2a4 Return
}


func_804(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x324 PushV
	var_73_string = "branch"; // 0x325 PushS
	GetVariable(var_73_string, var_72_int); // 0x326 Func
	var_74_int = 0; // 0x328 PushI
	var_75_bool = var_72_int == var_74_int; // 0x329 Eq
	if(var_75_bool == 0) goto Label_814; // 0x32a JumpB
	var_70_int = 1; // 0x32b MovI
	return 2; // 0x32c Return
	
Label_814:
	var_76_int = 1; // 0x32e PushI
	var_77_bool = var_72_int == var_76_int; // 0x32f Eq
	if(var_77_bool == 0) goto Label_819; // 0x330 JumpB
	var_70_int = 2; // 0x331 MovI
	return 2; // 0x332 Return
	
Label_819:
	var_70_int = 3; // 0x333 MovI
	return 2; // 0x334 Return
}


func_677(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x2a5 PushV
	GetVariable(var_89_string, var_91_int); // 0x2a6 Func
	var_88_int = var_91_int; // 0x2a8 Mov
	return 2; // 0x2a9 Return
}


func_682(var_39_bool, var_40_string, var_41_string)
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x2aa PushV
	FindActor(var_43_object, var_40_string); // 0x2ab Func
	var_44_bool = var_43_object == 0; // 0x2ad NullEq
	if(var_44_bool == 0) goto Label_689; // 0x2ae JumpB
	var_39_bool = 0; // 0x2af MovB
	return 2; // 0x2b0 Return
	
Label_689:
	Trigger(var_43_object, var_41_string); // 0x2b1 Func
	var_39_bool = 1; // 0x2b3 MovB
	return 2; // 0x2b4 Return
}


func_821(var_67_int)
{
	var_67_int = 521048; // 0x335 MovI
	return 0; // 0x336 Return
}


func_694(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x2b6 PushV
	var_40_string = "idle"; // 0x2b7 MovS
	var_41_int = var_38_int; // 0x2b8 Push
	if(var_41_int == 0) goto Label_699; // 0x2b9 JumpB
	var_40_string = var_40_string + var_38_int; // 0x2ba Add2
	
Label_699:
	var_37_string = var_40_string; // 0x2bb Mov
	return 2; // 0x2bc Return
}


func_823(var_66_int)
{
	var_66_int = 521047; // 0x337 MovI
	return 0; // 0x338 Return
}


func_825(var_68_string)
{
	var_68_string = "ui/NPC_Morlok.png"; // 0x339 MovS
	return 0; // 0x33a Return
}


func_827(var_69_string)
{
	var_69_string = "ui/NPC_Morlok_b.png"; // 0x33b MovS
	return 0; // 0x33c Return
}


func_443(var_8_bool)
{
	var_8_bool = 1; // 0x1bb MovB
	return 0; // 0x1bc Return
}


func_829(var_61_bool)
{
	var_61_bool = 0; // 0x33d MovB
	return 0; // 0x33e Return
}


func_445()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x1bd PushV
	WaitForAnimEnd(); // 0x1be Func
	var_29_bool = 0; // 0x1c0 PushV
	func_531(var_29_bool); // 0x1c1 NEW_2
	var_30_bool = var_29_bool == 0; // 0x1c3 Not
	if(var_30_bool == 0) goto Label_454; // 0x1c4 JumpB
	return 14; // 0x1c5 Return
	
Label_454:
	var_31_int = 0; // 0x1c6 PushV
	func_701(var_31_int); // 0x1c7 NEW_2
	var_22_int = var_31_int; // 0x1c8 Mov
	var_23_int = 0; // 0x1ca MovI
	
Label_459:
	var_44_bool = 0; // 0x1cb PushV
	var_44_bool = 0; // 0x1cc MovB
	var_45_int = 5; // 0x1cd PushI
	var_46_bool = var_23_int < var_45_int; // 0x1ce LT
	if(var_46_bool == 0) goto Label_469; // 0x1cf JumpB
	var_47_bool = 0; // 0x1d0 PushV
	func_531(var_47_bool); // 0x1d1 NEW_2
	if(var_47_bool == 0) goto Label_469; // 0x1d3 JumpB
	var_44_bool = 1; // 0x1d4 MovB
	
Label_469:
	if(var_44_bool == 0) goto Label_521; // 0x1d5 JumpB
	var_48_int = 3; // 0x1d6 PushI
	irand(var_24_int, var_48_int); // 0x1d7 Func
	var_49_int = 0; // 0x1d9 PushI
	var_50_bool = var_24_int == var_49_int; // 0x1da Eq
	if(var_50_bool == 0) goto Label_493; // 0x1db JumpB
	var_51_int = var_22_int; // 0x1dc Push
	if(var_51_int == 0) goto Label_492; // 0x1dd JumpB
	irand(var_25_int, var_22_int); // 0x1de Func
	var_52_string = "all"; // 0x1e0 PushS
	var_53_string = ""; var_54_int = 0; // 0x1e1 PushV
	var_54_int = var_25_int; // 0x1e2 Mov
	func_694(var_53_string, var_54_int); // 0x1e3 NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x1e5 Func
	WaitForAnimEnd(var_26_bool); // 0x1e7 Func
	var_55_bool = var_26_bool == 0; // 0x1e9 Not
	if(var_55_bool == 0) goto Label_492; // 0x1ea JumpB
	goto Label_521; // 0x1eb Jump
	
Label_521:
	ResetAAS(); // 0x209 Func
	return 14; // 0x20b Return
	
Label_492:
	goto Label_510; // 0x1ec Jump
	
Label_510:
	var_56_bool = 0; // 0x1fe PushV
	func_524(var_56_bool); // 0x1ff NEW_2
	var_57_bool = var_56_bool == 0; // 0x201 Not
	if(var_57_bool == 0) goto Label_516; // 0x202 JumpB
	goto Label_521; // 0x203 Jump
	
Label_516:
	ResetAAS(); // 0x204 Func
	var_58_int = 1; // 0x206 PushI
	var_23_int = var_23_int + var_58_int; // 0x207 Add2
	goto Label_459; // 0x208 Jump
	
Label_493:
	var_59_int = 1; // 0x1ed PushI
	var_60_bool = var_24_int == var_59_int; // 0x1ee Eq
	if(var_60_bool == 0) goto Label_507; // 0x1ef JumpB
	var_61_int = 4; // 0x1f0 PushI
	rand(var_27_float, var_61_int); // 0x1f1 Func
	var_62_int = 1; // 0x1f3 PushI
	var_63_int = var_27_float + var_62_int; // 0x1f4 Add
	Sleep(var_63_int, var_28_bool); // 0x1f5 Func
	var_64_bool = var_28_bool == 0; // 0x1f7 Not
	if(var_64_bool == 0) goto Label_506; // 0x1f8 JumpB
	goto Label_521; // 0x1f9 Jump
	
Label_506:
	goto Label_510; // 0x1fa Jump
	
Label_507:
	var_65_int = var_23_int; // 0x1fb Push
	if(var_65_int == 0) goto Label_510; // 0x1fc JumpB
	goto Label_521; // 0x1fd Jump
}


func_701(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x2bd PushV
	var_34_int = 0; // 0x2be MovI
	
Label_703:
	var_36_string = "all"; // 0x2bf PushS
	var_37_string = ""; var_38_int = 0; // 0x2c0 PushV
	var_38_int = var_34_int; // 0x2c1 Mov
	func_694(var_37_string, var_38_int); // 0x2c2 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x2c4 Func
	var_42_bool = var_35_bool == 0; // 0x2c6 Not
	if(var_42_bool == 0) goto Label_713; // 0x2c7 JumpB
	goto Label_716; // 0x2c8 Jump
	
Label_716:
	var_31_int = var_34_int; // 0x2cc Mov
	return 4; // 0x2cd Return
	
Label_713:
	var_43_int = 1; // 0x2c9 PushI
	var_34_int = var_34_int + var_43_int; // 0x2ca Add2
	goto Label_703; // 0x2cb Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_122; // 0x4f JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x50 PushV
	var_87_object = var_1_object; // 0x51 MovT
	func_738(var_87_object); // 0x52 NEW_2
	if(var_86_bool == 0) goto Label_105; // 0x54 JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x55 PushV
	var_94_object = var_1_object; // 0x56 MovT
	var_95_object = var_0_object; // 0x57 MovT
	func_732(); // 0x58 NEW_2
	var_98_string = ""; // 0x5a PushV
	var_98_string = "Neutral"; // 0x5b MovS
	func_152(var_80_object, var_98_string); // 0x5c NEW_2
	var_115_int = 521220; // 0x5e PushI
	SetMessage(var_115_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_116_int = 521221; // 0x63 PushI
	var_117_int = 29945; // 0x64 PushI
	var_118_int = 22415; // 0x65 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x66 TObjFunc
	goto Label_122; // 0x68 Jump
	
Label_122:
	var_119_bool = 0; // 0x7a PushV
	func_829(var_119_bool); // 0x7b NEW_2
	if(var_119_bool == 0) goto Label_137; // 0x7d JumpB
	
Label_126:
	lshWaitForAnimEnd(); // 0x7e Func
	var_120_string = var_3_string; // 0x80 PushT
	if(var_120_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_136:
	goto Label_151; // 0x88 Jump
	
Label_151:
	return 0; // 0x97 Return
	
Label_131:
	var_121_string = ""; // 0x83 PushV
	var_121_string = var_2_object; // 0x84 MovT
	func_623(var_121_string); // 0x85 NEW_2
	goto Label_126; // 0x87 Jump
	
Label_137:
	var_132_string = "all"; // 0x89 PushS
	var_133_string = "idle"; // 0x8a PushS
	PlayAnimation(var_132_string, var_133_string); // 0x8b Func
	
Label_141:
	WaitForAnimEnd(); // 0x8d Func
	var_134_string = var_3_string; // 0x8f PushT
	if(var_134_string == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_146:
	var_135_string = "all"; // 0x92 PushS
	var_136_string = "idle"; // 0x93 PushS
	PlayAnimation(var_135_string, var_136_string); // 0x94 Func
	goto Label_141; // 0x96 Jump
	
Label_105:
	var_137_string = ""; // 0x69 PushV
	var_137_string = "Neutral"; // 0x6a MovS
	func_152(var_80_object, var_137_string); // 0x6b NEW_2
	var_138_int = 521222; // 0x6d PushI
	SetMessage(var_138_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_139_int = 521223; // 0x72 PushI
	var_140_int = -1; // 0x73 PushI
	var_141_int = 22417; // 0x74 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x75 TObjFunc
	goto Label_122; // 0x77 Jump
}


func_718()
{
	var_14_string = "b7q02"; // 0x2cf PushS
	var_15_int = 2; // 0x2d0 PushI
	SetVariable(var_14_string, var_15_int); // 0x2d1 Func
	func_750(); // 0x2d4 NEW_2
	var_39_bool = 0; var_40_string = ""; var_41_string = ""; // 0x2d6 PushV
	var_40_string = "quest_b7_02"; // 0x2d7 MovS
	var_41_string = "place_grabitels"; // 0x2d8 MovS
	func_682(var_39_bool, var_40_string, var_41_string); // 0x2d9 NEW_2
	return 0; // 0x2db Return
}


func_732()
{
	var_96_string = "oob7Morlok1"; // 0x2dd PushS
	var_97_int = 1; // 0x2de PushI
	SetVariable(var_96_string, var_97_int); // 0x2df Func
	return 0; // 0x2e1 Return
}


func_605()
{
	var_144_bool = 0; var_145_bool = 0; // 0x25d PushV
	var_146_bool = 1; // 0x25e PushB
	CameraSwitchToNormal(var_146_bool); // 0x25f Func
	var_147_bool = 0; // 0x261 PushV
	func_829(var_147_bool); // 0x262 NEW_2
	if(var_147_bool == 0) goto Label_614; // 0x264 JumpB
	goto Label_622; // 0x265 Jump
	
Label_622:
	return 2; // 0x26e Return
	
Label_614:
	var_148_string = "head"; // 0x266 PushS
	HasAnimationTrack(var_145_bool, var_148_string); // 0x267 Func
	var_149_bool = var_145_bool; // 0x269 Push
	if(var_149_bool == 0) goto Label_622; // 0x26a JumpB
	var_150_string = "head"; // 0x26b PushS
	UnlookAsync(var_150_string); // 0x26c Func
}


func_738(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x2e3 PushV
	var_89_string = "oob7Morlok1"; // 0x2e4 MovS
	func_677(var_88_int, var_89_string); // 0x2e5 NEW_2
	var_92_int = 0; // 0x2e7 PushI
	var_93_bool = var_88_int == var_92_int; // 0x2e8 Eq
	if(var_93_bool == 0) goto Label_748; // 0x2e9 JumpB
	var_86_bool = 1; // 0x2ea MovB
	return 0; // 0x2eb Return
	
Label_748:
	var_86_bool = 0; // 0x2ec MovB
	return 0; // 0x2ed Return
}


func_750()
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x2ee PushV
	var_18_int = 272; // 0x2ef PushI
	var_19_int = 2; // 0x2f0 PushI
	var_20_int = 521226; // 0x2f1 PushI
	CreateDiaryEntry(var_17_object, var_18_int, var_19_int, var_20_int); // 0x2f2 Func
	var_21_bool = 0; var_22_object = Obj(); var_23_int = 0; // 0x2f4 PushV
	var_22_object = var_17_object; // 0x2f5 Mov
	var_23_int = 270; // 0x2f6 MovI
	func_776(var_21_bool, var_22_object, var_23_int); // 0x2f7 NEW_2
	return 2; // 0x2f9 Return
}


func_623(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0; // 0x26f PushV
	lshHasAnimation(var_125_bool, var_121_string); // 0x270 Func
	var_128_bool = var_125_bool; // 0x272 Push
	if(var_128_bool == 0) goto Label_634; // 0x273 JumpB
	lshGetAnimTimes(var_121_string, var_126_float, var_127_float); // 0x274 Func
	var_129_bool = 0; // 0x276 PushB
	lshPlayAnimation(var_126_float, var_127_float, var_129_bool); // 0x277 Func
	goto Label_638; // 0x279 Jump
	
Label_638:
	return 6; // 0x27e Return
	
Label_634:
	var_130_string = "Can't find lsh animation : "; // 0x27a PushS
	var_131_int = var_130_string + var_121_string; // 0x27b Add
	Trace(var_131_int); // 0x27c Func
}


func_763(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x2fb PushV
	GetDiaryRoot(var_32_object); // 0x2fc Func
	var_33_bool = var_32_object == 0; // 0x2fe Not
	if(var_33_bool == 0) goto Label_773; // 0x2ff JumpB
	var_34_string = "Can't retrieve diary root"; // 0x300 PushS
	Trace(var_34_string); // 0x301 Func
	var_30_object = 0; // 0x303 MovB
	return 2; // 0x304 Return
	
Label_773:
	var_30_object = var_32_object; // 0x305 Mov
	return 2; // 0x306 Return
}


func_639(var_102_string, var_103_bool)
{
	var_106_bool = 0; var_107_float = 0; var_108_float = 0; var_109_bool = 0; var_110_float = 0; var_111_float = 0; // 0x27f PushV
	lshHasAnimation(var_109_bool, var_102_string); // 0x280 Func
	var_112_bool = var_109_bool; // 0x282 Push
	if(var_112_bool == 0) goto Label_649; // 0x283 JumpB
	lshGetAnimTimes(var_102_string, var_110_float, var_111_float); // 0x284 Func
	lshPlayAnimation(var_110_float, var_111_float, var_103_bool); // 0x286 Func
	goto Label_653; // 0x288 Jump
	
Label_653:
	return 6; // 0x28d Return
	
Label_649:
	var_113_string = "Can't find lsh animation : "; // 0x289 PushS
	var_114_int = var_113_string + var_102_string; // 0x28a Add
	Trace(var_114_int); // 0x28b Func
}


