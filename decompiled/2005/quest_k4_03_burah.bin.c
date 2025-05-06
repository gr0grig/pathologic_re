task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc0 PushI
	if(var_9_int == 0) goto Label_455; // 0xc1 JumpB
	func_1058(); // 0xc3 NEW_2
	var_11_int = 27115; // 0xc5 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc6 Eq
	if(var_12_bool == 0) goto Label_205; // 0xc7 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc8 PushV
	var_13_object = var_1_object; // 0xc9 MovT
	var_14_object = var_0_object; // 0xca MovT
	func_1119(); // 0xcb NEW_2
	
Label_205:
	var_40_int = 27116; // 0xcd PushI
	var_41_bool = var_8_bool == var_40_int; // 0xce Eq
	if(var_41_bool == 0) goto Label_213; // 0xcf JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xd0 PushV
	var_42_object = var_1_object; // 0xd1 MovT
	var_43_object = var_0_object; // 0xd2 MovT
	func_1128(); // 0xd3 NEW_2
	
Label_213:
	var_54_int = 44698; // 0xd5 PushI
	var_55_bool = var_8_bool == var_54_int; // 0xd6 Eq
	if(var_55_bool == 0) goto Label_221; // 0xd7 JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0xd8 PushV
	var_56_object = var_1_object; // 0xd9 MovT
	var_57_object = var_0_object; // 0xda MovT
	func_1119(); // 0xdb NEW_2
	
