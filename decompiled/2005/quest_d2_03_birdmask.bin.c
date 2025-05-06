task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0x9b PushI
	if(var_9_int == 0) goto Label_396; // 0x9c JumpB
	func_586(); // 0x9e NEW_2
	var_11_int = 7988; // 0xa0 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xa1 Eq
	if(var_12_bool == 0) goto Label_173; // 0xa2 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xa3 PushV
	var_13_object = var_1_object; // 0xa4 MovT
	var_14_object = var_0_object; // 0xa5 MovT
	func_619(); // 0xa6 NEW_2
	var_17_object = Obj(); var_18_object = Obj(); // 0xa8 PushV
	var_17_object = var_1_object; // 0xa9 MovT
	var_18_object = var_0_object; // 0xaa MovT
	func_625(); // 0xab NEW_2
	
Label_173:
	var_60_int = 7990; // 0xad PushI
	var_61_bool = var_8_bool == var_60_int; // 0xae Eq
	if(var_61_bool == 0) goto Label_186; // 0xaf JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xb0 PushV
	var_62_object = var_1_object; // 0xb1 MovT
	var_63_object = var_0_object; // 0xb2 MovT
	func_619(); // 0xb3 NEW_2
	var_64_object = Obj(); var_65_object = Obj(); // 0xb5 PushV
	var_64_object = var_1_object; // 0xb6 MovT
	var_65_object = var_0_object; // 0xb7 MovT
	func_625(); // 0xb8 NEW_2
	
Label_186:
	var_66_int = 7991; // 0xba PushI
	var_67_bool = var_8_bool == var_66_int; // 0xbb Eq
	if(var_67_bool == 0) goto Label_199; // 0xbc JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0xbd PushV
	var_68_object = var_1_object; // 0xbe MovT
	var_69_object = var_0_object; // 0xbf MovT
	func_619(); // 0xc0 NEW_2
	var_70_object = Obj(); var_71_object = Obj(); // 0xc2 PushV
	var_70_object = var_1_object; // 0xc3 MovT
	var_71_object = var_0_object; // 0xc4 MovT
	func_625(); // 0xc5 NEW_2
	
Label_199:
	var_72_int = 7992; // 0xc7 PushI
	var_73_bool = var_8_bool == var_72_int; // 0xc8 Eq
	if(var_73_bool == 0) goto Label_207; // 0xc9 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0xca PushV
	var_74_object = var_1_object; // 0xcb MovT
	var_75_object = var_0_object; // 0xcc MovT
	func_619(); // 0xcd NEW_2
	
Label_207:
	var_76_int = 7616; // 0xcf PushI
	var_77_bool = var_7_bool == var_76_int; // 0xd0 Eq
	if(var_77_bool == 0) goto Label_230; // 0xd1 JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0xd2 PushV
	var_79_object = var_1_object; // 0xd3 MovT
	func_648(var_79_object); // 0xd4 NEW_2
	if(var_78_bool == 0) goto Label_230; // 0xd6 JumpB
	var_86_string = ""; // 0xd7 PushV
	var_86_string = "Neutral"; // 0xd8 MovS
	func_132(var_8_bool, var_86_string); // 0xd9 NEW_2
	var_103_int = 506910; // 0xdb PushI
	SetMessage(var_103_int); // 0xdc TObjFunc
	ClearReplies(); // 0xde TObjFunc
	var_104_int = 506911; // 0xe0 PushI
	var_105_int = 7618; // 0xe1 PushI
	var_106_int = 7617; // 0xe2 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xe3 TObjFunc
	return 0; // 0xe5 Return
	
Label_230:
	var_107_int = 7993; // 0xe6 PushI
	var_108_bool = var_7_bool == var_107_int; // 0xe7 Eq
	if(var_108_bool == 0) goto Label_233; // 0xe8 JumpB
	
