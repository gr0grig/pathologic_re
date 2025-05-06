task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0x9b PushI
	if(var_14_int == 0) goto Label_249; // 0x9c JumpB
	func_641(); // 0x9e NEW_2
	var_16_int = 31278; // 0xa0 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xa1 Eq
	if(var_17_bool == 0) goto Label_168; // 0xa2 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xa3 PushV
	var_18_object = var_1_object; // 0xa4 MovT
	var_19_object = var_0_object; // 0xa5 MovT
	func_700(); // 0xa6 NEW_2
	
Label_168:
	var_26_int = 31277; // 0xa8 PushI
	var_27_bool = var_12_bool == var_26_int; // 0xa9 Eq
	if(var_27_bool == 0) goto Label_191; // 0xaa JumpB
	var_28_string = ""; // 0xab PushV
	var_28_string = "Neutral"; // 0xac MovS
	func_132(var_13_bool, var_28_string); // 0xad NEW_2
	var_45_int = 529830; // 0xaf PushI
	SetMessage(var_45_int); // 0xb0 TObjFunc
	ClearReplies(); // 0xb2 TObjFunc
	var_46_int = 530225; // 0xb4 PushI
	var_47_int = 31614; // 0xb5 PushI
	var_48_int = 31613; // 0xb6 PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xb7 TObjFunc
	var_49_int = 530227; // 0xb9 PushI
	var_50_int = 31616; // 0xba PushI
	var_51_int = 31615; // 0xbb PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0xbc TObjFunc
	return 0; // 0xbe Return
	
Label_191:
	var_52_int = 31616; // 0xbf PushI
	var_53_bool = var_12_bool == var_52_int; // 0xc0 Eq
	if(var_53_bool == 0) goto Label_214; // 0xc1 JumpB
	var_54_string = ""; // 0xc2 PushV
	var_54_string = "Neutral"; // 0xc3 MovS
	func_132(var_13_bool, var_54_string); // 0xc4 NEW_2
	var_55_int = 530228; // 0xc6 PushI
	SetMessage(var_55_int); // 0xc7 TObjFunc
	ClearReplies(); // 0xc9 TObjFunc
	var_56_int = 530229; // 0xcb PushI
	var_57_int = 31614; // 0xcc PushI
	var_58_int = 31617; // 0xcd PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xce TObjFunc
	var_59_int = 530230; // 0xd0 PushI
	var_60_int = -1; // 0xd1 PushI
	var_61_int = 31618; // 0xd2 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xd3 TObjFunc
	return 0; // 0xd5 Return
	
Label_214:
	var_62_int = 31614; // 0xd6 PushI
	var_63_bool = var_12_bool == var_62_int; // 0xd7 Eq
	if(var_63_bool == 0) goto Label_237; // 0xd8 JumpB
	var_64_string = ""; // 0xd9 PushV
	var_64_string = "Neutral"; // 0xda MovS
	func_132(var_13_bool, var_64_string); // 0xdb NEW_2
	var_65_int = 530226; // 0xdd PushI
	SetMessage(var_65_int); // 0xde TObjFunc
	ClearReplies(); // 0xe0 TObjFunc
	var_66_int = 529831; // 0xe2 PushI
	var_67_int = -1; // 0xe3 PushI
	var_68_int = 31278; // 0xe4 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xe5 TObjFunc
	var_69_int = 529832; // 0xe7 PushI
	var_70_int = -1; // 0xe8 PushI
	var_71_int = 31279; // 0xe9 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xea TObjFunc
	return 0; // 0xec Return
	
Label_237:
	var_3_string = 1; // 0xed TMovB
	var_72_bool = 0; // 0xee PushV
	func_732(var_72_bool); // 0xef NEW_2
	if(var_72_bool == 0) goto Label_245; // 0xf1 JumpB
	lshStopAnimation(); // 0xf2 Func
	goto Label_247; // 0xf4 Jump
	
Label_247:
	return 0; // 0xf7 Return
	
Label_245:
	StopAnimation(); // 0xf5 Func
	
