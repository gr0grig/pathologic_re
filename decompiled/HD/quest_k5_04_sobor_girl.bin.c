task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0x9b PushI
	if(var_12_int == 0) goto Label_195; // 0x9c JumpB
	func_524(); // 0x9e NEW_2
	var_14_int = 41383; // 0xa0 PushI
	var_15_bool = var_10_bool == var_14_int; // 0xa1 Eq
	if(var_15_bool == 0) goto Label_183; // 0xa2 JumpB
	var_16_string = ""; // 0xa3 PushV
	var_16_string = "Neutral"; // 0xa4 MovS
	func_132(var_11_object, var_16_string); // 0xa5 NEW_2
	var_33_int = 539452; // 0xa7 PushI
	SetMessage(var_33_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_34_int = 540736; // 0xac PushI
	var_35_int = -1; // 0xad PushI
	var_36_int = 42774; // 0xae PushI
	AddReply(var_34_int, var_35_int, var_36_int); // 0xaf TObjFunc
	var_37_int = 539453; // 0xb1 PushI
	var_38_int = -1; // 0xb2 PushI
	var_39_int = 41384; // 0xb3 PushI
	AddReply(var_37_int, var_38_int, var_39_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_3_string = 1; // 0xb7 TMovB
	var_40_bool = 0; // 0xb8 PushV
	func_590(var_40_bool); // 0xb9 NEW_2
	if(var_40_bool == 0) goto Label_191; // 0xbb JumpB
	lshStopAnimation(); // 0xbc Func
	goto Label_193; // 0xbe Jump
	
Label_193:
	return 0; // 0xc1 Return
	
Label_191:
	StopAnimation(); // 0xbf Func
	
Label_195:
	return 0; // 0xc3 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_282(var_9_object, var_10_object); // 0xd0 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0xd2 PushV
	var_15_object = var_10_object; // 0xd3 Mov
	TaskCall(0); // 0xd4 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0xd5 NEW_2
	TaskReturn(); // 0xd6 TaskReturn
	return 0; // 0xd8 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x104 PushI
	var_12_bool = var_10_int == var_11_int; // 0x105 Eq
	if(var_12_bool == 0) goto Label_281; // 0x106 JumpB
	var_13_bool = 0; // 0x107 PushV
	func_244(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x108 NEW_2
	if(var_13_bool == 0) goto Label_275; // 0x10a JumpB
	var_26_bool = var_2_object == 0; // 0x10b Not
	if(var_26_bool == 0) goto Label_274; // 0x10c JumpB
	var_27_object = Obj(); // 0x10d PushV
	var_27_object = var_4_bool; // 0x10e MovT
	func_513(var_27_object); // 0x10f NEW_2
	var_2_object = 1; // 0x111 TMovB
	
Label_274:
	goto Label_281; // 0x112 Jump
	
Label_281:
	return 0; // 0x119 Return
	
Label_275:
	var_34_object = var_2_object; // 0x113 PushT
	if(var_34_object == 0) goto Label_281; // 0x114 JumpB
	var_35_string = "head"; // 0x115 PushS
	UnlookAsync(var_35_string); // 0x116 Func
	var_2_object = 0; // 0x118 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_196:
	var_10_int = 1; // 0xc4 PushI
	Sleep(var_10_int); // 0xc5 Func
	var_11_float = 0; var_12_float = 0; // 0xc7 PushV
	var_11_float = 300; // 0xc8 MovI
	var_12_float = 100; // 0xc9 MovI
	func_217(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0xca NEW_2
	goto Label_196; // 0xcc Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_395(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_584(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_582(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_586(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_588(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_565(var_77_int); // 0x22 NEW_2
	SetPlayerName(var_77_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_85_bool = var_22_bool; // 0x29 Push
	if(var_85_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x2f PushV
	var_86_object = var_15_object; // 0x30 Mov
	var_87_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_135_bool = var_24_bool == 0; // 0x38 Not
	if(var_135_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_136_object = Obj(); // 0x3f PushV
	var_136_object = var_15_object; // 0x40 Mov
	func_464(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_513(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x201 PushV
	GetEyesHeight(var_30_float); // 0x202 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x204 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x205 PushE
	var_32_float = var_30_float; // 0x206 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x207 PopE
	var_33_string = "head"; // 0x208 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x209 Func
	return 4; // 0x20b Return
}


func_132(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x85 PushV
	func_590(var_94_bool); // 0x86 NEW_2
	var_95_bool = var_94_bool == 0; // 0x88 Not
	if(var_95_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_96_bool = var_93_string == var_2_object; // 0x8b Eq
	if(var_96_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_97_string = ""; var_98_bool = 0; // 0x8e PushV
	var_97_string = var_93_string; // 0x8f Mov
	var_99_string = ""; // 0x90 PushS
	var_100_bool = var_93_string == var_99_string; // 0x91 Eq
	if(var_100_bool == 0) goto Label_149; // 0x92 JumpB
	var_98_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_498(var_97_string, var_98_bool); // 0x96 NEW_2
	var_2_object = var_93_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_98_bool = 1; // 0x95 MovB
}


func_390(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x186 PushV
	IsLoaded(var_15_bool); // 0x187 Func
	var_13_bool = var_15_bool; // 0x189 Mov
	return 2; // 0x18a Return
}


func_582(var_74_int)
{
	var_74_int = 515559; // 0x246 MovI
	return 0; // 0x247 Return
}


func_584(var_73_int)
{
	var_73_int = 503344; // 0x248 MovI
	return 0; // 0x249 Return
}


func_586(var_75_string)
{
	var_75_string = "ui/NPC_Citizen1.png"; // 0x24a MovS
	return 0; // 0x24b Return
}


func_395(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x18b PushV
	GetPosition(var_38_cvector); // 0x18c ObjFunc
	GetEyesHeight(var_37_float); // 0x18e ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x190 PushE
	var_46_float = var_46_float + var_37_float; // 0x191 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x192 PopE
	GetPosition(var_39_cvector); // 0x193 Func
	GetEyesHeight(var_37_float); // 0x195 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x197 PushE
	var_47_float = var_47_float + var_37_float; // 0x198 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x199 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x19a Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x19b PushE
	var_48_float = 0; // 0x19c MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x19d PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x19e Or
	var_50_float = sqrt(var_49_int); // 0x19f Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1a0 Div2
	var_41_cvector = -var_40_cvector; // 0x1a1 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1a2 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1a3 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x1a4 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x1a5 Xor2
	func_531(var_52_cvector, var_53_cvector); // 0x1a6 NEW_2
	var_60_int = 25; // 0x1a8 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x1a9 Mult
	var_62_int = var_51_float + var_61_float; // 0x1aa Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x1ab PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x1ac Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x1ad Add2
	IsOverrideActive(var_44_bool); // 0x1ae Func
	var_64_bool = var_44_bool; // 0x1b0 Push
	if(var_64_bool == 0) goto Label_436; // 0x1b1 JumpB
	var_25_bool = 0; // 0x1b2 MovB
	return 18; // 0x1b3 Return
	
Label_436:
	StopWorld(); // 0x1b4 Func
	var_65_bool = 1; // 0x1b6 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x1b7 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x1b9 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x1ba PushE
	Rotate(var_66_float, var_67_float); // 0x1bb Func
	var_68_bool = 0; // 0x1bd PushV
	func_590(var_68_bool); // 0x1be NEW_2
	if(var_68_bool == 0) goto Label_450; // 0x1c0 JumpB
	goto Label_458; // 0x1c1 Jump
	
Label_458:
	CameraWaitForPlayFinish(); // 0x1ca Func
	ResumeWorld(); // 0x1cc Func
	var_25_bool = 1; // 0x1ce MovB
	return 18; // 0x1cf Return
	
Label_450:
	var_69_string = "head"; // 0x1c2 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x1c3 Func
	var_70_bool = var_45_bool; // 0x1c5 Push
	if(var_70_bool == 0) goto Label_458; // 0x1c6 JumpB
	var_71_string = "head"; // 0x1c7 PushS
	LookAsyncCamera(var_71_string); // 0x1c8 Func
}


func_524()
{
	var_13_bool = 0; // 0x20c PushV
	func_590(var_13_bool); // 0x20d NEW_2
	if(var_13_bool == 0) goto Label_530; // 0x20f JumpB
	lshStopSpeech(); // 0x210 Func
	
Label_530:
	return 0; // 0x212 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_102; // 0x4f JumpB
	var_93_string = ""; // 0x50 PushV
	var_93_string = "Neutral"; // 0x51 MovS
	func_132(var_87_object, var_93_string); // 0x52 NEW_2
	var_110_int = 539452; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_int = 540736; // 0x59 PushI
	var_112_int = -1; // 0x5a PushI
	var_113_int = 42774; // 0x5b PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x5c TObjFunc
	var_114_int = 539453; // 0x5e PushI
	var_115_int = -1; // 0x5f PushI
	var_116_int = 41384; // 0x60 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_117_bool = 0; // 0x66 PushV
	func_590(var_117_bool); // 0x67 NEW_2
	if(var_117_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_118_string = var_3_string; // 0x6c PushT
	if(var_118_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_119_string = ""; // 0x6f PushV
	var_119_string = var_2_object; // 0x70 MovT
	func_482(var_119_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_130_string = "all"; // 0x75 PushS
	var_131_string = "idle"; // 0x76 PushS
	PlayAnimation(var_130_string, var_131_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_132_string = var_3_string; // 0x7b PushT
	if(var_132_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_133_string = "all"; // 0x7e PushS
	var_134_string = "idle"; // 0x7f PushS
	PlayAnimation(var_133_string, var_134_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_588(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1_b.png"; // 0x24c MovS
	return 0; // 0x24d Return
}


func_590(var_68_bool)
{
	var_68_bool = 0; // 0x24e MovB
	return 0; // 0x24f Return
}


func_464()
{
	var_137_bool = 0; var_138_bool = 0; // 0x1d0 PushV
	var_139_bool = 1; // 0x1d1 PushB
	CameraSwitchToNormal(var_139_bool); // 0x1d2 Func
	var_140_bool = 0; // 0x1d4 PushV
	func_590(var_140_bool); // 0x1d5 NEW_2
	if(var_140_bool == 0) goto Label_473; // 0x1d7 JumpB
	goto Label_481; // 0x1d8 Jump
	
Label_481:
	return 2; // 0x1e1 Return
	
Label_473:
	var_141_string = "head"; // 0x1d9 PushS
	HasAnimationTrack(var_138_bool, var_141_string); // 0x1da Func
	var_142_bool = var_138_bool; // 0x1dc Push
	if(var_142_bool == 0) goto Label_481; // 0x1dd JumpB
	var_143_string = "head"; // 0x1de PushS
	UnlookAsync(var_143_string); // 0x1df Func
}


func_531(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x213 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x214 Or
	var_56_float = sqrt(var_57_int); // 0x215 Sqrt2
	var_58_float = 0.0; // 0x216 PushF
	var_59_bool = var_56_float < var_58_float; // 0x217 LT
	if(var_59_bool == 0) goto Label_539; // 0x218 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x219 MovV
	return 2; // 0x21a Return
	
Label_539:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x21b Div2
	return 2; // 0x21c Return
}


func_217(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0xda PushV
	func_390(var_13_bool); // 0xdb NEW_2
	var_16_bool = var_13_bool == 0; // 0xdd Not
	if(var_16_bool == 0) goto Label_224; // 0xde JumpB
	return 0; // 0xdf Return
	
Label_224:
	var_17_string = "player"; // 0xe0 PushS
	FindActor(var_9_object, var_17_string); // 0xe1 Func
	var_2_object = 0; // 0xe3 TMovB
	var_3_string = 0; // 0xe4 TMovB
	var_0_object = var_11_float; // 0xe5 TMov
	var_1_object = var_12_float; // 0xe6 TMov
	var_18_int = 10; // 0xe7 PushI
	var_19_float = 1.0; // 0xe8 PushF
	SetTimer(var_18_int, var_19_float); // 0xe9 Func
	func_296(); // 0xec NEW_2
	var_71_bool = var_3_string == 0; // 0xee Not
	if(var_71_bool == 0) goto Label_243; // 0xef JumpB
	var_72_int = 10; // 0xf0 PushI
	KillTimer(var_72_int); // 0xf1 Func
	
Label_243:
	return 0; // 0xf3 Return
}


func_282(var_2_object, var_3_string)
{
	func_377(); // 0x11b NEW_2
	var_11_int = 10; // 0x11d PushI
	KillTimer(var_11_int); // 0x11e Func
	var_12_object = var_2_object; // 0x120 PushT
	if(var_12_object == 0) goto Label_294; // 0x121 JumpB
	var_13_string = "head"; // 0x122 PushS
	UnlookAsync(var_13_string); // 0x123 Func
	var_2_object = 0; // 0x125 TMovB
	
Label_294:
	var_3_string = 1; // 0x126 TMovB
	return 0; // 0x127 Return
}


func_541(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x21d PushV
	var_45_string = "idle"; // 0x21e MovS
	var_46_int = var_43_int; // 0x21f Push
	if(var_46_int == 0) goto Label_546; // 0x220 JumpB
	var_45_string = var_45_string + var_43_int; // 0x221 Add2
	
Label_546:
	var_42_string = var_45_string; // 0x222 Mov
	return 2; // 0x223 Return
}


func_482(var_119_string)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0; // 0x1e2 PushV
	lshHasAnimation(var_123_bool, var_119_string); // 0x1e3 Func
	var_126_bool = var_123_bool; // 0x1e5 Push
	if(var_126_bool == 0) goto Label_493; // 0x1e6 JumpB
	lshGetAnimTimes(var_119_string, var_124_float, var_125_float); // 0x1e7 Func
	var_127_bool = 0; // 0x1e9 PushB
	lshPlayAnimation(var_124_float, var_125_float, var_127_bool); // 0x1ea Func
	goto Label_497; // 0x1ec Jump
	
Label_497:
	return 6; // 0x1f1 Return
	
Label_493:
	var_128_string = "Can't find lsh animation : "; // 0x1ed PushS
	var_129_int = var_128_string + var_119_string; // 0x1ee Add
	Trace(var_129_int); // 0x1ef Func
}


func_548(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x224 PushV
	var_39_int = 0; // 0x225 MovI
	
Label_550:
	var_41_string = "all"; // 0x226 PushS
	var_42_string = ""; var_43_int = 0; // 0x227 PushV
	var_43_int = var_39_int; // 0x228 Mov
	func_541(var_42_string, var_43_int); // 0x229 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x22b Func
	var_47_bool = var_40_bool == 0; // 0x22d Not
	if(var_47_bool == 0) goto Label_560; // 0x22e JumpB
	goto Label_563; // 0x22f Jump
	
Label_563:
	var_36_int = var_39_int; // 0x233 Mov
	return 4; // 0x234 Return
	
Label_560:
	var_48_int = 1; // 0x230 PushI
	var_39_int = var_39_int + var_48_int; // 0x231 Add2
	goto Label_550; // 0x232 Jump
}


func_296()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x128 PushV
	WaitForAnimEnd(); // 0x129 Func
	var_34_bool = 0; // 0x12b PushV
	func_390(var_34_bool); // 0x12c NEW_2
	var_35_bool = var_34_bool == 0; // 0x12e Not
	if(var_35_bool == 0) goto Label_305; // 0x12f JumpB
	return 14; // 0x130 Return
	
Label_305:
	var_36_int = 0; // 0x131 PushV
	func_548(var_36_int); // 0x132 NEW_2
	var_27_int = var_36_int; // 0x133 Mov
	var_28_int = 0; // 0x135 MovI
	
Label_310:
	var_49_bool = 0; // 0x136 PushV
	var_49_bool = 0; // 0x137 MovB
	var_50_int = 5; // 0x138 PushI
	var_51_bool = var_28_int < var_50_int; // 0x139 LT
	if(var_51_bool == 0) goto Label_320; // 0x13a JumpB
	var_52_bool = 0; // 0x13b PushV
	func_390(var_52_bool); // 0x13c NEW_2
	if(var_52_bool == 0) goto Label_320; // 0x13e JumpB
	var_49_bool = 1; // 0x13f MovB
	
Label_320:
	if(var_49_bool == 0) goto Label_372; // 0x140 JumpB
	var_53_int = 3; // 0x141 PushI
	irand(var_29_int, var_53_int); // 0x142 Func
	var_54_int = 0; // 0x144 PushI
	var_55_bool = var_29_int == var_54_int; // 0x145 Eq
	if(var_55_bool == 0) goto Label_344; // 0x146 JumpB
	var_56_int = var_27_int; // 0x147 Push
	if(var_56_int == 0) goto Label_343; // 0x148 JumpB
	irand(var_30_int, var_27_int); // 0x149 Func
	var_57_string = "all"; // 0x14b PushS
	var_58_string = ""; var_59_int = 0; // 0x14c PushV
	var_59_int = var_30_int; // 0x14d Mov
	func_541(var_58_string, var_59_int); // 0x14e NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x150 Func
	WaitForAnimEnd(var_31_bool); // 0x152 Func
	var_60_bool = var_31_bool == 0; // 0x154 Not
	if(var_60_bool == 0) goto Label_343; // 0x155 JumpB
	goto Label_372; // 0x156 Jump
	
Label_372:
	ResetAAS(); // 0x174 Func
	return 14; // 0x176 Return
	
Label_343:
	goto Label_361; // 0x157 Jump
	
Label_361:
	var_61_bool = 0; // 0x169 PushV
	func_375(var_61_bool); // 0x16a NEW_2
	var_62_bool = var_61_bool == 0; // 0x16c Not
	if(var_62_bool == 0) goto Label_367; // 0x16d JumpB
	goto Label_372; // 0x16e Jump
	
Label_367:
	ResetAAS(); // 0x16f Func
	var_63_int = 1; // 0x171 PushI
	var_28_int = var_28_int + var_63_int; // 0x172 Add2
	goto Label_310; // 0x173 Jump
	
Label_344:
	var_64_int = 1; // 0x158 PushI
	var_65_bool = var_29_int == var_64_int; // 0x159 Eq
	if(var_65_bool == 0) goto Label_358; // 0x15a JumpB
	var_66_int = 4; // 0x15b PushI
	rand(var_32_float, var_66_int); // 0x15c Func
	var_67_int = 1; // 0x15e PushI
	var_68_int = var_32_float + var_67_int; // 0x15f Add
	Sleep(var_68_int, var_33_bool); // 0x160 Func
	var_69_bool = var_33_bool == 0; // 0x162 Not
	if(var_69_bool == 0) goto Label_357; // 0x163 JumpB
	goto Label_372; // 0x164 Jump
	
Label_357:
	goto Label_361; // 0x165 Jump
	
Label_358:
	var_70_int = var_28_int; // 0x166 Push
	if(var_70_int == 0) goto Label_361; // 0x167 JumpB
	goto Label_372; // 0x168 Jump
}


func_498(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x1f2 PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x1f3 Func
	var_107_bool = var_104_bool; // 0x1f5 Push
	if(var_107_bool == 0) goto Label_508; // 0x1f6 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x1f7 Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x1f9 Func
	goto Label_512; // 0x1fb Jump
	
Label_512:
	return 6; // 0x200 Return
	
Label_508:
	var_108_string = "Can't find lsh animation : "; // 0x1fc PushS
	var_109_int = var_108_string + var_97_string; // 0x1fd Add
	Trace(var_109_int); // 0x1fe Func
}


func_244(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0xf4 PushV
	var_16_bool = var_4_bool == 0; // 0xf5 NullEq
	if(var_16_bool == 0) goto Label_249; // 0xf6 JumpB
	var_13_bool = 0; // 0xf7 MovB
	return 2; // 0xf8 Return
	
Label_249:
	var_17_float = 0; var_18_object = Obj(); // 0xf9 PushV
	var_18_object = var_4_bool; // 0xfa MovT
	func_382(var_18_object); // 0xfb NEW_2
	var_15_float = sqrt(var_17_float); // 0xfd Sqrt2
	var_25_object = var_2_object; // 0xfe PushT
	if(var_25_object == 0) goto Label_257; // 0xff JumpB
	var_15_float = var_15_float - var_1_object; // 0x100 Sub2
	
Label_257:
	var_13_bool = var_15_float < var_0_object; // 0x101 LT2
	return 2; // 0x102 Return
}


func_565(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x235 PushV
	var_80_string = "branch"; // 0x236 PushS
	GetVariable(var_80_string, var_79_int); // 0x237 Func
	var_81_int = 0; // 0x239 PushI
	var_82_bool = var_79_int == var_81_int; // 0x23a Eq
	if(var_82_bool == 0) goto Label_575; // 0x23b JumpB
	var_77_int = 1; // 0x23c MovI
	return 2; // 0x23d Return
	
Label_575:
	var_83_int = 1; // 0x23f PushI
	var_84_bool = var_79_int == var_83_int; // 0x240 Eq
	if(var_84_bool == 0) goto Label_580; // 0x241 JumpB
	var_77_int = 2; // 0x242 MovI
	return 2; // 0x243 Return
	
Label_580:
	var_77_int = 3; // 0x244 MovI
	return 2; // 0x245 Return
}


func_375(var_61_bool)
{
	var_61_bool = 1; // 0x177 MovB
	return 0; // 0x178 Return
}


func_377()
{
	StopAnimation(); // 0x179 Func
	StopGroup0(); // 0x17b Func
	return 0; // 0x17d Return
}


func_382(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x17e PushV
	GetPosition(var_22_cvector); // 0x17f Func
	GetPosition(var_23_cvector); // 0x181 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x183 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x184 Or2
	return 6; // 0x185 Return
}


