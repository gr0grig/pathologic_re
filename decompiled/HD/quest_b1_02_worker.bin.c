task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xc3 PushI
	if(var_8_int == 0) goto Label_450; // 0xc4 JumpB
	func_768(); // 0xc6 NEW_2
	var_10_int = 19069; // 0xc8 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc9 Eq
	if(var_11_bool == 0) goto Label_213; // 0xca JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xcb PushV
	var_12_object = var_1_object; // 0xcc MovT
	var_13_object = var_0_object; // 0xcd MovT
	func_861(); // 0xce NEW_2
	var_16_object = Obj(); var_17_object = Obj(); // 0xd0 PushV
	var_16_object = var_1_object; // 0xd1 MovT
	var_17_object = var_0_object; // 0xd2 MovT
	func_879(var_17_object); // 0xd3 NEW_2
	
Label_213:
	var_40_int = 19071; // 0xd5 PushI
	var_41_bool = var_7_bool == var_40_int; // 0xd6 Eq
	if(var_41_bool == 0) goto Label_221; // 0xd7 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xd8 PushV
	var_42_object = var_1_object; // 0xd9 MovT
	var_43_object = var_0_object; // 0xda MovT
	func_867(); // 0xdb NEW_2
	
Label_221:
	var_46_int = 20869; // 0xdd PushI
	var_47_bool = var_7_bool == var_46_int; // 0xde Eq
	if(var_47_bool == 0) goto Label_229; // 0xdf JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0xe0 PushV
	var_48_object = var_1_object; // 0xe1 MovT
	var_49_object = var_0_object; // 0xe2 MovT
	func_873(); // 0xe3 NEW_2
	
Label_229:
	var_52_int = 19068; // 0xe5 PushI
	var_53_bool = var_6_int == var_52_int; // 0xe6 Eq
	if(var_53_bool == 0) goto Label_292; // 0xe7 JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0xe8 PushV
	var_55_object = var_1_object; // 0xe9 MovT
	func_930(var_55_object); // 0xea NEW_2
	if(var_54_bool == 0) goto Label_257; // 0xec JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xed PushV
	var_62_object = var_1_object; // 0xee MovT
	var_63_object = var_0_object; // 0xef MovT
	func_900(); // 0xf0 NEW_2
	var_66_string = ""; // 0xf2 PushV
	var_66_string = "Neutral"; // 0xf3 MovS
	func_172(var_7_bool, var_66_string); // 0xf4 NEW_2
	var_83_int = 517930; // 0xf6 PushI
	SetMessage(var_83_int); // 0xf7 TObjFunc
	ClearReplies(); // 0xf9 TObjFunc
	var_84_int = 519691; // 0xfb PushI
	var_85_int = 20850; // 0xfc PushI
	var_86_int = 20849; // 0xfd PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_87_string = ""; // 0x101 PushV
	var_87_string = "Neutral"; // 0x102 MovS
	func_172(var_7_bool, var_87_string); // 0x103 NEW_2
	var_88_int = 517932; // 0x105 PushI
	SetMessage(var_88_int); // 0x106 TObjFunc
	ClearReplies(); // 0x108 TObjFunc
	var_89_bool = 0; var_90_object = Obj(); // 0x10a PushV
	var_90_object = var_1_object; // 0x10b MovT
	func_906(var_90_object); // 0x10c NEW_2
	if(var_89_bool == 0) goto Label_276; // 0x10e JumpB
	var_95_int = 517933; // 0x10f PushI
	var_96_int = 20861; // 0x110 PushI
	var_97_int = 19071; // 0x111 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x112 TObjFunc
	
Label_276:
	var_98_bool = 0; var_99_object = Obj(); // 0x114 PushV
	var_99_object = var_1_object; // 0x115 MovT
	func_918(var_99_object); // 0x116 NEW_2
	if(var_98_bool == 0) goto Label_286; // 0x118 JumpB
	var_104_int = 519710; // 0x119 PushI
	var_105_int = 20870; // 0x11a PushI
	var_106_int = 20869; // 0x11b PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x11c TObjFunc
	
Label_286:
	var_107_int = 519709; // 0x11e PushI
	var_108_int = -1; // 0x11f PushI
	var_109_int = 20868; // 0x120 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x121 TObjFunc
	return 0; // 0x123 Return
	
