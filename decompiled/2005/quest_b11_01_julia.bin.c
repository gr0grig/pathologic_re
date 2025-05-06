task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xe4 PushI
	if(var_7_int == 0) goto Label_555; // 0xe5 JumpB
	func_896(); // 0xe7 NEW_2
	var_9_int = 23196; // 0xe9 PushI
	var_10_bool = var_6_int == var_9_int; // 0xea Eq
	if(var_10_bool == 0) goto Label_251; // 0xeb JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xec PushV
	var_11_object = var_1_object; // 0xed MovT
	var_12_object = var_0_object; // 0xee MovT
	func_976(); // 0xef NEW_2
	var_25_object = Obj(); var_26_object = Obj(); // 0xf1 PushV
	var_25_object = var_1_object; // 0xf2 MovT
	var_26_object = var_0_object; // 0xf3 MovT
	func_1001(); // 0xf4 NEW_2
	var_35_object = Obj(); var_36_object = Obj(); // 0xf6 PushV
	var_35_object = var_1_object; // 0xf7 MovT
	var_36_object = var_0_object; // 0xf8 MovT
	func_967(); // 0xf9 NEW_2
	
Label_251:
	var_62_int = 23199; // 0xfb PushI
	var_63_bool = var_6_int == var_62_int; // 0xfc Eq
	if(var_63_bool == 0) goto Label_269; // 0xfd JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0xfe PushV
	var_64_object = var_1_object; // 0xff MovT
	var_65_object = var_0_object; // 0x100 MovT
	func_976(); // 0x101 NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0x103 PushV
	var_66_object = var_1_object; // 0x104 MovT
	var_67_object = var_0_object; // 0x105 MovT
	func_1001(); // 0x106 NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0x108 PushV
	var_68_object = var_1_object; // 0x109 MovT
	var_69_object = var_0_object; // 0x10a MovT
	func_967(); // 0x10b NEW_2
	
Label_269:
	var_70_int = 23193; // 0x10d PushI
	var_71_bool = var_5_int == var_70_int; // 0x10e Eq
	if(var_71_bool == 0) goto Label_358; // 0x10f JumpB
	var_72_bool = 0; // 0x110 PushV
	var_72_bool = 0; // 0x111 MovB
	var_73_bool = 0; var_74_object = Obj(); // 0x112 PushV
	var_74_object = var_1_object; // 0x113 MovT
	func_1012(var_74_object); // 0x114 NEW_2
	var_81_bool = var_73_bool == 0; // 0x116 Not
	if(var_81_bool == 0) goto Label_286; // 0x117 JumpB
	var_82_bool = 0; var_83_object = Obj(); // 0x118 PushV
	var_83_object = var_1_object; // 0x119 MovT
	func_1024(var_83_object); // 0x11a NEW_2
	if(var_82_bool == 0) goto Label_286; // 0x11c JumpB
	var_72_bool = 1; // 0x11d MovB
	
Label_286:
	if(var_72_bool == 0) goto Label_307; // 0x11e JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x11f PushV
	var_88_object = var_1_object; // 0x120 MovT
	var_89_object = var_0_object; // 0x121 MovT
	func_995(); // 0x122 NEW_2
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
	func_1012(var_114_object); // 0x135 NEW_2
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
	func_1036(var_130_object); // 0x15d NEW_2
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
	if(var_139_bool == 0) goto Label_381; // 0x168 JumpB
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
	return 0; // 0x17c Return
	
Label_381:
	var_148_int = 24586; // 0x17d PushI
	var_149_bool = var_5_int == var_148_int; // 0x17e Eq
	if(var_149_bool == 0) goto Label_384; // 0x17f JumpB
	
