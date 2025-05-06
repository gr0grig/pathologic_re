task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0x85 PushI
	if(var_7_int == 0) goto Label_378; // 0x86 JumpB
	func_469(); // 0x88 Call
	var_9_int = 16594; // 0x8a PushI
	var_10_bool = var_5_int == var_9_int; // 0x8b Eq
	if(var_10_bool == 0) goto Label_156; // 0x8c JumpB
	var_11_string = ""; // 0x8d PushV
	var_11_string = "Neutral"; // 0x8e MovS
	func_116(var_6_int, var_11_string); // 0x8f Call
	var_26_int = 15498; // 0x91 PushI
	SetMessage(var_26_int); // 0x92 TObjFunc
	ClearReplies(); // 0x94 TObjFunc
	var_27_int = 15499; // 0x96 PushI
	var_28_int = 16596; // 0x97 PushI
	var_29_int = 16595; // 0x98 PushI
	AddReply(var_27_int, var_28_int, var_29_int); // 0x99 TObjFunc
	return 0; // 0x9b Return
	
Label_156:
	var_30_int = 16596; // 0x9c PushI
	var_31_bool = var_5_int == var_30_int; // 0x9d Eq
	if(var_31_bool == 0) goto Label_179; // 0x9e JumpB
	var_32_string = ""; // 0x9f PushV
	var_32_string = "Neutral"; // 0xa0 MovS
	func_116(var_6_int, var_32_string); // 0xa1 Call
	var_33_int = 15500; // 0xa3 PushI
	SetMessage(var_33_int); // 0xa4 TObjFunc
	ClearReplies(); // 0xa6 TObjFunc
	var_34_int = 15501; // 0xa8 PushI
	var_35_int = 16598; // 0xa9 PushI
	var_36_int = 16597; // 0xaa PushI
	AddReply(var_34_int, var_35_int, var_36_int); // 0xab TObjFunc
	var_37_int = 15523; // 0xad PushI
	var_38_int = 16620; // 0xae PushI
	var_39_int = 16619; // 0xaf PushI
	AddReply(var_37_int, var_38_int, var_39_int); // 0xb0 TObjFunc
	return 0; // 0xb2 Return
	
Label_179:
	var_40_int = 16620; // 0xb3 PushI
	var_41_bool = var_5_int == var_40_int; // 0xb4 Eq
	if(var_41_bool == 0) goto Label_197; // 0xb5 JumpB
	var_42_string = ""; // 0xb6 PushV
	var_42_string = "Neutral"; // 0xb7 MovS
	func_116(var_6_int, var_42_string); // 0xb8 Call
	var_43_int = 15524; // 0xba PushI
	SetMessage(var_43_int); // 0xbb TObjFunc
	ClearReplies(); // 0xbd TObjFunc
	var_44_int = 15525; // 0xbf PushI
	var_45_int = -1; // 0xc0 PushI
	var_46_int = 16621; // 0xc1 PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xc2 TObjFunc
	return 0; // 0xc4 Return
	
Label_197:
	var_47_int = 16598; // 0xc5 PushI
	var_48_bool = var_5_int == var_47_int; // 0xc6 Eq
	if(var_48_bool == 0) goto Label_220; // 0xc7 JumpB
	var_49_string = ""; // 0xc8 PushV
	var_49_string = "Neutral"; // 0xc9 MovS
	func_116(var_6_int, var_49_string); // 0xca Call
	var_50_int = 15502; // 0xcc PushI
	SetMessage(var_50_int); // 0xcd TObjFunc
	ClearReplies(); // 0xcf TObjFunc
	var_51_int = 15503; // 0xd1 PushI
	var_52_int = 16600; // 0xd2 PushI
	var_53_int = 16599; // 0xd3 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xd4 TObjFunc
	var_54_int = 15522; // 0xd6 PushI
	var_55_int = -1; // 0xd7 PushI
	var_56_int = 16618; // 0xd8 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xd9 TObjFunc
	return 0; // 0xdb Return
	
Label_220:
	var_57_int = 16600; // 0xdc PushI
	var_58_bool = var_5_int == var_57_int; // 0xdd Eq
	if(var_58_bool == 0) goto Label_238; // 0xde JumpB
	var_59_string = ""; // 0xdf PushV
	var_59_string = "Neutral"; // 0xe0 MovS
	func_116(var_6_int, var_59_string); // 0xe1 Call
	var_60_int = 15504; // 0xe3 PushI
	SetMessage(var_60_int); // 0xe4 TObjFunc
	ClearReplies(); // 0xe6 TObjFunc
	var_61_int = 15505; // 0xe8 PushI
	var_62_int = 16602; // 0xe9 PushI
	var_63_int = 16601; // 0xea PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xeb TObjFunc
	return 0; // 0xed Return
	
