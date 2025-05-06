task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_int = 1; // 0x9b PushI
	if(var_15_int == 0) goto Label_239; // 0x9c JumpB
	func_761(); // 0x9e NEW_2
	var_17_int = 31578; // 0xa0 PushI
	var_18_bool = var_14_bool == var_17_int; // 0xa1 Eq
	if(var_18_bool == 0) goto Label_173; // 0xa2 JumpB
	var_19_object = Obj(); var_20_object = Obj(); // 0xa3 PushV
	var_19_object = var_1_object; // 0xa4 MovT
	var_20_object = var_0_object; // 0xa5 MovT
	func_847(); // 0xa6 NEW_2
	var_37_object = Obj(); var_38_object = Obj(); // 0xa8 PushV
	var_37_object = var_1_object; // 0xa9 MovT
	var_38_object = var_0_object; // 0xaa MovT
	func_831(); // 0xab NEW_2
	
Label_173:
	var_63_int = 31579; // 0xad PushI
	var_64_bool = var_14_bool == var_63_int; // 0xae Eq
	if(var_64_bool == 0) goto Label_186; // 0xaf JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0xb0 PushV
	var_65_object = var_1_object; // 0xb1 MovT
	var_66_object = var_0_object; // 0xb2 MovT
	func_847(); // 0xb3 NEW_2
	var_67_object = Obj(); var_68_object = Obj(); // 0xb5 PushV
	var_67_object = var_1_object; // 0xb6 MovT
	var_68_object = var_0_object; // 0xb7 MovT
	func_863(); // 0xb8 NEW_2
	
Label_186:
	var_71_int = 31575; // 0xba PushI
	var_72_bool = var_13_cvector == var_71_int; // 0xbb Eq
	if(var_72_bool == 0) goto Label_209; // 0xbc JumpB
	var_73_string = ""; // 0xbd PushV
	var_73_string = "Neutral"; // 0xbe MovS
	func_132(var_14_bool, var_73_string); // 0xbf NEW_2
	var_85_int = 530185; // 0xc1 PushI
	SetMessage(var_85_int); // 0xc2 TObjFunc
	ClearReplies(); // 0xc4 TObjFunc
	var_86_int = 530186; // 0xc6 PushI
	var_87_int = 31577; // 0xc7 PushI
	var_88_int = 31576; // 0xc8 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xc9 TObjFunc
	var_89_int = 530190; // 0xcb PushI
	var_90_int = -1; // 0xcc PushI
	var_91_int = 31579; // 0xcd PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xce TObjFunc
	return 0; // 0xd0 Return
	
Label_209:
	var_92_int = 31577; // 0xd1 PushI
	var_93_bool = var_13_cvector == var_92_int; // 0xd2 Eq
	if(var_93_bool == 0) goto Label_227; // 0xd3 JumpB
	var_94_string = ""; // 0xd4 PushV
	var_94_string = "Neutral"; // 0xd5 MovS
	func_132(var_14_bool, var_94_string); // 0xd6 NEW_2
	var_95_int = 530187; // 0xd8 PushI
	SetMessage(var_95_int); // 0xd9 TObjFunc
	ClearReplies(); // 0xdb TObjFunc
	var_96_int = 530188; // 0xdd PushI
	var_97_int = -1; // 0xde PushI
	var_98_int = 31578; // 0xdf PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xe0 TObjFunc
	return 0; // 0xe2 Return
	
Label_227:
	var_3_string = 1; // 0xe3 TMovB
	var_99_bool = 0; // 0xe4 PushV
	func_805(var_99_bool); // 0xe5 NEW_2
	if(var_99_bool == 0) goto Label_235; // 0xe7 JumpB
	lshStopAnimation(); // 0xe8 Func
	goto Label_237; // 0xea Jump
	
Label_237:
	return 0; // 0xed Return
	
Label_235:
	StopAnimation(); // 0xeb Func
	
Label_239:
	return 0; // 0xef Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0xfa PushV
	func_340(var_14_object, var_15_object); // 0xfc NEW_2
	var_19_int = 0; var_20_object = Obj(); // 0xfe PushV
	var_20_object = var_13_bool; // 0xff Mov
	TaskCall(0); // 0x100 TaskCall
	func_0(var_21_object, var_19_int, var_20_object); // 0x101 NEW_2
	TaskReturn(); // 0x102 TaskReturn
	GetScene(var_15_object); // 0x104 Func
	var_137_object = Obj(); // 0x106 PushV
	func_768(var_137_object); // 0x107 NEW_2
	RemoveStationaryActor(var_137_object); // 0x109 ObjFunc
	var_140_object = Obj(); // 0x10b PushV
	var_140_object = var_13_bool; // 0x10c Mov
	TaskCall(3); // 0x10d TaskCall
	func_470(var_141_object, var_142_cvector, var_143_bool, var_140_object); // 0x10e NEW_2
	TaskReturn(); // 0x10f TaskReturn
	return 2; // 0x111 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 10; // 0x13e PushI
	var_15_bool = var_13_bool == var_14_int; // 0x13f Eq
	if(var_15_bool == 0) goto Label_339; // 0x140 JumpB
	var_16_bool = 0; // 0x141 PushV
	func_302(var_11_object, var_12_cvector, var_13_bool, var_16_bool); // 0x142 NEW_2
	if(var_16_bool == 0) goto Label_333; // 0x144 JumpB
	var_29_bool = var_2_object == 0; // 0x145 Not
	if(var_29_bool == 0) goto Label_332; // 0x146 JumpB
	var_30_object = Obj(); // 0x147 PushV
	var_30_object = var_4_bool; // 0x148 MovT
	func_750(var_30_object); // 0x149 NEW_2
	var_2_object = 1; // 0x14b TMovB
	