Label_292:
	var_110_int = 20870; // 0x124 PushI
	var_111_bool = var_6_int == var_110_int; // 0x125 Eq
	if(var_111_bool == 0) goto Label_310; // 0x126 JumpB
	var_112_string = ""; // 0x127 PushV
	var_112_string = "Neutral"; // 0x128 MovS
	func_172(var_7_bool, var_112_string); // 0x129 NEW_2
	var_113_int = 519711; // 0x12b PushI
	SetMessage(var_113_int); // 0x12c TObjFunc
	ClearReplies(); // 0x12e TObjFunc
	var_114_int = 519712; // 0x130 PushI
	var_115_int = -1; // 0x131 PushI
	var_116_int = 20871; // 0x132 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_117_int = 20861; // 0x136 PushI
	var_118_bool = var_6_int == var_117_int; // 0x137 Eq
	if(var_118_bool == 0) goto Label_333; // 0x138 JumpB
	var_119_string = ""; // 0x139 PushV
	var_119_string = "Neutral"; // 0x13a MovS
	func_172(var_7_bool, var_119_string); // 0x13b NEW_2
	var_120_int = 519703; // 0x13d PushI
	SetMessage(var_120_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_121_int = 519704; // 0x142 PushI
	var_122_int = 20865; // 0x143 PushI
	var_123_int = 20862; // 0x144 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x145 TObjFunc
	var_124_int = 519705; // 0x147 PushI
	var_125_int = 20865; // 0x148 PushI
	var_126_int = 20863; // 0x149 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_127_int = 20865; // 0x14d PushI
	var_128_bool = var_6_int == var_127_int; // 0x14e Eq
	if(var_128_bool == 0) goto Label_351; // 0x14f JumpB
	var_129_string = ""; // 0x150 PushV
	var_129_string = "Neutral"; // 0x151 MovS
	func_172(var_7_bool, var_129_string); // 0x152 NEW_2
	var_130_int = 519707; // 0x154 PushI
	SetMessage(var_130_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_131_int = 519708; // 0x159 PushI
	var_132_int = -1; // 0x15a PushI
	var_133_int = 20866; // 0x15b PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x15c TObjFunc
	return 0; // 0x15e Return
	
Label_351:
	var_134_int = 20850; // 0x15f PushI
	var_135_bool = var_6_int == var_134_int; // 0x160 Eq
	if(var_135_bool == 0) goto Label_374; // 0x161 JumpB
	var_136_string = ""; // 0x162 PushV
	var_136_string = "Neutral"; // 0x163 MovS
	func_172(var_7_bool, var_136_string); // 0x164 NEW_2
	var_137_int = 519692; // 0x166 PushI
	SetMessage(var_137_int); // 0x167 TObjFunc
	ClearReplies(); // 0x169 TObjFunc
	var_138_int = 519693; // 0x16b PushI
	var_139_int = 20852; // 0x16c PushI
	var_140_int = 20851; // 0x16d PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x16e TObjFunc
	var_141_int = 517931; // 0x170 PushI
	var_142_int = -1; // 0x171 PushI
	var_143_int = 19069; // 0x172 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_144_int = 20852; // 0x176 PushI
	var_145_bool = var_6_int == var_144_int; // 0x177 Eq
	if(var_145_bool == 0) goto Label_397; // 0x178 JumpB
	var_146_string = ""; // 0x179 PushV
	var_146_string = "Neutral"; // 0x17a MovS
	func_172(var_7_bool, var_146_string); // 0x17b NEW_2
	var_147_int = 519694; // 0x17d PushI
	SetMessage(var_147_int); // 0x17e TObjFunc
	ClearReplies(); // 0x180 TObjFunc
	var_148_int = 519695; // 0x182 PushI
	var_149_int = 20854; // 0x183 PushI
	var_150_int = 20853; // 0x184 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x185 TObjFunc
	var_151_int = 519697; // 0x187 PushI
	var_152_int = 20856; // 0x188 PushI
	var_153_int = 20855; // 0x189 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x18a TObjFunc
	return 0; // 0x18c Return
	
Label_397:
	var_154_int = 20856; // 0x18d PushI
	var_155_bool = var_6_int == var_154_int; // 0x18e Eq
	if(var_155_bool == 0) goto Label_415; // 0x18f JumpB
	var_156_string = ""; // 0x190 PushV
	var_156_string = "Neutral"; // 0x191 MovS
	func_172(var_7_bool, var_156_string); // 0x192 NEW_2
	var_157_int = 519698; // 0x194 PushI
	SetMessage(var_157_int); // 0x195 TObjFunc
	ClearReplies(); // 0x197 TObjFunc
	var_158_int = 519702; // 0x199 PushI
	var_159_int = -1; // 0x19a PushI
	var_160_int = 20860; // 0x19b PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x19c TObjFunc
	return 0; // 0x19e Return
	
Label_415:
	var_161_int = 20854; // 0x19f PushI
	var_162_bool = var_6_int == var_161_int; // 0x1a0 Eq
	if(var_162_bool == 0) goto Label_438; // 0x1a1 JumpB
	var_163_string = ""; // 0x1a2 PushV
	var_163_string = "Neutral"; // 0x1a3 MovS
	func_172(var_7_bool, var_163_string); // 0x1a4 NEW_2
	var_164_int = 519696; // 0x1a6 PushI
	SetMessage(var_164_int); // 0x1a7 TObjFunc
	ClearReplies(); // 0x1a9 TObjFunc
	var_165_int = 519700; // 0x1ab PushI
	var_166_int = -1; // 0x1ac PushI
	var_167_int = 20858; // 0x1ad PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x1ae TObjFunc
	var_168_int = 519701; // 0x1b0 PushI
	var_169_int = -1; // 0x1b1 PushI
	var_170_int = 20859; // 0x1b2 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x1b3 TObjFunc
	return 0; // 0x1b5 Return
	
Label_438:
	var_3_string = 1; // 0x1b6 TMovB
	var_171_bool = 0; // 0x1b7 PushV
	func_859(var_171_bool); // 0x1b8 NEW_2
	if(var_171_bool == 0) goto Label_446; // 0x1ba JumpB
	lshStopAnimation(); // 0x1bb Func
	goto Label_448; // 0x1bd Jump
	
Label_448:
	return 0; // 0x1c0 Return
	
Label_446:
	StopAnimation(); // 0x1be Func
	
Label_450:
	return 0; // 0x1c2 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_640(); // 0x1d8 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x1da PushV
	var_8_object = var_6_object; // 0x1db Mov
	TaskCall(0); // 0x1dc TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x1dd NEW_2
	TaskReturn(); // 0x1de TaskReturn
	return 0; // 0x1e0 Return
}


task_2_event_9(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_int, var_7_float)
{
	var_8_string = ""; // 0x1e2 PushV
	var_8_string = "cleanup"; // 0x1e3 MovS
	func_528(); // 0x1e4 NEW_2
	return 0; // 0x1e6 Return
}


	task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_float, var_7_float, var_10_string)
	{
	var_11_string = "cleanup"; // 0x211 PushS
	var_12_bool = var_10_string == var_11_string; // 0x212 Eq
	if(var_12_bool == 0) goto Label_535; // 0x213 JumpB
	func_508(var_10_string); // 0x215 NEW_2
	
Label_535:
	return 0; // 0x217 Return
	}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x218 Func
	sync(); // 0x21a Func
	return 0; // 0x21c Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x21d PushV
	var_6_bool = 0; // 0x21e MovB
	var_7_object = var_0_object; // 0x21f PushT
	if(var_7_object == 0) goto Label_550; // 0x220 JumpB
	var_8_bool = 0; // 0x221 PushV
	func_557(var_8_bool); // 0x222 NEW_2
	if(var_8_bool == 0) goto Label_550; // 0x224 JumpB
	var_6_bool = 1; // 0x225 MovB
	
