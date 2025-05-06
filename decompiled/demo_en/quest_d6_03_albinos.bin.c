task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 1; // 0xbb PushI
	if(var_10_int == 0) goto Label_357; // 0xbc JumpB
	func_1351(); // 0xbe NEW_2
	var_12_int = 13311; // 0xc0 PushI
	var_13_bool = var_9_bool == var_12_int; // 0xc1 Eq
	if(var_13_bool == 0) goto Label_205; // 0xc2 JumpB
	var_14_object = Obj(); var_15_object = Obj(); // 0xc3 PushV
	var_14_object = var_1_object; // 0xc4 MovT
	var_15_object = var_0_object; // 0xc5 MovT
	func_1501(); // 0xc6 NEW_2
	var_18_object = Obj(); var_19_object = Obj(); // 0xc8 PushV
	var_18_object = var_1_object; // 0xc9 MovT
	var_19_object = var_0_object; // 0xca MovT
	func_1507(); // 0xcb NEW_2
	
Label_205:
	var_22_int = 13292; // 0xcd PushI
	var_23_bool = var_8_cvector == var_22_int; // 0xce Eq
	if(var_23_bool == 0) goto Label_253; // 0xcf JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0xd0 PushV
	var_25_object = var_1_object; // 0xd1 MovT
	func_1513(var_25_object); // 0xd2 NEW_2
	if(var_24_bool == 0) goto Label_233; // 0xd4 JumpB
	var_32_string = ""; // 0xd5 PushV
	var_32_string = "Neutral"; // 0xd6 MovS
	func_164(var_9_bool, var_32_string); // 0xd7 NEW_2
	var_49_int = 512071; // 0xd9 PushI
	SetMessage(var_49_int); // 0xda TObjFunc
	ClearReplies(); // 0xdc TObjFunc
	var_50_int = 512072; // 0xde PushI
	var_51_int = 13294; // 0xdf PushI
	var_52_int = 13293; // 0xe0 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xe1 TObjFunc
	var_53_int = 512083; // 0xe3 PushI
	var_54_int = 13294; // 0xe4 PushI
	var_55_int = 13306; // 0xe5 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xe6 TObjFunc
	return 0; // 0xe8 Return
	
Label_233:
	var_56_string = ""; // 0xe9 PushV
	var_56_string = "Neutral"; // 0xea MovS
	func_164(var_9_bool, var_56_string); // 0xeb NEW_2
	var_57_int = 513029; // 0xed PushI
	SetMessage(var_57_int); // 0xee TObjFunc
	ClearReplies(); // 0xf0 TObjFunc
	var_58_int = 513030; // 0xf2 PushI
	var_59_int = -1; // 0xf3 PushI
	var_60_int = 14237; // 0xf4 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xf5 TObjFunc
	var_61_int = 536131; // 0xf7 PushI
	var_62_int = -1; // 0xf8 PushI
	var_63_int = 37890; // 0xf9 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xfa TObjFunc
	return 0; // 0xfc Return
	
Label_253:
	var_64_int = 13294; // 0xfd PushI
	var_65_bool = var_8_cvector == var_64_int; // 0xfe Eq
	if(var_65_bool == 0) goto Label_281; // 0xff JumpB
	var_66_string = ""; // 0x100 PushV
	var_66_string = "Neutral"; // 0x101 MovS
	func_164(var_9_bool, var_66_string); // 0x102 NEW_2
	var_67_int = 512073; // 0x104 PushI
	SetMessage(var_67_int); // 0x105 TObjFunc
	ClearReplies(); // 0x107 TObjFunc
	var_68_int = 512074; // 0x109 PushI
	var_69_int = 13298; // 0x10a PushI
	var_70_int = 13295; // 0x10b PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x10c TObjFunc
	var_71_int = 512075; // 0x10e PushI
	var_72_int = 13298; // 0x10f PushI
	var_73_int = 13296; // 0x110 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x111 TObjFunc
	var_74_int = 512076; // 0x113 PushI
	var_75_int = 13298; // 0x114 PushI
	var_76_int = 13297; // 0x115 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x116 TObjFunc
	return 0; // 0x118 Return
	
Label_281:
	var_77_int = 13298; // 0x119 PushI
	var_78_bool = var_8_cvector == var_77_int; // 0x11a Eq
	if(var_78_bool == 0) goto Label_304; // 0x11b JumpB
	var_79_string = ""; // 0x11c PushV
	var_79_string = "Neutral"; // 0x11d MovS
	func_164(var_9_bool, var_79_string); // 0x11e NEW_2
	var_80_int = 512077; // 0x120 PushI
	SetMessage(var_80_int); // 0x121 TObjFunc
	ClearReplies(); // 0x123 TObjFunc
	var_81_int = 512078; // 0x125 PushI
	var_82_int = 13302; // 0x126 PushI
	var_83_int = 13301; // 0x127 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x128 TObjFunc
	var_84_int = 512082; // 0x12a PushI
	var_85_int = 13302; // 0x12b PushI
	var_86_int = 13305; // 0x12c PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x12d TObjFunc
	return 0; // 0x12f Return
	
Label_304:
	var_87_int = 13302; // 0x130 PushI
	var_88_bool = var_8_cvector == var_87_int; // 0x131 Eq
	if(var_88_bool == 0) goto Label_327; // 0x132 JumpB
	var_89_string = ""; // 0x133 PushV
	var_89_string = "Neutral"; // 0x134 MovS
	func_164(var_9_bool, var_89_string); // 0x135 NEW_2
	var_90_int = 512079; // 0x137 PushI
	SetMessage(var_90_int); // 0x138 TObjFunc
	ClearReplies(); // 0x13a TObjFunc
	var_91_int = 512080; // 0x13c PushI
	var_92_int = 13304; // 0x13d PushI
	var_93_int = 13303; // 0x13e PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x13f TObjFunc
	var_94_int = 512084; // 0x141 PushI
	var_95_int = 13304; // 0x142 PushI
	var_96_int = 13309; // 0x143 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x144 TObjFunc
	return 0; // 0x146 Return
	
Label_327:
	var_97_int = 13304; // 0x147 PushI
	var_98_bool = var_8_cvector == var_97_int; // 0x148 Eq
	if(var_98_bool == 0) goto Label_345; // 0x149 JumpB
	var_99_string = ""; // 0x14a PushV
	var_99_string = "Neutral"; // 0x14b MovS
	func_164(var_9_bool, var_99_string); // 0x14c NEW_2
	var_100_int = 512081; // 0x14e PushI
	SetMessage(var_100_int); // 0x14f TObjFunc
	ClearReplies(); // 0x151 TObjFunc
	var_101_int = 512085; // 0x153 PushI
	var_102_int = -1; // 0x154 PushI
	var_103_int = 13311; // 0x155 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x156 TObjFunc
	return 0; // 0x158 Return
	
Label_345:
	var_3_string = 1; // 0x159 TMovB
	var_104_bool = 0; // 0x15a PushV
	func_1550(var_104_bool); // 0x15b NEW_2
	if(var_104_bool == 0) goto Label_353; // 0x15d JumpB
	lshStopAnimation(); // 0x15e Func
	goto Label_355; // 0x160 Jump
	
Label_355:
	return 0; // 0x163 Return
	
Label_353:
	StopAnimation(); // 0x161 Func
	
Label_357:
	return 0; // 0x165 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x172 PushV
	IsPlayerActor(var_8_bool, var_10_bool); // 0x173 Func
	var_11_bool = var_10_bool; // 0x175 Push
	if(var_11_bool == 0) goto Label_381; // 0x176 JumpB
	var_12_object = Obj(); // 0x177 PushV
	var_12_object = var_8_bool; // 0x178 Mov
	TaskCall(3); // 0x179 TaskCall
	func_538(var_13_object, var_14_cvector, var_15_bool, var_12_object); // 0x17a NEW_2
	TaskReturn(); // 0x17b TaskReturn
	
