task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xa0 PushI
	if(var_8_int == 0) goto Label_259; // 0xa1 JumpB
	func_552(); // 0xa3 NEW_2
	var_10_int = 24558; // 0xa5 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xa6 Eq
	if(var_11_bool == 0) goto Label_173; // 0xa7 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xa8 PushV
	var_12_object = var_1_object; // 0xa9 MovT
	var_13_object = var_0_object; // 0xaa MovT
	func_614(); // 0xab NEW_2
	
Label_173:
	var_16_int = 23176; // 0xad PushI
	var_17_bool = var_6_int == var_16_int; // 0xae Eq
	if(var_17_bool == 0) goto Label_201; // 0xaf JumpB
	var_18_string = ""; // 0xb0 PushV
	var_18_string = "Neutral"; // 0xb1 MovS
	func_137(var_7_bool, var_18_string); // 0xb2 NEW_2
	var_35_int = 522006; // 0xb4 PushI
	SetMessage(var_35_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_36_bool = 0; var_37_object = Obj(); // 0xb9 PushV
	var_37_object = var_1_object; // 0xba MovT
	func_620(var_37_object); // 0xbb NEW_2
	if(var_36_bool == 0) goto Label_195; // 0xbd JumpB
	var_44_int = 523342; // 0xbe PushI
	var_45_int = 24559; // 0xbf PushI
	var_46_int = 24558; // 0xc0 PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xc1 TObjFunc
	
Label_195:
	var_47_int = 522007; // 0xc3 PushI
	var_48_int = -1; // 0xc4 PushI
	var_49_int = 23177; // 0xc5 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_50_int = 24559; // 0xc9 PushI
	var_51_bool = var_6_int == var_50_int; // 0xca Eq
	if(var_51_bool == 0) goto Label_224; // 0xcb JumpB
	var_52_string = ""; // 0xcc PushV
	var_52_string = "Neutral"; // 0xcd MovS
	func_137(var_7_bool, var_52_string); // 0xce NEW_2
	var_53_int = 523343; // 0xd0 PushI
	SetMessage(var_53_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_54_int = 523344; // 0xd5 PushI
	var_55_int = 24562; // 0xd6 PushI
	var_56_int = 24560; // 0xd7 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xd8 TObjFunc
	var_57_int = 523345; // 0xda PushI
	var_58_int = -1; // 0xdb PushI
	var_59_int = 24561; // 0xdc PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_60_int = 24562; // 0xe0 PushI
	var_61_bool = var_6_int == var_60_int; // 0xe1 Eq
	if(var_61_bool == 0) goto Label_247; // 0xe2 JumpB
	var_62_string = ""; // 0xe3 PushV
	var_62_string = "Neutral"; // 0xe4 MovS
	func_137(var_7_bool, var_62_string); // 0xe5 NEW_2
	var_63_int = 523346; // 0xe7 PushI
	SetMessage(var_63_int); // 0xe8 TObjFunc
	ClearReplies(); // 0xea TObjFunc
	var_64_int = 523347; // 0xec PushI
	var_65_int = -1; // 0xed PushI
	var_66_int = 24563; // 0xee PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xef TObjFunc
	var_67_int = 523348; // 0xf1 PushI
	var_68_int = -1; // 0xf2 PushI
	var_69_int = 24564; // 0xf3 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xf4 TObjFunc
	return 0; // 0xf6 Return
	
Label_247:
	var_3_string = 1; // 0xf7 TMovB
	var_70_bool = 0; // 0xf8 PushV
	func_612(var_70_bool); // 0xf9 NEW_2
	if(var_70_bool == 0) goto Label_255; // 0xfb JumpB
	lshStopAnimation(); // 0xfc Func
	goto Label_257; // 0xfe Jump
	
Label_257:
	return 0; // 0x101 Return
	
Label_255:
	StopAnimation(); // 0xff Func
	
Label_259:
	return 0; // 0x103 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_424(); // 0x106 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x108 PushV
	var_8_object = var_6_object; // 0x109 Mov
	TaskCall(0); // 0x10a TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x10b NEW_2
	TaskReturn(); // 0x10c TaskReturn
	return 0; // 0x10e Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x139 PushS
	var_8_bool = var_6_string == var_7_string; // 0x13a Eq
	if(var_8_bool == 0) goto Label_319; // 0x13b JumpB
	func_292(var_6_string); // 0x13d NEW_2
	
Label_319:
	return 0; // 0x13f Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x140 Func
	sync(); // 0x142 Func
	return 0; // 0x144 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x145 PushV
	var_6_bool = 0; // 0x146 MovB
	var_7_object = var_0_object; // 0x147 PushT
	if(var_7_object == 0) goto Label_334; // 0x148 JumpB
	var_8_bool = 0; // 0x149 PushV
	func_341(var_8_bool); // 0x14a NEW_2
	if(var_8_bool == 0) goto Label_334; // 0x14c JumpB
	var_6_bool = 1; // 0x14d MovB
	
Label_334:
	if(var_6_bool == 0) goto Label_340; // 0x14e JumpB
	var_9_object = Obj(); // 0x14f PushV
	func_559(var_9_object); // 0x150 NEW_2
	RemoveActor(var_9_object); // 0x152 Func
	
Label_340:
	return 0; // 0x154 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x10f PushV
	
Label_272:
	var_8_bool = 0; // 0x110 PushV
	func_429(var_8_bool); // 0x111 NEW_2
	var_11_bool = var_8_bool == 0; // 0x113 Not
	if(var_11_bool == 0) goto Label_280; // 0x114 JumpB
	Hold(); // 0x115 Func
	goto Label_272; // 0x117 Jump
	
Label_280:
	var_12_int = 3; // 0x118 PushI
	rand(var_7_float, var_12_int); // 0x119 Func
	var_13_int = 3; // 0x11b PushI
	var_14_int = var_7_float + var_13_int; // 0x11c Add
	Sleep(var_14_int); // 0x11d Func
	func_343(); // 0x120 NEW_2
	goto Label_272; // 0x122 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 130.0; // 0x4 MovF
	func_434(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_606(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_604(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_608(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_610(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_632(var_70_int); // 0x22 NEW_2
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
	var_136_bool = var_17_bool == 0; // 0x38 Not
	if(var_136_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_137_object = Obj(); // 0x3f PushV
	var_137_object = var_8_object; // 0x40 Mov
	func_503(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_137(var_2_object, var_86_string)
{
	var_87_bool = 0; // 0x8a PushV
	func_612(var_87_bool); // 0x8b NEW_2
	var_88_bool = var_87_bool == 0; // 0x8d Not
	if(var_88_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_89_bool = var_86_string == var_2_object; // 0x90 Eq
	if(var_89_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_90_string = ""; var_91_bool = 0; // 0x93 PushV
	var_90_string = var_86_string; // 0x94 Mov
	var_92_string = ""; // 0x95 PushS
	var_93_bool = var_86_string == var_92_string; // 0x96 Eq
	if(var_93_bool == 0) goto Label_154; // 0x97 JumpB
	var_91_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_537(var_90_string, var_91_bool); // 0x9b NEW_2
	var_2_object = var_86_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_91_bool = 1; // 0x9a MovB
}


func_521(var_120_string)
{
	var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0; // 0x209 PushV
	lshHasAnimation(var_124_bool, var_120_string); // 0x20a Func
	var_127_bool = var_124_bool; // 0x20c Push
	if(var_127_bool == 0) goto Label_532; // 0x20d JumpB
	lshGetAnimTimes(var_120_string, var_125_float, var_126_float); // 0x20e Func
	var_128_bool = 0; // 0x210 PushB
	lshPlayAnimation(var_125_float, var_126_float, var_128_bool); // 0x211 Func
	goto Label_536; // 0x213 Jump
	
Label_536:
	return 6; // 0x218 Return
	
Label_532:
	var_129_string = "Can't find lsh animation : "; // 0x214 PushS
	var_130_int = var_129_string + var_120_string; // 0x215 Add
	Trace(var_130_int); // 0x216 Func
}


func_537(var_90_string, var_91_bool)
{
	var_94_bool = 0; var_95_float = 0; var_96_float = 0; var_97_bool = 0; var_98_float = 0; var_99_float = 0; // 0x219 PushV
	lshHasAnimation(var_97_bool, var_90_string); // 0x21a Func
	var_100_bool = var_97_bool; // 0x21c Push
	if(var_100_bool == 0) goto Label_547; // 0x21d JumpB
	lshGetAnimTimes(var_90_string, var_98_float, var_99_float); // 0x21e Func
	lshPlayAnimation(var_98_float, var_99_float, var_91_bool); // 0x220 Func
	goto Label_551; // 0x222 Jump
	
Label_551:
	return 6; // 0x227 Return
	
Label_547:
	var_101_string = "Can't find lsh animation : "; // 0x223 PushS
	var_102_int = var_101_string + var_90_string; // 0x224 Add
	Trace(var_102_int); // 0x225 Func
}


func_292(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x124 PushV
	var_0_object = 1; // 0x125 TMovB
	IsLoaded(var_10_bool); // 0x126 Func
	var_11_bool = 0; // 0x128 PushV
	var_11_bool = 0; // 0x129 MovB
	var_12_bool = var_10_bool == 0; // 0x12a Not
	if(var_12_bool == 0) goto Label_305; // 0x12b JumpB
	var_13_bool = 0; // 0x12c PushV
	func_341(var_13_bool); // 0x12d NEW_2
	if(var_13_bool == 0) goto Label_305; // 0x12f JumpB
	var_11_bool = 1; // 0x130 MovB
	
Label_305:
	if(var_11_bool == 0) goto Label_311; // 0x131 JumpB
	var_14_object = Obj(); // 0x132 PushV
	func_559(var_14_object); // 0x133 NEW_2
	RemoveActor(var_14_object); // 0x135 Func
	
Label_311:
	return 2; // 0x137 Return
}


func_422(var_56_bool)
{
	var_56_bool = 1; // 0x1a6 MovB
	return 0; // 0x1a7 Return
}


func_552()
{
	var_9_bool = 0; // 0x228 PushV
	func_612(var_9_bool); // 0x229 NEW_2
	if(var_9_bool == 0) goto Label_558; // 0x22b JumpB
	lshStopSpeech(); // 0x22c Func
	
Label_558:
	return 0; // 0x22e Return
}


func_424()
{
	StopAnimation(); // 0x1a8 Func
	StopGroup0(); // 0x1aa Func
	return 0; // 0x1ac Return
}


func_429(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x1ad PushV
	IsLoaded(var_10_bool); // 0x1ae Func
	var_8_bool = var_10_bool; // 0x1b0 Mov
	return 2; // 0x1b1 Return
}


func_559(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x22f PushV
	self(var_11_object); // 0x230 Func
	var_9_object = var_11_object; // 0x232 Mov
	return 2; // 0x233 Return
}


func_434(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x1b2 PushV
	GetPosition(var_31_cvector); // 0x1b3 ObjFunc
	GetEyesHeight(var_30_float); // 0x1b5 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x1b7 PushE
	var_39_float = var_39_float + var_30_float; // 0x1b8 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x1b9 PopE
	GetPosition(var_32_cvector); // 0x1ba Func
	GetEyesHeight(var_30_float); // 0x1bc Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x1be PushE
	var_40_float = var_40_float + var_30_float; // 0x1bf Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x1c0 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x1c1 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x1c2 PushE
	var_41_float = 0; // 0x1c3 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x1c4 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x1c5 Or
	var_43_float = sqrt(var_42_int); // 0x1c6 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x1c7 Div2
	var_34_cvector = -var_33_cvector; // 0x1c8 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x1c9 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x1ca PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x1cb PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x1cc Xor2
	func_565(var_45_cvector, var_46_cvector); // 0x1cd NEW_2
	var_53_int = 25; // 0x1cf PushI
	var_54_float = var_45_cvector * var_53_int; // 0x1d0 Mult
	var_55_int = var_44_float + var_54_float; // 0x1d1 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x1d2 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x1d3 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x1d4 Add2
	IsOverrideActive(var_37_bool); // 0x1d5 Func
	var_57_bool = var_37_bool; // 0x1d7 Push
	if(var_57_bool == 0) goto Label_475; // 0x1d8 JumpB
	var_18_bool = 0; // 0x1d9 MovB
	return 18; // 0x1da Return
	
Label_475:
	StopWorld(); // 0x1db Func
	var_58_bool = 1; // 0x1dd PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x1de Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x1e0 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x1e1 PushE
	Rotate(var_59_float, var_60_float); // 0x1e2 Func
	var_61_bool = 0; // 0x1e4 PushV
	func_612(var_61_bool); // 0x1e5 NEW_2
	if(var_61_bool == 0) goto Label_489; // 0x1e7 JumpB
	goto Label_497; // 0x1e8 Jump
	
Label_497:
	CameraWaitForPlayFinish(); // 0x1f1 Func
	ResumeWorld(); // 0x1f3 Func
	var_18_bool = 1; // 0x1f5 MovB
	return 18; // 0x1f6 Return
	
Label_489:
	var_62_string = "head"; // 0x1e9 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x1ea Func
	var_63_bool = var_38_bool; // 0x1ec Push
	if(var_63_bool == 0) goto Label_497; // 0x1ed JumpB
	var_64_string = "head"; // 0x1ee PushS
	LookAsyncCamera(var_64_string); // 0x1ef Func
}


func_565(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x235 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x236 Or
	var_49_float = sqrt(var_50_int); // 0x237 Sqrt2
	var_51_float = 0.0; // 0x238 PushF
	var_52_bool = var_49_float < var_51_float; // 0x239 LT
	if(var_52_bool == 0) goto Label_573; // 0x23a JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x23b MovV
	return 2; // 0x23c Return
	
Label_573:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x23d Div2
	return 2; // 0x23e Return
}


func_575(var_106_int, var_107_string)
{
	var_108_int = 0; var_109_int = 0; // 0x23f PushV
	GetVariable(var_107_string, var_109_int); // 0x240 Func
	var_106_int = var_109_int; // 0x242 Mov
	return 2; // 0x243 Return
}


func_580(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x244 PushV
	var_40_string = "idle"; // 0x245 MovS
	var_41_int = var_38_int; // 0x246 Push
	if(var_41_int == 0) goto Label_585; // 0x247 JumpB
	var_40_string = var_40_string + var_38_int; // 0x248 Add2
	
Label_585:
	var_37_string = var_40_string; // 0x249 Mov
	return 2; // 0x24a Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_107; // 0x4f JumpB
	var_86_string = ""; // 0x50 PushV
	var_86_string = "Neutral"; // 0x51 MovS
	func_137(var_80_object, var_86_string); // 0x52 NEW_2
	var_103_int = 522006; // 0x54 PushI
	SetMessage(var_103_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_104_bool = 0; var_105_object = Obj(); // 0x59 PushV
	var_105_object = var_1_object; // 0x5a MovT
	func_620(var_105_object); // 0x5b NEW_2
	if(var_104_bool == 0) goto Label_99; // 0x5d JumpB
	var_112_int = 523342; // 0x5e PushI
	var_113_int = 24559; // 0x5f PushI
	var_114_int = 24558; // 0x60 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x61 TObjFunc
	
Label_99:
	var_115_int = 522007; // 0x63 PushI
	var_116_int = -1; // 0x64 PushI
	var_117_int = 23177; // 0x65 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_118_bool = 0; // 0x6b PushV
	func_612(var_118_bool); // 0x6c NEW_2
	if(var_118_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_119_string = var_3_string; // 0x71 PushT
	if(var_119_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_120_string = ""; // 0x74 PushV
	var_120_string = var_2_object; // 0x75 MovT
	func_521(var_120_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_131_string = "all"; // 0x7a PushS
	var_132_string = "idle"; // 0x7b PushS
	PlayAnimation(var_131_string, var_132_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_133_string = var_3_string; // 0x80 PushT
	if(var_133_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_134_string = "all"; // 0x83 PushS
	var_135_string = "idle"; // 0x84 PushS
	PlayAnimation(var_134_string, var_135_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_587(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x24b PushV
	var_34_int = 0; // 0x24c MovI
	
Label_589:
	var_36_string = "all"; // 0x24d PushS
	var_37_string = ""; var_38_int = 0; // 0x24e PushV
	var_38_int = var_34_int; // 0x24f Mov
	func_580(var_37_string, var_38_int); // 0x250 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x252 Func
	var_42_bool = var_35_bool == 0; // 0x254 Not
	if(var_42_bool == 0) goto Label_599; // 0x255 JumpB
	goto Label_602; // 0x256 Jump
	
Label_602:
	var_31_int = var_34_int; // 0x25a Mov
	return 4; // 0x25b Return
	
Label_599:
	var_43_int = 1; // 0x257 PushI
	var_34_int = var_34_int + var_43_int; // 0x258 Add2
	goto Label_589; // 0x259 Jump
}


func_341(var_8_bool)
{
	var_8_bool = 1; // 0x155 MovB
	return 0; // 0x156 Return
}


func_343()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x157 PushV
	WaitForAnimEnd(); // 0x158 Func
	var_29_bool = 0; // 0x15a PushV
	func_429(var_29_bool); // 0x15b NEW_2
	var_30_bool = var_29_bool == 0; // 0x15d Not
	if(var_30_bool == 0) goto Label_352; // 0x15e JumpB
	return 14; // 0x15f Return
	
Label_352:
	var_31_int = 0; // 0x160 PushV
	func_587(var_31_int); // 0x161 NEW_2
	var_22_int = var_31_int; // 0x162 Mov
	var_23_int = 0; // 0x164 MovI
	
Label_357:
	var_44_bool = 0; // 0x165 PushV
	var_44_bool = 0; // 0x166 MovB
	var_45_int = 5; // 0x167 PushI
	var_46_bool = var_23_int < var_45_int; // 0x168 LT
	if(var_46_bool == 0) goto Label_367; // 0x169 JumpB
	var_47_bool = 0; // 0x16a PushV
	func_429(var_47_bool); // 0x16b NEW_2
	if(var_47_bool == 0) goto Label_367; // 0x16d JumpB
	var_44_bool = 1; // 0x16e MovB
	
Label_367:
	if(var_44_bool == 0) goto Label_419; // 0x16f JumpB
	var_48_int = 3; // 0x170 PushI
	irand(var_24_int, var_48_int); // 0x171 Func
	var_49_int = 0; // 0x173 PushI
	var_50_bool = var_24_int == var_49_int; // 0x174 Eq
	if(var_50_bool == 0) goto Label_391; // 0x175 JumpB
	var_51_int = var_22_int; // 0x176 Push
	if(var_51_int == 0) goto Label_390; // 0x177 JumpB
	irand(var_25_int, var_22_int); // 0x178 Func
	var_52_string = "all"; // 0x17a PushS
	var_53_string = ""; var_54_int = 0; // 0x17b PushV
	var_54_int = var_25_int; // 0x17c Mov
	func_580(var_53_string, var_54_int); // 0x17d NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x17f Func
	WaitForAnimEnd(var_26_bool); // 0x181 Func
	var_55_bool = var_26_bool == 0; // 0x183 Not
	if(var_55_bool == 0) goto Label_390; // 0x184 JumpB
	goto Label_419; // 0x185 Jump
	
Label_419:
	ResetAAS(); // 0x1a3 Func
	return 14; // 0x1a5 Return
	
Label_390:
	goto Label_408; // 0x186 Jump
	
Label_408:
	var_56_bool = 0; // 0x198 PushV
	func_422(var_56_bool); // 0x199 NEW_2
	var_57_bool = var_56_bool == 0; // 0x19b Not
	if(var_57_bool == 0) goto Label_414; // 0x19c JumpB
	goto Label_419; // 0x19d Jump
	
Label_414:
	ResetAAS(); // 0x19e Func
	var_58_int = 1; // 0x1a0 PushI
	var_23_int = var_23_int + var_58_int; // 0x1a1 Add2
	goto Label_357; // 0x1a2 Jump
	
Label_391:
	var_59_int = 1; // 0x187 PushI
	var_60_bool = var_24_int == var_59_int; // 0x188 Eq
	if(var_60_bool == 0) goto Label_405; // 0x189 JumpB
	var_61_int = 4; // 0x18a PushI
	rand(var_27_float, var_61_int); // 0x18b Func
	var_62_int = 1; // 0x18d PushI
	var_63_int = var_27_float + var_62_int; // 0x18e Add
	Sleep(var_63_int, var_28_bool); // 0x18f Func
	var_64_bool = var_28_bool == 0; // 0x191 Not
	if(var_64_bool == 0) goto Label_404; // 0x192 JumpB
	goto Label_419; // 0x193 Jump
	
Label_404:
	goto Label_408; // 0x194 Jump
	
Label_405:
	var_65_int = var_23_int; // 0x195 Push
	if(var_65_int == 0) goto Label_408; // 0x196 JumpB
	goto Label_419; // 0x197 Jump
}


func_604(var_67_int)
{
	var_67_int = 515571; // 0x25c MovI
	return 0; // 0x25d Return
}


func_606(var_66_int)
{
	var_66_int = 504029; // 0x25e MovI
	return 0; // 0x25f Return
}


func_608(var_68_string)
{
	var_68_string = "ui/NPC_bmask.png"; // 0x260 MovS
	return 0; // 0x261 Return
}


func_610(var_69_string)
{
	var_69_string = "ui/NPC_bmask_b.png"; // 0x262 MovS
	return 0; // 0x263 Return
}


func_612(var_61_bool)
{
	var_61_bool = 0; // 0x264 MovB
	return 0; // 0x265 Return
}


func_614()
{
	var_14_string = "oob11Birdmask1"; // 0x267 PushS
	var_15_int = 1; // 0x268 PushI
	SetVariable(var_14_string, var_15_int); // 0x269 Func
	return 0; // 0x26b Return
}


func_620(var_104_bool)
{
	var_106_int = 0; var_107_string = ""; // 0x26d PushV
	var_107_string = "oob11Birdmask1"; // 0x26e MovS
	func_575(var_106_int, var_107_string); // 0x26f NEW_2
	var_110_int = 0; // 0x271 PushI
	var_111_bool = var_106_int == var_110_int; // 0x272 Eq
	if(var_111_bool == 0) goto Label_630; // 0x273 JumpB
	var_104_bool = 1; // 0x274 MovB
	return 0; // 0x275 Return
	
Label_630:
	var_104_bool = 0; // 0x276 MovB
	return 0; // 0x277 Return
}


func_503()
{
	var_138_bool = 0; var_139_bool = 0; // 0x1f7 PushV
	var_140_bool = 1; // 0x1f8 PushB
	CameraSwitchToNormal(var_140_bool); // 0x1f9 Func
	var_141_bool = 0; // 0x1fb PushV
	func_612(var_141_bool); // 0x1fc NEW_2
	if(var_141_bool == 0) goto Label_512; // 0x1fe JumpB
	goto Label_520; // 0x1ff Jump
	
Label_520:
	return 2; // 0x208 Return
	
Label_512:
	var_142_string = "head"; // 0x200 PushS
	HasAnimationTrack(var_139_bool, var_142_string); // 0x201 Func
	var_143_bool = var_139_bool; // 0x203 Push
	if(var_143_bool == 0) goto Label_520; // 0x204 JumpB
	var_144_string = "head"; // 0x205 PushS
	UnlookAsync(var_144_string); // 0x206 Func
}


func_632(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x278 PushV
	var_73_string = "branch"; // 0x279 PushS
	GetVariable(var_73_string, var_72_int); // 0x27a Func
	var_74_int = 0; // 0x27c PushI
	var_75_bool = var_72_int == var_74_int; // 0x27d Eq
	if(var_75_bool == 0) goto Label_642; // 0x27e JumpB
	var_70_int = 1; // 0x27f MovI
	return 2; // 0x280 Return
	
Label_642:
	var_76_int = 1; // 0x282 PushI
	var_77_bool = var_72_int == var_76_int; // 0x283 Eq
	if(var_77_bool == 0) goto Label_647; // 0x284 JumpB
	var_70_int = 2; // 0x285 MovI
	return 2; // 0x286 Return
	
Label_647:
	var_70_int = 3; // 0x287 MovI
	return 2; // 0x288 Return
}


