task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xa7 PushI
	if(var_8_int == 0) goto Label_371; // 0xa8 JumpB
	func_703(); // 0xaa NEW_2
	var_10_int = 37326; // 0xac PushI
	var_11_bool = var_7_bool == var_10_int; // 0xad Eq
	if(var_11_bool == 0) goto Label_180; // 0xae JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xaf PushV
	var_12_object = var_1_object; // 0xb0 MovT
	var_13_object = var_0_object; // 0xb1 MovT
	func_740(); // 0xb2 NEW_2
	
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
	func_746(var_37_object); // 0xc2 NEW_2
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
	func_783(var_114_bool); // 0x169 NEW_2
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
	func_710(var_14_object); // 0x196 NEW_2
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
	func_710(var_9_object); // 0x1ab NEW_2
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
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_777(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_775(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_779(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_781(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_758(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_bool = 0; var_79_object = Obj(); // 0x2f PushV
	var_80_object = Obj(); // 0x30 PushV
	func_710(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_519(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_230_bool = var_17_bool == 0; // 0x3f Not
	if(var_230_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_231_object = Obj(); // 0x46 PushV
	var_231_object = var_8_object; // 0x47 Mov
	func_502(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_577(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x241 PushV
	var_96_string = "c"; // 0x242 MovS
	var_97_int = 0; // 0x243 MovI
	
Label_580:
	var_101_int = 1; // 0x244 PushI
	if(var_101_int == 0) goto Label_593; // 0x245 JumpB
	var_102_int = 1; // 0x246 PushI
	var_103_int = var_97_int + var_102_int; // 0x247 Add
	var_104_int = var_96_string + var_103_int; // 0x248 Add
	HasProperty(var_104_int, var_98_bool); // 0x249 ObjFunc
	var_105_bool = var_98_bool == 0; // 0x24b Not
	if(var_105_bool == 0) goto Label_590; // 0x24c JumpB
	goto Label_593; // 0x24d Jump
	
Label_593:
	var_106_bool = var_97_int == 0; // 0x251 Not
	if(var_106_bool == 0) goto Label_597; // 0x252 JumpB
	var_89_bool = 0; // 0x253 MovB
	return 10; // 0x254 Return
	
Label_597:
	var_99_int = 0; // 0x255 MovI
	var_107_int = 1; // 0x256 PushI
	var_108_bool = var_97_int > var_107_int; // 0x257 GT
	if(var_108_bool == 0) goto Label_603; // 0x258 JumpB
	irand(var_99_int, var_97_int); // 0x259 Func
	
Label_603:
	var_109_int = 1; // 0x25b PushI
	var_110_int = var_99_int + var_109_int; // 0x25c Add
	var_111_int = var_96_string + var_110_int; // 0x25d Add
	GetProperty(var_111_int, var_100_string); // 0x25e ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x260 PushV
	var_113_string = var_100_string; // 0x261 Mov
	func_688(var_112_bool, var_113_string); // 0x262 NEW_2
	var_89_bool = var_112_bool; // 0x263 Mov
	return 10; // 0x265 Return
	
Label_590:
	var_118_int = 1; // 0x24e PushI
	var_97_int = var_97_int + var_118_int; // 0x24f Add2
	goto Label_580; // 0x250 Jump
}


func_710(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2c6 PushV
	self(var_11_object); // 0x2c7 Func
	var_9_object = var_11_object; // 0x2c9 Mov
	return 2; // 0x2ca Return
}


func_519(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x207 PushV
	var_87_string = "voice_common"; // 0x208 PushS
	GetVariable(var_87_string, var_85_int); // 0x209 Func
	var_88_int = var_85_int; // 0x20b Push
	if(var_88_int == 0) goto Label_557; // 0x20c JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x20d PushV
	var_90_object = var_79_object; // 0x20e Mov
	func_577(var_90_object); // 0x20f NEW_2
	var_119_bool = var_89_bool == 0; // 0x211 Not
	if(var_119_bool == 0) goto Label_539; // 0x212 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x213 PushV
	var_121_object = var_79_object; // 0x214 Mov
	func_614(var_121_object); // 0x215 NEW_2
	var_155_bool = var_120_bool == 0; // 0x217 Not
	if(var_155_bool == 0) goto Label_539; // 0x218 JumpB
	var_78_bool = 0; // 0x219 MovB
	return 4; // 0x21a Return
	
Label_539:
	var_156_int = 2; // 0x21b PushI
	irand(var_86_int, var_156_int); // 0x21c Func
	var_157_int = var_86_int; // 0x21e Push
	if(var_157_int == 0) goto Label_552; // 0x21f JumpB
	var_158_string = "voice_common"; // 0x220 PushS
	var_159_int = 1; // 0x221 PushI
	var_160_int = var_85_int + var_159_int; // 0x222 Add
	var_161_int = 3; // 0x223 PushI
	var_162_int = var_160_int / var_161_int; // 0x224 Mod
	SetVariable(var_158_string, var_162_int); // 0x225 Func
	goto Label_556; // 0x227 Jump
	
Label_556:
	goto Label_575; // 0x22c Jump
	
Label_575:
	var_78_bool = 1; // 0x23f MovB
	return 4; // 0x240 Return
	
Label_552:
	var_163_string = "voice_common"; // 0x228 PushS
	var_164_int = 0; // 0x229 PushI
	SetVariable(var_163_string, var_164_int); // 0x22a Func
	
Label_557:
	var_165_bool = 0; var_166_object = Obj(); // 0x22d PushV
	var_166_object = var_79_object; // 0x22e Mov
	func_614(var_166_object); // 0x22f NEW_2
	var_167_bool = var_165_bool == 0; // 0x231 Not
	if(var_167_bool == 0) goto Label_571; // 0x232 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x233 PushV
	var_169_object = var_79_object; // 0x234 Mov
	func_577(var_169_object); // 0x235 NEW_2
	var_170_bool = var_168_bool == 0; // 0x237 Not
	if(var_170_bool == 0) goto Label_571; // 0x238 JumpB
	var_78_bool = 0; // 0x239 MovB
	return 4; // 0x23a Return
	
Label_571:
	var_171_string = "voice_common"; // 0x23b PushS
	var_172_int = 1; // 0x23c PushI
	SetVariable(var_171_string, var_172_int); // 0x23d Func
}


func_775(var_66_int)
{
	var_66_int = 515543; // 0x307 MovI
	return 0; // 0x308 Return
}


func_777(var_65_int)
{
	var_65_int = 502868; // 0x309 MovI
	return 0; // 0x30a Return
}


func_779(var_67_string)
{
	var_67_string = "ui/NPC_Maria.png"; // 0x30b MovS
	return 0; // 0x30c Return
}


func_716(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x2cc PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x2cd Or
	var_49_float = sqrt(var_50_int); // 0x2ce Sqrt2
	var_51_float = 0.0; // 0x2cf PushF
	var_52_bool = var_49_float < var_51_float; // 0x2d0 LT
	if(var_52_bool == 0) goto Label_724; // 0x2d1 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2d2 MovV
	return 2; // 0x2d3 Return
	
Label_724:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2d4 Div2
	return 2; // 0x2d5 Return
}


func_781(var_68_string)
{
	var_68_string = "ui/NPC_Maria_b.png"; // 0x30d MovS
	return 0; // 0x30e Return
}


func_783(var_60_bool)
{
	var_60_bool = 1; // 0x30f MovB
	return 0; // 0x310 Return
}


func_144(var_2_object, var_180_string)
{
	var_181_bool = 0; // 0x91 PushV
	func_783(var_181_bool); // 0x92 NEW_2
	var_182_bool = var_181_bool == 0; // 0x94 Not
	if(var_182_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_183_bool = var_180_string == var_2_object; // 0x97 Eq
	if(var_183_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_184_string = ""; var_185_bool = 0; // 0x9a PushV
	var_184_string = var_180_string; // 0x9b Mov
	var_186_string = ""; // 0x9c PushS
	var_187_bool = var_180_string == var_186_string; // 0x9d Eq
	if(var_187_bool == 0) goto Label_161; // 0x9e JumpB
	var_185_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_673(var_184_string, var_185_bool); // 0xa2 NEW_2
	var_2_object = var_180_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_185_bool = 1; // 0xa1 MovB
}


func_657(var_214_string)
{
	var_215_bool = 0; var_216_float = 0; var_217_float = 0; var_218_bool = 0; var_219_float = 0; var_220_float = 0; // 0x291 PushV
	lshHasAnimation(var_218_bool, var_214_string); // 0x292 Func
	var_221_bool = var_218_bool; // 0x294 Push
	if(var_221_bool == 0) goto Label_668; // 0x295 JumpB
	lshGetAnimTimes(var_214_string, var_219_float, var_220_float); // 0x296 Func
	var_222_bool = 0; // 0x298 PushB
	lshPlayAnimation(var_219_float, var_220_float, var_222_bool); // 0x299 Func
	goto Label_672; // 0x29b Jump
	
Label_672:
	return 6; // 0x2a0 Return
	
Label_668:
	var_223_string = "Can't find lsh animation : "; // 0x29c PushS
	var_224_int = var_223_string + var_214_string; // 0x29d Add
	Trace(var_224_int); // 0x29e Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_114; // 0x56 JumpB
	var_180_string = ""; // 0x57 PushV
	var_180_string = "Neutral"; // 0x58 MovS
	func_144(var_174_object, var_180_string); // 0x59 NEW_2
	var_197_int = 535639; // 0x5b PushI
	SetMessage(var_197_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_198_bool = 0; var_199_object = Obj(); // 0x60 PushV
	var_199_object = var_1_object; // 0x61 MovT
	func_746(var_199_object); // 0x62 NEW_2
	if(var_198_bool == 0) goto Label_106; // 0x64 JumpB
	var_206_int = 535640; // 0x65 PushI
	var_207_int = 42495; // 0x66 PushI
	var_208_int = 37326; // 0x67 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x68 TObjFunc
	
Label_106:
	var_209_int = 540495; // 0x6a PushI
	var_210_int = -1; // 0x6b PushI
	var_211_int = 42494; // 0x6c PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_212_bool = 0; // 0x72 PushV
	func_783(var_212_bool); // 0x73 NEW_2
	if(var_212_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_213_string = var_3_string; // 0x78 PushT
	if(var_213_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_214_string = ""; // 0x7b PushV
	var_214_string = var_2_object; // 0x7c MovT
	func_657(var_214_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_225_string = "all"; // 0x81 PushS
	var_226_string = "idle"; // 0x82 PushS
	PlayAnimation(var_225_string, var_226_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_227_string = var_3_string; // 0x87 PushT
	if(var_227_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_228_string = "all"; // 0x8a PushS
	var_229_string = "idle"; // 0x8b PushS
	PlayAnimation(var_228_string, var_229_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_726(var_200_int, var_201_string)
{
	var_202_int = 0; var_203_int = 0; // 0x2d6 PushV
	GetVariable(var_201_string, var_203_int); // 0x2d7 Func
	var_200_int = var_203_int; // 0x2d9 Mov
	return 2; // 0x2da Return
}


func_731(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x2db PushV
	GetGameTime(var_135_float); // 0x2dc Func
	var_136_int = 1; // 0x2de PushI
	var_137_int = 0; // 0x2df PushV
	var_138_int = 24; // 0x2e0 PushI
	var_137_int = var_135_float / var_135_float; // 0x2e1 Div2
	var_133_int = var_136_int + var_137_int; // 0x2e2 Add2
	return 2; // 0x2e3 Return
}


func_673(var_184_string, var_185_bool)
{
	var_188_bool = 0; var_189_float = 0; var_190_float = 0; var_191_bool = 0; var_192_float = 0; var_193_float = 0; // 0x2a1 PushV
	lshHasAnimation(var_191_bool, var_184_string); // 0x2a2 Func
	var_194_bool = var_191_bool; // 0x2a4 Push
	if(var_194_bool == 0) goto Label_683; // 0x2a5 JumpB
	lshGetAnimTimes(var_184_string, var_192_float, var_193_float); // 0x2a6 Func
	lshPlayAnimation(var_192_float, var_193_float, var_185_bool); // 0x2a8 Func
	goto Label_687; // 0x2aa Jump
	
Label_687:
	return 6; // 0x2af Return
	
Label_683:
	var_195_string = "Can't find lsh animation : "; // 0x2ab PushS
	var_196_int = var_195_string + var_184_string; // 0x2ac Add
	Trace(var_196_int); // 0x2ad Func
}


func_740()
{
	var_14_string = "ood12MariaSobor1"; // 0x2e5 PushS
	var_15_int = 1; // 0x2e6 PushI
	SetVariable(var_14_string, var_15_int); // 0x2e7 Func
	return 0; // 0x2e9 Return
}


func_614(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x266 PushV
	var_132_string = "d"; // 0x267 PushS
	var_133_int = 0; // 0x268 PushV
	func_731(var_133_int); // 0x269 NEW_2
	var_139_int = var_132_string + var_133_int; // 0x26b Add
	var_140_string = "m"; // 0x26c PushS
	var_127_string = var_139_int + var_140_string; // 0x26d Add2
	var_128_int = 0; // 0x26e MovI
	
Label_623:
	var_141_int = 1; // 0x26f PushI
	if(var_141_int == 0) goto Label_636; // 0x270 JumpB
	var_142_int = 1; // 0x271 PushI
	var_143_int = var_128_int + var_142_int; // 0x272 Add
	var_144_int = var_127_string + var_143_int; // 0x273 Add
	HasProperty(var_144_int, var_129_bool); // 0x274 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x276 Not
	if(var_145_bool == 0) goto Label_633; // 0x277 JumpB
	goto Label_636; // 0x278 Jump
	
Label_636:
	var_146_bool = var_128_int == 0; // 0x27c Not
	if(var_146_bool == 0) goto Label_640; // 0x27d JumpB
	var_120_bool = 0; // 0x27e MovB
	return 10; // 0x27f Return
	
Label_640:
	var_130_int = 0; // 0x280 MovI
	var_147_int = 1; // 0x281 PushI
	var_148_bool = var_128_int > var_147_int; // 0x282 GT
	if(var_148_bool == 0) goto Label_646; // 0x283 JumpB
	irand(var_130_int, var_128_int); // 0x284 Func
	
Label_646:
	var_149_int = 1; // 0x286 PushI
	var_150_int = var_130_int + var_149_int; // 0x287 Add
	var_151_int = var_127_string + var_150_int; // 0x288 Add
	GetProperty(var_151_int, var_131_string); // 0x289 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x28b PushV
	var_153_string = var_131_string; // 0x28c Mov
	func_688(var_152_bool, var_153_string); // 0x28d NEW_2
	var_120_bool = var_152_bool; // 0x28e Mov
	return 10; // 0x290 Return
	
Label_633:
	var_154_int = 1; // 0x279 PushI
	var_128_int = var_128_int + var_154_int; // 0x27a Add2
	goto Label_623; // 0x27b Jump
}


func_746(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x2eb PushV
	var_201_string = "ood12MariaSobor1"; // 0x2ec MovS
	func_726(var_200_int, var_201_string); // 0x2ed NEW_2
	var_204_int = 0; // 0x2ef PushI
	var_205_bool = var_200_int == var_204_int; // 0x2f0 Eq
	if(var_205_bool == 0) goto Label_756; // 0x2f1 JumpB
	var_198_bool = 1; // 0x2f2 MovB
	return 0; // 0x2f3 Return
	
Label_756:
	var_198_bool = 0; // 0x2f4 MovB
	return 0; // 0x2f5 Return
}


func_432(var_8_bool)
{
	var_8_bool = 1; // 0x1b0 MovB
	return 0; // 0x1b1 Return
}


func_688(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x2b0 PushV
	var_116_bool = 0; // 0x2b1 PushV
	func_783(var_116_bool); // 0x2b2 NEW_2
	if(var_116_bool == 0) goto Label_701; // 0x2b4 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x2b5 Func
	var_117_bool = var_115_bool; // 0x2b7 Push
	if(var_117_bool == 0) goto Label_701; // 0x2b8 JumpB
	lshPlaySpeech(var_113_string); // 0x2b9 Func
	var_112_bool = 1; // 0x2bb MovB
	return 2; // 0x2bc Return
	
Label_701:
	var_112_bool = 0; // 0x2bd MovB
	return 2; // 0x2be Return
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
	func_716(var_45_cvector, var_46_cvector); // 0x1cd NEW_2
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
	CameraTransit(var_36_cvector, var_34_cvector); // 0x1dd Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x1df PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x1e0 PushE
	Rotate(var_58_float, var_59_float); // 0x1e1 Func
	var_60_bool = 0; // 0x1e3 PushV
	func_783(var_60_bool); // 0x1e4 NEW_2
	if(var_60_bool == 0) goto Label_488; // 0x1e6 JumpB
	goto Label_496; // 0x1e7 Jump
	
Label_496:
	CameraWaitForPlayFinish(); // 0x1f0 Func
	ResumeWorld(); // 0x1f2 Func
	var_18_bool = 1; // 0x1f4 MovB
	return 18; // 0x1f5 Return
	
Label_488:
	var_61_string = "head"; // 0x1e8 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x1e9 Func
	var_62_bool = var_38_bool; // 0x1eb Push
	if(var_62_bool == 0) goto Label_496; // 0x1ec JumpB
	var_63_string = "head"; // 0x1ed PushS
	LookAsyncCamera(var_63_string); // 0x1ee Func
}


func_758(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x2f6 PushV
	var_72_string = "branch"; // 0x2f7 PushS
	GetVariable(var_72_string, var_71_int); // 0x2f8 Func
	var_73_int = 0; // 0x2fa PushI
	var_74_bool = var_71_int == var_73_int; // 0x2fb Eq
	if(var_74_bool == 0) goto Label_768; // 0x2fc JumpB
	var_69_int = 1; // 0x2fd MovI
	return 2; // 0x2fe Return
	
Label_768:
	var_75_int = 1; // 0x300 PushI
	var_76_bool = var_71_int == var_75_int; // 0x301 Eq
	if(var_76_bool == 0) goto Label_773; // 0x302 JumpB
	var_69_int = 2; // 0x303 MovI
	return 2; // 0x304 Return
	
Label_773:
	var_69_int = 3; // 0x305 MovI
	return 2; // 0x306 Return
}


func_502()
{
	var_232_bool = 0; var_233_bool = 0; // 0x1f6 PushV
	CameraSwitchToNormal(); // 0x1f7 Func
	var_234_bool = 0; // 0x1f9 PushV
	func_783(var_234_bool); // 0x1fa NEW_2
	if(var_234_bool == 0) goto Label_510; // 0x1fc JumpB
	goto Label_518; // 0x1fd Jump
	
Label_518:
	return 2; // 0x206 Return
	
Label_510:
	var_235_string = "head"; // 0x1fe PushS
	HasAnimationTrack(var_233_bool, var_235_string); // 0x1ff Func
	var_236_bool = var_233_bool; // 0x201 Push
	if(var_236_bool == 0) goto Label_518; // 0x202 JumpB
	var_237_string = "head"; // 0x203 PushS
	UnlookAsync(var_237_string); // 0x204 Func
}


func_703()
{
	var_9_bool = 0; // 0x2bf PushV
	func_783(var_9_bool); // 0x2c0 NEW_2
	if(var_9_bool == 0) goto Label_709; // 0x2c2 JumpB
	lshStopSpeech(); // 0x2c3 Func
	
Label_709:
	return 0; // 0x2c5 Return
}