Label_221:
	var_58_int = 27114; // 0xdd PushI
	var_59_bool = var_7_cvector == var_58_int; // 0xde Eq
	if(var_59_bool == 0) goto Label_274; // 0xdf JumpB
	var_60_bool = 0; var_61_object = Obj(); // 0xe0 PushV
	var_61_object = var_1_object; // 0xe1 MovT
	func_1143(var_61_object); // 0xe2 NEW_2
	if(var_60_bool == 0) goto Label_254; // 0xe4 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0xe5 PushV
	var_68_object = var_1_object; // 0xe6 MovT
	var_69_object = var_0_object; // 0xe7 MovT
	func_1137(); // 0xe8 NEW_2
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
	func_1247(var_175_bool); // 0x1bd NEW_2
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
	func_1065(var_13_object); // 0x1de NEW_2
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
	func_1065(var_8_object); // 0x1eb NEW_2
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
	func_1065(var_53_object); // 0x257 NEW_2
	var_52_object = var_53_object; // 0x258 Mov
	func_932(var_52_object); // 0x25a NEW_2
	
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
	func_1012(var_14_string); // 0x289 NEW_2
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
	var_269_string = ""; // 0x29e PushV
	var_269_string = "Neutral"; // 0x29f MovS
	func_1012(var_269_string); // 0x2a0 NEW_2
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
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1241(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1239(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1243(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1245(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1222(var_88_int); // 0x22 NEW_2
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
	func_1065(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_874(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_261_bool = var_36_bool == 0; // 0x3f Not
	if(var_261_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_262_object = Obj(); // 0x46 PushV
	var_262_object = var_27_object; // 0x47 Mov
	func_857(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1155()
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x483 PushV
	var_48_int = 506; // 0x484 PushI
	var_49_int = 2; // 0x485 PushI
	var_50_int = 529270; // 0x486 PushI
	CreateDiaryEntry(var_47_object, var_48_int, var_49_int, var_50_int); // 0x487 Func
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; // 0x489 PushV
	var_52_object = var_47_object; // 0x48a Mov
	var_53_int = 384; // 0x48b MovI
	func_1194(var_51_bool, var_52_object, var_53_int); // 0x48c NEW_2
	return 2; // 0x48e Return
}


func_1028(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x404 PushV
	lshHasAnimation(var_222_bool, var_215_string); // 0x405 Func
	var_225_bool = var_222_bool; // 0x407 Push
	if(var_225_bool == 0) goto Label_1038; // 0x408 JumpB
	lshGetAnimTimes(var_215_string, var_223_float, var_224_float); // 0x409 Func
	lshPlayAnimation(var_223_float, var_224_float, var_216_bool); // 0x40b Func
	goto Label_1042; // 0x40d Jump
	
Label_1042:
	return 6; // 0x412 Return
	
Label_1038:
	var_226_string = "Can't find lsh animation : "; // 0x40e PushS
	var_227_int = var_226_string + var_215_string; // 0x40f Add
	Trace(var_227_int); // 0x410 Func
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


func_1168()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x490 PushV
	var_19_int = 505; // 0x491 PushI
	var_20_int = 2; // 0x492 PushI
	var_21_int = 529269; // 0x493 PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x494 Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x496 PushV
	var_23_object = var_18_object; // 0x497 Mov
	var_24_int = 384; // 0x498 MovI
	func_1194(var_22_bool, var_23_object, var_24_int); // 0x499 NEW_2
	return 2; // 0x49b Return
}


func_1043(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x413 PushV
	var_135_bool = 0; // 0x414 PushV
	func_1247(var_135_bool); // 0x415 NEW_2
	if(var_135_bool == 0) goto Label_1056; // 0x417 JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x418 Func
	var_136_bool = var_134_bool; // 0x41a Push
	if(var_136_bool == 0) goto Label_1056; // 0x41b JumpB
	lshPlaySpeech(var_132_string); // 0x41c Func
	var_131_bool = 1; // 0x41e MovB
	return 2; // 0x41f Return
	
Label_1056:
	var_131_bool = 0; // 0x420 MovB
	return 2; // 0x421 Return
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
	func_1071(var_64_cvector, var_65_cvector); // 0x330 NEW_2
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
	CameraTransit(var_55_cvector, var_53_cvector); // 0x340 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x342 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x343 PushE
	Rotate(var_77_float, var_78_float); // 0x344 Func
	var_79_bool = 0; // 0x346 PushV
	func_1247(var_79_bool); // 0x347 NEW_2
	if(var_79_bool == 0) goto Label_843; // 0x349 JumpB
	goto Label_851; // 0x34a Jump
	
Label_851:
	CameraWaitForPlayFinish(); // 0x353 Func
	ResumeWorld(); // 0x355 Func
	var_37_bool = 1; // 0x357 MovB
	return 18; // 0x358 Return
	
Label_843:
	var_80_string = "head"; // 0x34b PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x34c Func
	var_81_bool = var_57_bool; // 0x34e Push
	if(var_81_bool == 0) goto Label_851; // 0x34f JumpB
	var_82_string = "head"; // 0x350 PushS
	LookAsyncCamera(var_82_string); // 0x351 Func
}


func_534(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x216 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x217 PushE
	RotateAsync(var_84_float, var_85_float); // 0x218 Func
	return 0; // 0x21a Return
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


func_1181(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x49d PushV
	GetDiaryRoot(var_33_object); // 0x49e Func
	var_34_bool = var_33_object == 0; // 0x4a0 Not
	if(var_34_bool == 0) goto Label_1191; // 0x4a1 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x4a2 PushS
	Trace(var_35_string); // 0x4a3 Func
	var_31_object = 0; // 0x4a5 MovB
	return 2; // 0x4a6 Return
	
Label_1191:
	var_31_object = var_33_object; // 0x4a7 Mov
	return 2; // 0x4a8 Return
}


func_1058()
{
	var_10_bool = 0; // 0x422 PushV
	func_1247(var_10_bool); // 0x423 NEW_2
	if(var_10_bool == 0) goto Label_1064; // 0x425 JumpB
	lshStopSpeech(); // 0x426 Func
	
Label_1064:
	return 0; // 0x428 Return
}


func_932(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x3a4 PushV
	var_115_string = "c"; // 0x3a5 MovS
	var_116_int = 0; // 0x3a6 MovI
	
Label_935:
	var_120_int = 1; // 0x3a7 PushI
	if(var_120_int == 0) goto Label_948; // 0x3a8 JumpB
	var_121_int = 1; // 0x3a9 PushI
	var_122_int = var_116_int + var_121_int; // 0x3aa Add
	var_123_int = var_115_string + var_122_int; // 0x3ab Add
	HasProperty(var_123_int, var_117_bool); // 0x3ac ObjFunc
	var_124_bool = var_117_bool == 0; // 0x3ae Not
	if(var_124_bool == 0) goto Label_945; // 0x3af JumpB
	goto Label_948; // 0x3b0 Jump
	
Label_948:
	var_125_bool = var_116_int == 0; // 0x3b4 Not
	if(var_125_bool == 0) goto Label_952; // 0x3b5 JumpB
	var_108_bool = 0; // 0x3b6 MovB
	return 10; // 0x3b7 Return
	
Label_952:
	var_118_int = 0; // 0x3b8 MovI
	var_126_int = 1; // 0x3b9 PushI
	var_127_bool = var_116_int > var_126_int; // 0x3ba GT
	if(var_127_bool == 0) goto Label_958; // 0x3bb JumpB
	irand(var_118_int, var_116_int); // 0x3bc Func
	
Label_958:
	var_128_int = 1; // 0x3be PushI
	var_129_int = var_118_int + var_128_int; // 0x3bf Add
	var_130_int = var_115_string + var_129_int; // 0x3c0 Add
	GetProperty(var_130_int, var_119_string); // 0x3c1 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x3c3 PushV
	var_132_string = var_119_string; // 0x3c4 Mov
	func_1043(var_131_bool, var_132_string); // 0x3c5 NEW_2
	var_108_bool = var_131_bool; // 0x3c6 Mov
	return 10; // 0x3c8 Return
	
Label_945:
	var_137_int = 1; // 0x3b1 PushI
	var_116_int = var_116_int + var_137_int; // 0x3b2 Add2
	goto Label_935; // 0x3b3 Jump
}


func_1065(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x429 PushV
	self(var_101_object); // 0x42a Func
	var_99_object = var_101_object; // 0x42c Mov
	return 2; // 0x42d Return
}


func_169(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0xaa PushV
	func_1247(var_212_bool); // 0xab NEW_2
	var_213_bool = var_212_bool == 0; // 0xad Not
	if(var_213_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_214_bool = var_211_string == var_2_object; // 0xb0 Eq
	if(var_214_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_215_string = ""; var_216_bool = 0; // 0xb3 PushV
	var_215_string = var_211_string; // 0xb4 Mov
	var_217_string = ""; // 0xb5 PushS
	var_218_bool = var_211_string == var_217_string; // 0xb6 Eq
	if(var_218_bool == 0) goto Label_186; // 0xb7 JumpB
	var_216_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_1028(var_215_string, var_216_bool); // 0xbb NEW_2
	var_2_object = var_211_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_216_bool = 1; // 0xba MovB
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
	func_1102(var_25_int); // 0x2b3 NEW_2
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
	func_1095(var_52_string, var_53_int); // 0x2d7 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2d9 Func
	WaitForAnimEnd(var_22_bool); // 0x2db Func
	var_54_bool = var_22_bool == 0; // 0x2dd Not
	if(var_54_bool == 0) goto Label_736; // 0x2de JumpB
	goto Label_747; // 0x2df Jump
}


func_1194(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x4aa PushV
	var_31_object = Obj(); // 0x4ab PushV
	func_1181(var_31_object); // 0x4ac NEW_2
	var_28_object = var_31_object; // 0x4ad Mov
	Find(var_24_int, var_29_object); // 0x4af ObjFunc
	var_36_bool = var_29_object == 0; // 0x4b1 Not
	if(var_36_bool == 0) goto Label_1209; // 0x4b2 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x4b3 PushS
	var_38_int = var_37_string + var_24_int; // 0x4b4 Add
	Trace(var_38_int); // 0x4b5 Func
	var_22_bool = 0; // 0x4b7 MovB
	return 6; // 0x4b8 Return
	
Label_1209:
	AddChild(var_23_object); // 0x4b9 ObjFunc
	var_39_int = 7; // 0x4bb PushI
	SendWorldWndMessage(var_39_int); // 0x4bc Func
	GetCategory(var_30_int); // 0x4be ObjFunc
	SetDiarySection(var_30_int); // 0x4c0 Func
	var_22_bool = 0; // 0x4c2 MovB
	return 6; // 0x4c3 Return
}


func_1071(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x42f PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x430 Or
	var_68_float = sqrt(var_69_int); // 0x431 Sqrt2
	var_70_float = 0.0; // 0x432 PushF
	var_71_bool = var_68_float < var_70_float; // 0x433 LT
	if(var_71_bool == 0) goto Label_1079; // 0x434 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x435 MovV
	return 2; // 0x436 Return
	
Label_1079:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x437 Div2
	return 2; // 0x438 Return
}


func_561()
{
	var_271_float = 0; var_272_float = 0; // 0x231 PushV
	var_273_int = 8; // 0x232 PushI
	var_274_int = 16; // 0x233 PushI
	rand(var_272_float, var_273_int, var_274_int); // 0x234 Func
	var_275_int = 10; // 0x236 PushI
	SetTimer(var_275_int, var_272_float); // 0x237 Func
	return 2; // 0x239 Return
}


func_1081(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x439 PushV
	GetVariable(var_202_string, var_204_int); // 0x43a Func
	var_201_int = var_204_int; // 0x43c Mov
	return 2; // 0x43d Return
}


func_570()
{
	var_270_int = 10; // 0x23a PushI
	KillTimer(var_270_int); // 0x23b Func
	return 0; // 0x23d Return
}


func_1086(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x43e PushV
	GetGameTime(var_154_float); // 0x43f Func
	var_155_int = 1; // 0x441 PushI
	var_156_int = 0; // 0x442 PushV
	var_157_int = 24; // 0x443 PushI
	var_156_int = var_154_float / var_154_float; // 0x444 Div2
	var_152_int = var_155_int + var_156_int; // 0x445 Add2
	return 2; // 0x446 Return
}


func_1222(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x4c6 PushV
	var_91_string = "branch"; // 0x4c7 PushS
	GetVariable(var_91_string, var_90_int); // 0x4c8 Func
	var_92_int = 0; // 0x4ca PushI
	var_93_bool = var_90_int == var_92_int; // 0x4cb Eq
	if(var_93_bool == 0) goto Label_1232; // 0x4cc JumpB
	var_88_int = 1; // 0x4cd MovI
	return 2; // 0x4ce Return
	
Label_1232:
	var_94_int = 1; // 0x4d0 PushI
	var_95_bool = var_90_int == var_94_int; // 0x4d1 Eq
	if(var_95_bool == 0) goto Label_1237; // 0x4d2 JumpB
	var_88_int = 2; // 0x4d3 MovI
	return 2; // 0x4d4 Return
	
Label_1237:
	var_88_int = 3; // 0x4d5 MovI
	return 2; // 0x4d6 Return
}


func_1095(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x447 PushV
	var_34_string = "idle"; // 0x448 MovS
	var_35_int = var_32_int; // 0x449 Push
	if(var_35_int == 0) goto Label_1100; // 0x44a JumpB
	var_34_string = var_34_string + var_32_int; // 0x44b Add2
	
Label_1100:
	var_31_string = var_34_string; // 0x44c Mov
	return 2; // 0x44d Return
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


func_969(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x3c9 PushV
	var_151_string = "d"; // 0x3ca PushS
	var_152_int = 0; // 0x3cb PushV
	func_1086(var_152_int); // 0x3cc NEW_2
	var_158_int = var_151_string + var_152_int; // 0x3ce Add
	var_159_string = "m"; // 0x3cf PushS
	var_146_string = var_158_int + var_159_string; // 0x3d0 Add2
	var_147_int = 0; // 0x3d1 MovI
	
Label_978:
	var_160_int = 1; // 0x3d2 PushI
	if(var_160_int == 0) goto Label_991; // 0x3d3 JumpB
	var_161_int = 1; // 0x3d4 PushI
	var_162_int = var_147_int + var_161_int; // 0x3d5 Add
	var_163_int = var_146_string + var_162_int; // 0x3d6 Add
	HasProperty(var_163_int, var_148_bool); // 0x3d7 ObjFunc
	var_164_bool = var_148_bool == 0; // 0x3d9 Not
	if(var_164_bool == 0) goto Label_988; // 0x3da JumpB
	goto Label_991; // 0x3db Jump
	
Label_991:
	var_165_bool = var_147_int == 0; // 0x3df Not
	if(var_165_bool == 0) goto Label_995; // 0x3e0 JumpB
	var_139_bool = 0; // 0x3e1 MovB
	return 10; // 0x3e2 Return
	
Label_995:
	var_149_int = 0; // 0x3e3 MovI
	var_166_int = 1; // 0x3e4 PushI
	var_167_bool = var_147_int > var_166_int; // 0x3e5 GT
	if(var_167_bool == 0) goto Label_1001; // 0x3e6 JumpB
	irand(var_149_int, var_147_int); // 0x3e7 Func
	
Label_1001:
	var_168_int = 1; // 0x3e9 PushI
	var_169_int = var_149_int + var_168_int; // 0x3ea Add
	var_170_int = var_146_string + var_169_int; // 0x3eb Add
	GetProperty(var_170_int, var_150_string); // 0x3ec ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x3ee PushV
	var_172_string = var_150_string; // 0x3ef Mov
	func_1043(var_171_bool, var_172_string); // 0x3f0 NEW_2
	var_139_bool = var_171_bool; // 0x3f1 Mov
	return 10; // 0x3f3 Return
	
Label_988:
	var_173_int = 1; // 0x3dc PushI
	var_147_int = var_147_int + var_173_int; // 0x3dd Add2
	goto Label_978; // 0x3de Jump
}


func_1102(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x44e PushV
	var_28_int = 0; // 0x44f MovI
	
Label_1104:
	var_30_string = "all"; // 0x450 PushS
	var_31_string = ""; var_32_int = 0; // 0x451 PushV
	var_32_int = var_28_int; // 0x452 Mov
	func_1095(var_31_string, var_32_int); // 0x453 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x455 Func
	var_36_bool = var_29_bool == 0; // 0x457 Not
	if(var_36_bool == 0) goto Label_1114; // 0x458 JumpB
	goto Label_1117; // 0x459 Jump
	
Label_1117:
	var_25_int = var_28_int; // 0x45d Mov
	return 4; // 0x45e Return
	
Label_1114:
	var_37_int = 1; // 0x45a PushI
	var_28_int = var_28_int + var_37_int; // 0x45b Add2
	goto Label_1104; // 0x45c Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_139; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_1143(var_200_object); // 0x59 NEW_2
	if(var_199_bool == 0) goto Label_117; // 0x5b JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x5c PushV
	var_207_object = var_1_object; // 0x5d MovT
	var_208_object = var_0_object; // 0x5e MovT
	func_1137(); // 0x5f NEW_2
	var_211_string = ""; // 0x61 PushV
	var_211_string = "Agression"; // 0x62 MovS
	func_169(var_193_object, var_211_string); // 0x63 NEW_2
	var_228_int = 525808; // 0x65 PushI
	SetMessage(var_228_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_229_int = 542324; // 0x6a PushI
	var_230_int = 44685; // 0x6b PushI
	var_231_int = 44683; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	var_232_int = 542325; // 0x6f PushI
	var_233_int = 44686; // 0x70 PushI
	var_234_int = 44684; // 0x71 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x72 TObjFunc
	goto Label_139; // 0x74 Jump
	
Label_139:
	var_235_bool = 0; // 0x8b PushV
	func_1247(var_235_bool); // 0x8c NEW_2
	if(var_235_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_236_string = var_3_string; // 0x91 PushT
	if(var_236_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_237_string = ""; // 0x94 PushV
	var_237_string = var_2_object; // 0x95 MovT
	func_1012(var_237_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_248_string = "all"; // 0x9a PushS
	var_249_string = "idle"; // 0x9b PushS
	PlayAnimation(var_248_string, var_249_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_250_string = var_3_string; // 0xa0 PushT
	if(var_250_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_251_string = "all"; // 0xa3 PushS
	var_252_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_251_string, var_252_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_117:
	var_253_string = ""; // 0x75 PushV
	var_253_string = "Smile"; // 0x76 MovS
	func_169(var_193_object, var_253_string); // 0x77 NEW_2
	var_254_int = 525811; // 0x79 PushI
	SetMessage(var_254_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_255_int = 525812; // 0x7e PushI
	var_256_int = -1; // 0x7f PushI
	var_257_int = 27118; // 0x80 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x81 TObjFunc
	var_258_int = 529232; // 0x83 PushI
	var_259_int = -1; // 0x84 PushI
	var_260_int = 30686; // 0x85 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_1239(var_85_int)
{
	var_85_int = 515592; // 0x4d7 MovI
	return 0; // 0x4d8 Return
}


func_857()
{
	var_263_bool = 0; var_264_bool = 0; // 0x359 PushV
	CameraSwitchToNormal(); // 0x35a Func
	var_265_bool = 0; // 0x35c PushV
	func_1247(var_265_bool); // 0x35d NEW_2
	if(var_265_bool == 0) goto Label_865; // 0x35f JumpB
	goto Label_873; // 0x360 Jump
	
Label_873:
	return 2; // 0x369 Return
	
Label_865:
	var_266_string = "head"; // 0x361 PushS
	HasAnimationTrack(var_264_bool, var_266_string); // 0x362 Func
	var_267_bool = var_264_bool; // 0x364 Push
	if(var_267_bool == 0) goto Label_873; // 0x365 JumpB
	var_268_string = "head"; // 0x366 PushS
	UnlookAsync(var_268_string); // 0x367 Func
}


func_1241(var_84_int)
{
	var_84_int = 511961; // 0x4d9 MovI
	return 0; // 0x4da Return
}


func_1243(var_86_string)
{
	var_86_string = "ui/NPC_Burah.png"; // 0x4db MovS
	return 0; // 0x4dc Return
}


func_1245(var_87_string)
{
	var_87_string = "ui/NPC_Burah_b.png"; // 0x4dd MovS
	return 0; // 0x4de Return
}


func_1119()
{
	var_15_string = "k4q03"; // 0x460 PushS
	var_16_int = 3; // 0x461 PushI
	SetVariable(var_15_string, var_16_int); // 0x462 Func
	func_1168(); // 0x465 NEW_2
	return 0; // 0x467 Return
}


func_1247(var_79_bool)
{
	var_79_bool = 1; // 0x4df MovB
	return 0; // 0x4e0 Return
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


func_1128()
{
	var_44_string = "k4q03"; // 0x469 PushS
	var_45_int = 4; // 0x46a PushI
	SetVariable(var_44_string, var_45_int); // 0x46b Func
	func_1155(); // 0x46e NEW_2
	return 0; // 0x470 Return
}


func_874(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x36a PushV
	var_106_string = "voice_common"; // 0x36b PushS
	GetVariable(var_106_string, var_104_int); // 0x36c Func
	var_107_int = var_104_int; // 0x36e Push
	if(var_107_int == 0) goto Label_912; // 0x36f JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x370 PushV
	var_109_object = var_98_object; // 0x371 Mov
	func_932(var_109_object); // 0x372 NEW_2
	var_138_bool = var_108_bool == 0; // 0x374 Not
	if(var_138_bool == 0) goto Label_894; // 0x375 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x376 PushV
	var_140_object = var_98_object; // 0x377 Mov
	func_969(var_140_object); // 0x378 NEW_2
	var_174_bool = var_139_bool == 0; // 0x37a Not
	if(var_174_bool == 0) goto Label_894; // 0x37b JumpB
	var_97_bool = 0; // 0x37c MovB
	return 4; // 0x37d Return
	
Label_894:
	var_175_int = 2; // 0x37e PushI
	irand(var_105_int, var_175_int); // 0x37f Func
	var_176_int = var_105_int; // 0x381 Push
	if(var_176_int == 0) goto Label_907; // 0x382 JumpB
	var_177_string = "voice_common"; // 0x383 PushS
	var_178_int = 1; // 0x384 PushI
	var_179_int = var_104_int + var_178_int; // 0x385 Add
	var_180_int = 3; // 0x386 PushI
	var_181_int = var_179_int / var_180_int; // 0x387 Mod
	SetVariable(var_177_string, var_181_int); // 0x388 Func
	goto Label_911; // 0x38a Jump
	
Label_911:
	goto Label_930; // 0x38f Jump
	
Label_930:
	var_97_bool = 1; // 0x3a2 MovB
	return 4; // 0x3a3 Return
	
Label_907:
	var_182_string = "voice_common"; // 0x38b PushS
	var_183_int = 0; // 0x38c PushI
	SetVariable(var_182_string, var_183_int); // 0x38d Func
	
Label_912:
	var_184_bool = 0; var_185_object = Obj(); // 0x390 PushV
	var_185_object = var_98_object; // 0x391 Mov
	func_969(var_185_object); // 0x392 NEW_2
	var_186_bool = var_184_bool == 0; // 0x394 Not
	if(var_186_bool == 0) goto Label_926; // 0x395 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x396 PushV
	var_188_object = var_98_object; // 0x397 Mov
	func_932(var_188_object); // 0x398 NEW_2
	var_189_bool = var_187_bool == 0; // 0x39a Not
	if(var_189_bool == 0) goto Label_926; // 0x39b JumpB
	var_97_bool = 0; // 0x39c MovB
	return 4; // 0x39d Return
	
Label_926:
	var_190_string = "voice_common"; // 0x39e PushS
	var_191_int = 1; // 0x39f PushI
	SetVariable(var_190_string, var_191_int); // 0x3a0 Func
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


func_1137()
{
	var_209_string = "ook4BurahIndoor1"; // 0x472 PushS
	var_210_int = 1; // 0x473 PushI
	SetVariable(var_209_string, var_210_int); // 0x474 Func
	return 0; // 0x476 Return
}


func_627()
{
	StopGroup0(); // 0x273 Func
	func_570(); // 0x276 NEW_2
	var_8_string = ""; // 0x278 PushV
	var_8_string = "Neutral"; // 0x279 MovS
	func_1012(var_8_string); // 0x27a NEW_2
	func_561(); // 0x27d NEW_2
	return 0; // 0x27f Return
}


func_1012(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x3f4 PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x3f5 Func
	var_244_bool = var_241_bool; // 0x3f7 Push
	if(var_244_bool == 0) goto Label_1023; // 0x3f8 JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x3f9 Func
	var_245_bool = 0; // 0x3fb PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x3fc Func
	goto Label_1027; // 0x3fe Jump
	
Label_1027:
	return 6; // 0x403 Return
	
Label_1023:
	var_246_string = "Can't find lsh animation : "; // 0x3ff PushS
	var_247_int = var_246_string + var_237_string; // 0x400 Add
	Trace(var_247_int); // 0x401 Func
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


func_1143(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x478 PushV
	var_202_string = "ook4BurahIndoor1"; // 0x479 MovS
	func_1081(var_201_int, var_202_string); // 0x47a NEW_2
	var_205_int = 0; // 0x47c PushI
	var_206_bool = var_201_int == var_205_int; // 0x47d Eq
	if(var_206_bool == 0) goto Label_1153; // 0x47e JumpB
	var_199_bool = 1; // 0x47f MovB
	return 0; // 0x480 Return
	
Label_1153:
	var_199_bool = 0; // 0x481 MovB
	return 0; // 0x482 Return
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


