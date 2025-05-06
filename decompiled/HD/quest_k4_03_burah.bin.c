task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc0 PushI
	if(var_9_int == 0) goto Label_455; // 0xc1 JumpB
	func_1060(); // 0xc3 NEW_2
	var_11_int = 27115; // 0xc5 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc6 Eq
	if(var_12_bool == 0) goto Label_205; // 0xc7 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc8 PushV
	var_13_object = var_1_object; // 0xc9 MovT
	var_14_object = var_0_object; // 0xca MovT
	func_1121(); // 0xcb NEW_2
	
Label_205:
	var_40_int = 27116; // 0xcd PushI
	var_41_bool = var_8_bool == var_40_int; // 0xce Eq
	if(var_41_bool == 0) goto Label_213; // 0xcf JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xd0 PushV
	var_42_object = var_1_object; // 0xd1 MovT
	var_43_object = var_0_object; // 0xd2 MovT
	func_1130(); // 0xd3 NEW_2
	
Label_213:
	var_54_int = 44698; // 0xd5 PushI
	var_55_bool = var_8_bool == var_54_int; // 0xd6 Eq
	if(var_55_bool == 0) goto Label_221; // 0xd7 JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0xd8 PushV
	var_56_object = var_1_object; // 0xd9 MovT
	var_57_object = var_0_object; // 0xda MovT
	func_1121(); // 0xdb NEW_2
	
Label_221:
	var_58_int = 27114; // 0xdd PushI
	var_59_bool = var_7_cvector == var_58_int; // 0xde Eq
	if(var_59_bool == 0) goto Label_274; // 0xdf JumpB
	var_60_bool = 0; var_61_object = Obj(); // 0xe0 PushV
	var_61_object = var_1_object; // 0xe1 MovT
	func_1145(var_61_object); // 0xe2 NEW_2
	if(var_60_bool == 0) goto Label_254; // 0xe4 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0xe5 PushV
	var_68_object = var_1_object; // 0xe6 MovT
	var_69_object = var_0_object; // 0xe7 MovT
	func_1139(); // 0xe8 NEW_2
	var_72_string = ""; // 0xea PushV
	var_72_string = "Agression"; // 0xeb MovS
	func_169(var_8_bool, var_72_string); // 0xec NEW_2
	var_89_int = 525808; // 0xee PushI
	SetMessage(var_89_int); // 0xef TObjFunc
	ClearReplies(); // 0xf1 TObjFunc
	var_90_int = 542324; // 0xf3 PushI
	var_91_int = 44685; // 0xf4 PushI
	var_92_int = 44683; // 0xf5 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0xf6 TObjFunc
	var_93_int = 542325; // 0xf8 PushI
	var_94_int = 44686; // 0xf9 PushI
	var_95_int = 44684; // 0xfa PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xfb TObjFunc
	return 0; // 0xfd Return
	
Label_254:
	var_96_string = ""; // 0xfe PushV
	var_96_string = "Smile"; // 0xff MovS
	func_169(var_8_bool, var_96_string); // 0x100 NEW_2
	var_97_int = 525811; // 0x102 PushI
	SetMessage(var_97_int); // 0x103 TObjFunc
	ClearReplies(); // 0x105 TObjFunc
	var_98_int = 525812; // 0x107 PushI
	var_99_int = -1; // 0x108 PushI
	var_100_int = 27118; // 0x109 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x10a TObjFunc
	var_101_int = 529232; // 0x10c PushI
	var_102_int = -1; // 0x10d PushI
	var_103_int = 30686; // 0x10e PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x10f TObjFunc
	return 0; // 0x111 Return
	
Label_274:
	var_104_int = 44686; // 0x112 PushI
	var_105_bool = var_7_cvector == var_104_int; // 0x113 Eq
	if(var_105_bool == 0) goto Label_297; // 0x114 JumpB
	var_106_string = ""; // 0x115 PushV
	var_106_string = "Agression"; // 0x116 MovS
	func_169(var_8_bool, var_106_string); // 0x117 NEW_2
	var_107_int = 542327; // 0x119 PushI
	SetMessage(var_107_int); // 0x11a TObjFunc
	ClearReplies(); // 0x11c TObjFunc
	var_108_int = 542330; // 0x11e PushI
	var_109_int = 44690; // 0x11f PushI
	var_110_int = 44689; // 0x120 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x121 TObjFunc
	var_111_int = 542332; // 0x123 PushI
	var_112_int = 44692; // 0x124 PushI
	var_113_int = 44691; // 0x125 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x126 TObjFunc
	return 0; // 0x128 Return
	
Label_297:
	var_114_int = 44692; // 0x129 PushI
	var_115_bool = var_7_cvector == var_114_int; // 0x12a Eq
	if(var_115_bool == 0) goto Label_315; // 0x12b JumpB
	var_116_string = ""; // 0x12c PushV
	var_116_string = "Sorrow"; // 0x12d MovS
	func_169(var_8_bool, var_116_string); // 0x12e NEW_2
	var_117_int = 542333; // 0x130 PushI
	SetMessage(var_117_int); // 0x131 TObjFunc
	ClearReplies(); // 0x133 TObjFunc
	var_118_int = 542334; // 0x135 PushI
	var_119_int = 44694; // 0x136 PushI
	var_120_int = 44693; // 0x137 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x138 TObjFunc
	return 0; // 0x13a Return
	
Label_315:
	var_121_int = 44694; // 0x13b PushI
	var_122_bool = var_7_cvector == var_121_int; // 0x13c Eq
	if(var_122_bool == 0) goto Label_338; // 0x13d JumpB
	var_123_string = ""; // 0x13e PushV
	var_123_string = "Neutral"; // 0x13f MovS
	func_169(var_8_bool, var_123_string); // 0x140 NEW_2
	var_124_int = 542335; // 0x142 PushI
	SetMessage(var_124_int); // 0x143 TObjFunc
	ClearReplies(); // 0x145 TObjFunc
	var_125_int = 542336; // 0x147 PushI
	var_126_int = 44697; // 0x148 PushI
	var_127_int = 44695; // 0x149 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x14a TObjFunc
	var_128_int = 542337; // 0x14c PushI
	var_129_int = 44697; // 0x14d PushI
	var_130_int = 44696; // 0x14e PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x14f TObjFunc
	return 0; // 0x151 Return
	