Label_233:
	var_109_int = 7995; // 0xe9 PushI
	var_110_bool = var_7_bool == var_109_int; // 0xea Eq
	if(var_110_bool == 0) goto Label_251; // 0xeb JumpB
	var_111_string = ""; // 0xec PushV
	var_111_string = "Neutral"; // 0xed MovS
	func_132(var_8_bool, var_111_string); // 0xee NEW_2
	var_112_int = 507255; // 0xf0 PushI
	SetMessage(var_112_int); // 0xf1 TObjFunc
	ClearReplies(); // 0xf3 TObjFunc
	var_113_int = 507256; // 0xf5 PushI
	var_114_int = 7997; // 0xf6 PushI
	var_115_int = 7996; // 0xf7 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0xf8 TObjFunc
	return 0; // 0xfa Return
	
Label_251:
	var_116_int = 7997; // 0xfb PushI
	var_117_bool = var_7_bool == var_116_int; // 0xfc Eq
	if(var_117_bool == 0) goto Label_274; // 0xfd JumpB
	var_118_string = ""; // 0xfe PushV
	var_118_string = "Neutral"; // 0xff MovS
	func_132(var_8_bool, var_118_string); // 0x100 NEW_2
	var_119_int = 507257; // 0x102 PushI
	SetMessage(var_119_int); // 0x103 TObjFunc
	ClearReplies(); // 0x105 TObjFunc
	var_120_int = 507258; // 0x107 PushI
	var_121_int = 7999; // 0x108 PushI
	var_122_int = 7998; // 0x109 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x10a TObjFunc
	var_123_int = 507261; // 0x10c PushI
	var_124_int = 7618; // 0x10d PushI
	var_125_int = 8002; // 0x10e PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x10f TObjFunc
	return 0; // 0x111 Return
	
Label_274:
	var_126_int = 7999; // 0x112 PushI
	var_127_bool = var_7_bool == var_126_int; // 0x113 Eq
	if(var_127_bool == 0) goto Label_292; // 0x114 JumpB
	var_128_string = ""; // 0x115 PushV
	var_128_string = "Neutral"; // 0x116 MovS
	func_132(var_8_bool, var_128_string); // 0x117 NEW_2
	var_129_int = 507259; // 0x119 PushI
	SetMessage(var_129_int); // 0x11a TObjFunc
	ClearReplies(); // 0x11c TObjFunc
	var_130_int = 507260; // 0x11e PushI
	var_131_int = 7618; // 0x11f PushI
	var_132_int = 8000; // 0x120 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x121 TObjFunc
	return 0; // 0x123 Return
	
Label_292:
	var_133_int = 7618; // 0x124 PushI
	var_134_bool = var_7_bool == var_133_int; // 0x125 Eq
	if(var_134_bool == 0) goto Label_320; // 0x126 JumpB
	var_135_string = ""; // 0x127 PushV
	var_135_string = "Neutral"; // 0x128 MovS
	func_132(var_8_bool, var_135_string); // 0x129 NEW_2
	var_136_int = 506912; // 0x12b PushI
	SetMessage(var_136_int); // 0x12c TObjFunc
	ClearReplies(); // 0x12e TObjFunc
	var_137_int = 507242; // 0x130 PushI
	var_138_int = 7983; // 0x131 PushI
	var_139_int = 7982; // 0x132 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x133 TObjFunc
	var_140_bool = 0; var_141_object = Obj(); // 0x135 PushV
	var_141_object = var_1_object; // 0x136 MovT
	func_660(var_141_object); // 0x137 NEW_2
	if(var_140_bool == 0) goto Label_319; // 0x139 JumpB
	var_146_int = 507252; // 0x13a PushI
	var_147_int = -1; // 0x13b PushI
	var_148_int = 7992; // 0x13c PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x13d TObjFunc
	
Label_319:
	return 0; // 0x13f Return
	