Label_249:
	return 0; // 0xf9 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_401(var_11_bool, var_12_object); // 0x102 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x104 PushV
	var_17_object = var_12_object; // 0x105 Mov
	TaskCall(0); // 0x106 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x107 NEW_2
	TaskReturn(); // 0x108 TaskReturn
	return 0; // 0x10a Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x132 PushS
	var_14_bool = var_12_string == var_13_string; // 0x133 Eq
	if(var_14_bool == 0) goto Label_312; // 0x134 JumpB
	func_285(var_12_string); // 0x136 NEW_2
	
Label_312:
	return 0; // 0x138 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x139 PushT
	if(var_12_int == 0) goto Label_318; // 0x13a JumpB
	func_401(var_10_bool, var_11_bool); // 0x13c NEW_2
	
Label_318:
	var_16_bool = 0; // 0x13e PushV
	var_16_bool = 0; // 0x13f MovB
	var_17_int = var_5_int; // 0x140 PushT
	if(var_17_int == 0) goto Label_327; // 0x141 JumpB
	var_18_bool = 0; // 0x142 PushV
	func_334(var_18_bool); // 0x143 NEW_2
	if(var_18_bool == 0) goto Label_327; // 0x145 JumpB
	var_16_bool = 1; // 0x146 MovB
	
Label_327:
	if(var_16_bool == 0) goto Label_333; // 0x147 JumpB
	var_19_object = Obj(); // 0x148 PushV
	func_648(var_19_object); // 0x149 NEW_2
	RemoveActor(var_19_object); // 0x14b Func
	
