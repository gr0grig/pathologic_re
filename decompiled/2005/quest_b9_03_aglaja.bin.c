task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xbc PushI
	if(var_8_int == 0) goto Label_436; // 0xbd JumpB
	func_808(); // 0xbf NEW_2
	var_10_int = 31666; // 0xc1 PushI
	var_11_bool = var_6_int == var_10_int; // 0xc2 Eq
	if(var_11_bool == 0) goto Label_242; // 0xc3 JumpB
	var_12_bool = 0; var_13_object = Obj(); // 0xc4 PushV
	var_13_object = var_1_object; // 0xc5 MovT
	func_861(var_13_object); // 0xc6 NEW_2
	var_20_bool = var_12_bool == 0; // 0xc8 Not
	if(var_20_bool == 0) goto Label_222; // 0xc9 JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xca PushV
	var_21_object = var_1_object; // 0xcb MovT
	var_22_object = var_0_object; // 0xcc MovT
	func_855(); // 0xcd NEW_2
	var_25_string = ""; // 0xcf PushV
	var_25_string = "Isee"; // 0xd0 MovS
	func_165(var_7_bool, var_25_string); // 0xd1 NEW_2
	var_42_int = 530278; // 0xd3 PushI
	SetMessage(var_42_int); // 0xd4 TObjFunc
	ClearReplies(); // 0xd6 TObjFunc
	var_43_int = 530919; // 0xd8 PushI
	var_44_int = 32247; // 0xd9 PushI
	var_45_int = 32246; // 0xda PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xdb TObjFunc
	return 0; // 0xdd Return
	
Label_222:
	var_46_string = ""; // 0xde PushV
	var_46_string = "Neutral"; // 0xdf MovS
	func_165(var_7_bool, var_46_string); // 0xe0 NEW_2
	var_47_int = 530288; // 0xe2 PushI
	SetMessage(var_47_int); // 0xe3 TObjFunc
	ClearReplies(); // 0xe5 TObjFunc
	var_48_int = 530289; // 0xe7 PushI
	var_49_int = -1; // 0xe8 PushI
	var_50_int = 31677; // 0xe9 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xea TObjFunc
	var_51_int = 530918; // 0xec PushI
	var_52_int = -1; // 0xed PushI
	var_53_int = 32245; // 0xee PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xef TObjFunc
	return 0; // 0xf1 Return
	
Label_242:
	var_54_int = 32251; // 0xf2 PushI
	var_55_bool = var_6_int == var_54_int; // 0xf3 Eq
	if(var_55_bool == 0) goto Label_245; // 0xf4 JumpB
	
Label_245:
	var_56_int = 32247; // 0xf5 PushI
	var_57_bool = var_6_int == var_56_int; // 0xf6 Eq
	if(var_57_bool == 0) goto Label_268; // 0xf7 JumpB
	var_58_string = ""; // 0xf8 PushV
	var_58_string = "Isee"; // 0xf9 MovS
	func_165(var_7_bool, var_58_string); // 0xfa NEW_2
	var_59_int = 530920; // 0xfc PushI
	SetMessage(var_59_int); // 0xfd TObjFunc
	ClearReplies(); // 0xff TObjFunc
	var_60_int = 530921; // 0x101 PushI
	var_61_int = 32249; // 0x102 PushI
	var_62_int = 32248; // 0x103 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x104 TObjFunc
	var_63_int = 531006; // 0x106 PushI
	var_64_int = -1; // 0x107 PushI
	var_65_int = 32333; // 0x108 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_66_int = 32249; // 0x10c PushI
	var_67_bool = var_6_int == var_66_int; // 0x10d Eq
	if(var_67_bool == 0) goto Label_291; // 0x10e JumpB
	var_68_string = ""; // 0x10f PushV
	var_68_string = "Neutral"; // 0x110 MovS
	func_165(var_7_bool, var_68_string); // 0x111 NEW_2
	var_69_int = 530922; // 0x113 PushI
	SetMessage(var_69_int); // 0x114 TObjFunc
	ClearReplies(); // 0x116 TObjFunc
	var_70_int = 530279; // 0x118 PushI
	var_71_int = 31668; // 0x119 PushI
	var_72_int = 31667; // 0x11a PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x11b TObjFunc
	var_73_int = 531005; // 0x11d PushI
	var_74_int = 32334; // 0x11e PushI
	var_75_int = 32332; // 0x11f PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x120 TObjFunc
	return 0; // 0x122 Return
	