Label_381:
	return 2; // 0x17d Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool)
{
	func_482(); // 0x180 NEW_2
	var_9_int = 0; var_10_object = Obj(); // 0x182 PushV
	var_10_object = var_8_bool; // 0x183 Mov
	TaskCall(0); // 0x184 TaskCall
	func_0(var_11_object, var_9_int, var_10_object); // 0x185 NEW_2
	TaskReturn(); // 0x186 TaskReturn
	return 0; // 0x188 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 100; // 0x18a PushI
	var_10_bool = var_8_bool == var_9_int; // 0x18b Eq
	if(var_10_bool == 0) goto Label_400; // 0x18c JumpB
	func_1568(); // 0x18e NEW_2
	
Label_400:
	return 0; // 0x190 Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; var_9_string = ""; var_10_string = ""; // 0x1e7 PushV
	var_9_string = "quest_d6_03"; // 0x1e8 MovS
	var_10_string = "albinos_retreated"; // 0x1e9 MovS
	func_1456(var_8_bool, var_9_string, var_10_string); // 0x1ea NEW_2
	Hold(); // 0x1ec Func
	return 0; // 0x1ee Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_int)
{
	var_9_int = 100; // 0x1f0 PushI
	var_10_bool = var_8_int == var_9_int; // 0x1f1 Eq
	if(var_10_bool == 0) goto Label_503; // 0x1f2 JumpB
	func_1568(); // 0x1f4 NEW_2
	goto Label_507; // 0x1f6 Jump
	
Label_507:
	return 0; // 0x1fb Return
	
Label_503:
	var_95_int = 0; // 0x1f7 PushV
	var_95_int = var_8_int; // 0x1f8 Mov
	func_611(var_6_cvector, var_7_bool, var_8_int, var_95_int); // 0x1f9 NEW_2
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	func_663(var_8_object); // 0x2a0 NEW_2
	var_10_object = Obj(); // 0x2a2 PushV
	var_10_object = var_8_object; // 0x2a3 Mov
	func_1625(); // 0x2a4 NEW_2
	return 0; // 0x2a6 Return
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float)
{
	return 0; // 0x336 Return
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_string)
{
	return 0; // 0x338 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	return 0; // 0x33a Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0; // 0x63b PushV
	var_12_object = var_8_object; // 0x63c Mov
	var_13_int = var_9_int; // 0x63d Mov
	var_14_float = var_10_float; // 0x63e Mov
	func_995(var_12_object, var_13_int, var_14_float); // 0x63f NEW_2
	return 0; // 0x641 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float, var_12_cvector, var_13_cvector)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x643 PushV
	var_14_object = var_8_object; // 0x644 Mov
	var_15_int = var_9_int; // 0x645 Mov
	var_16_float = var_10_float; // 0x646 Mov
	var_17_cvector = var_12_cvector; // 0x647 Mov
	var_18_cvector = var_13_cvector; // 0x648 Mov
	func_1063(var_16_float, var_17_cvector, var_18_cvector); // 0x649 NEW_2
	return 0; // 0x64b Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0; // 0x64c PushV
	var_12_string = "health"; // 0x64d PushS
	var_13_bool = var_9_string == var_12_string; // 0x64e Eq
	if(var_13_bool == 0) goto Label_1624; // 0x64f JumpB
	var_14_string = "health"; // 0x650 PushS
	GetProperty(var_14_string, var_11_float); // 0x651 Func
	var_15_int = 0; // 0x653 PushI
	var_16_bool = var_11_float <= var_15_int; // 0x654 LE
	if(var_16_bool == 0) goto Label_1624; // 0x655 JumpB
	SignalDeath(var_8_object); // 0x656 Func
	
Label_1624:
	return 2; // 0x658 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	var_9_object = Obj(); // 0x65a PushV
	var_9_object = var_8_object; // 0x65b Mov
	func_1552(var_9_object); // 0x65c NEW_2
	return 0; // 0x65e Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	var_8_int = 100; // 0x166 PushI
	var_9_float = 1.0; // 0x167 PushF
	SetTimer(var_8_int, var_9_float); // 0x168 Func
	
Label_362:
	var_10_int = 3; // 0x16a PushI
	Sleep(var_10_int); // 0x16b Func
	func_401(); // 0x16e NEW_2
	goto Label_362; // 0x170 Jump
}


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; // 0x0 PushV
	var_0_object = var_10_object; // 0x1 TMov
	var_20_bool = 0; var_21_object = Obj(); var_22_float = 0; // 0x2 PushV
	var_21_object = var_10_object; // 0x3 Mov
	var_22_float = 70.0; // 0x4 MovF
	func_1082(var_21_object, var_22_float); // 0x5 NEW_2
	var_66_bool = var_20_bool == 0; // 0x7 Not
	if(var_66_bool == 0) goto Label_11; // 0x8 JumpB
	var_9_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_16_object); // 0xb Func
	var_67_int = 0; // 0xd PushV
	func_1544(var_67_int); // 0xe NEW_2
	SetNPCName(var_67_int); // 0x10 ObjFunc
	var_68_int = 0; // 0x12 PushV
	func_1542(var_68_int); // 0x13 NEW_2
	SetNPCDescription(var_68_int); // 0x15 ObjFunc
	var_69_string = ""; // 0x17 PushV
	func_1546(var_69_string); // 0x18 NEW_2
	SetPhoto(var_69_string); // 0x1a ObjFunc
	var_70_string = ""; // 0x1c PushV
	func_1548(var_70_string); // 0x1d NEW_2
	SetPhoto2(var_70_string); // 0x1f ObjFunc
	var_71_int = 0; // 0x21 PushV
	func_1525(var_71_int); // 0x22 NEW_2
	SetPlayerName(var_71_int); // 0x24 ObjFunc
	var_18_int = -1; // 0x26 MovI
	IsOverrideActive(var_17_bool); // 0x27 Func
	var_79_bool = var_17_bool; // 0x29 Push
	if(var_79_bool == 0) goto Label_45; // 0x2a JumpB
	var_9_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_16_object); // 0x2d Func
	var_80_bool = 0; var_81_object = Obj(); // 0x2f PushV
	var_82_object = Obj(); // 0x30 PushV
	func_1399(var_82_object); // 0x31 NEW_2
	var_81_object = var_82_object; // 0x32 Mov
	func_1167(var_80_bool, var_81_object); // 0x34 NEW_2
	var_175_object = Obj(); var_176_object = Obj(); // 0x36 PushV
	var_175_object = var_10_object; // 0x37 Mov
	var_176_object = var_16_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_177_object, var_178_object, var_179_string, var_180_bool, var_175_object, var_176_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_19_bool); // 0x3d ObjFunc
	
Label_63:
	var_240_bool = var_19_bool == 0; // 0x3f Not
	if(var_240_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_19_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_241_object = Obj(); // 0x46 PushV
	var_241_object = var_10_object; // 0x47 Mov
	func_1150(); // 0x48 NEW_2
	StopDialog(var_16_object); // 0x4a Func
	GetReturnValue(var_18_int); // 0x4c ObjFunc
	var_9_int = var_18_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1542(var_68_int)
{
	var_68_int = 515595; // 0x606 MovI
	return 0; // 0x607 Return
}


func_1415(var_68_float, var_69_float, var_70_float)
{
	var_73_bool = var_69_float < var_70_float; // 0x588 LT
	if(var_73_bool == 0) goto Label_1420; // 0x589 JumpB
	var_68_float = var_69_float; // 0x58a Mov
	goto Label_1421; // 0x58b Jump
	
Label_1421:
	return 0; // 0x58d Return
	
Label_1420:
	var_68_float = var_70_float; // 0x58c Mov
}


func_1544(var_67_int)
{
	var_67_int = 512611; // 0x608 MovI
	return 0; // 0x609 Return
}


func_1546(var_69_string)
{
	var_69_string = "ui/NPC_Albinos.png"; // 0x60a MovS
	return 0; // 0x60b Return
}


func_1548(var_70_string)
{
	var_70_string = "ui/NPC_Albinos_b.png"; // 0x60c MovS
	return 0; // 0x60d Return
}


func_1550(var_62_bool)
{
	var_62_bool = 0; // 0x60e MovB
	return 0; // 0x60f Return
}


func_1167(var_80_bool, var_81_object)
{
	var_85_int = 0; var_86_int = 0; var_87_int = 0; var_88_int = 0; // 0x48f PushV
	var_89_string = "voice_common"; // 0x490 PushS
	GetVariable(var_89_string, var_87_int); // 0x491 Func
	var_90_int = var_87_int; // 0x493 Push
	if(var_90_int == 0) goto Label_1205; // 0x494 JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x495 PushV
	var_92_object = var_81_object; // 0x496 Mov
	func_1225(var_92_object); // 0x497 NEW_2
	var_121_bool = var_91_bool == 0; // 0x499 Not
	if(var_121_bool == 0) goto Label_1187; // 0x49a JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x49b PushV
	var_123_object = var_81_object; // 0x49c Mov
	func_1262(var_123_object); // 0x49d NEW_2
	var_157_bool = var_122_bool == 0; // 0x49f Not
	if(var_157_bool == 0) goto Label_1187; // 0x4a0 JumpB
	var_80_bool = 0; // 0x4a1 MovB
	return 4; // 0x4a2 Return
	
Label_1187:
	var_158_int = 2; // 0x4a3 PushI
	irand(var_88_int, var_158_int); // 0x4a4 Func
	var_159_int = var_88_int; // 0x4a6 Push
	if(var_159_int == 0) goto Label_1200; // 0x4a7 JumpB
	var_160_string = "voice_common"; // 0x4a8 PushS
	var_161_int = 1; // 0x4a9 PushI
	var_162_int = var_87_int + var_161_int; // 0x4aa Add
	var_163_int = 3; // 0x4ab PushI
	var_164_int = var_162_int / var_163_int; // 0x4ac Mod
	SetVariable(var_160_string, var_164_int); // 0x4ad Func
	goto Label_1204; // 0x4af Jump
	
Label_1204:
	goto Label_1223; // 0x4b4 Jump
	
Label_1223:
	var_80_bool = 1; // 0x4c7 MovB
	return 4; // 0x4c8 Return
	
Label_1200:
	var_165_string = "voice_common"; // 0x4b0 PushS
	var_166_int = 0; // 0x4b1 PushI
	SetVariable(var_165_string, var_166_int); // 0x4b2 Func
	
Label_1205:
	var_167_bool = 0; var_168_object = Obj(); // 0x4b5 PushV
	var_168_object = var_81_object; // 0x4b6 Mov
	func_1262(var_168_object); // 0x4b7 NEW_2
	var_169_bool = var_167_bool == 0; // 0x4b9 Not
	if(var_169_bool == 0) goto Label_1219; // 0x4ba JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0x4bb PushV
	var_171_object = var_81_object; // 0x4bc Mov
	func_1225(var_171_object); // 0x4bd NEW_2
	var_172_bool = var_170_bool == 0; // 0x4bf Not
	if(var_172_bool == 0) goto Label_1219; // 0x4c0 JumpB
	var_80_bool = 0; // 0x4c1 MovB
	return 4; // 0x4c2 Return
	
Label_1219:
	var_173_string = "voice_common"; // 0x4c3 PushS
	var_174_int = 1; // 0x4c4 PushI
	SetVariable(var_173_string, var_174_int); // 0x4c5 Func
}


func_1422(var_78_float, var_79_float, var_80_float, var_81_float)
{
	var_82_bool = var_79_float < var_80_float; // 0x58f LT
	if(var_82_bool == 0) goto Label_1427; // 0x590 JumpB
	var_78_float = var_80_float; // 0x591 Mov
	return 0; // 0x592 Return
	
Label_1427:
	var_83_bool = var_79_float > var_81_float; // 0x593 GT
	if(var_83_bool == 0) goto Label_1431; // 0x594 JumpB
	var_78_float = var_81_float; // 0x595 Mov
	return 0; // 0x596 Return
	
Label_1431:
	var_78_float = var_79_float; // 0x597 Mov
	return 0; // 0x598 Return
}


func_401()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0; // 0x191 PushV
	WaitForAnimEnd(); // 0x192 Func
	var_25_bool = 0; // 0x194 PushV
	func_1077(var_25_bool); // 0x195 NEW_2
	var_28_bool = var_25_bool == 0; // 0x197 Not
	if(var_28_bool == 0) goto Label_410; // 0x198 JumpB
	return 14; // 0x199 Return
	
Label_410:
	var_29_int = 0; // 0x19a PushV
	func_1484(var_29_int); // 0x19b NEW_2
	var_18_int = var_29_int; // 0x19c Mov
	var_19_int = 0; // 0x19e MovI
	
Label_415:
	var_42_bool = 0; // 0x19f PushV
	var_42_bool = 0; // 0x1a0 MovB
	var_43_int = 5; // 0x1a1 PushI
	var_44_bool = var_19_int < var_43_int; // 0x1a2 LT
	if(var_44_bool == 0) goto Label_425; // 0x1a3 JumpB
	var_45_bool = 0; // 0x1a4 PushV
	func_1077(var_45_bool); // 0x1a5 NEW_2
	if(var_45_bool == 0) goto Label_425; // 0x1a7 JumpB
	var_42_bool = 1; // 0x1a8 MovB
	
Label_425:
	if(var_42_bool == 0) goto Label_477; // 0x1a9 JumpB
	var_46_int = 3; // 0x1aa PushI
	irand(var_20_int, var_46_int); // 0x1ab Func
	var_47_int = 0; // 0x1ad PushI
	var_48_bool = var_20_int == var_47_int; // 0x1ae Eq
	if(var_48_bool == 0) goto Label_449; // 0x1af JumpB
	var_49_int = var_18_int; // 0x1b0 Push
	if(var_49_int == 0) goto Label_448; // 0x1b1 JumpB
	irand(var_21_int, var_18_int); // 0x1b2 Func
	var_50_string = "all"; // 0x1b4 PushS
	var_51_string = ""; var_52_int = 0; // 0x1b5 PushV
	var_52_int = var_21_int; // 0x1b6 Mov
	func_1477(var_51_string, var_52_int); // 0x1b7 NEW_2
	PlayAnimation(var_50_string, var_51_string); // 0x1b9 Func
	WaitForAnimEnd(var_22_bool); // 0x1bb Func
	var_53_bool = var_22_bool == 0; // 0x1bd Not
	if(var_53_bool == 0) goto Label_448; // 0x1be JumpB
	goto Label_477; // 0x1bf Jump
	
Label_477:
	ResetAAS(); // 0x1dd Func
	return 14; // 0x1df Return
	
Label_448:
	goto Label_466; // 0x1c0 Jump
	
Label_466:
	var_54_bool = 0; // 0x1d2 PushV
	func_480(var_54_bool); // 0x1d3 NEW_2
	var_55_bool = var_54_bool == 0; // 0x1d5 Not
	if(var_55_bool == 0) goto Label_472; // 0x1d6 JumpB
	goto Label_477; // 0x1d7 Jump
	
Label_472:
	ResetAAS(); // 0x1d8 Func
	var_56_int = 1; // 0x1da PushI
	var_19_int = var_19_int + var_56_int; // 0x1db Add2
	goto Label_415; // 0x1dc Jump
	
Label_449:
	var_57_int = 1; // 0x1c1 PushI
	var_58_bool = var_20_int == var_57_int; // 0x1c2 Eq
	if(var_58_bool == 0) goto Label_463; // 0x1c3 JumpB
	var_59_int = 4; // 0x1c4 PushI
	rand(var_23_float, var_59_int); // 0x1c5 Func
	var_60_int = 1; // 0x1c7 PushI
	var_61_int = var_23_float + var_60_int; // 0x1c8 Add
	Sleep(var_61_int, var_24_bool); // 0x1c9 Func
	var_62_bool = var_24_bool == 0; // 0x1cb Not
	if(var_62_bool == 0) goto Label_462; // 0x1cc JumpB
	goto Label_477; // 0x1cd Jump
	
Label_462:
	goto Label_466; // 0x1ce Jump
	
Label_463:
	var_63_int = var_19_int; // 0x1cf Push
	if(var_63_int == 0) goto Label_466; // 0x1d0 JumpB
	goto Label_477; // 0x1d1 Jump
}


