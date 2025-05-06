task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0xa5 PushI
	if(var_9_int == 0) goto Label_431; // 0xa6 JumpB
	func_623(); // 0xa8 NEW_2
	var_11_int = 7988; // 0xaa PushI
	var_12_bool = var_8_bool == var_11_int; // 0xab Eq
	if(var_12_bool == 0) goto Label_183; // 0xac JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xad PushV
	var_13_object = var_1_object; // 0xae MovT
	var_14_object = var_0_object; // 0xaf MovT
	func_656(); // 0xb0 NEW_2
	var_17_object = Obj(); var_18_object = Obj(); // 0xb2 PushV
	var_17_object = var_1_object; // 0xb3 MovT
	var_18_object = var_0_object; // 0xb4 MovT
	func_662(); // 0xb5 NEW_2
	
Label_183:
	var_60_int = 7990; // 0xb7 PushI
	var_61_bool = var_8_bool == var_60_int; // 0xb8 Eq
	if(var_61_bool == 0) goto Label_196; // 0xb9 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xba PushV
	var_62_object = var_1_object; // 0xbb MovT
	var_63_object = var_0_object; // 0xbc MovT
	func_656(); // 0xbd NEW_2
	var_64_object = Obj(); var_65_object = Obj(); // 0xbf PushV
	var_64_object = var_1_object; // 0xc0 MovT
	var_65_object = var_0_object; // 0xc1 MovT
	func_662(); // 0xc2 NEW_2
	
Label_196:
	var_66_int = 7991; // 0xc4 PushI
	var_67_bool = var_8_bool == var_66_int; // 0xc5 Eq
	if(var_67_bool == 0) goto Label_209; // 0xc6 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0xc7 PushV
	var_68_object = var_1_object; // 0xc8 MovT
	var_69_object = var_0_object; // 0xc9 MovT
	func_656(); // 0xca NEW_2
	var_70_object = Obj(); var_71_object = Obj(); // 0xcc PushV
	var_70_object = var_1_object; // 0xcd MovT
	var_71_object = var_0_object; // 0xce MovT
	func_662(); // 0xcf NEW_2
	
Label_209:
	var_72_int = 7992; // 0xd1 PushI
	var_73_bool = var_8_bool == var_72_int; // 0xd2 Eq
	if(var_73_bool == 0) goto Label_217; // 0xd3 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0xd4 PushV
	var_74_object = var_1_object; // 0xd5 MovT
	var_75_object = var_0_object; // 0xd6 MovT
	func_656(); // 0xd7 NEW_2
	
Label_217:
	var_76_int = 7616; // 0xd9 PushI
	var_77_bool = var_7_bool == var_76_int; // 0xda Eq
	if(var_77_bool == 0) goto Label_250; // 0xdb JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0xdc PushV
	var_79_object = var_1_object; // 0xdd MovT
	func_697(var_79_object); // 0xde NEW_2
	if(var_78_bool == 0) goto Label_250; // 0xe0 JumpB
	var_86_string = ""; // 0xe1 PushV
	var_86_string = "Neutral"; // 0xe2 MovS
	func_142(var_8_bool, var_86_string); // 0xe3 NEW_2
	var_103_int = 506910; // 0xe5 PushI
	SetMessage(var_103_int); // 0xe6 TObjFunc
	ClearReplies(); // 0xe8 TObjFunc
	var_104_int = 506911; // 0xea PushI
	var_105_int = 7618; // 0xeb PushI
	var_106_int = 7617; // 0xec PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xed TObjFunc
	var_107_bool = 0; var_108_object = Obj(); // 0xef PushV
	var_108_object = var_1_object; // 0xf0 MovT
	func_685(var_108_object); // 0xf1 NEW_2
	if(var_107_bool == 0) goto Label_249; // 0xf3 JumpB
	var_113_int = 507249; // 0xf4 PushI
	var_114_int = 7993; // 0xf5 PushI
	var_115_int = 7989; // 0xf6 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0xf7 TObjFunc
	
Label_249:
	return 0; // 0xf9 Return
	