Label_291:
	var_76_int = 32334; // 0x123 PushI
	var_77_bool = var_6_int == var_76_int; // 0x124 Eq
	if(var_77_bool == 0) goto Label_309; // 0x125 JumpB
	var_78_string = ""; // 0x126 PushV
	var_78_string = "Neutral"; // 0x127 MovS
	func_165(var_7_bool, var_78_string); // 0x128 NEW_2
	var_79_int = 531007; // 0x12a PushI
	SetMessage(var_79_int); // 0x12b TObjFunc
	ClearReplies(); // 0x12d TObjFunc
	var_80_int = 531008; // 0x12f PushI
	var_81_int = 31668; // 0x130 PushI
	var_82_int = 32335; // 0x131 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_83_int = 31668; // 0x135 PushI
	var_84_bool = var_6_int == var_83_int; // 0x136 Eq
	if(var_84_bool == 0) goto Label_332; // 0x137 JumpB
	var_85_string = ""; // 0x138 PushV
	var_85_string = "Neutral"; // 0x139 MovS
	func_165(var_7_bool, var_85_string); // 0x13a NEW_2
	var_86_int = 530280; // 0x13c PushI
	SetMessage(var_86_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_87_int = 531011; // 0x141 PushI
	var_88_int = 32340; // 0x142 PushI
	var_89_int = 32339; // 0x143 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x144 TObjFunc
	var_90_int = 531009; // 0x146 PushI
	var_91_int = 32338; // 0x147 PushI
	var_92_int = 32337; // 0x148 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_93_int = 32338; // 0x14c PushI
	var_94_bool = var_6_int == var_93_int; // 0x14d Eq
	if(var_94_bool == 0) goto Label_355; // 0x14e JumpB
	var_95_string = ""; // 0x14f PushV
	var_95_string = "Neutral"; // 0x150 MovS
	func_165(var_7_bool, var_95_string); // 0x151 NEW_2
	var_96_int = 531010; // 0x153 PushI
	SetMessage(var_96_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_97_int = 531013; // 0x158 PushI
	var_98_int = 32340; // 0x159 PushI
	var_99_int = 32341; // 0x15a PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x15b TObjFunc
	var_100_int = 531014; // 0x15d PushI
	var_101_int = -1; // 0x15e PushI
	var_102_int = 32342; // 0x15f PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_103_int = 32340; // 0x163 PushI
	var_104_bool = var_6_int == var_103_int; // 0x164 Eq
	if(var_104_bool == 0) goto Label_378; // 0x165 JumpB
	var_105_string = ""; // 0x166 PushV
	var_105_string = "Threat"; // 0x167 MovS
	func_165(var_7_bool, var_105_string); // 0x168 NEW_2
	var_106_int = 531012; // 0x16a PushI
	SetMessage(var_106_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_107_int = 530281; // 0x16f PushI
	var_108_int = 31670; // 0x170 PushI
	var_109_int = 31669; // 0x171 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x172 TObjFunc
	var_110_int = 531016; // 0x174 PushI
	var_111_int = -1; // 0x175 PushI
	var_112_int = 32345; // 0x176 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x177 TObjFunc
	return 0; // 0x179 Return
	
Label_378:
	var_113_int = 31670; // 0x17a PushI
	var_114_bool = var_6_int == var_113_int; // 0x17b Eq
	if(var_114_bool == 0) goto Label_401; // 0x17c JumpB
	var_115_string = ""; // 0x17d PushV
	var_115_string = "Neutral"; // 0x17e MovS
	func_165(var_7_bool, var_115_string); // 0x17f NEW_2
	var_116_int = 530282; // 0x181 PushI
	SetMessage(var_116_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_117_int = 530283; // 0x186 PushI
	var_118_int = -1; // 0x187 PushI
	var_119_int = 31671; // 0x188 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x189 TObjFunc
	var_120_int = 531015; // 0x18b PushI
	var_121_int = 32346; // 0x18c PushI
	var_122_int = 32344; // 0x18d PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_123_int = 32346; // 0x191 PushI
	var_124_bool = var_6_int == var_123_int; // 0x192 Eq
	if(var_124_bool == 0) goto Label_424; // 0x193 JumpB
	var_125_string = ""; // 0x194 PushV
	var_125_string = "Neutral"; // 0x195 MovS
	func_165(var_7_bool, var_125_string); // 0x196 NEW_2
	var_126_int = 531017; // 0x198 PushI
	SetMessage(var_126_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_127_int = 531018; // 0x19d PushI
	var_128_int = -1; // 0x19e PushI
	var_129_int = 32347; // 0x19f PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x1a0 TObjFunc
	var_130_int = 531019; // 0x1a2 PushI
	var_131_int = -1; // 0x1a3 PushI
	var_132_int = 32348; // 0x1a4 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x1a5 TObjFunc
	return 0; // 0x1a7 Return
	
Label_424:
	var_3_string = 1; // 0x1a8 TMovB
	var_133_bool = 0; // 0x1a9 PushV
	func_853(var_133_bool); // 0x1aa NEW_2
	if(var_133_bool == 0) goto Label_432; // 0x1ac JumpB
	lshStopAnimation(); // 0x1ad Func
	goto Label_434; // 0x1af Jump
	
Label_434:
	return 0; // 0x1b2 Return
	
Label_432:
	StopAnimation(); // 0x1b0 Func
	
Label_436:
	return 0; // 0x1b4 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1ce PushV
	var_9_string = "cleanup"; // 0x1cf PushS
	var_10_bool = var_6_string == var_9_string; // 0x1d0 Eq
	if(var_10_bool == 0) goto Label_477; // 0x1d1 JumpB
	var_0_object = 1; // 0x1d2 TMovB
	IsLoaded(var_8_bool); // 0x1d3 Func
	var_11_bool = var_8_bool == 0; // 0x1d5 Not
	if(var_11_bool == 0) goto Label_476; // 0x1d6 JumpB
	var_12_object = Obj(); // 0x1d7 PushV
	func_815(var_12_object); // 0x1d8 NEW_2
	RemoveActor(var_12_object); // 0x1da Func
	
Label_476:
	goto Label_481; // 0x1dc Jump
	
Label_481:
	return 2; // 0x1e1 Return
	
Label_477:
	var_15_string = "restore"; // 0x1dd PushS
	var_16_bool = var_6_string == var_15_string; // 0x1de Eq
	if(var_16_bool == 0) goto Label_481; // 0x1df JumpB
	var_0_object = 0; // 0x1e0 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_object = var_0_object; // 0x1e2 PushT
	if(var_6_object == 0) goto Label_491; // 0x1e3 JumpB
	var_7_object = Obj(); // 0x1e4 PushV
	func_815(var_7_object); // 0x1e5 NEW_2
	RemoveActor(var_7_object); // 0x1e7 Func
	Hold(); // 0x1e9 Func
	
Label_491:
	Hold(); // 0x1eb Func
	return 0; // 0x1ed Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x1ee Func
	sync(); // 0x1f0 Func
	return 0; // 0x1f2 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1f3 PushV
	IsOverrideActive(var_8_bool); // 0x1f4 Func
	var_9_bool = var_8_bool == 0; // 0x1f6 Not
	if(var_9_bool == 0) goto Label_514; // 0x1f7 JumpB
	EventDisable(0); // 0x1f8 EventDisable
	var_10_bool = 0; var_11_object = Obj(); // 0x1f9 PushV
	var_11_object = var_6_object; // 0x1fa Mov
	func_525(var_11_object); // 0x1fb NEW_2
	EventEnable(0); // 0x1fd EventEnable
	var_24_object = Obj(); // 0x1fe PushV
	var_24_object = var_6_object; // 0x1ff Mov
	func_437(var_24_object); // 0x200 NEW_2
	
Label_514:
	return 2; // 0x202 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1bd PushV
	func_534(var_6_bool); // 0x1be NEW_2
	var_9_bool = var_6_bool == 0; // 0x1c0 Not
	if(var_9_bool == 0) goto Label_452; // 0x1c1 JumpB
	Hold(); // 0x1c2 Func
	
Label_452:
	var_10_string = ""; // 0x1c4 PushV
	var_10_string = "Neutral"; // 0x1c5 MovS
	func_762(var_10_string); // 0x1c6 NEW_2
	lshWaitForAnimEnd(); // 0x1c8 Func
	goto Label_452; // 0x1ca Jump
}


func_0(var_0_object, var_25_int, var_26_object)
{
	var_28_object = Obj(); var_29_bool = 0; var_30_int = 0; var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x0 PushV
	var_0_object = var_26_object; // 0x1 TMov
	var_36_bool = 0; var_37_object = Obj(); var_38_float = 0; // 0x2 PushV
	var_37_object = var_26_object; // 0x3 Mov
	var_38_float = 70.0; // 0x4 MovF
	func_539(var_37_object, var_38_float); // 0x5 NEW_2
	var_82_bool = var_36_bool == 0; // 0x7 Not
	if(var_82_bool == 0) goto Label_11; // 0x8 JumpB
	var_25_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_32_object); // 0xb Func
	var_83_int = 0; // 0xd PushV
	func_847(var_83_int); // 0xe NEW_2
	SetNPCName(var_83_int); // 0x10 ObjFunc
	var_84_int = 0; // 0x12 PushV
	func_845(var_84_int); // 0x13 NEW_2
	SetNPCDescription(var_84_int); // 0x15 ObjFunc
	var_85_string = ""; // 0x17 PushV
	func_849(var_85_string); // 0x18 NEW_2
	SetPhoto(var_85_string); // 0x1a ObjFunc
	var_86_string = ""; // 0x1c PushV
	func_851(var_86_string); // 0x1d NEW_2
	SetPhoto2(var_86_string); // 0x1f ObjFunc
	var_87_int = 0; // 0x21 PushV
	func_873(var_87_int); // 0x22 NEW_2
	SetPlayerName(var_87_int); // 0x24 ObjFunc
	var_34_int = -1; // 0x26 MovI
	IsOverrideActive(var_33_bool); // 0x27 Func
	var_95_bool = var_33_bool; // 0x29 Push
	if(var_95_bool == 0) goto Label_45; // 0x2a JumpB
	var_25_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_32_object); // 0x2d Func
	var_96_bool = 0; var_97_object = Obj(); // 0x2f PushV
	var_98_object = Obj(); // 0x30 PushV
	func_815(var_98_object); // 0x31 NEW_2
	var_97_object = var_98_object; // 0x32 Mov
	func_624(var_96_bool, var_97_object); // 0x34 NEW_2
	var_191_object = Obj(); var_192_object = Obj(); // 0x36 PushV
	var_191_object = var_26_object; // 0x37 Mov
	var_192_object = var_32_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_193_object, var_194_object, var_195_string, var_196_bool, var_191_object, var_192_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_35_bool); // 0x3d ObjFunc
	
Label_63:
	var_258_bool = var_35_bool == 0; // 0x3f Not
	if(var_258_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_35_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_259_object = Obj(); // 0x46 PushV
	var_259_object = var_26_object; // 0x47 Mov
	func_607(); // 0x48 NEW_2
	StopDialog(var_32_object); // 0x4a Func
	GetReturnValue(var_34_int); // 0x4c ObjFunc
	var_25_int = var_34_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_515(var_14_bool, var_15_cvector)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_bool = 0; // 0x203 PushV
	GetPosition(var_19_cvector); // 0x204 Func
	var_20_cvector = var_15_cvector - var_19_cvector; // 0x206 Sub2
	var_22_float = GetByIndex(var_20_cvector, 0); // 0x207 PushE
	var_23_float = GetByIndex(var_20_cvector, 2); // 0x208 PushE
	Rotate(var_22_float, var_23_float, var_21_bool); // 0x209 Func
	var_14_bool = var_21_bool; // 0x20b Mov
	return 6; // 0x20c Return
}


func_836(var_151_int)
{
	var_152_float = 0; var_153_float = 0; // 0x344 PushV
	GetGameTime(var_153_float); // 0x345 Func
	var_154_int = 1; // 0x347 PushI
	var_155_int = 0; // 0x348 PushV
	var_156_int = 24; // 0x349 PushI
	var_155_int = var_153_float / var_153_float; // 0x34a Div2
	var_151_int = var_154_int + var_155_int; // 0x34b Add2
	return 2; // 0x34c Return
}


func_778(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x30a PushV
	lshHasAnimation(var_222_bool, var_215_string); // 0x30b Func
	var_225_bool = var_222_bool; // 0x30d Push
	if(var_225_bool == 0) goto Label_788; // 0x30e JumpB
	lshGetAnimTimes(var_215_string, var_223_float, var_224_float); // 0x30f Func
	lshPlayAnimation(var_223_float, var_224_float, var_216_bool); // 0x311 Func
	goto Label_792; // 0x313 Jump
	
Label_792:
	return 6; // 0x318 Return
	
Label_788:
	var_226_string = "Can't find lsh animation : "; // 0x314 PushS
	var_227_int = var_226_string + var_215_string; // 0x315 Add
	Trace(var_227_int); // 0x316 Func
}


func_525(var_10_bool)
{
	var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x20d PushV
	GetPosition(var_13_cvector); // 0x20e ObjFunc
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); // 0x210 PushV
	var_15_cvector = var_13_cvector; // 0x211 Mov
	func_515(var_14_bool, var_15_cvector); // 0x212 NEW_2
	var_10_bool = var_14_bool; // 0x213 Mov
	return 2; // 0x215 Return
}


func_845(var_84_int)
{
	var_84_int = 515527; // 0x34d MovI
	return 0; // 0x34e Return
}


func_847(var_83_int)
{
	var_83_int = 513334; // 0x34f MovI
	return 0; // 0x350 Return
}


func_719(var_138_bool)
{
	var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = ""; var_145_string = ""; var_146_int = 0; var_147_bool = 0; var_148_int = 0; var_149_string = ""; // 0x2cf PushV
	var_150_string = "d"; // 0x2d0 PushS
	var_151_int = 0; // 0x2d1 PushV
	func_836(var_151_int); // 0x2d2 NEW_2
	var_157_int = var_150_string + var_151_int; // 0x2d4 Add
	var_158_string = "m"; // 0x2d5 PushS
	var_145_string = var_157_int + var_158_string; // 0x2d6 Add2
	var_146_int = 0; // 0x2d7 MovI
	
Label_728:
	var_159_int = 1; // 0x2d8 PushI
	if(var_159_int == 0) goto Label_741; // 0x2d9 JumpB
	var_160_int = 1; // 0x2da PushI
	var_161_int = var_146_int + var_160_int; // 0x2db Add
	var_162_int = var_145_string + var_161_int; // 0x2dc Add
	HasProperty(var_162_int, var_147_bool); // 0x2dd ObjFunc
	var_163_bool = var_147_bool == 0; // 0x2df Not
	if(var_163_bool == 0) goto Label_738; // 0x2e0 JumpB
	goto Label_741; // 0x2e1 Jump
	
Label_741:
	var_164_bool = var_146_int == 0; // 0x2e5 Not
	if(var_164_bool == 0) goto Label_745; // 0x2e6 JumpB
	var_138_bool = 0; // 0x2e7 MovB
	return 10; // 0x2e8 Return
	
Label_745:
	var_148_int = 0; // 0x2e9 MovI
	var_165_int = 1; // 0x2ea PushI
	var_166_bool = var_146_int > var_165_int; // 0x2eb GT
	if(var_166_bool == 0) goto Label_751; // 0x2ec JumpB
	irand(var_148_int, var_146_int); // 0x2ed Func
	
Label_751:
	var_167_int = 1; // 0x2ef PushI
	var_168_int = var_148_int + var_167_int; // 0x2f0 Add
	var_169_int = var_145_string + var_168_int; // 0x2f1 Add
	GetProperty(var_169_int, var_149_string); // 0x2f2 ObjFunc
	var_170_bool = 0; var_171_string = ""; // 0x2f4 PushV
	var_171_string = var_149_string; // 0x2f5 Mov
	func_793(var_170_bool, var_171_string); // 0x2f6 NEW_2
	var_138_bool = var_170_bool; // 0x2f7 Mov
	return 10; // 0x2f9 Return
	
Label_738:
	var_172_int = 1; // 0x2e2 PushI
	var_146_int = var_146_int + var_172_int; // 0x2e3 Add2
	goto Label_728; // 0x2e4 Jump
}


func_849(var_85_string)
{
	var_85_string = "ui/NPC_Aglaja.png"; // 0x351 MovS
	return 0; // 0x352 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_191_object, var_192_object)
{
	var_0_object = var_192_object; // 0x52 TMov
	var_1_object = var_191_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_197_int = 1; // 0x55 PushI
	if(var_197_int == 0) goto Label_135; // 0x56 JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x57 PushV
	var_199_object = var_1_object; // 0x58 MovT
	func_861(var_199_object); // 0x59 NEW_2
	var_206_bool = var_198_bool == 0; // 0x5b Not
	if(var_206_bool == 0) goto Label_113; // 0x5c JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x5d PushV
	var_207_object = var_1_object; // 0x5e MovT
	var_208_object = var_0_object; // 0x5f MovT
	func_855(); // 0x60 NEW_2
	var_211_string = ""; // 0x62 PushV
	var_211_string = "Isee"; // 0x63 MovS
	func_165(var_192_object, var_211_string); // 0x64 NEW_2
	var_228_int = 530278; // 0x66 PushI
	SetMessage(var_228_int); // 0x67 TObjFunc
	ClearReplies(); // 0x69 TObjFunc
	var_229_int = 530919; // 0x6b PushI
	var_230_int = 32247; // 0x6c PushI
	var_231_int = 32246; // 0x6d PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6e TObjFunc
	goto Label_135; // 0x70 Jump
	
Label_135:
	var_232_bool = 0; // 0x87 PushV
	func_853(var_232_bool); // 0x88 NEW_2
	if(var_232_bool == 0) goto Label_150; // 0x8a JumpB
	
Label_139:
	lshWaitForAnimEnd(); // 0x8b Func
	var_233_string = var_3_string; // 0x8d PushT
	if(var_233_string == 0) goto Label_144; // 0x8e JumpB
	goto Label_149; // 0x8f Jump
	
Label_149:
	goto Label_164; // 0x95 Jump
	
Label_164:
	return 0; // 0xa4 Return
	
Label_144:
	var_234_string = ""; // 0x90 PushV
	var_234_string = var_2_object; // 0x91 MovT
	func_762(var_234_string); // 0x92 NEW_2
	goto Label_139; // 0x94 Jump
	
Label_150:
	var_245_string = "all"; // 0x96 PushS
	var_246_string = "idle"; // 0x97 PushS
	PlayAnimation(var_245_string, var_246_string); // 0x98 Func
	
Label_154:
	WaitForAnimEnd(); // 0x9a Func
	var_247_string = var_3_string; // 0x9c PushT
	if(var_247_string == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_159:
	var_248_string = "all"; // 0x9f PushS
	var_249_string = "idle"; // 0xa0 PushS
	PlayAnimation(var_248_string, var_249_string); // 0xa1 Func
	goto Label_154; // 0xa3 Jump
	
Label_113:
	var_250_string = ""; // 0x71 PushV
	var_250_string = "Neutral"; // 0x72 MovS
	func_165(var_192_object, var_250_string); // 0x73 NEW_2
	var_251_int = 530288; // 0x75 PushI
	SetMessage(var_251_int); // 0x76 TObjFunc
	ClearReplies(); // 0x78 TObjFunc
	var_252_int = 530289; // 0x7a PushI
	var_253_int = -1; // 0x7b PushI
	var_254_int = 31677; // 0x7c PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x7d TObjFunc
	var_255_int = 530918; // 0x7f PushI
	var_256_int = -1; // 0x80 PushI
	var_257_int = 32245; // 0x81 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x82 TObjFunc
	goto Label_135; // 0x84 Jump
}


func_851(var_86_string)
{
	var_86_string = "ui/NPC_Aglaja_b.png"; // 0x353 MovS
	return 0; // 0x354 Return
}


func_853(var_78_bool)
{
	var_78_bool = 1; // 0x355 MovB
	return 0; // 0x356 Return
}


func_534(var_6_bool)
{
	var_7_bool = 0; var_8_bool = 0; // 0x216 PushV
	IsLoaded(var_8_bool); // 0x217 Func
	var_6_bool = var_8_bool; // 0x219 Mov
	return 2; // 0x21a Return
}


func_855()
{
	var_209_string = "b9q03AglajaTalk"; // 0x358 PushS
	var_210_int = 1; // 0x359 PushI
	SetVariable(var_209_string, var_210_int); // 0x35a Func
	return 0; // 0x35c Return
}


func_793(var_130_bool, var_131_string)
{
	var_132_bool = 0; var_133_bool = 0; // 0x319 PushV
	var_134_bool = 0; // 0x31a PushV
	func_853(var_134_bool); // 0x31b NEW_2
	if(var_134_bool == 0) goto Label_806; // 0x31d JumpB
	lshHasSpeech(var_133_bool, var_131_string); // 0x31e Func
	var_135_bool = var_133_bool; // 0x320 Push
	if(var_135_bool == 0) goto Label_806; // 0x321 JumpB
	lshPlaySpeech(var_131_string); // 0x322 Func
	var_130_bool = 1; // 0x324 MovB
	return 2; // 0x325 Return
	
Label_806:
	var_130_bool = 0; // 0x326 MovB
	return 2; // 0x327 Return
}


func_539(var_36_bool, var_38_float)
{
	var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0; // 0x21b PushV
	GetPosition(var_49_cvector); // 0x21c ObjFunc
	GetEyesHeight(var_48_float); // 0x21e ObjFunc
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x220 PushE
	var_57_float = var_57_float + var_48_float; // 0x221 Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x222 PopE
	GetPosition(var_50_cvector); // 0x223 Func
	GetEyesHeight(var_48_float); // 0x225 Func
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x227 PushE
	var_58_float = var_58_float + var_48_float; // 0x228 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x229 PopE
	var_51_cvector = var_49_cvector - var_50_cvector; // 0x22a Sub2
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x22b PushE
	var_59_float = 0; // 0x22c MovI
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x22d PopE
	var_60_int = var_51_cvector | var_51_cvector; // 0x22e Or
	var_61_float = sqrt(var_60_int); // 0x22f Sqrt
	var_51_cvector = var_51_cvector / var_51_cvector; // 0x230 Div2
	var_52_cvector = -var_51_cvector; // 0x231 Neg2
	var_62_float = var_51_cvector * var_38_float; // 0x232 Mult
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x233 PushV
	var_65_cvector = CVector(0.0, 1.0, 0.0); // 0x234 PushVec
	var_64_cvector = var_52_cvector ^ var_65_cvector; // 0x235 Xor2
	func_821(var_63_cvector, var_64_cvector); // 0x236 NEW_2
	var_71_int = 25; // 0x238 PushI
	var_72_float = var_63_cvector * var_71_int; // 0x239 Mult
	var_73_int = var_62_float + var_72_float; // 0x23a Add
	var_74_cvector = CVector(0.0, 10.0, 0.0); // 0x23b PushVec
	var_53_cvector = var_73_int - var_74_cvector; // 0x23c Sub2
	var_54_cvector = var_50_cvector + var_53_cvector; // 0x23d Add2
	IsOverrideActive(var_55_bool); // 0x23e Func
	var_75_bool = var_55_bool; // 0x240 Push
	if(var_75_bool == 0) goto Label_580; // 0x241 JumpB
	var_36_bool = 0; // 0x242 MovB
	return 18; // 0x243 Return
	
Label_580:
	StopWorld(); // 0x244 Func
	CameraTransit(var_54_cvector, var_52_cvector); // 0x246 Func
	var_76_float = GetByIndex(var_53_cvector, 0); // 0x248 PushE
	var_77_float = GetByIndex(var_53_cvector, 2); // 0x249 PushE
	Rotate(var_76_float, var_77_float); // 0x24a Func
	var_78_bool = 0; // 0x24c PushV
	func_853(var_78_bool); // 0x24d NEW_2
	if(var_78_bool == 0) goto Label_593; // 0x24f JumpB
	goto Label_601; // 0x250 Jump
	
Label_601:
	CameraWaitForPlayFinish(); // 0x259 Func
	ResumeWorld(); // 0x25b Func
	var_36_bool = 1; // 0x25d MovB
	return 18; // 0x25e Return
	
Label_593:
	var_79_string = "head"; // 0x251 PushS
	HasAnimationTrack(var_56_bool, var_79_string); // 0x252 Func
	var_80_bool = var_56_bool; // 0x254 Push
	if(var_80_bool == 0) goto Label_601; // 0x255 JumpB
	var_81_string = "head"; // 0x256 PushS
	LookAsyncCamera(var_81_string); // 0x257 Func
}


func_861(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x35e PushV
	var_201_string = "b9q03AglajaTalk"; // 0x35f MovS
	func_831(var_200_int, var_201_string); // 0x360 NEW_2
	var_204_int = 0; // 0x362 PushI
	var_205_bool = var_200_int != var_204_int; // 0x363 Neq
	if(var_205_bool == 0) goto Label_871; // 0x364 JumpB
	var_198_bool = 1; // 0x365 MovB
	return 0; // 0x366 Return
	
Label_871:
	var_198_bool = 0; // 0x367 MovB
	return 0; // 0x368 Return
}


func_607()
{
	var_260_bool = 0; var_261_bool = 0; // 0x25f PushV
	CameraSwitchToNormal(); // 0x260 Func
	var_262_bool = 0; // 0x262 PushV
	func_853(var_262_bool); // 0x263 NEW_2
	if(var_262_bool == 0) goto Label_615; // 0x265 JumpB
	goto Label_623; // 0x266 Jump
	
Label_623:
	return 2; // 0x26f Return
	
Label_615:
	var_263_string = "head"; // 0x267 PushS
	HasAnimationTrack(var_261_bool, var_263_string); // 0x268 Func
	var_264_bool = var_261_bool; // 0x26a Push
	if(var_264_bool == 0) goto Label_623; // 0x26b JumpB
	var_265_string = "head"; // 0x26c PushS
	UnlookAsync(var_265_string); // 0x26d Func
}


func_165(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0xa6 PushV
	func_853(var_212_bool); // 0xa7 NEW_2
	var_213_bool = var_212_bool == 0; // 0xa9 Not
	if(var_213_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_214_bool = var_211_string == var_2_object; // 0xac Eq
	if(var_214_bool == 0) goto Label_175; // 0xad JumpB
	return 0; // 0xae Return
	
Label_175:
	var_215_string = ""; var_216_bool = 0; // 0xaf PushV
	var_215_string = var_211_string; // 0xb0 Mov
	var_217_string = ""; // 0xb1 PushS
	var_218_bool = var_211_string == var_217_string; // 0xb2 Eq
	if(var_218_bool == 0) goto Label_182; // 0xb3 JumpB
	var_216_bool = 0; // 0xb4 MovB
	goto Label_183; // 0xb5 Jump
	
Label_183:
	func_778(var_215_string, var_216_bool); // 0xb7 NEW_2
	var_2_object = var_211_string; // 0xb9 TMov
	return 0; // 0xba Return
	
Label_182:
	var_216_bool = 1; // 0xb6 MovB
}


func_808()
{
	var_9_bool = 0; // 0x328 PushV
	func_853(var_9_bool); // 0x329 NEW_2
	if(var_9_bool == 0) goto Label_814; // 0x32b JumpB
	lshStopSpeech(); // 0x32c Func
	
Label_814:
	return 0; // 0x32e Return
}


func_873(var_87_int)
{
	var_88_int = 0; var_89_int = 0; // 0x369 PushV
	var_90_string = "branch"; // 0x36a PushS
	GetVariable(var_90_string, var_89_int); // 0x36b Func
	var_91_int = 0; // 0x36d PushI
	var_92_bool = var_89_int == var_91_int; // 0x36e Eq
	if(var_92_bool == 0) goto Label_883; // 0x36f JumpB
	var_87_int = 1; // 0x370 MovI
	return 2; // 0x371 Return
	
Label_883:
	var_93_int = 1; // 0x373 PushI
	var_94_bool = var_89_int == var_93_int; // 0x374 Eq
	if(var_94_bool == 0) goto Label_888; // 0x375 JumpB
	var_87_int = 2; // 0x376 MovI
	return 2; // 0x377 Return
	
Label_888:
	var_87_int = 3; // 0x378 MovI
	return 2; // 0x379 Return
}


func_682(var_107_bool)
{
	var_109_string = ""; var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_string = ""; var_114_string = ""; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_string = ""; // 0x2aa PushV
	var_114_string = "c"; // 0x2ab MovS
	var_115_int = 0; // 0x2ac MovI
	
Label_685:
	var_119_int = 1; // 0x2ad PushI
	if(var_119_int == 0) goto Label_698; // 0x2ae JumpB
	var_120_int = 1; // 0x2af PushI
	var_121_int = var_115_int + var_120_int; // 0x2b0 Add
	var_122_int = var_114_string + var_121_int; // 0x2b1 Add
	HasProperty(var_122_int, var_116_bool); // 0x2b2 ObjFunc
	var_123_bool = var_116_bool == 0; // 0x2b4 Not
	if(var_123_bool == 0) goto Label_695; // 0x2b5 JumpB
	goto Label_698; // 0x2b6 Jump
	
Label_698:
	var_124_bool = var_115_int == 0; // 0x2ba Not
	if(var_124_bool == 0) goto Label_702; // 0x2bb JumpB
	var_107_bool = 0; // 0x2bc MovB
	return 10; // 0x2bd Return
	
Label_702:
	var_117_int = 0; // 0x2be MovI
	var_125_int = 1; // 0x2bf PushI
	var_126_bool = var_115_int > var_125_int; // 0x2c0 GT
	if(var_126_bool == 0) goto Label_708; // 0x2c1 JumpB
	irand(var_117_int, var_115_int); // 0x2c2 Func
	
Label_708:
	var_127_int = 1; // 0x2c4 PushI
	var_128_int = var_117_int + var_127_int; // 0x2c5 Add
	var_129_int = var_114_string + var_128_int; // 0x2c6 Add
	GetProperty(var_129_int, var_118_string); // 0x2c7 ObjFunc
	var_130_bool = 0; var_131_string = ""; // 0x2c9 PushV
	var_131_string = var_118_string; // 0x2ca Mov
	func_793(var_130_bool, var_131_string); // 0x2cb NEW_2
	var_107_bool = var_130_bool; // 0x2cc Mov
	return 10; // 0x2ce Return
	
Label_695:
	var_136_int = 1; // 0x2b7 PushI
	var_115_int = var_115_int + var_136_int; // 0x2b8 Add2
	goto Label_685; // 0x2b9 Jump
}


func_815(var_98_object)
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x32f PushV
	self(var_100_object); // 0x330 Func
	var_98_object = var_100_object; // 0x332 Mov
	return 2; // 0x333 Return
}


func_624(var_96_bool, var_97_object)
{
	var_101_int = 0; var_102_int = 0; var_103_int = 0; var_104_int = 0; // 0x270 PushV
	var_105_string = "voice_common"; // 0x271 PushS
	GetVariable(var_105_string, var_103_int); // 0x272 Func
	var_106_int = var_103_int; // 0x274 Push
	if(var_106_int == 0) goto Label_662; // 0x275 JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x276 PushV
	var_108_object = var_97_object; // 0x277 Mov
	func_682(var_108_object); // 0x278 NEW_2
	var_137_bool = var_107_bool == 0; // 0x27a Not
	if(var_137_bool == 0) goto Label_644; // 0x27b JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0x27c PushV
	var_139_object = var_97_object; // 0x27d Mov
	func_719(var_139_object); // 0x27e NEW_2
	var_173_bool = var_138_bool == 0; // 0x280 Not
	if(var_173_bool == 0) goto Label_644; // 0x281 JumpB
	var_96_bool = 0; // 0x282 MovB
	return 4; // 0x283 Return
	
Label_644:
	var_174_int = 2; // 0x284 PushI
	irand(var_104_int, var_174_int); // 0x285 Func
	var_175_int = var_104_int; // 0x287 Push
	if(var_175_int == 0) goto Label_657; // 0x288 JumpB
	var_176_string = "voice_common"; // 0x289 PushS
	var_177_int = 1; // 0x28a PushI
	var_178_int = var_103_int + var_177_int; // 0x28b Add
	var_179_int = 3; // 0x28c PushI
	var_180_int = var_178_int / var_179_int; // 0x28d Mod
	SetVariable(var_176_string, var_180_int); // 0x28e Func
	goto Label_661; // 0x290 Jump
	
Label_661:
	goto Label_680; // 0x295 Jump
	
Label_680:
	var_96_bool = 1; // 0x2a8 MovB
	return 4; // 0x2a9 Return
	
Label_657:
	var_181_string = "voice_common"; // 0x291 PushS
	var_182_int = 0; // 0x292 PushI
	SetVariable(var_181_string, var_182_int); // 0x293 Func
	
Label_662:
	var_183_bool = 0; var_184_object = Obj(); // 0x296 PushV
	var_184_object = var_97_object; // 0x297 Mov
	func_719(var_184_object); // 0x298 NEW_2
	var_185_bool = var_183_bool == 0; // 0x29a Not
	if(var_185_bool == 0) goto Label_676; // 0x29b JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x29c PushV
	var_187_object = var_97_object; // 0x29d Mov
	func_682(var_187_object); // 0x29e NEW_2
	var_188_bool = var_186_bool == 0; // 0x2a0 Not
	if(var_188_bool == 0) goto Label_676; // 0x2a1 JumpB
	var_96_bool = 0; // 0x2a2 MovB
	return 4; // 0x2a3 Return
	
Label_676:
	var_189_string = "voice_common"; // 0x2a4 PushS
	var_190_int = 1; // 0x2a5 PushI
	SetVariable(var_189_string, var_190_int); // 0x2a6 Func
}


func_437(var_24_object)
{
	var_25_int = 0; var_26_object = Obj(); // 0x1b6 PushV
	var_26_object = var_24_object; // 0x1b7 Mov
	TaskCall(0); // 0x1b8 TaskCall
	func_0(var_27_object, var_25_int, var_26_object); // 0x1b9 NEW_2
	TaskReturn(); // 0x1ba TaskReturn
	return 0; // 0x1bc Return
}


func_821(var_63_cvector, var_64_cvector)
{
	var_66_float = 0; var_67_float = 0; // 0x335 PushV
	var_68_int = var_64_cvector | var_64_cvector; // 0x336 Or
	var_67_float = sqrt(var_68_int); // 0x337 Sqrt2
	var_69_float = 0.0; // 0x338 PushF
	var_70_bool = var_67_float < var_69_float; // 0x339 LT
	if(var_70_bool == 0) goto Label_829; // 0x33a JumpB
	var_63_cvector = CVector(0.0, 0.0, 0.0); // 0x33b MovV
	return 2; // 0x33c Return
	
Label_829:
	var_63_cvector = var_64_cvector / var_64_cvector; // 0x33d Div2
	return 2; // 0x33e Return
}


func_762(var_10_string)
{
	var_11_bool = 0; var_12_float = 0; var_13_float = 0; var_14_bool = 0; var_15_float = 0; var_16_float = 0; // 0x2fa PushV
	lshHasAnimation(var_14_bool, var_10_string); // 0x2fb Func
	var_17_bool = var_14_bool; // 0x2fd Push
	if(var_17_bool == 0) goto Label_773; // 0x2fe JumpB
	lshGetAnimTimes(var_10_string, var_15_float, var_16_float); // 0x2ff Func
	var_18_bool = 0; // 0x301 PushB
	lshPlayAnimation(var_15_float, var_16_float, var_18_bool); // 0x302 Func
	goto Label_777; // 0x304 Jump
	
Label_777:
	return 6; // 0x309 Return
	
Label_773:
	var_19_string = "Can't find lsh animation : "; // 0x305 PushS
	var_20_int = var_19_string + var_10_string; // 0x306 Add
	Trace(var_20_int); // 0x307 Func
}


func_831(var_200_int, var_201_string)
{
	var_202_int = 0; var_203_int = 0; // 0x33f PushV
	GetVariable(var_201_string, var_203_int); // 0x340 Func
	var_200_int = var_203_int; // 0x342 Mov
	return 2; // 0x343 Return
}


