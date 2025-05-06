task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xe4 PushI
	if(var_7_int == 0) goto Label_580; // 0xe5 JumpB
	func_923(); // 0xe7 NEW_2
	var_9_int = 23196; // 0xe9 PushI
	var_10_bool = var_6_int == var_9_int; // 0xea Eq
	if(var_10_bool == 0) goto Label_251; // 0xeb JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xec PushV
	var_11_object = var_1_object; // 0xed MovT
	var_12_object = var_0_object; // 0xee MovT
	func_1003(); // 0xef NEW_2
	var_25_object = Obj(); var_26_object = Obj(); // 0xf1 PushV
	var_25_object = var_1_object; // 0xf2 MovT
	var_26_object = var_0_object; // 0xf3 MovT
	func_1028(); // 0xf4 NEW_2
	var_35_object = Obj(); var_36_object = Obj(); // 0xf6 PushV
	var_35_object = var_1_object; // 0xf7 MovT
	var_36_object = var_0_object; // 0xf8 MovT
	func_994(); // 0xf9 NEW_2
	
Label_251:
	var_62_int = 23199; // 0xfb PushI
	var_63_bool = var_6_int == var_62_int; // 0xfc Eq
	if(var_63_bool == 0) goto Label_269; // 0xfd JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0xfe PushV
	var_64_object = var_1_object; // 0xff MovT
	var_65_object = var_0_object; // 0x100 MovT
	func_1003(); // 0x101 NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0x103 PushV
	var_66_object = var_1_object; // 0x104 MovT
	var_67_object = var_0_object; // 0x105 MovT
	func_1028(); // 0x106 NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0x108 PushV
	var_68_object = var_1_object; // 0x109 MovT
	var_69_object = var_0_object; // 0x10a MovT
	func_994(); // 0x10b NEW_2
	
Label_269:
	var_70_int = 23193; // 0x10d PushI
	var_71_bool = var_5_int == var_70_int; // 0x10e Eq
	if(var_71_bool == 0) goto Label_358; // 0x10f JumpB
	var_72_bool = 0; // 0x110 PushV
	var_72_bool = 0; // 0x111 MovB
	var_73_bool = 0; var_74_object = Obj(); // 0x112 PushV
	var_74_object = var_1_object; // 0x113 MovT
	func_1039(var_74_object); // 0x114 NEW_2
	var_81_bool = var_73_bool == 0; // 0x116 Not
	if(var_81_bool == 0) goto Label_286; // 0x117 JumpB
	var_82_bool = 0; var_83_object = Obj(); // 0x118 PushV
	var_83_object = var_1_object; // 0x119 MovT
	func_1051(var_83_object); // 0x11a NEW_2
	if(var_82_bool == 0) goto Label_286; // 0x11c JumpB
	var_72_bool = 1; // 0x11d MovB
	
