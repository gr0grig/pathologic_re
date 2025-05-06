task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xb7 PushI
	if(var_9_int == 0) goto Label_460; // 0xb8 JumpB
	func_1072(); // 0xba NEW_2
	var_11_int = 36141; // 0xbc PushI
	var_12_bool = var_8_bool == var_11_int; // 0xbd Eq
	if(var_12_bool == 0) goto Label_196; // 0xbe JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xbf PushV
	var_13_object = var_1_object; // 0xc0 MovT
	var_14_object = var_0_object; // 0xc1 MovT
	func_1194(); // 0xc2 NEW_2
	
Label_196:
	var_47_int = 38456; // 0xc4 PushI
	var_48_bool = var_8_bool == var_47_int; // 0xc5 Eq
	if(var_48_bool == 0) goto Label_204; // 0xc6 JumpB
	var_49_object = Obj(); var_50_object = Obj(); // 0xc7 PushV
	var_49_object = var_1_object; // 0xc8 MovT
	var_50_object = var_0_object; // 0xc9 MovT
	func_1194(); // 0xca NEW_2
	
Label_204:
	var_51_int = 22161; // 0xcc PushI
	var_52_bool = var_8_bool == var_51_int; // 0xcd Eq
	if(var_52_bool == 0) goto Label_222; // 0xce JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0xcf PushV
	var_53_object = var_1_object; // 0xd0 MovT
	var_54_object = var_0_object; // 0xd1 MovT
	func_1209(); // 0xd2 NEW_2
	var_57_object = Obj(); var_58_object = Obj(); // 0xd4 PushV
	var_57_object = var_1_object; // 0xd5 MovT
	var_58_object = var_0_object; // 0xd6 MovT
	func_1176(); // 0xd7 NEW_2
	var_70_object = Obj(); var_71_object = Obj(); // 0xd9 PushV
	var_70_object = var_1_object; // 0xda MovT
	var_71_object = var_0_object; // 0xdb MovT
	func_1187(var_71_object); // 0xdc NEW_2
	
Label_222:
	var_90_int = 22158; // 0xde PushI
	var_91_bool = var_7_cvector == var_90_int; // 0xdf Eq
	if(var_91_bool == 0) goto Label_266; // 0xe0 JumpB
	var_92_string = ""; // 0xe1 PushV
	var_92_string = "Neutral"; // 0xe2 MovS
	func_160(var_8_bool, var_92_string); // 0xe3 NEW_2
	var_109_int = 520941; // 0xe5 PushI
	SetMessage(var_109_int); // 0xe6 TObjFunc
	ClearReplies(); // 0xe8 TObjFunc
	var_110_bool = 0; var_111_object = Obj(); // 0xea PushV
	var_111_object = var_1_object; // 0xeb MovT
	func_1215(var_111_object); // 0xec NEW_2
	if(var_110_bool == 0) goto Label_244; // 0xee JumpB
	var_118_int = 534490; // 0xef PushI
	var_119_int = 38444; // 0xf0 PushI
	var_120_int = 36135; // 0xf1 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0xf2 TObjFunc
	
Label_244:
	var_121_bool = 0; var_122_object = Obj(); // 0xf4 PushV
	var_122_object = var_1_object; // 0xf5 MovT
	func_1227(var_121_bool, var_122_object); // 0xf6 NEW_2
	var_133_bool = var_121_bool == 0; // 0xf8 Not
	if(var_133_bool == 0) goto Label_255; // 0xf9 JumpB
	var_134_int = 520942; // 0xfa PushI
	var_135_int = 22160; // 0xfb PushI
	var_136_int = 22159; // 0xfc PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0xfd TObjFunc
	
