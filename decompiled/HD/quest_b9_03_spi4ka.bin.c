task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xbb PushI
	if(var_9_int == 0) goto Label_413; // 0xbc JumpB
	func_1018(); // 0xbe NEW_2
	var_11_int = 31724; // 0xc0 PushI
	var_12_bool = var_7_cvector == var_11_int; // 0xc1 Eq
	if(var_12_bool == 0) goto Label_240; // 0xc2 JumpB
	var_13_bool = 0; var_14_object = Obj(); // 0xc3 PushV
	var_14_object = var_1_object; // 0xc4 MovT
	func_1095(var_14_object); // 0xc5 NEW_2
	if(var_13_bool == 0) goto Label_225; // 0xc7 JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xc8 PushV
	var_21_object = var_1_object; // 0xc9 MovT
	var_22_object = var_0_object; // 0xca MovT
	func_1089(); // 0xcb NEW_2
	var_25_string = ""; // 0xcd PushV
	var_25_string = "Azart"; // 0xce MovS
	func_164(var_8_bool, var_25_string); // 0xcf NEW_2
	var_42_int = 530337; // 0xd1 PushI
	SetMessage(var_42_int); // 0xd2 TObjFunc
	ClearReplies(); // 0xd4 TObjFunc
	var_43_int = 530338; // 0xd6 PushI
	var_44_int = 32415; // 0xd7 PushI
	var_45_int = 31725; // 0xd8 PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xd9 TObjFunc
	var_46_int = 531096; // 0xdb PushI
	var_47_int = 32418; // 0xdc PushI
	var_48_int = 32414; // 0xdd PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xde TObjFunc
	return 0; // 0xe0 Return
	
Label_225:
	var_49_string = ""; // 0xe1 PushV
	var_49_string = "Neutral"; // 0xe2 MovS
	func_164(var_8_bool, var_49_string); // 0xe3 NEW_2
	var_50_int = 530341; // 0xe5 PushI
	SetMessage(var_50_int); // 0xe6 TObjFunc
	ClearReplies(); // 0xe8 TObjFunc
	var_51_int = 530342; // 0xea PushI
	var_52_int = -1; // 0xeb PushI
	var_53_int = 31729; // 0xec PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xed TObjFunc
	return 0; // 0xef Return
	
Label_240:
	var_54_int = 32418; // 0xf0 PushI
	var_55_bool = var_7_cvector == var_54_int; // 0xf1 Eq
	if(var_55_bool == 0) goto Label_263; // 0xf2 JumpB
	var_56_string = ""; // 0xf3 PushV
	var_56_string = "Azart"; // 0xf4 MovS
	func_164(var_8_bool, var_56_string); // 0xf5 NEW_2
	var_57_int = 531100; // 0xf7 PushI
	SetMessage(var_57_int); // 0xf8 TObjFunc
	ClearReplies(); // 0xfa TObjFunc
	var_58_int = 531101; // 0xfc PushI
	var_59_int = -1; // 0xfd PushI
	var_60_int = 32419; // 0xfe PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xff TObjFunc
	var_61_int = 531102; // 0x101 PushI
	var_62_int = 31726; // 0x102 PushI
	var_63_int = 32420; // 0x103 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x104 TObjFunc
	return 0; // 0x106 Return
	
Label_263:
	var_64_int = 31726; // 0x107 PushI
	var_65_bool = var_7_cvector == var_64_int; // 0x108 Eq
	if(var_65_bool == 0) goto Label_286; // 0x109 JumpB
	var_66_string = ""; // 0x10a PushV
	var_66_string = "Serious"; // 0x10b MovS
	func_164(var_8_bool, var_66_string); // 0x10c NEW_2
	var_67_int = 530339; // 0x10e PushI
	SetMessage(var_67_int); // 0x10f TObjFunc
	ClearReplies(); // 0x111 TObjFunc
	var_68_int = 531202; // 0x113 PushI
	var_69_int = 32518; // 0x114 PushI
	var_70_int = 32511; // 0x115 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x116 TObjFunc
	var_71_int = 530340; // 0x118 PushI
	var_72_int = -1; // 0x119 PushI
	var_73_int = 31727; // 0x11a PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x11b TObjFunc
	return 0; // 0x11d Return
	
