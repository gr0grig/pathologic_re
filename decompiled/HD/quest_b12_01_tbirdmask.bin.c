task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xbe PushI
	if(var_14_int == 0) goto Label_475; // 0xbf JumpB
	func_869(); // 0xc1 NEW_2
	var_16_int = 24122; // 0xc3 PushI
	var_17_bool = var_12_bool == var_16_int; // 0xc4 Eq
	if(var_17_bool == 0) goto Label_253; // 0xc5 JumpB
	var_18_bool = 0; var_19_object = Obj(); // 0xc6 PushV
	var_19_object = var_1_object; // 0xc7 MovT
	func_957(var_19_object); // 0xc8 NEW_2
	if(var_18_bool == 0) goto Label_233; // 0xca JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0xcb PushV
	var_26_object = var_1_object; // 0xcc MovT
	var_27_object = var_0_object; // 0xcd MovT
	func_938(); // 0xce NEW_2
	var_30_object = Obj(); var_31_object = Obj(); // 0xd0 PushV
	var_30_object = var_1_object; // 0xd1 MovT
	var_31_object = var_0_object; // 0xd2 MovT
	func_944(); // 0xd3 NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0xd5 PushV
	var_42_object = var_1_object; // 0xd6 MovT
	var_43_object = var_0_object; // 0xd7 MovT
	func_951(); // 0xd8 NEW_2
	var_46_string = ""; // 0xda PushV
	var_46_string = "Neutral"; // 0xdb MovS
	func_167(var_13_bool, var_46_string); // 0xdc NEW_2
	var_63_int = 522931; // 0xde PushI
	SetMessage(var_63_int); // 0xdf TObjFunc
	ClearReplies(); // 0xe1 TObjFunc
	var_64_int = 522932; // 0xe3 PushI
	var_65_int = 24124; // 0xe4 PushI
	var_66_int = 24123; // 0xe5 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xe6 TObjFunc
	return 0; // 0xe8 Return
	
Label_233:
	var_67_string = ""; // 0xe9 PushV
	var_67_string = "Neutral"; // 0xea MovS
	func_167(var_13_bool, var_67_string); // 0xeb NEW_2
	var_68_int = 523192; // 0xed PushI
	SetMessage(var_68_int); // 0xee TObjFunc
	ClearReplies(); // 0xf0 TObjFunc
	var_69_int = 523193; // 0xf2 PushI
	var_70_int = -1; // 0xf3 PushI
	var_71_int = 24396; // 0xf4 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xf5 TObjFunc
	var_72_int = 523194; // 0xf7 PushI
	var_73_int = -1; // 0xf8 PushI
	var_74_int = 24397; // 0xf9 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xfa TObjFunc
	return 0; // 0xfc Return
	
Label_253:
	var_75_int = 24124; // 0xfd PushI
	var_76_bool = var_12_bool == var_75_int; // 0xfe Eq
	if(var_76_bool == 0) goto Label_276; // 0xff JumpB
	var_77_string = ""; // 0x100 PushV
	var_77_string = "Neutral"; // 0x101 MovS
	func_167(var_13_bool, var_77_string); // 0x102 NEW_2
	var_78_int = 522933; // 0x104 PushI
	SetMessage(var_78_int); // 0x105 TObjFunc
	ClearReplies(); // 0x107 TObjFunc
	var_79_int = 522934; // 0x109 PushI
	var_80_int = 24126; // 0x10a PushI
	var_81_int = 24125; // 0x10b PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x10c TObjFunc
	var_82_int = 522956; // 0x10e PushI
	var_83_int = 24148; // 0x10f PushI
	var_84_int = 24147; // 0x110 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x111 TObjFunc
	return 0; // 0x113 Return
	
Label_276:
	var_85_int = 24148; // 0x114 PushI
	var_86_bool = var_12_bool == var_85_int; // 0x115 Eq
	if(var_86_bool == 0) goto Label_294; // 0x116 JumpB
	var_87_string = ""; // 0x117 PushV
	var_87_string = "Neutral"; // 0x118 MovS
	func_167(var_13_bool, var_87_string); // 0x119 NEW_2
	var_88_int = 522957; // 0x11b PushI
	SetMessage(var_88_int); // 0x11c TObjFunc
	ClearReplies(); // 0x11e TObjFunc
	var_89_int = 522958; // 0x120 PushI
	var_90_int = 24128; // 0x121 PushI
	var_91_int = 24149; // 0x122 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x123 TObjFunc
	return 0; // 0x125 Return
	
Label_294:
	var_92_int = 24126; // 0x126 PushI
	var_93_bool = var_12_bool == var_92_int; // 0x127 Eq
	if(var_93_bool == 0) goto Label_317; // 0x128 JumpB
	var_94_string = ""; // 0x129 PushV
	var_94_string = "Neutral"; // 0x12a MovS
	func_167(var_13_bool, var_94_string); // 0x12b NEW_2
	var_95_int = 522935; // 0x12d PushI
	SetMessage(var_95_int); // 0x12e TObjFunc
	ClearReplies(); // 0x130 TObjFunc
	var_96_int = 522936; // 0x132 PushI
	var_97_int = 24128; // 0x133 PushI
	var_98_int = 24127; // 0x134 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x135 TObjFunc
	var_99_int = 522955; // 0x137 PushI
	var_100_int = 24128; // 0x138 PushI
	var_101_int = 24146; // 0x139 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x13a TObjFunc
	return 0; // 0x13c Return
	