Label_384:
	var_150_int = 24591; // 0x180 PushI
	var_151_bool = var_5_int == var_150_int; // 0x181 Eq
	if(var_151_bool == 0) goto Label_402; // 0x182 JumpB
	var_152_string = ""; // 0x183 PushV
	var_152_string = "Untrust"; // 0x184 MovS
	func_205(var_6_int, var_152_string); // 0x185 NEW_2
	var_153_int = 523374; // 0x187 PushI
	SetMessage(var_153_int); // 0x188 TObjFunc
	ClearReplies(); // 0x18a TObjFunc
	var_154_int = 523375; // 0x18c PushI
	var_155_int = 24582; // 0x18d PushI
	var_156_int = 24592; // 0x18e PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_157_int = 24588; // 0x192 PushI
	var_158_bool = var_5_int == var_157_int; // 0x193 Eq
	if(var_158_bool == 0) goto Label_420; // 0x194 JumpB
	var_159_string = ""; // 0x195 PushV
	var_159_string = "Untrust"; // 0x196 MovS
	func_205(var_6_int, var_159_string); // 0x197 NEW_2
	var_160_int = 523372; // 0x199 PushI
	SetMessage(var_160_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_161_int = 523373; // 0x19e PushI
	var_162_int = 24582; // 0x19f PushI
	var_163_int = 24589; // 0x1a0 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x1a1 TObjFunc
	return 0; // 0x1a3 Return
	
Label_420:
	var_164_int = 24577; // 0x1a4 PushI
	var_165_bool = var_5_int == var_164_int; // 0x1a5 Eq
	if(var_165_bool == 0) goto Label_438; // 0x1a6 JumpB
	var_166_string = ""; // 0x1a7 PushV
	var_166_string = "Fear"; // 0x1a8 MovS
	func_205(var_6_int, var_166_string); // 0x1a9 NEW_2
	var_167_int = 523361; // 0x1ab PushI
	SetMessage(var_167_int); // 0x1ac TObjFunc
	ClearReplies(); // 0x1ae TObjFunc
	var_168_int = 523362; // 0x1b0 PushI
	var_169_int = 24579; // 0x1b1 PushI
	var_170_int = 24578; // 0x1b2 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x1b3 TObjFunc
	return 0; // 0x1b5 Return
	
Label_438:
	var_171_int = 24579; // 0x1b6 PushI
	var_172_bool = var_5_int == var_171_int; // 0x1b7 Eq
	if(var_172_bool == 0) goto Label_461; // 0x1b8 JumpB
	var_173_string = ""; // 0x1b9 PushV
	var_173_string = "Fear"; // 0x1ba MovS
	func_205(var_6_int, var_173_string); // 0x1bb NEW_2
	var_174_int = 523363; // 0x1bd PushI
	SetMessage(var_174_int); // 0x1be TObjFunc
	ClearReplies(); // 0x1c0 TObjFunc
	var_175_int = 523364; // 0x1c2 PushI
	var_176_int = 24573; // 0x1c3 PushI
	var_177_int = 24580; // 0x1c4 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x1c5 TObjFunc
	var_178_int = 523365; // 0x1c7 PushI
	var_179_int = 24582; // 0x1c8 PushI
	var_180_int = 24581; // 0x1c9 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x1ca TObjFunc
	return 0; // 0x1cc Return
	
Label_461:
	var_181_int = 24582; // 0x1cd PushI
	var_182_bool = var_5_int == var_181_int; // 0x1ce Eq
	if(var_182_bool == 0) goto Label_484; // 0x1cf JumpB
	var_183_string = ""; // 0x1d0 PushV
	var_183_string = "Fear"; // 0x1d1 MovS
	func_205(var_6_int, var_183_string); // 0x1d2 NEW_2
	var_184_int = 523366; // 0x1d4 PushI
	SetMessage(var_184_int); // 0x1d5 TObjFunc
	ClearReplies(); // 0x1d7 TObjFunc
	var_185_int = 523367; // 0x1d9 PushI
	var_186_int = 24573; // 0x1da PushI
	var_187_int = 24583; // 0x1db PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x1dc TObjFunc
	var_188_int = 523368; // 0x1de PushI
	var_189_int = 24573; // 0x1df PushI
	var_190_int = 24584; // 0x1e0 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x1e1 TObjFunc
	return 0; // 0x1e3 Return
	
Label_484:
	var_191_int = 24569; // 0x1e4 PushI
	var_192_bool = var_5_int == var_191_int; // 0x1e5 Eq
	if(var_192_bool == 0) goto Label_502; // 0x1e6 JumpB
	var_193_string = ""; // 0x1e7 PushV
	var_193_string = "Fear"; // 0x1e8 MovS
	func_205(var_6_int, var_193_string); // 0x1e9 NEW_2
	var_194_int = 523353; // 0x1eb PushI
	SetMessage(var_194_int); // 0x1ec TObjFunc
	ClearReplies(); // 0x1ee TObjFunc
	var_195_int = 523354; // 0x1f0 PushI
	var_196_int = 24571; // 0x1f1 PushI
	var_197_int = 24570; // 0x1f2 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1f3 TObjFunc
	return 0; // 0x1f5 Return
	
Label_502:
	var_198_int = 24571; // 0x1f6 PushI
	var_199_bool = var_5_int == var_198_int; // 0x1f7 Eq
	if(var_199_bool == 0) goto Label_520; // 0x1f8 JumpB
	var_200_string = ""; // 0x1f9 PushV
	var_200_string = "Fear"; // 0x1fa MovS
	func_205(var_6_int, var_200_string); // 0x1fb NEW_2
	var_201_int = 523355; // 0x1fd PushI
	SetMessage(var_201_int); // 0x1fe TObjFunc
	ClearReplies(); // 0x200 TObjFunc
	var_202_int = 523356; // 0x202 PushI
	var_203_int = 24573; // 0x203 PushI
	var_204_int = 24572; // 0x204 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x205 TObjFunc
	return 0; // 0x207 Return
	
Label_520:
	var_205_int = 24573; // 0x208 PushI
	var_206_bool = var_5_int == var_205_int; // 0x209 Eq
	if(var_206_bool == 0) goto Label_543; // 0x20a JumpB
	var_207_string = ""; // 0x20b PushV
	var_207_string = "Fear"; // 0x20c MovS
	func_205(var_6_int, var_207_string); // 0x20d NEW_2
	var_208_int = 523357; // 0x20f PushI
	SetMessage(var_208_int); // 0x210 TObjFunc
	ClearReplies(); // 0x212 TObjFunc
	var_209_int = 522026; // 0x214 PushI
	var_210_int = -1; // 0x215 PushI
	var_211_int = 23196; // 0x216 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x217 TObjFunc
	var_212_int = 523359; // 0x219 PushI
	var_213_int = -1; // 0x21a PushI
	var_214_int = 24575; // 0x21b PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x21c TObjFunc
	return 0; // 0x21e Return
	
Label_543:
	var_3_string = 1; // 0x21f TMovB
	var_215_bool = 0; // 0x220 PushV
	func_965(var_215_bool); // 0x221 NEW_2
	if(var_215_bool == 0) goto Label_551; // 0x223 JumpB
	lshStopAnimation(); // 0x224 Func
	goto Label_553; // 0x226 Jump
	
Label_553:
	return 0; // 0x229 Return
	
Label_551:
	StopAnimation(); // 0x227 Func
	
Label_555:
	return 0; // 0x22b Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	Hold(); // 0x245 Func
	return 0; // 0x247 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	StopGroup0(); // 0x248 Func
	return 0; // 0x24a Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_bool = 0; // 0x24b PushV
	IsOverrideActive(var_7_bool); // 0x24c Func
	var_8_bool = var_7_bool == 0; // 0x24e Not
	if(var_8_bool == 0) goto Label_602; // 0x24f JumpB
	EventDisable(0); // 0x250 EventDisable
	var_9_bool = 0; var_10_object = Obj(); // 0x251 PushV
	var_10_object = var_5_object; // 0x252 Mov
	func_613(var_10_object); // 0x253 NEW_2
	EventEnable(0); // 0x255 EventEnable
	var_23_object = Obj(); // 0x256 PushV
	var_23_object = var_5_object; // 0x257 Mov
	func_556(var_23_object); // 0x258 NEW_2
	
Label_602:
	return 2; // 0x25a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	var_5_bool = 0; // 0x234 PushV
	func_622(var_5_bool); // 0x235 NEW_2
	var_8_bool = var_5_bool == 0; // 0x237 Not
	if(var_8_bool == 0) goto Label_571; // 0x238 JumpB
	Hold(); // 0x239 Func
	
Label_571:
	var_9_string = ""; // 0x23b PushV
	var_9_string = "Neutral"; // 0x23c MovS
	func_850(var_9_string); // 0x23d NEW_2
	lshWaitForAnimEnd(); // 0x23f Func
	goto Label_571; // 0x241 Jump
}