Label_286:
	var_74_int = 32518; // 0x11e PushI
	var_75_bool = var_7_cvector == var_74_int; // 0x11f Eq
	if(var_75_bool == 0) goto Label_309; // 0x120 JumpB
	var_76_string = ""; // 0x121 PushV
	var_76_string = "Serious"; // 0x122 MovS
	func_164(var_8_bool, var_76_string); // 0x123 NEW_2
	var_77_int = 531208; // 0x125 PushI
	SetMessage(var_77_int); // 0x126 TObjFunc
	ClearReplies(); // 0x128 TObjFunc
	var_78_int = 531209; // 0x12a PushI
	var_79_int = -1; // 0x12b PushI
	var_80_int = 32519; // 0x12c PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x12d TObjFunc
	var_81_int = 531210; // 0x12f PushI
	var_82_int = 32521; // 0x130 PushI
	var_83_int = 32520; // 0x131 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_84_int = 32521; // 0x135 PushI
	var_85_bool = var_7_cvector == var_84_int; // 0x136 Eq
	if(var_85_bool == 0) goto Label_332; // 0x137 JumpB
	var_86_string = ""; // 0x138 PushV
	var_86_string = "Fear"; // 0x139 MovS
	func_164(var_8_bool, var_86_string); // 0x13a NEW_2
	var_87_int = 531211; // 0x13c PushI
	SetMessage(var_87_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_88_int = 531212; // 0x141 PushI
	var_89_int = -1; // 0x142 PushI
	var_90_int = 32522; // 0x143 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x144 TObjFunc
	var_91_int = 531213; // 0x146 PushI
	var_92_int = -1; // 0x147 PushI
	var_93_int = 32523; // 0x148 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_94_int = 32415; // 0x14c PushI
	var_95_bool = var_7_cvector == var_94_int; // 0x14d Eq
	if(var_95_bool == 0) goto Label_355; // 0x14e JumpB
	var_96_string = ""; // 0x14f PushV
	var_96_string = "Azart"; // 0x150 MovS
	func_164(var_8_bool, var_96_string); // 0x151 NEW_2
	var_97_int = 531097; // 0x153 PushI
	SetMessage(var_97_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_98_int = 531098; // 0x158 PushI
	var_99_int = 32417; // 0x159 PushI
	var_100_int = 32416; // 0x15a PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x15b TObjFunc
	var_101_int = 531207; // 0x15d PushI
	var_102_int = 32417; // 0x15e PushI
	var_103_int = 32516; // 0x15f PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_104_int = 32417; // 0x163 PushI
	var_105_bool = var_7_cvector == var_104_int; // 0x164 Eq
	if(var_105_bool == 0) goto Label_378; // 0x165 JumpB
	var_106_string = ""; // 0x166 PushV
	var_106_string = "Secret"; // 0x167 MovS
	func_164(var_8_bool, var_106_string); // 0x168 NEW_2
	var_107_int = 531099; // 0x16a PushI
	SetMessage(var_107_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_108_int = 531103; // 0x16f PushI
	var_109_int = 32512; // 0x170 PushI
	var_110_int = 32421; // 0x171 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x172 TObjFunc
	var_111_int = 531206; // 0x174 PushI
	var_112_int = -1; // 0x175 PushI
	var_113_int = 32515; // 0x176 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x177 TObjFunc
	return 0; // 0x179 Return
	
Label_378:
	var_114_int = 32512; // 0x17a PushI
	var_115_bool = var_7_cvector == var_114_int; // 0x17b Eq
	if(var_115_bool == 0) goto Label_401; // 0x17c JumpB
	var_116_string = ""; // 0x17d PushV
	var_116_string = "Secret"; // 0x17e MovS
	func_164(var_8_bool, var_116_string); // 0x17f NEW_2
	var_117_int = 531203; // 0x181 PushI
	SetMessage(var_117_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_118_int = 531204; // 0x186 PushI
	var_119_int = -1; // 0x187 PushI
	var_120_int = 32513; // 0x188 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x189 TObjFunc
	var_121_int = 531205; // 0x18b PushI
	var_122_int = -1; // 0x18c PushI
	var_123_int = 32514; // 0x18d PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_3_string = 1; // 0x191 TMovB
	var_124_bool = 0; // 0x192 PushV
	func_1087(var_124_bool); // 0x193 NEW_2
	if(var_124_bool == 0) goto Label_409; // 0x195 JumpB
	lshStopAnimation(); // 0x196 Func
	goto Label_411; // 0x198 Jump
	
Label_411:
	return 0; // 0x19b Return
	
Label_409:
	StopAnimation(); // 0x199 Func
	
Label_413:
	return 0; // 0x19d Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1aa PushV
	var_10_string = "cleanup"; // 0x1ab PushS
	var_11_bool = var_7_string == var_10_string; // 0x1ac Eq
	if(var_11_bool == 0) goto Label_441; // 0x1ad JumpB
	var_1_object = 1; // 0x1ae TMovB
	IsLoaded(var_9_bool); // 0x1af Func
	var_12_bool = var_9_bool == 0; // 0x1b1 Not
	if(var_12_bool == 0) goto Label_440; // 0x1b2 JumpB
	var_13_object = Obj(); // 0x1b3 PushV
	func_1025(var_13_object); // 0x1b4 NEW_2
	RemoveActor(var_13_object); // 0x1b6 Func
	
Label_440:
	goto Label_445; // 0x1b8 Jump
	
Label_445:
	return 2; // 0x1bd Return
	
Label_441:
	var_16_string = "restore"; // 0x1b9 PushS
	var_17_bool = var_7_string == var_16_string; // 0x1ba Eq
	if(var_17_bool == 0) goto Label_445; // 0x1bb JumpB
	var_1_object = 0; // 0x1bc TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x1be PushT
	if(var_7_object == 0) goto Label_455; // 0x1bf JumpB
	var_8_object = Obj(); // 0x1c0 PushV
	func_1025(var_8_object); // 0x1c1 NEW_2
	RemoveActor(var_8_object); // 0x1c3 Func
	Hold(); // 0x1c5 Func
	
Label_455:
	func_570(); // 0x1c8 NEW_2
	return 0; // 0x1ca Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_585(); // 0x1cc NEW_2
	return 0; // 0x1ce Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x215 PushI
	var_9_bool = var_7_int == var_8_int; // 0x216 Eq
	if(var_9_bool == 0) goto Label_569; // 0x217 JumpB
	func_528(); // 0x219 NEW_2
	var_11_bool = 0; // 0x21b PushV
	var_11_bool = 0; // 0x21c MovB
	var_12_bool = 0; // 0x21d PushV
	func_742(var_12_bool); // 0x21e NEW_2
	if(var_12_bool == 0) goto Label_550; // 0x220 JumpB
	var_15_bool = 0; // 0x221 PushV
	func_497(var_15_bool); // 0x222 NEW_2
	if(var_15_bool == 0) goto Label_550; // 0x224 JumpB
	var_11_bool = 1; // 0x225 MovB
	
Label_550:
	if(var_11_bool == 0) goto Label_563; // 0x226 JumpB
	var_32_bool = 0; // 0x227 PushV
	func_477(var_32_bool); // 0x228 NEW_2
	if(var_32_bool == 0) goto Label_562; // 0x22a JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x22b PushV
	var_53_object = Obj(); // 0x22c PushV
	func_1025(var_53_object); // 0x22d NEW_2
	var_52_object = var_53_object; // 0x22e Mov
	func_892(var_52_object); // 0x230 NEW_2
	
Label_562:
	goto Label_569; // 0x232 Jump
	
Label_569:
	return 0; // 0x239 Return
	
Label_563:
	func_492(var_7_int); // 0x234 NEW_2
	func_519(); // 0x237 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x257 Push
	if(var_8_bool == 0) goto Label_605; // 0x258 JumpB
	func_519(); // 0x25a NEW_2
	goto Label_609; // 0x25c Jump
	
Label_609:
	return 0; // 0x261 Return
	
Label_605:
	var_14_string = ""; // 0x25d PushV
	var_14_string = "Neutral"; // 0x25e MovS
	func_972(var_14_string); // 0x25f NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x262 PushV
	IsOverrideActive(var_9_bool); // 0x263 Func
	var_10_bool = var_9_bool == 0; // 0x265 Not
	if(var_10_bool == 0) goto Label_638; // 0x266 JumpB
	EventDisable(0); // 0x267 EventDisable
	func_710(); // 0x269 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x26b PushV
	var_12_object = var_7_object; // 0x26c Mov
	func_733(var_12_object); // 0x26d NEW_2
	EventEnable(0); // 0x26f EventEnable
	var_25_object = Obj(); // 0x270 PushV
	var_25_object = var_7_object; // 0x271 Mov
	func_414(var_25_object); // 0x272 NEW_2
	var_268_string = ""; // 0x274 PushV
	var_268_string = "Neutral"; // 0x275 MovS
	func_972(var_268_string); // 0x276 NEW_2
	func_528(); // 0x279 NEW_2
	func_519(); // 0x27c NEW_2
	
Label_638:
	return 2; // 0x27e Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_463(var_6_bool); // 0x1a7 NEW_2
	return 0; // 0x1a9 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_747(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1081(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1079(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1083(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1085(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1107(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_1025(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_834(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_259_bool = var_36_bool == 0; // 0x3f Not
	if(var_259_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_260_object = Obj(); // 0x46 PushV
	var_260_object = var_27_object; // 0x47 Mov
	func_816(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1025(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x401 PushV
	self(var_102_object); // 0x402 Func
	var_100_object = var_102_object; // 0x404 Mov
	return 2; // 0x405 Return
}


func_1031(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x407 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x408 Or
	var_68_float = sqrt(var_69_int); // 0x409 Sqrt2
	var_70_float = 0.0; // 0x40a PushF
	var_71_bool = var_68_float < var_70_float; // 0x40b LT
	if(var_71_bool == 0) goto Label_1039; // 0x40c JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x40d MovV
	return 2; // 0x40e Return
	
Label_1039:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x40f Div2
	return 2; // 0x410 Return
}


func_519()
{
	var_270_float = 0; var_271_float = 0; // 0x207 PushV
	var_272_int = 8; // 0x208 PushI
	var_273_int = 16; // 0x209 PushI
	rand(var_271_float, var_272_int, var_273_int); // 0x20a Func
	var_274_int = 10; // 0x20c PushI
	SetTimer(var_274_int, var_271_float); // 0x20d Func
	return 2; // 0x20f Return
}


func_528()
{
	var_269_int = 10; // 0x210 PushI
	KillTimer(var_269_int); // 0x211 Func
	return 0; // 0x213 Return
}


func_1041(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x411 PushV
	GetVariable(var_203_string, var_205_int); // 0x412 Func
	var_202_int = var_205_int; // 0x414 Mov
	return 2; // 0x415 Return
}


func_1046(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x416 PushV
	GetGameTime(var_155_float); // 0x417 Func
	var_156_int = 1; // 0x419 PushI
	var_157_int = 0; // 0x41a PushV
	var_158_int = 24; // 0x41b PushI
	var_157_int = var_155_float / var_155_float; // 0x41c Div2
	var_153_int = var_156_int + var_157_int; // 0x41d Add2
	return 2; // 0x41e Return
}


func_414(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x19f PushV
	var_27_object = var_25_object; // 0x1a0 Mov
	TaskCall(0); // 0x1a1 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x1a2 NEW_2
	TaskReturn(); // 0x1a3 TaskReturn
	return 0; // 0x1a5 Return
}


func_1055(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x41f PushV
	var_34_string = "idle"; // 0x420 MovS
	var_35_int = var_32_int; // 0x421 Push
	if(var_35_int == 0) goto Label_1060; // 0x422 JumpB
	var_34_string = var_34_string + var_32_int; // 0x423 Add2
	
Label_1060:
	var_31_string = var_34_string; // 0x424 Mov
	return 2; // 0x425 Return
}


func_929(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x3a1 PushV
	var_152_string = "d"; // 0x3a2 PushS
	var_153_int = 0; // 0x3a3 PushV
	func_1046(var_153_int); // 0x3a4 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x3a6 Add
	var_160_string = "m"; // 0x3a7 PushS
	var_147_string = var_159_int + var_160_string; // 0x3a8 Add2
	var_148_int = 0; // 0x3a9 MovI
	
Label_938:
	var_161_int = 1; // 0x3aa PushI
	if(var_161_int == 0) goto Label_951; // 0x3ab JumpB
	var_162_int = 1; // 0x3ac PushI
	var_163_int = var_148_int + var_162_int; // 0x3ad Add
	var_164_int = var_147_string + var_163_int; // 0x3ae Add
	HasProperty(var_164_int, var_149_bool); // 0x3af ObjFunc
	var_165_bool = var_149_bool == 0; // 0x3b1 Not
	if(var_165_bool == 0) goto Label_948; // 0x3b2 JumpB
	goto Label_951; // 0x3b3 Jump
	
Label_951:
	var_166_bool = var_148_int == 0; // 0x3b7 Not
	if(var_166_bool == 0) goto Label_955; // 0x3b8 JumpB
	var_140_bool = 0; // 0x3b9 MovB
	return 10; // 0x3ba Return
	
Label_955:
	var_150_int = 0; // 0x3bb MovI
	var_167_int = 1; // 0x3bc PushI
	var_168_bool = var_148_int > var_167_int; // 0x3bd GT
	if(var_168_bool == 0) goto Label_961; // 0x3be JumpB
	irand(var_150_int, var_148_int); // 0x3bf Func
	
Label_961:
	var_169_int = 1; // 0x3c1 PushI
	var_170_int = var_150_int + var_169_int; // 0x3c2 Add
	var_171_int = var_147_string + var_170_int; // 0x3c3 Add
	GetProperty(var_171_int, var_151_string); // 0x3c4 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x3c6 PushV
	var_173_string = var_151_string; // 0x3c7 Mov
	func_1003(var_172_bool, var_173_string); // 0x3c8 NEW_2
	var_140_bool = var_172_bool; // 0x3c9 Mov
	return 10; // 0x3cb Return
	
Label_948:
	var_174_int = 1; // 0x3b4 PushI
	var_148_int = var_148_int + var_174_int; // 0x3b5 Add2
	goto Label_938; // 0x3b6 Jump
}


func_164(var_2_object, var_212_string)
{
	var_213_bool = 0; // 0xa5 PushV
	func_1087(var_213_bool); // 0xa6 NEW_2
	var_214_bool = var_213_bool == 0; // 0xa8 Not
	if(var_214_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_215_bool = var_212_string == var_2_object; // 0xab Eq
	if(var_215_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_216_string = ""; var_217_bool = 0; // 0xae PushV
	var_216_string = var_212_string; // 0xaf Mov
	var_218_string = ""; // 0xb0 PushS
	var_219_bool = var_212_string == var_218_string; // 0xb1 Eq
	if(var_219_bool == 0) goto Label_181; // 0xb2 JumpB
	var_217_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_988(var_216_string, var_217_bool); // 0xb6 NEW_2
	var_2_object = var_212_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_217_bool = 1; // 0xb5 MovB
}


func_1062(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x426 PushV
	var_28_int = 0; // 0x427 MovI
	
Label_1064:
	var_30_string = "all"; // 0x428 PushS
	var_31_string = ""; var_32_int = 0; // 0x429 PushV
	var_32_int = var_28_int; // 0x42a Mov
	func_1055(var_31_string, var_32_int); // 0x42b NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x42d Func
	var_36_bool = var_29_bool == 0; // 0x42f Not
	if(var_36_bool == 0) goto Label_1074; // 0x430 JumpB
	goto Label_1077; // 0x431 Jump
	
Label_1077:
	var_25_int = var_28_int; // 0x435 Mov
	return 4; // 0x436 Return
	
Label_1074:
	var_37_int = 1; // 0x432 PushI
	var_28_int = var_28_int + var_37_int; // 0x433 Add2
	goto Label_1064; // 0x434 Jump
}


func_816()
{
	var_261_bool = 0; var_262_bool = 0; // 0x330 PushV
	var_263_bool = 1; // 0x331 PushB
	CameraSwitchToNormal(var_263_bool); // 0x332 Func
	var_264_bool = 0; // 0x334 PushV
	func_1087(var_264_bool); // 0x335 NEW_2
	if(var_264_bool == 0) goto Label_825; // 0x337 JumpB
	goto Label_833; // 0x338 Jump
	
Label_833:
	return 2; // 0x341 Return
	
Label_825:
	var_265_string = "head"; // 0x339 PushS
	HasAnimationTrack(var_262_bool, var_265_string); // 0x33a Func
	var_266_bool = var_262_bool; // 0x33c Push
	if(var_266_bool == 0) goto Label_833; // 0x33d JumpB
	var_267_string = "head"; // 0x33e PushS
	UnlookAsync(var_267_string); // 0x33f Func
}


func_1079(var_86_int)
{
	var_86_int = 515552; // 0x437 MovI
	return 0; // 0x438 Return
}


func_1081(var_85_int)
{
	var_85_int = 502877; // 0x439 MovI
	return 0; // 0x43a Return
}


func_570()
{
	func_710(); // 0x23b NEW_2
	func_528(); // 0x23e NEW_2
	lshStopSpeech(); // 0x240 Func
	lshStopAnimation(); // 0x242 Func
	StopAsync(); // 0x244 Func
	Hold(); // 0x246 Func
	return 0; // 0x248 Return
}


func_1083(var_87_string)
{
	var_87_string = "ui/NPC_Spi4ka.png"; // 0x43b MovS
	return 0; // 0x43c Return
}


func_1085(var_88_string)
{
	var_88_string = "ui/NPC_Spi4ka_b.png"; // 0x43d MovS
	return 0; // 0x43e Return
}


func_1087(var_80_bool)
{
	var_80_bool = 1; // 0x43f MovB
	return 0; // 0x440 Return
}


func_1089()
{
	var_210_string = "oob9Spi4ka_Kapella1"; // 0x442 PushS
	var_211_int = 1; // 0x443 PushI
	SetVariable(var_210_string, var_211_int); // 0x444 Func
	return 0; // 0x446 Return
}


func_834(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x342 PushV
	var_107_string = "voice_common"; // 0x343 PushS
	GetVariable(var_107_string, var_105_int); // 0x344 Func
	var_108_int = var_105_int; // 0x346 Push
	if(var_108_int == 0) goto Label_872; // 0x347 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x348 PushV
	var_110_object = var_99_object; // 0x349 Mov
	func_892(var_110_object); // 0x34a NEW_2
	var_139_bool = var_109_bool == 0; // 0x34c Not
	if(var_139_bool == 0) goto Label_854; // 0x34d JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x34e PushV
	var_141_object = var_99_object; // 0x34f Mov
	func_929(var_141_object); // 0x350 NEW_2
	var_175_bool = var_140_bool == 0; // 0x352 Not
	if(var_175_bool == 0) goto Label_854; // 0x353 JumpB
	var_98_bool = 0; // 0x354 MovB
	return 4; // 0x355 Return
	
Label_854:
	var_176_int = 2; // 0x356 PushI
	irand(var_106_int, var_176_int); // 0x357 Func
	var_177_int = var_106_int; // 0x359 Push
	if(var_177_int == 0) goto Label_867; // 0x35a JumpB
	var_178_string = "voice_common"; // 0x35b PushS
	var_179_int = 1; // 0x35c PushI
	var_180_int = var_105_int + var_179_int; // 0x35d Add
	var_181_int = 3; // 0x35e PushI
	var_182_int = var_180_int / var_181_int; // 0x35f Mod
	SetVariable(var_178_string, var_182_int); // 0x360 Func
	goto Label_871; // 0x362 Jump
	
Label_871:
	goto Label_890; // 0x367 Jump
	
Label_890:
	var_98_bool = 1; // 0x37a MovB
	return 4; // 0x37b Return
	
Label_867:
	var_183_string = "voice_common"; // 0x363 PushS
	var_184_int = 0; // 0x364 PushI
	SetVariable(var_183_string, var_184_int); // 0x365 Func
	
Label_872:
	var_185_bool = 0; var_186_object = Obj(); // 0x368 PushV
	var_186_object = var_99_object; // 0x369 Mov
	func_929(var_186_object); // 0x36a NEW_2
	var_187_bool = var_185_bool == 0; // 0x36c Not
	if(var_187_bool == 0) goto Label_886; // 0x36d JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x36e PushV
	var_189_object = var_99_object; // 0x36f Mov
	func_892(var_189_object); // 0x370 NEW_2
	var_190_bool = var_188_bool == 0; // 0x372 Not
	if(var_190_bool == 0) goto Label_886; // 0x373 JumpB
	var_98_bool = 0; // 0x374 MovB
	return 4; // 0x375 Return
	
Label_886:
	var_191_string = "voice_common"; // 0x376 PushS
	var_192_int = 1; // 0x377 PushI
	SetVariable(var_191_string, var_192_int); // 0x378 Func
}


func_708(var_45_bool)
{
	var_45_bool = 1; // 0x2c4 MovB
	return 0; // 0x2c5 Return
}


func_710()
{
	StopAnimation(); // 0x2c6 Func
	StopGroup0(); // 0x2c8 Func
	return 0; // 0x2ca Return
}


func_1095(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x448 PushV
	var_203_string = "oob9Spi4ka_Kapella1"; // 0x449 MovS
	func_1041(var_202_int, var_203_string); // 0x44a NEW_2
	var_206_int = 0; // 0x44c PushI
	var_207_bool = var_202_int == var_206_int; // 0x44d Eq
	if(var_207_bool == 0) goto Label_1105; // 0x44e JumpB
	var_200_bool = 1; // 0x44f MovB
	return 0; // 0x450 Return
	
Label_1105:
	var_200_bool = 0; // 0x451 MovB
	return 0; // 0x452 Return
}


func_585()
{
	StopGroup0(); // 0x249 Func
	func_528(); // 0x24c NEW_2
	var_8_string = ""; // 0x24e PushV
	var_8_string = "Neutral"; // 0x24f MovS
	func_972(var_8_string); // 0x250 NEW_2
	func_519(); // 0x253 NEW_2
	return 0; // 0x255 Return
}


func_715(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x2cb PushV
	GetPosition(var_27_cvector); // 0x2cc Func
	GetPosition(var_28_cvector); // 0x2ce ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2d0 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2d1 Or2
	return 6; // 0x2d2 Return
}


func_972(var_238_string)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0; // 0x3cc PushV
	lshHasAnimation(var_242_bool, var_238_string); // 0x3cd Func
	var_245_bool = var_242_bool; // 0x3cf Push
	if(var_245_bool == 0) goto Label_983; // 0x3d0 JumpB
	lshGetAnimTimes(var_238_string, var_243_float, var_244_float); // 0x3d1 Func
	var_246_bool = 0; // 0x3d3 PushB
	lshPlayAnimation(var_243_float, var_244_float, var_246_bool); // 0x3d4 Func
	goto Label_987; // 0x3d6 Jump
	
Label_987:
	return 6; // 0x3db Return
	
Label_983:
	var_247_string = "Can't find lsh animation : "; // 0x3d7 PushS
	var_248_int = var_247_string + var_238_string; // 0x3d8 Add
	Trace(var_248_int); // 0x3d9 Func
}


func_463(var_0_object)
{
	var_7_bool = 0; // 0x1cf PushV
	func_742(var_7_bool); // 0x1d0 NEW_2
	var_10_bool = var_7_bool == 0; // 0x1d2 Not
	if(var_10_bool == 0) goto Label_470; // 0x1d3 JumpB
	Hold(); // 0x1d4 Func
	
Label_470:
	GetDirection(var_0_object); // 0x1d6 Func
	
Label_472:
	func_639(); // 0x1d9 NEW_2
	goto Label_472; // 0x1db Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_134; // 0x56 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x57 PushV
	var_201_object = var_1_object; // 0x58 MovT
	func_1095(var_201_object); // 0x59 NEW_2
	if(var_200_bool == 0) goto Label_117; // 0x5b JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0x5c PushV
	var_208_object = var_1_object; // 0x5d MovT
	var_209_object = var_0_object; // 0x5e MovT
	func_1089(); // 0x5f NEW_2
	var_212_string = ""; // 0x61 PushV
	var_212_string = "Azart"; // 0x62 MovS
	func_164(var_194_object, var_212_string); // 0x63 NEW_2
	var_229_int = 530337; // 0x65 PushI
	SetMessage(var_229_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_230_int = 530338; // 0x6a PushI
	var_231_int = 32415; // 0x6b PushI
	var_232_int = 31725; // 0x6c PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x6d TObjFunc
	var_233_int = 531096; // 0x6f PushI
	var_234_int = 32418; // 0x70 PushI
	var_235_int = 32414; // 0x71 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x72 TObjFunc
	goto Label_134; // 0x74 Jump
	
Label_134:
	var_236_bool = 0; // 0x86 PushV
	func_1087(var_236_bool); // 0x87 NEW_2
	if(var_236_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_237_string = var_3_string; // 0x8c PushT
	if(var_237_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_238_string = ""; // 0x8f PushV
	var_238_string = var_2_object; // 0x90 MovT
	func_972(var_238_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_249_string = "all"; // 0x95 PushS
	var_250_string = "idle"; // 0x96 PushS
	PlayAnimation(var_249_string, var_250_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_251_string = var_3_string; // 0x9b PushT
	if(var_251_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_252_string = "all"; // 0x9e PushS
	var_253_string = "idle"; // 0x9f PushS
	PlayAnimation(var_252_string, var_253_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
	
Label_117:
	var_254_string = ""; // 0x75 PushV
	var_254_string = "Neutral"; // 0x76 MovS
	func_164(var_194_object, var_254_string); // 0x77 NEW_2
	var_255_int = 530341; // 0x79 PushI
	SetMessage(var_255_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_256_int = 530342; // 0x7e PushI
	var_257_int = -1; // 0x7f PushI
	var_258_int = 31729; // 0x80 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
}


func_1107(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x453 PushV
	var_92_string = "branch"; // 0x454 PushS
	GetVariable(var_92_string, var_91_int); // 0x455 Func
	var_93_int = 0; // 0x457 PushI
	var_94_bool = var_91_int == var_93_int; // 0x458 Eq
	if(var_94_bool == 0) goto Label_1117; // 0x459 JumpB
	var_89_int = 1; // 0x45a MovI
	return 2; // 0x45b Return
	
Label_1117:
	var_95_int = 1; // 0x45d PushI
	var_96_bool = var_91_int == var_95_int; // 0x45e Eq
	if(var_96_bool == 0) goto Label_1122; // 0x45f JumpB
	var_89_int = 2; // 0x460 MovI
	return 2; // 0x461 Return
	
Label_1122:
	var_89_int = 3; // 0x462 MovI
	return 2; // 0x463 Return
}


func_723(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x2d3 PushV
	GetPosition(var_20_cvector); // 0x2d4 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x2d6 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x2d7 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x2d8 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x2d9 Func
	var_15_bool = var_22_bool; // 0x2db Mov
	return 6; // 0x2dc Return
}


func_988(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; // 0x3dc PushV
	lshHasAnimation(var_223_bool, var_216_string); // 0x3dd Func
	var_226_bool = var_223_bool; // 0x3df Push
	if(var_226_bool == 0) goto Label_998; // 0x3e0 JumpB
	lshGetAnimTimes(var_216_string, var_224_float, var_225_float); // 0x3e1 Func
	lshPlayAnimation(var_224_float, var_225_float, var_217_bool); // 0x3e3 Func
	goto Label_1002; // 0x3e5 Jump
	
Label_1002:
	return 6; // 0x3ea Return
	
Label_998:
	var_227_string = "Can't find lsh animation : "; // 0x3e6 PushS
	var_228_int = var_227_string + var_216_string; // 0x3e7 Add
	Trace(var_228_int); // 0x3e8 Func
}


func_733(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x2dd PushV
	GetPosition(var_14_cvector); // 0x2de ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x2e0 PushV
	var_16_cvector = var_14_cvector; // 0x2e1 Mov
	func_723(var_15_bool, var_16_cvector); // 0x2e2 NEW_2
	var_11_bool = var_15_bool; // 0x2e3 Mov
	return 2; // 0x2e5 Return
}


func_477(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x1dd PushV
	var_35_string = "player"; // 0x1de PushS
	FindActor(var_34_object, var_35_string); // 0x1df Func
	var_36_bool = var_34_object == 0; // 0x1e1 Not
	if(var_36_bool == 0) goto Label_485; // 0x1e2 JumpB
	var_32_bool = 0; // 0x1e3 MovB
	return 2; // 0x1e4 Return
	
Label_485:
	var_37_bool = 0; var_38_object = Obj(); // 0x1e5 PushV
	var_38_object = var_34_object; // 0x1e6 Mov
	func_733(var_38_object); // 0x1e7 NEW_2
	var_32_bool = var_37_bool; // 0x1e8 Mov
	return 2; // 0x1ea Return
}


func_742(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2e6 PushV
	IsLoaded(var_9_bool); // 0x2e7 Func
	var_7_bool = var_9_bool; // 0x2e9 Mov
	return 2; // 0x2ea Return
}


func_747(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x2eb PushV
	GetPosition(var_50_cvector); // 0x2ec ObjFunc
	GetEyesHeight(var_49_float); // 0x2ee ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2f0 PushE
	var_58_float = var_58_float + var_49_float; // 0x2f1 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2f2 PopE
	GetPosition(var_51_cvector); // 0x2f3 Func
	GetEyesHeight(var_49_float); // 0x2f5 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x2f7 PushE
	var_59_float = var_59_float + var_49_float; // 0x2f8 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x2f9 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x2fa Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x2fb PushE
	var_60_float = 0; // 0x2fc MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x2fd PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x2fe Or
	var_62_float = sqrt(var_61_int); // 0x2ff Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x300 Div2
	var_53_cvector = -var_52_cvector; // 0x301 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x302 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x303 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x304 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x305 Xor2
	func_1031(var_64_cvector, var_65_cvector); // 0x306 NEW_2
	var_72_int = 25; // 0x308 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x309 Mult
	var_74_int = var_63_float + var_73_float; // 0x30a Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x30b PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x30c Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x30d Add2
	IsOverrideActive(var_56_bool); // 0x30e Func
	var_76_bool = var_56_bool; // 0x310 Push
	if(var_76_bool == 0) goto Label_788; // 0x311 JumpB
	var_37_bool = 0; // 0x312 MovB
	return 18; // 0x313 Return
	
Label_788:
	StopWorld(); // 0x314 Func
	var_77_bool = 1; // 0x316 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x317 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x319 PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x31a PushE
	Rotate(var_78_float, var_79_float); // 0x31b Func
	var_80_bool = 0; // 0x31d PushV
	func_1087(var_80_bool); // 0x31e NEW_2
	if(var_80_bool == 0) goto Label_802; // 0x320 JumpB
	goto Label_810; // 0x321 Jump
	
Label_810:
	CameraWaitForPlayFinish(); // 0x32a Func
	ResumeWorld(); // 0x32c Func
	var_37_bool = 1; // 0x32e MovB
	return 18; // 0x32f Return
	
Label_802:
	var_81_string = "head"; // 0x322 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x323 Func
	var_82_bool = var_57_bool; // 0x325 Push
	if(var_82_bool == 0) goto Label_810; // 0x326 JumpB
	var_83_string = "head"; // 0x327 PushS
	LookAsyncCamera(var_83_string); // 0x328 Func
}


func_492(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1ec PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1ed PushE
	RotateAsync(var_84_float, var_85_float); // 0x1ee Func
	return 0; // 0x1f0 Return
}


func_1003(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x3eb PushV
	var_136_bool = 0; // 0x3ec PushV
	func_1087(var_136_bool); // 0x3ed NEW_2
	if(var_136_bool == 0) goto Label_1016; // 0x3ef JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x3f0 Func
	var_137_bool = var_135_bool; // 0x3f2 Push
	if(var_137_bool == 0) goto Label_1016; // 0x3f3 JumpB
	lshPlaySpeech(var_133_string); // 0x3f4 Func
	var_132_bool = 1; // 0x3f6 MovB
	return 2; // 0x3f7 Return
	
Label_1016:
	var_132_bool = 0; // 0x3f8 MovB
	return 2; // 0x3f9 Return
}


func_497(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x1f1 PushV
	var_20_string = "player"; // 0x1f2 PushS
	FindActor(var_18_object, var_20_string); // 0x1f3 Func
	var_21_bool = var_18_object == 0; // 0x1f5 Not
	if(var_21_bool == 0) goto Label_505; // 0x1f6 JumpB
	var_15_bool = 0; // 0x1f7 MovB
	return 4; // 0x1f8 Return
	
Label_505:
	var_22_float = 0; var_23_object = Obj(); // 0x1f9 PushV
	var_23_object = var_18_object; // 0x1fa Mov
	func_715(var_23_object); // 0x1fb NEW_2
	var_30_float = 90000.0; // 0x1fd PushF
	var_31_bool = var_22_float > var_30_float; // 0x1fe GT
	if(var_31_bool == 0) goto Label_514; // 0x1ff JumpB
	var_15_bool = 0; // 0x200 MovB
	return 4; // 0x201 Return
	
Label_514:
	CanSee(var_19_bool, var_18_object); // 0x202 Func
	var_15_bool = var_19_bool; // 0x204 Mov
	return 4; // 0x205 Return
}


func_1018()
{
	var_10_bool = 0; // 0x3fa PushV
	func_1087(var_10_bool); // 0x3fb NEW_2
	if(var_10_bool == 0) goto Label_1024; // 0x3fd JumpB
	lshStopSpeech(); // 0x3fe Func
	
Label_1024:
	return 0; // 0x400 Return
}


func_892(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x37c PushV
	var_116_string = "c"; // 0x37d MovS
	var_117_int = 0; // 0x37e MovI
	
Label_895:
	var_121_int = 1; // 0x37f PushI
	if(var_121_int == 0) goto Label_908; // 0x380 JumpB
	var_122_int = 1; // 0x381 PushI
	var_123_int = var_117_int + var_122_int; // 0x382 Add
	var_124_int = var_116_string + var_123_int; // 0x383 Add
	HasProperty(var_124_int, var_118_bool); // 0x384 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x386 Not
	if(var_125_bool == 0) goto Label_905; // 0x387 JumpB
	goto Label_908; // 0x388 Jump
	
Label_908:
	var_126_bool = var_117_int == 0; // 0x38c Not
	if(var_126_bool == 0) goto Label_912; // 0x38d JumpB
	var_109_bool = 0; // 0x38e MovB
	return 10; // 0x38f Return
	
Label_912:
	var_119_int = 0; // 0x390 MovI
	var_127_int = 1; // 0x391 PushI
	var_128_bool = var_117_int > var_127_int; // 0x392 GT
	if(var_128_bool == 0) goto Label_918; // 0x393 JumpB
	irand(var_119_int, var_117_int); // 0x394 Func
	
Label_918:
	var_129_int = 1; // 0x396 PushI
	var_130_int = var_119_int + var_129_int; // 0x397 Add
	var_131_int = var_116_string + var_130_int; // 0x398 Add
	GetProperty(var_131_int, var_120_string); // 0x399 ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x39b PushV
	var_133_string = var_120_string; // 0x39c Mov
	func_1003(var_132_bool, var_133_string); // 0x39d NEW_2
	var_109_bool = var_132_bool; // 0x39e Mov
	return 10; // 0x3a0 Return
	
Label_905:
	var_138_int = 1; // 0x389 PushI
	var_117_int = var_117_int + var_138_int; // 0x38a Add2
	goto Label_895; // 0x38b Jump
}


func_639()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x27f PushV
	WaitForAnimEnd(); // 0x280 Func
	var_23_bool = 0; // 0x282 PushV
	func_742(var_23_bool); // 0x283 NEW_2
	var_24_bool = var_23_bool == 0; // 0x285 Not
	if(var_24_bool == 0) goto Label_648; // 0x286 JumpB
	return 12; // 0x287 Return
	
Label_648:
	var_25_int = 0; // 0x288 PushV
	func_1062(var_25_int); // 0x289 NEW_2
	var_17_int = var_25_int; // 0x28a Mov
	var_18_int = 0; // 0x28c MovI
	
Label_653:
	var_38_bool = 0; // 0x28d PushV
	var_38_bool = 0; // 0x28e MovB
	var_39_int = 5; // 0x28f PushI
	var_40_bool = var_18_int < var_39_int; // 0x290 LT
	if(var_40_bool == 0) goto Label_663; // 0x291 JumpB
	var_41_bool = 0; // 0x292 PushV
	func_742(var_41_bool); // 0x293 NEW_2
	if(var_41_bool == 0) goto Label_663; // 0x295 JumpB
	var_38_bool = 1; // 0x296 MovB
	
Label_663:
	if(var_38_bool == 0) goto Label_705; // 0x297 JumpB
	var_42_bool = var_17_int == 0; // 0x298 Not
	if(var_42_bool == 0) goto Label_673; // 0x299 JumpB
	var_43_int = 3; // 0x29a PushI
	Sleep(var_43_int, var_19_bool); // 0x29b Func
	var_44_bool = var_19_bool == 0; // 0x29d Not
	if(var_44_bool == 0) goto Label_672; // 0x29e JumpB
	goto Label_705; // 0x29f Jump
	
Label_705:
	ResetAAS(); // 0x2c1 Func
	return 12; // 0x2c3 Return
	
Label_672:
	goto Label_694; // 0x2a0 Jump
	
Label_694:
	var_45_bool = 0; // 0x2b6 PushV
	func_708(var_45_bool); // 0x2b7 NEW_2
	var_46_bool = var_45_bool == 0; // 0x2b9 Not
	if(var_46_bool == 0) goto Label_700; // 0x2ba JumpB
	goto Label_705; // 0x2bb Jump
	
Label_700:
	ResetAAS(); // 0x2bc Func
	var_47_int = 1; // 0x2be PushI
	var_18_int = var_18_int + var_47_int; // 0x2bf Add2
	goto Label_653; // 0x2c0 Jump
	
Label_673:
	irand(var_20_int, var_17_int); // 0x2a1 Func
	var_48_int = 5; // 0x2a3 PushI
	irand(var_21_int, var_48_int); // 0x2a4 Func
	var_49_int = 0; // 0x2a6 PushI
	var_50_bool = var_21_int != var_49_int; // 0x2a7 Neq
	if(var_50_bool == 0) goto Label_682; // 0x2a8 JumpB
	var_20_int = 0; // 0x2a9 MovI
	
Label_682:
	var_51_string = "all"; // 0x2aa PushS
	var_52_string = ""; var_53_int = 0; // 0x2ab PushV
	var_53_int = var_20_int; // 0x2ac Mov
	func_1055(var_52_string, var_53_int); // 0x2ad NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2af Func
	WaitForAnimEnd(var_22_bool); // 0x2b1 Func
	var_54_bool = var_22_bool == 0; // 0x2b3 Not
	if(var_54_bool == 0) goto Label_694; // 0x2b4 JumpB
	goto Label_705; // 0x2b5 Jump
}