Label_317:
	var_102_int = 24128; // 0x13d PushI
	var_103_bool = var_12_bool == var_102_int; // 0x13e Eq
	if(var_103_bool == 0) goto Label_335; // 0x13f JumpB
	var_104_string = ""; // 0x140 PushV
	var_104_string = "Neutral"; // 0x141 MovS
	func_167(var_13_bool, var_104_string); // 0x142 NEW_2
	var_105_int = 522937; // 0x144 PushI
	SetMessage(var_105_int); // 0x145 TObjFunc
	ClearReplies(); // 0x147 TObjFunc
	var_106_int = 522938; // 0x149 PushI
	var_107_int = 24130; // 0x14a PushI
	var_108_int = 24129; // 0x14b PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x14c TObjFunc
	return 0; // 0x14e Return
	
Label_335:
	var_109_int = 24130; // 0x14f PushI
	var_110_bool = var_12_bool == var_109_int; // 0x150 Eq
	if(var_110_bool == 0) goto Label_358; // 0x151 JumpB
	var_111_string = ""; // 0x152 PushV
	var_111_string = "Neutral"; // 0x153 MovS
	func_167(var_13_bool, var_111_string); // 0x154 NEW_2
	var_112_int = 522939; // 0x156 PushI
	SetMessage(var_112_int); // 0x157 TObjFunc
	ClearReplies(); // 0x159 TObjFunc
	var_113_int = 522940; // 0x15b PushI
	var_114_int = 24132; // 0x15c PushI
	var_115_int = 24131; // 0x15d PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x15e TObjFunc
	var_116_int = 522946; // 0x160 PushI
	var_117_int = 24138; // 0x161 PushI
	var_118_int = 24137; // 0x162 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x163 TObjFunc
	return 0; // 0x165 Return
	
Label_358:
	var_119_int = 24138; // 0x166 PushI
	var_120_bool = var_12_bool == var_119_int; // 0x167 Eq
	if(var_120_bool == 0) goto Label_381; // 0x168 JumpB
	var_121_string = ""; // 0x169 PushV
	var_121_string = "Neutral"; // 0x16a MovS
	func_167(var_13_bool, var_121_string); // 0x16b NEW_2
	var_122_int = 522947; // 0x16d PushI
	SetMessage(var_122_int); // 0x16e TObjFunc
	ClearReplies(); // 0x170 TObjFunc
	var_123_int = 522948; // 0x172 PushI
	var_124_int = 24134; // 0x173 PushI
	var_125_int = 24139; // 0x174 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x175 TObjFunc
	var_126_int = 522949; // 0x177 PushI
	var_127_int = 24141; // 0x178 PushI
	var_128_int = 24140; // 0x179 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x17a TObjFunc
	return 0; // 0x17c Return
	
Label_381:
	var_129_int = 24141; // 0x17d PushI
	var_130_bool = var_12_bool == var_129_int; // 0x17e Eq
	if(var_130_bool == 0) goto Label_404; // 0x17f JumpB
	var_131_string = ""; // 0x180 PushV
	var_131_string = "Neutral"; // 0x181 MovS
	func_167(var_13_bool, var_131_string); // 0x182 NEW_2
	var_132_int = 522950; // 0x184 PushI
	SetMessage(var_132_int); // 0x185 TObjFunc
	ClearReplies(); // 0x187 TObjFunc
	var_133_int = 522951; // 0x189 PushI
	var_134_int = 24134; // 0x18a PushI
	var_135_int = 24142; // 0x18b PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x18c TObjFunc
	var_136_int = 522952; // 0x18e PushI
	var_137_int = 24144; // 0x18f PushI
	var_138_int = 24143; // 0x190 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x191 TObjFunc
	return 0; // 0x193 Return
	
Label_404:
	var_139_int = 24144; // 0x194 PushI
	var_140_bool = var_12_bool == var_139_int; // 0x195 Eq
	if(var_140_bool == 0) goto Label_422; // 0x196 JumpB
	var_141_string = ""; // 0x197 PushV
	var_141_string = "Neutral"; // 0x198 MovS
	func_167(var_13_bool, var_141_string); // 0x199 NEW_2
	var_142_int = 522953; // 0x19b PushI
	SetMessage(var_142_int); // 0x19c TObjFunc
	ClearReplies(); // 0x19e TObjFunc
	var_143_int = 522954; // 0x1a0 PushI
	var_144_int = 24134; // 0x1a1 PushI
	var_145_int = 24145; // 0x1a2 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x1a3 TObjFunc
	return 0; // 0x1a5 Return
	