Label_333:
	return 0; // 0x14d Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x17b PushI
	var_14_bool = var_12_int == var_13_int; // 0x17c Eq
	if(var_14_bool == 0) goto Label_400; // 0x17d JumpB
	var_15_bool = 0; // 0x17e PushV
	func_363(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x17f NEW_2
	if(var_15_bool == 0) goto Label_394; // 0x181 JumpB
	var_28_bool = var_2_object == 0; // 0x182 Not
	if(var_28_bool == 0) goto Label_393; // 0x183 JumpB
	var_29_object = Obj(); // 0x184 PushV
	var_29_object = var_4_bool; // 0x185 MovT
	func_630(var_29_object); // 0x186 NEW_2
	var_2_object = 1; // 0x188 TMovB
	
Label_393:
	goto Label_400; // 0x189 Jump
	
Label_400:
	return 0; // 0x190 Return
	
Label_394:
	var_36_object = var_2_object; // 0x18a PushT
	if(var_36_object == 0) goto Label_400; // 0x18b JumpB
	var_37_string = "head"; // 0x18c PushS
	UnlookAsync(var_37_string); // 0x18d Func
	var_2_object = 0; // 0x18f TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0xfa PushV
	var_12_float = 300; // 0xfb MovI
	var_13_float = 100; // 0xfc MovI
	func_267(var_11_bool, var_12_float, var_13_float); // 0xfd NEW_2
	return 0; // 0xff Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_514(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_726(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_724(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_728(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_730(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_707(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_136_bool = var_26_bool == 0; // 0x38 Not
	if(var_136_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_137_object = Obj(); // 0x3f PushV
	var_137_object = var_17_object; // 0x40 Mov
	func_582(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_641()
{
	var_15_bool = 0; // 0x281 PushV
	func_732(var_15_bool); // 0x282 NEW_2
	if(var_15_bool == 0) goto Label_647; // 0x284 JumpB
	lshStopSpeech(); // 0x285 Func
	
Label_647:
	return 0; // 0x287 Return
}


func_514(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x202 PushV
	GetPosition(var_40_cvector); // 0x203 ObjFunc
	GetEyesHeight(var_39_float); // 0x205 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x207 PushE
	var_48_float = var_48_float + var_39_float; // 0x208 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x209 PopE
	GetPosition(var_41_cvector); // 0x20a Func
	GetEyesHeight(var_39_float); // 0x20c Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x20e PushE
	var_49_float = var_49_float + var_39_float; // 0x20f Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x210 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x211 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x212 PushE
	var_50_float = 0; // 0x213 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x214 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x215 Or
	var_52_float = sqrt(var_51_int); // 0x216 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x217 Div2
	var_43_cvector = -var_42_cvector; // 0x218 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x219 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x21a PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x21b PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x21c Xor2
	func_654(var_54_cvector, var_55_cvector); // 0x21d NEW_2
	var_62_int = 25; // 0x21f PushI
	var_63_float = var_54_cvector * var_62_int; // 0x220 Mult
	var_64_int = var_53_float + var_63_float; // 0x221 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x222 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x223 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x224 Add2
	IsOverrideActive(var_46_bool); // 0x225 Func
	var_66_bool = var_46_bool; // 0x227 Push
	if(var_66_bool == 0) goto Label_555; // 0x228 JumpB
	var_27_bool = 0; // 0x229 MovB
	return 18; // 0x22a Return
	
Label_555:
	StopWorld(); // 0x22b Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x22d Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x22f PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x230 PushE
	Rotate(var_67_float, var_68_float); // 0x231 Func
	var_69_bool = 0; // 0x233 PushV
	func_732(var_69_bool); // 0x234 NEW_2
	if(var_69_bool == 0) goto Label_568; // 0x236 JumpB
	goto Label_576; // 0x237 Jump
	
Label_576:
	CameraWaitForPlayFinish(); // 0x240 Func
	ResumeWorld(); // 0x242 Func
	var_27_bool = 1; // 0x244 MovB
	return 18; // 0x245 Return
	
Label_568:
	var_70_string = "head"; // 0x238 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x239 Func
	var_71_bool = var_47_bool; // 0x23b Push
	if(var_71_bool == 0) goto Label_576; // 0x23c JumpB
	var_72_string = "head"; // 0x23d PushS
	LookAsyncCamera(var_72_string); // 0x23e Func
}


func_132(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0x85 PushV
	func_732(var_95_bool); // 0x86 NEW_2
	var_96_bool = var_95_bool == 0; // 0x88 Not
	if(var_96_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_97_bool = var_94_string == var_2_object; // 0x8b Eq
	if(var_97_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_98_string = ""; var_99_bool = 0; // 0x8e PushV
	var_98_string = var_94_string; // 0x8f Mov
	var_100_string = ""; // 0x90 PushS
	var_101_bool = var_94_string == var_100_string; // 0x91 Eq
	if(var_101_bool == 0) goto Label_149; // 0x92 JumpB
	var_99_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_615(var_98_string, var_99_bool); // 0x96 NEW_2
	var_2_object = var_94_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_99_bool = 1; // 0x95 MovB
}


func_648(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x288 PushV
	self(var_21_object); // 0x289 Func
	var_19_object = var_21_object; // 0x28b Mov
	return 2; // 0x28c Return
}


func_267(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x10b PushV
	var_6_int = 0; // 0x10c TMovB
	
Label_269:
	var_18_int = 3; // 0x10d PushI
	rand(var_16_float, var_18_int); // 0x10e Func
	var_19_int = 3; // 0x110 PushI
	var_20_int = var_16_float + var_19_int; // 0x111 Add
	Sleep(var_20_int, var_17_bool); // 0x112 Func
	var_6_int = 1; // 0x114 TMovB
	var_21_float = 0; var_22_float = 0; // 0x115 PushV
	var_21_float = var_12_float; // 0x116 Mov
	var_22_float = var_13_float; // 0x117 Mov
	func_336(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x118 NEW_2
	var_6_int = 0; // 0x11a TMovB
	goto Label_269; // 0x11b Jump
}


func_654(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x28e PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x28f Or
	var_58_float = sqrt(var_59_int); // 0x290 Sqrt2
	var_60_float = 0.0; // 0x291 PushF
	var_61_bool = var_58_float < var_60_float; // 0x292 LT
	if(var_61_bool == 0) goto Label_662; // 0x293 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x294 MovV
	return 2; // 0x295 Return
	
Label_662:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x296 Div2
	return 2; // 0x297 Return
}


func_401(var_2_object, var_3_string)
{
	func_496(); // 0x192 NEW_2
	var_13_int = 10; // 0x194 PushI
	KillTimer(var_13_int); // 0x195 Func
	var_14_object = var_2_object; // 0x197 PushT
	if(var_14_object == 0) goto Label_413; // 0x198 JumpB
	var_15_string = "head"; // 0x199 PushS
	UnlookAsync(var_15_string); // 0x19a Func
	var_2_object = 0; // 0x19c TMovB
	
Label_413:
	var_3_string = 1; // 0x19d TMovB
	return 0; // 0x19e Return
}


func_664(var_20_bool, var_21_string, var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x298 PushV
	FindActor(var_24_object, var_21_string); // 0x299 Func
	var_25_bool = var_24_object == 0; // 0x29b NullEq
	if(var_25_bool == 0) goto Label_671; // 0x29c JumpB
	var_20_bool = 0; // 0x29d MovB
	return 2; // 0x29e Return
	
Label_671:
	Trigger(var_24_object, var_22_string); // 0x29f Func
	var_20_bool = 1; // 0x2a1 MovB
	return 2; // 0x2a2 Return
}


func_285(var_5_int)
{
	var_5_int = 1; // 0x11d TMovB
	var_15_bool = 0; // 0x11e PushV
	var_15_bool = 0; // 0x11f MovB
	var_16_bool = 0; // 0x120 PushV
	func_509(var_16_bool); // 0x121 NEW_2
	var_19_bool = var_16_bool == 0; // 0x123 Not
	if(var_19_bool == 0) goto Label_298; // 0x124 JumpB
	var_20_bool = 0; // 0x125 PushV
	func_334(var_20_bool); // 0x126 NEW_2
	if(var_20_bool == 0) goto Label_298; // 0x128 JumpB
	var_15_bool = 1; // 0x129 MovB
	
Label_298:
	if(var_15_bool == 0) goto Label_304; // 0x12a JumpB
	var_21_object = Obj(); // 0x12b PushV
	func_648(var_21_object); // 0x12c NEW_2
	RemoveActor(var_21_object); // 0x12e Func
	
Label_304:
	return 0; // 0x130 Return
}


func_415()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x19f PushV
	WaitForAnimEnd(); // 0x1a0 Func
	var_44_bool = 0; // 0x1a2 PushV
	func_509(var_44_bool); // 0x1a3 NEW_2
	var_45_bool = var_44_bool == 0; // 0x1a5 Not
	if(var_45_bool == 0) goto Label_424; // 0x1a6 JumpB
	return 14; // 0x1a7 Return
	
Label_424:
	var_46_int = 0; // 0x1a8 PushV
	func_683(var_46_int); // 0x1a9 NEW_2
	var_37_int = var_46_int; // 0x1aa Mov
	var_38_int = 0; // 0x1ac MovI
	
Label_429:
	var_59_bool = 0; // 0x1ad PushV
	var_59_bool = 0; // 0x1ae MovB
	var_60_int = 5; // 0x1af PushI
	var_61_bool = var_38_int < var_60_int; // 0x1b0 LT
	if(var_61_bool == 0) goto Label_439; // 0x1b1 JumpB
	var_62_bool = 0; // 0x1b2 PushV
	func_509(var_62_bool); // 0x1b3 NEW_2
	if(var_62_bool == 0) goto Label_439; // 0x1b5 JumpB
	var_59_bool = 1; // 0x1b6 MovB
	
Label_439:
	if(var_59_bool == 0) goto Label_491; // 0x1b7 JumpB
	var_63_int = 3; // 0x1b8 PushI
	irand(var_39_int, var_63_int); // 0x1b9 Func
	var_64_int = 0; // 0x1bb PushI
	var_65_bool = var_39_int == var_64_int; // 0x1bc Eq
	if(var_65_bool == 0) goto Label_463; // 0x1bd JumpB
	var_66_int = var_37_int; // 0x1be Push
	if(var_66_int == 0) goto Label_462; // 0x1bf JumpB
	irand(var_40_int, var_37_int); // 0x1c0 Func
	var_67_string = "all"; // 0x1c2 PushS
	var_68_string = ""; var_69_int = 0; // 0x1c3 PushV
	var_69_int = var_40_int; // 0x1c4 Mov
	func_676(var_68_string, var_69_int); // 0x1c5 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x1c7 Func
	WaitForAnimEnd(var_41_bool); // 0x1c9 Func
	var_70_bool = var_41_bool == 0; // 0x1cb Not
	if(var_70_bool == 0) goto Label_462; // 0x1cc JumpB
	goto Label_491; // 0x1cd Jump
	
Label_491:
	ResetAAS(); // 0x1eb Func
	return 14; // 0x1ed Return
	
Label_462:
	goto Label_480; // 0x1ce Jump
	
Label_480:
	var_71_bool = 0; // 0x1e0 PushV
	func_494(var_71_bool); // 0x1e1 NEW_2
	var_72_bool = var_71_bool == 0; // 0x1e3 Not
	if(var_72_bool == 0) goto Label_486; // 0x1e4 JumpB
	goto Label_491; // 0x1e5 Jump
	
Label_486:
	ResetAAS(); // 0x1e6 Func
	var_73_int = 1; // 0x1e8 PushI
	var_38_int = var_38_int + var_73_int; // 0x1e9 Add2
	goto Label_429; // 0x1ea Jump
	
Label_463:
	var_74_int = 1; // 0x1cf PushI
	var_75_bool = var_39_int == var_74_int; // 0x1d0 Eq
	if(var_75_bool == 0) goto Label_477; // 0x1d1 JumpB
	var_76_int = 4; // 0x1d2 PushI
	rand(var_42_float, var_76_int); // 0x1d3 Func
	var_77_int = 1; // 0x1d5 PushI
	var_78_int = var_42_float + var_77_int; // 0x1d6 Add
	Sleep(var_78_int, var_43_bool); // 0x1d7 Func
	var_79_bool = var_43_bool == 0; // 0x1d9 Not
	if(var_79_bool == 0) goto Label_476; // 0x1da JumpB
	goto Label_491; // 0x1db Jump
	
Label_476:
	goto Label_480; // 0x1dc Jump
	
Label_477:
	var_80_int = var_38_int; // 0x1dd Push
	if(var_80_int == 0) goto Label_480; // 0x1de JumpB
	goto Label_491; // 0x1df Jump
}


func_676(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x2a4 PushV
	var_55_string = "idle"; // 0x2a5 MovS
	var_56_int = var_53_int; // 0x2a6 Push
	if(var_56_int == 0) goto Label_681; // 0x2a7 JumpB
	var_55_string = var_55_string + var_53_int; // 0x2a8 Add2
	
Label_681:
	var_52_string = var_55_string; // 0x2a9 Mov
	return 2; // 0x2aa Return
}


func_683(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x2ab PushV
	var_49_int = 0; // 0x2ac MovI
	
Label_685:
	var_51_string = "all"; // 0x2ad PushS
	var_52_string = ""; var_53_int = 0; // 0x2ae PushV
	var_53_int = var_49_int; // 0x2af Mov
	func_676(var_52_string, var_53_int); // 0x2b0 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x2b2 Func
	var_57_bool = var_50_bool == 0; // 0x2b4 Not
	if(var_57_bool == 0) goto Label_695; // 0x2b5 JumpB
	goto Label_698; // 0x2b6 Jump
	
Label_698:
	var_46_int = var_49_int; // 0x2ba Mov
	return 4; // 0x2bb Return
	
Label_695:
	var_58_int = 1; // 0x2b7 PushI
	var_49_int = var_49_int + var_58_int; // 0x2b8 Add2
	goto Label_685; // 0x2b9 Jump
}


func_700()
{
	var_20_bool = 0; var_21_string = ""; var_22_string = ""; // 0x2bd PushV
	var_21_string = "quest_k4_01"; // 0x2be MovS
	var_22_string = "cutscene"; // 0x2bf MovS
	func_664(var_20_bool, var_21_string, var_22_string); // 0x2c0 NEW_2
	return 0; // 0x2c2 Return
}


func_707(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x2c3 PushV
	var_81_string = "branch"; // 0x2c4 PushS
	GetVariable(var_81_string, var_80_int); // 0x2c5 Func
	var_82_int = 0; // 0x2c7 PushI
	var_83_bool = var_80_int == var_82_int; // 0x2c8 Eq
	if(var_83_bool == 0) goto Label_717; // 0x2c9 JumpB
	var_78_int = 1; // 0x2ca MovI
	return 2; // 0x2cb Return
	
Label_717:
	var_84_int = 1; // 0x2cd PushI
	var_85_bool = var_80_int == var_84_int; // 0x2ce Eq
	if(var_85_bool == 0) goto Label_722; // 0x2cf JumpB
	var_78_int = 2; // 0x2d0 MovI
	return 2; // 0x2d1 Return
	
Label_722:
	var_78_int = 3; // 0x2d2 MovI
	return 2; // 0x2d3 Return
}


func_582()
{
	var_138_bool = 0; var_139_bool = 0; // 0x246 PushV
	CameraSwitchToNormal(); // 0x247 Func
	var_140_bool = 0; // 0x249 PushV
	func_732(var_140_bool); // 0x24a NEW_2
	if(var_140_bool == 0) goto Label_590; // 0x24c JumpB
	goto Label_598; // 0x24d Jump
	
Label_598:
	return 2; // 0x256 Return
	
Label_590:
	var_141_string = "head"; // 0x24e PushS
	HasAnimationTrack(var_139_bool, var_141_string); // 0x24f Func
	var_142_bool = var_139_bool; // 0x251 Push
	if(var_142_bool == 0) goto Label_598; // 0x252 JumpB
	var_143_string = "head"; // 0x253 PushS
	UnlookAsync(var_143_string); // 0x254 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_102; // 0x4f JumpB
	var_94_string = ""; // 0x50 PushV
	var_94_string = "Neutral"; // 0x51 MovS
	func_132(var_88_object, var_94_string); // 0x52 NEW_2
	var_111_int = 529830; // 0x54 PushI
	SetMessage(var_111_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_112_int = 530225; // 0x59 PushI
	var_113_int = 31614; // 0x5a PushI
	var_114_int = 31613; // 0x5b PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x5c TObjFunc
	var_115_int = 530227; // 0x5e PushI
	var_116_int = 31616; // 0x5f PushI
	var_117_int = 31615; // 0x60 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_118_bool = 0; // 0x66 PushV
	func_732(var_118_bool); // 0x67 NEW_2
	if(var_118_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_119_string = var_3_string; // 0x6c PushT
	if(var_119_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_120_string = ""; // 0x6f PushV
	var_120_string = var_2_object; // 0x70 MovT
	func_599(var_120_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_131_string = "all"; // 0x75 PushS
	var_132_string = "idle"; // 0x76 PushS
	PlayAnimation(var_131_string, var_132_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_133_string = var_3_string; // 0x7b PushT
	if(var_133_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_134_string = "all"; // 0x7e PushS
	var_135_string = "idle"; // 0x7f PushS
	PlayAnimation(var_134_string, var_135_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_334(var_18_bool)
{
	var_18_bool = 1; // 0x14e MovB
	return 0; // 0x14f Return
}


func_336(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x151 PushV
	func_509(var_23_bool); // 0x152 NEW_2
	var_26_bool = var_23_bool == 0; // 0x154 Not
	if(var_26_bool == 0) goto Label_343; // 0x155 JumpB
	return 0; // 0x156 Return
	
Label_343:
	var_27_string = "player"; // 0x157 PushS
	FindActor(var_17_bool, var_27_string); // 0x158 Func
	var_2_object = 0; // 0x15a TMovB
	var_3_string = 0; // 0x15b TMovB
	var_0_object = var_21_float; // 0x15c TMov
	var_1_object = var_22_float; // 0x15d TMov
	var_28_int = 10; // 0x15e PushI
	var_29_float = 1.0; // 0x15f PushF
	SetTimer(var_28_int, var_29_float); // 0x160 Func
	func_415(); // 0x163 NEW_2
	var_81_bool = var_3_string == 0; // 0x165 Not
	if(var_81_bool == 0) goto Label_362; // 0x166 JumpB
	var_82_int = 10; // 0x167 PushI
	KillTimer(var_82_int); // 0x168 Func
	
Label_362:
	return 0; // 0x16a Return
}


func_724(var_75_int)
{
	var_75_int = 529826; // 0x2d4 MovI
	return 0; // 0x2d5 Return
}


func_726(var_74_int)
{
	var_74_int = 529825; // 0x2d6 MovI
	return 0; // 0x2d7 Return
}


func_599(var_120_string)
{
	var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0; // 0x257 PushV
	lshHasAnimation(var_124_bool, var_120_string); // 0x258 Func
	var_127_bool = var_124_bool; // 0x25a Push
	if(var_127_bool == 0) goto Label_610; // 0x25b JumpB
	lshGetAnimTimes(var_120_string, var_125_float, var_126_float); // 0x25c Func
	var_128_bool = 0; // 0x25e PushB
	lshPlayAnimation(var_125_float, var_126_float, var_128_bool); // 0x25f Func
	goto Label_614; // 0x261 Jump
	
Label_614:
	return 6; // 0x266 Return
	
Label_610:
	var_129_string = "Can't find lsh animation : "; // 0x262 PushS
	var_130_int = var_129_string + var_120_string; // 0x263 Add
	Trace(var_130_int); // 0x264 Func
}


func_728(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1.png"; // 0x2d8 MovS
	return 0; // 0x2d9 Return
}


func_730(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1_b.png"; // 0x2da MovS
	return 0; // 0x2db Return
}


func_732(var_69_bool)
{
	var_69_bool = 0; // 0x2dc MovB
	return 0; // 0x2dd Return
}


func_615(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x267 PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x268 Func
	var_108_bool = var_105_bool; // 0x26a Push
	if(var_108_bool == 0) goto Label_625; // 0x26b JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x26c Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x26e Func
	goto Label_629; // 0x270 Jump
	
Label_629:
	return 6; // 0x275 Return
	
Label_625:
	var_109_string = "Can't find lsh animation : "; // 0x271 PushS
	var_110_int = var_109_string + var_98_string; // 0x272 Add
	Trace(var_110_int); // 0x273 Func
}


func_363(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x16b PushV
	var_18_bool = var_4_bool == 0; // 0x16c NullEq
	if(var_18_bool == 0) goto Label_368; // 0x16d JumpB
	var_15_bool = 0; // 0x16e MovB
	return 2; // 0x16f Return
	
Label_368:
	var_19_float = 0; var_20_object = Obj(); // 0x170 PushV
	var_20_object = var_4_bool; // 0x171 MovT
	func_501(var_20_object); // 0x172 NEW_2
	var_17_float = sqrt(var_19_float); // 0x174 Sqrt2
	var_27_object = var_2_object; // 0x175 PushT
	if(var_27_object == 0) goto Label_376; // 0x176 JumpB
	var_17_float = var_17_float - var_1_object; // 0x177 Sub2
	
Label_376:
	var_15_bool = var_17_float < var_0_object; // 0x178 LT2
	return 2; // 0x179 Return
}


func_494(var_71_bool)
{
	var_71_bool = 1; // 0x1ee MovB
	return 0; // 0x1ef Return
}


func_496()
{
	StopAnimation(); // 0x1f0 Func
	StopGroup0(); // 0x1f2 Func
	return 0; // 0x1f4 Return
}


func_501(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x1f5 PushV
	GetPosition(var_24_cvector); // 0x1f6 Func
	GetPosition(var_25_cvector); // 0x1f8 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x1fa Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x1fb Or2
	return 6; // 0x1fc Return
}


func_630(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x276 PushV
	GetEyesHeight(var_32_float); // 0x277 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x279 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x27a PushE
	var_34_float = var_32_float; // 0x27b Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x27c PopE
	var_35_string = "head"; // 0x27d PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x27e Func
	return 4; // 0x280 Return
}


func_509(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x1fd PushV
	IsLoaded(var_25_bool); // 0x1fe Func
	var_23_bool = var_25_bool; // 0x200 Mov
	return 2; // 0x201 Return
}