Label_250:
	var_116_int = 7993; // 0xfa PushI
	var_117_bool = var_7_bool == var_116_int; // 0xfb Eq
	if(var_117_bool == 0) goto Label_268; // 0xfc JumpB
	var_118_string = ""; // 0xfd PushV
	var_118_string = "Neutral"; // 0xfe MovS
	func_142(var_8_bool, var_118_string); // 0xff NEW_2
	var_119_int = 507253; // 0x101 PushI
	SetMessage(var_119_int); // 0x102 TObjFunc
	ClearReplies(); // 0x104 TObjFunc
	var_120_int = 507254; // 0x106 PushI
	var_121_int = 7995; // 0x107 PushI
	var_122_int = 7994; // 0x108 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_123_int = 7995; // 0x10c PushI
	var_124_bool = var_7_bool == var_123_int; // 0x10d Eq
	if(var_124_bool == 0) goto Label_286; // 0x10e JumpB
	var_125_string = ""; // 0x10f PushV
	var_125_string = "Neutral"; // 0x110 MovS
	func_142(var_8_bool, var_125_string); // 0x111 NEW_2
	var_126_int = 507255; // 0x113 PushI
	SetMessage(var_126_int); // 0x114 TObjFunc
	ClearReplies(); // 0x116 TObjFunc
	var_127_int = 507256; // 0x118 PushI
	var_128_int = 7997; // 0x119 PushI
	var_129_int = 7996; // 0x11a PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x11b TObjFunc
	return 0; // 0x11d Return
	
