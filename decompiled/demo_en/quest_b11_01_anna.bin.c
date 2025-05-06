task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xee PushI
	if(var_7_int == 0) goto Label_580; // 0xef JumpB
	func_921(); // 0xf1 NEW_2
	var_9_int = 23207; // 0xf3 PushI
	var_10_bool = var_6_int == var_9_int; // 0xf4 Eq
	if(var_10_bool == 0) goto Label_261; // 0xf5 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xf6 PushV
	var_11_object = var_1_object; // 0xf7 MovT
	var_12_object = var_0_object; // 0xf8 MovT
	func_1001(); // 0xf9 NEW_2
	var_25_object = Obj(); var_26_object = Obj(); // 0xfb PushV
	var_25_object = var_1_object; // 0xfc MovT
	var_26_object = var_0_object; // 0xfd MovT
	func_1026(); // 0xfe NEW_2
	var_35_object = Obj(); var_36_object = Obj(); // 0x100 PushV
	var_35_object = var_1_object; // 0x101 MovT
	var_36_object = var_0_object; // 0x102 MovT
	func_992(); // 0x103 NEW_2
	
Label_261:
	var_62_int = 23210; // 0x105 PushI
	var_63_bool = var_6_int == var_62_int; // 0x106 Eq
	if(var_63_bool == 0) goto Label_279; // 0x107 JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0x108 PushV
	var_64_object = var_1_object; // 0x109 MovT
	var_65_object = var_0_object; // 0x10a MovT
	func_1001(); // 0x10b NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0x10d PushV
	var_66_object = var_1_object; // 0x10e MovT
	var_67_object = var_0_object; // 0x10f MovT
	func_1026(); // 0x110 NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0x112 PushV
	var_68_object = var_1_object; // 0x113 MovT
	var_69_object = var_0_object; // 0x114 MovT
	func_992(); // 0x115 NEW_2
	
Label_279:
	var_70_int = 23204; // 0x117 PushI
	var_71_bool = var_5_int == var_70_int; // 0x118 Eq
	if(var_71_bool == 0) goto Label_378; // 0x119 JumpB
	var_72_bool = 0; // 0x11a PushV
	var_72_bool = 0; // 0x11b MovB
	var_73_bool = 0; var_74_object = Obj(); // 0x11c PushV
	var_74_object = var_1_object; // 0x11d MovT
	func_1037(var_74_object); // 0x11e NEW_2
	var_81_bool = var_73_bool == 0; // 0x120 Not
	if(var_81_bool == 0) goto Label_296; // 0x121 JumpB
	var_82_bool = 0; var_83_object = Obj(); // 0x122 PushV
	var_83_object = var_1_object; // 0x123 MovT
	func_1049(var_83_object); // 0x124 NEW_2
	if(var_82_bool == 0) goto Label_296; // 0x126 JumpB
	var_72_bool = 1; // 0x127 MovB
	