Label_332:
	goto Label_339; // 0x14c Jump
	
Label_339:
	return 0; // 0x153 Return
	
Label_333:
	var_37_object = var_2_object; // 0x14d PushT
	if(var_37_object == 0) goto Label_339; // 0x14e JumpB
	var_38_string = "head"; // 0x14f PushS
	UnlookAsync(var_38_string); // 0x150 Func
	var_2_object = 0; // 0x152 TMovB
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_int)
{
	var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; // 0x21f PushV
	var_22_int = 120; // 0x220 PushI
	var_23_bool = var_13_int != var_22_int; // 0x221 Neq
	if(var_23_bool == 0) goto Label_548; // 0x222 JumpB
	return 8; // 0x223 Return
	
Label_548:
	var_24_bool = var_0_object == 0; // 0x224 NullEq
	if(var_24_bool == 0) goto Label_557; // 0x225 JumpB
	Stop(); // 0x226 Func
	var_25_int = 1; // 0x228 PushI
	KillTimer(var_25_int); // 0x229 Func
	var_2_object = 1; // 0x22b TMovB
	goto Label_594; // 0x22c Jump
	
Label_594:
	return 8; // 0x252 Return
	
Label_557:
	GetDirection(var_18_cvector); // 0x22d Func
	var_26_float = 7000.0; // 0x22f PushF
	FindDirLength(var_19_float, var_18_cvector, var_26_float); // 0x230 Func
	var_27_cvector = CVector(0,0,0); var_28_float = 0; // 0x232 PushV
	var_28_float = 1.74533; // 0x233 MovF
	func_440(var_27_cvector, var_28_float); // 0x234 NEW_2
	var_20_cvector = var_27_cvector; // 0x235 Mov
	var_21_float = var_20_cvector | var_20_cvector; // 0x237 Or2
	var_57_bool = 0; // 0x238 PushV
	var_57_bool = 0; // 0x239 MovB
	var_58_float = 2500.0; // 0x23a PushF
	var_59_bool = var_21_float >= var_58_float; // 0x23b GE
	if(var_59_bool == 0) goto Label_587; // 0x23c JumpB
	var_60_bool = 0; // 0x23d PushV
	var_60_bool = 1; // 0x23e MovB
	var_61_float = var_19_float * var_19_float; // 0x23f Mult
	var_62_float = 2.25; // 0x240 PushF
	var_63_float = var_61_float * var_62_float; // 0x241 Mult
	var_64_bool = var_21_float >= var_63_float; // 0x242 GE
	if(var_64_bool == 0) goto Label_585; // 0x243 JumpB
	var_65_bool = 0; // 0x244 PushV
	func_611(var_60_bool, var_65_bool); // 0x245 NEW_2
	if(var_65_bool == 0) goto Label_585; // 0x247 JumpB
	var_60_bool = 0; // 0x248 MovB
	
Label_585:
	if(var_60_bool == 0) goto Label_587; // 0x249 JumpB
	var_57_bool = 1; // 0x24a MovB
	
Label_587:
	if(var_57_bool == 0) goto Label_594; // 0x24b JumpB
	Stop(); // 0x24c Func
	var_85_cvector = CVector(0,0,0); // 0x24e PushV
	func_627(var_85_cvector); // 0x24f NEW_2
	var_1_object = var_85_cvector + var_20_cvector; // 0x251 Add2
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	func_595(var_13_object); // 0x25c NEW_2
	var_15_object = Obj(); // 0x25e PushV
	var_15_object = var_13_object; // 0x25f Mov
	func_936(); // 0x260 NEW_2
	return 0; // 0x262 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	return 0; // 0x3a9 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool)
{
	
Label_240:
	var_13_float = 0; var_14_float = 0; // 0xf0 PushV
	var_13_float = 300; // 0xf1 MovI
	var_14_float = 100; // 0xf2 MovI
	func_275(var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_float, var_14_float); // 0xf3 NEW_2
	var_75_int = 3; // 0xf5 PushI
	Sleep(var_75_int); // 0xf6 Func
	goto Label_240; // 0xf8 Jump
}


func_0(var_0_object, var_19_int, var_20_object)
{
	var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x0 PushV
	var_0_object = var_20_object; // 0x1 TMov
	var_30_bool = 0; var_31_object = Obj(); var_32_float = 0; // 0x2 PushV
	var_31_object = var_20_object; // 0x3 Mov
	var_32_float = 70.0; // 0x4 MovF
	func_652(var_31_object, var_32_float); // 0x5 NEW_2
	var_76_bool = var_30_bool == 0; // 0x7 Not
	if(var_76_bool == 0) goto Label_11; // 0x8 JumpB
	var_19_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_26_object); // 0xb Func
	var_77_int = 0; // 0xd PushV
	func_799(var_77_int); // 0xe NEW_2
	SetNPCName(var_77_int); // 0x10 ObjFunc
	var_78_int = 0; // 0x12 PushV
	func_797(var_78_int); // 0x13 NEW_2
	SetNPCDescription(var_78_int); // 0x15 ObjFunc
	var_79_string = ""; // 0x17 PushV
	func_801(var_79_string); // 0x18 NEW_2
	SetPhoto(var_79_string); // 0x1a ObjFunc
	var_80_string = ""; // 0x1c PushV
	func_803(var_80_string); // 0x1d NEW_2
	SetPhoto2(var_80_string); // 0x1f ObjFunc
	var_81_int = 0; // 0x21 PushV
	func_919(var_81_int); // 0x22 NEW_2
	SetPlayerName(var_81_int); // 0x24 ObjFunc
	var_28_int = -1; // 0x26 MovI
	IsOverrideActive(var_27_bool); // 0x27 Func
	var_89_bool = var_27_bool; // 0x29 Push
	if(var_89_bool == 0) goto Label_45; // 0x2a JumpB
	var_19_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_26_object); // 0x2d Func
	var_90_object = Obj(); var_91_object = Obj(); // 0x2f PushV
	var_90_object = var_20_object; // 0x30 Mov
	var_91_object = var_26_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_29_bool); // 0x36 ObjFunc
	