Label_286:
	if(var_72_bool == 0) goto Label_307; // 0x11e JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x11f PushV
	var_88_object = var_1_object; // 0x120 MovT
	var_89_object = var_0_object; // 0x121 MovT
	func_1022(); // 0x122 NEW_2
	var_92_string = ""; // 0x124 PushV
	var_92_string = "Untrust"; // 0x125 MovS
	func_205(var_6_int, var_92_string); // 0x126 NEW_2
	var_109_int = 522023; // 0x128 PushI
	SetMessage(var_109_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_110_int = 523350; // 0x12d PushI
	var_111_int = 24567; // 0x12e PushI
	var_112_int = 24566; // 0x12f PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_113_bool = 0; var_114_object = Obj(); // 0x133 PushV
	var_114_object = var_1_object; // 0x134 MovT
	func_1039(var_114_object); // 0x135 NEW_2
	var_115_bool = var_113_bool == 0; // 0x137 Not
	if(var_115_bool == 0) goto Label_333; // 0x138 JumpB
	var_116_string = ""; // 0x139 PushV
	var_116_string = "Neutral"; // 0x13a MovS
	func_205(var_6_int, var_116_string); // 0x13b NEW_2
	var_117_int = 522028; // 0x13d PushI
	SetMessage(var_117_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_118_int = 522029; // 0x142 PushI
	var_119_int = -1; // 0x143 PushI
	var_120_int = 23199; // 0x144 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x145 TObjFunc
	var_121_int = 522030; // 0x147 PushI
	var_122_int = -1; // 0x148 PushI
	var_123_int = 23200; // 0x149 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_124_string = ""; // 0x14d PushV
	var_124_string = "Neutral"; // 0x14e MovS
	func_205(var_6_int, var_124_string); // 0x14f NEW_2
	var_125_int = 522031; // 0x151 PushI
	SetMessage(var_125_int); // 0x152 TObjFunc
	ClearReplies(); // 0x154 TObjFunc
	var_126_int = 522032; // 0x156 PushI
	var_127_int = -1; // 0x157 PushI
	var_128_int = 23202; // 0x158 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x159 TObjFunc
	var_129_bool = 0; var_130_object = Obj(); // 0x15b PushV
	var_130_object = var_1_object; // 0x15c MovT
	func_1063(var_130_object); // 0x15d NEW_2
	if(var_129_bool == 0) goto Label_357; // 0x15f JumpB
	var_135_int = 523383; // 0x160 PushI
	var_136_int = -1; // 0x161 PushI
	var_137_int = 24601; // 0x162 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x163 TObjFunc
	
Label_357:
	return 0; // 0x165 Return
	
Label_358:
	var_138_int = 24567; // 0x166 PushI
	var_139_bool = var_5_int == var_138_int; // 0x167 Eq
	if(var_139_bool == 0) goto Label_386; // 0x168 JumpB
	var_140_string = ""; // 0x169 PushV
	var_140_string = "Untrust"; // 0x16a MovS
	func_205(var_6_int, var_140_string); // 0x16b NEW_2
	var_141_int = 523351; // 0x16d PushI
	SetMessage(var_141_int); // 0x16e TObjFunc
	ClearReplies(); // 0x170 TObjFunc
	var_142_int = 523352; // 0x172 PushI
	var_143_int = 24569; // 0x173 PushI
	var_144_int = 24568; // 0x174 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x175 TObjFunc
	var_145_int = 523360; // 0x177 PushI
	var_146_int = 24577; // 0x178 PushI
	var_147_int = 24576; // 0x179 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x17a TObjFunc
	var_148_int = 523369; // 0x17c PushI
	var_149_int = 24586; // 0x17d PushI
	var_150_int = 24585; // 0x17e PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x17f TObjFunc
	return 0; // 0x181 Return
	
Label_386:
	var_151_int = 24586; // 0x182 PushI
	var_152_bool = var_5_int == var_151_int; // 0x183 Eq
	if(var_152_bool == 0) goto Label_409; // 0x184 JumpB
	var_153_string = ""; // 0x185 PushV
	var_153_string = "Untrust"; // 0x186 MovS
	func_205(var_6_int, var_153_string); // 0x187 NEW_2
	var_154_int = 523370; // 0x189 PushI
	SetMessage(var_154_int); // 0x18a TObjFunc
	ClearReplies(); // 0x18c TObjFunc
	var_155_int = 523371; // 0x18e PushI
	var_156_int = 24588; // 0x18f PushI
	var_157_int = 24587; // 0x190 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x191 TObjFunc
	var_158_int = 541842; // 0x193 PushI
	var_159_int = 24591; // 0x194 PushI
	var_160_int = 44060; // 0x195 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x196 TObjFunc
	return 0; // 0x198 Return
	
Label_409:
	var_161_int = 24591; // 0x199 PushI
	var_162_bool = var_5_int == var_161_int; // 0x19a Eq
	if(var_162_bool == 0) goto Label_427; // 0x19b JumpB
	var_163_string = ""; // 0x19c PushV
	var_163_string = "Untrust"; // 0x19d MovS
	func_205(var_6_int, var_163_string); // 0x19e NEW_2
	var_164_int = 523374; // 0x1a0 PushI
	SetMessage(var_164_int); // 0x1a1 TObjFunc
	ClearReplies(); // 0x1a3 TObjFunc
	var_165_int = 523375; // 0x1a5 PushI
	var_166_int = 24582; // 0x1a6 PushI
	var_167_int = 24592; // 0x1a7 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x1a8 TObjFunc
	return 0; // 0x1aa Return
	
Label_427:
	var_168_int = 24588; // 0x1ab PushI
	var_169_bool = var_5_int == var_168_int; // 0x1ac Eq
	if(var_169_bool == 0) goto Label_445; // 0x1ad JumpB
	var_170_string = ""; // 0x1ae PushV
	var_170_string = "Untrust"; // 0x1af MovS
	func_205(var_6_int, var_170_string); // 0x1b0 NEW_2
	var_171_int = 523372; // 0x1b2 PushI
	SetMessage(var_171_int); // 0x1b3 TObjFunc
	ClearReplies(); // 0x1b5 TObjFunc
	var_172_int = 523373; // 0x1b7 PushI
	var_173_int = 24582; // 0x1b8 PushI
	var_174_int = 24589; // 0x1b9 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x1ba TObjFunc
	return 0; // 0x1bc Return
	
Label_445:
	var_175_int = 24577; // 0x1bd PushI
	var_176_bool = var_5_int == var_175_int; // 0x1be Eq
	if(var_176_bool == 0) goto Label_463; // 0x1bf JumpB
	var_177_string = ""; // 0x1c0 PushV
	var_177_string = "Fear"; // 0x1c1 MovS
	func_205(var_6_int, var_177_string); // 0x1c2 NEW_2
	var_178_int = 523361; // 0x1c4 PushI
	SetMessage(var_178_int); // 0x1c5 TObjFunc
	ClearReplies(); // 0x1c7 TObjFunc
	var_179_int = 523362; // 0x1c9 PushI
	var_180_int = 24579; // 0x1ca PushI
	var_181_int = 24578; // 0x1cb PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x1cc TObjFunc
	return 0; // 0x1ce Return
	
Label_463:
	var_182_int = 24579; // 0x1cf PushI
	var_183_bool = var_5_int == var_182_int; // 0x1d0 Eq
	if(var_183_bool == 0) goto Label_486; // 0x1d1 JumpB
	var_184_string = ""; // 0x1d2 PushV
	var_184_string = "Fear"; // 0x1d3 MovS
	func_205(var_6_int, var_184_string); // 0x1d4 NEW_2
	var_185_int = 523363; // 0x1d6 PushI
	SetMessage(var_185_int); // 0x1d7 TObjFunc
	ClearReplies(); // 0x1d9 TObjFunc
	var_186_int = 523364; // 0x1db PushI
	var_187_int = 24573; // 0x1dc PushI
	var_188_int = 24580; // 0x1dd PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x1de TObjFunc
	var_189_int = 523365; // 0x1e0 PushI
	var_190_int = 24582; // 0x1e1 PushI
	var_191_int = 24581; // 0x1e2 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x1e3 TObjFunc
	return 0; // 0x1e5 Return
	
Label_486:
	var_192_int = 24582; // 0x1e6 PushI
	var_193_bool = var_5_int == var_192_int; // 0x1e7 Eq
	if(var_193_bool == 0) goto Label_509; // 0x1e8 JumpB
	var_194_string = ""; // 0x1e9 PushV
	var_194_string = "Fear"; // 0x1ea MovS
	func_205(var_6_int, var_194_string); // 0x1eb NEW_2
	var_195_int = 523366; // 0x1ed PushI
	SetMessage(var_195_int); // 0x1ee TObjFunc
	ClearReplies(); // 0x1f0 TObjFunc
	var_196_int = 523367; // 0x1f2 PushI
	var_197_int = 24573; // 0x1f3 PushI
	var_198_int = 24583; // 0x1f4 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x1f5 TObjFunc
	var_199_int = 523368; // 0x1f7 PushI
	var_200_int = 24573; // 0x1f8 PushI
	var_201_int = 24584; // 0x1f9 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x1fa TObjFunc
	return 0; // 0x1fc Return
	
Label_509:
	var_202_int = 24569; // 0x1fd PushI
	var_203_bool = var_5_int == var_202_int; // 0x1fe Eq
	if(var_203_bool == 0) goto Label_527; // 0x1ff JumpB
	var_204_string = ""; // 0x200 PushV
	var_204_string = "Fear"; // 0x201 MovS
	func_205(var_6_int, var_204_string); // 0x202 NEW_2
	var_205_int = 523353; // 0x204 PushI
	SetMessage(var_205_int); // 0x205 TObjFunc
	ClearReplies(); // 0x207 TObjFunc
	var_206_int = 523354; // 0x209 PushI
	var_207_int = 24571; // 0x20a PushI
	var_208_int = 24570; // 0x20b PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x20c TObjFunc
	return 0; // 0x20e Return
	
Label_527:
	var_209_int = 24571; // 0x20f PushI
	var_210_bool = var_5_int == var_209_int; // 0x210 Eq
	if(var_210_bool == 0) goto Label_545; // 0x211 JumpB
	var_211_string = ""; // 0x212 PushV
	var_211_string = "Fear"; // 0x213 MovS
	func_205(var_6_int, var_211_string); // 0x214 NEW_2
	var_212_int = 523355; // 0x216 PushI
	SetMessage(var_212_int); // 0x217 TObjFunc
	ClearReplies(); // 0x219 TObjFunc
	var_213_int = 523356; // 0x21b PushI
	var_214_int = 24573; // 0x21c PushI
	var_215_int = 24572; // 0x21d PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x21e TObjFunc
	return 0; // 0x220 Return
	
Label_545:
	var_216_int = 24573; // 0x221 PushI
	var_217_bool = var_5_int == var_216_int; // 0x222 Eq
	if(var_217_bool == 0) goto Label_568; // 0x223 JumpB
	var_218_string = ""; // 0x224 PushV
	var_218_string = "Fear"; // 0x225 MovS
	func_205(var_6_int, var_218_string); // 0x226 NEW_2
	var_219_int = 523357; // 0x228 PushI
	SetMessage(var_219_int); // 0x229 TObjFunc
	ClearReplies(); // 0x22b TObjFunc
	var_220_int = 522026; // 0x22d PushI
	var_221_int = -1; // 0x22e PushI
	var_222_int = 23196; // 0x22f PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x230 TObjFunc
	var_223_int = 523359; // 0x232 PushI
	var_224_int = -1; // 0x233 PushI
	var_225_int = 24575; // 0x234 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x235 TObjFunc
	return 0; // 0x237 Return
	
Label_568:
	var_3_string = 1; // 0x238 TMovB
	var_226_bool = 0; // 0x239 PushV
	func_992(var_226_bool); // 0x23a NEW_2
	if(var_226_bool == 0) goto Label_576; // 0x23c JumpB
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
	func_877(var_9_string); // 0x256 NEW_2
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
	var_82_bool = var_35_bool == 0; // 0x7 Not
	if(var_82_bool == 0) goto Label_11; // 0x8 JumpB
	var_24_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_31_object); // 0xb Func
	var_83_int = 0; // 0xd PushV
	func_986(var_83_int); // 0xe NEW_2
	SetNPCName(var_83_int); // 0x10 ObjFunc
	var_84_int = 0; // 0x12 PushV
	func_984(var_84_int); // 0x13 NEW_2
	SetNPCDescription(var_84_int); // 0x15 ObjFunc
	var_85_string = ""; // 0x17 PushV
	func_988(var_85_string); // 0x18 NEW_2
	SetPhoto(var_85_string); // 0x1a ObjFunc
	var_86_string = ""; // 0x1c PushV
	func_990(var_86_string); // 0x1d NEW_2
	SetPhoto2(var_86_string); // 0x1f ObjFunc
	var_87_int = 0; // 0x21 PushV
	func_1129(var_87_int); // 0x22 NEW_2
	SetPlayerName(var_87_int); // 0x24 ObjFunc
	var_33_int = -1; // 0x26 MovI
	IsOverrideActive(var_32_bool); // 0x27 Func
	var_95_bool = var_32_bool; // 0x29 Push
	if(var_95_bool == 0) goto Label_45; // 0x2a JumpB
	var_24_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_31_object); // 0x2d Func
	var_96_bool = 0; var_97_object = Obj(); // 0x2f PushV
	var_98_object = Obj(); // 0x30 PushV
	func_930(var_98_object); // 0x31 NEW_2
	var_97_object = var_98_object; // 0x32 Mov
	func_739(var_96_bool, var_97_object); // 0x34 NEW_2
	var_191_object = Obj(); var_192_object = Obj(); // 0x36 PushV
	var_191_object = var_25_object; // 0x37 Mov
	var_192_object = var_31_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_193_object, var_194_object, var_195_string, var_196_bool, var_191_object, var_192_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_34_bool); // 0x3d ObjFunc
	
