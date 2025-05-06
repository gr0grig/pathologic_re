task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa0 PushI
	if(var_12_int == 0) goto Label_251; // 0xa1 JumpB
	func_578(); // 0xa3 NEW_2
	var_14_int = 11683; // 0xa5 PushI
	var_15_bool = var_10_bool == var_14_int; // 0xa6 Eq
	if(var_15_bool == 0) goto Label_193; // 0xa7 JumpB
	var_16_string = ""; // 0xa8 PushV
	var_16_string = "Neutral"; // 0xa9 MovS
	func_137(var_11_object, var_16_string); // 0xaa NEW_2
	var_33_int = 510591; // 0xac PushI
	SetMessage(var_33_int); // 0xad TObjFunc
	ClearReplies(); // 0xaf TObjFunc
	var_34_int = 510592; // 0xb1 PushI
	var_35_int = 11685; // 0xb2 PushI
	var_36_int = 11684; // 0xb3 PushI
	AddReply(var_34_int, var_35_int, var_36_int); // 0xb4 TObjFunc
	var_37_int = 510599; // 0xb6 PushI
	var_38_int = 11685; // 0xb7 PushI
	var_39_int = 11692; // 0xb8 PushI
	AddReply(var_37_int, var_38_int, var_39_int); // 0xb9 TObjFunc
	var_40_int = 510600; // 0xbb PushI
	var_41_int = -1; // 0xbc PushI
	var_42_int = 11694; // 0xbd PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xbe TObjFunc
	return 0; // 0xc0 Return
	
Label_193:
	var_43_int = 11685; // 0xc1 PushI
	var_44_bool = var_10_bool == var_43_int; // 0xc2 Eq
	if(var_44_bool == 0) goto Label_216; // 0xc3 JumpB
	var_45_string = ""; // 0xc4 PushV
	var_45_string = "Neutral"; // 0xc5 MovS
	func_137(var_11_object, var_45_string); // 0xc6 NEW_2
	var_46_int = 510593; // 0xc8 PushI
	SetMessage(var_46_int); // 0xc9 TObjFunc
	ClearReplies(); // 0xcb TObjFunc
	var_47_int = 510594; // 0xcd PushI
	var_48_int = 11687; // 0xce PushI
	var_49_int = 11686; // 0xcf PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xd0 TObjFunc
	var_50_int = 510598; // 0xd2 PushI
	var_51_int = 11687; // 0xd3 PushI
	var_52_int = 11690; // 0xd4 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xd5 TObjFunc
	return 0; // 0xd7 Return
	
Label_216:
	var_53_int = 11687; // 0xd8 PushI
	var_54_bool = var_10_bool == var_53_int; // 0xd9 Eq
	if(var_54_bool == 0) goto Label_239; // 0xda JumpB
	var_55_string = ""; // 0xdb PushV
	var_55_string = "Neutral"; // 0xdc MovS
	func_137(var_11_object, var_55_string); // 0xdd NEW_2
	var_56_int = 510595; // 0xdf PushI
	SetMessage(var_56_int); // 0xe0 TObjFunc
	ClearReplies(); // 0xe2 TObjFunc
	var_57_int = 510596; // 0xe4 PushI
	var_58_int = -1; // 0xe5 PushI
	var_59_int = 11688; // 0xe6 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xe7 TObjFunc
	var_60_int = 510597; // 0xe9 PushI
	var_61_int = -1; // 0xea PushI
	var_62_int = 11689; // 0xeb PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xec TObjFunc
	return 0; // 0xee Return
	
Label_239:
	var_3_string = 1; // 0xef TMovB
	var_63_bool = 0; // 0xf0 PushV
	func_644(var_63_bool); // 0xf1 NEW_2
	if(var_63_bool == 0) goto Label_247; // 0xf3 JumpB
	lshStopAnimation(); // 0xf4 Func
	goto Label_249; // 0xf6 Jump
	
Label_249:
	return 0; // 0xf9 Return
	
