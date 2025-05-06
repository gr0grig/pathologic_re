task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0x9b PushI
	if(var_14_int == 0) goto Label_195; // 0x9c JumpB
	func_589(); // 0x9e NEW_2
	var_16_int = 35721; // 0xa0 PushI
	var_17_bool = var_12_bool == var_16_int; // 0xa1 Eq
	if(var_17_bool == 0) goto Label_183; // 0xa2 JumpB
	var_18_string = ""; // 0xa3 PushV
	var_18_string = "Neutral"; // 0xa4 MovS
	func_132(var_13_bool, var_18_string); // 0xa5 NEW_2
	var_35_int = 534134; // 0xa7 PushI
	SetMessage(var_35_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_36_int = 534135; // 0xac PushI
	var_37_int = -1; // 0xad PushI
	var_38_int = 35722; // 0xae PushI
	AddReply(var_36_int, var_37_int, var_38_int); // 0xaf TObjFunc
	var_39_int = 534444; // 0xb1 PushI
	var_40_int = -1; // 0xb2 PushI
	var_41_int = 36077; // 0xb3 PushI
	AddReply(var_39_int, var_40_int, var_41_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_3_string = 1; // 0xb7 TMovB
	var_42_bool = 0; // 0xb8 PushV
	func_661(var_42_bool); // 0xb9 NEW_2
	if(var_42_bool == 0) goto Label_191; // 0xbb JumpB
	lshStopAnimation(); // 0xbc Func
	goto Label_193; // 0xbe Jump
	
Label_193:
	return 0; // 0xc1 Return
	
Label_191:
	StopAnimation(); // 0xbf Func
	
Label_195:
	return 0; // 0xc3 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_347(var_11_bool, var_12_object); // 0xcc NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0xce PushV
	var_17_object = var_12_object; // 0xcf Mov
	TaskCall(0); // 0xd0 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0xd1 NEW_2
	TaskReturn(); // 0xd2 TaskReturn
	return 0; // 0xd4 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0xfc PushS
	var_14_bool = var_12_string == var_13_string; // 0xfd Eq
	if(var_14_bool == 0) goto Label_258; // 0xfe JumpB
	func_231(var_12_string); // 0x100 NEW_2
	
Label_258:
	return 0; // 0x102 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x103 PushT
	if(var_12_int == 0) goto Label_264; // 0x104 JumpB
	func_347(var_10_bool, var_11_bool); // 0x106 NEW_2
	
Label_264:
	var_16_bool = 0; // 0x108 PushV
	var_16_bool = 0; // 0x109 MovB
	var_17_int = var_5_int; // 0x10a PushT
	if(var_17_int == 0) goto Label_273; // 0x10b JumpB
	var_18_bool = 0; // 0x10c PushV
	func_280(var_18_bool); // 0x10d NEW_2
	if(var_18_bool == 0) goto Label_273; // 0x10f JumpB
	var_16_bool = 1; // 0x110 MovB
	
Label_273:
	if(var_16_bool == 0) goto Label_279; // 0x111 JumpB
	var_19_object = Obj(); // 0x112 PushV
	func_596(var_19_object); // 0x113 NEW_2
	RemoveActor(var_19_object); // 0x115 Func
	
Label_279:
	return 0; // 0x117 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x145 PushI
	var_14_bool = var_12_int == var_13_int; // 0x146 Eq
	if(var_14_bool == 0) goto Label_346; // 0x147 JumpB
	var_15_bool = 0; // 0x148 PushV
	func_309(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x149 NEW_2
	if(var_15_bool == 0) goto Label_340; // 0x14b JumpB
	var_28_bool = var_2_object == 0; // 0x14c Not
	if(var_28_bool == 0) goto Label_339; // 0x14d JumpB
	var_29_object = Obj(); // 0x14e PushV
	var_29_object = var_4_bool; // 0x14f MovT
	func_578(var_29_object); // 0x150 NEW_2
	var_2_object = 1; // 0x152 TMovB
	
Label_339:
	goto Label_346; // 0x153 Jump
	
Label_346:
	return 0; // 0x15a Return
	
Label_340:
	var_36_object = var_2_object; // 0x154 PushT
	if(var_36_object == 0) goto Label_346; // 0x155 JumpB
	var_37_string = "head"; // 0x156 PushS
	UnlookAsync(var_37_string); // 0x157 Func
	var_2_object = 0; // 0x159 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0xc4 PushV
	var_12_float = 300; // 0xc5 MovI
	var_13_float = 100; // 0xc6 MovI
	func_213(var_11_bool, var_12_float, var_13_float); // 0xc7 NEW_2
	return 0; // 0xc9 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 110.0; // 0x4 MovF
	func_460(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_655(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_653(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_657(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_659(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_636(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_87_bool = var_24_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_17_object; // 0x30 Mov
	var_89_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_137_bool = var_26_bool == 0; // 0x38 Not
	if(var_137_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_138_object = Obj(); // 0x3f PushV
	var_138_object = var_17_object; // 0x40 Mov
	func_529(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_578(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x242 PushV
	GetEyesHeight(var_32_float); // 0x243 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x245 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x246 PushE
	var_34_float = var_32_float; // 0x247 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x248 PopE
	var_35_string = "head"; // 0x249 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x24a Func
	return 4; // 0x24c Return
}


func_132(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0x85 PushV
	func_661(var_96_bool); // 0x86 NEW_2
	var_97_bool = var_96_bool == 0; // 0x88 Not
	if(var_97_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_98_bool = var_95_string == var_2_object; // 0x8b Eq
	if(var_98_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_99_string = ""; var_100_bool = 0; // 0x8e PushV
	var_99_string = var_95_string; // 0x8f Mov
	var_101_string = ""; // 0x90 PushS
	var_102_bool = var_95_string == var_101_string; // 0x91 Eq
	if(var_102_bool == 0) goto Label_149; // 0x92 JumpB
	var_100_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_563(var_99_string, var_100_bool); // 0x96 NEW_2
	var_2_object = var_95_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_100_bool = 1; // 0x95 MovB
}


func_455(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x1c7 PushV
	IsLoaded(var_25_bool); // 0x1c8 Func
	var_23_bool = var_25_bool; // 0x1ca Mov
	return 2; // 0x1cb Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_102; // 0x4f JumpB
	var_95_string = ""; // 0x50 PushV
	var_95_string = "Neutral"; // 0x51 MovS
	func_132(var_89_object, var_95_string); // 0x52 NEW_2
	var_112_int = 534134; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_int = 534135; // 0x59 PushI
	var_114_int = -1; // 0x5a PushI
	var_115_int = 35722; // 0x5b PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x5c TObjFunc
	var_116_int = 534444; // 0x5e PushI
	var_117_int = -1; // 0x5f PushI
	var_118_int = 36077; // 0x60 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_119_bool = 0; // 0x66 PushV
	func_661(var_119_bool); // 0x67 NEW_2
	if(var_119_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_120_string = var_3_string; // 0x6c PushT
	if(var_120_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_121_string = ""; // 0x6f PushV
	var_121_string = var_2_object; // 0x70 MovT
	func_547(var_121_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_132_string = "all"; // 0x75 PushS
	var_133_string = "idle"; // 0x76 PushS
	PlayAnimation(var_132_string, var_133_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_134_string = var_3_string; // 0x7b PushT
	if(var_134_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_135_string = "all"; // 0x7e PushS
	var_136_string = "idle"; // 0x7f PushS
	PlayAnimation(var_135_string, var_136_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_460(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x1cc PushV
	GetPosition(var_40_cvector); // 0x1cd ObjFunc
	GetEyesHeight(var_39_float); // 0x1cf ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1d1 PushE
	var_48_float = var_48_float + var_39_float; // 0x1d2 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1d3 PopE
	GetPosition(var_41_cvector); // 0x1d4 Func
	GetEyesHeight(var_39_float); // 0x1d6 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x1d8 PushE
	var_49_float = var_49_float + var_39_float; // 0x1d9 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x1da PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x1db Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x1dc PushE
	var_50_float = 0; // 0x1dd MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x1de PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x1df Or
	var_52_float = sqrt(var_51_int); // 0x1e0 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x1e1 Div2
	var_43_cvector = -var_42_cvector; // 0x1e2 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x1e3 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x1e4 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x1e5 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x1e6 Xor2
	func_602(var_54_cvector, var_55_cvector); // 0x1e7 NEW_2
	var_62_int = 25; // 0x1e9 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x1ea Mult
	var_64_int = var_53_float + var_63_float; // 0x1eb Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x1ec PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x1ed Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x1ee Add2
	IsOverrideActive(var_46_bool); // 0x1ef Func
	var_66_bool = var_46_bool; // 0x1f1 Push
	if(var_66_bool == 0) goto Label_501; // 0x1f2 JumpB
	var_27_bool = 0; // 0x1f3 MovB
	return 18; // 0x1f4 Return
	
Label_501:
	StopWorld(); // 0x1f5 Func
	var_67_bool = 1; // 0x1f7 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x1f8 Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x1fa PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x1fb PushE
	Rotate(var_68_float, var_69_float); // 0x1fc Func
	var_70_bool = 0; // 0x1fe PushV
	func_661(var_70_bool); // 0x1ff NEW_2
	if(var_70_bool == 0) goto Label_515; // 0x201 JumpB
	goto Label_523; // 0x202 Jump
	
Label_523:
	CameraWaitForPlayFinish(); // 0x20b Func
	ResumeWorld(); // 0x20d Func
	var_27_bool = 1; // 0x20f MovB
	return 18; // 0x210 Return
	
Label_515:
	var_71_string = "head"; // 0x203 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x204 Func
	var_72_bool = var_47_bool; // 0x206 Push
	if(var_72_bool == 0) goto Label_523; // 0x207 JumpB
	var_73_string = "head"; // 0x208 PushS
	LookAsyncCamera(var_73_string); // 0x209 Func
}


func_653(var_76_int)
{
	var_76_int = 521048; // 0x28d MovI
	return 0; // 0x28e Return
}


func_589()
{
	var_15_bool = 0; // 0x24d PushV
	func_661(var_15_bool); // 0x24e NEW_2
	if(var_15_bool == 0) goto Label_595; // 0x250 JumpB
	lshStopSpeech(); // 0x251 Func
	
Label_595:
	return 0; // 0x253 Return
}


func_655(var_75_int)
{
	var_75_int = 521047; // 0x28f MovI
	return 0; // 0x290 Return
}


func_657(var_77_string)
{
	var_77_string = "ui/NPC_Morlok.png"; // 0x291 MovS
	return 0; // 0x292 Return
}


func_529()
{
	var_139_bool = 0; var_140_bool = 0; // 0x211 PushV
	var_141_bool = 1; // 0x212 PushB
	CameraSwitchToNormal(var_141_bool); // 0x213 Func
	var_142_bool = 0; // 0x215 PushV
	func_661(var_142_bool); // 0x216 NEW_2
	if(var_142_bool == 0) goto Label_538; // 0x218 JumpB
	goto Label_546; // 0x219 Jump
	
Label_546:
	return 2; // 0x222 Return
	
Label_538:
	var_143_string = "head"; // 0x21a PushS
	HasAnimationTrack(var_140_bool, var_143_string); // 0x21b Func
	var_144_bool = var_140_bool; // 0x21d Push
	if(var_144_bool == 0) goto Label_546; // 0x21e JumpB
	var_145_string = "head"; // 0x21f PushS
	UnlookAsync(var_145_string); // 0x220 Func
}


func_659(var_78_string)
{
	var_78_string = "ui/NPC_Morlok_b.png"; // 0x293 MovS
	return 0; // 0x294 Return
}


func_596(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x254 PushV
	self(var_21_object); // 0x255 Func
	var_19_object = var_21_object; // 0x257 Mov
	return 2; // 0x258 Return
}


func_661(var_70_bool)
{
	var_70_bool = 0; // 0x295 MovB
	return 0; // 0x296 Return
}


func_213(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0xd5 PushV
	var_6_int = 0; // 0xd6 TMovB
	
Label_215:
	var_18_int = 3; // 0xd7 PushI
	rand(var_16_float, var_18_int); // 0xd8 Func
	var_19_int = 3; // 0xda PushI
	var_20_int = var_16_float + var_19_int; // 0xdb Add
	Sleep(var_20_int, var_17_bool); // 0xdc Func
	var_6_int = 1; // 0xde TMovB
	var_21_float = 0; var_22_float = 0; // 0xdf PushV
	var_21_float = var_12_float; // 0xe0 Mov
	var_22_float = var_13_float; // 0xe1 Mov
	func_282(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0xe2 NEW_2
	var_6_int = 0; // 0xe4 TMovB
	goto Label_215; // 0xe5 Jump
}


func_280(var_18_bool)
{
	var_18_bool = 1; // 0x118 MovB
	return 0; // 0x119 Return
}


func_282(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x11b PushV
	func_455(var_23_bool); // 0x11c NEW_2
	var_26_bool = var_23_bool == 0; // 0x11e Not
	if(var_26_bool == 0) goto Label_289; // 0x11f JumpB
	return 0; // 0x120 Return
	
Label_289:
	var_27_string = "player"; // 0x121 PushS
	FindActor(var_17_bool, var_27_string); // 0x122 Func
	var_2_object = 0; // 0x124 TMovB
	var_3_string = 0; // 0x125 TMovB
	var_0_object = var_21_float; // 0x126 TMov
	var_1_object = var_22_float; // 0x127 TMov
	var_28_int = 10; // 0x128 PushI
	var_29_float = 1.0; // 0x129 PushF
	SetTimer(var_28_int, var_29_float); // 0x12a Func
	func_361(); // 0x12d NEW_2
	var_81_bool = var_3_string == 0; // 0x12f Not
	if(var_81_bool == 0) goto Label_308; // 0x130 JumpB
	var_82_int = 10; // 0x131 PushI
	KillTimer(var_82_int); // 0x132 Func
	
Label_308:
	return 0; // 0x134 Return
}


func_602(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x25a PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x25b Or
	var_58_float = sqrt(var_59_int); // 0x25c Sqrt2
	var_60_float = 0.0; // 0x25d PushF
	var_61_bool = var_58_float < var_60_float; // 0x25e LT
	if(var_61_bool == 0) goto Label_610; // 0x25f JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x260 MovV
	return 2; // 0x261 Return
	
Label_610:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x262 Div2
	return 2; // 0x263 Return
}


func_347(var_2_object, var_3_string)
{
	func_442(); // 0x15c NEW_2
	var_13_int = 10; // 0x15e PushI
	KillTimer(var_13_int); // 0x15f Func
	var_14_object = var_2_object; // 0x161 PushT
	if(var_14_object == 0) goto Label_359; // 0x162 JumpB
	var_15_string = "head"; // 0x163 PushS
	UnlookAsync(var_15_string); // 0x164 Func
	var_2_object = 0; // 0x166 TMovB
	
Label_359:
	var_3_string = 1; // 0x167 TMovB
	return 0; // 0x168 Return
}


func_547(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0; // 0x223 PushV
	lshHasAnimation(var_125_bool, var_121_string); // 0x224 Func
	var_128_bool = var_125_bool; // 0x226 Push
	if(var_128_bool == 0) goto Label_558; // 0x227 JumpB
	lshGetAnimTimes(var_121_string, var_126_float, var_127_float); // 0x228 Func
	var_129_bool = 0; // 0x22a PushB
	lshPlayAnimation(var_126_float, var_127_float, var_129_bool); // 0x22b Func
	goto Label_562; // 0x22d Jump
	
Label_562:
	return 6; // 0x232 Return
	
Label_558:
	var_130_string = "Can't find lsh animation : "; // 0x22e PushS
	var_131_int = var_130_string + var_121_string; // 0x22f Add
	Trace(var_131_int); // 0x230 Func
}


func_612(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x264 PushV
	var_55_string = "idle"; // 0x265 MovS
	var_56_int = var_53_int; // 0x266 Push
	if(var_56_int == 0) goto Label_617; // 0x267 JumpB
	var_55_string = var_55_string + var_53_int; // 0x268 Add2
	
Label_617:
	var_52_string = var_55_string; // 0x269 Mov
	return 2; // 0x26a Return
}


func_231(var_5_int)
{
	var_5_int = 1; // 0xe7 TMovB
	var_15_bool = 0; // 0xe8 PushV
	var_15_bool = 0; // 0xe9 MovB
	var_16_bool = 0; // 0xea PushV
	func_455(var_16_bool); // 0xeb NEW_2
	var_19_bool = var_16_bool == 0; // 0xed Not
	if(var_19_bool == 0) goto Label_244; // 0xee JumpB
	var_20_bool = 0; // 0xef PushV
	func_280(var_20_bool); // 0xf0 NEW_2
	if(var_20_bool == 0) goto Label_244; // 0xf2 JumpB
	var_15_bool = 1; // 0xf3 MovB
	
Label_244:
	if(var_15_bool == 0) goto Label_250; // 0xf4 JumpB
	var_21_object = Obj(); // 0xf5 PushV
	func_596(var_21_object); // 0xf6 NEW_2
	RemoveActor(var_21_object); // 0xf8 Func
	
Label_250:
	return 0; // 0xfa Return
}


func_361()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x169 PushV
	WaitForAnimEnd(); // 0x16a Func
	var_44_bool = 0; // 0x16c PushV
	func_455(var_44_bool); // 0x16d NEW_2
	var_45_bool = var_44_bool == 0; // 0x16f Not
	if(var_45_bool == 0) goto Label_370; // 0x170 JumpB
	return 14; // 0x171 Return
	
Label_370:
	var_46_int = 0; // 0x172 PushV
	func_619(var_46_int); // 0x173 NEW_2
	var_37_int = var_46_int; // 0x174 Mov
	var_38_int = 0; // 0x176 MovI
	
Label_375:
	var_59_bool = 0; // 0x177 PushV
	var_59_bool = 0; // 0x178 MovB
	var_60_int = 5; // 0x179 PushI
	var_61_bool = var_38_int < var_60_int; // 0x17a LT
	if(var_61_bool == 0) goto Label_385; // 0x17b JumpB
	var_62_bool = 0; // 0x17c PushV
	func_455(var_62_bool); // 0x17d NEW_2
	if(var_62_bool == 0) goto Label_385; // 0x17f JumpB
	var_59_bool = 1; // 0x180 MovB
	
Label_385:
	if(var_59_bool == 0) goto Label_437; // 0x181 JumpB
	var_63_int = 3; // 0x182 PushI
	irand(var_39_int, var_63_int); // 0x183 Func
	var_64_int = 0; // 0x185 PushI
	var_65_bool = var_39_int == var_64_int; // 0x186 Eq
	if(var_65_bool == 0) goto Label_409; // 0x187 JumpB
	var_66_int = var_37_int; // 0x188 Push
	if(var_66_int == 0) goto Label_408; // 0x189 JumpB
	irand(var_40_int, var_37_int); // 0x18a Func
	var_67_string = "all"; // 0x18c PushS
	var_68_string = ""; var_69_int = 0; // 0x18d PushV
	var_69_int = var_40_int; // 0x18e Mov
	func_612(var_68_string, var_69_int); // 0x18f NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x191 Func
	WaitForAnimEnd(var_41_bool); // 0x193 Func
	var_70_bool = var_41_bool == 0; // 0x195 Not
	if(var_70_bool == 0) goto Label_408; // 0x196 JumpB
	goto Label_437; // 0x197 Jump
	
Label_437:
	ResetAAS(); // 0x1b5 Func
	return 14; // 0x1b7 Return
	
Label_408:
	goto Label_426; // 0x198 Jump
	
Label_426:
	var_71_bool = 0; // 0x1aa PushV
	func_440(var_71_bool); // 0x1ab NEW_2
	var_72_bool = var_71_bool == 0; // 0x1ad Not
	if(var_72_bool == 0) goto Label_432; // 0x1ae JumpB
	goto Label_437; // 0x1af Jump
	
Label_432:
	ResetAAS(); // 0x1b0 Func
	var_73_int = 1; // 0x1b2 PushI
	var_38_int = var_38_int + var_73_int; // 0x1b3 Add2
	goto Label_375; // 0x1b4 Jump
	
Label_409:
	var_74_int = 1; // 0x199 PushI
	var_75_bool = var_39_int == var_74_int; // 0x19a Eq
	if(var_75_bool == 0) goto Label_423; // 0x19b JumpB
	var_76_int = 4; // 0x19c PushI
	rand(var_42_float, var_76_int); // 0x19d Func
	var_77_int = 1; // 0x19f PushI
	var_78_int = var_42_float + var_77_int; // 0x1a0 Add
	Sleep(var_78_int, var_43_bool); // 0x1a1 Func
	var_79_bool = var_43_bool == 0; // 0x1a3 Not
	if(var_79_bool == 0) goto Label_422; // 0x1a4 JumpB
	goto Label_437; // 0x1a5 Jump
	
Label_422:
	goto Label_426; // 0x1a6 Jump
	
Label_423:
	var_80_int = var_38_int; // 0x1a7 Push
	if(var_80_int == 0) goto Label_426; // 0x1a8 JumpB
	goto Label_437; // 0x1a9 Jump
}


func_619(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x26b PushV
	var_49_int = 0; // 0x26c MovI
	
Label_621:
	var_51_string = "all"; // 0x26d PushS
	var_52_string = ""; var_53_int = 0; // 0x26e PushV
	var_53_int = var_49_int; // 0x26f Mov
	func_612(var_52_string, var_53_int); // 0x270 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x272 Func
	var_57_bool = var_50_bool == 0; // 0x274 Not
	if(var_57_bool == 0) goto Label_631; // 0x275 JumpB
	goto Label_634; // 0x276 Jump
	
Label_634:
	var_46_int = var_49_int; // 0x27a Mov
	return 4; // 0x27b Return
	
Label_631:
	var_58_int = 1; // 0x277 PushI
	var_49_int = var_49_int + var_58_int; // 0x278 Add2
	goto Label_621; // 0x279 Jump
}


func_563(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x233 PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x234 Func
	var_109_bool = var_106_bool; // 0x236 Push
	if(var_109_bool == 0) goto Label_573; // 0x237 JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x238 Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x23a Func
	goto Label_577; // 0x23c Jump
	
Label_577:
	return 6; // 0x241 Return
	
Label_573:
	var_110_string = "Can't find lsh animation : "; // 0x23d PushS
	var_111_int = var_110_string + var_99_string; // 0x23e Add
	Trace(var_111_int); // 0x23f Func
}


func_309(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x135 PushV
	var_18_bool = var_4_bool == 0; // 0x136 NullEq
	if(var_18_bool == 0) goto Label_314; // 0x137 JumpB
	var_15_bool = 0; // 0x138 MovB
	return 2; // 0x139 Return
	
Label_314:
	var_19_float = 0; var_20_object = Obj(); // 0x13a PushV
	var_20_object = var_4_bool; // 0x13b MovT
	func_447(var_20_object); // 0x13c NEW_2
	var_17_float = sqrt(var_19_float); // 0x13e Sqrt2
	var_27_object = var_2_object; // 0x13f PushT
	if(var_27_object == 0) goto Label_322; // 0x140 JumpB
	var_17_float = var_17_float - var_1_object; // 0x141 Sub2
	
Label_322:
	var_15_bool = var_17_float < var_0_object; // 0x142 LT2
	return 2; // 0x143 Return
}


func_440(var_71_bool)
{
	var_71_bool = 1; // 0x1b8 MovB
	return 0; // 0x1b9 Return
}


func_442()
{
	StopAnimation(); // 0x1ba Func
	StopGroup0(); // 0x1bc Func
	return 0; // 0x1be Return
}


func_636(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x27c PushV
	var_82_string = "branch"; // 0x27d PushS
	GetVariable(var_82_string, var_81_int); // 0x27e Func
	var_83_int = 0; // 0x280 PushI
	var_84_bool = var_81_int == var_83_int; // 0x281 Eq
	if(var_84_bool == 0) goto Label_646; // 0x282 JumpB
	var_79_int = 1; // 0x283 MovI
	return 2; // 0x284 Return
	
Label_646:
	var_85_int = 1; // 0x286 PushI
	var_86_bool = var_81_int == var_85_int; // 0x287 Eq
	if(var_86_bool == 0) goto Label_651; // 0x288 JumpB
	var_79_int = 2; // 0x289 MovI
	return 2; // 0x28a Return
	
Label_651:
	var_79_int = 3; // 0x28b MovI
	return 2; // 0x28c Return
}


func_447(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x1bf PushV
	GetPosition(var_24_cvector); // 0x1c0 Func
	GetPosition(var_25_cvector); // 0x1c2 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x1c4 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x1c5 Or2
	return 6; // 0x1c6 Return
}


