task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x9b PushI
	if(var_8_int == 0) goto Label_213; // 0x9c JumpB
	func_506(); // 0x9e NEW_2
	var_10_int = 22207; // 0xa0 PushI
	var_11_bool = var_6_int == var_10_int; // 0xa1 Eq
	if(var_11_bool == 0) goto Label_183; // 0xa2 JumpB
	var_12_string = ""; // 0xa3 PushV
	var_12_string = "Neutral"; // 0xa4 MovS
	func_132(var_7_bool, var_12_string); // 0xa5 NEW_2
	var_29_int = 520994; // 0xa7 PushI
	SetMessage(var_29_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_30_int = 520995; // 0xac PushI
	var_31_int = 29851; // 0xad PushI
	var_32_int = 22208; // 0xae PushI
	AddReply(var_30_int, var_31_int, var_32_int); // 0xaf TObjFunc
	var_33_int = 528463; // 0xb1 PushI
	var_34_int = -1; // 0xb2 PushI
	var_35_int = 29850; // 0xb3 PushI
	AddReply(var_33_int, var_34_int, var_35_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_36_int = 29851; // 0xb7 PushI
	var_37_bool = var_6_int == var_36_int; // 0xb8 Eq
	if(var_37_bool == 0) goto Label_201; // 0xb9 JumpB
	var_38_string = ""; // 0xba PushV
	var_38_string = "Neutral"; // 0xbb MovS
	func_132(var_7_bool, var_38_string); // 0xbc NEW_2
	var_39_int = 528464; // 0xbe PushI
	SetMessage(var_39_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_40_int = 528465; // 0xc3 PushI
	var_41_int = -1; // 0xc4 PushI
	var_42_int = 29852; // 0xc5 PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_3_string = 1; // 0xc9 TMovB
	var_43_bool = 0; // 0xca PushV
	func_578(var_43_bool); // 0xcb NEW_2
	if(var_43_bool == 0) goto Label_209; // 0xcd JumpB
	lshStopAnimation(); // 0xce Func
	goto Label_211; // 0xd0 Jump
	
Label_211:
	return 0; // 0xd3 Return
	
Label_209:
	StopAnimation(); // 0xd1 Func
	
Label_213:
	return 0; // 0xd5 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_378(); // 0xd8 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0xda PushV
	var_8_object = var_6_object; // 0xdb Mov
	TaskCall(0); // 0xdc TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0xdd NEW_2
	TaskReturn(); // 0xde TaskReturn
	return 0; // 0xe0 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x10b PushS
	var_8_bool = var_6_string == var_7_string; // 0x10c Eq
	if(var_8_bool == 0) goto Label_273; // 0x10d JumpB
	func_246(var_6_string); // 0x10f NEW_2
	
Label_273:
	return 0; // 0x111 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x112 Func
	sync(); // 0x114 Func
	return 0; // 0x116 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x117 PushV
	var_6_bool = 0; // 0x118 MovB
	var_7_object = var_0_object; // 0x119 PushT
	if(var_7_object == 0) goto Label_288; // 0x11a JumpB
	var_8_bool = 0; // 0x11b PushV
	func_295(var_8_bool); // 0x11c NEW_2
	if(var_8_bool == 0) goto Label_288; // 0x11e JumpB
	var_6_bool = 1; // 0x11f MovB
	
Label_288:
	if(var_6_bool == 0) goto Label_294; // 0x120 JumpB
	var_9_object = Obj(); // 0x121 PushV
	func_513(var_9_object); // 0x122 NEW_2
	RemoveActor(var_9_object); // 0x124 Func
	
Label_294:
	return 0; // 0x126 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0xe1 PushV
	
Label_226:
	var_8_bool = 0; // 0xe2 PushV
	func_383(var_8_bool); // 0xe3 NEW_2
	var_11_bool = var_8_bool == 0; // 0xe5 Not
	if(var_11_bool == 0) goto Label_234; // 0xe6 JumpB
	Hold(); // 0xe7 Func
	goto Label_226; // 0xe9 Jump
	
Label_234:
	var_12_int = 3; // 0xea PushI
	rand(var_7_float, var_12_int); // 0xeb Func
	var_13_int = 3; // 0xed PushI
	var_14_int = var_7_float + var_13_int; // 0xee Add
	Sleep(var_14_int); // 0xef Func
	func_297(); // 0xf2 NEW_2
	goto Label_226; // 0xf4 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_388(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_572(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_570(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_574(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_576(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_553(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_object = Obj(); var_80_object = Obj(); // 0x2f PushV
	var_79_object = var_8_object; // 0x30 Mov
	var_80_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_128_bool = var_17_bool == 0; // 0x38 Not
	if(var_128_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_129_object = Obj(); // 0x3f PushV
	var_129_object = var_8_object; // 0x40 Mov
	func_457(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_513(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x201 PushV
	self(var_11_object); // 0x202 Func
	var_9_object = var_11_object; // 0x204 Mov
	return 2; // 0x205 Return
}


func_388(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x184 PushV
	GetPosition(var_31_cvector); // 0x185 ObjFunc
	GetEyesHeight(var_30_float); // 0x187 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x189 PushE
	var_39_float = var_39_float + var_30_float; // 0x18a Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x18b PopE
	GetPosition(var_32_cvector); // 0x18c Func
	GetEyesHeight(var_30_float); // 0x18e Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x190 PushE
	var_40_float = var_40_float + var_30_float; // 0x191 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x192 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x193 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x194 PushE
	var_41_float = 0; // 0x195 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x196 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x197 Or
	var_43_float = sqrt(var_42_int); // 0x198 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x199 Div2
	var_34_cvector = -var_33_cvector; // 0x19a Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x19b Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x19c PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x19d PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x19e Xor2
	func_519(var_45_cvector, var_46_cvector); // 0x19f NEW_2
	var_53_int = 25; // 0x1a1 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x1a2 Mult
	var_55_int = var_44_float + var_54_float; // 0x1a3 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x1a4 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x1a5 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x1a6 Add2
	IsOverrideActive(var_37_bool); // 0x1a7 Func
	var_57_bool = var_37_bool; // 0x1a9 Push
	if(var_57_bool == 0) goto Label_429; // 0x1aa JumpB
	var_18_bool = 0; // 0x1ab MovB
	return 18; // 0x1ac Return
	
Label_429:
	StopWorld(); // 0x1ad Func
	var_58_bool = 1; // 0x1af PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x1b0 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x1b2 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x1b3 PushE
	Rotate(var_59_float, var_60_float); // 0x1b4 Func
	var_61_bool = 0; // 0x1b6 PushV
	func_578(var_61_bool); // 0x1b7 NEW_2
	if(var_61_bool == 0) goto Label_443; // 0x1b9 JumpB
	goto Label_451; // 0x1ba Jump
	
Label_451:
	CameraWaitForPlayFinish(); // 0x1c3 Func
	ResumeWorld(); // 0x1c5 Func
	var_18_bool = 1; // 0x1c7 MovB
	return 18; // 0x1c8 Return
	
Label_443:
	var_62_string = "head"; // 0x1bb PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x1bc Func
	var_63_bool = var_38_bool; // 0x1be Push
	if(var_63_bool == 0) goto Label_451; // 0x1bf JumpB
	var_64_string = "head"; // 0x1c0 PushS
	LookAsyncCamera(var_64_string); // 0x1c1 Func
}


func_132(var_2_object, var_86_string)
{
	var_87_bool = 0; // 0x85 PushV
	func_578(var_87_bool); // 0x86 NEW_2
	var_88_bool = var_87_bool == 0; // 0x88 Not
	if(var_88_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_89_bool = var_86_string == var_2_object; // 0x8b Eq
	if(var_89_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_90_string = ""; var_91_bool = 0; // 0x8e PushV
	var_90_string = var_86_string; // 0x8f Mov
	var_92_string = ""; // 0x90 PushS
	var_93_bool = var_86_string == var_92_string; // 0x91 Eq
	if(var_93_bool == 0) goto Label_149; // 0x92 JumpB
	var_91_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_491(var_90_string, var_91_bool); // 0x96 NEW_2
	var_2_object = var_86_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_91_bool = 1; // 0x95 MovB
}


func_519(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x207 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x208 Or
	var_49_float = sqrt(var_50_int); // 0x209 Sqrt2
	var_51_float = 0.0; // 0x20a PushF
	var_52_bool = var_49_float < var_51_float; // 0x20b LT
	if(var_52_bool == 0) goto Label_527; // 0x20c JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x20d MovV
	return 2; // 0x20e Return
	
Label_527:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x20f Div2
	return 2; // 0x210 Return
}


func_529(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x211 PushV
	var_40_string = "idle"; // 0x212 MovS
	var_41_int = var_38_int; // 0x213 Push
	if(var_41_int == 0) goto Label_534; // 0x214 JumpB
	var_40_string = var_40_string + var_38_int; // 0x215 Add2
	
Label_534:
	var_37_string = var_40_string; // 0x216 Mov
	return 2; // 0x217 Return
}


func_536(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x218 PushV
	var_34_int = 0; // 0x219 MovI
	
Label_538:
	var_36_string = "all"; // 0x21a PushS
	var_37_string = ""; var_38_int = 0; // 0x21b PushV
	var_38_int = var_34_int; // 0x21c Mov
	func_529(var_37_string, var_38_int); // 0x21d NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x21f Func
	var_42_bool = var_35_bool == 0; // 0x221 Not
	if(var_42_bool == 0) goto Label_548; // 0x222 JumpB
	goto Label_551; // 0x223 Jump
	
Label_551:
	var_31_int = var_34_int; // 0x227 Mov
	return 4; // 0x228 Return
	
Label_548:
	var_43_int = 1; // 0x224 PushI
	var_34_int = var_34_int + var_43_int; // 0x225 Add2
	goto Label_538; // 0x226 Jump
}


func_295(var_8_bool)
{
	var_8_bool = 1; // 0x127 MovB
	return 0; // 0x128 Return
}


func_553(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x229 PushV
	var_73_string = "branch"; // 0x22a PushS
	GetVariable(var_73_string, var_72_int); // 0x22b Func
	var_74_int = 0; // 0x22d PushI
	var_75_bool = var_72_int == var_74_int; // 0x22e Eq
	if(var_75_bool == 0) goto Label_563; // 0x22f JumpB
	var_70_int = 1; // 0x230 MovI
	return 2; // 0x231 Return
	
Label_563:
	var_76_int = 1; // 0x233 PushI
	var_77_bool = var_72_int == var_76_int; // 0x234 Eq
	if(var_77_bool == 0) goto Label_568; // 0x235 JumpB
	var_70_int = 2; // 0x236 MovI
	return 2; // 0x237 Return
	
Label_568:
	var_70_int = 3; // 0x238 MovI
	return 2; // 0x239 Return
}


func_297()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x129 PushV
	WaitForAnimEnd(); // 0x12a Func
	var_29_bool = 0; // 0x12c PushV
	func_383(var_29_bool); // 0x12d NEW_2
	var_30_bool = var_29_bool == 0; // 0x12f Not
	if(var_30_bool == 0) goto Label_306; // 0x130 JumpB
	return 14; // 0x131 Return
	
Label_306:
	var_31_int = 0; // 0x132 PushV
	func_536(var_31_int); // 0x133 NEW_2
	var_22_int = var_31_int; // 0x134 Mov
	var_23_int = 0; // 0x136 MovI
	
Label_311:
	var_44_bool = 0; // 0x137 PushV
	var_44_bool = 0; // 0x138 MovB
	var_45_int = 5; // 0x139 PushI
	var_46_bool = var_23_int < var_45_int; // 0x13a LT
	if(var_46_bool == 0) goto Label_321; // 0x13b JumpB
	var_47_bool = 0; // 0x13c PushV
	func_383(var_47_bool); // 0x13d NEW_2
	if(var_47_bool == 0) goto Label_321; // 0x13f JumpB
	var_44_bool = 1; // 0x140 MovB
	
Label_321:
	if(var_44_bool == 0) goto Label_373; // 0x141 JumpB
	var_48_int = 3; // 0x142 PushI
	irand(var_24_int, var_48_int); // 0x143 Func
	var_49_int = 0; // 0x145 PushI
	var_50_bool = var_24_int == var_49_int; // 0x146 Eq
	if(var_50_bool == 0) goto Label_345; // 0x147 JumpB
	var_51_int = var_22_int; // 0x148 Push
	if(var_51_int == 0) goto Label_344; // 0x149 JumpB
	irand(var_25_int, var_22_int); // 0x14a Func
	var_52_string = "all"; // 0x14c PushS
	var_53_string = ""; var_54_int = 0; // 0x14d PushV
	var_54_int = var_25_int; // 0x14e Mov
	func_529(var_53_string, var_54_int); // 0x14f NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x151 Func
	WaitForAnimEnd(var_26_bool); // 0x153 Func
	var_55_bool = var_26_bool == 0; // 0x155 Not
	if(var_55_bool == 0) goto Label_344; // 0x156 JumpB
	goto Label_373; // 0x157 Jump
	
Label_373:
	ResetAAS(); // 0x175 Func
	return 14; // 0x177 Return
	
Label_344:
	goto Label_362; // 0x158 Jump
	
Label_362:
	var_56_bool = 0; // 0x16a PushV
	func_376(var_56_bool); // 0x16b NEW_2
	var_57_bool = var_56_bool == 0; // 0x16d Not
	if(var_57_bool == 0) goto Label_368; // 0x16e JumpB
	goto Label_373; // 0x16f Jump
	
Label_368:
	ResetAAS(); // 0x170 Func
	var_58_int = 1; // 0x172 PushI
	var_23_int = var_23_int + var_58_int; // 0x173 Add2
	goto Label_311; // 0x174 Jump
	
Label_345:
	var_59_int = 1; // 0x159 PushI
	var_60_bool = var_24_int == var_59_int; // 0x15a Eq
	if(var_60_bool == 0) goto Label_359; // 0x15b JumpB
	var_61_int = 4; // 0x15c PushI
	rand(var_27_float, var_61_int); // 0x15d Func
	var_62_int = 1; // 0x15f PushI
	var_63_int = var_27_float + var_62_int; // 0x160 Add
	Sleep(var_63_int, var_28_bool); // 0x161 Func
	var_64_bool = var_28_bool == 0; // 0x163 Not
	if(var_64_bool == 0) goto Label_358; // 0x164 JumpB
	goto Label_373; // 0x165 Jump
	
Label_358:
	goto Label_362; // 0x166 Jump
	
Label_359:
	var_65_int = var_23_int; // 0x167 Push
	if(var_65_int == 0) goto Label_362; // 0x168 JumpB
	goto Label_373; // 0x169 Jump
}


func_570(var_67_int)
{
	var_67_int = 515572; // 0x23a MovI
	return 0; // 0x23b Return
}


func_572(var_66_int)
{
	var_66_int = 504031; // 0x23c MovI
	return 0; // 0x23d Return
}


func_574(var_68_string)
{
	var_68_string = "ui/NPC_Citizen2.png"; // 0x23e MovS
	return 0; // 0x23f Return
}


func_576(var_69_string)
{
	var_69_string = "ui/NPC_Citizen2_b.png"; // 0x240 MovS
	return 0; // 0x241 Return
}


func_578(var_61_bool)
{
	var_61_bool = 0; // 0x242 MovB
	return 0; // 0x243 Return
}


func_457()
{
	var_130_bool = 0; var_131_bool = 0; // 0x1c9 PushV
	var_132_bool = 1; // 0x1ca PushB
	CameraSwitchToNormal(var_132_bool); // 0x1cb Func
	var_133_bool = 0; // 0x1cd PushV
	func_578(var_133_bool); // 0x1ce NEW_2
	if(var_133_bool == 0) goto Label_466; // 0x1d0 JumpB
	goto Label_474; // 0x1d1 Jump
	
Label_474:
	return 2; // 0x1da Return
	
Label_466:
	var_134_string = "head"; // 0x1d2 PushS
	HasAnimationTrack(var_131_bool, var_134_string); // 0x1d3 Func
	var_135_bool = var_131_bool; // 0x1d5 Push
	if(var_135_bool == 0) goto Label_474; // 0x1d6 JumpB
	var_136_string = "head"; // 0x1d7 PushS
	UnlookAsync(var_136_string); // 0x1d8 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_102; // 0x4f JumpB
	var_86_string = ""; // 0x50 PushV
	var_86_string = "Neutral"; // 0x51 MovS
	func_132(var_80_object, var_86_string); // 0x52 NEW_2
	var_103_int = 520994; // 0x54 PushI
	SetMessage(var_103_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_104_int = 520995; // 0x59 PushI
	var_105_int = 29851; // 0x5a PushI
	var_106_int = 22208; // 0x5b PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x5c TObjFunc
	var_107_int = 528463; // 0x5e PushI
	var_108_int = -1; // 0x5f PushI
	var_109_int = 29850; // 0x60 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_110_bool = 0; // 0x66 PushV
	func_578(var_110_bool); // 0x67 NEW_2
	if(var_110_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_111_string = var_3_string; // 0x6c PushT
	if(var_111_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_112_string = ""; // 0x6f PushV
	var_112_string = var_2_object; // 0x70 MovT
	func_475(var_112_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_123_string = "all"; // 0x75 PushS
	var_124_string = "idle"; // 0x76 PushS
	PlayAnimation(var_123_string, var_124_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_125_string = var_3_string; // 0x7b PushT
	if(var_125_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_126_string = "all"; // 0x7e PushS
	var_127_string = "idle"; // 0x7f PushS
	PlayAnimation(var_126_string, var_127_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_475(var_112_string)
{
	var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_bool = 0; var_117_float = 0; var_118_float = 0; // 0x1db PushV
	lshHasAnimation(var_116_bool, var_112_string); // 0x1dc Func
	var_119_bool = var_116_bool; // 0x1de Push
	if(var_119_bool == 0) goto Label_486; // 0x1df JumpB
	lshGetAnimTimes(var_112_string, var_117_float, var_118_float); // 0x1e0 Func
	var_120_bool = 0; // 0x1e2 PushB
	lshPlayAnimation(var_117_float, var_118_float, var_120_bool); // 0x1e3 Func
	goto Label_490; // 0x1e5 Jump
	
Label_490:
	return 6; // 0x1ea Return
	
Label_486:
	var_121_string = "Can't find lsh animation : "; // 0x1e6 PushS
	var_122_int = var_121_string + var_112_string; // 0x1e7 Add
	Trace(var_122_int); // 0x1e8 Func
}


func_491(var_90_string, var_91_bool)
{
	var_94_bool = 0; var_95_float = 0; var_96_float = 0; var_97_bool = 0; var_98_float = 0; var_99_float = 0; // 0x1eb PushV
	lshHasAnimation(var_97_bool, var_90_string); // 0x1ec Func
	var_100_bool = var_97_bool; // 0x1ee Push
	if(var_100_bool == 0) goto Label_501; // 0x1ef JumpB
	lshGetAnimTimes(var_90_string, var_98_float, var_99_float); // 0x1f0 Func
	lshPlayAnimation(var_98_float, var_99_float, var_91_bool); // 0x1f2 Func
	goto Label_505; // 0x1f4 Jump
	
Label_505:
	return 6; // 0x1f9 Return
	
Label_501:
	var_101_string = "Can't find lsh animation : "; // 0x1f5 PushS
	var_102_int = var_101_string + var_90_string; // 0x1f6 Add
	Trace(var_102_int); // 0x1f7 Func
}


func_506()
{
	var_9_bool = 0; // 0x1fa PushV
	func_578(var_9_bool); // 0x1fb NEW_2
	if(var_9_bool == 0) goto Label_512; // 0x1fd JumpB
	lshStopSpeech(); // 0x1fe Func
	
Label_512:
	return 0; // 0x200 Return
}


func_246(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0xf6 PushV
	var_0_object = 1; // 0xf7 TMovB
	IsLoaded(var_10_bool); // 0xf8 Func
	var_11_bool = 0; // 0xfa PushV
	var_11_bool = 0; // 0xfb MovB
	var_12_bool = var_10_bool == 0; // 0xfc Not
	if(var_12_bool == 0) goto Label_259; // 0xfd JumpB
	var_13_bool = 0; // 0xfe PushV
	func_295(var_13_bool); // 0xff NEW_2
	if(var_13_bool == 0) goto Label_259; // 0x101 JumpB
	var_11_bool = 1; // 0x102 MovB
	
Label_259:
	if(var_11_bool == 0) goto Label_265; // 0x103 JumpB
	var_14_object = Obj(); // 0x104 PushV
	func_513(var_14_object); // 0x105 NEW_2
	RemoveActor(var_14_object); // 0x107 Func
	
Label_265:
	return 2; // 0x109 Return
}


func_376(var_56_bool)
{
	var_56_bool = 1; // 0x178 MovB
	return 0; // 0x179 Return
}


func_378()
{
	StopAnimation(); // 0x17a Func
	StopGroup0(); // 0x17c Func
	return 0; // 0x17e Return
}


func_383(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x17f PushV
	IsLoaded(var_10_bool); // 0x180 Func
	var_8_bool = var_10_bool; // 0x182 Mov
	return 2; // 0x183 Return
}


