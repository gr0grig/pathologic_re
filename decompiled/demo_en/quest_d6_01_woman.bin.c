task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xa0 PushI
	if(var_12_int == 0) goto Label_259; // 0xa1 JumpB
	func_588(); // 0xa3 NEW_2
	var_14_int = 4357; // 0xa5 PushI
	var_15_bool = var_11_object == var_14_int; // 0xa6 Eq
	if(var_15_bool == 0) goto Label_173; // 0xa7 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa8 PushV
	var_16_object = var_1_object; // 0xa9 MovT
	var_17_object = var_0_object; // 0xaa MovT
	func_644(); // 0xab NEW_2
	
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
	func_650(var_41_object); // 0xbb NEW_2
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
	func_642(var_74_bool); // 0xf9 NEW_2
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
	func_577(var_27_object); // 0x151 NEW_2
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
	var_75_string = "ui/NPC_Citizen3_b.png"; // 0x280 MovS
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
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_636(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_634(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_638(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_640(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_662(var_76_int); // 0x22 NEW_2
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
	var_142_bool = var_24_bool == 0; // 0x38 Not
	if(var_142_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_143_object = Obj(); // 0x3f PushV
	var_143_object = var_15_object; // 0x40 Mov
	func_529(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_642(var_67_bool)
{
	var_67_bool = 0; // 0x282 MovB
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


func_644()
{
	var_18_string = "ood6Woman1"; // 0x285 PushS
	var_19_int = 1; // 0x286 PushI
	SetVariable(var_18_string, var_19_int); // 0x287 Func
	return 0; // 0x289 Return
}


func_577(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x241 PushV
	GetEyesHeight(var_30_float); // 0x242 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x244 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x245 PushE
	var_32_float = var_30_float; // 0x246 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x247 PopE
	var_33_string = "head"; // 0x248 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x249 Func
	return 4; // 0x24b Return
}


func_456(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x1c8 PushV
	IsLoaded(var_16_bool); // 0x1c9 Func
	var_14_bool = var_16_bool; // 0x1cb Mov
	return 2; // 0x1cc Return
}


func_137(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x8a PushV
	func_642(var_93_bool); // 0x8b NEW_2
	var_94_bool = var_93_bool == 0; // 0x8d Not
	if(var_94_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_95_bool = var_92_string == var_2_object; // 0x90 Eq
	if(var_95_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_96_string = ""; var_97_bool = 0; // 0x93 PushV
	var_96_string = var_92_string; // 0x94 Mov
	var_98_string = ""; // 0x95 PushS
	var_99_bool = var_92_string == var_98_string; // 0x96 Eq
	if(var_99_bool == 0) goto Label_154; // 0x97 JumpB
	var_97_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_562(var_96_string, var_97_bool); // 0x9b NEW_2
	var_2_object = var_92_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_97_bool = 1; // 0x9a MovB
}


func_650(var_110_bool)
{
	var_112_int = 0; var_113_string = ""; // 0x28b PushV
	var_113_string = "ood6Woman1"; // 0x28c MovS
	func_605(var_112_int, var_113_string); // 0x28d NEW_2
	var_116_int = 0; // 0x28f PushI
	var_117_bool = var_112_int == var_116_int; // 0x290 Eq
	if(var_117_bool == 0) goto Label_660; // 0x291 JumpB
	var_110_bool = 1; // 0x292 MovB
	return 0; // 0x293 Return
	
Label_660:
	var_110_bool = 0; // 0x294 MovB
	return 0; // 0x295 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_107; // 0x4f JumpB
	var_92_string = ""; // 0x50 PushV
	var_92_string = "Neutral"; // 0x51 MovS
	func_137(var_86_object, var_92_string); // 0x52 NEW_2
	var_109_int = 504001; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_bool = 0; var_111_object = Obj(); // 0x59 PushV
	var_111_object = var_1_object; // 0x5a MovT
	func_650(var_111_object); // 0x5b NEW_2
	if(var_110_bool == 0) goto Label_99; // 0x5d JumpB
	var_118_int = 504002; // 0x5e PushI
	var_119_int = 4359; // 0x5f PushI
	var_120_int = 4357; // 0x60 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x61 TObjFunc
	
Label_99:
	var_121_int = 504003; // 0x63 PushI
	var_122_int = -1; // 0x64 PushI
	var_123_int = 4358; // 0x65 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_124_bool = 0; // 0x6b PushV
	func_642(var_124_bool); // 0x6c NEW_2
	if(var_124_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_125_string = var_3_string; // 0x71 PushT
	if(var_125_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_126_string = ""; // 0x74 PushV
	var_126_string = var_2_object; // 0x75 MovT
	func_546(var_126_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_137_string = "all"; // 0x7a PushS
	var_138_string = "idle"; // 0x7b PushS
	PlayAnimation(var_137_string, var_138_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_139_string = var_3_string; // 0x80 PushT
	if(var_139_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_140_string = "all"; // 0x83 PushS
	var_141_string = "idle"; // 0x84 PushS
	PlayAnimation(var_140_string, var_141_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_588()
{
	var_13_bool = 0; // 0x24c PushV
	func_642(var_13_bool); // 0x24d NEW_2
	if(var_13_bool == 0) goto Label_594; // 0x24f JumpB
	lshStopSpeech(); // 0x250 Func
	
Label_594:
	return 0; // 0x252 Return
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
	func_595(var_52_cvector, var_53_cvector); // 0x1e8 NEW_2
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
	CameraTransit(var_43_cvector, var_41_cvector); // 0x1f8 Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x1fa PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x1fb PushE
	Rotate(var_65_float, var_66_float); // 0x1fc Func
	var_67_bool = 0; // 0x1fe PushV
	func_642(var_67_bool); // 0x1ff NEW_2
	if(var_67_bool == 0) goto Label_515; // 0x201 JumpB
	goto Label_523; // 0x202 Jump
	
Label_523:
	CameraWaitForPlayFinish(); // 0x20b Func
	ResumeWorld(); // 0x20d Func
	var_25_bool = 1; // 0x20f MovB
	return 18; // 0x210 Return
	
Label_515:
	var_68_string = "head"; // 0x203 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x204 Func
	var_69_bool = var_45_bool; // 0x206 Push
	if(var_69_bool == 0) goto Label_523; // 0x207 JumpB
	var_70_string = "head"; // 0x208 PushS
	LookAsyncCamera(var_70_string); // 0x209 Func
}


func_529()
{
	var_144_bool = 0; var_145_bool = 0; // 0x211 PushV
	CameraSwitchToNormal(); // 0x212 Func
	var_146_bool = 0; // 0x214 PushV
	func_642(var_146_bool); // 0x215 NEW_2
	if(var_146_bool == 0) goto Label_537; // 0x217 JumpB
	goto Label_545; // 0x218 Jump
	
Label_545:
	return 2; // 0x221 Return
	
Label_537:
	var_147_string = "head"; // 0x219 PushS
	HasAnimationTrack(var_145_bool, var_147_string); // 0x21a Func
	var_148_bool = var_145_bool; // 0x21c Push
	if(var_148_bool == 0) goto Label_545; // 0x21d JumpB
	var_149_string = "head"; // 0x21e PushS
	UnlookAsync(var_149_string); // 0x21f Func
}


func_595(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x253 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x254 Or
	var_56_float = sqrt(var_57_int); // 0x255 Sqrt2
	var_58_float = 0.0; // 0x256 PushF
	var_59_bool = var_56_float < var_58_float; // 0x257 LT
	if(var_59_bool == 0) goto Label_603; // 0x258 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x259 MovV
	return 2; // 0x25a Return
	
Label_603:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x25b Div2
	return 2; // 0x25c Return
}


func_662(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x296 PushV
	var_79_string = "branch"; // 0x297 PushS
	GetVariable(var_79_string, var_78_int); // 0x298 Func
	var_80_int = 0; // 0x29a PushI
	var_81_bool = var_78_int == var_80_int; // 0x29b Eq
	if(var_81_bool == 0) goto Label_672; // 0x29c JumpB
	var_76_int = 1; // 0x29d MovI
	return 2; // 0x29e Return
	
Label_672:
	var_82_int = 1; // 0x2a0 PushI
	var_83_bool = var_78_int == var_82_int; // 0x2a1 Eq
	if(var_83_bool == 0) goto Label_677; // 0x2a2 JumpB
	var_76_int = 2; // 0x2a3 MovI
	return 2; // 0x2a4 Return
	
Label_677:
	var_76_int = 3; // 0x2a5 MovI
	return 2; // 0x2a6 Return
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


func_605(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0; // 0x25d PushV
	GetVariable(var_113_string, var_115_int); // 0x25e Func
	var_112_int = var_115_int; // 0x260 Mov
	return 2; // 0x261 Return
}


func_546(var_126_string)
{
	var_127_bool = 0; var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_float = 0; var_132_float = 0; // 0x222 PushV
	lshHasAnimation(var_130_bool, var_126_string); // 0x223 Func
	var_133_bool = var_130_bool; // 0x225 Push
	if(var_133_bool == 0) goto Label_557; // 0x226 JumpB
	lshGetAnimTimes(var_126_string, var_131_float, var_132_float); // 0x227 Func
	var_134_bool = 0; // 0x229 PushB
	lshPlayAnimation(var_131_float, var_132_float, var_134_bool); // 0x22a Func
	goto Label_561; // 0x22c Jump
	
Label_561:
	return 6; // 0x231 Return
	
Label_557:
	var_135_string = "Can't find lsh animation : "; // 0x22d PushS
	var_136_int = var_135_string + var_126_string; // 0x22e Add
	Trace(var_136_int); // 0x22f Func
}


func_610(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = ""; // 0x262 PushV
	var_46_string = "idle"; // 0x263 MovS
	var_47_int = var_44_int; // 0x264 Push
	if(var_47_int == 0) goto Label_615; // 0x265 JumpB
	var_46_string = var_46_string + var_44_int; // 0x266 Add2
	
Label_615:
	var_43_string = var_46_string; // 0x267 Mov
	return 2; // 0x268 Return
}


func_617(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x269 PushV
	var_40_int = 0; // 0x26a MovI
	
Label_619:
	var_42_string = "all"; // 0x26b PushS
	var_43_string = ""; var_44_int = 0; // 0x26c PushV
	var_44_int = var_40_int; // 0x26d Mov
	func_610(var_43_string, var_44_int); // 0x26e NEW_2
	HasAnimation(var_41_bool, var_42_string, var_43_string); // 0x270 Func
	var_48_bool = var_41_bool == 0; // 0x272 Not
	if(var_48_bool == 0) goto Label_629; // 0x273 JumpB
	goto Label_632; // 0x274 Jump
	
Label_632:
	var_37_int = var_40_int; // 0x278 Mov
	return 4; // 0x279 Return
	
Label_629:
	var_49_int = 1; // 0x275 PushI
	var_40_int = var_40_int + var_49_int; // 0x276 Add2
	goto Label_619; // 0x277 Jump
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
	func_617(var_37_int); // 0x174 NEW_2
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
	func_610(var_59_string, var_60_int); // 0x190 NEW_2
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


func_562(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x232 PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x233 Func
	var_106_bool = var_103_bool; // 0x235 Push
	if(var_106_bool == 0) goto Label_572; // 0x236 JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x237 Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x239 Func
	goto Label_576; // 0x23b Jump
	
Label_576:
	return 6; // 0x240 Return
	
Label_572:
	var_107_string = "Can't find lsh animation : "; // 0x23c PushS
	var_108_int = var_107_string + var_96_string; // 0x23d Add
	Trace(var_108_int); // 0x23e Func
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


func_634(var_73_int)
{
	var_73_int = 515567; // 0x27a MovI
	return 0; // 0x27b Return
}


func_443()
{
	StopAnimation(); // 0x1bb Func
	StopGroup0(); // 0x1bd Func
	return 0; // 0x1bf Return
}


func_636(var_72_int)
{
	var_72_int = 503352; // 0x27c MovI
	return 0; // 0x27d Return
}


func_638(var_74_string)
{
	var_74_string = "ui/NPC_Citizen3.png"; // 0x27e MovS
	return 0; // 0x27f Return
}


