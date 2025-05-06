task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xe8 PushI
	if(var_12_int == 0) goto Label_518; // 0xe9 JumpB
	func_853(); // 0xeb NEW_2
	var_14_int = 41167; // 0xed PushI
	var_15_bool = var_11_object == var_14_int; // 0xee Eq
	if(var_15_bool == 0) goto Label_250; // 0xef JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xf0 PushV
	var_16_object = var_1_object; // 0xf1 MovT
	var_17_object = var_0_object; // 0xf2 MovT
	func_959(); // 0xf3 NEW_2
	var_28_object = Obj(); var_29_object = Obj(); // 0xf5 PushV
	var_28_object = var_1_object; // 0xf6 MovT
	var_29_object = var_0_object; // 0xf7 MovT
	func_946(); // 0xf8 NEW_2
	
Label_250:
	var_36_int = 41164; // 0xfa PushI
	var_37_bool = var_10_bool == var_36_int; // 0xfb Eq
	if(var_37_bool == 0) goto Label_350; // 0xfc JumpB
	var_38_bool = 0; var_39_object = Obj(); // 0xfd PushV
	var_39_object = var_1_object; // 0xfe MovT
	func_966(var_38_bool, var_39_object); // 0xff NEW_2
	var_86_bool = var_38_bool == 0; // 0x101 Not
	if(var_86_bool == 0) goto Label_279; // 0x102 JumpB
	var_87_string = ""; // 0x103 PushV
	var_87_string = "Neutral"; // 0x104 MovS
	func_209(var_11_object, var_87_string); // 0x105 NEW_2
	var_104_int = 539221; // 0x107 PushI
	SetMessage(var_104_int); // 0x108 TObjFunc
	ClearReplies(); // 0x10a TObjFunc
	var_105_int = 541225; // 0x10c PushI
	var_106_int = 45255; // 0x10d PushI
	var_107_int = 43355; // 0x10e PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x10f TObjFunc
	var_108_int = 539222; // 0x111 PushI
	var_109_int = 45249; // 0x112 PushI
	var_110_int = 41165; // 0x113 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x114 TObjFunc
	return 0; // 0x116 Return
	
Label_279:
	var_111_bool = 0; var_112_object = Obj(); // 0x117 PushV
	var_112_object = var_1_object; // 0x118 MovT
	func_976(var_111_bool, var_112_object); // 0x119 NEW_2
	var_122_bool = var_111_bool == 0; // 0x11b Not
	if(var_122_bool == 0) goto Label_305; // 0x11c JumpB
	var_123_string = ""; // 0x11d PushV
	var_123_string = "Neutral"; // 0x11e MovS
	func_209(var_11_object, var_123_string); // 0x11f NEW_2
	var_124_int = 539219; // 0x121 PushI
	SetMessage(var_124_int); // 0x122 TObjFunc
	ClearReplies(); // 0x124 TObjFunc
	var_125_int = 541260; // 0x126 PushI
	var_126_int = -1; // 0x127 PushI
	var_127_int = 43390; // 0x128 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x129 TObjFunc
	var_128_int = 542837; // 0x12b PushI
	var_129_int = 45265; // 0x12c PushI
	var_130_int = 45264; // 0x12d PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x12e TObjFunc
	return 0; // 0x130 Return
	
Label_305:
	var_131_bool = 0; var_132_object = Obj(); // 0x131 PushV
	var_132_object = var_1_object; // 0x132 MovT
	func_986(var_132_object); // 0x133 NEW_2
	if(var_131_bool == 0) goto Label_330; // 0x135 JumpB
	var_139_object = Obj(); var_140_object = Obj(); // 0x136 PushV
	var_139_object = var_1_object; // 0x137 MovT
	var_140_object = var_0_object; // 0x138 MovT
	func_953(); // 0x139 NEW_2
	var_143_string = ""; // 0x13b PushV
	var_143_string = "Neutral"; // 0x13c MovS
	func_209(var_11_object, var_143_string); // 0x13d NEW_2
	var_144_int = 539223; // 0x13f PushI
	SetMessage(var_144_int); // 0x140 TObjFunc
	ClearReplies(); // 0x142 TObjFunc
	var_145_int = 539224; // 0x144 PushI
	var_146_int = -1; // 0x145 PushI
	var_147_int = 41167; // 0x146 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x147 TObjFunc
	return 0; // 0x149 Return
	
Label_330:
	var_148_string = ""; // 0x14a PushV
	var_148_string = "Neutral"; // 0x14b MovS
	func_209(var_11_object, var_148_string); // 0x14c NEW_2
	var_149_int = 539225; // 0x14e PushI
	SetMessage(var_149_int); // 0x14f TObjFunc
	ClearReplies(); // 0x151 TObjFunc
	var_150_int = 539226; // 0x153 PushI
	var_151_int = -1; // 0x154 PushI
	var_152_int = 41169; // 0x155 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x156 TObjFunc
	var_153_int = 542845; // 0x158 PushI
	var_154_int = -1; // 0x159 PushI
	var_155_int = 45271; // 0x15a PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x15b TObjFunc
	return 0; // 0x15d Return
	
Label_350:
	var_156_int = 45265; // 0x15e PushI
	var_157_bool = var_10_bool == var_156_int; // 0x15f Eq
	if(var_157_bool == 0) goto Label_373; // 0x160 JumpB
	var_158_string = ""; // 0x161 PushV
	var_158_string = "Neutral"; // 0x162 MovS
	func_209(var_11_object, var_158_string); // 0x163 NEW_2
	var_159_int = 542838; // 0x165 PushI
	SetMessage(var_159_int); // 0x166 TObjFunc
	ClearReplies(); // 0x168 TObjFunc
	var_160_int = 542839; // 0x16a PushI
	var_161_int = 45268; // 0x16b PushI
	var_162_int = 45266; // 0x16c PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x16d TObjFunc
	var_163_int = 542840; // 0x16f PushI
	var_164_int = -1; // 0x170 PushI
	var_165_int = 45267; // 0x171 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x172 TObjFunc
	return 0; // 0x174 Return
	
Label_373:
	var_166_int = 45268; // 0x175 PushI
	var_167_bool = var_10_bool == var_166_int; // 0x176 Eq
	if(var_167_bool == 0) goto Label_396; // 0x177 JumpB
	var_168_string = ""; // 0x178 PushV
	var_168_string = "Neutral"; // 0x179 MovS
	func_209(var_11_object, var_168_string); // 0x17a NEW_2
	var_169_int = 542841; // 0x17c PushI
	SetMessage(var_169_int); // 0x17d TObjFunc
	ClearReplies(); // 0x17f TObjFunc
	var_170_int = 542842; // 0x181 PushI
	var_171_int = -1; // 0x182 PushI
	var_172_int = 45269; // 0x183 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x184 TObjFunc
	var_173_int = 542844; // 0x186 PushI
	var_174_int = -1; // 0x187 PushI
	var_175_int = 45270; // 0x188 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x189 TObjFunc
	return 0; // 0x18b Return
	
