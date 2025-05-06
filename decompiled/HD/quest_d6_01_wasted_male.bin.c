task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa5 PushI
	if(var_12_int == 0) goto Label_320; // 0xa6 JumpB
	func_651(); // 0xa8 NEW_2
	var_14_int = 4170; // 0xaa PushI
	var_15_bool = var_11_object == var_14_int; // 0xab Eq
	if(var_15_bool == 0) goto Label_178; // 0xac JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xad PushV
	var_16_object = var_1_object; // 0xae MovT
	var_17_object = var_0_object; // 0xaf MovT
	func_707(); // 0xb0 NEW_2
	
Label_178:
	var_20_int = 4169; // 0xb2 PushI
	var_21_bool = var_10_bool == var_20_int; // 0xb3 Eq
	if(var_21_bool == 0) goto Label_211; // 0xb4 JumpB
	var_22_string = ""; // 0xb5 PushV
	var_22_string = "Neutral"; // 0xb6 MovS
	func_142(var_11_object, var_22_string); // 0xb7 NEW_2
	var_39_int = 503835; // 0xb9 PushI
	SetMessage(var_39_int); // 0xba TObjFunc
	ClearReplies(); // 0xbc TObjFunc
	var_40_bool = 0; var_41_object = Obj(); // 0xbe PushV
	var_41_object = var_1_object; // 0xbf MovT
	func_713(var_41_object); // 0xc0 NEW_2
	if(var_40_bool == 0) goto Label_200; // 0xc2 JumpB
	var_48_int = 503836; // 0xc3 PushI
	var_49_int = 4173; // 0xc4 PushI
	var_50_int = 4170; // 0xc5 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xc6 TObjFunc
	
Label_200:
	var_51_int = 536330; // 0xc8 PushI
	var_52_int = -1; // 0xc9 PushI
	var_53_int = 38111; // 0xca PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xcb TObjFunc
	var_54_int = 536331; // 0xcd PushI
	var_55_int = -1; // 0xce PushI
	var_56_int = 38112; // 0xcf PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xd0 TObjFunc
	return 0; // 0xd2 Return
	
