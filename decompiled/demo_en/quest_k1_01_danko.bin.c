task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xfa PushI
	if(var_8_int == 0) goto Label_542; // 0xfb JumpB
	func_870(); // 0xfd NEW_2
	var_10_int = 26038; // 0xff PushI
	var_11_bool = var_6_int == var_10_int; // 0x100 Eq
	if(var_11_bool == 0) goto Label_366; // 0x101 JumpB
	var_12_bool = 0; // 0x102 PushV
	var_12_bool = 0; // 0x103 MovB
	var_13_bool = 0; // 0x104 PushV
	var_13_bool = 0; // 0x105 MovB
	var_14_bool = 0; var_15_object = Obj(); // 0x106 PushV
	var_15_object = var_1_object; // 0x107 MovT
	func_919(var_15_object); // 0x108 NEW_2
	if(var_14_bool == 0) goto Label_274; // 0x10a JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0x10b PushV
	var_23_object = var_1_object; // 0x10c MovT
	func_931(var_23_object); // 0x10d NEW_2
	var_28_bool = var_22_bool == 0; // 0x10f Not
	if(var_28_bool == 0) goto Label_274; // 0x110 JumpB
	var_13_bool = 1; // 0x111 MovB
	
Label_274:
	if(var_13_bool == 0) goto Label_281; // 0x112 JumpB
	var_29_bool = 0; var_30_object = Obj(); // 0x113 PushV
	var_30_object = var_1_object; // 0x114 MovT
	func_943(var_30_object); // 0x115 NEW_2
	if(var_29_bool == 0) goto Label_281; // 0x117 JumpB
	var_12_bool = 1; // 0x118 MovB
	