Label_63:
	var_282_bool = var_34_bool == 0; // 0x3f Not
	if(var_282_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_34_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_283_object = Obj(); // 0x46 PushV
	var_283_object = var_25_object; // 0x47 Mov
	func_721(); // 0x48 NEW_2
	StopDialog(var_31_object); // 0x4a Func
	GetReturnValue(var_33_int); // 0x4c ObjFunc
	var_24_int = var_33_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1028()
{
	var_27_string = "b11q01"; // 0x405 PushS
	var_28_int = 2; // 0x406 PushI
	SetVariable(var_27_string, var_28_int); // 0x407 Func
	var_29_bool = 0; var_30_string = ""; var_31_string = ""; // 0x409 PushV
	var_30_string = "quest_b11_01"; // 0x40a MovS
	var_31_string = "open_well_exit"; // 0x40b MovS
	func_951(var_29_bool, var_30_string, var_31_string); // 0x40c NEW_2
	return 0; // 0x40e Return
}


func_647(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0x287 PushV
	IsLoaded(var_7_bool); // 0x288 Func
	var_5_bool = var_7_bool; // 0x28a Mov
	return 2; // 0x28b Return
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
	func_936(var_62_cvector, var_63_cvector); // 0x2a7 NEW_2
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
	var_75_bool = 1; // 0x2b7 PushB
	CameraTransit(var_53_cvector, var_51_cvector, var_75_bool); // 0x2b8 Func
	var_76_float = GetByIndex(var_52_cvector, 0); // 0x2ba PushE
	var_77_float = GetByIndex(var_52_cvector, 2); // 0x2bb PushE
	Rotate(var_76_float, var_77_float); // 0x2bc Func
	var_78_bool = 0; // 0x2be PushV
	func_992(var_78_bool); // 0x2bf NEW_2
	if(var_78_bool == 0) goto Label_707; // 0x2c1 JumpB
	goto Label_715; // 0x2c2 Jump
	
Label_715:
	CameraWaitForPlayFinish(); // 0x2cb Func
	ResumeWorld(); // 0x2cd Func
	var_35_bool = 1; // 0x2cf MovB
	return 18; // 0x2d0 Return
	
Label_707:
	var_79_string = "head"; // 0x2c3 PushS
	HasAnimationTrack(var_55_bool, var_79_string); // 0x2c4 Func
	var_80_bool = var_55_bool; // 0x2c6 Push
	if(var_80_bool == 0) goto Label_715; // 0x2c7 JumpB
	var_81_string = "head"; // 0x2c8 PushS
	LookAsyncCamera(var_81_string); // 0x2c9 Func
}


func_908(var_130_bool, var_131_string)
{
	var_132_bool = 0; var_133_bool = 0; // 0x38c PushV
	var_134_bool = 0; // 0x38d PushV
	func_992(var_134_bool); // 0x38e NEW_2
	if(var_134_bool == 0) goto Label_921; // 0x390 JumpB
	lshHasSpeech(var_133_bool, var_131_string); // 0x391 Func
	var_135_bool = var_133_bool; // 0x393 Push
	if(var_135_bool == 0) goto Label_921; // 0x394 JumpB
	lshPlaySpeech(var_131_string); // 0x395 Func
	var_130_bool = 1; // 0x397 MovB
	return 2; // 0x398 Return
	
Label_921:
	var_130_bool = 0; // 0x399 MovB
	return 2; // 0x39a Return
}


func_1039(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x410 PushV
	var_202_string = "b11q01VictimChoosed"; // 0x411 MovS
	func_946(var_201_int, var_202_string); // 0x412 NEW_2
	var_205_int = 0; // 0x414 PushI
	var_206_bool = var_201_int != var_205_int; // 0x415 Neq
	if(var_206_bool == 0) goto Label_1049; // 0x416 JumpB
	var_199_bool = 1; // 0x417 MovB
	return 0; // 0x418 Return
	
Label_1049:
	var_199_bool = 0; // 0x419 MovB
	return 0; // 0x41a Return
}


func_1022()
{
	var_216_string = "oob11Julia1"; // 0x3ff PushS
	var_217_int = 1; // 0x400 PushI
	SetVariable(var_216_string, var_217_int); // 0x401 Func
	return 0; // 0x403 Return
}


func_1051(var_208_bool)
{
	var_210_int = 0; var_211_string = ""; // 0x41c PushV
	var_211_string = "oob11Julia1"; // 0x41d MovS
	func_946(var_210_int, var_211_string); // 0x41e NEW_2
	var_212_int = 0; // 0x420 PushI
	var_213_bool = var_210_int == var_212_int; // 0x421 Eq
	if(var_213_bool == 0) goto Label_1061; // 0x422 JumpB
	var_208_bool = 1; // 0x423 MovB
	return 0; // 0x424 Return
	
Label_1061:
	var_208_bool = 0; // 0x425 MovB
	return 0; // 0x426 Return
}


func_923()
{
	var_8_bool = 0; // 0x39b PushV
	func_992(var_8_bool); // 0x39c NEW_2
	if(var_8_bool == 0) goto Label_929; // 0x39e JumpB
	lshStopSpeech(); // 0x39f Func
	
Label_929:
	return 0; // 0x3a1 Return
}


func_797(var_107_bool)
{
	var_109_string = ""; var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_string = ""; var_114_string = ""; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_string = ""; // 0x31d PushV
	var_114_string = "c"; // 0x31e MovS
	var_115_int = 0; // 0x31f MovI
	
Label_800:
	var_119_int = 1; // 0x320 PushI
	if(var_119_int == 0) goto Label_813; // 0x321 JumpB
	var_120_int = 1; // 0x322 PushI
	var_121_int = var_115_int + var_120_int; // 0x323 Add
	var_122_int = var_114_string + var_121_int; // 0x324 Add
	HasProperty(var_122_int, var_116_bool); // 0x325 ObjFunc
	var_123_bool = var_116_bool == 0; // 0x327 Not
	if(var_123_bool == 0) goto Label_810; // 0x328 JumpB
	goto Label_813; // 0x329 Jump
	
Label_813:
	var_124_bool = var_115_int == 0; // 0x32d Not
	if(var_124_bool == 0) goto Label_817; // 0x32e JumpB
	var_107_bool = 0; // 0x32f MovB
	return 10; // 0x330 Return
	
Label_817:
	var_117_int = 0; // 0x331 MovI
	var_125_int = 1; // 0x332 PushI
	var_126_bool = var_115_int > var_125_int; // 0x333 GT
	if(var_126_bool == 0) goto Label_823; // 0x334 JumpB
	irand(var_117_int, var_115_int); // 0x335 Func
	
Label_823:
	var_127_int = 1; // 0x337 PushI
	var_128_int = var_117_int + var_127_int; // 0x338 Add
	var_129_int = var_114_string + var_128_int; // 0x339 Add
	GetProperty(var_129_int, var_118_string); // 0x33a ObjFunc
	var_130_bool = 0; var_131_string = ""; // 0x33c PushV
	var_131_string = var_118_string; // 0x33d Mov
	func_908(var_130_bool, var_131_string); // 0x33e NEW_2
	var_107_bool = var_130_bool; // 0x33f Mov
	return 10; // 0x341 Return
	
Label_810:
	var_136_int = 1; // 0x32a PushI
	var_115_int = var_115_int + var_136_int; // 0x32b Add2
	goto Label_800; // 0x32c Jump
}


func_930(var_98_object)
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x3a2 PushV
	self(var_100_object); // 0x3a3 Func
	var_98_object = var_100_object; // 0x3a5 Mov
	return 2; // 0x3a6 Return
}


