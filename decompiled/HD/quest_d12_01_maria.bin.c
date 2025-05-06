task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xa7 PushI
	if(var_8_int == 0) goto Label_371; // 0xa8 JumpB
	func_705(); // 0xaa NEW_2
	var_10_int = 37326; // 0xac PushI
	var_11_bool = var_7_bool == var_10_int; // 0xad Eq
	if(var_11_bool == 0) goto Label_180; // 0xae JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xaf PushV
	var_12_object = var_1_object; // 0xb0 MovT
	var_13_object = var_0_object; // 0xb1 MovT
	func_742(); // 0xb2 NEW_2
	
Label_180:
	var_16_int = 37325; // 0xb4 PushI
	var_17_bool = var_6_int == var_16_int; // 0xb5 Eq
	if(var_17_bool == 0) goto Label_208; // 0xb6 JumpB
	var_18_string = ""; // 0xb7 PushV
	var_18_string = "Neutral"; // 0xb8 MovS
	func_144(var_7_bool, var_18_string); // 0xb9 NEW_2
	var_35_int = 535639; // 0xbb PushI
	SetMessage(var_35_int); // 0xbc TObjFunc
	ClearReplies(); // 0xbe TObjFunc
	var_36_bool = 0; var_37_object = Obj(); // 0xc0 PushV
	var_37_object = var_1_object; // 0xc1 MovT
	func_748(var_37_object); // 0xc2 NEW_2
	if(var_36_bool == 0) goto Label_202; // 0xc4 JumpB
	var_44_int = 535640; // 0xc5 PushI
	var_45_int = 42495; // 0xc6 PushI
	var_46_int = 37326; // 0xc7 PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xc8 TObjFunc
	
Label_202:
	var_47_int = 540495; // 0xca PushI
	var_48_int = -1; // 0xcb PushI
	var_49_int = 42494; // 0xcc PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xcd TObjFunc
	return 0; // 0xcf Return
	