Label_238:
	var_64_int = 16602; // 0xee PushI
	var_65_bool = var_5_int == var_64_int; // 0xef Eq
	if(var_65_bool == 0) goto Label_261; // 0xf0 JumpB
	var_66_string = ""; // 0xf1 PushV
	var_66_string = "Neutral"; // 0xf2 MovS
	func_116(var_6_int, var_66_string); // 0xf3 Call
	var_67_int = 15506; // 0xf5 PushI
	SetMessage(var_67_int); // 0xf6 TObjFunc
	ClearReplies(); // 0xf8 TObjFunc
	var_68_int = 15507; // 0xfa PushI
	var_69_int = 16604; // 0xfb PushI
	var_70_int = 16603; // 0xfc PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xfd TObjFunc
	var_71_int = 15513; // 0xff PushI
	var_72_int = 16610; // 0x100 PushI
	var_73_int = 16609; // 0x101 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x102 TObjFunc
	return 0; // 0x104 Return
	
Label_261:
	var_74_int = 16610; // 0x105 PushI
	var_75_bool = var_5_int == var_74_int; // 0x106 Eq
	if(var_75_bool == 0) goto Label_284; // 0x107 JumpB
	var_76_string = ""; // 0x108 PushV
	var_76_string = "Neutral"; // 0x109 MovS
	func_116(var_6_int, var_76_string); // 0x10a Call
	var_77_int = 15514; // 0x10c PushI
	SetMessage(var_77_int); // 0x10d TObjFunc
	ClearReplies(); // 0x10f TObjFunc
	var_78_int = 15515; // 0x111 PushI
	var_79_int = -1; // 0x112 PushI
	var_80_int = 16611; // 0x113 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x114 TObjFunc
	var_81_int = 15516; // 0x116 PushI
	var_82_int = 16613; // 0x117 PushI
	var_83_int = 16612; // 0x118 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x119 TObjFunc
	return 0; // 0x11b Return
	