func_1552(var_9_object)
{
	var_10_int = 100; // 0x611 PushI
	KillTimer(var_10_int); // 0x612 Func
	var_11_bool = 0; var_12_string = ""; var_13_string = ""; // 0x614 PushV
	var_12_string = "quest_d6_03"; // 0x615 MovS
	var_13_string = "albinos_dead"; // 0x616 MovS
	func_1456(var_11_bool, var_12_string, var_13_string); // 0x617 NEW_2
	var_17_object = Obj(); // 0x619 PushV
	var_17_object = var_9_object; // 0x61a Mov
	TaskCall(4); // 0x61b TaskCall
	func_695(var_17_object); // 0x61c NEW_2
	TaskReturn(); // 0x61d TaskReturn
	return 0; // 0x61f Return
}


func_663(var_2_object)
{
	Stop(); // 0x297 Func
	var_9_int = 120; // 0x299 PushI
	KillTimer(var_9_int); // 0x29a Func
	var_2_object = 1; // 0x29c TMovB
	return 0; // 0x29d Return
}


func_1305(var_216_string)
{
	var_217_bool = 0; var_218_float = 0; var_219_float = 0; var_220_bool = 0; var_221_float = 0; var_222_float = 0; // 0x519 PushV
	lshHasAnimation(var_220_bool, var_216_string); // 0x51a Func
	var_223_bool = var_220_bool; // 0x51c Push
	if(var_223_bool == 0) goto Label_1316; // 0x51d JumpB
	lshGetAnimTimes(var_216_string, var_221_float, var_222_float); // 0x51e Func
	var_224_bool = 0; // 0x520 PushB
	lshPlayAnimation(var_221_float, var_222_float, var_224_bool); // 0x521 Func
	goto Label_1320; // 0x523 Jump
	
Label_1320:
	return 6; // 0x528 Return
	
Label_1316:
	var_225_string = "Can't find lsh animation : "; // 0x524 PushS
	var_226_int = var_225_string + var_216_string; // 0x525 Add
	Trace(var_226_int); // 0x526 Func
}


func_1433(var_158_float, var_159_cvector, var_160_cvector)
{
	var_161_int = var_159_cvector | var_160_cvector; // 0x59a Or
	var_162_int = var_159_cvector | var_159_cvector; // 0x59b Or
	var_163_int = var_160_cvector | var_160_cvector; // 0x59c Or
	var_164_float = var_162_int * var_163_int; // 0x59d Mult
	var_165_float = sqrt(var_164_float); // 0x59e Sqrt
	var_158_float = var_161_int / var_161_int; // 0x59f Div2
	return 0; // 0x5a0 Return
}


func_538(var_0_object, var_1_object, var_2_object, var_12_object)
{
	var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; // 0x21a PushV
	var_0_object = var_12_object; // 0x21b TMov
	var_26_cvector = CVector(0,0,0); var_27_float = 0; // 0x21c PushV
	var_27_float = 1.74533; // 0x21d MovF
	func_508(var_26_cvector, var_27_float); // 0x21e NEW_2
	var_21_cvector = var_26_cvector; // 0x21f Mov
	var_22_float = var_21_cvector | var_21_cvector; // 0x221 Or2
	var_56_float = 2500.0; // 0x222 PushF
	var_57_bool = var_22_float < var_56_float; // 0x223 LT
	if(var_57_bool == 0) goto Label_567; // 0x224 JumpB
	var_58_cvector = CVector(0,0,0); var_59_float = 0; // 0x225 PushV
	var_59_float = 2.61799; // 0x226 MovF
	func_508(var_58_cvector, var_59_float); // 0x227 NEW_2
	var_21_cvector = var_58_cvector; // 0x228 Mov
	var_22_float = var_21_cvector | var_21_cvector; // 0x22a Or2
	var_60_float = 2500.0; // 0x22b PushF
	var_61_bool = var_22_float < var_60_float; // 0x22c LT
	if(var_61_bool == 0) goto Label_567; // 0x22d JumpB
	var_62_string = "Can't retreat, distance: "; // 0x22e PushS
	var_63_float = sqrt(var_22_float); // 0x22f Sqrt
	var_64_int = var_62_string + var_63_float; // 0x230 Add
	Trace(var_64_int); // 0x231 Func
	var_65_float = 0.5; // 0x233 PushF
	Sleep(var_65_float); // 0x234 Func
	return 10; // 0x236 Return
	
Label_567:
	var_66_float = GetByIndex(var_21_cvector, 0); // 0x237 PushE
	var_67_float = GetByIndex(var_21_cvector, 2); // 0x238 PushE
	Rotate(var_66_float, var_67_float); // 0x239 Func
	var_68_cvector = CVector(0,0,0); // 0x23b PushV
	func_841(var_68_cvector); // 0x23c NEW_2
	var_1_object = var_68_cvector + var_21_cvector; // 0x23e Add2
	var_71_int = 120; // 0x23f PushI
	var_72_float = 0.5; // 0x240 PushF
	SetTimer(var_71_int, var_72_float); // 0x241 Func
	var_2_object = 0; // 0x243 TMovB
	
Label_580:
	var_73_int = 1; // 0x244 PushI
	MovePoint(var_73_int, var_73_int, var_23_bool); // 0x245 Func
	var_74_bool = var_23_bool; // 0x247 Push
	if(var_74_bool == 0) goto Label_608; // 0x248 JumpB
	var_75_bool = var_0_object == 0; // 0x249 NullEq
	if(var_75_bool == 0) goto Label_589; // 0x24a JumpB
	goto Label_610; // 0x24b Jump
	
Label_610:
	return 10; // 0x262 Return
	
Label_589:
	var_76_cvector = CVector(0,0,0); var_77_float = 0; // 0x24d PushV
	var_77_float = 2.61799; // 0x24e MovF
	func_508(var_76_cvector, var_77_float); // 0x24f NEW_2
	var_24_cvector = var_76_cvector; // 0x250 Mov
	var_25_float = var_24_cvector | var_24_cvector; // 0x252 Or2
	var_78_float = 2500.0; // 0x253 PushF
	var_79_bool = var_25_float >= var_78_float; // 0x254 GE
	if(var_79_bool == 0) goto Label_607; // 0x255 JumpB
	var_80_cvector = CVector(0,0,0); // 0x256 PushV
	func_841(var_80_cvector); // 0x257 NEW_2
	var_1_object = var_80_cvector + var_24_cvector; // 0x259 Add2
	var_81_int = 120; // 0x25a PushI
	var_82_float = 0.5; // 0x25b PushF
	SetTimer(var_81_int, var_82_float); // 0x25c Func
	goto Label_608; // 0x25e Jump
	
Label_608:
	var_83_bool = var_2_object == 0; // 0x260 Not
	if(var_83_bool == 0) goto Label_580; // 0x261 JumpB
	
Label_607:
	goto Label_610; // 0x25f Jump
}