Label_208:
	var_50_int = 42495; // 0xd0 PushI
	var_51_bool = var_6_int == var_50_int; // 0xd1 Eq
	if(var_51_bool == 0) goto Label_231; // 0xd2 JumpB
	var_52_string = ""; // 0xd3 PushV
	var_52_string = "Neutral"; // 0xd4 MovS
	func_144(var_7_bool, var_52_string); // 0xd5 NEW_2
	var_53_int = 540496; // 0xd7 PushI
	SetMessage(var_53_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_54_int = 540500; // 0xdc PushI
	var_55_int = 42500; // 0xdd PushI
	var_56_int = 42499; // 0xde PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xdf TObjFunc
	var_57_int = 540498; // 0xe1 PushI
	var_58_int = -1; // 0xe2 PushI
	var_59_int = 42497; // 0xe3 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_60_int = 42500; // 0xe7 PushI
	var_61_bool = var_6_int == var_60_int; // 0xe8 Eq
	if(var_61_bool == 0) goto Label_249; // 0xe9 JumpB
	var_62_string = ""; // 0xea PushV
	var_62_string = "Neutral"; // 0xeb MovS
	func_144(var_7_bool, var_62_string); // 0xec NEW_2
	var_63_int = 540501; // 0xee PushI
	SetMessage(var_63_int); // 0xef TObjFunc
	ClearReplies(); // 0xf1 TObjFunc
	var_64_int = 540497; // 0xf3 PushI
	var_65_int = 42498; // 0xf4 PushI
	var_66_int = 42496; // 0xf5 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xf6 TObjFunc
	return 0; // 0xf8 Return
	
Label_249:
	var_67_int = 42498; // 0xf9 PushI
	var_68_bool = var_6_int == var_67_int; // 0xfa Eq
	if(var_68_bool == 0) goto Label_272; // 0xfb JumpB
	var_69_string = ""; // 0xfc PushV
	var_69_string = "Neutral"; // 0xfd MovS
	func_144(var_7_bool, var_69_string); // 0xfe NEW_2
	var_70_int = 540499; // 0x100 PushI
	SetMessage(var_70_int); // 0x101 TObjFunc
	ClearReplies(); // 0x103 TObjFunc
	var_71_int = 540502; // 0x105 PushI
	var_72_int = 42502; // 0x106 PushI
	var_73_int = 42501; // 0x107 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x108 TObjFunc
	var_74_int = 540511; // 0x10a PushI
	var_75_int = 42511; // 0x10b PushI
	var_76_int = 42510; // 0x10c PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x10d TObjFunc
	return 0; // 0x10f Return
	
Label_272:
	var_77_int = 42511; // 0x110 PushI
	var_78_bool = var_6_int == var_77_int; // 0x111 Eq
	if(var_78_bool == 0) goto Label_295; // 0x112 JumpB
	var_79_string = ""; // 0x113 PushV
	var_79_string = "Neutral"; // 0x114 MovS
	func_144(var_7_bool, var_79_string); // 0x115 NEW_2
	var_80_int = 540512; // 0x117 PushI
	SetMessage(var_80_int); // 0x118 TObjFunc
	ClearReplies(); // 0x11a TObjFunc
	var_81_int = 540513; // 0x11c PushI
	var_82_int = 42504; // 0x11d PushI
	var_83_int = 42512; // 0x11e PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x11f TObjFunc
	var_84_int = 540514; // 0x121 PushI
	var_85_int = -1; // 0x122 PushI
	var_86_int = 42514; // 0x123 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x124 TObjFunc
	return 0; // 0x126 Return
	
Label_295:
	var_87_int = 42502; // 0x127 PushI
	var_88_bool = var_6_int == var_87_int; // 0x128 Eq
	if(var_88_bool == 0) goto Label_318; // 0x129 JumpB
	var_89_string = ""; // 0x12a PushV
	var_89_string = "Neutral"; // 0x12b MovS
	func_144(var_7_bool, var_89_string); // 0x12c NEW_2
	var_90_int = 540503; // 0x12e PushI
	SetMessage(var_90_int); // 0x12f TObjFunc
	ClearReplies(); // 0x131 TObjFunc
	var_91_int = 540504; // 0x133 PushI
	var_92_int = 42504; // 0x134 PushI
	var_93_int = 42503; // 0x135 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x136 TObjFunc
	var_94_int = 540506; // 0x138 PushI
	var_95_int = -1; // 0x139 PushI
	var_96_int = 42505; // 0x13a PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x13b TObjFunc
	return 0; // 0x13d Return
	
Label_318:
	var_97_int = 42504; // 0x13e PushI
	var_98_bool = var_6_int == var_97_int; // 0x13f Eq
	if(var_98_bool == 0) goto Label_336; // 0x140 JumpB
	var_99_string = ""; // 0x141 PushV
	var_99_string = "Neutral"; // 0x142 MovS
	func_144(var_7_bool, var_99_string); // 0x143 NEW_2
	var_100_int = 540505; // 0x145 PushI
	SetMessage(var_100_int); // 0x146 TObjFunc
	ClearReplies(); // 0x148 TObjFunc
	var_101_int = 540507; // 0x14a PushI
	var_102_int = 42507; // 0x14b PushI
	var_103_int = 42506; // 0x14c PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x14d TObjFunc
	return 0; // 0x14f Return
	
Label_336:
	var_104_int = 42507; // 0x150 PushI
	var_105_bool = var_6_int == var_104_int; // 0x151 Eq
	if(var_105_bool == 0) goto Label_359; // 0x152 JumpB
	var_106_string = ""; // 0x153 PushV
	var_106_string = "Staring"; // 0x154 MovS
	func_144(var_7_bool, var_106_string); // 0x155 NEW_2
	var_107_int = 540508; // 0x157 PushI
	SetMessage(var_107_int); // 0x158 TObjFunc
	ClearReplies(); // 0x15a TObjFunc
	var_108_int = 540509; // 0x15c PushI
	var_109_int = -1; // 0x15d PushI
	var_110_int = 42508; // 0x15e PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x15f TObjFunc
	var_111_int = 540510; // 0x161 PushI
	var_112_int = -1; // 0x162 PushI
	var_113_int = 42509; // 0x163 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x164 TObjFunc
	return 0; // 0x166 Return
	
Label_359:
	var_3_string = 1; // 0x167 TMovB
	var_114_bool = 0; // 0x168 PushV
	func_785(var_114_bool); // 0x169 NEW_2
	if(var_114_bool == 0) goto Label_367; // 0x16b JumpB
	lshStopAnimation(); // 0x16c Func
	goto Label_369; // 0x16e Jump
	
Label_369:
	return 0; // 0x171 Return
	
Label_367:
	StopAnimation(); // 0x16f Func
	
Label_371:
	return 0; // 0x173 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x179 PushV
	var_8_object = var_6_object; // 0x17a Mov
	TaskCall(0); // 0x17b TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x17c NEW_2
	TaskReturn(); // 0x17d TaskReturn
	return 0; // 0x17f Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x184 PushV
	var_9_string = "cleanup"; // 0x185 PushS
	var_10_bool = var_6_string == var_9_string; // 0x186 Eq
	if(var_10_bool == 0) goto Label_411; // 0x187 JumpB
	var_0_object = 1; // 0x188 TMovB
	IsLoaded(var_8_bool); // 0x189 Func
	var_11_bool = 0; // 0x18b PushV
	var_11_bool = 0; // 0x18c MovB
	var_12_bool = var_8_bool == 0; // 0x18d Not
	if(var_12_bool == 0) goto Label_404; // 0x18e JumpB
	var_13_bool = 0; // 0x18f PushV
	func_432(var_13_bool); // 0x190 NEW_2
	if(var_13_bool == 0) goto Label_404; // 0x192 JumpB
	var_11_bool = 1; // 0x193 MovB
	
Label_404:
	if(var_11_bool == 0) goto Label_410; // 0x194 JumpB
	var_14_object = Obj(); // 0x195 PushV
	func_712(var_14_object); // 0x196 NEW_2
	RemoveActor(var_14_object); // 0x198 Func
	
Label_410:
	goto Label_415; // 0x19a Jump
	
Label_415:
	return 2; // 0x19f Return
	
Label_411:
	var_17_string = "restore"; // 0x19b PushS
	var_18_bool = var_6_string == var_17_string; // 0x19c Eq
	if(var_18_bool == 0) goto Label_415; // 0x19d JumpB
	var_0_object = 0; // 0x19e TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1a0 PushV
	var_6_bool = 0; // 0x1a1 MovB
	var_7_object = var_0_object; // 0x1a2 PushT
	if(var_7_object == 0) goto Label_425; // 0x1a3 JumpB
	var_8_bool = 0; // 0x1a4 PushV
	func_432(var_8_bool); // 0x1a5 NEW_2
	if(var_8_bool == 0) goto Label_425; // 0x1a7 JumpB
	var_6_bool = 1; // 0x1a8 MovB
	
Label_425:
	if(var_6_bool == 0) goto Label_431; // 0x1a9 JumpB
	var_9_object = Obj(); // 0x1aa PushV
	func_712(var_9_object); // 0x1ab NEW_2
	RemoveActor(var_9_object); // 0x1ad Func
	
Label_431:
	return 0; // 0x1af Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_384(); // 0x175 NEW_2
	return 0; // 0x177 Return
}