Label_396:
	var_176_int = 45249; // 0x18c PushI
	var_177_bool = var_10_bool == var_176_int; // 0x18d Eq
	if(var_177_bool == 0) goto Label_419; // 0x18e JumpB
	var_178_string = ""; // 0x18f PushV
	var_178_string = "Neutral"; // 0x190 MovS
	func_209(var_11_object, var_178_string); // 0x191 NEW_2
	var_179_int = 542823; // 0x193 PushI
	SetMessage(var_179_int); // 0x194 TObjFunc
	ClearReplies(); // 0x196 TObjFunc
	var_180_int = 542824; // 0x198 PushI
	var_181_int = 45251; // 0x199 PushI
	var_182_int = 45250; // 0x19a PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x19b TObjFunc
	var_183_int = 542827; // 0x19d PushI
	var_184_int = -1; // 0x19e PushI
	var_185_int = 45254; // 0x19f PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x1a0 TObjFunc
	return 0; // 0x1a2 Return
	
Label_419:
	var_186_int = 45255; // 0x1a3 PushI
	var_187_bool = var_10_bool == var_186_int; // 0x1a4 Eq
	if(var_187_bool == 0) goto Label_442; // 0x1a5 JumpB
	var_188_string = ""; // 0x1a6 PushV
	var_188_string = "Neutral"; // 0x1a7 MovS
	func_209(var_11_object, var_188_string); // 0x1a8 NEW_2
	var_189_int = 542828; // 0x1aa PushI
	SetMessage(var_189_int); // 0x1ab TObjFunc
	ClearReplies(); // 0x1ad TObjFunc
	var_190_int = 542829; // 0x1af PushI
	var_191_int = 45251; // 0x1b0 PushI
	var_192_int = 45256; // 0x1b1 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x1b2 TObjFunc
	var_193_int = 542830; // 0x1b4 PushI
	var_194_int = -1; // 0x1b5 PushI
	var_195_int = 45257; // 0x1b6 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1b7 TObjFunc
	return 0; // 0x1b9 Return
	
Label_442:
	var_196_int = 45251; // 0x1ba PushI
	var_197_bool = var_10_bool == var_196_int; // 0x1bb Eq
	if(var_197_bool == 0) goto Label_465; // 0x1bc JumpB
	var_198_string = ""; // 0x1bd PushV
	var_198_string = "Neutral"; // 0x1be MovS
	func_209(var_11_object, var_198_string); // 0x1bf NEW_2
	var_199_int = 542825; // 0x1c1 PushI
	SetMessage(var_199_int); // 0x1c2 TObjFunc
	ClearReplies(); // 0x1c4 TObjFunc
	var_200_int = 542826; // 0x1c6 PushI
	var_201_int = 45259; // 0x1c7 PushI
	var_202_int = 45252; // 0x1c8 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x1c9 TObjFunc
	var_203_int = 542831; // 0x1cb PushI
	var_204_int = -1; // 0x1cc PushI
	var_205_int = 45258; // 0x1cd PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x1ce TObjFunc
	return 0; // 0x1d0 Return
	
Label_465:
	var_206_int = 45259; // 0x1d1 PushI
	var_207_bool = var_10_bool == var_206_int; // 0x1d2 Eq
	if(var_207_bool == 0) goto Label_488; // 0x1d3 JumpB
	var_208_string = ""; // 0x1d4 PushV
	var_208_string = "Neutral"; // 0x1d5 MovS
	func_209(var_11_object, var_208_string); // 0x1d6 NEW_2
	var_209_int = 542832; // 0x1d8 PushI
	SetMessage(var_209_int); // 0x1d9 TObjFunc
	ClearReplies(); // 0x1db TObjFunc
	var_210_int = 542833; // 0x1dd PushI
	var_211_int = -1; // 0x1de PushI
	var_212_int = 45260; // 0x1df PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1e0 TObjFunc
	var_213_int = 542834; // 0x1e2 PushI
	var_214_int = 45262; // 0x1e3 PushI
	var_215_int = 45261; // 0x1e4 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1e5 TObjFunc
	return 0; // 0x1e7 Return
	
Label_488:
	var_216_int = 45262; // 0x1e8 PushI
	var_217_bool = var_10_bool == var_216_int; // 0x1e9 Eq
	if(var_217_bool == 0) goto Label_506; // 0x1ea JumpB
	var_218_string = ""; // 0x1eb PushV
	var_218_string = "Neutral"; // 0x1ec MovS
	func_209(var_11_object, var_218_string); // 0x1ed NEW_2
	var_219_int = 542835; // 0x1ef PushI
	SetMessage(var_219_int); // 0x1f0 TObjFunc
	ClearReplies(); // 0x1f2 TObjFunc
	var_220_int = 542836; // 0x1f4 PushI
	var_221_int = -1; // 0x1f5 PushI
	var_222_int = 45263; // 0x1f6 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1f7 TObjFunc
	return 0; // 0x1f9 Return
	
Label_506:
	var_3_string = 1; // 0x1fa TMovB
	var_223_bool = 0; // 0x1fb PushV
	func_944(var_223_bool); // 0x1fc NEW_2
	if(var_223_bool == 0) goto Label_514; // 0x1fe JumpB
	lshStopAnimation(); // 0x1ff Func
	goto Label_516; // 0x201 Jump
	
Label_516:
	return 0; // 0x204 Return
	
Label_514:
	StopAnimation(); // 0x202 Func
	
Label_518:
	return 0; // 0x206 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_int = 0; // 0x214 PushV
	func_1122(var_11_int); // 0x215 NEW_2
	var_15_int = 0; // 0x217 PushI
	var_16_bool = var_11_int == var_15_int; // 0x218 Eq
	if(var_16_bool == 0) goto Label_547; // 0x219 JumpB
	func_613(var_9_object, var_10_object); // 0x21b NEW_2
	var_20_int = 0; var_21_object = Obj(); // 0x21d PushV
	var_21_object = var_10_object; // 0x21e Mov
	TaskCall(0); // 0x21f TaskCall
	func_0(var_22_object, var_20_int, var_21_object); // 0x220 NEW_2
	TaskReturn(); // 0x221 TaskReturn
	