func_795(var_40_string)
{
	RemoveRTEnvelope(); // 0x31c Func
	SetDeathState(); // 0x31e Func
	Stop(); // 0x320 Func
	StopAsync(); // 0x322 Func
	StopSecondaryAnimation(); // 0x324 Func
	var_41_string = ""; // 0x326 PushV
	var_41_string = var_40_string; // 0x327 Mov
	func_1358(var_41_string); // 0x328 NEW_2
	var_70_string = "all"; // 0x32a PushS
	PlayAnimation(var_70_string, var_40_string); // 0x32b Func
	WaitForAnimEnd(); // 0x32d Func
	var_71_string = "all"; // 0x32f PushS
	LockAnimationEnd(var_71_string, var_40_string); // 0x330 Func
	RemoveEnvelope(); // 0x332 Func
	return 0; // 0x334 Return
}


func_1568()
{
	var_11_object = Obj(); var_12_float = 0; var_13_object = Obj(); var_14_float = 0; // 0x620 PushV
	var_15_string = "player"; // 0x621 PushS
	FindActor(var_13_object, var_15_string); // 0x622 Func
	var_16_object = var_13_object; // 0x624 Push
	if(var_16_object == 0) goto Label_1592; // 0x625 JumpB
	var_17_float = 0; var_18_object = Obj(); // 0x626 PushV
	var_18_object = var_13_object; // 0x627 Mov
	func_853(var_18_object); // 0x628 NEW_2
	var_25_float = 640000.0; // 0x62a PushF
	var_26_bool = var_17_float <= var_25_float; // 0x62b LE
	if(var_26_bool == 0) goto Label_1592; // 0x62c JumpB
	var_27_float = 0; var_28_object = Obj(); var_29_float = 0; var_30_int = 0; // 0x62d PushV
	var_28_object = var_13_object; // 0x62e Mov
	var_29_float = 0.05; // 0x62f MovF
	var_30_int = 0; // 0x630 MovI
	func_878(var_27_float, var_28_object, var_29_float, var_30_int); // 0x631 NEW_2
	var_14_float = var_27_float; // 0x632 Mov
	var_93_int = 6; // 0x634 PushI
	var_94_float = 0.05; // 0x635 PushF
	ReportHit(var_13_object, var_93_int, var_14_float, var_94_float); // 0x636 Func
	
Label_1592:
	return 4; // 0x638 Return
}


func_1441(var_184_int, var_185_string)
{
	var_186_int = 0; var_187_int = 0; // 0x5a1 PushV
	GetVariable(var_185_string, var_187_int); // 0x5a2 Func
	var_184_int = var_187_int; // 0x5a4 Mov
	return 2; // 0x5a5 Return
}


func_164(var_2_object, var_190_string)
{
	var_191_bool = 0; // 0xa5 PushV
	func_1550(var_191_bool); // 0xa6 NEW_2
	var_192_bool = var_191_bool == 0; // 0xa8 Not
	if(var_192_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_193_bool = var_190_string == var_2_object; // 0xab Eq
	if(var_193_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_194_string = ""; var_195_bool = 0; // 0xae PushV
	var_194_string = var_190_string; // 0xaf Mov
	var_196_string = ""; // 0xb0 PushS
	var_197_bool = var_190_string == var_196_string; // 0xb1 Eq
	if(var_197_bool == 0) goto Label_181; // 0xb2 JumpB
	var_195_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_1321(var_194_string, var_195_bool); // 0xb6 NEW_2
	var_2_object = var_190_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_195_bool = 1; // 0xb5 MovB
}


func_1446(var_88_float)
{
	var_89_object = Obj(); var_90_object = Obj(); // 0x5a6 PushV
	CreateFloatVector(var_90_object); // 0x5a7 Func
	add(var_88_float); // 0x5a9 ObjFunc
	var_91_int = 15; // 0x5ab PushI
	SendWorldWndMessage(var_91_int, var_90_object); // 0x5ac Func
	return 2; // 0x5ae Return
}


func_679(var_0_object, var_147_bool)
{
	var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); // 0x2a7 PushV
	GetDirection(var_150_cvector); // 0x2a8 Func
	var_152_cvector = CVector(0,0,0); var_153_object = Obj(); // 0x2aa PushV
	var_153_object = var_0_object; // 0x2ab MovT
	func_846(var_153_object); // 0x2ac NEW_2
	var_151_cvector = var_152_cvector; // 0x2ad Mov
	var_158_float = 0; var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); // 0x2af PushV
	var_159_cvector = var_150_cvector; // 0x2b0 Mov
	var_160_cvector = var_151_cvector; // 0x2b1 Mov
	func_1433(var_158_float, var_159_cvector, var_160_cvector); // 0x2b2 NEW_2
	var_166_float = -0.34202; // 0x2b4 PushF
	var_147_bool = var_158_float >= var_166_float; // 0x2b5 GE2
	return 4; // 0x2b6 Return
}


func_1063(var_14_object, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x427 PushV
	GetScene(var_21_object); // 0x428 Func
	var_23_string = "scripted"; // 0x42a PushS
	var_24_string = "blood_dir.xml"; // 0x42b PushS
	AddActorByType(var_22_object, var_23_string, var_21_object, var_17_cvector, var_18_cvector, var_24_string); // 0x42c Func
	var_25_object = Obj(); // 0x42e PushV
	var_25_object = var_14_object; // 0x42f Mov
	func_951(var_25_object); // 0x430 NEW_2
	return 4; // 0x432 Return
}


func_1321(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0x529 PushV
	lshHasAnimation(var_201_bool, var_194_string); // 0x52a Func
	var_204_bool = var_201_bool; // 0x52c Push
	if(var_204_bool == 0) goto Label_1331; // 0x52d JumpB
	lshGetAnimTimes(var_194_string, var_202_float, var_203_float); // 0x52e Func
	lshPlayAnimation(var_202_float, var_203_float, var_195_bool); // 0x530 Func
	goto Label_1335; // 0x532 Jump
	
Label_1335:
	return 6; // 0x537 Return
	
Label_1331:
	var_205_string = "Can't find lsh animation : "; // 0x533 PushS
	var_206_int = var_205_string + var_194_string; // 0x534 Add
	Trace(var_206_int); // 0x535 Func
}


func_1456(var_11_bool, var_12_string, var_13_string)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x5b0 PushV
	FindActor(var_15_object, var_12_string); // 0x5b1 Func
	var_16_bool = var_15_object == 0; // 0x5b3 NullEq
	if(var_16_bool == 0) goto Label_1463; // 0x5b4 JumpB
	var_11_bool = 0; // 0x5b5 MovB
	return 2; // 0x5b6 Return
	
Label_1463:
	Trigger(var_15_object, var_13_string); // 0x5b7 Func
	var_11_bool = 1; // 0x5b9 MovB
	return 2; // 0x5ba Return
}


func_1077(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0; // 0x435 PushV
	IsLoaded(var_27_bool); // 0x436 Func
	var_25_bool = var_27_bool; // 0x438 Mov
	return 2; // 0x439 Return
}


func_951(var_25_object)
{
	var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; // 0x3b7 PushV
	var_40_bool = var_25_object == 0; // 0x3b8 NullEq
	if(var_40_bool == 0) goto Label_955; // 0x3b9 JumpB
	return 14; // 0x3ba Return
	
Label_955:
	IsDead(var_33_bool); // 0x3bb Func
	var_41_bool = var_33_bool; // 0x3bd Push
	if(var_41_bool == 0) goto Label_960; // 0x3be JumpB
	return 14; // 0x3bf Return
	
Label_960:
	GetSecondaryAnimationType(var_34_int); // 0x3c0 Func
	var_42_int = 0; // 0x3c2 PushI
	var_43_bool = var_34_int < var_42_int; // 0x3c3 LT
	if(var_43_bool == 0) goto Label_966; // 0x3c4 JumpB
	return 14; // 0x3c5 Return
	
Label_966:
	GetPosition(var_35_cvector); // 0x3c6 ObjFunc
	GetPosition(var_36_cvector); // 0x3c8 Func
	GetDirection(var_37_cvector); // 0x3ca Func
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x3cc Sub2
	var_44_float = GetByIndex(var_38_cvector, 0); // 0x3cd PushE
	var_45_float = GetByIndex(var_37_cvector, 0); // 0x3ce PushE
	var_46_float = var_44_float * var_45_float; // 0x3cf Mult
	var_47_float = GetByIndex(var_38_cvector, 2); // 0x3d0 PushE
	var_48_float = GetByIndex(var_37_cvector, 2); // 0x3d1 PushE
	var_49_float = var_47_float * var_48_float; // 0x3d2 Mult
	var_50_int = var_46_float + var_49_float; // 0x3d3 Add
	var_51_int = 0; // 0x3d4 PushI
	var_52_bool = var_50_int >= var_51_int; // 0x3d5 GE
	if(var_52_bool == 0) goto Label_985; // 0x3d6 JumpB
	var_39_string = "fhit"; // 0x3d7 MovS
	goto Label_986; // 0x3d8 Jump
	
Label_986:
	var_53_string = "hit_react"; // 0x3da PushS
	var_54_string = "1"; // 0x3db PushS
	var_55_int = var_39_string + var_54_string; // 0x3dc Add
	var_56_string = "2"; // 0x3dd PushS
	var_57_int = var_39_string + var_56_string; // 0x3de Add
	var_58_int = -10; // 0x3df PushI
	FadeSecondaryAnimation(var_53_string, var_55_int, var_57_int, var_58_int); // 0x3e0 Func
	return 14; // 0x3e2 Return
	
Label_985:
	var_39_string = "bhit"; // 0x3d9 MovS
}


func_1336(var_114_bool, var_115_string)
{
	var_116_bool = 0; var_117_bool = 0; // 0x538 PushV
	var_118_bool = 0; // 0x539 PushV
	func_1550(var_118_bool); // 0x53a NEW_2
	if(var_118_bool == 0) goto Label_1349; // 0x53c JumpB
	lshHasSpeech(var_117_bool, var_115_string); // 0x53d Func
	var_119_bool = var_117_bool; // 0x53f Push
	if(var_119_bool == 0) goto Label_1349; // 0x540 JumpB
	lshPlaySpeech(var_115_string); // 0x541 Func
	var_114_bool = 1; // 0x543 MovB
	return 2; // 0x544 Return
	
Label_1349:
	var_114_bool = 0; // 0x545 MovB
	return 2; // 0x546 Return
}


