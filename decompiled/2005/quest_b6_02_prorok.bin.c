task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xaf PushI
	if(var_8_int == 0) goto Label_341; // 0xb0 JumpB
	func_632(); // 0xb2 NEW_2
	var_10_int = 22397; // 0xb4 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xb5 Eq
	if(var_11_bool == 0) goto Label_188; // 0xb6 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xb7 PushV
	var_12_object = var_1_object; // 0xb8 MovT
	var_13_object = var_0_object; // 0xb9 MovT
	func_684(); // 0xba NEW_2
	
Label_188:
	var_39_int = 22383; // 0xbc PushI
	var_40_bool = var_6_int == var_39_int; // 0xbd Eq
	if(var_40_bool == 0) goto Label_231; // 0xbe JumpB
	var_41_bool = 0; var_42_object = Obj(); // 0xbf PushV
	var_42_object = var_1_object; // 0xc0 MovT
	func_699(var_42_object); // 0xc1 NEW_2
	if(var_41_bool == 0) goto Label_216; // 0xc3 JumpB
	var_49_object = Obj(); var_50_object = Obj(); // 0xc4 PushV
	var_49_object = var_1_object; // 0xc5 MovT
	var_50_object = var_0_object; // 0xc6 MovT
	func_693(); // 0xc7 NEW_2
	var_53_string = ""; // 0xc9 PushV
	var_53_string = "Neutral"; // 0xca MovS
	func_152(var_7_bool, var_53_string); // 0xcb NEW_2
	var_70_int = 521181; // 0xcd PushI
	SetMessage(var_70_int); // 0xce TObjFunc
	ClearReplies(); // 0xd0 TObjFunc
	var_71_int = 528428; // 0xd2 PushI
	var_72_int = 29813; // 0xd3 PushI
	var_73_int = 29812; // 0xd4 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xd5 TObjFunc
	return 0; // 0xd7 Return
	
Label_216:
	var_74_string = ""; // 0xd8 PushV
	var_74_string = "Neutral"; // 0xd9 MovS
	func_152(var_7_bool, var_74_string); // 0xda NEW_2
	var_75_int = 521197; // 0xdc PushI
	SetMessage(var_75_int); // 0xdd TObjFunc
	ClearReplies(); // 0xdf TObjFunc
	var_76_int = 521198; // 0xe1 PushI
	var_77_int = -1; // 0xe2 PushI
	var_78_int = 22395; // 0xe3 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_79_int = 29819; // 0xe7 PushI
	var_80_bool = var_6_int == var_79_int; // 0xe8 Eq
	if(var_80_bool == 0) goto Label_234; // 0xe9 JumpB
	