func_384()
{
	
Label_384:
	Hold(); // 0x180 Func
	goto Label_384; // 0x182 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_434(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_779(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_777(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_781(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_783(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_760(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_bool = 0; var_80_object = Obj(); // 0x2f PushV
	var_81_object = Obj(); // 0x30 PushV
	func_712(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_521(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_231_bool = var_17_bool == 0; // 0x3f Not
	if(var_231_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_232_object = Obj(); // 0x46 PushV
	var_232_object = var_8_object; // 0x47 Mov
	func_503(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_705()
{
	var_9_bool = 0; // 0x2c1 PushV
	func_785(var_9_bool); // 0x2c2 NEW_2
	if(var_9_bool == 0) goto Label_711; // 0x2c4 JumpB
	lshStopSpeech(); // 0x2c5 Func
	
Label_711:
	return 0; // 0x2c7 Return
}


func_579(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x243 PushV
	var_97_string = "c"; // 0x244 MovS
	var_98_int = 0; // 0x245 MovI
	
Label_582:
	var_102_int = 1; // 0x246 PushI
	if(var_102_int == 0) goto Label_595; // 0x247 JumpB
	var_103_int = 1; // 0x248 PushI
	var_104_int = var_98_int + var_103_int; // 0x249 Add
	var_105_int = var_97_string + var_104_int; // 0x24a Add
	HasProperty(var_105_int, var_99_bool); // 0x24b ObjFunc
	var_106_bool = var_99_bool == 0; // 0x24d Not
	if(var_106_bool == 0) goto Label_592; // 0x24e JumpB
	goto Label_595; // 0x24f Jump
	
Label_595:
	var_107_bool = var_98_int == 0; // 0x253 Not
	if(var_107_bool == 0) goto Label_599; // 0x254 JumpB
	var_90_bool = 0; // 0x255 MovB
	return 10; // 0x256 Return
	
Label_599:
	var_100_int = 0; // 0x257 MovI
	var_108_int = 1; // 0x258 PushI
	var_109_bool = var_98_int > var_108_int; // 0x259 GT
	if(var_109_bool == 0) goto Label_605; // 0x25a JumpB
	irand(var_100_int, var_98_int); // 0x25b Func
	
Label_605:
	var_110_int = 1; // 0x25d PushI
	var_111_int = var_100_int + var_110_int; // 0x25e Add
	var_112_int = var_97_string + var_111_int; // 0x25f Add
	GetProperty(var_112_int, var_101_string); // 0x260 ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x262 PushV
	var_114_string = var_101_string; // 0x263 Mov
	func_690(var_113_bool, var_114_string); // 0x264 NEW_2
	var_90_bool = var_113_bool; // 0x265 Mov
	return 10; // 0x267 Return
	
Label_592:
	var_119_int = 1; // 0x250 PushI
	var_98_int = var_98_int + var_119_int; // 0x251 Add2
	goto Label_582; // 0x252 Jump
}


func_712(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2c8 PushV
	self(var_11_object); // 0x2c9 Func
	var_9_object = var_11_object; // 0x2cb Mov
	return 2; // 0x2cc Return
}


func_777(var_67_int)
{
	var_67_int = 515543; // 0x309 MovI
	return 0; // 0x30a Return
}


func_521(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x209 PushV
	var_88_string = "voice_common"; // 0x20a PushS
	GetVariable(var_88_string, var_86_int); // 0x20b Func
	var_89_int = var_86_int; // 0x20d Push
	if(var_89_int == 0) goto Label_559; // 0x20e JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x20f PushV
	var_91_object = var_80_object; // 0x210 Mov
	func_579(var_91_object); // 0x211 NEW_2
	var_120_bool = var_90_bool == 0; // 0x213 Not
	if(var_120_bool == 0) goto Label_541; // 0x214 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x215 PushV
	var_122_object = var_80_object; // 0x216 Mov
	func_616(var_122_object); // 0x217 NEW_2
	var_156_bool = var_121_bool == 0; // 0x219 Not
	if(var_156_bool == 0) goto Label_541; // 0x21a JumpB
	var_79_bool = 0; // 0x21b MovB
	return 4; // 0x21c Return
	
Label_541:
	var_157_int = 2; // 0x21d PushI
	irand(var_87_int, var_157_int); // 0x21e Func
	var_158_int = var_87_int; // 0x220 Push
	if(var_158_int == 0) goto Label_554; // 0x221 JumpB
	var_159_string = "voice_common"; // 0x222 PushS
	var_160_int = 1; // 0x223 PushI
	var_161_int = var_86_int + var_160_int; // 0x224 Add
	var_162_int = 3; // 0x225 PushI
	var_163_int = var_161_int / var_162_int; // 0x226 Mod
	SetVariable(var_159_string, var_163_int); // 0x227 Func
	goto Label_558; // 0x229 Jump
	
Label_558:
	goto Label_577; // 0x22e Jump
	
Label_577:
	var_79_bool = 1; // 0x241 MovB
	return 4; // 0x242 Return
	
Label_554:
	var_164_string = "voice_common"; // 0x22a PushS
	var_165_int = 0; // 0x22b PushI
	SetVariable(var_164_string, var_165_int); // 0x22c Func
	
Label_559:
	var_166_bool = 0; var_167_object = Obj(); // 0x22f PushV
	var_167_object = var_80_object; // 0x230 Mov
	func_616(var_167_object); // 0x231 NEW_2
	var_168_bool = var_166_bool == 0; // 0x233 Not
	if(var_168_bool == 0) goto Label_573; // 0x234 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x235 PushV
	var_170_object = var_80_object; // 0x236 Mov
	func_579(var_170_object); // 0x237 NEW_2
	var_171_bool = var_169_bool == 0; // 0x239 Not
	if(var_171_bool == 0) goto Label_573; // 0x23a JumpB
	var_79_bool = 0; // 0x23b MovB
	return 4; // 0x23c Return
	
Label_573:
	var_172_string = "voice_common"; // 0x23d PushS
	var_173_int = 1; // 0x23e PushI
	SetVariable(var_172_string, var_173_int); // 0x23f Func
}


func_779(var_66_int)
{
	var_66_int = 502868; // 0x30b MovI
	return 0; // 0x30c Return
}


func_781(var_68_string)
{
	var_68_string = "ui/NPC_Maria.png"; // 0x30d MovS
	return 0; // 0x30e Return
}


func_718(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x2ce PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x2cf Or
	var_49_float = sqrt(var_50_int); // 0x2d0 Sqrt2
	var_51_float = 0.0; // 0x2d1 PushF
	var_52_bool = var_49_float < var_51_float; // 0x2d2 LT
	if(var_52_bool == 0) goto Label_726; // 0x2d3 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2d4 MovV
	return 2; // 0x2d5 Return
	
Label_726:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2d6 Div2
	return 2; // 0x2d7 Return
}


func_783(var_69_string)
{
	var_69_string = "ui/NPC_Maria_b.png"; // 0x30f MovS
	return 0; // 0x310 Return
}


func_144(var_2_object, var_181_string)
{
	var_182_bool = 0; // 0x91 PushV
	func_785(var_182_bool); // 0x92 NEW_2
	var_183_bool = var_182_bool == 0; // 0x94 Not
	if(var_183_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_184_bool = var_181_string == var_2_object; // 0x97 Eq
	if(var_184_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_185_string = ""; var_186_bool = 0; // 0x9a PushV
	var_185_string = var_181_string; // 0x9b Mov
	var_187_string = ""; // 0x9c PushS
	var_188_bool = var_181_string == var_187_string; // 0x9d Eq
	if(var_188_bool == 0) goto Label_161; // 0x9e JumpB
	var_186_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_675(var_185_string, var_186_bool); // 0xa2 NEW_2
	var_2_object = var_181_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_186_bool = 1; // 0xa1 MovB
}


func_785(var_61_bool)
{
	var_61_bool = 1; // 0x311 MovB
	return 0; // 0x312 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_114; // 0x56 JumpB
	var_181_string = ""; // 0x57 PushV
	var_181_string = "Neutral"; // 0x58 MovS
	func_144(var_175_object, var_181_string); // 0x59 NEW_2
	var_198_int = 535639; // 0x5b PushI
	SetMessage(var_198_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_199_bool = 0; var_200_object = Obj(); // 0x60 PushV
	var_200_object = var_1_object; // 0x61 MovT
	func_748(var_200_object); // 0x62 NEW_2
	if(var_199_bool == 0) goto Label_106; // 0x64 JumpB
	var_207_int = 535640; // 0x65 PushI
	var_208_int = 42495; // 0x66 PushI
	var_209_int = 37326; // 0x67 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x68 TObjFunc
	
Label_106:
	var_210_int = 540495; // 0x6a PushI
	var_211_int = -1; // 0x6b PushI
	var_212_int = 42494; // 0x6c PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_213_bool = 0; // 0x72 PushV
	func_785(var_213_bool); // 0x73 NEW_2
	if(var_213_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_214_string = var_3_string; // 0x78 PushT
	if(var_214_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_215_string = ""; // 0x7b PushV
	var_215_string = var_2_object; // 0x7c MovT
	func_659(var_215_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_226_string = "all"; // 0x81 PushS
	var_227_string = "idle"; // 0x82 PushS
	PlayAnimation(var_226_string, var_227_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_228_string = var_3_string; // 0x87 PushT
	if(var_228_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_229_string = "all"; // 0x8a PushS
	var_230_string = "idle"; // 0x8b PushS
	PlayAnimation(var_229_string, var_230_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_659(var_215_string)
{
	var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_float = 0; var_221_float = 0; // 0x293 PushV
	lshHasAnimation(var_219_bool, var_215_string); // 0x294 Func
	var_222_bool = var_219_bool; // 0x296 Push
	if(var_222_bool == 0) goto Label_670; // 0x297 JumpB
	lshGetAnimTimes(var_215_string, var_220_float, var_221_float); // 0x298 Func
	var_223_bool = 0; // 0x29a PushB
	lshPlayAnimation(var_220_float, var_221_float, var_223_bool); // 0x29b Func
	goto Label_674; // 0x29d Jump
	
Label_674:
	return 6; // 0x2a2 Return
	
Label_670:
	var_224_string = "Can't find lsh animation : "; // 0x29e PushS
	var_225_int = var_224_string + var_215_string; // 0x29f Add
	Trace(var_225_int); // 0x2a0 Func
}


func_728(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x2d8 PushV
	GetVariable(var_202_string, var_204_int); // 0x2d9 Func
	var_201_int = var_204_int; // 0x2db Mov
	return 2; // 0x2dc Return
}


func_733(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x2dd PushV
	GetGameTime(var_136_float); // 0x2de Func
	var_137_int = 1; // 0x2e0 PushI
	var_138_int = 0; // 0x2e1 PushV
	var_139_int = 24; // 0x2e2 PushI
	var_138_int = var_136_float / var_136_float; // 0x2e3 Div2
	var_134_int = var_137_int + var_138_int; // 0x2e4 Add2
	return 2; // 0x2e5 Return
}


func_675(var_185_string, var_186_bool)
{
	var_189_bool = 0; var_190_float = 0; var_191_float = 0; var_192_bool = 0; var_193_float = 0; var_194_float = 0; // 0x2a3 PushV
	lshHasAnimation(var_192_bool, var_185_string); // 0x2a4 Func
	var_195_bool = var_192_bool; // 0x2a6 Push
	if(var_195_bool == 0) goto Label_685; // 0x2a7 JumpB
	lshGetAnimTimes(var_185_string, var_193_float, var_194_float); // 0x2a8 Func
	lshPlayAnimation(var_193_float, var_194_float, var_186_bool); // 0x2aa Func
	goto Label_689; // 0x2ac Jump
	
Label_689:
	return 6; // 0x2b1 Return
	
Label_685:
	var_196_string = "Can't find lsh animation : "; // 0x2ad PushS
	var_197_int = var_196_string + var_185_string; // 0x2ae Add
	Trace(var_197_int); // 0x2af Func
}


func_742()
{
	var_14_string = "ood12MariaSobor1"; // 0x2e7 PushS
	var_15_int = 1; // 0x2e8 PushI
	SetVariable(var_14_string, var_15_int); // 0x2e9 Func
	return 0; // 0x2eb Return
}


func_616(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x268 PushV
	var_133_string = "d"; // 0x269 PushS
	var_134_int = 0; // 0x26a PushV
	func_733(var_134_int); // 0x26b NEW_2
	var_140_int = var_133_string + var_134_int; // 0x26d Add
	var_141_string = "m"; // 0x26e PushS
	var_128_string = var_140_int + var_141_string; // 0x26f Add2
	var_129_int = 0; // 0x270 MovI
	
Label_625:
	var_142_int = 1; // 0x271 PushI
	if(var_142_int == 0) goto Label_638; // 0x272 JumpB
	var_143_int = 1; // 0x273 PushI
	var_144_int = var_129_int + var_143_int; // 0x274 Add
	var_145_int = var_128_string + var_144_int; // 0x275 Add
	HasProperty(var_145_int, var_130_bool); // 0x276 ObjFunc
	var_146_bool = var_130_bool == 0; // 0x278 Not
	if(var_146_bool == 0) goto Label_635; // 0x279 JumpB
	goto Label_638; // 0x27a Jump
	
Label_638:
	var_147_bool = var_129_int == 0; // 0x27e Not
	if(var_147_bool == 0) goto Label_642; // 0x27f JumpB
	var_121_bool = 0; // 0x280 MovB
	return 10; // 0x281 Return
	
Label_642:
	var_131_int = 0; // 0x282 MovI
	var_148_int = 1; // 0x283 PushI
	var_149_bool = var_129_int > var_148_int; // 0x284 GT
	if(var_149_bool == 0) goto Label_648; // 0x285 JumpB
	irand(var_131_int, var_129_int); // 0x286 Func
	
Label_648:
	var_150_int = 1; // 0x288 PushI
	var_151_int = var_131_int + var_150_int; // 0x289 Add
	var_152_int = var_128_string + var_151_int; // 0x28a Add
	GetProperty(var_152_int, var_132_string); // 0x28b ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x28d PushV
	var_154_string = var_132_string; // 0x28e Mov
	func_690(var_153_bool, var_154_string); // 0x28f NEW_2
	var_121_bool = var_153_bool; // 0x290 Mov
	return 10; // 0x292 Return
	
Label_635:
	var_155_int = 1; // 0x27b PushI
	var_129_int = var_129_int + var_155_int; // 0x27c Add2
	goto Label_625; // 0x27d Jump
}


func_748(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x2ed PushV
	var_202_string = "ood12MariaSobor1"; // 0x2ee MovS
	func_728(var_201_int, var_202_string); // 0x2ef NEW_2
	var_205_int = 0; // 0x2f1 PushI
	var_206_bool = var_201_int == var_205_int; // 0x2f2 Eq
	if(var_206_bool == 0) goto Label_758; // 0x2f3 JumpB
	var_199_bool = 1; // 0x2f4 MovB
	return 0; // 0x2f5 Return
	
Label_758:
	var_199_bool = 0; // 0x2f6 MovB
	return 0; // 0x2f7 Return
}


func_432(var_8_bool)
{
	var_8_bool = 1; // 0x1b0 MovB
	return 0; // 0x1b1 Return
}


func_434(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x1b2 PushV
	GetPosition(var_31_cvector); // 0x1b3 ObjFunc
	GetEyesHeight(var_30_float); // 0x1b5 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x1b7 PushE
	var_39_float = var_39_float + var_30_float; // 0x1b8 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x1b9 PopE
	GetPosition(var_32_cvector); // 0x1ba Func
	GetEyesHeight(var_30_float); // 0x1bc Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x1be PushE
	var_40_float = var_40_float + var_30_float; // 0x1bf Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x1c0 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x1c1 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x1c2 PushE
	var_41_float = 0; // 0x1c3 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x1c4 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x1c5 Or
	var_43_float = sqrt(var_42_int); // 0x1c6 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x1c7 Div2
	var_34_cvector = -var_33_cvector; // 0x1c8 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x1c9 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x1ca PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x1cb PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x1cc Xor2
	func_718(var_45_cvector, var_46_cvector); // 0x1cd NEW_2
	var_53_int = 25; // 0x1cf PushI
	var_54_float = var_45_cvector * var_53_int; // 0x1d0 Mult
	var_55_int = var_44_float + var_54_float; // 0x1d1 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x1d2 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x1d3 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x1d4 Add2
	IsOverrideActive(var_37_bool); // 0x1d5 Func
	var_57_bool = var_37_bool; // 0x1d7 Push
	if(var_57_bool == 0) goto Label_475; // 0x1d8 JumpB
	var_18_bool = 0; // 0x1d9 MovB
	return 18; // 0x1da Return
	
Label_475:
	StopWorld(); // 0x1db Func
	var_58_bool = 1; // 0x1dd PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x1de Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x1e0 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x1e1 PushE
	Rotate(var_59_float, var_60_float); // 0x1e2 Func
	var_61_bool = 0; // 0x1e4 PushV
	func_785(var_61_bool); // 0x1e5 NEW_2
	if(var_61_bool == 0) goto Label_489; // 0x1e7 JumpB
	goto Label_497; // 0x1e8 Jump
	
Label_497:
	CameraWaitForPlayFinish(); // 0x1f1 Func
	ResumeWorld(); // 0x1f3 Func
	var_18_bool = 1; // 0x1f5 MovB
	return 18; // 0x1f6 Return
	
Label_489:
	var_62_string = "head"; // 0x1e9 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x1ea Func
	var_63_bool = var_38_bool; // 0x1ec Push
	if(var_63_bool == 0) goto Label_497; // 0x1ed JumpB
	var_64_string = "head"; // 0x1ee PushS
	LookAsyncCamera(var_64_string); // 0x1ef Func
}


func_690(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x2b2 PushV
	var_117_bool = 0; // 0x2b3 PushV
	func_785(var_117_bool); // 0x2b4 NEW_2
	if(var_117_bool == 0) goto Label_703; // 0x2b6 JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x2b7 Func
	var_118_bool = var_116_bool; // 0x2b9 Push
	if(var_118_bool == 0) goto Label_703; // 0x2ba JumpB
	lshPlaySpeech(var_114_string); // 0x2bb Func
	var_113_bool = 1; // 0x2bd MovB
	return 2; // 0x2be Return
	
Label_703:
	var_113_bool = 0; // 0x2bf MovB
	return 2; // 0x2c0 Return
}


func_503()
{
	var_233_bool = 0; var_234_bool = 0; // 0x1f7 PushV
	var_235_bool = 1; // 0x1f8 PushB
	CameraSwitchToNormal(var_235_bool); // 0x1f9 Func
	var_236_bool = 0; // 0x1fb PushV
	func_785(var_236_bool); // 0x1fc NEW_2
	if(var_236_bool == 0) goto Label_512; // 0x1fe JumpB
	goto Label_520; // 0x1ff Jump
	
Label_520:
	return 2; // 0x208 Return
	
Label_512:
	var_237_string = "head"; // 0x200 PushS
	HasAnimationTrack(var_234_bool, var_237_string); // 0x201 Func
	var_238_bool = var_234_bool; // 0x203 Push
	if(var_238_bool == 0) goto Label_520; // 0x204 JumpB
	var_239_string = "head"; // 0x205 PushS
	UnlookAsync(var_239_string); // 0x206 Func
}


func_760(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x2f8 PushV
	var_73_string = "branch"; // 0x2f9 PushS
	GetVariable(var_73_string, var_72_int); // 0x2fa Func
	var_74_int = 0; // 0x2fc PushI
	var_75_bool = var_72_int == var_74_int; // 0x2fd Eq
	if(var_75_bool == 0) goto Label_770; // 0x2fe JumpB
	var_70_int = 1; // 0x2ff MovI
	return 2; // 0x300 Return
	
Label_770:
	var_76_int = 1; // 0x302 PushI
	var_77_bool = var_72_int == var_76_int; // 0x303 Eq
	if(var_77_bool == 0) goto Label_775; // 0x304 JumpB
	var_70_int = 2; // 0x305 MovI
	return 2; // 0x306 Return
	
Label_775:
	var_70_int = 3; // 0x307 MovI
	return 2; // 0x308 Return
}