Label_284:
	var_84_int = 16613; // 0x11c PushI
	var_85_bool = var_5_int == var_84_int; // 0x11d Eq
	if(var_85_bool == 0) goto Label_307; // 0x11e JumpB
	var_86_string = ""; // 0x11f PushV
	var_86_string = "Neutral"; // 0x120 MovS
	func_116(var_6_int, var_86_string); // 0x121 Call
	var_87_int = 15517; // 0x123 PushI
	SetMessage(var_87_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_88_int = 15518; // 0x128 PushI
	var_89_int = -1; // 0x129 PushI
	var_90_int = 16614; // 0x12a PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x12b TObjFunc
	var_91_int = 15519; // 0x12d PushI
	var_92_int = 16616; // 0x12e PushI
	var_93_int = 16615; // 0x12f PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_94_int = 16616; // 0x133 PushI
	var_95_bool = var_5_int == var_94_int; // 0x134 Eq
	if(var_95_bool == 0) goto Label_325; // 0x135 JumpB
	var_96_string = ""; // 0x136 PushV
	var_96_string = "Neutral"; // 0x137 MovS
	func_116(var_6_int, var_96_string); // 0x138 Call
	var_97_int = 15520; // 0x13a PushI
	SetMessage(var_97_int); // 0x13b TObjFunc
	ClearReplies(); // 0x13d TObjFunc
	var_98_int = 15521; // 0x13f PushI
	var_99_int = -1; // 0x140 PushI
	var_100_int = 16617; // 0x141 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x142 TObjFunc
	return 0; // 0x144 Return
	
Label_325:
	var_101_int = 16604; // 0x145 PushI
	var_102_bool = var_5_int == var_101_int; // 0x146 Eq
	if(var_102_bool == 0) goto Label_348; // 0x147 JumpB
	var_103_string = ""; // 0x148 PushV
	var_103_string = "Neutral"; // 0x149 MovS
	func_116(var_6_int, var_103_string); // 0x14a Call
	var_104_int = 15508; // 0x14c PushI
	SetMessage(var_104_int); // 0x14d TObjFunc
	ClearReplies(); // 0x14f TObjFunc
	var_105_int = 15509; // 0x151 PushI
	var_106_int = 16606; // 0x152 PushI
	var_107_int = 16605; // 0x153 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x154 TObjFunc
	var_108_int = 15512; // 0x156 PushI
	var_109_int = -1; // 0x157 PushI
	var_110_int = 16608; // 0x158 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x159 TObjFunc
	return 0; // 0x15b Return
	
Label_348:
	var_111_int = 16606; // 0x15c PushI
	var_112_bool = var_5_int == var_111_int; // 0x15d Eq
	if(var_112_bool == 0) goto Label_366; // 0x15e JumpB
	var_113_string = ""; // 0x15f PushV
	var_113_string = "Neutral"; // 0x160 MovS
	func_116(var_6_int, var_113_string); // 0x161 Call
	var_114_int = 15510; // 0x163 PushI
	SetMessage(var_114_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_115_int = 15511; // 0x168 PushI
	var_116_int = -1; // 0x169 PushI
	var_117_int = 16607; // 0x16a PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x16b TObjFunc
	return 0; // 0x16d Return
	
Label_366:
	var_3_string = 1; // 0x16e TMovB
	var_118_bool = 0; // 0x16f PushV
	func_507(var_118_bool); // 0x170 Call
	if(var_118_bool == 0) goto Label_374; // 0x172 JumpB
	lshStopAnimation(); // 0x173 Func
	goto Label_376; // 0x175 Jump
	
Label_376:
	return 0; // 0x178 Return
	
Label_374:
	StopAnimation(); // 0x176 Func
	
Label_378:
	return 0; // 0x17a Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj(); // 0x180 PushV
	var_7_object = var_5_object; // 0x181 Mov
	TaskCall(0); // 0x182 TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x183 Call
	TaskReturn(); // 0x184 TaskReturn
	return 0; // 0x186 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_379:
	Hold(); // 0x17b Func
	goto Label_379; // 0x17d Jump
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	func_391(var_18_object); // 0x4 Call
	var_57_bool = var_17_bool == 0; // 0x6 Not
	if(var_57_bool == 0) goto Label_10; // 0x7 JumpB
	var_6_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_13_object); // 0xa Func
	var_58_int = 0; // 0xc PushV
	func_503(var_58_int); // 0xd Call
	SetNPCName(var_58_int); // 0xf ObjFunc
	var_59_string = ""; // 0x11 PushV
	func_505(var_59_string); // 0x12 Call
	SetPhoto(var_59_string); // 0x14 ObjFunc
	var_60_int = 0; // 0x16 PushV
	func_486(var_60_int); // 0x17 Call
	SetPlayerName(var_60_int); // 0x19 ObjFunc
	var_15_int = -1; // 0x1b MovI
	IsOverrideActive(var_14_bool); // 0x1c Func
	var_68_bool = var_14_bool; // 0x1e Push
	if(var_68_bool == 0) goto Label_34; // 0x1f JumpB
	var_6_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_13_object); // 0x22 Func
	var_69_object = Obj(); var_70_object = Obj(); // 0x24 PushV
	var_69_object = var_7_object; // 0x25 Mov
	var_70_object = var_13_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_16_bool); // 0x2b ObjFunc
	