Label_547:
	return 0; // 0x223 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x24f PushI
	var_12_bool = var_10_int == var_11_int; // 0x250 Eq
	if(var_12_bool == 0) goto Label_612; // 0x251 JumpB
	var_13_bool = 0; // 0x252 PushV
	func_575(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x253 NEW_2
	if(var_13_bool == 0) goto Label_606; // 0x255 JumpB
	var_26_bool = var_2_object == 0; // 0x256 Not
	if(var_26_bool == 0) goto Label_605; // 0x257 JumpB
	var_27_object = Obj(); // 0x258 PushV
	var_27_object = var_4_bool; // 0x259 MovT
	func_842(var_27_object); // 0x25a NEW_2
	var_2_object = 1; // 0x25c TMovB
	
Label_605:
	goto Label_612; // 0x25d Jump
	
Label_612:
	return 0; // 0x264 Return
	
Label_606:
	var_34_object = var_2_object; // 0x25e PushT
	if(var_34_object == 0) goto Label_612; // 0x25f JumpB
	var_35_string = "head"; // 0x260 PushS
	UnlookAsync(var_35_string); // 0x261 Func
	var_2_object = 0; // 0x263 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_519:
	var_10_bool = 1; // 0x207 PushB
	if(var_10_bool == 0) goto Label_530; // 0x208 JumpB
	var_11_float = 0; var_12_float = 0; // 0x209 PushV
	var_11_float = 300; // 0x20a MovI
	var_12_float = 100; // 0x20b MovI
	func_548(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x20c NEW_2
	var_73_int = 1; // 0x20e PushI
	Sleep(var_73_int); // 0x20f Func
	goto Label_519; // 0x211 Jump
	
Label_530:
	return 0; // 0x212 Return
}


func_0(var_0_object, var_20_int, var_21_object)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0x0 PushV
	var_0_object = var_21_object; // 0x1 TMov
	var_31_bool = 0; var_32_object = Obj(); var_33_float = 0; // 0x2 PushV
	var_32_object = var_21_object; // 0x3 Mov
	var_33_float = 130.0; // 0x4 MovF
	func_726(var_32_object, var_33_float); // 0x5 NEW_2
	var_77_bool = var_31_bool == 0; // 0x7 Not
	if(var_77_bool == 0) goto Label_11; // 0x8 JumpB
	var_20_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_27_object); // 0xb Func
	var_78_int = 0; // 0xd PushV
	func_938(var_78_int); // 0xe NEW_2
	SetNPCName(var_78_int); // 0x10 ObjFunc
	var_79_int = 0; // 0x12 PushV
	func_936(var_79_int); // 0x13 NEW_2
	SetNPCDescription(var_79_int); // 0x15 ObjFunc
	var_80_string = ""; // 0x17 PushV
	func_940(var_80_string); // 0x18 NEW_2
	SetPhoto(var_80_string); // 0x1a ObjFunc
	var_81_string = ""; // 0x1c PushV
	func_942(var_81_string); // 0x1d NEW_2
	SetPhoto2(var_81_string); // 0x1f ObjFunc
	var_82_int = 0; // 0x21 PushV
	func_1015(var_82_int); // 0x22 NEW_2
	SetPlayerName(var_82_int); // 0x24 ObjFunc
	var_29_int = -1; // 0x26 MovI
	IsOverrideActive(var_28_bool); // 0x27 Func
	var_90_bool = var_28_bool; // 0x29 Push
	if(var_90_bool == 0) goto Label_45; // 0x2a JumpB
	var_20_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_27_object); // 0x2d Func
	var_91_object = Obj(); var_92_object = Obj(); // 0x2f PushV
	var_91_object = var_21_object; // 0x30 Mov
	var_92_object = var_27_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_93_object, var_94_object, var_95_string, var_96_bool, var_91_object, var_92_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_30_bool); // 0x36 ObjFunc
	