Label_550:
	if(var_6_bool == 0) goto Label_556; // 0x226 JumpB
	var_9_object = Obj(); // 0x227 PushV
	func_775(var_9_object); // 0x228 NEW_2
	RemoveActor(var_9_object); // 0x22a Func
	
Label_556:
	return 0; // 0x22c Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x1c3 PushV
	GetGameTime(var_7_float); // 0x1c4 Func
	var_8_int = 24; // 0x1c6 PushI
	var_9_bool = var_7_float >= var_8_int; // 0x1c7 GE
	if(var_9_bool == 0) goto Label_462; // 0x1c8 JumpB
	var_10_string = ""; // 0x1c9 PushV
	var_10_string = "cleanup"; // 0x1ca MovS
	func_528(); // 0x1cb NEW_2
	goto Label_466; // 0x1cd Jump
	
Label_466:
	func_487(); // 0x1d3 NEW_2
	return 2; // 0x1d5 Return
	
Label_462:
	var_81_int = 0; // 0x1ce PushI
	var_82_int = 24; // 0x1cf PushI
	SetTimeEvent(var_81_int, var_82_int); // 0x1d0 Func
}


func_768()
{
	var_9_bool = 0; // 0x300 PushV
	func_859(var_9_bool); // 0x301 NEW_2
	if(var_9_bool == 0) goto Label_774; // 0x303 JumpB
	lshStopSpeech(); // 0x304 Func
	
Label_774:
	return 0; // 0x306 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_650(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_853(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_851(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_855(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_857(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_942(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_object = Obj(); var_80_object = Obj(); // 0x2f PushV
	var_79_object = var_8_object; // 0x30 Mov
	var_80_object = var_14_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_17_bool); // 0x36 ObjFunc
	
