task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xfa PushI
	if(var_8_int == 0) goto Label_542; // 0xfb JumpB
	func_872(); // 0xfd NEW_2
	var_10_int = 26038; // 0xff PushI
	var_11_bool = var_6_int == var_10_int; // 0x100 Eq
	if(var_11_bool == 0) goto Label_366; // 0x101 JumpB
	var_12_bool = 0; // 0x102 PushV
	var_12_bool = 0; // 0x103 MovB
	var_13_bool = 0; // 0x104 PushV
	var_13_bool = 0; // 0x105 MovB
	var_14_bool = 0; var_15_object = Obj(); // 0x106 PushV
	var_15_object = var_1_object; // 0x107 MovT
	func_921(var_15_object); // 0x108 NEW_2
	if(var_14_bool == 0) goto Label_274; // 0x10a JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0x10b PushV
	var_23_object = var_1_object; // 0x10c MovT
	func_933(var_23_object); // 0x10d NEW_2
	var_28_bool = var_22_bool == 0; // 0x10f Not
	if(var_28_bool == 0) goto Label_274; // 0x110 JumpB
	var_13_bool = 1; // 0x111 MovB
	
Label_274:
	if(var_13_bool == 0) goto Label_281; // 0x112 JumpB
	var_29_bool = 0; var_30_object = Obj(); // 0x113 PushV
	var_30_object = var_1_object; // 0x114 MovT
	func_945(var_30_object); // 0x115 NEW_2
	if(var_29_bool == 0) goto Label_281; // 0x117 JumpB
	var_12_bool = 1; // 0x118 MovB
	
Label_281:
	if(var_12_bool == 0) goto Label_312; // 0x119 JumpB
	var_35_object = Obj(); var_36_object = Obj(); // 0x11a PushV
	var_35_object = var_1_object; // 0x11b MovT
	var_36_object = var_0_object; // 0x11c MovT
	func_909(); // 0x11d NEW_2
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
	func_933(var_68_object); // 0x13c NEW_2
	if(var_67_bool == 0) goto Label_325; // 0x13e JumpB
	var_69_bool = 0; var_70_object = Obj(); // 0x13f PushV
	var_70_object = var_1_object; // 0x140 MovT
	func_957(var_70_object); // 0x141 NEW_2
	if(var_69_bool == 0) goto Label_325; // 0x143 JumpB
	var_66_bool = 1; // 0x144 MovB
	
