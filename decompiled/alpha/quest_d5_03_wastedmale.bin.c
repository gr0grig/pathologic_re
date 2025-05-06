task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x9e PushI
	if(var_8_int == 0) goto Label_280; // 0x9f JumpB
	func_518(); // 0xa1 Call
	var_10_int = 13016; // 0xa3 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xa4 Eq
	if(var_11_bool == 0) goto Label_171; // 0xa5 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xa6 PushV
	var_12_object = var_1_object; // 0xa7 MovT
	var_13_object = var_0_object; // 0xa8 MovT
	func_570(); // 0xa9 Call
	
Label_171:
	var_16_int = 13017; // 0xab PushI
	var_17_bool = var_7_bool == var_16_int; // 0xac Eq
	if(var_17_bool == 0) goto Label_179; // 0xad JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xae PushV
	var_18_object = var_1_object; // 0xaf MovT
	var_19_object = var_0_object; // 0xb0 MovT
	func_570(); // 0xb1 Call
	
Label_179:
	var_20_int = 13013; // 0xb3 PushI
	var_21_bool = var_6_int == var_20_int; // 0xb4 Eq
	if(var_21_bool == 0) goto Label_222; // 0xb5 JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0xb6 PushV
	var_23_object = var_1_object; // 0xb7 MovT
	func_576(var_23_object); // 0xb8 Call
	if(var_22_bool == 0) goto Label_207; // 0xba JumpB
	var_30_string = ""; // 0xbb PushV
	var_30_string = "Neutral"; // 0xbc MovS
	func_141(var_7_bool, var_30_string); // 0xbd Call
	var_45_int = 11803; // 0xbf PushI
	SetMessage(var_45_int); // 0xc0 TObjFunc
	ClearReplies(); // 0xc2 TObjFunc
	var_46_int = 11804; // 0xc4 PushI
	var_47_int = 13015; // 0xc5 PushI
	var_48_int = 13014; // 0xc6 PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xc7 TObjFunc
	var_49_int = 11808; // 0xc9 PushI
	var_50_int = 13019; // 0xca PushI
	var_51_int = 13018; // 0xcb PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0xcc TObjFunc
	return 0; // 0xce Return
	
Label_207:
	var_52_string = ""; // 0xcf PushV
	var_52_string = "Neutral"; // 0xd0 MovS
	func_141(var_7_bool, var_52_string); // 0xd1 Call
	var_53_int = 12549; // 0xd3 PushI
	SetMessage(var_53_int); // 0xd4 TObjFunc
	ClearReplies(); // 0xd6 TObjFunc
	var_54_int = 12550; // 0xd8 PushI
	var_55_int = -1; // 0xd9 PushI
	var_56_int = 13719; // 0xda PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xdb TObjFunc
	return 0; // 0xdd Return
	
Label_222:
	var_57_int = 13019; // 0xde PushI
	var_58_bool = var_6_int == var_57_int; // 0xdf Eq
	if(var_58_bool == 0) goto Label_245; // 0xe0 JumpB
	var_59_string = ""; // 0xe1 PushV
	var_59_string = "Neutral"; // 0xe2 MovS
	func_141(var_7_bool, var_59_string); // 0xe3 Call
	var_60_int = 11809; // 0xe5 PushI
	SetMessage(var_60_int); // 0xe6 TObjFunc
	ClearReplies(); // 0xe8 TObjFunc
	var_61_int = 11810; // 0xea PushI
	var_62_int = 13015; // 0xeb PushI
	var_63_int = 13020; // 0xec PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xed TObjFunc
	var_64_int = 11811; // 0xef PushI
	var_65_int = 13015; // 0xf0 PushI
	var_66_int = 13022; // 0xf1 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xf2 TObjFunc
	return 0; // 0xf4 Return
	
