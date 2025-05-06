task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xbb PushI
	if(var_9_int == 0) goto Label_413; // 0xbc JumpB
	func_1016(); // 0xbe NEW_2
	var_11_int = 31724; // 0xc0 PushI
	var_12_bool = var_7_cvector == var_11_int; // 0xc1 Eq
	if(var_12_bool == 0) goto Label_240; // 0xc2 JumpB
	var_13_bool = 0; var_14_object = Obj(); // 0xc3 PushV
	var_14_object = var_1_object; // 0xc4 MovT
	func_1093(var_14_object); // 0xc5 NEW_2
	if(var_13_bool == 0) goto Label_225; // 0xc7 JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xc8 PushV
	var_21_object = var_1_object; // 0xc9 MovT
	var_22_object = var_0_object; // 0xca MovT
	func_1087(); // 0xcb NEW_2
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
	func_1085(var_124_bool); // 0x193 NEW_2
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
	func_1023(var_13_object); // 0x1b4 NEW_2
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
	func_1023(var_8_object); // 0x1c1 NEW_2
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
	func_1023(var_53_object); // 0x22d NEW_2
	var_52_object = var_53_object; // 0x22e Mov
	func_890(var_52_object); // 0x230 NEW_2
	
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
	func_970(var_14_string); // 0x25f NEW_2
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
	var_266_string = ""; // 0x274 PushV
	var_266_string = "Neutral"; // 0x275 MovS
	func_970(var_266_string); // 0x276 NEW_2
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
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1079(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1077(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1081(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1083(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1105(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1023(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_832(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_258_bool = var_36_bool == 0; // 0x3f Not
	if(var_258_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_259_object = Obj(); // 0x46 PushV
	var_259_object = var_27_object; // 0x47 Mov
	func_815(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1029(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x405 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x406 Or
	var_68_float = sqrt(var_69_int); // 0x407 Sqrt2
	var_70_float = 0.0; // 0x408 PushF
	var_71_bool = var_68_float < var_70_float; // 0x409 LT
	if(var_71_bool == 0) goto Label_1037; // 0x40a JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x40b MovV
	return 2; // 0x40c Return
	
Label_1037:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x40d Div2
	return 2; // 0x40e Return
}


func_519()
{
	var_268_float = 0; var_269_float = 0; // 0x207 PushV
	var_270_int = 8; // 0x208 PushI
	var_271_int = 16; // 0x209 PushI
	rand(var_269_float, var_270_int, var_271_int); // 0x20a Func
	var_272_int = 10; // 0x20c PushI
	SetTimer(var_272_int, var_269_float); // 0x20d Func
	return 2; // 0x20f Return
}


func_1039(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x40f PushV
	GetVariable(var_202_string, var_204_int); // 0x410 Func
	var_201_int = var_204_int; // 0x412 Mov
	return 2; // 0x413 Return
}


func_528()
{
	var_267_int = 10; // 0x210 PushI
	KillTimer(var_267_int); // 0x211 Func
	return 0; // 0x213 Return
}


func_1044(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x414 PushV
	GetGameTime(var_154_float); // 0x415 Func
	var_155_int = 1; // 0x417 PushI
	var_156_int = 0; // 0x418 PushV
	var_157_int = 24; // 0x419 PushI
	var_156_int = var_154_float / var_154_float; // 0x41a Div2
	var_152_int = var_155_int + var_156_int; // 0x41b Add2
	return 2; // 0x41c Return
}


func_1023(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x3ff PushV
	self(var_101_object); // 0x400 Func
	var_99_object = var_101_object; // 0x402 Mov
	return 2; // 0x403 Return
}


func_1053(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x41d PushV
	var_34_string = "idle"; // 0x41e MovS
	var_35_int = var_32_int; // 0x41f Push
	if(var_35_int == 0) goto Label_1058; // 0x420 JumpB
	var_34_string = var_34_string + var_32_int; // 0x421 Add2
	
Label_1058:
	var_31_string = var_34_string; // 0x422 Mov
	return 2; // 0x423 Return
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


func_927(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x39f PushV
	var_151_string = "d"; // 0x3a0 PushS
	var_152_int = 0; // 0x3a1 PushV
	func_1044(var_152_int); // 0x3a2 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x3a4 Add
	var_159_string = "m"; // 0x3a5 PushS
	var_146_string = var_158_int + var_159_string; // 0x3a6 Add2
	var_147_int = 0; // 0x3a7 MovI
	
Label_936:
	var_160_int = 1; // 0x3a8 PushI
	if(var_160_int == 0) goto Label_949; // 0x3a9 JumpB
	var_161_int = 1; // 0x3aa PushI
	var_162_int = var_147_int + var_161_int; // 0x3ab Add
	var_163_int = var_146_string + var_162_int; // 0x3ac Add
	HasProperty(var_163_int, var_148_bool); // 0x3ad ObjFunc
	var_164_bool = var_148_bool == 0; // 0x3af Not
	if(var_164_bool == 0) goto Label_946; // 0x3b0 JumpB
	goto Label_949; // 0x3b1 Jump
	
Label_949:
	var_165_bool = var_147_int == 0; // 0x3b5 Not
	if(var_165_bool == 0) goto Label_953; // 0x3b6 JumpB
	var_139_bool = 0; // 0x3b7 MovB
	return 10; // 0x3b8 Return
	
Label_953:
	var_149_int = 0; // 0x3b9 MovI
	var_166_int = 1; // 0x3ba PushI
	var_167_bool = var_147_int > var_166_int; // 0x3bb GT
	if(var_167_bool == 0) goto Label_959; // 0x3bc JumpB
	irand(var_149_int, var_147_int); // 0x3bd Func
	
Label_959:
	var_168_int = 1; // 0x3bf PushI
	var_169_int = var_149_int + var_168_int; // 0x3c0 Add
	var_170_int = var_146_string + var_169_int; // 0x3c1 Add
	GetProperty(var_170_int, var_150_string); // 0x3c2 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x3c4 PushV
	var_172_string = var_150_string; // 0x3c5 Mov
	func_1001(var_171_bool, var_172_string); // 0x3c6 NEW_2
	var_139_bool = var_171_bool; // 0x3c7 Mov
	return 10; // 0x3c9 Return
	
Label_946:
	var_173_int = 1; // 0x3b2 PushI
	var_147_int = var_147_int + var_173_int; // 0x3b3 Add2
	goto Label_936; // 0x3b4 Jump
}


func_164(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0xa5 PushV
	func_1085(var_212_bool); // 0xa6 NEW_2
	var_213_bool = var_212_bool == 0; // 0xa8 Not
	if(var_213_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_214_bool = var_211_string == var_2_object; // 0xab Eq
	if(var_214_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_215_string = ""; var_216_bool = 0; // 0xae PushV
	var_215_string = var_211_string; // 0xaf Mov
	var_217_string = ""; // 0xb0 PushS
	var_218_bool = var_211_string == var_217_string; // 0xb1 Eq
	if(var_218_bool == 0) goto Label_181; // 0xb2 JumpB
	var_216_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_986(var_215_string, var_216_bool); // 0xb6 NEW_2
	var_2_object = var_211_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_216_bool = 1; // 0xb5 MovB
}


func_1060(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x424 PushV
	var_28_int = 0; // 0x425 MovI
	
Label_1062:
	var_30_string = "all"; // 0x426 PushS
	var_31_string = ""; var_32_int = 0; // 0x427 PushV
	var_32_int = var_28_int; // 0x428 Mov
	func_1053(var_31_string, var_32_int); // 0x429 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x42b Func
	var_36_bool = var_29_bool == 0; // 0x42d Not
	if(var_36_bool == 0) goto Label_1072; // 0x42e JumpB
	goto Label_1075; // 0x42f Jump
	
Label_1075:
	var_25_int = var_28_int; // 0x433 Mov
	return 4; // 0x434 Return
	
Label_1072:
	var_37_int = 1; // 0x430 PushI
	var_28_int = var_28_int + var_37_int; // 0x431 Add2
	goto Label_1062; // 0x432 Jump
}


func_815()
{
	var_260_bool = 0; var_261_bool = 0; // 0x32f PushV
	CameraSwitchToNormal(); // 0x330 Func
	var_262_bool = 0; // 0x332 PushV
	func_1085(var_262_bool); // 0x333 NEW_2
	if(var_262_bool == 0) goto Label_823; // 0x335 JumpB
	goto Label_831; // 0x336 Jump
	
Label_831:
	return 2; // 0x33f Return
	
Label_823:
	var_263_string = "head"; // 0x337 PushS
	HasAnimationTrack(var_261_bool, var_263_string); // 0x338 Func
	var_264_bool = var_261_bool; // 0x33a Push
	if(var_264_bool == 0) goto Label_831; // 0x33b JumpB
	var_265_string = "head"; // 0x33c PushS
	UnlookAsync(var_265_string); // 0x33d Func
}


func_1077(var_85_int)
{
	var_85_int = 515552; // 0x435 MovI
	return 0; // 0x436 Return
}


func_1079(var_84_int)
{
	var_84_int = 502877; // 0x437 MovI
	return 0; // 0x438 Return
}


func_1081(var_86_string)
{
	var_86_string = "ui/NPC_Spi4ka.png"; // 0x439 MovS
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
	var_87_string = "ui/NPC_Spi4ka_b.png"; // 0x43b MovS
	return 0; // 0x43c Return
}


func_1085(var_79_bool)
{
	var_79_bool = 1; // 0x43d MovB
	return 0; // 0x43e Return
}


func_1087()
{
	var_209_string = "oob9Spi4ka_Kapella1"; // 0x440 PushS
	var_210_int = 1; // 0x441 PushI
	SetVariable(var_209_string, var_210_int); // 0x442 Func
	return 0; // 0x444 Return
}


func_832(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x340 PushV
	var_106_string = "voice_common"; // 0x341 PushS
	GetVariable(var_106_string, var_104_int); // 0x342 Func
	var_107_int = var_104_int; // 0x344 Push
	if(var_107_int == 0) goto Label_870; // 0x345 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x346 PushV
	var_109_object = var_98_object; // 0x347 Mov
	func_890(var_109_object); // 0x348 NEW_2
	var_138_bool = var_108_bool == 0; // 0x34a Not
	if(var_138_bool == 0) goto Label_852; // 0x34b JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x34c PushV
	var_140_object = var_98_object; // 0x34d Mov
	func_927(var_140_object); // 0x34e NEW_2
	var_174_bool = var_139_bool == 0; // 0x350 Not
	if(var_174_bool == 0) goto Label_852; // 0x351 JumpB
	var_97_bool = 0; // 0x352 MovB
	return 4; // 0x353 Return
	
Label_852:
	var_175_int = 2; // 0x354 PushI
	irand(var_105_int, var_175_int); // 0x355 Func
	var_176_int = var_105_int; // 0x357 Push
	if(var_176_int == 0) goto Label_865; // 0x358 JumpB
	var_177_string = "voice_common"; // 0x359 PushS
	var_178_int = 1; // 0x35a PushI
	var_179_int = var_104_int + var_178_int; // 0x35b Add
	var_180_int = 3; // 0x35c PushI
	var_181_int = var_179_int / var_180_int; // 0x35d Mod
	SetVariable(var_177_string, var_181_int); // 0x35e Func
	goto Label_869; // 0x360 Jump
	
Label_869:
	goto Label_888; // 0x365 Jump
	
Label_888:
	var_97_bool = 1; // 0x378 MovB
	return 4; // 0x379 Return
	
Label_865:
	var_182_string = "voice_common"; // 0x361 PushS
	var_183_int = 0; // 0x362 PushI
	SetVariable(var_182_string, var_183_int); // 0x363 Func
	
Label_870:
	var_184_bool = 0; var_185_object = Obj(); // 0x366 PushV
	var_185_object = var_98_object; // 0x367 Mov
	func_927(var_185_object); // 0x368 NEW_2
	var_186_bool = var_184_bool == 0; // 0x36a Not
	if(var_186_bool == 0) goto Label_884; // 0x36b JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x36c PushV
	var_188_object = var_98_object; // 0x36d Mov
	func_890(var_188_object); // 0x36e NEW_2
	var_189_bool = var_187_bool == 0; // 0x370 Not
	if(var_189_bool == 0) goto Label_884; // 0x371 JumpB
	var_97_bool = 0; // 0x372 MovB
	return 4; // 0x373 Return
	
Label_884:
	var_190_string = "voice_common"; // 0x374 PushS
	var_191_int = 1; // 0x375 PushI
	SetVariable(var_190_string, var_191_int); // 0x376 Func
}


func_708(var_45_bool)
{
	var_45_bool = 1; // 0x2c4 MovB
	return 0; // 0x2c5 Return
}


func_1093(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x446 PushV
	var_202_string = "oob9Spi4ka_Kapella1"; // 0x447 MovS
	func_1039(var_201_int, var_202_string); // 0x448 NEW_2
	var_205_int = 0; // 0x44a PushI
	var_206_bool = var_201_int == var_205_int; // 0x44b Eq
	if(var_206_bool == 0) goto Label_1103; // 0x44c JumpB
	var_199_bool = 1; // 0x44d MovB
	return 0; // 0x44e Return
	
Label_1103:
	var_199_bool = 0; // 0x44f MovB
	return 0; // 0x450 Return
}


func_710()
{
	StopAnimation(); // 0x2c6 Func
	StopGroup0(); // 0x2c8 Func
	return 0; // 0x2ca Return
}


func_585()
{
	StopGroup0(); // 0x249 Func
	func_528(); // 0x24c NEW_2
	var_8_string = ""; // 0x24e PushV
	var_8_string = "Neutral"; // 0x24f MovS
	func_970(var_8_string); // 0x250 NEW_2
	func_519(); // 0x253 NEW_2
	return 0; // 0x255 Return
}


func_970(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x3ca PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x3cb Func
	var_244_bool = var_241_bool; // 0x3cd Push
	if(var_244_bool == 0) goto Label_981; // 0x3ce JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x3cf Func
	var_245_bool = 0; // 0x3d1 PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x3d2 Func
	goto Label_985; // 0x3d4 Jump
	
Label_985:
	return 6; // 0x3d9 Return
	
Label_981:
	var_246_string = "Can't find lsh animation : "; // 0x3d5 PushS
	var_247_int = var_246_string + var_237_string; // 0x3d6 Add
	Trace(var_247_int); // 0x3d7 Func
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


func_1105(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x451 PushV
	var_91_string = "branch"; // 0x452 PushS
	GetVariable(var_91_string, var_90_int); // 0x453 Func
	var_92_int = 0; // 0x455 PushI
	var_93_bool = var_90_int == var_92_int; // 0x456 Eq
	if(var_93_bool == 0) goto Label_1115; // 0x457 JumpB
	var_88_int = 1; // 0x458 MovI
	return 2; // 0x459 Return
	
Label_1115:
	var_94_int = 1; // 0x45b PushI
	var_95_bool = var_90_int == var_94_int; // 0x45c Eq
	if(var_95_bool == 0) goto Label_1120; // 0x45d JumpB
	var_88_int = 2; // 0x45e MovI
	return 2; // 0x45f Return
	
Label_1120:
	var_88_int = 3; // 0x460 MovI
	return 2; // 0x461 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_134; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_1093(var_200_object); // 0x59 NEW_2
	if(var_199_bool == 0) goto Label_117; // 0x5b JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x5c PushV
	var_207_object = var_1_object; // 0x5d MovT
	var_208_object = var_0_object; // 0x5e MovT
	func_1087(); // 0x5f NEW_2
	var_211_string = ""; // 0x61 PushV
	var_211_string = "Azart"; // 0x62 MovS
	func_164(var_193_object, var_211_string); // 0x63 NEW_2
	var_228_int = 530337; // 0x65 PushI
	SetMessage(var_228_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_229_int = 530338; // 0x6a PushI
	var_230_int = 32415; // 0x6b PushI
	var_231_int = 31725; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	var_232_int = 531096; // 0x6f PushI
	var_233_int = 32418; // 0x70 PushI
	var_234_int = 32414; // 0x71 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x72 TObjFunc
	goto Label_134; // 0x74 Jump
	
Label_134:
	var_235_bool = 0; // 0x86 PushV
	func_1085(var_235_bool); // 0x87 NEW_2
	if(var_235_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_236_string = var_3_string; // 0x8c PushT
	if(var_236_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_237_string = ""; // 0x8f PushV
	var_237_string = var_2_object; // 0x90 MovT
	func_970(var_237_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_248_string = "all"; // 0x95 PushS
	var_249_string = "idle"; // 0x96 PushS
	PlayAnimation(var_248_string, var_249_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_250_string = var_3_string; // 0x9b PushT
	if(var_250_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_251_string = "all"; // 0x9e PushS
	var_252_string = "idle"; // 0x9f PushS
	PlayAnimation(var_251_string, var_252_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
	
Label_117:
	var_253_string = ""; // 0x75 PushV
	var_253_string = "Neutral"; // 0x76 MovS
	func_164(var_193_object, var_253_string); // 0x77 NEW_2
	var_254_int = 530341; // 0x79 PushI
	SetMessage(var_254_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_255_int = 530342; // 0x7e PushI
	var_256_int = -1; // 0x7f PushI
	var_257_int = 31729; // 0x80 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
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


func_986(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x3da PushV
	lshHasAnimation(var_222_bool, var_215_string); // 0x3db Func
	var_225_bool = var_222_bool; // 0x3dd Push
	if(var_225_bool == 0) goto Label_996; // 0x3de JumpB
	lshGetAnimTimes(var_215_string, var_223_float, var_224_float); // 0x3df Func
	lshPlayAnimation(var_223_float, var_224_float, var_216_bool); // 0x3e1 Func
	goto Label_1000; // 0x3e3 Jump
	
Label_1000:
	return 6; // 0x3e8 Return
	
Label_996:
	var_226_string = "Can't find lsh animation : "; // 0x3e4 PushS
	var_227_int = var_226_string + var_215_string; // 0x3e5 Add
	Trace(var_227_int); // 0x3e6 Func
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


func_1001(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x3e9 PushV
	var_135_bool = 0; // 0x3ea PushV
	func_1085(var_135_bool); // 0x3eb NEW_2
	if(var_135_bool == 0) goto Label_1014; // 0x3ed JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x3ee Func
	var_136_bool = var_134_bool; // 0x3f0 Push
	if(var_136_bool == 0) goto Label_1014; // 0x3f1 JumpB
	lshPlaySpeech(var_132_string); // 0x3f2 Func
	var_131_bool = 1; // 0x3f4 MovB
	return 2; // 0x3f5 Return
	
Label_1014:
	var_131_bool = 0; // 0x3f6 MovB
	return 2; // 0x3f7 Return
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
	func_1029(var_64_cvector, var_65_cvector); // 0x306 NEW_2
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
	CameraTransit(var_55_cvector, var_53_cvector); // 0x316 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x318 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x319 PushE
	Rotate(var_77_float, var_78_float); // 0x31a Func
	var_79_bool = 0; // 0x31c PushV
	func_1085(var_79_bool); // 0x31d NEW_2
	if(var_79_bool == 0) goto Label_801; // 0x31f JumpB
	goto Label_809; // 0x320 Jump
	
Label_809:
	CameraWaitForPlayFinish(); // 0x329 Func
	ResumeWorld(); // 0x32b Func
	var_37_bool = 1; // 0x32d MovB
	return 18; // 0x32e Return
	
Label_801:
	var_80_string = "head"; // 0x321 PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x322 Func
	var_81_bool = var_57_bool; // 0x324 Push
	if(var_81_bool == 0) goto Label_809; // 0x325 JumpB
	var_82_string = "head"; // 0x326 PushS
	LookAsyncCamera(var_82_string); // 0x327 Func
}


func_492(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1ec PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1ed PushE
	RotateAsync(var_84_float, var_85_float); // 0x1ee Func
	return 0; // 0x1f0 Return
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


func_1016()
{
	var_10_bool = 0; // 0x3f8 PushV
	func_1085(var_10_bool); // 0x3f9 NEW_2
	if(var_10_bool == 0) goto Label_1022; // 0x3fb JumpB
	lshStopSpeech(); // 0x3fc Func
	
Label_1022:
	return 0; // 0x3fe Return
}


func_890(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x37a PushV
	var_115_string = "c"; // 0x37b MovS
	var_116_int = 0; // 0x37c MovI
	
Label_893:
	var_120_int = 1; // 0x37d PushI
	if(var_120_int == 0) goto Label_906; // 0x37e JumpB
	var_121_int = 1; // 0x37f PushI
	var_122_int = var_116_int + var_121_int; // 0x380 Add
	var_123_int = var_115_string + var_122_int; // 0x381 Add
	HasProperty(var_123_int, var_117_bool); // 0x382 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x384 Not
	if(var_124_bool == 0) goto Label_903; // 0x385 JumpB
	goto Label_906; // 0x386 Jump
	
Label_906:
	var_125_bool = var_116_int == 0; // 0x38a Not
	if(var_125_bool == 0) goto Label_910; // 0x38b JumpB
	var_108_bool = 0; // 0x38c MovB
	return 10; // 0x38d Return
	
Label_910:
	var_118_int = 0; // 0x38e MovI
	var_126_int = 1; // 0x38f PushI
	var_127_bool = var_116_int > var_126_int; // 0x390 GT
	if(var_127_bool == 0) goto Label_916; // 0x391 JumpB
	irand(var_118_int, var_116_int); // 0x392 Func
	
Label_916:
	var_128_int = 1; // 0x394 PushI
	var_129_int = var_118_int + var_128_int; // 0x395 Add
	var_130_int = var_115_string + var_129_int; // 0x396 Add
	GetProperty(var_130_int, var_119_string); // 0x397 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x399 PushV
	var_132_string = var_119_string; // 0x39a Mov
	func_1001(var_131_bool, var_132_string); // 0x39b NEW_2
	var_108_bool = var_131_bool; // 0x39c Mov
	return 10; // 0x39e Return
	
Label_903:
	var_137_int = 1; // 0x387 PushI
	var_116_int = var_116_int + var_137_int; // 0x388 Add2
	goto Label_893; // 0x389 Jump
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
	func_1060(var_25_int); // 0x289 NEW_2
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
	func_1053(var_52_string, var_53_int); // 0x2ad NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2af Func
	WaitForAnimEnd(var_22_bool); // 0x2b1 Func
	var_54_bool = var_22_bool == 0; // 0x2b3 Not
	if(var_54_bool == 0) goto Label_694; // 0x2b4 JumpB
	goto Label_705; // 0x2b5 Jump
}


