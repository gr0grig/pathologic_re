task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0x9b PushI
	if(var_9_int == 0) goto Label_195; // 0x9c JumpB
	func_421(); // 0x9e NEW_2
	var_11_int = 15386; // 0xa0 PushI
	var_12_bool = var_7_bool == var_11_int; // 0xa1 Eq
	if(var_12_bool == 0) goto Label_183; // 0xa2 JumpB
	var_13_string = ""; // 0xa3 PushV
	var_13_string = "Neutral"; // 0xa4 MovS
	func_132(var_8_bool, var_13_string); // 0xa5 NEW_2
	var_30_int = 514172; // 0xa7 PushI
	SetMessage(var_30_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_31_int = 514173; // 0xac PushI
	var_32_int = -1; // 0xad PushI
	var_33_int = 15387; // 0xae PushI
	AddReply(var_31_int, var_32_int, var_33_int); // 0xaf TObjFunc
	var_34_int = 539615; // 0xb1 PushI
	var_35_int = -1; // 0xb2 PushI
	var_36_int = 41562; // 0xb3 PushI
	AddReply(var_34_int, var_35_int, var_36_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_3_string = 1; // 0xb7 TMovB
	var_37_bool = 0; // 0xb8 PushV
	func_487(var_37_bool); // 0xb9 NEW_2
	if(var_37_bool == 0) goto Label_191; // 0xbb JumpB
	lshStopAnimation(); // 0xbc Func
	goto Label_193; // 0xbe Jump
	
Label_193:
	return 0; // 0xc1 Return
	
Label_191:
	StopAnimation(); // 0xbf Func
	
Label_195:
	return 0; // 0xc3 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0xd1 PushV
	var_10_string = "execute"; // 0xd2 PushS
	var_11_bool = var_7_string == var_10_string; // 0xd3 Eq
	if(var_11_bool == 0) goto Label_227; // 0xd4 JumpB
	var_1_object = 1; // 0xd5 TMovB
	var_12_string = "all"; // 0xd6 PushS
	var_13_string = "bdie"; // 0xd7 PushS
	PlayAnimation(var_12_string, var_13_string); // 0xd8 Func
	WaitForAnimEnd(var_9_bool); // 0xda Func
	var_14_bool = var_9_bool; // 0xdc Push
	if(var_14_bool == 0) goto Label_226; // 0xdd JumpB
	var_15_string = "all"; // 0xde PushS
	var_16_string = "bdie"; // 0xdf PushS
	LockAnimationEnd(var_15_string, var_16_string); // 0xe0 Func
	
Label_226:
	goto Label_231; // 0xe2 Jump
	
Label_231:
	return 2; // 0xe7 Return
	
Label_227:
	var_17_string = ""; // 0xe3 PushV
	var_17_string = var_7_string; // 0xe4 Mov
	func_257(var_9_bool, var_17_string); // 0xe5 NEW_2
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_object = var_1_object; // 0xe8 PushT
	if(var_7_object == 0) goto Label_238; // 0xe9 JumpB
	var_8_string = "all"; // 0xea PushS
	var_9_string = "bdie"; // 0xeb PushS
	LockAnimationEnd(var_8_string, var_9_string); // 0xec Func
	
Label_238:
	return 0; // 0xee Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0xef PushV
	var_10_string = "d11q02"; // 0xf0 PushS
	GetVariable(var_10_string, var_9_int); // 0xf1 Func
	var_11_bool = 0; // 0xf3 PushV
	var_11_bool = 0; // 0xf4 MovB
	var_12_int = 2; // 0xf5 PushI
	var_13_bool = var_9_int == var_12_int; // 0xf6 Eq
	if(var_13_bool == 0) goto Label_251; // 0xf7 JumpB
	var_14_bool = var_1_object == 0; // 0xf8 Not
	if(var_14_bool == 0) goto Label_251; // 0xf9 JumpB
	var_11_bool = 1; // 0xfa MovB
	
Label_251:
	if(var_11_bool == 0) goto Label_256; // 0xfb JumpB
	var_15_object = Obj(); // 0xfc PushV
	var_15_object = var_7_object; // 0xfd Mov
	func_196(var_15_object); // 0xfe NEW_2
	
Label_256:
	return 2; // 0x100 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; // 0x11d PushV
	var_7_bool = 0; // 0x11e MovB
	var_8_object = var_0_object; // 0x11f PushT
	if(var_8_object == 0) goto Label_294; // 0x120 JumpB
	var_9_bool = 0; // 0x121 PushV
	func_301(var_9_bool); // 0x122 NEW_2
	if(var_9_bool == 0) goto Label_294; // 0x124 JumpB
	var_7_bool = 1; // 0x125 MovB
	
Label_294:
	if(var_7_bool == 0) goto Label_300; // 0x126 JumpB
	var_10_object = Obj(); // 0x127 PushV
	func_428(var_10_object); // 0x128 NEW_2
	RemoveActor(var_10_object); // 0x12a Func
	
Label_300:
	return 0; // 0x12c Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; var_8_string = ""; var_9_string = ""; // 0x1c8 PushV
	var_8_string = "quest_d11_02"; // 0x1c9 MovS
	var_9_string = "actor_unload"; // 0x1ca MovS
	func_444(var_7_bool, var_8_string, var_9_string); // 0x1cb NEW_2
	return 0; // 0x1cd Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = 0; // 0xcc TMovB
	
Label_205:
	Hold(); // 0xcd Func
	goto Label_205; // 0xcf Jump
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_303(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_481(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_479(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_483(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_485(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_462(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_87_bool = var_24_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_17_object; // 0x30 Mov
	var_89_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_137_bool = var_26_bool == 0; // 0x38 Not
	if(var_137_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_138_object = Obj(); // 0x3f PushV
	var_138_object = var_17_object; // 0x40 Mov
	func_372(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_257(var_0_object, var_17_string)
{
	var_18_bool = 0; var_19_bool = 0; // 0x101 PushV
	var_20_string = "cleanup"; // 0x102 PushS
	var_21_bool = var_17_string == var_20_string; // 0x103 Eq
	if(var_21_bool == 0) goto Label_280; // 0x104 JumpB
	var_0_object = 1; // 0x105 TMovB
	IsLoaded(var_19_bool); // 0x106 Func
	var_22_bool = 0; // 0x108 PushV
	var_22_bool = 0; // 0x109 MovB
	var_23_bool = var_19_bool == 0; // 0x10a Not
	if(var_23_bool == 0) goto Label_273; // 0x10b JumpB
	var_24_bool = 0; // 0x10c PushV
	func_301(var_24_bool); // 0x10d NEW_2
	if(var_24_bool == 0) goto Label_273; // 0x10f JumpB
	var_22_bool = 1; // 0x110 MovB
	
Label_273:
	if(var_22_bool == 0) goto Label_279; // 0x111 JumpB
	var_25_object = Obj(); // 0x112 PushV
	func_428(var_25_object); // 0x113 NEW_2
	RemoveActor(var_25_object); // 0x115 Func
	
Label_279:
	goto Label_284; // 0x117 Jump
	
Label_284:
	return 2; // 0x11c Return
	
Label_280:
	var_28_string = "restore"; // 0x118 PushS
	var_29_bool = var_17_string == var_28_string; // 0x119 Eq
	if(var_29_bool == 0) goto Label_284; // 0x11a JumpB
	var_0_object = 0; // 0x11b TMovB
}


func_132(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0x85 PushV
	func_487(var_96_bool); // 0x86 NEW_2
	var_97_bool = var_96_bool == 0; // 0x88 Not
	if(var_97_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_98_bool = var_95_string == var_2_object; // 0x8b Eq
	if(var_98_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_99_string = ""; var_100_bool = 0; // 0x8e PushV
	var_99_string = var_95_string; // 0x8f Mov
	var_101_string = ""; // 0x90 PushS
	var_102_bool = var_95_string == var_101_string; // 0x91 Eq
	if(var_102_bool == 0) goto Label_149; // 0x92 JumpB
	var_100_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_406(var_99_string, var_100_bool); // 0x96 NEW_2
	var_2_object = var_95_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_100_bool = 1; // 0x95 MovB
}


func_390(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0; // 0x186 PushV
	lshHasAnimation(var_125_bool, var_121_string); // 0x187 Func
	var_128_bool = var_125_bool; // 0x189 Push
	if(var_128_bool == 0) goto Label_401; // 0x18a JumpB
	lshGetAnimTimes(var_121_string, var_126_float, var_127_float); // 0x18b Func
	var_129_bool = 0; // 0x18d PushB
	lshPlayAnimation(var_126_float, var_127_float, var_129_bool); // 0x18e Func
	goto Label_405; // 0x190 Jump
	
Label_405:
	return 6; // 0x195 Return
	
Label_401:
	var_130_string = "Can't find lsh animation : "; // 0x191 PushS
	var_131_int = var_130_string + var_121_string; // 0x192 Add
	Trace(var_131_int); // 0x193 Func
}


func_406(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x196 PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x197 Func
	var_109_bool = var_106_bool; // 0x199 Push
	if(var_109_bool == 0) goto Label_416; // 0x19a JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x19b Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x19d Func
	goto Label_420; // 0x19f Jump
	
Label_420:
	return 6; // 0x1a4 Return
	
Label_416:
	var_110_string = "Can't find lsh animation : "; // 0x1a0 PushS
	var_111_int = var_110_string + var_99_string; // 0x1a1 Add
	Trace(var_111_int); // 0x1a2 Func
}


func_421()
{
	var_10_bool = 0; // 0x1a5 PushV
	func_487(var_10_bool); // 0x1a6 NEW_2
	if(var_10_bool == 0) goto Label_427; // 0x1a8 JumpB
	lshStopSpeech(); // 0x1a9 Func
	
Label_427:
	return 0; // 0x1ab Return
}


func_428(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x1ac PushV
	self(var_12_object); // 0x1ad Func
	var_10_object = var_12_object; // 0x1af Mov
	return 2; // 0x1b0 Return
}


func_301(var_9_bool)
{
	var_9_bool = 1; // 0x12d MovB
	return 0; // 0x12e Return
}


func_303(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x12f PushV
	GetPosition(var_40_cvector); // 0x130 ObjFunc
	GetEyesHeight(var_39_float); // 0x132 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x134 PushE
	var_48_float = var_48_float + var_39_float; // 0x135 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x136 PopE
	GetPosition(var_41_cvector); // 0x137 Func
	GetEyesHeight(var_39_float); // 0x139 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x13b PushE
	var_49_float = var_49_float + var_39_float; // 0x13c Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x13d PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x13e Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x13f PushE
	var_50_float = 0; // 0x140 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x141 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x142 Or
	var_52_float = sqrt(var_51_int); // 0x143 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x144 Div2
	var_43_cvector = -var_42_cvector; // 0x145 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x146 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x147 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x148 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x149 Xor2
	func_434(var_54_cvector, var_55_cvector); // 0x14a NEW_2
	var_62_int = 25; // 0x14c PushI
	var_63_float = var_54_cvector * var_62_int; // 0x14d Mult
	var_64_int = var_53_float + var_63_float; // 0x14e Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x14f PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x150 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x151 Add2
	IsOverrideActive(var_46_bool); // 0x152 Func
	var_66_bool = var_46_bool; // 0x154 Push
	if(var_66_bool == 0) goto Label_344; // 0x155 JumpB
	var_27_bool = 0; // 0x156 MovB
	return 18; // 0x157 Return
	
Label_344:
	StopWorld(); // 0x158 Func
	var_67_bool = 1; // 0x15a PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x15b Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x15d PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x15e PushE
	Rotate(var_68_float, var_69_float); // 0x15f Func
	var_70_bool = 0; // 0x161 PushV
	func_487(var_70_bool); // 0x162 NEW_2
	if(var_70_bool == 0) goto Label_358; // 0x164 JumpB
	goto Label_366; // 0x165 Jump
	
Label_366:
	CameraWaitForPlayFinish(); // 0x16e Func
	ResumeWorld(); // 0x170 Func
	var_27_bool = 1; // 0x172 MovB
	return 18; // 0x173 Return
	
Label_358:
	var_71_string = "head"; // 0x166 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x167 Func
	var_72_bool = var_47_bool; // 0x169 Push
	if(var_72_bool == 0) goto Label_366; // 0x16a JumpB
	var_73_string = "head"; // 0x16b PushS
	LookAsyncCamera(var_73_string); // 0x16c Func
}


func_434(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x1b2 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x1b3 Or
	var_58_float = sqrt(var_59_int); // 0x1b4 Sqrt2
	var_60_float = 0.0; // 0x1b5 PushF
	var_61_bool = var_58_float < var_60_float; // 0x1b6 LT
	if(var_61_bool == 0) goto Label_442; // 0x1b7 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x1b8 MovV
	return 2; // 0x1b9 Return
	
Label_442:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x1ba Div2
	return 2; // 0x1bb Return
}


func_444(var_7_bool, var_8_string, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x1bc PushV
	FindActor(var_11_object, var_8_string); // 0x1bd Func
	var_12_bool = var_11_object == 0; // 0x1bf NullEq
	if(var_12_bool == 0) goto Label_451; // 0x1c0 JumpB
	var_7_bool = 0; // 0x1c1 MovB
	return 2; // 0x1c2 Return
	
Label_451:
	Trigger(var_11_object, var_9_string); // 0x1c3 Func
	var_7_bool = 1; // 0x1c5 MovB
	return 2; // 0x1c6 Return
}


func_196(var_15_object)
{
	var_16_int = 0; var_17_object = Obj(); // 0xc5 PushV
	var_17_object = var_15_object; // 0xc6 Mov
	TaskCall(0); // 0xc7 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0xc8 NEW_2
	TaskReturn(); // 0xc9 TaskReturn
	return 0; // 0xcb Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_102; // 0x4f JumpB
	var_95_string = ""; // 0x50 PushV
	var_95_string = "Neutral"; // 0x51 MovS
	func_132(var_89_object, var_95_string); // 0x52 NEW_2
	var_112_int = 514172; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_int = 514173; // 0x59 PushI
	var_114_int = -1; // 0x5a PushI
	var_115_int = 15387; // 0x5b PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x5c TObjFunc
	var_116_int = 539615; // 0x5e PushI
	var_117_int = -1; // 0x5f PushI
	var_118_int = 41562; // 0x60 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_119_bool = 0; // 0x66 PushV
	func_487(var_119_bool); // 0x67 NEW_2
	if(var_119_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_120_string = var_3_string; // 0x6c PushT
	if(var_120_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_121_string = ""; // 0x6f PushV
	var_121_string = var_2_object; // 0x70 MovT
	func_390(var_121_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_132_string = "all"; // 0x75 PushS
	var_133_string = "idle"; // 0x76 PushS
	PlayAnimation(var_132_string, var_133_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_134_string = var_3_string; // 0x7b PushT
	if(var_134_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_135_string = "all"; // 0x7e PushS
	var_136_string = "idle"; // 0x7f PushS
	PlayAnimation(var_135_string, var_136_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_462(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x1ce PushV
	var_82_string = "branch"; // 0x1cf PushS
	GetVariable(var_82_string, var_81_int); // 0x1d0 Func
	var_83_int = 0; // 0x1d2 PushI
	var_84_bool = var_81_int == var_83_int; // 0x1d3 Eq
	if(var_84_bool == 0) goto Label_472; // 0x1d4 JumpB
	var_79_int = 1; // 0x1d5 MovI
	return 2; // 0x1d6 Return
	
Label_472:
	var_85_int = 1; // 0x1d8 PushI
	var_86_bool = var_81_int == var_85_int; // 0x1d9 Eq
	if(var_86_bool == 0) goto Label_477; // 0x1da JumpB
	var_79_int = 2; // 0x1db MovI
	return 2; // 0x1dc Return
	
Label_477:
	var_79_int = 3; // 0x1dd MovI
	return 2; // 0x1de Return
}


func_479(var_76_int)
{
	var_76_int = 515568; // 0x1df MovI
	return 0; // 0x1e0 Return
}


func_481(var_75_int)
{
	var_75_int = 503353; // 0x1e1 MovI
	return 0; // 0x1e2 Return
}


func_483(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png"; // 0x1e3 MovS
	return 0; // 0x1e4 Return
}


func_485(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png"; // 0x1e5 MovS
	return 0; // 0x1e6 Return
}


func_487(var_70_bool)
{
	var_70_bool = 0; // 0x1e7 MovB
	return 0; // 0x1e8 Return
}


func_372()
{
	var_139_bool = 0; var_140_bool = 0; // 0x174 PushV
	var_141_bool = 1; // 0x175 PushB
	CameraSwitchToNormal(var_141_bool); // 0x176 Func
	var_142_bool = 0; // 0x178 PushV
	func_487(var_142_bool); // 0x179 NEW_2
	if(var_142_bool == 0) goto Label_381; // 0x17b JumpB
	goto Label_389; // 0x17c Jump
	
Label_389:
	return 2; // 0x185 Return
	
Label_381:
	var_143_string = "head"; // 0x17d PushS
	HasAnimationTrack(var_140_bool, var_143_string); // 0x17e Func
	var_144_bool = var_140_bool; // 0x180 Push
	if(var_144_bool == 0) goto Label_389; // 0x181 JumpB
	var_145_string = "head"; // 0x182 PushS
	UnlookAsync(var_145_string); // 0x183 Func
}