func_1063(var_273_bool)
{
	var_275_int = 0; var_276_string = ""; // 0x428 PushV
	var_276_string = "b11q01KillJulia"; // 0x429 MovS
	func_946(var_275_int, var_276_string); // 0x42a NEW_2
	var_277_int = 0; // 0x42c PushI
	var_278_bool = var_275_int != var_277_int; // 0x42d Neq
	if(var_278_bool == 0) goto Label_1073; // 0x42e JumpB
	var_273_bool = 1; // 0x42f MovB
	return 0; // 0x430 Return
	
Label_1073:
	var_273_bool = 0; // 0x431 MovB
	return 0; // 0x432 Return
}


func_936(var_62_cvector, var_63_cvector)
{
	var_65_float = 0; var_66_float = 0; // 0x3a8 PushV
	var_67_int = var_63_cvector | var_63_cvector; // 0x3a9 Or
	var_66_float = sqrt(var_67_int); // 0x3aa Sqrt2
	var_68_float = 0.0; // 0x3ab PushF
	var_69_bool = var_66_float < var_68_float; // 0x3ac LT
	if(var_69_bool == 0) goto Label_944; // 0x3ad JumpB
	var_62_cvector = CVector(0.0, 0.0, 0.0); // 0x3ae MovV
	return 2; // 0x3af Return
	
Label_944:
	var_62_cvector = var_63_cvector / var_63_cvector; // 0x3b0 Div2
	return 2; // 0x3b1 Return
}


