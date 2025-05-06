task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0x9b PushI
	if(var_12_int == 0) goto Label_203; // 0x9c JumpB
	func_531(); // 0x9e NEW_2
	var_14_int = 40713; // 0xa0 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa1 Eq
	if(var_15_bool == 0) goto Label_168; // 0xa2 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa3 PushV
	var_16_object = var_1_object; // 0xa4 MovT
	var_17_object = var_0_object; // 0xa5 MovT
	func_594(); // 0xa6 NEW_2
	
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
	func_592(var_50_bool); // 0xc1 NEW_2
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
	func_520(var_27_object); // 0x116 NEW_2
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
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_586(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_584(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_588(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_590(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_601(var_77_int); // 0x22 NEW_2
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
	func_471(); // 0x41 NEW_2
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


func_132(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x85 PushV
	func_592(var_94_bool); // 0x86 NEW_2
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
	func_505(var_97_string, var_98_bool); // 0x96 NEW_2
	var_2_object = var_93_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_98_bool = 1; // 0x95 MovB
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


func_520(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x208 PushV
	GetEyesHeight(var_30_float); // 0x209 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x20b MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x20c PushE
	var_32_float = var_30_float; // 0x20d Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x20e PopE
	var_33_string = "head"; // 0x20f PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x210 Func
	return 4; // 0x212 Return
}


func_584(var_74_int)
{
	var_74_int = 518097; // 0x248 MovI
	return 0; // 0x249 Return
}


func_586(var_73_int)
{
	var_73_int = 518096; // 0x24a MovI
	return 0; // 0x24b Return
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
	var_110_int = 538795; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_int = 538796; // 0x59 PushI
	var_112_int = -1; // 0x5a PushI
	var_113_int = 40713; // 0x5b PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x5c TObjFunc
	var_114_int = 538805; // 0x5e PushI
	var_115_int = -1; // 0x5f PushI
	var_116_int = 40723; // 0x60 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_117_bool = 0; // 0x66 PushV
	func_592(var_117_bool); // 0x67 NEW_2
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
	func_489(var_119_string); // 0x71 NEW_2
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


func_588(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png"; // 0x24c MovS
	return 0; // 0x24d Return
}


func_397(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x18d PushV
	IsLoaded(var_15_bool); // 0x18e Func
	var_13_bool = var_15_bool; // 0x190 Mov
	return 2; // 0x191 Return
}


func_590(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png"; // 0x24e MovS
	return 0; // 0x24f Return
}


func_592(var_68_bool)
{
	var_68_bool = 0; // 0x250 MovB
	return 0; // 0x251 Return
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
	func_538(var_52_cvector, var_53_cvector); // 0x1ad NEW_2
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
	var_65_bool = 1; // 0x1bd PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x1be Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x1c0 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x1c1 PushE
	Rotate(var_66_float, var_67_float); // 0x1c2 Func
	var_68_bool = 0; // 0x1c4 PushV
	func_592(var_68_bool); // 0x1c5 NEW_2
	if(var_68_bool == 0) goto Label_457; // 0x1c7 JumpB
	goto Label_465; // 0x1c8 Jump
	
Label_465:
	CameraWaitForPlayFinish(); // 0x1d1 Func
	ResumeWorld(); // 0x1d3 Func
	var_25_bool = 1; // 0x1d5 MovB
	return 18; // 0x1d6 Return
	
Label_457:
	var_69_string = "head"; // 0x1c9 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x1ca Func
	var_70_bool = var_45_bool; // 0x1cc Push
	if(var_70_bool == 0) goto Label_465; // 0x1cd JumpB
	var_71_string = "head"; // 0x1ce PushS
	LookAsyncCamera(var_71_string); // 0x1cf Func
}


func_531()
{
	var_13_bool = 0; // 0x213 PushV
	func_592(var_13_bool); // 0x214 NEW_2
	if(var_13_bool == 0) goto Label_537; // 0x216 JumpB
	lshStopSpeech(); // 0x217 Func
	
Label_537:
	return 0; // 0x219 Return
}


func_594()
{
	var_18_bool = 0; var_19_string = ""; var_20_string = ""; // 0x253 PushV
	var_19_string = "quest_d11_05"; // 0x254 MovS
	var_20_string = "teleport"; // 0x255 MovS
	func_548(var_18_bool, var_19_string, var_20_string); // 0x256 NEW_2
	return 0; // 0x258 Return
}


func_471()
{
	var_137_bool = 0; var_138_bool = 0; // 0x1d7 PushV
	var_139_bool = 1; // 0x1d8 PushB
	CameraSwitchToNormal(var_139_bool); // 0x1d9 Func
	var_140_bool = 0; // 0x1db PushV
	func_592(var_140_bool); // 0x1dc NEW_2
	if(var_140_bool == 0) goto Label_480; // 0x1de JumpB
	goto Label_488; // 0x1df Jump
	
Label_488:
	return 2; // 0x1e8 Return
	
Label_480:
	var_141_string = "head"; // 0x1e0 PushS
	HasAnimationTrack(var_138_bool, var_141_string); // 0x1e1 Func
	var_142_bool = var_138_bool; // 0x1e3 Push
	if(var_142_bool == 0) goto Label_488; // 0x1e4 JumpB
	var_143_string = "head"; // 0x1e5 PushS
	UnlookAsync(var_143_string); // 0x1e6 Func
}


func_601(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x259 PushV
	var_80_string = "branch"; // 0x25a PushS
	GetVariable(var_80_string, var_79_int); // 0x25b Func
	var_81_int = 0; // 0x25d PushI
	var_82_bool = var_79_int == var_81_int; // 0x25e Eq
	if(var_82_bool == 0) goto Label_611; // 0x25f JumpB
	var_77_int = 1; // 0x260 MovI
	return 2; // 0x261 Return
	
Label_611:
	var_83_int = 1; // 0x263 PushI
	var_84_bool = var_79_int == var_83_int; // 0x264 Eq
	if(var_84_bool == 0) goto Label_616; // 0x265 JumpB
	var_77_int = 2; // 0x266 MovI
	return 2; // 0x267 Return
	
Label_616:
	var_77_int = 3; // 0x268 MovI
	return 2; // 0x269 Return
}


func_538(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x21a PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x21b Or
	var_56_float = sqrt(var_57_int); // 0x21c Sqrt2
	var_58_float = 0.0; // 0x21d PushF
	var_59_bool = var_56_float < var_58_float; // 0x21e LT
	if(var_59_bool == 0) goto Label_546; // 0x21f JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x220 MovV
	return 2; // 0x221 Return
	
Label_546:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x222 Div2
	return 2; // 0x223 Return
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


func_548(var_18_bool, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x224 PushV
	FindActor(var_22_object, var_19_string); // 0x225 Func
	var_23_bool = var_22_object == 0; // 0x227 NullEq
	if(var_23_bool == 0) goto Label_555; // 0x228 JumpB
	var_18_bool = 0; // 0x229 MovB
	return 2; // 0x22a Return
	
Label_555:
	Trigger(var_22_object, var_20_string); // 0x22b Func
	var_18_bool = 1; // 0x22d MovB
	return 2; // 0x22e Return
}


func_489(var_119_string)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0; // 0x1e9 PushV
	lshHasAnimation(var_123_bool, var_119_string); // 0x1ea Func
	var_126_bool = var_123_bool; // 0x1ec Push
	if(var_126_bool == 0) goto Label_500; // 0x1ed JumpB
	lshGetAnimTimes(var_119_string, var_124_float, var_125_float); // 0x1ee Func
	var_127_bool = 0; // 0x1f0 PushB
	lshPlayAnimation(var_124_float, var_125_float, var_127_bool); // 0x1f1 Func
	goto Label_504; // 0x1f3 Jump
	
Label_504:
	return 6; // 0x1f8 Return
	
Label_500:
	var_128_string = "Can't find lsh animation : "; // 0x1f4 PushS
	var_129_int = var_128_string + var_119_string; // 0x1f5 Add
	Trace(var_129_int); // 0x1f6 Func
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
	func_567(var_36_int); // 0x139 NEW_2
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
	func_560(var_58_string, var_59_int); // 0x155 NEW_2
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


func_560(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x230 PushV
	var_45_string = "idle"; // 0x231 MovS
	var_46_int = var_43_int; // 0x232 Push
	if(var_46_int == 0) goto Label_565; // 0x233 JumpB
	var_45_string = var_45_string + var_43_int; // 0x234 Add2
	
Label_565:
	var_42_string = var_45_string; // 0x235 Mov
	return 2; // 0x236 Return
}


func_567(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x237 PushV
	var_39_int = 0; // 0x238 MovI
	
Label_569:
	var_41_string = "all"; // 0x239 PushS
	var_42_string = ""; var_43_int = 0; // 0x23a PushV
	var_43_int = var_39_int; // 0x23b Mov
	func_560(var_42_string, var_43_int); // 0x23c NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x23e Func
	var_47_bool = var_40_bool == 0; // 0x240 Not
	if(var_47_bool == 0) goto Label_579; // 0x241 JumpB
	goto Label_582; // 0x242 Jump
	
Label_582:
	var_36_int = var_39_int; // 0x246 Mov
	return 4; // 0x247 Return
	
Label_579:
	var_48_int = 1; // 0x243 PushI
	var_39_int = var_39_int + var_48_int; // 0x244 Add2
	goto Label_569; // 0x245 Jump
}


func_505(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x1f9 PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x1fa Func
	var_107_bool = var_104_bool; // 0x1fc Push
	if(var_107_bool == 0) goto Label_515; // 0x1fd JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x1fe Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x200 Func
	goto Label_519; // 0x202 Jump
	
Label_519:
	return 6; // 0x207 Return
	
Label_515:
	var_108_string = "Can't find lsh animation : "; // 0x203 PushS
	var_109_int = var_108_string + var_97_string; // 0x204 Add
	Trace(var_109_int); // 0x205 Func
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


