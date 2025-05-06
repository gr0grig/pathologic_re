task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0x9b PushI
	if(var_12_int == 0) goto Label_203; // 0x9c JumpB
	func_529(); // 0x9e NEW_2
	var_14_int = 40713; // 0xa0 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa1 Eq
	if(var_15_bool == 0) goto Label_168; // 0xa2 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa3 PushV
	var_16_object = var_1_object; // 0xa4 MovT
	var_17_object = var_0_object; // 0xa5 MovT
	func_592(); // 0xa6 NEW_2
	
Label_168:
	var_24_int = 40712; // 0xa8 PushI
	var_25_bool = var_10_bool == var_24_int; // 0xa9 Eq
	if(var_25_bool == 0) goto Label_191; // 0xaa JumpB
	var_26_string = ""; // 0xab PushV
	var_26_string = "Neutral"; // 0xac MovS
	func_132(var_11_object, var_26_string); // 0xad NEW_2
	var_43_int = 538795; // 0xaf PushI
	SetMessage(var_43_int); // 0xb0 TObjFunc
	ClearReplies(); // 0xb2 TObjFunc
	var_44_int = 538796; // 0xb4 PushI
	var_45_int = -1; // 0xb5 PushI
	var_46_int = 40713; // 0xb6 PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xb7 TObjFunc
	var_47_int = 538805; // 0xb9 PushI
	var_48_int = -1; // 0xba PushI
	var_49_int = 40723; // 0xbb PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xbc TObjFunc
	return 0; // 0xbe Return
	
Label_191:
	var_3_string = 1; // 0xbf TMovB
	var_50_bool = 0; // 0xc0 PushV
	func_590(var_50_bool); // 0xc1 NEW_2
	if(var_50_bool == 0) goto Label_199; // 0xc3 JumpB
	lshStopAnimation(); // 0xc4 Func
	goto Label_201; // 0xc6 Jump
	
Label_201:
	return 0; // 0xc9 Return
	
Label_199:
	StopAnimation(); // 0xc7 Func
	