func_695(var_17_object)
{
	var_18_object = Obj(); // 0x2b8 PushV
	var_18_object = var_17_object; // 0x2b9 Mov
	func_704(var_18_object); // 0x2ba NEW_2
	
Label_700:
	Hold(); // 0x2bc Func
	goto Label_700; // 0x2be Jump
}


func_1082(var_20_bool, var_22_float)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; // 0x43a PushV
	GetPosition(var_33_cvector); // 0x43b ObjFunc
	GetEyesHeight(var_32_float); // 0x43d ObjFunc
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x43f PushE
	var_41_float = var_41_float + var_32_float; // 0x440 Add2
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x441 PopE
	GetPosition(var_34_cvector); // 0x442 Func
	GetEyesHeight(var_32_float); // 0x444 Func
	var_42_float = GetByIndex(var_34_cvector, 1); // 0x446 PushE
	var_42_float = var_42_float + var_32_float; // 0x447 Add2
	SetByIndex(var_34_cvector, 1) = var_42_float; // 0x448 PopE
	var_35_cvector = var_33_cvector - var_34_cvector; // 0x449 Sub2
	var_43_float = GetByIndex(var_35_cvector, 1); // 0x44a PushE
	var_43_float = 0; // 0x44b MovI
	SetByIndex(var_35_cvector, 1) = var_43_float; // 0x44c PopE
	var_44_int = var_35_cvector | var_35_cvector; // 0x44d Or
	var_45_float = sqrt(var_44_int); // 0x44e Sqrt
	var_35_cvector = var_35_cvector / var_35_cvector; // 0x44f Div2
	var_36_cvector = -var_35_cvector; // 0x450 Neg2
	var_46_float = var_35_cvector * var_22_float; // 0x451 Mult
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x452 PushV
	var_49_cvector = CVector(0.0, 1.0, 0.0); // 0x453 PushVec
	var_48_cvector = var_36_cvector ^ var_49_cvector; // 0x454 Xor2
	func_1405(var_47_cvector, var_48_cvector); // 0x455 NEW_2
	var_55_int = 25; // 0x457 PushI
	var_56_float = var_47_cvector * var_55_int; // 0x458 Mult
	var_57_int = var_46_float + var_56_float; // 0x459 Add
	var_58_cvector = CVector(0.0, 10.0, 0.0); // 0x45a PushVec
	var_37_cvector = var_57_int - var_58_cvector; // 0x45b Sub2
	var_38_cvector = var_34_cvector + var_37_cvector; // 0x45c Add2
	IsOverrideActive(var_39_bool); // 0x45d Func
	var_59_bool = var_39_bool; // 0x45f Push
	if(var_59_bool == 0) goto Label_1123; // 0x460 JumpB
	var_20_bool = 0; // 0x461 MovB
	return 18; // 0x462 Return
	
Label_1123:
	StopWorld(); // 0x463 Func
	CameraTransit(var_38_cvector, var_36_cvector); // 0x465 Func
	var_60_float = GetByIndex(var_37_cvector, 0); // 0x467 PushE
	var_61_float = GetByIndex(var_37_cvector, 2); // 0x468 PushE
	Rotate(var_60_float, var_61_float); // 0x469 Func
	var_62_bool = 0; // 0x46b PushV
	func_1550(var_62_bool); // 0x46c NEW_2
	if(var_62_bool == 0) goto Label_1136; // 0x46e JumpB
	goto Label_1144; // 0x46f Jump
	
Label_1144:
	CameraWaitForPlayFinish(); // 0x478 Func
	ResumeWorld(); // 0x47a Func
	var_20_bool = 1; // 0x47c MovB
	return 18; // 0x47d Return
	
Label_1136:
	var_63_string = "head"; // 0x470 PushS
	HasAnimationTrack(var_40_bool, var_63_string); // 0x471 Func
	var_64_bool = var_40_bool; // 0x473 Push
	if(var_64_bool == 0) goto Label_1144; // 0x474 JumpB
	var_65_string = "head"; // 0x475 PushS
	LookAsyncCamera(var_65_string); // 0x476 Func
}


func_827(var_58_string, var_59_int)
{
	var_60_int = 2; // 0x33c PushI
	var_61_bool = var_59_int == var_60_int; // 0x33d Eq
	if(var_61_bool == 0) goto Label_834; // 0x33e JumpB
	var_58_string = "fire"; // 0x33f MovS
	return 0; // 0x340 Return
	
Label_834:
	var_62_int = 1; // 0x342 PushI
	var_63_bool = var_59_int == var_62_int; // 0x343 Eq
	if(var_63_bool == 0) goto Label_839; // 0x344 JumpB
	var_58_string = "bullet"; // 0x345 MovS
	return 0; // 0x346 Return
	
Label_839:
	var_58_string = "phys"; // 0x347 MovS
	return 0; // 0x348 Return
}


func_1468(var_135_int)
{
	var_136_float = 0; var_137_float = 0; // 0x5bc PushV
	GetGameTime(var_137_float); // 0x5bd Func
	var_138_int = 1; // 0x5bf PushI
	var_139_int = 0; // 0x5c0 PushV
	var_140_int = 24; // 0x5c1 PushI
	var_139_int = var_137_float / var_137_float; // 0x5c2 Div2
	var_135_int = var_138_int + var_139_int; // 0x5c3 Add2
	return 2; // 0x5c4 Return
}


func_704(var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); // 0x2c0 PushV
	var_39_bool = var_18_object == 0; // 0x2c1 NullEq
	if(var_39_bool == 0) goto Label_712; // 0x2c2 JumpB
	var_40_string = ""; // 0x2c3 PushV
	var_40_string = "fdie"; // 0x2c4 MovS
	func_795(var_40_string); // 0x2c5 NEW_2
	goto Label_794; // 0x2c7 Jump
	
Label_794:
	return 20; // 0x31a Return
	
Label_712:
	GetPosition(var_29_cvector); // 0x2c8 ObjFunc
	GetPosition(var_30_cvector); // 0x2ca Func
	GetDirection(var_31_cvector); // 0x2cc Func
	var_32_cvector = var_30_cvector - var_29_cvector; // 0x2ce Sub2
	var_72_float = GetByIndex(var_32_cvector, 0); // 0x2cf PushE
	var_73_float = GetByIndex(var_31_cvector, 0); // 0x2d0 PushE
	var_74_float = var_72_float * var_73_float; // 0x2d1 Mult
	var_75_float = GetByIndex(var_32_cvector, 2); // 0x2d2 PushE
	var_76_float = GetByIndex(var_31_cvector, 2); // 0x2d3 PushE
	var_77_float = var_75_float * var_76_float; // 0x2d4 Mult
	var_78_int = var_74_float + var_77_float; // 0x2d5 Add
	var_79_int = 0; // 0x2d6 PushI
	var_80_bool = var_78_int >= var_79_int; // 0x2d7 GE
	if(var_80_bool == 0) goto Label_731; // 0x2d8 JumpB
	var_33_string = "fdie"; // 0x2d9 MovS
	goto Label_732; // 0x2da Jump
	
Label_732:
	RemoveRTEnvelope(); // 0x2dc Func
	SetDeathState(); // 0x2de Func
	Stop(); // 0x2e0 Func
	StopAsync(); // 0x2e2 Func
	var_34_object = var_18_object; // 0x2e4 Mov
	var_81_string = "GetScriptProperty"; // 0x2e5 PushS
	var_82_int = 2; // 0x2e6 PushI
	var_83_bool = IsFuncExist(var_18_object, var_81_string, var_82_int); // 0x2e7 FuncExist
	if(var_83_bool == 0) goto Label_756; // 0x2e8 JumpB
	var_84_string = "Owner"; // 0x2e9 PushS
	HasScriptProperty(var_35_bool, var_84_string); // 0x2ea ObjFunc
	var_85_bool = var_35_bool; // 0x2ec Push
	if(var_85_bool == 0) goto Label_756; // 0x2ed JumpB
	var_86_string = "Owner"; // 0x2ee PushS
	GetScriptProperty(var_34_object, var_86_string); // 0x2ef ObjFunc
	var_87_bool = var_34_object == 0; // 0x2f1 NullEq
	if(var_87_bool == 0) goto Label_756; // 0x2f2 JumpB
	var_34_object = var_18_object; // 0x2f3 Mov
	
Label_756:
	var_88_string = "@GetEyesHeight"; // 0x2f4 PushS
	var_89_int = 1; // 0x2f5 PushI
	var_90_bool = IsFuncExist(var_34_object, var_88_string, var_89_int); // 0x2f6 FuncExist
	if(var_90_bool == 0) goto Label_771; // 0x2f7 JumpB
	GetEyesHeight(var_37_float); // 0x2f8 ObjFunc
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x2fa MovV
	var_91_float = GetByIndex(var_38_cvector, 1); // 0x2fb PushE
	var_91_float = var_37_float; // 0x2fc Mov
	SetByIndex(var_38_cvector, 1) = var_91_float; // 0x2fd PopE
	var_92_string = "head"; // 0x2fe PushS
	LookAsync(var_18_object, var_92_string, var_38_cvector); // 0x2ff Func
	var_36_bool = 1; // 0x301 MovB
	goto Label_772; // 0x302 Jump
	
Label_772:
	var_93_string = ""; // 0x304 PushV
	var_93_string = var_33_string; // 0x305 Mov
	func_1358(var_93_string); // 0x306 NEW_2
	var_94_string = "all"; // 0x308 PushS
	PlayAnimation(var_94_string, var_33_string); // 0x309 Func
	WaitForAnimEnd(); // 0x30b Func
	var_95_bool = var_36_bool; // 0x30d Push
	if(var_95_bool == 0) goto Label_788; // 0x30e JumpB
	StopAsync(); // 0x30f Func
	var_96_string = "head"; // 0x311 PushS
	UnlookAsync(var_96_string); // 0x312 Func
	
Label_788:
	var_97_string = "all"; // 0x314 PushS
	LockAnimationEnd(var_97_string, var_33_string); // 0x315 Func
	RemoveEnvelope(); // 0x317 Func
	var_34_object = 0; // 0x319 SetNull
	
Label_771:
	var_36_bool = 0; // 0x303 MovB
	
Label_731:
	var_33_string = "bdie"; // 0x2db MovS
}