Label_56:
	var_160_bool = var_17_bool == 0; // 0x38 Not
	if(var_160_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_17_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_161_object = Obj(); // 0x3f PushV
	var_161_object = var_8_object; // 0x40 Mov
	func_719(); // 0x41 NEW_2
	StopDialog(var_14_object); // 0x43 Func
	GetReturnValue(var_16_int); // 0x45 ObjFunc
	var_7_int = var_16_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_640()
{
	StopAnimation(); // 0x280 Func
	StopGroup0(); // 0x282 Func
	return 0; // 0x284 Return
}


func_900()
{
	var_96_string = "oob1Worker1"; // 0x385 PushS
	var_97_int = 1; // 0x386 PushI
	SetVariable(var_96_string, var_97_int); // 0x387 Func
	return 0; // 0x389 Return
}


func_645(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x285 PushV
	IsLoaded(var_25_bool); // 0x286 Func
	var_23_bool = var_25_bool; // 0x288 Mov
	return 2; // 0x289 Return
}


func_775(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x307 PushV
	self(var_20_object); // 0x308 Func
	var_18_object = var_20_object; // 0x30a Mov
	return 2; // 0x30b Return
}


func_650(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x28a PushV
	GetPosition(var_31_cvector); // 0x28b ObjFunc
	GetEyesHeight(var_30_float); // 0x28d ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x28f PushE
	var_39_float = var_39_float + var_30_float; // 0x290 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x291 PopE
	GetPosition(var_32_cvector); // 0x292 Func
	GetEyesHeight(var_30_float); // 0x294 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x296 PushE
	var_40_float = var_40_float + var_30_float; // 0x297 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x298 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x299 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x29a PushE
	var_41_float = 0; // 0x29b MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x29c PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x29d Or
	var_43_float = sqrt(var_42_int); // 0x29e Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x29f Div2
	var_34_cvector = -var_33_cvector; // 0x2a0 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x2a1 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x2a2 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x2a3 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x2a4 Xor2
	func_781(var_45_cvector, var_46_cvector); // 0x2a5 NEW_2
	var_53_int = 25; // 0x2a7 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x2a8 Mult
	var_55_int = var_44_float + var_54_float; // 0x2a9 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x2aa PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x2ab Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x2ac Add2
	IsOverrideActive(var_37_bool); // 0x2ad Func
	var_57_bool = var_37_bool; // 0x2af Push
	if(var_57_bool == 0) goto Label_691; // 0x2b0 JumpB
	var_18_bool = 0; // 0x2b1 MovB
	return 18; // 0x2b2 Return
	
Label_691:
	StopWorld(); // 0x2b3 Func
	var_58_bool = 1; // 0x2b5 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x2b6 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x2b8 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x2b9 PushE
	Rotate(var_59_float, var_60_float); // 0x2ba Func
	var_61_bool = 0; // 0x2bc PushV
	func_859(var_61_bool); // 0x2bd NEW_2
	if(var_61_bool == 0) goto Label_705; // 0x2bf JumpB
	goto Label_713; // 0x2c0 Jump
	
Label_713:
	CameraWaitForPlayFinish(); // 0x2c9 Func
	ResumeWorld(); // 0x2cb Func
	var_18_bool = 1; // 0x2cd MovB
	return 18; // 0x2ce Return
	
Label_705:
	var_62_string = "head"; // 0x2c1 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x2c2 Func
	var_63_bool = var_38_bool; // 0x2c4 Push
	if(var_63_bool == 0) goto Label_713; // 0x2c5 JumpB
	var_64_string = "head"; // 0x2c6 PushS
	LookAsyncCamera(var_64_string); // 0x2c7 Func
}


func_906(var_139_bool)
{
	var_141_int = 0; var_142_string = ""; // 0x38b PushV
	var_142_string = "oob1Worker2"; // 0x38c MovS
	func_791(var_141_int, var_142_string); // 0x38d NEW_2
	var_143_int = 0; // 0x38f PushI
	var_144_bool = var_141_int == var_143_int; // 0x390 Eq
	if(var_144_bool == 0) goto Label_916; // 0x391 JumpB
	var_139_bool = 1; // 0x392 MovB
	return 0; // 0x393 Return
	
Label_916:
	var_139_bool = 0; // 0x394 MovB
	return 0; // 0x395 Return
}


func_781(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x30d PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x30e Or
	var_49_float = sqrt(var_50_int); // 0x30f Sqrt2
	var_51_float = 0.0; // 0x310 PushF
	var_52_bool = var_49_float < var_51_float; // 0x311 LT
	if(var_52_bool == 0) goto Label_789; // 0x312 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x313 MovV
	return 2; // 0x314 Return
	
Label_789:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x315 Div2
	return 2; // 0x316 Return
}


func_918(var_148_bool)
{
	var_150_int = 0; var_151_string = ""; // 0x397 PushV
	var_151_string = "oob1Worker3"; // 0x398 MovS
	func_791(var_150_int, var_151_string); // 0x399 NEW_2
	var_152_int = 0; // 0x39b PushI
	var_153_bool = var_150_int == var_152_int; // 0x39c Eq
	if(var_153_bool == 0) goto Label_928; // 0x39d JumpB
	var_148_bool = 1; // 0x39e MovB
	return 0; // 0x39f Return
	
Label_928:
	var_148_bool = 0; // 0x3a0 MovB
	return 0; // 0x3a1 Return
}


func_791(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x317 PushV
	GetVariable(var_89_string, var_91_int); // 0x318 Func
	var_88_int = var_91_int; // 0x31a Mov
	return 2; // 0x31b Return
}


func_796(var_35_int, var_36_int)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x31c PushV
	CreateIntVector(var_38_object); // 0x31d Func
	add(var_35_int); // 0x31f ObjFunc
	add(var_36_int); // 0x321 ObjFunc
	var_39_int = 3; // 0x323 PushI
	SendWorldWndMessage(var_39_int, var_38_object); // 0x324 Func
	return 2; // 0x326 Return
}


