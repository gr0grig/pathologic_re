task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa0 PushI
	if(var_12_int == 0) goto Label_259; // 0xa1 JumpB
	func_590(); // 0xa3 NEW_2
	var_14_int = 4357; // 0xa5 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa6 Eq
	if(var_15_bool == 0) goto Label_173; // 0xa7 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa8 PushV
	var_16_object = var_1_object; // 0xa9 MovT
	var_17_object = var_0_object; // 0xaa MovT
	func_646(); // 0xab NEW_2
	
Label_173:
	var_20_int = 4356; // 0xad PushI
	var_21_bool = var_10_bool == var_20_int; // 0xae Eq
	if(var_21_bool == 0) goto Label_201; // 0xaf JumpB
	var_22_string = ""; // 0xb0 PushV
	var_22_string = "Neutral"; // 0xb1 MovS
	func_137(var_11_object, var_22_string); // 0xb2 NEW_2
	var_39_int = 504001; // 0xb4 PushI
	SetMessage(var_39_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_40_bool = 0; var_41_object = Obj(); // 0xb9 PushV
	var_41_object = var_1_object; // 0xba MovT
	func_652(var_41_object); // 0xbb NEW_2
	if(var_40_bool == 0) goto Label_195; // 0xbd JumpB
	var_48_int = 504002; // 0xbe PushI
	var_49_int = 4359; // 0xbf PushI
	var_50_int = 4357; // 0xc0 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xc1 TObjFunc
	
Label_195:
	var_51_int = 504003; // 0xc3 PushI
	var_52_int = -1; // 0xc4 PushI
	var_53_int = 4358; // 0xc5 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_54_int = 4359; // 0xc9 PushI
	var_55_bool = var_10_bool == var_54_int; // 0xca Eq
	if(var_55_bool == 0) goto Label_224; // 0xcb JumpB
	var_56_string = ""; // 0xcc PushV
	var_56_string = "Neutral"; // 0xcd MovS
	func_137(var_11_object, var_56_string); // 0xce NEW_2
	var_57_int = 504004; // 0xd0 PushI
	SetMessage(var_57_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_58_int = 504005; // 0xd5 PushI
	var_59_int = 4362; // 0xd6 PushI
	var_60_int = 4360; // 0xd7 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd8 TObjFunc
	var_61_int = 504006; // 0xda PushI
	var_62_int = -1; // 0xdb PushI
	var_63_int = 4361; // 0xdc PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_64_int = 4362; // 0xe0 PushI
	var_65_bool = var_10_bool == var_64_int; // 0xe1 Eq
	if(var_65_bool == 0) goto Label_247; // 0xe2 JumpB
	var_66_string = ""; // 0xe3 PushV
	var_66_string = "Neutral"; // 0xe4 MovS
	func_137(var_11_object, var_66_string); // 0xe5 NEW_2
	var_67_int = 504007; // 0xe7 PushI
	SetMessage(var_67_int); // 0xe8 TObjFunc
	ClearReplies(); // 0xea TObjFunc
	var_68_int = 504008; // 0xec PushI
	var_69_int = -1; // 0xed PushI
	var_70_int = 4363; // 0xee PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xef TObjFunc
	var_71_int = 504009; // 0xf1 PushI
	var_72_int = -1; // 0xf2 PushI
	var_73_int = 4364; // 0xf3 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xf4 TObjFunc
	return 0; // 0xf6 Return
	
Label_247:
	var_3_string = 1; // 0xf7 TMovB
	var_74_bool = 0; // 0xf8 PushV
	func_644(var_74_bool); // 0xf9 NEW_2
	if(var_74_bool == 0) goto Label_255; // 0xfb JumpB
	lshStopAnimation(); // 0xfc Func
	goto Label_257; // 0xfe Jump
	
Label_257:
	return 0; // 0x101 Return
	
Label_255:
	StopAnimation(); // 0xff Func
	
Label_259:
	return 0; // 0x103 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_348(var_9_object, var_10_object); // 0x112 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x114 PushV
	var_15_object = var_10_object; // 0x115 Mov
	TaskCall(0); // 0x116 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x117 NEW_2
	TaskReturn(); // 0x118 TaskReturn
	return 0; // 0x11a Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x146 PushI
	var_12_bool = var_10_int == var_11_int; // 0x147 Eq
	if(var_12_bool == 0) goto Label_347; // 0x148 JumpB
	var_13_bool = 0; // 0x149 PushV
	func_310(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x14a NEW_2
	if(var_13_bool == 0) goto Label_341; // 0x14c JumpB
	var_26_bool = var_2_object == 0; // 0x14d Not
	if(var_26_bool == 0) goto Label_340; // 0x14e JumpB
	var_27_object = Obj(); // 0x14f PushV
	var_27_object = var_4_bool; // 0x150 MovT
	func_579(var_27_object); // 0x151 NEW_2
	var_2_object = 1; // 0x153 TMovB
	
Label_340:
	goto Label_347; // 0x154 Jump
	
Label_347:
	return 0; // 0x15b Return
	
Label_341:
	var_34_object = var_2_object; // 0x155 PushT
	if(var_34_object == 0) goto Label_347; // 0x156 JumpB
	var_35_string = "head"; // 0x157 PushS
	UnlookAsync(var_35_string); // 0x158 Func
	var_2_object = 0; // 0x15a TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_260:
	var_10_bool = 1; // 0x104 PushB
	if(var_10_bool == 0) goto Label_271; // 0x105 JumpB
	var_11_int = 1; // 0x106 PushI
	Sleep(var_11_int); // 0x107 Func
	var_12_float = 0; var_13_float = 0; // 0x109 PushV
	var_12_float = 300; // 0x10a MovI
	var_13_float = 100; // 0x10b MovI
	func_283(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_12_float, var_13_float); // 0x10c NEW_2
	goto Label_260; // 0x10e Jump
	
Label_271:
	return 0; // 0x10f Return
}


func_640(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png"; // 0x280 MovS
	return 0; // 0x281 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_461(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_638(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_636(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_640(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_642(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_664(var_77_int); // 0x22 NEW_2
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
	var_143_bool = var_24_bool == 0; // 0x38 Not
	if(var_143_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_144_object = Obj(); // 0x3f PushV
	var_144_object = var_15_object; // 0x40 Mov
	func_530(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_642(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png"; // 0x282 MovS
	return 0; // 0x283 Return
}


func_448(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1c0 PushV
	GetPosition(var_22_cvector); // 0x1c1 Func
	GetPosition(var_23_cvector); // 0x1c3 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1c5 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1c6 Or2
	return 6; // 0x1c7 Return
}


func_644(var_68_bool)
{
	var_68_bool = 0; // 0x284 MovB
	return 0; // 0x285 Return
}


func_579(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x243 PushV
	GetEyesHeight(var_30_float); // 0x244 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x246 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x247 PushE
	var_32_float = var_30_float; // 0x248 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x249 PopE
	var_33_string = "head"; // 0x24a PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x24b Func
	return 4; // 0x24d Return
}


func_646()
{
	var_18_string = "ood6Woman1"; // 0x287 PushS
	var_19_int = 1; // 0x288 PushI
	SetVariable(var_18_string, var_19_int); // 0x289 Func
	return 0; // 0x28b Return
}


func_456(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x1c8 PushV
	IsLoaded(var_16_bool); // 0x1c9 Func
	var_14_bool = var_16_bool; // 0x1cb Mov
	return 2; // 0x1cc Return
}


func_137(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x8a PushV
	func_644(var_94_bool); // 0x8b NEW_2
	var_95_bool = var_94_bool == 0; // 0x8d Not
	if(var_95_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_96_bool = var_93_string == var_2_object; // 0x90 Eq
	if(var_96_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_97_string = ""; var_98_bool = 0; // 0x93 PushV
	var_97_string = var_93_string; // 0x94 Mov
	var_99_string = ""; // 0x95 PushS
	var_100_bool = var_93_string == var_99_string; // 0x96 Eq
	if(var_100_bool == 0) goto Label_154; // 0x97 JumpB
	var_98_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_564(var_97_string, var_98_bool); // 0x9b NEW_2
	var_2_object = var_93_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_98_bool = 1; // 0x9a MovB
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_107; // 0x4f JumpB
	var_93_string = ""; // 0x50 PushV
	var_93_string = "Neutral"; // 0x51 MovS
	func_137(var_87_object, var_93_string); // 0x52 NEW_2
	var_110_int = 504001; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_bool = 0; var_112_object = Obj(); // 0x59 PushV
	var_112_object = var_1_object; // 0x5a MovT
	func_652(var_112_object); // 0x5b NEW_2
	if(var_111_bool == 0) goto Label_99; // 0x5d JumpB
	var_119_int = 504002; // 0x5e PushI
	var_120_int = 4359; // 0x5f PushI
	var_121_int = 4357; // 0x60 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x61 TObjFunc
	
Label_99:
	var_122_int = 504003; // 0x63 PushI
	var_123_int = -1; // 0x64 PushI
	var_124_int = 4358; // 0x65 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_125_bool = 0; // 0x6b PushV
	func_644(var_125_bool); // 0x6c NEW_2
	if(var_125_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_126_string = var_3_string; // 0x71 PushT
	if(var_126_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_127_string = ""; // 0x74 PushV
	var_127_string = var_2_object; // 0x75 MovT
	func_548(var_127_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_138_string = "all"; // 0x7a PushS
	var_139_string = "idle"; // 0x7b PushS
	PlayAnimation(var_138_string, var_139_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_140_string = var_3_string; // 0x80 PushT
	if(var_140_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_141_string = "all"; // 0x83 PushS
	var_142_string = "idle"; // 0x84 PushS
	PlayAnimation(var_141_string, var_142_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_652(var_111_bool)
{
	var_113_int = 0; var_114_string = ""; // 0x28d PushV
	var_114_string = "ood6Woman1"; // 0x28e MovS
	func_607(var_113_int, var_114_string); // 0x28f NEW_2
	var_117_int = 0; // 0x291 PushI
	var_118_bool = var_113_int == var_117_int; // 0x292 Eq
	if(var_118_bool == 0) goto Label_662; // 0x293 JumpB
	var_111_bool = 1; // 0x294 MovB
	return 0; // 0x295 Return
	
Label_662:
	var_111_bool = 0; // 0x296 MovB
	return 0; // 0x297 Return
}


func_461(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1cd PushV
	GetPosition(var_38_cvector); // 0x1ce ObjFunc
	GetEyesHeight(var_37_float); // 0x1d0 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1d2 PushE
	var_46_float = var_46_float + var_37_float; // 0x1d3 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1d4 PopE
	GetPosition(var_39_cvector); // 0x1d5 Func
	GetEyesHeight(var_37_float); // 0x1d7 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1d9 PushE
	var_47_float = var_47_float + var_37_float; // 0x1da Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1db PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1dc Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1dd PushE
	var_48_float = 0; // 0x1de MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1df PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x1e0 Or
	var_50_float = sqrt(var_49_int); // 0x1e1 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1e2 Div2
	var_41_cvector = -var_40_cvector; // 0x1e3 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1e4 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1e5 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x1e6 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x1e7 Xor2
	func_597(var_52_cvector, var_53_cvector); // 0x1e8 NEW_2
	var_60_int = 25; // 0x1ea PushI
	var_61_float = var_52_cvector * var_60_int; // 0x1eb Mult
	var_62_int = var_51_float + var_61_float; // 0x1ec Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x1ed PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x1ee Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x1ef Add2
	IsOverrideActive(var_44_bool); // 0x1f0 Func
	var_64_bool = var_44_bool; // 0x1f2 Push
	if(var_64_bool == 0) goto Label_502; // 0x1f3 JumpB
	var_25_bool = 0; // 0x1f4 MovB
	return 18; // 0x1f5 Return
	
Label_502:
	StopWorld(); // 0x1f6 Func
	var_65_bool = 1; // 0x1f8 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x1f9 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x1fb PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x1fc PushE
	Rotate(var_66_float, var_67_float); // 0x1fd Func
	var_68_bool = 0; // 0x1ff PushV
	func_644(var_68_bool); // 0x200 NEW_2
	if(var_68_bool == 0) goto Label_516; // 0x202 JumpB
	goto Label_524; // 0x203 Jump
	
Label_524:
	CameraWaitForPlayFinish(); // 0x20c Func
	ResumeWorld(); // 0x20e Func
	var_25_bool = 1; // 0x210 MovB
	return 18; // 0x211 Return
	
Label_516:
	var_69_string = "head"; // 0x204 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x205 Func
	var_70_bool = var_45_bool; // 0x207 Push
	if(var_70_bool == 0) goto Label_524; // 0x208 JumpB
	var_71_string = "head"; // 0x209 PushS
	LookAsyncCamera(var_71_string); // 0x20a Func
}


func_590()
{
	var_13_bool = 0; // 0x24e PushV
	func_644(var_13_bool); // 0x24f NEW_2
	if(var_13_bool == 0) goto Label_596; // 0x251 JumpB
	lshStopSpeech(); // 0x252 Func
	
Label_596:
	return 0; // 0x254 Return
}


func_530()
{
	var_145_bool = 0; var_146_bool = 0; // 0x212 PushV
	var_147_bool = 1; // 0x213 PushB
	CameraSwitchToNormal(var_147_bool); // 0x214 Func
	var_148_bool = 0; // 0x216 PushV
	func_644(var_148_bool); // 0x217 NEW_2
	if(var_148_bool == 0) goto Label_539; // 0x219 JumpB
	goto Label_547; // 0x21a Jump
	
Label_547:
	return 2; // 0x223 Return
	
Label_539:
	var_149_string = "head"; // 0x21b PushS
	HasAnimationTrack(var_146_bool, var_149_string); // 0x21c Func
	var_150_bool = var_146_bool; // 0x21e Push
	if(var_150_bool == 0) goto Label_547; // 0x21f JumpB
	var_151_string = "head"; // 0x220 PushS
	UnlookAsync(var_151_string); // 0x221 Func
}


func_597(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x255 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x256 Or
	var_56_float = sqrt(var_57_int); // 0x257 Sqrt2
	var_58_float = 0.0; // 0x258 PushF
	var_59_bool = var_56_float < var_58_float; // 0x259 LT
	if(var_59_bool == 0) goto Label_605; // 0x25a JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x25b MovV
	return 2; // 0x25c Return
	
Label_605:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x25d Div2
	return 2; // 0x25e Return
}


func_664(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x298 PushV
	var_80_string = "branch"; // 0x299 PushS
	GetVariable(var_80_string, var_79_int); // 0x29a Func
	var_81_int = 0; // 0x29c PushI
	var_82_bool = var_79_int == var_81_int; // 0x29d Eq
	if(var_82_bool == 0) goto Label_674; // 0x29e JumpB
	var_77_int = 1; // 0x29f MovI
	return 2; // 0x2a0 Return
	
Label_674:
	var_83_int = 1; // 0x2a2 PushI
	var_84_bool = var_79_int == var_83_int; // 0x2a3 Eq
	if(var_84_bool == 0) goto Label_679; // 0x2a4 JumpB
	var_77_int = 2; // 0x2a5 MovI
	return 2; // 0x2a6 Return
	
Label_679:
	var_77_int = 3; // 0x2a7 MovI
	return 2; // 0x2a8 Return
}


func_283(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_12_float, var_13_float)
{
	var_14_bool = 0; // 0x11c PushV
	func_456(var_14_bool); // 0x11d NEW_2
	var_17_bool = var_14_bool == 0; // 0x11f Not
	if(var_17_bool == 0) goto Label_290; // 0x120 JumpB
	return 0; // 0x121 Return
	
Label_290:
	var_18_string = "player"; // 0x122 PushS
	FindActor(var_9_object, var_18_string); // 0x123 Func
	var_2_object = 0; // 0x125 TMovB
	var_3_string = 0; // 0x126 TMovB
	var_0_object = var_12_float; // 0x127 TMov
	var_1_object = var_13_float; // 0x128 TMov
	var_19_int = 10; // 0x129 PushI
	var_20_float = 1.0; // 0x12a PushF
	SetTimer(var_19_int, var_20_float); // 0x12b Func
	func_362(); // 0x12e NEW_2
	var_72_bool = var_3_string == 0; // 0x130 Not
	if(var_72_bool == 0) goto Label_309; // 0x131 JumpB
	var_73_int = 10; // 0x132 PushI
	KillTimer(var_73_int); // 0x133 Func
	
Label_309:
	return 0; // 0x135 Return
}


func_348(var_2_object, var_3_string)
{
	func_443(); // 0x15d NEW_2
	var_11_int = 10; // 0x15f PushI
	KillTimer(var_11_int); // 0x160 Func
	var_12_object = var_2_object; // 0x162 PushT
	if(var_12_object == 0) goto Label_360; // 0x163 JumpB
	var_13_string = "head"; // 0x164 PushS
	UnlookAsync(var_13_string); // 0x165 Func
	var_2_object = 0; // 0x167 TMovB
	
Label_360:
	var_3_string = 1; // 0x168 TMovB
	return 0; // 0x169 Return
}


func_607(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0; // 0x25f PushV
	GetVariable(var_114_string, var_116_int); // 0x260 Func
	var_113_int = var_116_int; // 0x262 Mov
	return 2; // 0x263 Return
}


func_548(var_127_string)
{
	var_128_bool = 0; var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_float = 0; var_133_float = 0; // 0x224 PushV
	lshHasAnimation(var_131_bool, var_127_string); // 0x225 Func
	var_134_bool = var_131_bool; // 0x227 Push
	if(var_134_bool == 0) goto Label_559; // 0x228 JumpB
	lshGetAnimTimes(var_127_string, var_132_float, var_133_float); // 0x229 Func
	var_135_bool = 0; // 0x22b PushB
	lshPlayAnimation(var_132_float, var_133_float, var_135_bool); // 0x22c Func
	goto Label_563; // 0x22e Jump
	
Label_563:
	return 6; // 0x233 Return
	
Label_559:
	var_136_string = "Can't find lsh animation : "; // 0x22f PushS
	var_137_int = var_136_string + var_127_string; // 0x230 Add
	Trace(var_137_int); // 0x231 Func
}


func_612(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = ""; // 0x264 PushV
	var_46_string = "idle"; // 0x265 MovS
	var_47_int = var_44_int; // 0x266 Push
	if(var_47_int == 0) goto Label_617; // 0x267 JumpB
	var_46_string = var_46_string + var_44_int; // 0x268 Add2
	
Label_617:
	var_43_string = var_46_string; // 0x269 Mov
	return 2; // 0x26a Return
}


func_362()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x16a PushV
	WaitForAnimEnd(); // 0x16b Func
	var_35_bool = 0; // 0x16d PushV
	func_456(var_35_bool); // 0x16e NEW_2
	var_36_bool = var_35_bool == 0; // 0x170 Not
	if(var_36_bool == 0) goto Label_371; // 0x171 JumpB
	return 14; // 0x172 Return
	
Label_371:
	var_37_int = 0; // 0x173 PushV
	func_619(var_37_int); // 0x174 NEW_2
	var_28_int = var_37_int; // 0x175 Mov
	var_29_int = 0; // 0x177 MovI
	
Label_376:
	var_50_bool = 0; // 0x178 PushV
	var_50_bool = 0; // 0x179 MovB
	var_51_int = 5; // 0x17a PushI
	var_52_bool = var_29_int < var_51_int; // 0x17b LT
	if(var_52_bool == 0) goto Label_386; // 0x17c JumpB
	var_53_bool = 0; // 0x17d PushV
	func_456(var_53_bool); // 0x17e NEW_2
	if(var_53_bool == 0) goto Label_386; // 0x180 JumpB
	var_50_bool = 1; // 0x181 MovB
	
Label_386:
	if(var_50_bool == 0) goto Label_438; // 0x182 JumpB
	var_54_int = 3; // 0x183 PushI
	irand(var_30_int, var_54_int); // 0x184 Func
	var_55_int = 0; // 0x186 PushI
	var_56_bool = var_30_int == var_55_int; // 0x187 Eq
	if(var_56_bool == 0) goto Label_410; // 0x188 JumpB
	var_57_int = var_28_int; // 0x189 Push
	if(var_57_int == 0) goto Label_409; // 0x18a JumpB
	irand(var_31_int, var_28_int); // 0x18b Func
	var_58_string = "all"; // 0x18d PushS
	var_59_string = ""; var_60_int = 0; // 0x18e PushV
	var_60_int = var_31_int; // 0x18f Mov
	func_612(var_59_string, var_60_int); // 0x190 NEW_2
	PlayAnimation(var_58_string, var_59_string); // 0x192 Func
	WaitForAnimEnd(var_32_bool); // 0x194 Func
	var_61_bool = var_32_bool == 0; // 0x196 Not
	if(var_61_bool == 0) goto Label_409; // 0x197 JumpB
	goto Label_438; // 0x198 Jump
	
Label_438:
	ResetAAS(); // 0x1b6 Func
	return 14; // 0x1b8 Return
	
Label_409:
	goto Label_427; // 0x199 Jump
	
Label_427:
	var_62_bool = 0; // 0x1ab PushV
	func_441(var_62_bool); // 0x1ac NEW_2
	var_63_bool = var_62_bool == 0; // 0x1ae Not
	if(var_63_bool == 0) goto Label_433; // 0x1af JumpB
	goto Label_438; // 0x1b0 Jump
	
Label_433:
	ResetAAS(); // 0x1b1 Func
	var_64_int = 1; // 0x1b3 PushI
	var_29_int = var_29_int + var_64_int; // 0x1b4 Add2
	goto Label_376; // 0x1b5 Jump
	
Label_410:
	var_65_int = 1; // 0x19a PushI
	var_66_bool = var_30_int == var_65_int; // 0x19b Eq
	if(var_66_bool == 0) goto Label_424; // 0x19c JumpB
	var_67_int = 4; // 0x19d PushI
	rand(var_33_float, var_67_int); // 0x19e Func
	var_68_int = 1; // 0x1a0 PushI
	var_69_int = var_33_float + var_68_int; // 0x1a1 Add
	Sleep(var_69_int, var_34_bool); // 0x1a2 Func
	var_70_bool = var_34_bool == 0; // 0x1a4 Not
	if(var_70_bool == 0) goto Label_423; // 0x1a5 JumpB
	goto Label_438; // 0x1a6 Jump
	
Label_423:
	goto Label_427; // 0x1a7 Jump
	
Label_424:
	var_71_int = var_29_int; // 0x1a8 Push
	if(var_71_int == 0) goto Label_427; // 0x1a9 JumpB
	goto Label_438; // 0x1aa Jump
}


func_619(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x26b PushV
	var_40_int = 0; // 0x26c MovI
	
Label_621:
	var_42_string = "all"; // 0x26d PushS
	var_43_string = ""; var_44_int = 0; // 0x26e PushV
	var_44_int = var_40_int; // 0x26f Mov
	func_612(var_43_string, var_44_int); // 0x270 NEW_2
	HasAnimation(var_41_bool, var_42_string, var_43_string); // 0x272 Func
	var_48_bool = var_41_bool == 0; // 0x274 Not
	if(var_48_bool == 0) goto Label_631; // 0x275 JumpB
	goto Label_634; // 0x276 Jump
	
Label_634:
	var_37_int = var_40_int; // 0x27a Mov
	return 4; // 0x27b Return
	
Label_631:
	var_49_int = 1; // 0x277 PushI
	var_40_int = var_40_int + var_49_int; // 0x278 Add2
	goto Label_621; // 0x279 Jump
}


func_564(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x234 PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x235 Func
	var_107_bool = var_104_bool; // 0x237 Push
	if(var_107_bool == 0) goto Label_574; // 0x238 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x239 Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x23b Func
	goto Label_578; // 0x23d Jump
	
Label_578:
	return 6; // 0x242 Return
	
Label_574:
	var_108_string = "Can't find lsh animation : "; // 0x23e PushS
	var_109_int = var_108_string + var_97_string; // 0x23f Add
	Trace(var_109_int); // 0x240 Func
}


func_310(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x136 PushV
	var_16_bool = var_4_bool == 0; // 0x137 NullEq
	if(var_16_bool == 0) goto Label_315; // 0x138 JumpB
	var_13_bool = 0; // 0x139 MovB
	return 2; // 0x13a Return
	
Label_315:
	var_17_float = 0; var_18_object = Obj(); // 0x13b PushV
	var_18_object = var_4_bool; // 0x13c MovT
	func_448(var_18_object); // 0x13d NEW_2
	var_15_float = sqrt(var_17_float); // 0x13f Sqrt2
	var_25_object = var_2_object; // 0x140 PushT
	if(var_25_object == 0) goto Label_323; // 0x141 JumpB
	var_15_float = var_15_float - var_1_object; // 0x142 Sub2
	
Label_323:
	var_13_bool = var_15_float < var_0_object; // 0x143 LT2
	return 2; // 0x144 Return
}


func_441(var_62_bool)
{
	var_62_bool = 1; // 0x1b9 MovB
	return 0; // 0x1ba Return
}


func_443()
{
	StopAnimation(); // 0x1bb Func
	StopGroup0(); // 0x1bd Func
	return 0; // 0x1bf Return
}


func_636(var_74_int)
{
	var_74_int = 515567; // 0x27c MovI
	return 0; // 0x27d Return
}


func_638(var_73_int)
{
	var_73_int = 503352; // 0x27e MovI
	return 0; // 0x27f Return
}