Label_325:
	if(var_66_bool == 0) goto Label_346; // 0x145 JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0x146 PushV
	var_75_object = var_1_object; // 0x147 MovT
	var_76_object = var_0_object; // 0x148 MovT
	func_915(); // 0x149 NEW_2
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
	func_994(var_160_bool); // 0x214 NEW_2
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
	func_879(var_14_object); // 0x23d NEW_2
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
	func_879(var_9_object); // 0x252 NEW_2
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
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_988(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_986(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_990(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_992(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_969(var_70_int); // 0x22 NEW_2
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
	func_879(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_688(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_279_bool = var_17_bool == 0; // 0x3f Not
	if(var_279_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_280_object = Obj(); // 0x46 PushV
	var_280_object = var_8_object; // 0x47 Mov
	func_670(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_900(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x384 PushV
	GetGameTime(var_136_float); // 0x385 Func
	var_137_int = 1; // 0x387 PushI
	var_138_int = 0; // 0x388 PushV
	var_139_int = 24; // 0x389 PushI
	var_138_int = var_136_float / var_136_float; // 0x38a Div2
	var_134_int = var_137_int + var_138_int; // 0x38b Add2
	return 2; // 0x38c Return
}


func_969(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x3c9 PushV
	var_73_string = "branch"; // 0x3ca PushS
	GetVariable(var_73_string, var_72_int); // 0x3cb Func
	var_74_int = 0; // 0x3cd PushI
	var_75_bool = var_72_int == var_74_int; // 0x3ce Eq
	if(var_75_bool == 0) goto Label_979; // 0x3cf JumpB
	var_70_int = 1; // 0x3d0 MovI
	return 2; // 0x3d1 Return
	
Label_979:
	var_76_int = 1; // 0x3d3 PushI
	var_77_bool = var_72_int == var_76_int; // 0x3d4 Eq
	if(var_77_bool == 0) goto Label_984; // 0x3d5 JumpB
	var_70_int = 2; // 0x3d6 MovI
	return 2; // 0x3d7 Return
	
Label_984:
	var_70_int = 3; // 0x3d8 MovI
	return 2; // 0x3d9 Return
}


func_842(var_212_string, var_213_bool)
{
	var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_float = 0; var_221_float = 0; // 0x34a PushV
	lshHasAnimation(var_219_bool, var_212_string); // 0x34b Func
	var_222_bool = var_219_bool; // 0x34d Push
	if(var_222_bool == 0) goto Label_852; // 0x34e JumpB
	lshGetAnimTimes(var_212_string, var_220_float, var_221_float); // 0x34f Func
	lshPlayAnimation(var_220_float, var_221_float, var_213_bool); // 0x351 Func
	goto Label_856; // 0x353 Jump
	
Label_856:
	return 6; // 0x358 Return
	
Label_852:
	var_223_string = "Can't find lsh animation : "; // 0x354 PushS
	var_224_int = var_223_string + var_212_string; // 0x355 Add
	Trace(var_224_int); // 0x356 Func
}


func_909()
{
	var_206_string = "ook1Danko1"; // 0x38e PushS
	var_207_int = 1; // 0x38f PushI
	SetVariable(var_206_string, var_207_int); // 0x390 Func
	return 0; // 0x392 Return
}


func_783(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x30f PushV
	var_133_string = "d"; // 0x310 PushS
	var_134_int = 0; // 0x311 PushV
	func_900(var_134_int); // 0x312 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x314 Add
	var_141_string = "m"; // 0x315 PushS
	var_128_string = var_140_int + var_141_string; // 0x316 Add2
	var_129_int = 0; // 0x317 MovI
	
Label_792:
	var_142_int = 1; // 0x318 PushI
	if(var_142_int == 0) goto Label_805; // 0x319 JumpB
	var_143_int = 1; // 0x31a PushI
	var_144_int = var_129_int + var_143_int; // 0x31b Add
	var_145_int = var_128_string + var_144_int; // 0x31c Add
	HasProperty(var_145_int, var_130_bool); // 0x31d ObjFunc
	var_146_bool = var_130_bool == 0; // 0x31f Not
	if(var_146_bool == 0) goto Label_802; // 0x320 JumpB
	goto Label_805; // 0x321 Jump
	
Label_805:
	var_147_bool = var_129_int == 0; // 0x325 Not
	if(var_147_bool == 0) goto Label_809; // 0x326 JumpB
	var_121_bool = 0; // 0x327 MovB
	return 10; // 0x328 Return
	
Label_809:
	var_131_int = 0; // 0x329 MovI
	var_148_int = 1; // 0x32a PushI
	var_149_bool = var_129_int > var_148_int; // 0x32b GT
	if(var_149_bool == 0) goto Label_815; // 0x32c JumpB
	irand(var_131_int, var_129_int); // 0x32d Func
	
Label_815:
	var_150_int = 1; // 0x32f PushI
	var_151_int = var_131_int + var_150_int; // 0x330 Add
	var_152_int = var_128_string + var_151_int; // 0x331 Add
	GetProperty(var_152_int, var_132_string); // 0x332 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x334 PushV
	var_154_string = var_132_string; // 0x335 Mov
	func_857(var_153_bool, var_154_string); // 0x336 NEW_2
	var_121_bool = var_153_bool; // 0x337 Mov
	return 10; // 0x339 Return
	
Label_802:
	var_155_int = 1; // 0x322 PushI
	var_129_int = var_129_int + var_155_int; // 0x323 Add2
	goto Label_792; // 0x324 Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_197; // 0x56 JumpB
	var_181_bool = 0; // 0x57 PushV
	var_181_bool = 0; // 0x58 MovB
	var_182_bool = 0; // 0x59 PushV
	var_182_bool = 0; // 0x5a MovB
	var_183_bool = 0; var_184_object = Obj(); // 0x5b PushV
	var_184_object = var_1_object; // 0x5c MovT
	func_921(var_184_object); // 0x5d NEW_2
	if(var_183_bool == 0) goto Label_103; // 0x5f JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0x60 PushV
	var_192_object = var_1_object; // 0x61 MovT
	func_933(var_192_object); // 0x62 NEW_2
	var_197_bool = var_191_bool == 0; // 0x64 Not
	if(var_197_bool == 0) goto Label_103; // 0x65 JumpB
	var_182_bool = 1; // 0x66 MovB
	
Label_103:
	if(var_182_bool == 0) goto Label_110; // 0x67 JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x68 PushV
	var_199_object = var_1_object; // 0x69 MovT
	func_945(var_199_object); // 0x6a NEW_2
	if(var_198_bool == 0) goto Label_110; // 0x6c JumpB
	var_181_bool = 1; // 0x6d MovB
	
Label_110:
	if(var_181_bool == 0) goto Label_141; // 0x6e JumpB
	var_204_object = Obj(); var_205_object = Obj(); // 0x6f PushV
	var_204_object = var_1_object; // 0x70 MovT
	var_205_object = var_0_object; // 0x71 MovT
	func_909(); // 0x72 NEW_2
	var_208_string = ""; // 0x74 PushV
	var_208_string = "Neutral"; // 0x75 MovS
	func_227(var_175_object, var_208_string); // 0x76 NEW_2
	var_225_int = 524699; // 0x78 PushI
	SetMessage(var_225_int); // 0x79 TObjFunc
	ClearReplies(); // 0x7b TObjFunc
	var_226_int = 524700; // 0x7d PushI
	var_227_int = 28105; // 0x7e PushI
	var_228_int = 26039; // 0x7f PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x80 TObjFunc
	var_229_int = 526838; // 0x82 PushI
	var_230_int = 28123; // 0x83 PushI
	var_231_int = 28122; // 0x84 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x85 TObjFunc
	var_232_int = 542096; // 0x87 PushI
	var_233_int = 28125; // 0x88 PushI
	var_234_int = 44396; // 0x89 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x8a TObjFunc
	goto Label_197; // 0x8c Jump
	
Label_197:
	var_235_bool = 0; // 0xc5 PushV
	func_994(var_235_bool); // 0xc6 NEW_2
	if(var_235_bool == 0) goto Label_212; // 0xc8 JumpB
	
Label_201:
	lshWaitForAnimEnd(); // 0xc9 Func
	var_236_string = var_3_string; // 0xcb PushT
	if(var_236_string == 0) goto Label_206; // 0xcc JumpB
	goto Label_211; // 0xcd Jump
	
Label_211:
	goto Label_226; // 0xd3 Jump
	
Label_226:
	return 0; // 0xe2 Return
	
Label_206:
	var_237_string = ""; // 0xce PushV
	var_237_string = var_2_object; // 0xcf MovT
	func_826(var_237_string); // 0xd0 NEW_2
	goto Label_201; // 0xd2 Jump
	
Label_212:
	var_248_string = "all"; // 0xd4 PushS
	var_249_string = "idle"; // 0xd5 PushS
	PlayAnimation(var_248_string, var_249_string); // 0xd6 Func
	
Label_216:
	WaitForAnimEnd(); // 0xd8 Func
	var_250_string = var_3_string; // 0xda PushT
	if(var_250_string == 0) goto Label_221; // 0xdb JumpB
	goto Label_226; // 0xdc Jump
	
Label_221:
	var_251_string = "all"; // 0xdd PushS
	var_252_string = "idle"; // 0xde PushS
	PlayAnimation(var_251_string, var_252_string); // 0xdf Func
	goto Label_216; // 0xe1 Jump
	
Label_141:
	var_253_bool = 0; // 0x8d PushV
	var_253_bool = 0; // 0x8e MovB
	var_254_bool = 0; var_255_object = Obj(); // 0x8f PushV
	var_255_object = var_1_object; // 0x90 MovT
	func_933(var_255_object); // 0x91 NEW_2
	if(var_254_bool == 0) goto Label_154; // 0x93 JumpB
	var_256_bool = 0; var_257_object = Obj(); // 0x94 PushV
	var_257_object = var_1_object; // 0x95 MovT
	func_957(var_257_object); // 0x96 NEW_2
	if(var_256_bool == 0) goto Label_154; // 0x98 JumpB
	var_253_bool = 1; // 0x99 MovB
	
Label_154:
	if(var_253_bool == 0) goto Label_175; // 0x9a JumpB
	var_262_object = Obj(); var_263_object = Obj(); // 0x9b PushV
	var_262_object = var_1_object; // 0x9c MovT
	var_263_object = var_0_object; // 0x9d MovT
	func_915(); // 0x9e NEW_2
	var_266_string = ""; // 0xa0 PushV
	var_266_string = "Neutral"; // 0xa1 MovS
	func_227(var_175_object, var_266_string); // 0xa2 NEW_2
	var_267_int = 524714; // 0xa4 PushI
	SetMessage(var_267_int); // 0xa5 TObjFunc
	ClearReplies(); // 0xa7 TObjFunc
	var_268_int = 524715; // 0xa9 PushI
	var_269_int = 28112; // 0xaa PushI
	var_270_int = 26054; // 0xab PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0xac TObjFunc
	goto Label_197; // 0xae Jump
	
Label_175:
	var_271_string = ""; // 0xaf PushV
	var_271_string = "Neutral"; // 0xb0 MovS
	func_227(var_175_object, var_271_string); // 0xb1 NEW_2
	var_272_int = 526834; // 0xb3 PushI
	SetMessage(var_272_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_273_int = 526835; // 0xb8 PushI
	var_274_int = -1; // 0xb9 PushI
	var_275_int = 28118; // 0xba PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0xbb TObjFunc
	var_276_int = 526836; // 0xbd PushI
	var_277_int = -1; // 0xbe PushI
	var_278_int = 28119; // 0xbf PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0xc0 TObjFunc
	goto Label_197; // 0xc2 Jump
}


func_915()
{
	var_264_string = "ook1Danko2"; // 0x394 PushS
	var_265_int = 1; // 0x395 PushI
	SetVariable(var_264_string, var_265_int); // 0x396 Func
	return 0; // 0x398 Return
}


func_599(var_8_bool)
{
	var_8_bool = 1; // 0x257 MovB
	return 0; // 0x258 Return
}


func_921(var_183_bool)
{
	var_185_int = 0; var_186_string = ""; // 0x39a PushV
	var_186_string = "k1q01"; // 0x39b MovS
	func_895(var_185_int, var_186_string); // 0x39c NEW_2
	var_189_int = 4; // 0x39e PushI
	var_190_bool = var_185_int == var_189_int; // 0x39f Eq
	if(var_190_bool == 0) goto Label_931; // 0x3a0 JumpB
	var_183_bool = 1; // 0x3a1 MovB
	return 0; // 0x3a2 Return
	
Label_931:
	var_183_bool = 0; // 0x3a3 MovB
	return 0; // 0x3a4 Return
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
	func_885(var_45_cvector, var_46_cvector); // 0x274 NEW_2
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
	var_58_bool = 1; // 0x284 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x285 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x287 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x288 PushE
	Rotate(var_59_float, var_60_float); // 0x289 Func
	var_61_bool = 0; // 0x28b PushV
	func_994(var_61_bool); // 0x28c NEW_2
	if(var_61_bool == 0) goto Label_656; // 0x28e JumpB
	goto Label_664; // 0x28f Jump
	
Label_664:
	CameraWaitForPlayFinish(); // 0x298 Func
	ResumeWorld(); // 0x29a Func
	var_18_bool = 1; // 0x29c MovB
	return 18; // 0x29d Return
	
Label_656:
	var_62_string = "head"; // 0x290 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x291 Func
	var_63_bool = var_38_bool; // 0x293 Push
	if(var_63_bool == 0) goto Label_664; // 0x294 JumpB
	var_64_string = "head"; // 0x295 PushS
	LookAsyncCamera(var_64_string); // 0x296 Func
}


func_986(var_67_int)
{
	var_67_int = 515573; // 0x3da MovI
	return 0; // 0x3db Return
}


func_857(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x359 PushV
	var_117_bool = 0; // 0x35a PushV
	func_994(var_117_bool); // 0x35b NEW_2
	if(var_117_bool == 0) goto Label_870; // 0x35d JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x35e Func
	var_118_bool = var_116_bool; // 0x360 Push
	if(var_118_bool == 0) goto Label_870; // 0x361 JumpB
	lshPlaySpeech(var_114_string); // 0x362 Func
	var_113_bool = 1; // 0x364 MovB
	return 2; // 0x365 Return
	
Label_870:
	var_113_bool = 0; // 0x366 MovB
	return 2; // 0x367 Return
}


func_988(var_66_int)
{
	var_66_int = 504032; // 0x3dc MovI
	return 0; // 0x3dd Return
}


func_670()
{
	var_281_bool = 0; var_282_bool = 0; // 0x29e PushV
	var_283_bool = 1; // 0x29f PushB
	CameraSwitchToNormal(var_283_bool); // 0x2a0 Func
	var_284_bool = 0; // 0x2a2 PushV
	func_994(var_284_bool); // 0x2a3 NEW_2
	if(var_284_bool == 0) goto Label_679; // 0x2a5 JumpB
	goto Label_687; // 0x2a6 Jump
	
Label_687:
	return 2; // 0x2af Return
	
Label_679:
	var_285_string = "head"; // 0x2a7 PushS
	HasAnimationTrack(var_282_bool, var_285_string); // 0x2a8 Func
	var_286_bool = var_282_bool; // 0x2aa Push
	if(var_286_bool == 0) goto Label_687; // 0x2ab JumpB
	var_287_string = "head"; // 0x2ac PushS
	UnlookAsync(var_287_string); // 0x2ad Func
}


func_990(var_68_string)
{
	var_68_string = "ui/NPC_Bakalavr.png"; // 0x3de MovS
	return 0; // 0x3df Return
}


func_992(var_69_string)
{
	var_69_string = "ui/NPC_Bakalavr_b.png"; // 0x3e0 MovS
	return 0; // 0x3e1 Return
}


func_994(var_61_bool)
{
	var_61_bool = 1; // 0x3e2 MovB
	return 0; // 0x3e3 Return
}


func_227(var_2_object, var_208_string)
{
	var_209_bool = 0; // 0xe4 PushV
	func_994(var_209_bool); // 0xe5 NEW_2
	var_210_bool = var_209_bool == 0; // 0xe7 Not
	if(var_210_bool == 0) goto Label_234; // 0xe8 JumpB
	return 0; // 0xe9 Return
	
Label_234:
	var_211_bool = var_208_string == var_2_object; // 0xea Eq
	if(var_211_bool == 0) goto Label_237; // 0xeb JumpB
	return 0; // 0xec Return
	
Label_237:
	var_212_string = ""; var_213_bool = 0; // 0xed PushV
	var_212_string = var_208_string; // 0xee Mov
	var_214_string = ""; // 0xef PushS
	var_215_bool = var_208_string == var_214_string; // 0xf0 Eq
	if(var_215_bool == 0) goto Label_244; // 0xf1 JumpB
	var_213_bool = 0; // 0xf2 MovB
	goto Label_245; // 0xf3 Jump
	
Label_245:
	func_842(var_212_string, var_213_bool); // 0xf5 NEW_2
	var_2_object = var_208_string; // 0xf7 TMov
	return 0; // 0xf8 Return
	
Label_244:
	var_213_bool = 1; // 0xf4 MovB
}


func_933(var_191_bool)
{
	var_193_int = 0; var_194_string = ""; // 0x3a6 PushV
	var_194_string = "k1q01Healed"; // 0x3a7 MovS
	func_895(var_193_int, var_194_string); // 0x3a8 NEW_2
	var_195_int = 0; // 0x3aa PushI
	var_196_bool = var_193_int != var_195_int; // 0x3ab Neq
	if(var_196_bool == 0) goto Label_943; // 0x3ac JumpB
	var_191_bool = 1; // 0x3ad MovB
	return 0; // 0x3ae Return
	
Label_943:
	var_191_bool = 0; // 0x3af MovB
	return 0; // 0x3b0 Return
}


func_872()
{
	var_9_bool = 0; // 0x368 PushV
	func_994(var_9_bool); // 0x369 NEW_2
	if(var_9_bool == 0) goto Label_878; // 0x36b JumpB
	lshStopSpeech(); // 0x36c Func
	
Label_878:
	return 0; // 0x36e Return
}


func_746(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x2ea PushV
	var_97_string = "c"; // 0x2eb MovS
	var_98_int = 0; // 0x2ec MovI
	
Label_749:
	var_102_int = 1; // 0x2ed PushI
	if(var_102_int == 0) goto Label_762; // 0x2ee JumpB
	var_103_int = 1; // 0x2ef PushI
	var_104_int = var_98_int + var_103_int; // 0x2f0 Add
	var_105_int = var_97_string + var_104_int; // 0x2f1 Add
	HasProperty(var_105_int, var_99_bool); // 0x2f2 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x2f4 Not
	if(var_106_bool == 0) goto Label_759; // 0x2f5 JumpB
	goto Label_762; // 0x2f6 Jump
	
Label_762:
	var_107_bool = var_98_int == 0; // 0x2fa Not
	if(var_107_bool == 0) goto Label_766; // 0x2fb JumpB
	var_90_bool = 0; // 0x2fc MovB
	return 10; // 0x2fd Return
	
Label_766:
	var_100_int = 0; // 0x2fe MovI
	var_108_int = 1; // 0x2ff PushI
	var_109_bool = var_98_int > var_108_int; // 0x300 GT
	if(var_109_bool == 0) goto Label_772; // 0x301 JumpB
	irand(var_100_int, var_98_int); // 0x302 Func
	
Label_772:
	var_110_int = 1; // 0x304 PushI
	var_111_int = var_100_int + var_110_int; // 0x305 Add
	var_112_int = var_97_string + var_111_int; // 0x306 Add
	GetProperty(var_112_int, var_101_string); // 0x307 ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x309 PushV
	var_114_string = var_101_string; // 0x30a Mov
	func_857(var_113_bool, var_114_string); // 0x30b NEW_2
	var_90_bool = var_113_bool; // 0x30c Mov
	return 10; // 0x30e Return
	
Label_759:
	var_119_int = 1; // 0x2f7 PushI
	var_98_int = var_98_int + var_119_int; // 0x2f8 Add2
	goto Label_749; // 0x2f9 Jump
}


func_879(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x36f PushV
	self(var_11_object); // 0x370 Func
	var_9_object = var_11_object; // 0x372 Mov
	return 2; // 0x373 Return
}


func_688(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x2b0 PushV
	var_88_string = "voice_common"; // 0x2b1 PushS
	GetVariable(var_88_string, var_86_int); // 0x2b2 Func
	var_89_int = var_86_int; // 0x2b4 Push
	if(var_89_int == 0) goto Label_726; // 0x2b5 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x2b6 PushV
	var_91_object = var_80_object; // 0x2b7 Mov
	func_746(var_91_object); // 0x2b8 NEW_2
	var_120_bool = var_90_bool == 0; // 0x2ba Not
	if(var_120_bool == 0) goto Label_708; // 0x2bb JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x2bc PushV
	var_122_object = var_80_object; // 0x2bd Mov
	func_783(var_122_object); // 0x2be NEW_2
	var_156_bool = var_121_bool == 0; // 0x2c0 Not
	if(var_156_bool == 0) goto Label_708; // 0x2c1 JumpB
	var_79_bool = 0; // 0x2c2 MovB
	return 4; // 0x2c3 Return
	
Label_708:
	var_157_int = 2; // 0x2c4 PushI
	irand(var_87_int, var_157_int); // 0x2c5 Func
	var_158_int = var_87_int; // 0x2c7 Push
	if(var_158_int == 0) goto Label_721; // 0x2c8 JumpB
	var_159_string = "voice_common"; // 0x2c9 PushS
	var_160_int = 1; // 0x2ca PushI
	var_161_int = var_86_int + var_160_int; // 0x2cb Add
	var_162_int = 3; // 0x2cc PushI
	var_163_int = var_161_int / var_162_int; // 0x2cd Mod
	SetVariable(var_159_string, var_163_int); // 0x2ce Func
	goto Label_725; // 0x2d0 Jump
	
Label_725:
	goto Label_744; // 0x2d5 Jump
	
Label_744:
	var_79_bool = 1; // 0x2e8 MovB
	return 4; // 0x2e9 Return
	
Label_721:
	var_164_string = "voice_common"; // 0x2d1 PushS
	var_165_int = 0; // 0x2d2 PushI
	SetVariable(var_164_string, var_165_int); // 0x2d3 Func
	
Label_726:
	var_166_bool = 0; var_167_object = Obj(); // 0x2d6 PushV
	var_167_object = var_80_object; // 0x2d7 Mov
	func_783(var_167_object); // 0x2d8 NEW_2
	var_168_bool = var_166_bool == 0; // 0x2da Not
	if(var_168_bool == 0) goto Label_740; // 0x2db JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x2dc PushV
	var_170_object = var_80_object; // 0x2dd Mov
	func_746(var_170_object); // 0x2de NEW_2
	var_171_bool = var_169_bool == 0; // 0x2e0 Not
	if(var_171_bool == 0) goto Label_740; // 0x2e1 JumpB
	var_79_bool = 0; // 0x2e2 MovB
	return 4; // 0x2e3 Return
	
Label_740:
	var_172_string = "voice_common"; // 0x2e4 PushS
	var_173_int = 1; // 0x2e5 PushI
	SetVariable(var_172_string, var_173_int); // 0x2e6 Func
}


func_945(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x3b2 PushV
	var_201_string = "ook1Danko1"; // 0x3b3 MovS
	func_895(var_200_int, var_201_string); // 0x3b4 NEW_2
	var_202_int = 0; // 0x3b6 PushI
	var_203_bool = var_200_int == var_202_int; // 0x3b7 Eq
	if(var_203_bool == 0) goto Label_955; // 0x3b8 JumpB
	var_198_bool = 1; // 0x3b9 MovB
	return 0; // 0x3ba Return
	
Label_955:
	var_198_bool = 0; // 0x3bb MovB
	return 0; // 0x3bc Return
}


func_885(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x375 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x376 Or
	var_49_float = sqrt(var_50_int); // 0x377 Sqrt2
	var_51_float = 0.0; // 0x378 PushF
	var_52_bool = var_49_float < var_51_float; // 0x379 LT
	if(var_52_bool == 0) goto Label_893; // 0x37a JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x37b MovV
	return 2; // 0x37c Return
	
Label_893:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x37d Div2
	return 2; // 0x37e Return
}


func_826(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x33a PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x33b Func
	var_244_bool = var_241_bool; // 0x33d Push
	if(var_244_bool == 0) goto Label_837; // 0x33e JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x33f Func
	var_245_bool = 0; // 0x341 PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x342 Func
	goto Label_841; // 0x344 Jump
	
Label_841:
	return 6; // 0x349 Return
	
Label_837:
	var_246_string = "Can't find lsh animation : "; // 0x345 PushS
	var_247_int = var_246_string + var_237_string; // 0x346 Add
	Trace(var_247_int); // 0x347 Func
}


func_957(var_256_bool)
{
	var_258_int = 0; var_259_string = ""; // 0x3be PushV
	var_259_string = "ook1Danko2"; // 0x3bf MovS
	func_895(var_258_int, var_259_string); // 0x3c0 NEW_2
	var_260_int = 0; // 0x3c2 PushI
	var_261_bool = var_258_int == var_260_int; // 0x3c3 Eq
	if(var_261_bool == 0) goto Label_967; // 0x3c4 JumpB
	var_256_bool = 1; // 0x3c5 MovB
	return 0; // 0x3c6 Return
	
Label_967:
	var_256_bool = 0; // 0x3c7 MovB
	return 0; // 0x3c8 Return
}


func_895(var_185_int, var_186_string)
{
	var_187_int = 0; var_188_int = 0; // 0x37f PushV
	GetVariable(var_186_string, var_188_int); // 0x380 Func
	var_185_int = var_188_int; // 0x382 Mov
	return 2; // 0x383 Return
}