Label_56:
	var_234_bool = var_30_bool == 0; // 0x38 Not
	if(var_234_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_30_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_235_object = Obj(); // 0x3f PushV
	var_235_object = var_21_object; // 0x40 Mov
	func_794(); // 0x41 NEW_2
	StopDialog(var_27_object); // 0x43 Func
	GetReturnValue(var_29_int); // 0x45 ObjFunc
	var_20_int = var_29_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1032(var_112_bool)
{
	var_114_int = 7; // 0x409 PushI
	add(var_114_int); // 0x40a ObjFunc
	var_115_int = 23; // 0x40c PushI
	add(var_115_int); // 0x40d ObjFunc
	var_116_int = 21; // 0x40f PushI
	add(var_116_int); // 0x410 ObjFunc
	var_117_int = 9; // 0x412 PushI
	add(var_117_int); // 0x413 ObjFunc
	var_118_int = 3; // 0x415 PushI
	add(var_118_int); // 0x416 ObjFunc
	var_119_int = 1; // 0x418 PushI
	add(var_119_int); // 0x419 ObjFunc
	var_120_int = 11; // 0x41b PushI
	add(var_120_int); // 0x41c ObjFunc
	var_121_int = 13; // 0x41e PushI
	add(var_121_int); // 0x41f ObjFunc
	var_122_bool = 0; // 0x421 PushB
	var_123_bool = var_112_bool == var_122_bool; // 0x422 Eq
	if(var_123_bool == 0) goto Label_1063; // 0x423 JumpB
	var_124_int = 25; // 0x424 PushI
	add(var_124_int); // 0x425 ObjFunc
	
Label_1063:
	return 0; // 0x427 Return
}


func_904(var_193_int)
{
	var_194_float = 0; var_195_float = 0; // 0x388 PushV
	GetGameTime(var_195_float); // 0x389 Func
	var_196_int = 0; // 0x38b PushV
	var_196_int = var_195_float; // 0x38c Mov
	var_197_int = 24; // 0x38d PushI
	var_193_int = var_196_int % var_197_int; // 0x38e Mod2
	return 2; // 0x38f Return
}


func_912(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x390 PushV
	var_45_string = "idle"; // 0x391 MovS
	var_46_int = var_43_int; // 0x392 Push
	if(var_46_int == 0) goto Label_917; // 0x393 JumpB
	var_45_string = var_45_string + var_43_int; // 0x394 Add2
	
Label_917:
	var_42_string = var_45_string; // 0x395 Mov
	return 2; // 0x396 Return
}


func_919(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x397 PushV
	var_39_int = 0; // 0x398 MovI
	
Label_921:
	var_41_string = "all"; // 0x399 PushS
	var_42_string = ""; var_43_int = 0; // 0x39a PushV
	var_43_int = var_39_int; // 0x39b Mov
	func_912(var_42_string, var_43_int); // 0x39c NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x39e Func
	var_47_bool = var_40_bool == 0; // 0x3a0 Not
	if(var_47_bool == 0) goto Label_931; // 0x3a1 JumpB
	goto Label_934; // 0x3a2 Jump
	
Label_934:
	var_36_int = var_39_int; // 0x3a6 Mov
	return 4; // 0x3a7 Return
	
Label_931:
	var_48_int = 1; // 0x3a3 PushI
	var_39_int = var_39_int + var_48_int; // 0x3a4 Add2
	goto Label_921; // 0x3a5 Jump
}


func_794()
{
	var_236_bool = 0; var_237_bool = 0; // 0x31a PushV
	CameraSwitchToNormal(); // 0x31b Func
	var_238_bool = 0; // 0x31d PushV
	func_944(var_238_bool); // 0x31e NEW_2
	if(var_238_bool == 0) goto Label_802; // 0x320 JumpB
	goto Label_810; // 0x321 Jump
	
Label_810:
	return 2; // 0x32a Return
	
Label_802:
	var_239_string = "head"; // 0x322 PushS
	HasAnimationTrack(var_237_bool, var_239_string); // 0x323 Func
	var_240_bool = var_237_bool; // 0x325 Push
	if(var_240_bool == 0) goto Label_810; // 0x326 JumpB
	var_241_string = "head"; // 0x327 PushS
	UnlookAsync(var_241_string); // 0x328 Func
}


func_548(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x225 PushV
	func_721(var_13_bool); // 0x226 NEW_2
	var_16_bool = var_13_bool == 0; // 0x228 Not
	if(var_16_bool == 0) goto Label_555; // 0x229 JumpB
	return 0; // 0x22a Return
	
Label_555:
	var_17_string = "player"; // 0x22b PushS
	FindActor(var_9_object, var_17_string); // 0x22c Func
	var_2_object = 0; // 0x22e TMovB
	var_3_string = 0; // 0x22f TMovB
	var_0_object = var_11_float; // 0x230 TMov
	var_1_object = var_12_float; // 0x231 TMov
	var_18_int = 10; // 0x232 PushI
	var_19_float = 1.0; // 0x233 PushF
	SetTimer(var_18_int, var_19_float); // 0x234 Func
	func_627(); // 0x237 NEW_2
	var_71_bool = var_3_string == 0; // 0x239 Not
	if(var_71_bool == 0) goto Label_574; // 0x23a JumpB
	var_72_int = 10; // 0x23b PushI
	KillTimer(var_72_int); // 0x23c Func
	
Label_574:
	return 0; // 0x23e Return
}


func_936(var_79_int)
{
	var_79_int = 515571; // 0x3a8 MovI
	return 0; // 0x3a9 Return
}


func_1064(var_136_bool, var_137_int)
{
	var_138_int = 0; var_139_int = 0; // 0x428 PushV
	var_140_string = "vol_"; // 0x429 PushS
	var_141_int = var_140_string + var_137_int; // 0x42a Add
	GetVariable(var_141_int, var_139_int); // 0x42b Func
	var_142_int = 4; // 0x42d PushI
	var_143_int = var_139_int & var_142_int; // 0x42e And
	var_144_int = 0; // 0x42f PushI
	var_136_bool = var_143_int != var_144_int; // 0x430 Neq2
	return 2; // 0x431 Return
}


func_938(var_78_int)
{
	var_78_int = 504029; // 0x3aa MovI
	return 0; // 0x3ab Return
}


func_811(var_173_string)
{
	var_174_bool = 0; var_175_float = 0; var_176_float = 0; var_177_bool = 0; var_178_float = 0; var_179_float = 0; // 0x32b PushV
	lshHasAnimation(var_177_bool, var_173_string); // 0x32c Func
	var_180_bool = var_177_bool; // 0x32e Push
	if(var_180_bool == 0) goto Label_822; // 0x32f JumpB
	lshGetAnimTimes(var_173_string, var_178_float, var_179_float); // 0x330 Func
	var_181_bool = 0; // 0x332 PushB
	lshPlayAnimation(var_178_float, var_179_float, var_181_bool); // 0x333 Func
	goto Label_826; // 0x335 Jump
	
Label_826:
	return 6; // 0x33a Return
	
Label_822:
	var_182_string = "Can't find lsh animation : "; // 0x336 PushS
	var_183_int = var_182_string + var_173_string; // 0x337 Add
	Trace(var_183_int); // 0x338 Func
}


func_940(var_80_string)
{
	var_80_string = "ui/NPC_bmask.png"; // 0x3ac MovS
	return 0; // 0x3ad Return
}


func_942(var_81_string)
{
	var_81_string = "ui/NPC_bmask_b.png"; // 0x3ae MovS
	return 0; // 0x3af Return
}


func_944(var_73_bool)
{
	var_73_bool = 0; // 0x3b0 MovB
	return 0; // 0x3b1 Return
}


func_946()
{
	var_30_bool = 0; var_31_string = ""; var_32_string = ""; // 0x3b3 PushV
	var_31_string = "quest_k12_01"; // 0x3b4 MovS
	var_32_string = "init_sobor"; // 0x3b5 MovS
	func_892(var_30_bool, var_31_string, var_32_string); // 0x3b6 NEW_2
	return 0; // 0x3b8 Return
}


func_1074(var_127_bool, var_128_int)
{
	var_129_int = 0; var_130_int = 0; // 0x432 PushV
	var_131_string = "vol_"; // 0x433 PushS
	var_132_int = var_131_string + var_128_int; // 0x434 Add
	GetVariable(var_132_int, var_130_int); // 0x435 Func
	var_133_int = 16; // 0x437 PushI
	var_134_int = var_130_int & var_133_int; // 0x438 And
	var_135_int = 0; // 0x439 PushI
	var_127_bool = var_134_int != var_135_int; // 0x43a Neq2
	return 2; // 0x43b Return
}


func_953()
{
	var_219_string = "ook12BirdmaskS1"; // 0x3ba PushS
	var_220_int = 1; // 0x3bb PushI
	SetVariable(var_219_string, var_220_int); // 0x3bc Func
	return 0; // 0x3be Return
}


func_827(var_151_string, var_152_bool)
{
	var_155_bool = 0; var_156_float = 0; var_157_float = 0; var_158_bool = 0; var_159_float = 0; var_160_float = 0; // 0x33b PushV
	lshHasAnimation(var_158_bool, var_151_string); // 0x33c Func
	var_161_bool = var_158_bool; // 0x33e Push
	if(var_161_bool == 0) goto Label_837; // 0x33f JumpB
	lshGetAnimTimes(var_151_string, var_159_float, var_160_float); // 0x340 Func
	lshPlayAnimation(var_159_float, var_160_float, var_152_bool); // 0x342 Func
	goto Label_841; // 0x344 Jump
	
Label_841:
	return 6; // 0x349 Return
	
Label_837:
	var_162_string = "Can't find lsh animation : "; // 0x345 PushS
	var_163_int = var_162_string + var_151_string; // 0x346 Add
	Trace(var_163_int); // 0x347 Func
}


func_1084(var_102_bool)
{
	var_103_object = Obj(); var_104_int = 0; var_105_int = 0; var_106_int = 0; var_107_object = Obj(); var_108_int = 0; var_109_int = 0; var_110_int = 0; // 0x43c PushV
	CreateIntVector(var_107_object); // 0x43d Func
	var_111_object = Obj(); var_112_bool = 0; var_113_int = 0; // 0x43f PushV
	var_111_object = var_107_object; // 0x440 Mov
	var_112_bool = 0; // 0x441 MovB
	var_113_int = -1; // 0x442 MovI
	func_1032(var_113_int); // 0x443 NEW_2
	size(var_108_int); // 0x445 ObjFunc
	var_109_int = 0; // 0x447 MovI
	
Label_1096:
	var_125_bool = var_109_int < var_108_int; // 0x448 LT
	if(var_125_bool == 0) goto Label_1119; // 0x449 JumpB
	get(var_110_int, var_109_int); // 0x44a ObjFunc
	var_126_bool = 0; // 0x44c PushV
	var_126_bool = 1; // 0x44d MovB
	var_127_bool = 0; var_128_int = 0; // 0x44e PushV
	var_128_int = var_110_int; // 0x44f Mov
	func_1074(var_127_bool, var_128_int); // 0x450 NEW_2
	if(var_127_bool == 0) goto Label_1113; // 0x452 JumpB
	var_136_bool = 0; var_137_int = 0; // 0x453 PushV
	var_137_int = var_110_int; // 0x454 Mov
	func_1064(var_136_bool, var_137_int); // 0x455 NEW_2
	if(var_136_bool == 0) goto Label_1113; // 0x457 JumpB
	var_126_bool = 0; // 0x458 MovB
	
Label_1113:
	if(var_126_bool == 0) goto Label_1116; // 0x459 JumpB
	var_102_bool = 0; // 0x45a MovB
	return 8; // 0x45b Return
	
Label_1116:
	var_145_int = 1; // 0x45c PushI
	var_109_int = var_109_int + var_145_int; // 0x45d Add2
	goto Label_1096; // 0x45e Jump
	
Label_1119:
	var_102_bool = 1; // 0x45f MovB
	return 8; // 0x460 Return
}


func_959()
{
	var_18_string = ""; var_19_bool = 0; // 0x3c0 PushV
	var_18_string = "sobor@door1"; // 0x3c1 MovS
	var_19_bool = 0; // 0x3c2 MovB
	func_875(var_18_string, var_19_bool); // 0x3c3 NEW_2
	return 0; // 0x3c5 Return
}


func_575(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x23f PushV
	var_16_bool = var_4_bool == 0; // 0x240 NullEq
	if(var_16_bool == 0) goto Label_580; // 0x241 JumpB
	var_13_bool = 0; // 0x242 MovB
	return 2; // 0x243 Return
	
Label_580:
	var_17_float = 0; var_18_object = Obj(); // 0x244 PushV
	var_18_object = var_4_bool; // 0x245 MovT
	func_713(var_18_object); // 0x246 NEW_2
	var_15_float = sqrt(var_17_float); // 0x248 Sqrt2
	var_25_object = var_2_object; // 0x249 PushT
	if(var_25_object == 0) goto Label_588; // 0x24a JumpB
	var_15_float = var_15_float - var_1_object; // 0x24b Sub2
	
Label_588:
	var_13_bool = var_15_float < var_0_object; // 0x24c LT2
	return 2; // 0x24d Return
}


func_706(var_61_bool)
{
	var_61_bool = 1; // 0x2c2 MovB
	return 0; // 0x2c3 Return
}


func_708()
{
	StopAnimation(); // 0x2c4 Func
	StopGroup0(); // 0x2c6 Func
	return 0; // 0x2c8 Return
}


func_966(var_98_bool, var_99_object)
{
	var_100_bool = 0; var_101_object = Obj(); // 0x3c7 PushV
	var_101_object = var_99_object; // 0x3c8 Mov
	func_998(var_101_object); // 0x3c9 NEW_2
	if(var_100_bool == 0) goto Label_974; // 0x3cb JumpB
	var_98_bool = 1; // 0x3cc MovB
	return 0; // 0x3cd Return
	
Label_974:
	var_98_bool = 0; // 0x3ce MovB
	return 0; // 0x3cf Return
}


func_713(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x2c9 PushV
	GetPosition(var_22_cvector); // 0x2ca Func
	GetPosition(var_23_cvector); // 0x2cc ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x2ce Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x2cf Or2
	return 6; // 0x2d0 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_91_object, var_92_object)
{
	var_0_object = var_92_object; // 0x4b TMov
	var_1_object = var_91_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_97_int = 1; // 0x4e PushI
	if(var_97_int == 0) goto Label_179; // 0x4f JumpB
	var_98_bool = 0; var_99_object = Obj(); // 0x50 PushV
	var_99_object = var_1_object; // 0x51 MovT
	func_966(var_98_bool, var_99_object); // 0x52 NEW_2
	var_146_bool = var_98_bool == 0; // 0x54 Not
	if(var_146_bool == 0) goto Label_106; // 0x55 JumpB
	var_147_string = ""; // 0x56 PushV
	var_147_string = "Neutral"; // 0x57 MovS
	func_209(var_92_object, var_147_string); // 0x58 NEW_2
	var_164_int = 539221; // 0x5a PushI
	SetMessage(var_164_int); // 0x5b TObjFunc
	ClearReplies(); // 0x5d TObjFunc
	var_165_int = 541225; // 0x5f PushI
	var_166_int = 45255; // 0x60 PushI
	var_167_int = 43355; // 0x61 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x62 TObjFunc
	var_168_int = 539222; // 0x64 PushI
	var_169_int = 45249; // 0x65 PushI
	var_170_int = 41165; // 0x66 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x67 TObjFunc
	goto Label_179; // 0x69 Jump
	
Label_179:
	var_171_bool = 0; // 0xb3 PushV
	func_944(var_171_bool); // 0xb4 NEW_2
	if(var_171_bool == 0) goto Label_194; // 0xb6 JumpB
	
Label_183:
	lshWaitForAnimEnd(); // 0xb7 Func
	var_172_string = var_3_string; // 0xb9 PushT
	if(var_172_string == 0) goto Label_188; // 0xba JumpB
	goto Label_193; // 0xbb Jump
	
Label_193:
	goto Label_208; // 0xc1 Jump
	
Label_208:
	return 0; // 0xd0 Return
	
Label_188:
	var_173_string = ""; // 0xbc PushV
	var_173_string = var_2_object; // 0xbd MovT
	func_811(var_173_string); // 0xbe NEW_2
	goto Label_183; // 0xc0 Jump
	
Label_194:
	var_184_string = "all"; // 0xc2 PushS
	var_185_string = "idle"; // 0xc3 PushS
	PlayAnimation(var_184_string, var_185_string); // 0xc4 Func
	
Label_198:
	WaitForAnimEnd(); // 0xc6 Func
	var_186_string = var_3_string; // 0xc8 PushT
	if(var_186_string == 0) goto Label_203; // 0xc9 JumpB
	goto Label_208; // 0xca Jump
	
Label_203:
	var_187_string = "all"; // 0xcb PushS
	var_188_string = "idle"; // 0xcc PushS
	PlayAnimation(var_187_string, var_188_string); // 0xcd Func
	goto Label_198; // 0xcf Jump
	
Label_106:
	var_189_bool = 0; var_190_object = Obj(); // 0x6a PushV
	var_190_object = var_1_object; // 0x6b MovT
	func_976(var_189_bool, var_190_object); // 0x6c NEW_2
	var_200_bool = var_189_bool == 0; // 0x6e Not
	if(var_200_bool == 0) goto Label_132; // 0x6f JumpB
	var_201_string = ""; // 0x70 PushV
	var_201_string = "Neutral"; // 0x71 MovS
	func_209(var_92_object, var_201_string); // 0x72 NEW_2
	var_202_int = 539219; // 0x74 PushI
	SetMessage(var_202_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_203_int = 541260; // 0x79 PushI
	var_204_int = -1; // 0x7a PushI
	var_205_int = 43390; // 0x7b PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x7c TObjFunc
	var_206_int = 542837; // 0x7e PushI
	var_207_int = 45265; // 0x7f PushI
	var_208_int = 45264; // 0x80 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x81 TObjFunc
	goto Label_179; // 0x83 Jump
	
Label_132:
	var_209_bool = 0; var_210_object = Obj(); // 0x84 PushV
	var_210_object = var_1_object; // 0x85 MovT
	func_986(var_210_object); // 0x86 NEW_2
	if(var_209_bool == 0) goto Label_157; // 0x88 JumpB
	var_217_object = Obj(); var_218_object = Obj(); // 0x89 PushV
	var_217_object = var_1_object; // 0x8a MovT
	var_218_object = var_0_object; // 0x8b MovT
	func_953(); // 0x8c NEW_2
	var_221_string = ""; // 0x8e PushV
	var_221_string = "Neutral"; // 0x8f MovS
	func_209(var_92_object, var_221_string); // 0x90 NEW_2
	var_222_int = 539223; // 0x92 PushI
	SetMessage(var_222_int); // 0x93 TObjFunc
	ClearReplies(); // 0x95 TObjFunc
	var_223_int = 539224; // 0x97 PushI
	var_224_int = -1; // 0x98 PushI
	var_225_int = 41167; // 0x99 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x9a TObjFunc
	goto Label_179; // 0x9c Jump
	
Label_157:
	var_226_string = ""; // 0x9d PushV
	var_226_string = "Neutral"; // 0x9e MovS
	func_209(var_92_object, var_226_string); // 0x9f NEW_2
	var_227_int = 539225; // 0xa1 PushI
	SetMessage(var_227_int); // 0xa2 TObjFunc
	ClearReplies(); // 0xa4 TObjFunc
	var_228_int = 539226; // 0xa6 PushI
	var_229_int = -1; // 0xa7 PushI
	var_230_int = 41169; // 0xa8 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0xa9 TObjFunc
	var_231_int = 542845; // 0xab PushI
	var_232_int = -1; // 0xac PushI
	var_233_int = 45271; // 0xad PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xae TObjFunc
	goto Label_179; // 0xb0 Jump
}


func_842(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x34a PushV
	GetEyesHeight(var_30_float); // 0x34b ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x34d MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x34e PushE
	var_32_float = var_30_float; // 0x34f Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x350 PopE
	var_33_string = "head"; // 0x351 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x352 Func
	return 4; // 0x354 Return
}


func_976(var_189_bool, var_190_object)
{
	var_191_bool = 0; var_192_object = Obj(); // 0x3d1 PushV
	var_192_object = var_190_object; // 0x3d2 Mov
	func_1004(var_192_object); // 0x3d3 NEW_2
	if(var_191_bool == 0) goto Label_984; // 0x3d5 JumpB
	var_189_bool = 1; // 0x3d6 MovB
	return 0; // 0x3d7 Return
	
Label_984:
	var_189_bool = 0; // 0x3d8 MovB
	return 0; // 0x3d9 Return
}


func_209(var_2_object, var_147_string)
{
	var_148_bool = 0; // 0xd2 PushV
	func_944(var_148_bool); // 0xd3 NEW_2
	var_149_bool = var_148_bool == 0; // 0xd5 Not
	if(var_149_bool == 0) goto Label_216; // 0xd6 JumpB
	return 0; // 0xd7 Return
	
Label_216:
	var_150_bool = var_147_string == var_2_object; // 0xd8 Eq
	if(var_150_bool == 0) goto Label_219; // 0xd9 JumpB
	return 0; // 0xda Return
	
Label_219:
	var_151_string = ""; var_152_bool = 0; // 0xdb PushV
	var_151_string = var_147_string; // 0xdc Mov
	var_153_string = ""; // 0xdd PushS
	var_154_bool = var_147_string == var_153_string; // 0xde Eq
	if(var_154_bool == 0) goto Label_226; // 0xdf JumpB
	var_152_bool = 0; // 0xe0 MovB
	goto Label_227; // 0xe1 Jump
	
Label_227:
	func_827(var_151_string, var_152_bool); // 0xe3 NEW_2
	var_2_object = var_147_string; // 0xe5 TMov
	return 0; // 0xe6 Return
	
Label_226:
	var_152_bool = 1; // 0xe2 MovB
}


func_721(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x2d1 PushV
	IsLoaded(var_15_bool); // 0x2d2 Func
	var_13_bool = var_15_bool; // 0x2d4 Mov
	return 2; // 0x2d5 Return
}


func_853()
{
	var_13_bool = 0; // 0x355 PushV
	func_944(var_13_bool); // 0x356 NEW_2
	if(var_13_bool == 0) goto Label_859; // 0x358 JumpB
	lshStopSpeech(); // 0x359 Func
	
Label_859:
	return 0; // 0x35b Return
}


func_726(var_31_bool, var_33_float)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0; // 0x2d6 PushV
	GetPosition(var_44_cvector); // 0x2d7 ObjFunc
	GetEyesHeight(var_43_float); // 0x2d9 ObjFunc
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x2db PushE
	var_52_float = var_52_float + var_43_float; // 0x2dc Add2
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x2dd PopE
	GetPosition(var_45_cvector); // 0x2de Func
	GetEyesHeight(var_43_float); // 0x2e0 Func
	var_53_float = GetByIndex(var_45_cvector, 1); // 0x2e2 PushE
	var_53_float = var_53_float + var_43_float; // 0x2e3 Add2
	SetByIndex(var_45_cvector, 1) = var_53_float; // 0x2e4 PopE
	var_46_cvector = var_44_cvector - var_45_cvector; // 0x2e5 Sub2
	var_54_float = GetByIndex(var_46_cvector, 1); // 0x2e6 PushE
	var_54_float = 0; // 0x2e7 MovI
	SetByIndex(var_46_cvector, 1) = var_54_float; // 0x2e8 PopE
	var_55_int = var_46_cvector | var_46_cvector; // 0x2e9 Or
	var_56_float = sqrt(var_55_int); // 0x2ea Sqrt
	var_46_cvector = var_46_cvector / var_46_cvector; // 0x2eb Div2
	var_47_cvector = -var_46_cvector; // 0x2ec Neg2
	var_57_float = var_46_cvector * var_33_float; // 0x2ed Mult
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0x2ee PushV
	var_60_cvector = CVector(0.0, 1.0, 0.0); // 0x2ef PushVec
	var_59_cvector = var_47_cvector ^ var_60_cvector; // 0x2f0 Xor2
	func_860(var_58_cvector, var_59_cvector); // 0x2f1 NEW_2
	var_66_int = 25; // 0x2f3 PushI
	var_67_float = var_58_cvector * var_66_int; // 0x2f4 Mult
	var_68_int = var_57_float + var_67_float; // 0x2f5 Add
	var_69_cvector = CVector(0.0, 10.0, 0.0); // 0x2f6 PushVec
	var_48_cvector = var_68_int - var_69_cvector; // 0x2f7 Sub2
	var_49_cvector = var_45_cvector + var_48_cvector; // 0x2f8 Add2
	IsOverrideActive(var_50_bool); // 0x2f9 Func
	var_70_bool = var_50_bool; // 0x2fb Push
	if(var_70_bool == 0) goto Label_767; // 0x2fc JumpB
	var_31_bool = 0; // 0x2fd MovB
	return 18; // 0x2fe Return
	
Label_767:
	StopWorld(); // 0x2ff Func
	CameraTransit(var_49_cvector, var_47_cvector); // 0x301 Func
	var_71_float = GetByIndex(var_48_cvector, 0); // 0x303 PushE
	var_72_float = GetByIndex(var_48_cvector, 2); // 0x304 PushE
	Rotate(var_71_float, var_72_float); // 0x305 Func
	var_73_bool = 0; // 0x307 PushV
	func_944(var_73_bool); // 0x308 NEW_2
	if(var_73_bool == 0) goto Label_780; // 0x30a JumpB
	goto Label_788; // 0x30b Jump
	
Label_788:
	CameraWaitForPlayFinish(); // 0x314 Func
	ResumeWorld(); // 0x316 Func
	var_31_bool = 1; // 0x318 MovB
	return 18; // 0x319 Return
	
Label_780:
	var_74_string = "head"; // 0x30c PushS
	HasAnimationTrack(var_51_bool, var_74_string); // 0x30d Func
	var_75_bool = var_51_bool; // 0x30f Push
	if(var_75_bool == 0) goto Label_788; // 0x310 JumpB
	var_76_string = "head"; // 0x311 PushS
	LookAsyncCamera(var_76_string); // 0x312 Func
}


func_986(var_209_bool)
{
	var_211_int = 0; var_212_string = ""; // 0x3db PushV
	var_212_string = "ook12BirdmaskS1"; // 0x3dc MovS
	func_870(var_211_int, var_212_string); // 0x3dd NEW_2
	var_215_int = 0; // 0x3df PushI
	var_216_bool = var_211_int == var_215_int; // 0x3e0 Eq
	if(var_216_bool == 0) goto Label_996; // 0x3e1 JumpB
	var_209_bool = 1; // 0x3e2 MovB
	return 0; // 0x3e3 Return
	
Label_996:
	var_209_bool = 0; // 0x3e4 MovB
	return 0; // 0x3e5 Return
}


func_860(var_58_cvector, var_59_cvector)
{
	var_61_float = 0; var_62_float = 0; // 0x35c PushV
	var_63_int = var_59_cvector | var_59_cvector; // 0x35d Or
	var_62_float = sqrt(var_63_int); // 0x35e Sqrt2
	var_64_float = 0.0; // 0x35f PushF
	var_65_bool = var_62_float < var_64_float; // 0x360 LT
	if(var_65_bool == 0) goto Label_868; // 0x361 JumpB
	var_58_cvector = CVector(0.0, 0.0, 0.0); // 0x362 MovV
	return 2; // 0x363 Return
	
Label_868:
	var_58_cvector = var_59_cvector / var_59_cvector; // 0x364 Div2
	return 2; // 0x365 Return
}


func_1122(var_11_int)
{
	var_12_int = 0; var_13_int = 0; // 0x462 PushV
	var_14_string = "game_final"; // 0x463 PushS
	GetVariable(var_14_string, var_13_int); // 0x464 Func
	var_11_int = var_13_int; // 0x466 Mov
	return 2; // 0x467 Return
}


func_613(var_2_object, var_3_string)
{
	func_708(); // 0x266 NEW_2
	var_17_int = 10; // 0x268 PushI
	KillTimer(var_17_int); // 0x269 Func
	var_18_object = var_2_object; // 0x26b PushT
	if(var_18_object == 0) goto Label_625; // 0x26c JumpB
	var_19_string = "head"; // 0x26d PushS
	UnlookAsync(var_19_string); // 0x26e Func
	var_2_object = 0; // 0x270 TMovB
	
Label_625:
	var_3_string = 1; // 0x271 TMovB
	return 0; // 0x272 Return
}


func_998(var_100_bool)
{
	var_102_bool = 0; // 0x3e7 PushV
	func_1084(var_102_bool); // 0x3e8 NEW_2
	var_100_bool = var_102_bool; // 0x3e9 Mov
	return 0; // 0x3eb Return
}


func_870(var_211_int, var_212_string)
{
	var_213_int = 0; var_214_int = 0; // 0x366 PushV
	GetVariable(var_212_string, var_214_int); // 0x367 Func
	var_211_int = var_214_int; // 0x369 Mov
	return 2; // 0x36a Return
}


func_875(var_18_string, var_19_bool)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x36b PushV
	FindActor(var_21_object, var_18_string); // 0x36c Func
	var_22_bool = var_21_object == 0; // 0x36e Not
	if(var_22_bool == 0) goto Label_887; // 0x36f JumpB
	var_23_string = "Door "; // 0x370 PushS
	var_24_int = var_23_string + var_18_string; // 0x371 Add
	var_25_string = " not found"; // 0x372 PushS
	var_26_int = var_24_int + var_25_string; // 0x373 Add
	Trace(var_26_int); // 0x374 Func
	goto Label_890; // 0x376 Jump
	
Label_890:
	return 2; // 0x37a Return
	
Label_887:
	var_27_string = "locked"; // 0x377 PushS
	SetProperty(var_27_string, var_19_bool); // 0x378 ObjFunc
}


func_1004(var_191_bool)
{
	var_193_int = 0; // 0x3ed PushV
	func_904(var_193_int); // 0x3ee NEW_2
	var_198_int = 19; // 0x3f0 PushI
	var_199_bool = var_193_int >= var_198_int; // 0x3f1 GE
	if(var_199_bool == 0) goto Label_1013; // 0x3f2 JumpB
	var_191_bool = 1; // 0x3f3 MovB
	return 0; // 0x3f4 Return
	
Label_1013:
	var_191_bool = 0; // 0x3f5 MovB
	return 0; // 0x3f6 Return
}


func_627()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x273 PushV
	WaitForAnimEnd(); // 0x274 Func
	var_34_bool = 0; // 0x276 PushV
	func_721(var_34_bool); // 0x277 NEW_2
	var_35_bool = var_34_bool == 0; // 0x279 Not
	if(var_35_bool == 0) goto Label_636; // 0x27a JumpB
	return 14; // 0x27b Return
	
Label_636:
	var_36_int = 0; // 0x27c PushV
	func_919(var_36_int); // 0x27d NEW_2
	var_27_int = var_36_int; // 0x27e Mov
	var_28_int = 0; // 0x280 MovI
	
Label_641:
	var_49_bool = 0; // 0x281 PushV
	var_49_bool = 0; // 0x282 MovB
	var_50_int = 5; // 0x283 PushI
	var_51_bool = var_28_int < var_50_int; // 0x284 LT
	if(var_51_bool == 0) goto Label_651; // 0x285 JumpB
	var_52_bool = 0; // 0x286 PushV
	func_721(var_52_bool); // 0x287 NEW_2
	if(var_52_bool == 0) goto Label_651; // 0x289 JumpB
	var_49_bool = 1; // 0x28a MovB
	
Label_651:
	if(var_49_bool == 0) goto Label_703; // 0x28b JumpB
	var_53_int = 3; // 0x28c PushI
	irand(var_29_int, var_53_int); // 0x28d Func
	var_54_int = 0; // 0x28f PushI
	var_55_bool = var_29_int == var_54_int; // 0x290 Eq
	if(var_55_bool == 0) goto Label_675; // 0x291 JumpB
	var_56_int = var_27_int; // 0x292 Push
	if(var_56_int == 0) goto Label_674; // 0x293 JumpB
	irand(var_30_int, var_27_int); // 0x294 Func
	var_57_string = "all"; // 0x296 PushS
	var_58_string = ""; var_59_int = 0; // 0x297 PushV
	var_59_int = var_30_int; // 0x298 Mov
	func_912(var_58_string, var_59_int); // 0x299 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x29b Func
	WaitForAnimEnd(var_31_bool); // 0x29d Func
	var_60_bool = var_31_bool == 0; // 0x29f Not
	if(var_60_bool == 0) goto Label_674; // 0x2a0 JumpB
	goto Label_703; // 0x2a1 Jump
	
Label_703:
	ResetAAS(); // 0x2bf Func
	return 14; // 0x2c1 Return
	
Label_674:
	goto Label_692; // 0x2a2 Jump
	
Label_692:
	var_61_bool = 0; // 0x2b4 PushV
	func_706(var_61_bool); // 0x2b5 NEW_2
	var_62_bool = var_61_bool == 0; // 0x2b7 Not
	if(var_62_bool == 0) goto Label_698; // 0x2b8 JumpB
	goto Label_703; // 0x2b9 Jump
	
Label_698:
	ResetAAS(); // 0x2ba Func
	var_63_int = 1; // 0x2bc PushI
	var_28_int = var_28_int + var_63_int; // 0x2bd Add2
	goto Label_641; // 0x2be Jump
	
Label_675:
	var_64_int = 1; // 0x2a3 PushI
	var_65_bool = var_29_int == var_64_int; // 0x2a4 Eq
	if(var_65_bool == 0) goto Label_689; // 0x2a5 JumpB
	var_66_int = 4; // 0x2a6 PushI
	rand(var_32_float, var_66_int); // 0x2a7 Func
	var_67_int = 1; // 0x2a9 PushI
	var_68_int = var_32_float + var_67_int; // 0x2aa Add
	Sleep(var_68_int, var_33_bool); // 0x2ab Func
	var_69_bool = var_33_bool == 0; // 0x2ad Not
	if(var_69_bool == 0) goto Label_688; // 0x2ae JumpB
	goto Label_703; // 0x2af Jump
	
Label_688:
	goto Label_692; // 0x2b0 Jump
	
Label_689:
	var_70_int = var_28_int; // 0x2b1 Push
	if(var_70_int == 0) goto Label_692; // 0x2b2 JumpB
	goto Label_703; // 0x2b3 Jump
}