func_946(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x3b2 PushV
	GetVariable(var_202_string, var_204_int); // 0x3b3 Func
	var_201_int = var_204_int; // 0x3b5 Mov
	return 2; // 0x3b6 Return
}


func_1075()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x433 PushV
	var_41_int = 315; // 0x434 PushI
	var_42_int = 1; // 0x435 PushI
	var_43_int = 522057; // 0x436 PushI
	CreateDiaryEntry(var_40_object, var_41_int, var_42_int, var_43_int); // 0x437 Func
	var_44_bool = 0; var_45_object = Obj(); var_46_int = 0; // 0x439 PushV
	var_45_object = var_40_object; // 0x43a Mov
	var_46_int = 313; // 0x43b MovI
	func_1101(var_44_bool, var_45_object, var_46_int); // 0x43c NEW_2
	return 2; // 0x43e Return
}


func_951(var_29_bool, var_30_string, var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x3b7 PushV
	FindActor(var_33_object, var_30_string); // 0x3b8 Func
	var_34_bool = var_33_object == 0; // 0x3ba NullEq
	if(var_34_bool == 0) goto Label_958; // 0x3bb JumpB
	var_29_bool = 0; // 0x3bc MovB
	return 2; // 0x3bd Return
	
Label_958:
	Trigger(var_33_object, var_31_string); // 0x3be Func
	var_29_bool = 1; // 0x3c0 MovB
	return 2; // 0x3c1 Return
}


func_1088(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x440 PushV
	GetDiaryRoot(var_55_object); // 0x441 Func
	var_56_bool = var_55_object == 0; // 0x443 Not
	if(var_56_bool == 0) goto Label_1098; // 0x444 JumpB
	var_57_string = "Can't retrieve diary root"; // 0x445 PushS
	Trace(var_57_string); // 0x446 Func
	var_53_object = 0; // 0x448 MovB
	return 2; // 0x449 Return
	
Label_1098:
	var_53_object = var_55_object; // 0x44a Mov
	return 2; // 0x44b Return
}


func_834(var_138_bool)
{
	var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = ""; var_145_string = ""; var_146_int = 0; var_147_bool = 0; var_148_int = 0; var_149_string = ""; // 0x342 PushV
	var_150_string = "d"; // 0x343 PushS
	var_151_int = 0; // 0x344 PushV
	func_975(var_151_int); // 0x345 NEW_2
	var_157_int = var_150_string + var_151_int; // 0x347 Add
	var_158_string = "m"; // 0x348 PushS
	var_145_string = var_157_int + var_158_string; // 0x349 Add2
	var_146_int = 0; // 0x34a MovI
	
Label_843:
	var_159_int = 1; // 0x34b PushI
	if(var_159_int == 0) goto Label_856; // 0x34c JumpB
	var_160_int = 1; // 0x34d PushI
	var_161_int = var_146_int + var_160_int; // 0x34e Add
	var_162_int = var_145_string + var_161_int; // 0x34f Add
	HasProperty(var_162_int, var_147_bool); // 0x350 ObjFunc
	var_163_bool = var_147_bool == 0; // 0x352 Not
	if(var_163_bool == 0) goto Label_853; // 0x353 JumpB
	goto Label_856; // 0x354 Jump
	
Label_856:
	var_164_bool = var_146_int == 0; // 0x358 Not
	if(var_164_bool == 0) goto Label_860; // 0x359 JumpB
	var_138_bool = 0; // 0x35a MovB
	return 10; // 0x35b Return
	
Label_860:
	var_148_int = 0; // 0x35c MovI
	var_165_int = 1; // 0x35d PushI
	var_166_bool = var_146_int > var_165_int; // 0x35e GT
	if(var_166_bool == 0) goto Label_866; // 0x35f JumpB
	irand(var_148_int, var_146_int); // 0x360 Func
	
Label_866:
	var_167_int = 1; // 0x362 PushI
	var_168_int = var_148_int + var_167_int; // 0x363 Add
	var_169_int = var_145_string + var_168_int; // 0x364 Add
	GetProperty(var_169_int, var_149_string); // 0x365 ObjFunc
	var_170_bool = 0; var_171_string = ""; // 0x367 PushV
	var_171_string = var_149_string; // 0x368 Mov
	func_908(var_170_bool, var_171_string); // 0x369 NEW_2
	var_138_bool = var_170_bool; // 0x36a Mov
	return 10; // 0x36c Return
	
Label_853:
	var_172_int = 1; // 0x355 PushI
	var_146_int = var_146_int + var_172_int; // 0x356 Add2
	goto Label_843; // 0x357 Jump
}