Label_296:
	if(var_72_bool == 0) goto Label_317; // 0x128 JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x129 PushV
	var_88_object = var_1_object; // 0x12a MovT
	var_89_object = var_0_object; // 0x12b MovT
	func_1020(); // 0x12c NEW_2
	var_92_string = ""; // 0x12e PushV
	var_92_string = "Dream"; // 0x12f MovS
	func_215(var_6_int, var_92_string); // 0x130 NEW_2
	var_109_int = 522034; // 0x132 PushI
	SetMessage(var_109_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_110_int = 523328; // 0x137 PushI
	var_111_int = 24543; // 0x138 PushI
	var_112_int = 24542; // 0x139 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x13a TObjFunc
	return 0; // 0x13c Return
	
Label_317:
	var_113_bool = 0; var_114_object = Obj(); // 0x13d PushV
	var_114_object = var_1_object; // 0x13e MovT
	func_1037(var_114_object); // 0x13f NEW_2
	var_115_bool = var_113_bool == 0; // 0x141 Not
	if(var_115_bool == 0) goto Label_343; // 0x142 JumpB
	var_116_string = ""; // 0x143 PushV
	var_116_string = "Neutral"; // 0x144 MovS
	func_215(var_6_int, var_116_string); // 0x145 NEW_2
	var_117_int = 522039; // 0x147 PushI
	SetMessage(var_117_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_118_int = 522040; // 0x14c PushI
	var_119_int = -1; // 0x14d PushI
	var_120_int = 23210; // 0x14e PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x14f TObjFunc
	var_121_int = 522041; // 0x151 PushI
	var_122_int = -1; // 0x152 PushI
	var_123_int = 23211; // 0x153 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x154 TObjFunc
	return 0; // 0x156 Return
	
Label_343:
	var_124_string = ""; // 0x157 PushV
	var_124_string = "Neutral"; // 0x158 MovS
	func_215(var_6_int, var_124_string); // 0x159 NEW_2
	var_125_int = 522042; // 0x15b PushI
	SetMessage(var_125_int); // 0x15c TObjFunc
	ClearReplies(); // 0x15e TObjFunc
	var_126_int = 522043; // 0x160 PushI
	var_127_int = -1; // 0x161 PushI
	var_128_int = 23213; // 0x162 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x163 TObjFunc
	var_129_bool = 0; var_130_object = Obj(); // 0x165 PushV
	var_130_object = var_1_object; // 0x166 MovT
	func_1061(var_130_object); // 0x167 NEW_2
	if(var_129_bool == 0) goto Label_367; // 0x169 JumpB
	var_135_int = 522602; // 0x16a PushI
	var_136_int = -1; // 0x16b PushI
	var_137_int = 23788; // 0x16c PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x16d TObjFunc
	
Label_367:
	var_138_bool = 0; var_139_object = Obj(); // 0x16f PushV
	var_139_object = var_1_object; // 0x170 MovT
	func_1061(var_139_object); // 0x171 NEW_2
	if(var_138_bool == 0) goto Label_377; // 0x173 JumpB
	var_140_int = 522603; // 0x174 PushI
	var_141_int = -1; // 0x175 PushI
	var_142_int = 23789; // 0x176 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x177 TObjFunc
	
Label_377:
	return 0; // 0x179 Return
	
Label_378:
	var_143_int = 24543; // 0x17a PushI
	var_144_bool = var_5_int == var_143_int; // 0x17b Eq
	if(var_144_bool == 0) goto Label_406; // 0x17c JumpB
	var_145_string = ""; // 0x17d PushV
	var_145_string = "Dream"; // 0x17e MovS
	func_215(var_6_int, var_145_string); // 0x17f NEW_2
	var_146_int = 523329; // 0x181 PushI
	SetMessage(var_146_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_147_int = 523323; // 0x186 PushI
	var_148_int = 24540; // 0x187 PushI
	var_149_int = 24537; // 0x188 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x189 TObjFunc
	var_150_int = 523322; // 0x18b PushI
	var_151_int = 24538; // 0x18c PushI
	var_152_int = 24536; // 0x18d PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x18e TObjFunc
	var_153_int = 522035; // 0x190 PushI
	var_154_int = 24546; // 0x191 PushI
	var_155_int = 23205; // 0x192 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x193 TObjFunc
	return 0; // 0x195 Return
	
Label_406:
	var_156_int = 24546; // 0x196 PushI
	var_157_bool = var_5_int == var_156_int; // 0x197 Eq
	if(var_157_bool == 0) goto Label_424; // 0x198 JumpB
	var_158_string = ""; // 0x199 PushV
	var_158_string = "Dream"; // 0x19a MovS
	func_215(var_6_int, var_158_string); // 0x19b NEW_2
	var_159_int = 523332; // 0x19d PushI
	SetMessage(var_159_int); // 0x19e TObjFunc
	ClearReplies(); // 0x1a0 TObjFunc
	var_160_int = 523337; // 0x1a2 PushI
	var_161_int = 24555; // 0x1a3 PushI
	var_162_int = 24551; // 0x1a4 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x1a5 TObjFunc
	return 0; // 0x1a7 Return
	
Label_424:
	var_163_int = 24548; // 0x1a8 PushI
	var_164_bool = var_5_int == var_163_int; // 0x1a9 Eq
	if(var_164_bool == 0) goto Label_427; // 0x1aa JumpB
	
Label_427:
	var_165_int = 24555; // 0x1ab PushI
	var_166_bool = var_5_int == var_165_int; // 0x1ac Eq
	if(var_166_bool == 0) goto Label_445; // 0x1ad JumpB
	var_167_string = ""; // 0x1ae PushV
	var_167_string = "Dream"; // 0x1af MovS
	func_215(var_6_int, var_167_string); // 0x1b0 NEW_2
	var_168_int = 523340; // 0x1b2 PushI
	SetMessage(var_168_int); // 0x1b3 TObjFunc
	ClearReplies(); // 0x1b5 TObjFunc
	var_169_int = 523341; // 0x1b7 PushI
	var_170_int = 24550; // 0x1b8 PushI
	var_171_int = 24556; // 0x1b9 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x1ba TObjFunc
	return 0; // 0x1bc Return
	
Label_445:
	var_172_int = 24538; // 0x1bd PushI
	var_173_bool = var_5_int == var_172_int; // 0x1be Eq
	if(var_173_bool == 0) goto Label_463; // 0x1bf JumpB
	var_174_string = ""; // 0x1c0 PushV
	var_174_string = "Dream"; // 0x1c1 MovS
	func_215(var_6_int, var_174_string); // 0x1c2 NEW_2
	var_175_int = 523324; // 0x1c4 PushI
	SetMessage(var_175_int); // 0x1c5 TObjFunc
	ClearReplies(); // 0x1c7 TObjFunc
	var_176_int = 523325; // 0x1c9 PushI
	var_177_int = 23214; // 0x1ca PushI
	var_178_int = 24539; // 0x1cb PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x1cc TObjFunc
	return 0; // 0x1ce Return
	
Label_463:
	var_179_int = 23214; // 0x1cf PushI
	var_180_bool = var_5_int == var_179_int; // 0x1d0 Eq
	if(var_180_bool == 0) goto Label_486; // 0x1d1 JumpB
	var_181_string = ""; // 0x1d2 PushV
	var_181_string = "Dream"; // 0x1d3 MovS
	func_215(var_6_int, var_181_string); // 0x1d4 NEW_2
	var_182_int = 522044; // 0x1d6 PushI
	SetMessage(var_182_int); // 0x1d7 TObjFunc
	ClearReplies(); // 0x1d9 TObjFunc
	var_183_int = 522045; // 0x1db PushI
	var_184_int = -1; // 0x1dc PushI
	var_185_int = 23215; // 0x1dd PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x1de TObjFunc
	var_186_int = 523321; // 0x1e0 PushI
	var_187_int = 24550; // 0x1e1 PushI
	var_188_int = 24535; // 0x1e2 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x1e3 TObjFunc
	return 0; // 0x1e5 Return
	
Label_486:
	var_189_int = 24550; // 0x1e6 PushI
	var_190_bool = var_5_int == var_189_int; // 0x1e7 Eq
	if(var_190_bool == 0) goto Label_509; // 0x1e8 JumpB
	var_191_string = ""; // 0x1e9 PushV
	var_191_string = "Dream"; // 0x1ea MovS
	func_215(var_6_int, var_191_string); // 0x1eb NEW_2
	var_192_int = 523336; // 0x1ed PushI
	SetMessage(var_192_int); // 0x1ee TObjFunc
	ClearReplies(); // 0x1f0 TObjFunc
	var_193_int = 523338; // 0x1f2 PushI
	var_194_int = -1; // 0x1f3 PushI
	var_195_int = 24553; // 0x1f4 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1f5 TObjFunc
	var_196_int = 523339; // 0x1f7 PushI
	var_197_int = -1; // 0x1f8 PushI
	var_198_int = 24554; // 0x1f9 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x1fa TObjFunc
	return 0; // 0x1fc Return
	
Label_509:
	var_199_int = 24540; // 0x1fd PushI
	var_200_bool = var_5_int == var_199_int; // 0x1fe Eq
	if(var_200_bool == 0) goto Label_527; // 0x1ff JumpB
	var_201_string = ""; // 0x200 PushV
	var_201_string = "Dream"; // 0x201 MovS
	func_215(var_6_int, var_201_string); // 0x202 NEW_2
	var_202_int = 523326; // 0x204 PushI
	SetMessage(var_202_int); // 0x205 TObjFunc
	ClearReplies(); // 0x207 TObjFunc
	var_203_int = 523327; // 0x209 PushI
	var_204_int = 24544; // 0x20a PushI
	var_205_int = 24541; // 0x20b PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x20c TObjFunc
	return 0; // 0x20e Return
	
Label_527:
	var_206_int = 24544; // 0x20f PushI
	var_207_bool = var_5_int == var_206_int; // 0x210 Eq
	if(var_207_bool == 0) goto Label_545; // 0x211 JumpB
	var_208_string = ""; // 0x212 PushV
	var_208_string = "Dream"; // 0x213 MovS
	func_215(var_6_int, var_208_string); // 0x214 NEW_2
	var_209_int = 523330; // 0x216 PushI
	SetMessage(var_209_int); // 0x217 TObjFunc
	ClearReplies(); // 0x219 TObjFunc
	var_210_int = 523331; // 0x21b PushI
	var_211_int = 23206; // 0x21c PushI
	var_212_int = 24545; // 0x21d PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x21e TObjFunc
	return 0; // 0x220 Return
	
Label_545:
	var_213_int = 23206; // 0x221 PushI
	var_214_bool = var_5_int == var_213_int; // 0x222 Eq
	if(var_214_bool == 0) goto Label_568; // 0x223 JumpB
	var_215_string = ""; // 0x224 PushV
	var_215_string = "Dream"; // 0x225 MovS
	func_215(var_6_int, var_215_string); // 0x226 NEW_2
	var_216_int = 522036; // 0x228 PushI
	SetMessage(var_216_int); // 0x229 TObjFunc
	ClearReplies(); // 0x22b TObjFunc
	var_217_int = 522037; // 0x22d PushI
	var_218_int = -1; // 0x22e PushI
	var_219_int = 23207; // 0x22f PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x230 TObjFunc
	var_220_int = 522038; // 0x232 PushI
	var_221_int = -1; // 0x233 PushI
	var_222_int = 23208; // 0x234 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x235 TObjFunc
	return 0; // 0x237 Return
	
Label_568:
	var_3_string = 1; // 0x238 TMovB
	var_223_bool = 0; // 0x239 PushV
	func_990(var_223_bool); // 0x23a NEW_2
	if(var_223_bool == 0) goto Label_576; // 0x23c JumpB
	lshStopAnimation(); // 0x23d Func
	goto Label_578; // 0x23f Jump
	
Label_578:
	return 0; // 0x242 Return
	
Label_576:
	StopAnimation(); // 0x240 Func
	
Label_580:
	return 0; // 0x244 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	Hold(); // 0x25e Func
	return 0; // 0x260 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	StopGroup0(); // 0x261 Func
	return 0; // 0x263 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_bool = 0; // 0x264 PushV
	IsOverrideActive(var_7_bool); // 0x265 Func
	var_8_bool = var_7_bool == 0; // 0x267 Not
	if(var_8_bool == 0) goto Label_627; // 0x268 JumpB
	EventDisable(0); // 0x269 EventDisable
	var_9_bool = 0; var_10_object = Obj(); // 0x26a PushV
	var_10_object = var_5_object; // 0x26b Mov
	func_638(var_10_object); // 0x26c NEW_2
	EventEnable(0); // 0x26e EventEnable
	var_23_object = Obj(); // 0x26f PushV
	var_23_object = var_5_object; // 0x270 Mov
	func_581(var_23_object); // 0x271 NEW_2
	
Label_627:
	return 2; // 0x273 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	var_5_bool = 0; // 0x24d PushV
	func_647(var_5_bool); // 0x24e NEW_2
	var_8_bool = var_5_bool == 0; // 0x250 Not
	if(var_8_bool == 0) goto Label_596; // 0x251 JumpB
	Hold(); // 0x252 Func
	
Label_596:
	var_9_string = ""; // 0x254 PushV
	var_9_string = "Neutral"; // 0x255 MovS
	func_875(var_9_string); // 0x256 NEW_2
	lshWaitForAnimEnd(); // 0x258 Func
	goto Label_596; // 0x25a Jump
}


func_0(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x0 PushV
	var_0_object = var_25_object; // 0x1 TMov
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0; // 0x2 PushV
	var_36_object = var_25_object; // 0x3 Mov
	var_37_float = 70.0; // 0x4 MovF
	func_652(var_36_object, var_37_float); // 0x5 NEW_2
	var_81_bool = var_35_bool == 0; // 0x7 Not
	if(var_81_bool == 0) goto Label_11; // 0x8 JumpB
	var_24_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_31_object); // 0xb Func
	var_82_int = 0; // 0xd PushV
	func_984(var_82_int); // 0xe NEW_2
	SetNPCName(var_82_int); // 0x10 ObjFunc
	var_83_int = 0; // 0x12 PushV
	func_982(var_83_int); // 0x13 NEW_2
	SetNPCDescription(var_83_int); // 0x15 ObjFunc
	var_84_string = ""; // 0x17 PushV
	func_986(var_84_string); // 0x18 NEW_2
	SetPhoto(var_84_string); // 0x1a ObjFunc
	var_85_string = ""; // 0x1c PushV
	func_988(var_85_string); // 0x1d NEW_2
	SetPhoto2(var_85_string); // 0x1f ObjFunc
	var_86_int = 0; // 0x21 PushV
	func_1127(var_86_int); // 0x22 NEW_2
	SetPlayerName(var_86_int); // 0x24 ObjFunc
	var_33_int = -1; // 0x26 MovI
	IsOverrideActive(var_32_bool); // 0x27 Func
	var_94_bool = var_32_bool; // 0x29 Push
	if(var_94_bool == 0) goto Label_45; // 0x2a JumpB
	var_24_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_31_object); // 0x2d Func
	var_95_bool = 0; var_96_object = Obj(); // 0x2f PushV
	var_97_object = Obj(); // 0x30 PushV
	func_928(var_97_object); // 0x31 NEW_2
	var_96_object = var_97_object; // 0x32 Mov
	func_737(var_95_bool, var_96_object); // 0x34 NEW_2
	var_190_object = Obj(); var_191_object = Obj(); // 0x36 PushV
	var_190_object = var_25_object; // 0x37 Mov
	var_191_object = var_31_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_192_object, var_193_object, var_194_string, var_195_bool, var_190_object, var_191_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_34_bool); // 0x3d ObjFunc
	