func_1015(var_82_int)
{
	var_83_int = 0; var_84_int = 0; // 0x3f7 PushV
	var_85_string = "branch"; // 0x3f8 PushS
	GetVariable(var_85_string, var_84_int); // 0x3f9 Func
	var_86_int = 0; // 0x3fb PushI
	var_87_bool = var_84_int == var_86_int; // 0x3fc Eq
	if(var_87_bool == 0) goto Label_1025; // 0x3fd JumpB
	var_82_int = 1; // 0x3fe MovI
	return 2; // 0x3ff Return
	
Label_1025:
	var_88_int = 1; // 0x401 PushI
	var_89_bool = var_84_int == var_88_int; // 0x402 Eq
	if(var_89_bool == 0) goto Label_1030; // 0x403 JumpB
	var_82_int = 2; // 0x404 MovI
	return 2; // 0x405 Return
	
Label_1030:
	var_82_int = 3; // 0x406 MovI
	return 2; // 0x407 Return
}


func_892(var_30_bool, var_31_string, var_32_string)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x37c PushV
	FindActor(var_34_object, var_31_string); // 0x37d Func
	var_35_bool = var_34_object == 0; // 0x37f NullEq
	if(var_35_bool == 0) goto Label_899; // 0x380 JumpB
	var_30_bool = 0; // 0x381 MovB
	return 2; // 0x382 Return
	
Label_899:
	Trigger(var_34_object, var_32_string); // 0x383 Func
	var_30_bool = 1; // 0x385 MovB
	return 2; // 0x386 Return
}


