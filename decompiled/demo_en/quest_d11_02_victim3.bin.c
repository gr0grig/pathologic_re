task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0x96 PushI
	if(var_9_int == 0) goto Label_206; // 0x97 JumpB
	func_430(); // 0x99 NEW_2
	var_11_int = 15392; // 0x9b PushI
	var_12_bool = var_7_bool == var_11_int; // 0x9c Eq
	if(var_12_bool == 0) goto Label_173; // 0x9d JumpB
	var_13_string = ""; // 0x9e PushV
	var_13_string = "Neutral"; // 0x9f MovS
	func_127(var_8_bool, var_13_string); // 0xa0 NEW_2
	var_30_int = 514178; // 0xa2 PushI
	SetMessage(var_30_int); // 0xa3 TObjFunc
	ClearReplies(); // 0xa5 TObjFunc
	var_31_int = 539618; // 0xa7 PushI
	var_32_int = 41566; // 0xa8 PushI
	var_33_int = 41565; // 0xa9 PushI
	AddReply(var_31_int, var_32_int, var_33_int); // 0xaa TObjFunc
	return 0; // 0xac Return
	
Label_173:
	var_34_int = 41566; // 0xad PushI
	var_35_bool = var_7_bool == var_34_int; // 0xae Eq
	if(var_35_bool == 0) goto Label_191; // 0xaf JumpB
	var_36_string = ""; // 0xb0 PushV
	var_36_string = "Neutral"; // 0xb1 MovS
	func_127(var_8_bool, var_36_string); // 0xb2 NEW_2
	var_37_int = 539619; // 0xb4 PushI
	SetMessage(var_37_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_38_int = 539620; // 0xb9 PushI
	var_39_int = -1; // 0xba PushI
	var_40_int = 41567; // 0xbb PushI
	AddReply(var_38_int, var_39_int, var_40_int); // 0xbc TObjFunc
	return 0; // 0xbe Return
	
Label_191:
	var_41_int = 41568; // 0xbf PushI
	var_42_bool = var_7_bool == var_41_int; // 0xc0 Eq
	if(var_42_bool == 0) goto Label_194; // 0xc1 JumpB
	
Label_194:
	var_3_string = 1; // 0xc2 TMovB
	var_43_bool = 0; // 0xc3 PushV
	func_496(var_43_bool); // 0xc4 NEW_2
	if(var_43_bool == 0) goto Label_202; // 0xc6 JumpB
	lshStopAnimation(); // 0xc7 Func
	goto Label_204; // 0xc9 Jump
	
Label_204:
	return 0; // 0xcc Return
	
Label_202:
	StopAnimation(); // 0xca Func
	
Label_206:
	return 0; // 0xce Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0xdc PushV
	var_10_string = "execute"; // 0xdd PushS
	var_11_bool = var_7_string == var_10_string; // 0xde Eq
	if(var_11_bool == 0) goto Label_238; // 0xdf JumpB
	var_1_object = 1; // 0xe0 TMovB
	var_12_string = "all"; // 0xe1 PushS
	var_13_string = "bdie"; // 0xe2 PushS
	PlayAnimation(var_12_string, var_13_string); // 0xe3 Func
	WaitForAnimEnd(var_9_bool); // 0xe5 Func
	var_14_bool = var_9_bool; // 0xe7 Push
	if(var_14_bool == 0) goto Label_237; // 0xe8 JumpB
	var_15_string = "all"; // 0xe9 PushS
	var_16_string = "bdie"; // 0xea PushS
	LockAnimationEnd(var_15_string, var_16_string); // 0xeb Func
	
Label_237:
	goto Label_242; // 0xed Jump
	
Label_242:
	return 2; // 0xf2 Return
	
Label_238:
	var_17_string = ""; // 0xee PushV
	var_17_string = var_7_string; // 0xef Mov
	func_268(var_9_bool, var_17_string); // 0xf0 NEW_2
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_object = var_1_object; // 0xf3 PushT
	if(var_7_object == 0) goto Label_249; // 0xf4 JumpB
	var_8_string = "all"; // 0xf5 PushS
	var_9_string = "bdie"; // 0xf6 PushS
	LockAnimationEnd(var_8_string, var_9_string); // 0xf7 Func
	
Label_249:
	return 0; // 0xf9 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0xfa PushV
	var_10_string = "d11q02"; // 0xfb PushS
	GetVariable(var_10_string, var_9_int); // 0xfc Func
	var_11_bool = 0; // 0xfe PushV
	var_11_bool = 0; // 0xff MovB
	var_12_int = 2; // 0x100 PushI
	var_13_bool = var_9_int == var_12_int; // 0x101 Eq
	if(var_13_bool == 0) goto Label_262; // 0x102 JumpB
	var_14_bool = var_1_object == 0; // 0x103 Not
	if(var_14_bool == 0) goto Label_262; // 0x104 JumpB
	var_11_bool = 1; // 0x105 MovB
	
Label_262:
	if(var_11_bool == 0) goto Label_267; // 0x106 JumpB
	var_15_object = Obj(); // 0x107 PushV
	var_15_object = var_7_object; // 0x108 Mov
	func_207(var_15_object); // 0x109 NEW_2
	
Label_267:
	return 2; // 0x10b Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; // 0x128 PushV
	var_7_bool = 0; // 0x129 MovB
	var_8_object = var_0_object; // 0x12a PushT
	if(var_8_object == 0) goto Label_305; // 0x12b JumpB
	var_9_bool = 0; // 0x12c PushV
	func_312(var_9_bool); // 0x12d NEW_2
	if(var_9_bool == 0) goto Label_305; // 0x12f JumpB
	var_7_bool = 1; // 0x130 MovB
	
Label_305:
	if(var_7_bool == 0) goto Label_311; // 0x131 JumpB
	var_10_object = Obj(); // 0x132 PushV
	func_437(var_10_object); // 0x133 NEW_2
	RemoveActor(var_10_object); // 0x135 Func
	
Label_311:
	return 0; // 0x137 Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; var_8_string = ""; var_9_string = ""; // 0x1d1 PushV
	var_8_string = "quest_d11_02"; // 0x1d2 MovS
	var_9_string = "actor_unload"; // 0x1d3 MovS
	func_453(var_7_bool, var_8_string, var_9_string); // 0x1d4 NEW_2
	return 0; // 0x1d6 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = 0; // 0xd7 TMovB
	
Label_216:
	Hold(); // 0xd8 Func
	goto Label_216; // 0xda Jump
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_314(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_490(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_488(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_492(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_494(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_471(var_78_int); // 0x22 NEW_2
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
	var_133_bool = var_26_bool == 0; // 0x38 Not
	if(var_133_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_134_object = Obj(); // 0x3f PushV
	var_134_object = var_17_object; // 0x40 Mov
	func_382(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_268(var_0_object, var_17_string)
{
	var_18_bool = 0; var_19_bool = 0; // 0x10c PushV
	var_20_string = "cleanup"; // 0x10d PushS
	var_21_bool = var_17_string == var_20_string; // 0x10e Eq
	if(var_21_bool == 0) goto Label_291; // 0x10f JumpB
	var_0_object = 1; // 0x110 TMovB
	IsLoaded(var_19_bool); // 0x111 Func
	var_22_bool = 0; // 0x113 PushV
	var_22_bool = 0; // 0x114 MovB
	var_23_bool = var_19_bool == 0; // 0x115 Not
	if(var_23_bool == 0) goto Label_284; // 0x116 JumpB
	var_24_bool = 0; // 0x117 PushV
	func_312(var_24_bool); // 0x118 NEW_2
	if(var_24_bool == 0) goto Label_284; // 0x11a JumpB
	var_22_bool = 1; // 0x11b MovB
	
Label_284:
	if(var_22_bool == 0) goto Label_290; // 0x11c JumpB
	var_25_object = Obj(); // 0x11d PushV
	func_437(var_25_object); // 0x11e NEW_2
	RemoveActor(var_25_object); // 0x120 Func
	
Label_290:
	goto Label_295; // 0x122 Jump
	
Label_295:
	return 2; // 0x127 Return
	
Label_291:
	var_28_string = "restore"; // 0x123 PushS
	var_29_bool = var_17_string == var_28_string; // 0x124 Eq
	if(var_29_bool == 0) goto Label_295; // 0x125 JumpB
	var_0_object = 0; // 0x126 TMovB
}


func_399(var_117_string)
{
	var_118_bool = 0; var_119_float = 0; var_120_float = 0; var_121_bool = 0; var_122_float = 0; var_123_float = 0; // 0x18f PushV
	lshHasAnimation(var_121_bool, var_117_string); // 0x190 Func
	var_124_bool = var_121_bool; // 0x192 Push
	if(var_124_bool == 0) goto Label_410; // 0x193 JumpB
	lshGetAnimTimes(var_117_string, var_122_float, var_123_float); // 0x194 Func
	var_125_bool = 0; // 0x196 PushB
	lshPlayAnimation(var_122_float, var_123_float, var_125_bool); // 0x197 Func
	goto Label_414; // 0x199 Jump
	
Label_414:
	return 6; // 0x19e Return
	
Label_410:
	var_126_string = "Can't find lsh animation : "; // 0x19a PushS
	var_127_int = var_126_string + var_117_string; // 0x19b Add
	Trace(var_127_int); // 0x19c Func
}


func_415(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x19f PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x1a0 Func
	var_108_bool = var_105_bool; // 0x1a2 Push
	if(var_108_bool == 0) goto Label_425; // 0x1a3 JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x1a4 Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x1a6 Func
	goto Label_429; // 0x1a8 Jump
	
Label_429:
	return 6; // 0x1ad Return
	
Label_425:
	var_109_string = "Can't find lsh animation : "; // 0x1a9 PushS
	var_110_int = var_109_string + var_98_string; // 0x1aa Add
	Trace(var_110_int); // 0x1ab Func
}


func_430()
{
	var_10_bool = 0; // 0x1ae PushV
	func_496(var_10_bool); // 0x1af NEW_2
	if(var_10_bool == 0) goto Label_436; // 0x1b1 JumpB
	lshStopSpeech(); // 0x1b2 Func
	
Label_436:
	return 0; // 0x1b4 Return
}


func_437(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x1b5 PushV
	self(var_12_object); // 0x1b6 Func
	var_10_object = var_12_object; // 0x1b8 Mov
	return 2; // 0x1b9 Return
}


func_312(var_9_bool)
{
	var_9_bool = 1; // 0x138 MovB
	return 0; // 0x139 Return
}


func_314(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x13a PushV
	GetPosition(var_40_cvector); // 0x13b ObjFunc
	GetEyesHeight(var_39_float); // 0x13d ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x13f PushE
	var_48_float = var_48_float + var_39_float; // 0x140 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x141 PopE
	GetPosition(var_41_cvector); // 0x142 Func
	GetEyesHeight(var_39_float); // 0x144 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x146 PushE
	var_49_float = var_49_float + var_39_float; // 0x147 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x148 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x149 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x14a PushE
	var_50_float = 0; // 0x14b MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x14c PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x14d Or
	var_52_float = sqrt(var_51_int); // 0x14e Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x14f Div2
	var_43_cvector = -var_42_cvector; // 0x150 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x151 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x152 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x153 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x154 Xor2
	func_443(var_54_cvector, var_55_cvector); // 0x155 NEW_2
	var_62_int = 25; // 0x157 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x158 Mult
	var_64_int = var_53_float + var_63_float; // 0x159 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x15a PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x15b Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x15c Add2
	IsOverrideActive(var_46_bool); // 0x15d Func
	var_66_bool = var_46_bool; // 0x15f Push
	if(var_66_bool == 0) goto Label_355; // 0x160 JumpB
	var_27_bool = 0; // 0x161 MovB
	return 18; // 0x162 Return
	
Label_355:
	StopWorld(); // 0x163 Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x165 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x167 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x168 PushE
	Rotate(var_67_float, var_68_float); // 0x169 Func
	var_69_bool = 0; // 0x16b PushV
	func_496(var_69_bool); // 0x16c NEW_2
	if(var_69_bool == 0) goto Label_368; // 0x16e JumpB
	goto Label_376; // 0x16f Jump
	
Label_376:
	CameraWaitForPlayFinish(); // 0x178 Func
	ResumeWorld(); // 0x17a Func
	var_27_bool = 1; // 0x17c MovB
	return 18; // 0x17d Return
	
Label_368:
	var_70_string = "head"; // 0x170 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x171 Func
	var_71_bool = var_47_bool; // 0x173 Push
	if(var_71_bool == 0) goto Label_376; // 0x174 JumpB
	var_72_string = "head"; // 0x175 PushS
	LookAsyncCamera(var_72_string); // 0x176 Func
}


func_443(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x1bb PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x1bc Or
	var_58_float = sqrt(var_59_int); // 0x1bd Sqrt2
	var_60_float = 0.0; // 0x1be PushF
	var_61_bool = var_58_float < var_60_float; // 0x1bf LT
	if(var_61_bool == 0) goto Label_451; // 0x1c0 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x1c1 MovV
	return 2; // 0x1c2 Return
	
Label_451:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x1c3 Div2
	return 2; // 0x1c4 Return
}


func_453(var_7_bool, var_8_string, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x1c5 PushV
	FindActor(var_11_object, var_8_string); // 0x1c6 Func
	var_12_bool = var_11_object == 0; // 0x1c8 NullEq
	if(var_12_bool == 0) goto Label_460; // 0x1c9 JumpB
	var_7_bool = 0; // 0x1ca MovB
	return 2; // 0x1cb Return
	
Label_460:
	Trigger(var_11_object, var_9_string); // 0x1cc Func
	var_7_bool = 1; // 0x1ce MovB
	return 2; // 0x1cf Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_97; // 0x4f JumpB
	var_94_string = ""; // 0x50 PushV
	var_94_string = "Neutral"; // 0x51 MovS
	func_127(var_88_object, var_94_string); // 0x52 NEW_2
	var_111_int = 514178; // 0x54 PushI
	SetMessage(var_111_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_112_int = 539618; // 0x59 PushI
	var_113_int = 41566; // 0x5a PushI
	var_114_int = 41565; // 0x5b PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x5c TObjFunc
	goto Label_97; // 0x5e Jump
	
Label_97:
	var_115_bool = 0; // 0x61 PushV
	func_496(var_115_bool); // 0x62 NEW_2
	if(var_115_bool == 0) goto Label_112; // 0x64 JumpB
	
Label_101:
	lshWaitForAnimEnd(); // 0x65 Func
	var_116_string = var_3_string; // 0x67 PushT
	if(var_116_string == 0) goto Label_106; // 0x68 JumpB
	goto Label_111; // 0x69 Jump
	
Label_111:
	goto Label_126; // 0x6f Jump
	
Label_126:
	return 0; // 0x7e Return
	
Label_106:
	var_117_string = ""; // 0x6a PushV
	var_117_string = var_2_object; // 0x6b MovT
	func_399(var_117_string); // 0x6c NEW_2
	goto Label_101; // 0x6e Jump
	
Label_112:
	var_128_string = "all"; // 0x70 PushS
	var_129_string = "idle"; // 0x71 PushS
	PlayAnimation(var_128_string, var_129_string); // 0x72 Func
	
Label_116:
	WaitForAnimEnd(); // 0x74 Func
	var_130_string = var_3_string; // 0x76 PushT
	if(var_130_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_121:
	var_131_string = "all"; // 0x79 PushS
	var_132_string = "idle"; // 0x7a PushS
	PlayAnimation(var_131_string, var_132_string); // 0x7b Func
	goto Label_116; // 0x7d Jump
}


func_207(var_15_object)
{
	var_16_int = 0; var_17_object = Obj(); // 0xd0 PushV
	var_17_object = var_15_object; // 0xd1 Mov
	TaskCall(0); // 0xd2 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0xd3 NEW_2
	TaskReturn(); // 0xd4 TaskReturn
	return 0; // 0xd6 Return
}


func_471(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x1d7 PushV
	var_81_string = "branch"; // 0x1d8 PushS
	GetVariable(var_81_string, var_80_int); // 0x1d9 Func
	var_82_int = 0; // 0x1db PushI
	var_83_bool = var_80_int == var_82_int; // 0x1dc Eq
	if(var_83_bool == 0) goto Label_481; // 0x1dd JumpB
	var_78_int = 1; // 0x1de MovI
	return 2; // 0x1df Return
	
Label_481:
	var_84_int = 1; // 0x1e1 PushI
	var_85_bool = var_80_int == var_84_int; // 0x1e2 Eq
	if(var_85_bool == 0) goto Label_486; // 0x1e3 JumpB
	var_78_int = 2; // 0x1e4 MovI
	return 2; // 0x1e5 Return
	
Label_486:
	var_78_int = 3; // 0x1e6 MovI
	return 2; // 0x1e7 Return
}


func_488(var_75_int)
{
	var_75_int = 515564; // 0x1e8 MovI
	return 0; // 0x1e9 Return
}


func_490(var_74_int)
{
	var_74_int = 503349; // 0x1ea MovI
	return 0; // 0x1eb Return
}


func_492(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2.png"; // 0x1ec MovS
	return 0; // 0x1ed Return
}


func_494(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2_b.png"; // 0x1ee MovS
	return 0; // 0x1ef Return
}


func_496(var_69_bool)
{
	var_69_bool = 0; // 0x1f0 MovB
	return 0; // 0x1f1 Return
}


func_382()
{
	var_135_bool = 0; var_136_bool = 0; // 0x17e PushV
	CameraSwitchToNormal(); // 0x17f Func
	var_137_bool = 0; // 0x181 PushV
	func_496(var_137_bool); // 0x182 NEW_2
	if(var_137_bool == 0) goto Label_390; // 0x184 JumpB
	goto Label_398; // 0x185 Jump
	
Label_398:
	return 2; // 0x18e Return
	
Label_390:
	var_138_string = "head"; // 0x186 PushS
	HasAnimationTrack(var_136_bool, var_138_string); // 0x187 Func
	var_139_bool = var_136_bool; // 0x189 Push
	if(var_139_bool == 0) goto Label_398; // 0x18a JumpB
	var_140_string = "head"; // 0x18b PushS
	UnlookAsync(var_140_string); // 0x18c Func
}


func_127(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0x80 PushV
	func_496(var_95_bool); // 0x81 NEW_2
	var_96_bool = var_95_bool == 0; // 0x83 Not
	if(var_96_bool == 0) goto Label_134; // 0x84 JumpB
	return 0; // 0x85 Return
	
Label_134:
	var_97_bool = var_94_string == var_2_object; // 0x86 Eq
	if(var_97_bool == 0) goto Label_137; // 0x87 JumpB
	return 0; // 0x88 Return
	
Label_137:
	var_98_string = ""; var_99_bool = 0; // 0x89 PushV
	var_98_string = var_94_string; // 0x8a Mov
	var_100_string = ""; // 0x8b PushS
	var_101_bool = var_94_string == var_100_string; // 0x8c Eq
	if(var_101_bool == 0) goto Label_144; // 0x8d JumpB
	var_99_bool = 0; // 0x8e MovB
	goto Label_145; // 0x8f Jump
	
Label_145:
	func_415(var_98_string, var_99_bool); // 0x91 NEW_2
	var_2_object = var_94_string; // 0x93 TMov
	return 0; // 0x94 Return
	
Label_144:
	var_99_bool = 1; // 0x90 MovB
}