Label_211:
	var_57_int = 4173; // 0xd3 PushI
	var_58_bool = var_10_bool == var_57_int; // 0xd4 Eq
	if(var_58_bool == 0) goto Label_234; // 0xd5 JumpB
	var_59_string = ""; // 0xd6 PushV
	var_59_string = "Neutral"; // 0xd7 MovS
	func_142(var_11_object, var_59_string); // 0xd8 NEW_2
	var_60_int = 503839; // 0xda PushI
	SetMessage(var_60_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_61_int = 503842; // 0xdf PushI
	var_62_int = 4179; // 0xe0 PushI
	var_63_int = 4177; // 0xe1 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xe2 TObjFunc
	var_64_int = 503837; // 0xe4 PushI
	var_65_int = 4174; // 0xe5 PushI
	var_66_int = 4171; // 0xe6 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_67_int = 4174; // 0xea PushI
	var_68_bool = var_10_bool == var_67_int; // 0xeb Eq
	if(var_68_bool == 0) goto Label_257; // 0xec JumpB
	var_69_string = ""; // 0xed PushV
	var_69_string = "Neutral"; // 0xee MovS
	func_142(var_11_object, var_69_string); // 0xef NEW_2
	var_70_int = 503840; // 0xf1 PushI
	SetMessage(var_70_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_71_int = 503841; // 0xf6 PushI
	var_72_int = 4179; // 0xf7 PushI
	var_73_int = 4175; // 0xf8 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xf9 TObjFunc
	var_74_int = 503843; // 0xfb PushI
	var_75_int = 4179; // 0xfc PushI
	var_76_int = 4178; // 0xfd PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_77_int = 4179; // 0x101 PushI
	var_78_bool = var_10_bool == var_77_int; // 0x102 Eq
	if(var_78_bool == 0) goto Label_280; // 0x103 JumpB
	var_79_string = ""; // 0x104 PushV
	var_79_string = "Neutral"; // 0x105 MovS
	func_142(var_11_object, var_79_string); // 0x106 NEW_2
	var_80_int = 503844; // 0x108 PushI
	SetMessage(var_80_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_81_int = 503845; // 0x10d PushI
	var_82_int = 4183; // 0x10e PushI
	var_83_int = 4181; // 0x10f PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x110 TObjFunc
	var_84_int = 503846; // 0x112 PushI
	var_85_int = -1; // 0x113 PushI
	var_86_int = 4182; // 0x114 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x115 TObjFunc
	return 0; // 0x117 Return
	
Label_280:
	var_87_int = 4183; // 0x118 PushI
	var_88_bool = var_10_bool == var_87_int; // 0x119 Eq
	if(var_88_bool == 0) goto Label_308; // 0x11a JumpB
	var_89_string = ""; // 0x11b PushV
	var_89_string = "Neutral"; // 0x11c MovS
	func_142(var_11_object, var_89_string); // 0x11d NEW_2
	var_90_int = 503847; // 0x11f PushI
	SetMessage(var_90_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_91_int = 503848; // 0x124 PushI
	var_92_int = -1; // 0x125 PushI
	var_93_int = 4185; // 0x126 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x127 TObjFunc
	var_94_int = 503849; // 0x129 PushI
	var_95_int = -1; // 0x12a PushI
	var_96_int = 4186; // 0x12b PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x12c TObjFunc
	var_97_int = 503850; // 0x12e PushI
	var_98_int = -1; // 0x12f PushI
	var_99_int = 4187; // 0x130 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x131 TObjFunc
	return 0; // 0x133 Return
	
Label_308:
	var_3_string = 1; // 0x134 TMovB
	var_100_bool = 0; // 0x135 PushV
	func_705(var_100_bool); // 0x136 NEW_2
	if(var_100_bool == 0) goto Label_316; // 0x138 JumpB
	lshStopAnimation(); // 0x139 Func
	goto Label_318; // 0x13b Jump
	
Label_318:
	return 0; // 0x13e Return
	
Label_316:
	StopAnimation(); // 0x13c Func
	
Label_320:
	return 0; // 0x140 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_409(var_9_object, var_10_object); // 0x14f NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x151 PushV
	var_15_object = var_10_object; // 0x152 Mov
	TaskCall(0); // 0x153 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x154 NEW_2
	TaskReturn(); // 0x155 TaskReturn
	return 0; // 0x157 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x183 PushI
	var_12_bool = var_10_int == var_11_int; // 0x184 Eq
	if(var_12_bool == 0) goto Label_408; // 0x185 JumpB
	var_13_bool = 0; // 0x186 PushV
	func_371(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x187 NEW_2
	if(var_13_bool == 0) goto Label_402; // 0x189 JumpB
	var_26_bool = var_2_object == 0; // 0x18a Not
	if(var_26_bool == 0) goto Label_401; // 0x18b JumpB
	var_27_object = Obj(); // 0x18c PushV
	var_27_object = var_4_bool; // 0x18d MovT
	func_640(var_27_object); // 0x18e NEW_2
	var_2_object = 1; // 0x190 TMovB
	
Label_401:
	goto Label_408; // 0x191 Jump
	
Label_408:
	return 0; // 0x198 Return
	
Label_402:
	var_34_object = var_2_object; // 0x192 PushT
	if(var_34_object == 0) goto Label_408; // 0x193 JumpB
	var_35_string = "head"; // 0x194 PushS
	UnlookAsync(var_35_string); // 0x195 Func
	var_2_object = 0; // 0x197 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_321:
	var_10_bool = 1; // 0x141 PushB
	if(var_10_bool == 0) goto Label_332; // 0x142 JumpB
	var_11_int = 1; // 0x143 PushI
	Sleep(var_11_int); // 0x144 Func
	var_12_float = 0; var_13_float = 0; // 0x146 PushV
	var_12_float = 300; // 0x147 MovI
	var_13_float = 100; // 0x148 MovI
	func_344(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_12_float, var_13_float); // 0x149 NEW_2
	goto Label_321; // 0x14b Jump
	
Label_332:
	return 0; // 0x14c Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_522(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_699(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_697(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_701(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_703(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_725(var_77_int); // 0x22 NEW_2
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
	var_146_bool = var_24_bool == 0; // 0x38 Not
	if(var_146_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_147_object = Obj(); // 0x3f PushV
	var_147_object = var_15_object; // 0x40 Mov
	func_591(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_640(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x280 PushV
	GetEyesHeight(var_30_float); // 0x281 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x283 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x284 PushE
	var_32_float = var_30_float; // 0x285 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x286 PopE
	var_33_string = "head"; // 0x287 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x288 Func
	return 4; // 0x28a Return
}


func_705(var_68_bool)
{
	var_68_bool = 0; // 0x2c1 MovB
	return 0; // 0x2c2 Return
}


func_707()
{
	var_18_string = "ood6WastedMale1"; // 0x2c4 PushS
	var_19_int = 1; // 0x2c5 PushI
	SetVariable(var_18_string, var_19_int); // 0x2c6 Func
	return 0; // 0x2c8 Return
}


func_509(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1fd PushV
	GetPosition(var_22_cvector); // 0x1fe Func
	GetPosition(var_23_cvector); // 0x200 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x202 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x203 Or2
	return 6; // 0x204 Return
}


func_517(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x205 PushV
	IsLoaded(var_16_bool); // 0x206 Func
	var_14_bool = var_16_bool; // 0x208 Mov
	return 2; // 0x209 Return
}


func_713(var_111_bool)
{
	var_113_int = 0; var_114_string = ""; // 0x2ca PushV
	var_114_string = "ood6WastedMale1"; // 0x2cb MovS
	func_668(var_113_int, var_114_string); // 0x2cc NEW_2
	var_117_int = 0; // 0x2ce PushI
	var_118_bool = var_113_int == var_117_int; // 0x2cf Eq
	if(var_118_bool == 0) goto Label_723; // 0x2d0 JumpB
	var_111_bool = 1; // 0x2d1 MovB
	return 0; // 0x2d2 Return
	
Label_723:
	var_111_bool = 0; // 0x2d3 MovB
	return 0; // 0x2d4 Return
}


func_522(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x20a PushV
	GetPosition(var_38_cvector); // 0x20b ObjFunc
	GetEyesHeight(var_37_float); // 0x20d ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x20f PushE
	var_46_float = var_46_float + var_37_float; // 0x210 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x211 PopE
	GetPosition(var_39_cvector); // 0x212 Func
	GetEyesHeight(var_37_float); // 0x214 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x216 PushE
	var_47_float = var_47_float + var_37_float; // 0x217 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x218 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x219 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x21a PushE
	var_48_float = 0; // 0x21b MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x21c PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x21d Or
	var_50_float = sqrt(var_49_int); // 0x21e Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x21f Div2
	var_41_cvector = -var_40_cvector; // 0x220 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x221 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x222 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x223 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x224 Xor2
	func_658(var_52_cvector, var_53_cvector); // 0x225 NEW_2
	var_60_int = 25; // 0x227 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x228 Mult
	var_62_int = var_51_float + var_61_float; // 0x229 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x22a PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x22b Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x22c Add2
	IsOverrideActive(var_44_bool); // 0x22d Func
	var_64_bool = var_44_bool; // 0x22f Push
	if(var_64_bool == 0) goto Label_563; // 0x230 JumpB
	var_25_bool = 0; // 0x231 MovB
	return 18; // 0x232 Return
	
Label_563:
	StopWorld(); // 0x233 Func
	var_65_bool = 1; // 0x235 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x236 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x238 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x239 PushE
	Rotate(var_66_float, var_67_float); // 0x23a Func
	var_68_bool = 0; // 0x23c PushV
	func_705(var_68_bool); // 0x23d NEW_2
	if(var_68_bool == 0) goto Label_577; // 0x23f JumpB
	goto Label_585; // 0x240 Jump
	
Label_585:
	CameraWaitForPlayFinish(); // 0x249 Func
	ResumeWorld(); // 0x24b Func
	var_25_bool = 1; // 0x24d MovB
	return 18; // 0x24e Return
	
Label_577:
	var_69_string = "head"; // 0x241 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x242 Func
	var_70_bool = var_45_bool; // 0x244 Push
	if(var_70_bool == 0) goto Label_585; // 0x245 JumpB
	var_71_string = "head"; // 0x246 PushS
	LookAsyncCamera(var_71_string); // 0x247 Func
}


func_651()
{
	var_13_bool = 0; // 0x28b PushV
	func_705(var_13_bool); // 0x28c NEW_2
	if(var_13_bool == 0) goto Label_657; // 0x28e JumpB
	lshStopSpeech(); // 0x28f Func
	
Label_657:
	return 0; // 0x291 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_112; // 0x4f JumpB
	var_93_string = ""; // 0x50 PushV
	var_93_string = "Neutral"; // 0x51 MovS
	func_142(var_87_object, var_93_string); // 0x52 NEW_2
	var_110_int = 503835; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_bool = 0; var_112_object = Obj(); // 0x59 PushV
	var_112_object = var_1_object; // 0x5a MovT
	func_713(var_112_object); // 0x5b NEW_2
	if(var_111_bool == 0) goto Label_99; // 0x5d JumpB
	var_119_int = 503836; // 0x5e PushI
	var_120_int = 4173; // 0x5f PushI
	var_121_int = 4170; // 0x60 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x61 TObjFunc
	
Label_99:
	var_122_int = 536330; // 0x63 PushI
	var_123_int = -1; // 0x64 PushI
	var_124_int = 38111; // 0x65 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x66 TObjFunc
	var_125_int = 536331; // 0x68 PushI
	var_126_int = -1; // 0x69 PushI
	var_127_int = 38112; // 0x6a PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_128_bool = 0; // 0x70 PushV
	func_705(var_128_bool); // 0x71 NEW_2
	if(var_128_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_129_string = var_3_string; // 0x76 PushT
	if(var_129_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_130_string = ""; // 0x79 PushV
	var_130_string = var_2_object; // 0x7a MovT
	func_609(var_130_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_141_string = "all"; // 0x7f PushS
	var_142_string = "idle"; // 0x80 PushS
	PlayAnimation(var_141_string, var_142_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_143_string = var_3_string; // 0x85 PushT
	if(var_143_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_144_string = "all"; // 0x88 PushS
	var_145_string = "idle"; // 0x89 PushS
	PlayAnimation(var_144_string, var_145_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
}


func_142(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x8f PushV
	func_705(var_94_bool); // 0x90 NEW_2
	var_95_bool = var_94_bool == 0; // 0x92 Not
	if(var_95_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_96_bool = var_93_string == var_2_object; // 0x95 Eq
	if(var_96_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_97_string = ""; var_98_bool = 0; // 0x98 PushV
	var_97_string = var_93_string; // 0x99 Mov
	var_99_string = ""; // 0x9a PushS
	var_100_bool = var_93_string == var_99_string; // 0x9b Eq
	if(var_100_bool == 0) goto Label_159; // 0x9c JumpB
	var_98_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_625(var_97_string, var_98_bool); // 0xa0 NEW_2
	var_2_object = var_93_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_98_bool = 1; // 0x9f MovB
}


func_591()
{
	var_148_bool = 0; var_149_bool = 0; // 0x24f PushV
	var_150_bool = 1; // 0x250 PushB
	CameraSwitchToNormal(var_150_bool); // 0x251 Func
	var_151_bool = 0; // 0x253 PushV
	func_705(var_151_bool); // 0x254 NEW_2
	if(var_151_bool == 0) goto Label_600; // 0x256 JumpB
	goto Label_608; // 0x257 Jump
	
Label_608:
	return 2; // 0x260 Return
	
Label_600:
	var_152_string = "head"; // 0x258 PushS
	HasAnimationTrack(var_149_bool, var_152_string); // 0x259 Func
	var_153_bool = var_149_bool; // 0x25b Push
	if(var_153_bool == 0) goto Label_608; // 0x25c JumpB
	var_154_string = "head"; // 0x25d PushS
	UnlookAsync(var_154_string); // 0x25e Func
}


func_658(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x292 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x293 Or
	var_56_float = sqrt(var_57_int); // 0x294 Sqrt2
	var_58_float = 0.0; // 0x295 PushF
	var_59_bool = var_56_float < var_58_float; // 0x296 LT
	if(var_59_bool == 0) goto Label_666; // 0x297 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x298 MovV
	return 2; // 0x299 Return
	
Label_666:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x29a Div2
	return 2; // 0x29b Return
}


func_725(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x2d5 PushV
	var_80_string = "branch"; // 0x2d6 PushS
	GetVariable(var_80_string, var_79_int); // 0x2d7 Func
	var_81_int = 0; // 0x2d9 PushI
	var_82_bool = var_79_int == var_81_int; // 0x2da Eq
	if(var_82_bool == 0) goto Label_735; // 0x2db JumpB
	var_77_int = 1; // 0x2dc MovI
	return 2; // 0x2dd Return
	
Label_735:
	var_83_int = 1; // 0x2df PushI
	var_84_bool = var_79_int == var_83_int; // 0x2e0 Eq
	if(var_84_bool == 0) goto Label_740; // 0x2e1 JumpB
	var_77_int = 2; // 0x2e2 MovI
	return 2; // 0x2e3 Return
	
Label_740:
	var_77_int = 3; // 0x2e4 MovI
	return 2; // 0x2e5 Return
}


func_344(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_12_float, var_13_float)
{
	var_14_bool = 0; // 0x159 PushV
	func_517(var_14_bool); // 0x15a NEW_2
	var_17_bool = var_14_bool == 0; // 0x15c Not
	if(var_17_bool == 0) goto Label_351; // 0x15d JumpB
	return 0; // 0x15e Return
	
Label_351:
	var_18_string = "player"; // 0x15f PushS
	FindActor(var_9_object, var_18_string); // 0x160 Func
	var_2_object = 0; // 0x162 TMovB
	var_3_string = 0; // 0x163 TMovB
	var_0_object = var_12_float; // 0x164 TMov
	var_1_object = var_13_float; // 0x165 TMov
	var_19_int = 10; // 0x166 PushI
	var_20_float = 1.0; // 0x167 PushF
	SetTimer(var_19_int, var_20_float); // 0x168 Func
	func_423(); // 0x16b NEW_2
	var_72_bool = var_3_string == 0; // 0x16d Not
	if(var_72_bool == 0) goto Label_370; // 0x16e JumpB
	var_73_int = 10; // 0x16f PushI
	KillTimer(var_73_int); // 0x170 Func
	
Label_370:
	return 0; // 0x172 Return
}


func_409(var_2_object, var_3_string)
{
	func_504(); // 0x19a NEW_2
	var_11_int = 10; // 0x19c PushI
	KillTimer(var_11_int); // 0x19d Func
	var_12_object = var_2_object; // 0x19f PushT
	if(var_12_object == 0) goto Label_421; // 0x1a0 JumpB
	var_13_string = "head"; // 0x1a1 PushS
	UnlookAsync(var_13_string); // 0x1a2 Func
	var_2_object = 0; // 0x1a4 TMovB
	
Label_421:
	var_3_string = 1; // 0x1a5 TMovB
	return 0; // 0x1a6 Return
}


func_668(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0; // 0x29c PushV
	GetVariable(var_114_string, var_116_int); // 0x29d Func
	var_113_int = var_116_int; // 0x29f Mov
	return 2; // 0x2a0 Return
}


func_673(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = ""; // 0x2a1 PushV
	var_46_string = "idle"; // 0x2a2 MovS
	var_47_int = var_44_int; // 0x2a3 Push
	if(var_47_int == 0) goto Label_678; // 0x2a4 JumpB
	var_46_string = var_46_string + var_44_int; // 0x2a5 Add2
	
Label_678:
	var_43_string = var_46_string; // 0x2a6 Mov
	return 2; // 0x2a7 Return
}


func_609(var_130_string)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0; // 0x261 PushV
	lshHasAnimation(var_134_bool, var_130_string); // 0x262 Func
	var_137_bool = var_134_bool; // 0x264 Push
	if(var_137_bool == 0) goto Label_620; // 0x265 JumpB
	lshGetAnimTimes(var_130_string, var_135_float, var_136_float); // 0x266 Func
	var_138_bool = 0; // 0x268 PushB
	lshPlayAnimation(var_135_float, var_136_float, var_138_bool); // 0x269 Func
	goto Label_624; // 0x26b Jump
	
Label_624:
	return 6; // 0x270 Return
	
Label_620:
	var_139_string = "Can't find lsh animation : "; // 0x26c PushS
	var_140_int = var_139_string + var_130_string; // 0x26d Add
	Trace(var_140_int); // 0x26e Func
}


func_423()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x1a7 PushV
	WaitForAnimEnd(); // 0x1a8 Func
	var_35_bool = 0; // 0x1aa PushV
	func_517(var_35_bool); // 0x1ab NEW_2
	var_36_bool = var_35_bool == 0; // 0x1ad Not
	if(var_36_bool == 0) goto Label_432; // 0x1ae JumpB
	return 14; // 0x1af Return
	
Label_432:
	var_37_int = 0; // 0x1b0 PushV
	func_680(var_37_int); // 0x1b1 NEW_2
	var_28_int = var_37_int; // 0x1b2 Mov
	var_29_int = 0; // 0x1b4 MovI
	
Label_437:
	var_50_bool = 0; // 0x1b5 PushV
	var_50_bool = 0; // 0x1b6 MovB
	var_51_int = 5; // 0x1b7 PushI
	var_52_bool = var_29_int < var_51_int; // 0x1b8 LT
	if(var_52_bool == 0) goto Label_447; // 0x1b9 JumpB
	var_53_bool = 0; // 0x1ba PushV
	func_517(var_53_bool); // 0x1bb NEW_2
	if(var_53_bool == 0) goto Label_447; // 0x1bd JumpB
	var_50_bool = 1; // 0x1be MovB
	
Label_447:
	if(var_50_bool == 0) goto Label_499; // 0x1bf JumpB
	var_54_int = 3; // 0x1c0 PushI
	irand(var_30_int, var_54_int); // 0x1c1 Func
	var_55_int = 0; // 0x1c3 PushI
	var_56_bool = var_30_int == var_55_int; // 0x1c4 Eq
	if(var_56_bool == 0) goto Label_471; // 0x1c5 JumpB
	var_57_int = var_28_int; // 0x1c6 Push
	if(var_57_int == 0) goto Label_470; // 0x1c7 JumpB
	irand(var_31_int, var_28_int); // 0x1c8 Func
	var_58_string = "all"; // 0x1ca PushS
	var_59_string = ""; var_60_int = 0; // 0x1cb PushV
	var_60_int = var_31_int; // 0x1cc Mov
	func_673(var_59_string, var_60_int); // 0x1cd NEW_2
	PlayAnimation(var_58_string, var_59_string); // 0x1cf Func
	WaitForAnimEnd(var_32_bool); // 0x1d1 Func
	var_61_bool = var_32_bool == 0; // 0x1d3 Not
	if(var_61_bool == 0) goto Label_470; // 0x1d4 JumpB
	goto Label_499; // 0x1d5 Jump
	
Label_499:
	ResetAAS(); // 0x1f3 Func
	return 14; // 0x1f5 Return
	
Label_470:
	goto Label_488; // 0x1d6 Jump
	
Label_488:
	var_62_bool = 0; // 0x1e8 PushV
	func_502(var_62_bool); // 0x1e9 NEW_2
	var_63_bool = var_62_bool == 0; // 0x1eb Not
	if(var_63_bool == 0) goto Label_494; // 0x1ec JumpB
	goto Label_499; // 0x1ed Jump
	
Label_494:
	ResetAAS(); // 0x1ee Func
	var_64_int = 1; // 0x1f0 PushI
	var_29_int = var_29_int + var_64_int; // 0x1f1 Add2
	goto Label_437; // 0x1f2 Jump
	
Label_471:
	var_65_int = 1; // 0x1d7 PushI
	var_66_bool = var_30_int == var_65_int; // 0x1d8 Eq
	if(var_66_bool == 0) goto Label_485; // 0x1d9 JumpB
	var_67_int = 4; // 0x1da PushI
	rand(var_33_float, var_67_int); // 0x1db Func
	var_68_int = 1; // 0x1dd PushI
	var_69_int = var_33_float + var_68_int; // 0x1de Add
	Sleep(var_69_int, var_34_bool); // 0x1df Func
	var_70_bool = var_34_bool == 0; // 0x1e1 Not
	if(var_70_bool == 0) goto Label_484; // 0x1e2 JumpB
	goto Label_499; // 0x1e3 Jump
	
Label_484:
	goto Label_488; // 0x1e4 Jump
	
Label_485:
	var_71_int = var_29_int; // 0x1e5 Push
	if(var_71_int == 0) goto Label_488; // 0x1e6 JumpB
	goto Label_499; // 0x1e7 Jump
}


func_680(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x2a8 PushV
	var_40_int = 0; // 0x2a9 MovI
	
Label_682:
	var_42_string = "all"; // 0x2aa PushS
	var_43_string = ""; var_44_int = 0; // 0x2ab PushV
	var_44_int = var_40_int; // 0x2ac Mov
	func_673(var_43_string, var_44_int); // 0x2ad NEW_2
	HasAnimation(var_41_bool, var_42_string, var_43_string); // 0x2af Func
	var_48_bool = var_41_bool == 0; // 0x2b1 Not
	if(var_48_bool == 0) goto Label_692; // 0x2b2 JumpB
	goto Label_695; // 0x2b3 Jump
	
Label_695:
	var_37_int = var_40_int; // 0x2b7 Mov
	return 4; // 0x2b8 Return
	
Label_692:
	var_49_int = 1; // 0x2b4 PushI
	var_40_int = var_40_int + var_49_int; // 0x2b5 Add2
	goto Label_682; // 0x2b6 Jump
}


func_625(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x271 PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x272 Func
	var_107_bool = var_104_bool; // 0x274 Push
	if(var_107_bool == 0) goto Label_635; // 0x275 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x276 Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x278 Func
	goto Label_639; // 0x27a Jump
	
Label_639:
	return 6; // 0x27f Return
	
Label_635:
	var_108_string = "Can't find lsh animation : "; // 0x27b PushS
	var_109_int = var_108_string + var_97_string; // 0x27c Add
	Trace(var_109_int); // 0x27d Func
}


func_371(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x173 PushV
	var_16_bool = var_4_bool == 0; // 0x174 NullEq
	if(var_16_bool == 0) goto Label_376; // 0x175 JumpB
	var_13_bool = 0; // 0x176 MovB
	return 2; // 0x177 Return
	
Label_376:
	var_17_float = 0; var_18_object = Obj(); // 0x178 PushV
	var_18_object = var_4_bool; // 0x179 MovT
	func_509(var_18_object); // 0x17a NEW_2
	var_15_float = sqrt(var_17_float); // 0x17c Sqrt2
	var_25_object = var_2_object; // 0x17d PushT
	if(var_25_object == 0) goto Label_384; // 0x17e JumpB
	var_15_float = var_15_float - var_1_object; // 0x17f Sub2
	
Label_384:
	var_13_bool = var_15_float < var_0_object; // 0x180 LT2
	return 2; // 0x181 Return
}


func_502(var_62_bool)
{
	var_62_bool = 1; // 0x1f6 MovB
	return 0; // 0x1f7 Return
}


func_504()
{
	StopAnimation(); // 0x1f8 Func
	StopGroup0(); // 0x1fa Func
	return 0; // 0x1fc Return
}


func_697(var_74_int)
{
	var_74_int = 515556; // 0x2b9 MovI
	return 0; // 0x2ba Return
}


func_699(var_73_int)
{
	var_73_int = 503341; // 0x2bb MovI
	return 0; // 0x2bc Return
}


func_701(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png"; // 0x2bd MovS
	return 0; // 0x2be Return
}


func_703(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png"; // 0x2bf MovS
	return 0; // 0x2c0 Return
}