Label_255:
	var_137_int = 520946; // 0xff PushI
	var_138_int = -1; // 0x100 PushI
	var_139_int = 22163; // 0x101 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x102 TObjFunc
	var_140_int = 536616; // 0x104 PushI
	var_141_int = -1; // 0x105 PushI
	var_142_int = 38443; // 0x106 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_143_int = 22160; // 0x10a PushI
	var_144_bool = var_7_cvector == var_143_int; // 0x10b Eq
	if(var_144_bool == 0) goto Label_294; // 0x10c JumpB
	var_145_string = ""; // 0x10d PushV
	var_145_string = "Neutral"; // 0x10e MovS
	func_160(var_8_bool, var_145_string); // 0x10f NEW_2
	var_146_int = 520943; // 0x111 PushI
	SetMessage(var_146_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_147_bool = 0; var_148_object = Obj(); // 0x116 PushV
	var_148_object = var_1_object; // 0x117 MovT
	func_1237(var_147_bool, var_148_object); // 0x118 NEW_2
	if(var_147_bool == 0) goto Label_288; // 0x11a JumpB
	var_155_int = 520944; // 0x11b PushI
	var_156_int = -1; // 0x11c PushI
	var_157_int = 22161; // 0x11d PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x11e TObjFunc
	
Label_288:
	var_158_int = 520945; // 0x120 PushI
	var_159_int = -1; // 0x121 PushI
	var_160_int = 22162; // 0x122 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x123 TObjFunc
	return 0; // 0x125 Return
	
Label_294:
	var_161_int = 38444; // 0x126 PushI
	var_162_bool = var_7_cvector == var_161_int; // 0x127 Eq
	if(var_162_bool == 0) goto Label_312; // 0x128 JumpB
	var_163_string = ""; // 0x129 PushV
	var_163_string = "Neutral"; // 0x12a MovS
	func_160(var_8_bool, var_163_string); // 0x12b NEW_2
	var_164_int = 536617; // 0x12d PushI
	SetMessage(var_164_int); // 0x12e TObjFunc
	ClearReplies(); // 0x130 TObjFunc
	var_165_int = 536618; // 0x132 PushI
	var_166_int = 38446; // 0x133 PushI
	var_167_int = 38445; // 0x134 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x135 TObjFunc
	return 0; // 0x137 Return
	
Label_312:
	var_168_int = 38446; // 0x138 PushI
	var_169_bool = var_7_cvector == var_168_int; // 0x139 Eq
	if(var_169_bool == 0) goto Label_330; // 0x13a JumpB
	var_170_string = ""; // 0x13b PushV
	var_170_string = "Fear"; // 0x13c MovS
	func_160(var_8_bool, var_170_string); // 0x13d NEW_2
	var_171_int = 536619; // 0x13f PushI
	SetMessage(var_171_int); // 0x140 TObjFunc
	ClearReplies(); // 0x142 TObjFunc
	var_172_int = 536620; // 0x144 PushI
	var_173_int = 36136; // 0x145 PushI
	var_174_int = 38447; // 0x146 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x147 TObjFunc
	return 0; // 0x149 Return
	
Label_330:
	var_175_int = 36136; // 0x14a PushI
	var_176_bool = var_7_cvector == var_175_int; // 0x14b Eq
	if(var_176_bool == 0) goto Label_353; // 0x14c JumpB
	var_177_string = ""; // 0x14d PushV
	var_177_string = "Fear"; // 0x14e MovS
	func_160(var_8_bool, var_177_string); // 0x14f NEW_2
	var_178_int = 534491; // 0x151 PushI
	SetMessage(var_178_int); // 0x152 TObjFunc
	ClearReplies(); // 0x154 TObjFunc
	var_179_int = 534492; // 0x156 PushI
	var_180_int = 36138; // 0x157 PushI
	var_181_int = 36137; // 0x158 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x159 TObjFunc
	var_182_int = 536621; // 0x15b PushI
	var_183_int = 38449; // 0x15c PushI
	var_184_int = 38448; // 0x15d PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x15e TObjFunc
	return 0; // 0x160 Return
	
Label_353:
	var_185_int = 38449; // 0x161 PushI
	var_186_bool = var_7_cvector == var_185_int; // 0x162 Eq
	if(var_186_bool == 0) goto Label_371; // 0x163 JumpB
	var_187_string = ""; // 0x164 PushV
	var_187_string = "Fear"; // 0x165 MovS
	func_160(var_8_bool, var_187_string); // 0x166 NEW_2
	var_188_int = 536622; // 0x168 PushI
	SetMessage(var_188_int); // 0x169 TObjFunc
	ClearReplies(); // 0x16b TObjFunc
	var_189_int = 536625; // 0x16d PushI
	var_190_int = 36140; // 0x16e PushI
	var_191_int = 38452; // 0x16f PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x170 TObjFunc
	return 0; // 0x172 Return
	
Label_371:
	var_192_int = 36138; // 0x173 PushI
	var_193_bool = var_7_cvector == var_192_int; // 0x174 Eq
	if(var_193_bool == 0) goto Label_394; // 0x175 JumpB
	var_194_string = ""; // 0x176 PushV
	var_194_string = "Neutral"; // 0x177 MovS
	func_160(var_8_bool, var_194_string); // 0x178 NEW_2
	var_195_int = 534493; // 0x17a PushI
	SetMessage(var_195_int); // 0x17b TObjFunc
	ClearReplies(); // 0x17d TObjFunc
	var_196_int = 534494; // 0x17f PushI
	var_197_int = 36140; // 0x180 PushI
	var_198_int = 36139; // 0x181 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x182 TObjFunc
	var_199_int = 536623; // 0x184 PushI
	var_200_int = 38451; // 0x185 PushI
	var_201_int = 38450; // 0x186 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x187 TObjFunc
	return 0; // 0x189 Return
	
Label_394:
	var_202_int = 38451; // 0x18a PushI
	var_203_bool = var_7_cvector == var_202_int; // 0x18b Eq
	if(var_203_bool == 0) goto Label_412; // 0x18c JumpB
	var_204_string = ""; // 0x18d PushV
	var_204_string = "Sly"; // 0x18e MovS
	func_160(var_8_bool, var_204_string); // 0x18f NEW_2
	var_205_int = 536624; // 0x191 PushI
	SetMessage(var_205_int); // 0x192 TObjFunc
	ClearReplies(); // 0x194 TObjFunc
	var_206_int = 536626; // 0x196 PushI
	var_207_int = 38455; // 0x197 PushI
	var_208_int = 38454; // 0x198 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_209_int = 38455; // 0x19c PushI
	var_210_bool = var_7_cvector == var_209_int; // 0x19d Eq
	if(var_210_bool == 0) goto Label_430; // 0x19e JumpB
	var_211_string = ""; // 0x19f PushV
	var_211_string = "Untrust"; // 0x1a0 MovS
	func_160(var_8_bool, var_211_string); // 0x1a1 NEW_2
	var_212_int = 536627; // 0x1a3 PushI
	SetMessage(var_212_int); // 0x1a4 TObjFunc
	ClearReplies(); // 0x1a6 TObjFunc
	var_213_int = 536628; // 0x1a8 PushI
	var_214_int = -1; // 0x1a9 PushI
	var_215_int = 38456; // 0x1aa PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1ab TObjFunc
	return 0; // 0x1ad Return
	
Label_430:
	var_216_int = 36140; // 0x1ae PushI
	var_217_bool = var_7_cvector == var_216_int; // 0x1af Eq
	if(var_217_bool == 0) goto Label_448; // 0x1b0 JumpB
	var_218_string = ""; // 0x1b1 PushV
	var_218_string = "Untrust"; // 0x1b2 MovS
	func_160(var_8_bool, var_218_string); // 0x1b3 NEW_2
	var_219_int = 534495; // 0x1b5 PushI
	SetMessage(var_219_int); // 0x1b6 TObjFunc
	ClearReplies(); // 0x1b8 TObjFunc
	var_220_int = 534496; // 0x1ba PushI
	var_221_int = -1; // 0x1bb PushI
	var_222_int = 36141; // 0x1bc PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1bd TObjFunc
	return 0; // 0x1bf Return
	
Label_448:
	var_3_string = 1; // 0x1c0 TMovB
	var_223_bool = 0; // 0x1c1 PushV
	func_1345(var_223_bool); // 0x1c2 NEW_2
	if(var_223_bool == 0) goto Label_456; // 0x1c4 JumpB
	lshStopAnimation(); // 0x1c5 Func
	goto Label_458; // 0x1c7 Jump
	
Label_458:
	return 0; // 0x1ca Return
	
Label_456:
	StopAnimation(); // 0x1c8 Func
	
Label_460:
	return 0; // 0x1cc Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1d9 PushV
	var_10_string = "cleanup"; // 0x1da PushS
	var_11_bool = var_7_string == var_10_string; // 0x1db Eq
	if(var_11_bool == 0) goto Label_488; // 0x1dc JumpB
	var_1_object = 1; // 0x1dd TMovB
	IsLoaded(var_9_bool); // 0x1de Func
	var_12_bool = var_9_bool == 0; // 0x1e0 Not
	if(var_12_bool == 0) goto Label_487; // 0x1e1 JumpB
	var_13_object = Obj(); // 0x1e2 PushV
	func_1079(var_13_object); // 0x1e3 NEW_2
	RemoveActor(var_13_object); // 0x1e5 Func
	
Label_487:
	goto Label_492; // 0x1e7 Jump
	
Label_492:
	return 2; // 0x1ec Return
	
Label_488:
	var_16_string = "restore"; // 0x1e8 PushS
	var_17_bool = var_7_string == var_16_string; // 0x1e9 Eq
	if(var_17_bool == 0) goto Label_492; // 0x1ea JumpB
	var_1_object = 0; // 0x1eb TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x1ed PushT
	if(var_7_object == 0) goto Label_502; // 0x1ee JumpB
	var_8_object = Obj(); // 0x1ef PushV
	func_1079(var_8_object); // 0x1f0 NEW_2
	RemoveActor(var_8_object); // 0x1f2 Func
	Hold(); // 0x1f4 Func
	
Label_502:
	func_617(); // 0x1f7 NEW_2
	return 0; // 0x1f9 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_632(); // 0x1fb NEW_2
	return 0; // 0x1fd Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x244 PushI
	var_9_bool = var_7_int == var_8_int; // 0x245 Eq
	if(var_9_bool == 0) goto Label_616; // 0x246 JumpB
	func_575(); // 0x248 NEW_2
	var_11_bool = 0; // 0x24a PushV
	var_11_bool = 0; // 0x24b MovB
	var_12_bool = 0; // 0x24c PushV
	func_796(var_12_bool); // 0x24d NEW_2
	if(var_12_bool == 0) goto Label_597; // 0x24f JumpB
	var_15_bool = 0; // 0x250 PushV
	func_544(var_15_bool); // 0x251 NEW_2
	if(var_15_bool == 0) goto Label_597; // 0x253 JumpB
	var_11_bool = 1; // 0x254 MovB
	
Label_597:
	if(var_11_bool == 0) goto Label_610; // 0x255 JumpB
	var_32_bool = 0; // 0x256 PushV
	func_524(var_32_bool); // 0x257 NEW_2
	if(var_32_bool == 0) goto Label_609; // 0x259 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x25a PushV
	var_53_object = Obj(); // 0x25b PushV
	func_1079(var_53_object); // 0x25c NEW_2
	var_52_object = var_53_object; // 0x25d Mov
	func_946(var_52_object); // 0x25f NEW_2
	
Label_609:
	goto Label_616; // 0x261 Jump
	
Label_616:
	return 0; // 0x268 Return
	
Label_610:
	func_539(var_7_int); // 0x263 NEW_2
	func_566(); // 0x266 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x286 Push
	if(var_8_bool == 0) goto Label_652; // 0x287 JumpB
	func_566(); // 0x289 NEW_2
	goto Label_656; // 0x28b Jump
	
Label_656:
	return 0; // 0x290 Return
	
Label_652:
	var_14_string = ""; // 0x28c PushV
	var_14_string = "Neutral"; // 0x28d MovS
	func_1026(var_14_string); // 0x28e NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x291 PushV
	IsOverrideActive(var_9_bool); // 0x292 Func
	var_10_bool = var_9_bool == 0; // 0x294 Not
	if(var_10_bool == 0) goto Label_685; // 0x295 JumpB
	EventDisable(0); // 0x296 EventDisable
	func_757(); // 0x298 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x29a PushV
	var_12_object = var_7_object; // 0x29b Mov
	func_787(var_12_object); // 0x29c NEW_2
	EventEnable(0); // 0x29e EventEnable
	var_25_object = Obj(); // 0x29f PushV
	var_25_object = var_7_object; // 0x2a0 Mov
	func_461(var_25_object); // 0x2a1 NEW_2
	var_278_string = ""; // 0x2a3 PushV
	var_278_string = "Neutral"; // 0x2a4 MovS
	func_1026(var_278_string); // 0x2a5 NEW_2
	func_575(); // 0x2a8 NEW_2
	func_566(); // 0x2ab NEW_2
	
Label_685:
	return 2; // 0x2ad Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_510(var_6_bool); // 0x1d6 NEW_2
	return 0; // 0x1d8 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_801(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1339(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1337(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1341(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1343(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1320(var_89_int); // 0x22 NEW_2
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
	func_1079(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_888(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_269_bool = var_36_bool == 0; // 0x3f Not
	if(var_269_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_270_object = Obj(); // 0x46 PushV
	var_270_object = var_27_object; // 0x47 Mov
	func_870(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1152(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x480 PushV
	var_34_string = "idle"; // 0x481 MovS
	var_35_int = var_32_int; // 0x482 Push
	if(var_35_int == 0) goto Label_1157; // 0x483 JumpB
	var_34_string = var_34_string + var_32_int; // 0x484 Add2
	
Label_1157:
	var_31_string = var_34_string; // 0x485 Mov
	return 2; // 0x486 Return
}


func_1026(var_253_string)
{
	var_254_bool = 0; var_255_float = 0; var_256_float = 0; var_257_bool = 0; var_258_float = 0; var_259_float = 0; // 0x402 PushV
	lshHasAnimation(var_257_bool, var_253_string); // 0x403 Func
	var_260_bool = var_257_bool; // 0x405 Push
	if(var_260_bool == 0) goto Label_1037; // 0x406 JumpB
	lshGetAnimTimes(var_253_string, var_258_float, var_259_float); // 0x407 Func
	var_261_bool = 0; // 0x409 PushB
	lshPlayAnimation(var_258_float, var_259_float, var_261_bool); // 0x40a Func
	goto Label_1041; // 0x40c Jump
	
Label_1041:
	return 6; // 0x411 Return
	
Label_1037:
	var_262_string = "Can't find lsh animation : "; // 0x40d PushS
	var_263_int = var_262_string + var_253_string; // 0x40e Add
	Trace(var_263_int); // 0x40f Func
}


func_770(var_77_string, var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x302 PushV
	GetProperty(var_77_string, var_80_int); // 0x303 ObjFunc
	var_81_int = var_80_int + var_78_int; // 0x305 Add
	SetProperty(var_77_string, var_81_int); // 0x306 ObjFunc
	return 2; // 0x308 Return
}


func_1159(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x487 PushV
	var_28_int = 0; // 0x488 MovI
	
Label_1161:
	var_30_string = "all"; // 0x489 PushS
	var_31_string = ""; var_32_int = 0; // 0x48a PushV
	var_32_int = var_28_int; // 0x48b Mov
	func_1152(var_31_string, var_32_int); // 0x48c NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x48e Func
	var_36_bool = var_29_bool == 0; // 0x490 Not
	if(var_36_bool == 0) goto Label_1171; // 0x491 JumpB
	goto Label_1174; // 0x492 Jump
	
Label_1174:
	var_25_int = var_28_int; // 0x496 Mov
	return 4; // 0x497 Return
	
Label_1171:
	var_37_int = 1; // 0x493 PushI
	var_28_int = var_28_int + var_37_int; // 0x494 Add2
	goto Label_1161; // 0x495 Jump
}


func_777(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x309 PushV
	GetPosition(var_20_cvector); // 0x30a Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x30c Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x30d PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x30e PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x30f Func
	var_15_bool = var_22_bool; // 0x311 Mov
	return 6; // 0x312 Return
}


func_524(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x20c PushV
	var_35_string = "player"; // 0x20d PushS
	FindActor(var_34_object, var_35_string); // 0x20e Func
	var_36_bool = var_34_object == 0; // 0x210 Not
	if(var_36_bool == 0) goto Label_532; // 0x211 JumpB
	var_32_bool = 0; // 0x212 MovB
	return 2; // 0x213 Return
	
Label_532:
	var_37_bool = 0; var_38_object = Obj(); // 0x214 PushV
	var_38_object = var_34_object; // 0x215 Mov
	func_787(var_38_object); // 0x216 NEW_2
	var_32_bool = var_37_bool; // 0x217 Mov
	return 2; // 0x219 Return
}


func_1292(var_20_bool, var_21_object, var_22_int)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; // 0x50c PushV
	var_29_object = Obj(); // 0x50d PushV
	func_1279(var_29_object); // 0x50e NEW_2
	var_26_object = var_29_object; // 0x50f Mov
	Find(var_22_int, var_27_object); // 0x511 ObjFunc
	var_34_bool = var_27_object == 0; // 0x513 Not
	if(var_34_bool == 0) goto Label_1307; // 0x514 JumpB
	var_35_string = "Can't find diary parent with id: "; // 0x515 PushS
	var_36_int = var_35_string + var_22_int; // 0x516 Add
	Trace(var_36_int); // 0x517 Func
	var_20_bool = 0; // 0x519 MovB
	return 6; // 0x51a Return
	
Label_1307:
	AddChild(var_21_object); // 0x51b ObjFunc
	var_37_int = 7; // 0x51d PushI
	SendWorldWndMessage(var_37_int); // 0x51e Func
	GetCategory(var_28_int); // 0x520 ObjFunc
	SetDiarySection(var_28_int); // 0x522 Func
	var_20_bool = 0; // 0x524 MovB
	return 6; // 0x525 Return
}


func_1042(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0; // 0x412 PushV
	lshHasAnimation(var_211_bool, var_204_string); // 0x413 Func
	var_214_bool = var_211_bool; // 0x415 Push
	if(var_214_bool == 0) goto Label_1052; // 0x416 JumpB
	lshGetAnimTimes(var_204_string, var_212_float, var_213_float); // 0x417 Func
	lshPlayAnimation(var_212_float, var_213_float, var_205_bool); // 0x419 Func
	goto Label_1056; // 0x41b Jump
	
Label_1056:
	return 6; // 0x420 Return
	
Label_1052:
	var_215_string = "Can't find lsh animation : "; // 0x41c PushS
	var_216_int = var_215_string + var_204_string; // 0x41d Add
	Trace(var_216_int); // 0x41e Func
}


func_787(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x313 PushV
	GetPosition(var_14_cvector); // 0x314 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x316 PushV
	var_16_cvector = var_14_cvector; // 0x317 Mov
	func_777(var_15_bool, var_16_cvector); // 0x318 NEW_2
	var_11_bool = var_15_bool; // 0x319 Mov
	return 2; // 0x31b Return
}


func_1176()
{
	var_59_int = 0; var_60_int = 0; // 0x498 PushV
	var_61_int = 0; // 0x499 PushV
	func_1143(var_61_int); // 0x49a NEW_2
	var_60_int = var_61_int; // 0x49b Mov
	var_67_string = "RMap"; // 0x49d PushS
	var_68_int = var_67_string + var_60_int; // 0x49e Add
	var_69_int = 1; // 0x49f PushI
	SetVariable(var_68_int, var_69_int); // 0x4a0 Func
	return 2; // 0x4a2 Return
}


func_539(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x21b PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x21c PushE
	RotateAsync(var_84_float, var_85_float); // 0x21d Func
	return 0; // 0x21f Return
}


func_796(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x31c PushV
	IsLoaded(var_9_bool); // 0x31d Func
	var_7_bool = var_9_bool; // 0x31f Mov
	return 2; // 0x320 Return
}


func_160(var_2_object, var_200_string)
{
	var_201_bool = 0; // 0xa1 PushV
	func_1345(var_201_bool); // 0xa2 NEW_2
	var_202_bool = var_201_bool == 0; // 0xa4 Not
	if(var_202_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_203_bool = var_200_string == var_2_object; // 0xa7 Eq
	if(var_203_bool == 0) goto Label_170; // 0xa8 JumpB
	return 0; // 0xa9 Return
	
Label_170:
	var_204_string = ""; var_205_bool = 0; // 0xaa PushV
	var_204_string = var_200_string; // 0xab Mov
	var_206_string = ""; // 0xac PushS
	var_207_bool = var_200_string == var_206_string; // 0xad Eq
	if(var_207_bool == 0) goto Label_177; // 0xae JumpB
	var_205_bool = 0; // 0xaf MovB
	goto Label_178; // 0xb0 Jump
	
Label_178:
	func_1042(var_204_string, var_205_bool); // 0xb2 NEW_2
	var_2_object = var_200_string; // 0xb4 TMov
	return 0; // 0xb5 Return
	
Label_177:
	var_205_bool = 1; // 0xb1 MovB
}


func_801(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x321 PushV
	GetPosition(var_50_cvector); // 0x322 ObjFunc
	GetEyesHeight(var_49_float); // 0x324 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x326 PushE
	var_58_float = var_58_float + var_49_float; // 0x327 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x328 PopE
	GetPosition(var_51_cvector); // 0x329 Func
	GetEyesHeight(var_49_float); // 0x32b Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x32d PushE
	var_59_float = var_59_float + var_49_float; // 0x32e Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x32f PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x330 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x331 PushE
	var_60_float = 0; // 0x332 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x333 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x334 Or
	var_62_float = sqrt(var_61_int); // 0x335 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x336 Div2
	var_53_cvector = -var_52_cvector; // 0x337 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x338 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x339 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x33a PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x33b Xor2
	func_1085(var_64_cvector, var_65_cvector); // 0x33c NEW_2
	var_72_int = 25; // 0x33e PushI
	var_73_float = var_64_cvector * var_72_int; // 0x33f Mult
	var_74_int = var_63_float + var_73_float; // 0x340 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x341 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x342 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x343 Add2
	IsOverrideActive(var_56_bool); // 0x344 Func
	var_76_bool = var_56_bool; // 0x346 Push
	if(var_76_bool == 0) goto Label_842; // 0x347 JumpB
	var_37_bool = 0; // 0x348 MovB
	return 18; // 0x349 Return
	
Label_842:
	StopWorld(); // 0x34a Func
	var_77_bool = 1; // 0x34c PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x34d Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x34f PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x350 PushE
	Rotate(var_78_float, var_79_float); // 0x351 Func
	var_80_bool = 0; // 0x353 PushV
	func_1345(var_80_bool); // 0x354 NEW_2
	if(var_80_bool == 0) goto Label_856; // 0x356 JumpB
	goto Label_864; // 0x357 Jump
	
Label_864:
	CameraWaitForPlayFinish(); // 0x360 Func
	ResumeWorld(); // 0x362 Func
	var_37_bool = 1; // 0x364 MovB
	return 18; // 0x365 Return
	
Label_856:
	var_81_string = "head"; // 0x358 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x359 Func
	var_82_bool = var_57_bool; // 0x35b Push
	if(var_82_bool == 0) goto Label_864; // 0x35c JumpB
	var_83_string = "head"; // 0x35d PushS
	LookAsyncCamera(var_83_string); // 0x35e Func
}


func_544(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x220 PushV
	var_20_string = "player"; // 0x221 PushS
	FindActor(var_18_object, var_20_string); // 0x222 Func
	var_21_bool = var_18_object == 0; // 0x224 Not
	if(var_21_bool == 0) goto Label_552; // 0x225 JumpB
	var_15_bool = 0; // 0x226 MovB
	return 4; // 0x227 Return
	
Label_552:
	var_22_float = 0; var_23_object = Obj(); // 0x228 PushV
	var_23_object = var_18_object; // 0x229 Mov
	func_762(var_23_object); // 0x22a NEW_2
	var_30_float = 90000.0; // 0x22c PushF
	var_31_bool = var_22_float > var_30_float; // 0x22d GT
	if(var_31_bool == 0) goto Label_561; // 0x22e JumpB
	var_15_bool = 0; // 0x22f MovB
	return 4; // 0x230 Return
	
Label_561:
	CanSee(var_19_bool, var_18_object); // 0x231 Func
	var_15_bool = var_19_bool; // 0x233 Mov
	return 4; // 0x234 Return
}


func_1187(var_70_object)
{
	var_72_object = Obj(); var_73_int = 0; // 0x4a4 PushV
	var_72_object = var_70_object; // 0x4a5 Mov
	var_73_int = -1000; // 0x4a6 MovI
	func_1112(var_72_object, var_73_int); // 0x4a7 NEW_2
	return 0; // 0x4a9 Return
}


func_1057(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x421 PushV
	var_136_bool = 0; // 0x422 PushV
	func_1345(var_136_bool); // 0x423 NEW_2
	if(var_136_bool == 0) goto Label_1070; // 0x425 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x426 Func
	var_137_bool = var_135_bool; // 0x428 Push
	if(var_137_bool == 0) goto Label_1070; // 0x429 JumpB
	lshPlaySpeech(var_133_string); // 0x42a Func
	var_132_bool = 1; // 0x42c MovB
	return 2; // 0x42d Return
	
Label_1070:
	var_132_bool = 0; // 0x42e MovB
	return 2; // 0x42f Return
}


func_1320(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x528 PushV
	var_92_string = "branch"; // 0x529 PushS
	GetVariable(var_92_string, var_91_int); // 0x52a Func
	var_93_int = 0; // 0x52c PushI
	var_94_bool = var_91_int == var_93_int; // 0x52d Eq
	if(var_94_bool == 0) goto Label_1330; // 0x52e JumpB
	var_89_int = 1; // 0x52f MovI
	return 2; // 0x530 Return
	
Label_1330:
	var_95_int = 1; // 0x532 PushI
	var_96_bool = var_91_int == var_95_int; // 0x533 Eq
	if(var_96_bool == 0) goto Label_1335; // 0x534 JumpB
	var_89_int = 2; // 0x535 MovI
	return 2; // 0x536 Return
	
Label_1335:
	var_89_int = 3; // 0x537 MovI
	return 2; // 0x538 Return
}


func_1194()
{
	func_1266(); // 0x4ac NEW_2
	var_38_bool = 0; var_39_string = ""; var_40_string = ""; // 0x4ae PushV
	var_39_string = "quest_d11_05"; // 0x4af MovS
	var_40_string = "place_enemy_after"; // 0x4b0 MovS
	func_1131(var_38_bool, var_39_string, var_40_string); // 0x4b1 NEW_2
	var_44_bool = 0; var_45_string = ""; var_46_string = ""; // 0x4b3 PushV
	var_45_string = "quest_d11_05"; // 0x4b4 MovS
	var_46_string = "completed"; // 0x4b5 MovS
	func_1131(var_44_bool, var_45_string, var_46_string); // 0x4b6 NEW_2
	return 0; // 0x4b8 Return
}


func_686()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2ae PushV
	WaitForAnimEnd(); // 0x2af Func
	var_23_bool = 0; // 0x2b1 PushV
	func_796(var_23_bool); // 0x2b2 NEW_2
	var_24_bool = var_23_bool == 0; // 0x2b4 Not
	if(var_24_bool == 0) goto Label_695; // 0x2b5 JumpB
	return 12; // 0x2b6 Return
	
Label_695:
	var_25_int = 0; // 0x2b7 PushV
	func_1159(var_25_int); // 0x2b8 NEW_2
	var_17_int = var_25_int; // 0x2b9 Mov
	var_18_int = 0; // 0x2bb MovI
	
Label_700:
	var_38_bool = 0; // 0x2bc PushV
	var_38_bool = 0; // 0x2bd MovB
	var_39_int = 5; // 0x2be PushI
	var_40_bool = var_18_int < var_39_int; // 0x2bf LT
	if(var_40_bool == 0) goto Label_710; // 0x2c0 JumpB
	var_41_bool = 0; // 0x2c1 PushV
	func_796(var_41_bool); // 0x2c2 NEW_2
	if(var_41_bool == 0) goto Label_710; // 0x2c4 JumpB
	var_38_bool = 1; // 0x2c5 MovB
	
Label_710:
	if(var_38_bool == 0) goto Label_752; // 0x2c6 JumpB
	var_42_bool = var_17_int == 0; // 0x2c7 Not
	if(var_42_bool == 0) goto Label_720; // 0x2c8 JumpB
	var_43_int = 3; // 0x2c9 PushI
	Sleep(var_43_int, var_19_bool); // 0x2ca Func
	var_44_bool = var_19_bool == 0; // 0x2cc Not
	if(var_44_bool == 0) goto Label_719; // 0x2cd JumpB
	goto Label_752; // 0x2ce Jump
	
Label_752:
	ResetAAS(); // 0x2f0 Func
	return 12; // 0x2f2 Return
	
Label_719:
	goto Label_741; // 0x2cf Jump
	
Label_741:
	var_45_bool = 0; // 0x2e5 PushV
	func_755(var_45_bool); // 0x2e6 NEW_2
	var_46_bool = var_45_bool == 0; // 0x2e8 Not
	if(var_46_bool == 0) goto Label_747; // 0x2e9 JumpB
	goto Label_752; // 0x2ea Jump
	
Label_747:
	ResetAAS(); // 0x2eb Func
	var_47_int = 1; // 0x2ed PushI
	var_18_int = var_18_int + var_47_int; // 0x2ee Add2
	goto Label_700; // 0x2ef Jump
	
Label_720:
	irand(var_20_int, var_17_int); // 0x2d0 Func
	var_48_int = 5; // 0x2d2 PushI
	irand(var_21_int, var_48_int); // 0x2d3 Func
	var_49_int = 0; // 0x2d5 PushI
	var_50_bool = var_21_int != var_49_int; // 0x2d6 Neq
	if(var_50_bool == 0) goto Label_729; // 0x2d7 JumpB
	var_20_int = 0; // 0x2d8 MovI
	
Label_729:
	var_51_string = "all"; // 0x2d9 PushS
	var_52_string = ""; var_53_int = 0; // 0x2da PushV
	var_53_int = var_20_int; // 0x2db Mov
	func_1152(var_52_string, var_53_int); // 0x2dc NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2de Func
	WaitForAnimEnd(var_22_bool); // 0x2e0 Func
	var_54_bool = var_22_bool == 0; // 0x2e2 Not
	if(var_54_bool == 0) goto Label_741; // 0x2e3 JumpB
	goto Label_752; // 0x2e4 Jump
}


func_1072()
{
	var_10_bool = 0; // 0x430 PushV
	func_1345(var_10_bool); // 0x431 NEW_2
	if(var_10_bool == 0) goto Label_1078; // 0x433 JumpB
	lshStopSpeech(); // 0x434 Func
	
Label_1078:
	return 0; // 0x436 Return
}


func_946(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x3b2 PushV
	var_116_string = "c"; // 0x3b3 MovS
	var_117_int = 0; // 0x3b4 MovI
	
Label_949:
	var_121_int = 1; // 0x3b5 PushI
	if(var_121_int == 0) goto Label_962; // 0x3b6 JumpB
	var_122_int = 1; // 0x3b7 PushI
	var_123_int = var_117_int + var_122_int; // 0x3b8 Add
	var_124_int = var_116_string + var_123_int; // 0x3b9 Add
	HasProperty(var_124_int, var_118_bool); // 0x3ba ObjFunc
	var_125_bool = var_118_bool == 0; // 0x3bc Not
	if(var_125_bool == 0) goto Label_959; // 0x3bd JumpB
	goto Label_962; // 0x3be Jump
	
Label_962:
	var_126_bool = var_117_int == 0; // 0x3c2 Not
	if(var_126_bool == 0) goto Label_966; // 0x3c3 JumpB
	var_109_bool = 0; // 0x3c4 MovB
	return 10; // 0x3c5 Return
	
Label_966:
	var_119_int = 0; // 0x3c6 MovI
	var_127_int = 1; // 0x3c7 PushI
	var_128_bool = var_117_int > var_127_int; // 0x3c8 GT
	if(var_128_bool == 0) goto Label_972; // 0x3c9 JumpB
	irand(var_119_int, var_117_int); // 0x3ca Func
	
Label_972:
	var_129_int = 1; // 0x3cc PushI
	var_130_int = var_119_int + var_129_int; // 0x3cd Add
	var_131_int = var_116_string + var_130_int; // 0x3ce Add
	GetProperty(var_131_int, var_120_string); // 0x3cf ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x3d1 PushV
	var_133_string = var_120_string; // 0x3d2 Mov
	func_1057(var_132_bool, var_133_string); // 0x3d3 NEW_2
	var_109_bool = var_132_bool; // 0x3d4 Mov
	return 10; // 0x3d6 Return
	
Label_959:
	var_138_int = 1; // 0x3bf PushI
	var_117_int = var_117_int + var_138_int; // 0x3c0 Add2
	goto Label_949; // 0x3c1 Jump
}


func_566()
{
	var_280_float = 0; var_281_float = 0; // 0x236 PushV
	var_282_int = 8; // 0x237 PushI
	var_283_int = 16; // 0x238 PushI
	rand(var_281_float, var_282_int, var_283_int); // 0x239 Func
	var_284_int = 10; // 0x23b PushI
	SetTimer(var_284_int, var_281_float); // 0x23c Func
	return 2; // 0x23e Return
}


func_1079(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x437 PushV
	self(var_102_object); // 0x438 Func
	var_100_object = var_102_object; // 0x43a Mov
	return 2; // 0x43b Return
}


func_1209()
{
	var_55_string = "playsound"; // 0x4ba PushS
	var_56_string = "mapmark"; // 0x4bb PushS
	TriggerWorld(var_55_string, var_56_string); // 0x4bc Func
	return 0; // 0x4be Return
}


func_1337(var_86_int)
{
	var_86_int = 515547; // 0x539 MovI
	return 0; // 0x53a Return
}


func_1339(var_85_int)
{
	var_85_int = 502872; // 0x53b MovI
	return 0; // 0x53c Return
}


func_1341(var_87_string)
{
	var_87_string = "ui/NPC_MladVlad.png"; // 0x53d MovS
	return 0; // 0x53e Return
}


func_1085(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x43d PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x43e Or
	var_68_float = sqrt(var_69_int); // 0x43f Sqrt2
	var_70_float = 0.0; // 0x440 PushF
	var_71_bool = var_68_float < var_70_float; // 0x441 LT
	if(var_71_bool == 0) goto Label_1093; // 0x442 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x443 MovV
	return 2; // 0x444 Return
	
Label_1093:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x445 Div2
	return 2; // 0x446 Return
}


func_1215(var_218_bool)
{
	var_220_int = 0; var_221_string = ""; // 0x4c0 PushV
	var_221_string = "d11q05"; // 0x4c1 MovS
	func_1095(var_220_int, var_221_string); // 0x4c2 NEW_2
	var_224_int = 2; // 0x4c4 PushI
	var_225_bool = var_220_int == var_224_int; // 0x4c5 Eq
	if(var_225_bool == 0) goto Label_1225; // 0x4c6 JumpB
	var_218_bool = 1; // 0x4c7 MovB
	return 0; // 0x4c8 Return
	
Label_1225:
	var_218_bool = 0; // 0x4c9 MovB
	return 0; // 0x4ca Return
}


func_1343(var_88_string)
{
	var_88_string = "ui/NPC_MladVlad_b.png"; // 0x53f MovS
	return 0; // 0x540 Return
}


func_1345(var_80_bool)
{
	var_80_bool = 1; // 0x541 MovB
	return 0; // 0x542 Return
}


func_575()
{
	var_279_int = 10; // 0x23f PushI
	KillTimer(var_279_int); // 0x240 Func
	return 0; // 0x242 Return
}


func_1095(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0; // 0x447 PushV
	GetVariable(var_221_string, var_223_int); // 0x448 Func
	var_220_int = var_223_int; // 0x44a Mov
	return 2; // 0x44b Return
}


func_1227(var_229_bool, var_230_object)
{
	var_231_bool = 0; var_232_object = Obj(); // 0x4cc PushV
	var_232_object = var_230_object; // 0x4cd Mov
	func_1247(var_232_object); // 0x4ce NEW_2
	if(var_231_bool == 0) goto Label_1235; // 0x4d0 JumpB
	var_229_bool = 1; // 0x4d1 MovB
	return 0; // 0x4d2 Return
	
Label_1235:
	var_229_bool = 0; // 0x4d3 MovB
	return 0; // 0x4d4 Return
}


func_1100(var_85_int, var_86_int)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x44c PushV
	CreateIntVector(var_88_object); // 0x44d Func
	add(var_85_int); // 0x44f ObjFunc
	add(var_86_int); // 0x451 ObjFunc
	var_89_int = 3; // 0x453 PushI
	SendWorldWndMessage(var_89_int, var_88_object); // 0x454 Func
	return 2; // 0x456 Return
}


func_461(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x1ce PushV
	var_27_object = var_25_object; // 0x1cf Mov
	TaskCall(0); // 0x1d0 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x1d1 NEW_2
	TaskReturn(); // 0x1d2 TaskReturn
	return 0; // 0x1d4 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_130; // 0x56 JumpB
	var_200_string = ""; // 0x57 PushV
	var_200_string = "Neutral"; // 0x58 MovS
	func_160(var_194_object, var_200_string); // 0x59 NEW_2
	var_217_int = 520941; // 0x5b PushI
	SetMessage(var_217_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_218_bool = 0; var_219_object = Obj(); // 0x60 PushV
	var_219_object = var_1_object; // 0x61 MovT
	func_1215(var_219_object); // 0x62 NEW_2
	if(var_218_bool == 0) goto Label_106; // 0x64 JumpB
	var_226_int = 534490; // 0x65 PushI
	var_227_int = 38444; // 0x66 PushI
	var_228_int = 36135; // 0x67 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x68 TObjFunc
	
Label_106:
	var_229_bool = 0; var_230_object = Obj(); // 0x6a PushV
	var_230_object = var_1_object; // 0x6b MovT
	func_1227(var_229_bool, var_230_object); // 0x6c NEW_2
	var_241_bool = var_229_bool == 0; // 0x6e Not
	if(var_241_bool == 0) goto Label_117; // 0x6f JumpB
	var_242_int = 520942; // 0x70 PushI
	var_243_int = 22160; // 0x71 PushI
	var_244_int = 22159; // 0x72 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x73 TObjFunc
	
Label_117:
	var_245_int = 520946; // 0x75 PushI
	var_246_int = -1; // 0x76 PushI
	var_247_int = 22163; // 0x77 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x78 TObjFunc
	var_248_int = 536616; // 0x7a PushI
	var_249_int = -1; // 0x7b PushI
	var_250_int = 38443; // 0x7c PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x7d TObjFunc
	goto Label_130; // 0x7f Jump
	
Label_130:
	var_251_bool = 0; // 0x82 PushV
	func_1345(var_251_bool); // 0x83 NEW_2
	if(var_251_bool == 0) goto Label_145; // 0x85 JumpB
	
Label_134:
	lshWaitForAnimEnd(); // 0x86 Func
	var_252_string = var_3_string; // 0x88 PushT
	if(var_252_string == 0) goto Label_139; // 0x89 JumpB
	goto Label_144; // 0x8a Jump
	
Label_144:
	goto Label_159; // 0x90 Jump
	
Label_159:
	return 0; // 0x9f Return
	
Label_139:
	var_253_string = ""; // 0x8b PushV
	var_253_string = var_2_object; // 0x8c MovT
	func_1026(var_253_string); // 0x8d NEW_2
	goto Label_134; // 0x8f Jump
	
Label_145:
	var_264_string = "all"; // 0x91 PushS
	var_265_string = "idle"; // 0x92 PushS
	PlayAnimation(var_264_string, var_265_string); // 0x93 Func
	
Label_149:
	WaitForAnimEnd(); // 0x95 Func
	var_266_string = var_3_string; // 0x97 PushT
	if(var_266_string == 0) goto Label_154; // 0x98 JumpB
	goto Label_159; // 0x99 Jump
	
Label_154:
	var_267_string = "all"; // 0x9a PushS
	var_268_string = "idle"; // 0x9b PushS
	PlayAnimation(var_267_string, var_268_string); // 0x9c Func
	goto Label_149; // 0x9e Jump
}


func_1237(var_147_bool, var_148_object)
{
	var_149_bool = 0; var_150_object = Obj(); // 0x4d6 PushV
	var_150_object = var_148_object; // 0x4d7 Mov
	func_1259(var_150_object); // 0x4d8 NEW_2
	if(var_149_bool == 0) goto Label_1245; // 0x4da JumpB
	var_147_bool = 1; // 0x4db MovB
	return 0; // 0x4dc Return
	
Label_1245:
	var_147_bool = 0; // 0x4dd MovB
	return 0; // 0x4de Return
}


func_983(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x3d7 PushV
	var_152_string = "d"; // 0x3d8 PushS
	var_153_int = 0; // 0x3d9 PushV
	func_1143(var_153_int); // 0x3da NEW_2
	var_159_int = var_152_string + var_153_int; // 0x3dc Add
	var_160_string = "m"; // 0x3dd PushS
	var_147_string = var_159_int + var_160_string; // 0x3de Add2
	var_148_int = 0; // 0x3df MovI
	
Label_992:
	var_161_int = 1; // 0x3e0 PushI
	if(var_161_int == 0) goto Label_1005; // 0x3e1 JumpB
	var_162_int = 1; // 0x3e2 PushI
	var_163_int = var_148_int + var_162_int; // 0x3e3 Add
	var_164_int = var_147_string + var_163_int; // 0x3e4 Add
	HasProperty(var_164_int, var_149_bool); // 0x3e5 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x3e7 Not
	if(var_165_bool == 0) goto Label_1002; // 0x3e8 JumpB
	goto Label_1005; // 0x3e9 Jump
	
Label_1005:
	var_166_bool = var_148_int == 0; // 0x3ed Not
	if(var_166_bool == 0) goto Label_1009; // 0x3ee JumpB
	var_140_bool = 0; // 0x3ef MovB
	return 10; // 0x3f0 Return
	
Label_1009:
	var_150_int = 0; // 0x3f1 MovI
	var_167_int = 1; // 0x3f2 PushI
	var_168_bool = var_148_int > var_167_int; // 0x3f3 GT
	if(var_168_bool == 0) goto Label_1015; // 0x3f4 JumpB
	irand(var_150_int, var_148_int); // 0x3f5 Func
	
Label_1015:
	var_169_int = 1; // 0x3f7 PushI
	var_170_int = var_150_int + var_169_int; // 0x3f8 Add
	var_171_int = var_147_string + var_170_int; // 0x3f9 Add
	GetProperty(var_171_int, var_151_string); // 0x3fa ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x3fc PushV
	var_173_string = var_151_string; // 0x3fd Mov
	func_1057(var_172_bool, var_173_string); // 0x3fe NEW_2
	var_140_bool = var_172_bool; // 0x3ff Mov
	return 10; // 0x401 Return
	
Label_1002:
	var_174_int = 1; // 0x3ea PushI
	var_148_int = var_148_int + var_174_int; // 0x3eb Add2
	goto Label_992; // 0x3ec Jump
}


func_1112(var_72_object, var_73_int)
{
	var_74_int = 0; var_75_int = 0; // 0x458 PushV
	var_76_object = Obj(); var_77_string = ""; var_78_int = 0; // 0x459 PushV
	var_76_object = var_72_object; // 0x45a Mov
	var_77_string = "money"; // 0x45b MovS
	var_78_int = var_73_int; // 0x45c Mov
	func_770(var_77_string, var_78_int); // 0x45d NEW_2
	var_82_int = 0; // 0x45f PushI
	var_83_bool = var_73_int > var_82_int; // 0x460 GT
	if(var_83_bool == 0) goto Label_1130; // 0x461 JumpB
	var_84_string = "Money"; // 0x462 PushS
	GetInvItemByName(var_75_int, var_84_string); // 0x463 Func
	var_85_int = 0; var_86_int = 0; // 0x465 PushV
	var_85_int = var_75_int; // 0x466 Mov
	var_86_int = var_73_int; // 0x467 Mov
	func_1100(var_85_int, var_86_int); // 0x468 NEW_2
	
Label_1130:
	return 2; // 0x46a Return
}


func_1247(var_231_bool)
{
	var_233_int = 0; var_234_int = 0; var_235_int = 0; var_236_int = 0; // 0x4df PushV
	var_237_int = 0; // 0x4e0 PushV
	func_1143(var_237_int); // 0x4e1 NEW_2
	var_235_int = var_237_int; // 0x4e2 Mov
	var_238_string = "RMap"; // 0x4e4 PushS
	var_239_int = var_238_string + var_235_int; // 0x4e5 Add
	GetVariable(var_239_int, var_236_int); // 0x4e6 Func
	var_240_int = 0; // 0x4e8 PushI
	var_231_bool = var_236_int != var_240_int; // 0x4e9 Neq2
	return 4; // 0x4ea Return
}


func_870()
{
	var_271_bool = 0; var_272_bool = 0; // 0x366 PushV
	var_273_bool = 1; // 0x367 PushB
	CameraSwitchToNormal(var_273_bool); // 0x368 Func
	var_274_bool = 0; // 0x36a PushV
	func_1345(var_274_bool); // 0x36b NEW_2
	if(var_274_bool == 0) goto Label_879; // 0x36d JumpB
	goto Label_887; // 0x36e Jump
	
Label_887:
	return 2; // 0x377 Return
	
Label_879:
	var_275_string = "head"; // 0x36f PushS
	HasAnimationTrack(var_272_bool, var_275_string); // 0x370 Func
	var_276_bool = var_272_bool; // 0x372 Push
	if(var_276_bool == 0) goto Label_887; // 0x373 JumpB
	var_277_string = "head"; // 0x374 PushS
	UnlookAsync(var_277_string); // 0x375 Func
}


func_617()
{
	func_757(); // 0x26a NEW_2
	func_575(); // 0x26d NEW_2
	lshStopSpeech(); // 0x26f Func
	lshStopAnimation(); // 0x271 Func
	StopAsync(); // 0x273 Func
	Hold(); // 0x275 Func
	return 0; // 0x277 Return
}


func_1131(var_38_bool, var_39_string, var_40_string)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x46b PushV
	FindActor(var_42_object, var_39_string); // 0x46c Func
	var_43_bool = var_42_object == 0; // 0x46e NullEq
	if(var_43_bool == 0) goto Label_1138; // 0x46f JumpB
	var_38_bool = 0; // 0x470 MovB
	return 2; // 0x471 Return
	
Label_1138:
	Trigger(var_42_object, var_40_string); // 0x472 Func
	var_38_bool = 1; // 0x474 MovB
	return 2; // 0x475 Return
}


func_1259(var_149_bool)
{
	var_151_int = 0; var_152_int = 0; // 0x4eb PushV
	var_153_string = "money"; // 0x4ec PushS
	GetProperty(var_153_string, var_152_int); // 0x4ed ObjFunc
	var_154_int = 1000; // 0x4ef PushI
	var_149_bool = var_152_int >= var_154_int; // 0x4f0 GE2
	return 2; // 0x4f1 Return
}


func_1266()
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x4f2 PushV
	var_17_int = 685; // 0x4f3 PushI
	var_18_int = 2; // 0x4f4 PushI
	var_19_int = 534500; // 0x4f5 PushI
	CreateDiaryEntry(var_16_object, var_17_int, var_18_int, var_19_int); // 0x4f6 Func
	var_20_bool = 0; var_21_object = Obj(); var_22_int = 0; // 0x4f8 PushV
	var_21_object = var_16_object; // 0x4f9 Mov
	var_22_int = 682; // 0x4fa MovI
	func_1292(var_20_bool, var_21_object, var_22_int); // 0x4fb NEW_2
	return 2; // 0x4fd Return
}


func_755(var_45_bool)
{
	var_45_bool = 1; // 0x2f3 MovB
	return 0; // 0x2f4 Return
}


func_888(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x378 PushV
	var_107_string = "voice_common"; // 0x379 PushS
	GetVariable(var_107_string, var_105_int); // 0x37a Func
	var_108_int = var_105_int; // 0x37c Push
	if(var_108_int == 0) goto Label_926; // 0x37d JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x37e PushV
	var_110_object = var_99_object; // 0x37f Mov
	func_946(var_110_object); // 0x380 NEW_2
	var_139_bool = var_109_bool == 0; // 0x382 Not
	if(var_139_bool == 0) goto Label_908; // 0x383 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x384 PushV
	var_141_object = var_99_object; // 0x385 Mov
	func_983(var_141_object); // 0x386 NEW_2
	var_175_bool = var_140_bool == 0; // 0x388 Not
	if(var_175_bool == 0) goto Label_908; // 0x389 JumpB
	var_98_bool = 0; // 0x38a MovB
	return 4; // 0x38b Return
	
Label_908:
	var_176_int = 2; // 0x38c PushI
	irand(var_106_int, var_176_int); // 0x38d Func
	var_177_int = var_106_int; // 0x38f Push
	if(var_177_int == 0) goto Label_921; // 0x390 JumpB
	var_178_string = "voice_common"; // 0x391 PushS
	var_179_int = 1; // 0x392 PushI
	var_180_int = var_105_int + var_179_int; // 0x393 Add
	var_181_int = 3; // 0x394 PushI
	var_182_int = var_180_int / var_181_int; // 0x395 Mod
	SetVariable(var_178_string, var_182_int); // 0x396 Func
	goto Label_925; // 0x398 Jump
	
Label_925:
	goto Label_944; // 0x39d Jump
	
Label_944:
	var_98_bool = 1; // 0x3b0 MovB
	return 4; // 0x3b1 Return
	
Label_921:
	var_183_string = "voice_common"; // 0x399 PushS
	var_184_int = 0; // 0x39a PushI
	SetVariable(var_183_string, var_184_int); // 0x39b Func
	
Label_926:
	var_185_bool = 0; var_186_object = Obj(); // 0x39e PushV
	var_186_object = var_99_object; // 0x39f Mov
	func_983(var_186_object); // 0x3a0 NEW_2
	var_187_bool = var_185_bool == 0; // 0x3a2 Not
	if(var_187_bool == 0) goto Label_940; // 0x3a3 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x3a4 PushV
	var_189_object = var_99_object; // 0x3a5 Mov
	func_946(var_189_object); // 0x3a6 NEW_2
	var_190_bool = var_188_bool == 0; // 0x3a8 Not
	if(var_190_bool == 0) goto Label_940; // 0x3a9 JumpB
	var_98_bool = 0; // 0x3aa MovB
	return 4; // 0x3ab Return
	
Label_940:
	var_191_string = "voice_common"; // 0x3ac PushS
	var_192_int = 1; // 0x3ad PushI
	SetVariable(var_191_string, var_192_int); // 0x3ae Func
}


func_757()
{
	StopAnimation(); // 0x2f5 Func
	StopGroup0(); // 0x2f7 Func
	return 0; // 0x2f9 Return
}


func_1143(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x477 PushV
	GetGameTime(var_155_float); // 0x478 Func
	var_156_int = 1; // 0x47a PushI
	var_157_int = 0; // 0x47b PushV
	var_158_int = 24; // 0x47c PushI
	var_157_int = var_155_float / var_155_float; // 0x47d Div2
	var_153_int = var_156_int + var_157_int; // 0x47e Add2
	return 2; // 0x47f Return
}


func_632()
{
	StopGroup0(); // 0x278 Func
	func_575(); // 0x27b NEW_2
	var_8_string = ""; // 0x27d PushV
	var_8_string = "Neutral"; // 0x27e MovS
	func_1026(var_8_string); // 0x27f NEW_2
	func_566(); // 0x282 NEW_2
	return 0; // 0x284 Return
}


func_762(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x2fa PushV
	GetPosition(var_27_cvector); // 0x2fb Func
	GetPosition(var_28_cvector); // 0x2fd ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2ff Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x300 Or2
	return 6; // 0x301 Return
}


func_510(var_0_object)
{
	var_7_bool = 0; // 0x1fe PushV
	func_796(var_7_bool); // 0x1ff NEW_2
	var_10_bool = var_7_bool == 0; // 0x201 Not
	if(var_10_bool == 0) goto Label_517; // 0x202 JumpB
	Hold(); // 0x203 Func
	
Label_517:
	GetDirection(var_0_object); // 0x205 Func
	
Label_519:
	func_686(); // 0x208 NEW_2
	goto Label_519; // 0x20a Jump
}


func_1279(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x4ff PushV
	GetDiaryRoot(var_31_object); // 0x500 Func
	var_32_bool = var_31_object == 0; // 0x502 Not
	if(var_32_bool == 0) goto Label_1289; // 0x503 JumpB
	var_33_string = "Can't retrieve diary root"; // 0x504 PushS
	Trace(var_33_string); // 0x505 Func
	var_29_object = 0; // 0x507 MovB
	return 2; // 0x508 Return
	
Label_1289:
	var_29_object = var_31_object; // 0x509 Mov
	return 2; // 0x50a Return
}