Label_245:
	var_67_int = 13015; // 0xf5 PushI
	var_68_bool = var_6_int == var_67_int; // 0xf6 Eq
	if(var_68_bool == 0) goto Label_268; // 0xf7 JumpB
	var_69_string = ""; // 0xf8 PushV
	var_69_string = "Neutral"; // 0xf9 MovS
	func_141(var_7_bool, var_69_string); // 0xfa Call
	var_70_int = 11805; // 0xfc PushI
	SetMessage(var_70_int); // 0xfd TObjFunc
	ClearReplies(); // 0xff TObjFunc
	var_71_int = 11806; // 0x101 PushI
	var_72_int = -1; // 0x102 PushI
	var_73_int = 13016; // 0x103 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x104 TObjFunc
	var_74_int = 11807; // 0x106 PushI
	var_75_int = -1; // 0x107 PushI
	var_76_int = 13017; // 0x108 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_3_string = 1; // 0x10c TMovB
	var_77_bool = 0; // 0x10d PushV
	func_609(var_77_bool); // 0x10e Call
	if(var_77_bool == 0) goto Label_276; // 0x110 JumpB
	lshStopAnimation(); // 0x111 Func
	goto Label_278; // 0x113 Jump
	
Label_278:
	return 0; // 0x116 Return
	
Label_276:
	StopAnimation(); // 0x114 Func
	
Label_280:
	return 0; // 0x118 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_430(); // 0x124 Call
	var_7_int = 0; var_8_object = Obj(); // 0x126 PushV
	var_8_object = var_6_object; // 0x127 Mov
	func_281(var_6_object, var_7_int, var_8_object); // 0x128 Call
	return 0; // 0x12a Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x13b PushV
	var_9_string = "cleanup"; // 0x13c PushS
	var_10_bool = var_6_string == var_9_string; // 0x13d Eq
	if(var_10_bool == 0) goto Label_337; // 0x13e JumpB
	var_0_object = 1; // 0x13f TMovB
	IsLoaded(var_8_bool); // 0x140 Func
	var_11_bool = 0; // 0x142 PushV
	var_11_bool = 0; // 0x143 MovB
	var_12_bool = var_8_bool == 0; // 0x144 Not
	if(var_12_bool == 0) goto Label_331; // 0x145 JumpB
	var_13_bool = 0; // 0x146 PushV
	func_359(var_13_bool); // 0x147 Call
	if(var_13_bool == 0) goto Label_331; // 0x149 JumpB
	var_11_bool = 1; // 0x14a MovB
	
Label_331:
	if(var_11_bool == 0) goto Label_337; // 0x14b JumpB
	var_14_object = Obj(); // 0x14c PushV
	func_525(var_14_object); // 0x14d Call
	RemoveActor(var_14_object); // 0x14f Func
	
Label_337:
	return 2; // 0x151 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x152 Func
	sync(); // 0x154 Func
	return 0; // 0x156 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x157 PushV
	var_6_bool = 0; // 0x158 MovB
	var_7_object = var_0_object; // 0x159 PushT
	if(var_7_object == 0) goto Label_352; // 0x15a JumpB
	var_8_bool = 0; // 0x15b PushV
	func_359(var_8_bool); // 0x15c Call
	if(var_8_bool == 0) goto Label_352; // 0x15e JumpB
	var_6_bool = 1; // 0x15f MovB
	
Label_352:
	if(var_6_bool == 0) goto Label_358; // 0x160 JumpB
	var_9_object = Obj(); // 0x161 PushV
	func_525(var_9_object); // 0x162 Call
	RemoveActor(var_9_object); // 0x164 Func
	
Label_358:
	return 0; // 0x166 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_299:
	var_6_bool = 0; // 0x12b PushV
	func_435(var_6_bool); // 0x12c Call
	var_9_bool = var_6_bool == 0; // 0x12e Not
	if(var_9_bool == 0) goto Label_307; // 0x12f JumpB
	Hold(); // 0x130 Func
	goto Label_299; // 0x132 Jump
	
