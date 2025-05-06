task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xb6 PushI
	if(var_8_int == 0) goto Label_520; // 0xb7 JumpB
	func_964(); // 0xb9 NEW_2
	var_10_int = 20471; // 0xbb PushI
	var_11_bool = var_7_bool == var_10_int; // 0xbc Eq
	if(var_11_bool == 0) goto Label_195; // 0xbd JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xbe PushV
	var_12_object = var_1_object; // 0xbf MovT
	var_13_object = var_0_object; // 0xc0 MovT
	func_1040(); // 0xc1 NEW_2
	
Label_195:
	var_55_int = 20472; // 0xc3 PushI
	var_56_bool = var_7_bool == var_55_int; // 0xc4 Eq
	if(var_56_bool == 0) goto Label_203; // 0xc5 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xc6 PushV
	var_57_object = var_1_object; // 0xc7 MovT
	var_58_object = var_0_object; // 0xc8 MovT
	func_1040(); // 0xc9 NEW_2
	
Label_203:
	var_59_int = 20448; // 0xcb PushI
	var_60_bool = var_6_int == var_59_int; // 0xcc Eq
	if(var_60_bool == 0) goto Label_246; // 0xcd JumpB
	var_61_bool = 0; var_62_object = Obj(); // 0xce PushV
	var_62_object = var_1_object; // 0xcf MovT
	func_1063(var_62_object); // 0xd0 NEW_2
	if(var_61_bool == 0) goto Label_231; // 0xd2 JumpB
	var_69_string = ""; // 0xd3 PushV
	var_69_string = "Neutral"; // 0xd4 MovS
	func_159(var_7_bool, var_69_string); // 0xd5 NEW_2
	var_86_int = 519294; // 0xd7 PushI
	SetMessage(var_86_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_87_int = 519295; // 0xdc PushI
	var_88_int = 20450; // 0xdd PushI
	var_89_int = 20449; // 0xde PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0xdf TObjFunc
	var_90_int = 519300; // 0xe1 PushI
	var_91_int = 20455; // 0xe2 PushI
	var_92_int = 20454; // 0xe3 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_93_string = ""; // 0xe7 PushV
	var_93_string = "Neutral"; // 0xe8 MovS
	func_159(var_7_bool, var_93_string); // 0xe9 NEW_2
	var_94_int = 519643; // 0xeb PushI
	SetMessage(var_94_int); // 0xec TObjFunc
	ClearReplies(); // 0xee TObjFunc
	var_95_int = 519645; // 0xf0 PushI
	var_96_int = -1; // 0xf1 PushI
	var_97_int = 20822; // 0xf2 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_98_int = 20823; // 0xf6 PushI
	var_99_bool = var_6_int == var_98_int; // 0xf7 Eq
	if(var_99_bool == 0) goto Label_249; // 0xf8 JumpB
	
Label_249:
	var_100_int = 20825; // 0xf9 PushI
	var_101_bool = var_6_int == var_100_int; // 0xfa Eq
	if(var_101_bool == 0) goto Label_267; // 0xfb JumpB
	var_102_string = ""; // 0xfc PushV
	var_102_string = "Neutral"; // 0xfd MovS
	func_159(var_7_bool, var_102_string); // 0xfe NEW_2
	var_103_int = 519648; // 0x100 PushI
	SetMessage(var_103_int); // 0x101 TObjFunc
	ClearReplies(); // 0x103 TObjFunc
	var_104_int = 519649; // 0x105 PushI
	var_105_int = -1; // 0x106 PushI
	var_106_int = 20826; // 0x107 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x108 TObjFunc
	return 0; // 0x10a Return
	
Label_267:
	var_107_int = 20455; // 0x10b PushI
	var_108_bool = var_6_int == var_107_int; // 0x10c Eq
	if(var_108_bool == 0) goto Label_285; // 0x10d JumpB
	var_109_string = ""; // 0x10e PushV
	var_109_string = "Neutral"; // 0x10f MovS
	func_159(var_7_bool, var_109_string); // 0x110 NEW_2
	var_110_int = 519301; // 0x112 PushI
	SetMessage(var_110_int); // 0x113 TObjFunc
	ClearReplies(); // 0x115 TObjFunc
	var_111_int = 519304; // 0x117 PushI
	var_112_int = 20459; // 0x118 PushI
	var_113_int = 20458; // 0x119 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x11a TObjFunc
	return 0; // 0x11c Return
	
Label_285:
	var_114_int = 20450; // 0x11d PushI
	var_115_bool = var_6_int == var_114_int; // 0x11e Eq
	if(var_115_bool == 0) goto Label_303; // 0x11f JumpB
	var_116_string = ""; // 0x120 PushV
	var_116_string = "Neutral"; // 0x121 MovS
	func_159(var_7_bool, var_116_string); // 0x122 NEW_2
	var_117_int = 519296; // 0x124 PushI
	SetMessage(var_117_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_118_int = 519297; // 0x129 PushI
	var_119_int = 20452; // 0x12a PushI
	var_120_int = 20451; // 0x12b PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x12c TObjFunc
	return 0; // 0x12e Return
	
Label_303:
	var_121_int = 20452; // 0x12f PushI
	var_122_bool = var_6_int == var_121_int; // 0x130 Eq
	if(var_122_bool == 0) goto Label_326; // 0x131 JumpB
	var_123_string = ""; // 0x132 PushV
	var_123_string = "Neutral"; // 0x133 MovS
	func_159(var_7_bool, var_123_string); // 0x134 NEW_2
	var_124_int = 519298; // 0x136 PushI
	SetMessage(var_124_int); // 0x137 TObjFunc
	ClearReplies(); // 0x139 TObjFunc
	var_125_int = 519299; // 0x13b PushI
	var_126_int = 20456; // 0x13c PushI
	var_127_int = 20453; // 0x13d PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x13e TObjFunc
	var_128_int = 519317; // 0x140 PushI
	var_129_int = 20474; // 0x141 PushI
	var_130_int = 20473; // 0x142 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x143 TObjFunc
	return 0; // 0x145 Return
	
Label_326:
	var_131_int = 20474; // 0x146 PushI
	var_132_bool = var_6_int == var_131_int; // 0x147 Eq
	if(var_132_bool == 0) goto Label_349; // 0x148 JumpB
	var_133_string = ""; // 0x149 PushV
	var_133_string = "Neutral"; // 0x14a MovS
	func_159(var_7_bool, var_133_string); // 0x14b NEW_2
	var_134_int = 519318; // 0x14d PushI
	SetMessage(var_134_int); // 0x14e TObjFunc
	ClearReplies(); // 0x150 TObjFunc
	var_135_int = 519319; // 0x152 PushI
	var_136_int = 20476; // 0x153 PushI
	var_137_int = 20475; // 0x154 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x155 TObjFunc
	var_138_int = 519322; // 0x157 PushI
	var_139_int = 20456; // 0x158 PushI
	var_140_int = 20479; // 0x159 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x15a TObjFunc
	return 0; // 0x15c Return
	
Label_349:
	var_141_int = 20476; // 0x15d PushI
	var_142_bool = var_6_int == var_141_int; // 0x15e Eq
	if(var_142_bool == 0) goto Label_367; // 0x15f JumpB
	var_143_string = ""; // 0x160 PushV
	var_143_string = "Neutral"; // 0x161 MovS
	func_159(var_7_bool, var_143_string); // 0x162 NEW_2
	var_144_int = 519320; // 0x164 PushI
	SetMessage(var_144_int); // 0x165 TObjFunc
	ClearReplies(); // 0x167 TObjFunc
	var_145_int = 519321; // 0x169 PushI
	var_146_int = 20456; // 0x16a PushI
	var_147_int = 20477; // 0x16b PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_148_int = 20456; // 0x16f PushI
	var_149_bool = var_6_int == var_148_int; // 0x170 Eq
	if(var_149_bool == 0) goto Label_385; // 0x171 JumpB
	var_150_string = ""; // 0x172 PushV
	var_150_string = "Neutral"; // 0x173 MovS
	func_159(var_7_bool, var_150_string); // 0x174 NEW_2
	var_151_int = 519302; // 0x176 PushI
	SetMessage(var_151_int); // 0x177 TObjFunc
	ClearReplies(); // 0x179 TObjFunc
	var_152_int = 519303; // 0x17b PushI
	var_153_int = 20459; // 0x17c PushI
	var_154_int = 20457; // 0x17d PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x17e TObjFunc
	return 0; // 0x180 Return
	
Label_385:
	var_155_int = 20459; // 0x181 PushI
	var_156_bool = var_6_int == var_155_int; // 0x182 Eq
	if(var_156_bool == 0) goto Label_408; // 0x183 JumpB
	var_157_string = ""; // 0x184 PushV
	var_157_string = "Neutral"; // 0x185 MovS
	func_159(var_7_bool, var_157_string); // 0x186 NEW_2
	var_158_int = 519305; // 0x188 PushI
	SetMessage(var_158_int); // 0x189 TObjFunc
	ClearReplies(); // 0x18b TObjFunc
	var_159_int = 519306; // 0x18d PushI
	var_160_int = 20462; // 0x18e PushI
	var_161_int = 20461; // 0x18f PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x190 TObjFunc
	var_162_int = 519638; // 0x192 PushI
	var_163_int = 20817; // 0x193 PushI
	var_164_int = 20816; // 0x194 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x195 TObjFunc
	return 0; // 0x197 Return
	
Label_408:
	var_165_int = 20817; // 0x198 PushI
	var_166_bool = var_6_int == var_165_int; // 0x199 Eq
	if(var_166_bool == 0) goto Label_426; // 0x19a JumpB
	var_167_string = ""; // 0x19b PushV
	var_167_string = "Neutral"; // 0x19c MovS
	func_159(var_7_bool, var_167_string); // 0x19d NEW_2
	var_168_int = 519639; // 0x19f PushI
	SetMessage(var_168_int); // 0x1a0 TObjFunc
	ClearReplies(); // 0x1a2 TObjFunc
	var_169_int = 519640; // 0x1a4 PushI
	var_170_int = 20470; // 0x1a5 PushI
	var_171_int = 20818; // 0x1a6 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x1a7 TObjFunc
	return 0; // 0x1a9 Return
	
Label_426:
	var_172_int = 20462; // 0x1aa PushI
	var_173_bool = var_6_int == var_172_int; // 0x1ab Eq
	if(var_173_bool == 0) goto Label_444; // 0x1ac JumpB
	var_174_string = ""; // 0x1ad PushV
	var_174_string = "Neutral"; // 0x1ae MovS
	func_159(var_7_bool, var_174_string); // 0x1af NEW_2
	var_175_int = 519307; // 0x1b1 PushI
	SetMessage(var_175_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_176_int = 519308; // 0x1b6 PushI
	var_177_int = 20464; // 0x1b7 PushI
	var_178_int = 20463; // 0x1b8 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x1b9 TObjFunc
	return 0; // 0x1bb Return
	
Label_444:
	var_179_int = 20464; // 0x1bc PushI
	var_180_bool = var_6_int == var_179_int; // 0x1bd Eq
	if(var_180_bool == 0) goto Label_467; // 0x1be JumpB
	var_181_string = ""; // 0x1bf PushV
	var_181_string = "Neutral"; // 0x1c0 MovS
	func_159(var_7_bool, var_181_string); // 0x1c1 NEW_2
	var_182_int = 519309; // 0x1c3 PushI
	SetMessage(var_182_int); // 0x1c4 TObjFunc
	ClearReplies(); // 0x1c6 TObjFunc
	var_183_int = 519310; // 0x1c8 PushI
	var_184_int = 20467; // 0x1c9 PushI
	var_185_int = 20465; // 0x1ca PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x1cb TObjFunc
	var_186_int = 519311; // 0x1cd PushI
	var_187_int = 20467; // 0x1ce PushI
	var_188_int = 20466; // 0x1cf PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x1d0 TObjFunc
	return 0; // 0x1d2 Return
	
Label_467:
	var_189_int = 20467; // 0x1d3 PushI
	var_190_bool = var_6_int == var_189_int; // 0x1d4 Eq
	if(var_190_bool == 0) goto Label_485; // 0x1d5 JumpB
	var_191_string = ""; // 0x1d6 PushV
	var_191_string = "Neutral"; // 0x1d7 MovS
	func_159(var_7_bool, var_191_string); // 0x1d8 NEW_2
	var_192_int = 519312; // 0x1da PushI
	SetMessage(var_192_int); // 0x1db TObjFunc
	ClearReplies(); // 0x1dd TObjFunc
	var_193_int = 519313; // 0x1df PushI
	var_194_int = 20470; // 0x1e0 PushI
	var_195_int = 20469; // 0x1e1 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1e2 TObjFunc
	return 0; // 0x1e4 Return
	
Label_485:
	var_196_int = 20470; // 0x1e5 PushI
	var_197_bool = var_6_int == var_196_int; // 0x1e6 Eq
	if(var_197_bool == 0) goto Label_508; // 0x1e7 JumpB
	var_198_string = ""; // 0x1e8 PushV
	var_198_string = "Neutral"; // 0x1e9 MovS
	func_159(var_7_bool, var_198_string); // 0x1ea NEW_2
	var_199_int = 519314; // 0x1ec PushI
	SetMessage(var_199_int); // 0x1ed TObjFunc
	ClearReplies(); // 0x1ef TObjFunc
	var_200_int = 519315; // 0x1f1 PushI
	var_201_int = -1; // 0x1f2 PushI
	var_202_int = 20471; // 0x1f3 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x1f4 TObjFunc
	var_203_int = 519316; // 0x1f6 PushI
	var_204_int = -1; // 0x1f7 PushI
	var_205_int = 20472; // 0x1f8 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x1f9 TObjFunc
	return 0; // 0x1fb Return
	
Label_508:
	var_3_string = 1; // 0x1fc TMovB
	var_206_bool = 0; // 0x1fd PushV
	func_1014(var_206_bool); // 0x1fe NEW_2
	if(var_206_bool == 0) goto Label_516; // 0x200 JumpB
	lshStopAnimation(); // 0x201 Func
	goto Label_518; // 0x203 Jump
	
Label_518:
	return 0; // 0x206 Return
	
Label_516:
	StopAnimation(); // 0x204 Func
	
Label_520:
	return 0; // 0x208 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_685(); // 0x20b NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x20d PushV
	var_8_object = var_6_object; // 0x20e Mov
	TaskCall(0); // 0x20f TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x210 NEW_2
	TaskReturn(); // 0x211 TaskReturn
	return 0; // 0x213 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x23e PushS
	var_8_bool = var_6_string == var_7_string; // 0x23f Eq
	if(var_8_bool == 0) goto Label_580; // 0x240 JumpB
	func_553(var_6_string); // 0x242 NEW_2
	
Label_580:
	return 0; // 0x244 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x245 Func
	sync(); // 0x247 Func
	return 0; // 0x249 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x24a PushV
	var_6_bool = 0; // 0x24b MovB
	var_7_object = var_0_object; // 0x24c PushT
	if(var_7_object == 0) goto Label_595; // 0x24d JumpB
	var_8_bool = 0; // 0x24e PushV
	func_602(var_8_bool); // 0x24f NEW_2
	if(var_8_bool == 0) goto Label_595; // 0x251 JumpB
	var_6_bool = 1; // 0x252 MovB
	
Label_595:
	if(var_6_bool == 0) goto Label_601; // 0x253 JumpB
	var_9_object = Obj(); // 0x254 PushV
	func_971(var_9_object); // 0x255 NEW_2
	RemoveActor(var_9_object); // 0x257 Func
	
Label_601:
	return 0; // 0x259 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x214 PushV
	
Label_533:
	var_8_bool = 0; // 0x215 PushV
	func_690(var_8_bool); // 0x216 NEW_2
	var_11_bool = var_8_bool == 0; // 0x218 Not
	if(var_11_bool == 0) goto Label_541; // 0x219 JumpB
	Hold(); // 0x21a Func
	goto Label_533; // 0x21c Jump
	
Label_541:
	var_12_int = 3; // 0x21d PushI
	rand(var_7_float, var_12_int); // 0x21e Func
	var_13_int = 3; // 0x220 PushI
	var_14_int = var_7_float + var_13_int; // 0x221 Add
	Sleep(var_14_int); // 0x222 Func
	func_604(); // 0x225 NEW_2
	goto Label_533; // 0x227 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_695(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1008(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1006(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1010(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1012(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_1146(var_69_int); // 0x22 NEW_2
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
	func_971(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_780(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_235_bool = var_17_bool == 0; // 0x3f Not
	if(var_235_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_236_object = Obj(); // 0x46 PushV
	var_236_object = var_8_object; // 0x47 Mov
	func_763(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_780(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x30c PushV
	var_87_string = "voice_common"; // 0x30d PushS
	GetVariable(var_87_string, var_85_int); // 0x30e Func
	var_88_int = var_85_int; // 0x310 Push
	if(var_88_int == 0) goto Label_818; // 0x311 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x312 PushV
	var_90_object = var_79_object; // 0x313 Mov
	func_838(var_90_object); // 0x314 NEW_2
	var_119_bool = var_89_bool == 0; // 0x316 Not
	if(var_119_bool == 0) goto Label_800; // 0x317 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x318 PushV
	var_121_object = var_79_object; // 0x319 Mov
	func_875(var_121_object); // 0x31a NEW_2
	var_155_bool = var_120_bool == 0; // 0x31c Not
	if(var_155_bool == 0) goto Label_800; // 0x31d JumpB
	var_78_bool = 0; // 0x31e MovB
	return 4; // 0x31f Return
	
Label_800:
	var_156_int = 2; // 0x320 PushI
	irand(var_86_int, var_156_int); // 0x321 Func
	var_157_int = var_86_int; // 0x323 Push
	if(var_157_int == 0) goto Label_813; // 0x324 JumpB
	var_158_string = "voice_common"; // 0x325 PushS
	var_159_int = 1; // 0x326 PushI
	var_160_int = var_85_int + var_159_int; // 0x327 Add
	var_161_int = 3; // 0x328 PushI
	var_162_int = var_160_int / var_161_int; // 0x329 Mod
	SetVariable(var_158_string, var_162_int); // 0x32a Func
	goto Label_817; // 0x32c Jump
	
Label_817:
	goto Label_836; // 0x331 Jump
	
Label_836:
	var_78_bool = 1; // 0x344 MovB
	return 4; // 0x345 Return
	
Label_813:
	var_163_string = "voice_common"; // 0x32d PushS
	var_164_int = 0; // 0x32e PushI
	SetVariable(var_163_string, var_164_int); // 0x32f Func
	
Label_818:
	var_165_bool = 0; var_166_object = Obj(); // 0x332 PushV
	var_166_object = var_79_object; // 0x333 Mov
	func_875(var_166_object); // 0x334 NEW_2
	var_167_bool = var_165_bool == 0; // 0x336 Not
	if(var_167_bool == 0) goto Label_832; // 0x337 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x338 PushV
	var_169_object = var_79_object; // 0x339 Mov
	func_838(var_169_object); // 0x33a NEW_2
	var_170_bool = var_168_bool == 0; // 0x33c Not
	if(var_170_bool == 0) goto Label_832; // 0x33d JumpB
	var_78_bool = 0; // 0x33e MovB
	return 4; // 0x33f Return
	
Label_832:
	var_171_string = "voice_common"; // 0x340 PushS
	var_172_int = 1; // 0x341 PushI
	SetVariable(var_171_string, var_172_int); // 0x342 Func
}


func_1040()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x410 PushV
	var_16_string = "b3q01"; // 0x411 PushS
	var_17_int = 3; // 0x412 PushI
	SetVariable(var_16_string, var_17_int); // 0x413 Func
	var_18_object = Obj(); // 0x415 PushV
	func_1129(var_18_object); // 0x416 NEW_2
	var_15_object = var_18_object; // 0x417 Mov
	var_25_string = "b3q01ButcherGotoBigVlad"; // 0x419 PushS
	var_26_string = "pt_map_bigvlad"; // 0x41a PushS
	var_27_int = 1; // 0x41b PushI
	var_28_int = 519641; // 0x41c PushI
	var_29_float = 0; // 0x41d PushV
	func_992(var_29_float); // 0x41e NEW_2
	AddMark(var_25_string, var_26_string, var_27_int, var_28_int, var_29_float); // 0x420 ObjFunc
	func_1075(); // 0x423 NEW_2
	return 2; // 0x425 Return
}


func_918(var_214_string)
{
	var_215_bool = 0; var_216_float = 0; var_217_float = 0; var_218_bool = 0; var_219_float = 0; var_220_float = 0; // 0x396 PushV
	lshHasAnimation(var_218_bool, var_214_string); // 0x397 Func
	var_221_bool = var_218_bool; // 0x399 Push
	if(var_221_bool == 0) goto Label_929; // 0x39a JumpB
	lshGetAnimTimes(var_214_string, var_219_float, var_220_float); // 0x39b Func
	var_222_bool = 0; // 0x39d PushB
	lshPlayAnimation(var_219_float, var_220_float, var_222_bool); // 0x39e Func
	goto Label_933; // 0x3a0 Jump
	
Label_933:
	return 6; // 0x3a5 Return
	
Label_929:
	var_223_string = "Can't find lsh animation : "; // 0x3a1 PushS
	var_224_int = var_223_string + var_214_string; // 0x3a2 Add
	Trace(var_224_int); // 0x3a3 Func
}


func_159(var_2_object, var_188_string)
{
	var_189_bool = 0; // 0xa0 PushV
	func_1014(var_189_bool); // 0xa1 NEW_2
	var_190_bool = var_189_bool == 0; // 0xa3 Not
	if(var_190_bool == 0) goto Label_166; // 0xa4 JumpB
	return 0; // 0xa5 Return
	
Label_166:
	var_191_bool = var_188_string == var_2_object; // 0xa6 Eq
	if(var_191_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_192_string = ""; var_193_bool = 0; // 0xa9 PushV
	var_192_string = var_188_string; // 0xaa Mov
	var_194_string = ""; // 0xab PushS
	var_195_bool = var_188_string == var_194_string; // 0xac Eq
	if(var_195_bool == 0) goto Label_176; // 0xad JumpB
	var_193_bool = 0; // 0xae MovB
	goto Label_177; // 0xaf Jump
	
Label_177:
	func_934(var_192_string, var_193_bool); // 0xb1 NEW_2
	var_2_object = var_188_string; // 0xb3 TMov
	return 0; // 0xb4 Return
	
Label_176:
	var_193_bool = 1; // 0xb0 MovB
}


func_934(var_192_string, var_193_bool)
{
	var_196_bool = 0; var_197_float = 0; var_198_float = 0; var_199_bool = 0; var_200_float = 0; var_201_float = 0; // 0x3a6 PushV
	lshHasAnimation(var_199_bool, var_192_string); // 0x3a7 Func
	var_202_bool = var_199_bool; // 0x3a9 Push
	if(var_202_bool == 0) goto Label_944; // 0x3aa JumpB
	lshGetAnimTimes(var_192_string, var_200_float, var_201_float); // 0x3ab Func
	lshPlayAnimation(var_200_float, var_201_float, var_193_bool); // 0x3ad Func
	goto Label_948; // 0x3af Jump
	
Label_948:
	return 6; // 0x3b4 Return
	
Label_944:
	var_203_string = "Can't find lsh animation : "; // 0x3b0 PushS
	var_204_int = var_203_string + var_192_string; // 0x3b1 Add
	Trace(var_204_int); // 0x3b2 Func
}


func_1063(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x428 PushV
	var_183_string = "b3q01"; // 0x429 MovS
	func_987(var_182_int, var_183_string); // 0x42a NEW_2
	var_186_int = 2; // 0x42c PushI
	var_187_bool = var_182_int == var_186_int; // 0x42d Eq
	if(var_187_bool == 0) goto Label_1073; // 0x42e JumpB
	var_180_bool = 1; // 0x42f MovB
	return 0; // 0x430 Return
	
Label_1073:
	var_180_bool = 0; // 0x431 MovB
	return 0; // 0x432 Return
}


func_553(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x229 PushV
	var_0_object = 1; // 0x22a TMovB
	IsLoaded(var_10_bool); // 0x22b Func
	var_11_bool = 0; // 0x22d PushV
	var_11_bool = 0; // 0x22e MovB
	var_12_bool = var_10_bool == 0; // 0x22f Not
	if(var_12_bool == 0) goto Label_566; // 0x230 JumpB
	var_13_bool = 0; // 0x231 PushV
	func_602(var_13_bool); // 0x232 NEW_2
	if(var_13_bool == 0) goto Label_566; // 0x234 JumpB
	var_11_bool = 1; // 0x235 MovB
	
Label_566:
	if(var_11_bool == 0) goto Label_572; // 0x236 JumpB
	var_14_object = Obj(); // 0x237 PushV
	func_971(var_14_object); // 0x238 NEW_2
	RemoveActor(var_14_object); // 0x23a Func
	
Label_572:
	return 2; // 0x23c Return
}


func_683(var_56_bool)
{
	var_56_bool = 1; // 0x2ab MovB
	return 0; // 0x2ac Return
}


func_685()
{
	StopAnimation(); // 0x2ad Func
	StopGroup0(); // 0x2af Func
	return 0; // 0x2b1 Return
}


func_690(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x2b2 PushV
	IsLoaded(var_10_bool); // 0x2b3 Func
	var_8_bool = var_10_bool; // 0x2b5 Mov
	return 2; // 0x2b6 Return
}


func_1075()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x433 PushV
	var_34_int = 224; // 0x434 PushI
	var_35_int = 1; // 0x435 PushI
	var_36_int = 519642; // 0x436 PushI
	CreateDiaryEntry(var_33_object, var_34_int, var_35_int, var_36_int); // 0x437 Func
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0; // 0x439 PushV
	var_38_object = var_33_object; // 0x43a Mov
	var_39_int = 221; // 0x43b MovI
	func_1101(var_37_bool, var_38_object, var_39_int); // 0x43c NEW_2
	return 2; // 0x43e Return
}


func_949(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x3b5 PushV
	var_116_bool = 0; // 0x3b6 PushV
	func_1014(var_116_bool); // 0x3b7 NEW_2
	if(var_116_bool == 0) goto Label_962; // 0x3b9 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x3ba Func
	var_117_bool = var_115_bool; // 0x3bc Push
	if(var_117_bool == 0) goto Label_962; // 0x3bd JumpB
	lshPlaySpeech(var_113_string); // 0x3be Func
	var_112_bool = 1; // 0x3c0 MovB
	return 2; // 0x3c1 Return
	
Label_962:
	var_112_bool = 0; // 0x3c2 MovB
	return 2; // 0x3c3 Return
}


func_695(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x2b7 PushV
	GetPosition(var_31_cvector); // 0x2b8 ObjFunc
	GetEyesHeight(var_30_float); // 0x2ba ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x2bc PushE
	var_39_float = var_39_float + var_30_float; // 0x2bd Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x2be PopE
	GetPosition(var_32_cvector); // 0x2bf Func
	GetEyesHeight(var_30_float); // 0x2c1 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x2c3 PushE
	var_40_float = var_40_float + var_30_float; // 0x2c4 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x2c5 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x2c6 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x2c7 PushE
	var_41_float = 0; // 0x2c8 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x2c9 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x2ca Or
	var_43_float = sqrt(var_42_int); // 0x2cb Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x2cc Div2
	var_34_cvector = -var_33_cvector; // 0x2cd Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x2ce Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x2cf PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x2d0 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x2d1 Xor2
	func_977(var_45_cvector, var_46_cvector); // 0x2d2 NEW_2
	var_53_int = 25; // 0x2d4 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x2d5 Mult
	var_55_int = var_44_float + var_54_float; // 0x2d6 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x2d7 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x2d8 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x2d9 Add2
	IsOverrideActive(var_37_bool); // 0x2da Func
	var_57_bool = var_37_bool; // 0x2dc Push
	if(var_57_bool == 0) goto Label_736; // 0x2dd JumpB
	var_18_bool = 0; // 0x2de MovB
	return 18; // 0x2df Return
	
Label_736:
	StopWorld(); // 0x2e0 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x2e2 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x2e4 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x2e5 PushE
	Rotate(var_58_float, var_59_float); // 0x2e6 Func
	var_60_bool = 0; // 0x2e8 PushV
	func_1014(var_60_bool); // 0x2e9 NEW_2
	if(var_60_bool == 0) goto Label_749; // 0x2eb JumpB
	goto Label_757; // 0x2ec Jump
	
Label_757:
	CameraWaitForPlayFinish(); // 0x2f5 Func
	ResumeWorld(); // 0x2f7 Func
	var_18_bool = 1; // 0x2f9 MovB
	return 18; // 0x2fa Return
	
Label_749:
	var_61_string = "head"; // 0x2ed PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x2ee Func
	var_62_bool = var_38_bool; // 0x2f0 Push
	if(var_62_bool == 0) goto Label_757; // 0x2f1 JumpB
	var_63_string = "head"; // 0x2f2 PushS
	LookAsyncCamera(var_63_string); // 0x2f3 Func
}


func_1088(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x440 PushV
	GetDiaryRoot(var_48_object); // 0x441 Func
	var_49_bool = var_48_object == 0; // 0x443 Not
	if(var_49_bool == 0) goto Label_1098; // 0x444 JumpB
	var_50_string = "Can't retrieve diary root"; // 0x445 PushS
	Trace(var_50_string); // 0x446 Func
	var_46_object = 0; // 0x448 MovB
	return 2; // 0x449 Return
	
Label_1098:
	var_46_object = var_48_object; // 0x44a Mov
	return 2; // 0x44b Return
}


func_964()
{
	var_9_bool = 0; // 0x3c4 PushV
	func_1014(var_9_bool); // 0x3c5 NEW_2
	if(var_9_bool == 0) goto Label_970; // 0x3c7 JumpB
	lshStopSpeech(); // 0x3c8 Func
	
Label_970:
	return 0; // 0x3ca Return
}


func_838(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x346 PushV
	var_96_string = "c"; // 0x347 MovS
	var_97_int = 0; // 0x348 MovI
	
Label_841:
	var_101_int = 1; // 0x349 PushI
	if(var_101_int == 0) goto Label_854; // 0x34a JumpB
	var_102_int = 1; // 0x34b PushI
	var_103_int = var_97_int + var_102_int; // 0x34c Add
	var_104_int = var_96_string + var_103_int; // 0x34d Add
	HasProperty(var_104_int, var_98_bool); // 0x34e ObjFunc
	var_105_bool = var_98_bool == 0; // 0x350 Not
	if(var_105_bool == 0) goto Label_851; // 0x351 JumpB
	goto Label_854; // 0x352 Jump
	
Label_854:
	var_106_bool = var_97_int == 0; // 0x356 Not
	if(var_106_bool == 0) goto Label_858; // 0x357 JumpB
	var_89_bool = 0; // 0x358 MovB
	return 10; // 0x359 Return
	
Label_858:
	var_99_int = 0; // 0x35a MovI
	var_107_int = 1; // 0x35b PushI
	var_108_bool = var_97_int > var_107_int; // 0x35c GT
	if(var_108_bool == 0) goto Label_864; // 0x35d JumpB
	irand(var_99_int, var_97_int); // 0x35e Func
	
Label_864:
	var_109_int = 1; // 0x360 PushI
	var_110_int = var_99_int + var_109_int; // 0x361 Add
	var_111_int = var_96_string + var_110_int; // 0x362 Add
	GetProperty(var_111_int, var_100_string); // 0x363 ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x365 PushV
	var_113_string = var_100_string; // 0x366 Mov
	func_949(var_112_bool, var_113_string); // 0x367 NEW_2
	var_89_bool = var_112_bool; // 0x368 Mov
	return 10; // 0x36a Return
	
Label_851:
	var_118_int = 1; // 0x353 PushI
	var_97_int = var_97_int + var_118_int; // 0x354 Add2
	goto Label_841; // 0x355 Jump
}


func_971(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x3cb PushV
	self(var_11_object); // 0x3cc Func
	var_9_object = var_11_object; // 0x3ce Mov
	return 2; // 0x3cf Return
}


func_1101(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x44d PushV
	var_46_object = Obj(); // 0x44e PushV
	func_1088(var_46_object); // 0x44f NEW_2
	var_43_object = var_46_object; // 0x450 Mov
	Find(var_39_int, var_44_object); // 0x452 ObjFunc
	var_51_bool = var_44_object == 0; // 0x454 Not
	if(var_51_bool == 0) goto Label_1116; // 0x455 JumpB
	var_52_string = "Can't find diary parent with id: "; // 0x456 PushS
	var_53_int = var_52_string + var_39_int; // 0x457 Add
	Trace(var_53_int); // 0x458 Func
	var_37_bool = 0; // 0x45a MovB
	return 6; // 0x45b Return
	
Label_1116:
	AddChild(var_38_object); // 0x45c ObjFunc
	var_54_int = 7; // 0x45e PushI
	SendWorldWndMessage(var_54_int); // 0x45f Func
	GetCategory(var_45_int); // 0x461 ObjFunc
	SetDiarySection(var_45_int); // 0x463 Func
	var_37_bool = 0; // 0x465 MovB
	return 6; // 0x466 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_129; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_1063(var_181_object); // 0x59 NEW_2
	if(var_180_bool == 0) goto Label_112; // 0x5b JumpB
	var_188_string = ""; // 0x5c PushV
	var_188_string = "Neutral"; // 0x5d MovS
	func_159(var_174_object, var_188_string); // 0x5e NEW_2
	var_205_int = 519294; // 0x60 PushI
	SetMessage(var_205_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_206_int = 519295; // 0x65 PushI
	var_207_int = 20450; // 0x66 PushI
	var_208_int = 20449; // 0x67 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x68 TObjFunc
	var_209_int = 519300; // 0x6a PushI
	var_210_int = 20455; // 0x6b PushI
	var_211_int = 20454; // 0x6c PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x6d TObjFunc
	goto Label_129; // 0x6f Jump
	
Label_129:
	var_212_bool = 0; // 0x81 PushV
	func_1014(var_212_bool); // 0x82 NEW_2
	if(var_212_bool == 0) goto Label_144; // 0x84 JumpB
	
Label_133:
	lshWaitForAnimEnd(); // 0x85 Func
	var_213_string = var_3_string; // 0x87 PushT
	if(var_213_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_143:
	goto Label_158; // 0x8f Jump
	
Label_158:
	return 0; // 0x9e Return
	
Label_138:
	var_214_string = ""; // 0x8a PushV
	var_214_string = var_2_object; // 0x8b MovT
	func_918(var_214_string); // 0x8c NEW_2
	goto Label_133; // 0x8e Jump
	
Label_144:
	var_225_string = "all"; // 0x90 PushS
	var_226_string = "idle"; // 0x91 PushS
	PlayAnimation(var_225_string, var_226_string); // 0x92 Func
	
Label_148:
	WaitForAnimEnd(); // 0x94 Func
	var_227_string = var_3_string; // 0x96 PushT
	if(var_227_string == 0) goto Label_153; // 0x97 JumpB
	goto Label_158; // 0x98 Jump
	
Label_153:
	var_228_string = "all"; // 0x99 PushS
	var_229_string = "idle"; // 0x9a PushS
	PlayAnimation(var_228_string, var_229_string); // 0x9b Func
	goto Label_148; // 0x9d Jump
	
Label_112:
	var_230_string = ""; // 0x70 PushV
	var_230_string = "Neutral"; // 0x71 MovS
	func_159(var_174_object, var_230_string); // 0x72 NEW_2
	var_231_int = 519643; // 0x74 PushI
	SetMessage(var_231_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_232_int = 519645; // 0x79 PushI
	var_233_int = -1; // 0x7a PushI
	var_234_int = 20822; // 0x7b PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x7c TObjFunc
	goto Label_129; // 0x7e Jump
}


func_977(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x3d1 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x3d2 Or
	var_49_float = sqrt(var_50_int); // 0x3d3 Sqrt2
	var_51_float = 0.0; // 0x3d4 PushF
	var_52_bool = var_49_float < var_51_float; // 0x3d5 LT
	if(var_52_bool == 0) goto Label_985; // 0x3d6 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x3d7 MovV
	return 2; // 0x3d8 Return
	
Label_985:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x3d9 Div2
	return 2; // 0x3da Return
}


func_602(var_8_bool)
{
	var_8_bool = 1; // 0x25a MovB
	return 0; // 0x25b Return
}


func_987(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x3db PushV
	GetVariable(var_183_string, var_185_int); // 0x3dc Func
	var_182_int = var_185_int; // 0x3de Mov
	return 2; // 0x3df Return
}


func_604()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x25c PushV
	WaitForAnimEnd(); // 0x25d Func
	var_29_bool = 0; // 0x25f PushV
	func_690(var_29_bool); // 0x260 NEW_2
	var_30_bool = var_29_bool == 0; // 0x262 Not
	if(var_30_bool == 0) goto Label_613; // 0x263 JumpB
	return 14; // 0x264 Return
	
Label_613:
	var_31_int = 0; // 0x265 PushV
	func_1023(var_31_int); // 0x266 NEW_2
	var_22_int = var_31_int; // 0x267 Mov
	var_23_int = 0; // 0x269 MovI
	
Label_618:
	var_44_bool = 0; // 0x26a PushV
	var_44_bool = 0; // 0x26b MovB
	var_45_int = 5; // 0x26c PushI
	var_46_bool = var_23_int < var_45_int; // 0x26d LT
	if(var_46_bool == 0) goto Label_628; // 0x26e JumpB
	var_47_bool = 0; // 0x26f PushV
	func_690(var_47_bool); // 0x270 NEW_2
	if(var_47_bool == 0) goto Label_628; // 0x272 JumpB
	var_44_bool = 1; // 0x273 MovB
	
Label_628:
	if(var_44_bool == 0) goto Label_680; // 0x274 JumpB
	var_48_int = 3; // 0x275 PushI
	irand(var_24_int, var_48_int); // 0x276 Func
	var_49_int = 0; // 0x278 PushI
	var_50_bool = var_24_int == var_49_int; // 0x279 Eq
	if(var_50_bool == 0) goto Label_652; // 0x27a JumpB
	var_51_int = var_22_int; // 0x27b Push
	if(var_51_int == 0) goto Label_651; // 0x27c JumpB
	irand(var_25_int, var_22_int); // 0x27d Func
	var_52_string = "all"; // 0x27f PushS
	var_53_string = ""; var_54_int = 0; // 0x280 PushV
	var_54_int = var_25_int; // 0x281 Mov
	func_1016(var_53_string, var_54_int); // 0x282 NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x284 Func
	WaitForAnimEnd(var_26_bool); // 0x286 Func
	var_55_bool = var_26_bool == 0; // 0x288 Not
	if(var_55_bool == 0) goto Label_651; // 0x289 JumpB
	goto Label_680; // 0x28a Jump
	
Label_680:
	ResetAAS(); // 0x2a8 Func
	return 14; // 0x2aa Return
	
Label_651:
	goto Label_669; // 0x28b Jump
	
Label_669:
	var_56_bool = 0; // 0x29d PushV
	func_683(var_56_bool); // 0x29e NEW_2
	var_57_bool = var_56_bool == 0; // 0x2a0 Not
	if(var_57_bool == 0) goto Label_675; // 0x2a1 JumpB
	goto Label_680; // 0x2a2 Jump
	
Label_675:
	ResetAAS(); // 0x2a3 Func
	var_58_int = 1; // 0x2a5 PushI
	var_23_int = var_23_int + var_58_int; // 0x2a6 Add2
	goto Label_618; // 0x2a7 Jump
	
Label_652:
	var_59_int = 1; // 0x28c PushI
	var_60_bool = var_24_int == var_59_int; // 0x28d Eq
	if(var_60_bool == 0) goto Label_666; // 0x28e JumpB
	var_61_int = 4; // 0x28f PushI
	rand(var_27_float, var_61_int); // 0x290 Func
	var_62_int = 1; // 0x292 PushI
	var_63_int = var_27_float + var_62_int; // 0x293 Add
	Sleep(var_63_int, var_28_bool); // 0x294 Func
	var_64_bool = var_28_bool == 0; // 0x296 Not
	if(var_64_bool == 0) goto Label_665; // 0x297 JumpB
	goto Label_680; // 0x298 Jump
	
Label_665:
	goto Label_669; // 0x299 Jump
	
Label_666:
	var_65_int = var_23_int; // 0x29a Push
	if(var_65_int == 0) goto Label_669; // 0x29b JumpB
	goto Label_680; // 0x29c Jump
}


func_992(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x3e0 PushV
	GetGameTime(var_31_float); // 0x3e1 Func
	var_29_float = var_31_float; // 0x3e3 Mov
	return 2; // 0x3e4 Return
}


func_997(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x3e5 PushV
	GetGameTime(var_135_float); // 0x3e6 Func
	var_136_int = 1; // 0x3e8 PushI
	var_137_int = 0; // 0x3e9 PushV
	var_138_int = 24; // 0x3ea PushI
	var_137_int = var_135_float / var_135_float; // 0x3eb Div2
	var_133_int = var_136_int + var_137_int; // 0x3ec Add2
	return 2; // 0x3ed Return
}


func_1129(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x469 PushV
	GetMainOutdoorScene(var_21_object); // 0x46a Func
	var_23_bool = var_21_object == 0; // 0x46c NullEq
	if(var_23_bool == 0) goto Label_1140; // 0x46d JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x46e PushS
	Trace(var_24_string); // 0x46f Func
	var_22_object = 0; // 0x471 SetNull
	var_18_object = var_22_object; // 0x472 Mov
	return 4; // 0x473 Return
	
Label_1140:
	GetMap(var_22_object); // 0x474 ObjFunc
	var_18_object = var_22_object; // 0x476 Mov
	return 4; // 0x477 Return
}


func_875(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x36b PushV
	var_132_string = "d"; // 0x36c PushS
	var_133_int = 0; // 0x36d PushV
	func_997(var_133_int); // 0x36e NEW_2
	var_139_int = var_132_string + var_133_int; // 0x370 Add
	var_140_string = "m"; // 0x371 PushS
	var_127_string = var_139_int + var_140_string; // 0x372 Add2
	var_128_int = 0; // 0x373 MovI
	
Label_884:
	var_141_int = 1; // 0x374 PushI
	if(var_141_int == 0) goto Label_897; // 0x375 JumpB
	var_142_int = 1; // 0x376 PushI
	var_143_int = var_128_int + var_142_int; // 0x377 Add
	var_144_int = var_127_string + var_143_int; // 0x378 Add
	HasProperty(var_144_int, var_129_bool); // 0x379 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x37b Not
	if(var_145_bool == 0) goto Label_894; // 0x37c JumpB
	goto Label_897; // 0x37d Jump
	
Label_897:
	var_146_bool = var_128_int == 0; // 0x381 Not
	if(var_146_bool == 0) goto Label_901; // 0x382 JumpB
	var_120_bool = 0; // 0x383 MovB
	return 10; // 0x384 Return
	
Label_901:
	var_130_int = 0; // 0x385 MovI
	var_147_int = 1; // 0x386 PushI
	var_148_bool = var_128_int > var_147_int; // 0x387 GT
	if(var_148_bool == 0) goto Label_907; // 0x388 JumpB
	irand(var_130_int, var_128_int); // 0x389 Func
	
Label_907:
	var_149_int = 1; // 0x38b PushI
	var_150_int = var_130_int + var_149_int; // 0x38c Add
	var_151_int = var_127_string + var_150_int; // 0x38d Add
	GetProperty(var_151_int, var_131_string); // 0x38e ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x390 PushV
	var_153_string = var_131_string; // 0x391 Mov
	func_949(var_152_bool, var_153_string); // 0x392 NEW_2
	var_120_bool = var_152_bool; // 0x393 Mov
	return 10; // 0x395 Return
	
Label_894:
	var_154_int = 1; // 0x37e PushI
	var_128_int = var_128_int + var_154_int; // 0x37f Add2
	goto Label_884; // 0x380 Jump
}


func_1006(var_66_int)
{
	var_66_int = 515562; // 0x3ee MovI
	return 0; // 0x3ef Return
}


func_1008(var_65_int)
{
	var_65_int = 503347; // 0x3f0 MovI
	return 0; // 0x3f1 Return
}


func_1010(var_67_string)
{
	var_67_string = "ui/NPC_Citizen1.png"; // 0x3f2 MovS
	return 0; // 0x3f3 Return
}


func_1012(var_68_string)
{
	var_68_string = "ui/NPC_Citizen1_b.png"; // 0x3f4 MovS
	return 0; // 0x3f5 Return
}


func_1014(var_60_bool)
{
	var_60_bool = 0; // 0x3f6 MovB
	return 0; // 0x3f7 Return
}


func_1016(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x3f8 PushV
	var_40_string = "idle"; // 0x3f9 MovS
	var_41_int = var_38_int; // 0x3fa Push
	if(var_41_int == 0) goto Label_1021; // 0x3fb JumpB
	var_40_string = var_40_string + var_38_int; // 0x3fc Add2
	
Label_1021:
	var_37_string = var_40_string; // 0x3fd Mov
	return 2; // 0x3fe Return
}


func_1146(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x47a PushV
	var_72_string = "branch"; // 0x47b PushS
	GetVariable(var_72_string, var_71_int); // 0x47c Func
	var_73_int = 0; // 0x47e PushI
	var_74_bool = var_71_int == var_73_int; // 0x47f Eq
	if(var_74_bool == 0) goto Label_1156; // 0x480 JumpB
	var_69_int = 1; // 0x481 MovI
	return 2; // 0x482 Return
	
Label_1156:
	var_75_int = 1; // 0x484 PushI
	var_76_bool = var_71_int == var_75_int; // 0x485 Eq
	if(var_76_bool == 0) goto Label_1161; // 0x486 JumpB
	var_69_int = 2; // 0x487 MovI
	return 2; // 0x488 Return
	
Label_1161:
	var_69_int = 3; // 0x489 MovI
	return 2; // 0x48a Return
}


func_763()
{
	var_237_bool = 0; var_238_bool = 0; // 0x2fb PushV
	CameraSwitchToNormal(); // 0x2fc Func
	var_239_bool = 0; // 0x2fe PushV
	func_1014(var_239_bool); // 0x2ff NEW_2
	if(var_239_bool == 0) goto Label_771; // 0x301 JumpB
	goto Label_779; // 0x302 Jump
	
Label_779:
	return 2; // 0x30b Return
	
Label_771:
	var_240_string = "head"; // 0x303 PushS
	HasAnimationTrack(var_238_bool, var_240_string); // 0x304 Func
	var_241_bool = var_238_bool; // 0x306 Push
	if(var_241_bool == 0) goto Label_779; // 0x307 JumpB
	var_242_string = "head"; // 0x308 PushS
	UnlookAsync(var_242_string); // 0x309 Func
}


func_1023(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x3ff PushV
	var_34_int = 0; // 0x400 MovI
	
Label_1025:
	var_36_string = "all"; // 0x401 PushS
	var_37_string = ""; var_38_int = 0; // 0x402 PushV
	var_38_int = var_34_int; // 0x403 Mov
	func_1016(var_37_string, var_38_int); // 0x404 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x406 Func
	var_42_bool = var_35_bool == 0; // 0x408 Not
	if(var_42_bool == 0) goto Label_1035; // 0x409 JumpB
	goto Label_1038; // 0x40a Jump
	
Label_1038:
	var_31_int = var_34_int; // 0x40e Mov
	return 4; // 0x40f Return
	
Label_1035:
	var_43_int = 1; // 0x40b PushI
	var_34_int = var_34_int + var_43_int; // 0x40c Add2
	goto Label_1025; // 0x40d Jump
}