Label_63:
	var_286_bool = var_34_bool == 0; // 0x3f Not
	if(var_286_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_34_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_287_object = Obj(); // 0x46 PushV
	var_287_object = var_25_object; // 0x47 Mov
	func_720(); // 0x48 NEW_2
	StopDialog(var_31_object); // 0x4a Func
	GetReturnValue(var_33_int); // 0x4c ObjFunc
	var_24_int = var_33_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1026()
{
	var_27_string = "b11q01"; // 0x403 PushS
	var_28_int = 2; // 0x404 PushI
	SetVariable(var_27_string, var_28_int); // 0x405 Func
	var_29_bool = 0; var_30_string = ""; var_31_string = ""; // 0x407 PushV
	var_30_string = "quest_b11_01"; // 0x408 MovS
	var_31_string = "open_well_exit"; // 0x409 MovS
	func_949(var_29_bool, var_30_string, var_31_string); // 0x40a NEW_2
	return 0; // 0x40c Return
}


func_647(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0x287 PushV
	IsLoaded(var_7_bool); // 0x288 Func
	var_5_bool = var_7_bool; // 0x28a Mov
	return 2; // 0x28b Return
}


func_906(var_129_bool, var_130_string)
{
	var_131_bool = 0; var_132_bool = 0; // 0x38a PushV
	var_133_bool = 0; // 0x38b PushV
	func_990(var_133_bool); // 0x38c NEW_2
	if(var_133_bool == 0) goto Label_919; // 0x38e JumpB
	lshHasSpeech(var_132_bool, var_130_string); // 0x38f Func
	var_134_bool = var_132_bool; // 0x391 Push
	if(var_134_bool == 0) goto Label_919; // 0x392 JumpB
	lshPlaySpeech(var_130_string); // 0x393 Func
	var_129_bool = 1; // 0x395 MovB
	return 2; // 0x396 Return
	
Label_919:
	var_129_bool = 0; // 0x397 MovB
	return 2; // 0x398 Return
}


func_652(var_35_bool, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0; // 0x28c PushV
	GetPosition(var_48_cvector); // 0x28d ObjFunc
	GetEyesHeight(var_47_float); // 0x28f ObjFunc
	var_56_float = GetByIndex(var_48_cvector, 1); // 0x291 PushE
	var_56_float = var_56_float + var_47_float; // 0x292 Add2
	SetByIndex(var_48_cvector, 1) = var_56_float; // 0x293 PopE
	GetPosition(var_49_cvector); // 0x294 Func
	GetEyesHeight(var_47_float); // 0x296 Func
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x298 PushE
	var_57_float = var_57_float + var_47_float; // 0x299 Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x29a PopE
	var_50_cvector = var_48_cvector - var_49_cvector; // 0x29b Sub2
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x29c PushE
	var_58_float = 0; // 0x29d MovI
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x29e PopE
	var_59_int = var_50_cvector | var_50_cvector; // 0x29f Or
	var_60_float = sqrt(var_59_int); // 0x2a0 Sqrt
	var_50_cvector = var_50_cvector / var_50_cvector; // 0x2a1 Div2
	var_51_cvector = -var_50_cvector; // 0x2a2 Neg2
	var_61_float = var_50_cvector * var_37_float; // 0x2a3 Mult
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x2a4 PushV
	var_64_cvector = CVector(0.0, 1.0, 0.0); // 0x2a5 PushVec
	var_63_cvector = var_51_cvector ^ var_64_cvector; // 0x2a6 Xor2
	func_934(var_62_cvector, var_63_cvector); // 0x2a7 NEW_2
	var_70_int = 25; // 0x2a9 PushI
	var_71_float = var_62_cvector * var_70_int; // 0x2aa Mult
	var_72_int = var_61_float + var_71_float; // 0x2ab Add
	var_73_cvector = CVector(0.0, 10.0, 0.0); // 0x2ac PushVec
	var_52_cvector = var_72_int - var_73_cvector; // 0x2ad Sub2
	var_53_cvector = var_49_cvector + var_52_cvector; // 0x2ae Add2
	IsOverrideActive(var_54_bool); // 0x2af Func
	var_74_bool = var_54_bool; // 0x2b1 Push
	if(var_74_bool == 0) goto Label_693; // 0x2b2 JumpB
	var_35_bool = 0; // 0x2b3 MovB
	return 18; // 0x2b4 Return
	
Label_693:
	StopWorld(); // 0x2b5 Func
	CameraTransit(var_53_cvector, var_51_cvector); // 0x2b7 Func
	var_75_float = GetByIndex(var_52_cvector, 0); // 0x2b9 PushE
	var_76_float = GetByIndex(var_52_cvector, 2); // 0x2ba PushE
	Rotate(var_75_float, var_76_float); // 0x2bb Func
	var_77_bool = 0; // 0x2bd PushV
	func_990(var_77_bool); // 0x2be NEW_2
	if(var_77_bool == 0) goto Label_706; // 0x2c0 JumpB
	goto Label_714; // 0x2c1 Jump
	
Label_714:
	CameraWaitForPlayFinish(); // 0x2ca Func
	ResumeWorld(); // 0x2cc Func
	var_35_bool = 1; // 0x2ce MovB
	return 18; // 0x2cf Return
	
Label_706:
	var_78_string = "head"; // 0x2c2 PushS
	HasAnimationTrack(var_55_bool, var_78_string); // 0x2c3 Func
	var_79_bool = var_55_bool; // 0x2c5 Push
	if(var_79_bool == 0) goto Label_714; // 0x2c6 JumpB
	var_80_string = "head"; // 0x2c7 PushS
	LookAsyncCamera(var_80_string); // 0x2c8 Func
}


func_1037(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x40e PushV
	var_201_string = "b11q01VictimChoosed"; // 0x40f MovS
	func_944(var_200_int, var_201_string); // 0x410 NEW_2
	var_204_int = 0; // 0x412 PushI
	var_205_bool = var_200_int != var_204_int; // 0x413 Neq
	if(var_205_bool == 0) goto Label_1047; // 0x414 JumpB
	var_198_bool = 1; // 0x415 MovB
	return 0; // 0x416 Return
	
Label_1047:
	var_198_bool = 0; // 0x417 MovB
	return 0; // 0x418 Return
}


func_921()
{
	var_8_bool = 0; // 0x399 PushV
	func_990(var_8_bool); // 0x39a NEW_2
	if(var_8_bool == 0) goto Label_927; // 0x39c JumpB
	lshStopSpeech(); // 0x39d Func
	
Label_927:
	return 0; // 0x39f Return
}


func_1049(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0x41a PushV
	var_210_string = "oob11Anna1"; // 0x41b MovS
	func_944(var_209_int, var_210_string); // 0x41c NEW_2
	var_211_int = 0; // 0x41e PushI
	var_212_bool = var_209_int == var_211_int; // 0x41f Eq
	if(var_212_bool == 0) goto Label_1059; // 0x420 JumpB
	var_207_bool = 1; // 0x421 MovB
	return 0; // 0x422 Return
	
Label_1059:
	var_207_bool = 0; // 0x423 MovB
	return 0; // 0x424 Return
}


func_795(var_106_bool)
{
	var_108_string = ""; var_109_int = 0; var_110_bool = 0; var_111_int = 0; var_112_string = ""; var_113_string = ""; var_114_int = 0; var_115_bool = 0; var_116_int = 0; var_117_string = ""; // 0x31b PushV
	var_113_string = "c"; // 0x31c MovS
	var_114_int = 0; // 0x31d MovI
	
Label_798:
	var_118_int = 1; // 0x31e PushI
	if(var_118_int == 0) goto Label_811; // 0x31f JumpB
	var_119_int = 1; // 0x320 PushI
	var_120_int = var_114_int + var_119_int; // 0x321 Add
	var_121_int = var_113_string + var_120_int; // 0x322 Add
	HasProperty(var_121_int, var_115_bool); // 0x323 ObjFunc
	var_122_bool = var_115_bool == 0; // 0x325 Not
	if(var_122_bool == 0) goto Label_808; // 0x326 JumpB
	goto Label_811; // 0x327 Jump
	
Label_811:
	var_123_bool = var_114_int == 0; // 0x32b Not
	if(var_123_bool == 0) goto Label_815; // 0x32c JumpB
	var_106_bool = 0; // 0x32d MovB
	return 10; // 0x32e Return
	
Label_815:
	var_116_int = 0; // 0x32f MovI
	var_124_int = 1; // 0x330 PushI
	var_125_bool = var_114_int > var_124_int; // 0x331 GT
	if(var_125_bool == 0) goto Label_821; // 0x332 JumpB
	irand(var_116_int, var_114_int); // 0x333 Func
	
Label_821:
	var_126_int = 1; // 0x335 PushI
	var_127_int = var_116_int + var_126_int; // 0x336 Add
	var_128_int = var_113_string + var_127_int; // 0x337 Add
	GetProperty(var_128_int, var_117_string); // 0x338 ObjFunc
	var_129_bool = 0; var_130_string = ""; // 0x33a PushV
	var_130_string = var_117_string; // 0x33b Mov
	func_906(var_129_bool, var_130_string); // 0x33c NEW_2
	var_106_bool = var_129_bool; // 0x33d Mov
	return 10; // 0x33f Return
	
Label_808:
	var_135_int = 1; // 0x328 PushI
	var_114_int = var_114_int + var_135_int; // 0x329 Add2
	goto Label_798; // 0x32a Jump
}


func_928(var_97_object)
{
	var_98_object = Obj(); var_99_object = Obj(); // 0x3a0 PushV
	self(var_99_object); // 0x3a1 Func
	var_97_object = var_99_object; // 0x3a3 Mov
	return 2; // 0x3a4 Return
}


func_1061(var_272_bool)
{
	var_274_int = 0; var_275_string = ""; // 0x426 PushV
	var_275_string = "b11q01KillAnna"; // 0x427 MovS
	func_944(var_274_int, var_275_string); // 0x428 NEW_2
	var_276_int = 0; // 0x42a PushI
	var_277_bool = var_274_int != var_276_int; // 0x42b Neq
	if(var_277_bool == 0) goto Label_1071; // 0x42c JumpB
	var_272_bool = 1; // 0x42d MovB
	return 0; // 0x42e Return
	
Label_1071:
	var_272_bool = 0; // 0x42f MovB
	return 0; // 0x430 Return
}


func_934(var_62_cvector, var_63_cvector)
{
	var_65_float = 0; var_66_float = 0; // 0x3a6 PushV
	var_67_int = var_63_cvector | var_63_cvector; // 0x3a7 Or
	var_66_float = sqrt(var_67_int); // 0x3a8 Sqrt2
	var_68_float = 0.0; // 0x3a9 PushF
	var_69_bool = var_66_float < var_68_float; // 0x3aa LT
	if(var_69_bool == 0) goto Label_942; // 0x3ab JumpB
	var_62_cvector = CVector(0.0, 0.0, 0.0); // 0x3ac MovV
	return 2; // 0x3ad Return
	
Label_942:
	var_62_cvector = var_63_cvector / var_63_cvector; // 0x3ae Div2
	return 2; // 0x3af Return
}


func_944(var_200_int, var_201_string)
{
	var_202_int = 0; var_203_int = 0; // 0x3b0 PushV
	GetVariable(var_201_string, var_203_int); // 0x3b1 Func
	var_200_int = var_203_int; // 0x3b3 Mov
	return 2; // 0x3b4 Return
}


func_1073()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x431 PushV
	var_41_int = 315; // 0x432 PushI
	var_42_int = 1; // 0x433 PushI
	var_43_int = 522057; // 0x434 PushI
	CreateDiaryEntry(var_40_object, var_41_int, var_42_int, var_43_int); // 0x435 Func
	var_44_bool = 0; var_45_object = Obj(); var_46_int = 0; // 0x437 PushV
	var_45_object = var_40_object; // 0x438 Mov
	var_46_int = 313; // 0x439 MovI
	func_1099(var_44_bool, var_45_object, var_46_int); // 0x43a NEW_2
	return 2; // 0x43c Return
}