Label_307:
	var_10_int = 3; // 0x133 PushI
	Sleep(var_10_int); // 0x134 Func
	func_361(); // 0x137 Call
	goto Label_299; // 0x139 Jump
}


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; // 0x0 PushV
	var_0_object = var_10_object; // 0x1 TMov
	var_20_bool = 0; var_21_object = Obj(); // 0x2 PushV
	var_21_object = var_10_object; // 0x3 Mov
	func_440(var_21_object); // 0x4 Call
	var_60_bool = var_20_bool == 0; // 0x6 Not
	if(var_60_bool == 0) goto Label_10; // 0x7 JumpB
	var_9_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_16_object); // 0xa Func
	var_61_int = 0; // 0xc PushV
	func_605(var_61_int); // 0xd Call
	SetNPCName(var_61_int); // 0xf ObjFunc
	var_62_string = ""; // 0x11 PushV
	func_607(var_62_string); // 0x12 Call
	SetPhoto(var_62_string); // 0x14 ObjFunc
	var_63_int = 0; // 0x16 PushV
	func_588(var_63_int); // 0x17 Call
	SetPlayerName(var_63_int); // 0x19 ObjFunc
	var_18_int = -1; // 0x1b MovI
	IsOverrideActive(var_17_bool); // 0x1c Func
	var_71_bool = var_17_bool; // 0x1e Push
	if(var_71_bool == 0) goto Label_34; // 0x1f JumpB
	var_9_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_16_object); // 0x22 Func
	var_72_object = Obj(); var_73_object = Obj(); // 0x24 PushV
	var_72_object = var_10_object; // 0x25 Mov
	var_73_object = var_16_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_74_object, var_75_object, var_76_string, var_77_bool, var_72_object, var_73_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_19_bool); // 0x2b ObjFunc
	