func_1024(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0x401 PushV
	var_210_string = "oob11Julia1"; // 0x402 MovS
	func_919(var_209_int, var_210_string); // 0x403 NEW_2
	var_211_int = 0; // 0x405 PushI
	var_212_bool = var_209_int == var_211_int; // 0x406 Eq
	if(var_212_bool == 0) goto Label_1034; // 0x407 JumpB
	var_207_bool = 1; // 0x408 MovB
	return 0; // 0x409 Return
	
Label_1034:
	var_207_bool = 0; // 0x40a MovB
	return 0; // 0x40b Return
}


func_0(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x0 PushV
	var_0_object = var_25_object; // 0x1 TMov
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0; // 0x2 PushV
	var_36_object = var_25_object; // 0x3 Mov
	var_37_float = 70.0; // 0x4 MovF
	func_627(var_36_object, var_37_float); // 0x5 NEW_2
	var_81_bool = var_35_bool == 0; // 0x7 Not
	if(var_81_bool == 0) goto Label_11; // 0x8 JumpB
	var_24_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_31_object); // 0xb Func
	var_82_int = 0; // 0xd PushV
	func_959(var_82_int); // 0xe NEW_2
	SetNPCName(var_82_int); // 0x10 ObjFunc
	var_83_int = 0; // 0x12 PushV
	func_957(var_83_int); // 0x13 NEW_2
	SetNPCDescription(var_83_int); // 0x15 ObjFunc
	var_84_string = ""; // 0x17 PushV
	func_961(var_84_string); // 0x18 NEW_2
	SetPhoto(var_84_string); // 0x1a ObjFunc
	var_85_string = ""; // 0x1c PushV
	func_963(var_85_string); // 0x1d NEW_2
	SetPhoto2(var_85_string); // 0x1f ObjFunc
	var_86_int = 0; // 0x21 PushV
	func_1102(var_86_int); // 0x22 NEW_2
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
	func_903(var_97_object); // 0x31 NEW_2
	var_96_object = var_97_object; // 0x32 Mov
	func_712(var_95_bool, var_96_object); // 0x34 NEW_2
	var_190_object = Obj(); var_191_object = Obj(); // 0x36 PushV
	var_190_object = var_25_object; // 0x37 Mov
	var_191_object = var_31_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_192_object, var_193_object, var_194_string, var_195_bool, var_190_object, var_191_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_34_bool); // 0x3d ObjFunc
	
Label_63:
	var_281_bool = var_34_bool == 0; // 0x3f Not
	if(var_281_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_34_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_282_object = Obj(); // 0x46 PushV
	var_282_object = var_25_object; // 0x47 Mov
	func_695(); // 0x48 NEW_2
	StopDialog(var_31_object); // 0x4a Func
	GetReturnValue(var_33_int); // 0x4c ObjFunc
	var_24_int = var_33_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_770(var_106_bool)
{
	var_108_string = ""; var_109_int = 0; var_110_bool = 0; var_111_int = 0; var_112_string = ""; var_113_string = ""; var_114_int = 0; var_115_bool = 0; var_116_int = 0; var_117_string = ""; // 0x302 PushV
	var_113_string = "c"; // 0x303 MovS
	var_114_int = 0; // 0x304 MovI
	
Label_773:
	var_118_int = 1; // 0x305 PushI
	if(var_118_int == 0) goto Label_786; // 0x306 JumpB
	var_119_int = 1; // 0x307 PushI
	var_120_int = var_114_int + var_119_int; // 0x308 Add
	var_121_int = var_113_string + var_120_int; // 0x309 Add
	HasProperty(var_121_int, var_115_bool); // 0x30a ObjFunc
	var_122_bool = var_115_bool == 0; // 0x30c Not
	if(var_122_bool == 0) goto Label_783; // 0x30d JumpB
	goto Label_786; // 0x30e Jump
	
Label_786:
	var_123_bool = var_114_int == 0; // 0x312 Not
	if(var_123_bool == 0) goto Label_790; // 0x313 JumpB
	var_106_bool = 0; // 0x314 MovB
	return 10; // 0x315 Return
	
Label_790:
	var_116_int = 0; // 0x316 MovI
	var_124_int = 1; // 0x317 PushI
	var_125_bool = var_114_int > var_124_int; // 0x318 GT
	if(var_125_bool == 0) goto Label_796; // 0x319 JumpB
	irand(var_116_int, var_114_int); // 0x31a Func
	
Label_796:
	var_126_int = 1; // 0x31c PushI
	var_127_int = var_116_int + var_126_int; // 0x31d Add
	var_128_int = var_113_string + var_127_int; // 0x31e Add
	GetProperty(var_128_int, var_117_string); // 0x31f ObjFunc
	var_129_bool = 0; var_130_string = ""; // 0x321 PushV
	var_130_string = var_117_string; // 0x322 Mov
	func_881(var_129_bool, var_130_string); // 0x323 NEW_2
	var_106_bool = var_129_bool; // 0x324 Mov
	return 10; // 0x326 Return
	
Label_783:
	var_135_int = 1; // 0x30f PushI
	var_114_int = var_114_int + var_135_int; // 0x310 Add2
	goto Label_773; // 0x311 Jump
}


func_896()
{
	var_8_bool = 0; // 0x380 PushV
	func_965(var_8_bool); // 0x381 NEW_2
	if(var_8_bool == 0) goto Label_902; // 0x383 JumpB
	lshStopSpeech(); // 0x384 Func
	
Label_902:
	return 0; // 0x386 Return
}


func_903(var_97_object)
{
	var_98_object = Obj(); var_99_object = Obj(); // 0x387 PushV
	self(var_99_object); // 0x388 Func
	var_97_object = var_99_object; // 0x38a Mov
	return 2; // 0x38b Return
}


func_1036(var_272_bool)
{
	var_274_int = 0; var_275_string = ""; // 0x40d PushV
	var_275_string = "b11q01KillJulia"; // 0x40e MovS
	func_919(var_274_int, var_275_string); // 0x40f NEW_2
	var_276_int = 0; // 0x411 PushI
	var_277_bool = var_274_int != var_276_int; // 0x412 Neq
	if(var_277_bool == 0) goto Label_1046; // 0x413 JumpB
	var_272_bool = 1; // 0x414 MovB
	return 0; // 0x415 Return
	
Label_1046:
	var_272_bool = 0; // 0x416 MovB
	return 0; // 0x417 Return
}


func_909(var_62_cvector, var_63_cvector)
{
	var_65_float = 0; var_66_float = 0; // 0x38d PushV
	var_67_int = var_63_cvector | var_63_cvector; // 0x38e Or
	var_66_float = sqrt(var_67_int); // 0x38f Sqrt2
	var_68_float = 0.0; // 0x390 PushF
	var_69_bool = var_66_float < var_68_float; // 0x391 LT
	if(var_69_bool == 0) goto Label_917; // 0x392 JumpB
	var_62_cvector = CVector(0.0, 0.0, 0.0); // 0x393 MovV
	return 2; // 0x394 Return
	
Label_917:
	var_62_cvector = var_63_cvector / var_63_cvector; // 0x395 Div2
	return 2; // 0x396 Return
}


func_919(var_200_int, var_201_string)
{
	var_202_int = 0; var_203_int = 0; // 0x397 PushV
	GetVariable(var_201_string, var_203_int); // 0x398 Func
	var_200_int = var_203_int; // 0x39a Mov
	return 2; // 0x39b Return
}


func_1048()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x418 PushV
	var_41_int = 315; // 0x419 PushI
	var_42_int = 1; // 0x41a PushI
	var_43_int = 522057; // 0x41b PushI
	CreateDiaryEntry(var_40_object, var_41_int, var_42_int, var_43_int); // 0x41c Func
	var_44_bool = 0; var_45_object = Obj(); var_46_int = 0; // 0x41e PushV
	var_45_object = var_40_object; // 0x41f Mov
	var_46_int = 313; // 0x420 MovI
	func_1074(var_44_bool, var_45_object, var_46_int); // 0x421 NEW_2
	return 2; // 0x423 Return
}