Label_45:
	var_103_bool = var_16_bool == 0; // 0x2d Not
	if(var_103_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_16_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_104_object = Obj(); // 0x34 PushV
	var_104_object = var_7_object; // 0x35 Mov
	func_447(); // 0x36 Call
	StopDialog(var_13_object); // 0x38 Func
	GetReturnValue(var_15_int); // 0x3a ObjFunc
	var_6_int = var_15_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_451(var_80_string)
{
	var_81_float = 0; var_82_float = 0; var_83_float = 0; var_84_float = 0; // 0x1c3 PushV
	var_85_string = "playing "; // 0x1c4 PushS
	var_86_int = var_85_string + var_80_string; // 0x1c5 Add
	Trace(var_86_int); // 0x1c6 Func
	lshGetAnimTimes(var_80_string, var_83_float, var_84_float); // 0x1c8 Func
	lshPlayAnimation(var_83_float, var_84_float); // 0x1ca Func
	var_87_string = "start: "; // 0x1cc PushS
	var_88_int = var_87_string + var_83_float; // 0x1cd Add
	Trace(var_88_int); // 0x1ce Func
	var_89_string = "end: "; // 0x1d0 PushS
	var_90_int = var_89_string + var_84_float; // 0x1d1 Add
	Trace(var_90_int); // 0x1d2 Func
	return 4; // 0x1d4 Return
}


func_486(var_60_int)
{
	var_61_int = 0; var_62_int = 0; // 0x1e6 PushV
	var_63_string = "player"; // 0x1e7 PushS
	GetVariable(var_63_string, var_62_int); // 0x1e8 Func
	var_64_int = 0; // 0x1ea PushI
	var_65_bool = var_62_int == var_64_int; // 0x1eb Eq
	if(var_65_bool == 0) goto Label_496; // 0x1ec JumpB
	var_60_int = 200001; // 0x1ed MovI
	return 2; // 0x1ee Return
	
Label_496:
	var_66_int = 1; // 0x1f0 PushI
	var_67_bool = var_62_int == var_66_int; // 0x1f1 Eq
	if(var_67_bool == 0) goto Label_501; // 0x1f2 JumpB
	var_60_int = 200002; // 0x1f3 MovI
	return 2; // 0x1f4 Return
	
Label_501:
	var_60_int = 200003; // 0x1f5 MovI
	return 2; // 0x1f6 Return
}


func_391(var_17_bool)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; // 0x187 PushV
	GetPosition(var_28_cvector); // 0x188 ObjFunc
	GetEyesHeight(var_27_float); // 0x18a ObjFunc
	var_35_float = GetByIndex(var_28_cvector, 1); // 0x18c PushE
	var_35_float = var_35_float + var_27_float; // 0x18d Add2
	SetByIndex(var_28_cvector, 1) = var_35_float; // 0x18e PopE
	GetPosition(var_29_cvector); // 0x18f Func
	GetEyesHeight(var_27_float); // 0x191 Func
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x193 PushE
	var_36_float = var_36_float + var_27_float; // 0x194 Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x195 PopE
	var_30_cvector = var_28_cvector - var_29_cvector; // 0x196 Sub2
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x197 PushE
	var_37_float = 0; // 0x198 MovI
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x199 PopE
	var_38_int = var_30_cvector | var_30_cvector; // 0x19a Or
	var_39_float = sqrt(var_38_int); // 0x19b Sqrt
	var_30_cvector = var_30_cvector / var_30_cvector; // 0x19c Div2
	var_31_cvector = -var_30_cvector; // 0x19d Neg2
	var_40_int = 70; // 0x19e PushI
	var_41_float = var_30_cvector * var_40_int; // 0x19f Mult
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x1a0 PushV
	var_44_cvector = CVector(0.0, 1.0, 0.0); // 0x1a1 PushVec
	var_43_cvector = var_31_cvector ^ var_44_cvector; // 0x1a2 Xor2
	func_476(var_42_cvector, var_43_cvector); // 0x1a3 Call
	var_50_int = 25; // 0x1a5 PushI
	var_51_float = var_42_cvector * var_50_int; // 0x1a6 Mult
	var_52_int = var_41_float + var_51_float; // 0x1a7 Add
	var_53_cvector = CVector(0.0, 10.0, 0.0); // 0x1a8 PushVec
	var_32_cvector = var_52_int - var_53_cvector; // 0x1a9 Sub2
	var_33_cvector = var_29_cvector + var_32_cvector; // 0x1aa Add2
	IsOverrideActive(var_34_bool); // 0x1ab Func
	var_54_bool = var_34_bool; // 0x1ad Push
	if(var_54_bool == 0) goto Label_433; // 0x1ae JumpB
	var_17_bool = 0; // 0x1af MovB
	return 16; // 0x1b0 Return
	
Label_433:
	StopWorld(); // 0x1b1 Func
	CameraTransit(var_33_cvector, var_31_cvector); // 0x1b3 Func
	var_55_float = GetByIndex(var_32_cvector, 0); // 0x1b5 PushE
	var_56_float = GetByIndex(var_32_cvector, 2); // 0x1b6 PushE
	Rotate(var_55_float, var_56_float); // 0x1b7 Func
	CameraWaitForPlayFinish(); // 0x1b9 Func
	ResumeWorld(); // 0x1bb Func
	var_17_bool = 1; // 0x1bd MovB
	return 16; // 0x1be Return
}


func_447()
{
	CameraSwitchToNormal(); // 0x1c0 Func
	return 0; // 0x1c2 Return
}