Label_56:
	var_129_bool = var_29_bool == 0; // 0x38 Not
	if(var_129_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_29_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_130_object = Obj(); // 0x3f PushV
	var_130_object = var_20_object; // 0x40 Mov
	func_720(); // 0x41 NEW_2
	StopDialog(var_26_object); // 0x43 Func
	GetReturnValue(var_28_int); // 0x45 ObjFunc
	var_19_int = var_28_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_768(var_137_object)
{
	var_138_object = Obj(); var_139_object = Obj(); // 0x300 PushV
	self(var_139_object); // 0x301 Func
	var_137_object = var_139_object; // 0x303 Mov
	return 2; // 0x304 Return
}


func_132(var_2_object, var_97_string)
{
	var_98_bool = 0; // 0x85 PushV
	func_805(var_98_bool); // 0x86 NEW_2
	var_99_bool = var_98_bool == 0; // 0x88 Not
	if(var_99_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_100_bool = var_97_string == var_2_object; // 0x8b Eq
	if(var_100_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_101_string = ""; var_102_bool = 0; // 0x8e PushV
	var_101_string = var_97_string; // 0x8f Mov
	var_103_string = ""; // 0x90 PushS
	var_104_bool = var_97_string == var_103_string; // 0x91 Eq
	if(var_104_bool == 0) goto Label_149; // 0x92 JumpB
	var_102_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_744(var_101_string, var_102_bool); // 0x96 NEW_2
	var_2_object = var_97_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_102_bool = 1; // 0x95 MovB
}


func_774(var_43_cvector, var_44_cvector)
{
	var_45_float = 0; var_46_float = 0; // 0x306 PushV
	var_47_int = var_44_cvector | var_44_cvector; // 0x307 Or
	var_46_float = sqrt(var_47_int); // 0x308 Sqrt2
	var_48_float = 0.0; // 0x309 PushF
	var_49_bool = var_46_float < var_48_float; // 0x30a LT
	if(var_49_bool == 0) goto Label_782; // 0x30b JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x30c MovV
	return 2; // 0x30d Return
	
Label_782:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x30e Div2
	return 2; // 0x30f Return
}


func_647(var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0; // 0x287 PushV
	IsLoaded(var_17_bool); // 0x288 Func
	var_15_bool = var_17_bool; // 0x28a Mov
	return 2; // 0x28b Return
}


func_652(var_30_bool, var_32_float)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0; // 0x28c PushV
	GetPosition(var_43_cvector); // 0x28d ObjFunc
	GetEyesHeight(var_42_float); // 0x28f ObjFunc
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x291 PushE
	var_51_float = var_51_float + var_42_float; // 0x292 Add2
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x293 PopE
	GetPosition(var_44_cvector); // 0x294 Func
	GetEyesHeight(var_42_float); // 0x296 Func
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x298 PushE
	var_52_float = var_52_float + var_42_float; // 0x299 Add2
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x29a PopE
	var_45_cvector = var_43_cvector - var_44_cvector; // 0x29b Sub2
	var_53_float = GetByIndex(var_45_cvector, 1); // 0x29c PushE
	var_53_float = 0; // 0x29d MovI
	SetByIndex(var_45_cvector, 1) = var_53_float; // 0x29e PopE
	var_54_int = var_45_cvector | var_45_cvector; // 0x29f Or
	var_55_float = sqrt(var_54_int); // 0x2a0 Sqrt
	var_45_cvector = var_45_cvector / var_45_cvector; // 0x2a1 Div2
	var_46_cvector = -var_45_cvector; // 0x2a2 Neg2
	var_56_float = var_45_cvector * var_32_float; // 0x2a3 Mult
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x2a4 PushV
	var_59_cvector = CVector(0.0, 1.0, 0.0); // 0x2a5 PushVec
	var_58_cvector = var_46_cvector ^ var_59_cvector; // 0x2a6 Xor2
	func_774(var_57_cvector, var_58_cvector); // 0x2a7 NEW_2
	var_65_int = 25; // 0x2a9 PushI
	var_66_float = var_57_cvector * var_65_int; // 0x2aa Mult
	var_67_int = var_56_float + var_66_float; // 0x2ab Add
	var_68_cvector = CVector(0.0, 10.0, 0.0); // 0x2ac PushVec
	var_47_cvector = var_67_int - var_68_cvector; // 0x2ad Sub2
	var_48_cvector = var_44_cvector + var_47_cvector; // 0x2ae Add2
	IsOverrideActive(var_49_bool); // 0x2af Func
	var_69_bool = var_49_bool; // 0x2b1 Push
	if(var_69_bool == 0) goto Label_693; // 0x2b2 JumpB
	var_30_bool = 0; // 0x2b3 MovB
	return 18; // 0x2b4 Return
	
Label_693:
	StopWorld(); // 0x2b5 Func
	CameraTransit(var_48_cvector, var_46_cvector); // 0x2b7 Func
	var_70_float = GetByIndex(var_47_cvector, 0); // 0x2b9 PushE
	var_71_float = GetByIndex(var_47_cvector, 2); // 0x2ba PushE
	Rotate(var_70_float, var_71_float); // 0x2bb Func
	var_72_bool = 0; // 0x2bd PushV
	func_805(var_72_bool); // 0x2be NEW_2
	if(var_72_bool == 0) goto Label_706; // 0x2c0 JumpB
	goto Label_714; // 0x2c1 Jump
	
Label_714:
	CameraWaitForPlayFinish(); // 0x2ca Func
	ResumeWorld(); // 0x2cc Func
	var_30_bool = 1; // 0x2ce MovB
	return 18; // 0x2cf Return
	
Label_706:
	var_73_string = "head"; // 0x2c2 PushS
	HasAnimationTrack(var_50_bool, var_73_string); // 0x2c3 Func
	var_74_bool = var_50_bool; // 0x2c5 Push
	if(var_74_bool == 0) goto Label_714; // 0x2c6 JumpB
	var_75_string = "head"; // 0x2c7 PushS
	LookAsyncCamera(var_75_string); // 0x2c8 Func
}


func_784(var_76_float, var_77_cvector, var_78_cvector)
{
	var_79_int = var_77_cvector | var_78_cvector; // 0x311 Or
	var_80_int = var_77_cvector | var_77_cvector; // 0x312 Or
	var_81_int = var_78_cvector | var_78_cvector; // 0x313 Or
	var_82_float = var_80_int * var_81_int; // 0x314 Mult
	var_83_float = sqrt(var_82_float); // 0x315 Sqrt
	var_76_float = var_79_int / var_79_int; // 0x316 Div2
	return 0; // 0x317 Return
}


func_275(var_0_object, var_1_object, var_2_object, var_3_string, var_12_bool, var_13_float, var_14_float)
{
	var_15_bool = 0; // 0x114 PushV
	func_647(var_15_bool); // 0x115 NEW_2
	var_18_bool = var_15_bool == 0; // 0x117 Not
	if(var_18_bool == 0) goto Label_282; // 0x118 JumpB
	return 0; // 0x119 Return
	
Label_282:
	var_19_string = "player"; // 0x11a PushS
	FindActor(var_12_bool, var_19_string); // 0x11b Func
	var_2_object = 0; // 0x11d TMovB
	var_3_string = 0; // 0x11e TMovB
	var_0_object = var_13_float; // 0x11f TMov
	var_1_object = var_14_float; // 0x120 TMov
	var_20_int = 10; // 0x121 PushI
	var_21_float = 1.0; // 0x122 PushF
	SetTimer(var_20_int, var_21_float); // 0x123 Func
	func_354(); // 0x126 NEW_2
	var_73_bool = var_3_string == 0; // 0x128 Not
	if(var_73_bool == 0) goto Label_301; // 0x129 JumpB
	var_74_int = 10; // 0x12a PushI
	KillTimer(var_74_int); // 0x12b Func
	
Label_301:
	return 0; // 0x12d Return
}


func_919(var_81_int)
{
	var_82_int = 0; var_83_int = 0; // 0x397 PushV
	var_84_string = "branch"; // 0x398 PushS
	GetVariable(var_84_string, var_83_int); // 0x399 Func
	var_85_int = 0; // 0x39b PushI
	var_86_bool = var_83_int == var_85_int; // 0x39c Eq
	if(var_86_bool == 0) goto Label_929; // 0x39d JumpB
	var_81_int = 1; // 0x39e MovI
	return 2; // 0x39f Return
	
Label_929:
	var_87_int = 1; // 0x3a1 PushI
	var_88_bool = var_83_int == var_87_int; // 0x3a2 Eq
	if(var_88_bool == 0) goto Label_934; // 0x3a3 JumpB
	var_81_int = 2; // 0x3a4 MovI
	return 2; // 0x3a5 Return
	
Label_934:
	var_81_int = 3; // 0x3a6 MovI
	return 2; // 0x3a7 Return
}


func_792(var_34_float)
{
	var_35_float = 0; var_36_float = 0; // 0x318 PushV
	GetGameTime(var_36_float); // 0x319 Func
	var_34_float = var_36_float; // 0x31b Mov
	return 2; // 0x31c Return
}


func_797(var_78_int)
{
	var_78_int = 515558; // 0x31d MovI
	return 0; // 0x31e Return
}


func_799(var_77_int)
{
	var_77_int = 503343; // 0x31f MovI
	return 0; // 0x320 Return
}


func_801(var_79_string)
{
	var_79_string = "ui/NPC_None.png"; // 0x321 MovS
	return 0; // 0x322 Return
}


func_803(var_80_string)
{
	var_80_string = "ui/NPC_Black_b.png"; // 0x323 MovS
	return 0; // 0x324 Return
}


func_805(var_72_bool)
{
	var_72_bool = 0; // 0x325 MovB
	return 0; // 0x326 Return
}


func_807(var_44_string, var_45_int)
{
	var_46_string = ""; var_47_string = ""; // 0x327 PushV
	var_47_string = "idle"; // 0x328 MovS
	var_48_int = var_45_int; // 0x329 Push
	if(var_48_int == 0) goto Label_812; // 0x32a JumpB
	var_47_string = var_47_string + var_45_int; // 0x32b Add2
	
Label_812:
	var_44_string = var_47_string; // 0x32c Mov
	return 2; // 0x32d Return
}


func_302(var_0_object, var_1_object, var_4_bool, var_16_bool)
{
	var_17_float = 0; var_18_float = 0; // 0x12e PushV
	var_19_bool = var_4_bool == 0; // 0x12f NullEq
	if(var_19_bool == 0) goto Label_307; // 0x130 JumpB
	var_16_bool = 0; // 0x131 MovB
	return 2; // 0x132 Return
	
Label_307:
	var_20_float = 0; var_21_object = Obj(); // 0x133 PushV
	var_21_object = var_4_bool; // 0x134 MovT
	func_639(var_21_object); // 0x135 NEW_2
	var_18_float = sqrt(var_20_float); // 0x137 Sqrt2
	var_28_object = var_2_object; // 0x138 PushT
	if(var_28_object == 0) goto Label_315; // 0x139 JumpB
	var_18_float = var_18_float - var_1_object; // 0x13a Sub2
	
Label_315:
	var_16_bool = var_18_float < var_0_object; // 0x13b LT2
	return 2; // 0x13c Return
}


func_814(var_38_int)
{
	var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0; // 0x32e PushV
	var_41_int = 0; // 0x32f MovI
	
Label_816:
	var_43_string = "all"; // 0x330 PushS
	var_44_string = ""; var_45_int = 0; // 0x331 PushV
	var_45_int = var_41_int; // 0x332 Mov
	func_807(var_44_string, var_45_int); // 0x333 NEW_2
	HasAnimation(var_42_bool, var_43_string, var_44_string); // 0x335 Func
	var_49_bool = var_42_bool == 0; // 0x337 Not
	if(var_49_bool == 0) goto Label_826; // 0x338 JumpB
	goto Label_829; // 0x339 Jump
	
Label_829:
	var_38_int = var_41_int; // 0x33d Mov
	return 4; // 0x33e Return
	
Label_826:
	var_50_int = 1; // 0x33a PushI
	var_41_int = var_41_int + var_50_int; // 0x33b Add2
	goto Label_816; // 0x33c Jump
}


func_433(var_63_bool)
{
	var_63_bool = 1; // 0x1b1 MovB
	return 0; // 0x1b2 Return
}


func_435()
{
	StopAnimation(); // 0x1b3 Func
	StopGroup0(); // 0x1b5 Func
	return 0; // 0x1b7 Return
}


func_440(var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0; // 0x1b8 PushV
	GetPosition(var_35_cvector); // 0x1b9 Func
	GetPosition(var_36_cvector); // 0x1bb TObjFunc
	GetDirection(var_37_cvector); // 0x1bd Func
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x1bf PushV
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x1c0 PushV
	var_44_cvector = var_35_cvector - var_36_cvector; // 0x1c1 Sub2
	func_774(var_43_cvector, var_44_cvector); // 0x1c2 NEW_2
	var_50_float = 0.75; // 0x1c4 PushF
	var_51_float = var_37_cvector * var_50_float; // 0x1c5 Mult
	var_42_cvector = var_43_cvector + var_51_float; // 0x1c6 Add2
	func_774(var_41_cvector, var_42_cvector); // 0x1c7 NEW_2
	var_38_cvector = var_41_cvector; // 0x1c8 Mov
	var_52_int = 32; // 0x1ca PushI
	var_53_float = 7000.0; // 0x1cb PushF
	FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, var_52_int, var_53_float); // 0x1cc Func
	var_54_int = 100; // 0x1ce PushI
	var_40_float = var_40_float - var_54_int; // 0x1cf Sub2
	var_55_int = 0; // 0x1d0 PushI
	var_56_bool = var_40_float < var_55_int; // 0x1d1 LT
	if(var_56_bool == 0) goto Label_468; // 0x1d2 JumpB
	var_40_float = 0; // 0x1d3 MovI
	
Label_468:
	var_27_cvector = var_39_cvector * var_40_float; // 0x1d4 Mult2
	return 12; // 0x1d5 Return
}


func_831()
{
	var_39_object = Obj(); var_40_string = ""; var_41_float = 0; // 0x340 PushV
	var_42_object = Obj(); // 0x341 PushV
	func_869(var_42_object); // 0x342 NEW_2
	var_39_object = var_42_object; // 0x343 Mov
	var_40_string = "pt_map_eva"; // 0x345 MovS
	var_41_float = 2; // 0x346 MovI
	func_886(var_39_object, var_40_string, var_41_float); // 0x347 NEW_2
	var_62_object = Obj(); // 0x349 PushV
	func_869(var_62_object); // 0x34a NEW_2
	ShowMap(var_62_object); // 0x34c ObjFunc
	return 0; // 0x34e Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_90_object, var_91_object)
{
	var_0_object = var_91_object; // 0x4b TMov
	var_1_object = var_90_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_96_int = 1; // 0x4e PushI
	if(var_96_int == 0) goto Label_102; // 0x4f JumpB
	var_97_string = ""; // 0x50 PushV
	var_97_string = "Neutral"; // 0x51 MovS
	func_132(var_91_object, var_97_string); // 0x52 NEW_2
	var_109_int = 530185; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_int = 530186; // 0x59 PushI
	var_111_int = 31577; // 0x5a PushI
	var_112_int = 31576; // 0x5b PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x5c TObjFunc
	var_113_int = 530190; // 0x5e PushI
	var_114_int = -1; // 0x5f PushI
	var_115_int = 31579; // 0x60 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_116_bool = 0; // 0x66 PushV
	func_805(var_116_bool); // 0x67 NEW_2
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
	func_737(var_118_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_124_string = "all"; // 0x75 PushS
	var_125_string = "idle"; // 0x76 PushS
	PlayAnimation(var_124_string, var_125_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_126_string = var_3_string; // 0x7b PushT
	if(var_126_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_127_string = "all"; // 0x7e PushS
	var_128_string = "idle"; // 0x7f PushS
	PlayAnimation(var_127_string, var_128_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_847()
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x34f PushV
	var_23_object = Obj(); // 0x350 PushV
	func_869(var_23_object); // 0x351 NEW_2
	var_22_object = var_23_object; // 0x352 Mov
	var_30_string = "b4q01BoyGotoDanko"; // 0x354 PushS
	var_31_string = "pt_map_eva"; // 0x355 PushS
	var_32_int = 3; // 0x356 PushI
	var_33_int = 530189; // 0x357 PushI
	var_34_float = 0; // 0x358 PushV
	func_792(var_34_float); // 0x359 NEW_2
	AddMark(var_30_string, var_31_string, var_32_int, var_33_int, var_34_float); // 0x35b ObjFunc
	return 2; // 0x35d Return
}


func_720()
{
	var_131_bool = 0; var_132_bool = 0; // 0x2d0 PushV
	CameraSwitchToNormal(); // 0x2d1 Func
	var_133_bool = 0; // 0x2d3 PushV
	func_805(var_133_bool); // 0x2d4 NEW_2
	if(var_133_bool == 0) goto Label_728; // 0x2d6 JumpB
	goto Label_736; // 0x2d7 Jump
	
Label_736:
	return 2; // 0x2e0 Return
	
Label_728:
	var_134_string = "head"; // 0x2d8 PushS
	HasAnimationTrack(var_132_bool, var_134_string); // 0x2d9 Func
	var_135_bool = var_132_bool; // 0x2db Push
	if(var_135_bool == 0) goto Label_736; // 0x2dc JumpB
	var_136_string = "head"; // 0x2dd PushS
	UnlookAsync(var_136_string); // 0x2de Func
}


func_595(var_2_object)
{
	Stop(); // 0x253 Func
	var_14_int = 120; // 0x255 PushI
	KillTimer(var_14_int); // 0x256 Func
	var_2_object = 1; // 0x258 TMovB
	return 0; // 0x259 Return
}


func_340(var_2_object, var_3_string)
{
	func_435(); // 0x155 NEW_2
	var_16_int = 10; // 0x157 PushI
	KillTimer(var_16_int); // 0x158 Func
	var_17_object = var_2_object; // 0x15a PushT
	if(var_17_object == 0) goto Label_352; // 0x15b JumpB
	var_18_string = "head"; // 0x15c PushS
	UnlookAsync(var_18_string); // 0x15d Func
	var_2_object = 0; // 0x15f TMovB
	
Label_352:
	var_3_string = 1; // 0x160 TMovB
	return 0; // 0x161 Return
}


func_470(var_0_object, var_1_object, var_2_object, var_140_object)
{
	var_144_cvector = CVector(0,0,0); var_145_float = 0; var_146_bool = 0; var_147_cvector = CVector(0,0,0); var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_float = 0; var_151_bool = 0; var_152_cvector = CVector(0,0,0); var_153_float = 0; // 0x1d6 PushV
	var_0_object = var_140_object; // 0x1d7 TMov
	var_154_cvector = CVector(0,0,0); var_155_float = 0; // 0x1d8 PushV
	var_155_float = 1.74533; // 0x1d9 MovF
	func_440(var_154_cvector, var_155_float); // 0x1da NEW_2
	var_149_cvector = var_154_cvector; // 0x1db Mov
	var_150_float = var_149_cvector | var_149_cvector; // 0x1dd Or2
	var_179_float = 2500.0; // 0x1de PushF
	var_180_bool = var_150_float < var_179_float; // 0x1df LT
	if(var_180_bool == 0) goto Label_499; // 0x1e0 JumpB
	var_181_cvector = CVector(0,0,0); var_182_float = 0; // 0x1e1 PushV
	var_182_float = 2.61799; // 0x1e2 MovF
	func_440(var_181_cvector, var_182_float); // 0x1e3 NEW_2
	var_149_cvector = var_181_cvector; // 0x1e4 Mov
	var_150_float = var_149_cvector | var_149_cvector; // 0x1e6 Or2
	var_183_float = 2500.0; // 0x1e7 PushF
	var_184_bool = var_150_float < var_183_float; // 0x1e8 LT
	if(var_184_bool == 0) goto Label_499; // 0x1e9 JumpB
	var_185_string = "Can't retreat, distance: "; // 0x1ea PushS
	var_186_float = sqrt(var_150_float); // 0x1eb Sqrt
	var_187_int = var_185_string + var_186_float; // 0x1ec Add
	Trace(var_187_int); // 0x1ed Func
	var_188_float = 0.5; // 0x1ef PushF
	Sleep(var_188_float); // 0x1f0 Func
	return 10; // 0x1f2 Return
	
Label_499:
	var_189_float = GetByIndex(var_149_cvector, 0); // 0x1f3 PushE
	var_190_float = GetByIndex(var_149_cvector, 2); // 0x1f4 PushE
	Rotate(var_189_float, var_190_float); // 0x1f5 Func
	var_191_cvector = CVector(0,0,0); // 0x1f7 PushV
	func_627(var_191_cvector); // 0x1f8 NEW_2
	var_1_object = var_191_cvector + var_149_cvector; // 0x1fa Add2
	var_194_int = 120; // 0x1fb PushI
	var_195_float = 0.5; // 0x1fc PushF
	SetTimer(var_194_int, var_195_float); // 0x1fd Func
	var_2_object = 0; // 0x1ff TMovB
	
Label_512:
	var_196_int = 1; // 0x200 PushI
	MovePoint(var_196_int, var_196_int, var_151_bool); // 0x201 Func
	var_197_bool = var_151_bool; // 0x203 Push
	if(var_197_bool == 0) goto Label_540; // 0x204 JumpB
	var_198_bool = var_0_object == 0; // 0x205 NullEq
	if(var_198_bool == 0) goto Label_521; // 0x206 JumpB
	goto Label_542; // 0x207 Jump
	
Label_542:
	return 10; // 0x21e Return
	
Label_521:
	var_199_cvector = CVector(0,0,0); var_200_float = 0; // 0x209 PushV
	var_200_float = 2.61799; // 0x20a MovF
	func_440(var_199_cvector, var_200_float); // 0x20b NEW_2
	var_152_cvector = var_199_cvector; // 0x20c Mov
	var_153_float = var_152_cvector | var_152_cvector; // 0x20e Or2
	var_201_float = 2500.0; // 0x20f PushF
	var_202_bool = var_153_float >= var_201_float; // 0x210 GE
	if(var_202_bool == 0) goto Label_539; // 0x211 JumpB
	var_203_cvector = CVector(0,0,0); // 0x212 PushV
	func_627(var_203_cvector); // 0x213 NEW_2
	var_1_object = var_203_cvector + var_152_cvector; // 0x215 Add2
	var_204_int = 120; // 0x216 PushI
	var_205_float = 0.5; // 0x217 PushF
	SetTimer(var_204_int, var_205_float); // 0x218 Func
	goto Label_540; // 0x21a Jump
	
Label_540:
	var_206_bool = var_2_object == 0; // 0x21c Not
	if(var_206_bool == 0) goto Label_512; // 0x21d JumpB
	
Label_539:
	goto Label_542; // 0x21b Jump
}


func_863()
{
	var_69_string = "playsound"; // 0x360 PushS
	var_70_string = "mapmark"; // 0x361 PushS
	TriggerWorld(var_69_string, var_70_string); // 0x362 Func
	return 0; // 0x364 Return
}


func_737(var_118_string)
{
	var_119_float = 0; var_120_float = 0; var_121_float = 0; var_122_float = 0; // 0x2e1 PushV
	lshGetAnimTimes(var_118_string, var_121_float, var_122_float); // 0x2e2 Func
	var_123_bool = 0; // 0x2e4 PushB
	lshPlayAnimation(var_121_float, var_122_float, var_123_bool); // 0x2e5 Func
	return 4; // 0x2e7 Return
}


func_354()
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; // 0x162 PushV
	WaitForAnimEnd(); // 0x163 Func
	var_36_bool = 0; // 0x165 PushV
	func_647(var_36_bool); // 0x166 NEW_2
	var_37_bool = var_36_bool == 0; // 0x168 Not
	if(var_37_bool == 0) goto Label_363; // 0x169 JumpB
	return 14; // 0x16a Return
	
Label_363:
	var_38_int = 0; // 0x16b PushV
	func_814(var_38_int); // 0x16c NEW_2
	var_29_int = var_38_int; // 0x16d Mov
	var_30_int = 0; // 0x16f MovI
	
Label_368:
	var_51_bool = 0; // 0x170 PushV
	var_51_bool = 0; // 0x171 MovB
	var_52_int = 5; // 0x172 PushI
	var_53_bool = var_30_int < var_52_int; // 0x173 LT
	if(var_53_bool == 0) goto Label_378; // 0x174 JumpB
	var_54_bool = 0; // 0x175 PushV
	func_647(var_54_bool); // 0x176 NEW_2
	if(var_54_bool == 0) goto Label_378; // 0x178 JumpB
	var_51_bool = 1; // 0x179 MovB
	
Label_378:
	if(var_51_bool == 0) goto Label_430; // 0x17a JumpB
	var_55_int = 3; // 0x17b PushI
	irand(var_31_int, var_55_int); // 0x17c Func
	var_56_int = 0; // 0x17e PushI
	var_57_bool = var_31_int == var_56_int; // 0x17f Eq
	if(var_57_bool == 0) goto Label_402; // 0x180 JumpB
	var_58_int = var_29_int; // 0x181 Push
	if(var_58_int == 0) goto Label_401; // 0x182 JumpB
	irand(var_32_int, var_29_int); // 0x183 Func
	var_59_string = "all"; // 0x185 PushS
	var_60_string = ""; var_61_int = 0; // 0x186 PushV
	var_61_int = var_32_int; // 0x187 Mov
	func_807(var_60_string, var_61_int); // 0x188 NEW_2
	PlayAnimation(var_59_string, var_60_string); // 0x18a Func
	WaitForAnimEnd(var_33_bool); // 0x18c Func
	var_62_bool = var_33_bool == 0; // 0x18e Not
	if(var_62_bool == 0) goto Label_401; // 0x18f JumpB
	goto Label_430; // 0x190 Jump
	
Label_430:
	ResetAAS(); // 0x1ae Func
	return 14; // 0x1b0 Return
	
Label_401:
	goto Label_419; // 0x191 Jump
	
Label_419:
	var_63_bool = 0; // 0x1a3 PushV
	func_433(var_63_bool); // 0x1a4 NEW_2
	var_64_bool = var_63_bool == 0; // 0x1a6 Not
	if(var_64_bool == 0) goto Label_425; // 0x1a7 JumpB
	goto Label_430; // 0x1a8 Jump
	
Label_425:
	ResetAAS(); // 0x1a9 Func
	var_65_int = 1; // 0x1ab PushI
	var_30_int = var_30_int + var_65_int; // 0x1ac Add2
	goto Label_368; // 0x1ad Jump
	
Label_402:
	var_66_int = 1; // 0x192 PushI
	var_67_bool = var_31_int == var_66_int; // 0x193 Eq
	if(var_67_bool == 0) goto Label_416; // 0x194 JumpB
	var_68_int = 4; // 0x195 PushI
	rand(var_34_float, var_68_int); // 0x196 Func
	var_69_int = 1; // 0x198 PushI
	var_70_int = var_34_float + var_69_int; // 0x199 Add
	Sleep(var_70_int, var_35_bool); // 0x19a Func
	var_71_bool = var_35_bool == 0; // 0x19c Not
	if(var_71_bool == 0) goto Label_415; // 0x19d JumpB
	goto Label_430; // 0x19e Jump
	
Label_415:
	goto Label_419; // 0x19f Jump
	
Label_416:
	var_72_int = var_30_int; // 0x1a0 Push
	if(var_72_int == 0) goto Label_419; // 0x1a1 JumpB
	goto Label_430; // 0x1a2 Jump
}


func_611(var_0_object, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x263 PushV
	GetDirection(var_68_cvector); // 0x264 Func
	var_70_cvector = CVector(0,0,0); var_71_object = Obj(); // 0x266 PushV
	var_71_object = var_0_object; // 0x267 MovT
	func_632(var_71_object); // 0x268 NEW_2
	var_69_cvector = var_70_cvector; // 0x269 Mov
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x26b PushV
	var_77_cvector = var_68_cvector; // 0x26c Mov
	var_78_cvector = var_69_cvector; // 0x26d Mov
	func_784(var_76_float, var_77_cvector, var_78_cvector); // 0x26e NEW_2
	var_84_float = -0.34202; // 0x270 PushF
	var_65_bool = var_76_float >= var_84_float; // 0x271 GE2
	return 4; // 0x272 Return
}


func_869(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); // 0x365 PushV
	GetMainOutdoorScene(var_26_object); // 0x366 Func
	var_28_bool = var_26_object == 0; // 0x368 NullEq
	if(var_28_bool == 0) goto Label_880; // 0x369 JumpB
	var_29_string = "Can't find main outdoor scene"; // 0x36a PushS
	Trace(var_29_string); // 0x36b Func
	var_27_object = 0; // 0x36d SetNull
	var_23_object = var_27_object; // 0x36e Mov
	return 4; // 0x36f Return
	
Label_880:
	GetMap(var_27_object); // 0x370 ObjFunc
	var_23_object = var_27_object; // 0x372 Mov
	return 4; // 0x373 Return
}


func_744(var_101_string, var_102_bool)
{
	var_105_float = 0; var_106_float = 0; var_107_float = 0; var_108_float = 0; // 0x2e8 PushV
	lshGetAnimTimes(var_101_string, var_107_float, var_108_float); // 0x2e9 Func
	lshPlayAnimation(var_107_float, var_108_float, var_102_bool); // 0x2eb Func
	return 4; // 0x2ed Return
}


func_750(var_30_object)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0); // 0x2ee PushV
	GetEyesHeight(var_33_float); // 0x2ef ObjFunc
	var_34_cvector = CVector(0.0, 0.0, 0.0); // 0x2f1 MovV
	var_35_float = GetByIndex(var_34_cvector, 1); // 0x2f2 PushE
	var_35_float = var_33_float; // 0x2f3 Mov
	SetByIndex(var_34_cvector, 1) = var_35_float; // 0x2f4 PopE
	var_36_string = "head"; // 0x2f5 PushS
	LookAsync(var_30_object, var_36_string, var_34_cvector); // 0x2f6 Func
	return 4; // 0x2f8 Return
}


func_627(var_85_cvector)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x273 PushV
	GetPosition(var_87_cvector); // 0x274 Func
	var_85_cvector = var_87_cvector; // 0x276 Mov
	return 2; // 0x277 Return
}


func_886(var_39_object, var_40_string, var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_object = Obj(); var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_object = Obj(); var_50_bool = 0; // 0x376 PushV
	GetMainOutdoorScene(var_49_object); // 0x377 Func
	var_51_bool = var_49_object == 0; // 0x379 NullEq
	if(var_51_bool == 0) goto Label_895; // 0x37a JumpB
	var_52_string = "Can't find main outdoor scene"; // 0x37b PushS
	Trace(var_52_string); // 0x37c Func
	return 8; // 0x37e Return
	
Label_895:
	GetLocator(var_40_string, var_50_bool, var_47_cvector, var_48_cvector); // 0x37f ObjFunc
	var_53_bool = var_50_bool == 0; // 0x381 Not
	if(var_53_bool == 0) goto Label_905; // 0x382 JumpB
	var_54_string = "Warning: outdoor scene locator "; // 0x383 PushS
	var_55_int = var_54_string + var_40_string; // 0x384 Add
	var_56_string = " doesnt exist"; // 0x385 PushS
	var_57_int = var_55_int + var_56_string; // 0x386 Add
	Trace(var_57_int); // 0x387 Func
	
Label_905:
	GetMap(var_39_object); // 0x389 ObjFunc
	var_58_bool = var_39_object == 0; // 0x38b NullEq
	if(var_58_bool == 0) goto Label_913; // 0x38c JumpB
	var_59_string = "Can't find map"; // 0x38d PushS
	Trace(var_59_string); // 0x38e Func
	return 8; // 0x390 Return
	
Label_913:
	var_60_float = GetByIndex(var_47_cvector, 0); // 0x391 PushE
	var_61_float = GetByIndex(var_47_cvector, 2); // 0x392 PushE
	SetMapParams(var_60_float, var_61_float, var_41_float); // 0x393 ObjFunc
	return 8; // 0x395 Return
}


func_632(var_70_cvector)
{
	var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0x278 PushV
	GetPosition(var_74_cvector); // 0x279 Func
	GetPosition(var_75_cvector); // 0x27b ObjFunc
	var_70_cvector = var_75_cvector - var_74_cvector; // 0x27d Sub2
	return 4; // 0x27e Return
}


func_761()
{
	var_16_bool = 0; // 0x2f9 PushV
	func_805(var_16_bool); // 0x2fa NEW_2
	if(var_16_bool == 0) goto Label_767; // 0x2fc JumpB
	lshStopSpeech(); // 0x2fd Func
	
Label_767:
	return 0; // 0x2ff Return
}


func_639(var_20_float)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x27f PushV
	GetPosition(var_25_cvector); // 0x280 Func
	GetPosition(var_26_cvector); // 0x282 ObjFunc
	var_27_cvector = var_26_cvector - var_25_cvector; // 0x284 Sub2
	var_20_float = var_27_cvector | var_27_cvector; // 0x285 Or2
	return 6; // 0x286 Return
}