Label_320:
	var_149_int = 7983; // 0x140 PushI
	var_150_bool = var_7_bool == var_149_int; // 0x141 Eq
	if(var_150_bool == 0) goto Label_343; // 0x142 JumpB
	var_151_string = ""; // 0x143 PushV
	var_151_string = "Neutral"; // 0x144 MovS
	func_132(var_8_bool, var_151_string); // 0x145 NEW_2
	var_152_int = 507243; // 0x147 PushI
	SetMessage(var_152_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_153_int = 507244; // 0x14c PushI
	var_154_int = 7985; // 0x14d PushI
	var_155_int = 7984; // 0x14e PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x14f TObjFunc
	var_156_int = 507251; // 0x151 PushI
	var_157_int = -1; // 0x152 PushI
	var_158_int = 7991; // 0x153 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x154 TObjFunc
	return 0; // 0x156 Return
	
Label_343:
	var_159_int = 7985; // 0x157 PushI
	var_160_bool = var_7_bool == var_159_int; // 0x158 Eq
	if(var_160_bool == 0) goto Label_366; // 0x159 JumpB
	var_161_string = ""; // 0x15a PushV
	var_161_string = "Neutral"; // 0x15b MovS
	func_132(var_8_bool, var_161_string); // 0x15c NEW_2
	var_162_int = 507245; // 0x15e PushI
	SetMessage(var_162_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_163_int = 507246; // 0x163 PushI
	var_164_int = 7987; // 0x164 PushI
	var_165_int = 7986; // 0x165 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x166 TObjFunc
	var_166_int = 507250; // 0x168 PushI
	var_167_int = -1; // 0x169 PushI
	var_168_int = 7990; // 0x16a PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x16b TObjFunc
	return 0; // 0x16d Return
	
Label_366:
	var_169_int = 7987; // 0x16e PushI
	var_170_bool = var_7_bool == var_169_int; // 0x16f Eq
	if(var_170_bool == 0) goto Label_384; // 0x170 JumpB
	var_171_string = ""; // 0x171 PushV
	var_171_string = "Neutral"; // 0x172 MovS
	func_132(var_8_bool, var_171_string); // 0x173 NEW_2
	var_172_int = 507247; // 0x175 PushI
	SetMessage(var_172_int); // 0x176 TObjFunc
	ClearReplies(); // 0x178 TObjFunc
	var_173_int = 507248; // 0x17a PushI
	var_174_int = -1; // 0x17b PushI
	var_175_int = 7988; // 0x17c PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x17d TObjFunc
	return 0; // 0x17f Return
	
Label_384:
	var_3_string = 1; // 0x180 TMovB
	var_176_bool = 0; // 0x181 PushV
	func_768(var_176_bool); // 0x182 NEW_2
	if(var_176_bool == 0) goto Label_392; // 0x184 JumpB
	lshStopAnimation(); // 0x185 Func
	goto Label_394; // 0x187 Jump
	
Label_394:
	return 0; // 0x18a Return
	
Label_392:
	StopAnimation(); // 0x188 Func
	
Label_396:
	return 0; // 0x18c Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x192 PushV
	var_10_object = var_1_object; // 0x193 PushT
	if(var_10_object == 0) goto Label_406; // 0x194 JumpB
	return 2; // 0x195 Return
	
Label_406:
	var_11_string = "d2q03"; // 0x196 PushS
	GetVariable(var_11_string, var_9_int); // 0x197 Func
	var_12_int = -1; // 0x199 PushI
	var_13_bool = var_9_int != var_12_int; // 0x19a Neq
	if(var_13_bool == 0) goto Label_419; // 0x19b JumpB
	var_14_int = 0; var_15_object = Obj(); // 0x19c PushV
	var_15_object = var_7_object; // 0x19d Mov
	TaskCall(0); // 0x19e TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x19f NEW_2
	TaskReturn(); // 0x1a0 TaskReturn
	var_1_object = 1; // 0x1a2 TMovB
	
Label_419:
	return 2; // 0x1a3 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1a8 PushV
	var_10_string = "cleanup"; // 0x1a9 PushS
	var_11_bool = var_7_string == var_10_string; // 0x1aa Eq
	if(var_11_bool == 0) goto Label_447; // 0x1ab JumpB
	var_0_object = 1; // 0x1ac TMovB
	IsLoaded(var_9_bool); // 0x1ad Func
	var_12_bool = 0; // 0x1af PushV
	var_12_bool = 0; // 0x1b0 MovB
	var_13_bool = var_9_bool == 0; // 0x1b1 Not
	if(var_13_bool == 0) goto Label_440; // 0x1b2 JumpB
	var_14_bool = 0; // 0x1b3 PushV
	func_468(var_14_bool); // 0x1b4 NEW_2
	if(var_14_bool == 0) goto Label_440; // 0x1b6 JumpB
	var_12_bool = 1; // 0x1b7 MovB
	
Label_440:
	if(var_12_bool == 0) goto Label_446; // 0x1b8 JumpB
	var_15_object = Obj(); // 0x1b9 PushV
	func_593(var_15_object); // 0x1ba NEW_2
	RemoveActor(var_15_object); // 0x1bc Func
	
Label_446:
	goto Label_451; // 0x1be Jump
	
Label_451:
	return 2; // 0x1c3 Return
	
Label_447:
	var_18_string = "restore"; // 0x1bf PushS
	var_19_bool = var_7_string == var_18_string; // 0x1c0 Eq
	if(var_19_bool == 0) goto Label_451; // 0x1c1 JumpB
	var_0_object = 0; // 0x1c2 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; // 0x1c4 PushV
	var_7_bool = 0; // 0x1c5 MovB
	var_8_object = var_0_object; // 0x1c6 PushT
	if(var_8_object == 0) goto Label_461; // 0x1c7 JumpB
	var_9_bool = 0; // 0x1c8 PushV
	func_468(var_9_bool); // 0x1c9 NEW_2
	if(var_9_bool == 0) goto Label_461; // 0x1cb JumpB
	var_7_bool = 1; // 0x1cc MovB
	
Label_461:
	if(var_7_bool == 0) goto Label_467; // 0x1cd JumpB
	var_10_object = Obj(); // 0x1ce PushV
	func_593(var_10_object); // 0x1cf NEW_2
	RemoveActor(var_10_object); // 0x1d1 Func
	
Label_467:
	return 0; // 0x1d3 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = 0; // 0x18d TMovB
	func_420(); // 0x18f NEW_2
	return 0; // 0x191 Return
}


func_768(var_67_bool)
{
	var_67_bool = 0; // 0x300 MovB
	return 0; // 0x301 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 130.0; // 0x4 MovF
	func_470(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_762(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_760(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_764(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_766(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_743(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_139_bool = var_24_bool == 0; // 0x38 Not
	if(var_139_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_140_object = Obj(); // 0x3f PushV
	var_140_object = var_15_object; // 0x40 Mov
	func_538(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_132(var_2_object, var_100_string)
{
	var_101_bool = 0; // 0x85 PushV
	func_768(var_101_bool); // 0x86 NEW_2
	var_102_bool = var_101_bool == 0; // 0x88 Not
	if(var_102_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_103_bool = var_100_string == var_2_object; // 0x8b Eq
	if(var_103_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_104_string = ""; var_105_bool = 0; // 0x8e PushV
	var_104_string = var_100_string; // 0x8f Mov
	var_106_string = ""; // 0x90 PushS
	var_107_bool = var_100_string == var_106_string; // 0x91 Eq
	if(var_107_bool == 0) goto Label_149; // 0x92 JumpB
	var_105_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_571(var_104_string, var_105_bool); // 0x96 NEW_2
	var_2_object = var_100_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_105_bool = 1; // 0x95 MovB
}


func_648(var_92_bool)
{
	var_94_int = 0; var_95_string = ""; // 0x289 PushV
	var_95_string = "ood2Birdmask1"; // 0x28a MovS
	func_609(var_94_int, var_95_string); // 0x28b NEW_2
	var_98_int = 0; // 0x28d PushI
	var_99_bool = var_94_int == var_98_int; // 0x28e Eq
	if(var_99_bool == 0) goto Label_658; // 0x28f JumpB
	var_92_bool = 1; // 0x290 MovB
	return 0; // 0x291 Return
	
Label_658:
	var_92_bool = 0; // 0x292 MovB
	return 0; // 0x293 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_102; // 0x4f JumpB
	var_92_bool = 0; var_93_object = Obj(); // 0x50 PushV
	var_93_object = var_1_object; // 0x51 MovT
	func_648(var_93_object); // 0x52 NEW_2
	if(var_92_bool == 0) goto Label_100; // 0x54 JumpB
	var_100_string = ""; // 0x55 PushV
	var_100_string = "Neutral"; // 0x56 MovS
	func_132(var_86_object, var_100_string); // 0x57 NEW_2
	var_117_int = 506910; // 0x59 PushI
	SetMessage(var_117_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_118_int = 506911; // 0x5e PushI
	var_119_int = 7618; // 0x5f PushI
	var_120_int = 7617; // 0x60 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_121_bool = 0; // 0x66 PushV
	func_768(var_121_bool); // 0x67 NEW_2
	if(var_121_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_122_string = var_3_string; // 0x6c PushT
	if(var_122_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_123_string = ""; // 0x6f PushV
	var_123_string = var_2_object; // 0x70 MovT
	func_555(var_123_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_134_string = "all"; // 0x75 PushS
	var_135_string = "idle"; // 0x76 PushS
	PlayAnimation(var_134_string, var_135_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_136_string = var_3_string; // 0x7b PushT
	if(var_136_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_137_string = "all"; // 0x7e PushS
	var_138_string = "idle"; // 0x7f PushS
	PlayAnimation(var_137_string, var_138_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
	
Label_100:
	return 0; // 0x64 Return
}


func_586()
{
	var_10_bool = 0; // 0x24a PushV
	func_768(var_10_bool); // 0x24b NEW_2
	if(var_10_bool == 0) goto Label_592; // 0x24d JumpB
	lshStopSpeech(); // 0x24e Func
	
Label_592:
	return 0; // 0x250 Return
}


func_593(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x251 PushV
	self(var_12_object); // 0x252 Func
	var_10_object = var_12_object; // 0x254 Mov
	return 2; // 0x255 Return
}


func_660(var_140_bool)
{
	var_142_int = 0; var_143_string = ""; // 0x295 PushV
	var_143_string = "d2q03"; // 0x296 MovS
	func_609(var_142_int, var_143_string); // 0x297 NEW_2
	var_144_int = 3; // 0x299 PushI
	var_145_bool = var_142_int == var_144_int; // 0x29a Eq
	if(var_145_bool == 0) goto Label_670; // 0x29b JumpB
	var_140_bool = 1; // 0x29c MovB
	return 0; // 0x29d Return
	
Label_670:
	var_140_bool = 0; // 0x29e MovB
	return 0; // 0x29f Return
}


func_468(var_9_bool)
{
	var_9_bool = 1; // 0x1d4 MovB
	return 0; // 0x1d5 Return
}


func_470(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1d6 PushV
	GetPosition(var_38_cvector); // 0x1d7 ObjFunc
	GetEyesHeight(var_37_float); // 0x1d9 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1db PushE
	var_46_float = var_46_float + var_37_float; // 0x1dc Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1dd PopE
	GetPosition(var_39_cvector); // 0x1de Func
	GetEyesHeight(var_37_float); // 0x1e0 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1e2 PushE
	var_47_float = var_47_float + var_37_float; // 0x1e3 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1e4 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1e5 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1e6 PushE
	var_48_float = 0; // 0x1e7 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1e8 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x1e9 Or
	var_50_float = sqrt(var_49_int); // 0x1ea Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x1eb Div2
	var_41_cvector = -var_40_cvector; // 0x1ec Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x1ed Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1ee PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x1ef PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x1f0 Xor2
	func_599(var_52_cvector, var_53_cvector); // 0x1f1 NEW_2
	var_60_int = 25; // 0x1f3 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x1f4 Mult
	var_62_int = var_51_float + var_61_float; // 0x1f5 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x1f6 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x1f7 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x1f8 Add2
	IsOverrideActive(var_44_bool); // 0x1f9 Func
	var_64_bool = var_44_bool; // 0x1fb Push
	if(var_64_bool == 0) goto Label_511; // 0x1fc JumpB
	var_25_bool = 0; // 0x1fd MovB
	return 18; // 0x1fe Return
	
Label_511:
	StopWorld(); // 0x1ff Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x201 Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x203 PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x204 PushE
	Rotate(var_65_float, var_66_float); // 0x205 Func
	var_67_bool = 0; // 0x207 PushV
	func_768(var_67_bool); // 0x208 NEW_2
	if(var_67_bool == 0) goto Label_524; // 0x20a JumpB
	goto Label_532; // 0x20b Jump
	
Label_532:
	CameraWaitForPlayFinish(); // 0x214 Func
	ResumeWorld(); // 0x216 Func
	var_25_bool = 1; // 0x218 MovB
	return 18; // 0x219 Return
	
Label_524:
	var_68_string = "head"; // 0x20c PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x20d Func
	var_69_bool = var_45_bool; // 0x20f Push
	if(var_69_bool == 0) goto Label_532; // 0x210 JumpB
	var_70_string = "head"; // 0x211 PushS
	LookAsyncCamera(var_70_string); // 0x212 Func
}


func_599(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x257 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x258 Or
	var_56_float = sqrt(var_57_int); // 0x259 Sqrt2
	var_58_float = 0.0; // 0x25a PushF
	var_59_bool = var_56_float < var_58_float; // 0x25b LT
	if(var_59_bool == 0) goto Label_607; // 0x25c JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x25d MovV
	return 2; // 0x25e Return
	
Label_607:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x25f Div2
	return 2; // 0x260 Return
}


func_726(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); // 0x2d6 PushV
	GetMainOutdoorScene(var_26_object); // 0x2d7 Func
	var_28_bool = var_26_object == 0; // 0x2d9 NullEq
	if(var_28_bool == 0) goto Label_737; // 0x2da JumpB
	var_29_string = "Can't find main outdoor scene"; // 0x2db PushS
	Trace(var_29_string); // 0x2dc Func
	var_27_object = 0; // 0x2de SetNull
	var_23_object = var_27_object; // 0x2df Mov
	return 4; // 0x2e0 Return
	
Label_737:
	GetMap(var_27_object); // 0x2e1 ObjFunc
	var_23_object = var_27_object; // 0x2e3 Mov
	return 4; // 0x2e4 Return
}


func_538()
{
	var_141_bool = 0; var_142_bool = 0; // 0x21a PushV
	CameraSwitchToNormal(); // 0x21b Func
	var_143_bool = 0; // 0x21d PushV
	func_768(var_143_bool); // 0x21e NEW_2
	if(var_143_bool == 0) goto Label_546; // 0x220 JumpB
	goto Label_554; // 0x221 Jump
	
Label_554:
	return 2; // 0x22a Return
	
Label_546:
	var_144_string = "head"; // 0x222 PushS
	HasAnimationTrack(var_142_bool, var_144_string); // 0x223 Func
	var_145_bool = var_142_bool; // 0x225 Push
	if(var_145_bool == 0) goto Label_554; // 0x226 JumpB
	var_146_string = "head"; // 0x227 PushS
	UnlookAsync(var_146_string); // 0x228 Func
}


func_672()
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x2a0 PushV
	var_39_int = 133; // 0x2a1 PushI
	var_40_int = 2; // 0x2a2 PushI
	var_41_int = 515270; // 0x2a3 PushI
	CreateDiaryEntry(var_38_object, var_39_int, var_40_int, var_41_int); // 0x2a4 Func
	var_42_bool = 0; var_43_object = Obj(); var_44_int = 0; // 0x2a6 PushV
	var_43_object = var_38_object; // 0x2a7 Mov
	var_44_int = 12; // 0x2a8 MovI
	func_698(var_42_bool, var_43_object, var_44_int); // 0x2a9 NEW_2
	return 2; // 0x2ab Return
}


func_609(var_94_int, var_95_string)
{
	var_96_int = 0; var_97_int = 0; // 0x261 PushV
	GetVariable(var_95_string, var_97_int); // 0x262 Func
	var_94_int = var_97_int; // 0x264 Mov
	return 2; // 0x265 Return
}


func_762(var_72_int)
{
	var_72_int = 504029; // 0x2fa MovI
	return 0; // 0x2fb Return
}


func_420()
{
	
Label_420:
	Hold(); // 0x1a4 Func
	goto Label_420; // 0x1a6 Jump
}


func_614(var_34_float)
{
	var_35_float = 0; var_36_float = 0; // 0x266 PushV
	GetGameTime(var_36_float); // 0x267 Func
	var_34_float = var_36_float; // 0x269 Mov
	return 2; // 0x26a Return
}


func_743(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x2e7 PushV
	var_79_string = "branch"; // 0x2e8 PushS
	GetVariable(var_79_string, var_78_int); // 0x2e9 Func
	var_80_int = 0; // 0x2eb PushI
	var_81_bool = var_78_int == var_80_int; // 0x2ec Eq
	if(var_81_bool == 0) goto Label_753; // 0x2ed JumpB
	var_76_int = 1; // 0x2ee MovI
	return 2; // 0x2ef Return
	
Label_753:
	var_82_int = 1; // 0x2f1 PushI
	var_83_bool = var_78_int == var_82_int; // 0x2f2 Eq
	if(var_83_bool == 0) goto Label_758; // 0x2f3 JumpB
	var_76_int = 2; // 0x2f4 MovI
	return 2; // 0x2f5 Return
	
Label_758:
	var_76_int = 3; // 0x2f6 MovI
	return 2; // 0x2f7 Return
}


func_555(var_123_string)
{
	var_124_bool = 0; var_125_float = 0; var_126_float = 0; var_127_bool = 0; var_128_float = 0; var_129_float = 0; // 0x22b PushV
	lshHasAnimation(var_127_bool, var_123_string); // 0x22c Func
	var_130_bool = var_127_bool; // 0x22e Push
	if(var_130_bool == 0) goto Label_566; // 0x22f JumpB
	lshGetAnimTimes(var_123_string, var_128_float, var_129_float); // 0x230 Func
	var_131_bool = 0; // 0x232 PushB
	lshPlayAnimation(var_128_float, var_129_float, var_131_bool); // 0x233 Func
	goto Label_570; // 0x235 Jump
	
Label_570:
	return 6; // 0x23a Return
	
Label_566:
	var_132_string = "Can't find lsh animation : "; // 0x236 PushS
	var_133_int = var_132_string + var_123_string; // 0x237 Add
	Trace(var_133_int); // 0x238 Func
}


func_619()
{
	var_15_string = "ood2Birdmask1"; // 0x26c PushS
	var_16_int = 1; // 0x26d PushI
	SetVariable(var_15_string, var_16_int); // 0x26e Func
	return 0; // 0x270 Return
}


func_685(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x2ad PushV
	GetDiaryRoot(var_53_object); // 0x2ae Func
	var_54_bool = var_53_object == 0; // 0x2b0 Not
	if(var_54_bool == 0) goto Label_695; // 0x2b1 JumpB
	var_55_string = "Can't retrieve diary root"; // 0x2b2 PushS
	Trace(var_55_string); // 0x2b3 Func
	var_51_object = 0; // 0x2b5 MovB
	return 2; // 0x2b6 Return
	
Label_695:
	var_51_object = var_53_object; // 0x2b7 Mov
	return 2; // 0x2b8 Return
}


func_625()
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x271 PushV
	var_21_string = "d2q03"; // 0x272 PushS
	var_22_int = 3; // 0x273 PushI
	SetVariable(var_21_string, var_22_int); // 0x274 Func
	var_23_object = Obj(); // 0x276 PushV
	func_726(var_23_object); // 0x277 NEW_2
	var_20_object = var_23_object; // 0x278 Mov
	var_30_string = "d2q03BirdmaskGotoLara"; // 0x27a PushS
	var_31_string = "pt_map_lara"; // 0x27b PushS
	var_32_int = 0; // 0x27c PushI
	var_33_int = 515293; // 0x27d PushI
	var_34_float = 0; // 0x27e PushV
	func_614(var_34_float); // 0x27f NEW_2
	AddMark(var_30_string, var_31_string, var_32_int, var_33_int, var_34_float); // 0x281 ObjFunc
	func_672(); // 0x284 NEW_2
	return 2; // 0x286 Return
}


func_760(var_73_int)
{
	var_73_int = 515571; // 0x2f8 MovI
	return 0; // 0x2f9 Return
}


func_698(var_42_bool, var_43_object, var_44_int)
{
	var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0; // 0x2ba PushV
	var_51_object = Obj(); // 0x2bb PushV
	func_685(var_51_object); // 0x2bc NEW_2
	var_48_object = var_51_object; // 0x2bd Mov
	Find(var_44_int, var_49_object); // 0x2bf ObjFunc
	var_56_bool = var_49_object == 0; // 0x2c1 Not
	if(var_56_bool == 0) goto Label_713; // 0x2c2 JumpB
	var_57_string = "Can't find diary parent with id: "; // 0x2c3 PushS
	var_58_int = var_57_string + var_44_int; // 0x2c4 Add
	Trace(var_58_int); // 0x2c5 Func
	var_42_bool = 0; // 0x2c7 MovB
	return 6; // 0x2c8 Return
	
Label_713:
	AddChild(var_43_object); // 0x2c9 ObjFunc
	var_59_int = 7; // 0x2cb PushI
	SendWorldWndMessage(var_59_int); // 0x2cc Func
	GetCategory(var_50_int); // 0x2ce ObjFunc
	SetDiarySection(var_50_int); // 0x2d0 Func
	var_42_bool = 0; // 0x2d2 MovB
	return 6; // 0x2d3 Return
}


func_571(var_104_string, var_105_bool)
{
	var_108_bool = 0; var_109_float = 0; var_110_float = 0; var_111_bool = 0; var_112_float = 0; var_113_float = 0; // 0x23b PushV
	lshHasAnimation(var_111_bool, var_104_string); // 0x23c Func
	var_114_bool = var_111_bool; // 0x23e Push
	if(var_114_bool == 0) goto Label_581; // 0x23f JumpB
	lshGetAnimTimes(var_104_string, var_112_float, var_113_float); // 0x240 Func
	lshPlayAnimation(var_112_float, var_113_float, var_105_bool); // 0x242 Func
	goto Label_585; // 0x244 Jump
	
Label_585:
	return 6; // 0x249 Return
	
Label_581:
	var_115_string = "Can't find lsh animation : "; // 0x245 PushS
	var_116_int = var_115_string + var_104_string; // 0x246 Add
	Trace(var_116_int); // 0x247 Func
}


func_764(var_74_string)
{
	var_74_string = "ui/NPC_bmask.png"; // 0x2fc MovS
	return 0; // 0x2fd Return
}


func_766(var_75_string)
{
	var_75_string = "ui/NPC_bmask_b.png"; // 0x2fe MovS
	return 0; // 0x2ff Return
}