func_116(var_2_object, var_76_string)
{
	var_77_bool = 0; // 0x75 PushV
	func_507(var_77_bool); // 0x76 Call
	var_78_bool = var_77_bool == 0; // 0x78 Not
	if(var_78_bool == 0) goto Label_123; // 0x79 JumpB
	return 0; // 0x7a Return
	
Label_123:
	var_79_bool = var_76_string == var_2_object; // 0x7b Eq
	if(var_79_bool == 0) goto Label_126; // 0x7c JumpB
	return 0; // 0x7d Return
	
Label_126:
	var_80_string = ""; // 0x7e PushV
	var_80_string = var_76_string; // 0x7f Mov
	func_451(var_80_string); // 0x80 Call
	var_2_object = var_76_string; // 0x82 TMov
	return 0; // 0x83 Return
}


func_469()
{
	var_8_bool = 0; // 0x1d5 PushV
	func_507(var_8_bool); // 0x1d6 Call
	if(var_8_bool == 0) goto Label_475; // 0x1d8 JumpB
	lshStopSpeech(); // 0x1d9 Func
	
Label_475:
	return 0; // 0x1db Return
}


func_503(var_58_int)
{
	var_58_int = 4029; // 0x1f7 MovI
	return 0; // 0x1f8 Return
}


func_505(var_59_string)
{
	var_59_string = "ui/NPC_Black.png"; // 0x1f9 MovS
	return 0; // 0x1fa Return
}


func_507(var_77_bool)
{
	var_77_bool = 0; // 0x1fb MovB
	return 0; // 0x1fc Return
}


func_476(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0; // 0x1dc PushV
	var_47_int = var_43_cvector | var_43_cvector; // 0x1dd Or
	var_46_float = sqrt(var_47_int); // 0x1de Sqrt2
	var_48_float = 0.0; // 0x1df PushF
	var_49_bool = var_46_float < var_48_float; // 0x1e0 LT
	if(var_49_bool == 0) goto Label_484; // 0x1e1 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x1e2 MovV
	return 2; // 0x1e3 Return
	
Label_484:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x1e4 Div2
	return 2; // 0x1e5 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object; // 0x40 TMov
	var_1_object = var_69_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_75_int = 1; // 0x43 PushI
	if(var_75_int == 0) goto Label_86; // 0x44 JumpB
	var_76_string = ""; // 0x45 PushV
	var_76_string = "Neutral"; // 0x46 MovS
	func_116(var_70_object, var_76_string); // 0x47 Call
	var_91_int = 15498; // 0x49 PushI
	SetMessage(var_91_int); // 0x4a TObjFunc
	ClearReplies(); // 0x4c TObjFunc
	var_92_int = 15499; // 0x4e PushI
	var_93_int = 16596; // 0x4f PushI
	var_94_int = 16595; // 0x50 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x51 TObjFunc
	goto Label_86; // 0x53 Jump
	
Label_86:
	var_95_bool = 0; // 0x56 PushV
	func_507(var_95_bool); // 0x57 Call
	if(var_95_bool == 0) goto Label_101; // 0x59 JumpB
	
Label_90:
	lshWaitForAnimEnd(); // 0x5a Func
	var_96_string = var_3_string; // 0x5c PushT
	if(var_96_string == 0) goto Label_95; // 0x5d JumpB
	goto Label_100; // 0x5e Jump
	
Label_100:
	goto Label_115; // 0x64 Jump
	
Label_115:
	return 0; // 0x73 Return
	
Label_95:
	var_97_string = ""; // 0x5f PushV
	var_97_string = var_2_object; // 0x60 MovT
	func_451(var_97_string); // 0x61 Call
	goto Label_90; // 0x63 Jump
	
Label_101:
	var_98_string = "all"; // 0x65 PushS
	var_99_string = "idle"; // 0x66 PushS
	PlayAnimation(var_98_string, var_99_string); // 0x67 Func
	
Label_105:
	WaitForAnimEnd(); // 0x69 Func
	var_100_string = var_3_string; // 0x6b PushT
	if(var_100_string == 0) goto Label_110; // 0x6c JumpB
	goto Label_115; // 0x6d Jump
	
Label_110:
	var_101_string = "all"; // 0x6e PushS
	var_102_string = "idle"; // 0x6f PushS
	PlayAnimation(var_101_string, var_102_string); // 0x70 Func
	goto Label_105; // 0x72 Jump
}