func_963(var_17_bool, var_18_string, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x3c3 PushV
	FindActor(var_22_object, var_18_string); // 0x3c4 Func
	var_23_bool = var_22_object == 0; // 0x3c6 NullEq
	if(var_23_bool == 0) goto Label_970; // 0x3c7 JumpB
	var_17_bool = 0; // 0x3c8 MovB
	return 2; // 0x3c9 Return
	
Label_970:
	Trigger(var_22_object, var_19_string, var_20_string); // 0x3ca Func
	var_17_bool = 1; // 0x3cc MovB
	return 2; // 0x3cd Return
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


func_205(var_2_object, var_218_string)
{
	var_219_bool = 0; // 0xce PushV
	func_992(var_219_bool); // 0xcf NEW_2
	var_220_bool = var_219_bool == 0; // 0xd1 Not
	if(var_220_bool == 0) goto Label_212; // 0xd2 JumpB
	return 0; // 0xd3 Return
	
Label_212:
	var_221_bool = var_218_string == var_2_object; // 0xd4 Eq
	if(var_221_bool == 0) goto Label_215; // 0xd5 JumpB
	return 0; // 0xd6 Return
	
Label_215:
	var_222_string = ""; var_223_bool = 0; // 0xd7 PushV
	var_222_string = var_218_string; // 0xd8 Mov
	var_224_string = ""; // 0xd9 PushS
	var_225_bool = var_218_string == var_224_string; // 0xda Eq
	if(var_225_bool == 0) goto Label_222; // 0xdb JumpB
	var_223_bool = 0; // 0xdc MovB
	goto Label_223; // 0xdd Jump
	
Label_223:
	func_893(var_222_string, var_223_bool); // 0xdf NEW_2
	var_2_object = var_218_string; // 0xe1 TMov
	return 0; // 0xe2 Return
	
Label_222:
	var_223_bool = 1; // 0xde MovB
}


func_1101(var_44_bool, var_45_object, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; // 0x44d PushV
	var_53_object = Obj(); // 0x44e PushV
	func_1088(var_53_object); // 0x44f NEW_2
	var_50_object = var_53_object; // 0x450 Mov
	Find(var_46_int, var_51_object); // 0x452 ObjFunc
	var_58_bool = var_51_object == 0; // 0x454 Not
	if(var_58_bool == 0) goto Label_1116; // 0x455 JumpB
	var_59_string = "Can't find diary parent with id: "; // 0x456 PushS
	var_60_int = var_59_string + var_46_int; // 0x457 Add
	Trace(var_60_int); // 0x458 Func
	var_44_bool = 0; // 0x45a MovB
	return 6; // 0x45b Return
	
Label_1116:
	AddChild(var_45_object); // 0x45c ObjFunc
	var_61_int = 7; // 0x45e PushI
	SendWorldWndMessage(var_61_int); // 0x45f Func
	GetCategory(var_52_int); // 0x461 ObjFunc
	SetDiarySection(var_52_int); // 0x463 Func
	var_44_bool = 0; // 0x465 MovB
	return 6; // 0x466 Return
}


func_975(var_151_int)
{
	var_152_float = 0; var_153_float = 0; // 0x3cf PushV
	GetGameTime(var_153_float); // 0x3d0 Func
	var_154_int = 1; // 0x3d2 PushI
	var_155_int = 0; // 0x3d3 PushV
	var_156_int = 24; // 0x3d4 PushI
	var_155_int = var_153_float / var_153_float; // 0x3d5 Div2
	var_151_int = var_154_int + var_155_int; // 0x3d6 Add2
	return 2; // 0x3d7 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_191_object, var_192_object)
{
	var_0_object = var_192_object; // 0x52 TMov
	var_1_object = var_191_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_197_int = 1; // 0x55 PushI
	if(var_197_int == 0) goto Label_175; // 0x56 JumpB
	var_198_bool = 0; // 0x57 PushV
	var_198_bool = 0; // 0x58 MovB
	var_199_bool = 0; var_200_object = Obj(); // 0x59 PushV
	var_200_object = var_1_object; // 0x5a MovT
	func_1039(var_200_object); // 0x5b NEW_2
	var_207_bool = var_199_bool == 0; // 0x5d Not
	if(var_207_bool == 0) goto Label_101; // 0x5e JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x5f PushV
	var_209_object = var_1_object; // 0x60 MovT
	func_1051(var_209_object); // 0x61 NEW_2
	if(var_208_bool == 0) goto Label_101; // 0x63 JumpB
	var_198_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_198_bool == 0) goto Label_122; // 0x65 JumpB
	var_214_object = Obj(); var_215_object = Obj(); // 0x66 PushV
	var_214_object = var_1_object; // 0x67 MovT
	var_215_object = var_0_object; // 0x68 MovT
	func_1022(); // 0x69 NEW_2
	var_218_string = ""; // 0x6b PushV
	var_218_string = "Untrust"; // 0x6c MovS
	func_205(var_192_object, var_218_string); // 0x6d NEW_2
	var_235_int = 522023; // 0x6f PushI
	SetMessage(var_235_int); // 0x70 TObjFunc
	ClearReplies(); // 0x72 TObjFunc
	var_236_int = 523350; // 0x74 PushI
	var_237_int = 24567; // 0x75 PushI
	var_238_int = 24566; // 0x76 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x77 TObjFunc
	goto Label_175; // 0x79 Jump
	
Label_175:
	var_239_bool = 0; // 0xaf PushV
	func_992(var_239_bool); // 0xb0 NEW_2
	if(var_239_bool == 0) goto Label_190; // 0xb2 JumpB
	
Label_179:
	lshWaitForAnimEnd(); // 0xb3 Func
	var_240_string = var_3_string; // 0xb5 PushT
	if(var_240_string == 0) goto Label_184; // 0xb6 JumpB
	goto Label_189; // 0xb7 Jump
	
Label_189:
	goto Label_204; // 0xbd Jump
	
Label_204:
	return 0; // 0xcc Return
	
Label_184:
	var_241_string = ""; // 0xb8 PushV
	var_241_string = var_2_object; // 0xb9 MovT
	func_877(var_241_string); // 0xba NEW_2
	goto Label_179; // 0xbc Jump
	
Label_190:
	var_252_string = "all"; // 0xbe PushS
	var_253_string = "idle"; // 0xbf PushS
	PlayAnimation(var_252_string, var_253_string); // 0xc0 Func
	
Label_194:
	WaitForAnimEnd(); // 0xc2 Func
	var_254_string = var_3_string; // 0xc4 PushT
	if(var_254_string == 0) goto Label_199; // 0xc5 JumpB
	goto Label_204; // 0xc6 Jump
	
Label_199:
	var_255_string = "all"; // 0xc7 PushS
	var_256_string = "idle"; // 0xc8 PushS
	PlayAnimation(var_255_string, var_256_string); // 0xc9 Func
	goto Label_194; // 0xcb Jump
	
Label_122:
	var_257_bool = 0; var_258_object = Obj(); // 0x7a PushV
	var_258_object = var_1_object; // 0x7b MovT
	func_1039(var_258_object); // 0x7c NEW_2
	var_259_bool = var_257_bool == 0; // 0x7e Not
	if(var_259_bool == 0) goto Label_148; // 0x7f JumpB
	var_260_string = ""; // 0x80 PushV
	var_260_string = "Neutral"; // 0x81 MovS
	func_205(var_192_object, var_260_string); // 0x82 NEW_2
	var_261_int = 522028; // 0x84 PushI
	SetMessage(var_261_int); // 0x85 TObjFunc
	ClearReplies(); // 0x87 TObjFunc
	var_262_int = 522029; // 0x89 PushI
	var_263_int = -1; // 0x8a PushI
	var_264_int = 23199; // 0x8b PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x8c TObjFunc
	var_265_int = 522030; // 0x8e PushI
	var_266_int = -1; // 0x8f PushI
	var_267_int = 23200; // 0x90 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x91 TObjFunc
	goto Label_175; // 0x93 Jump
	
Label_148:
	var_268_string = ""; // 0x94 PushV
	var_268_string = "Neutral"; // 0x95 MovS
	func_205(var_192_object, var_268_string); // 0x96 NEW_2
	var_269_int = 522031; // 0x98 PushI
	SetMessage(var_269_int); // 0x99 TObjFunc
	ClearReplies(); // 0x9b TObjFunc
	var_270_int = 522032; // 0x9d PushI
	var_271_int = -1; // 0x9e PushI
	var_272_int = 23202; // 0x9f PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0xa0 TObjFunc
	var_273_bool = 0; var_274_object = Obj(); // 0xa2 PushV
	var_274_object = var_1_object; // 0xa3 MovT
	func_1063(var_274_object); // 0xa4 NEW_2
	if(var_273_bool == 0) goto Label_172; // 0xa6 JumpB
	var_279_int = 523383; // 0xa7 PushI
	var_280_int = -1; // 0xa8 PushI
	var_281_int = 24601; // 0xa9 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xaa TObjFunc
	
Label_172:
	goto Label_175; // 0xac Jump
}


func_721()
{
	var_284_bool = 0; var_285_bool = 0; // 0x2d1 PushV
	var_286_bool = 1; // 0x2d2 PushB
	CameraSwitchToNormal(var_286_bool); // 0x2d3 Func
	var_287_bool = 0; // 0x2d5 PushV
	func_992(var_287_bool); // 0x2d6 NEW_2
	if(var_287_bool == 0) goto Label_730; // 0x2d8 JumpB
	goto Label_738; // 0x2d9 Jump
	
Label_738:
	return 2; // 0x2e2 Return
	
Label_730:
	var_288_string = "head"; // 0x2da PushS
	HasAnimationTrack(var_285_bool, var_288_string); // 0x2db Func
	var_289_bool = var_285_bool; // 0x2dd Push
	if(var_289_bool == 0) goto Label_738; // 0x2de JumpB
	var_290_string = "head"; // 0x2df PushS
	UnlookAsync(var_290_string); // 0x2e0 Func
}


func_984(var_84_int)
{
	var_84_int = 515537; // 0x3d8 MovI
	return 0; // 0x3d9 Return
}


func_986(var_83_int)
{
	var_83_int = 502862; // 0x3da MovI
	return 0; // 0x3db Return
}


func_988(var_85_string)
{
	var_85_string = "ui/NPC_Julia.png"; // 0x3dc MovS
	return 0; // 0x3dd Return
}


func_990(var_86_string)
{
	var_86_string = "ui/NPC_Julia_b.png"; // 0x3de MovS
	return 0; // 0x3df Return
}


func_992(var_78_bool)
{
	var_78_bool = 1; // 0x3e0 MovB
	return 0; // 0x3e1 Return
}


func_994()
{
	var_37_string = "b11q01KnowWhoKilled"; // 0x3e3 PushS
	var_38_int = 1; // 0x3e4 PushI
	SetVariable(var_37_string, var_38_int); // 0x3e5 Func
	func_1075(); // 0x3e8 NEW_2
	return 0; // 0x3ea Return
}


func_739(var_96_bool, var_97_object)
{
	var_101_int = 0; var_102_int = 0; var_103_int = 0; var_104_int = 0; // 0x2e3 PushV
	var_105_string = "voice_common"; // 0x2e4 PushS
	GetVariable(var_105_string, var_103_int); // 0x2e5 Func
	var_106_int = var_103_int; // 0x2e7 Push
	if(var_106_int == 0) goto Label_777; // 0x2e8 JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x2e9 PushV
	var_108_object = var_97_object; // 0x2ea Mov
	func_797(var_108_object); // 0x2eb NEW_2
	var_137_bool = var_107_bool == 0; // 0x2ed Not
	if(var_137_bool == 0) goto Label_759; // 0x2ee JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0x2ef PushV
	var_139_object = var_97_object; // 0x2f0 Mov
	func_834(var_139_object); // 0x2f1 NEW_2
	var_173_bool = var_138_bool == 0; // 0x2f3 Not
	if(var_173_bool == 0) goto Label_759; // 0x2f4 JumpB
	var_96_bool = 0; // 0x2f5 MovB
	return 4; // 0x2f6 Return
	
Label_759:
	var_174_int = 2; // 0x2f7 PushI
	irand(var_104_int, var_174_int); // 0x2f8 Func
	var_175_int = var_104_int; // 0x2fa Push
	if(var_175_int == 0) goto Label_772; // 0x2fb JumpB
	var_176_string = "voice_common"; // 0x2fc PushS
	var_177_int = 1; // 0x2fd PushI
	var_178_int = var_103_int + var_177_int; // 0x2fe Add
	var_179_int = 3; // 0x2ff PushI
	var_180_int = var_178_int / var_179_int; // 0x300 Mod
	SetVariable(var_176_string, var_180_int); // 0x301 Func
	goto Label_776; // 0x303 Jump
	
Label_776:
	goto Label_795; // 0x308 Jump
	
Label_795:
	var_96_bool = 1; // 0x31b MovB
	return 4; // 0x31c Return
	
Label_772:
	var_181_string = "voice_common"; // 0x304 PushS
	var_182_int = 0; // 0x305 PushI
	SetVariable(var_181_string, var_182_int); // 0x306 Func
	
Label_777:
	var_183_bool = 0; var_184_object = Obj(); // 0x309 PushV
	var_184_object = var_97_object; // 0x30a Mov
	func_834(var_184_object); // 0x30b NEW_2
	var_185_bool = var_183_bool == 0; // 0x30d Not
	if(var_185_bool == 0) goto Label_791; // 0x30e JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x30f PushV
	var_187_object = var_97_object; // 0x310 Mov
	func_797(var_187_object); // 0x311 NEW_2
	var_188_bool = var_186_bool == 0; // 0x313 Not
	if(var_188_bool == 0) goto Label_791; // 0x314 JumpB
	var_96_bool = 0; // 0x315 MovB
	return 4; // 0x316 Return
	
Label_791:
	var_189_string = "voice_common"; // 0x317 PushS
	var_190_int = 1; // 0x318 PushI
	SetVariable(var_189_string, var_190_int); // 0x319 Func
}


func_1129(var_87_int)
{
	var_88_int = 0; var_89_int = 0; // 0x469 PushV
	var_90_string = "branch"; // 0x46a PushS
	GetVariable(var_90_string, var_89_int); // 0x46b Func
	var_91_int = 0; // 0x46d PushI
	var_92_bool = var_89_int == var_91_int; // 0x46e Eq
	if(var_92_bool == 0) goto Label_1139; // 0x46f JumpB
	var_87_int = 1; // 0x470 MovI
	return 2; // 0x471 Return
	
Label_1139:
	var_93_int = 1; // 0x473 PushI
	var_94_bool = var_89_int == var_93_int; // 0x474 Eq
	if(var_94_bool == 0) goto Label_1144; // 0x475 JumpB
	var_87_int = 2; // 0x476 MovI
	return 2; // 0x477 Return
	
Label_1144:
	var_87_int = 3; // 0x478 MovI
	return 2; // 0x479 Return
}


func_1003()
{
	var_13_string = "b11q01VictimChoosed"; // 0x3ec PushS
	var_14_int = 1; // 0x3ed PushI
	SetVariable(var_13_string, var_14_int); // 0x3ee Func
	var_15_string = "b11q01KillJulia"; // 0x3f0 PushS
	var_16_int = 1; // 0x3f1 PushI
	SetVariable(var_15_string, var_16_int); // 0x3f2 Func
	var_17_bool = 0; var_18_string = ""; var_19_string = ""; var_20_string = ""; // 0x3f4 PushV
	var_18_string = "volonteers_burah"; // 0x3f5 MovS
	var_19_string = "disease"; // 0x3f6 MovS
	var_20_string = "julia"; // 0x3f7 MovS
	func_963(var_17_bool, var_18_string, var_19_string, var_20_string); // 0x3f8 NEW_2
	var_24_string = "Julia is diseased"; // 0x3fa PushS
	Trace(var_24_string); // 0x3fb Func
	return 0; // 0x3fd Return
}


func_877(var_9_string)
{
	var_10_bool = 0; var_11_float = 0; var_12_float = 0; var_13_bool = 0; var_14_float = 0; var_15_float = 0; // 0x36d PushV
	lshHasAnimation(var_13_bool, var_9_string); // 0x36e Func
	var_16_bool = var_13_bool; // 0x370 Push
	if(var_16_bool == 0) goto Label_888; // 0x371 JumpB
	lshGetAnimTimes(var_9_string, var_14_float, var_15_float); // 0x372 Func
	var_17_bool = 0; // 0x374 PushB
	lshPlayAnimation(var_14_float, var_15_float, var_17_bool); // 0x375 Func
	goto Label_892; // 0x377 Jump
	
Label_892:
	return 6; // 0x37c Return
	
Label_888:
	var_18_string = "Can't find lsh animation : "; // 0x378 PushS
	var_19_int = var_18_string + var_9_string; // 0x379 Add
	Trace(var_19_int); // 0x37a Func
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


func_893(var_222_string, var_223_bool)
{
	var_226_bool = 0; var_227_float = 0; var_228_float = 0; var_229_bool = 0; var_230_float = 0; var_231_float = 0; // 0x37d PushV
	lshHasAnimation(var_229_bool, var_222_string); // 0x37e Func
	var_232_bool = var_229_bool; // 0x380 Push
	if(var_232_bool == 0) goto Label_903; // 0x381 JumpB
	lshGetAnimTimes(var_222_string, var_230_float, var_231_float); // 0x382 Func
	lshPlayAnimation(var_230_float, var_231_float, var_223_bool); // 0x384 Func
	goto Label_907; // 0x386 Jump
	
Label_907:
	return 6; // 0x38b Return
	
Label_903:
	var_233_string = "Can't find lsh animation : "; // 0x387 PushS
	var_234_int = var_233_string + var_222_string; // 0x388 Add
	Trace(var_234_int); // 0x389 Func
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


