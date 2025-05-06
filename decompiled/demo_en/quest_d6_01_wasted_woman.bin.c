task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa0 PushI
	if(var_12_int == 0) goto Label_310; // 0xa1 JumpB
	func_639(); // 0xa3 NEW_2
	var_14_int = 4190; // 0xa5 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa6 Eq
	if(var_15_bool == 0) goto Label_173; // 0xa7 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa8 PushV
	var_16_object = var_1_object; // 0xa9 MovT
	var_17_object = var_0_object; // 0xaa MovT
	func_695(); // 0xab NEW_2
	
Label_173:
	var_20_int = 4189; // 0xad PushI
	var_21_bool = var_10_bool == var_20_int; // 0xae Eq
	if(var_21_bool == 0) goto Label_201; // 0xaf JumpB
	var_22_string = ""; // 0xb0 PushV
	var_22_string = "Neutral"; // 0xb1 MovS
	func_137(var_11_object, var_22_string); // 0xb2 NEW_2
	var_39_int = 503852; // 0xb4 PushI
	SetMessage(var_39_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_40_bool = 0; var_41_object = Obj(); // 0xb9 PushV
	var_41_object = var_1_object; // 0xba MovT
	func_701(var_41_object); // 0xbb NEW_2
	if(var_40_bool == 0) goto Label_195; // 0xbd JumpB
	var_48_int = 503853; // 0xbe PushI
	var_49_int = 4193; // 0xbf PushI
	var_50_int = 4190; // 0xc0 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xc1 TObjFunc
	
Label_195:
	var_51_int = 503855; // 0xc3 PushI
	var_52_int = -1; // 0xc4 PushI
	var_53_int = 4192; // 0xc5 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_54_int = 4193; // 0xc9 PushI
	var_55_bool = var_10_bool == var_54_int; // 0xca Eq
	if(var_55_bool == 0) goto Label_224; // 0xcb JumpB
	var_56_string = ""; // 0xcc PushV
	var_56_string = "Neutral"; // 0xcd MovS
	func_137(var_11_object, var_56_string); // 0xce NEW_2
	var_57_int = 503856; // 0xd0 PushI
	SetMessage(var_57_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_58_int = 503857; // 0xd5 PushI
	var_59_int = 4196; // 0xd6 PushI
	var_60_int = 4195; // 0xd7 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd8 TObjFunc
	var_61_int = 503864; // 0xda PushI
	var_62_int = 4196; // 0xdb PushI
	var_63_int = 4204; // 0xdc PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_64_int = 4196; // 0xe0 PushI
	var_65_bool = var_10_bool == var_64_int; // 0xe1 Eq
	if(var_65_bool == 0) goto Label_252; // 0xe2 JumpB
	var_66_string = ""; // 0xe3 PushV
	var_66_string = "Neutral"; // 0xe4 MovS
	func_137(var_11_object, var_66_string); // 0xe5 NEW_2
	var_67_int = 503858; // 0xe7 PushI
	SetMessage(var_67_int); // 0xe8 TObjFunc
	ClearReplies(); // 0xea TObjFunc
	var_68_int = 503859; // 0xec PushI
	var_69_int = 4200; // 0xed PushI
	var_70_int = 4197; // 0xee PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xef TObjFunc
	var_71_int = 503860; // 0xf1 PushI
	var_72_int = 4200; // 0xf2 PushI
	var_73_int = 4198; // 0xf3 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xf4 TObjFunc
	var_74_int = 503861; // 0xf6 PushI
	var_75_int = 4200; // 0xf7 PushI
	var_76_int = 4199; // 0xf8 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_77_int = 4200; // 0xfc PushI
	var_78_bool = var_10_bool == var_77_int; // 0xfd Eq
	if(var_78_bool == 0) goto Label_275; // 0xfe JumpB
	var_79_string = ""; // 0xff PushV
	var_79_string = "Neutral"; // 0x100 MovS
	func_137(var_11_object, var_79_string); // 0x101 NEW_2
	var_80_int = 503862; // 0x103 PushI
	SetMessage(var_80_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_81_int = 503863; // 0x108 PushI
	var_82_int = 4207; // 0x109 PushI
	var_83_int = 4203; // 0x10a PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x10b TObjFunc
	var_84_int = 503865; // 0x10d PushI
	var_85_int = -1; // 0x10e PushI
	var_86_int = 4206; // 0x10f PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_87_int = 4207; // 0x113 PushI
	var_88_bool = var_10_bool == var_87_int; // 0x114 Eq
	if(var_88_bool == 0) goto Label_298; // 0x115 JumpB
	var_89_string = ""; // 0x116 PushV
	var_89_string = "Neutral"; // 0x117 MovS
	func_137(var_11_object, var_89_string); // 0x118 NEW_2
	var_90_int = 503866; // 0x11a PushI
	SetMessage(var_90_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_91_int = 503867; // 0x11f PushI
	var_92_int = -1; // 0x120 PushI
	var_93_int = 4208; // 0x121 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x122 TObjFunc
	var_94_int = 503868; // 0x124 PushI
	var_95_int = -1; // 0x125 PushI
	var_96_int = 4209; // 0x126 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_3_string = 1; // 0x12a TMovB
	var_97_bool = 0; // 0x12b PushV
	func_693(var_97_bool); // 0x12c NEW_2
	if(var_97_bool == 0) goto Label_306; // 0x12e JumpB
	lshStopAnimation(); // 0x12f Func
	goto Label_308; // 0x131 Jump
	
Label_308:
	return 0; // 0x134 Return
	
Label_306:
	StopAnimation(); // 0x132 Func
	
Label_310:
	return 0; // 0x136 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_399(var_9_object, var_10_object); // 0x145 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x147 PushV
	var_15_object = var_10_object; // 0x148 Mov
	TaskCall(0); // 0x149 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x14a NEW_2
	TaskReturn(); // 0x14b TaskReturn
	return 0; // 0x14d Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x179 PushI
	var_12_bool = var_10_int == var_11_int; // 0x17a Eq
	if(var_12_bool == 0) goto Label_398; // 0x17b JumpB
	var_13_bool = 0; // 0x17c PushV
	func_361(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x17d NEW_2
	if(var_13_bool == 0) goto Label_392; // 0x17f JumpB
	var_26_bool = var_2_object == 0; // 0x180 Not
	if(var_26_bool == 0) goto Label_391; // 0x181 JumpB
	var_27_object = Obj(); // 0x182 PushV
	var_27_object = var_4_bool; // 0x183 MovT
	func_628(var_27_object); // 0x184 NEW_2
	var_2_object = 1; // 0x186 TMovB
	
Label_391:
	goto Label_398; // 0x187 Jump
	
Label_398:
	return 0; // 0x18e Return
	
Label_392:
	var_34_object = var_2_object; // 0x188 PushT
	if(var_34_object == 0) goto Label_398; // 0x189 JumpB
	var_35_string = "head"; // 0x18a PushS
	UnlookAsync(var_35_string); // 0x18b Func
	var_2_object = 0; // 0x18d TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_311:
	var_10_bool = 1; // 0x137 PushB
	if(var_10_bool == 0) goto Label_322; // 0x138 JumpB
	var_11_int = 1; // 0x139 PushI
	Sleep(var_11_int); // 0x13a Func
	var_12_float = 0; var_13_float = 0; // 0x13c PushV
	var_12_float = 300; // 0x13d MovI
	var_13_float = 100; // 0x13e MovI
	func_334(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_12_float, var_13_float); // 0x13f NEW_2
	goto Label_311; // 0x141 Jump
	
Label_322:
	return 0; // 0x142 Return
}


func_512(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x200 PushV
	GetPosition(var_38_cvector); // 0x201 ObjFunc
	GetEyesHeight(var_37_float); // 0x203 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x205 PushE
	var_46_float = var_46_float + var_37_float; // 0x206 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x207 PopE
	GetPosition(var_39_cvector); // 0x208 Func
	GetEyesHeight(var_37_float); // 0x20a Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x20c PushE
	var_47_float = var_47_float + var_37_float; // 0x20d Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x20e PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x20f Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x210 PushE
	var_48_float = 0; // 0x211 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x212 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x213 Or
	var_50_float = sqrt(var_49_int); // 0x214 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x215 Div2
	var_41_cvector = -var_40_cvector; // 0x216 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x217 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x218 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x219 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x21a Xor2
	func_646(var_52_cvector, var_53_cvector); // 0x21b NEW_2
	var_60_int = 25; // 0x21d PushI
	var_61_float = var_52_cvector * var_60_int; // 0x21e Mult
	var_62_int = var_51_float + var_61_float; // 0x21f Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x220 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x221 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x222 Add2
	IsOverrideActive(var_44_bool); // 0x223 Func
	var_64_bool = var_44_bool; // 0x225 Push
	if(var_64_bool == 0) goto Label_553; // 0x226 JumpB
	var_25_bool = 0; // 0x227 MovB
	return 18; // 0x228 Return
	
Label_553:
	StopWorld(); // 0x229 Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x22b Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x22d PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x22e PushE
	Rotate(var_65_float, var_66_float); // 0x22f Func
	var_67_bool = 0; // 0x231 PushV
	func_693(var_67_bool); // 0x232 NEW_2
	if(var_67_bool == 0) goto Label_566; // 0x234 JumpB
	goto Label_574; // 0x235 Jump
	
Label_574:
	CameraWaitForPlayFinish(); // 0x23e Func
	ResumeWorld(); // 0x240 Func
	var_25_bool = 1; // 0x242 MovB
	return 18; // 0x243 Return
	
Label_566:
	var_68_string = "head"; // 0x236 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x237 Func
	var_69_bool = var_45_bool; // 0x239 Push
	if(var_69_bool == 0) goto Label_574; // 0x23a JumpB
	var_70_string = "head"; // 0x23b PushS
	LookAsyncCamera(var_70_string); // 0x23c Func
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_512(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_687(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_685(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_689(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_691(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_713(var_76_int); // 0x22 NEW_2
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
	var_142_bool = var_24_bool == 0; // 0x38 Not
	if(var_142_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_143_object = Obj(); // 0x3f PushV
	var_143_object = var_15_object; // 0x40 Mov
	func_580(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_580()
{
	var_144_bool = 0; var_145_bool = 0; // 0x244 PushV
	CameraSwitchToNormal(); // 0x245 Func
	var_146_bool = 0; // 0x247 PushV
	func_693(var_146_bool); // 0x248 NEW_2
	if(var_146_bool == 0) goto Label_588; // 0x24a JumpB
	goto Label_596; // 0x24b Jump
	
Label_596:
	return 2; // 0x254 Return
	
Label_588:
	var_147_string = "head"; // 0x24c PushS
	HasAnimationTrack(var_145_bool, var_147_string); // 0x24d Func
	var_148_bool = var_145_bool; // 0x24f Push
	if(var_148_bool == 0) goto Label_596; // 0x250 JumpB
	var_149_string = "head"; // 0x251 PushS
	UnlookAsync(var_149_string); // 0x252 Func
}


func_646(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x286 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x287 Or
	var_56_float = sqrt(var_57_int); // 0x288 Sqrt2
	var_58_float = 0.0; // 0x289 PushF
	var_59_bool = var_56_float < var_58_float; // 0x28a LT
	if(var_59_bool == 0) goto Label_654; // 0x28b JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x28c MovV
	return 2; // 0x28d Return
	
Label_654:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x28e Div2
	return 2; // 0x28f Return
}


func_137(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x8a PushV
	func_693(var_93_bool); // 0x8b NEW_2
	var_94_bool = var_93_bool == 0; // 0x8d Not
	if(var_94_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_95_bool = var_92_string == var_2_object; // 0x90 Eq
	if(var_95_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_96_string = ""; var_97_bool = 0; // 0x93 PushV
	var_96_string = var_92_string; // 0x94 Mov
	var_98_string = ""; // 0x95 PushS
	var_99_bool = var_92_string == var_98_string; // 0x96 Eq
	if(var_99_bool == 0) goto Label_154; // 0x97 JumpB
	var_97_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_613(var_96_string, var_97_bool); // 0x9b NEW_2
	var_2_object = var_92_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_97_bool = 1; // 0x9a MovB
}


func_713(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x2c9 PushV
	var_79_string = "branch"; // 0x2ca PushS
	GetVariable(var_79_string, var_78_int); // 0x2cb Func
	var_80_int = 0; // 0x2cd PushI
	var_81_bool = var_78_int == var_80_int; // 0x2ce Eq
	if(var_81_bool == 0) goto Label_723; // 0x2cf JumpB
	var_76_int = 1; // 0x2d0 MovI
	return 2; // 0x2d1 Return
	
Label_723:
	var_82_int = 1; // 0x2d3 PushI
	var_83_bool = var_78_int == var_82_int; // 0x2d4 Eq
	if(var_83_bool == 0) goto Label_728; // 0x2d5 JumpB
	var_76_int = 2; // 0x2d6 MovI
	return 2; // 0x2d7 Return
	
Label_728:
	var_76_int = 3; // 0x2d8 MovI
	return 2; // 0x2d9 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_107; // 0x4f JumpB
	var_92_string = ""; // 0x50 PushV
	var_92_string = "Neutral"; // 0x51 MovS
	func_137(var_86_object, var_92_string); // 0x52 NEW_2
	var_109_int = 503852; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_bool = 0; var_111_object = Obj(); // 0x59 PushV
	var_111_object = var_1_object; // 0x5a MovT
	func_701(var_111_object); // 0x5b NEW_2
	if(var_110_bool == 0) goto Label_99; // 0x5d JumpB
	var_118_int = 503853; // 0x5e PushI
	var_119_int = 4193; // 0x5f PushI
	var_120_int = 4190; // 0x60 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x61 TObjFunc
	
Label_99:
	var_121_int = 503855; // 0x63 PushI
	var_122_int = -1; // 0x64 PushI
	var_123_int = 4192; // 0x65 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_124_bool = 0; // 0x6b PushV
	func_693(var_124_bool); // 0x6c NEW_2
	if(var_124_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_125_string = var_3_string; // 0x71 PushT
	if(var_125_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_126_string = ""; // 0x74 PushV
	var_126_string = var_2_object; // 0x75 MovT
	func_597(var_126_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_137_string = "all"; // 0x7a PushS
	var_138_string = "idle"; // 0x7b PushS
	PlayAnimation(var_137_string, var_138_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_139_string = var_3_string; // 0x80 PushT
	if(var_139_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_140_string = "all"; // 0x83 PushS
	var_141_string = "idle"; // 0x84 PushS
	PlayAnimation(var_140_string, var_141_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_334(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_12_float, var_13_float)
{
	var_14_bool = 0; // 0x14f PushV
	func_507(var_14_bool); // 0x150 NEW_2
	var_17_bool = var_14_bool == 0; // 0x152 Not
	if(var_17_bool == 0) goto Label_341; // 0x153 JumpB
	return 0; // 0x154 Return
	
Label_341:
	var_18_string = "player"; // 0x155 PushS
	FindActor(var_9_object, var_18_string); // 0x156 Func
	var_2_object = 0; // 0x158 TMovB
	var_3_string = 0; // 0x159 TMovB
	var_0_object = var_12_float; // 0x15a TMov
	var_1_object = var_13_float; // 0x15b TMov
	var_19_int = 10; // 0x15c PushI
	var_20_float = 1.0; // 0x15d PushF
	SetTimer(var_19_int, var_20_float); // 0x15e Func
	func_413(); // 0x161 NEW_2
	var_72_bool = var_3_string == 0; // 0x163 Not
	if(var_72_bool == 0) goto Label_360; // 0x164 JumpB
	var_73_int = 10; // 0x165 PushI
	KillTimer(var_73_int); // 0x166 Func
	
Label_360:
	return 0; // 0x168 Return
}


func_399(var_2_object, var_3_string)
{
	func_494(); // 0x190 NEW_2
	var_11_int = 10; // 0x192 PushI
	KillTimer(var_11_int); // 0x193 Func
	var_12_object = var_2_object; // 0x195 PushT
	if(var_12_object == 0) goto Label_411; // 0x196 JumpB
	var_13_string = "head"; // 0x197 PushS
	UnlookAsync(var_13_string); // 0x198 Func
	var_2_object = 0; // 0x19a TMovB
	
Label_411:
	var_3_string = 1; // 0x19b TMovB
	return 0; // 0x19c Return
}


func_656(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0; // 0x290 PushV
	GetVariable(var_113_string, var_115_int); // 0x291 Func
	var_112_int = var_115_int; // 0x293 Mov
	return 2; // 0x294 Return
}


func_661(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = ""; // 0x295 PushV
	var_46_string = "idle"; // 0x296 MovS
	var_47_int = var_44_int; // 0x297 Push
	if(var_47_int == 0) goto Label_666; // 0x298 JumpB
	var_46_string = var_46_string + var_44_int; // 0x299 Add2
	
Label_666:
	var_43_string = var_46_string; // 0x29a Mov
	return 2; // 0x29b Return
}


func_597(var_126_string)
{
	var_127_bool = 0; var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_float = 0; var_132_float = 0; // 0x255 PushV
	lshHasAnimation(var_130_bool, var_126_string); // 0x256 Func
	var_133_bool = var_130_bool; // 0x258 Push
	if(var_133_bool == 0) goto Label_608; // 0x259 JumpB
	lshGetAnimTimes(var_126_string, var_131_float, var_132_float); // 0x25a Func
	var_134_bool = 0; // 0x25c PushB
	lshPlayAnimation(var_131_float, var_132_float, var_134_bool); // 0x25d Func
	goto Label_612; // 0x25f Jump
	
Label_612:
	return 6; // 0x264 Return
	
Label_608:
	var_135_string = "Can't find lsh animation : "; // 0x260 PushS
	var_136_int = var_135_string + var_126_string; // 0x261 Add
	Trace(var_136_int); // 0x262 Func
}


func_668(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x29c PushV
	var_40_int = 0; // 0x29d MovI
	
Label_670:
	var_42_string = "all"; // 0x29e PushS
	var_43_string = ""; var_44_int = 0; // 0x29f PushV
	var_44_int = var_40_int; // 0x2a0 Mov
	func_661(var_43_string, var_44_int); // 0x2a1 NEW_2
	HasAnimation(var_41_bool, var_42_string, var_43_string); // 0x2a3 Func
	var_48_bool = var_41_bool == 0; // 0x2a5 Not
	if(var_48_bool == 0) goto Label_680; // 0x2a6 JumpB
	goto Label_683; // 0x2a7 Jump
	
Label_683:
	var_37_int = var_40_int; // 0x2ab Mov
	return 4; // 0x2ac Return
	
Label_680:
	var_49_int = 1; // 0x2a8 PushI
	var_40_int = var_40_int + var_49_int; // 0x2a9 Add2
	goto Label_670; // 0x2aa Jump
}


func_413()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x19d PushV
	WaitForAnimEnd(); // 0x19e Func
	var_35_bool = 0; // 0x1a0 PushV
	func_507(var_35_bool); // 0x1a1 NEW_2
	var_36_bool = var_35_bool == 0; // 0x1a3 Not
	if(var_36_bool == 0) goto Label_422; // 0x1a4 JumpB
	return 14; // 0x1a5 Return
	
Label_422:
	var_37_int = 0; // 0x1a6 PushV
	func_668(var_37_int); // 0x1a7 NEW_2
	var_28_int = var_37_int; // 0x1a8 Mov
	var_29_int = 0; // 0x1aa MovI
	
Label_427:
	var_50_bool = 0; // 0x1ab PushV
	var_50_bool = 0; // 0x1ac MovB
	var_51_int = 5; // 0x1ad PushI
	var_52_bool = var_29_int < var_51_int; // 0x1ae LT
	if(var_52_bool == 0) goto Label_437; // 0x1af JumpB
	var_53_bool = 0; // 0x1b0 PushV
	func_507(var_53_bool); // 0x1b1 NEW_2
	if(var_53_bool == 0) goto Label_437; // 0x1b3 JumpB
	var_50_bool = 1; // 0x1b4 MovB
	
Label_437:
	if(var_50_bool == 0) goto Label_489; // 0x1b5 JumpB
	var_54_int = 3; // 0x1b6 PushI
	irand(var_30_int, var_54_int); // 0x1b7 Func
	var_55_int = 0; // 0x1b9 PushI
	var_56_bool = var_30_int == var_55_int; // 0x1ba Eq
	if(var_56_bool == 0) goto Label_461; // 0x1bb JumpB
	var_57_int = var_28_int; // 0x1bc Push
	if(var_57_int == 0) goto Label_460; // 0x1bd JumpB
	irand(var_31_int, var_28_int); // 0x1be Func
	var_58_string = "all"; // 0x1c0 PushS
	var_59_string = ""; var_60_int = 0; // 0x1c1 PushV
	var_60_int = var_31_int; // 0x1c2 Mov
	func_661(var_59_string, var_60_int); // 0x1c3 NEW_2
	PlayAnimation(var_58_string, var_59_string); // 0x1c5 Func
	WaitForAnimEnd(var_32_bool); // 0x1c7 Func
	var_61_bool = var_32_bool == 0; // 0x1c9 Not
	if(var_61_bool == 0) goto Label_460; // 0x1ca JumpB
	goto Label_489; // 0x1cb Jump
	
Label_489:
	ResetAAS(); // 0x1e9 Func
	return 14; // 0x1eb Return
	
Label_460:
	goto Label_478; // 0x1cc Jump
	
Label_478:
	var_62_bool = 0; // 0x1de PushV
	func_492(var_62_bool); // 0x1df NEW_2
	var_63_bool = var_62_bool == 0; // 0x1e1 Not
	if(var_63_bool == 0) goto Label_484; // 0x1e2 JumpB
	goto Label_489; // 0x1e3 Jump
	
Label_484:
	ResetAAS(); // 0x1e4 Func
	var_64_int = 1; // 0x1e6 PushI
	var_29_int = var_29_int + var_64_int; // 0x1e7 Add2
	goto Label_427; // 0x1e8 Jump
	
Label_461:
	var_65_int = 1; // 0x1cd PushI
	var_66_bool = var_30_int == var_65_int; // 0x1ce Eq
	if(var_66_bool == 0) goto Label_475; // 0x1cf JumpB
	var_67_int = 4; // 0x1d0 PushI
	rand(var_33_float, var_67_int); // 0x1d1 Func
	var_68_int = 1; // 0x1d3 PushI
	var_69_int = var_33_float + var_68_int; // 0x1d4 Add
	Sleep(var_69_int, var_34_bool); // 0x1d5 Func
	var_70_bool = var_34_bool == 0; // 0x1d7 Not
	if(var_70_bool == 0) goto Label_474; // 0x1d8 JumpB
	goto Label_489; // 0x1d9 Jump
	
Label_474:
	goto Label_478; // 0x1da Jump
	
Label_475:
	var_71_int = var_29_int; // 0x1db Push
	if(var_71_int == 0) goto Label_478; // 0x1dc JumpB
	goto Label_489; // 0x1dd Jump
}


func_613(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x265 PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x266 Func
	var_106_bool = var_103_bool; // 0x268 Push
	if(var_106_bool == 0) goto Label_623; // 0x269 JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x26a Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x26c Func
	goto Label_627; // 0x26e Jump
	
Label_627:
	return 6; // 0x273 Return
	
Label_623:
	var_107_string = "Can't find lsh animation : "; // 0x26f PushS
	var_108_int = var_107_string + var_96_string; // 0x270 Add
	Trace(var_108_int); // 0x271 Func
}


func_361(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x169 PushV
	var_16_bool = var_4_bool == 0; // 0x16a NullEq
	if(var_16_bool == 0) goto Label_366; // 0x16b JumpB
	var_13_bool = 0; // 0x16c MovB
	return 2; // 0x16d Return
	
Label_366:
	var_17_float = 0; var_18_object = Obj(); // 0x16e PushV
	var_18_object = var_4_bool; // 0x16f MovT
	func_499(var_18_object); // 0x170 NEW_2
	var_15_float = sqrt(var_17_float); // 0x172 Sqrt2
	var_25_object = var_2_object; // 0x173 PushT
	if(var_25_object == 0) goto Label_374; // 0x174 JumpB
	var_15_float = var_15_float - var_1_object; // 0x175 Sub2
	
Label_374:
	var_13_bool = var_15_float < var_0_object; // 0x176 LT2
	return 2; // 0x177 Return
}


func_492(var_62_bool)
{
	var_62_bool = 1; // 0x1ec MovB
	return 0; // 0x1ed Return
}


func_685(var_73_int)
{
	var_73_int = 515555; // 0x2ad MovI
	return 0; // 0x2ae Return
}


func_494()
{
	StopAnimation(); // 0x1ee Func
	StopGroup0(); // 0x1f0 Func
	return 0; // 0x1f2 Return
}


func_687(var_72_int)
{
	var_72_int = 503340; // 0x2af MovI
	return 0; // 0x2b0 Return
}


func_689(var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png"; // 0x2b1 MovS
	return 0; // 0x2b2 Return
}


func_691(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png"; // 0x2b3 MovS
	return 0; // 0x2b4 Return
}


func_499(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1f3 PushV
	GetPosition(var_22_cvector); // 0x1f4 Func
	GetPosition(var_23_cvector); // 0x1f6 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1f8 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1f9 Or2
	return 6; // 0x1fa Return
}


func_693(var_67_bool)
{
	var_67_bool = 0; // 0x2b5 MovB
	return 0; // 0x2b6 Return
}


func_628(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x274 PushV
	GetEyesHeight(var_30_float); // 0x275 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x277 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x278 PushE
	var_32_float = var_30_float; // 0x279 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x27a PopE
	var_33_string = "head"; // 0x27b PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x27c Func
	return 4; // 0x27e Return
}


func_695()
{
	var_18_string = "ood6WastedWoman1"; // 0x2b8 PushS
	var_19_int = 1; // 0x2b9 PushI
	SetVariable(var_18_string, var_19_int); // 0x2ba Func
	return 0; // 0x2bc Return
}


func_507(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x1fb PushV
	IsLoaded(var_16_bool); // 0x1fc Func
	var_14_bool = var_16_bool; // 0x1fe Mov
	return 2; // 0x1ff Return
}


func_701(var_110_bool)
{
	var_112_int = 0; var_113_string = ""; // 0x2be PushV
	var_113_string = "ood6WastedWoman1"; // 0x2bf MovS
	func_656(var_112_int, var_113_string); // 0x2c0 NEW_2
	var_116_int = 0; // 0x2c2 PushI
	var_117_bool = var_112_int == var_116_int; // 0x2c3 Eq
	if(var_117_bool == 0) goto Label_711; // 0x2c4 JumpB
	var_110_bool = 1; // 0x2c5 MovB
	return 0; // 0x2c6 Return
	
Label_711:
	var_110_bool = 0; // 0x2c7 MovB
	return 0; // 0x2c8 Return
}


func_639()
{
	var_13_bool = 0; // 0x27f PushV
	func_693(var_13_bool); // 0x280 NEW_2
	if(var_13_bool == 0) goto Label_645; // 0x282 JumpB
	lshStopSpeech(); // 0x283 Func
	
Label_645:
	return 0; // 0x285 Return
}


