task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0x9b PushI
	if(var_9_int == 0) goto Label_195; // 0x9c JumpB
	func_419(); // 0x9e NEW_2
	var_11_int = 15389; // 0xa0 PushI
	var_12_bool = var_7_bool == var_11_int; // 0xa1 Eq
	if(var_12_bool == 0) goto Label_183; // 0xa2 JumpB
	var_13_string = ""; // 0xa3 PushV
	var_13_string = "Neutral"; // 0xa4 MovS
	func_132(var_8_bool, var_13_string); // 0xa5 NEW_2
	var_30_int = 514175; // 0xa7 PushI
	SetMessage(var_30_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_31_int = 514176; // 0xac PushI
	var_32_int = -1; // 0xad PushI
	var_33_int = 15390; // 0xae PushI
	AddReply(var_31_int, var_32_int, var_33_int); // 0xaf TObjFunc
	var_34_int = 539614; // 0xb1 PushI
	var_35_int = -1; // 0xb2 PushI
	var_36_int = 41561; // 0xb3 PushI
	AddReply(var_34_int, var_35_int, var_36_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_3_string = 1; // 0xb7 TMovB
	var_37_bool = 0; // 0xb8 PushV
	func_485(var_37_bool); // 0xb9 NEW_2
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
	func_426(var_10_object); // 0x128 NEW_2
	RemoveActor(var_10_object); // 0x12a Func
	
Label_300:
	return 0; // 0x12c Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; var_8_string = ""; var_9_string = ""; // 0x1c6 PushV
	var_8_string = "quest_d11_02"; // 0x1c7 MovS
	var_9_string = "actor_unload"; // 0x1c8 MovS
	func_442(var_7_bool, var_8_string, var_9_string); // 0x1c9 NEW_2
	return 0; // 0x1cb Return
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
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_479(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_477(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_481(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_483(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_460(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_136_bool = var_26_bool == 0; // 0x38 Not
	if(var_136_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_137_object = Obj(); // 0x3f PushV
	var_137_object = var_17_object; // 0x40 Mov
	func_371(); // 0x41 NEW_2
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
	func_426(var_25_object); // 0x113 NEW_2
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


func_132(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0x85 PushV
	func_485(var_95_bool); // 0x86 NEW_2
	var_96_bool = var_95_bool == 0; // 0x88 Not
	if(var_96_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_97_bool = var_94_string == var_2_object; // 0x8b Eq
	if(var_97_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_98_string = ""; var_99_bool = 0; // 0x8e PushV
	var_98_string = var_94_string; // 0x8f Mov
	var_100_string = ""; // 0x90 PushS
	var_101_bool = var_94_string == var_100_string; // 0x91 Eq
	if(var_101_bool == 0) goto Label_149; // 0x92 JumpB
	var_99_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_404(var_98_string, var_99_bool); // 0x96 NEW_2
	var_2_object = var_94_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_99_bool = 1; // 0x95 MovB
}


func_388(var_120_string)
{
	var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0; // 0x184 PushV
	lshHasAnimation(var_124_bool, var_120_string); // 0x185 Func
	var_127_bool = var_124_bool; // 0x187 Push
	if(var_127_bool == 0) goto Label_399; // 0x188 JumpB
	lshGetAnimTimes(var_120_string, var_125_float, var_126_float); // 0x189 Func
	var_128_bool = 0; // 0x18b PushB
	lshPlayAnimation(var_125_float, var_126_float, var_128_bool); // 0x18c Func
	goto Label_403; // 0x18e Jump
	
Label_403:
	return 6; // 0x193 Return
	
Label_399:
	var_129_string = "Can't find lsh animation : "; // 0x18f PushS
	var_130_int = var_129_string + var_120_string; // 0x190 Add
	Trace(var_130_int); // 0x191 Func
}


func_404(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x194 PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x195 Func
	var_108_bool = var_105_bool; // 0x197 Push
	if(var_108_bool == 0) goto Label_414; // 0x198 JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x199 Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x19b Func
	goto Label_418; // 0x19d Jump
	
Label_418:
	return 6; // 0x1a2 Return
	
Label_414:
	var_109_string = "Can't find lsh animation : "; // 0x19e PushS
	var_110_int = var_109_string + var_98_string; // 0x19f Add
	Trace(var_110_int); // 0x1a0 Func
}


func_419()
{
	var_10_bool = 0; // 0x1a3 PushV
	func_485(var_10_bool); // 0x1a4 NEW_2
	if(var_10_bool == 0) goto Label_425; // 0x1a6 JumpB
	lshStopSpeech(); // 0x1a7 Func
	
Label_425:
	return 0; // 0x1a9 Return
}


func_426(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x1aa PushV
	self(var_12_object); // 0x1ab Func
	var_10_object = var_12_object; // 0x1ad Mov
	return 2; // 0x1ae Return
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
	func_432(var_54_cvector, var_55_cvector); // 0x14a NEW_2
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
	CameraTransit(var_45_cvector, var_43_cvector); // 0x15a Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x15c PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x15d PushE
	Rotate(var_67_float, var_68_float); // 0x15e Func
	var_69_bool = 0; // 0x160 PushV
	func_485(var_69_bool); // 0x161 NEW_2
	if(var_69_bool == 0) goto Label_357; // 0x163 JumpB
	goto Label_365; // 0x164 Jump
	
Label_365:
	CameraWaitForPlayFinish(); // 0x16d Func
	ResumeWorld(); // 0x16f Func
	var_27_bool = 1; // 0x171 MovB
	return 18; // 0x172 Return
	
Label_357:
	var_70_string = "head"; // 0x165 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x166 Func
	var_71_bool = var_47_bool; // 0x168 Push
	if(var_71_bool == 0) goto Label_365; // 0x169 JumpB
	var_72_string = "head"; // 0x16a PushS
	LookAsyncCamera(var_72_string); // 0x16b Func
}


func_432(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x1b0 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x1b1 Or
	var_58_float = sqrt(var_59_int); // 0x1b2 Sqrt2
	var_60_float = 0.0; // 0x1b3 PushF
	var_61_bool = var_58_float < var_60_float; // 0x1b4 LT
	if(var_61_bool == 0) goto Label_440; // 0x1b5 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x1b6 MovV
	return 2; // 0x1b7 Return
	
Label_440:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x1b8 Div2
	return 2; // 0x1b9 Return
}


func_442(var_7_bool, var_8_string, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x1ba PushV
	FindActor(var_11_object, var_8_string); // 0x1bb Func
	var_12_bool = var_11_object == 0; // 0x1bd NullEq
	if(var_12_bool == 0) goto Label_449; // 0x1be JumpB
	var_7_bool = 0; // 0x1bf MovB
	return 2; // 0x1c0 Return
	
Label_449:
	Trigger(var_11_object, var_9_string); // 0x1c1 Func
	var_7_bool = 1; // 0x1c3 MovB
	return 2; // 0x1c4 Return
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


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_102; // 0x4f JumpB
	var_94_string = ""; // 0x50 PushV
	var_94_string = "Neutral"; // 0x51 MovS
	func_132(var_88_object, var_94_string); // 0x52 NEW_2
	var_111_int = 514175; // 0x54 PushI
	SetMessage(var_111_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_112_int = 514176; // 0x59 PushI
	var_113_int = -1; // 0x5a PushI
	var_114_int = 15390; // 0x5b PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x5c TObjFunc
	var_115_int = 539614; // 0x5e PushI
	var_116_int = -1; // 0x5f PushI
	var_117_int = 41561; // 0x60 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_118_bool = 0; // 0x66 PushV
	func_485(var_118_bool); // 0x67 NEW_2
	if(var_118_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_119_string = var_3_string; // 0x6c PushT
	if(var_119_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_120_string = ""; // 0x6f PushV
	var_120_string = var_2_object; // 0x70 MovT
	func_388(var_120_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_131_string = "all"; // 0x75 PushS
	var_132_string = "idle"; // 0x76 PushS
	PlayAnimation(var_131_string, var_132_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_133_string = var_3_string; // 0x7b PushT
	if(var_133_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_134_string = "all"; // 0x7e PushS
	var_135_string = "idle"; // 0x7f PushS
	PlayAnimation(var_134_string, var_135_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_460(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x1cc PushV
	var_81_string = "branch"; // 0x1cd PushS
	GetVariable(var_81_string, var_80_int); // 0x1ce Func
	var_82_int = 0; // 0x1d0 PushI
	var_83_bool = var_80_int == var_82_int; // 0x1d1 Eq
	if(var_83_bool == 0) goto Label_470; // 0x1d2 JumpB
	var_78_int = 1; // 0x1d3 MovI
	return 2; // 0x1d4 Return
	
Label_470:
	var_84_int = 1; // 0x1d6 PushI
	var_85_bool = var_80_int == var_84_int; // 0x1d7 Eq
	if(var_85_bool == 0) goto Label_475; // 0x1d8 JumpB
	var_78_int = 2; // 0x1d9 MovI
	return 2; // 0x1da Return
	
Label_475:
	var_78_int = 3; // 0x1db MovI
	return 2; // 0x1dc Return
}


func_477(var_75_int)
{
	var_75_int = 515568; // 0x1dd MovI
	return 0; // 0x1de Return
}


func_479(var_74_int)
{
	var_74_int = 503353; // 0x1df MovI
	return 0; // 0x1e0 Return
}


func_481(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1.png"; // 0x1e1 MovS
	return 0; // 0x1e2 Return
}


func_483(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1_b.png"; // 0x1e3 MovS
	return 0; // 0x1e4 Return
}


func_485(var_69_bool)
{
	var_69_bool = 0; // 0x1e5 MovB
	return 0; // 0x1e6 Return
}


func_371()
{
	var_138_bool = 0; var_139_bool = 0; // 0x173 PushV
	CameraSwitchToNormal(); // 0x174 Func
	var_140_bool = 0; // 0x176 PushV
	func_485(var_140_bool); // 0x177 NEW_2
	if(var_140_bool == 0) goto Label_379; // 0x179 JumpB
	goto Label_387; // 0x17a Jump
	
Label_387:
	return 2; // 0x183 Return
	
Label_379:
	var_141_string = "head"; // 0x17b PushS
	HasAnimationTrack(var_139_bool, var_141_string); // 0x17c Func
	var_142_bool = var_139_bool; // 0x17e Push
	if(var_142_bool == 0) goto Label_387; // 0x17f JumpB
	var_143_string = "head"; // 0x180 PushS
	UnlookAsync(var_143_string); // 0x181 Func
}