Label_234:
	var_81_int = 29821; // 0xea PushI
	var_82_bool = var_6_int == var_81_int; // 0xeb Eq
	if(var_82_bool == 0) goto Label_252; // 0xec JumpB
	var_83_string = ""; // 0xed PushV
	var_83_string = "Neutral"; // 0xee MovS
	func_152(var_7_bool, var_83_string); // 0xef NEW_2
	var_84_int = 528437; // 0xf1 PushI
	SetMessage(var_84_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_85_int = 528438; // 0xf6 PushI
	var_86_int = 29815; // 0xf7 PushI
	var_87_int = 29822; // 0xf8 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_88_int = 29813; // 0xfc PushI
	var_89_bool = var_6_int == var_88_int; // 0xfd Eq
	if(var_89_bool == 0) goto Label_270; // 0xfe JumpB
	var_90_string = ""; // 0xff PushV
	var_90_string = "Neutral"; // 0x100 MovS
	func_152(var_7_bool, var_90_string); // 0x101 NEW_2
	var_91_int = 528429; // 0x103 PushI
	SetMessage(var_91_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_92_int = 528430; // 0x108 PushI
	var_93_int = 29815; // 0x109 PushI
	var_94_int = 29814; // 0x10a PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x10b TObjFunc
	return 0; // 0x10d Return
	
Label_270:
	var_95_int = 29815; // 0x10e PushI
	var_96_bool = var_6_int == var_95_int; // 0x10f Eq
	if(var_96_bool == 0) goto Label_293; // 0x110 JumpB
	var_97_string = ""; // 0x111 PushV
	var_97_string = "Neutral"; // 0x112 MovS
	func_152(var_7_bool, var_97_string); // 0x113 NEW_2
	var_98_int = 528431; // 0x115 PushI
	SetMessage(var_98_int); // 0x116 TObjFunc
	ClearReplies(); // 0x118 TObjFunc
	var_99_int = 528432; // 0x11a PushI
	var_100_int = 29817; // 0x11b PushI
	var_101_int = 29816; // 0x11c PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x11d TObjFunc
	var_102_int = 528439; // 0x11f PushI
	var_103_int = 29817; // 0x120 PushI
	var_104_int = 29824; // 0x121 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x122 TObjFunc
	return 0; // 0x124 Return
	
Label_293:
	var_105_int = 29817; // 0x125 PushI
	var_106_bool = var_6_int == var_105_int; // 0x126 Eq
	if(var_106_bool == 0) goto Label_311; // 0x127 JumpB
	var_107_string = ""; // 0x128 PushV
	var_107_string = "Neutral"; // 0x129 MovS
	func_152(var_7_bool, var_107_string); // 0x12a NEW_2
	var_108_int = 528433; // 0x12c PushI
	SetMessage(var_108_int); // 0x12d TObjFunc
	ClearReplies(); // 0x12f TObjFunc
	var_109_int = 521182; // 0x131 PushI
	var_110_int = 22396; // 0x132 PushI
	var_111_int = 22384; // 0x133 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_112_int = 22396; // 0x137 PushI
	var_113_bool = var_6_int == var_112_int; // 0x138 Eq
	if(var_113_bool == 0) goto Label_329; // 0x139 JumpB
	var_114_string = ""; // 0x13a PushV
	var_114_string = "Neutral"; // 0x13b MovS
	func_152(var_7_bool, var_114_string); // 0x13c NEW_2
	var_115_int = 521199; // 0x13e PushI
	SetMessage(var_115_int); // 0x13f TObjFunc
	ClearReplies(); // 0x141 TObjFunc
	var_116_int = 521200; // 0x143 PushI
	var_117_int = -1; // 0x144 PushI
	var_118_int = 22397; // 0x145 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x146 TObjFunc
	return 0; // 0x148 Return
	
Label_329:
	var_3_string = 1; // 0x149 TMovB
	var_119_bool = 0; // 0x14a PushV
	func_790(var_119_bool); // 0x14b NEW_2
	if(var_119_bool == 0) goto Label_337; // 0x14d JumpB
	lshStopAnimation(); // 0x14e Func
	goto Label_339; // 0x150 Jump
	
Label_339:
	return 0; // 0x153 Return
	
Label_337:
	StopAnimation(); // 0x151 Func
	
Label_341:
	return 0; // 0x155 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_506(); // 0x158 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x15a PushV
	var_8_object = var_6_object; // 0x15b Mov
	TaskCall(0); // 0x15c TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x15d NEW_2
	TaskReturn(); // 0x15e TaskReturn
	return 0; // 0x160 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x18b PushS
	var_8_bool = var_6_string == var_7_string; // 0x18c Eq
	if(var_8_bool == 0) goto Label_401; // 0x18d JumpB
	func_374(var_6_string); // 0x18f NEW_2
	
Label_401:
	return 0; // 0x191 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x192 Func
	sync(); // 0x194 Func
	return 0; // 0x196 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x197 PushV
	var_6_bool = 0; // 0x198 MovB
	var_7_object = var_0_object; // 0x199 PushT
	if(var_7_object == 0) goto Label_416; // 0x19a JumpB
	var_8_bool = 0; // 0x19b PushV
	func_423(var_8_bool); // 0x19c NEW_2
	if(var_8_bool == 0) goto Label_416; // 0x19e JumpB
	var_6_bool = 1; // 0x19f MovB
	
Label_416:
	if(var_6_bool == 0) goto Label_422; // 0x1a0 JumpB
	var_9_object = Obj(); // 0x1a1 PushV
	func_639(var_9_object); // 0x1a2 NEW_2
	RemoveActor(var_9_object); // 0x1a4 Func
	
Label_422:
	return 0; // 0x1a6 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x161 PushV
	
Label_354:
	var_8_bool = 0; // 0x162 PushV
	func_511(var_8_bool); // 0x163 NEW_2
	var_11_bool = var_8_bool == 0; // 0x165 Not
	if(var_11_bool == 0) goto Label_362; // 0x166 JumpB
	Hold(); // 0x167 Func
	goto Label_354; // 0x169 Jump
	
Label_362:
	var_12_int = 3; // 0x16a PushI
	rand(var_7_float, var_12_int); // 0x16b Func
	var_13_int = 3; // 0x16d PushI
	var_14_int = var_7_float + var_13_int; // 0x16e Add
	Sleep(var_14_int); // 0x16f Func
	func_425(); // 0x172 NEW_2
	goto Label_354; // 0x174 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_516(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_784(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_782(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_786(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_788(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_765(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_object = Obj(); var_79_object = Obj(); // 0x2f PushV
	var_78_object = var_8_object; // 0x30 Mov
	var_79_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_141_bool = var_17_bool == 0; // 0x38 Not
	if(var_141_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_142_object = Obj(); // 0x3f PushV
	var_142_object = var_8_object; // 0x40 Mov
	func_584(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_516(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x204 PushV
	GetPosition(var_31_cvector); // 0x205 ObjFunc
	GetEyesHeight(var_30_float); // 0x207 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x209 PushE
	var_39_float = var_39_float + var_30_float; // 0x20a Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x20b PopE
	GetPosition(var_32_cvector); // 0x20c Func
	GetEyesHeight(var_30_float); // 0x20e Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x210 PushE
	var_40_float = var_40_float + var_30_float; // 0x211 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x212 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x213 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x214 PushE
	var_41_float = 0; // 0x215 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x216 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x217 Or
	var_43_float = sqrt(var_42_int); // 0x218 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x219 Div2
	var_34_cvector = -var_33_cvector; // 0x21a Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x21b Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x21c PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x21d PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x21e Xor2
	func_645(var_45_cvector, var_46_cvector); // 0x21f NEW_2
	var_53_int = 25; // 0x221 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x222 Mult
	var_55_int = var_44_float + var_54_float; // 0x223 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x224 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x225 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x226 Add2
	IsOverrideActive(var_37_bool); // 0x227 Func
	var_57_bool = var_37_bool; // 0x229 Push
	if(var_57_bool == 0) goto Label_557; // 0x22a JumpB
	var_18_bool = 0; // 0x22b MovB
	return 18; // 0x22c Return
	
Label_557:
	StopWorld(); // 0x22d Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x22f Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x231 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x232 PushE
	Rotate(var_58_float, var_59_float); // 0x233 Func
	var_60_bool = 0; // 0x235 PushV
	func_790(var_60_bool); // 0x236 NEW_2
	if(var_60_bool == 0) goto Label_570; // 0x238 JumpB
	goto Label_578; // 0x239 Jump
	
Label_578:
	CameraWaitForPlayFinish(); // 0x242 Func
	ResumeWorld(); // 0x244 Func
	var_18_bool = 1; // 0x246 MovB
	return 18; // 0x247 Return
	
Label_570:
	var_61_string = "head"; // 0x23a PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x23b Func
	var_62_bool = var_38_bool; // 0x23d Push
	if(var_62_bool == 0) goto Label_578; // 0x23e JumpB
	var_63_string = "head"; // 0x23f PushS
	LookAsyncCamera(var_63_string); // 0x240 Func
}


func_645(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x285 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x286 Or
	var_49_float = sqrt(var_50_int); // 0x287 Sqrt2
	var_51_float = 0.0; // 0x288 PushF
	var_52_bool = var_49_float < var_51_float; // 0x289 LT
	if(var_52_bool == 0) goto Label_653; // 0x28a JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x28b MovV
	return 2; // 0x28c Return
	
Label_653:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x28d Div2
	return 2; // 0x28e Return
}


func_711()
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x2c7 PushV
	var_18_int = 268; // 0x2c8 PushI
	var_19_int = 2; // 0x2c9 PushI
	var_20_int = 521195; // 0x2ca PushI
	CreateDiaryEntry(var_17_object, var_18_int, var_19_int, var_20_int); // 0x2cb Func
	var_21_bool = 0; var_22_object = Obj(); var_23_int = 0; // 0x2cd PushV
	var_22_object = var_17_object; // 0x2ce Mov
	var_23_int = 266; // 0x2cf MovI
	func_737(var_21_bool, var_22_object, var_23_int); // 0x2d0 NEW_2
	return 2; // 0x2d2 Return
}


func_584()
{
	var_143_bool = 0; var_144_bool = 0; // 0x248 PushV
	CameraSwitchToNormal(); // 0x249 Func
	var_145_bool = 0; // 0x24b PushV
	func_790(var_145_bool); // 0x24c NEW_2
	if(var_145_bool == 0) goto Label_592; // 0x24e JumpB
	goto Label_600; // 0x24f Jump
	
Label_600:
	return 2; // 0x258 Return
	
Label_592:
	var_146_string = "head"; // 0x250 PushS
	HasAnimationTrack(var_144_bool, var_146_string); // 0x251 Func
	var_147_bool = var_144_bool; // 0x253 Push
	if(var_147_bool == 0) goto Label_600; // 0x254 JumpB
	var_148_string = "head"; // 0x255 PushS
	UnlookAsync(var_148_string); // 0x256 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object; // 0x4b TMov
	var_1_object = var_78_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_84_int = 1; // 0x4e PushI
	if(var_84_int == 0) goto Label_122; // 0x4f JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x50 PushV
	var_86_object = var_1_object; // 0x51 MovT
	func_699(var_86_object); // 0x52 NEW_2
	if(var_85_bool == 0) goto Label_105; // 0x54 JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0x55 PushV
	var_93_object = var_1_object; // 0x56 MovT
	var_94_object = var_0_object; // 0x57 MovT
	func_693(); // 0x58 NEW_2
	var_97_string = ""; // 0x5a PushV
	var_97_string = "Neutral"; // 0x5b MovS
	func_152(var_79_object, var_97_string); // 0x5c NEW_2
	var_114_int = 521181; // 0x5e PushI
	SetMessage(var_114_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_115_int = 528428; // 0x63 PushI
	var_116_int = 29813; // 0x64 PushI
	var_117_int = 29812; // 0x65 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x66 TObjFunc
	goto Label_122; // 0x68 Jump
	
Label_122:
	var_118_bool = 0; // 0x7a PushV
	func_790(var_118_bool); // 0x7b NEW_2
	if(var_118_bool == 0) goto Label_137; // 0x7d JumpB
	
Label_126:
	lshWaitForAnimEnd(); // 0x7e Func
	var_119_string = var_3_string; // 0x80 PushT
	if(var_119_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_136:
	goto Label_151; // 0x88 Jump
	
Label_151:
	return 0; // 0x97 Return
	
Label_131:
	var_120_string = ""; // 0x83 PushV
	var_120_string = var_2_object; // 0x84 MovT
	func_601(var_120_string); // 0x85 NEW_2
	goto Label_126; // 0x87 Jump
	
Label_137:
	var_131_string = "all"; // 0x89 PushS
	var_132_string = "idle"; // 0x8a PushS
	PlayAnimation(var_131_string, var_132_string); // 0x8b Func
	
Label_141:
	WaitForAnimEnd(); // 0x8d Func
	var_133_string = var_3_string; // 0x8f PushT
	if(var_133_string == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_146:
	var_134_string = "all"; // 0x92 PushS
	var_135_string = "idle"; // 0x93 PushS
	PlayAnimation(var_134_string, var_135_string); // 0x94 Func
	goto Label_141; // 0x96 Jump
	
Label_105:
	var_136_string = ""; // 0x69 PushV
	var_136_string = "Neutral"; // 0x6a MovS
	func_152(var_79_object, var_136_string); // 0x6b NEW_2
	var_137_int = 521197; // 0x6d PushI
	SetMessage(var_137_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_138_int = 521198; // 0x72 PushI
	var_139_int = -1; // 0x73 PushI
	var_140_int = 22395; // 0x74 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x75 TObjFunc
	goto Label_122; // 0x77 Jump
}


func_782(var_66_int)
{
	var_66_int = 518716; // 0x30e MovI
	return 0; // 0x30f Return
}


func_655(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0; // 0x28f PushV
	GetVariable(var_88_string, var_90_int); // 0x290 Func
	var_87_int = var_90_int; // 0x292 Mov
	return 2; // 0x293 Return
}


func_784(var_65_int)
{
	var_65_int = 518715; // 0x310 MovI
	return 0; // 0x311 Return
}


func_639(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x27f PushV
	self(var_11_object); // 0x280 Func
	var_9_object = var_11_object; // 0x282 Mov
	return 2; // 0x283 Return
}


func_786(var_67_string)
{
	var_67_string = "ui/NPC_Prophet.png"; // 0x312 MovS
	return 0; // 0x313 Return
}


func_788(var_68_string)
{
	var_68_string = "ui/NPC_Prophet_b.png"; // 0x314 MovS
	return 0; // 0x315 Return
}


func_660(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x294 PushV
	var_40_string = "idle"; // 0x295 MovS
	var_41_int = var_38_int; // 0x296 Push
	if(var_41_int == 0) goto Label_665; // 0x297 JumpB
	var_40_string = var_40_string + var_38_int; // 0x298 Add2
	
Label_665:
	var_37_string = var_40_string; // 0x299 Mov
	return 2; // 0x29a Return
}


func_790(var_60_bool)
{
	var_60_bool = 0; // 0x316 MovB
	return 0; // 0x317 Return
}


func_724(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x2d4 PushV
	GetDiaryRoot(var_32_object); // 0x2d5 Func
	var_33_bool = var_32_object == 0; // 0x2d7 Not
	if(var_33_bool == 0) goto Label_734; // 0x2d8 JumpB
	var_34_string = "Can't retrieve diary root"; // 0x2d9 PushS
	Trace(var_34_string); // 0x2da Func
	var_30_object = 0; // 0x2dc MovB
	return 2; // 0x2dd Return
	
Label_734:
	var_30_object = var_32_object; // 0x2de Mov
	return 2; // 0x2df Return
}


func_152(var_2_object, var_97_string)
{
	var_98_bool = 0; // 0x99 PushV
	func_790(var_98_bool); // 0x9a NEW_2
	var_99_bool = var_98_bool == 0; // 0x9c Not
	if(var_99_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_100_bool = var_97_string == var_2_object; // 0x9f Eq
	if(var_100_bool == 0) goto Label_162; // 0xa0 JumpB
	return 0; // 0xa1 Return
	
Label_162:
	var_101_string = ""; var_102_bool = 0; // 0xa2 PushV
	var_101_string = var_97_string; // 0xa3 Mov
	var_103_string = ""; // 0xa4 PushS
	var_104_bool = var_97_string == var_103_string; // 0xa5 Eq
	if(var_104_bool == 0) goto Label_169; // 0xa6 JumpB
	var_102_bool = 0; // 0xa7 MovB
	goto Label_170; // 0xa8 Jump
	
Label_170:
	func_617(var_101_string, var_102_bool); // 0xaa NEW_2
	var_2_object = var_97_string; // 0xac TMov
	return 0; // 0xad Return
	
Label_169:
	var_102_bool = 1; // 0xa9 MovB
}


func_601(var_120_string)
{
	var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0; // 0x259 PushV
	lshHasAnimation(var_124_bool, var_120_string); // 0x25a Func
	var_127_bool = var_124_bool; // 0x25c Push
	if(var_127_bool == 0) goto Label_612; // 0x25d JumpB
	lshGetAnimTimes(var_120_string, var_125_float, var_126_float); // 0x25e Func
	var_128_bool = 0; // 0x260 PushB
	lshPlayAnimation(var_125_float, var_126_float, var_128_bool); // 0x261 Func
	goto Label_616; // 0x263 Jump
	
Label_616:
	return 6; // 0x268 Return
	
Label_612:
	var_129_string = "Can't find lsh animation : "; // 0x264 PushS
	var_130_int = var_129_string + var_120_string; // 0x265 Add
	Trace(var_130_int); // 0x266 Func
}


func_667(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x29b PushV
	var_34_int = 0; // 0x29c MovI
	
Label_669:
	var_36_string = "all"; // 0x29d PushS
	var_37_string = ""; var_38_int = 0; // 0x29e PushV
	var_38_int = var_34_int; // 0x29f Mov
	func_660(var_37_string, var_38_int); // 0x2a0 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x2a2 Func
	var_42_bool = var_35_bool == 0; // 0x2a4 Not
	if(var_42_bool == 0) goto Label_679; // 0x2a5 JumpB
	goto Label_682; // 0x2a6 Jump
	
Label_682:
	var_31_int = var_34_int; // 0x2aa Mov
	return 4; // 0x2ab Return
	
Label_679:
	var_43_int = 1; // 0x2a7 PushI
	var_34_int = var_34_int + var_43_int; // 0x2a8 Add2
	goto Label_669; // 0x2a9 Jump
}


func_737(var_21_bool, var_22_object, var_23_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; // 0x2e1 PushV
	var_30_object = Obj(); // 0x2e2 PushV
	func_724(var_30_object); // 0x2e3 NEW_2
	var_27_object = var_30_object; // 0x2e4 Mov
	Find(var_23_int, var_28_object); // 0x2e6 ObjFunc
	var_35_bool = var_28_object == 0; // 0x2e8 Not
	if(var_35_bool == 0) goto Label_752; // 0x2e9 JumpB
	var_36_string = "Can't find diary parent with id: "; // 0x2ea PushS
	var_37_int = var_36_string + var_23_int; // 0x2eb Add
	Trace(var_37_int); // 0x2ec Func
	var_21_bool = 0; // 0x2ee MovB
	return 6; // 0x2ef Return
	
Label_752:
	AddChild(var_22_object); // 0x2f0 ObjFunc
	var_38_int = 7; // 0x2f2 PushI
	SendWorldWndMessage(var_38_int); // 0x2f3 Func
	GetCategory(var_29_int); // 0x2f5 ObjFunc
	SetDiarySection(var_29_int); // 0x2f7 Func
	var_21_bool = 0; // 0x2f9 MovB
	return 6; // 0x2fa Return
}


func_423(var_8_bool)
{
	var_8_bool = 1; // 0x1a7 MovB
	return 0; // 0x1a8 Return
}


func_504(var_56_bool)
{
	var_56_bool = 1; // 0x1f8 MovB
	return 0; // 0x1f9 Return
}


func_425()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x1a9 PushV
	WaitForAnimEnd(); // 0x1aa Func
	var_29_bool = 0; // 0x1ac PushV
	func_511(var_29_bool); // 0x1ad NEW_2
	var_30_bool = var_29_bool == 0; // 0x1af Not
	if(var_30_bool == 0) goto Label_434; // 0x1b0 JumpB
	return 14; // 0x1b1 Return
	
Label_434:
	var_31_int = 0; // 0x1b2 PushV
	func_667(var_31_int); // 0x1b3 NEW_2
	var_22_int = var_31_int; // 0x1b4 Mov
	var_23_int = 0; // 0x1b6 MovI
	
Label_439:
	var_44_bool = 0; // 0x1b7 PushV
	var_44_bool = 0; // 0x1b8 MovB
	var_45_int = 5; // 0x1b9 PushI
	var_46_bool = var_23_int < var_45_int; // 0x1ba LT
	if(var_46_bool == 0) goto Label_449; // 0x1bb JumpB
	var_47_bool = 0; // 0x1bc PushV
	func_511(var_47_bool); // 0x1bd NEW_2
	if(var_47_bool == 0) goto Label_449; // 0x1bf JumpB
	var_44_bool = 1; // 0x1c0 MovB
	
Label_449:
	if(var_44_bool == 0) goto Label_501; // 0x1c1 JumpB
	var_48_int = 3; // 0x1c2 PushI
	irand(var_24_int, var_48_int); // 0x1c3 Func
	var_49_int = 0; // 0x1c5 PushI
	var_50_bool = var_24_int == var_49_int; // 0x1c6 Eq
	if(var_50_bool == 0) goto Label_473; // 0x1c7 JumpB
	var_51_int = var_22_int; // 0x1c8 Push
	if(var_51_int == 0) goto Label_472; // 0x1c9 JumpB
	irand(var_25_int, var_22_int); // 0x1ca Func
	var_52_string = "all"; // 0x1cc PushS
	var_53_string = ""; var_54_int = 0; // 0x1cd PushV
	var_54_int = var_25_int; // 0x1ce Mov
	func_660(var_53_string, var_54_int); // 0x1cf NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x1d1 Func
	WaitForAnimEnd(var_26_bool); // 0x1d3 Func
	var_55_bool = var_26_bool == 0; // 0x1d5 Not
	if(var_55_bool == 0) goto Label_472; // 0x1d6 JumpB
	goto Label_501; // 0x1d7 Jump
	
Label_501:
	ResetAAS(); // 0x1f5 Func
	return 14; // 0x1f7 Return
	
Label_472:
	goto Label_490; // 0x1d8 Jump
	
Label_490:
	var_56_bool = 0; // 0x1ea PushV
	func_504(var_56_bool); // 0x1eb NEW_2
	var_57_bool = var_56_bool == 0; // 0x1ed Not
	if(var_57_bool == 0) goto Label_496; // 0x1ee JumpB
	goto Label_501; // 0x1ef Jump
	
Label_496:
	ResetAAS(); // 0x1f0 Func
	var_58_int = 1; // 0x1f2 PushI
	var_23_int = var_23_int + var_58_int; // 0x1f3 Add2
	goto Label_439; // 0x1f4 Jump
	
Label_473:
	var_59_int = 1; // 0x1d9 PushI
	var_60_bool = var_24_int == var_59_int; // 0x1da Eq
	if(var_60_bool == 0) goto Label_487; // 0x1db JumpB
	var_61_int = 4; // 0x1dc PushI
	rand(var_27_float, var_61_int); // 0x1dd Func
	var_62_int = 1; // 0x1df PushI
	var_63_int = var_27_float + var_62_int; // 0x1e0 Add
	Sleep(var_63_int, var_28_bool); // 0x1e1 Func
	var_64_bool = var_28_bool == 0; // 0x1e3 Not
	if(var_64_bool == 0) goto Label_486; // 0x1e4 JumpB
	goto Label_501; // 0x1e5 Jump
	
Label_486:
	goto Label_490; // 0x1e6 Jump
	
Label_487:
	var_65_int = var_23_int; // 0x1e7 Push
	if(var_65_int == 0) goto Label_490; // 0x1e8 JumpB
	goto Label_501; // 0x1e9 Jump
}


func_617(var_101_string, var_102_bool)
{
	var_105_bool = 0; var_106_float = 0; var_107_float = 0; var_108_bool = 0; var_109_float = 0; var_110_float = 0; // 0x269 PushV
	lshHasAnimation(var_108_bool, var_101_string); // 0x26a Func
	var_111_bool = var_108_bool; // 0x26c Push
	if(var_111_bool == 0) goto Label_627; // 0x26d JumpB
	lshGetAnimTimes(var_101_string, var_109_float, var_110_float); // 0x26e Func
	lshPlayAnimation(var_109_float, var_110_float, var_102_bool); // 0x270 Func
	goto Label_631; // 0x272 Jump
	
Label_631:
	return 6; // 0x277 Return
	
Label_627:
	var_112_string = "Can't find lsh animation : "; // 0x273 PushS
	var_113_int = var_112_string + var_101_string; // 0x274 Add
	Trace(var_113_int); // 0x275 Func
}


func_684()
{
	var_14_string = "b6q02"; // 0x2ad PushS
	var_15_int = 2; // 0x2ae PushI
	SetVariable(var_14_string, var_15_int); // 0x2af Func
	func_711(); // 0x2b2 NEW_2
	return 0; // 0x2b4 Return
}


func_693()
{
	var_95_string = "oob6Prophet1"; // 0x2b6 PushS
	var_96_int = 1; // 0x2b7 PushI
	SetVariable(var_95_string, var_96_int); // 0x2b8 Func
	return 0; // 0x2ba Return
}


func_374(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x176 PushV
	var_0_object = 1; // 0x177 TMovB
	IsLoaded(var_10_bool); // 0x178 Func
	var_11_bool = 0; // 0x17a PushV
	var_11_bool = 0; // 0x17b MovB
	var_12_bool = var_10_bool == 0; // 0x17c Not
	if(var_12_bool == 0) goto Label_387; // 0x17d JumpB
	var_13_bool = 0; // 0x17e PushV
	func_423(var_13_bool); // 0x17f NEW_2
	if(var_13_bool == 0) goto Label_387; // 0x181 JumpB
	var_11_bool = 1; // 0x182 MovB
	
Label_387:
	if(var_11_bool == 0) goto Label_393; // 0x183 JumpB
	var_14_object = Obj(); // 0x184 PushV
	func_639(var_14_object); // 0x185 NEW_2
	RemoveActor(var_14_object); // 0x187 Func
	
Label_393:
	return 2; // 0x189 Return
}


func_632()
{
	var_9_bool = 0; // 0x278 PushV
	func_790(var_9_bool); // 0x279 NEW_2
	if(var_9_bool == 0) goto Label_638; // 0x27b JumpB
	lshStopSpeech(); // 0x27c Func
	
Label_638:
	return 0; // 0x27e Return
}


func_506()
{
	StopAnimation(); // 0x1fa Func
	StopGroup0(); // 0x1fc Func
	return 0; // 0x1fe Return
}


func_699(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x2bc PushV
	var_88_string = "oob6Prophet1"; // 0x2bd MovS
	func_655(var_87_int, var_88_string); // 0x2be NEW_2
	var_91_int = 0; // 0x2c0 PushI
	var_92_bool = var_87_int == var_91_int; // 0x2c1 Eq
	if(var_92_bool == 0) goto Label_709; // 0x2c2 JumpB
	var_85_bool = 1; // 0x2c3 MovB
	return 0; // 0x2c4 Return
	
Label_709:
	var_85_bool = 0; // 0x2c5 MovB
	return 0; // 0x2c6 Return
}


func_765(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x2fd PushV
	var_72_string = "branch"; // 0x2fe PushS
	GetVariable(var_72_string, var_71_int); // 0x2ff Func
	var_73_int = 0; // 0x301 PushI
	var_74_bool = var_71_int == var_73_int; // 0x302 Eq
	if(var_74_bool == 0) goto Label_775; // 0x303 JumpB
	var_69_int = 1; // 0x304 MovI
	return 2; // 0x305 Return
	
Label_775:
	var_75_int = 1; // 0x307 PushI
	var_76_bool = var_71_int == var_75_int; // 0x308 Eq
	if(var_76_bool == 0) goto Label_780; // 0x309 JumpB
	var_69_int = 2; // 0x30a MovI
	return 2; // 0x30b Return
	
Label_780:
	var_69_int = 3; // 0x30c MovI
	return 2; // 0x30d Return
}


func_511(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x1ff PushV
	IsLoaded(var_10_bool); // 0x200 Func
	var_8_bool = var_10_bool; // 0x202 Mov
	return 2; // 0x203 Return
}


