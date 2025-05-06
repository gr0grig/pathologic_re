task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 1; // 0xa0 PushI
	if(var_13_int == 0) goto Label_410; // 0xa1 JumpB
	func_741(); // 0xa3 NEW_2
	var_15_int = 27285; // 0xa5 PushI
	var_16_bool = var_11_object == var_15_int; // 0xa6 Eq
	if(var_16_bool == 0) goto Label_193; // 0xa7 JumpB
	var_17_object = Obj(); var_18_object = Obj(); // 0xa8 PushV
	var_17_object = var_1_object; // 0xa9 MovT
	var_18_object = var_0_object; // 0xaa MovT
	func_804(); // 0xab NEW_2
	var_25_string = ""; // 0xad PushV
	var_25_string = "Neutral"; // 0xae MovS
	func_137(var_12_bool, var_25_string); // 0xaf NEW_2
	var_42_int = 525998; // 0xb1 PushI
	SetMessage(var_42_int); // 0xb2 TObjFunc
	ClearReplies(); // 0xb4 TObjFunc
	var_43_int = 525999; // 0xb6 PushI
	var_44_int = 27287; // 0xb7 PushI
	var_45_int = 27286; // 0xb8 PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xb9 TObjFunc
	var_46_int = 526018; // 0xbb PushI
	var_47_int = 27307; // 0xbc PushI
	var_48_int = 27306; // 0xbd PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xbe TObjFunc
	return 0; // 0xc0 Return
	
Label_193:
	var_49_int = 27307; // 0xc1 PushI
	var_50_bool = var_11_object == var_49_int; // 0xc2 Eq
	if(var_50_bool == 0) goto Label_211; // 0xc3 JumpB
	var_51_string = ""; // 0xc4 PushV
	var_51_string = "Neutral"; // 0xc5 MovS
	func_137(var_12_bool, var_51_string); // 0xc6 NEW_2
	var_52_int = 526019; // 0xc8 PushI
	SetMessage(var_52_int); // 0xc9 TObjFunc
	ClearReplies(); // 0xcb TObjFunc
	var_53_int = 526020; // 0xcd PushI
	var_54_int = 27287; // 0xce PushI
	var_55_int = 27308; // 0xcf PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xd0 TObjFunc
	return 0; // 0xd2 Return
	