Label_338:
	var_131_int = 44697; // 0x152 PushI
	var_132_bool = var_7_cvector == var_131_int; // 0x153 Eq
	if(var_132_bool == 0) goto Label_361; // 0x154 JumpB
	var_133_string = ""; // 0x155 PushV
	var_133_string = "Agression"; // 0x156 MovS
	func_169(var_8_bool, var_133_string); // 0x157 NEW_2
	var_134_int = 542338; // 0x159 PushI
	SetMessage(var_134_int); // 0x15a TObjFunc
	ClearReplies(); // 0x15c TObjFunc
	var_135_int = 542339; // 0x15e PushI
	var_136_int = -1; // 0x15f PushI
	var_137_int = 44698; // 0x160 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x161 TObjFunc
	var_138_int = 542340; // 0x163 PushI
	var_139_int = 44690; // 0x164 PushI
	var_140_int = 44700; // 0x165 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x166 TObjFunc
	return 0; // 0x168 Return
	
Label_361:
	var_141_int = 44690; // 0x169 PushI
	var_142_bool = var_7_cvector == var_141_int; // 0x16a Eq
	if(var_142_bool == 0) goto Label_384; // 0x16b JumpB
	var_143_string = ""; // 0x16c PushV
	var_143_string = "Doubt"; // 0x16d MovS
	func_169(var_8_bool, var_143_string); // 0x16e NEW_2
	var_144_int = 542331; // 0x170 PushI
	SetMessage(var_144_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_145_int = 542341; // 0x175 PushI
	var_146_int = 44704; // 0x176 PushI
	var_147_int = 44702; // 0x177 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x178 TObjFunc
	var_148_int = 542342; // 0x17a PushI
	var_149_int = 44704; // 0x17b PushI
	var_150_int = 44703; // 0x17c PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x17d TObjFunc
	return 0; // 0x17f Return
	
Label_384:
	var_151_int = 44704; // 0x180 PushI
	var_152_bool = var_7_cvector == var_151_int; // 0x181 Eq
	if(var_152_bool == 0) goto Label_402; // 0x182 JumpB
	var_153_string = ""; // 0x183 PushV
	var_153_string = "Neutral"; // 0x184 MovS
	func_169(var_8_bool, var_153_string); // 0x185 NEW_2
	var_154_int = 542343; // 0x187 PushI
	SetMessage(var_154_int); // 0x188 TObjFunc
	ClearReplies(); // 0x18a TObjFunc
	var_155_int = 525810; // 0x18c PushI
	var_156_int = -1; // 0x18d PushI
	var_157_int = 27116; // 0x18e PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_158_int = 44685; // 0x192 PushI
	var_159_bool = var_7_cvector == var_158_int; // 0x193 Eq
	if(var_159_bool == 0) goto Label_425; // 0x194 JumpB
	var_160_string = ""; // 0x195 PushV
	var_160_string = "Sorrow"; // 0x196 MovS
	func_169(var_8_bool, var_160_string); // 0x197 NEW_2
	var_161_int = 542326; // 0x199 PushI
	SetMessage(var_161_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_162_int = 542328; // 0x19e PushI
	var_163_int = 44688; // 0x19f PushI
	var_164_int = 44687; // 0x1a0 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x1a1 TObjFunc
	var_165_int = 542344; // 0x1a3 PushI
	var_166_int = 44688; // 0x1a4 PushI
	var_167_int = 44706; // 0x1a5 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x1a6 TObjFunc
	return 0; // 0x1a8 Return
	
Label_425:
	var_168_int = 44688; // 0x1a9 PushI
	var_169_bool = var_7_cvector == var_168_int; // 0x1aa Eq
	if(var_169_bool == 0) goto Label_443; // 0x1ab JumpB
	var_170_string = ""; // 0x1ac PushV
	var_170_string = "Neutral"; // 0x1ad MovS
	func_169(var_8_bool, var_170_string); // 0x1ae NEW_2
	var_171_int = 542329; // 0x1b0 PushI
	SetMessage(var_171_int); // 0x1b1 TObjFunc
	ClearReplies(); // 0x1b3 TObjFunc
	var_172_int = 525809; // 0x1b5 PushI
	var_173_int = -1; // 0x1b6 PushI
	var_174_int = 27115; // 0x1b7 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x1b8 TObjFunc
	return 0; // 0x1ba Return
	
Label_443:
	var_3_string = 1; // 0x1bb TMovB
	var_175_bool = 0; // 0x1bc PushV
	func_1249(var_175_bool); // 0x1bd NEW_2
	if(var_175_bool == 0) goto Label_451; // 0x1bf JumpB
	lshStopAnimation(); // 0x1c0 Func
	goto Label_453; // 0x1c2 Jump
	
Label_453:
	return 0; // 0x1c5 Return
	
Label_451:
	StopAnimation(); // 0x1c3 Func
	
Label_455:
	return 0; // 0x1c7 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1d4 PushV
	var_10_string = "cleanup"; // 0x1d5 PushS
	var_11_bool = var_7_string == var_10_string; // 0x1d6 Eq
	if(var_11_bool == 0) goto Label_483; // 0x1d7 JumpB
	var_1_object = 1; // 0x1d8 TMovB
	IsLoaded(var_9_bool); // 0x1d9 Func
	var_12_bool = var_9_bool == 0; // 0x1db Not
	if(var_12_bool == 0) goto Label_482; // 0x1dc JumpB
	var_13_object = Obj(); // 0x1dd PushV
	func_1067(var_13_object); // 0x1de NEW_2
	RemoveActor(var_13_object); // 0x1e0 Func
	
Label_482:
	goto Label_487; // 0x1e2 Jump
	
Label_487:
	return 2; // 0x1e7 Return
	
Label_483:
	var_16_string = "restore"; // 0x1e3 PushS
	var_17_bool = var_7_string == var_16_string; // 0x1e4 Eq
	if(var_17_bool == 0) goto Label_487; // 0x1e5 JumpB
	var_1_object = 0; // 0x1e6 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x1e8 PushT
	if(var_7_object == 0) goto Label_497; // 0x1e9 JumpB
	var_8_object = Obj(); // 0x1ea PushV
	func_1067(var_8_object); // 0x1eb NEW_2
	RemoveActor(var_8_object); // 0x1ed Func
	Hold(); // 0x1ef Func
	
Label_497:
	func_612(); // 0x1f2 NEW_2
	return 0; // 0x1f4 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_627(); // 0x1f6 NEW_2
	return 0; // 0x1f8 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x23f PushI
	var_9_bool = var_7_int == var_8_int; // 0x240 Eq
	if(var_9_bool == 0) goto Label_611; // 0x241 JumpB
	func_570(); // 0x243 NEW_2
	var_11_bool = 0; // 0x245 PushV
	var_11_bool = 0; // 0x246 MovB
	var_12_bool = 0; // 0x247 PushV
	func_784(var_12_bool); // 0x248 NEW_2
	if(var_12_bool == 0) goto Label_592; // 0x24a JumpB
	var_15_bool = 0; // 0x24b PushV
	func_539(var_15_bool); // 0x24c NEW_2
	if(var_15_bool == 0) goto Label_592; // 0x24e JumpB
	var_11_bool = 1; // 0x24f MovB
	
Label_592:
	if(var_11_bool == 0) goto Label_605; // 0x250 JumpB
	var_32_bool = 0; // 0x251 PushV
	func_519(var_32_bool); // 0x252 NEW_2
	if(var_32_bool == 0) goto Label_604; // 0x254 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x255 PushV
	var_53_object = Obj(); // 0x256 PushV
	func_1067(var_53_object); // 0x257 NEW_2
	var_52_object = var_53_object; // 0x258 Mov
	func_934(var_52_object); // 0x25a NEW_2
	
Label_604:
	goto Label_611; // 0x25c Jump
	
Label_611:
	return 0; // 0x263 Return
	
Label_605:
	func_534(var_7_int); // 0x25e NEW_2
	func_561(); // 0x261 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x281 Push
	if(var_8_bool == 0) goto Label_647; // 0x282 JumpB
	func_561(); // 0x284 NEW_2
	goto Label_651; // 0x286 Jump
	
Label_651:
	return 0; // 0x28b Return
	
Label_647:
	var_14_string = ""; // 0x287 PushV
	var_14_string = "Neutral"; // 0x288 MovS
	func_1014(var_14_string); // 0x289 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x28c PushV
	IsOverrideActive(var_9_bool); // 0x28d Func
	var_10_bool = var_9_bool == 0; // 0x28f Not
	if(var_10_bool == 0) goto Label_680; // 0x290 JumpB
	EventDisable(0); // 0x291 EventDisable
	func_752(); // 0x293 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x295 PushV
	var_12_object = var_7_object; // 0x296 Mov
	func_775(var_12_object); // 0x297 NEW_2
	EventEnable(0); // 0x299 EventEnable
	var_25_object = Obj(); // 0x29a PushV
	var_25_object = var_7_object; // 0x29b Mov
	func_456(var_25_object); // 0x29c NEW_2
	var_271_string = ""; // 0x29e PushV
	var_271_string = "Neutral"; // 0x29f MovS
	func_1014(var_271_string); // 0x2a0 NEW_2
	func_570(); // 0x2a3 NEW_2
	func_561(); // 0x2a6 NEW_2
	
Label_680:
	return 2; // 0x2a8 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_505(var_6_bool); // 0x1d1 NEW_2
	return 0; // 0x1d3 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_789(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1243(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1241(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1245(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1247(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1224(var_89_int); // 0x22 NEW_2
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
	func_1067(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_876(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_262_bool = var_36_bool == 0; // 0x3f Not
	if(var_262_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_263_object = Obj(); // 0x46 PushV
	var_263_object = var_27_object; // 0x47 Mov
	func_858(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1145(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x47a PushV
	var_203_string = "ook4BurahIndoor1"; // 0x47b MovS
	func_1083(var_202_int, var_203_string); // 0x47c NEW_2
	var_206_int = 0; // 0x47e PushI
	var_207_bool = var_202_int == var_206_int; // 0x47f Eq
	if(var_207_bool == 0) goto Label_1155; // 0x480 JumpB
	var_200_bool = 1; // 0x481 MovB
	return 0; // 0x482 Return
	
Label_1155:
	var_200_bool = 0; // 0x483 MovB
	return 0; // 0x484 Return
}


func_1157()
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x485 PushV
	var_48_int = 506; // 0x486 PushI
	var_49_int = 2; // 0x487 PushI
	var_50_int = 529270; // 0x488 PushI
	CreateDiaryEntry(var_47_object, var_48_int, var_49_int, var_50_int); // 0x489 Func
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; // 0x48b PushV
	var_52_object = var_47_object; // 0x48c Mov
	var_53_int = 384; // 0x48d MovI
	func_1196(var_51_bool, var_52_object, var_53_int); // 0x48e NEW_2
	return 2; // 0x490 Return
}


func_1030(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; // 0x406 PushV
	lshHasAnimation(var_223_bool, var_216_string); // 0x407 Func
	var_226_bool = var_223_bool; // 0x409 Push
	if(var_226_bool == 0) goto Label_1040; // 0x40a JumpB
	lshGetAnimTimes(var_216_string, var_224_float, var_225_float); // 0x40b Func
	lshPlayAnimation(var_224_float, var_225_float, var_217_bool); // 0x40d Func
	goto Label_1044; // 0x40f Jump
	
Label_1044:
	return 6; // 0x414 Return
	
Label_1040:
	var_227_string = "Can't find lsh animation : "; // 0x410 PushS
	var_228_int = var_227_string + var_216_string; // 0x411 Add
	Trace(var_228_int); // 0x412 Func
}


func_519(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x207 PushV
	var_35_string = "player"; // 0x208 PushS
	FindActor(var_34_object, var_35_string); // 0x209 Func
	var_36_bool = var_34_object == 0; // 0x20b Not
	if(var_36_bool == 0) goto Label_527; // 0x20c JumpB
	var_32_bool = 0; // 0x20d MovB
	return 2; // 0x20e Return
	
Label_527:
	var_37_bool = 0; var_38_object = Obj(); // 0x20f PushV
	var_38_object = var_34_object; // 0x210 Mov
	func_775(var_38_object); // 0x211 NEW_2
	var_32_bool = var_37_bool; // 0x212 Mov
	return 2; // 0x214 Return
}


func_775(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x307 PushV
	GetPosition(var_14_cvector); // 0x308 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x30a PushV
	var_16_cvector = var_14_cvector; // 0x30b Mov
	func_765(var_15_bool, var_16_cvector); // 0x30c NEW_2
	var_11_bool = var_15_bool; // 0x30d Mov
	return 2; // 0x30f Return
}


func_784(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x310 PushV
	IsLoaded(var_9_bool); // 0x311 Func
	var_7_bool = var_9_bool; // 0x313 Mov
	return 2; // 0x314 Return
}


func_1170()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x492 PushV
	var_19_int = 505; // 0x493 PushI
	var_20_int = 2; // 0x494 PushI
	var_21_int = 529269; // 0x495 PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x496 Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x498 PushV
	var_23_object = var_18_object; // 0x499 Mov
	var_24_int = 384; // 0x49a MovI
	func_1196(var_22_bool, var_23_object, var_24_int); // 0x49b NEW_2
	return 2; // 0x49d Return
}


func_789(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x315 PushV
	GetPosition(var_50_cvector); // 0x316 ObjFunc
	GetEyesHeight(var_49_float); // 0x318 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x31a PushE
	var_58_float = var_58_float + var_49_float; // 0x31b Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x31c PopE
	GetPosition(var_51_cvector); // 0x31d Func
	GetEyesHeight(var_49_float); // 0x31f Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x321 PushE
	var_59_float = var_59_float + var_49_float; // 0x322 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x323 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x324 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x325 PushE
	var_60_float = 0; // 0x326 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x327 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x328 Or
	var_62_float = sqrt(var_61_int); // 0x329 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x32a Div2
	var_53_cvector = -var_52_cvector; // 0x32b Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x32c Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x32d PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x32e PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x32f Xor2
	func_1073(var_64_cvector, var_65_cvector); // 0x330 NEW_2
	var_72_int = 25; // 0x332 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x333 Mult
	var_74_int = var_63_float + var_73_float; // 0x334 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x335 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x336 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x337 Add2
	IsOverrideActive(var_56_bool); // 0x338 Func
	var_76_bool = var_56_bool; // 0x33a Push
	if(var_76_bool == 0) goto Label_830; // 0x33b JumpB
	var_37_bool = 0; // 0x33c MovB
	return 18; // 0x33d Return
	
Label_830:
	StopWorld(); // 0x33e Func
	var_77_bool = 1; // 0x340 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x341 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x343 PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x344 PushE
	Rotate(var_78_float, var_79_float); // 0x345 Func
	var_80_bool = 0; // 0x347 PushV
	func_1249(var_80_bool); // 0x348 NEW_2
	if(var_80_bool == 0) goto Label_844; // 0x34a JumpB
	goto Label_852; // 0x34b Jump
	
Label_852:
	CameraWaitForPlayFinish(); // 0x354 Func
	ResumeWorld(); // 0x356 Func
	var_37_bool = 1; // 0x358 MovB
	return 18; // 0x359 Return
	
Label_844:
	var_81_string = "head"; // 0x34c PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x34d Func
	var_82_bool = var_57_bool; // 0x34f Push
	if(var_82_bool == 0) goto Label_852; // 0x350 JumpB
	var_83_string = "head"; // 0x351 PushS
	LookAsyncCamera(var_83_string); // 0x352 Func
}


func_534(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x216 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x217 PushE
	RotateAsync(var_84_float, var_85_float); // 0x218 Func
	return 0; // 0x21a Return
}


func_1045(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x415 PushV
	var_136_bool = 0; // 0x416 PushV
	func_1249(var_136_bool); // 0x417 NEW_2
	if(var_136_bool == 0) goto Label_1058; // 0x419 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x41a Func
	var_137_bool = var_135_bool; // 0x41c Push
	if(var_137_bool == 0) goto Label_1058; // 0x41d JumpB
	lshPlaySpeech(var_133_string); // 0x41e Func
	var_132_bool = 1; // 0x420 MovB
	return 2; // 0x421 Return
	
Label_1058:
	var_132_bool = 0; // 0x422 MovB
	return 2; // 0x423 Return
}


func_539(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x21b PushV
	var_20_string = "player"; // 0x21c PushS
	FindActor(var_18_object, var_20_string); // 0x21d Func
	var_21_bool = var_18_object == 0; // 0x21f Not
	if(var_21_bool == 0) goto Label_547; // 0x220 JumpB
	var_15_bool = 0; // 0x221 MovB
	return 4; // 0x222 Return
	
Label_547:
	var_22_float = 0; var_23_object = Obj(); // 0x223 PushV
	var_23_object = var_18_object; // 0x224 Mov
	func_757(var_23_object); // 0x225 NEW_2
	var_30_float = 90000.0; // 0x227 PushF
	var_31_bool = var_22_float > var_30_float; // 0x228 GT
	if(var_31_bool == 0) goto Label_556; // 0x229 JumpB
	var_15_bool = 0; // 0x22a MovB
	return 4; // 0x22b Return
	
Label_556:
	CanSee(var_19_bool, var_18_object); // 0x22c Func
	var_15_bool = var_19_bool; // 0x22e Mov
	return 4; // 0x22f Return
}


func_1183(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x49f PushV
	GetDiaryRoot(var_33_object); // 0x4a0 Func
	var_34_bool = var_33_object == 0; // 0x4a2 Not
	if(var_34_bool == 0) goto Label_1193; // 0x4a3 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x4a4 PushS
	Trace(var_35_string); // 0x4a5 Func
	var_31_object = 0; // 0x4a7 MovB
	return 2; // 0x4a8 Return
	
Label_1193:
	var_31_object = var_33_object; // 0x4a9 Mov
	return 2; // 0x4aa Return
}


func_1060()
{
	var_10_bool = 0; // 0x424 PushV
	func_1249(var_10_bool); // 0x425 NEW_2
	if(var_10_bool == 0) goto Label_1066; // 0x427 JumpB
	lshStopSpeech(); // 0x428 Func
	
Label_1066:
	return 0; // 0x42a Return
}


func_934(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x3a6 PushV
	var_116_string = "c"; // 0x3a7 MovS
	var_117_int = 0; // 0x3a8 MovI
	
Label_937:
	var_121_int = 1; // 0x3a9 PushI
	if(var_121_int == 0) goto Label_950; // 0x3aa JumpB
	var_122_int = 1; // 0x3ab PushI
	var_123_int = var_117_int + var_122_int; // 0x3ac Add
	var_124_int = var_116_string + var_123_int; // 0x3ad Add
	HasProperty(var_124_int, var_118_bool); // 0x3ae ObjFunc
	var_125_bool = var_118_bool == 0; // 0x3b0 Not
	if(var_125_bool == 0) goto Label_947; // 0x3b1 JumpB
	goto Label_950; // 0x3b2 Jump
	
Label_950:
	var_126_bool = var_117_int == 0; // 0x3b6 Not
	if(var_126_bool == 0) goto Label_954; // 0x3b7 JumpB
	var_109_bool = 0; // 0x3b8 MovB
	return 10; // 0x3b9 Return
	
Label_954:
	var_119_int = 0; // 0x3ba MovI
	var_127_int = 1; // 0x3bb PushI
	var_128_bool = var_117_int > var_127_int; // 0x3bc GT
	if(var_128_bool == 0) goto Label_960; // 0x3bd JumpB
	irand(var_119_int, var_117_int); // 0x3be Func
	
Label_960:
	var_129_int = 1; // 0x3c0 PushI
	var_130_int = var_119_int + var_129_int; // 0x3c1 Add
	var_131_int = var_116_string + var_130_int; // 0x3c2 Add
	GetProperty(var_131_int, var_120_string); // 0x3c3 ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x3c5 PushV
	var_133_string = var_120_string; // 0x3c6 Mov
	func_1045(var_132_bool, var_133_string); // 0x3c7 NEW_2
	var_109_bool = var_132_bool; // 0x3c8 Mov
	return 10; // 0x3ca Return
	
Label_947:
	var_138_int = 1; // 0x3b3 PushI
	var_117_int = var_117_int + var_138_int; // 0x3b4 Add2
	goto Label_937; // 0x3b5 Jump
}


func_169(var_2_object, var_212_string)
{
	var_213_bool = 0; // 0xaa PushV
	func_1249(var_213_bool); // 0xab NEW_2
	var_214_bool = var_213_bool == 0; // 0xad Not
	if(var_214_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_215_bool = var_212_string == var_2_object; // 0xb0 Eq
	if(var_215_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_216_string = ""; var_217_bool = 0; // 0xb3 PushV
	var_216_string = var_212_string; // 0xb4 Mov
	var_218_string = ""; // 0xb5 PushS
	var_219_bool = var_212_string == var_218_string; // 0xb6 Eq
	if(var_219_bool == 0) goto Label_186; // 0xb7 JumpB
	var_217_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_1030(var_216_string, var_217_bool); // 0xbb NEW_2
	var_2_object = var_212_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_217_bool = 1; // 0xba MovB
}


func_681()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2a9 PushV
	WaitForAnimEnd(); // 0x2aa Func
	var_23_bool = 0; // 0x2ac PushV
	func_784(var_23_bool); // 0x2ad NEW_2
	var_24_bool = var_23_bool == 0; // 0x2af Not
	if(var_24_bool == 0) goto Label_690; // 0x2b0 JumpB
	return 12; // 0x2b1 Return
	
Label_690:
	var_25_int = 0; // 0x2b2 PushV
	func_1104(var_25_int); // 0x2b3 NEW_2
	var_17_int = var_25_int; // 0x2b4 Mov
	var_18_int = 0; // 0x2b6 MovI
	
Label_695:
	var_38_bool = 0; // 0x2b7 PushV
	var_38_bool = 0; // 0x2b8 MovB
	var_39_int = 5; // 0x2b9 PushI
	var_40_bool = var_18_int < var_39_int; // 0x2ba LT
	if(var_40_bool == 0) goto Label_705; // 0x2bb JumpB
	var_41_bool = 0; // 0x2bc PushV
	func_784(var_41_bool); // 0x2bd NEW_2
	if(var_41_bool == 0) goto Label_705; // 0x2bf JumpB
	var_38_bool = 1; // 0x2c0 MovB
	
Label_705:
	if(var_38_bool == 0) goto Label_747; // 0x2c1 JumpB
	var_42_bool = var_17_int == 0; // 0x2c2 Not
	if(var_42_bool == 0) goto Label_715; // 0x2c3 JumpB
	var_43_int = 3; // 0x2c4 PushI
	Sleep(var_43_int, var_19_bool); // 0x2c5 Func
	var_44_bool = var_19_bool == 0; // 0x2c7 Not
	if(var_44_bool == 0) goto Label_714; // 0x2c8 JumpB
	goto Label_747; // 0x2c9 Jump
	
Label_747:
	ResetAAS(); // 0x2eb Func
	return 12; // 0x2ed Return
	
Label_714:
	goto Label_736; // 0x2ca Jump
	
Label_736:
	var_45_bool = 0; // 0x2e0 PushV
	func_750(var_45_bool); // 0x2e1 NEW_2
	var_46_bool = var_45_bool == 0; // 0x2e3 Not
	if(var_46_bool == 0) goto Label_742; // 0x2e4 JumpB
	goto Label_747; // 0x2e5 Jump
	
Label_742:
	ResetAAS(); // 0x2e6 Func
	var_47_int = 1; // 0x2e8 PushI
	var_18_int = var_18_int + var_47_int; // 0x2e9 Add2
	goto Label_695; // 0x2ea Jump
	
Label_715:
	irand(var_20_int, var_17_int); // 0x2cb Func
	var_48_int = 5; // 0x2cd PushI
	irand(var_21_int, var_48_int); // 0x2ce Func
	var_49_int = 0; // 0x2d0 PushI
	var_50_bool = var_21_int != var_49_int; // 0x2d1 Neq
	if(var_50_bool == 0) goto Label_724; // 0x2d2 JumpB
	var_20_int = 0; // 0x2d3 MovI
	
Label_724:
	var_51_string = "all"; // 0x2d4 PushS
	var_52_string = ""; var_53_int = 0; // 0x2d5 PushV
	var_53_int = var_20_int; // 0x2d6 Mov
	func_1097(var_52_string, var_53_int); // 0x2d7 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2d9 Func
	WaitForAnimEnd(var_22_bool); // 0x2db Func
	var_54_bool = var_22_bool == 0; // 0x2dd Not
	if(var_54_bool == 0) goto Label_736; // 0x2de JumpB
	goto Label_747; // 0x2df Jump
}


func_1067(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x42b PushV
	self(var_102_object); // 0x42c Func
	var_100_object = var_102_object; // 0x42e Mov
	return 2; // 0x42f Return
}


func_1196(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x4ac PushV
	var_31_object = Obj(); // 0x4ad PushV
	func_1183(var_31_object); // 0x4ae NEW_2
	var_28_object = var_31_object; // 0x4af Mov
	Find(var_24_int, var_29_object); // 0x4b1 ObjFunc
	var_36_bool = var_29_object == 0; // 0x4b3 Not
	if(var_36_bool == 0) goto Label_1211; // 0x4b4 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x4b5 PushS
	var_38_int = var_37_string + var_24_int; // 0x4b6 Add
	Trace(var_38_int); // 0x4b7 Func
	var_22_bool = 0; // 0x4b9 MovB
	return 6; // 0x4ba Return
	
Label_1211:
	AddChild(var_23_object); // 0x4bb ObjFunc
	var_39_int = 7; // 0x4bd PushI
	SendWorldWndMessage(var_39_int); // 0x4be Func
	GetCategory(var_30_int); // 0x4c0 ObjFunc
	SetDiarySection(var_30_int); // 0x4c2 Func
	var_22_bool = 0; // 0x4c4 MovB
	return 6; // 0x4c5 Return
}


func_561()
{
	var_273_float = 0; var_274_float = 0; // 0x231 PushV
	var_275_int = 8; // 0x232 PushI
	var_276_int = 16; // 0x233 PushI
	rand(var_274_float, var_275_int, var_276_int); // 0x234 Func
	var_277_int = 10; // 0x236 PushI
	SetTimer(var_277_int, var_274_float); // 0x237 Func
	return 2; // 0x239 Return
}


func_1073(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x431 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x432 Or
	var_68_float = sqrt(var_69_int); // 0x433 Sqrt2
	var_70_float = 0.0; // 0x434 PushF
	var_71_bool = var_68_float < var_70_float; // 0x435 LT
	if(var_71_bool == 0) goto Label_1081; // 0x436 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x437 MovV
	return 2; // 0x438 Return
	
Label_1081:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x439 Div2
	return 2; // 0x43a Return
}


func_570()
{
	var_272_int = 10; // 0x23a PushI
	KillTimer(var_272_int); // 0x23b Func
	return 0; // 0x23d Return
}


func_1083(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x43b PushV
	GetVariable(var_203_string, var_205_int); // 0x43c Func
	var_202_int = var_205_int; // 0x43e Mov
	return 2; // 0x43f Return
}


func_1088(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x440 PushV
	GetGameTime(var_155_float); // 0x441 Func
	var_156_int = 1; // 0x443 PushI
	var_157_int = 0; // 0x444 PushV
	var_158_int = 24; // 0x445 PushI
	var_157_int = var_155_float / var_155_float; // 0x446 Div2
	var_153_int = var_156_int + var_157_int; // 0x447 Add2
	return 2; // 0x448 Return
}


func_1224(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x4c8 PushV
	var_92_string = "branch"; // 0x4c9 PushS
	GetVariable(var_92_string, var_91_int); // 0x4ca Func
	var_93_int = 0; // 0x4cc PushI
	var_94_bool = var_91_int == var_93_int; // 0x4cd Eq
	if(var_94_bool == 0) goto Label_1234; // 0x4ce JumpB
	var_89_int = 1; // 0x4cf MovI
	return 2; // 0x4d0 Return
	
Label_1234:
	var_95_int = 1; // 0x4d2 PushI
	var_96_bool = var_91_int == var_95_int; // 0x4d3 Eq
	if(var_96_bool == 0) goto Label_1239; // 0x4d4 JumpB
	var_89_int = 2; // 0x4d5 MovI
	return 2; // 0x4d6 Return
	
Label_1239:
	var_89_int = 3; // 0x4d7 MovI
	return 2; // 0x4d8 Return
}


func_456(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x1c9 PushV
	var_27_object = var_25_object; // 0x1ca Mov
	TaskCall(0); // 0x1cb TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x1cc NEW_2
	TaskReturn(); // 0x1cd TaskReturn
	return 0; // 0x1cf Return
}


func_1097(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x449 PushV
	var_34_string = "idle"; // 0x44a MovS
	var_35_int = var_32_int; // 0x44b Push
	if(var_35_int == 0) goto Label_1102; // 0x44c JumpB
	var_34_string = var_34_string + var_32_int; // 0x44d Add2
	
Label_1102:
	var_31_string = var_34_string; // 0x44e Mov
	return 2; // 0x44f Return
}


func_971(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x3cb PushV
	var_152_string = "d"; // 0x3cc PushS
	var_153_int = 0; // 0x3cd PushV
	func_1088(var_153_int); // 0x3ce NEW_2
	var_159_int = var_152_string + var_153_int; // 0x3d0 Add
	var_160_string = "m"; // 0x3d1 PushS
	var_147_string = var_159_int + var_160_string; // 0x3d2 Add2
	var_148_int = 0; // 0x3d3 MovI
	
Label_980:
	var_161_int = 1; // 0x3d4 PushI
	if(var_161_int == 0) goto Label_993; // 0x3d5 JumpB
	var_162_int = 1; // 0x3d6 PushI
	var_163_int = var_148_int + var_162_int; // 0x3d7 Add
	var_164_int = var_147_string + var_163_int; // 0x3d8 Add
	HasProperty(var_164_int, var_149_bool); // 0x3d9 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x3db Not
	if(var_165_bool == 0) goto Label_990; // 0x3dc JumpB
	goto Label_993; // 0x3dd Jump
	
Label_993:
	var_166_bool = var_148_int == 0; // 0x3e1 Not
	if(var_166_bool == 0) goto Label_997; // 0x3e2 JumpB
	var_140_bool = 0; // 0x3e3 MovB
	return 10; // 0x3e4 Return
	
Label_997:
	var_150_int = 0; // 0x3e5 MovI
	var_167_int = 1; // 0x3e6 PushI
	var_168_bool = var_148_int > var_167_int; // 0x3e7 GT
	if(var_168_bool == 0) goto Label_1003; // 0x3e8 JumpB
	irand(var_150_int, var_148_int); // 0x3e9 Func
	
Label_1003:
	var_169_int = 1; // 0x3eb PushI
	var_170_int = var_150_int + var_169_int; // 0x3ec Add
	var_171_int = var_147_string + var_170_int; // 0x3ed Add
	GetProperty(var_171_int, var_151_string); // 0x3ee ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x3f0 PushV
	var_173_string = var_151_string; // 0x3f1 Mov
	func_1045(var_172_bool, var_173_string); // 0x3f2 NEW_2
	var_140_bool = var_172_bool; // 0x3f3 Mov
	return 10; // 0x3f5 Return
	
Label_990:
	var_174_int = 1; // 0x3de PushI
	var_148_int = var_148_int + var_174_int; // 0x3df Add2
	goto Label_980; // 0x3e0 Jump
}


func_1104(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x450 PushV
	var_28_int = 0; // 0x451 MovI
	
Label_1106:
	var_30_string = "all"; // 0x452 PushS
	var_31_string = ""; var_32_int = 0; // 0x453 PushV
	var_32_int = var_28_int; // 0x454 Mov
	func_1097(var_31_string, var_32_int); // 0x455 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x457 Func
	var_36_bool = var_29_bool == 0; // 0x459 Not
	if(var_36_bool == 0) goto Label_1116; // 0x45a JumpB
	goto Label_1119; // 0x45b Jump
	
Label_1119:
	var_25_int = var_28_int; // 0x45f Mov
	return 4; // 0x460 Return
	
Label_1116:
	var_37_int = 1; // 0x45c PushI
	var_28_int = var_28_int + var_37_int; // 0x45d Add2
	goto Label_1106; // 0x45e Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_139; // 0x56 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x57 PushV
	var_201_object = var_1_object; // 0x58 MovT
	func_1145(var_201_object); // 0x59 NEW_2
	if(var_200_bool == 0) goto Label_117; // 0x5b JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0x5c PushV
	var_208_object = var_1_object; // 0x5d MovT
	var_209_object = var_0_object; // 0x5e MovT
	func_1139(); // 0x5f NEW_2
	var_212_string = ""; // 0x61 PushV
	var_212_string = "Agression"; // 0x62 MovS
	func_169(var_194_object, var_212_string); // 0x63 NEW_2
	var_229_int = 525808; // 0x65 PushI
	SetMessage(var_229_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_230_int = 542324; // 0x6a PushI
	var_231_int = 44685; // 0x6b PushI
	var_232_int = 44683; // 0x6c PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x6d TObjFunc
	var_233_int = 542325; // 0x6f PushI
	var_234_int = 44686; // 0x70 PushI
	var_235_int = 44684; // 0x71 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x72 TObjFunc
	goto Label_139; // 0x74 Jump
	
Label_139:
	var_236_bool = 0; // 0x8b PushV
	func_1249(var_236_bool); // 0x8c NEW_2
	if(var_236_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_237_string = var_3_string; // 0x91 PushT
	if(var_237_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_238_string = ""; // 0x94 PushV
	var_238_string = var_2_object; // 0x95 MovT
	func_1014(var_238_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_249_string = "all"; // 0x9a PushS
	var_250_string = "idle"; // 0x9b PushS
	PlayAnimation(var_249_string, var_250_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_251_string = var_3_string; // 0xa0 PushT
	if(var_251_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_252_string = "all"; // 0xa3 PushS
	var_253_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_252_string, var_253_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_117:
	var_254_string = ""; // 0x75 PushV
	var_254_string = "Smile"; // 0x76 MovS
	func_169(var_194_object, var_254_string); // 0x77 NEW_2
	var_255_int = 525811; // 0x79 PushI
	SetMessage(var_255_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_256_int = 525812; // 0x7e PushI
	var_257_int = -1; // 0x7f PushI
	var_258_int = 27118; // 0x80 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x81 TObjFunc
	var_259_int = 529232; // 0x83 PushI
	var_260_int = -1; // 0x84 PushI
	var_261_int = 30686; // 0x85 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_1241(var_86_int)
{
	var_86_int = 515592; // 0x4d9 MovI
	return 0; // 0x4da Return
}


func_858()
{
	var_264_bool = 0; var_265_bool = 0; // 0x35a PushV
	var_266_bool = 1; // 0x35b PushB
	CameraSwitchToNormal(var_266_bool); // 0x35c Func
	var_267_bool = 0; // 0x35e PushV
	func_1249(var_267_bool); // 0x35f NEW_2
	if(var_267_bool == 0) goto Label_867; // 0x361 JumpB
	goto Label_875; // 0x362 Jump
	
Label_875:
	return 2; // 0x36b Return
	
Label_867:
	var_268_string = "head"; // 0x363 PushS
	HasAnimationTrack(var_265_bool, var_268_string); // 0x364 Func
	var_269_bool = var_265_bool; // 0x366 Push
	if(var_269_bool == 0) goto Label_875; // 0x367 JumpB
	var_270_string = "head"; // 0x368 PushS
	UnlookAsync(var_270_string); // 0x369 Func
}


func_1243(var_85_int)
{
	var_85_int = 511961; // 0x4db MovI
	return 0; // 0x4dc Return
}


func_1245(var_87_string)
{
	var_87_string = "ui/NPC_Burah.png"; // 0x4dd MovS
	return 0; // 0x4de Return
}


func_1247(var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png"; // 0x4df MovS
	return 0; // 0x4e0 Return
}


func_1249(var_80_bool)
{
	var_80_bool = 1; // 0x4e1 MovB
	return 0; // 0x4e2 Return
}


func_1121()
{
	var_15_string = "k4q03"; // 0x462 PushS
	var_16_int = 3; // 0x463 PushI
	SetVariable(var_15_string, var_16_int); // 0x464 Func
	func_1170(); // 0x467 NEW_2
	return 0; // 0x469 Return
}


func_612()
{
	func_752(); // 0x265 NEW_2
	func_570(); // 0x268 NEW_2
	lshStopSpeech(); // 0x26a Func
	lshStopAnimation(); // 0x26c Func
	StopAsync(); // 0x26e Func
	Hold(); // 0x270 Func
	return 0; // 0x272 Return
}


func_1130()
{
	var_44_string = "k4q03"; // 0x46b PushS
	var_45_int = 4; // 0x46c PushI
	SetVariable(var_44_string, var_45_int); // 0x46d Func
	func_1157(); // 0x470 NEW_2
	return 0; // 0x472 Return
}


func_876(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x36c PushV
	var_107_string = "voice_common"; // 0x36d PushS
	GetVariable(var_107_string, var_105_int); // 0x36e Func
	var_108_int = var_105_int; // 0x370 Push
	if(var_108_int == 0) goto Label_914; // 0x371 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x372 PushV
	var_110_object = var_99_object; // 0x373 Mov
	func_934(var_110_object); // 0x374 NEW_2
	var_139_bool = var_109_bool == 0; // 0x376 Not
	if(var_139_bool == 0) goto Label_896; // 0x377 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x378 PushV
	var_141_object = var_99_object; // 0x379 Mov
	func_971(var_141_object); // 0x37a NEW_2
	var_175_bool = var_140_bool == 0; // 0x37c Not
	if(var_175_bool == 0) goto Label_896; // 0x37d JumpB
	var_98_bool = 0; // 0x37e MovB
	return 4; // 0x37f Return
	
Label_896:
	var_176_int = 2; // 0x380 PushI
	irand(var_106_int, var_176_int); // 0x381 Func
	var_177_int = var_106_int; // 0x383 Push
	if(var_177_int == 0) goto Label_909; // 0x384 JumpB
	var_178_string = "voice_common"; // 0x385 PushS
	var_179_int = 1; // 0x386 PushI
	var_180_int = var_105_int + var_179_int; // 0x387 Add
	var_181_int = 3; // 0x388 PushI
	var_182_int = var_180_int / var_181_int; // 0x389 Mod
	SetVariable(var_178_string, var_182_int); // 0x38a Func
	goto Label_913; // 0x38c Jump
	
Label_913:
	goto Label_932; // 0x391 Jump
	
Label_932:
	var_98_bool = 1; // 0x3a4 MovB
	return 4; // 0x3a5 Return
	
Label_909:
	var_183_string = "voice_common"; // 0x38d PushS
	var_184_int = 0; // 0x38e PushI
	SetVariable(var_183_string, var_184_int); // 0x38f Func
	
Label_914:
	var_185_bool = 0; var_186_object = Obj(); // 0x392 PushV
	var_186_object = var_99_object; // 0x393 Mov
	func_971(var_186_object); // 0x394 NEW_2
	var_187_bool = var_185_bool == 0; // 0x396 Not
	if(var_187_bool == 0) goto Label_928; // 0x397 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x398 PushV
	var_189_object = var_99_object; // 0x399 Mov
	func_934(var_189_object); // 0x39a NEW_2
	var_190_bool = var_188_bool == 0; // 0x39c Not
	if(var_190_bool == 0) goto Label_928; // 0x39d JumpB
	var_98_bool = 0; // 0x39e MovB
	return 4; // 0x39f Return
	
Label_928:
	var_191_string = "voice_common"; // 0x3a0 PushS
	var_192_int = 1; // 0x3a1 PushI
	SetVariable(var_191_string, var_192_int); // 0x3a2 Func
}


func_750(var_45_bool)
{
	var_45_bool = 1; // 0x2ee MovB
	return 0; // 0x2ef Return
}


func_752()
{
	StopAnimation(); // 0x2f0 Func
	StopGroup0(); // 0x2f2 Func
	return 0; // 0x2f4 Return
}


func_1139()
{
	var_210_string = "ook4BurahIndoor1"; // 0x474 PushS
	var_211_int = 1; // 0x475 PushI
	SetVariable(var_210_string, var_211_int); // 0x476 Func
	return 0; // 0x478 Return
}


func_627()
{
	StopGroup0(); // 0x273 Func
	func_570(); // 0x276 NEW_2
	var_8_string = ""; // 0x278 PushV
	var_8_string = "Neutral"; // 0x279 MovS
	func_1014(var_8_string); // 0x27a NEW_2
	func_561(); // 0x27d NEW_2
	return 0; // 0x27f Return
}


func_757(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x2f5 PushV
	GetPosition(var_27_cvector); // 0x2f6 Func
	GetPosition(var_28_cvector); // 0x2f8 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2fa Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2fb Or2
	return 6; // 0x2fc Return
}


func_1014(var_238_string)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0; // 0x3f6 PushV
	lshHasAnimation(var_242_bool, var_238_string); // 0x3f7 Func
	var_245_bool = var_242_bool; // 0x3f9 Push
	if(var_245_bool == 0) goto Label_1025; // 0x3fa JumpB
	lshGetAnimTimes(var_238_string, var_243_float, var_244_float); // 0x3fb Func
	var_246_bool = 0; // 0x3fd PushB
	lshPlayAnimation(var_243_float, var_244_float, var_246_bool); // 0x3fe Func
	goto Label_1029; // 0x400 Jump
	
Label_1029:
	return 6; // 0x405 Return
	
Label_1025:
	var_247_string = "Can't find lsh animation : "; // 0x401 PushS
	var_248_int = var_247_string + var_238_string; // 0x402 Add
	Trace(var_248_int); // 0x403 Func
}


func_505(var_0_object)
{
	var_7_bool = 0; // 0x1f9 PushV
	func_784(var_7_bool); // 0x1fa NEW_2
	var_10_bool = var_7_bool == 0; // 0x1fc Not
	if(var_10_bool == 0) goto Label_512; // 0x1fd JumpB
	Hold(); // 0x1fe Func
	
Label_512:
	GetDirection(var_0_object); // 0x200 Func
	
Label_514:
	func_681(); // 0x203 NEW_2
	goto Label_514; // 0x205 Jump
}


func_765(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x2fd PushV
	GetPosition(var_20_cvector); // 0x2fe Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x300 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x301 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x302 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x303 Func
	var_15_bool = var_22_bool; // 0x305 Mov
	return 6; // 0x306 Return
}