Label_422:
	var_146_int = 24132; // 0x1a6 PushI
	var_147_bool = var_12_bool == var_146_int; // 0x1a7 Eq
	if(var_147_bool == 0) goto Label_445; // 0x1a8 JumpB
	var_148_string = ""; // 0x1a9 PushV
	var_148_string = "Neutral"; // 0x1aa MovS
	func_167(var_13_bool, var_148_string); // 0x1ab NEW_2
	var_149_int = 522941; // 0x1ad PushI
	SetMessage(var_149_int); // 0x1ae TObjFunc
	ClearReplies(); // 0x1b0 TObjFunc
	var_150_int = 522942; // 0x1b2 PushI
	var_151_int = 24134; // 0x1b3 PushI
	var_152_int = 24133; // 0x1b4 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x1b5 TObjFunc
	var_153_int = 522945; // 0x1b7 PushI
	var_154_int = -1; // 0x1b8 PushI
	var_155_int = 24136; // 0x1b9 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x1ba TObjFunc
	return 0; // 0x1bc Return
	
Label_445:
	var_156_int = 24134; // 0x1bd PushI
	var_157_bool = var_12_bool == var_156_int; // 0x1be Eq
	if(var_157_bool == 0) goto Label_463; // 0x1bf JumpB
	var_158_string = ""; // 0x1c0 PushV
	var_158_string = "Neutral"; // 0x1c1 MovS
	func_167(var_13_bool, var_158_string); // 0x1c2 NEW_2
	var_159_int = 522943; // 0x1c4 PushI
	SetMessage(var_159_int); // 0x1c5 TObjFunc
	ClearReplies(); // 0x1c7 TObjFunc
	var_160_int = 522944; // 0x1c9 PushI
	var_161_int = -1; // 0x1ca PushI
	var_162_int = 24135; // 0x1cb PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x1cc TObjFunc
	return 0; // 0x1ce Return
	
Label_463:
	var_3_string = 1; // 0x1cf TMovB
	var_163_bool = 0; // 0x1d0 PushV
	func_994(var_163_bool); // 0x1d1 NEW_2
	if(var_163_bool == 0) goto Label_471; // 0x1d3 JumpB
	lshStopAnimation(); // 0x1d4 Func
	goto Label_473; // 0x1d6 Jump
	
Label_473:
	return 0; // 0x1d9 Return
	
Label_471:
	StopAnimation(); // 0x1d7 Func
	
Label_475:
	return 0; // 0x1db Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_627(var_11_bool, var_12_object); // 0x1e4 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x1e6 PushV
	var_17_object = var_12_object; // 0x1e7 Mov
	TaskCall(0); // 0x1e8 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x1e9 NEW_2
	TaskReturn(); // 0x1ea TaskReturn
	return 0; // 0x1ec Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x214 PushS
	var_14_bool = var_12_string == var_13_string; // 0x215 Eq
	if(var_14_bool == 0) goto Label_538; // 0x216 JumpB
	func_511(var_12_string); // 0x218 NEW_2
	
Label_538:
	return 0; // 0x21a Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x21b PushT
	if(var_12_int == 0) goto Label_544; // 0x21c JumpB
	func_627(var_10_bool, var_11_bool); // 0x21e NEW_2
	
Label_544:
	var_16_bool = 0; // 0x220 PushV
	var_16_bool = 0; // 0x221 MovB
	var_17_int = var_5_int; // 0x222 PushT
	if(var_17_int == 0) goto Label_553; // 0x223 JumpB
	var_18_bool = 0; // 0x224 PushV
	func_560(var_18_bool); // 0x225 NEW_2
	if(var_18_bool == 0) goto Label_553; // 0x227 JumpB
	var_16_bool = 1; // 0x228 MovB
	
Label_553:
	if(var_16_bool == 0) goto Label_559; // 0x229 JumpB
	var_19_object = Obj(); // 0x22a PushV
	func_876(var_19_object); // 0x22b NEW_2
	RemoveActor(var_19_object); // 0x22d Func
	