Label_211:
	var_56_int = 27287; // 0xd3 PushI
	var_57_bool = var_11_object == var_56_int; // 0xd4 Eq
	if(var_57_bool == 0) goto Label_234; // 0xd5 JumpB
	var_58_string = ""; // 0xd6 PushV
	var_58_string = "Neutral"; // 0xd7 MovS
	func_137(var_12_bool, var_58_string); // 0xd8 NEW_2
	var_59_int = 526000; // 0xda PushI
	SetMessage(var_59_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_60_int = 526001; // 0xdf PushI
	var_61_int = 27289; // 0xe0 PushI
	var_62_int = 27288; // 0xe1 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xe2 TObjFunc
	var_63_int = 526243; // 0xe4 PushI
	var_64_int = -1; // 0xe5 PushI
	var_65_int = 27514; // 0xe6 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_66_int = 27289; // 0xea PushI
	var_67_bool = var_11_object == var_66_int; // 0xeb Eq
	if(var_67_bool == 0) goto Label_257; // 0xec JumpB
	var_68_string = ""; // 0xed PushV
	var_68_string = "Neutral"; // 0xee MovS
	func_137(var_12_bool, var_68_string); // 0xef NEW_2
	var_69_int = 526002; // 0xf1 PushI
	SetMessage(var_69_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_70_int = 526003; // 0xf6 PushI
	var_71_int = 27291; // 0xf7 PushI
	var_72_int = 27290; // 0xf8 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xf9 TObjFunc
	var_73_int = 526244; // 0xfb PushI
	var_74_int = 27291; // 0xfc PushI
	var_75_int = 27515; // 0xfd PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_76_int = 27291; // 0x101 PushI
	var_77_bool = var_11_object == var_76_int; // 0x102 Eq
	if(var_77_bool == 0) goto Label_280; // 0x103 JumpB
	var_78_string = ""; // 0x104 PushV
	var_78_string = "Neutral"; // 0x105 MovS
	func_137(var_12_bool, var_78_string); // 0x106 NEW_2
	var_79_int = 526004; // 0x108 PushI
	SetMessage(var_79_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_80_int = 526245; // 0x10d PushI
	var_81_int = 27518; // 0x10e PushI
	var_82_int = 27517; // 0x10f PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x110 TObjFunc
	var_83_int = 526009; // 0x112 PushI
	var_84_int = 27297; // 0x113 PushI
	var_85_int = 27296; // 0x114 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x115 TObjFunc
	return 0; // 0x117 Return
	
Label_280:
	var_86_int = 27297; // 0x118 PushI
	var_87_bool = var_11_object == var_86_int; // 0x119 Eq
	if(var_87_bool == 0) goto Label_298; // 0x11a JumpB
	var_88_string = ""; // 0x11b PushV
	var_88_string = "Neutral"; // 0x11c MovS
	func_137(var_12_bool, var_88_string); // 0x11d NEW_2
	var_89_int = 526010; // 0x11f PushI
	SetMessage(var_89_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_90_int = 526249; // 0x124 PushI
	var_91_int = 27518; // 0x125 PushI
	var_92_int = 27521; // 0x126 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_93_int = 27518; // 0x12a PushI
	var_94_bool = var_11_object == var_93_int; // 0x12b Eq
	if(var_94_bool == 0) goto Label_321; // 0x12c JumpB
	var_95_string = ""; // 0x12d PushV
	var_95_string = "Neutral"; // 0x12e MovS
	func_137(var_12_bool, var_95_string); // 0x12f NEW_2
	var_96_int = 526246; // 0x131 PushI
	SetMessage(var_96_int); // 0x132 TObjFunc
	ClearReplies(); // 0x134 TObjFunc
	var_97_int = 526005; // 0x136 PushI
	var_98_int = 27293; // 0x137 PushI
	var_99_int = 27292; // 0x138 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x139 TObjFunc
	var_100_int = 541743; // 0x13b PushI
	var_101_int = -1; // 0x13c PushI
	var_102_int = 43940; // 0x13d PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x13e TObjFunc
	return 0; // 0x140 Return
	
Label_321:
	var_103_int = 27293; // 0x141 PushI
	var_104_bool = var_11_object == var_103_int; // 0x142 Eq
	if(var_104_bool == 0) goto Label_339; // 0x143 JumpB
	var_105_string = ""; // 0x144 PushV
	var_105_string = "Neutral"; // 0x145 MovS
	func_137(var_12_bool, var_105_string); // 0x146 NEW_2
	var_106_int = 526006; // 0x148 PushI
	SetMessage(var_106_int); // 0x149 TObjFunc
	ClearReplies(); // 0x14b TObjFunc
	var_107_int = 526007; // 0x14d PushI
	var_108_int = 27519; // 0x14e PushI
	var_109_int = 27294; // 0x14f PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_110_int = 27519; // 0x153 PushI
	var_111_bool = var_11_object == var_110_int; // 0x154 Eq
	if(var_111_bool == 0) goto Label_357; // 0x155 JumpB
	var_112_string = ""; // 0x156 PushV
	var_112_string = "Neutral"; // 0x157 MovS
	func_137(var_12_bool, var_112_string); // 0x158 NEW_2
	var_113_int = 526247; // 0x15a PushI
	SetMessage(var_113_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_114_int = 526248; // 0x15f PushI
	var_115_int = 27295; // 0x160 PushI
	var_116_int = 27520; // 0x161 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_117_int = 27295; // 0x165 PushI
	var_118_bool = var_11_object == var_117_int; // 0x166 Eq
	if(var_118_bool == 0) goto Label_375; // 0x167 JumpB
	var_119_string = ""; // 0x168 PushV
	var_119_string = "Neutral"; // 0x169 MovS
	func_137(var_12_bool, var_119_string); // 0x16a NEW_2
	var_120_int = 526008; // 0x16c PushI
	SetMessage(var_120_int); // 0x16d TObjFunc
	ClearReplies(); // 0x16f TObjFunc
	var_121_int = 526011; // 0x171 PushI
	var_122_int = 27512; // 0x172 PushI
	var_123_int = 27298; // 0x173 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x174 TObjFunc
	return 0; // 0x176 Return
	
Label_375:
	var_124_int = 27512; // 0x177 PushI
	var_125_bool = var_11_object == var_124_int; // 0x178 Eq
	if(var_125_bool == 0) goto Label_398; // 0x179 JumpB
	var_126_string = ""; // 0x17a PushV
	var_126_string = "Neutral"; // 0x17b MovS
	func_137(var_12_bool, var_126_string); // 0x17c NEW_2
	var_127_int = 526241; // 0x17e PushI
	SetMessage(var_127_int); // 0x17f TObjFunc
	ClearReplies(); // 0x181 TObjFunc
	var_128_int = 526242; // 0x183 PushI
	var_129_int = -1; // 0x184 PushI
	var_130_int = 27513; // 0x185 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x186 TObjFunc
	var_131_int = 526250; // 0x188 PushI
	var_132_int = -1; // 0x189 PushI
	var_133_int = 27523; // 0x18a PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x18b TObjFunc
	return 0; // 0x18d Return
	
Label_398:
	var_3_string = 1; // 0x18e TMovB
	var_134_bool = 0; // 0x18f PushV
	func_778(var_134_bool); // 0x190 NEW_2
	if(var_134_bool == 0) goto Label_406; // 0x192 JumpB
	lshStopAnimation(); // 0x193 Func
	goto Label_408; // 0x195 Jump
	
Label_408:
	return 0; // 0x198 Return
	
Label_406:
	StopAnimation(); // 0x196 Func
	
Label_410:
	return 0; // 0x19a Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_int = var_5_int; // 0x1a6 PushT
	if(var_12_int == 0) goto Label_425; // 0x1a7 JumpB
	return 0; // 0x1a8 Return
	
Label_425:
	func_501(var_10_bool, var_11_object); // 0x1aa NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x1ac PushV
	var_17_object = var_11_object; // 0x1ad Mov
	TaskCall(0); // 0x1ae TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x1af NEW_2
	TaskReturn(); // 0x1b0 TaskReturn
	var_5_int = 1; // 0x1b2 TMovB
	return 0; // 0x1b3 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int)
{
	var_12_int = 10; // 0x1df PushI
	var_13_bool = var_11_int == var_12_int; // 0x1e0 Eq
	if(var_13_bool == 0) goto Label_500; // 0x1e1 JumpB
	var_14_bool = 0; // 0x1e2 PushV
	func_463(var_9_object, var_10_bool, var_11_int, var_14_bool); // 0x1e3 NEW_2
	if(var_14_bool == 0) goto Label_494; // 0x1e5 JumpB
	var_27_bool = var_2_object == 0; // 0x1e6 Not
	if(var_27_bool == 0) goto Label_493; // 0x1e7 JumpB
	var_28_object = Obj(); // 0x1e8 PushV
	var_28_object = var_4_bool; // 0x1e9 MovT
	func_730(var_28_object); // 0x1ea NEW_2
	var_2_object = 1; // 0x1ec TMovB
	
Label_493:
	goto Label_500; // 0x1ed Jump
	
Label_500:
	return 0; // 0x1f4 Return
	
Label_494:
	var_35_object = var_2_object; // 0x1ee PushT
	if(var_35_object == 0) goto Label_500; // 0x1ef JumpB
	var_36_string = "head"; // 0x1f0 PushS
	UnlookAsync(var_36_string); // 0x1f1 Func
	var_2_object = 0; // 0x1f3 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool)
{
	
Label_411:
	var_11_float = 0; var_12_float = 0; // 0x19b PushV
	var_11_float = 300; // 0x19c MovI
	var_12_float = 100; // 0x19d MovI
	func_436(var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_float, var_12_float); // 0x19e NEW_2
	var_73_int = 3; // 0x1a0 PushI
	Sleep(var_73_int); // 0x1a1 Func
	goto Label_411; // 0x1a3 Jump
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_614(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_772(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_770(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_774(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_776(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_811(var_78_int); // 0x22 NEW_2
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
	var_144_bool = var_26_bool == 0; // 0x38 Not
	if(var_144_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_145_object = Obj(); // 0x3f PushV
	var_145_object = var_17_object; // 0x40 Mov
	func_682(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_770(var_75_int)
{
	var_75_int = 515569; // 0x302 MovI
	return 0; // 0x303 Return
}


func_515()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x203 PushV
	WaitForAnimEnd(); // 0x204 Func
	var_34_bool = 0; // 0x206 PushV
	func_609(var_34_bool); // 0x207 NEW_2
	var_35_bool = var_34_bool == 0; // 0x209 Not
	if(var_35_bool == 0) goto Label_524; // 0x20a JumpB
	return 14; // 0x20b Return
	
Label_524:
	var_36_int = 0; // 0x20c PushV
	func_787(var_36_int); // 0x20d NEW_2
	var_27_int = var_36_int; // 0x20e Mov
	var_28_int = 0; // 0x210 MovI
	
Label_529:
	var_49_bool = 0; // 0x211 PushV
	var_49_bool = 0; // 0x212 MovB
	var_50_int = 5; // 0x213 PushI
	var_51_bool = var_28_int < var_50_int; // 0x214 LT
	if(var_51_bool == 0) goto Label_539; // 0x215 JumpB
	var_52_bool = 0; // 0x216 PushV
	func_609(var_52_bool); // 0x217 NEW_2
	if(var_52_bool == 0) goto Label_539; // 0x219 JumpB
	var_49_bool = 1; // 0x21a MovB
	
Label_539:
	if(var_49_bool == 0) goto Label_591; // 0x21b JumpB
	var_53_int = 3; // 0x21c PushI
	irand(var_29_int, var_53_int); // 0x21d Func
	var_54_int = 0; // 0x21f PushI
	var_55_bool = var_29_int == var_54_int; // 0x220 Eq
	if(var_55_bool == 0) goto Label_563; // 0x221 JumpB
	var_56_int = var_27_int; // 0x222 Push
	if(var_56_int == 0) goto Label_562; // 0x223 JumpB
	irand(var_30_int, var_27_int); // 0x224 Func
	var_57_string = "all"; // 0x226 PushS
	var_58_string = ""; var_59_int = 0; // 0x227 PushV
	var_59_int = var_30_int; // 0x228 Mov
	func_780(var_58_string, var_59_int); // 0x229 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x22b Func
	WaitForAnimEnd(var_31_bool); // 0x22d Func
	var_60_bool = var_31_bool == 0; // 0x22f Not
	if(var_60_bool == 0) goto Label_562; // 0x230 JumpB
	goto Label_591; // 0x231 Jump
	
Label_591:
	ResetAAS(); // 0x24f Func
	return 14; // 0x251 Return
	
Label_562:
	goto Label_580; // 0x232 Jump
	
Label_580:
	var_61_bool = 0; // 0x244 PushV
	func_594(var_61_bool); // 0x245 NEW_2
	var_62_bool = var_61_bool == 0; // 0x247 Not
	if(var_62_bool == 0) goto Label_586; // 0x248 JumpB
	goto Label_591; // 0x249 Jump
	
Label_586:
	ResetAAS(); // 0x24a Func
	var_63_int = 1; // 0x24c PushI
	var_28_int = var_28_int + var_63_int; // 0x24d Add2
	goto Label_529; // 0x24e Jump
	
Label_563:
	var_64_int = 1; // 0x233 PushI
	var_65_bool = var_29_int == var_64_int; // 0x234 Eq
	if(var_65_bool == 0) goto Label_577; // 0x235 JumpB
	var_66_int = 4; // 0x236 PushI
	rand(var_32_float, var_66_int); // 0x237 Func
	var_67_int = 1; // 0x239 PushI
	var_68_int = var_32_float + var_67_int; // 0x23a Add
	Sleep(var_68_int, var_33_bool); // 0x23b Func
	var_69_bool = var_33_bool == 0; // 0x23d Not
	if(var_69_bool == 0) goto Label_576; // 0x23e JumpB
	goto Label_591; // 0x23f Jump
	
Label_576:
	goto Label_580; // 0x240 Jump
	
Label_577:
	var_70_int = var_28_int; // 0x241 Push
	if(var_70_int == 0) goto Label_580; // 0x242 JumpB
	goto Label_591; // 0x243 Jump
}


func_772(var_74_int)
{
	var_74_int = 503354; // 0x304 MovI
	return 0; // 0x305 Return
}


func_774(var_76_string)
{
	var_76_string = "ui/NPC_wmask.png"; // 0x306 MovS
	return 0; // 0x307 Return
}


func_776(var_77_string)
{
	var_77_string = "ui/NPC_wmask_b.png"; // 0x308 MovS
	return 0; // 0x309 Return
}


func_137(var_2_object, var_102_string)
{
	var_103_bool = 0; // 0x8a PushV
	func_778(var_103_bool); // 0x8b NEW_2
	var_104_bool = var_103_bool == 0; // 0x8d Not
	if(var_104_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_105_bool = var_102_string == var_2_object; // 0x90 Eq
	if(var_105_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_106_string = ""; var_107_bool = 0; // 0x93 PushV
	var_106_string = var_102_string; // 0x94 Mov
	var_108_string = ""; // 0x95 PushS
	var_109_bool = var_102_string == var_108_string; // 0x96 Eq
	if(var_109_bool == 0) goto Label_154; // 0x97 JumpB
	var_107_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_715(var_106_string, var_107_bool); // 0x9b NEW_2
	var_2_object = var_102_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_107_bool = 1; // 0x9a MovB
}


func_778(var_69_bool)
{
	var_69_bool = 0; // 0x30a MovB
	return 0; // 0x30b Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_107; // 0x4f JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x50 PushV
	var_94_object = var_1_object; // 0x51 MovT
	var_95_object = var_0_object; // 0x52 MovT
	func_804(); // 0x53 NEW_2
	var_102_string = ""; // 0x55 PushV
	var_102_string = "Neutral"; // 0x56 MovS
	func_137(var_88_object, var_102_string); // 0x57 NEW_2
	var_119_int = 525998; // 0x59 PushI
	SetMessage(var_119_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_120_int = 525999; // 0x5e PushI
	var_121_int = 27287; // 0x5f PushI
	var_122_int = 27286; // 0x60 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x61 TObjFunc
	var_123_int = 526018; // 0x63 PushI
	var_124_int = 27307; // 0x64 PushI
	var_125_int = 27306; // 0x65 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_126_bool = 0; // 0x6b PushV
	func_778(var_126_bool); // 0x6c NEW_2
	if(var_126_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_127_string = var_3_string; // 0x71 PushT
	if(var_127_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_128_string = ""; // 0x74 PushV
	var_128_string = var_2_object; // 0x75 MovT
	func_699(var_128_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_139_string = "all"; // 0x7a PushS
	var_140_string = "idle"; // 0x7b PushS
	PlayAnimation(var_139_string, var_140_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_141_string = var_3_string; // 0x80 PushT
	if(var_141_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_142_string = "all"; // 0x83 PushS
	var_143_string = "idle"; // 0x84 PushS
	PlayAnimation(var_142_string, var_143_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_780(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x30c PushV
	var_45_string = "idle"; // 0x30d MovS
	var_46_int = var_43_int; // 0x30e Push
	if(var_46_int == 0) goto Label_785; // 0x30f JumpB
	var_45_string = var_45_string + var_43_int; // 0x310 Add2
	
Label_785:
	var_42_string = var_45_string; // 0x311 Mov
	return 2; // 0x312 Return
}


func_715(var_106_string, var_107_bool)
{
	var_110_bool = 0; var_111_float = 0; var_112_float = 0; var_113_bool = 0; var_114_float = 0; var_115_float = 0; // 0x2cb PushV
	lshHasAnimation(var_113_bool, var_106_string); // 0x2cc Func
	var_116_bool = var_113_bool; // 0x2ce Push
	if(var_116_bool == 0) goto Label_725; // 0x2cf JumpB
	lshGetAnimTimes(var_106_string, var_114_float, var_115_float); // 0x2d0 Func
	lshPlayAnimation(var_114_float, var_115_float, var_107_bool); // 0x2d2 Func
	goto Label_729; // 0x2d4 Jump
	
Label_729:
	return 6; // 0x2d9 Return
	
Label_725:
	var_117_string = "Can't find lsh animation : "; // 0x2d5 PushS
	var_118_int = var_117_string + var_106_string; // 0x2d6 Add
	Trace(var_118_int); // 0x2d7 Func
}


func_463(var_0_object, var_1_object, var_4_bool, var_14_bool)
{
	var_15_float = 0; var_16_float = 0; // 0x1cf PushV
	var_17_bool = var_4_bool == 0; // 0x1d0 NullEq
	if(var_17_bool == 0) goto Label_468; // 0x1d1 JumpB
	var_14_bool = 0; // 0x1d2 MovB
	return 2; // 0x1d3 Return
	
Label_468:
	var_18_float = 0; var_19_object = Obj(); // 0x1d4 PushV
	var_19_object = var_4_bool; // 0x1d5 MovT
	func_601(var_19_object); // 0x1d6 NEW_2
	var_16_float = sqrt(var_18_float); // 0x1d8 Sqrt2
	var_26_object = var_2_object; // 0x1d9 PushT
	if(var_26_object == 0) goto Label_476; // 0x1da JumpB
	var_16_float = var_16_float - var_1_object; // 0x1db Sub2
	
Label_476:
	var_14_bool = var_16_float < var_0_object; // 0x1dc LT2
	return 2; // 0x1dd Return
}


func_594(var_61_bool)
{
	var_61_bool = 1; // 0x252 MovB
	return 0; // 0x253 Return
}


func_787(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x313 PushV
	var_39_int = 0; // 0x314 MovI
	
Label_789:
	var_41_string = "all"; // 0x315 PushS
	var_42_string = ""; var_43_int = 0; // 0x316 PushV
	var_43_int = var_39_int; // 0x317 Mov
	func_780(var_42_string, var_43_int); // 0x318 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x31a Func
	var_47_bool = var_40_bool == 0; // 0x31c Not
	if(var_47_bool == 0) goto Label_799; // 0x31d JumpB
	goto Label_802; // 0x31e Jump
	
Label_802:
	var_36_int = var_39_int; // 0x322 Mov
	return 4; // 0x323 Return
	
Label_799:
	var_48_int = 1; // 0x31f PushI
	var_39_int = var_39_int + var_48_int; // 0x320 Add2
	goto Label_789; // 0x321 Jump
}


func_596()
{
	StopAnimation(); // 0x254 Func
	StopGroup0(); // 0x256 Func
	return 0; // 0x258 Return
}


func_601(var_18_float)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0x259 PushV
	GetPosition(var_23_cvector); // 0x25a Func
	GetPosition(var_24_cvector); // 0x25c ObjFunc
	var_25_cvector = var_24_cvector - var_23_cvector; // 0x25e Sub2
	var_18_float = var_25_cvector | var_25_cvector; // 0x25f Or2
	return 6; // 0x260 Return
}


func_730(var_28_object)
{
	var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_cvector = CVector(0,0,0); // 0x2da PushV
	GetEyesHeight(var_31_float); // 0x2db ObjFunc
	var_32_cvector = CVector(0.0, 0.0, 0.0); // 0x2dd MovV
	var_33_float = GetByIndex(var_32_cvector, 1); // 0x2de PushE
	var_33_float = var_31_float; // 0x2df Mov
	SetByIndex(var_32_cvector, 1) = var_33_float; // 0x2e0 PopE
	var_34_string = "head"; // 0x2e1 PushS
	LookAsync(var_28_object, var_34_string, var_32_cvector); // 0x2e2 Func
	return 4; // 0x2e4 Return
}


func_609(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x261 PushV
	IsLoaded(var_15_bool); // 0x262 Func
	var_13_bool = var_15_bool; // 0x264 Mov
	return 2; // 0x265 Return
}


func_804()
{
	var_96_bool = 0; var_97_string = ""; var_98_string = ""; // 0x325 PushV
	var_97_string = "quest_k1_01"; // 0x326 MovS
	var_98_string = "remove_whitemask"; // 0x327 MovS
	func_758(var_96_bool, var_97_string, var_98_string); // 0x328 NEW_2
	return 0; // 0x32a Return
}


func_741()
{
	var_14_bool = 0; // 0x2e5 PushV
	func_778(var_14_bool); // 0x2e6 NEW_2
	if(var_14_bool == 0) goto Label_747; // 0x2e8 JumpB
	lshStopSpeech(); // 0x2e9 Func
	
Label_747:
	return 0; // 0x2eb Return
}


func_614(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x266 PushV
	GetPosition(var_40_cvector); // 0x267 ObjFunc
	GetEyesHeight(var_39_float); // 0x269 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x26b PushE
	var_48_float = var_48_float + var_39_float; // 0x26c Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x26d PopE
	GetPosition(var_41_cvector); // 0x26e Func
	GetEyesHeight(var_39_float); // 0x270 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x272 PushE
	var_49_float = var_49_float + var_39_float; // 0x273 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x274 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x275 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x276 PushE
	var_50_float = 0; // 0x277 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x278 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x279 Or
	var_52_float = sqrt(var_51_int); // 0x27a Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x27b Div2
	var_43_cvector = -var_42_cvector; // 0x27c Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x27d Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x27e PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x27f PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x280 Xor2
	func_748(var_54_cvector, var_55_cvector); // 0x281 NEW_2
	var_62_int = 25; // 0x283 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x284 Mult
	var_64_int = var_53_float + var_63_float; // 0x285 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x286 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x287 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x288 Add2
	IsOverrideActive(var_46_bool); // 0x289 Func
	var_66_bool = var_46_bool; // 0x28b Push
	if(var_66_bool == 0) goto Label_655; // 0x28c JumpB
	var_27_bool = 0; // 0x28d MovB
	return 18; // 0x28e Return
	
Label_655:
	StopWorld(); // 0x28f Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x291 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x293 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x294 PushE
	Rotate(var_67_float, var_68_float); // 0x295 Func
	var_69_bool = 0; // 0x297 PushV
	func_778(var_69_bool); // 0x298 NEW_2
	if(var_69_bool == 0) goto Label_668; // 0x29a JumpB
	goto Label_676; // 0x29b Jump
	
Label_676:
	CameraWaitForPlayFinish(); // 0x2a4 Func
	ResumeWorld(); // 0x2a6 Func
	var_27_bool = 1; // 0x2a8 MovB
	return 18; // 0x2a9 Return
	
Label_668:
	var_70_string = "head"; // 0x29c PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x29d Func
	var_71_bool = var_47_bool; // 0x29f Push
	if(var_71_bool == 0) goto Label_676; // 0x2a0 JumpB
	var_72_string = "head"; // 0x2a1 PushS
	LookAsyncCamera(var_72_string); // 0x2a2 Func
}


func_682()
{
	var_146_bool = 0; var_147_bool = 0; // 0x2aa PushV
	CameraSwitchToNormal(); // 0x2ab Func
	var_148_bool = 0; // 0x2ad PushV
	func_778(var_148_bool); // 0x2ae NEW_2
	if(var_148_bool == 0) goto Label_690; // 0x2b0 JumpB
	goto Label_698; // 0x2b1 Jump
	
Label_698:
	return 2; // 0x2ba Return
	
Label_690:
	var_149_string = "head"; // 0x2b2 PushS
	HasAnimationTrack(var_147_bool, var_149_string); // 0x2b3 Func
	var_150_bool = var_147_bool; // 0x2b5 Push
	if(var_150_bool == 0) goto Label_698; // 0x2b6 JumpB
	var_151_string = "head"; // 0x2b7 PushS
	UnlookAsync(var_151_string); // 0x2b8 Func
}


func_811(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x32b PushV
	var_81_string = "branch"; // 0x32c PushS
	GetVariable(var_81_string, var_80_int); // 0x32d Func
	var_82_int = 0; // 0x32f PushI
	var_83_bool = var_80_int == var_82_int; // 0x330 Eq
	if(var_83_bool == 0) goto Label_821; // 0x331 JumpB
	var_78_int = 1; // 0x332 MovI
	return 2; // 0x333 Return
	
Label_821:
	var_84_int = 1; // 0x335 PushI
	var_85_bool = var_80_int == var_84_int; // 0x336 Eq
	if(var_85_bool == 0) goto Label_826; // 0x337 JumpB
	var_78_int = 2; // 0x338 MovI
	return 2; // 0x339 Return
	
Label_826:
	var_78_int = 3; // 0x33a MovI
	return 2; // 0x33b Return
}


func_748(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x2ec PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x2ed Or
	var_58_float = sqrt(var_59_int); // 0x2ee Sqrt2
	var_60_float = 0.0; // 0x2ef PushF
	var_61_bool = var_58_float < var_60_float; // 0x2f0 LT
	if(var_61_bool == 0) goto Label_756; // 0x2f1 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x2f2 MovV
	return 2; // 0x2f3 Return
	
Label_756:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x2f4 Div2
	return 2; // 0x2f5 Return
}


func_436(var_0_object, var_1_object, var_2_object, var_3_string, var_10_bool, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x1b5 PushV
	func_609(var_13_bool); // 0x1b6 NEW_2
	var_16_bool = var_13_bool == 0; // 0x1b8 Not
	if(var_16_bool == 0) goto Label_443; // 0x1b9 JumpB
	return 0; // 0x1ba Return
	
Label_443:
	var_17_string = "player"; // 0x1bb PushS
	FindActor(var_10_bool, var_17_string); // 0x1bc Func
	var_2_object = 0; // 0x1be TMovB
	var_3_string = 0; // 0x1bf TMovB
	var_0_object = var_11_float; // 0x1c0 TMov
	var_1_object = var_12_float; // 0x1c1 TMov
	var_18_int = 10; // 0x1c2 PushI
	var_19_float = 1.0; // 0x1c3 PushF
	SetTimer(var_18_int, var_19_float); // 0x1c4 Func
	func_515(); // 0x1c7 NEW_2
	var_71_bool = var_3_string == 0; // 0x1c9 Not
	if(var_71_bool == 0) goto Label_462; // 0x1ca JumpB
	var_72_int = 10; // 0x1cb PushI
	KillTimer(var_72_int); // 0x1cc Func
	
Label_462:
	return 0; // 0x1ce Return
}


func_501(var_2_object, var_3_string)
{
	func_596(); // 0x1f6 NEW_2
	var_13_int = 10; // 0x1f8 PushI
	KillTimer(var_13_int); // 0x1f9 Func
	var_14_object = var_2_object; // 0x1fb PushT
	if(var_14_object == 0) goto Label_513; // 0x1fc JumpB
	var_15_string = "head"; // 0x1fd PushS
	UnlookAsync(var_15_string); // 0x1fe Func
	var_2_object = 0; // 0x200 TMovB
	
Label_513:
	var_3_string = 1; // 0x201 TMovB
	return 0; // 0x202 Return
}


func_758(var_96_bool, var_97_string, var_98_string)
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x2f6 PushV
	FindActor(var_100_object, var_97_string); // 0x2f7 Func
	var_101_bool = var_100_object == 0; // 0x2f9 NullEq
	if(var_101_bool == 0) goto Label_765; // 0x2fa JumpB
	var_96_bool = 0; // 0x2fb MovB
	return 2; // 0x2fc Return
	
Label_765:
	Trigger(var_100_object, var_98_string); // 0x2fd Func
	var_96_bool = 1; // 0x2ff MovB
	return 2; // 0x300 Return
}


func_699(var_128_string)
{
	var_129_bool = 0; var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_float = 0; var_134_float = 0; // 0x2bb PushV
	lshHasAnimation(var_132_bool, var_128_string); // 0x2bc Func
	var_135_bool = var_132_bool; // 0x2be Push
	if(var_135_bool == 0) goto Label_710; // 0x2bf JumpB
	lshGetAnimTimes(var_128_string, var_133_float, var_134_float); // 0x2c0 Func
	var_136_bool = 0; // 0x2c2 PushB
	lshPlayAnimation(var_133_float, var_134_float, var_136_bool); // 0x2c3 Func
	goto Label_714; // 0x2c5 Jump
	
Label_714:
	return 6; // 0x2ca Return
	
Label_710:
	var_137_string = "Can't find lsh animation : "; // 0x2c6 PushS
	var_138_int = var_137_string + var_128_string; // 0x2c7 Add
	Trace(var_138_int); // 0x2c8 Func
}


