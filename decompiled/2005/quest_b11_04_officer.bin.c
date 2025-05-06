task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xaf PushI
	if(var_14_int == 0) goto Label_356; // 0xb0 JumpB
	func_748(); // 0xb2 NEW_2
	var_16_int = 31881; // 0xb4 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xb5 Eq
	if(var_17_bool == 0) goto Label_188; // 0xb6 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xb7 PushV
	var_18_object = var_1_object; // 0xb8 MovT
	var_19_object = var_0_object; // 0xb9 MovT
	func_810(); // 0xba NEW_2
	
Label_188:
	var_45_int = 32782; // 0xbc PushI
	var_46_bool = var_13_bool == var_45_int; // 0xbd Eq
	if(var_46_bool == 0) goto Label_196; // 0xbe JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0xbf PushV
	var_47_object = var_1_object; // 0xc0 MovT
	var_48_object = var_0_object; // 0xc1 MovT
	func_810(); // 0xc2 NEW_2
	
Label_196:
	var_49_int = 31874; // 0xc4 PushI
	var_50_bool = var_12_bool == var_49_int; // 0xc5 Eq
	if(var_50_bool == 0) goto Label_239; // 0xc6 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0xc7 PushV
	var_52_object = var_1_object; // 0xc8 MovT
	func_819(var_52_object); // 0xc9 NEW_2
	if(var_51_bool == 0) goto Label_219; // 0xcb JumpB
	var_59_string = ""; // 0xcc PushV
	var_59_string = "Neutral"; // 0xcd MovS
	func_152(var_13_bool, var_59_string); // 0xce NEW_2
	var_76_int = 530515; // 0xd0 PushI
	SetMessage(var_76_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_77_int = 530516; // 0xd5 PushI
	var_78_int = 32774; // 0xd6 PushI
	var_79_int = 31875; // 0xd7 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xd8 TObjFunc
	return 0; // 0xda Return
	
Label_219:
	var_80_string = ""; // 0xdb PushV
	var_80_string = "Neutral"; // 0xdc MovS
	func_152(var_13_bool, var_80_string); // 0xdd NEW_2
	var_81_int = 530523; // 0xdf PushI
	SetMessage(var_81_int); // 0xe0 TObjFunc
	ClearReplies(); // 0xe2 TObjFunc
	var_82_int = 530524; // 0xe4 PushI
	var_83_int = -1; // 0xe5 PushI
	var_84_int = 31883; // 0xe6 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xe7 TObjFunc
	var_85_int = 531426; // 0xe9 PushI
	var_86_int = -1; // 0xea PushI
	var_87_int = 32770; // 0xeb PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0xec TObjFunc
	return 0; // 0xee Return
	
Label_239:
	var_88_int = 32774; // 0xef PushI
	var_89_bool = var_12_bool == var_88_int; // 0xf0 Eq
	if(var_89_bool == 0) goto Label_257; // 0xf1 JumpB
	var_90_string = ""; // 0xf2 PushV
	var_90_string = "Neutral"; // 0xf3 MovS
	func_152(var_13_bool, var_90_string); // 0xf4 NEW_2
	var_91_int = 531430; // 0xf6 PushI
	SetMessage(var_91_int); // 0xf7 TObjFunc
	ClearReplies(); // 0xf9 TObjFunc
	var_92_int = 531431; // 0xfb PushI
	var_93_int = 32772; // 0xfc PushI
	var_94_int = 32775; // 0xfd PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_95_int = 32772; // 0x101 PushI
	var_96_bool = var_12_bool == var_95_int; // 0x102 Eq
	if(var_96_bool == 0) goto Label_280; // 0x103 JumpB
	var_97_string = ""; // 0x104 PushV
	var_97_string = "Neutral"; // 0x105 MovS
	func_152(var_13_bool, var_97_string); // 0x106 NEW_2
	var_98_int = 531428; // 0x108 PushI
	SetMessage(var_98_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_99_int = 531429; // 0x10d PushI
	var_100_int = 31876; // 0x10e PushI
	var_101_int = 32773; // 0x10f PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x110 TObjFunc
	var_102_int = 531432; // 0x112 PushI
	var_103_int = 31876; // 0x113 PushI
	var_104_int = 32776; // 0x114 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x115 TObjFunc
	return 0; // 0x117 Return
	
Label_280:
	var_105_int = 31876; // 0x118 PushI
	var_106_bool = var_12_bool == var_105_int; // 0x119 Eq
	if(var_106_bool == 0) goto Label_303; // 0x11a JumpB
	var_107_string = ""; // 0x11b PushV
	var_107_string = "Neutral"; // 0x11c MovS
	func_152(var_13_bool, var_107_string); // 0x11d NEW_2
	var_108_int = 530517; // 0x11f PushI
	SetMessage(var_108_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_109_int = 530518; // 0x124 PushI
	var_110_int = 31880; // 0x125 PushI
	var_111_int = 31877; // 0x126 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x127 TObjFunc
	var_112_int = 531433; // 0x129 PushI
	var_113_int = 32779; // 0x12a PushI
	var_114_int = 32778; // 0x12b PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x12c TObjFunc
	return 0; // 0x12e Return
	
Label_303:
	var_115_int = 32779; // 0x12f PushI
	var_116_bool = var_12_bool == var_115_int; // 0x130 Eq
	if(var_116_bool == 0) goto Label_321; // 0x131 JumpB
	var_117_string = ""; // 0x132 PushV
	var_117_string = "Neutral"; // 0x133 MovS
	func_152(var_13_bool, var_117_string); // 0x134 NEW_2
	var_118_int = 531434; // 0x136 PushI
	SetMessage(var_118_int); // 0x137 TObjFunc
	ClearReplies(); // 0x139 TObjFunc
	var_119_int = 531435; // 0x13b PushI
	var_120_int = 31880; // 0x13c PushI
	var_121_int = 32780; // 0x13d PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x13e TObjFunc
	return 0; // 0x140 Return
	
Label_321:
	var_122_int = 31880; // 0x141 PushI
	var_123_bool = var_12_bool == var_122_int; // 0x142 Eq
	if(var_123_bool == 0) goto Label_344; // 0x143 JumpB
	var_124_string = ""; // 0x144 PushV
	var_124_string = "Neutral"; // 0x145 MovS
	func_152(var_13_bool, var_124_string); // 0x146 NEW_2
	var_125_int = 530521; // 0x148 PushI
	SetMessage(var_125_int); // 0x149 TObjFunc
	ClearReplies(); // 0x14b TObjFunc
	var_126_int = 530522; // 0x14d PushI
	var_127_int = -1; // 0x14e PushI
	var_128_int = 31881; // 0x14f PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x150 TObjFunc
	var_129_int = 531436; // 0x152 PushI
	var_130_int = -1; // 0x153 PushI
	var_131_int = 32782; // 0x154 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x155 TObjFunc
	return 0; // 0x157 Return
	
Label_344:
	var_3_string = 1; // 0x158 TMovB
	var_132_bool = 0; // 0x159 PushV
	func_808(var_132_bool); // 0x15a NEW_2
	if(var_132_bool == 0) goto Label_352; // 0x15c JumpB
	lshStopAnimation(); // 0x15d Func
	goto Label_354; // 0x15f Jump
	
Label_354:
	return 0; // 0x162 Return
	
Label_352:
	StopAnimation(); // 0x160 Func
	
Label_356:
	return 0; // 0x164 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_508(var_11_bool, var_12_object); // 0x16d NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x16f PushV
	var_17_object = var_12_object; // 0x170 Mov
	TaskCall(0); // 0x171 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x172 NEW_2
	TaskReturn(); // 0x173 TaskReturn
	return 0; // 0x175 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x19d PushS
	var_14_bool = var_12_string == var_13_string; // 0x19e Eq
	if(var_14_bool == 0) goto Label_419; // 0x19f JumpB
	func_392(var_12_string); // 0x1a1 NEW_2
	
Label_419:
	return 0; // 0x1a3 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1a4 PushT
	if(var_12_int == 0) goto Label_425; // 0x1a5 JumpB
	func_508(var_10_bool, var_11_bool); // 0x1a7 NEW_2
	
Label_425:
	var_16_bool = 0; // 0x1a9 PushV
	var_16_bool = 0; // 0x1aa MovB
	var_17_int = var_5_int; // 0x1ab PushT
	if(var_17_int == 0) goto Label_434; // 0x1ac JumpB
	var_18_bool = 0; // 0x1ad PushV
	func_441(var_18_bool); // 0x1ae NEW_2
	if(var_18_bool == 0) goto Label_434; // 0x1b0 JumpB
	var_16_bool = 1; // 0x1b1 MovB
	
Label_434:
	if(var_16_bool == 0) goto Label_440; // 0x1b2 JumpB
	var_19_object = Obj(); // 0x1b3 PushV
	func_755(var_19_object); // 0x1b4 NEW_2
	RemoveActor(var_19_object); // 0x1b6 Func
	
Label_440:
	return 0; // 0x1b8 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1e6 PushI
	var_14_bool = var_12_int == var_13_int; // 0x1e7 Eq
	if(var_14_bool == 0) goto Label_507; // 0x1e8 JumpB
	var_15_bool = 0; // 0x1e9 PushV
	func_470(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1ea NEW_2
	if(var_15_bool == 0) goto Label_501; // 0x1ec JumpB
	var_28_bool = var_2_object == 0; // 0x1ed Not
	if(var_28_bool == 0) goto Label_500; // 0x1ee JumpB
	var_29_object = Obj(); // 0x1ef PushV
	var_29_object = var_4_bool; // 0x1f0 MovT
	func_737(var_29_object); // 0x1f1 NEW_2
	var_2_object = 1; // 0x1f3 TMovB
	
Label_500:
	goto Label_507; // 0x1f4 Jump
	
Label_507:
	return 0; // 0x1fb Return
	
Label_501:
	var_36_object = var_2_object; // 0x1f5 PushT
	if(var_36_object == 0) goto Label_507; // 0x1f6 JumpB
	var_37_string = "head"; // 0x1f7 PushS
	UnlookAsync(var_37_string); // 0x1f8 Func
	var_2_object = 0; // 0x1fa TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x165 PushV
	var_12_float = 300; // 0x166 MovI
	var_13_float = 100; // 0x167 MovI
	func_374(var_11_bool, var_12_float, var_13_float); // 0x168 NEW_2
	return 0; // 0x16a Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_621(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_802(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_800(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_804(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_806(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_885(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_149_bool = var_26_bool == 0; // 0x38 Not
	if(var_149_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_150_object = Obj(); // 0x3f PushV
	var_150_object = var_17_object; // 0x40 Mov
	func_689(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_771(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x303 PushV
	GetVariable(var_97_string, var_99_int); // 0x304 Func
	var_96_int = var_99_int; // 0x306 Mov
	return 2; // 0x307 Return
}


func_776(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x308 PushV
	var_55_string = "idle"; // 0x309 MovS
	var_56_int = var_53_int; // 0x30a Push
	if(var_56_int == 0) goto Label_781; // 0x30b JumpB
	var_55_string = var_55_string + var_53_int; // 0x30c Add2
	
Label_781:
	var_52_string = var_55_string; // 0x30d Mov
	return 2; // 0x30e Return
}


func_392(var_5_int)
{
	var_5_int = 1; // 0x188 TMovB
	var_15_bool = 0; // 0x189 PushV
	var_15_bool = 0; // 0x18a MovB
	var_16_bool = 0; // 0x18b PushV
	func_616(var_16_bool); // 0x18c NEW_2
	var_19_bool = var_16_bool == 0; // 0x18e Not
	if(var_19_bool == 0) goto Label_405; // 0x18f JumpB
	var_20_bool = 0; // 0x190 PushV
	func_441(var_20_bool); // 0x191 NEW_2
	if(var_20_bool == 0) goto Label_405; // 0x193 JumpB
	var_15_bool = 1; // 0x194 MovB
	
Label_405:
	if(var_15_bool == 0) goto Label_411; // 0x195 JumpB
	var_21_object = Obj(); // 0x196 PushV
	func_755(var_21_object); // 0x197 NEW_2
	RemoveActor(var_21_object); // 0x199 Func
	
Label_411:
	return 0; // 0x19b Return
}


func_522()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x20a PushV
	WaitForAnimEnd(); // 0x20b Func
	var_44_bool = 0; // 0x20d PushV
	func_616(var_44_bool); // 0x20e NEW_2
	var_45_bool = var_44_bool == 0; // 0x210 Not
	if(var_45_bool == 0) goto Label_531; // 0x211 JumpB
	return 14; // 0x212 Return
	
Label_531:
	var_46_int = 0; // 0x213 PushV
	func_783(var_46_int); // 0x214 NEW_2
	var_37_int = var_46_int; // 0x215 Mov
	var_38_int = 0; // 0x217 MovI
	
Label_536:
	var_59_bool = 0; // 0x218 PushV
	var_59_bool = 0; // 0x219 MovB
	var_60_int = 5; // 0x21a PushI
	var_61_bool = var_38_int < var_60_int; // 0x21b LT
	if(var_61_bool == 0) goto Label_546; // 0x21c JumpB
	var_62_bool = 0; // 0x21d PushV
	func_616(var_62_bool); // 0x21e NEW_2
	if(var_62_bool == 0) goto Label_546; // 0x220 JumpB
	var_59_bool = 1; // 0x221 MovB
	
Label_546:
	if(var_59_bool == 0) goto Label_598; // 0x222 JumpB
	var_63_int = 3; // 0x223 PushI
	irand(var_39_int, var_63_int); // 0x224 Func
	var_64_int = 0; // 0x226 PushI
	var_65_bool = var_39_int == var_64_int; // 0x227 Eq
	if(var_65_bool == 0) goto Label_570; // 0x228 JumpB
	var_66_int = var_37_int; // 0x229 Push
	if(var_66_int == 0) goto Label_569; // 0x22a JumpB
	irand(var_40_int, var_37_int); // 0x22b Func
	var_67_string = "all"; // 0x22d PushS
	var_68_string = ""; var_69_int = 0; // 0x22e PushV
	var_69_int = var_40_int; // 0x22f Mov
	func_776(var_68_string, var_69_int); // 0x230 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x232 Func
	WaitForAnimEnd(var_41_bool); // 0x234 Func
	var_70_bool = var_41_bool == 0; // 0x236 Not
	if(var_70_bool == 0) goto Label_569; // 0x237 JumpB
	goto Label_598; // 0x238 Jump
	
Label_598:
	ResetAAS(); // 0x256 Func
	return 14; // 0x258 Return
	
Label_569:
	goto Label_587; // 0x239 Jump
	
Label_587:
	var_71_bool = 0; // 0x24b PushV
	func_601(var_71_bool); // 0x24c NEW_2
	var_72_bool = var_71_bool == 0; // 0x24e Not
	if(var_72_bool == 0) goto Label_593; // 0x24f JumpB
	goto Label_598; // 0x250 Jump
	
Label_593:
	ResetAAS(); // 0x251 Func
	var_73_int = 1; // 0x253 PushI
	var_38_int = var_38_int + var_73_int; // 0x254 Add2
	goto Label_536; // 0x255 Jump
	
Label_570:
	var_74_int = 1; // 0x23a PushI
	var_75_bool = var_39_int == var_74_int; // 0x23b Eq
	if(var_75_bool == 0) goto Label_584; // 0x23c JumpB
	var_76_int = 4; // 0x23d PushI
	rand(var_42_float, var_76_int); // 0x23e Func
	var_77_int = 1; // 0x240 PushI
	var_78_int = var_42_float + var_77_int; // 0x241 Add
	Sleep(var_78_int, var_43_bool); // 0x242 Func
	var_79_bool = var_43_bool == 0; // 0x244 Not
	if(var_79_bool == 0) goto Label_583; // 0x245 JumpB
	goto Label_598; // 0x246 Jump
	
Label_583:
	goto Label_587; // 0x247 Jump
	
Label_584:
	var_80_int = var_38_int; // 0x248 Push
	if(var_80_int == 0) goto Label_587; // 0x249 JumpB
	goto Label_598; // 0x24a Jump
}


func_783(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x30f PushV
	var_49_int = 0; // 0x310 MovI
	
Label_785:
	var_51_string = "all"; // 0x311 PushS
	var_52_string = ""; var_53_int = 0; // 0x312 PushV
	var_53_int = var_49_int; // 0x313 Mov
	func_776(var_52_string, var_53_int); // 0x314 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x316 Func
	var_57_bool = var_50_bool == 0; // 0x318 Not
	if(var_57_bool == 0) goto Label_795; // 0x319 JumpB
	goto Label_798; // 0x31a Jump
	
Label_798:
	var_46_int = var_49_int; // 0x31e Mov
	return 4; // 0x31f Return
	
Label_795:
	var_58_int = 1; // 0x31b PushI
	var_49_int = var_49_int + var_58_int; // 0x31c Add2
	goto Label_785; // 0x31d Jump
}


func_152(var_2_object, var_102_string)
{
	var_103_bool = 0; // 0x99 PushV
	func_808(var_103_bool); // 0x9a NEW_2
	var_104_bool = var_103_bool == 0; // 0x9c Not
	if(var_104_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_105_bool = var_102_string == var_2_object; // 0x9f Eq
	if(var_105_bool == 0) goto Label_162; // 0xa0 JumpB
	return 0; // 0xa1 Return
	
Label_162:
	var_106_string = ""; var_107_bool = 0; // 0xa2 PushV
	var_106_string = var_102_string; // 0xa3 Mov
	var_108_string = ""; // 0xa4 PushS
	var_109_bool = var_102_string == var_108_string; // 0xa5 Eq
	if(var_109_bool == 0) goto Label_169; // 0xa6 JumpB
	var_107_bool = 0; // 0xa7 MovB
	goto Label_170; // 0xa8 Jump
	
Label_170:
	func_722(var_106_string, var_107_bool); // 0xaa NEW_2
	var_2_object = var_102_string; // 0xac TMov
	return 0; // 0xad Return
	
Label_169:
	var_107_bool = 1; // 0xa9 MovB
}


func_800(var_75_int)
{
	var_75_int = 515597; // 0x320 MovI
	return 0; // 0x321 Return
}


func_802(var_74_int)
{
	var_74_int = 514841; // 0x322 MovI
	return 0; // 0x323 Return
}


func_804(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2.png"; // 0x324 MovS
	return 0; // 0x325 Return
}


func_806(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2_b.png"; // 0x326 MovS
	return 0; // 0x327 Return
}


func_808(var_69_bool)
{
	var_69_bool = 0; // 0x328 MovB
	return 0; // 0x329 Return
}


func_810()
{
	var_20_string = "b11q04"; // 0x32b PushS
	var_21_int = 3; // 0x32c PushI
	SetVariable(var_20_string, var_21_int); // 0x32d Func
	func_831(); // 0x330 NEW_2
	return 0; // 0x332 Return
}


func_689()
{
	var_151_bool = 0; var_152_bool = 0; // 0x2b1 PushV
	CameraSwitchToNormal(); // 0x2b2 Func
	var_153_bool = 0; // 0x2b4 PushV
	func_808(var_153_bool); // 0x2b5 NEW_2
	if(var_153_bool == 0) goto Label_697; // 0x2b7 JumpB
	goto Label_705; // 0x2b8 Jump
	
Label_705:
	return 2; // 0x2c1 Return
	
Label_697:
	var_154_string = "head"; // 0x2b9 PushS
	HasAnimationTrack(var_152_bool, var_154_string); // 0x2ba Func
	var_155_bool = var_152_bool; // 0x2bc Push
	if(var_155_bool == 0) goto Label_705; // 0x2bd JumpB
	var_156_string = "head"; // 0x2be PushS
	UnlookAsync(var_156_string); // 0x2bf Func
}


func_819(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x334 PushV
	var_97_string = "b11q04"; // 0x335 MovS
	func_771(var_96_int, var_97_string); // 0x336 NEW_2
	var_100_int = 2; // 0x338 PushI
	var_101_bool = var_96_int == var_100_int; // 0x339 Eq
	if(var_101_bool == 0) goto Label_829; // 0x33a JumpB
	var_94_bool = 1; // 0x33b MovB
	return 0; // 0x33c Return
	
Label_829:
	var_94_bool = 0; // 0x33d MovB
	return 0; // 0x33e Return
}


func_441(var_18_bool)
{
	var_18_bool = 1; // 0x1b9 MovB
	return 0; // 0x1ba Return
}


func_443(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1bc PushV
	func_616(var_23_bool); // 0x1bd NEW_2
	var_26_bool = var_23_bool == 0; // 0x1bf Not
	if(var_26_bool == 0) goto Label_450; // 0x1c0 JumpB
	return 0; // 0x1c1 Return
	
Label_450:
	var_27_string = "player"; // 0x1c2 PushS
	FindActor(var_17_bool, var_27_string); // 0x1c3 Func
	var_2_object = 0; // 0x1c5 TMovB
	var_3_string = 0; // 0x1c6 TMovB
	var_0_object = var_21_float; // 0x1c7 TMov
	var_1_object = var_22_float; // 0x1c8 TMov
	var_28_int = 10; // 0x1c9 PushI
	var_29_float = 1.0; // 0x1ca PushF
	SetTimer(var_28_int, var_29_float); // 0x1cb Func
	func_522(); // 0x1ce NEW_2
	var_81_bool = var_3_string == 0; // 0x1d0 Not
	if(var_81_bool == 0) goto Label_469; // 0x1d1 JumpB
	var_82_int = 10; // 0x1d2 PushI
	KillTimer(var_82_int); // 0x1d3 Func
	
Label_469:
	return 0; // 0x1d5 Return
}


func_831()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x33f PushV
	var_24_int = 554; // 0x340 PushI
	var_25_int = 2; // 0x341 PushI
	var_26_int = 530529; // 0x342 PushI
	CreateDiaryEntry(var_23_object, var_24_int, var_25_int, var_26_int); // 0x343 Func
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; // 0x345 PushV
	var_28_object = var_23_object; // 0x346 Mov
	var_29_int = 551; // 0x347 MovI
	func_857(var_27_bool, var_28_object, var_29_int); // 0x348 NEW_2
	return 2; // 0x34a Return
}


func_706(var_125_string)
{
	var_126_bool = 0; var_127_float = 0; var_128_float = 0; var_129_bool = 0; var_130_float = 0; var_131_float = 0; // 0x2c2 PushV
	lshHasAnimation(var_129_bool, var_125_string); // 0x2c3 Func
	var_132_bool = var_129_bool; // 0x2c5 Push
	if(var_132_bool == 0) goto Label_717; // 0x2c6 JumpB
	lshGetAnimTimes(var_125_string, var_130_float, var_131_float); // 0x2c7 Func
	var_133_bool = 0; // 0x2c9 PushB
	lshPlayAnimation(var_130_float, var_131_float, var_133_bool); // 0x2ca Func
	goto Label_721; // 0x2cc Jump
	
Label_721:
	return 6; // 0x2d1 Return
	
Label_717:
	var_134_string = "Can't find lsh animation : "; // 0x2cd PushS
	var_135_int = var_134_string + var_125_string; // 0x2ce Add
	Trace(var_135_int); // 0x2cf Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_122; // 0x4f JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x50 PushV
	var_95_object = var_1_object; // 0x51 MovT
	func_819(var_95_object); // 0x52 NEW_2
	if(var_94_bool == 0) goto Label_100; // 0x54 JumpB
	var_102_string = ""; // 0x55 PushV
	var_102_string = "Neutral"; // 0x56 MovS
	func_152(var_88_object, var_102_string); // 0x57 NEW_2
	var_119_int = 530515; // 0x59 PushI
	SetMessage(var_119_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_120_int = 530516; // 0x5e PushI
	var_121_int = 32774; // 0x5f PushI
	var_122_int = 31875; // 0x60 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x61 TObjFunc
	goto Label_122; // 0x63 Jump
	
Label_122:
	var_123_bool = 0; // 0x7a PushV
	func_808(var_123_bool); // 0x7b NEW_2
	if(var_123_bool == 0) goto Label_137; // 0x7d JumpB
	
Label_126:
	lshWaitForAnimEnd(); // 0x7e Func
	var_124_string = var_3_string; // 0x80 PushT
	if(var_124_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_136:
	goto Label_151; // 0x88 Jump
	
Label_151:
	return 0; // 0x97 Return
	
Label_131:
	var_125_string = ""; // 0x83 PushV
	var_125_string = var_2_object; // 0x84 MovT
	func_706(var_125_string); // 0x85 NEW_2
	goto Label_126; // 0x87 Jump
	
Label_137:
	var_136_string = "all"; // 0x89 PushS
	var_137_string = "idle"; // 0x8a PushS
	PlayAnimation(var_136_string, var_137_string); // 0x8b Func
	
Label_141:
	WaitForAnimEnd(); // 0x8d Func
	var_138_string = var_3_string; // 0x8f PushT
	if(var_138_string == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_146:
	var_139_string = "all"; // 0x92 PushS
	var_140_string = "idle"; // 0x93 PushS
	PlayAnimation(var_139_string, var_140_string); // 0x94 Func
	goto Label_141; // 0x96 Jump
	
Label_100:
	var_141_string = ""; // 0x64 PushV
	var_141_string = "Neutral"; // 0x65 MovS
	func_152(var_88_object, var_141_string); // 0x66 NEW_2
	var_142_int = 530523; // 0x68 PushI
	SetMessage(var_142_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_143_int = 530524; // 0x6d PushI
	var_144_int = -1; // 0x6e PushI
	var_145_int = 31883; // 0x6f PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x70 TObjFunc
	var_146_int = 531426; // 0x72 PushI
	var_147_int = -1; // 0x73 PushI
	var_148_int = 32770; // 0x74 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x75 TObjFunc
	goto Label_122; // 0x77 Jump
}


func_844(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x34c PushV
	GetDiaryRoot(var_38_object); // 0x34d Func
	var_39_bool = var_38_object == 0; // 0x34f Not
	if(var_39_bool == 0) goto Label_854; // 0x350 JumpB
	var_40_string = "Can't retrieve diary root"; // 0x351 PushS
	Trace(var_40_string); // 0x352 Func
	var_36_object = 0; // 0x354 MovB
	return 2; // 0x355 Return
	
Label_854:
	var_36_object = var_38_object; // 0x356 Mov
	return 2; // 0x357 Return
}


func_722(var_106_string, var_107_bool)
{
	var_110_bool = 0; var_111_float = 0; var_112_float = 0; var_113_bool = 0; var_114_float = 0; var_115_float = 0; // 0x2d2 PushV
	lshHasAnimation(var_113_bool, var_106_string); // 0x2d3 Func
	var_116_bool = var_113_bool; // 0x2d5 Push
	if(var_116_bool == 0) goto Label_732; // 0x2d6 JumpB
	lshGetAnimTimes(var_106_string, var_114_float, var_115_float); // 0x2d7 Func
	lshPlayAnimation(var_114_float, var_115_float, var_107_bool); // 0x2d9 Func
	goto Label_736; // 0x2db Jump
	
Label_736:
	return 6; // 0x2e0 Return
	
Label_732:
	var_117_string = "Can't find lsh animation : "; // 0x2dc PushS
	var_118_int = var_117_string + var_106_string; // 0x2dd Add
	Trace(var_118_int); // 0x2de Func
}


func_470(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1d6 PushV
	var_18_bool = var_4_bool == 0; // 0x1d7 NullEq
	if(var_18_bool == 0) goto Label_475; // 0x1d8 JumpB
	var_15_bool = 0; // 0x1d9 MovB
	return 2; // 0x1da Return
	
Label_475:
	var_19_float = 0; var_20_object = Obj(); // 0x1db PushV
	var_20_object = var_4_bool; // 0x1dc MovT
	func_608(var_20_object); // 0x1dd NEW_2
	var_17_float = sqrt(var_19_float); // 0x1df Sqrt2
	var_27_object = var_2_object; // 0x1e0 PushT
	if(var_27_object == 0) goto Label_483; // 0x1e1 JumpB
	var_17_float = var_17_float - var_1_object; // 0x1e2 Sub2
	
Label_483:
	var_15_bool = var_17_float < var_0_object; // 0x1e3 LT2
	return 2; // 0x1e4 Return
}


func_601(var_71_bool)
{
	var_71_bool = 1; // 0x259 MovB
	return 0; // 0x25a Return
}


func_857(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; // 0x359 PushV
	var_36_object = Obj(); // 0x35a PushV
	func_844(var_36_object); // 0x35b NEW_2
	var_33_object = var_36_object; // 0x35c Mov
	Find(var_29_int, var_34_object); // 0x35e ObjFunc
	var_41_bool = var_34_object == 0; // 0x360 Not
	if(var_41_bool == 0) goto Label_872; // 0x361 JumpB
	var_42_string = "Can't find diary parent with id: "; // 0x362 PushS
	var_43_int = var_42_string + var_29_int; // 0x363 Add
	Trace(var_43_int); // 0x364 Func
	var_27_bool = 0; // 0x366 MovB
	return 6; // 0x367 Return
	
Label_872:
	AddChild(var_28_object); // 0x368 ObjFunc
	var_44_int = 7; // 0x36a PushI
	SendWorldWndMessage(var_44_int); // 0x36b Func
	GetCategory(var_35_int); // 0x36d ObjFunc
	SetDiarySection(var_35_int); // 0x36f Func
	var_27_bool = 0; // 0x371 MovB
	return 6; // 0x372 Return
}


func_603()
{
	StopAnimation(); // 0x25b Func
	StopGroup0(); // 0x25d Func
	return 0; // 0x25f Return
}


func_608(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x260 PushV
	GetPosition(var_24_cvector); // 0x261 Func
	GetPosition(var_25_cvector); // 0x263 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x265 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x266 Or2
	return 6; // 0x267 Return
}


func_737(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2e1 PushV
	GetEyesHeight(var_32_float); // 0x2e2 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2e4 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2e5 PushE
	var_34_float = var_32_float; // 0x2e6 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x2e7 PopE
	var_35_string = "head"; // 0x2e8 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x2e9 Func
	return 4; // 0x2eb Return
}


func_616(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x268 PushV
	IsLoaded(var_25_bool); // 0x269 Func
	var_23_bool = var_25_bool; // 0x26b Mov
	return 2; // 0x26c Return
}


func_748()
{
	var_15_bool = 0; // 0x2ec PushV
	func_808(var_15_bool); // 0x2ed NEW_2
	if(var_15_bool == 0) goto Label_754; // 0x2ef JumpB
	lshStopSpeech(); // 0x2f0 Func
	
Label_754:
	return 0; // 0x2f2 Return
}


func_621(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x26d PushV
	GetPosition(var_40_cvector); // 0x26e ObjFunc
	GetEyesHeight(var_39_float); // 0x270 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x272 PushE
	var_48_float = var_48_float + var_39_float; // 0x273 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x274 PopE
	GetPosition(var_41_cvector); // 0x275 Func
	GetEyesHeight(var_39_float); // 0x277 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x279 PushE
	var_49_float = var_49_float + var_39_float; // 0x27a Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x27b PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x27c Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x27d PushE
	var_50_float = 0; // 0x27e MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x27f PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x280 Or
	var_52_float = sqrt(var_51_int); // 0x281 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x282 Div2
	var_43_cvector = -var_42_cvector; // 0x283 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x284 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x285 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x286 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x287 Xor2
	func_761(var_54_cvector, var_55_cvector); // 0x288 NEW_2
	var_62_int = 25; // 0x28a PushI
	var_63_float = var_54_cvector * var_62_int; // 0x28b Mult
	var_64_int = var_53_float + var_63_float; // 0x28c Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x28d PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x28e Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x28f Add2
	IsOverrideActive(var_46_bool); // 0x290 Func
	var_66_bool = var_46_bool; // 0x292 Push
	if(var_66_bool == 0) goto Label_662; // 0x293 JumpB
	var_27_bool = 0; // 0x294 MovB
	return 18; // 0x295 Return
	
Label_662:
	StopWorld(); // 0x296 Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x298 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x29a PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x29b PushE
	Rotate(var_67_float, var_68_float); // 0x29c Func
	var_69_bool = 0; // 0x29e PushV
	func_808(var_69_bool); // 0x29f NEW_2
	if(var_69_bool == 0) goto Label_675; // 0x2a1 JumpB
	goto Label_683; // 0x2a2 Jump
	
Label_683:
	CameraWaitForPlayFinish(); // 0x2ab Func
	ResumeWorld(); // 0x2ad Func
	var_27_bool = 1; // 0x2af MovB
	return 18; // 0x2b0 Return
	
Label_675:
	var_70_string = "head"; // 0x2a3 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x2a4 Func
	var_71_bool = var_47_bool; // 0x2a6 Push
	if(var_71_bool == 0) goto Label_683; // 0x2a7 JumpB
	var_72_string = "head"; // 0x2a8 PushS
	LookAsyncCamera(var_72_string); // 0x2a9 Func
}


func_755(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2f3 PushV
	self(var_21_object); // 0x2f4 Func
	var_19_object = var_21_object; // 0x2f6 Mov
	return 2; // 0x2f7 Return
}


func_885(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x375 PushV
	var_81_string = "branch"; // 0x376 PushS
	GetVariable(var_81_string, var_80_int); // 0x377 Func
	var_82_int = 0; // 0x379 PushI
	var_83_bool = var_80_int == var_82_int; // 0x37a Eq
	if(var_83_bool == 0) goto Label_895; // 0x37b JumpB
	var_78_int = 1; // 0x37c MovI
	return 2; // 0x37d Return
	
Label_895:
	var_84_int = 1; // 0x37f PushI
	var_85_bool = var_80_int == var_84_int; // 0x380 Eq
	if(var_85_bool == 0) goto Label_900; // 0x381 JumpB
	var_78_int = 2; // 0x382 MovI
	return 2; // 0x383 Return
	
Label_900:
	var_78_int = 3; // 0x384 MovI
	return 2; // 0x385 Return
}


func_374(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x176 PushV
	var_6_int = 0; // 0x177 TMovB
	
Label_376:
	var_18_int = 3; // 0x178 PushI
	rand(var_16_float, var_18_int); // 0x179 Func
	var_19_int = 3; // 0x17b PushI
	var_20_int = var_16_float + var_19_int; // 0x17c Add
	Sleep(var_20_int, var_17_bool); // 0x17d Func
	var_6_int = 1; // 0x17f TMovB
	var_21_float = 0; var_22_float = 0; // 0x180 PushV
	var_21_float = var_12_float; // 0x181 Mov
	var_22_float = var_13_float; // 0x182 Mov
	func_443(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x183 NEW_2
	var_6_int = 0; // 0x185 TMovB
	goto Label_376; // 0x186 Jump
}


func_761(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x2f9 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x2fa Or
	var_58_float = sqrt(var_59_int); // 0x2fb Sqrt2
	var_60_float = 0.0; // 0x2fc PushF
	var_61_bool = var_58_float < var_60_float; // 0x2fd LT
	if(var_61_bool == 0) goto Label_769; // 0x2fe JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x2ff MovV
	return 2; // 0x300 Return
	
Label_769:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x301 Div2
	return 2; // 0x302 Return
}


func_508(var_2_object, var_3_string)
{
	func_603(); // 0x1fd NEW_2
	var_13_int = 10; // 0x1ff PushI
	KillTimer(var_13_int); // 0x200 Func
	var_14_object = var_2_object; // 0x202 PushT
	if(var_14_object == 0) goto Label_520; // 0x203 JumpB
	var_15_string = "head"; // 0x204 PushS
	UnlookAsync(var_15_string); // 0x205 Func
	var_2_object = 0; // 0x207 TMovB
	
Label_520:
	var_3_string = 1; // 0x208 TMovB
	return 0; // 0x209 Return
}