Label_203:
	return 0; // 0xcb Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_289(var_9_object, var_10_object); // 0xd7 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0xd9 PushV
	var_15_object = var_10_object; // 0xda Mov
	TaskCall(0); // 0xdb TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0xdc NEW_2
	TaskReturn(); // 0xdd TaskReturn
	return 0; // 0xdf Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x10b PushI
	var_12_bool = var_10_int == var_11_int; // 0x10c Eq
	if(var_12_bool == 0) goto Label_288; // 0x10d JumpB
	var_13_bool = 0; // 0x10e PushV
	func_251(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x10f NEW_2
	if(var_13_bool == 0) goto Label_282; // 0x111 JumpB
	var_26_bool = var_2_object == 0; // 0x112 Not
	if(var_26_bool == 0) goto Label_281; // 0x113 JumpB
	var_27_object = Obj(); // 0x114 PushV
	var_27_object = var_4_bool; // 0x115 MovT
	func_518(var_27_object); // 0x116 NEW_2
	var_2_object = 1; // 0x118 TMovB
	
Label_281:
	goto Label_288; // 0x119 Jump
	
Label_288:
	return 0; // 0x120 Return
	
Label_282:
	var_34_object = var_2_object; // 0x11a PushT
	if(var_34_object == 0) goto Label_288; // 0x11b JumpB
	var_35_string = "head"; // 0x11c PushS
	UnlookAsync(var_35_string); // 0x11d Func
	var_2_object = 0; // 0x11f TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_204:
	var_10_bool = 1; // 0xcc PushB
	if(var_10_bool == 0) goto Label_212; // 0xcd JumpB
	var_11_float = 0; var_12_float = 0; // 0xce PushV
	var_11_float = 300; // 0xcf MovI
	var_12_float = 100; // 0xd0 MovI
	func_224(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0xd1 NEW_2
	goto Label_204; // 0xd3 Jump
	
Label_212:
	return 0; // 0xd4 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_402(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_584(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_582(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_586(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_588(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_599(var_76_int); // 0x22 NEW_2
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
	var_134_bool = var_24_bool == 0; // 0x38 Not
	if(var_134_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_135_object = Obj(); // 0x3f PushV
	var_135_object = var_15_object; // 0x40 Mov
	func_470(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_384()
{
	StopAnimation(); // 0x180 Func
	StopGroup0(); // 0x182 Func
	return 0; // 0x184 Return
}


func_132(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x85 PushV
	func_590(var_93_bool); // 0x86 NEW_2
	var_94_bool = var_93_bool == 0; // 0x88 Not
	if(var_94_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_95_bool = var_92_string == var_2_object; // 0x8b Eq
	if(var_95_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_96_string = ""; var_97_bool = 0; // 0x8e PushV
	var_96_string = var_92_string; // 0x8f Mov
	var_98_string = ""; // 0x90 PushS
	var_99_bool = var_92_string == var_98_string; // 0x91 Eq
	if(var_99_bool == 0) goto Label_149; // 0x92 JumpB
	var_97_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_503(var_96_string, var_97_bool); // 0x96 NEW_2
	var_2_object = var_92_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_97_bool = 1; // 0x95 MovB
}


func_389(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x185 PushV
	GetPosition(var_22_cvector); // 0x186 Func
	GetPosition(var_23_cvector); // 0x188 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x18a Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x18b Or2
	return 6; // 0x18c Return
}


func_518(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x206 PushV
	GetEyesHeight(var_30_float); // 0x207 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x209 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x20a PushE
	var_32_float = var_30_float; // 0x20b Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x20c PopE
	var_33_string = "head"; // 0x20d PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x20e Func
	return 4; // 0x210 Return
}


func_582(var_73_int)
{
	var_73_int = 518097; // 0x246 MovI
	return 0; // 0x247 Return
}


func_584(var_72_int)
{
	var_72_int = 518096; // 0x248 MovI
	return 0; // 0x249 Return
}


func_586(var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png"; // 0x24a MovS
	return 0; // 0x24b Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_102; // 0x4f JumpB
	var_92_string = ""; // 0x50 PushV
	var_92_string = "Neutral"; // 0x51 MovS
	func_132(var_86_object, var_92_string); // 0x52 NEW_2
	var_109_int = 538795; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_int = 538796; // 0x59 PushI
	var_111_int = -1; // 0x5a PushI
	var_112_int = 40713; // 0x5b PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x5c TObjFunc
	var_113_int = 538805; // 0x5e PushI
	var_114_int = -1; // 0x5f PushI
	var_115_int = 40723; // 0x60 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_116_bool = 0; // 0x66 PushV
	func_590(var_116_bool); // 0x67 NEW_2
	if(var_116_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_117_string = var_3_string; // 0x6c PushT
	if(var_117_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_118_string = ""; // 0x6f PushV
	var_118_string = var_2_object; // 0x70 MovT
	func_487(var_118_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_129_string = "all"; // 0x75 PushS
	var_130_string = "idle"; // 0x76 PushS
	PlayAnimation(var_129_string, var_130_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_131_string = var_3_string; // 0x7b PushT
	if(var_131_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_132_string = "all"; // 0x7e PushS
	var_133_string = "idle"; // 0x7f PushS
	PlayAnimation(var_132_string, var_133_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_588(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png"; // 0x24c MovS
	return 0; // 0x24d Return
}


func_397(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x18d PushV
	IsLoaded(var_15_bool); // 0x18e Func
	var_13_bool = var_15_bool; // 0x190 Mov
	return 2; // 0x191 Return
}


func_590(var_67_bool)
{
	var_67_bool = 0; // 0x24e MovB
	return 0; // 0x24f Return
}


func_592()
{
	var_18_bool = 0; var_19_string = ""; var_20_string = ""; // 0x251 PushV
	var_19_string = "quest_d11_05"; // 0x252 MovS
	var_20_string = "teleport"; // 0x253 MovS
	func_546(var_18_bool, var_19_string, var_20_string); // 0x254 NEW_2
	return 0; // 0x256 Return
}


func_529()
{
	var_13_bool = 0; // 0x211 PushV
	func_590(var_13_bool); // 0x212 NEW_2
	if(var_13_bool == 0) goto Label_535; // 0x214 JumpB
	lshStopSpeech(); // 0x215 Func
	
Label_535:
	return 0; // 0x217 Return
}


func_402(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x192 PushV
	GetPosition(var_38_cvector); // 0x193 ObjFunc
	GetEyesHeight(var_37_float); // 0x195 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x197 PushE
	var_46_float = var_46_float + var_37_float; // 0x198 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x199 PopE
	GetPosition(var_39_cvector); // 0x19a Func
	GetEyesHeight(var_37_float); // 0x19c Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x19e PushE
	var_47_float = var_47_float + var_37_float; // 0x19f Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1a0 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1a1 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1a2 PushE
	var_48_float = 0; // 0x1a3 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1a4 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x1a5 Or
	var_50_float = sqrt(var_49_int); // 0x1a6 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1a7 Div2
	var_41_cvector = -var_40_cvector; // 0x1a8 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1a9 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1aa PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x1ab PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x1ac Xor2
	func_536(var_52_cvector, var_53_cvector); // 0x1ad NEW_2
	var_60_int = 25; // 0x1af PushI
	var_61_float = var_52_cvector * var_60_int; // 0x1b0 Mult
	var_62_int = var_51_float + var_61_float; // 0x1b1 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x1b2 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x1b3 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x1b4 Add2
	IsOverrideActive(var_44_bool); // 0x1b5 Func
	var_64_bool = var_44_bool; // 0x1b7 Push
	if(var_64_bool == 0) goto Label_443; // 0x1b8 JumpB
	var_25_bool = 0; // 0x1b9 MovB
	return 18; // 0x1ba Return
	
Label_443:
	StopWorld(); // 0x1bb Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x1bd Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x1bf PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x1c0 PushE
	Rotate(var_65_float, var_66_float); // 0x1c1 Func
	var_67_bool = 0; // 0x1c3 PushV
	func_590(var_67_bool); // 0x1c4 NEW_2
	if(var_67_bool == 0) goto Label_456; // 0x1c6 JumpB
	goto Label_464; // 0x1c7 Jump
	
Label_464:
	CameraWaitForPlayFinish(); // 0x1d0 Func
	ResumeWorld(); // 0x1d2 Func
	var_25_bool = 1; // 0x1d4 MovB
	return 18; // 0x1d5 Return
	
Label_456:
	var_68_string = "head"; // 0x1c8 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x1c9 Func
	var_69_bool = var_45_bool; // 0x1cb Push
	if(var_69_bool == 0) goto Label_464; // 0x1cc JumpB
	var_70_string = "head"; // 0x1cd PushS
	LookAsyncCamera(var_70_string); // 0x1ce Func
}


func_470()
{
	var_136_bool = 0; var_137_bool = 0; // 0x1d6 PushV
	CameraSwitchToNormal(); // 0x1d7 Func
	var_138_bool = 0; // 0x1d9 PushV
	func_590(var_138_bool); // 0x1da NEW_2
	if(var_138_bool == 0) goto Label_478; // 0x1dc JumpB
	goto Label_486; // 0x1dd Jump
	
Label_486:
	return 2; // 0x1e6 Return
	
Label_478:
	var_139_string = "head"; // 0x1de PushS
	HasAnimationTrack(var_137_bool, var_139_string); // 0x1df Func
	var_140_bool = var_137_bool; // 0x1e1 Push
	if(var_140_bool == 0) goto Label_486; // 0x1e2 JumpB
	var_141_string = "head"; // 0x1e3 PushS
	UnlookAsync(var_141_string); // 0x1e4 Func
}


func_599(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x257 PushV
	var_79_string = "branch"; // 0x258 PushS
	GetVariable(var_79_string, var_78_int); // 0x259 Func
	var_80_int = 0; // 0x25b PushI
	var_81_bool = var_78_int == var_80_int; // 0x25c Eq
	if(var_81_bool == 0) goto Label_609; // 0x25d JumpB
	var_76_int = 1; // 0x25e MovI
	return 2; // 0x25f Return
	
Label_609:
	var_82_int = 1; // 0x261 PushI
	var_83_bool = var_78_int == var_82_int; // 0x262 Eq
	if(var_83_bool == 0) goto Label_614; // 0x263 JumpB
	var_76_int = 2; // 0x264 MovI
	return 2; // 0x265 Return
	
Label_614:
	var_76_int = 3; // 0x266 MovI
	return 2; // 0x267 Return
}


func_536(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x218 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x219 Or
	var_56_float = sqrt(var_57_int); // 0x21a Sqrt2
	var_58_float = 0.0; // 0x21b PushF
	var_59_bool = var_56_float < var_58_float; // 0x21c LT
	if(var_59_bool == 0) goto Label_544; // 0x21d JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x21e MovV
	return 2; // 0x21f Return
	
Label_544:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x220 Div2
	return 2; // 0x221 Return
}


func_224(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0xe1 PushV
	func_397(var_13_bool); // 0xe2 NEW_2
	var_16_bool = var_13_bool == 0; // 0xe4 Not
	if(var_16_bool == 0) goto Label_231; // 0xe5 JumpB
	return 0; // 0xe6 Return
	
Label_231:
	var_17_string = "player"; // 0xe7 PushS
	FindActor(var_9_object, var_17_string); // 0xe8 Func
	var_2_object = 0; // 0xea TMovB
	var_3_string = 0; // 0xeb TMovB
	var_0_object = var_11_float; // 0xec TMov
	var_1_object = var_12_float; // 0xed TMov
	var_18_int = 10; // 0xee PushI
	var_19_float = 1.0; // 0xef PushF
	SetTimer(var_18_int, var_19_float); // 0xf0 Func
	func_303(); // 0xf3 NEW_2
	var_71_bool = var_3_string == 0; // 0xf5 Not
	if(var_71_bool == 0) goto Label_250; // 0xf6 JumpB
	var_72_int = 10; // 0xf7 PushI
	KillTimer(var_72_int); // 0xf8 Func
	
Label_250:
	return 0; // 0xfa Return
}


func_289(var_2_object, var_3_string)
{
	func_384(); // 0x122 NEW_2
	var_11_int = 10; // 0x124 PushI
	KillTimer(var_11_int); // 0x125 Func
	var_12_object = var_2_object; // 0x127 PushT
	if(var_12_object == 0) goto Label_301; // 0x128 JumpB
	var_13_string = "head"; // 0x129 PushS
	UnlookAsync(var_13_string); // 0x12a Func
	var_2_object = 0; // 0x12c TMovB
	
Label_301:
	var_3_string = 1; // 0x12d TMovB
	return 0; // 0x12e Return
}


func_546(var_18_bool, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x222 PushV
	FindActor(var_22_object, var_19_string); // 0x223 Func
	var_23_bool = var_22_object == 0; // 0x225 NullEq
	if(var_23_bool == 0) goto Label_553; // 0x226 JumpB
	var_18_bool = 0; // 0x227 MovB
	return 2; // 0x228 Return
	
Label_553:
	Trigger(var_22_object, var_20_string); // 0x229 Func
	var_18_bool = 1; // 0x22b MovB
	return 2; // 0x22c Return
}


func_487(var_118_string)
{
	var_119_bool = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_float = 0; // 0x1e7 PushV
	lshHasAnimation(var_122_bool, var_118_string); // 0x1e8 Func
	var_125_bool = var_122_bool; // 0x1ea Push
	if(var_125_bool == 0) goto Label_498; // 0x1eb JumpB
	lshGetAnimTimes(var_118_string, var_123_float, var_124_float); // 0x1ec Func
	var_126_bool = 0; // 0x1ee PushB
	lshPlayAnimation(var_123_float, var_124_float, var_126_bool); // 0x1ef Func
	goto Label_502; // 0x1f1 Jump
	
Label_502:
	return 6; // 0x1f6 Return
	
Label_498:
	var_127_string = "Can't find lsh animation : "; // 0x1f2 PushS
	var_128_int = var_127_string + var_118_string; // 0x1f3 Add
	Trace(var_128_int); // 0x1f4 Func
}


func_558(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x22e PushV
	var_45_string = "idle"; // 0x22f MovS
	var_46_int = var_43_int; // 0x230 Push
	if(var_46_int == 0) goto Label_563; // 0x231 JumpB
	var_45_string = var_45_string + var_43_int; // 0x232 Add2
	
Label_563:
	var_42_string = var_45_string; // 0x233 Mov
	return 2; // 0x234 Return
}


func_303()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x12f PushV
	WaitForAnimEnd(); // 0x130 Func
	var_34_bool = 0; // 0x132 PushV
	func_397(var_34_bool); // 0x133 NEW_2
	var_35_bool = var_34_bool == 0; // 0x135 Not
	if(var_35_bool == 0) goto Label_312; // 0x136 JumpB
	return 14; // 0x137 Return
	
Label_312:
	var_36_int = 0; // 0x138 PushV
	func_565(var_36_int); // 0x139 NEW_2
	var_27_int = var_36_int; // 0x13a Mov
	var_28_int = 0; // 0x13c MovI
	
Label_317:
	var_49_bool = 0; // 0x13d PushV
	var_49_bool = 0; // 0x13e MovB
	var_50_int = 5; // 0x13f PushI
	var_51_bool = var_28_int < var_50_int; // 0x140 LT
	if(var_51_bool == 0) goto Label_327; // 0x141 JumpB
	var_52_bool = 0; // 0x142 PushV
	func_397(var_52_bool); // 0x143 NEW_2
	if(var_52_bool == 0) goto Label_327; // 0x145 JumpB
	var_49_bool = 1; // 0x146 MovB
	
Label_327:
	if(var_49_bool == 0) goto Label_379; // 0x147 JumpB
	var_53_int = 3; // 0x148 PushI
	irand(var_29_int, var_53_int); // 0x149 Func
	var_54_int = 0; // 0x14b PushI
	var_55_bool = var_29_int == var_54_int; // 0x14c Eq
	if(var_55_bool == 0) goto Label_351; // 0x14d JumpB
	var_56_int = var_27_int; // 0x14e Push
	if(var_56_int == 0) goto Label_350; // 0x14f JumpB
	irand(var_30_int, var_27_int); // 0x150 Func
	var_57_string = "all"; // 0x152 PushS
	var_58_string = ""; var_59_int = 0; // 0x153 PushV
	var_59_int = var_30_int; // 0x154 Mov
	func_558(var_58_string, var_59_int); // 0x155 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x157 Func
	WaitForAnimEnd(var_31_bool); // 0x159 Func
	var_60_bool = var_31_bool == 0; // 0x15b Not
	if(var_60_bool == 0) goto Label_350; // 0x15c JumpB
	goto Label_379; // 0x15d Jump
	
Label_379:
	ResetAAS(); // 0x17b Func
	return 14; // 0x17d Return
	
Label_350:
	goto Label_368; // 0x15e Jump
	
Label_368:
	var_61_bool = 0; // 0x170 PushV
	func_382(var_61_bool); // 0x171 NEW_2
	var_62_bool = var_61_bool == 0; // 0x173 Not
	if(var_62_bool == 0) goto Label_374; // 0x174 JumpB
	goto Label_379; // 0x175 Jump
	
Label_374:
	ResetAAS(); // 0x176 Func
	var_63_int = 1; // 0x178 PushI
	var_28_int = var_28_int + var_63_int; // 0x179 Add2
	goto Label_317; // 0x17a Jump
	
Label_351:
	var_64_int = 1; // 0x15f PushI
	var_65_bool = var_29_int == var_64_int; // 0x160 Eq
	if(var_65_bool == 0) goto Label_365; // 0x161 JumpB
	var_66_int = 4; // 0x162 PushI
	rand(var_32_float, var_66_int); // 0x163 Func
	var_67_int = 1; // 0x165 PushI
	var_68_int = var_32_float + var_67_int; // 0x166 Add
	Sleep(var_68_int, var_33_bool); // 0x167 Func
	var_69_bool = var_33_bool == 0; // 0x169 Not
	if(var_69_bool == 0) goto Label_364; // 0x16a JumpB
	goto Label_379; // 0x16b Jump
	
Label_364:
	goto Label_368; // 0x16c Jump
	
Label_365:
	var_70_int = var_28_int; // 0x16d Push
	if(var_70_int == 0) goto Label_368; // 0x16e JumpB
	goto Label_379; // 0x16f Jump
}


func_565(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x235 PushV
	var_39_int = 0; // 0x236 MovI
	
Label_567:
	var_41_string = "all"; // 0x237 PushS
	var_42_string = ""; var_43_int = 0; // 0x238 PushV
	var_43_int = var_39_int; // 0x239 Mov
	func_558(var_42_string, var_43_int); // 0x23a NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x23c Func
	var_47_bool = var_40_bool == 0; // 0x23e Not
	if(var_47_bool == 0) goto Label_577; // 0x23f JumpB
	goto Label_580; // 0x240 Jump
	
Label_580:
	var_36_int = var_39_int; // 0x244 Mov
	return 4; // 0x245 Return
	
Label_577:
	var_48_int = 1; // 0x241 PushI
	var_39_int = var_39_int + var_48_int; // 0x242 Add2
	goto Label_567; // 0x243 Jump
}


func_503(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x1f7 PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x1f8 Func
	var_106_bool = var_103_bool; // 0x1fa Push
	if(var_106_bool == 0) goto Label_513; // 0x1fb JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x1fc Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x1fe Func
	goto Label_517; // 0x200 Jump
	
Label_517:
	return 6; // 0x205 Return
	
Label_513:
	var_107_string = "Can't find lsh animation : "; // 0x201 PushS
	var_108_int = var_107_string + var_96_string; // 0x202 Add
	Trace(var_108_int); // 0x203 Func
}


func_251(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0xfb PushV
	var_16_bool = var_4_bool == 0; // 0xfc NullEq
	if(var_16_bool == 0) goto Label_256; // 0xfd JumpB
	var_13_bool = 0; // 0xfe MovB
	return 2; // 0xff Return
	
Label_256:
	var_17_float = 0; var_18_object = Obj(); // 0x100 PushV
	var_18_object = var_4_bool; // 0x101 MovT
	func_389(var_18_object); // 0x102 NEW_2
	var_15_float = sqrt(var_17_float); // 0x104 Sqrt2
	var_25_object = var_2_object; // 0x105 PushT
	if(var_25_object == 0) goto Label_264; // 0x106 JumpB
	var_15_float = var_15_float - var_1_object; // 0x107 Sub2
	
Label_264:
	var_13_bool = var_15_float < var_0_object; // 0x108 LT2
	return 2; // 0x109 Return
}


func_382(var_61_bool)
{
	var_61_bool = 1; // 0x17e MovB
	return 0; // 0x17f Return
}


