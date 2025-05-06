task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0x9b PushI
	if(var_12_int == 0) goto Label_269; // 0x9c JumpB
	func_596(); // 0x9e NEW_2
	var_14_int = 38121; // 0xa0 PushI
	var_15_bool = var_10_bool == var_14_int; // 0xa1 Eq
	if(var_15_bool == 0) goto Label_183; // 0xa2 JumpB
	var_16_string = ""; // 0xa3 PushV
	var_16_string = "Neutral"; // 0xa4 MovS
	func_132(var_11_object, var_16_string); // 0xa5 NEW_2
	var_33_int = 536339; // 0xa7 PushI
	SetMessage(var_33_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_34_int = 536340; // 0xac PushI
	var_35_int = 38123; // 0xad PushI
	var_36_int = 38122; // 0xae PushI
	AddReply(var_34_int, var_35_int, var_36_int); // 0xaf TObjFunc
	var_37_int = 536351; // 0xb1 PushI
	var_38_int = -1; // 0xb2 PushI
	var_39_int = 38133; // 0xb3 PushI
	AddReply(var_37_int, var_38_int, var_39_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_40_int = 38123; // 0xb7 PushI
	var_41_bool = var_10_bool == var_40_int; // 0xb8 Eq
	if(var_41_bool == 0) goto Label_206; // 0xb9 JumpB
	var_42_string = ""; // 0xba PushV
	var_42_string = "Neutral"; // 0xbb MovS
	func_132(var_11_object, var_42_string); // 0xbc NEW_2
	var_43_int = 536341; // 0xbe PushI
	SetMessage(var_43_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_44_int = 536342; // 0xc3 PushI
	var_45_int = 38125; // 0xc4 PushI
	var_46_int = 38124; // 0xc5 PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xc6 TObjFunc
	var_47_int = 536350; // 0xc8 PushI
	var_48_int = -1; // 0xc9 PushI
	var_49_int = 38132; // 0xca PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xcb TObjFunc
	return 0; // 0xcd Return
	
Label_206:
	var_50_int = 38125; // 0xce PushI
	var_51_bool = var_10_bool == var_50_int; // 0xcf Eq
	if(var_51_bool == 0) goto Label_234; // 0xd0 JumpB
	var_52_string = ""; // 0xd1 PushV
	var_52_string = "Neutral"; // 0xd2 MovS
	func_132(var_11_object, var_52_string); // 0xd3 NEW_2
	var_53_int = 536343; // 0xd5 PushI
	SetMessage(var_53_int); // 0xd6 TObjFunc
	ClearReplies(); // 0xd8 TObjFunc
	var_54_int = 536344; // 0xda PushI
	var_55_int = -1; // 0xdb PushI
	var_56_int = 38126; // 0xdc PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xdd TObjFunc
	var_57_int = 536345; // 0xdf PushI
	var_58_int = -1; // 0xe0 PushI
	var_59_int = 38127; // 0xe1 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xe2 TObjFunc
	var_60_int = 536346; // 0xe4 PushI
	var_61_int = 38129; // 0xe5 PushI
	var_62_int = 38128; // 0xe6 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_63_int = 38129; // 0xea PushI
	var_64_bool = var_10_bool == var_63_int; // 0xeb Eq
	if(var_64_bool == 0) goto Label_257; // 0xec JumpB
	var_65_string = ""; // 0xed PushV
	var_65_string = "Neutral"; // 0xee MovS
	func_132(var_11_object, var_65_string); // 0xef NEW_2
	var_66_int = 536347; // 0xf1 PushI
	SetMessage(var_66_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_67_int = 536348; // 0xf6 PushI
	var_68_int = -1; // 0xf7 PushI
	var_69_int = 38130; // 0xf8 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xf9 TObjFunc
	var_70_int = 536349; // 0xfb PushI
	var_71_int = -1; // 0xfc PushI
	var_72_int = 38131; // 0xfd PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_3_string = 1; // 0x101 TMovB
	var_73_bool = 0; // 0x102 PushV
	func_662(var_73_bool); // 0x103 NEW_2
	if(var_73_bool == 0) goto Label_265; // 0x105 JumpB
	lshStopAnimation(); // 0x106 Func
	goto Label_267; // 0x108 Jump
	
Label_267:
	return 0; // 0x10b Return
	
Label_265:
	StopAnimation(); // 0x109 Func
	
Label_269:
	return 0; // 0x10d Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_356(var_9_object, var_10_object); // 0x11a NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x11c PushV
	var_15_object = var_10_object; // 0x11d Mov
	TaskCall(0); // 0x11e TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x11f NEW_2
	TaskReturn(); // 0x120 TaskReturn
	return 0; // 0x122 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x14e PushI
	var_12_bool = var_10_int == var_11_int; // 0x14f Eq
	if(var_12_bool == 0) goto Label_355; // 0x150 JumpB
	var_13_bool = 0; // 0x151 PushV
	func_318(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x152 NEW_2
	if(var_13_bool == 0) goto Label_349; // 0x154 JumpB
	var_26_bool = var_2_object == 0; // 0x155 Not
	if(var_26_bool == 0) goto Label_348; // 0x156 JumpB
	var_27_object = Obj(); // 0x157 PushV
	var_27_object = var_4_bool; // 0x158 MovT
	func_585(var_27_object); // 0x159 NEW_2
	var_2_object = 1; // 0x15b TMovB
	
Label_348:
	goto Label_355; // 0x15c Jump
	
Label_355:
	return 0; // 0x163 Return
	
Label_349:
	var_34_object = var_2_object; // 0x15d PushT
	if(var_34_object == 0) goto Label_355; // 0x15e JumpB
	var_35_string = "head"; // 0x15f PushS
	UnlookAsync(var_35_string); // 0x160 Func
	var_2_object = 0; // 0x162 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_270:
	var_10_int = 1; // 0x10e PushI
	Sleep(var_10_int); // 0x10f Func
	var_11_float = 0; var_12_float = 0; // 0x111 PushV
	var_11_float = 300; // 0x112 MovI
	var_12_float = 100; // 0x113 MovI
	func_291(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x114 NEW_2
	goto Label_270; // 0x116 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_469(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_656(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_654(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_658(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_660(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_637(var_76_int); // 0x22 NEW_2
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
	func_537(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_449(var_61_bool)
{
	var_61_bool = 1; // 0x1c1 MovB
	return 0; // 0x1c2 Return
}


func_451()
{
	StopAnimation(); // 0x1c3 Func
	StopGroup0(); // 0x1c5 Func
	return 0; // 0x1c7 Return
}


func_132(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x85 PushV
	func_662(var_93_bool); // 0x86 NEW_2
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
	func_570(var_96_string, var_97_bool); // 0x96 NEW_2
	var_2_object = var_92_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_97_bool = 1; // 0x95 MovB
}


func_456(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1c8 PushV
	GetPosition(var_22_cvector); // 0x1c9 Func
	GetPosition(var_23_cvector); // 0x1cb ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1cd Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1ce Or2
	return 6; // 0x1cf Return
}


func_585(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x249 PushV
	GetEyesHeight(var_30_float); // 0x24a ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x24c MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x24d PushE
	var_32_float = var_30_float; // 0x24e Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x24f PopE
	var_33_string = "head"; // 0x250 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x251 Func
	return 4; // 0x253 Return
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
	var_109_int = 536339; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_int = 536340; // 0x59 PushI
	var_111_int = 38123; // 0x5a PushI
	var_112_int = 38122; // 0x5b PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x5c TObjFunc
	var_113_int = 536351; // 0x5e PushI
	var_114_int = -1; // 0x5f PushI
	var_115_int = 38133; // 0x60 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_116_bool = 0; // 0x66 PushV
	func_662(var_116_bool); // 0x67 NEW_2
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
	func_554(var_118_string); // 0x71 NEW_2
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


func_654(var_73_int)
{
	var_73_int = 515556; // 0x28e MovI
	return 0; // 0x28f Return
}


func_656(var_72_int)
{
	var_72_int = 503341; // 0x290 MovI
	return 0; // 0x291 Return
}


func_464(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x1d0 PushV
	IsLoaded(var_15_bool); // 0x1d1 Func
	var_13_bool = var_15_bool; // 0x1d3 Mov
	return 2; // 0x1d4 Return
}


func_658(var_74_string)
{
	var_74_string = "ui/NPC_Citizen3.png"; // 0x292 MovS
	return 0; // 0x293 Return
}


func_660(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3_b.png"; // 0x294 MovS
	return 0; // 0x295 Return
}


func_596()
{
	var_13_bool = 0; // 0x254 PushV
	func_662(var_13_bool); // 0x255 NEW_2
	if(var_13_bool == 0) goto Label_602; // 0x257 JumpB
	lshStopSpeech(); // 0x258 Func
	
Label_602:
	return 0; // 0x25a Return
}


func_662(var_67_bool)
{
	var_67_bool = 0; // 0x296 MovB
	return 0; // 0x297 Return
}


func_469(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1d5 PushV
	GetPosition(var_38_cvector); // 0x1d6 ObjFunc
	GetEyesHeight(var_37_float); // 0x1d8 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1da PushE
	var_46_float = var_46_float + var_37_float; // 0x1db Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1dc PopE
	GetPosition(var_39_cvector); // 0x1dd Func
	GetEyesHeight(var_37_float); // 0x1df Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1e1 PushE
	var_47_float = var_47_float + var_37_float; // 0x1e2 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1e3 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1e4 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1e5 PushE
	var_48_float = 0; // 0x1e6 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1e7 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x1e8 Or
	var_50_float = sqrt(var_49_int); // 0x1e9 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1ea Div2
	var_41_cvector = -var_40_cvector; // 0x1eb Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1ec Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1ed PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x1ee PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x1ef Xor2
	func_603(var_52_cvector, var_53_cvector); // 0x1f0 NEW_2
	var_60_int = 25; // 0x1f2 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x1f3 Mult
	var_62_int = var_51_float + var_61_float; // 0x1f4 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x1f5 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x1f6 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x1f7 Add2
	IsOverrideActive(var_44_bool); // 0x1f8 Func
	var_64_bool = var_44_bool; // 0x1fa Push
	if(var_64_bool == 0) goto Label_510; // 0x1fb JumpB
	var_25_bool = 0; // 0x1fc MovB
	return 18; // 0x1fd Return
	
Label_510:
	StopWorld(); // 0x1fe Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x200 Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x202 PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x203 PushE
	Rotate(var_65_float, var_66_float); // 0x204 Func
	var_67_bool = 0; // 0x206 PushV
	func_662(var_67_bool); // 0x207 NEW_2
	if(var_67_bool == 0) goto Label_523; // 0x209 JumpB
	goto Label_531; // 0x20a Jump
	
Label_531:
	CameraWaitForPlayFinish(); // 0x213 Func
	ResumeWorld(); // 0x215 Func
	var_25_bool = 1; // 0x217 MovB
	return 18; // 0x218 Return
	
Label_523:
	var_68_string = "head"; // 0x20b PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x20c Func
	var_69_bool = var_45_bool; // 0x20e Push
	if(var_69_bool == 0) goto Label_531; // 0x20f JumpB
	var_70_string = "head"; // 0x210 PushS
	LookAsyncCamera(var_70_string); // 0x211 Func
}


func_537()
{
	var_136_bool = 0; var_137_bool = 0; // 0x219 PushV
	CameraSwitchToNormal(); // 0x21a Func
	var_138_bool = 0; // 0x21c PushV
	func_662(var_138_bool); // 0x21d NEW_2
	if(var_138_bool == 0) goto Label_545; // 0x21f JumpB
	goto Label_553; // 0x220 Jump
	
Label_553:
	return 2; // 0x229 Return
	
Label_545:
	var_139_string = "head"; // 0x221 PushS
	HasAnimationTrack(var_137_bool, var_139_string); // 0x222 Func
	var_140_bool = var_137_bool; // 0x224 Push
	if(var_140_bool == 0) goto Label_553; // 0x225 JumpB
	var_141_string = "head"; // 0x226 PushS
	UnlookAsync(var_141_string); // 0x227 Func
}


func_603(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x25b PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x25c Or
	var_56_float = sqrt(var_57_int); // 0x25d Sqrt2
	var_58_float = 0.0; // 0x25e PushF
	var_59_bool = var_56_float < var_58_float; // 0x25f LT
	if(var_59_bool == 0) goto Label_611; // 0x260 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x261 MovV
	return 2; // 0x262 Return
	
Label_611:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x263 Div2
	return 2; // 0x264 Return
}


func_291(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x124 PushV
	func_464(var_13_bool); // 0x125 NEW_2
	var_16_bool = var_13_bool == 0; // 0x127 Not
	if(var_16_bool == 0) goto Label_298; // 0x128 JumpB
	return 0; // 0x129 Return
	
Label_298:
	var_17_string = "player"; // 0x12a PushS
	FindActor(var_9_object, var_17_string); // 0x12b Func
	var_2_object = 0; // 0x12d TMovB
	var_3_string = 0; // 0x12e TMovB
	var_0_object = var_11_float; // 0x12f TMov
	var_1_object = var_12_float; // 0x130 TMov
	var_18_int = 10; // 0x131 PushI
	var_19_float = 1.0; // 0x132 PushF
	SetTimer(var_18_int, var_19_float); // 0x133 Func
	func_370(); // 0x136 NEW_2
	var_71_bool = var_3_string == 0; // 0x138 Not
	if(var_71_bool == 0) goto Label_317; // 0x139 JumpB
	var_72_int = 10; // 0x13a PushI
	KillTimer(var_72_int); // 0x13b Func
	
Label_317:
	return 0; // 0x13d Return
}


func_356(var_2_object, var_3_string)
{
	func_451(); // 0x165 NEW_2
	var_11_int = 10; // 0x167 PushI
	KillTimer(var_11_int); // 0x168 Func
	var_12_object = var_2_object; // 0x16a PushT
	if(var_12_object == 0) goto Label_368; // 0x16b JumpB
	var_13_string = "head"; // 0x16c PushS
	UnlookAsync(var_13_string); // 0x16d Func
	var_2_object = 0; // 0x16f TMovB
	
Label_368:
	var_3_string = 1; // 0x170 TMovB
	return 0; // 0x171 Return
}


func_613(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x265 PushV
	var_45_string = "idle"; // 0x266 MovS
	var_46_int = var_43_int; // 0x267 Push
	if(var_46_int == 0) goto Label_618; // 0x268 JumpB
	var_45_string = var_45_string + var_43_int; // 0x269 Add2
	
Label_618:
	var_42_string = var_45_string; // 0x26a Mov
	return 2; // 0x26b Return
}


func_554(var_118_string)
{
	var_119_bool = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_float = 0; // 0x22a PushV
	lshHasAnimation(var_122_bool, var_118_string); // 0x22b Func
	var_125_bool = var_122_bool; // 0x22d Push
	if(var_125_bool == 0) goto Label_565; // 0x22e JumpB
	lshGetAnimTimes(var_118_string, var_123_float, var_124_float); // 0x22f Func
	var_126_bool = 0; // 0x231 PushB
	lshPlayAnimation(var_123_float, var_124_float, var_126_bool); // 0x232 Func
	goto Label_569; // 0x234 Jump
	
Label_569:
	return 6; // 0x239 Return
	
Label_565:
	var_127_string = "Can't find lsh animation : "; // 0x235 PushS
	var_128_int = var_127_string + var_118_string; // 0x236 Add
	Trace(var_128_int); // 0x237 Func
}


func_620(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x26c PushV
	var_39_int = 0; // 0x26d MovI
	
Label_622:
	var_41_string = "all"; // 0x26e PushS
	var_42_string = ""; var_43_int = 0; // 0x26f PushV
	var_43_int = var_39_int; // 0x270 Mov
	func_613(var_42_string, var_43_int); // 0x271 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x273 Func
	var_47_bool = var_40_bool == 0; // 0x275 Not
	if(var_47_bool == 0) goto Label_632; // 0x276 JumpB
	goto Label_635; // 0x277 Jump
	
Label_635:
	var_36_int = var_39_int; // 0x27b Mov
	return 4; // 0x27c Return
	
Label_632:
	var_48_int = 1; // 0x278 PushI
	var_39_int = var_39_int + var_48_int; // 0x279 Add2
	goto Label_622; // 0x27a Jump
}


func_370()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x172 PushV
	WaitForAnimEnd(); // 0x173 Func
	var_34_bool = 0; // 0x175 PushV
	func_464(var_34_bool); // 0x176 NEW_2
	var_35_bool = var_34_bool == 0; // 0x178 Not
	if(var_35_bool == 0) goto Label_379; // 0x179 JumpB
	return 14; // 0x17a Return
	
Label_379:
	var_36_int = 0; // 0x17b PushV
	func_620(var_36_int); // 0x17c NEW_2
	var_27_int = var_36_int; // 0x17d Mov
	var_28_int = 0; // 0x17f MovI
	
Label_384:
	var_49_bool = 0; // 0x180 PushV
	var_49_bool = 0; // 0x181 MovB
	var_50_int = 5; // 0x182 PushI
	var_51_bool = var_28_int < var_50_int; // 0x183 LT
	if(var_51_bool == 0) goto Label_394; // 0x184 JumpB
	var_52_bool = 0; // 0x185 PushV
	func_464(var_52_bool); // 0x186 NEW_2
	if(var_52_bool == 0) goto Label_394; // 0x188 JumpB
	var_49_bool = 1; // 0x189 MovB
	
Label_394:
	if(var_49_bool == 0) goto Label_446; // 0x18a JumpB
	var_53_int = 3; // 0x18b PushI
	irand(var_29_int, var_53_int); // 0x18c Func
	var_54_int = 0; // 0x18e PushI
	var_55_bool = var_29_int == var_54_int; // 0x18f Eq
	if(var_55_bool == 0) goto Label_418; // 0x190 JumpB
	var_56_int = var_27_int; // 0x191 Push
	if(var_56_int == 0) goto Label_417; // 0x192 JumpB
	irand(var_30_int, var_27_int); // 0x193 Func
	var_57_string = "all"; // 0x195 PushS
	var_58_string = ""; var_59_int = 0; // 0x196 PushV
	var_59_int = var_30_int; // 0x197 Mov
	func_613(var_58_string, var_59_int); // 0x198 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x19a Func
	WaitForAnimEnd(var_31_bool); // 0x19c Func
	var_60_bool = var_31_bool == 0; // 0x19e Not
	if(var_60_bool == 0) goto Label_417; // 0x19f JumpB
	goto Label_446; // 0x1a0 Jump
	
Label_446:
	ResetAAS(); // 0x1be Func
	return 14; // 0x1c0 Return
	
Label_417:
	goto Label_435; // 0x1a1 Jump
	
Label_435:
	var_61_bool = 0; // 0x1b3 PushV
	func_449(var_61_bool); // 0x1b4 NEW_2
	var_62_bool = var_61_bool == 0; // 0x1b6 Not
	if(var_62_bool == 0) goto Label_441; // 0x1b7 JumpB
	goto Label_446; // 0x1b8 Jump
	
Label_441:
	ResetAAS(); // 0x1b9 Func
	var_63_int = 1; // 0x1bb PushI
	var_28_int = var_28_int + var_63_int; // 0x1bc Add2
	goto Label_384; // 0x1bd Jump
	
Label_418:
	var_64_int = 1; // 0x1a2 PushI
	var_65_bool = var_29_int == var_64_int; // 0x1a3 Eq
	if(var_65_bool == 0) goto Label_432; // 0x1a4 JumpB
	var_66_int = 4; // 0x1a5 PushI
	rand(var_32_float, var_66_int); // 0x1a6 Func
	var_67_int = 1; // 0x1a8 PushI
	var_68_int = var_32_float + var_67_int; // 0x1a9 Add
	Sleep(var_68_int, var_33_bool); // 0x1aa Func
	var_69_bool = var_33_bool == 0; // 0x1ac Not
	if(var_69_bool == 0) goto Label_431; // 0x1ad JumpB
	goto Label_446; // 0x1ae Jump
	
Label_431:
	goto Label_435; // 0x1af Jump
	
Label_432:
	var_70_int = var_28_int; // 0x1b0 Push
	if(var_70_int == 0) goto Label_435; // 0x1b1 JumpB
	goto Label_446; // 0x1b2 Jump
}


func_570(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x23a PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x23b Func
	var_106_bool = var_103_bool; // 0x23d Push
	if(var_106_bool == 0) goto Label_580; // 0x23e JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x23f Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x241 Func
	goto Label_584; // 0x243 Jump
	
Label_584:
	return 6; // 0x248 Return
	
Label_580:
	var_107_string = "Can't find lsh animation : "; // 0x244 PushS
	var_108_int = var_107_string + var_96_string; // 0x245 Add
	Trace(var_108_int); // 0x246 Func
}


func_637(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x27d PushV
	var_79_string = "branch"; // 0x27e PushS
	GetVariable(var_79_string, var_78_int); // 0x27f Func
	var_80_int = 0; // 0x281 PushI
	var_81_bool = var_78_int == var_80_int; // 0x282 Eq
	if(var_81_bool == 0) goto Label_647; // 0x283 JumpB
	var_76_int = 1; // 0x284 MovI
	return 2; // 0x285 Return
	
Label_647:
	var_82_int = 1; // 0x287 PushI
	var_83_bool = var_78_int == var_82_int; // 0x288 Eq
	if(var_83_bool == 0) goto Label_652; // 0x289 JumpB
	var_76_int = 2; // 0x28a MovI
	return 2; // 0x28b Return
	
Label_652:
	var_76_int = 3; // 0x28c MovI
	return 2; // 0x28d Return
}


func_318(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x13e PushV
	var_16_bool = var_4_bool == 0; // 0x13f NullEq
	if(var_16_bool == 0) goto Label_323; // 0x140 JumpB
	var_13_bool = 0; // 0x141 MovB
	return 2; // 0x142 Return
	
Label_323:
	var_17_float = 0; var_18_object = Obj(); // 0x143 PushV
	var_18_object = var_4_bool; // 0x144 MovT
	func_456(var_18_object); // 0x145 NEW_2
	var_15_float = sqrt(var_17_float); // 0x147 Sqrt2
	var_25_object = var_2_object; // 0x148 PushT
	if(var_25_object == 0) goto Label_331; // 0x149 JumpB
	var_15_float = var_15_float - var_1_object; // 0x14a Sub2
	
Label_331:
	var_13_bool = var_15_float < var_0_object; // 0x14b LT2
	return 2; // 0x14c Return
}