Label_559:
	return 0; // 0x22f Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x25d PushI
	var_14_bool = var_12_int == var_13_int; // 0x25e Eq
	if(var_14_bool == 0) goto Label_626; // 0x25f JumpB
	var_15_bool = 0; // 0x260 PushV
	func_589(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x261 NEW_2
	if(var_15_bool == 0) goto Label_620; // 0x263 JumpB
	var_28_bool = var_2_object == 0; // 0x264 Not
	if(var_28_bool == 0) goto Label_619; // 0x265 JumpB
	var_29_object = Obj(); // 0x266 PushV
	var_29_object = var_4_bool; // 0x267 MovT
	func_858(var_29_object); // 0x268 NEW_2
	var_2_object = 1; // 0x26a TMovB
	
Label_619:
	goto Label_626; // 0x26b Jump
	
Label_626:
	return 0; // 0x272 Return
	
Label_620:
	var_36_object = var_2_object; // 0x26c PushT
	if(var_36_object == 0) goto Label_626; // 0x26d JumpB
	var_37_string = "head"; // 0x26e PushS
	UnlookAsync(var_37_string); // 0x26f Func
	var_2_object = 0; // 0x271 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x1dc PushV
	var_12_float = 300; // 0x1dd MovI
	var_13_float = 100; // 0x1de MovI
	func_493(var_11_bool, var_12_float, var_13_float); // 0x1df NEW_2
	return 0; // 0x1e1 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 130.0; // 0x4 MovF
	func_740(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_988(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_986(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_990(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_992(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_969(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_87_bool = var_24_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_17_object; // 0x30 Mov
	var_89_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_170_bool = var_26_bool == 0; // 0x38 Not
	if(var_170_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_171_object = Obj(); // 0x3f PushV
	var_171_object = var_17_object; // 0x40 Mov
	func_809(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_641()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x281 PushV
	WaitForAnimEnd(); // 0x282 Func
	var_44_bool = 0; // 0x284 PushV
	func_735(var_44_bool); // 0x285 NEW_2
	var_45_bool = var_44_bool == 0; // 0x287 Not
	if(var_45_bool == 0) goto Label_650; // 0x288 JumpB
	return 14; // 0x289 Return
	
Label_650:
	var_46_int = 0; // 0x28a PushV
	func_921(var_46_int); // 0x28b NEW_2
	var_37_int = var_46_int; // 0x28c Mov
	var_38_int = 0; // 0x28e MovI
	
Label_655:
	var_59_bool = 0; // 0x28f PushV
	var_59_bool = 0; // 0x290 MovB
	var_60_int = 5; // 0x291 PushI
	var_61_bool = var_38_int < var_60_int; // 0x292 LT
	if(var_61_bool == 0) goto Label_665; // 0x293 JumpB
	var_62_bool = 0; // 0x294 PushV
	func_735(var_62_bool); // 0x295 NEW_2
	if(var_62_bool == 0) goto Label_665; // 0x297 JumpB
	var_59_bool = 1; // 0x298 MovB
	
Label_665:
	if(var_59_bool == 0) goto Label_717; // 0x299 JumpB
	var_63_int = 3; // 0x29a PushI
	irand(var_39_int, var_63_int); // 0x29b Func
	var_64_int = 0; // 0x29d PushI
	var_65_bool = var_39_int == var_64_int; // 0x29e Eq
	if(var_65_bool == 0) goto Label_689; // 0x29f JumpB
	var_66_int = var_37_int; // 0x2a0 Push
	if(var_66_int == 0) goto Label_688; // 0x2a1 JumpB
	irand(var_40_int, var_37_int); // 0x2a2 Func
	var_67_string = "all"; // 0x2a4 PushS
	var_68_string = ""; var_69_int = 0; // 0x2a5 PushV
	var_69_int = var_40_int; // 0x2a6 Mov
	func_914(var_68_string, var_69_int); // 0x2a7 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x2a9 Func
	WaitForAnimEnd(var_41_bool); // 0x2ab Func
	var_70_bool = var_41_bool == 0; // 0x2ad Not
	if(var_70_bool == 0) goto Label_688; // 0x2ae JumpB
	goto Label_717; // 0x2af Jump
	
Label_717:
	ResetAAS(); // 0x2cd Func
	return 14; // 0x2cf Return
	
Label_688:
	goto Label_706; // 0x2b0 Jump
	
Label_706:
	var_71_bool = 0; // 0x2c2 PushV
	func_720(var_71_bool); // 0x2c3 NEW_2
	var_72_bool = var_71_bool == 0; // 0x2c5 Not
	if(var_72_bool == 0) goto Label_712; // 0x2c6 JumpB
	goto Label_717; // 0x2c7 Jump
	
Label_712:
	ResetAAS(); // 0x2c8 Func
	var_73_int = 1; // 0x2ca PushI
	var_38_int = var_38_int + var_73_int; // 0x2cb Add2
	goto Label_655; // 0x2cc Jump
	
Label_689:
	var_74_int = 1; // 0x2b1 PushI
	var_75_bool = var_39_int == var_74_int; // 0x2b2 Eq
	if(var_75_bool == 0) goto Label_703; // 0x2b3 JumpB
	var_76_int = 4; // 0x2b4 PushI
	rand(var_42_float, var_76_int); // 0x2b5 Func
	var_77_int = 1; // 0x2b7 PushI
	var_78_int = var_42_float + var_77_int; // 0x2b8 Add
	Sleep(var_78_int, var_43_bool); // 0x2b9 Func
	var_79_bool = var_43_bool == 0; // 0x2bb Not
	if(var_79_bool == 0) goto Label_702; // 0x2bc JumpB
	goto Label_717; // 0x2bd Jump
	
Label_702:
	goto Label_706; // 0x2be Jump
	
Label_703:
	var_80_int = var_38_int; // 0x2bf Push
	if(var_80_int == 0) goto Label_706; // 0x2c0 JumpB
	goto Label_717; // 0x2c1 Jump
}


func_897(var_109_string, var_110_bool)
{
	var_111_object = Obj(); var_112_object = Obj(); // 0x381 PushV
	FindActor(var_112_object, var_109_string); // 0x382 Func
	var_113_bool = var_112_object == 0; // 0x384 Not
	if(var_113_bool == 0) goto Label_909; // 0x385 JumpB
	var_114_string = "Door "; // 0x386 PushS
	var_115_int = var_114_string + var_109_string; // 0x387 Add
	var_116_string = " not found"; // 0x388 PushS
	var_117_int = var_115_int + var_116_string; // 0x389 Add
	Trace(var_117_int); // 0x38a Func
	goto Label_912; // 0x38c Jump
	
Label_912:
	return 2; // 0x390 Return
	
Label_909:
	var_118_string = "locked"; // 0x38d PushS
	SetProperty(var_118_string, var_110_bool); // 0x38e ObjFunc
}


func_914(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x392 PushV
	var_55_string = "idle"; // 0x393 MovS
	var_56_int = var_53_int; // 0x394 Push
	if(var_56_int == 0) goto Label_919; // 0x395 JumpB
	var_55_string = var_55_string + var_53_int; // 0x396 Add2
	
Label_919:
	var_52_string = var_55_string; // 0x397 Mov
	return 2; // 0x398 Return
}


func_921(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x399 PushV
	var_49_int = 0; // 0x39a MovI
	
Label_923:
	var_51_string = "all"; // 0x39b PushS
	var_52_string = ""; var_53_int = 0; // 0x39c PushV
	var_53_int = var_49_int; // 0x39d Mov
	func_914(var_52_string, var_53_int); // 0x39e NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x3a0 Func
	var_57_bool = var_50_bool == 0; // 0x3a2 Not
	if(var_57_bool == 0) goto Label_933; // 0x3a3 JumpB
	goto Label_936; // 0x3a4 Jump
	
Label_936:
	var_46_int = var_49_int; // 0x3a8 Mov
	return 4; // 0x3a9 Return
	
Label_933:
	var_58_int = 1; // 0x3a5 PushI
	var_49_int = var_49_int + var_58_int; // 0x3a6 Add2
	goto Label_923; // 0x3a7 Jump
}


func_167(var_2_object, var_123_string)
{
	var_124_bool = 0; // 0xa8 PushV
	func_994(var_124_bool); // 0xa9 NEW_2
	var_125_bool = var_124_bool == 0; // 0xab Not
	if(var_125_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_126_bool = var_123_string == var_2_object; // 0xae Eq
	if(var_126_bool == 0) goto Label_177; // 0xaf JumpB
	return 0; // 0xb0 Return
	
Label_177:
	var_127_string = ""; var_128_bool = 0; // 0xb1 PushV
	var_127_string = var_123_string; // 0xb2 Mov
	var_129_string = ""; // 0xb3 PushS
	var_130_bool = var_123_string == var_129_string; // 0xb4 Eq
	if(var_130_bool == 0) goto Label_184; // 0xb5 JumpB
	var_128_bool = 0; // 0xb6 MovB
	goto Label_185; // 0xb7 Jump
	
Label_185:
	func_843(var_127_string, var_128_bool); // 0xb9 NEW_2
	var_2_object = var_123_string; // 0xbb TMov
	return 0; // 0xbc Return
	
Label_184:
	var_128_bool = 1; // 0xb8 MovB
}


func_809()
{
	var_172_bool = 0; var_173_bool = 0; // 0x329 PushV
	var_174_bool = 1; // 0x32a PushB
	CameraSwitchToNormal(var_174_bool); // 0x32b Func
	var_175_bool = 0; // 0x32d PushV
	func_994(var_175_bool); // 0x32e NEW_2
	if(var_175_bool == 0) goto Label_818; // 0x330 JumpB
	goto Label_826; // 0x331 Jump
	
Label_826:
	return 2; // 0x33a Return
	
Label_818:
	var_176_string = "head"; // 0x332 PushS
	HasAnimationTrack(var_173_bool, var_176_string); // 0x333 Func
	var_177_bool = var_173_bool; // 0x335 Push
	if(var_177_bool == 0) goto Label_826; // 0x336 JumpB
	var_178_string = "head"; // 0x337 PushS
	UnlookAsync(var_178_string); // 0x338 Func
}


func_938()
{
	var_105_string = "oob12TBirdmask1"; // 0x3ab PushS
	var_106_int = 1; // 0x3ac PushI
	SetVariable(var_105_string, var_106_int); // 0x3ad Func
	return 0; // 0x3af Return
}


func_944()
{
	var_109_string = ""; var_110_bool = 0; // 0x3b1 PushV
	var_109_string = "itheater@door1"; // 0x3b2 MovS
	var_110_bool = 0; // 0x3b3 MovB
	func_897(var_109_string, var_110_bool); // 0x3b4 NEW_2
	return 0; // 0x3b6 Return
}


func_560(var_18_bool)
{
	var_18_bool = 1; // 0x230 MovB
	return 0; // 0x231 Return
}


func_562(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x233 PushV
	func_735(var_23_bool); // 0x234 NEW_2
	var_26_bool = var_23_bool == 0; // 0x236 Not
	if(var_26_bool == 0) goto Label_569; // 0x237 JumpB
	return 0; // 0x238 Return
	
Label_569:
	var_27_string = "player"; // 0x239 PushS
	FindActor(var_17_bool, var_27_string); // 0x23a Func
	var_2_object = 0; // 0x23c TMovB
	var_3_string = 0; // 0x23d TMovB
	var_0_object = var_21_float; // 0x23e TMov
	var_1_object = var_22_float; // 0x23f TMov
	var_28_int = 10; // 0x240 PushI
	var_29_float = 1.0; // 0x241 PushF
	SetTimer(var_28_int, var_29_float); // 0x242 Func
	func_641(); // 0x245 NEW_2
	var_81_bool = var_3_string == 0; // 0x247 Not
	if(var_81_bool == 0) goto Label_588; // 0x248 JumpB
	var_82_int = 10; // 0x249 PushI
	KillTimer(var_82_int); // 0x24a Func
	
Label_588:
	return 0; // 0x24c Return
}


func_951()
{
	var_121_string = "b12q01TheaterIsVisited"; // 0x3b8 PushS
	var_122_int = 1; // 0x3b9 PushI
	SetVariable(var_121_string, var_122_int); // 0x3ba Func
	return 0; // 0x3bc Return
}


func_827(var_146_string)
{
	var_147_bool = 0; var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_float = 0; var_152_float = 0; // 0x33b PushV
	lshHasAnimation(var_150_bool, var_146_string); // 0x33c Func
	var_153_bool = var_150_bool; // 0x33e Push
	if(var_153_bool == 0) goto Label_838; // 0x33f JumpB
	lshGetAnimTimes(var_146_string, var_151_float, var_152_float); // 0x340 Func
	var_154_bool = 0; // 0x342 PushB
	lshPlayAnimation(var_151_float, var_152_float, var_154_bool); // 0x343 Func
	goto Label_842; // 0x345 Jump
	
Label_842:
	return 6; // 0x34a Return
	
Label_838:
	var_155_string = "Can't find lsh animation : "; // 0x346 PushS
	var_156_int = var_155_string + var_146_string; // 0x347 Add
	Trace(var_156_int); // 0x348 Func
}


func_957(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x3be PushV
	var_98_string = "oob12TBirdmask1"; // 0x3bf MovS
	func_892(var_97_int, var_98_string); // 0x3c0 NEW_2
	var_101_int = 0; // 0x3c2 PushI
	var_102_bool = var_97_int == var_101_int; // 0x3c3 Eq
	if(var_102_bool == 0) goto Label_967; // 0x3c4 JumpB
	var_95_bool = 1; // 0x3c5 MovB
	return 0; // 0x3c6 Return
	
Label_967:
	var_95_bool = 0; // 0x3c7 MovB
	return 0; // 0x3c8 Return
}


func_969(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x3c9 PushV
	var_82_string = "branch"; // 0x3ca PushS
	GetVariable(var_82_string, var_81_int); // 0x3cb Func
	var_83_int = 0; // 0x3cd PushI
	var_84_bool = var_81_int == var_83_int; // 0x3ce Eq
	if(var_84_bool == 0) goto Label_979; // 0x3cf JumpB
	var_79_int = 1; // 0x3d0 MovI
	return 2; // 0x3d1 Return
	
Label_979:
	var_85_int = 1; // 0x3d3 PushI
	var_86_bool = var_81_int == var_85_int; // 0x3d4 Eq
	if(var_86_bool == 0) goto Label_984; // 0x3d5 JumpB
	var_79_int = 2; // 0x3d6 MovI
	return 2; // 0x3d7 Return
	
Label_984:
	var_79_int = 3; // 0x3d8 MovI
	return 2; // 0x3d9 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_137; // 0x4f JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x50 PushV
	var_96_object = var_1_object; // 0x51 MovT
	func_957(var_96_object); // 0x52 NEW_2
	if(var_95_bool == 0) goto Label_115; // 0x54 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x55 PushV
	var_103_object = var_1_object; // 0x56 MovT
	var_104_object = var_0_object; // 0x57 MovT
	func_938(); // 0x58 NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0x5a PushV
	var_107_object = var_1_object; // 0x5b MovT
	var_108_object = var_0_object; // 0x5c MovT
	func_944(); // 0x5d NEW_2
	var_119_object = Obj(); var_120_object = Obj(); // 0x5f PushV
	var_119_object = var_1_object; // 0x60 MovT
	var_120_object = var_0_object; // 0x61 MovT
	func_951(); // 0x62 NEW_2
	var_123_string = ""; // 0x64 PushV
	var_123_string = "Neutral"; // 0x65 MovS
	func_167(var_89_object, var_123_string); // 0x66 NEW_2
	var_140_int = 522931; // 0x68 PushI
	SetMessage(var_140_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_141_int = 522932; // 0x6d PushI
	var_142_int = 24124; // 0x6e PushI
	var_143_int = 24123; // 0x6f PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x70 TObjFunc
	goto Label_137; // 0x72 Jump
	
Label_137:
	var_144_bool = 0; // 0x89 PushV
	func_994(var_144_bool); // 0x8a NEW_2
	if(var_144_bool == 0) goto Label_152; // 0x8c JumpB
	
Label_141:
	lshWaitForAnimEnd(); // 0x8d Func
	var_145_string = var_3_string; // 0x8f PushT
	if(var_145_string == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_151:
	goto Label_166; // 0x97 Jump
	
Label_166:
	return 0; // 0xa6 Return
	
Label_146:
	var_146_string = ""; // 0x92 PushV
	var_146_string = var_2_object; // 0x93 MovT
	func_827(var_146_string); // 0x94 NEW_2
	goto Label_141; // 0x96 Jump
	
Label_152:
	var_157_string = "all"; // 0x98 PushS
	var_158_string = "idle"; // 0x99 PushS
	PlayAnimation(var_157_string, var_158_string); // 0x9a Func
	
Label_156:
	WaitForAnimEnd(); // 0x9c Func
	var_159_string = var_3_string; // 0x9e PushT
	if(var_159_string == 0) goto Label_161; // 0x9f JumpB
	goto Label_166; // 0xa0 Jump
	
Label_161:
	var_160_string = "all"; // 0xa1 PushS
	var_161_string = "idle"; // 0xa2 PushS
	PlayAnimation(var_160_string, var_161_string); // 0xa3 Func
	goto Label_156; // 0xa5 Jump
	
Label_115:
	var_162_string = ""; // 0x73 PushV
	var_162_string = "Neutral"; // 0x74 MovS
	func_167(var_89_object, var_162_string); // 0x75 NEW_2
	var_163_int = 523192; // 0x77 PushI
	SetMessage(var_163_int); // 0x78 TObjFunc
	ClearReplies(); // 0x7a TObjFunc
	var_164_int = 523193; // 0x7c PushI
	var_165_int = -1; // 0x7d PushI
	var_166_int = 24396; // 0x7e PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x7f TObjFunc
	var_167_int = 523194; // 0x81 PushI
	var_168_int = -1; // 0x82 PushI
	var_169_int = 24397; // 0x83 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x84 TObjFunc
	goto Label_137; // 0x86 Jump
}


func_843(var_127_string, var_128_bool)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0; // 0x34b PushV
	lshHasAnimation(var_134_bool, var_127_string); // 0x34c Func
	var_137_bool = var_134_bool; // 0x34e Push
	if(var_137_bool == 0) goto Label_853; // 0x34f JumpB
	lshGetAnimTimes(var_127_string, var_135_float, var_136_float); // 0x350 Func
	lshPlayAnimation(var_135_float, var_136_float, var_128_bool); // 0x352 Func
	goto Label_857; // 0x354 Jump
	
Label_857:
	return 6; // 0x359 Return
	
Label_853:
	var_138_string = "Can't find lsh animation : "; // 0x355 PushS
	var_139_int = var_138_string + var_127_string; // 0x356 Add
	Trace(var_139_int); // 0x357 Func
}


func_589(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x24d PushV
	var_18_bool = var_4_bool == 0; // 0x24e NullEq
	if(var_18_bool == 0) goto Label_594; // 0x24f JumpB
	var_15_bool = 0; // 0x250 MovB
	return 2; // 0x251 Return
	
Label_594:
	var_19_float = 0; var_20_object = Obj(); // 0x252 PushV
	var_20_object = var_4_bool; // 0x253 MovT
	func_727(var_20_object); // 0x254 NEW_2
	var_17_float = sqrt(var_19_float); // 0x256 Sqrt2
	var_27_object = var_2_object; // 0x257 PushT
	if(var_27_object == 0) goto Label_602; // 0x258 JumpB
	var_17_float = var_17_float - var_1_object; // 0x259 Sub2
	
Label_602:
	var_15_bool = var_17_float < var_0_object; // 0x25a LT2
	return 2; // 0x25b Return
}


func_720(var_71_bool)
{
	var_71_bool = 1; // 0x2d0 MovB
	return 0; // 0x2d1 Return
}


func_722()
{
	StopAnimation(); // 0x2d2 Func
	StopGroup0(); // 0x2d4 Func
	return 0; // 0x2d6 Return
}


func_727(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x2d7 PushV
	GetPosition(var_24_cvector); // 0x2d8 Func
	GetPosition(var_25_cvector); // 0x2da ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x2dc Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x2dd Or2
	return 6; // 0x2de Return
}


func_986(var_76_int)
{
	var_76_int = 515571; // 0x3da MovI
	return 0; // 0x3db Return
}


func_858(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x35a PushV
	GetEyesHeight(var_32_float); // 0x35b ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x35d MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x35e PushE
	var_34_float = var_32_float; // 0x35f Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x360 PopE
	var_35_string = "head"; // 0x361 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x362 Func
	return 4; // 0x364 Return
}


func_988(var_75_int)
{
	var_75_int = 504029; // 0x3dc MovI
	return 0; // 0x3dd Return
}


func_990(var_77_string)
{
	var_77_string = "ui/NPC_bmask.png"; // 0x3de MovS
	return 0; // 0x3df Return
}


func_735(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x2df PushV
	IsLoaded(var_25_bool); // 0x2e0 Func
	var_23_bool = var_25_bool; // 0x2e2 Mov
	return 2; // 0x2e3 Return
}


func_992(var_78_string)
{
	var_78_string = "ui/NPC_bmask_b.png"; // 0x3e0 MovS
	return 0; // 0x3e1 Return
}


func_994(var_70_bool)
{
	var_70_bool = 0; // 0x3e2 MovB
	return 0; // 0x3e3 Return
}


func_740(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x2e4 PushV
	GetPosition(var_40_cvector); // 0x2e5 ObjFunc
	GetEyesHeight(var_39_float); // 0x2e7 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x2e9 PushE
	var_48_float = var_48_float + var_39_float; // 0x2ea Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x2eb PopE
	GetPosition(var_41_cvector); // 0x2ec Func
	GetEyesHeight(var_39_float); // 0x2ee Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x2f0 PushE
	var_49_float = var_49_float + var_39_float; // 0x2f1 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x2f2 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x2f3 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x2f4 PushE
	var_50_float = 0; // 0x2f5 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x2f6 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x2f7 Or
	var_52_float = sqrt(var_51_int); // 0x2f8 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x2f9 Div2
	var_43_cvector = -var_42_cvector; // 0x2fa Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x2fb Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x2fc PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x2fd PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x2fe Xor2
	func_882(var_54_cvector, var_55_cvector); // 0x2ff NEW_2
	var_62_int = 25; // 0x301 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x302 Mult
	var_64_int = var_53_float + var_63_float; // 0x303 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x304 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x305 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x306 Add2
	IsOverrideActive(var_46_bool); // 0x307 Func
	var_66_bool = var_46_bool; // 0x309 Push
	if(var_66_bool == 0) goto Label_781; // 0x30a JumpB
	var_27_bool = 0; // 0x30b MovB
	return 18; // 0x30c Return
	
Label_781:
	StopWorld(); // 0x30d Func
	var_67_bool = 1; // 0x30f PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x310 Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x312 PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x313 PushE
	Rotate(var_68_float, var_69_float); // 0x314 Func
	var_70_bool = 0; // 0x316 PushV
	func_994(var_70_bool); // 0x317 NEW_2
	if(var_70_bool == 0) goto Label_795; // 0x319 JumpB
	goto Label_803; // 0x31a Jump
	
Label_803:
	CameraWaitForPlayFinish(); // 0x323 Func
	ResumeWorld(); // 0x325 Func
	var_27_bool = 1; // 0x327 MovB
	return 18; // 0x328 Return
	
Label_795:
	var_71_string = "head"; // 0x31b PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x31c Func
	var_72_bool = var_47_bool; // 0x31e Push
	if(var_72_bool == 0) goto Label_803; // 0x31f JumpB
	var_73_string = "head"; // 0x320 PushS
	LookAsyncCamera(var_73_string); // 0x321 Func
}


func_869()
{
	var_15_bool = 0; // 0x365 PushV
	func_994(var_15_bool); // 0x366 NEW_2
	if(var_15_bool == 0) goto Label_875; // 0x368 JumpB
	lshStopSpeech(); // 0x369 Func
	
Label_875:
	return 0; // 0x36b Return
}


func_876(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x36c PushV
	self(var_21_object); // 0x36d Func
	var_19_object = var_21_object; // 0x36f Mov
	return 2; // 0x370 Return
}


func_493(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x1ed PushV
	var_6_int = 0; // 0x1ee TMovB
	
Label_495:
	var_18_int = 3; // 0x1ef PushI
	rand(var_16_float, var_18_int); // 0x1f0 Func
	var_19_int = 3; // 0x1f2 PushI
	var_20_int = var_16_float + var_19_int; // 0x1f3 Add
	Sleep(var_20_int, var_17_bool); // 0x1f4 Func
	var_6_int = 1; // 0x1f6 TMovB
	var_21_float = 0; var_22_float = 0; // 0x1f7 PushV
	var_21_float = var_12_float; // 0x1f8 Mov
	var_22_float = var_13_float; // 0x1f9 Mov
	func_562(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x1fa NEW_2
	var_6_int = 0; // 0x1fc TMovB
	goto Label_495; // 0x1fd Jump
}


func_882(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x372 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x373 Or
	var_58_float = sqrt(var_59_int); // 0x374 Sqrt2
	var_60_float = 0.0; // 0x375 PushF
	var_61_bool = var_58_float < var_60_float; // 0x376 LT
	if(var_61_bool == 0) goto Label_890; // 0x377 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x378 MovV
	return 2; // 0x379 Return
	
Label_890:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x37a Div2
	return 2; // 0x37b Return
}


func_627(var_2_object, var_3_string)
{
	func_722(); // 0x274 NEW_2
	var_13_int = 10; // 0x276 PushI
	KillTimer(var_13_int); // 0x277 Func
	var_14_object = var_2_object; // 0x279 PushT
	if(var_14_object == 0) goto Label_639; // 0x27a JumpB
	var_15_string = "head"; // 0x27b PushS
	UnlookAsync(var_15_string); // 0x27c Func
	var_2_object = 0; // 0x27e TMovB
	
Label_639:
	var_3_string = 1; // 0x27f TMovB
	return 0; // 0x280 Return
}


func_892(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x37c PushV
	GetVariable(var_98_string, var_100_int); // 0x37d Func
	var_97_int = var_100_int; // 0x37f Mov
	return 2; // 0x380 Return
}


func_511(var_5_int)
{
	var_5_int = 1; // 0x1ff TMovB
	var_15_bool = 0; // 0x200 PushV
	var_15_bool = 0; // 0x201 MovB
	var_16_bool = 0; // 0x202 PushV
	func_735(var_16_bool); // 0x203 NEW_2
	var_19_bool = var_16_bool == 0; // 0x205 Not
	if(var_19_bool == 0) goto Label_524; // 0x206 JumpB
	var_20_bool = 0; // 0x207 PushV
	func_560(var_20_bool); // 0x208 NEW_2
	if(var_20_bool == 0) goto Label_524; // 0x20a JumpB
	var_15_bool = 1; // 0x20b MovB
	
Label_524:
	if(var_15_bool == 0) goto Label_530; // 0x20c JumpB
	var_21_object = Obj(); // 0x20d PushV
	func_876(var_21_object); // 0x20e NEW_2
	RemoveActor(var_21_object); // 0x210 Func
	
Label_530:
	return 0; // 0x212 Return
}


