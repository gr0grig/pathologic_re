task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x9b PushI
	if(var_8_int == 0) goto Label_236; // 0x9c JumpB
	func_529(); // 0x9e NEW_2
	var_10_int = 22194; // 0xa0 PushI
	var_11_bool = var_6_int == var_10_int; // 0xa1 Eq
	if(var_11_bool == 0) goto Label_183; // 0xa2 JumpB
	var_12_string = ""; // 0xa3 PushV
	var_12_string = "Neutral"; // 0xa4 MovS
	func_132(var_7_bool, var_12_string); // 0xa5 NEW_2
	var_29_int = 520981; // 0xa7 PushI
	SetMessage(var_29_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_30_int = 528480; // 0xac PushI
	var_31_int = 29869; // 0xad PushI
	var_32_int = 29868; // 0xae PushI
	AddReply(var_30_int, var_31_int, var_32_int); // 0xaf TObjFunc
	var_33_int = 528478; // 0xb1 PushI
	var_34_int = 29867; // 0xb2 PushI
	var_35_int = 29866; // 0xb3 PushI
	AddReply(var_33_int, var_34_int, var_35_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_36_int = 29867; // 0xb7 PushI
	var_37_bool = var_6_int == var_36_int; // 0xb8 Eq
	if(var_37_bool == 0) goto Label_206; // 0xb9 JumpB
	var_38_string = ""; // 0xba PushV
	var_38_string = "Neutral"; // 0xbb MovS
	func_132(var_7_bool, var_38_string); // 0xbc NEW_2
	var_39_int = 528479; // 0xbe PushI
	SetMessage(var_39_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_40_int = 520982; // 0xc3 PushI
	var_41_int = -1; // 0xc4 PushI
	var_42_int = 22195; // 0xc5 PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xc6 TObjFunc
	var_43_int = 524075; // 0xc8 PushI
	var_44_int = -1; // 0xc9 PushI
	var_45_int = 25374; // 0xca PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xcb TObjFunc
	return 0; // 0xcd Return
	
Label_206:
	var_46_int = 29869; // 0xce PushI
	var_47_bool = var_6_int == var_46_int; // 0xcf Eq
	if(var_47_bool == 0) goto Label_224; // 0xd0 JumpB
	var_48_string = ""; // 0xd1 PushV
	var_48_string = "Neutral"; // 0xd2 MovS
	func_132(var_7_bool, var_48_string); // 0xd3 NEW_2
	var_49_int = 528481; // 0xd5 PushI
	SetMessage(var_49_int); // 0xd6 TObjFunc
	ClearReplies(); // 0xd8 TObjFunc
	var_50_int = 528482; // 0xda PushI
	var_51_int = 29867; // 0xdb PushI
	var_52_int = 29870; // 0xdc PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_3_string = 1; // 0xe0 TMovB
	var_53_bool = 0; // 0xe1 PushV
	func_601(var_53_bool); // 0xe2 NEW_2
	if(var_53_bool == 0) goto Label_232; // 0xe4 JumpB
	lshStopAnimation(); // 0xe5 Func
	goto Label_234; // 0xe7 Jump
	
Label_234:
	return 0; // 0xea Return
	
Label_232:
	StopAnimation(); // 0xe8 Func
	
Label_236:
	return 0; // 0xec Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_401(); // 0xef NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0xf1 PushV
	var_8_object = var_6_object; // 0xf2 Mov
	TaskCall(0); // 0xf3 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0xf4 NEW_2
	TaskReturn(); // 0xf5 TaskReturn
	return 0; // 0xf7 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x122 PushS
	var_8_bool = var_6_string == var_7_string; // 0x123 Eq
	if(var_8_bool == 0) goto Label_296; // 0x124 JumpB
	func_269(var_6_string); // 0x126 NEW_2
	
Label_296:
	return 0; // 0x128 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x129 Func
	sync(); // 0x12b Func
	return 0; // 0x12d Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x12e PushV
	var_6_bool = 0; // 0x12f MovB
	var_7_object = var_0_object; // 0x130 PushT
	if(var_7_object == 0) goto Label_311; // 0x131 JumpB
	var_8_bool = 0; // 0x132 PushV
	func_318(var_8_bool); // 0x133 NEW_2
	if(var_8_bool == 0) goto Label_311; // 0x135 JumpB
	var_6_bool = 1; // 0x136 MovB
	
Label_311:
	if(var_6_bool == 0) goto Label_317; // 0x137 JumpB
	var_9_object = Obj(); // 0x138 PushV
	func_536(var_9_object); // 0x139 NEW_2
	RemoveActor(var_9_object); // 0x13b Func
	
Label_317:
	return 0; // 0x13d Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0xf8 PushV
	
Label_249:
	var_8_bool = 0; // 0xf9 PushV
	func_406(var_8_bool); // 0xfa NEW_2
	var_11_bool = var_8_bool == 0; // 0xfc Not
	if(var_11_bool == 0) goto Label_257; // 0xfd JumpB
	Hold(); // 0xfe Func
	goto Label_249; // 0x100 Jump
	
Label_257:
	var_12_int = 3; // 0x101 PushI
	rand(var_7_float, var_12_int); // 0x102 Func
	var_13_int = 3; // 0x104 PushI
	var_14_int = var_7_float + var_13_int; // 0x105 Add
	Sleep(var_14_int); // 0x106 Func
	func_320(); // 0x109 NEW_2
	goto Label_249; // 0x10b Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_411(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_595(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_593(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_597(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_599(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_576(var_70_int); // 0x22 NEW_2
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
	var_128_bool = var_17_bool == 0; // 0x38 Not
	if(var_128_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_129_object = Obj(); // 0x3f PushV
	var_129_object = var_8_object; // 0x40 Mov
	func_480(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_514(var_90_string, var_91_bool)
{
	var_94_bool = 0; var_95_float = 0; var_96_float = 0; var_97_bool = 0; var_98_float = 0; var_99_float = 0; // 0x202 PushV
	lshHasAnimation(var_97_bool, var_90_string); // 0x203 Func
	var_100_bool = var_97_bool; // 0x205 Push
	if(var_100_bool == 0) goto Label_524; // 0x206 JumpB
	lshGetAnimTimes(var_90_string, var_98_float, var_99_float); // 0x207 Func
	lshPlayAnimation(var_98_float, var_99_float, var_91_bool); // 0x209 Func
	goto Label_528; // 0x20b Jump
	
Label_528:
	return 6; // 0x210 Return
	
Label_524:
	var_101_string = "Can't find lsh animation : "; // 0x20c PushS
	var_102_int = var_101_string + var_90_string; // 0x20d Add
	Trace(var_102_int); // 0x20e Func
}


func_132(var_2_object, var_86_string)
{
	var_87_bool = 0; // 0x85 PushV
	func_601(var_87_bool); // 0x86 NEW_2
	var_88_bool = var_87_bool == 0; // 0x88 Not
	if(var_88_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_89_bool = var_86_string == var_2_object; // 0x8b Eq
	if(var_89_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_90_string = ""; var_91_bool = 0; // 0x8e PushV
	var_90_string = var_86_string; // 0x8f Mov
	var_92_string = ""; // 0x90 PushS
	var_93_bool = var_86_string == var_92_string; // 0x91 Eq
	if(var_93_bool == 0) goto Label_149; // 0x92 JumpB
	var_91_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_514(var_90_string, var_91_bool); // 0x96 NEW_2
	var_2_object = var_86_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_91_bool = 1; // 0x95 MovB
}


func_269(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x10d PushV
	var_0_object = 1; // 0x10e TMovB
	IsLoaded(var_10_bool); // 0x10f Func
	var_11_bool = 0; // 0x111 PushV
	var_11_bool = 0; // 0x112 MovB
	var_12_bool = var_10_bool == 0; // 0x113 Not
	if(var_12_bool == 0) goto Label_282; // 0x114 JumpB
	var_13_bool = 0; // 0x115 PushV
	func_318(var_13_bool); // 0x116 NEW_2
	if(var_13_bool == 0) goto Label_282; // 0x118 JumpB
	var_11_bool = 1; // 0x119 MovB
	
Label_282:
	if(var_11_bool == 0) goto Label_288; // 0x11a JumpB
	var_14_object = Obj(); // 0x11b PushV
	func_536(var_14_object); // 0x11c NEW_2
	RemoveActor(var_14_object); // 0x11e Func
	
Label_288:
	return 2; // 0x120 Return
}


func_399(var_56_bool)
{
	var_56_bool = 1; // 0x18f MovB
	return 0; // 0x190 Return
}


func_529()
{
	var_9_bool = 0; // 0x211 PushV
	func_601(var_9_bool); // 0x212 NEW_2
	if(var_9_bool == 0) goto Label_535; // 0x214 JumpB
	lshStopSpeech(); // 0x215 Func
	
Label_535:
	return 0; // 0x217 Return
}


func_401()
{
	StopAnimation(); // 0x191 Func
	StopGroup0(); // 0x193 Func
	return 0; // 0x195 Return
}


func_406(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x196 PushV
	IsLoaded(var_10_bool); // 0x197 Func
	var_8_bool = var_10_bool; // 0x199 Mov
	return 2; // 0x19a Return
}


func_536(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x218 PushV
	self(var_11_object); // 0x219 Func
	var_9_object = var_11_object; // 0x21b Mov
	return 2; // 0x21c Return
}


func_411(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x19b PushV
	GetPosition(var_31_cvector); // 0x19c ObjFunc
	GetEyesHeight(var_30_float); // 0x19e ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x1a0 PushE
	var_39_float = var_39_float + var_30_float; // 0x1a1 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x1a2 PopE
	GetPosition(var_32_cvector); // 0x1a3 Func
	GetEyesHeight(var_30_float); // 0x1a5 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x1a7 PushE
	var_40_float = var_40_float + var_30_float; // 0x1a8 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x1a9 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x1aa Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x1ab PushE
	var_41_float = 0; // 0x1ac MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x1ad PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x1ae Or
	var_43_float = sqrt(var_42_int); // 0x1af Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x1b0 Div2
	var_34_cvector = -var_33_cvector; // 0x1b1 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x1b2 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x1b3 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x1b4 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x1b5 Xor2
	func_542(var_45_cvector, var_46_cvector); // 0x1b6 NEW_2
	var_53_int = 25; // 0x1b8 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x1b9 Mult
	var_55_int = var_44_float + var_54_float; // 0x1ba Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x1bb PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x1bc Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x1bd Add2
	IsOverrideActive(var_37_bool); // 0x1be Func
	var_57_bool = var_37_bool; // 0x1c0 Push
	if(var_57_bool == 0) goto Label_452; // 0x1c1 JumpB
	var_18_bool = 0; // 0x1c2 MovB
	return 18; // 0x1c3 Return
	
Label_452:
	StopWorld(); // 0x1c4 Func
	var_58_bool = 1; // 0x1c6 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x1c7 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x1c9 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x1ca PushE
	Rotate(var_59_float, var_60_float); // 0x1cb Func
	var_61_bool = 0; // 0x1cd PushV
	func_601(var_61_bool); // 0x1ce NEW_2
	if(var_61_bool == 0) goto Label_466; // 0x1d0 JumpB
	goto Label_474; // 0x1d1 Jump
	
Label_474:
	CameraWaitForPlayFinish(); // 0x1da Func
	ResumeWorld(); // 0x1dc Func
	var_18_bool = 1; // 0x1de MovB
	return 18; // 0x1df Return
	
Label_466:
	var_62_string = "head"; // 0x1d2 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x1d3 Func
	var_63_bool = var_38_bool; // 0x1d5 Push
	if(var_63_bool == 0) goto Label_474; // 0x1d6 JumpB
	var_64_string = "head"; // 0x1d7 PushS
	LookAsyncCamera(var_64_string); // 0x1d8 Func
}


func_542(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x21e PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x21f Or
	var_49_float = sqrt(var_50_int); // 0x220 Sqrt2
	var_51_float = 0.0; // 0x221 PushF
	var_52_bool = var_49_float < var_51_float; // 0x222 LT
	if(var_52_bool == 0) goto Label_550; // 0x223 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x224 MovV
	return 2; // 0x225 Return
	
Label_550:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x226 Div2
	return 2; // 0x227 Return
}


func_552(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x228 PushV
	var_40_string = "idle"; // 0x229 MovS
	var_41_int = var_38_int; // 0x22a Push
	if(var_41_int == 0) goto Label_557; // 0x22b JumpB
	var_40_string = var_40_string + var_38_int; // 0x22c Add2
	
Label_557:
	var_37_string = var_40_string; // 0x22d Mov
	return 2; // 0x22e Return
}


func_559(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x22f PushV
	var_34_int = 0; // 0x230 MovI
	
Label_561:
	var_36_string = "all"; // 0x231 PushS
	var_37_string = ""; var_38_int = 0; // 0x232 PushV
	var_38_int = var_34_int; // 0x233 Mov
	func_552(var_37_string, var_38_int); // 0x234 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x236 Func
	var_42_bool = var_35_bool == 0; // 0x238 Not
	if(var_42_bool == 0) goto Label_571; // 0x239 JumpB
	goto Label_574; // 0x23a Jump
	
Label_574:
	var_31_int = var_34_int; // 0x23e Mov
	return 4; // 0x23f Return
	
Label_571:
	var_43_int = 1; // 0x23b PushI
	var_34_int = var_34_int + var_43_int; // 0x23c Add2
	goto Label_561; // 0x23d Jump
}


func_318(var_8_bool)
{
	var_8_bool = 1; // 0x13e MovB
	return 0; // 0x13f Return
}


func_576(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x240 PushV
	var_73_string = "branch"; // 0x241 PushS
	GetVariable(var_73_string, var_72_int); // 0x242 Func
	var_74_int = 0; // 0x244 PushI
	var_75_bool = var_72_int == var_74_int; // 0x245 Eq
	if(var_75_bool == 0) goto Label_586; // 0x246 JumpB
	var_70_int = 1; // 0x247 MovI
	return 2; // 0x248 Return
	
Label_586:
	var_76_int = 1; // 0x24a PushI
	var_77_bool = var_72_int == var_76_int; // 0x24b Eq
	if(var_77_bool == 0) goto Label_591; // 0x24c JumpB
	var_70_int = 2; // 0x24d MovI
	return 2; // 0x24e Return
	
Label_591:
	var_70_int = 3; // 0x24f MovI
	return 2; // 0x250 Return
}


func_320()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x140 PushV
	WaitForAnimEnd(); // 0x141 Func
	var_29_bool = 0; // 0x143 PushV
	func_406(var_29_bool); // 0x144 NEW_2
	var_30_bool = var_29_bool == 0; // 0x146 Not
	if(var_30_bool == 0) goto Label_329; // 0x147 JumpB
	return 14; // 0x148 Return
	
Label_329:
	var_31_int = 0; // 0x149 PushV
	func_559(var_31_int); // 0x14a NEW_2
	var_22_int = var_31_int; // 0x14b Mov
	var_23_int = 0; // 0x14d MovI
	
Label_334:
	var_44_bool = 0; // 0x14e PushV
	var_44_bool = 0; // 0x14f MovB
	var_45_int = 5; // 0x150 PushI
	var_46_bool = var_23_int < var_45_int; // 0x151 LT
	if(var_46_bool == 0) goto Label_344; // 0x152 JumpB
	var_47_bool = 0; // 0x153 PushV
	func_406(var_47_bool); // 0x154 NEW_2
	if(var_47_bool == 0) goto Label_344; // 0x156 JumpB
	var_44_bool = 1; // 0x157 MovB
	
Label_344:
	if(var_44_bool == 0) goto Label_396; // 0x158 JumpB
	var_48_int = 3; // 0x159 PushI
	irand(var_24_int, var_48_int); // 0x15a Func
	var_49_int = 0; // 0x15c PushI
	var_50_bool = var_24_int == var_49_int; // 0x15d Eq
	if(var_50_bool == 0) goto Label_368; // 0x15e JumpB
	var_51_int = var_22_int; // 0x15f Push
	if(var_51_int == 0) goto Label_367; // 0x160 JumpB
	irand(var_25_int, var_22_int); // 0x161 Func
	var_52_string = "all"; // 0x163 PushS
	var_53_string = ""; var_54_int = 0; // 0x164 PushV
	var_54_int = var_25_int; // 0x165 Mov
	func_552(var_53_string, var_54_int); // 0x166 NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x168 Func
	WaitForAnimEnd(var_26_bool); // 0x16a Func
	var_55_bool = var_26_bool == 0; // 0x16c Not
	if(var_55_bool == 0) goto Label_367; // 0x16d JumpB
	goto Label_396; // 0x16e Jump
	
Label_396:
	ResetAAS(); // 0x18c Func
	return 14; // 0x18e Return
	
Label_367:
	goto Label_385; // 0x16f Jump
	
Label_385:
	var_56_bool = 0; // 0x181 PushV
	func_399(var_56_bool); // 0x182 NEW_2
	var_57_bool = var_56_bool == 0; // 0x184 Not
	if(var_57_bool == 0) goto Label_391; // 0x185 JumpB
	goto Label_396; // 0x186 Jump
	
Label_391:
	ResetAAS(); // 0x187 Func
	var_58_int = 1; // 0x189 PushI
	var_23_int = var_23_int + var_58_int; // 0x18a Add2
	goto Label_334; // 0x18b Jump
	
Label_368:
	var_59_int = 1; // 0x170 PushI
	var_60_bool = var_24_int == var_59_int; // 0x171 Eq
	if(var_60_bool == 0) goto Label_382; // 0x172 JumpB
	var_61_int = 4; // 0x173 PushI
	rand(var_27_float, var_61_int); // 0x174 Func
	var_62_int = 1; // 0x176 PushI
	var_63_int = var_27_float + var_62_int; // 0x177 Add
	Sleep(var_63_int, var_28_bool); // 0x178 Func
	var_64_bool = var_28_bool == 0; // 0x17a Not
	if(var_64_bool == 0) goto Label_381; // 0x17b JumpB
	goto Label_396; // 0x17c Jump
	
Label_381:
	goto Label_385; // 0x17d Jump
	
Label_382:
	var_65_int = var_23_int; // 0x17e Push
	if(var_65_int == 0) goto Label_385; // 0x17f JumpB
	goto Label_396; // 0x180 Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_102; // 0x4f JumpB
	var_86_string = ""; // 0x50 PushV
	var_86_string = "Neutral"; // 0x51 MovS
	func_132(var_80_object, var_86_string); // 0x52 NEW_2
	var_103_int = 520981; // 0x54 PushI
	SetMessage(var_103_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_104_int = 528480; // 0x59 PushI
	var_105_int = 29869; // 0x5a PushI
	var_106_int = 29868; // 0x5b PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x5c TObjFunc
	var_107_int = 528478; // 0x5e PushI
	var_108_int = 29867; // 0x5f PushI
	var_109_int = 29866; // 0x60 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_110_bool = 0; // 0x66 PushV
	func_601(var_110_bool); // 0x67 NEW_2
	if(var_110_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_111_string = var_3_string; // 0x6c PushT
	if(var_111_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_112_string = ""; // 0x6f PushV
	var_112_string = var_2_object; // 0x70 MovT
	func_498(var_112_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_123_string = "all"; // 0x75 PushS
	var_124_string = "idle"; // 0x76 PushS
	PlayAnimation(var_123_string, var_124_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_125_string = var_3_string; // 0x7b PushT
	if(var_125_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_126_string = "all"; // 0x7e PushS
	var_127_string = "idle"; // 0x7f PushS
	PlayAnimation(var_126_string, var_127_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_593(var_67_int)
{
	var_67_int = 515572; // 0x251 MovI
	return 0; // 0x252 Return
}


func_595(var_66_int)
{
	var_66_int = 504031; // 0x253 MovI
	return 0; // 0x254 Return
}


func_597(var_68_string)
{
	var_68_string = "ui/NPC_Citizen2.png"; // 0x255 MovS
	return 0; // 0x256 Return
}


func_599(var_69_string)
{
	var_69_string = "ui/NPC_Citizen2_b.png"; // 0x257 MovS
	return 0; // 0x258 Return
}


func_601(var_61_bool)
{
	var_61_bool = 0; // 0x259 MovB
	return 0; // 0x25a Return
}


func_480()
{
	var_130_bool = 0; var_131_bool = 0; // 0x1e0 PushV
	var_132_bool = 1; // 0x1e1 PushB
	CameraSwitchToNormal(var_132_bool); // 0x1e2 Func
	var_133_bool = 0; // 0x1e4 PushV
	func_601(var_133_bool); // 0x1e5 NEW_2
	if(var_133_bool == 0) goto Label_489; // 0x1e7 JumpB
	goto Label_497; // 0x1e8 Jump
	
Label_497:
	return 2; // 0x1f1 Return
	
Label_489:
	var_134_string = "head"; // 0x1e9 PushS
	HasAnimationTrack(var_131_bool, var_134_string); // 0x1ea Func
	var_135_bool = var_131_bool; // 0x1ec Push
	if(var_135_bool == 0) goto Label_497; // 0x1ed JumpB
	var_136_string = "head"; // 0x1ee PushS
	UnlookAsync(var_136_string); // 0x1ef Func
}


func_498(var_112_string)
{
	var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_bool = 0; var_117_float = 0; var_118_float = 0; // 0x1f2 PushV
	lshHasAnimation(var_116_bool, var_112_string); // 0x1f3 Func
	var_119_bool = var_116_bool; // 0x1f5 Push
	if(var_119_bool == 0) goto Label_509; // 0x1f6 JumpB
	lshGetAnimTimes(var_112_string, var_117_float, var_118_float); // 0x1f7 Func
	var_120_bool = 0; // 0x1f9 PushB
	lshPlayAnimation(var_117_float, var_118_float, var_120_bool); // 0x1fa Func
	goto Label_513; // 0x1fc Jump
	
Label_513:
	return 6; // 0x201 Return
	
Label_509:
	var_121_string = "Can't find lsh animation : "; // 0x1fd PushS
	var_122_int = var_121_string + var_112_string; // 0x1fe Add
	Trace(var_122_int); // 0x1ff Func
}