Label_281:
	if(var_12_bool == 0) goto Label_312; // 0x119 JumpB
	var_35_object = Obj(); var_36_object = Obj(); // 0x11a PushV
	var_35_object = var_1_object; // 0x11b MovT
	var_36_object = var_0_object; // 0x11c MovT
	func_907(); // 0x11d NEW_2
	var_39_string = ""; // 0x11f PushV
	var_39_string = "Neutral"; // 0x120 MovS
	func_227(var_7_bool, var_39_string); // 0x121 NEW_2
	var_56_int = 524699; // 0x123 PushI
	SetMessage(var_56_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_57_int = 524700; // 0x128 PushI
	var_58_int = 28105; // 0x129 PushI
	var_59_int = 26039; // 0x12a PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x12b TObjFunc
	var_60_int = 526838; // 0x12d PushI
	var_61_int = 28123; // 0x12e PushI
	var_62_int = 28122; // 0x12f PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x130 TObjFunc
	var_63_int = 542096; // 0x132 PushI
	var_64_int = 28125; // 0x133 PushI
	var_65_int = 44396; // 0x134 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x135 TObjFunc
	return 0; // 0x137 Return
	
Label_312:
	var_66_bool = 0; // 0x138 PushV
	var_66_bool = 0; // 0x139 MovB
	var_67_bool = 0; var_68_object = Obj(); // 0x13a PushV
	var_68_object = var_1_object; // 0x13b MovT
	func_931(var_68_object); // 0x13c NEW_2
	if(var_67_bool == 0) goto Label_325; // 0x13e JumpB
	var_69_bool = 0; var_70_object = Obj(); // 0x13f PushV
	var_70_object = var_1_object; // 0x140 MovT
	func_955(var_70_object); // 0x141 NEW_2
	if(var_69_bool == 0) goto Label_325; // 0x143 JumpB
	var_66_bool = 1; // 0x144 MovB
	
Label_325:
	if(var_66_bool == 0) goto Label_346; // 0x145 JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0x146 PushV
	var_75_object = var_1_object; // 0x147 MovT
	var_76_object = var_0_object; // 0x148 MovT
	func_913(); // 0x149 NEW_2
	var_79_string = ""; // 0x14b PushV
	var_79_string = "Neutral"; // 0x14c MovS
	func_227(var_7_bool, var_79_string); // 0x14d NEW_2
	var_80_int = 524714; // 0x14f PushI
	SetMessage(var_80_int); // 0x150 TObjFunc
	ClearReplies(); // 0x152 TObjFunc
	var_81_int = 524715; // 0x154 PushI
	var_82_int = 28112; // 0x155 PushI
	var_83_int = 26054; // 0x156 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x157 TObjFunc
	return 0; // 0x159 Return
	
Label_346:
	var_84_string = ""; // 0x15a PushV
	var_84_string = "Neutral"; // 0x15b MovS
	func_227(var_7_bool, var_84_string); // 0x15c NEW_2
	var_85_int = 526834; // 0x15e PushI
	SetMessage(var_85_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_86_int = 526835; // 0x163 PushI
	var_87_int = -1; // 0x164 PushI
	var_88_int = 28118; // 0x165 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x166 TObjFunc
	var_89_int = 526836; // 0x168 PushI
	var_90_int = -1; // 0x169 PushI
	var_91_int = 28119; // 0x16a PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x16b TObjFunc
	return 0; // 0x16d Return
	
Label_366:
	var_92_int = 28112; // 0x16e PushI
	var_93_bool = var_6_int == var_92_int; // 0x16f Eq
	if(var_93_bool == 0) goto Label_389; // 0x170 JumpB
	var_94_string = ""; // 0x171 PushV
	var_94_string = "Smile"; // 0x172 MovS
	func_227(var_7_bool, var_94_string); // 0x173 NEW_2
	var_95_int = 526830; // 0x175 PushI
	SetMessage(var_95_int); // 0x176 TObjFunc
	ClearReplies(); // 0x178 TObjFunc
	var_96_int = 526831; // 0x17a PushI
	var_97_int = 26055; // 0x17b PushI
	var_98_int = 28113; // 0x17c PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x17d TObjFunc
	var_99_int = 526832; // 0x17f PushI
	var_100_int = 26055; // 0x180 PushI
	var_101_int = 28114; // 0x181 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x182 TObjFunc
	return 0; // 0x184 Return
	
Label_389:
	var_102_int = 26055; // 0x185 PushI
	var_103_bool = var_6_int == var_102_int; // 0x186 Eq
	if(var_103_bool == 0) goto Label_412; // 0x187 JumpB
	var_104_string = ""; // 0x188 PushV
	var_104_string = "Smile"; // 0x189 MovS
	func_227(var_7_bool, var_104_string); // 0x18a NEW_2
	var_105_int = 524716; // 0x18c PushI
	SetMessage(var_105_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_106_int = 524717; // 0x191 PushI
	var_107_int = -1; // 0x192 PushI
	var_108_int = 26056; // 0x193 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x194 TObjFunc
	var_109_int = 526829; // 0x196 PushI
	var_110_int = -1; // 0x197 PushI
	var_111_int = 28111; // 0x198 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_112_int = 28123; // 0x19c PushI
	var_113_bool = var_6_int == var_112_int; // 0x19d Eq
	if(var_113_bool == 0) goto Label_430; // 0x19e JumpB
	var_114_string = ""; // 0x19f PushV
	var_114_string = "Menace"; // 0x1a0 MovS
	func_227(var_7_bool, var_114_string); // 0x1a1 NEW_2
	var_115_int = 526839; // 0x1a3 PushI
	SetMessage(var_115_int); // 0x1a4 TObjFunc
	ClearReplies(); // 0x1a6 TObjFunc
	var_116_int = 526840; // 0x1a8 PushI
	var_117_int = 28125; // 0x1a9 PushI
	var_118_int = 28124; // 0x1aa PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x1ab TObjFunc
	return 0; // 0x1ad Return
	
Label_430:
	var_119_int = 28125; // 0x1ae PushI
	var_120_bool = var_6_int == var_119_int; // 0x1af Eq
	if(var_120_bool == 0) goto Label_448; // 0x1b0 JumpB
	var_121_string = ""; // 0x1b1 PushV
	var_121_string = "Menace"; // 0x1b2 MovS
	func_227(var_7_bool, var_121_string); // 0x1b3 NEW_2
	var_122_int = 526841; // 0x1b5 PushI
	SetMessage(var_122_int); // 0x1b6 TObjFunc
	ClearReplies(); // 0x1b8 TObjFunc
	var_123_int = 526842; // 0x1ba PushI
	var_124_int = 28127; // 0x1bb PushI
	var_125_int = 28126; // 0x1bc PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x1bd TObjFunc
	return 0; // 0x1bf Return
	
Label_448:
	var_126_int = 28127; // 0x1c0 PushI
	var_127_bool = var_6_int == var_126_int; // 0x1c1 Eq
	if(var_127_bool == 0) goto Label_471; // 0x1c2 JumpB
	var_128_string = ""; // 0x1c3 PushV
	var_128_string = "Smile"; // 0x1c4 MovS
	func_227(var_7_bool, var_128_string); // 0x1c5 NEW_2
	var_129_int = 526843; // 0x1c7 PushI
	SetMessage(var_129_int); // 0x1c8 TObjFunc
	ClearReplies(); // 0x1ca TObjFunc
	var_130_int = 526844; // 0x1cc PushI
	var_131_int = 28105; // 0x1cd PushI
	var_132_int = 28128; // 0x1ce PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x1cf TObjFunc
	var_133_int = 542097; // 0x1d1 PushI
	var_134_int = 28107; // 0x1d2 PushI
	var_135_int = 44398; // 0x1d3 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x1d4 TObjFunc
	return 0; // 0x1d6 Return
	
Label_471:
	var_136_int = 28105; // 0x1d7 PushI
	var_137_bool = var_6_int == var_136_int; // 0x1d8 Eq
	if(var_137_bool == 0) goto Label_489; // 0x1d9 JumpB
	var_138_string = ""; // 0x1da PushV
	var_138_string = "Menace"; // 0x1db MovS
	func_227(var_7_bool, var_138_string); // 0x1dc NEW_2
	var_139_int = 526823; // 0x1de PushI
	SetMessage(var_139_int); // 0x1df TObjFunc
	ClearReplies(); // 0x1e1 TObjFunc
	var_140_int = 526824; // 0x1e3 PushI
	var_141_int = 28107; // 0x1e4 PushI
	var_142_int = 28106; // 0x1e5 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x1e6 TObjFunc
	return 0; // 0x1e8 Return
	
Label_489:
	var_143_int = 28107; // 0x1e9 PushI
	var_144_bool = var_6_int == var_143_int; // 0x1ea Eq
	if(var_144_bool == 0) goto Label_507; // 0x1eb JumpB
	var_145_string = ""; // 0x1ec PushV
	var_145_string = "Menace"; // 0x1ed MovS
	func_227(var_7_bool, var_145_string); // 0x1ee NEW_2
	var_146_int = 526825; // 0x1f0 PushI
	SetMessage(var_146_int); // 0x1f1 TObjFunc
	ClearReplies(); // 0x1f3 TObjFunc
	var_147_int = 526826; // 0x1f5 PushI
	var_148_int = 28109; // 0x1f6 PushI
	var_149_int = 28108; // 0x1f7 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x1f8 TObjFunc
	return 0; // 0x1fa Return
	
Label_507:
	var_150_int = 28109; // 0x1fb PushI
	var_151_bool = var_6_int == var_150_int; // 0x1fc Eq
	if(var_151_bool == 0) goto Label_530; // 0x1fd JumpB
	var_152_string = ""; // 0x1fe PushV
	var_152_string = "Untrust"; // 0x1ff MovS
	func_227(var_7_bool, var_152_string); // 0x200 NEW_2
	var_153_int = 526827; // 0x202 PushI
	SetMessage(var_153_int); // 0x203 TObjFunc
	ClearReplies(); // 0x205 TObjFunc
	var_154_int = 526828; // 0x207 PushI
	var_155_int = -1; // 0x208 PushI
	var_156_int = 28110; // 0x209 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x20a TObjFunc
	var_157_int = 526833; // 0x20c PushI
	var_158_int = -1; // 0x20d PushI
	var_159_int = 28115; // 0x20e PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x20f TObjFunc
	return 0; // 0x211 Return
	
Label_530:
	var_3_string = 1; // 0x212 TMovB
	var_160_bool = 0; // 0x213 PushV
	func_992(var_160_bool); // 0x214 NEW_2
	if(var_160_bool == 0) goto Label_538; // 0x216 JumpB
	lshStopAnimation(); // 0x217 Func
	goto Label_540; // 0x219 Jump
	
Label_540:
	return 0; // 0x21c Return
	
Label_538:
	StopAnimation(); // 0x21a Func
	
Label_542:
	return 0; // 0x21e Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x220 PushV
	var_8_object = var_6_object; // 0x221 Mov
	TaskCall(0); // 0x222 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x223 NEW_2
	TaskReturn(); // 0x224 TaskReturn
	return 0; // 0x226 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x22b PushV
	var_9_string = "cleanup"; // 0x22c PushS
	var_10_bool = var_6_string == var_9_string; // 0x22d Eq
	if(var_10_bool == 0) goto Label_578; // 0x22e JumpB
	var_0_object = 1; // 0x22f TMovB
	IsLoaded(var_8_bool); // 0x230 Func
	var_11_bool = 0; // 0x232 PushV
	var_11_bool = 0; // 0x233 MovB
	var_12_bool = var_8_bool == 0; // 0x234 Not
	if(var_12_bool == 0) goto Label_571; // 0x235 JumpB
	var_13_bool = 0; // 0x236 PushV
	func_599(var_13_bool); // 0x237 NEW_2
	if(var_13_bool == 0) goto Label_571; // 0x239 JumpB
	var_11_bool = 1; // 0x23a MovB
	
Label_571:
	if(var_11_bool == 0) goto Label_577; // 0x23b JumpB
	var_14_object = Obj(); // 0x23c PushV
	func_877(var_14_object); // 0x23d NEW_2
	RemoveActor(var_14_object); // 0x23f Func
	
Label_577:
	goto Label_582; // 0x241 Jump
	
Label_582:
	return 2; // 0x246 Return
	
Label_578:
	var_17_string = "restore"; // 0x242 PushS
	var_18_bool = var_6_string == var_17_string; // 0x243 Eq
	if(var_18_bool == 0) goto Label_582; // 0x244 JumpB
	var_0_object = 0; // 0x245 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x247 PushV
	var_6_bool = 0; // 0x248 MovB
	var_7_object = var_0_object; // 0x249 PushT
	if(var_7_object == 0) goto Label_592; // 0x24a JumpB
	var_8_bool = 0; // 0x24b PushV
	func_599(var_8_bool); // 0x24c NEW_2
	if(var_8_bool == 0) goto Label_592; // 0x24e JumpB
	var_6_bool = 1; // 0x24f MovB
	
Label_592:
	if(var_6_bool == 0) goto Label_598; // 0x250 JumpB
	var_9_object = Obj(); // 0x251 PushV
	func_877(var_9_object); // 0x252 NEW_2
	RemoveActor(var_9_object); // 0x254 Func
	
Label_598:
	return 0; // 0x256 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_551:
	Hold(); // 0x227 Func
	goto Label_551; // 0x229 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_601(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_986(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_984(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_988(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_990(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_967(var_69_int); // 0x22 NEW_2
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
	func_877(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_686(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_278_bool = var_17_bool == 0; // 0x3f Not
	if(var_278_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_279_object = Obj(); // 0x46 PushV
	var_279_object = var_8_object; // 0x47 Mov
	func_669(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_898(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x382 PushV
	GetGameTime(var_135_float); // 0x383 Func
	var_136_int = 1; // 0x385 PushI
	var_137_int = 0; // 0x386 PushV
	var_138_int = 24; // 0x387 PushI
	var_137_int = var_135_float / var_135_float; // 0x388 Div2
	var_133_int = var_136_int + var_137_int; // 0x389 Add2
	return 2; // 0x38a Return
}


func_967(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x3c7 PushV
	var_72_string = "branch"; // 0x3c8 PushS
	GetVariable(var_72_string, var_71_int); // 0x3c9 Func
	var_73_int = 0; // 0x3cb PushI
	var_74_bool = var_71_int == var_73_int; // 0x3cc Eq
	if(var_74_bool == 0) goto Label_977; // 0x3cd JumpB
	var_69_int = 1; // 0x3ce MovI
	return 2; // 0x3cf Return
	
Label_977:
	var_75_int = 1; // 0x3d1 PushI
	var_76_bool = var_71_int == var_75_int; // 0x3d2 Eq
	if(var_76_bool == 0) goto Label_982; // 0x3d3 JumpB
	var_69_int = 2; // 0x3d4 MovI
	return 2; // 0x3d5 Return
	
Label_982:
	var_69_int = 3; // 0x3d6 MovI
	return 2; // 0x3d7 Return
}


func_840(var_211_string, var_212_bool)
{
	var_215_bool = 0; var_216_float = 0; var_217_float = 0; var_218_bool = 0; var_219_float = 0; var_220_float = 0; // 0x348 PushV
	lshHasAnimation(var_218_bool, var_211_string); // 0x349 Func
	var_221_bool = var_218_bool; // 0x34b Push
	if(var_221_bool == 0) goto Label_850; // 0x34c JumpB
	lshGetAnimTimes(var_211_string, var_219_float, var_220_float); // 0x34d Func
	lshPlayAnimation(var_219_float, var_220_float, var_212_bool); // 0x34f Func
	goto Label_854; // 0x351 Jump
	
Label_854:
	return 6; // 0x356 Return
	
Label_850:
	var_222_string = "Can't find lsh animation : "; // 0x352 PushS
	var_223_int = var_222_string + var_211_string; // 0x353 Add
	Trace(var_223_int); // 0x354 Func
}


func_907()
{
	var_205_string = "ook1Danko1"; // 0x38c PushS
	var_206_int = 1; // 0x38d PushI
	SetVariable(var_205_string, var_206_int); // 0x38e Func
	return 0; // 0x390 Return
}


func_781(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x30d PushV
	var_132_string = "d"; // 0x30e PushS
	var_133_int = 0; // 0x30f PushV
	func_898(var_133_int); // 0x310 NEW_2
	var_139_int = var_132_string + var_133_int; // 0x312 Add
	var_140_string = "m"; // 0x313 PushS
	var_127_string = var_139_int + var_140_string; // 0x314 Add2
	var_128_int = 0; // 0x315 MovI
	
Label_790:
	var_141_int = 1; // 0x316 PushI
	if(var_141_int == 0) goto Label_803; // 0x317 JumpB
	var_142_int = 1; // 0x318 PushI
	var_143_int = var_128_int + var_142_int; // 0x319 Add
	var_144_int = var_127_string + var_143_int; // 0x31a Add
	HasProperty(var_144_int, var_129_bool); // 0x31b ObjFunc
	var_145_bool = var_129_bool == 0; // 0x31d Not
	if(var_145_bool == 0) goto Label_800; // 0x31e JumpB
	goto Label_803; // 0x31f Jump
	
Label_803:
	var_146_bool = var_128_int == 0; // 0x323 Not
	if(var_146_bool == 0) goto Label_807; // 0x324 JumpB
	var_120_bool = 0; // 0x325 MovB
	return 10; // 0x326 Return
	
Label_807:
	var_130_int = 0; // 0x327 MovI
	var_147_int = 1; // 0x328 PushI
	var_148_bool = var_128_int > var_147_int; // 0x329 GT
	if(var_148_bool == 0) goto Label_813; // 0x32a JumpB
	irand(var_130_int, var_128_int); // 0x32b Func
	
Label_813:
	var_149_int = 1; // 0x32d PushI
	var_150_int = var_130_int + var_149_int; // 0x32e Add
	var_151_int = var_127_string + var_150_int; // 0x32f Add
	GetProperty(var_151_int, var_131_string); // 0x330 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x332 PushV
	var_153_string = var_131_string; // 0x333 Mov
	func_855(var_152_bool, var_153_string); // 0x334 NEW_2
	var_120_bool = var_152_bool; // 0x335 Mov
	return 10; // 0x337 Return
	
Label_800:
	var_154_int = 1; // 0x320 PushI
	var_128_int = var_128_int + var_154_int; // 0x321 Add2
	goto Label_790; // 0x322 Jump
}


func_913()
{
	var_263_string = "ook1Danko2"; // 0x392 PushS
	var_264_int = 1; // 0x393 PushI
	SetVariable(var_263_string, var_264_int); // 0x394 Func
	return 0; // 0x396 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_197; // 0x56 JumpB
	var_180_bool = 0; // 0x57 PushV
	var_180_bool = 0; // 0x58 MovB
	var_181_bool = 0; // 0x59 PushV
	var_181_bool = 0; // 0x5a MovB
	var_182_bool = 0; var_183_object = Obj(); // 0x5b PushV
	var_183_object = var_1_object; // 0x5c MovT
	func_919(var_183_object); // 0x5d NEW_2
	if(var_182_bool == 0) goto Label_103; // 0x5f JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0x60 PushV
	var_191_object = var_1_object; // 0x61 MovT
	func_931(var_191_object); // 0x62 NEW_2
	var_196_bool = var_190_bool == 0; // 0x64 Not
	if(var_196_bool == 0) goto Label_103; // 0x65 JumpB
	var_181_bool = 1; // 0x66 MovB
	
Label_103:
	if(var_181_bool == 0) goto Label_110; // 0x67 JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0x68 PushV
	var_198_object = var_1_object; // 0x69 MovT
	func_943(var_198_object); // 0x6a NEW_2
	if(var_197_bool == 0) goto Label_110; // 0x6c JumpB
	var_180_bool = 1; // 0x6d MovB
	
Label_110:
	if(var_180_bool == 0) goto Label_141; // 0x6e JumpB
	var_203_object = Obj(); var_204_object = Obj(); // 0x6f PushV
	var_203_object = var_1_object; // 0x70 MovT
	var_204_object = var_0_object; // 0x71 MovT
	func_907(); // 0x72 NEW_2
	var_207_string = ""; // 0x74 PushV
	var_207_string = "Neutral"; // 0x75 MovS
	func_227(var_174_object, var_207_string); // 0x76 NEW_2
	var_224_int = 524699; // 0x78 PushI
	SetMessage(var_224_int); // 0x79 TObjFunc
	ClearReplies(); // 0x7b TObjFunc
	var_225_int = 524700; // 0x7d PushI
	var_226_int = 28105; // 0x7e PushI
	var_227_int = 26039; // 0x7f PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x80 TObjFunc
	var_228_int = 526838; // 0x82 PushI
	var_229_int = 28123; // 0x83 PushI
	var_230_int = 28122; // 0x84 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x85 TObjFunc
	var_231_int = 542096; // 0x87 PushI
	var_232_int = 28125; // 0x88 PushI
	var_233_int = 44396; // 0x89 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x8a TObjFunc
	goto Label_197; // 0x8c Jump
	
Label_197:
	var_234_bool = 0; // 0xc5 PushV
	func_992(var_234_bool); // 0xc6 NEW_2
	if(var_234_bool == 0) goto Label_212; // 0xc8 JumpB
	
Label_201:
	lshWaitForAnimEnd(); // 0xc9 Func
	var_235_string = var_3_string; // 0xcb PushT
	if(var_235_string == 0) goto Label_206; // 0xcc JumpB
	goto Label_211; // 0xcd Jump
	
Label_211:
	goto Label_226; // 0xd3 Jump
	
Label_226:
	return 0; // 0xe2 Return
	
Label_206:
	var_236_string = ""; // 0xce PushV
	var_236_string = var_2_object; // 0xcf MovT
	func_824(var_236_string); // 0xd0 NEW_2
	goto Label_201; // 0xd2 Jump
	
Label_212:
	var_247_string = "all"; // 0xd4 PushS
	var_248_string = "idle"; // 0xd5 PushS
	PlayAnimation(var_247_string, var_248_string); // 0xd6 Func
	
Label_216:
	WaitForAnimEnd(); // 0xd8 Func
	var_249_string = var_3_string; // 0xda PushT
	if(var_249_string == 0) goto Label_221; // 0xdb JumpB
	goto Label_226; // 0xdc Jump
	
Label_221:
	var_250_string = "all"; // 0xdd PushS
	var_251_string = "idle"; // 0xde PushS
	PlayAnimation(var_250_string, var_251_string); // 0xdf Func
	goto Label_216; // 0xe1 Jump
	
Label_141:
	var_252_bool = 0; // 0x8d PushV
	var_252_bool = 0; // 0x8e MovB
	var_253_bool = 0; var_254_object = Obj(); // 0x8f PushV
	var_254_object = var_1_object; // 0x90 MovT
	func_931(var_254_object); // 0x91 NEW_2
	if(var_253_bool == 0) goto Label_154; // 0x93 JumpB
	var_255_bool = 0; var_256_object = Obj(); // 0x94 PushV
	var_256_object = var_1_object; // 0x95 MovT
	func_955(var_256_object); // 0x96 NEW_2
	if(var_255_bool == 0) goto Label_154; // 0x98 JumpB
	var_252_bool = 1; // 0x99 MovB
	
Label_154:
	if(var_252_bool == 0) goto Label_175; // 0x9a JumpB
	var_261_object = Obj(); var_262_object = Obj(); // 0x9b PushV
	var_261_object = var_1_object; // 0x9c MovT
	var_262_object = var_0_object; // 0x9d MovT
	func_913(); // 0x9e NEW_2
	var_265_string = ""; // 0xa0 PushV
	var_265_string = "Neutral"; // 0xa1 MovS
	func_227(var_174_object, var_265_string); // 0xa2 NEW_2
	var_266_int = 524714; // 0xa4 PushI
	SetMessage(var_266_int); // 0xa5 TObjFunc
	ClearReplies(); // 0xa7 TObjFunc
	var_267_int = 524715; // 0xa9 PushI
	var_268_int = 28112; // 0xaa PushI
	var_269_int = 26054; // 0xab PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0xac TObjFunc
	goto Label_197; // 0xae Jump
	
Label_175:
	var_270_string = ""; // 0xaf PushV
	var_270_string = "Neutral"; // 0xb0 MovS
	func_227(var_174_object, var_270_string); // 0xb1 NEW_2
	var_271_int = 526834; // 0xb3 PushI
	SetMessage(var_271_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_272_int = 526835; // 0xb8 PushI
	var_273_int = -1; // 0xb9 PushI
	var_274_int = 28118; // 0xba PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xbb TObjFunc
	var_275_int = 526836; // 0xbd PushI
	var_276_int = -1; // 0xbe PushI
	var_277_int = 28119; // 0xbf PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0xc0 TObjFunc
	goto Label_197; // 0xc2 Jump
}


func_919(var_182_bool)
{
	var_184_int = 0; var_185_string = ""; // 0x398 PushV
	var_185_string = "k1q01"; // 0x399 MovS
	func_893(var_184_int, var_185_string); // 0x39a NEW_2
	var_188_int = 4; // 0x39c PushI
	var_189_bool = var_184_int == var_188_int; // 0x39d Eq
	if(var_189_bool == 0) goto Label_929; // 0x39e JumpB
	var_182_bool = 1; // 0x39f MovB
	return 0; // 0x3a0 Return
	
Label_929:
	var_182_bool = 0; // 0x3a1 MovB
	return 0; // 0x3a2 Return
}


func_599(var_8_bool)
{
	var_8_bool = 1; // 0x257 MovB
	return 0; // 0x258 Return
}


func_984(var_66_int)
{
	var_66_int = 515573; // 0x3d8 MovI
	return 0; // 0x3d9 Return
}


func_601(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x259 PushV
	GetPosition(var_31_cvector); // 0x25a ObjFunc
	GetEyesHeight(var_30_float); // 0x25c ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x25e PushE
	var_39_float = var_39_float + var_30_float; // 0x25f Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x260 PopE
	GetPosition(var_32_cvector); // 0x261 Func
	GetEyesHeight(var_30_float); // 0x263 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x265 PushE
	var_40_float = var_40_float + var_30_float; // 0x266 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x267 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x268 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x269 PushE
	var_41_float = 0; // 0x26a MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x26b PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x26c Or
	var_43_float = sqrt(var_42_int); // 0x26d Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x26e Div2
	var_34_cvector = -var_33_cvector; // 0x26f Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x270 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x271 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x272 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x273 Xor2
	func_883(var_45_cvector, var_46_cvector); // 0x274 NEW_2
	var_53_int = 25; // 0x276 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x277 Mult
	var_55_int = var_44_float + var_54_float; // 0x278 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x279 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x27a Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x27b Add2
	IsOverrideActive(var_37_bool); // 0x27c Func
	var_57_bool = var_37_bool; // 0x27e Push
	if(var_57_bool == 0) goto Label_642; // 0x27f JumpB
	var_18_bool = 0; // 0x280 MovB
	return 18; // 0x281 Return
	
Label_642:
	StopWorld(); // 0x282 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x284 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x286 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x287 PushE
	Rotate(var_58_float, var_59_float); // 0x288 Func
	var_60_bool = 0; // 0x28a PushV
	func_992(var_60_bool); // 0x28b NEW_2
	if(var_60_bool == 0) goto Label_655; // 0x28d JumpB
	goto Label_663; // 0x28e Jump
	
Label_663:
	CameraWaitForPlayFinish(); // 0x297 Func
	ResumeWorld(); // 0x299 Func
	var_18_bool = 1; // 0x29b MovB
	return 18; // 0x29c Return
	
Label_655:
	var_61_string = "head"; // 0x28f PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x290 Func
	var_62_bool = var_38_bool; // 0x292 Push
	if(var_62_bool == 0) goto Label_663; // 0x293 JumpB
	var_63_string = "head"; // 0x294 PushS
	LookAsyncCamera(var_63_string); // 0x295 Func
}


func_986(var_65_int)
{
	var_65_int = 504032; // 0x3da MovI
	return 0; // 0x3db Return
}


func_855(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x357 PushV
	var_116_bool = 0; // 0x358 PushV
	func_992(var_116_bool); // 0x359 NEW_2
	if(var_116_bool == 0) goto Label_868; // 0x35b JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x35c Func
	var_117_bool = var_115_bool; // 0x35e Push
	if(var_117_bool == 0) goto Label_868; // 0x35f JumpB
	lshPlaySpeech(var_113_string); // 0x360 Func
	var_112_bool = 1; // 0x362 MovB
	return 2; // 0x363 Return
	
Label_868:
	var_112_bool = 0; // 0x364 MovB
	return 2; // 0x365 Return
}


func_669()
{
	var_280_bool = 0; var_281_bool = 0; // 0x29d PushV
	CameraSwitchToNormal(); // 0x29e Func
	var_282_bool = 0; // 0x2a0 PushV
	func_992(var_282_bool); // 0x2a1 NEW_2
	if(var_282_bool == 0) goto Label_677; // 0x2a3 JumpB
	goto Label_685; // 0x2a4 Jump
	
Label_685:
	return 2; // 0x2ad Return
	
Label_677:
	var_283_string = "head"; // 0x2a5 PushS
	HasAnimationTrack(var_281_bool, var_283_string); // 0x2a6 Func
	var_284_bool = var_281_bool; // 0x2a8 Push
	if(var_284_bool == 0) goto Label_685; // 0x2a9 JumpB
	var_285_string = "head"; // 0x2aa PushS
	UnlookAsync(var_285_string); // 0x2ab Func
}


func_988(var_67_string)
{
	var_67_string = "ui/NPC_Bakalavr.png"; // 0x3dc MovS
	return 0; // 0x3dd Return
}


func_990(var_68_string)
{
	var_68_string = "ui/NPC_Bakalavr_b.png"; // 0x3de MovS
	return 0; // 0x3df Return
}


func_992(var_60_bool)
{
	var_60_bool = 1; // 0x3e0 MovB
	return 0; // 0x3e1 Return
}


func_931(var_190_bool)
{
	var_192_int = 0; var_193_string = ""; // 0x3a4 PushV
	var_193_string = "k1q01Healed"; // 0x3a5 MovS
	func_893(var_192_int, var_193_string); // 0x3a6 NEW_2
	var_194_int = 0; // 0x3a8 PushI
	var_195_bool = var_192_int != var_194_int; // 0x3a9 Neq
	if(var_195_bool == 0) goto Label_941; // 0x3aa JumpB
	var_190_bool = 1; // 0x3ab MovB
	return 0; // 0x3ac Return
	
Label_941:
	var_190_bool = 0; // 0x3ad MovB
	return 0; // 0x3ae Return
}


func_227(var_2_object, var_207_string)
{
	var_208_bool = 0; // 0xe4 PushV
	func_992(var_208_bool); // 0xe5 NEW_2
	var_209_bool = var_208_bool == 0; // 0xe7 Not
	if(var_209_bool == 0) goto Label_234; // 0xe8 JumpB
	return 0; // 0xe9 Return
	
Label_234:
	var_210_bool = var_207_string == var_2_object; // 0xea Eq
	if(var_210_bool == 0) goto Label_237; // 0xeb JumpB
	return 0; // 0xec Return
	
Label_237:
	var_211_string = ""; var_212_bool = 0; // 0xed PushV
	var_211_string = var_207_string; // 0xee Mov
	var_213_string = ""; // 0xef PushS
	var_214_bool = var_207_string == var_213_string; // 0xf0 Eq
	if(var_214_bool == 0) goto Label_244; // 0xf1 JumpB
	var_212_bool = 0; // 0xf2 MovB
	goto Label_245; // 0xf3 Jump
	
Label_245:
	func_840(var_211_string, var_212_bool); // 0xf5 NEW_2
	var_2_object = var_207_string; // 0xf7 TMov
	return 0; // 0xf8 Return
	
Label_244:
	var_212_bool = 1; // 0xf4 MovB
}


func_870()
{
	var_9_bool = 0; // 0x366 PushV
	func_992(var_9_bool); // 0x367 NEW_2
	if(var_9_bool == 0) goto Label_876; // 0x369 JumpB
	lshStopSpeech(); // 0x36a Func
	
Label_876:
	return 0; // 0x36c Return
}


func_744(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x2e8 PushV
	var_96_string = "c"; // 0x2e9 MovS
	var_97_int = 0; // 0x2ea MovI
	
Label_747:
	var_101_int = 1; // 0x2eb PushI
	if(var_101_int == 0) goto Label_760; // 0x2ec JumpB
	var_102_int = 1; // 0x2ed PushI
	var_103_int = var_97_int + var_102_int; // 0x2ee Add
	var_104_int = var_96_string + var_103_int; // 0x2ef Add
	HasProperty(var_104_int, var_98_bool); // 0x2f0 ObjFunc
	var_105_bool = var_98_bool == 0; // 0x2f2 Not
	if(var_105_bool == 0) goto Label_757; // 0x2f3 JumpB
	goto Label_760; // 0x2f4 Jump
	
Label_760:
	var_106_bool = var_97_int == 0; // 0x2f8 Not
	if(var_106_bool == 0) goto Label_764; // 0x2f9 JumpB
	var_89_bool = 0; // 0x2fa MovB
	return 10; // 0x2fb Return
	
Label_764:
	var_99_int = 0; // 0x2fc MovI
	var_107_int = 1; // 0x2fd PushI
	var_108_bool = var_97_int > var_107_int; // 0x2fe GT
	if(var_108_bool == 0) goto Label_770; // 0x2ff JumpB
	irand(var_99_int, var_97_int); // 0x300 Func
	
Label_770:
	var_109_int = 1; // 0x302 PushI
	var_110_int = var_99_int + var_109_int; // 0x303 Add
	var_111_int = var_96_string + var_110_int; // 0x304 Add
	GetProperty(var_111_int, var_100_string); // 0x305 ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x307 PushV
	var_113_string = var_100_string; // 0x308 Mov
	func_855(var_112_bool, var_113_string); // 0x309 NEW_2
	var_89_bool = var_112_bool; // 0x30a Mov
	return 10; // 0x30c Return
	
Label_757:
	var_118_int = 1; // 0x2f5 PushI
	var_97_int = var_97_int + var_118_int; // 0x2f6 Add2
	goto Label_747; // 0x2f7 Jump
}


func_877(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x36d PushV
	self(var_11_object); // 0x36e Func
	var_9_object = var_11_object; // 0x370 Mov
	return 2; // 0x371 Return
}


func_686(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x2ae PushV
	var_87_string = "voice_common"; // 0x2af PushS
	GetVariable(var_87_string, var_85_int); // 0x2b0 Func
	var_88_int = var_85_int; // 0x2b2 Push
	if(var_88_int == 0) goto Label_724; // 0x2b3 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x2b4 PushV
	var_90_object = var_79_object; // 0x2b5 Mov
	func_744(var_90_object); // 0x2b6 NEW_2
	var_119_bool = var_89_bool == 0; // 0x2b8 Not
	if(var_119_bool == 0) goto Label_706; // 0x2b9 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x2ba PushV
	var_121_object = var_79_object; // 0x2bb Mov
	func_781(var_121_object); // 0x2bc NEW_2
	var_155_bool = var_120_bool == 0; // 0x2be Not
	if(var_155_bool == 0) goto Label_706; // 0x2bf JumpB
	var_78_bool = 0; // 0x2c0 MovB
	return 4; // 0x2c1 Return
	
Label_706:
	var_156_int = 2; // 0x2c2 PushI
	irand(var_86_int, var_156_int); // 0x2c3 Func
	var_157_int = var_86_int; // 0x2c5 Push
	if(var_157_int == 0) goto Label_719; // 0x2c6 JumpB
	var_158_string = "voice_common"; // 0x2c7 PushS
	var_159_int = 1; // 0x2c8 PushI
	var_160_int = var_85_int + var_159_int; // 0x2c9 Add
	var_161_int = 3; // 0x2ca PushI
	var_162_int = var_160_int / var_161_int; // 0x2cb Mod
	SetVariable(var_158_string, var_162_int); // 0x2cc Func
	goto Label_723; // 0x2ce Jump
	
Label_723:
	goto Label_742; // 0x2d3 Jump
	
Label_742:
	var_78_bool = 1; // 0x2e6 MovB
	return 4; // 0x2e7 Return
	
Label_719:
	var_163_string = "voice_common"; // 0x2cf PushS
	var_164_int = 0; // 0x2d0 PushI
	SetVariable(var_163_string, var_164_int); // 0x2d1 Func
	
Label_724:
	var_165_bool = 0; var_166_object = Obj(); // 0x2d4 PushV
	var_166_object = var_79_object; // 0x2d5 Mov
	func_781(var_166_object); // 0x2d6 NEW_2
	var_167_bool = var_165_bool == 0; // 0x2d8 Not
	if(var_167_bool == 0) goto Label_738; // 0x2d9 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x2da PushV
	var_169_object = var_79_object; // 0x2db Mov
	func_744(var_169_object); // 0x2dc NEW_2
	var_170_bool = var_168_bool == 0; // 0x2de Not
	if(var_170_bool == 0) goto Label_738; // 0x2df JumpB
	var_78_bool = 0; // 0x2e0 MovB
	return 4; // 0x2e1 Return
	
Label_738:
	var_171_string = "voice_common"; // 0x2e2 PushS
	var_172_int = 1; // 0x2e3 PushI
	SetVariable(var_171_string, var_172_int); // 0x2e4 Func
}


func_943(var_197_bool)
{
	var_199_int = 0; var_200_string = ""; // 0x3b0 PushV
	var_200_string = "ook1Danko1"; // 0x3b1 MovS
	func_893(var_199_int, var_200_string); // 0x3b2 NEW_2
	var_201_int = 0; // 0x3b4 PushI
	var_202_bool = var_199_int == var_201_int; // 0x3b5 Eq
	if(var_202_bool == 0) goto Label_953; // 0x3b6 JumpB
	var_197_bool = 1; // 0x3b7 MovB
	return 0; // 0x3b8 Return
	
Label_953:
	var_197_bool = 0; // 0x3b9 MovB
	return 0; // 0x3ba Return
}


func_883(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x373 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x374 Or
	var_49_float = sqrt(var_50_int); // 0x375 Sqrt2
	var_51_float = 0.0; // 0x376 PushF
	var_52_bool = var_49_float < var_51_float; // 0x377 LT
	if(var_52_bool == 0) goto Label_891; // 0x378 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x379 MovV
	return 2; // 0x37a Return
	
Label_891:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x37b Div2
	return 2; // 0x37c Return
}


func_824(var_236_string)
{
	var_237_bool = 0; var_238_float = 0; var_239_float = 0; var_240_bool = 0; var_241_float = 0; var_242_float = 0; // 0x338 PushV
	lshHasAnimation(var_240_bool, var_236_string); // 0x339 Func
	var_243_bool = var_240_bool; // 0x33b Push
	if(var_243_bool == 0) goto Label_835; // 0x33c JumpB
	lshGetAnimTimes(var_236_string, var_241_float, var_242_float); // 0x33d Func
	var_244_bool = 0; // 0x33f PushB
	lshPlayAnimation(var_241_float, var_242_float, var_244_bool); // 0x340 Func
	goto Label_839; // 0x342 Jump
	
Label_839:
	return 6; // 0x347 Return
	
Label_835:
	var_245_string = "Can't find lsh animation : "; // 0x343 PushS
	var_246_int = var_245_string + var_236_string; // 0x344 Add
	Trace(var_246_int); // 0x345 Func
}


func_955(var_255_bool)
{
	var_257_int = 0; var_258_string = ""; // 0x3bc PushV
	var_258_string = "ook1Danko2"; // 0x3bd MovS
	func_893(var_257_int, var_258_string); // 0x3be NEW_2
	var_259_int = 0; // 0x3c0 PushI
	var_260_bool = var_257_int == var_259_int; // 0x3c1 Eq
	if(var_260_bool == 0) goto Label_965; // 0x3c2 JumpB
	var_255_bool = 1; // 0x3c3 MovB
	return 0; // 0x3c4 Return
	
Label_965:
	var_255_bool = 0; // 0x3c5 MovB
	return 0; // 0x3c6 Return
}


func_893(var_184_int, var_185_string)
{
	var_186_int = 0; var_187_int = 0; // 0x37d PushV
	GetVariable(var_185_string, var_187_int); // 0x37e Func
	var_184_int = var_187_int; // 0x380 Mov
	return 2; // 0x381 Return
}