func_924(var_29_bool, var_30_string, var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x39c PushV
	FindActor(var_33_object, var_30_string); // 0x39d Func
	var_34_bool = var_33_object == 0; // 0x39f NullEq
	if(var_34_bool == 0) goto Label_931; // 0x3a0 JumpB
	var_29_bool = 0; // 0x3a1 MovB
	return 2; // 0x3a2 Return
	
Label_931:
	Trigger(var_33_object, var_31_string); // 0x3a3 Func
	var_29_bool = 1; // 0x3a5 MovB
	return 2; // 0x3a6 Return
}


func_1061(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x425 PushV
	GetDiaryRoot(var_55_object); // 0x426 Func
	var_56_bool = var_55_object == 0; // 0x428 Not
	if(var_56_bool == 0) goto Label_1071; // 0x429 JumpB
	var_57_string = "Can't retrieve diary root"; // 0x42a PushS
	Trace(var_57_string); // 0x42b Func
	var_53_object = 0; // 0x42d MovB
	return 2; // 0x42e Return
	
Label_1071:
	var_53_object = var_55_object; // 0x42f Mov
	return 2; // 0x430 Return
}


func_807(var_137_bool)
{
	var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; // 0x327 PushV
	var_149_string = "d"; // 0x328 PushS
	var_150_int = 0; // 0x329 PushV
	func_948(var_150_int); // 0x32a NEW_2
	var_156_int = var_149_string + var_150_int; // 0x32c Add
	var_157_string = "m"; // 0x32d PushS
	var_144_string = var_156_int + var_157_string; // 0x32e Add2
	var_145_int = 0; // 0x32f MovI
	
Label_816:
	var_158_int = 1; // 0x330 PushI
	if(var_158_int == 0) goto Label_829; // 0x331 JumpB
	var_159_int = 1; // 0x332 PushI
	var_160_int = var_145_int + var_159_int; // 0x333 Add
	var_161_int = var_144_string + var_160_int; // 0x334 Add
	HasProperty(var_161_int, var_146_bool); // 0x335 ObjFunc
	var_162_bool = var_146_bool == 0; // 0x337 Not
	if(var_162_bool == 0) goto Label_826; // 0x338 JumpB
	goto Label_829; // 0x339 Jump
	
Label_829:
	var_163_bool = var_145_int == 0; // 0x33d Not
	if(var_163_bool == 0) goto Label_833; // 0x33e JumpB
	var_137_bool = 0; // 0x33f MovB
	return 10; // 0x340 Return
	
Label_833:
	var_147_int = 0; // 0x341 MovI
	var_164_int = 1; // 0x342 PushI
	var_165_bool = var_145_int > var_164_int; // 0x343 GT
	if(var_165_bool == 0) goto Label_839; // 0x344 JumpB
	irand(var_147_int, var_145_int); // 0x345 Func
	
Label_839:
	var_166_int = 1; // 0x347 PushI
	var_167_int = var_147_int + var_166_int; // 0x348 Add
	var_168_int = var_144_string + var_167_int; // 0x349 Add
	GetProperty(var_168_int, var_148_string); // 0x34a ObjFunc
	var_169_bool = 0; var_170_string = ""; // 0x34c PushV
	var_170_string = var_148_string; // 0x34d Mov
	func_881(var_169_bool, var_170_string); // 0x34e NEW_2
	var_137_bool = var_169_bool; // 0x34f Mov
	return 10; // 0x351 Return
	
Label_826:
	var_171_int = 1; // 0x33a PushI
	var_145_int = var_145_int + var_171_int; // 0x33b Add2
	goto Label_816; // 0x33c Jump
}


func_936(var_17_bool, var_18_string, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x3a8 PushV
	FindActor(var_22_object, var_18_string); // 0x3a9 Func
	var_23_bool = var_22_object == 0; // 0x3ab NullEq
	if(var_23_bool == 0) goto Label_943; // 0x3ac JumpB
	var_17_bool = 0; // 0x3ad MovB
	return 2; // 0x3ae Return
	
Label_943:
	Trigger(var_22_object, var_19_string, var_20_string); // 0x3af Func
	var_17_bool = 1; // 0x3b1 MovB
	return 2; // 0x3b2 Return
}


