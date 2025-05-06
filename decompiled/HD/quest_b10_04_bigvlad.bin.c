task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc1 PushI
	if(var_9_int == 0) goto Label_310; // 0xc2 JumpB
	func_915(); // 0xc4 NEW_2
	var_11_int = 31752; // 0xc6 PushI
	var_12_bool = var_7_cvector == var_11_int; // 0xc7 Eq
	if(var_12_bool == 0) goto Label_252; // 0xc8 JumpB
	var_13_bool = 0; var_14_object = Obj(); // 0xc9 PushV
	var_14_object = var_1_object; // 0xca MovT
	func_982(var_14_object); // 0xcb NEW_2
	var_21_bool = var_13_bool == 0; // 0xcd Not
	if(var_21_bool == 0) goto Label_232; // 0xce JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xcf PushV
	var_22_object = var_1_object; // 0xd0 MovT
	var_23_object = var_0_object; // 0xd1 MovT
	func_976(); // 0xd2 NEW_2
	var_26_string = ""; // 0xd4 PushV
	var_26_string = "Neutral"; // 0xd5 MovS
	func_170(var_8_bool, var_26_string); // 0xd6 NEW_2
	var_43_int = 530380; // 0xd8 PushI
	SetMessage(var_43_int); // 0xd9 TObjFunc
	ClearReplies(); // 0xdb TObjFunc
	var_44_int = 530381; // 0xdd PushI
	var_45_int = 32786; // 0xde PushI
	var_46_int = 31753; // 0xdf PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xe0 TObjFunc
	var_47_int = 530382; // 0xe2 PushI
	var_48_int = 32786; // 0xe3 PushI
	var_49_int = 31754; // 0xe4 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xe5 TObjFunc
	return 0; // 0xe7 Return
	