func_949(var_29_bool, var_30_string, var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x3b5 PushV
	FindActor(var_33_object, var_30_string); // 0x3b6 Func
	var_34_bool = var_33_object == 0; // 0x3b8 NullEq
	if(var_34_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_29_bool = 0; // 0x3ba MovB
	return 2; // 0x3bb Return
	
Label_956:
	Trigger(var_33_object, var_31_string); // 0x3bc Func
	var_29_bool = 1; // 0x3be MovB
	return 2; // 0x3bf Return
}


func_1086(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x43e PushV
	GetDiaryRoot(var_55_object); // 0x43f Func
	var_56_bool = var_55_object == 0; // 0x441 Not
	if(var_56_bool == 0) goto Label_1096; // 0x442 JumpB
	var_57_string = "Can't retrieve diary root"; // 0x443 PushS
	Trace(var_57_string); // 0x444 Func
	var_53_object = 0; // 0x446 MovB
	return 2; // 0x447 Return
	
Label_1096:
	var_53_object = var_55_object; // 0x448 Mov
	return 2; // 0x449 Return
}


func_832(var_137_bool)
{
	var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; // 0x340 PushV
	var_149_string = "d"; // 0x341 PushS
	var_150_int = 0; // 0x342 PushV
	func_973(var_150_int); // 0x343 NEW_2
	var_156_int = var_149_string + var_150_int; // 0x345 Add
	var_157_string = "m"; // 0x346 PushS
	var_144_string = var_156_int + var_157_string; // 0x347 Add2
	var_145_int = 0; // 0x348 MovI
	
Label_841:
	var_158_int = 1; // 0x349 PushI
	if(var_158_int == 0) goto Label_854; // 0x34a JumpB
	var_159_int = 1; // 0x34b PushI
	var_160_int = var_145_int + var_159_int; // 0x34c Add
	var_161_int = var_144_string + var_160_int; // 0x34d Add
	HasProperty(var_161_int, var_146_bool); // 0x34e ObjFunc
	var_162_bool = var_146_bool == 0; // 0x350 Not
	if(var_162_bool == 0) goto Label_851; // 0x351 JumpB
	goto Label_854; // 0x352 Jump
	
Label_854:
	var_163_bool = var_145_int == 0; // 0x356 Not
	if(var_163_bool == 0) goto Label_858; // 0x357 JumpB
	var_137_bool = 0; // 0x358 MovB
	return 10; // 0x359 Return
	
Label_858:
	var_147_int = 0; // 0x35a MovI
	var_164_int = 1; // 0x35b PushI
	var_165_bool = var_145_int > var_164_int; // 0x35c GT
	if(var_165_bool == 0) goto Label_864; // 0x35d JumpB
	irand(var_147_int, var_145_int); // 0x35e Func
	
Label_864:
	var_166_int = 1; // 0x360 PushI
	var_167_int = var_147_int + var_166_int; // 0x361 Add
	var_168_int = var_144_string + var_167_int; // 0x362 Add
	GetProperty(var_168_int, var_148_string); // 0x363 ObjFunc
	var_169_bool = 0; var_170_string = ""; // 0x365 PushV
	var_170_string = var_148_string; // 0x366 Mov
	func_906(var_169_bool, var_170_string); // 0x367 NEW_2
	var_137_bool = var_169_bool; // 0x368 Mov
	return 10; // 0x36a Return
	
Label_851:
	var_171_int = 1; // 0x353 PushI
	var_145_int = var_145_int + var_171_int; // 0x354 Add2
	goto Label_841; // 0x355 Jump
}


func_961(var_17_bool, var_18_string, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x3c1 PushV
	FindActor(var_22_object, var_18_string); // 0x3c2 Func
	var_23_bool = var_22_object == 0; // 0x3c4 NullEq
	if(var_23_bool == 0) goto Label_968; // 0x3c5 JumpB
	var_17_bool = 0; // 0x3c6 MovB
	return 2; // 0x3c7 Return
	
Label_968:
	Trigger(var_22_object, var_19_string, var_20_string); // 0x3c8 Func
	var_17_bool = 1; // 0x3ca MovB
	return 2; // 0x3cb Return
}


func_581(var_23_object)
{
	var_24_int = 0; var_25_object = Obj(); // 0x246 PushV
	var_25_object = var_23_object; // 0x247 Mov
	TaskCall(0); // 0x248 TaskCall
	func_0(var_26_object, var_24_int, var_25_object); // 0x249 NEW_2
	TaskReturn(); // 0x24a TaskReturn
	return 0; // 0x24c Return
}


func_1099(var_44_bool, var_45_object, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; // 0x44b PushV
	var_53_object = Obj(); // 0x44c PushV
	func_1086(var_53_object); // 0x44d NEW_2
	var_50_object = var_53_object; // 0x44e Mov
	Find(var_46_int, var_51_object); // 0x450 ObjFunc
	var_58_bool = var_51_object == 0; // 0x452 Not
	if(var_58_bool == 0) goto Label_1114; // 0x453 JumpB
	var_59_string = "Can't find diary parent with id: "; // 0x454 PushS
	var_60_int = var_59_string + var_46_int; // 0x455 Add
	Trace(var_60_int); // 0x456 Func
	var_44_bool = 0; // 0x458 MovB
	return 6; // 0x459 Return
	
Label_1114:
	AddChild(var_45_object); // 0x45a ObjFunc
	var_61_int = 7; // 0x45c PushI
	SendWorldWndMessage(var_61_int); // 0x45d Func
	GetCategory(var_52_int); // 0x45f ObjFunc
	SetDiarySection(var_52_int); // 0x461 Func
	var_44_bool = 0; // 0x463 MovB
	return 6; // 0x464 Return
}


func_973(var_150_int)
{
	var_151_float = 0; var_152_float = 0; // 0x3cd PushV
	GetGameTime(var_152_float); // 0x3ce Func
	var_153_int = 1; // 0x3d0 PushI
	var_154_int = 0; // 0x3d1 PushV
	var_155_int = 24; // 0x3d2 PushI
	var_154_int = var_152_float / var_152_float; // 0x3d3 Div2
	var_150_int = var_153_int + var_154_int; // 0x3d4 Add2
	return 2; // 0x3d5 Return
}


func_720()
{
	var_288_bool = 0; var_289_bool = 0; // 0x2d0 PushV
	CameraSwitchToNormal(); // 0x2d1 Func
	var_290_bool = 0; // 0x2d3 PushV
	func_990(var_290_bool); // 0x2d4 NEW_2
	if(var_290_bool == 0) goto Label_728; // 0x2d6 JumpB
	goto Label_736; // 0x2d7 Jump
	
Label_736:
	return 2; // 0x2e0 Return
	
Label_728:
	var_291_string = "head"; // 0x2d8 PushS
	HasAnimationTrack(var_289_bool, var_291_string); // 0x2d9 Func
	var_292_bool = var_289_bool; // 0x2db Push
	if(var_292_bool == 0) goto Label_736; // 0x2dc JumpB
	var_293_string = "head"; // 0x2dd PushS
	UnlookAsync(var_293_string); // 0x2de Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_190_object, var_191_object)
{
	var_0_object = var_191_object; // 0x52 TMov
	var_1_object = var_190_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_196_int = 1; // 0x55 PushI
	if(var_196_int == 0) goto Label_185; // 0x56 JumpB
	var_197_bool = 0; // 0x57 PushV
	var_197_bool = 0; // 0x58 MovB
	var_198_bool = 0; var_199_object = Obj(); // 0x59 PushV
	var_199_object = var_1_object; // 0x5a MovT
	func_1037(var_199_object); // 0x5b NEW_2
	var_206_bool = var_198_bool == 0; // 0x5d Not
	if(var_206_bool == 0) goto Label_101; // 0x5e JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0x5f PushV
	var_208_object = var_1_object; // 0x60 MovT
	func_1049(var_208_object); // 0x61 NEW_2
	if(var_207_bool == 0) goto Label_101; // 0x63 JumpB
	var_197_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_197_bool == 0) goto Label_122; // 0x65 JumpB
	var_213_object = Obj(); var_214_object = Obj(); // 0x66 PushV
	var_213_object = var_1_object; // 0x67 MovT
	var_214_object = var_0_object; // 0x68 MovT
	func_1020(); // 0x69 NEW_2
	var_217_string = ""; // 0x6b PushV
	var_217_string = "Dream"; // 0x6c MovS
	func_215(var_191_object, var_217_string); // 0x6d NEW_2
	var_234_int = 522034; // 0x6f PushI
	SetMessage(var_234_int); // 0x70 TObjFunc
	ClearReplies(); // 0x72 TObjFunc
	var_235_int = 523328; // 0x74 PushI
	var_236_int = 24543; // 0x75 PushI
	var_237_int = 24542; // 0x76 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x77 TObjFunc
	goto Label_185; // 0x79 Jump
	
Label_185:
	var_238_bool = 0; // 0xb9 PushV
	func_990(var_238_bool); // 0xba NEW_2
	if(var_238_bool == 0) goto Label_200; // 0xbc JumpB
	
Label_189:
	lshWaitForAnimEnd(); // 0xbd Func
	var_239_string = var_3_string; // 0xbf PushT
	if(var_239_string == 0) goto Label_194; // 0xc0 JumpB
	goto Label_199; // 0xc1 Jump
	
Label_199:
	goto Label_214; // 0xc7 Jump
	
Label_214:
	return 0; // 0xd6 Return
	
Label_194:
	var_240_string = ""; // 0xc2 PushV
	var_240_string = var_2_object; // 0xc3 MovT
	func_875(var_240_string); // 0xc4 NEW_2
	goto Label_189; // 0xc6 Jump
	
Label_200:
	var_251_string = "all"; // 0xc8 PushS
	var_252_string = "idle"; // 0xc9 PushS
	PlayAnimation(var_251_string, var_252_string); // 0xca Func
	
Label_204:
	WaitForAnimEnd(); // 0xcc Func
	var_253_string = var_3_string; // 0xce PushT
	if(var_253_string == 0) goto Label_209; // 0xcf JumpB
	goto Label_214; // 0xd0 Jump
	
Label_209:
	var_254_string = "all"; // 0xd1 PushS
	var_255_string = "idle"; // 0xd2 PushS
	PlayAnimation(var_254_string, var_255_string); // 0xd3 Func
	goto Label_204; // 0xd5 Jump
	
Label_122:
	var_256_bool = 0; var_257_object = Obj(); // 0x7a PushV
	var_257_object = var_1_object; // 0x7b MovT
	func_1037(var_257_object); // 0x7c NEW_2
	var_258_bool = var_256_bool == 0; // 0x7e Not
	if(var_258_bool == 0) goto Label_148; // 0x7f JumpB
	var_259_string = ""; // 0x80 PushV
	var_259_string = "Neutral"; // 0x81 MovS
	func_215(var_191_object, var_259_string); // 0x82 NEW_2
	var_260_int = 522039; // 0x84 PushI
	SetMessage(var_260_int); // 0x85 TObjFunc
	ClearReplies(); // 0x87 TObjFunc
	var_261_int = 522040; // 0x89 PushI
	var_262_int = -1; // 0x8a PushI
	var_263_int = 23210; // 0x8b PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x8c TObjFunc
	var_264_int = 522041; // 0x8e PushI
	var_265_int = -1; // 0x8f PushI
	var_266_int = 23211; // 0x90 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x91 TObjFunc
	goto Label_185; // 0x93 Jump
	
Label_148:
	var_267_string = ""; // 0x94 PushV
	var_267_string = "Neutral"; // 0x95 MovS
	func_215(var_191_object, var_267_string); // 0x96 NEW_2
	var_268_int = 522042; // 0x98 PushI
	SetMessage(var_268_int); // 0x99 TObjFunc
	ClearReplies(); // 0x9b TObjFunc
	var_269_int = 522043; // 0x9d PushI
	var_270_int = -1; // 0x9e PushI
	var_271_int = 23213; // 0x9f PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xa0 TObjFunc
	var_272_bool = 0; var_273_object = Obj(); // 0xa2 PushV
	var_273_object = var_1_object; // 0xa3 MovT
	func_1061(var_273_object); // 0xa4 NEW_2
	if(var_272_bool == 0) goto Label_172; // 0xa6 JumpB
	var_278_int = 522602; // 0xa7 PushI
	var_279_int = -1; // 0xa8 PushI
	var_280_int = 23788; // 0xa9 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0xaa TObjFunc
	
Label_172:
	var_281_bool = 0; var_282_object = Obj(); // 0xac PushV
	var_282_object = var_1_object; // 0xad MovT
	func_1061(var_282_object); // 0xae NEW_2
	if(var_281_bool == 0) goto Label_182; // 0xb0 JumpB
	var_283_int = 522603; // 0xb1 PushI
	var_284_int = -1; // 0xb2 PushI
	var_285_int = 23789; // 0xb3 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xb4 TObjFunc
	
Label_182:
	goto Label_185; // 0xb6 Jump
}


func_982(var_83_int)
{
	var_83_int = 515530; // 0x3d6 MovI
	return 0; // 0x3d7 Return
}


func_215(var_2_object, var_217_string)
{
	var_218_bool = 0; // 0xd8 PushV
	func_990(var_218_bool); // 0xd9 NEW_2
	var_219_bool = var_218_bool == 0; // 0xdb Not
	if(var_219_bool == 0) goto Label_222; // 0xdc JumpB
	return 0; // 0xdd Return
	
Label_222:
	var_220_bool = var_217_string == var_2_object; // 0xde Eq
	if(var_220_bool == 0) goto Label_225; // 0xdf JumpB
	return 0; // 0xe0 Return
	
Label_225:
	var_221_string = ""; var_222_bool = 0; // 0xe1 PushV
	var_221_string = var_217_string; // 0xe2 Mov
	var_223_string = ""; // 0xe3 PushS
	var_224_bool = var_217_string == var_223_string; // 0xe4 Eq
	if(var_224_bool == 0) goto Label_232; // 0xe5 JumpB
	var_222_bool = 0; // 0xe6 MovB
	goto Label_233; // 0xe7 Jump
	
Label_233:
	func_891(var_221_string, var_222_bool); // 0xe9 NEW_2
	var_2_object = var_217_string; // 0xeb TMov
	return 0; // 0xec Return
	
Label_232:
	var_222_bool = 1; // 0xe8 MovB
}


func_984(var_82_int)
{
	var_82_int = 502856; // 0x3d8 MovI
	return 0; // 0x3d9 Return
}


func_986(var_84_string)
{
	var_84_string = "ui/NPC_Anna.png"; // 0x3da MovS
	return 0; // 0x3db Return
}


func_988(var_85_string)
{
	var_85_string = "ui/NPC_Anna_b.png"; // 0x3dc MovS
	return 0; // 0x3dd Return
}


func_990(var_77_bool)
{
	var_77_bool = 1; // 0x3de MovB
	return 0; // 0x3df Return
}


func_992()
{
	var_37_string = "b11q01KnowWhoKilled"; // 0x3e1 PushS
	var_38_int = 1; // 0x3e2 PushI
	SetVariable(var_37_string, var_38_int); // 0x3e3 Func
	func_1073(); // 0x3e6 NEW_2
	return 0; // 0x3e8 Return
}


func_737(var_95_bool, var_96_object)
{
	var_100_int = 0; var_101_int = 0; var_102_int = 0; var_103_int = 0; // 0x2e1 PushV
	var_104_string = "voice_common"; // 0x2e2 PushS
	GetVariable(var_104_string, var_102_int); // 0x2e3 Func
	var_105_int = var_102_int; // 0x2e5 Push
	if(var_105_int == 0) goto Label_775; // 0x2e6 JumpB
	var_106_bool = 0; var_107_object = Obj(); // 0x2e7 PushV
	var_107_object = var_96_object; // 0x2e8 Mov
	func_795(var_107_object); // 0x2e9 NEW_2
	var_136_bool = var_106_bool == 0; // 0x2eb Not
	if(var_136_bool == 0) goto Label_757; // 0x2ec JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x2ed PushV
	var_138_object = var_96_object; // 0x2ee Mov
	func_832(var_138_object); // 0x2ef NEW_2
	var_172_bool = var_137_bool == 0; // 0x2f1 Not
	if(var_172_bool == 0) goto Label_757; // 0x2f2 JumpB
	var_95_bool = 0; // 0x2f3 MovB
	return 4; // 0x2f4 Return
	
Label_757:
	var_173_int = 2; // 0x2f5 PushI
	irand(var_103_int, var_173_int); // 0x2f6 Func
	var_174_int = var_103_int; // 0x2f8 Push
	if(var_174_int == 0) goto Label_770; // 0x2f9 JumpB
	var_175_string = "voice_common"; // 0x2fa PushS
	var_176_int = 1; // 0x2fb PushI
	var_177_int = var_102_int + var_176_int; // 0x2fc Add
	var_178_int = 3; // 0x2fd PushI
	var_179_int = var_177_int / var_178_int; // 0x2fe Mod
	SetVariable(var_175_string, var_179_int); // 0x2ff Func
	goto Label_774; // 0x301 Jump
	
Label_774:
	goto Label_793; // 0x306 Jump
	
Label_793:
	var_95_bool = 1; // 0x319 MovB
	return 4; // 0x31a Return
	
Label_770:
	var_180_string = "voice_common"; // 0x302 PushS
	var_181_int = 0; // 0x303 PushI
	SetVariable(var_180_string, var_181_int); // 0x304 Func
	
Label_775:
	var_182_bool = 0; var_183_object = Obj(); // 0x307 PushV
	var_183_object = var_96_object; // 0x308 Mov
	func_832(var_183_object); // 0x309 NEW_2
	var_184_bool = var_182_bool == 0; // 0x30b Not
	if(var_184_bool == 0) goto Label_789; // 0x30c JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x30d PushV
	var_186_object = var_96_object; // 0x30e Mov
	func_795(var_186_object); // 0x30f NEW_2
	var_187_bool = var_185_bool == 0; // 0x311 Not
	if(var_187_bool == 0) goto Label_789; // 0x312 JumpB
	var_95_bool = 0; // 0x313 MovB
	return 4; // 0x314 Return
	
Label_789:
	var_188_string = "voice_common"; // 0x315 PushS
	var_189_int = 1; // 0x316 PushI
	SetVariable(var_188_string, var_189_int); // 0x317 Func
}


func_1127(var_86_int)
{
	var_87_int = 0; var_88_int = 0; // 0x467 PushV
	var_89_string = "branch"; // 0x468 PushS
	GetVariable(var_89_string, var_88_int); // 0x469 Func
	var_90_int = 0; // 0x46b PushI
	var_91_bool = var_88_int == var_90_int; // 0x46c Eq
	if(var_91_bool == 0) goto Label_1137; // 0x46d JumpB
	var_86_int = 1; // 0x46e MovI
	return 2; // 0x46f Return
	
Label_1137:
	var_92_int = 1; // 0x471 PushI
	var_93_bool = var_88_int == var_92_int; // 0x472 Eq
	if(var_93_bool == 0) goto Label_1142; // 0x473 JumpB
	var_86_int = 2; // 0x474 MovI
	return 2; // 0x475 Return
	
Label_1142:
	var_86_int = 3; // 0x476 MovI
	return 2; // 0x477 Return
}


func_1001()
{
	var_13_string = "b11q01VictimChoosed"; // 0x3ea PushS
	var_14_int = 1; // 0x3eb PushI
	SetVariable(var_13_string, var_14_int); // 0x3ec Func
	var_15_string = "b11q01KillAnna"; // 0x3ee PushS
	var_16_int = 1; // 0x3ef PushI
	SetVariable(var_15_string, var_16_int); // 0x3f0 Func
	var_17_bool = 0; var_18_string = ""; var_19_string = ""; var_20_string = ""; // 0x3f2 PushV
	var_18_string = "volonteers_burah"; // 0x3f3 MovS
	var_19_string = "disease"; // 0x3f4 MovS
	var_20_string = "anna"; // 0x3f5 MovS
	func_961(var_17_bool, var_18_string, var_19_string, var_20_string); // 0x3f6 NEW_2
	var_24_string = "Anna is diseased"; // 0x3f8 PushS
	Trace(var_24_string); // 0x3f9 Func
	return 0; // 0x3fb Return
}


func_875(var_9_string)
{
	var_10_bool = 0; var_11_float = 0; var_12_float = 0; var_13_bool = 0; var_14_float = 0; var_15_float = 0; // 0x36b PushV
	lshHasAnimation(var_13_bool, var_9_string); // 0x36c Func
	var_16_bool = var_13_bool; // 0x36e Push
	if(var_16_bool == 0) goto Label_886; // 0x36f JumpB
	lshGetAnimTimes(var_9_string, var_14_float, var_15_float); // 0x370 Func
	var_17_bool = 0; // 0x372 PushB
	lshPlayAnimation(var_14_float, var_15_float, var_17_bool); // 0x373 Func
	goto Label_890; // 0x375 Jump
	
Label_890:
	return 6; // 0x37a Return
	
Label_886:
	var_18_string = "Can't find lsh animation : "; // 0x376 PushS
	var_19_int = var_18_string + var_9_string; // 0x377 Add
	Trace(var_19_int); // 0x378 Func
}


func_628(var_13_bool, var_14_cvector)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; // 0x274 PushV
	GetPosition(var_18_cvector); // 0x275 Func
	var_19_cvector = var_14_cvector - var_18_cvector; // 0x277 Sub2
	var_21_float = GetByIndex(var_19_cvector, 0); // 0x278 PushE
	var_22_float = GetByIndex(var_19_cvector, 2); // 0x279 PushE
	Rotate(var_21_float, var_22_float, var_20_bool); // 0x27a Func
	var_13_bool = var_20_bool; // 0x27c Mov
	return 6; // 0x27d Return
}