Label_45:
	var_122_bool = var_19_bool == 0; // 0x2d Not
	if(var_122_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_19_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_123_object = Obj(); // 0x34 PushV
	var_123_object = var_10_object; // 0x35 Mov
	func_496(); // 0x36 Call
	StopDialog(var_16_object); // 0x38 Func
	GetReturnValue(var_18_int); // 0x3a ObjFunc
	var_9_int = var_18_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_518()
{
	var_9_bool = 0; // 0x206 PushV
	func_609(var_9_bool); // 0x207 Call
	if(var_9_bool == 0) goto Label_524; // 0x209 JumpB
	lshStopSpeech(); // 0x20a Func
	
Label_524:
	return 0; // 0x20c Return
}


func_525(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x20d PushV
	self(var_11_object); // 0x20e Func
	var_9_object = var_11_object; // 0x210 Mov
	return 2; // 0x211 Return
}


func_141(var_2_object, var_87_string)
{
	var_88_bool = 0; // 0x8e PushV
	func_609(var_88_bool); // 0x8f Call
	var_89_bool = var_88_bool == 0; // 0x91 Not
	if(var_89_bool == 0) goto Label_148; // 0x92 JumpB
	return 0; // 0x93 Return
	
Label_148:
	var_90_bool = var_87_string == var_2_object; // 0x94 Eq
	if(var_90_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_91_string = ""; // 0x97 PushV
	var_91_string = var_87_string; // 0x98 Mov
	func_500(var_91_string); // 0x99 Call
	var_2_object = var_87_string; // 0x9b TMov
	return 0; // 0x9c Return
}


func_531(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x213 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x214 Or
	var_49_float = sqrt(var_50_int); // 0x215 Sqrt2
	var_51_float = 0.0; // 0x216 PushF
	var_52_bool = var_49_float < var_51_float; // 0x217 LT
	if(var_52_bool == 0) goto Label_539; // 0x218 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x219 MovV
	return 2; // 0x21a Return
	
Label_539:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x21b Div2
	return 2; // 0x21c Return
}


func_281(var_7_int, var_8_object, var_11_object)
{
	var_9_int = 0; var_10_object = Obj(); // 0x11a PushV
	var_10_object = var_8_object; // 0x11b Mov
	TaskCall(0); // 0x11c TaskCall
	func_0(var_11_object, var_9_int, var_10_object); // 0x11d Call
	TaskReturn(); // 0x11e TaskReturn
	var_7_int = var_11_object; // 0x11f Mov
	return 0; // 0x121 Return
}


func_541(var_81_int, var_82_string)
{
	var_83_int = 0; var_84_int = 0; // 0x21d PushV
	GetVariable(var_82_string, var_84_int); // 0x21e Func
	var_81_int = var_84_int; // 0x220 Mov
	return 2; // 0x221 Return
}


func_546(var_33_string, var_34_int)
{
	var_35_string = ""; var_36_string = ""; // 0x222 PushV
	var_36_string = "idle"; // 0x223 MovS
	var_37_int = var_34_int; // 0x224 Push
	if(var_37_int == 0) goto Label_551; // 0x225 JumpB
	var_36_string = var_36_string + var_34_int; // 0x226 Add2
	
Label_551:
	var_33_string = var_36_string; // 0x227 Mov
	return 2; // 0x228 Return
}


func_553(var_27_int)
{
	var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_bool = 0; // 0x229 PushV
	var_30_int = 0; // 0x22a MovI
	
Label_555:
	var_32_string = "all"; // 0x22b PushS
	var_33_string = ""; var_34_int = 0; // 0x22c PushV
	var_34_int = var_30_int; // 0x22d Mov
	func_546(var_33_string, var_34_int); // 0x22e Call
	HasAnimation(var_31_bool, var_32_string, var_33_string); // 0x230 Func
	var_38_bool = var_31_bool == 0; // 0x232 Not
	if(var_38_bool == 0) goto Label_565; // 0x233 JumpB
	goto Label_568; // 0x234 Jump
	
Label_568:
	var_27_int = var_30_int; // 0x238 Mov
	return 4; // 0x239 Return
	
Label_565:
	var_39_int = 1; // 0x235 PushI
	var_30_int = var_30_int + var_39_int; // 0x236 Add2
	goto Label_555; // 0x237 Jump
}


func_430()
{
	StopAnimation(); // 0x1ae Func
	StopGroup0(); // 0x1b0 Func
	return 0; // 0x1b2 Return
}


func_435(var_6_bool)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1b3 PushV
	IsLoaded(var_8_bool); // 0x1b4 Func
	var_6_bool = var_8_bool; // 0x1b6 Mov
	return 2; // 0x1b7 Return
}


func_440(var_20_bool)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; // 0x1b8 PushV
	GetPosition(var_31_cvector); // 0x1b9 ObjFunc
	GetEyesHeight(var_30_float); // 0x1bb ObjFunc
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x1bd PushE
	var_38_float = var_38_float + var_30_float; // 0x1be Add2
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x1bf PopE
	GetPosition(var_32_cvector); // 0x1c0 Func
	GetEyesHeight(var_30_float); // 0x1c2 Func
	var_39_float = GetByIndex(var_32_cvector, 1); // 0x1c4 PushE
	var_39_float = var_39_float + var_30_float; // 0x1c5 Add2
	SetByIndex(var_32_cvector, 1) = var_39_float; // 0x1c6 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x1c7 Sub2
	var_40_float = GetByIndex(var_33_cvector, 1); // 0x1c8 PushE
	var_40_float = 0; // 0x1c9 MovI
	SetByIndex(var_33_cvector, 1) = var_40_float; // 0x1ca PopE
	var_41_int = var_33_cvector | var_33_cvector; // 0x1cb Or
	var_42_float = sqrt(var_41_int); // 0x1cc Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x1cd Div2
	var_34_cvector = -var_33_cvector; // 0x1ce Neg2
	var_43_int = 70; // 0x1cf PushI
	var_44_float = var_33_cvector * var_43_int; // 0x1d0 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x1d1 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x1d2 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x1d3 Xor2
	func_531(var_45_cvector, var_46_cvector); // 0x1d4 Call
	var_53_int = 25; // 0x1d6 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x1d7 Mult
	var_55_int = var_44_float + var_54_float; // 0x1d8 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x1d9 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x1da Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x1db Add2
	IsOverrideActive(var_37_bool); // 0x1dc Func
	var_57_bool = var_37_bool; // 0x1de Push
	if(var_57_bool == 0) goto Label_482; // 0x1df JumpB
	var_20_bool = 0; // 0x1e0 MovB
	return 16; // 0x1e1 Return
	
Label_482:
	StopWorld(); // 0x1e2 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x1e4 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x1e6 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x1e7 PushE
	Rotate(var_58_float, var_59_float); // 0x1e8 Func
	CameraWaitForPlayFinish(); // 0x1ea Func
	ResumeWorld(); // 0x1ec Func
	var_20_bool = 1; // 0x1ee MovB
	return 16; // 0x1ef Return
}