func_556(var_23_object)
{
	var_24_int = 0; var_25_object = Obj(); // 0x22d PushV
	var_25_object = var_23_object; // 0x22e Mov
	TaskCall(0); // 0x22f TaskCall
	func_0(var_26_object, var_24_int, var_25_object); // 0x230 NEW_2
	TaskReturn(); // 0x231 TaskReturn
	return 0; // 0x233 Return
}


func_1074(var_44_bool, var_45_object, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; // 0x432 PushV
	var_53_object = Obj(); // 0x433 PushV
	func_1061(var_53_object); // 0x434 NEW_2
	var_50_object = var_53_object; // 0x435 Mov
	Find(var_46_int, var_51_object); // 0x437 ObjFunc
	var_58_bool = var_51_object == 0; // 0x439 Not
	if(var_58_bool == 0) goto Label_1089; // 0x43a JumpB
	var_59_string = "Can't find diary parent with id: "; // 0x43b PushS
	var_60_int = var_59_string + var_46_int; // 0x43c Add
	Trace(var_60_int); // 0x43d Func
	var_44_bool = 0; // 0x43f MovB
	return 6; // 0x440 Return
	
Label_1089:
	AddChild(var_45_object); // 0x441 ObjFunc
	var_61_int = 7; // 0x443 PushI
	SendWorldWndMessage(var_61_int); // 0x444 Func
	GetCategory(var_52_int); // 0x446 ObjFunc
	SetDiarySection(var_52_int); // 0x448 Func
	var_44_bool = 0; // 0x44a MovB
	return 6; // 0x44b Return
}


func_948(var_150_int)
{
	var_151_float = 0; var_152_float = 0; // 0x3b4 PushV
	GetGameTime(var_152_float); // 0x3b5 Func
	var_153_int = 1; // 0x3b7 PushI
	var_154_int = 0; // 0x3b8 PushV
	var_155_int = 24; // 0x3b9 PushI
	var_154_int = var_152_float / var_152_float; // 0x3ba Div2
	var_150_int = var_153_int + var_154_int; // 0x3bb Add2
	return 2; // 0x3bc Return
}


func_695()
{
	var_283_bool = 0; var_284_bool = 0; // 0x2b7 PushV
	CameraSwitchToNormal(); // 0x2b8 Func
	var_285_bool = 0; // 0x2ba PushV
	func_965(var_285_bool); // 0x2bb NEW_2
	if(var_285_bool == 0) goto Label_703; // 0x2bd JumpB
	goto Label_711; // 0x2be Jump
	
Label_711:
	return 2; // 0x2c7 Return
	
Label_703:
	var_286_string = "head"; // 0x2bf PushS
	HasAnimationTrack(var_284_bool, var_286_string); // 0x2c0 Func
	var_287_bool = var_284_bool; // 0x2c2 Push
	if(var_287_bool == 0) goto Label_711; // 0x2c3 JumpB
	var_288_string = "head"; // 0x2c4 PushS
	UnlookAsync(var_288_string); // 0x2c5 Func
}


func_957(var_83_int)
{
	var_83_int = 515537; // 0x3bd MovI
	return 0; // 0x3be Return
}


func_959(var_82_int)
{
	var_82_int = 502862; // 0x3bf MovI
	return 0; // 0x3c0 Return
}


func_961(var_84_string)
{
	var_84_string = "ui/NPC_Julia.png"; // 0x3c1 MovS
	return 0; // 0x3c2 Return
}


func_963(var_85_string)
{
	var_85_string = "ui/NPC_Julia_b.png"; // 0x3c3 MovS
	return 0; // 0x3c4 Return
}


func_965(var_77_bool)
{
	var_77_bool = 1; // 0x3c5 MovB
	return 0; // 0x3c6 Return
}


func_967()
{
	var_37_string = "b11q01KnowWhoKilled"; // 0x3c8 PushS
	var_38_int = 1; // 0x3c9 PushI
	SetVariable(var_37_string, var_38_int); // 0x3ca Func
	func_1048(); // 0x3cd NEW_2
	return 0; // 0x3cf Return
}


func_712(var_95_bool, var_96_object)
{
	var_100_int = 0; var_101_int = 0; var_102_int = 0; var_103_int = 0; // 0x2c8 PushV
	var_104_string = "voice_common"; // 0x2c9 PushS
	GetVariable(var_104_string, var_102_int); // 0x2ca Func
	var_105_int = var_102_int; // 0x2cc Push
	if(var_105_int == 0) goto Label_750; // 0x2cd JumpB
	var_106_bool = 0; var_107_object = Obj(); // 0x2ce PushV
	var_107_object = var_96_object; // 0x2cf Mov
	func_770(var_107_object); // 0x2d0 NEW_2
	var_136_bool = var_106_bool == 0; // 0x2d2 Not
	if(var_136_bool == 0) goto Label_732; // 0x2d3 JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x2d4 PushV
	var_138_object = var_96_object; // 0x2d5 Mov
	func_807(var_138_object); // 0x2d6 NEW_2
	var_172_bool = var_137_bool == 0; // 0x2d8 Not
	if(var_172_bool == 0) goto Label_732; // 0x2d9 JumpB
	var_95_bool = 0; // 0x2da MovB
	return 4; // 0x2db Return
	
Label_732:
	var_173_int = 2; // 0x2dc PushI
	irand(var_103_int, var_173_int); // 0x2dd Func
	var_174_int = var_103_int; // 0x2df Push
	if(var_174_int == 0) goto Label_745; // 0x2e0 JumpB
	var_175_string = "voice_common"; // 0x2e1 PushS
	var_176_int = 1; // 0x2e2 PushI
	var_177_int = var_102_int + var_176_int; // 0x2e3 Add
	var_178_int = 3; // 0x2e4 PushI
	var_179_int = var_177_int / var_178_int; // 0x2e5 Mod
	SetVariable(var_175_string, var_179_int); // 0x2e6 Func
	goto Label_749; // 0x2e8 Jump
	
Label_749:
	goto Label_768; // 0x2ed Jump
	
Label_768:
	var_95_bool = 1; // 0x300 MovB
	return 4; // 0x301 Return
	
Label_745:
	var_180_string = "voice_common"; // 0x2e9 PushS
	var_181_int = 0; // 0x2ea PushI
	SetVariable(var_180_string, var_181_int); // 0x2eb Func
	
Label_750:
	var_182_bool = 0; var_183_object = Obj(); // 0x2ee PushV
	var_183_object = var_96_object; // 0x2ef Mov
	func_807(var_183_object); // 0x2f0 NEW_2
	var_184_bool = var_182_bool == 0; // 0x2f2 Not
	if(var_184_bool == 0) goto Label_764; // 0x2f3 JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x2f4 PushV
	var_186_object = var_96_object; // 0x2f5 Mov
	func_770(var_186_object); // 0x2f6 NEW_2
	var_187_bool = var_185_bool == 0; // 0x2f8 Not
	if(var_187_bool == 0) goto Label_764; // 0x2f9 JumpB
	var_95_bool = 0; // 0x2fa MovB
	return 4; // 0x2fb Return
	
Label_764:
	var_188_string = "voice_common"; // 0x2fc PushS
	var_189_int = 1; // 0x2fd PushI
	SetVariable(var_188_string, var_189_int); // 0x2fe Func
}