func_891(var_221_string, var_222_bool)
{
	var_225_bool = 0; var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_float = 0; var_230_float = 0; // 0x37b PushV
	lshHasAnimation(var_228_bool, var_221_string); // 0x37c Func
	var_231_bool = var_228_bool; // 0x37e Push
	if(var_231_bool == 0) goto Label_901; // 0x37f JumpB
	lshGetAnimTimes(var_221_string, var_229_float, var_230_float); // 0x380 Func
	lshPlayAnimation(var_229_float, var_230_float, var_222_bool); // 0x382 Func
	goto Label_905; // 0x384 Jump
	
Label_905:
	return 6; // 0x389 Return
	
Label_901:
	var_232_string = "Can't find lsh animation : "; // 0x385 PushS
	var_233_int = var_232_string + var_221_string; // 0x386 Add
	Trace(var_233_int); // 0x387 Func
}


func_1020()
{
	var_215_string = "oob11Anna1"; // 0x3fd PushS
	var_216_int = 1; // 0x3fe PushI
	SetVariable(var_215_string, var_216_int); // 0x3ff Func
	return 0; // 0x401 Return
}


func_638(var_9_bool)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); // 0x27e PushV
	GetPosition(var_12_cvector); // 0x27f ObjFunc
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); // 0x281 PushV
	var_14_cvector = var_12_cvector; // 0x282 Mov
	func_628(var_13_bool, var_14_cvector); // 0x283 NEW_2
	var_9_bool = var_13_bool; // 0x284 Mov
	return 2; // 0x286 Return
}