func_570()
{
	var_14_string = "ood5Prisoner1"; // 0x23b PushS
	var_15_int = 1; // 0x23c PushI
	SetVariable(var_14_string, var_15_int); // 0x23d Func
	return 0; // 0x23f Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_72_object, var_73_object)
{
	var_0_object = var_73_object; // 0x40 TMov
	var_1_object = var_72_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_78_int = 1; // 0x43 PushI
	if(var_78_int == 0) goto Label_111; // 0x44 JumpB
	var_79_bool = 0; var_80_object = Obj(); // 0x45 PushV
	var_80_object = var_1_object; // 0x46 MovT
	func_576(var_80_object); // 0x47 Call
	if(var_79_bool == 0) goto Label_94; // 0x49 JumpB
	var_87_string = ""; // 0x4a PushV
	var_87_string = "Neutral"; // 0x4b MovS
	func_141(var_73_object, var_87_string); // 0x4c Call
	var_102_int = 11803; // 0x4e PushI
	SetMessage(var_102_int); // 0x4f TObjFunc
	ClearReplies(); // 0x51 TObjFunc
	var_103_int = 11804; // 0x53 PushI
	var_104_int = 13015; // 0x54 PushI
	var_105_int = 13014; // 0x55 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x56 TObjFunc
	var_106_int = 11808; // 0x58 PushI
	var_107_int = 13019; // 0x59 PushI
	var_108_int = 13018; // 0x5a PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x5b TObjFunc
	goto Label_111; // 0x5d Jump
	
Label_111:
	var_109_bool = 0; // 0x6f PushV
	func_609(var_109_bool); // 0x70 Call
	if(var_109_bool == 0) goto Label_126; // 0x72 JumpB
	
Label_115:
	lshWaitForAnimEnd(); // 0x73 Func
	var_110_string = var_3_string; // 0x75 PushT
	if(var_110_string == 0) goto Label_120; // 0x76 JumpB
	goto Label_125; // 0x77 Jump
	
Label_125:
	goto Label_140; // 0x7d Jump
	
Label_140:
	return 0; // 0x8c Return
	
Label_120:
	var_111_string = ""; // 0x78 PushV
	var_111_string = var_2_object; // 0x79 MovT
	func_500(var_111_string); // 0x7a Call
	goto Label_115; // 0x7c Jump
	
Label_126:
	var_112_string = "all"; // 0x7e PushS
	var_113_string = "idle"; // 0x7f PushS
	PlayAnimation(var_112_string, var_113_string); // 0x80 Func
	
Label_130:
	WaitForAnimEnd(); // 0x82 Func
	var_114_string = var_3_string; // 0x84 PushT
	if(var_114_string == 0) goto Label_135; // 0x85 JumpB
	goto Label_140; // 0x86 Jump
	
Label_135:
	var_115_string = "all"; // 0x87 PushS
	var_116_string = "idle"; // 0x88 PushS
	PlayAnimation(var_115_string, var_116_string); // 0x89 Func
	goto Label_130; // 0x8b Jump
	
Label_94:
	var_117_string = ""; // 0x5e PushV
	var_117_string = "Neutral"; // 0x5f MovS
	func_141(var_73_object, var_117_string); // 0x60 Call
	var_118_int = 12549; // 0x62 PushI
	SetMessage(var_118_int); // 0x63 TObjFunc
	ClearReplies(); // 0x65 TObjFunc
	var_119_int = 12550; // 0x67 PushI
	var_120_int = -1; // 0x68 PushI
	var_121_int = 13719; // 0x69 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x6a TObjFunc
	goto Label_111; // 0x6c Jump
}


func_576(var_79_bool)
{
	var_81_int = 0; var_82_string = ""; // 0x241 PushV
	var_82_string = "ood5Prisoner1"; // 0x242 MovS
	func_541(var_81_int, var_82_string); // 0x243 Call
	var_85_int = 0; // 0x245 PushI
	var_86_bool = var_81_int == var_85_int; // 0x246 Eq
	if(var_86_bool == 0) goto Label_586; // 0x247 JumpB
	var_79_bool = 1; // 0x248 MovB
	return 0; // 0x249 Return
	
Label_586:
	var_79_bool = 0; // 0x24a MovB
	return 0; // 0x24b Return
}


func_588(var_63_int)
{
	var_64_int = 0; var_65_int = 0; // 0x24c PushV
	var_66_string = "player"; // 0x24d PushS
	GetVariable(var_66_string, var_65_int); // 0x24e Func
	var_67_int = 0; // 0x250 PushI
	var_68_bool = var_65_int == var_67_int; // 0x251 Eq
	if(var_68_bool == 0) goto Label_598; // 0x252 JumpB
	var_63_int = 200001; // 0x253 MovI
	return 2; // 0x254 Return
	
Label_598:
	var_69_int = 1; // 0x256 PushI
	var_70_bool = var_65_int == var_69_int; // 0x257 Eq
	if(var_70_bool == 0) goto Label_603; // 0x258 JumpB
	var_63_int = 200002; // 0x259 MovI
	return 2; // 0x25a Return
	
Label_603:
	var_63_int = 200003; // 0x25b MovI
	return 2; // 0x25c Return
}


func_605(var_61_int)
{
	var_61_int = 3341; // 0x25d MovI
	return 0; // 0x25e Return
}


func_607(var_62_string)
{
	var_62_string = "ui/NPC_None.png"; // 0x25f MovS
	return 0; // 0x260 Return
}


func_609(var_88_bool)
{
	var_88_bool = 0; // 0x261 MovB
	return 0; // 0x262 Return
}


func_359(var_8_bool)
{
	var_8_bool = 1; // 0x167 MovB
	return 0; // 0x168 Return
}


func_361()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0; // 0x169 PushV
	WaitForAnimEnd(); // 0x16a Func
	var_25_bool = 0; // 0x16c PushV
	func_435(var_25_bool); // 0x16d Call
	var_26_bool = var_25_bool == 0; // 0x16f Not
	if(var_26_bool == 0) goto Label_370; // 0x170 JumpB
	return 14; // 0x171 Return
	
Label_370:
	var_27_int = 0; // 0x172 PushV
	func_553(var_27_int); // 0x173 Call
	var_18_int = var_27_int; // 0x174 Mov
	var_19_int = 0; // 0x176 MovI
	
Label_375:
	var_40_bool = 0; // 0x177 PushV
	var_40_bool = 0; // 0x178 MovB
	var_41_int = 5; // 0x179 PushI
	var_42_bool = var_19_int < var_41_int; // 0x17a LT
	if(var_42_bool == 0) goto Label_385; // 0x17b JumpB
	var_43_bool = 0; // 0x17c PushV
	func_435(var_43_bool); // 0x17d Call
	if(var_43_bool == 0) goto Label_385; // 0x17f JumpB
	var_40_bool = 1; // 0x180 MovB
	
Label_385:
	if(var_40_bool == 0) goto Label_429; // 0x181 JumpB
	var_44_int = 3; // 0x182 PushI
	irand(var_20_int, var_44_int); // 0x183 Func
	var_45_int = 0; // 0x185 PushI
	var_46_bool = var_20_int == var_45_int; // 0x186 Eq
	if(var_46_bool == 0) goto Label_409; // 0x187 JumpB
	var_47_int = var_18_int; // 0x188 Push
	if(var_47_int == 0) goto Label_408; // 0x189 JumpB
	irand(var_21_int, var_18_int); // 0x18a Func
	var_48_string = "all"; // 0x18c PushS
	var_49_string = ""; var_50_int = 0; // 0x18d PushV
	var_50_int = var_21_int; // 0x18e Mov
	func_546(var_49_string, var_50_int); // 0x18f Call
	PlayAnimation(var_48_string, var_49_string); // 0x191 Func
	WaitForAnimEnd(var_22_bool); // 0x193 Func
	var_51_bool = var_22_bool == 0; // 0x195 Not
	if(var_51_bool == 0) goto Label_408; // 0x196 JumpB
	goto Label_429; // 0x197 Jump
	
Label_429:
	return 14; // 0x1ad Return
	
Label_408:
	goto Label_426; // 0x198 Jump
	
Label_426:
	var_52_int = 1; // 0x1aa PushI
	var_19_int = var_19_int + var_52_int; // 0x1ab Add2
	goto Label_375; // 0x1ac Jump
	
Label_409:
	var_53_int = 1; // 0x199 PushI
	var_54_bool = var_20_int == var_53_int; // 0x19a Eq
	if(var_54_bool == 0) goto Label_423; // 0x19b JumpB
	var_55_int = 4; // 0x19c PushI
	rand(var_23_float, var_55_int); // 0x19d Func
	var_56_int = 1; // 0x19f PushI
	var_57_int = var_23_float + var_56_int; // 0x1a0 Add
	Sleep(var_57_int, var_24_bool); // 0x1a1 Func
	var_58_bool = var_24_bool == 0; // 0x1a3 Not
	if(var_58_bool == 0) goto Label_422; // 0x1a4 JumpB
	goto Label_429; // 0x1a5 Jump
	
Label_422:
	goto Label_426; // 0x1a6 Jump
	
Label_423:
	var_59_int = var_19_int; // 0x1a7 Push
	if(var_59_int == 0) goto Label_426; // 0x1a8 JumpB
	goto Label_429; // 0x1a9 Jump
}


func_496()
{
	CameraSwitchToNormal(); // 0x1f1 Func
	return 0; // 0x1f3 Return
}


func_500(var_91_string)
{
	var_92_float = 0; var_93_float = 0; var_94_float = 0; var_95_float = 0; // 0x1f4 PushV
	var_96_string = "playing "; // 0x1f5 PushS
	var_97_int = var_96_string + var_91_string; // 0x1f6 Add
	Trace(var_97_int); // 0x1f7 Func
	lshGetAnimTimes(var_91_string, var_94_float, var_95_float); // 0x1f9 Func
	lshPlayAnimation(var_94_float, var_95_float); // 0x1fb Func
	var_98_string = "start: "; // 0x1fd PushS
	var_99_int = var_98_string + var_94_float; // 0x1fe Add
	Trace(var_99_int); // 0x1ff Func
	var_100_string = "end: "; // 0x201 PushS
	var_101_int = var_100_string + var_95_float; // 0x202 Add
	Trace(var_101_int); // 0x203 Func
	return 4; // 0x205 Return
}