func_1477(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = ""; // 0x5c5 PushV
	var_38_string = "idle"; // 0x5c6 MovS
	var_39_int = var_36_int; // 0x5c7 Push
	if(var_39_int == 0) goto Label_1482; // 0x5c8 JumpB
	var_38_string = var_38_string + var_36_int; // 0x5c9 Add2
	
Label_1482:
	var_35_string = var_38_string; // 0x5ca Mov
	return 2; // 0x5cb Return
}


func_1351()
{
	var_11_bool = 0; // 0x547 PushV
	func_1550(var_11_bool); // 0x548 NEW_2
	if(var_11_bool == 0) goto Label_1357; // 0x54a JumpB
	lshStopSpeech(); // 0x54b Func
	
Label_1357:
	return 0; // 0x54d Return
}


func_841(var_167_cvector)
{
	var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); // 0x349 PushV
	GetPosition(var_169_cvector); // 0x34a Func
	var_167_cvector = var_169_cvector; // 0x34c Mov
	return 2; // 0x34d Return
}


func_1225(var_91_bool)
{
	var_93_string = ""; var_94_int = 0; var_95_bool = 0; var_96_int = 0; var_97_string = ""; var_98_string = ""; var_99_int = 0; var_100_bool = 0; var_101_int = 0; var_102_string = ""; // 0x4c9 PushV
	var_98_string = "c"; // 0x4ca MovS
	var_99_int = 0; // 0x4cb MovI
	
Label_1228:
	var_103_int = 1; // 0x4cc PushI
	if(var_103_int == 0) goto Label_1241; // 0x4cd JumpB
	var_104_int = 1; // 0x4ce PushI
	var_105_int = var_99_int + var_104_int; // 0x4cf Add
	var_106_int = var_98_string + var_105_int; // 0x4d0 Add
	HasProperty(var_106_int, var_100_bool); // 0x4d1 ObjFunc
	var_107_bool = var_100_bool == 0; // 0x4d3 Not
	if(var_107_bool == 0) goto Label_1238; // 0x4d4 JumpB
	goto Label_1241; // 0x4d5 Jump
	
Label_1241:
	var_108_bool = var_99_int == 0; // 0x4d9 Not
	if(var_108_bool == 0) goto Label_1245; // 0x4da JumpB
	var_91_bool = 0; // 0x4db MovB
	return 10; // 0x4dc Return
	
Label_1245:
	var_101_int = 0; // 0x4dd MovI
	var_109_int = 1; // 0x4de PushI
	var_110_bool = var_99_int > var_109_int; // 0x4df GT
	if(var_110_bool == 0) goto Label_1251; // 0x4e0 JumpB
	irand(var_101_int, var_99_int); // 0x4e1 Func
	
Label_1251:
	var_111_int = 1; // 0x4e3 PushI
	var_112_int = var_101_int + var_111_int; // 0x4e4 Add
	var_113_int = var_98_string + var_112_int; // 0x4e5 Add
	GetProperty(var_113_int, var_102_string); // 0x4e6 ObjFunc
	var_114_bool = 0; var_115_string = ""; // 0x4e8 PushV
	var_115_string = var_102_string; // 0x4e9 Mov
	func_1336(var_114_bool, var_115_string); // 0x4ea NEW_2
	var_91_bool = var_114_bool; // 0x4eb Mov
	return 10; // 0x4ed Return
	
Label_1238:
	var_120_int = 1; // 0x4d6 PushI
	var_99_int = var_99_int + var_120_int; // 0x4d7 Add2
	goto Label_1228; // 0x4d8 Jump
}


func_1484(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0; // 0x5cc PushV
	var_32_int = 0; // 0x5cd MovI
	
Label_1486:
	var_34_string = "all"; // 0x5ce PushS
	var_35_string = ""; var_36_int = 0; // 0x5cf PushV
	var_36_int = var_32_int; // 0x5d0 Mov
	func_1477(var_35_string, var_36_int); // 0x5d1 NEW_2
	HasAnimation(var_33_bool, var_34_string, var_35_string); // 0x5d3 Func
	var_40_bool = var_33_bool == 0; // 0x5d5 Not
	if(var_40_bool == 0) goto Label_1496; // 0x5d6 JumpB
	goto Label_1499; // 0x5d7 Jump
	
Label_1499:
	var_29_int = var_32_int; // 0x5db Mov
	return 4; // 0x5dc Return
	
Label_1496:
	var_41_int = 1; // 0x5d8 PushI
	var_32_int = var_32_int + var_41_int; // 0x5d9 Add2
	goto Label_1486; // 0x5da Jump
}


func_846(var_42_cvector)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0x34e PushV
	GetPosition(var_46_cvector); // 0x34f Func
	GetPosition(var_47_cvector); // 0x351 ObjFunc
	var_42_cvector = var_47_cvector - var_46_cvector; // 0x353 Sub2
	return 4; // 0x354 Return
}