func_930(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x3a3 PushV
	var_89_string = "oob1Worker1"; // 0x3a4 MovS
	func_791(var_88_int, var_89_string); // 0x3a5 NEW_2
	var_92_int = 0; // 0x3a7 PushI
	var_93_bool = var_88_int == var_92_int; // 0x3a8 Eq
	if(var_93_bool == 0) goto Label_940; // 0x3a9 JumpB
	var_86_bool = 1; // 0x3aa MovB
	return 0; // 0x3ab Return
	
Label_940:
	var_86_bool = 0; // 0x3ac MovB
	return 0; // 0x3ad Return
}


func_808(var_25_object, var_26_int)
{
	var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; // 0x328 PushV
	GetItemID(var_30_int); // 0x329 ObjFunc
	var_33_string = "Category"; // 0x32b PushS
	GetInvItemProperty(var_31_int, var_30_int, var_33_string); // 0x32c Func
	AddItem(var_32_bool, var_25_object, var_31_int, var_26_int); // 0x32e ObjFunc
	var_34_bool = var_32_bool == 0; // 0x330 Not
	if(var_34_bool == 0) goto Label_821; // 0x331 JumpB
	DropItems(var_25_object, var_26_int); // 0x332 ObjFunc
	goto Label_826; // 0x334 Jump
	
Label_826:
	return 6; // 0x33a Return
	
Label_821:
	var_35_int = 0; var_36_int = 0; // 0x335 PushV
	var_35_int = var_30_int; // 0x336 Mov
	var_36_int = var_26_int; // 0x337 Mov
	func_796(var_35_int, var_36_int); // 0x338 NEW_2
}


func_172(var_2_object, var_98_string)
{
	var_99_bool = 0; // 0xad PushV
	func_859(var_99_bool); // 0xae NEW_2
	var_100_bool = var_99_bool == 0; // 0xb0 Not
	if(var_100_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_101_bool = var_98_string == var_2_object; // 0xb3 Eq
	if(var_101_bool == 0) goto Label_182; // 0xb4 JumpB
	return 0; // 0xb5 Return
	
Label_182:
	var_102_string = ""; var_103_bool = 0; // 0xb6 PushV
	var_102_string = var_98_string; // 0xb7 Mov
	var_104_string = ""; // 0xb8 PushS
	var_105_bool = var_98_string == var_104_string; // 0xb9 Eq
	if(var_105_bool == 0) goto Label_189; // 0xba JumpB
	var_103_bool = 0; // 0xbb MovB
	goto Label_190; // 0xbc Jump
	
Label_190:
	func_753(var_102_string, var_103_bool); // 0xbe NEW_2
	var_2_object = var_98_string; // 0xc0 TMov
	return 0; // 0xc1 Return
	
Label_189:
	var_103_bool = 1; // 0xbd MovB
}


func_557(var_17_bool)
{
	var_17_bool = 1; // 0x22d MovB
	return 0; // 0x22e Return
}


func_942(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x3ae PushV
	var_73_string = "branch"; // 0x3af PushS
	GetVariable(var_73_string, var_72_int); // 0x3b0 Func
	var_74_int = 0; // 0x3b2 PushI
	var_75_bool = var_72_int == var_74_int; // 0x3b3 Eq
	if(var_75_bool == 0) goto Label_952; // 0x3b4 JumpB
	var_70_int = 1; // 0x3b5 MovI
	return 2; // 0x3b6 Return
	
Label_952:
	var_76_int = 1; // 0x3b8 PushI
	var_77_bool = var_72_int == var_76_int; // 0x3b9 Eq
	if(var_77_bool == 0) goto Label_957; // 0x3ba JumpB
	var_70_int = 2; // 0x3bb MovI
	return 2; // 0x3bc Return
	
Label_957:
	var_70_int = 3; // 0x3bd MovI
	return 2; // 0x3be Return
}


func_559()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x22f PushV
	WaitForAnimEnd(); // 0x230 Func
	var_44_bool = 0; // 0x232 PushV
	func_645(var_44_bool); // 0x233 NEW_2
	var_45_bool = var_44_bool == 0; // 0x235 Not
	if(var_45_bool == 0) goto Label_568; // 0x236 JumpB
	return 14; // 0x237 Return
	
Label_568:
	var_46_int = 0; // 0x238 PushV
	func_834(var_46_int); // 0x239 NEW_2
	var_37_int = var_46_int; // 0x23a Mov
	var_38_int = 0; // 0x23c MovI
	
Label_573:
	var_59_bool = 0; // 0x23d PushV
	var_59_bool = 0; // 0x23e MovB
	var_60_int = 5; // 0x23f PushI
	var_61_bool = var_38_int < var_60_int; // 0x240 LT
	if(var_61_bool == 0) goto Label_583; // 0x241 JumpB
	var_62_bool = 0; // 0x242 PushV
	func_645(var_62_bool); // 0x243 NEW_2
	if(var_62_bool == 0) goto Label_583; // 0x245 JumpB
	var_59_bool = 1; // 0x246 MovB
	
Label_583:
	if(var_59_bool == 0) goto Label_635; // 0x247 JumpB
	var_63_int = 3; // 0x248 PushI
	irand(var_39_int, var_63_int); // 0x249 Func
	var_64_int = 0; // 0x24b PushI
	var_65_bool = var_39_int == var_64_int; // 0x24c Eq
	if(var_65_bool == 0) goto Label_607; // 0x24d JumpB
	var_66_int = var_37_int; // 0x24e Push
	if(var_66_int == 0) goto Label_606; // 0x24f JumpB
	irand(var_40_int, var_37_int); // 0x250 Func
	var_67_string = "all"; // 0x252 PushS
	var_68_string = ""; var_69_int = 0; // 0x253 PushV
	var_69_int = var_40_int; // 0x254 Mov
	func_827(var_68_string, var_69_int); // 0x255 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x257 Func
	WaitForAnimEnd(var_41_bool); // 0x259 Func
	var_70_bool = var_41_bool == 0; // 0x25b Not
	if(var_70_bool == 0) goto Label_606; // 0x25c JumpB
	goto Label_635; // 0x25d Jump
	
Label_635:
	ResetAAS(); // 0x27b Func
	return 14; // 0x27d Return
	
Label_606:
	goto Label_624; // 0x25e Jump
	
Label_624:
	var_71_bool = 0; // 0x270 PushV
	func_638(var_71_bool); // 0x271 NEW_2
	var_72_bool = var_71_bool == 0; // 0x273 Not
	if(var_72_bool == 0) goto Label_630; // 0x274 JumpB
	goto Label_635; // 0x275 Jump
	
Label_630:
	ResetAAS(); // 0x276 Func
	var_73_int = 1; // 0x278 PushI
	var_38_int = var_38_int + var_73_int; // 0x279 Add2
	goto Label_573; // 0x27a Jump
	
Label_607:
	var_74_int = 1; // 0x25f PushI
	var_75_bool = var_39_int == var_74_int; // 0x260 Eq
	if(var_75_bool == 0) goto Label_621; // 0x261 JumpB
	var_76_int = 4; // 0x262 PushI
	rand(var_42_float, var_76_int); // 0x263 Func
	var_77_int = 1; // 0x265 PushI
	var_78_int = var_42_float + var_77_int; // 0x266 Add
	Sleep(var_78_int, var_43_bool); // 0x267 Func
	var_79_bool = var_43_bool == 0; // 0x269 Not
	if(var_79_bool == 0) goto Label_620; // 0x26a JumpB
	goto Label_635; // 0x26b Jump
	
Label_620:
	goto Label_624; // 0x26c Jump
	
Label_621:
	var_80_int = var_38_int; // 0x26d Push
	if(var_80_int == 0) goto Label_624; // 0x26e JumpB
	goto Label_635; // 0x26f Jump
}