Label_232:
	var_50_string = ""; // 0xe8 PushV
	var_50_string = "Neutral"; // 0xe9 MovS
	func_170(var_8_bool, var_50_string); // 0xea NEW_2
	var_51_int = 530383; // 0xec PushI
	SetMessage(var_51_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_52_int = 530384; // 0xf1 PushI
	var_53_int = -1; // 0xf2 PushI
	var_54_int = 31756; // 0xf3 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xf4 TObjFunc
	var_55_int = 531445; // 0xf6 PushI
	var_56_int = -1; // 0xf7 PushI
	var_57_int = 32792; // 0xf8 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_58_int = 32786; // 0xfc PushI
	var_59_bool = var_7_cvector == var_58_int; // 0xfd Eq
	if(var_59_bool == 0) goto Label_275; // 0xfe JumpB
	var_60_string = ""; // 0xff PushV
	var_60_string = "Distrust"; // 0x100 MovS
	func_170(var_8_bool, var_60_string); // 0x101 NEW_2
	var_61_int = 531440; // 0x103 PushI
	SetMessage(var_61_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_62_int = 531441; // 0x108 PushI
	var_63_int = 32788; // 0x109 PushI
	var_64_int = 32787; // 0x10a PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x10b TObjFunc
	var_65_int = 531444; // 0x10d PushI
	var_66_int = 32788; // 0x10e PushI
	var_67_int = 32790; // 0x10f PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_68_int = 32788; // 0x113 PushI
	var_69_bool = var_7_cvector == var_68_int; // 0x114 Eq
	if(var_69_bool == 0) goto Label_298; // 0x115 JumpB
	var_70_string = ""; // 0x116 PushV
	var_70_string = "Neutral"; // 0x117 MovS
	func_170(var_8_bool, var_70_string); // 0x118 NEW_2
	var_71_int = 531442; // 0x11a PushI
	SetMessage(var_71_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_72_int = 531443; // 0x11f PushI
	var_73_int = -1; // 0x120 PushI
	var_74_int = 32789; // 0x121 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x122 TObjFunc
	var_75_int = 531446; // 0x124 PushI
	var_76_int = -1; // 0x125 PushI
	var_77_int = 32794; // 0x126 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_3_string = 1; // 0x12a TMovB
	var_78_bool = 0; // 0x12b PushV
	func_1019(var_78_bool); // 0x12c NEW_2
	if(var_78_bool == 0) goto Label_306; // 0x12e JumpB
	lshStopAnimation(); // 0x12f Func
	goto Label_308; // 0x131 Jump
	
Label_308:
	return 0; // 0x134 Return
	
Label_306:
	StopAnimation(); // 0x132 Func
	
Label_310:
	return 0; // 0x136 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x143 PushV
	var_10_string = "cleanup"; // 0x144 PushS
	var_11_bool = var_7_string == var_10_string; // 0x145 Eq
	if(var_11_bool == 0) goto Label_338; // 0x146 JumpB
	var_1_object = 1; // 0x147 TMovB
	IsLoaded(var_9_bool); // 0x148 Func
	var_12_bool = var_9_bool == 0; // 0x14a Not
	if(var_12_bool == 0) goto Label_337; // 0x14b JumpB
	var_13_object = Obj(); // 0x14c PushV
	func_922(var_13_object); // 0x14d NEW_2
	RemoveActor(var_13_object); // 0x14f Func
	
Label_337:
	goto Label_342; // 0x151 Jump
	
Label_342:
	return 2; // 0x156 Return
	
Label_338:
	var_16_string = "restore"; // 0x152 PushS
	var_17_bool = var_7_string == var_16_string; // 0x153 Eq
	if(var_17_bool == 0) goto Label_342; // 0x154 JumpB
	var_1_object = 0; // 0x155 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x157 PushT
	if(var_7_object == 0) goto Label_352; // 0x158 JumpB
	var_8_object = Obj(); // 0x159 PushV
	func_922(var_8_object); // 0x15a NEW_2
	RemoveActor(var_8_object); // 0x15c Func
	Hold(); // 0x15e Func
	
Label_352:
	func_467(); // 0x161 NEW_2
	return 0; // 0x163 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_482(); // 0x165 NEW_2
	return 0; // 0x167 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x1ae PushI
	var_9_bool = var_7_int == var_8_int; // 0x1af Eq
	if(var_9_bool == 0) goto Label_466; // 0x1b0 JumpB
	func_425(); // 0x1b2 NEW_2
	var_11_bool = 0; // 0x1b4 PushV
	var_11_bool = 0; // 0x1b5 MovB
	var_12_bool = 0; // 0x1b6 PushV
	func_639(var_12_bool); // 0x1b7 NEW_2
	if(var_12_bool == 0) goto Label_447; // 0x1b9 JumpB
	var_15_bool = 0; // 0x1ba PushV
	func_394(var_15_bool); // 0x1bb NEW_2
	if(var_15_bool == 0) goto Label_447; // 0x1bd JumpB
	var_11_bool = 1; // 0x1be MovB
	
Label_447:
	if(var_11_bool == 0) goto Label_460; // 0x1bf JumpB
	var_32_bool = 0; // 0x1c0 PushV
	func_374(var_32_bool); // 0x1c1 NEW_2
	if(var_32_bool == 0) goto Label_459; // 0x1c3 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x1c4 PushV
	var_53_object = Obj(); // 0x1c5 PushV
	func_922(var_53_object); // 0x1c6 NEW_2
	var_52_object = var_53_object; // 0x1c7 Mov
	func_789(var_52_object); // 0x1c9 NEW_2
	
Label_459:
	goto Label_466; // 0x1cb Jump
	
Label_466:
	return 0; // 0x1d2 Return
	
Label_460:
	func_389(var_7_int); // 0x1cd NEW_2
	func_416(); // 0x1d0 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x1f0 Push
	if(var_8_bool == 0) goto Label_502; // 0x1f1 JumpB
	func_416(); // 0x1f3 NEW_2
	goto Label_506; // 0x1f5 Jump
	
Label_506:
	return 0; // 0x1fa Return
	
Label_502:
	var_14_string = ""; // 0x1f6 PushV
	var_14_string = "Neutral"; // 0x1f7 MovS
	func_869(var_14_string); // 0x1f8 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1fb PushV
	IsOverrideActive(var_9_bool); // 0x1fc Func
	var_10_bool = var_9_bool == 0; // 0x1fe Not
	if(var_10_bool == 0) goto Label_535; // 0x1ff JumpB
	EventDisable(0); // 0x200 EventDisable
	func_607(); // 0x202 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x204 PushV
	var_12_object = var_7_object; // 0x205 Mov
	func_630(var_12_object); // 0x206 NEW_2
	EventEnable(0); // 0x208 EventEnable
	var_25_object = Obj(); // 0x209 PushV
	var_25_object = var_7_object; // 0x20a Mov
	func_311(var_25_object); // 0x20b NEW_2
	var_272_string = ""; // 0x20d PushV
	var_272_string = "Neutral"; // 0x20e MovS
	func_869(var_272_string); // 0x20f NEW_2
	func_425(); // 0x212 NEW_2
	func_416(); // 0x215 NEW_2
	
Label_535:
	return 2; // 0x217 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_360(var_6_bool); // 0x140 NEW_2
	return 0; // 0x142 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_644(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1013(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1011(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1015(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1017(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_994(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_922(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_731(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_263_bool = var_36_bool == 0; // 0x3f Not
	if(var_263_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_264_object = Obj(); // 0x46 PushV
	var_264_object = var_27_object; // 0x47 Mov
	func_713(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_900(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x384 PushV
	var_136_bool = 0; // 0x385 PushV
	func_1019(var_136_bool); // 0x386 NEW_2
	if(var_136_bool == 0) goto Label_913; // 0x388 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x389 Func
	var_137_bool = var_135_bool; // 0x38b Push
	if(var_137_bool == 0) goto Label_913; // 0x38c JumpB
	lshPlaySpeech(var_133_string); // 0x38d Func
	var_132_bool = 1; // 0x38f MovB
	return 2; // 0x390 Return
	
Label_913:
	var_132_bool = 0; // 0x391 MovB
	return 2; // 0x392 Return
}


func_644(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x284 PushV
	GetPosition(var_50_cvector); // 0x285 ObjFunc
	GetEyesHeight(var_49_float); // 0x287 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x289 PushE
	var_58_float = var_58_float + var_49_float; // 0x28a Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x28b PopE
	GetPosition(var_51_cvector); // 0x28c Func
	GetEyesHeight(var_49_float); // 0x28e Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x290 PushE
	var_59_float = var_59_float + var_49_float; // 0x291 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x292 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x293 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x294 PushE
	var_60_float = 0; // 0x295 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x296 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x297 Or
	var_62_float = sqrt(var_61_int); // 0x298 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x299 Div2
	var_53_cvector = -var_52_cvector; // 0x29a Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x29b Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x29c PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x29d PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x29e Xor2
	func_928(var_64_cvector, var_65_cvector); // 0x29f NEW_2
	var_72_int = 25; // 0x2a1 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x2a2 Mult
	var_74_int = var_63_float + var_73_float; // 0x2a3 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x2a4 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x2a5 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x2a6 Add2
	IsOverrideActive(var_56_bool); // 0x2a7 Func
	var_76_bool = var_56_bool; // 0x2a9 Push
	if(var_76_bool == 0) goto Label_685; // 0x2aa JumpB
	var_37_bool = 0; // 0x2ab MovB
	return 18; // 0x2ac Return
	
Label_685:
	StopWorld(); // 0x2ad Func
	var_77_bool = 1; // 0x2af PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x2b0 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x2b2 PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x2b3 PushE
	Rotate(var_78_float, var_79_float); // 0x2b4 Func
	var_80_bool = 0; // 0x2b6 PushV
	func_1019(var_80_bool); // 0x2b7 NEW_2
	if(var_80_bool == 0) goto Label_699; // 0x2b9 JumpB
	goto Label_707; // 0x2ba Jump
	
Label_707:
	CameraWaitForPlayFinish(); // 0x2c3 Func
	ResumeWorld(); // 0x2c5 Func
	var_37_bool = 1; // 0x2c7 MovB
	return 18; // 0x2c8 Return
	
Label_699:
	var_81_string = "head"; // 0x2bb PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x2bc Func
	var_82_bool = var_57_bool; // 0x2be Push
	if(var_82_bool == 0) goto Label_707; // 0x2bf JumpB
	var_83_string = "head"; // 0x2c0 PushS
	LookAsyncCamera(var_83_string); // 0x2c1 Func
}


func_389(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x185 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x186 PushE
	RotateAsync(var_84_float, var_85_float); // 0x187 Func
	return 0; // 0x189 Return
}


func_394(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x18a PushV
	var_20_string = "player"; // 0x18b PushS
	FindActor(var_18_object, var_20_string); // 0x18c Func
	var_21_bool = var_18_object == 0; // 0x18e Not
	if(var_21_bool == 0) goto Label_402; // 0x18f JumpB
	var_15_bool = 0; // 0x190 MovB
	return 4; // 0x191 Return
	
Label_402:
	var_22_float = 0; var_23_object = Obj(); // 0x192 PushV
	var_23_object = var_18_object; // 0x193 Mov
	func_612(var_23_object); // 0x194 NEW_2
	var_30_float = 90000.0; // 0x196 PushF
	var_31_bool = var_22_float > var_30_float; // 0x197 GT
	if(var_31_bool == 0) goto Label_411; // 0x198 JumpB
	var_15_bool = 0; // 0x199 MovB
	return 4; // 0x19a Return
	
Label_411:
	CanSee(var_19_bool, var_18_object); // 0x19b Func
	var_15_bool = var_19_bool; // 0x19d Mov
	return 4; // 0x19e Return
}


func_915()
{
	var_10_bool = 0; // 0x393 PushV
	func_1019(var_10_bool); // 0x394 NEW_2
	if(var_10_bool == 0) goto Label_921; // 0x396 JumpB
	lshStopSpeech(); // 0x397 Func
	
Label_921:
	return 0; // 0x399 Return
}


func_789(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x315 PushV
	var_116_string = "c"; // 0x316 MovS
	var_117_int = 0; // 0x317 MovI
	
Label_792:
	var_121_int = 1; // 0x318 PushI
	if(var_121_int == 0) goto Label_805; // 0x319 JumpB
	var_122_int = 1; // 0x31a PushI
	var_123_int = var_117_int + var_122_int; // 0x31b Add
	var_124_int = var_116_string + var_123_int; // 0x31c Add
	HasProperty(var_124_int, var_118_bool); // 0x31d ObjFunc
	var_125_bool = var_118_bool == 0; // 0x31f Not
	if(var_125_bool == 0) goto Label_802; // 0x320 JumpB
	goto Label_805; // 0x321 Jump
	
Label_805:
	var_126_bool = var_117_int == 0; // 0x325 Not
	if(var_126_bool == 0) goto Label_809; // 0x326 JumpB
	var_109_bool = 0; // 0x327 MovB
	return 10; // 0x328 Return
	
Label_809:
	var_119_int = 0; // 0x329 MovI
	var_127_int = 1; // 0x32a PushI
	var_128_bool = var_117_int > var_127_int; // 0x32b GT
	if(var_128_bool == 0) goto Label_815; // 0x32c JumpB
	irand(var_119_int, var_117_int); // 0x32d Func
	
Label_815:
	var_129_int = 1; // 0x32f PushI
	var_130_int = var_119_int + var_129_int; // 0x330 Add
	var_131_int = var_116_string + var_130_int; // 0x331 Add
	GetProperty(var_131_int, var_120_string); // 0x332 ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x334 PushV
	var_133_string = var_120_string; // 0x335 Mov
	func_900(var_132_bool, var_133_string); // 0x336 NEW_2
	var_109_bool = var_132_bool; // 0x337 Mov
	return 10; // 0x339 Return
	
Label_802:
	var_138_int = 1; // 0x322 PushI
	var_117_int = var_117_int + var_138_int; // 0x323 Add2
	goto Label_792; // 0x324 Jump
}


func_536()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x218 PushV
	WaitForAnimEnd(); // 0x219 Func
	var_23_bool = 0; // 0x21b PushV
	func_639(var_23_bool); // 0x21c NEW_2
	var_24_bool = var_23_bool == 0; // 0x21e Not
	if(var_24_bool == 0) goto Label_545; // 0x21f JumpB
	return 12; // 0x220 Return
	
Label_545:
	var_25_int = 0; // 0x221 PushV
	func_959(var_25_int); // 0x222 NEW_2
	var_17_int = var_25_int; // 0x223 Mov
	var_18_int = 0; // 0x225 MovI
	
Label_550:
	var_38_bool = 0; // 0x226 PushV
	var_38_bool = 0; // 0x227 MovB
	var_39_int = 5; // 0x228 PushI
	var_40_bool = var_18_int < var_39_int; // 0x229 LT
	if(var_40_bool == 0) goto Label_560; // 0x22a JumpB
	var_41_bool = 0; // 0x22b PushV
	func_639(var_41_bool); // 0x22c NEW_2
	if(var_41_bool == 0) goto Label_560; // 0x22e JumpB
	var_38_bool = 1; // 0x22f MovB
	
Label_560:
	if(var_38_bool == 0) goto Label_602; // 0x230 JumpB
	var_42_bool = var_17_int == 0; // 0x231 Not
	if(var_42_bool == 0) goto Label_570; // 0x232 JumpB
	var_43_int = 3; // 0x233 PushI
	Sleep(var_43_int, var_19_bool); // 0x234 Func
	var_44_bool = var_19_bool == 0; // 0x236 Not
	if(var_44_bool == 0) goto Label_569; // 0x237 JumpB
	goto Label_602; // 0x238 Jump
	
Label_602:
	ResetAAS(); // 0x25a Func
	return 12; // 0x25c Return
	
Label_569:
	goto Label_591; // 0x239 Jump
	
Label_591:
	var_45_bool = 0; // 0x24f PushV
	func_605(var_45_bool); // 0x250 NEW_2
	var_46_bool = var_45_bool == 0; // 0x252 Not
	if(var_46_bool == 0) goto Label_597; // 0x253 JumpB
	goto Label_602; // 0x254 Jump
	
Label_597:
	ResetAAS(); // 0x255 Func
	var_47_int = 1; // 0x257 PushI
	var_18_int = var_18_int + var_47_int; // 0x258 Add2
	goto Label_550; // 0x259 Jump
	
Label_570:
	irand(var_20_int, var_17_int); // 0x23a Func
	var_48_int = 5; // 0x23c PushI
	irand(var_21_int, var_48_int); // 0x23d Func
	var_49_int = 0; // 0x23f PushI
	var_50_bool = var_21_int != var_49_int; // 0x240 Neq
	if(var_50_bool == 0) goto Label_579; // 0x241 JumpB
	var_20_int = 0; // 0x242 MovI
	
Label_579:
	var_51_string = "all"; // 0x243 PushS
	var_52_string = ""; var_53_int = 0; // 0x244 PushV
	var_53_int = var_20_int; // 0x245 Mov
	func_952(var_52_string, var_53_int); // 0x246 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x248 Func
	WaitForAnimEnd(var_22_bool); // 0x24a Func
	var_54_bool = var_22_bool == 0; // 0x24c Not
	if(var_54_bool == 0) goto Label_591; // 0x24d JumpB
	goto Label_602; // 0x24e Jump
}


func_922(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x39a PushV
	self(var_102_object); // 0x39b Func
	var_100_object = var_102_object; // 0x39d Mov
	return 2; // 0x39e Return
}


func_416()
{
	var_274_float = 0; var_275_float = 0; // 0x1a0 PushV
	var_276_int = 8; // 0x1a1 PushI
	var_277_int = 16; // 0x1a2 PushI
	rand(var_275_float, var_276_int, var_277_int); // 0x1a3 Func
	var_278_int = 10; // 0x1a5 PushI
	SetTimer(var_278_int, var_275_float); // 0x1a6 Func
	return 2; // 0x1a8 Return
}


func_928(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x3a0 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x3a1 Or
	var_68_float = sqrt(var_69_int); // 0x3a2 Sqrt2
	var_70_float = 0.0; // 0x3a3 PushF
	var_71_bool = var_68_float < var_70_float; // 0x3a4 LT
	if(var_71_bool == 0) goto Label_936; // 0x3a5 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x3a6 MovV
	return 2; // 0x3a7 Return
	
Label_936:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x3a8 Div2
	return 2; // 0x3a9 Return
}


func_425()
{
	var_273_int = 10; // 0x1a9 PushI
	KillTimer(var_273_int); // 0x1aa Func
	return 0; // 0x1ac Return
}


func_170(var_2_object, var_213_string)
{
	var_214_bool = 0; // 0xab PushV
	func_1019(var_214_bool); // 0xac NEW_2
	var_215_bool = var_214_bool == 0; // 0xae Not
	if(var_215_bool == 0) goto Label_177; // 0xaf JumpB
	return 0; // 0xb0 Return
	
Label_177:
	var_216_bool = var_213_string == var_2_object; // 0xb1 Eq
	if(var_216_bool == 0) goto Label_180; // 0xb2 JumpB
	return 0; // 0xb3 Return
	
Label_180:
	var_217_string = ""; var_218_bool = 0; // 0xb4 PushV
	var_217_string = var_213_string; // 0xb5 Mov
	var_219_string = ""; // 0xb6 PushS
	var_220_bool = var_213_string == var_219_string; // 0xb7 Eq
	if(var_220_bool == 0) goto Label_187; // 0xb8 JumpB
	var_218_bool = 0; // 0xb9 MovB
	goto Label_188; // 0xba Jump
	
Label_188:
	func_885(var_217_string, var_218_bool); // 0xbc NEW_2
	var_2_object = var_213_string; // 0xbe TMov
	return 0; // 0xbf Return
	
Label_187:
	var_218_bool = 1; // 0xbb MovB
}


func_938(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x3aa PushV
	GetVariable(var_203_string, var_205_int); // 0x3ab Func
	var_202_int = var_205_int; // 0x3ad Mov
	return 2; // 0x3ae Return
}


func_943(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x3af PushV
	GetGameTime(var_155_float); // 0x3b0 Func
	var_156_int = 1; // 0x3b2 PushI
	var_157_int = 0; // 0x3b3 PushV
	var_158_int = 24; // 0x3b4 PushI
	var_157_int = var_155_float / var_155_float; // 0x3b5 Div2
	var_153_int = var_156_int + var_157_int; // 0x3b6 Add2
	return 2; // 0x3b7 Return
}


func_311(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x138 PushV
	var_27_object = var_25_object; // 0x139 Mov
	TaskCall(0); // 0x13a TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x13b NEW_2
	TaskReturn(); // 0x13c TaskReturn
	return 0; // 0x13e Return
}


func_952(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x3b8 PushV
	var_34_string = "idle"; // 0x3b9 MovS
	var_35_int = var_32_int; // 0x3ba Push
	if(var_35_int == 0) goto Label_957; // 0x3bb JumpB
	var_34_string = var_34_string + var_32_int; // 0x3bc Add2
	
Label_957:
	var_31_string = var_34_string; // 0x3bd Mov
	return 2; // 0x3be Return
}


func_826(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x33a PushV
	var_152_string = "d"; // 0x33b PushS
	var_153_int = 0; // 0x33c PushV
	func_943(var_153_int); // 0x33d NEW_2
	var_159_int = var_152_string + var_153_int; // 0x33f Add
	var_160_string = "m"; // 0x340 PushS
	var_147_string = var_159_int + var_160_string; // 0x341 Add2
	var_148_int = 0; // 0x342 MovI
	
Label_835:
	var_161_int = 1; // 0x343 PushI
	if(var_161_int == 0) goto Label_848; // 0x344 JumpB
	var_162_int = 1; // 0x345 PushI
	var_163_int = var_148_int + var_162_int; // 0x346 Add
	var_164_int = var_147_string + var_163_int; // 0x347 Add
	HasProperty(var_164_int, var_149_bool); // 0x348 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x34a Not
	if(var_165_bool == 0) goto Label_845; // 0x34b JumpB
	goto Label_848; // 0x34c Jump
	
Label_848:
	var_166_bool = var_148_int == 0; // 0x350 Not
	if(var_166_bool == 0) goto Label_852; // 0x351 JumpB
	var_140_bool = 0; // 0x352 MovB
	return 10; // 0x353 Return
	
Label_852:
	var_150_int = 0; // 0x354 MovI
	var_167_int = 1; // 0x355 PushI
	var_168_bool = var_148_int > var_167_int; // 0x356 GT
	if(var_168_bool == 0) goto Label_858; // 0x357 JumpB
	irand(var_150_int, var_148_int); // 0x358 Func
	
Label_858:
	var_169_int = 1; // 0x35a PushI
	var_170_int = var_150_int + var_169_int; // 0x35b Add
	var_171_int = var_147_string + var_170_int; // 0x35c Add
	GetProperty(var_171_int, var_151_string); // 0x35d ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x35f PushV
	var_173_string = var_151_string; // 0x360 Mov
	func_900(var_172_bool, var_173_string); // 0x361 NEW_2
	var_140_bool = var_172_bool; // 0x362 Mov
	return 10; // 0x364 Return
	
Label_845:
	var_174_int = 1; // 0x34d PushI
	var_148_int = var_148_int + var_174_int; // 0x34e Add2
	goto Label_835; // 0x34f Jump
}


func_959(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x3bf PushV
	var_28_int = 0; // 0x3c0 MovI
	
Label_961:
	var_30_string = "all"; // 0x3c1 PushS
	var_31_string = ""; var_32_int = 0; // 0x3c2 PushV
	var_32_int = var_28_int; // 0x3c3 Mov
	func_952(var_31_string, var_32_int); // 0x3c4 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x3c6 Func
	var_36_bool = var_29_bool == 0; // 0x3c8 Not
	if(var_36_bool == 0) goto Label_971; // 0x3c9 JumpB
	goto Label_974; // 0x3ca Jump
	
Label_974:
	var_25_int = var_28_int; // 0x3ce Mov
	return 4; // 0x3cf Return
	
Label_971:
	var_37_int = 1; // 0x3cb PushI
	var_28_int = var_28_int + var_37_int; // 0x3cc Add2
	goto Label_961; // 0x3cd Jump
}


func_713()
{
	var_265_bool = 0; var_266_bool = 0; // 0x2c9 PushV
	var_267_bool = 1; // 0x2ca PushB
	CameraSwitchToNormal(var_267_bool); // 0x2cb Func
	var_268_bool = 0; // 0x2cd PushV
	func_1019(var_268_bool); // 0x2ce NEW_2
	if(var_268_bool == 0) goto Label_722; // 0x2d0 JumpB
	goto Label_730; // 0x2d1 Jump
	
Label_730:
	return 2; // 0x2da Return
	
Label_722:
	var_269_string = "head"; // 0x2d2 PushS
	HasAnimationTrack(var_266_bool, var_269_string); // 0x2d3 Func
	var_270_bool = var_266_bool; // 0x2d5 Push
	if(var_270_bool == 0) goto Label_730; // 0x2d6 JumpB
	var_271_string = "head"; // 0x2d7 PushS
	UnlookAsync(var_271_string); // 0x2d8 Func
}


func_976()
{
	var_211_string = "b10q04PlennikTalk"; // 0x3d1 PushS
	var_212_int = 1; // 0x3d2 PushI
	SetVariable(var_211_string, var_212_int); // 0x3d3 Func
	return 0; // 0x3d5 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_140; // 0x56 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x57 PushV
	var_201_object = var_1_object; // 0x58 MovT
	func_982(var_201_object); // 0x59 NEW_2
	var_208_bool = var_200_bool == 0; // 0x5b Not
	if(var_208_bool == 0) goto Label_118; // 0x5c JumpB
	var_209_object = Obj(); var_210_object = Obj(); // 0x5d PushV
	var_209_object = var_1_object; // 0x5e MovT
	var_210_object = var_0_object; // 0x5f MovT
	func_976(); // 0x60 NEW_2
	var_213_string = ""; // 0x62 PushV
	var_213_string = "Neutral"; // 0x63 MovS
	func_170(var_194_object, var_213_string); // 0x64 NEW_2
	var_230_int = 530380; // 0x66 PushI
	SetMessage(var_230_int); // 0x67 TObjFunc
	ClearReplies(); // 0x69 TObjFunc
	var_231_int = 530381; // 0x6b PushI
	var_232_int = 32786; // 0x6c PushI
	var_233_int = 31753; // 0x6d PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x6e TObjFunc
	var_234_int = 530382; // 0x70 PushI
	var_235_int = 32786; // 0x71 PushI
	var_236_int = 31754; // 0x72 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x73 TObjFunc
	goto Label_140; // 0x75 Jump
	
Label_140:
	var_237_bool = 0; // 0x8c PushV
	func_1019(var_237_bool); // 0x8d NEW_2
	if(var_237_bool == 0) goto Label_155; // 0x8f JumpB
	
Label_144:
	lshWaitForAnimEnd(); // 0x90 Func
	var_238_string = var_3_string; // 0x92 PushT
	if(var_238_string == 0) goto Label_149; // 0x93 JumpB
	goto Label_154; // 0x94 Jump
	
Label_154:
	goto Label_169; // 0x9a Jump
	
Label_169:
	return 0; // 0xa9 Return
	
Label_149:
	var_239_string = ""; // 0x95 PushV
	var_239_string = var_2_object; // 0x96 MovT
	func_869(var_239_string); // 0x97 NEW_2
	goto Label_144; // 0x99 Jump
	
Label_155:
	var_250_string = "all"; // 0x9b PushS
	var_251_string = "idle"; // 0x9c PushS
	PlayAnimation(var_250_string, var_251_string); // 0x9d Func
	
Label_159:
	WaitForAnimEnd(); // 0x9f Func
	var_252_string = var_3_string; // 0xa1 PushT
	if(var_252_string == 0) goto Label_164; // 0xa2 JumpB
	goto Label_169; // 0xa3 Jump
	
Label_164:
	var_253_string = "all"; // 0xa4 PushS
	var_254_string = "idle"; // 0xa5 PushS
	PlayAnimation(var_253_string, var_254_string); // 0xa6 Func
	goto Label_159; // 0xa8 Jump
	
Label_118:
	var_255_string = ""; // 0x76 PushV
	var_255_string = "Neutral"; // 0x77 MovS
	func_170(var_194_object, var_255_string); // 0x78 NEW_2
	var_256_int = 530383; // 0x7a PushI
	SetMessage(var_256_int); // 0x7b TObjFunc
	ClearReplies(); // 0x7d TObjFunc
	var_257_int = 530384; // 0x7f PushI
	var_258_int = -1; // 0x80 PushI
	var_259_int = 31756; // 0x81 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x82 TObjFunc
	var_260_int = 531445; // 0x84 PushI
	var_261_int = -1; // 0x85 PushI
	var_262_int = 32792; // 0x86 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x87 TObjFunc
	goto Label_140; // 0x89 Jump
}


func_467()
{
	func_607(); // 0x1d4 NEW_2
	func_425(); // 0x1d7 NEW_2
	lshStopSpeech(); // 0x1d9 Func
	lshStopAnimation(); // 0x1db Func
	StopAsync(); // 0x1dd Func
	Hold(); // 0x1df Func
	return 0; // 0x1e1 Return
}


func_982(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x3d7 PushV
	var_203_string = "b10q04PlennikTalk"; // 0x3d8 MovS
	func_938(var_202_int, var_203_string); // 0x3d9 NEW_2
	var_206_int = 0; // 0x3db PushI
	var_207_bool = var_202_int != var_206_int; // 0x3dc Neq
	if(var_207_bool == 0) goto Label_992; // 0x3dd JumpB
	var_200_bool = 1; // 0x3de MovB
	return 0; // 0x3df Return
	
Label_992:
	var_200_bool = 0; // 0x3e0 MovB
	return 0; // 0x3e1 Return
}


func_731(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x2db PushV
	var_107_string = "voice_common"; // 0x2dc PushS
	GetVariable(var_107_string, var_105_int); // 0x2dd Func
	var_108_int = var_105_int; // 0x2df Push
	if(var_108_int == 0) goto Label_769; // 0x2e0 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x2e1 PushV
	var_110_object = var_99_object; // 0x2e2 Mov
	func_789(var_110_object); // 0x2e3 NEW_2
	var_139_bool = var_109_bool == 0; // 0x2e5 Not
	if(var_139_bool == 0) goto Label_751; // 0x2e6 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x2e7 PushV
	var_141_object = var_99_object; // 0x2e8 Mov
	func_826(var_141_object); // 0x2e9 NEW_2
	var_175_bool = var_140_bool == 0; // 0x2eb Not
	if(var_175_bool == 0) goto Label_751; // 0x2ec JumpB
	var_98_bool = 0; // 0x2ed MovB
	return 4; // 0x2ee Return
	
Label_751:
	var_176_int = 2; // 0x2ef PushI
	irand(var_106_int, var_176_int); // 0x2f0 Func
	var_177_int = var_106_int; // 0x2f2 Push
	if(var_177_int == 0) goto Label_764; // 0x2f3 JumpB
	var_178_string = "voice_common"; // 0x2f4 PushS
	var_179_int = 1; // 0x2f5 PushI
	var_180_int = var_105_int + var_179_int; // 0x2f6 Add
	var_181_int = 3; // 0x2f7 PushI
	var_182_int = var_180_int / var_181_int; // 0x2f8 Mod
	SetVariable(var_178_string, var_182_int); // 0x2f9 Func
	goto Label_768; // 0x2fb Jump
	
Label_768:
	goto Label_787; // 0x300 Jump
	
Label_787:
	var_98_bool = 1; // 0x313 MovB
	return 4; // 0x314 Return
	
Label_764:
	var_183_string = "voice_common"; // 0x2fc PushS
	var_184_int = 0; // 0x2fd PushI
	SetVariable(var_183_string, var_184_int); // 0x2fe Func
	
Label_769:
	var_185_bool = 0; var_186_object = Obj(); // 0x301 PushV
	var_186_object = var_99_object; // 0x302 Mov
	func_826(var_186_object); // 0x303 NEW_2
	var_187_bool = var_185_bool == 0; // 0x305 Not
	if(var_187_bool == 0) goto Label_783; // 0x306 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x307 PushV
	var_189_object = var_99_object; // 0x308 Mov
	func_789(var_189_object); // 0x309 NEW_2
	var_190_bool = var_188_bool == 0; // 0x30b Not
	if(var_190_bool == 0) goto Label_783; // 0x30c JumpB
	var_98_bool = 0; // 0x30d MovB
	return 4; // 0x30e Return
	
Label_783:
	var_191_string = "voice_common"; // 0x30f PushS
	var_192_int = 1; // 0x310 PushI
	SetVariable(var_191_string, var_192_int); // 0x311 Func
}


func_605(var_45_bool)
{
	var_45_bool = 1; // 0x25d MovB
	return 0; // 0x25e Return
}


func_607()
{
	StopAnimation(); // 0x25f Func
	StopGroup0(); // 0x261 Func
	return 0; // 0x263 Return
}


func_994(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x3e2 PushV
	var_92_string = "branch"; // 0x3e3 PushS
	GetVariable(var_92_string, var_91_int); // 0x3e4 Func
	var_93_int = 0; // 0x3e6 PushI
	var_94_bool = var_91_int == var_93_int; // 0x3e7 Eq
	if(var_94_bool == 0) goto Label_1004; // 0x3e8 JumpB
	var_89_int = 1; // 0x3e9 MovI
	return 2; // 0x3ea Return
	
Label_1004:
	var_95_int = 1; // 0x3ec PushI
	var_96_bool = var_91_int == var_95_int; // 0x3ed Eq
	if(var_96_bool == 0) goto Label_1009; // 0x3ee JumpB
	var_89_int = 2; // 0x3ef MovI
	return 2; // 0x3f0 Return
	
Label_1009:
	var_89_int = 3; // 0x3f1 MovI
	return 2; // 0x3f2 Return
}


func_482()
{
	StopGroup0(); // 0x1e2 Func
	func_425(); // 0x1e5 NEW_2
	var_8_string = ""; // 0x1e7 PushV
	var_8_string = "Neutral"; // 0x1e8 MovS
	func_869(var_8_string); // 0x1e9 NEW_2
	func_416(); // 0x1ec NEW_2
	return 0; // 0x1ee Return
}


func_612(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x264 PushV
	GetPosition(var_27_cvector); // 0x265 Func
	GetPosition(var_28_cvector); // 0x267 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x269 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x26a Or2
	return 6; // 0x26b Return
}


func_869(var_239_string)
{
	var_240_bool = 0; var_241_float = 0; var_242_float = 0; var_243_bool = 0; var_244_float = 0; var_245_float = 0; // 0x365 PushV
	lshHasAnimation(var_243_bool, var_239_string); // 0x366 Func
	var_246_bool = var_243_bool; // 0x368 Push
	if(var_246_bool == 0) goto Label_880; // 0x369 JumpB
	lshGetAnimTimes(var_239_string, var_244_float, var_245_float); // 0x36a Func
	var_247_bool = 0; // 0x36c PushB
	lshPlayAnimation(var_244_float, var_245_float, var_247_bool); // 0x36d Func
	goto Label_884; // 0x36f Jump
	
Label_884:
	return 6; // 0x374 Return
	
Label_880:
	var_248_string = "Can't find lsh animation : "; // 0x370 PushS
	var_249_int = var_248_string + var_239_string; // 0x371 Add
	Trace(var_249_int); // 0x372 Func
}


func_360(var_0_object)
{
	var_7_bool = 0; // 0x168 PushV
	func_639(var_7_bool); // 0x169 NEW_2
	var_10_bool = var_7_bool == 0; // 0x16b Not
	if(var_10_bool == 0) goto Label_367; // 0x16c JumpB
	Hold(); // 0x16d Func
	
Label_367:
	GetDirection(var_0_object); // 0x16f Func
	
Label_369:
	func_536(); // 0x172 NEW_2
	goto Label_369; // 0x174 Jump
}


func_620(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x26c PushV
	GetPosition(var_20_cvector); // 0x26d Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x26f Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x270 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x271 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x272 Func
	var_15_bool = var_22_bool; // 0x274 Mov
	return 6; // 0x275 Return
}


func_1011(var_86_int)
{
	var_86_int = 515531; // 0x3f3 MovI
	return 0; // 0x3f4 Return
}


func_1013(var_85_int)
{
	var_85_int = 502857; // 0x3f5 MovI
	return 0; // 0x3f6 Return
}


func_885(var_217_string, var_218_bool)
{
	var_221_bool = 0; var_222_float = 0; var_223_float = 0; var_224_bool = 0; var_225_float = 0; var_226_float = 0; // 0x375 PushV
	lshHasAnimation(var_224_bool, var_217_string); // 0x376 Func
	var_227_bool = var_224_bool; // 0x378 Push
	if(var_227_bool == 0) goto Label_895; // 0x379 JumpB
	lshGetAnimTimes(var_217_string, var_225_float, var_226_float); // 0x37a Func
	lshPlayAnimation(var_225_float, var_226_float, var_218_bool); // 0x37c Func
	goto Label_899; // 0x37e Jump
	
Label_899:
	return 6; // 0x383 Return
	
Label_895:
	var_228_string = "Can't find lsh animation : "; // 0x37f PushS
	var_229_int = var_228_string + var_217_string; // 0x380 Add
	Trace(var_229_int); // 0x381 Func
}


func_1015(var_87_string)
{
	var_87_string = "ui/NPC_BigVlad.png"; // 0x3f7 MovS
	return 0; // 0x3f8 Return
}


func_630(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x276 PushV
	GetPosition(var_14_cvector); // 0x277 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x279 PushV
	var_16_cvector = var_14_cvector; // 0x27a Mov
	func_620(var_15_bool, var_16_cvector); // 0x27b NEW_2
	var_11_bool = var_15_bool; // 0x27c Mov
	return 2; // 0x27e Return
}


func_1017(var_88_string)
{
	var_88_string = "ui/NPC_BigVlad_b.png"; // 0x3f9 MovS
	return 0; // 0x3fa Return
}


func_374(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x176 PushV
	var_35_string = "player"; // 0x177 PushS
	FindActor(var_34_object, var_35_string); // 0x178 Func
	var_36_bool = var_34_object == 0; // 0x17a Not
	if(var_36_bool == 0) goto Label_382; // 0x17b JumpB
	var_32_bool = 0; // 0x17c MovB
	return 2; // 0x17d Return
	
Label_382:
	var_37_bool = 0; var_38_object = Obj(); // 0x17e PushV
	var_38_object = var_34_object; // 0x17f Mov
	func_630(var_38_object); // 0x180 NEW_2
	var_32_bool = var_37_bool; // 0x181 Mov
	return 2; // 0x183 Return
}


func_1019(var_80_bool)
{
	var_80_bool = 1; // 0x3fb MovB
	return 0; // 0x3fc Return
}


func_639(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x27f PushV
	IsLoaded(var_9_bool); // 0x280 Func
	var_7_bool = var_9_bool; // 0x282 Mov
	return 2; // 0x283 Return
}