func_205(var_2_object, var_217_string)
{
	var_218_bool = 0; // 0xce PushV
	func_965(var_218_bool); // 0xcf NEW_2
	var_219_bool = var_218_bool == 0; // 0xd1 Not
	if(var_219_bool == 0) goto Label_212; // 0xd2 JumpB
	return 0; // 0xd3 Return
	
Label_212:
	var_220_bool = var_217_string == var_2_object; // 0xd4 Eq
	if(var_220_bool == 0) goto Label_215; // 0xd5 JumpB
	return 0; // 0xd6 Return
	
Label_215:
	var_221_string = ""; var_222_bool = 0; // 0xd7 PushV
	var_221_string = var_217_string; // 0xd8 Mov
	var_223_string = ""; // 0xd9 PushS
	var_224_bool = var_217_string == var_223_string; // 0xda Eq
	if(var_224_bool == 0) goto Label_222; // 0xdb JumpB
	var_222_bool = 0; // 0xdc MovB
	goto Label_223; // 0xdd Jump
	
Label_223:
	func_866(var_221_string, var_222_bool); // 0xdf NEW_2
	var_2_object = var_217_string; // 0xe1 TMov
	return 0; // 0xe2 Return
	
Label_222:
	var_222_bool = 1; // 0xde MovB
}


func_1102(var_86_int)
{
	var_87_int = 0; var_88_int = 0; // 0x44e PushV
	var_89_string = "branch"; // 0x44f PushS
	GetVariable(var_89_string, var_88_int); // 0x450 Func
	var_90_int = 0; // 0x452 PushI
	var_91_bool = var_88_int == var_90_int; // 0x453 Eq
	if(var_91_bool == 0) goto Label_1112; // 0x454 JumpB
	var_86_int = 1; // 0x455 MovI
	return 2; // 0x456 Return
	
Label_1112:
	var_92_int = 1; // 0x458 PushI
	var_93_bool = var_88_int == var_92_int; // 0x459 Eq
	if(var_93_bool == 0) goto Label_1117; // 0x45a JumpB
	var_86_int = 2; // 0x45b MovI
	return 2; // 0x45c Return
	
Label_1117:
	var_86_int = 3; // 0x45d MovI
	return 2; // 0x45e Return
}