func_827(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x33b PushV
	var_55_string = "idle"; // 0x33c MovS
	var_56_int = var_53_int; // 0x33d Push
	if(var_56_int == 0) goto Label_832; // 0x33e JumpB
	var_55_string = var_55_string + var_53_int; // 0x33f Add2
	
Label_832:
	var_52_string = var_55_string; // 0x340 Mov
	return 2; // 0x341 Return
}


func_834(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x342 PushV
	var_49_int = 0; // 0x343 MovI
	
Label_836:
	var_51_string = "all"; // 0x344 PushS
	var_52_string = ""; var_53_int = 0; // 0x345 PushV
	var_53_int = var_49_int; // 0x346 Mov
	func_827(var_52_string, var_53_int); // 0x347 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x349 Func
	var_57_bool = var_50_bool == 0; // 0x34b Not
	if(var_57_bool == 0) goto Label_846; // 0x34c JumpB
	goto Label_849; // 0x34d Jump
	
Label_849:
	var_46_int = var_49_int; // 0x351 Mov
	return 4; // 0x352 Return
	
Label_846:
	var_58_int = 1; // 0x34e PushI
	var_49_int = var_49_int + var_58_int; // 0x34f Add2
	goto Label_836; // 0x350 Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object; // 0x4b TMov
	var_1_object = var_79_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_85_int = 1; // 0x4e PushI
	if(var_85_int == 0) goto Label_142; // 0x4f JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x50 PushV
	var_87_object = var_1_object; // 0x51 MovT
	func_930(var_87_object); // 0x52 NEW_2
	if(var_86_bool == 0) goto Label_105; // 0x54 JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x55 PushV
	var_94_object = var_1_object; // 0x56 MovT
	var_95_object = var_0_object; // 0x57 MovT
	func_900(); // 0x58 NEW_2
	var_98_string = ""; // 0x5a PushV
	var_98_string = "Neutral"; // 0x5b MovS
	func_172(var_80_object, var_98_string); // 0x5c NEW_2
	var_115_int = 517930; // 0x5e PushI
	SetMessage(var_115_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_116_int = 519691; // 0x63 PushI
	var_117_int = 20850; // 0x64 PushI
	var_118_int = 20849; // 0x65 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x66 TObjFunc
	goto Label_142; // 0x68 Jump
	
Label_142:
	var_119_bool = 0; // 0x8e PushV
	func_859(var_119_bool); // 0x8f NEW_2
	if(var_119_bool == 0) goto Label_157; // 0x91 JumpB
	
Label_146:
	lshWaitForAnimEnd(); // 0x92 Func
	var_120_string = var_3_string; // 0x94 PushT
	if(var_120_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_156:
	goto Label_171; // 0x9c Jump
	
Label_171:
	return 0; // 0xab Return
	
Label_151:
	var_121_string = ""; // 0x97 PushV
	var_121_string = var_2_object; // 0x98 MovT
	func_737(var_121_string); // 0x99 NEW_2
	goto Label_146; // 0x9b Jump
	
Label_157:
	var_132_string = "all"; // 0x9d PushS
	var_133_string = "idle"; // 0x9e PushS
	PlayAnimation(var_132_string, var_133_string); // 0x9f Func
	
Label_161:
	WaitForAnimEnd(); // 0xa1 Func
	var_134_string = var_3_string; // 0xa3 PushT
	if(var_134_string == 0) goto Label_166; // 0xa4 JumpB
	goto Label_171; // 0xa5 Jump
	
Label_166:
	var_135_string = "all"; // 0xa6 PushS
	var_136_string = "idle"; // 0xa7 PushS
	PlayAnimation(var_135_string, var_136_string); // 0xa8 Func
	goto Label_161; // 0xaa Jump
	
Label_105:
	var_137_string = ""; // 0x69 PushV
	var_137_string = "Neutral"; // 0x6a MovS
	func_172(var_80_object, var_137_string); // 0x6b NEW_2
	var_138_int = 517932; // 0x6d PushI
	SetMessage(var_138_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_139_bool = 0; var_140_object = Obj(); // 0x72 PushV
	var_140_object = var_1_object; // 0x73 MovT
	func_906(var_140_object); // 0x74 NEW_2
	if(var_139_bool == 0) goto Label_124; // 0x76 JumpB
	var_145_int = 517933; // 0x77 PushI
	var_146_int = 20861; // 0x78 PushI
	var_147_int = 19071; // 0x79 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x7a TObjFunc
	
Label_124:
	var_148_bool = 0; var_149_object = Obj(); // 0x7c PushV
	var_149_object = var_1_object; // 0x7d MovT
	func_918(var_149_object); // 0x7e NEW_2
	if(var_148_bool == 0) goto Label_134; // 0x80 JumpB
	var_154_int = 519710; // 0x81 PushI
	var_155_int = 20870; // 0x82 PushI
	var_156_int = 20869; // 0x83 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x84 TObjFunc
	
Label_134:
	var_157_int = 519709; // 0x86 PushI
	var_158_int = -1; // 0x87 PushI
	var_159_int = 20868; // 0x88 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x89 TObjFunc
	goto Label_142; // 0x8b Jump
}


func_719()
{
	var_162_bool = 0; var_163_bool = 0; // 0x2cf PushV
	var_164_bool = 1; // 0x2d0 PushB
	CameraSwitchToNormal(var_164_bool); // 0x2d1 Func
	var_165_bool = 0; // 0x2d3 PushV
	func_859(var_165_bool); // 0x2d4 NEW_2
	if(var_165_bool == 0) goto Label_728; // 0x2d6 JumpB
	goto Label_736; // 0x2d7 Jump
	
Label_736:
	return 2; // 0x2e0 Return
	
Label_728:
	var_166_string = "head"; // 0x2d8 PushS
	HasAnimationTrack(var_163_bool, var_166_string); // 0x2d9 Func
	var_167_bool = var_163_bool; // 0x2db Push
	if(var_167_bool == 0) goto Label_736; // 0x2dc JumpB
	var_168_string = "head"; // 0x2dd PushS
	UnlookAsync(var_168_string); // 0x2de Func
}


func_851(var_67_int)
{
	var_67_int = 515568; // 0x353 MovI
	return 0; // 0x354 Return
}


func_853(var_66_int)
{
	var_66_int = 503353; // 0x355 MovI
	return 0; // 0x356 Return
}


func_855(var_68_string)
{
	var_68_string = "ui/NPC_Citizen1.png"; // 0x357 MovS
	return 0; // 0x358 Return
}


func_857(var_69_string)
{
	var_69_string = "ui/NPC_Citizen1_b.png"; // 0x359 MovS
	return 0; // 0x35a Return
}


func_859(var_61_bool)
{
	var_61_bool = 0; // 0x35b MovB
	return 0; // 0x35c Return
}


func_861()
{
	var_14_string = "playsound"; // 0x35e PushS
	var_15_string = "giveitem"; // 0x35f PushS
	TriggerWorld(var_14_string, var_15_string); // 0x360 Func
	return 0; // 0x362 Return
}


func_737(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0; // 0x2e1 PushV
	lshHasAnimation(var_125_bool, var_121_string); // 0x2e2 Func
	var_128_bool = var_125_bool; // 0x2e4 Push
	if(var_128_bool == 0) goto Label_748; // 0x2e5 JumpB
	lshGetAnimTimes(var_121_string, var_126_float, var_127_float); // 0x2e6 Func
	var_129_bool = 0; // 0x2e8 PushB
	lshPlayAnimation(var_126_float, var_127_float, var_129_bool); // 0x2e9 Func
	goto Label_752; // 0x2eb Jump
	
Label_752:
	return 6; // 0x2f0 Return
	
Label_748:
	var_130_string = "Can't find lsh animation : "; // 0x2ec PushS
	var_131_int = var_130_string + var_121_string; // 0x2ed Add
	Trace(var_131_int); // 0x2ee Func
}


func_867()
{
	var_44_string = "oob1Worker2"; // 0x364 PushS
	var_45_int = 1; // 0x365 PushI
	SetVariable(var_44_string, var_45_int); // 0x366 Func
	return 0; // 0x368 Return
}


func_487()
{
	var_21_float = 0; var_22_float = 0; // 0x1e7 PushV
	
Label_488:
	var_23_bool = 0; // 0x1e8 PushV
	func_645(var_23_bool); // 0x1e9 NEW_2
	var_26_bool = var_23_bool == 0; // 0x1eb Not
	if(var_26_bool == 0) goto Label_496; // 0x1ec JumpB
	Hold(); // 0x1ed Func
	goto Label_488; // 0x1ef Jump
	
Label_496:
	var_27_int = 3; // 0x1f0 PushI
	rand(var_22_float, var_27_int); // 0x1f1 Func
	var_28_int = 3; // 0x1f3 PushI
	var_29_int = var_22_float + var_28_int; // 0x1f4 Add
	Sleep(var_29_int); // 0x1f5 Func
	func_559(); // 0x1f8 NEW_2
	goto Label_488; // 0x1fa Jump
}


func_873()
{
	var_50_string = "oob1Worker3"; // 0x36a PushS
	var_51_int = 1; // 0x36b PushI
	SetVariable(var_50_string, var_51_int); // 0x36c Func
	return 0; // 0x36e Return
}


func_879(var_16_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x36f PushV
	var_20_string = "Knife is given"; // 0x370 PushS
	Trace(var_20_string); // 0x371 Func
	CreateInvItem(var_19_object); // 0x373 Func
	var_21_string = "Knife"; // 0x375 PushS
	SetItemName(var_21_string); // 0x376 ObjFunc
	var_22_string = "durability"; // 0x378 PushS
	var_23_int = 70; // 0x379 PushI
	SetProperty(var_22_string, var_23_int); // 0x37a ObjFunc
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; // 0x37c PushV
	var_24_object = var_16_object; // 0x37d Mov
	var_25_object = var_19_object; // 0x37e Mov
	var_26_int = 1; // 0x37f MovI
	func_808(var_25_object, var_26_int); // 0x380 NEW_2
	return 2; // 0x382 Return
}


func_753(var_102_string, var_103_bool)
{
	var_106_bool = 0; var_107_float = 0; var_108_float = 0; var_109_bool = 0; var_110_float = 0; var_111_float = 0; // 0x2f1 PushV
	lshHasAnimation(var_109_bool, var_102_string); // 0x2f2 Func
	var_112_bool = var_109_bool; // 0x2f4 Push
	if(var_112_bool == 0) goto Label_763; // 0x2f5 JumpB
	lshGetAnimTimes(var_102_string, var_110_float, var_111_float); // 0x2f6 Func
	lshPlayAnimation(var_110_float, var_111_float, var_103_bool); // 0x2f8 Func
	goto Label_767; // 0x2fa Jump
	
Label_767:
	return 6; // 0x2ff Return
	
Label_763:
	var_113_string = "Can't find lsh animation : "; // 0x2fb PushS
	var_114_int = var_113_string + var_102_string; // 0x2fc Add
	Trace(var_114_int); // 0x2fd Func
}


func_508(var_0_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x1fc PushV
	var_0_object = 1; // 0x1fd TMovB
	IsLoaded(var_14_bool); // 0x1fe Func
	var_15_bool = 0; // 0x200 PushV
	var_15_bool = 0; // 0x201 MovB
	var_16_bool = var_14_bool == 0; // 0x202 Not
	if(var_16_bool == 0) goto Label_521; // 0x203 JumpB
	var_17_bool = 0; // 0x204 PushV
	func_557(var_17_bool); // 0x205 NEW_2
	if(var_17_bool == 0) goto Label_521; // 0x207 JumpB
	var_15_bool = 1; // 0x208 MovB
	
Label_521:
	if(var_15_bool == 0) goto Label_527; // 0x209 JumpB
	var_18_object = Obj(); // 0x20a PushV
	func_775(var_18_object); // 0x20b NEW_2
	RemoveActor(var_18_object); // 0x20d Func
	
Label_527:
	return 2; // 0x20f Return
}


func_638(var_71_bool)
{
	var_71_bool = 1; // 0x27e MovB
	return 0; // 0x27f Return
}