Label_286:
	var_130_int = 7997; // 0x11e PushI
	var_131_bool = var_7_bool == var_130_int; // 0x11f Eq
	if(var_131_bool == 0) goto Label_309; // 0x120 JumpB
	var_132_string = ""; // 0x121 PushV
	var_132_string = "Neutral"; // 0x122 MovS
	func_142(var_8_bool, var_132_string); // 0x123 NEW_2
	var_133_int = 507257; // 0x125 PushI
	SetMessage(var_133_int); // 0x126 TObjFunc
	ClearReplies(); // 0x128 TObjFunc
	var_134_int = 507258; // 0x12a PushI
	var_135_int = 7999; // 0x12b PushI
	var_136_int = 7998; // 0x12c PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x12d TObjFunc
	var_137_int = 507261; // 0x12f PushI
	var_138_int = 7618; // 0x130 PushI
	var_139_int = 8002; // 0x131 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_140_int = 7999; // 0x135 PushI
	var_141_bool = var_7_bool == var_140_int; // 0x136 Eq
	if(var_141_bool == 0) goto Label_327; // 0x137 JumpB
	var_142_string = ""; // 0x138 PushV
	var_142_string = "Neutral"; // 0x139 MovS
	func_142(var_8_bool, var_142_string); // 0x13a NEW_2
	var_143_int = 507259; // 0x13c PushI
	SetMessage(var_143_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_144_int = 507260; // 0x141 PushI
	var_145_int = 7618; // 0x142 PushI
	var_146_int = 8000; // 0x143 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x144 TObjFunc
	return 0; // 0x146 Return
	
Label_327:
	var_147_int = 7618; // 0x147 PushI
	var_148_bool = var_7_bool == var_147_int; // 0x148 Eq
	if(var_148_bool == 0) goto Label_355; // 0x149 JumpB
	var_149_string = ""; // 0x14a PushV
	var_149_string = "Neutral"; // 0x14b MovS
	func_142(var_8_bool, var_149_string); // 0x14c NEW_2
	var_150_int = 506912; // 0x14e PushI
	SetMessage(var_150_int); // 0x14f TObjFunc
	ClearReplies(); // 0x151 TObjFunc
	var_151_int = 507242; // 0x153 PushI
	var_152_int = 7983; // 0x154 PushI
	var_153_int = 7982; // 0x155 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x156 TObjFunc
	var_154_bool = 0; var_155_object = Obj(); // 0x158 PushV
	var_155_object = var_1_object; // 0x159 MovT
	func_709(var_155_object); // 0x15a NEW_2
	if(var_154_bool == 0) goto Label_354; // 0x15c JumpB
	var_160_int = 507252; // 0x15d PushI
	var_161_int = -1; // 0x15e PushI
	var_162_int = 7992; // 0x15f PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x160 TObjFunc
	
Label_354:
	return 0; // 0x162 Return
	
Label_355:
	var_163_int = 7983; // 0x163 PushI
	var_164_bool = var_7_bool == var_163_int; // 0x164 Eq
	if(var_164_bool == 0) goto Label_378; // 0x165 JumpB
	var_165_string = ""; // 0x166 PushV
	var_165_string = "Neutral"; // 0x167 MovS
	func_142(var_8_bool, var_165_string); // 0x168 NEW_2
	var_166_int = 507243; // 0x16a PushI
	SetMessage(var_166_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_167_int = 507244; // 0x16f PushI
	var_168_int = 7985; // 0x170 PushI
	var_169_int = 7984; // 0x171 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x172 TObjFunc
	var_170_int = 507251; // 0x174 PushI
	var_171_int = -1; // 0x175 PushI
	var_172_int = 7991; // 0x176 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x177 TObjFunc
	return 0; // 0x179 Return
	
Label_378:
	var_173_int = 7985; // 0x17a PushI
	var_174_bool = var_7_bool == var_173_int; // 0x17b Eq
	if(var_174_bool == 0) goto Label_401; // 0x17c JumpB
	var_175_string = ""; // 0x17d PushV
	var_175_string = "Neutral"; // 0x17e MovS
	func_142(var_8_bool, var_175_string); // 0x17f NEW_2
	var_176_int = 507245; // 0x181 PushI
	SetMessage(var_176_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_177_int = 507246; // 0x186 PushI
	var_178_int = 7987; // 0x187 PushI
	var_179_int = 7986; // 0x188 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x189 TObjFunc
	var_180_int = 507250; // 0x18b PushI
	var_181_int = -1; // 0x18c PushI
	var_182_int = 7990; // 0x18d PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_183_int = 7987; // 0x191 PushI
	var_184_bool = var_7_bool == var_183_int; // 0x192 Eq
	if(var_184_bool == 0) goto Label_419; // 0x193 JumpB
	var_185_string = ""; // 0x194 PushV
	var_185_string = "Neutral"; // 0x195 MovS
	func_142(var_8_bool, var_185_string); // 0x196 NEW_2
	var_186_int = 507247; // 0x198 PushI
	SetMessage(var_186_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_187_int = 507248; // 0x19d PushI
	var_188_int = -1; // 0x19e PushI
	var_189_int = 7988; // 0x19f PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x1a0 TObjFunc
	return 0; // 0x1a2 Return
	
Label_419:
	var_3_string = 1; // 0x1a3 TMovB
	var_190_bool = 0; // 0x1a4 PushV
	func_817(var_190_bool); // 0x1a5 NEW_2
	if(var_190_bool == 0) goto Label_427; // 0x1a7 JumpB
	lshStopAnimation(); // 0x1a8 Func
	goto Label_429; // 0x1aa Jump
	
Label_429:
	return 0; // 0x1ad Return
	
Label_427:
	StopAnimation(); // 0x1ab Func
	
Label_431:
	return 0; // 0x1af Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x1b5 PushV
	var_10_object = var_1_object; // 0x1b6 PushT
	if(var_10_object == 0) goto Label_441; // 0x1b7 JumpB
	return 2; // 0x1b8 Return
	
Label_441:
	var_11_string = "d2q03"; // 0x1b9 PushS
	GetVariable(var_11_string, var_9_int); // 0x1ba Func
	var_12_int = -1; // 0x1bc PushI
	var_13_bool = var_9_int != var_12_int; // 0x1bd Neq
	if(var_13_bool == 0) goto Label_454; // 0x1be JumpB
	var_14_int = 0; var_15_object = Obj(); // 0x1bf PushV
	var_15_object = var_7_object; // 0x1c0 Mov
	TaskCall(0); // 0x1c1 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x1c2 NEW_2
	TaskReturn(); // 0x1c3 TaskReturn
	var_1_object = 1; // 0x1c5 TMovB
	
Label_454:
	return 2; // 0x1c6 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1cb PushV
	var_10_string = "cleanup"; // 0x1cc PushS
	var_11_bool = var_7_string == var_10_string; // 0x1cd Eq
	if(var_11_bool == 0) goto Label_482; // 0x1ce JumpB
	var_0_object = 1; // 0x1cf TMovB
	IsLoaded(var_9_bool); // 0x1d0 Func
	var_12_bool = 0; // 0x1d2 PushV
	var_12_bool = 0; // 0x1d3 MovB
	var_13_bool = var_9_bool == 0; // 0x1d4 Not
	if(var_13_bool == 0) goto Label_475; // 0x1d5 JumpB
	var_14_bool = 0; // 0x1d6 PushV
	func_503(var_14_bool); // 0x1d7 NEW_2
	if(var_14_bool == 0) goto Label_475; // 0x1d9 JumpB
	var_12_bool = 1; // 0x1da MovB
	
Label_475:
	if(var_12_bool == 0) goto Label_481; // 0x1db JumpB
	var_15_object = Obj(); // 0x1dc PushV
	func_630(var_15_object); // 0x1dd NEW_2
	RemoveActor(var_15_object); // 0x1df Func
	
Label_481:
	goto Label_486; // 0x1e1 Jump
	
Label_486:
	return 2; // 0x1e6 Return
	
Label_482:
	var_18_string = "restore"; // 0x1e2 PushS
	var_19_bool = var_7_string == var_18_string; // 0x1e3 Eq
	if(var_19_bool == 0) goto Label_486; // 0x1e4 JumpB
	var_0_object = 0; // 0x1e5 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; // 0x1e7 PushV
	var_7_bool = 0; // 0x1e8 MovB
	var_8_object = var_0_object; // 0x1e9 PushT
	if(var_8_object == 0) goto Label_496; // 0x1ea JumpB
	var_9_bool = 0; // 0x1eb PushV
	func_503(var_9_bool); // 0x1ec NEW_2
	if(var_9_bool == 0) goto Label_496; // 0x1ee JumpB
	var_7_bool = 1; // 0x1ef MovB
	
Label_496:
	if(var_7_bool == 0) goto Label_502; // 0x1f0 JumpB
	var_10_object = Obj(); // 0x1f1 PushV
	func_630(var_10_object); // 0x1f2 NEW_2
	RemoveActor(var_10_object); // 0x1f4 Func
	
Label_502:
	return 0; // 0x1f6 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = 0; // 0x1b0 TMovB
	func_455(); // 0x1b2 NEW_2
	return 0; // 0x1b4 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 130.0; // 0x4 MovF
	func_505(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_811(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_809(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_813(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_815(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_792(var_77_int); // 0x22 NEW_2
	SetPlayerName(var_77_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_85_bool = var_22_bool; // 0x29 Push
	if(var_85_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x2f PushV
	var_86_object = var_15_object; // 0x30 Mov
	var_87_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_149_bool = var_24_bool == 0; // 0x38 Not
	if(var_149_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_150_object = Obj(); // 0x3f PushV
	var_150_object = var_15_object; // 0x40 Mov
	func_574(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_709(var_154_bool)
{
	var_156_int = 0; var_157_string = ""; // 0x2c6 PushV
	var_157_string = "d2q03"; // 0x2c7 MovS
	func_646(var_156_int, var_157_string); // 0x2c8 NEW_2
	var_158_int = 3; // 0x2ca PushI
	var_159_bool = var_156_int == var_158_int; // 0x2cb Eq
	if(var_159_bool == 0) goto Label_719; // 0x2cc JumpB
	var_154_bool = 1; // 0x2cd MovB
	return 0; // 0x2ce Return
	
Label_719:
	var_154_bool = 0; // 0x2cf MovB
	return 0; // 0x2d0 Return
}


func_646(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0; // 0x286 PushV
	GetVariable(var_96_string, var_98_int); // 0x287 Func
	var_95_int = var_98_int; // 0x289 Mov
	return 2; // 0x28a Return
}


func_775(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); // 0x307 PushV
	GetMainOutdoorScene(var_26_object); // 0x308 Func
	var_28_bool = var_26_object == 0; // 0x30a NullEq
	if(var_28_bool == 0) goto Label_786; // 0x30b JumpB
	var_29_string = "Can't find main outdoor scene"; // 0x30c PushS
	Trace(var_29_string); // 0x30d Func
	var_27_object = 0; // 0x30f SetNull
	var_23_object = var_27_object; // 0x310 Mov
	return 4; // 0x311 Return
	
Label_786:
	GetMap(var_27_object); // 0x312 ObjFunc
	var_23_object = var_27_object; // 0x314 Mov
	return 4; // 0x315 Return
}


func_455()
{
	
Label_455:
	Hold(); // 0x1c7 Func
	goto Label_455; // 0x1c9 Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_112; // 0x4f JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0x50 PushV
	var_94_object = var_1_object; // 0x51 MovT
	func_697(var_94_object); // 0x52 NEW_2
	if(var_93_bool == 0) goto Label_110; // 0x54 JumpB
	var_101_string = ""; // 0x55 PushV
	var_101_string = "Neutral"; // 0x56 MovS
	func_142(var_87_object, var_101_string); // 0x57 NEW_2
	var_118_int = 506910; // 0x59 PushI
	SetMessage(var_118_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_119_int = 506911; // 0x5e PushI
	var_120_int = 7618; // 0x5f PushI
	var_121_int = 7617; // 0x60 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x61 TObjFunc
	var_122_bool = 0; var_123_object = Obj(); // 0x63 PushV
	var_123_object = var_1_object; // 0x64 MovT
	func_685(var_123_object); // 0x65 NEW_2
	if(var_122_bool == 0) goto Label_109; // 0x67 JumpB
	var_128_int = 507249; // 0x68 PushI
	var_129_int = 7993; // 0x69 PushI
	var_130_int = 7989; // 0x6a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x6b TObjFunc
	
Label_109:
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_131_bool = 0; // 0x70 PushV
	func_817(var_131_bool); // 0x71 NEW_2
	if(var_131_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_132_string = var_3_string; // 0x76 PushT
	if(var_132_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_133_string = ""; // 0x79 PushV
	var_133_string = var_2_object; // 0x7a MovT
	func_592(var_133_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_144_string = "all"; // 0x7f PushS
	var_145_string = "idle"; // 0x80 PushS
	PlayAnimation(var_144_string, var_145_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_146_string = var_3_string; // 0x85 PushT
	if(var_146_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_147_string = "all"; // 0x88 PushS
	var_148_string = "idle"; // 0x89 PushS
	PlayAnimation(var_147_string, var_148_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
	
Label_110:
	return 0; // 0x6e Return
}


func_651(var_34_float)
{
	var_35_float = 0; var_36_float = 0; // 0x28b PushV
	GetGameTime(var_36_float); // 0x28c Func
	var_34_float = var_36_float; // 0x28e Mov
	return 2; // 0x28f Return
}


func_142(var_2_object, var_101_string)
{
	var_102_bool = 0; // 0x8f PushV
	func_817(var_102_bool); // 0x90 NEW_2
	var_103_bool = var_102_bool == 0; // 0x92 Not
	if(var_103_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_104_bool = var_101_string == var_2_object; // 0x95 Eq
	if(var_104_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_105_string = ""; var_106_bool = 0; // 0x98 PushV
	var_105_string = var_101_string; // 0x99 Mov
	var_107_string = ""; // 0x9a PushS
	var_108_bool = var_101_string == var_107_string; // 0x9b Eq
	if(var_108_bool == 0) goto Label_159; // 0x9c JumpB
	var_106_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_608(var_105_string, var_106_bool); // 0xa0 NEW_2
	var_2_object = var_101_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_106_bool = 1; // 0x9f MovB
}


func_656()
{
	var_15_string = "ood2Birdmask1"; // 0x291 PushS
	var_16_int = 1; // 0x292 PushI
	SetVariable(var_15_string, var_16_int); // 0x293 Func
	return 0; // 0x295 Return
}


func_592(var_133_string)
{
	var_134_bool = 0; var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_float = 0; var_139_float = 0; // 0x250 PushV
	lshHasAnimation(var_137_bool, var_133_string); // 0x251 Func
	var_140_bool = var_137_bool; // 0x253 Push
	if(var_140_bool == 0) goto Label_603; // 0x254 JumpB
	lshGetAnimTimes(var_133_string, var_138_float, var_139_float); // 0x255 Func
	var_141_bool = 0; // 0x257 PushB
	lshPlayAnimation(var_138_float, var_139_float, var_141_bool); // 0x258 Func
	goto Label_607; // 0x25a Jump
	
Label_607:
	return 6; // 0x25f Return
	
Label_603:
	var_142_string = "Can't find lsh animation : "; // 0x25b PushS
	var_143_int = var_142_string + var_133_string; // 0x25c Add
	Trace(var_143_int); // 0x25d Func
}


func_721()
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x2d1 PushV
	var_39_int = 133; // 0x2d2 PushI
	var_40_int = 2; // 0x2d3 PushI
	var_41_int = 515270; // 0x2d4 PushI
	CreateDiaryEntry(var_38_object, var_39_int, var_40_int, var_41_int); // 0x2d5 Func
	var_42_bool = 0; var_43_object = Obj(); var_44_int = 0; // 0x2d7 PushV
	var_43_object = var_38_object; // 0x2d8 Mov
	var_44_int = 12; // 0x2d9 MovI
	func_747(var_42_bool, var_43_object, var_44_int); // 0x2da NEW_2
	return 2; // 0x2dc Return
}


func_662()
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x296 PushV
	var_21_string = "d2q03"; // 0x297 PushS
	var_22_int = 3; // 0x298 PushI
	SetVariable(var_21_string, var_22_int); // 0x299 Func
	var_23_object = Obj(); // 0x29b PushV
	func_775(var_23_object); // 0x29c NEW_2
	var_20_object = var_23_object; // 0x29d Mov
	var_30_string = "d2q03BirdmaskGotoLara"; // 0x29f PushS
	var_31_string = "pt_map_lara"; // 0x2a0 PushS
	var_32_int = 0; // 0x2a1 PushI
	var_33_int = 515293; // 0x2a2 PushI
	var_34_float = 0; // 0x2a3 PushV
	func_651(var_34_float); // 0x2a4 NEW_2
	AddMark(var_30_string, var_31_string, var_32_int, var_33_int, var_34_float); // 0x2a6 ObjFunc
	func_721(); // 0x2a9 NEW_2
	return 2; // 0x2ab Return
}


func_792(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x318 PushV
	var_80_string = "branch"; // 0x319 PushS
	GetVariable(var_80_string, var_79_int); // 0x31a Func
	var_81_int = 0; // 0x31c PushI
	var_82_bool = var_79_int == var_81_int; // 0x31d Eq
	if(var_82_bool == 0) goto Label_802; // 0x31e JumpB
	var_77_int = 1; // 0x31f MovI
	return 2; // 0x320 Return
	
Label_802:
	var_83_int = 1; // 0x322 PushI
	var_84_bool = var_79_int == var_83_int; // 0x323 Eq
	if(var_84_bool == 0) goto Label_807; // 0x324 JumpB
	var_77_int = 2; // 0x325 MovI
	return 2; // 0x326 Return
	
Label_807:
	var_77_int = 3; // 0x327 MovI
	return 2; // 0x328 Return
}


func_734(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x2de PushV
	GetDiaryRoot(var_53_object); // 0x2df Func
	var_54_bool = var_53_object == 0; // 0x2e1 Not
	if(var_54_bool == 0) goto Label_744; // 0x2e2 JumpB
	var_55_string = "Can't retrieve diary root"; // 0x2e3 PushS
	Trace(var_55_string); // 0x2e4 Func
	var_51_object = 0; // 0x2e6 MovB
	return 2; // 0x2e7 Return
	
Label_744:
	var_51_object = var_53_object; // 0x2e8 Mov
	return 2; // 0x2e9 Return
}


func_608(var_105_string, var_106_bool)
{
	var_109_bool = 0; var_110_float = 0; var_111_float = 0; var_112_bool = 0; var_113_float = 0; var_114_float = 0; // 0x260 PushV
	lshHasAnimation(var_112_bool, var_105_string); // 0x261 Func
	var_115_bool = var_112_bool; // 0x263 Push
	if(var_115_bool == 0) goto Label_618; // 0x264 JumpB
	lshGetAnimTimes(var_105_string, var_113_float, var_114_float); // 0x265 Func
	lshPlayAnimation(var_113_float, var_114_float, var_106_bool); // 0x267 Func
	goto Label_622; // 0x269 Jump
	
Label_622:
	return 6; // 0x26e Return
	
Label_618:
	var_116_string = "Can't find lsh animation : "; // 0x26a PushS
	var_117_int = var_116_string + var_105_string; // 0x26b Add
	Trace(var_117_int); // 0x26c Func
}


func_809(var_74_int)
{
	var_74_int = 515571; // 0x329 MovI
	return 0; // 0x32a Return
}


func_811(var_73_int)
{
	var_73_int = 504029; // 0x32b MovI
	return 0; // 0x32c Return
}


func_747(var_42_bool, var_43_object, var_44_int)
{
	var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0; // 0x2eb PushV
	var_51_object = Obj(); // 0x2ec PushV
	func_734(var_51_object); // 0x2ed NEW_2
	var_48_object = var_51_object; // 0x2ee Mov
	Find(var_44_int, var_49_object); // 0x2f0 ObjFunc
	var_56_bool = var_49_object == 0; // 0x2f2 Not
	if(var_56_bool == 0) goto Label_762; // 0x2f3 JumpB
	var_57_string = "Can't find diary parent with id: "; // 0x2f4 PushS
	var_58_int = var_57_string + var_44_int; // 0x2f5 Add
	Trace(var_58_int); // 0x2f6 Func
	var_42_bool = 0; // 0x2f8 MovB
	return 6; // 0x2f9 Return
	
Label_762:
	AddChild(var_43_object); // 0x2fa ObjFunc
	var_59_int = 7; // 0x2fc PushI
	SendWorldWndMessage(var_59_int); // 0x2fd Func
	GetCategory(var_50_int); // 0x2ff ObjFunc
	SetDiarySection(var_50_int); // 0x301 Func
	var_42_bool = 0; // 0x303 MovB
	return 6; // 0x304 Return
}


func_813(var_75_string)
{
	var_75_string = "ui/NPC_bmask.png"; // 0x32d MovS
	return 0; // 0x32e Return
}


func_685(var_122_bool)
{
	var_124_int = 0; var_125_string = ""; // 0x2ae PushV
	var_125_string = "KnowTheater"; // 0x2af MovS
	func_646(var_124_int, var_125_string); // 0x2b0 NEW_2
	var_126_int = 1; // 0x2b2 PushI
	var_127_bool = var_124_int == var_126_int; // 0x2b3 Eq
	if(var_127_bool == 0) goto Label_695; // 0x2b4 JumpB
	var_122_bool = 1; // 0x2b5 MovB
	return 0; // 0x2b6 Return
	
Label_695:
	var_122_bool = 0; // 0x2b7 MovB
	return 0; // 0x2b8 Return
}


func_815(var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png"; // 0x32f MovS
	return 0; // 0x330 Return
}


func_623()
{
	var_10_bool = 0; // 0x26f PushV
	func_817(var_10_bool); // 0x270 NEW_2
	if(var_10_bool == 0) goto Label_629; // 0x272 JumpB
	lshStopSpeech(); // 0x273 Func
	
Label_629:
	return 0; // 0x275 Return
}


func_817(var_68_bool)
{
	var_68_bool = 0; // 0x331 MovB
	return 0; // 0x332 Return
}


func_505(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1f9 PushV
	GetPosition(var_38_cvector); // 0x1fa ObjFunc
	GetEyesHeight(var_37_float); // 0x1fc ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1fe PushE
	var_46_float = var_46_float + var_37_float; // 0x1ff Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x200 PopE
	GetPosition(var_39_cvector); // 0x201 Func
	GetEyesHeight(var_37_float); // 0x203 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x205 PushE
	var_47_float = var_47_float + var_37_float; // 0x206 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x207 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x208 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x209 PushE
	var_48_float = 0; // 0x20a MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x20b PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x20c Or
	var_50_float = sqrt(var_49_int); // 0x20d Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x20e Div2
	var_41_cvector = -var_40_cvector; // 0x20f Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x210 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x211 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x212 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x213 Xor2
	func_636(var_52_cvector, var_53_cvector); // 0x214 NEW_2
	var_60_int = 25; // 0x216 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x217 Mult
	var_62_int = var_51_float + var_61_float; // 0x218 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x219 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x21a Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x21b Add2
	IsOverrideActive(var_44_bool); // 0x21c Func
	var_64_bool = var_44_bool; // 0x21e Push
	if(var_64_bool == 0) goto Label_546; // 0x21f JumpB
	var_25_bool = 0; // 0x220 MovB
	return 18; // 0x221 Return
	
Label_546:
	StopWorld(); // 0x222 Func
	var_65_bool = 1; // 0x224 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x225 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x227 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x228 PushE
	Rotate(var_66_float, var_67_float); // 0x229 Func
	var_68_bool = 0; // 0x22b PushV
	func_817(var_68_bool); // 0x22c NEW_2
	if(var_68_bool == 0) goto Label_560; // 0x22e JumpB
	goto Label_568; // 0x22f Jump
	
Label_568:
	CameraWaitForPlayFinish(); // 0x238 Func
	ResumeWorld(); // 0x23a Func
	var_25_bool = 1; // 0x23c MovB
	return 18; // 0x23d Return
	
Label_560:
	var_69_string = "head"; // 0x230 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x231 Func
	var_70_bool = var_45_bool; // 0x233 Push
	if(var_70_bool == 0) goto Label_568; // 0x234 JumpB
	var_71_string = "head"; // 0x235 PushS
	LookAsyncCamera(var_71_string); // 0x236 Func
}


func_630(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x276 PushV
	self(var_12_object); // 0x277 Func
	var_10_object = var_12_object; // 0x279 Mov
	return 2; // 0x27a Return
}


func_503(var_9_bool)
{
	var_9_bool = 1; // 0x1f7 MovB
	return 0; // 0x1f8 Return
}


func_697(var_93_bool)
{
	var_95_int = 0; var_96_string = ""; // 0x2ba PushV
	var_96_string = "ood2Birdmask1"; // 0x2bb MovS
	func_646(var_95_int, var_96_string); // 0x2bc NEW_2
	var_99_int = 0; // 0x2be PushI
	var_100_bool = var_95_int == var_99_int; // 0x2bf Eq
	if(var_100_bool == 0) goto Label_707; // 0x2c0 JumpB
	var_93_bool = 1; // 0x2c1 MovB
	return 0; // 0x2c2 Return
	
Label_707:
	var_93_bool = 0; // 0x2c3 MovB
	return 0; // 0x2c4 Return
}


func_636(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x27c PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x27d Or
	var_56_float = sqrt(var_57_int); // 0x27e Sqrt2
	var_58_float = 0.0; // 0x27f PushF
	var_59_bool = var_56_float < var_58_float; // 0x280 LT
	if(var_59_bool == 0) goto Label_644; // 0x281 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x282 MovV
	return 2; // 0x283 Return
	
Label_644:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x284 Div2
	return 2; // 0x285 Return
}


func_574()
{
	var_151_bool = 0; var_152_bool = 0; // 0x23e PushV
	var_153_bool = 1; // 0x23f PushB
	CameraSwitchToNormal(var_153_bool); // 0x240 Func
	var_154_bool = 0; // 0x242 PushV
	func_817(var_154_bool); // 0x243 NEW_2
	if(var_154_bool == 0) goto Label_583; // 0x245 JumpB
	goto Label_591; // 0x246 Jump
	
Label_591:
	return 2; // 0x24f Return
	
Label_583:
	var_155_string = "head"; // 0x247 PushS
	HasAnimationTrack(var_152_bool, var_155_string); // 0x248 Func
	var_156_bool = var_152_bool; // 0x24a Push
	if(var_156_bool == 0) goto Label_591; // 0x24b JumpB
	var_157_string = "head"; // 0x24c PushS
	UnlookAsync(var_157_string); // 0x24d Func
}