func_1358(var_41_string)
{
	var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x54e PushV
	IsExisting3DSound(var_50_bool, var_41_string); // 0x54f Func
	var_58_bool = var_50_bool == 0; // 0x551 Not
	if(var_58_bool == 0) goto Label_1383; // 0x552 JumpB
	var_51_int = 0; // 0x553 MovI
	
Label_1364:
	var_59_int = 1; // 0x554 PushI
	var_60_int = var_51_int + var_59_int; // 0x555 Add
	var_61_int = var_41_string + var_60_int; // 0x556 Add
	IsExisting3DSound(var_52_bool, var_61_int); // 0x557 Func
	var_62_bool = var_52_bool == 0; // 0x559 Not
	if(var_62_bool == 0) goto Label_1372; // 0x55a JumpB
	goto Label_1375; // 0x55b Jump
	
Label_1375:
	var_63_bool = var_51_int == 0; // 0x55f Not
	if(var_63_bool == 0) goto Label_1378; // 0x560 JumpB
	return 16; // 0x561 Return
	
Label_1378:
	irand(var_53_int, var_51_int); // 0x562 Func
	var_64_int = 1; // 0x564 PushI
	var_65_int = var_53_int + var_64_int; // 0x565 Add
	var_41_string = var_41_string + var_65_int; // 0x566 Add2
	
Label_1383:
	Is3DSoundLoaded(var_54_bool, var_41_string); // 0x567 Func
	var_66_bool = var_54_bool; // 0x569 Push
	if(var_66_bool == 0) goto Label_1398; // 0x56a JumpB
	GetEyesHeight(var_55_float); // 0x56b Func
	GetDirection(var_56_cvector); // 0x56d Func
	var_67_int = 50; // 0x56f PushI
	var_57_cvector = var_56_cvector * var_67_int; // 0x570 Mult2
	var_68_float = GetByIndex(var_57_cvector, 1); // 0x571 PushE
	var_68_float = var_68_float + var_55_float; // 0x572 Add2
	SetByIndex(var_57_cvector, 1) = var_68_float; // 0x573 PopE
	PlayGlobalSound(var_41_string, var_57_cvector); // 0x574 Func
	
Label_1398:
	return 16; // 0x576 Return
	
Label_1372:
	var_69_int = 1; // 0x55c PushI
	var_51_int = var_51_int + var_69_int; // 0x55d Add2
	goto Label_1364; // 0x55e Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_175_object, var_176_object)
{
	var_0_object = var_176_object; // 0x52 TMov
	var_1_object = var_175_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_181_int = 1; // 0x55 PushI
	if(var_181_int == 0) goto Label_134; // 0x56 JumpB
	var_182_bool = 0; var_183_object = Obj(); // 0x57 PushV
	var_183_object = var_1_object; // 0x58 MovT
	func_1513(var_183_object); // 0x59 NEW_2
	if(var_182_bool == 0) goto Label_112; // 0x5b JumpB
	var_190_string = ""; // 0x5c PushV
	var_190_string = "Neutral"; // 0x5d MovS
	func_164(var_176_object, var_190_string); // 0x5e NEW_2
	var_207_int = 512071; // 0x60 PushI
	SetMessage(var_207_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_208_int = 512072; // 0x65 PushI
	var_209_int = 13294; // 0x66 PushI
	var_210_int = 13293; // 0x67 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x68 TObjFunc
	var_211_int = 512083; // 0x6a PushI
	var_212_int = 13294; // 0x6b PushI
	var_213_int = 13306; // 0x6c PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x6d TObjFunc
	goto Label_134; // 0x6f Jump
	
Label_134:
	var_214_bool = 0; // 0x86 PushV
	func_1550(var_214_bool); // 0x87 NEW_2
	if(var_214_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_215_string = var_3_string; // 0x8c PushT
	if(var_215_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_216_string = ""; // 0x8f PushV
	var_216_string = var_2_object; // 0x90 MovT
	func_1305(var_216_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_227_string = "all"; // 0x95 PushS
	var_228_string = "idle"; // 0x96 PushS
	PlayAnimation(var_227_string, var_228_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_229_string = var_3_string; // 0x9b PushT
	if(var_229_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_230_string = "all"; // 0x9e PushS
	var_231_string = "idle"; // 0x9f PushS
	PlayAnimation(var_230_string, var_231_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
	
Label_112:
	var_232_string = ""; // 0x70 PushV
	var_232_string = "Neutral"; // 0x71 MovS
	func_164(var_176_object, var_232_string); // 0x72 NEW_2
	var_233_int = 513029; // 0x74 PushI
	SetMessage(var_233_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_234_int = 513030; // 0x79 PushI
	var_235_int = -1; // 0x7a PushI
	var_236_int = 14237; // 0x7b PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x7c TObjFunc
	var_237_int = 536131; // 0x7e PushI
	var_238_int = -1; // 0x7f PushI
	var_239_int = 37890; // 0x80 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
}


func_853(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x355 PushV
	GetPosition(var_22_cvector); // 0x356 Func
	GetPosition(var_23_cvector); // 0x358 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x35a Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x35b Or2
	return 6; // 0x35c Return
}


func_1501()
{
	var_16_string = "d6q03"; // 0x5de PushS
	var_17_int = 2; // 0x5df PushI
	SetVariable(var_16_string, var_17_int); // 0x5e0 Func
	return 0; // 0x5e2 Return
}


func_861(var_84_bool, var_85_object)
{
	var_86_bool = 0; var_87_bool = 0; // 0x35d PushV
	IsPlayerActor(var_85_object, var_87_bool); // 0x35e Func
	var_84_bool = var_87_bool; // 0x360 Mov
	return 2; // 0x361 Return
}


func_480(var_54_bool)
{
	var_54_bool = 1; // 0x1e0 MovB
	return 0; // 0x1e1 Return
}


func_482()
{
	StopAnimation(); // 0x1e2 Func
	StopGroup0(); // 0x1e4 Func
	return 0; // 0x1e6 Return
}


func_1507()
{
	var_20_string = "ood6Albinos1"; // 0x5e4 PushS
	var_21_int = 1; // 0x5e5 PushI
	SetVariable(var_20_string, var_21_int); // 0x5e6 Func
	return 0; // 0x5e8 Return
}


func_611(var_0_object, var_1_object, var_2_object, var_95_int)
{
	var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_cvector = CVector(0,0,0); var_99_float = 0; var_100_cvector = CVector(0,0,0); var_101_float = 0; var_102_cvector = CVector(0,0,0); var_103_float = 0; // 0x263 PushV
	var_104_int = 120; // 0x264 PushI
	var_105_bool = var_95_int != var_104_int; // 0x265 Neq
	if(var_105_bool == 0) goto Label_616; // 0x266 JumpB
	return 8; // 0x267 Return
	
Label_616:
	var_106_bool = var_0_object == 0; // 0x268 NullEq
	if(var_106_bool == 0) goto Label_625; // 0x269 JumpB
	Stop(); // 0x26a Func
	var_107_int = 1; // 0x26c PushI
	KillTimer(var_107_int); // 0x26d Func
	var_2_object = 1; // 0x26f TMovB
	goto Label_662; // 0x270 Jump
	
Label_662:
	return 8; // 0x296 Return
	
Label_625:
	GetDirection(var_100_cvector); // 0x271 Func
	var_108_float = 7000.0; // 0x273 PushF
	FindDirLength(var_101_float, var_100_cvector, var_108_float); // 0x274 Func
	var_109_cvector = CVector(0,0,0); var_110_float = 0; // 0x276 PushV
	var_110_float = 1.74533; // 0x277 MovF
	func_508(var_109_cvector, var_110_float); // 0x278 NEW_2
	var_102_cvector = var_109_cvector; // 0x279 Mov
	var_103_float = var_102_cvector | var_102_cvector; // 0x27b Or2
	var_139_bool = 0; // 0x27c PushV
	var_139_bool = 0; // 0x27d MovB
	var_140_float = 2500.0; // 0x27e PushF
	var_141_bool = var_103_float >= var_140_float; // 0x27f GE
	if(var_141_bool == 0) goto Label_655; // 0x280 JumpB
	var_142_bool = 0; // 0x281 PushV
	var_142_bool = 1; // 0x282 MovB
	var_143_float = var_101_float * var_101_float; // 0x283 Mult
	var_144_float = 2.25; // 0x284 PushF
	var_145_float = var_143_float * var_144_float; // 0x285 Mult
	var_146_bool = var_103_float >= var_145_float; // 0x286 GE
	if(var_146_bool == 0) goto Label_653; // 0x287 JumpB
	var_147_bool = 0; // 0x288 PushV
	func_679(var_142_bool, var_147_bool); // 0x289 NEW_2
	if(var_147_bool == 0) goto Label_653; // 0x28b JumpB
	var_142_bool = 0; // 0x28c MovB
	
Label_653:
	if(var_142_bool == 0) goto Label_655; // 0x28d JumpB
	var_139_bool = 1; // 0x28e MovB
	
Label_655:
	if(var_139_bool == 0) goto Label_662; // 0x28f JumpB
	Stop(); // 0x290 Func
	var_167_cvector = CVector(0,0,0); // 0x292 PushV
	func_841(var_167_cvector); // 0x293 NEW_2
	var_1_object = var_167_cvector + var_102_cvector; // 0x295 Add2
}


func_866(var_43_bool, var_44_object, var_45_string)
{
	var_46_bool = 0; var_47_bool = 0; // 0x362 PushV
	var_48_string = "HasProperty"; // 0x363 PushS
	var_49_int = 2; // 0x364 PushI
	var_50_bool = IsFuncExist(var_44_object, var_48_string, var_49_int); // 0x365 FuncExist
	var_51_bool = var_50_bool == 0; // 0x366 Not
	if(var_51_bool == 0) goto Label_874; // 0x367 JumpB
	var_43_bool = 0; // 0x368 MovB
	return 2; // 0x369 Return
	
Label_874:
	HasProperty(var_45_string, var_47_bool); // 0x36a ObjFunc
	var_43_bool = var_47_bool; // 0x36c Mov
	return 2; // 0x36d Return
}


func_995(var_12_object, var_13_int, var_14_float)
{
	var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_int = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); // 0x3e3 PushV
	var_33_bool = 0; // 0x3e4 PushV
	var_33_bool = 0; // 0x3e5 MovB
	var_34_bool = 0; // 0x3e6 PushV
	var_34_bool = 0; // 0x3e7 MovB
	var_35_object = var_12_object; // 0x3e8 Push
	if(var_35_object == 0) goto Label_1006; // 0x3e9 JumpB
	var_36_int = 4; // 0x3ea PushI
	var_37_bool = var_13_int != var_36_int; // 0x3eb Neq
	if(var_37_bool == 0) goto Label_1006; // 0x3ec JumpB
	var_34_bool = 1; // 0x3ed MovB
	
Label_1006:
	if(var_34_bool == 0) goto Label_1011; // 0x3ee JumpB
	var_38_int = 5; // 0x3ef PushI
	var_39_bool = var_13_int != var_38_int; // 0x3f0 Neq
	if(var_39_bool == 0) goto Label_1011; // 0x3f1 JumpB
	var_33_bool = 1; // 0x3f2 MovB
	
Label_1011:
	if(var_33_bool == 0) goto Label_1058; // 0x3f3 JumpB
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x3f4 PushV
	var_42_cvector = CVector(0,0,0); var_43_object = Obj(); // 0x3f5 PushV
	var_43_object = var_12_object; // 0x3f6 Mov
	func_846(var_43_object); // 0x3f7 NEW_2
	var_41_cvector = var_42_cvector; // 0x3f8 Mov
	func_1405(var_40_cvector, var_41_cvector); // 0x3fa NEW_2
	var_24_cvector = var_40_cvector; // 0x3fb Mov
	CreateVectorVector(var_25_object); // 0x3fd Func
	var_26_int = 1; // 0x3ff MovI
	
Label_1024:
	var_53_string = "hit"; // 0x400 PushS
	var_54_int = var_53_string + var_26_int; // 0x401 Add
	GetGeometryLocator(var_54_int, var_27_bool, var_28_cvector, var_29_cvector); // 0x402 Func
	var_55_bool = var_27_bool == 0; // 0x404 Not
	if(var_55_bool == 0) goto Label_1031; // 0x405 JumpB
	goto Label_1040; // 0x406 Jump
	
Label_1040:
	size(var_30_int); // 0x410 ObjFunc
	var_56_int = var_30_int; // 0x412 Push
	if(var_56_int == 0) goto Label_1057; // 0x413 JumpB
	irand(var_31_int, var_30_int); // 0x414 Func
	get(var_32_cvector, var_31_int); // 0x416 ObjFunc
	var_57_object = Obj(); var_58_int = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x418 PushV
	var_57_object = var_12_object; // 0x419 Mov
	var_58_int = var_13_int; // 0x41a Mov
	var_59_float = var_14_float; // 0x41b Mov
	var_60_cvector = var_32_cvector; // 0x41c Mov
	var_61_cvector = -var_24_cvector; // 0x41d Neg2
	func_1063(var_59_float, var_60_cvector, var_61_cvector); // 0x41e NEW_2
	return 18; // 0x420 Return
	
Label_1057:
	var_25_object = 0; // 0x421 SetNull
	
Label_1058:
	var_102_object = Obj(); // 0x422 PushV
	var_102_object = var_12_object; // 0x423 Mov
	func_951(var_102_object); // 0x424 NEW_2
	return 18; // 0x426 Return
	
Label_1031:
	var_103_int = var_29_cvector | var_24_cvector; // 0x407 Or
	var_104_float = 0.70711; // 0x408 PushF
	var_105_bool = var_103_int >= var_104_float; // 0x409 GE
	if(var_105_bool == 0) goto Label_1037; // 0x40a JumpB
	add(var_28_cvector); // 0x40b ObjFunc
	
Label_1037:
	var_106_int = 1; // 0x40d PushI
	var_26_int = var_26_int + var_106_int; // 0x40e Add2
	goto Label_1024; // 0x40f Jump
}


func_1513(var_182_bool)
{
	var_184_int = 0; var_185_string = ""; // 0x5ea PushV
	var_185_string = "ood6Albinos1"; // 0x5eb MovS
	func_1441(var_184_int, var_185_string); // 0x5ec NEW_2
	var_188_int = 0; // 0x5ee PushI
	var_189_bool = var_184_int == var_188_int; // 0x5ef Eq
	if(var_189_bool == 0) goto Label_1523; // 0x5f0 JumpB
	var_182_bool = 1; // 0x5f1 MovB
	return 0; // 0x5f2 Return
	
Label_1523:
	var_182_bool = 0; // 0x5f3 MovB
	return 0; // 0x5f4 Return
}


func_1262(var_122_bool)
{
	var_124_string = ""; var_125_int = 0; var_126_bool = 0; var_127_int = 0; var_128_string = ""; var_129_string = ""; var_130_int = 0; var_131_bool = 0; var_132_int = 0; var_133_string = ""; // 0x4ee PushV
	var_134_string = "d"; // 0x4ef PushS
	var_135_int = 0; // 0x4f0 PushV
	func_1468(var_135_int); // 0x4f1 NEW_2
	var_141_int = var_134_string + var_135_int; // 0x4f3 Add
	var_142_string = "m"; // 0x4f4 PushS
	var_129_string = var_141_int + var_142_string; // 0x4f5 Add2
	var_130_int = 0; // 0x4f6 MovI
	
Label_1271:
	var_143_int = 1; // 0x4f7 PushI
	if(var_143_int == 0) goto Label_1284; // 0x4f8 JumpB
	var_144_int = 1; // 0x4f9 PushI
	var_145_int = var_130_int + var_144_int; // 0x4fa Add
	var_146_int = var_129_string + var_145_int; // 0x4fb Add
	HasProperty(var_146_int, var_131_bool); // 0x4fc ObjFunc
	var_147_bool = var_131_bool == 0; // 0x4fe Not
	if(var_147_bool == 0) goto Label_1281; // 0x4ff JumpB
	goto Label_1284; // 0x500 Jump
	
Label_1284:
	var_148_bool = var_130_int == 0; // 0x504 Not
	if(var_148_bool == 0) goto Label_1288; // 0x505 JumpB
	var_122_bool = 0; // 0x506 MovB
	return 10; // 0x507 Return
	
Label_1288:
	var_132_int = 0; // 0x508 MovI
	var_149_int = 1; // 0x509 PushI
	var_150_bool = var_130_int > var_149_int; // 0x50a GT
	if(var_150_bool == 0) goto Label_1294; // 0x50b JumpB
	irand(var_132_int, var_130_int); // 0x50c Func
	
Label_1294:
	var_151_int = 1; // 0x50e PushI
	var_152_int = var_132_int + var_151_int; // 0x50f Add
	var_153_int = var_129_string + var_152_int; // 0x510 Add
	GetProperty(var_153_int, var_133_string); // 0x511 ObjFunc
	var_154_bool = 0; var_155_string = ""; // 0x513 PushV
	var_155_string = var_133_string; // 0x514 Mov
	func_1336(var_154_bool, var_155_string); // 0x515 NEW_2
	var_122_bool = var_154_bool; // 0x516 Mov
	return 10; // 0x518 Return
	
Label_1281:
	var_156_int = 1; // 0x501 PushI
	var_130_int = var_130_int + var_156_int; // 0x502 Add2
	goto Label_1271; // 0x503 Jump
}


func_878(var_27_float, var_28_object, var_29_float, var_30_int)
{
	var_31_int = 0; var_32_string = ""; var_33_int = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; var_37_int = 0; var_38_string = ""; var_39_int = 0; var_40_float = 0; var_41_float = 0; var_42_float = 0; // 0x36e PushV
	var_43_bool = 0; var_44_object = Obj(); var_45_string = ""; // 0x36f PushV
	var_44_object = var_28_object; // 0x370 Mov
	var_45_string = "health"; // 0x371 MovS
	func_866(var_43_bool, var_44_object, var_45_string); // 0x372 NEW_2
	var_52_bool = var_43_bool == 0; // 0x374 Not
	if(var_52_bool == 0) goto Label_888; // 0x375 JumpB
	var_27_float = 0.0; // 0x376 MovF
	return 12; // 0x377 Return
	
Label_888:
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0x378 PushV
	var_54_object = var_28_object; // 0x379 Mov
	var_55_string = "armor"; // 0x37a MovS
	func_866(var_53_bool, var_54_object, var_55_string); // 0x37b NEW_2
	var_56_bool = var_53_bool == 0; // 0x37d Not
	if(var_56_bool == 0) goto Label_897; // 0x37e JumpB
	var_37_int = 0; // 0x37f MovI
	goto Label_900; // 0x380 Jump
	
Label_900:
	var_57_string = "armor_"; // 0x384 PushS
	var_58_string = ""; var_59_int = 0; // 0x385 PushV
	var_59_int = var_30_int; // 0x386 Mov
	func_827(var_58_string, var_59_int); // 0x387 NEW_2
	var_38_string = var_57_string + var_58_string; // 0x389 Add2
	var_64_bool = 0; var_65_object = Obj(); var_66_string = ""; // 0x38a PushV
	var_65_object = var_28_object; // 0x38b Mov
	var_66_string = var_38_string; // 0x38c Mov
	func_866(var_64_bool, var_65_object, var_66_string); // 0x38d NEW_2
	var_67_bool = var_64_bool == 0; // 0x38f Not
	if(var_67_bool == 0) goto Label_915; // 0x390 JumpB
	var_39_int = 0; // 0x391 MovI
	goto Label_917; // 0x392 Jump
	
Label_917:
	var_68_float = 0; var_69_float = 0; var_70_float = 0; // 0x395 PushV
	var_71_int = var_37_int + var_39_int; // 0x396 Add
	var_72_float = 100.0; // 0x397 PushF
	var_69_float = var_71_int / var_71_int; // 0x398 Div2
	var_70_float = 1; // 0x399 MovI
	func_1415(var_68_float, var_69_float, var_70_float); // 0x39a NEW_2
	var_40_float = var_68_float; // 0x39b Mov
	var_74_string = "health"; // 0x39d PushS
	GetProperty(var_74_string, var_41_float); // 0x39e ObjFunc
	var_75_int = 1; // 0x3a0 PushI
	var_76_int = var_75_int - var_40_float; // 0x3a1 Sub
	var_42_float = var_29_float * var_76_int; // 0x3a2 Mult2
	var_77_string = "health"; // 0x3a3 PushS
	var_78_float = 0; var_79_float = 0; var_80_float = 0; var_81_float = 0; // 0x3a4 PushV
	var_79_float = var_41_float - var_42_float; // 0x3a5 Sub2
	var_80_float = 0; // 0x3a6 MovI
	var_81_float = 1; // 0x3a7 MovI
	func_1422(var_78_float, var_79_float, var_80_float, var_81_float); // 0x3a8 NEW_2
	SetProperty(var_77_string, var_78_float); // 0x3aa ObjFunc
	var_84_bool = 0; var_85_object = Obj(); // 0x3ac PushV
	var_85_object = var_28_object; // 0x3ad Mov
	func_861(var_84_bool, var_85_object); // 0x3ae NEW_2
	if(var_84_bool == 0) goto Label_949; // 0x3b0 JumpB
	var_88_float = 0; // 0x3b1 PushV
	var_88_float = -var_42_float; // 0x3b2 Neg2
	func_1446(var_88_float); // 0x3b3 NEW_2
	
Label_949:
	var_27_float = var_42_float; // 0x3b5 Mov
	return 12; // 0x3b6 Return
	
Label_915:
	GetProperty(var_38_string, var_39_int); // 0x393 ObjFunc
	
Label_897:
	var_92_string = "armor"; // 0x381 PushS
	GetProperty(var_92_string, var_37_int); // 0x382 ObjFunc
}


func_1525(var_71_int)
{
	var_72_int = 0; var_73_int = 0; // 0x5f5 PushV
	var_74_string = "branch"; // 0x5f6 PushS
	GetVariable(var_74_string, var_73_int); // 0x5f7 Func
	var_75_int = 0; // 0x5f9 PushI
	var_76_bool = var_73_int == var_75_int; // 0x5fa Eq
	if(var_76_bool == 0) goto Label_1535; // 0x5fb JumpB
	var_71_int = 1; // 0x5fc MovI
	return 2; // 0x5fd Return
	
Label_1535:
	var_77_int = 1; // 0x5ff PushI
	var_78_bool = var_73_int == var_77_int; // 0x600 Eq
	if(var_78_bool == 0) goto Label_1540; // 0x601 JumpB
	var_71_int = 2; // 0x602 MovI
	return 2; // 0x603 Return
	
Label_1540:
	var_71_int = 3; // 0x604 MovI
	return 2; // 0x605 Return
}


func_1399(var_82_object)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x577 PushV
	self(var_84_object); // 0x578 Func
	var_82_object = var_84_object; // 0x57a Mov
	return 2; // 0x57b Return
}


func_508(var_109_cvector, var_110_float)
{
	var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_float = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_float = 0; // 0x1fc PushV
	GetPosition(var_117_cvector); // 0x1fd Func
	GetPosition(var_118_cvector); // 0x1ff TObjFunc
	GetDirection(var_119_cvector); // 0x201 Func
	var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); // 0x203 PushV
	var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); // 0x204 PushV
	var_126_cvector = var_117_cvector - var_118_cvector; // 0x205 Sub2
	func_1405(var_125_cvector, var_126_cvector); // 0x206 NEW_2
	var_132_float = 0.75; // 0x208 PushF
	var_133_float = var_119_cvector * var_132_float; // 0x209 Mult
	var_124_cvector = var_125_cvector + var_133_float; // 0x20a Add2
	func_1405(var_123_cvector, var_124_cvector); // 0x20b NEW_2
	var_120_cvector = var_123_cvector; // 0x20c Mov
	var_134_int = 32; // 0x20e PushI
	var_135_float = 7000.0; // 0x20f PushF
	FindLongestDir(var_121_cvector, var_122_float, var_120_cvector, var_110_float, var_134_int, var_135_float); // 0x210 Func
	var_136_int = 100; // 0x212 PushI
	var_122_float = var_122_float - var_136_int; // 0x213 Sub2
	var_137_int = 0; // 0x214 PushI
	var_138_bool = var_122_float < var_137_int; // 0x215 LT
	if(var_138_bool == 0) goto Label_536; // 0x216 JumpB
	var_122_float = 0; // 0x217 MovI
	
Label_536:
	var_109_cvector = var_121_cvector * var_122_float; // 0x218 Mult2
	return 12; // 0x219 Return
}


func_1405(var_40_cvector, var_41_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x57d PushV
	var_50_int = var_41_cvector | var_41_cvector; // 0x57e Or
	var_49_float = sqrt(var_50_int); // 0x57f Sqrt2
	var_51_float = 0.0; // 0x580 PushF
	var_52_bool = var_49_float < var_51_float; // 0x581 LT
	if(var_52_bool == 0) goto Label_1413; // 0x582 JumpB
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x583 MovV
	return 2; // 0x584 Return
	
Label_1413:
	var_40_cvector = var_41_cvector / var_41_cvector; // 0x585 Div2
	return 2; // 0x586 Return
}


func_1150()
{
	var_242_bool = 0; var_243_bool = 0; // 0x47e PushV
	CameraSwitchToNormal(); // 0x47f Func
	var_244_bool = 0; // 0x481 PushV
	func_1550(var_244_bool); // 0x482 NEW_2
	if(var_244_bool == 0) goto Label_1158; // 0x484 JumpB
	goto Label_1166; // 0x485 Jump
	
Label_1166:
	return 2; // 0x48e Return
	
Label_1158:
	var_245_string = "head"; // 0x486 PushS
	HasAnimationTrack(var_243_bool, var_245_string); // 0x487 Func
	var_246_bool = var_243_bool; // 0x489 Push
	if(var_246_bool == 0) goto Label_1166; // 0x48a JumpB
	var_247_string = "head"; // 0x48b PushS
	UnlookAsync(var_247_string); // 0x48c Func
}