func_976()
{
	var_13_string = "b11q01VictimChoosed"; // 0x3d1 PushS
	var_14_int = 1; // 0x3d2 PushI
	SetVariable(var_13_string, var_14_int); // 0x3d3 Func
	var_15_string = "b11q01KillJulia"; // 0x3d5 PushS
	var_16_int = 1; // 0x3d6 PushI
	SetVariable(var_15_string, var_16_int); // 0x3d7 Func
	var_17_bool = 0; var_18_string = ""; var_19_string = ""; var_20_string = ""; // 0x3d9 PushV
	var_18_string = "volonteers_burah"; // 0x3da MovS
	var_19_string = "disease"; // 0x3db MovS
	var_20_string = "julia"; // 0x3dc MovS
	func_936(var_17_bool, var_18_string, var_19_string, var_20_string); // 0x3dd NEW_2
	var_24_string = "Julia is diseased"; // 0x3df PushS
	Trace(var_24_string); // 0x3e0 Func
	return 0; // 0x3e2 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_190_object, var_191_object)
{
	var_0_object = var_191_object; // 0x52 TMov
	var_1_object = var_190_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_196_int = 1; // 0x55 PushI
	if(var_196_int == 0) goto Label_175; // 0x56 JumpB
	var_197_bool = 0; // 0x57 PushV
	var_197_bool = 0; // 0x58 MovB
	var_198_bool = 0; var_199_object = Obj(); // 0x59 PushV
	var_199_object = var_1_object; // 0x5a MovT
	func_1012(var_199_object); // 0x5b NEW_2
	var_206_bool = var_198_bool == 0; // 0x5d Not
	if(var_206_bool == 0) goto Label_101; // 0x5e JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0x5f PushV
	var_208_object = var_1_object; // 0x60 MovT
	func_1024(var_208_object); // 0x61 NEW_2
	if(var_207_bool == 0) goto Label_101; // 0x63 JumpB
	var_197_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_197_bool == 0) goto Label_122; // 0x65 JumpB
	var_213_object = Obj(); var_214_object = Obj(); // 0x66 PushV
	var_213_object = var_1_object; // 0x67 MovT
	var_214_object = var_0_object; // 0x68 MovT
	func_995(); // 0x69 NEW_2
	var_217_string = ""; // 0x6b PushV
	var_217_string = "Untrust"; // 0x6c MovS
	func_205(var_191_object, var_217_string); // 0x6d NEW_2
	var_234_int = 522023; // 0x6f PushI
	SetMessage(var_234_int); // 0x70 TObjFunc
	ClearReplies(); // 0x72 TObjFunc
	var_235_int = 523350; // 0x74 PushI
	var_236_int = 24567; // 0x75 PushI
	var_237_int = 24566; // 0x76 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x77 TObjFunc
	goto Label_175; // 0x79 Jump
	
Label_175:
	var_238_bool = 0; // 0xaf PushV
	func_965(var_238_bool); // 0xb0 NEW_2
	if(var_238_bool == 0) goto Label_190; // 0xb2 JumpB
	
Label_179:
	lshWaitForAnimEnd(); // 0xb3 Func
	var_239_string = var_3_string; // 0xb5 PushT
	if(var_239_string == 0) goto Label_184; // 0xb6 JumpB
	goto Label_189; // 0xb7 Jump
	
Label_189:
	goto Label_204; // 0xbd Jump
	
Label_204:
	return 0; // 0xcc Return
	
Label_184:
	var_240_string = ""; // 0xb8 PushV
	var_240_string = var_2_object; // 0xb9 MovT
	func_850(var_240_string); // 0xba NEW_2
	goto Label_179; // 0xbc Jump
	
Label_190:
	var_251_string = "all"; // 0xbe PushS
	var_252_string = "idle"; // 0xbf PushS
	PlayAnimation(var_251_string, var_252_string); // 0xc0 Func
	
Label_194:
	WaitForAnimEnd(); // 0xc2 Func
	var_253_string = var_3_string; // 0xc4 PushT
	if(var_253_string == 0) goto Label_199; // 0xc5 JumpB
	goto Label_204; // 0xc6 Jump
	
Label_199:
	var_254_string = "all"; // 0xc7 PushS
	var_255_string = "idle"; // 0xc8 PushS
	PlayAnimation(var_254_string, var_255_string); // 0xc9 Func
	goto Label_194; // 0xcb Jump
	
Label_122:
	var_256_bool = 0; var_257_object = Obj(); // 0x7a PushV
	var_257_object = var_1_object; // 0x7b MovT
	func_1012(var_257_object); // 0x7c NEW_2
	var_258_bool = var_256_bool == 0; // 0x7e Not
	if(var_258_bool == 0) goto Label_148; // 0x7f JumpB
	var_259_string = ""; // 0x80 PushV
	var_259_string = "Neutral"; // 0x81 MovS
	func_205(var_191_object, var_259_string); // 0x82 NEW_2
	var_260_int = 522028; // 0x84 PushI
	SetMessage(var_260_int); // 0x85 TObjFunc
	ClearReplies(); // 0x87 TObjFunc
	var_261_int = 522029; // 0x89 PushI
	var_262_int = -1; // 0x8a PushI
	var_263_int = 23199; // 0x8b PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x8c TObjFunc
	var_264_int = 522030; // 0x8e PushI
	var_265_int = -1; // 0x8f PushI
	var_266_int = 23200; // 0x90 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x91 TObjFunc
	goto Label_175; // 0x93 Jump
	
Label_148:
	var_267_string = ""; // 0x94 PushV
	var_267_string = "Neutral"; // 0x95 MovS
	func_205(var_191_object, var_267_string); // 0x96 NEW_2
	var_268_int = 522031; // 0x98 PushI
	SetMessage(var_268_int); // 0x99 TObjFunc
	ClearReplies(); // 0x9b TObjFunc
	var_269_int = 522032; // 0x9d PushI
	var_270_int = -1; // 0x9e PushI
	var_271_int = 23202; // 0x9f PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xa0 TObjFunc
	var_272_bool = 0; var_273_object = Obj(); // 0xa2 PushV
	var_273_object = var_1_object; // 0xa3 MovT
	func_1036(var_273_object); // 0xa4 NEW_2
	if(var_272_bool == 0) goto Label_172; // 0xa6 JumpB
	var_278_int = 523383; // 0xa7 PushI
	var_279_int = -1; // 0xa8 PushI
	var_280_int = 24601; // 0xa9 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0xaa TObjFunc
	
Label_172:
	goto Label_175; // 0xac Jump
}


func_850(var_9_string)
{
	var_10_bool = 0; var_11_float = 0; var_12_float = 0; var_13_bool = 0; var_14_float = 0; var_15_float = 0; // 0x352 PushV
	lshHasAnimation(var_13_bool, var_9_string); // 0x353 Func
	var_16_bool = var_13_bool; // 0x355 Push
	if(var_16_bool == 0) goto Label_861; // 0x356 JumpB
	lshGetAnimTimes(var_9_string, var_14_float, var_15_float); // 0x357 Func
	var_17_bool = 0; // 0x359 PushB
	lshPlayAnimation(var_14_float, var_15_float, var_17_bool); // 0x35a Func
	goto Label_865; // 0x35c Jump
	
Label_865:
	return 6; // 0x361 Return
	
Label_861:
	var_18_string = "Can't find lsh animation : "; // 0x35d PushS
	var_19_int = var_18_string + var_9_string; // 0x35e Add
	Trace(var_19_int); // 0x35f Func
}


func_603(var_13_bool, var_14_cvector)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; // 0x25b PushV
	GetPosition(var_18_cvector); // 0x25c Func
	var_19_cvector = var_14_cvector - var_18_cvector; // 0x25e Sub2
	var_21_float = GetByIndex(var_19_cvector, 0); // 0x25f PushE
	var_22_float = GetByIndex(var_19_cvector, 2); // 0x260 PushE
	Rotate(var_21_float, var_22_float, var_20_bool); // 0x261 Func
	var_13_bool = var_20_bool; // 0x263 Mov
	return 6; // 0x264 Return
}


func_866(var_221_string, var_222_bool)
{
	var_225_bool = 0; var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_float = 0; var_230_float = 0; // 0x362 PushV
	lshHasAnimation(var_228_bool, var_221_string); // 0x363 Func
	var_231_bool = var_228_bool; // 0x365 Push
	if(var_231_bool == 0) goto Label_876; // 0x366 JumpB
	lshGetAnimTimes(var_221_string, var_229_float, var_230_float); // 0x367 Func
	lshPlayAnimation(var_229_float, var_230_float, var_222_bool); // 0x369 Func
	goto Label_880; // 0x36b Jump
	
Label_880:
	return 6; // 0x370 Return
	
Label_876:
	var_232_string = "Can't find lsh animation : "; // 0x36c PushS
	var_233_int = var_232_string + var_221_string; // 0x36d Add
	Trace(var_233_int); // 0x36e Func
}


func_995()
{
	var_215_string = "oob11Julia1"; // 0x3e4 PushS
	var_216_int = 1; // 0x3e5 PushI
	SetVariable(var_215_string, var_216_int); // 0x3e6 Func
	return 0; // 0x3e8 Return
}