Label_247:
	StopAnimation(); // 0xf7 Func
	
Label_251:
	return 0; // 0xfb Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_338(var_9_object, var_10_object); // 0x108 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x10a PushV
	var_15_object = var_10_object; // 0x10b Mov
	TaskCall(0); // 0x10c TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x10d NEW_2
	TaskReturn(); // 0x10e TaskReturn
	return 0; // 0x110 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x13c PushI
	var_12_bool = var_10_int == var_11_int; // 0x13d Eq
	if(var_12_bool == 0) goto Label_337; // 0x13e JumpB
	var_13_bool = 0; // 0x13f PushV
	func_300(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x140 NEW_2
	if(var_13_bool == 0) goto Label_331; // 0x142 JumpB
	var_26_bool = var_2_object == 0; // 0x143 Not
	if(var_26_bool == 0) goto Label_330; // 0x144 JumpB
	var_27_object = Obj(); // 0x145 PushV
	var_27_object = var_4_bool; // 0x146 MovT
	func_567(var_27_object); // 0x147 NEW_2
	var_2_object = 1; // 0x149 TMovB
	
Label_330:
	goto Label_337; // 0x14a Jump
	
Label_337:
	return 0; // 0x151 Return
	
Label_331:
	var_34_object = var_2_object; // 0x14b PushT
	if(var_34_object == 0) goto Label_337; // 0x14c JumpB
	var_35_string = "head"; // 0x14d PushS
	UnlookAsync(var_35_string); // 0x14e Func
	var_2_object = 0; // 0x150 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_252:
	var_10_int = 1; // 0xfc PushI
	Sleep(var_10_int); // 0xfd Func
	var_11_float = 0; var_12_float = 0; // 0xff PushV
	var_11_float = 300; // 0x100 MovI
	var_12_float = 100; // 0x101 MovI
	func_273(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x102 NEW_2
	goto Label_252; // 0x104 Jump
}


func_640(var_74_string)
{
	var_74_string = "ui/NPC_Citizen3.png"; // 0x280 MovS
	return 0; // 0x281 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_451(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_638(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_636(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_640(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_642(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_619(var_76_int); // 0x22 NEW_2
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
	var_137_bool = var_24_bool == 0; // 0x38 Not
	if(var_137_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_138_object = Obj(); // 0x3f PushV
	var_138_object = var_15_object; // 0x40 Mov
	func_519(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_642(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3_b.png"; // 0x282 MovS
	return 0; // 0x283 Return
}


func_578()
{
	var_13_bool = 0; // 0x242 PushV
	func_644(var_13_bool); // 0x243 NEW_2
	if(var_13_bool == 0) goto Label_584; // 0x245 JumpB
	lshStopSpeech(); // 0x246 Func
	
Label_584:
	return 0; // 0x248 Return
}


func_644(var_67_bool)
{
	var_67_bool = 0; // 0x284 MovB
	return 0; // 0x285 Return
}


func_451(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1c3 PushV
	GetPosition(var_38_cvector); // 0x1c4 ObjFunc
	GetEyesHeight(var_37_float); // 0x1c6 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1c8 PushE
	var_46_float = var_46_float + var_37_float; // 0x1c9 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1ca PopE
	GetPosition(var_39_cvector); // 0x1cb Func
	GetEyesHeight(var_37_float); // 0x1cd Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1cf PushE
	var_47_float = var_47_float + var_37_float; // 0x1d0 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1d1 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1d2 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1d3 PushE
	var_48_float = 0; // 0x1d4 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1d5 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x1d6 Or
	var_50_float = sqrt(var_49_int); // 0x1d7 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1d8 Div2
	var_41_cvector = -var_40_cvector; // 0x1d9 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1da Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1db PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x1dc PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x1dd Xor2
	func_585(var_52_cvector, var_53_cvector); // 0x1de NEW_2
	var_60_int = 25; // 0x1e0 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x1e1 Mult
	var_62_int = var_51_float + var_61_float; // 0x1e2 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x1e3 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x1e4 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x1e5 Add2
	IsOverrideActive(var_44_bool); // 0x1e6 Func
	var_64_bool = var_44_bool; // 0x1e8 Push
	if(var_64_bool == 0) goto Label_492; // 0x1e9 JumpB
	var_25_bool = 0; // 0x1ea MovB
	return 18; // 0x1eb Return
	
Label_492:
	StopWorld(); // 0x1ec Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x1ee Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x1f0 PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x1f1 PushE
	Rotate(var_65_float, var_66_float); // 0x1f2 Func
	var_67_bool = 0; // 0x1f4 PushV
	func_644(var_67_bool); // 0x1f5 NEW_2
	if(var_67_bool == 0) goto Label_505; // 0x1f7 JumpB
	goto Label_513; // 0x1f8 Jump
	
Label_513:
	CameraWaitForPlayFinish(); // 0x201 Func
	ResumeWorld(); // 0x203 Func
	var_25_bool = 1; // 0x205 MovB
	return 18; // 0x206 Return
	
Label_505:
	var_68_string = "head"; // 0x1f9 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x1fa Func
	var_69_bool = var_45_bool; // 0x1fc Push
	if(var_69_bool == 0) goto Label_513; // 0x1fd JumpB
	var_70_string = "head"; // 0x1fe PushS
	LookAsyncCamera(var_70_string); // 0x1ff Func
}


func_519()
{
	var_139_bool = 0; var_140_bool = 0; // 0x207 PushV
	CameraSwitchToNormal(); // 0x208 Func
	var_141_bool = 0; // 0x20a PushV
	func_644(var_141_bool); // 0x20b NEW_2
	if(var_141_bool == 0) goto Label_527; // 0x20d JumpB
	goto Label_535; // 0x20e Jump
	
Label_535:
	return 2; // 0x217 Return
	
Label_527:
	var_142_string = "head"; // 0x20f PushS
	HasAnimationTrack(var_140_bool, var_142_string); // 0x210 Func
	var_143_bool = var_140_bool; // 0x212 Push
	if(var_143_bool == 0) goto Label_535; // 0x213 JumpB
	var_144_string = "head"; // 0x214 PushS
	UnlookAsync(var_144_string); // 0x215 Func
}


func_137(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x8a PushV
	func_644(var_93_bool); // 0x8b NEW_2
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
	func_552(var_96_string, var_97_bool); // 0x9b NEW_2
	var_2_object = var_92_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_97_bool = 1; // 0x9a MovB
}


func_585(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x249 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x24a Or
	var_56_float = sqrt(var_57_int); // 0x24b Sqrt2
	var_58_float = 0.0; // 0x24c PushF
	var_59_bool = var_56_float < var_58_float; // 0x24d LT
	if(var_59_bool == 0) goto Label_593; // 0x24e JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x24f MovV
	return 2; // 0x250 Return
	
Label_593:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x251 Div2
	return 2; // 0x252 Return
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
	var_109_int = 510591; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_int = 510592; // 0x59 PushI
	var_111_int = 11685; // 0x5a PushI
	var_112_int = 11684; // 0x5b PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x5c TObjFunc
	var_113_int = 510599; // 0x5e PushI
	var_114_int = 11685; // 0x5f PushI
	var_115_int = 11692; // 0x60 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x61 TObjFunc
	var_116_int = 510600; // 0x63 PushI
	var_117_int = -1; // 0x64 PushI
	var_118_int = 11694; // 0x65 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_119_bool = 0; // 0x6b PushV
	func_644(var_119_bool); // 0x6c NEW_2
	if(var_119_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_120_string = var_3_string; // 0x71 PushT
	if(var_120_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_121_string = ""; // 0x74 PushV
	var_121_string = var_2_object; // 0x75 MovT
	func_536(var_121_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_132_string = "all"; // 0x7a PushS
	var_133_string = "idle"; // 0x7b PushS
	PlayAnimation(var_132_string, var_133_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_134_string = var_3_string; // 0x80 PushT
	if(var_134_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_135_string = "all"; // 0x83 PushS
	var_136_string = "idle"; // 0x84 PushS
	PlayAnimation(var_135_string, var_136_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_638(var_72_int)
{
	var_72_int = 503341; // 0x27e MovI
	return 0; // 0x27f Return
}


func_273(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x112 PushV
	func_446(var_13_bool); // 0x113 NEW_2
	var_16_bool = var_13_bool == 0; // 0x115 Not
	if(var_16_bool == 0) goto Label_280; // 0x116 JumpB
	return 0; // 0x117 Return
	
Label_280:
	var_17_string = "player"; // 0x118 PushS
	FindActor(var_9_object, var_17_string); // 0x119 Func
	var_2_object = 0; // 0x11b TMovB
	var_3_string = 0; // 0x11c TMovB
	var_0_object = var_11_float; // 0x11d TMov
	var_1_object = var_12_float; // 0x11e TMov
	var_18_int = 10; // 0x11f PushI
	var_19_float = 1.0; // 0x120 PushF
	SetTimer(var_18_int, var_19_float); // 0x121 Func
	func_352(); // 0x124 NEW_2
	var_71_bool = var_3_string == 0; // 0x126 Not
	if(var_71_bool == 0) goto Label_299; // 0x127 JumpB
	var_72_int = 10; // 0x128 PushI
	KillTimer(var_72_int); // 0x129 Func
	
Label_299:
	return 0; // 0x12b Return
}


func_338(var_2_object, var_3_string)
{
	func_433(); // 0x153 NEW_2
	var_11_int = 10; // 0x155 PushI
	KillTimer(var_11_int); // 0x156 Func
	var_12_object = var_2_object; // 0x158 PushT
	if(var_12_object == 0) goto Label_350; // 0x159 JumpB
	var_13_string = "head"; // 0x15a PushS
	UnlookAsync(var_13_string); // 0x15b Func
	var_2_object = 0; // 0x15d TMovB
	
Label_350:
	var_3_string = 1; // 0x15e TMovB
	return 0; // 0x15f Return
}


func_595(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x253 PushV
	var_45_string = "idle"; // 0x254 MovS
	var_46_int = var_43_int; // 0x255 Push
	if(var_46_int == 0) goto Label_600; // 0x256 JumpB
	var_45_string = var_45_string + var_43_int; // 0x257 Add2
	
Label_600:
	var_42_string = var_45_string; // 0x258 Mov
	return 2; // 0x259 Return
}


func_536(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0; // 0x218 PushV
	lshHasAnimation(var_125_bool, var_121_string); // 0x219 Func
	var_128_bool = var_125_bool; // 0x21b Push
	if(var_128_bool == 0) goto Label_547; // 0x21c JumpB
	lshGetAnimTimes(var_121_string, var_126_float, var_127_float); // 0x21d Func
	var_129_bool = 0; // 0x21f PushB
	lshPlayAnimation(var_126_float, var_127_float, var_129_bool); // 0x220 Func
	goto Label_551; // 0x222 Jump
	
Label_551:
	return 6; // 0x227 Return
	
Label_547:
	var_130_string = "Can't find lsh animation : "; // 0x223 PushS
	var_131_int = var_130_string + var_121_string; // 0x224 Add
	Trace(var_131_int); // 0x225 Func
}


func_602(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x25a PushV
	var_39_int = 0; // 0x25b MovI
	
Label_604:
	var_41_string = "all"; // 0x25c PushS
	var_42_string = ""; var_43_int = 0; // 0x25d PushV
	var_43_int = var_39_int; // 0x25e Mov
	func_595(var_42_string, var_43_int); // 0x25f NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x261 Func
	var_47_bool = var_40_bool == 0; // 0x263 Not
	if(var_47_bool == 0) goto Label_614; // 0x264 JumpB
	goto Label_617; // 0x265 Jump
	
Label_617:
	var_36_int = var_39_int; // 0x269 Mov
	return 4; // 0x26a Return
	
Label_614:
	var_48_int = 1; // 0x266 PushI
	var_39_int = var_39_int + var_48_int; // 0x267 Add2
	goto Label_604; // 0x268 Jump
}


func_352()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x160 PushV
	WaitForAnimEnd(); // 0x161 Func
	var_34_bool = 0; // 0x163 PushV
	func_446(var_34_bool); // 0x164 NEW_2
	var_35_bool = var_34_bool == 0; // 0x166 Not
	if(var_35_bool == 0) goto Label_361; // 0x167 JumpB
	return 14; // 0x168 Return
	
Label_361:
	var_36_int = 0; // 0x169 PushV
	func_602(var_36_int); // 0x16a NEW_2
	var_27_int = var_36_int; // 0x16b Mov
	var_28_int = 0; // 0x16d MovI
	
Label_366:
	var_49_bool = 0; // 0x16e PushV
	var_49_bool = 0; // 0x16f MovB
	var_50_int = 5; // 0x170 PushI
	var_51_bool = var_28_int < var_50_int; // 0x171 LT
	if(var_51_bool == 0) goto Label_376; // 0x172 JumpB
	var_52_bool = 0; // 0x173 PushV
	func_446(var_52_bool); // 0x174 NEW_2
	if(var_52_bool == 0) goto Label_376; // 0x176 JumpB
	var_49_bool = 1; // 0x177 MovB
	
Label_376:
	if(var_49_bool == 0) goto Label_428; // 0x178 JumpB
	var_53_int = 3; // 0x179 PushI
	irand(var_29_int, var_53_int); // 0x17a Func
	var_54_int = 0; // 0x17c PushI
	var_55_bool = var_29_int == var_54_int; // 0x17d Eq
	if(var_55_bool == 0) goto Label_400; // 0x17e JumpB
	var_56_int = var_27_int; // 0x17f Push
	if(var_56_int == 0) goto Label_399; // 0x180 JumpB
	irand(var_30_int, var_27_int); // 0x181 Func
	var_57_string = "all"; // 0x183 PushS
	var_58_string = ""; var_59_int = 0; // 0x184 PushV
	var_59_int = var_30_int; // 0x185 Mov
	func_595(var_58_string, var_59_int); // 0x186 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x188 Func
	WaitForAnimEnd(var_31_bool); // 0x18a Func
	var_60_bool = var_31_bool == 0; // 0x18c Not
	if(var_60_bool == 0) goto Label_399; // 0x18d JumpB
	goto Label_428; // 0x18e Jump
	
Label_428:
	ResetAAS(); // 0x1ac Func
	return 14; // 0x1ae Return
	
Label_399:
	goto Label_417; // 0x18f Jump
	
Label_417:
	var_61_bool = 0; // 0x1a1 PushV
	func_431(var_61_bool); // 0x1a2 NEW_2
	var_62_bool = var_61_bool == 0; // 0x1a4 Not
	if(var_62_bool == 0) goto Label_423; // 0x1a5 JumpB
	goto Label_428; // 0x1a6 Jump
	
Label_423:
	ResetAAS(); // 0x1a7 Func
	var_63_int = 1; // 0x1a9 PushI
	var_28_int = var_28_int + var_63_int; // 0x1aa Add2
	goto Label_366; // 0x1ab Jump
	
Label_400:
	var_64_int = 1; // 0x190 PushI
	var_65_bool = var_29_int == var_64_int; // 0x191 Eq
	if(var_65_bool == 0) goto Label_414; // 0x192 JumpB
	var_66_int = 4; // 0x193 PushI
	rand(var_32_float, var_66_int); // 0x194 Func
	var_67_int = 1; // 0x196 PushI
	var_68_int = var_32_float + var_67_int; // 0x197 Add
	Sleep(var_68_int, var_33_bool); // 0x198 Func
	var_69_bool = var_33_bool == 0; // 0x19a Not
	if(var_69_bool == 0) goto Label_413; // 0x19b JumpB
	goto Label_428; // 0x19c Jump
	
Label_413:
	goto Label_417; // 0x19d Jump
	
Label_414:
	var_70_int = var_28_int; // 0x19e Push
	if(var_70_int == 0) goto Label_417; // 0x19f JumpB
	goto Label_428; // 0x1a0 Jump
}


func_552(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x228 PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x229 Func
	var_106_bool = var_103_bool; // 0x22b Push
	if(var_106_bool == 0) goto Label_562; // 0x22c JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x22d Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x22f Func
	goto Label_566; // 0x231 Jump
	
Label_566:
	return 6; // 0x236 Return
	
Label_562:
	var_107_string = "Can't find lsh animation : "; // 0x232 PushS
	var_108_int = var_107_string + var_96_string; // 0x233 Add
	Trace(var_108_int); // 0x234 Func
}


func_619(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x26b PushV
	var_79_string = "branch"; // 0x26c PushS
	GetVariable(var_79_string, var_78_int); // 0x26d Func
	var_80_int = 0; // 0x26f PushI
	var_81_bool = var_78_int == var_80_int; // 0x270 Eq
	if(var_81_bool == 0) goto Label_629; // 0x271 JumpB
	var_76_int = 1; // 0x272 MovI
	return 2; // 0x273 Return
	
Label_629:
	var_82_int = 1; // 0x275 PushI
	var_83_bool = var_78_int == var_82_int; // 0x276 Eq
	if(var_83_bool == 0) goto Label_634; // 0x277 JumpB
	var_76_int = 2; // 0x278 MovI
	return 2; // 0x279 Return
	
Label_634:
	var_76_int = 3; // 0x27a MovI
	return 2; // 0x27b Return
}


func_300(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x12c PushV
	var_16_bool = var_4_bool == 0; // 0x12d NullEq
	if(var_16_bool == 0) goto Label_305; // 0x12e JumpB
	var_13_bool = 0; // 0x12f MovB
	return 2; // 0x130 Return
	
Label_305:
	var_17_float = 0; var_18_object = Obj(); // 0x131 PushV
	var_18_object = var_4_bool; // 0x132 MovT
	func_438(var_18_object); // 0x133 NEW_2
	var_15_float = sqrt(var_17_float); // 0x135 Sqrt2
	var_25_object = var_2_object; // 0x136 PushT
	if(var_25_object == 0) goto Label_313; // 0x137 JumpB
	var_15_float = var_15_float - var_1_object; // 0x138 Sub2
	
Label_313:
	var_13_bool = var_15_float < var_0_object; // 0x139 LT2
	return 2; // 0x13a Return
}


func_431(var_61_bool)
{
	var_61_bool = 1; // 0x1af MovB
	return 0; // 0x1b0 Return
}


func_433()
{
	StopAnimation(); // 0x1b1 Func
	StopGroup0(); // 0x1b3 Func
	return 0; // 0x1b5 Return
}


func_438(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1b6 PushV
	GetPosition(var_22_cvector); // 0x1b7 Func
	GetPosition(var_23_cvector); // 0x1b9 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1bb Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1bc Or2
	return 6; // 0x1bd Return
}


func_567(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x237 PushV
	GetEyesHeight(var_30_float); // 0x238 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x23a MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x23b PushE
	var_32_float = var_30_float; // 0x23c Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x23d PopE
	var_33_string = "head"; // 0x23e PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x23f Func
	return 4; // 0x241 Return
}


func_636(var_73_int)
{
	var_73_int = 515556; // 0x27c MovI
	return 0; // 0x27d Return
}


func_446(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x1be PushV
	IsLoaded(var_15_bool); // 0x1bf Func
	var_13_bool = var_15_bool; // 0x1c1 Mov
	return 2; // 0x1c2 Return
}