func_613(var_9_bool)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); // 0x265 PushV
	GetPosition(var_12_cvector); // 0x266 ObjFunc
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); // 0x268 PushV
	var_14_cvector = var_12_cvector; // 0x269 Mov
	func_603(var_13_bool, var_14_cvector); // 0x26a NEW_2
	var_9_bool = var_13_bool; // 0x26b Mov
	return 2; // 0x26d Return
}


func_1001()
{
	var_27_string = "b11q01"; // 0x3ea PushS
	var_28_int = 2; // 0x3eb PushI
	SetVariable(var_27_string, var_28_int); // 0x3ec Func
	var_29_bool = 0; var_30_string = ""; var_31_string = ""; // 0x3ee PushV
	var_30_string = "quest_b11_01"; // 0x3ef MovS
	var_31_string = "open_well_exit"; // 0x3f0 MovS
	func_924(var_29_bool, var_30_string, var_31_string); // 0x3f1 NEW_2
	return 0; // 0x3f3 Return
}


func_622(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0x26e PushV
	IsLoaded(var_7_bool); // 0x26f Func
	var_5_bool = var_7_bool; // 0x271 Mov
	return 2; // 0x272 Return
}


func_881(var_129_bool, var_130_string)
{
	var_131_bool = 0; var_132_bool = 0; // 0x371 PushV
	var_133_bool = 0; // 0x372 PushV
	func_965(var_133_bool); // 0x373 NEW_2
	if(var_133_bool == 0) goto Label_894; // 0x375 JumpB
	lshHasSpeech(var_132_bool, var_130_string); // 0x376 Func
	var_134_bool = var_132_bool; // 0x378 Push
	if(var_134_bool == 0) goto Label_894; // 0x379 JumpB
	lshPlaySpeech(var_130_string); // 0x37a Func
	var_129_bool = 1; // 0x37c MovB
	return 2; // 0x37d Return
	
Label_894:
	var_129_bool = 0; // 0x37e MovB
	return 2; // 0x37f Return
}


func_627(var_35_bool, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0; // 0x273 PushV
	GetPosition(var_48_cvector); // 0x274 ObjFunc
	GetEyesHeight(var_47_float); // 0x276 ObjFunc
	var_56_float = GetByIndex(var_48_cvector, 1); // 0x278 PushE
	var_56_float = var_56_float + var_47_float; // 0x279 Add2
	SetByIndex(var_48_cvector, 1) = var_56_float; // 0x27a PopE
	GetPosition(var_49_cvector); // 0x27b Func
	GetEyesHeight(var_47_float); // 0x27d Func
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x27f PushE
	var_57_float = var_57_float + var_47_float; // 0x280 Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x281 PopE
	var_50_cvector = var_48_cvector - var_49_cvector; // 0x282 Sub2
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x283 PushE
	var_58_float = 0; // 0x284 MovI
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x285 PopE
	var_59_int = var_50_cvector | var_50_cvector; // 0x286 Or
	var_60_float = sqrt(var_59_int); // 0x287 Sqrt
	var_50_cvector = var_50_cvector / var_50_cvector; // 0x288 Div2
	var_51_cvector = -var_50_cvector; // 0x289 Neg2
	var_61_float = var_50_cvector * var_37_float; // 0x28a Mult
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x28b PushV
	var_64_cvector = CVector(0.0, 1.0, 0.0); // 0x28c PushVec
	var_63_cvector = var_51_cvector ^ var_64_cvector; // 0x28d Xor2
	func_909(var_62_cvector, var_63_cvector); // 0x28e NEW_2
	var_70_int = 25; // 0x290 PushI
	var_71_float = var_62_cvector * var_70_int; // 0x291 Mult
	var_72_int = var_61_float + var_71_float; // 0x292 Add
	var_73_cvector = CVector(0.0, 10.0, 0.0); // 0x293 PushVec
	var_52_cvector = var_72_int - var_73_cvector; // 0x294 Sub2
	var_53_cvector = var_49_cvector + var_52_cvector; // 0x295 Add2
	IsOverrideActive(var_54_bool); // 0x296 Func
	var_74_bool = var_54_bool; // 0x298 Push
	if(var_74_bool == 0) goto Label_668; // 0x299 JumpB
	var_35_bool = 0; // 0x29a MovB
	return 18; // 0x29b Return
	
Label_668:
	StopWorld(); // 0x29c Func
	CameraTransit(var_53_cvector, var_51_cvector); // 0x29e Func
	var_75_float = GetByIndex(var_52_cvector, 0); // 0x2a0 PushE
	var_76_float = GetByIndex(var_52_cvector, 2); // 0x2a1 PushE
	Rotate(var_75_float, var_76_float); // 0x2a2 Func
	var_77_bool = 0; // 0x2a4 PushV
	func_965(var_77_bool); // 0x2a5 NEW_2
	if(var_77_bool == 0) goto Label_681; // 0x2a7 JumpB
	goto Label_689; // 0x2a8 Jump
	
Label_689:
	CameraWaitForPlayFinish(); // 0x2b1 Func
	ResumeWorld(); // 0x2b3 Func
	var_35_bool = 1; // 0x2b5 MovB
	return 18; // 0x2b6 Return
	
Label_681:
	var_78_string = "head"; // 0x2a9 PushS
	HasAnimationTrack(var_55_bool, var_78_string); // 0x2aa Func
	var_79_bool = var_55_bool; // 0x2ac Push
	if(var_79_bool == 0) goto Label_689; // 0x2ad JumpB
	var_80_string = "head"; // 0x2ae PushS
	LookAsyncCamera(var_80_string); // 0x2af Func
}


func_1012(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x3f5 PushV
	var_201_string = "b11q01VictimChoosed"; // 0x3f6 MovS
	func_919(var_200_int, var_201_string); // 0x3f7 NEW_2
	var_204_int = 0; // 0x3f9 PushI
	var_205_bool = var_200_int != var_204_int; // 0x3fa Neq
	if(var_205_bool == 0) goto Label_1022; // 0x3fb JumpB
	var_198_bool = 1; // 0x3fc MovB
	return 0; // 0x3fd Return
	
Label_1022:
	var_198_bool = 0; // 0x3fe MovB
	return 0; // 0x3ff Return
}


