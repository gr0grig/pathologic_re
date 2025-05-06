task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xb0 PushI
	if(var_9_int == 0) goto Label_440; // 0xb1 JumpB
	func_1045(); // 0xb3 NEW_2
	var_11_int = 27767; // 0xb5 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xb6 Eq
	if(var_12_bool == 0) goto Label_199; // 0xb7 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xb8 PushV
	var_13_object = var_1_object; // 0xb9 MovT
	var_14_object = var_0_object; // 0xba MovT
	func_1106(); // 0xbb NEW_2
	var_17_object = Obj(); var_18_object = Obj(); // 0xbd PushV
	var_17_object = var_1_object; // 0xbe MovT
	var_18_object = var_0_object; // 0xbf MovT
	func_1112(); // 0xc0 NEW_2
	var_21_object = Obj(); var_22_object = Obj(); // 0xc2 PushV
	var_21_object = var_1_object; // 0xc3 MovT
	var_22_object = var_0_object; // 0xc4 MovT
	func_1118(); // 0xc5 NEW_2
	
Label_199:
	var_59_int = 27765; // 0xc7 PushI
	var_60_bool = var_7_cvector == var_59_int; // 0xc8 Eq
	if(var_60_bool == 0) goto Label_236; // 0xc9 JumpB
	var_61_string = ""; // 0xca PushV
	var_61_string = "Neutral"; // 0xcb MovS
	func_153(var_8_bool, var_61_string); // 0xcc NEW_2
	var_78_int = 526499; // 0xce PushI
	SetMessage(var_78_int); // 0xcf TObjFunc
	ClearReplies(); // 0xd1 TObjFunc
	var_79_bool = 0; // 0xd3 PushV
	var_79_bool = 0; // 0xd4 MovB
	var_80_bool = 0; var_81_object = Obj(); // 0xd5 PushV
	var_81_object = var_1_object; // 0xd6 MovT
	func_1145(var_81_object); // 0xd7 NEW_2
	if(var_80_bool == 0) goto Label_224; // 0xd9 JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0xda PushV
	var_87_object = var_1_object; // 0xdb MovT
	func_1157(var_87_object); // 0xdc NEW_2
	if(var_86_bool == 0) goto Label_224; // 0xde JumpB
	var_79_bool = 1; // 0xdf MovB
	
Label_224:
	if(var_79_bool == 0) goto Label_230; // 0xe0 JumpB
	var_92_int = 526501; // 0xe1 PushI
	var_93_int = 27768; // 0xe2 PushI
	var_94_int = 27767; // 0xe3 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xe4 TObjFunc
	
Label_230:
	var_95_int = 526500; // 0xe6 PushI
	var_96_int = -1; // 0xe7 PushI
	var_97_int = 27766; // 0xe8 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xe9 TObjFunc
	return 0; // 0xeb Return
	
Label_236:
	var_98_int = 27768; // 0xec PushI
	var_99_bool = var_7_cvector == var_98_int; // 0xed Eq
	if(var_99_bool == 0) goto Label_259; // 0xee JumpB
	var_100_string = ""; // 0xef PushV
	var_100_string = "Neutral"; // 0xf0 MovS
	func_153(var_8_bool, var_100_string); // 0xf1 NEW_2
	var_101_int = 526502; // 0xf3 PushI
	SetMessage(var_101_int); // 0xf4 TObjFunc
	ClearReplies(); // 0xf6 TObjFunc
	var_102_int = 526503; // 0xf8 PushI
	var_103_int = 30235; // 0xf9 PushI
	var_104_int = 27769; // 0xfa PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xfb TObjFunc
	var_105_int = 528825; // 0xfd PushI
	var_106_int = 30242; // 0xfe PushI
	var_107_int = 30241; // 0xff PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_108_int = 30242; // 0x103 PushI
	var_109_bool = var_7_cvector == var_108_int; // 0x104 Eq
	if(var_109_bool == 0) goto Label_277; // 0x105 JumpB
	var_110_string = ""; // 0x106 PushV
	var_110_string = "Neutral"; // 0x107 MovS
	func_153(var_8_bool, var_110_string); // 0x108 NEW_2
	var_111_int = 528826; // 0x10a PushI
	SetMessage(var_111_int); // 0x10b TObjFunc
	ClearReplies(); // 0x10d TObjFunc
	var_112_int = 528827; // 0x10f PushI
	var_113_int = 30235; // 0x110 PushI
	var_114_int = 30243; // 0x111 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x112 TObjFunc
	return 0; // 0x114 Return
	
Label_277:
	var_115_int = 30235; // 0x115 PushI
	var_116_bool = var_7_cvector == var_115_int; // 0x116 Eq
	if(var_116_bool == 0) goto Label_300; // 0x117 JumpB
	var_117_string = ""; // 0x118 PushV
	var_117_string = "Neutral"; // 0x119 MovS
	func_153(var_8_bool, var_117_string); // 0x11a NEW_2
	var_118_int = 528819; // 0x11c PushI
	SetMessage(var_118_int); // 0x11d TObjFunc
	ClearReplies(); // 0x11f TObjFunc
	var_119_int = 528820; // 0x121 PushI
	var_120_int = 30246; // 0x122 PushI
	var_121_int = 30236; // 0x123 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x124 TObjFunc
	var_122_int = 528828; // 0x126 PushI
	var_123_int = 30246; // 0x127 PushI
	var_124_int = 30245; // 0x128 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x129 TObjFunc
	return 0; // 0x12b Return
	
Label_300:
	var_125_int = 30246; // 0x12c PushI
	var_126_bool = var_7_cvector == var_125_int; // 0x12d Eq
	if(var_126_bool == 0) goto Label_323; // 0x12e JumpB
	var_127_string = ""; // 0x12f PushV
	var_127_string = "Smile"; // 0x130 MovS
	func_153(var_8_bool, var_127_string); // 0x131 NEW_2
	var_128_int = 528829; // 0x133 PushI
	SetMessage(var_128_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_129_int = 528830; // 0x138 PushI
	var_130_int = 30248; // 0x139 PushI
	var_131_int = 30247; // 0x13a PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x13b TObjFunc
	var_132_int = 528833; // 0x13d PushI
	var_133_int = 30252; // 0x13e PushI
	var_134_int = 30251; // 0x13f PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x140 TObjFunc
	return 0; // 0x142 Return
	
Label_323:
	var_135_int = 30252; // 0x143 PushI
	var_136_bool = var_7_cvector == var_135_int; // 0x144 Eq
	if(var_136_bool == 0) goto Label_341; // 0x145 JumpB
	var_137_string = ""; // 0x146 PushV
	var_137_string = "Agression"; // 0x147 MovS
	func_153(var_8_bool, var_137_string); // 0x148 NEW_2
	var_138_int = 528834; // 0x14a PushI
	SetMessage(var_138_int); // 0x14b TObjFunc
	ClearReplies(); // 0x14d TObjFunc
	var_139_int = 528835; // 0x14f PushI
	var_140_int = 30248; // 0x150 PushI
	var_141_int = 30253; // 0x151 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x152 TObjFunc
	return 0; // 0x154 Return
	
Label_341:
	var_142_int = 30248; // 0x155 PushI
	var_143_bool = var_7_cvector == var_142_int; // 0x156 Eq
	if(var_143_bool == 0) goto Label_364; // 0x157 JumpB
	var_144_string = ""; // 0x158 PushV
	var_144_string = "Sorrow"; // 0x159 MovS
	func_153(var_8_bool, var_144_string); // 0x15a NEW_2
	var_145_int = 528831; // 0x15c PushI
	SetMessage(var_145_int); // 0x15d TObjFunc
	ClearReplies(); // 0x15f TObjFunc
	var_146_int = 528832; // 0x161 PushI
	var_147_int = 30237; // 0x162 PushI
	var_148_int = 30249; // 0x163 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x164 TObjFunc
	var_149_int = 542482; // 0x166 PushI
	var_150_int = 44868; // 0x167 PushI
	var_151_int = 44867; // 0x168 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x169 TObjFunc
	return 0; // 0x16b Return
	
Label_364:
	var_152_int = 30237; // 0x16c PushI
	var_153_bool = var_7_cvector == var_152_int; // 0x16d Eq
	if(var_153_bool == 0) goto Label_382; // 0x16e JumpB
	var_154_string = ""; // 0x16f PushV
	var_154_string = "Sorrow"; // 0x170 MovS
	func_153(var_8_bool, var_154_string); // 0x171 NEW_2
	var_155_int = 528821; // 0x173 PushI
	SetMessage(var_155_int); // 0x174 TObjFunc
	ClearReplies(); // 0x176 TObjFunc
	var_156_int = 528822; // 0x178 PushI
	var_157_int = 30239; // 0x179 PushI
	var_158_int = 30238; // 0x17a PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x17b TObjFunc
	return 0; // 0x17d Return
	
Label_382:
	var_159_int = 30239; // 0x17e PushI
	var_160_bool = var_7_cvector == var_159_int; // 0x17f Eq
	if(var_160_bool == 0) goto Label_405; // 0x180 JumpB
	var_161_string = ""; // 0x181 PushV
	var_161_string = "Doubt"; // 0x182 MovS
	func_153(var_8_bool, var_161_string); // 0x183 NEW_2
	var_162_int = 528823; // 0x185 PushI
	SetMessage(var_162_int); // 0x186 TObjFunc
	ClearReplies(); // 0x188 TObjFunc
	var_163_int = 528824; // 0x18a PushI
	var_164_int = -1; // 0x18b PushI
	var_165_int = 30240; // 0x18c PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x18d TObjFunc
	var_166_int = 541115; // 0x18f PushI
	var_167_int = 44868; // 0x190 PushI
	var_168_int = 43231; // 0x191 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x192 TObjFunc
	return 0; // 0x194 Return
	
Label_405:
	var_169_int = 44868; // 0x195 PushI
	var_170_bool = var_7_cvector == var_169_int; // 0x196 Eq
	if(var_170_bool == 0) goto Label_428; // 0x197 JumpB
	var_171_string = ""; // 0x198 PushV
	var_171_string = "Neutral"; // 0x199 MovS
	func_153(var_8_bool, var_171_string); // 0x19a NEW_2
	var_172_int = 542483; // 0x19c PushI
	SetMessage(var_172_int); // 0x19d TObjFunc
	ClearReplies(); // 0x19f TObjFunc
	var_173_int = 542484; // 0x1a1 PushI
	var_174_int = -1; // 0x1a2 PushI
	var_175_int = 44870; // 0x1a3 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x1a4 TObjFunc
	var_176_int = 542485; // 0x1a6 PushI
	var_177_int = -1; // 0x1a7 PushI
	var_178_int = 44871; // 0x1a8 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x1a9 TObjFunc
	return 0; // 0x1ab Return
	
Label_428:
	var_3_string = 1; // 0x1ac TMovB
	var_179_bool = 0; // 0x1ad PushV
	func_1248(var_179_bool); // 0x1ae NEW_2
	if(var_179_bool == 0) goto Label_436; // 0x1b0 JumpB
	lshStopAnimation(); // 0x1b1 Func
	goto Label_438; // 0x1b3 Jump
	
Label_438:
	return 0; // 0x1b6 Return
	
Label_436:
	StopAnimation(); // 0x1b4 Func
	
Label_440:
	return 0; // 0x1b8 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1c5 PushV
	var_10_string = "cleanup"; // 0x1c6 PushS
	var_11_bool = var_7_string == var_10_string; // 0x1c7 Eq
	if(var_11_bool == 0) goto Label_468; // 0x1c8 JumpB
	var_1_object = 1; // 0x1c9 TMovB
	IsLoaded(var_9_bool); // 0x1ca Func
	var_12_bool = var_9_bool == 0; // 0x1cc Not
	if(var_12_bool == 0) goto Label_467; // 0x1cd JumpB
	var_13_object = Obj(); // 0x1ce PushV
	func_1052(var_13_object); // 0x1cf NEW_2
	RemoveActor(var_13_object); // 0x1d1 Func
	
Label_467:
	goto Label_472; // 0x1d3 Jump
	
Label_472:
	return 2; // 0x1d8 Return
	
Label_468:
	var_16_string = "restore"; // 0x1d4 PushS
	var_17_bool = var_7_string == var_16_string; // 0x1d5 Eq
	if(var_17_bool == 0) goto Label_472; // 0x1d6 JumpB
	var_1_object = 0; // 0x1d7 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x1d9 PushT
	if(var_7_object == 0) goto Label_482; // 0x1da JumpB
	var_8_object = Obj(); // 0x1db PushV
	func_1052(var_8_object); // 0x1dc NEW_2
	RemoveActor(var_8_object); // 0x1de Func
	Hold(); // 0x1e0 Func
	
Label_482:
	func_597(); // 0x1e3 NEW_2
	return 0; // 0x1e5 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_612(); // 0x1e7 NEW_2
	return 0; // 0x1e9 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x230 PushI
	var_9_bool = var_7_int == var_8_int; // 0x231 Eq
	if(var_9_bool == 0) goto Label_596; // 0x232 JumpB
	func_555(); // 0x234 NEW_2
	var_11_bool = 0; // 0x236 PushV
	var_11_bool = 0; // 0x237 MovB
	var_12_bool = 0; // 0x238 PushV
	func_769(var_12_bool); // 0x239 NEW_2
	if(var_12_bool == 0) goto Label_577; // 0x23b JumpB
	var_15_bool = 0; // 0x23c PushV
	func_524(var_15_bool); // 0x23d NEW_2
	if(var_15_bool == 0) goto Label_577; // 0x23f JumpB
	var_11_bool = 1; // 0x240 MovB
	
Label_577:
	if(var_11_bool == 0) goto Label_590; // 0x241 JumpB
	var_32_bool = 0; // 0x242 PushV
	func_504(var_32_bool); // 0x243 NEW_2
	if(var_32_bool == 0) goto Label_589; // 0x245 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x246 PushV
	var_53_object = Obj(); // 0x247 PushV
	func_1052(var_53_object); // 0x248 NEW_2
	var_52_object = var_53_object; // 0x249 Mov
	func_919(var_52_object); // 0x24b NEW_2
	
Label_589:
	goto Label_596; // 0x24d Jump
	
Label_596:
	return 0; // 0x254 Return
	
Label_590:
	func_519(var_7_int); // 0x24f NEW_2
	func_546(); // 0x252 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x272 Push
	if(var_8_bool == 0) goto Label_632; // 0x273 JumpB
	func_546(); // 0x275 NEW_2
	goto Label_636; // 0x277 Jump
	
Label_636:
	return 0; // 0x27c Return
	
Label_632:
	var_14_string = ""; // 0x278 PushV
	var_14_string = "Neutral"; // 0x279 MovS
	func_999(var_14_string); // 0x27a NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x27d PushV
	IsOverrideActive(var_9_bool); // 0x27e Func
	var_10_bool = var_9_bool == 0; // 0x280 Not
	if(var_10_bool == 0) goto Label_665; // 0x281 JumpB
	EventDisable(0); // 0x282 EventDisable
	func_737(); // 0x284 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x286 PushV
	var_12_object = var_7_object; // 0x287 Mov
	func_760(var_12_object); // 0x288 NEW_2
	EventEnable(0); // 0x28a EventEnable
	var_25_object = Obj(); // 0x28b PushV
	var_25_object = var_7_object; // 0x28c Mov
	func_441(var_25_object); // 0x28d NEW_2
	var_266_string = ""; // 0x28f PushV
	var_266_string = "Neutral"; // 0x290 MovS
	func_999(var_266_string); // 0x291 NEW_2
	func_555(); // 0x294 NEW_2
	func_546(); // 0x297 NEW_2
	
Label_665:
	return 2; // 0x299 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_490(var_6_bool); // 0x1c2 NEW_2
	return 0; // 0x1c4 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_774(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1242(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1240(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1244(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1246(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1223(var_89_int); // 0x22 NEW_2
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
	func_1052(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_861(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_257_bool = var_36_bool == 0; // 0x3f Not
	if(var_257_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_258_object = Obj(); // 0x46 PushV
	var_258_object = var_27_object; // 0x47 Mov
	func_843(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_769(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x301 PushV
	IsLoaded(var_9_bool); // 0x302 Func
	var_7_bool = var_9_bool; // 0x304 Mov
	return 2; // 0x305 Return
}


func_1157(var_227_bool)
{
	var_229_int = 0; var_230_string = ""; // 0x486 PushV
	var_230_string = "ook9BurahTermitnik2_1"; // 0x487 MovS
	func_1068(var_229_int, var_230_string); // 0x488 NEW_2
	var_231_int = 0; // 0x48a PushI
	var_232_bool = var_229_int == var_231_int; // 0x48b Eq
	if(var_232_bool == 0) goto Label_1167; // 0x48c JumpB
	var_227_bool = 1; // 0x48d MovB
	return 0; // 0x48e Return
	
Label_1167:
	var_227_bool = 0; // 0x48f MovB
	return 0; // 0x490 Return
}


func_774(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x306 PushV
	GetPosition(var_50_cvector); // 0x307 ObjFunc
	GetEyesHeight(var_49_float); // 0x309 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x30b PushE
	var_58_float = var_58_float + var_49_float; // 0x30c Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x30d PopE
	GetPosition(var_51_cvector); // 0x30e Func
	GetEyesHeight(var_49_float); // 0x310 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x312 PushE
	var_59_float = var_59_float + var_49_float; // 0x313 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x314 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x315 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x316 PushE
	var_60_float = 0; // 0x317 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x318 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x319 Or
	var_62_float = sqrt(var_61_int); // 0x31a Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x31b Div2
	var_53_cvector = -var_52_cvector; // 0x31c Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x31d Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x31e PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x31f PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x320 Xor2
	func_1058(var_64_cvector, var_65_cvector); // 0x321 NEW_2
	var_72_int = 25; // 0x323 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x324 Mult
	var_74_int = var_63_float + var_73_float; // 0x325 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x326 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x327 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x328 Add2
	IsOverrideActive(var_56_bool); // 0x329 Func
	var_76_bool = var_56_bool; // 0x32b Push
	if(var_76_bool == 0) goto Label_815; // 0x32c JumpB
	var_37_bool = 0; // 0x32d MovB
	return 18; // 0x32e Return
	
Label_815:
	StopWorld(); // 0x32f Func
	var_77_bool = 1; // 0x331 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x332 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x334 PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x335 PushE
	Rotate(var_78_float, var_79_float); // 0x336 Func
	var_80_bool = 0; // 0x338 PushV
	func_1248(var_80_bool); // 0x339 NEW_2
	if(var_80_bool == 0) goto Label_829; // 0x33b JumpB
	goto Label_837; // 0x33c Jump
	
Label_837:
	CameraWaitForPlayFinish(); // 0x345 Func
	ResumeWorld(); // 0x347 Func
	var_37_bool = 1; // 0x349 MovB
	return 18; // 0x34a Return
	
Label_829:
	var_81_string = "head"; // 0x33d PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x33e Func
	var_82_bool = var_57_bool; // 0x340 Push
	if(var_82_bool == 0) goto Label_837; // 0x341 JumpB
	var_83_string = "head"; // 0x342 PushS
	LookAsyncCamera(var_83_string); // 0x343 Func
}


func_519(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x207 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x208 PushE
	RotateAsync(var_84_float, var_85_float); // 0x209 Func
	return 0; // 0x20b Return
}


func_1030(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x406 PushV
	var_136_bool = 0; // 0x407 PushV
	func_1248(var_136_bool); // 0x408 NEW_2
	if(var_136_bool == 0) goto Label_1043; // 0x40a JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x40b Func
	var_137_bool = var_135_bool; // 0x40d Push
	if(var_137_bool == 0) goto Label_1043; // 0x40e JumpB
	lshPlaySpeech(var_133_string); // 0x40f Func
	var_132_bool = 1; // 0x411 MovB
	return 2; // 0x412 Return
	
Label_1043:
	var_132_bool = 0; // 0x413 MovB
	return 2; // 0x414 Return
}


func_524(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x20c PushV
	var_20_string = "player"; // 0x20d PushS
	FindActor(var_18_object, var_20_string); // 0x20e Func
	var_21_bool = var_18_object == 0; // 0x210 Not
	if(var_21_bool == 0) goto Label_532; // 0x211 JumpB
	var_15_bool = 0; // 0x212 MovB
	return 4; // 0x213 Return
	
Label_532:
	var_22_float = 0; var_23_object = Obj(); // 0x214 PushV
	var_23_object = var_18_object; // 0x215 Mov
	func_742(var_23_object); // 0x216 NEW_2
	var_30_float = 90000.0; // 0x218 PushF
	var_31_bool = var_22_float > var_30_float; // 0x219 GT
	if(var_31_bool == 0) goto Label_541; // 0x21a JumpB
	var_15_bool = 0; // 0x21b MovB
	return 4; // 0x21c Return
	
Label_541:
	CanSee(var_19_bool, var_18_object); // 0x21d Func
	var_15_bool = var_19_bool; // 0x21f Mov
	return 4; // 0x220 Return
}


func_1169()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x491 PushV
	var_38_int = 520; // 0x492 PushI
	var_39_int = 1; // 0x493 PushI
	var_40_int = 529812; // 0x494 PushI
	CreateDiaryEntry(var_37_object, var_38_int, var_39_int, var_40_int); // 0x495 Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0x497 PushV
	var_42_object = var_37_object; // 0x498 Mov
	var_43_int = 517; // 0x499 MovI
	func_1195(var_41_bool, var_42_object, var_43_int); // 0x49a NEW_2
	return 2; // 0x49c Return
}


func_1045()
{
	var_10_bool = 0; // 0x415 PushV
	func_1248(var_10_bool); // 0x416 NEW_2
	if(var_10_bool == 0) goto Label_1051; // 0x418 JumpB
	lshStopSpeech(); // 0x419 Func
	
Label_1051:
	return 0; // 0x41b Return
}


func_919(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x397 PushV
	var_116_string = "c"; // 0x398 MovS
	var_117_int = 0; // 0x399 MovI
	
Label_922:
	var_121_int = 1; // 0x39a PushI
	if(var_121_int == 0) goto Label_935; // 0x39b JumpB
	var_122_int = 1; // 0x39c PushI
	var_123_int = var_117_int + var_122_int; // 0x39d Add
	var_124_int = var_116_string + var_123_int; // 0x39e Add
	HasProperty(var_124_int, var_118_bool); // 0x39f ObjFunc
	var_125_bool = var_118_bool == 0; // 0x3a1 Not
	if(var_125_bool == 0) goto Label_932; // 0x3a2 JumpB
	goto Label_935; // 0x3a3 Jump
	
Label_935:
	var_126_bool = var_117_int == 0; // 0x3a7 Not
	if(var_126_bool == 0) goto Label_939; // 0x3a8 JumpB
	var_109_bool = 0; // 0x3a9 MovB
	return 10; // 0x3aa Return
	
Label_939:
	var_119_int = 0; // 0x3ab MovI
	var_127_int = 1; // 0x3ac PushI
	var_128_bool = var_117_int > var_127_int; // 0x3ad GT
	if(var_128_bool == 0) goto Label_945; // 0x3ae JumpB
	irand(var_119_int, var_117_int); // 0x3af Func
	
Label_945:
	var_129_int = 1; // 0x3b1 PushI
	var_130_int = var_119_int + var_129_int; // 0x3b2 Add
	var_131_int = var_116_string + var_130_int; // 0x3b3 Add
	GetProperty(var_131_int, var_120_string); // 0x3b4 ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x3b6 PushV
	var_133_string = var_120_string; // 0x3b7 Mov
	func_1030(var_132_bool, var_133_string); // 0x3b8 NEW_2
	var_109_bool = var_132_bool; // 0x3b9 Mov
	return 10; // 0x3bb Return
	
Label_932:
	var_138_int = 1; // 0x3a4 PushI
	var_117_int = var_117_int + var_138_int; // 0x3a5 Add2
	goto Label_922; // 0x3a6 Jump
}


func_153(var_2_object, var_200_string)
{
	var_201_bool = 0; // 0x9a PushV
	func_1248(var_201_bool); // 0x9b NEW_2
	var_202_bool = var_201_bool == 0; // 0x9d Not
	if(var_202_bool == 0) goto Label_160; // 0x9e JumpB
	return 0; // 0x9f Return
	
Label_160:
	var_203_bool = var_200_string == var_2_object; // 0xa0 Eq
	if(var_203_bool == 0) goto Label_163; // 0xa1 JumpB
	return 0; // 0xa2 Return
	
Label_163:
	var_204_string = ""; var_205_bool = 0; // 0xa3 PushV
	var_204_string = var_200_string; // 0xa4 Mov
	var_206_string = ""; // 0xa5 PushS
	var_207_bool = var_200_string == var_206_string; // 0xa6 Eq
	if(var_207_bool == 0) goto Label_170; // 0xa7 JumpB
	var_205_bool = 0; // 0xa8 MovB
	goto Label_171; // 0xa9 Jump
	
Label_171:
	func_1015(var_204_string, var_205_bool); // 0xab NEW_2
	var_2_object = var_200_string; // 0xad TMov
	return 0; // 0xae Return
	
Label_170:
	var_205_bool = 1; // 0xaa MovB
}


func_666()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x29a PushV
	WaitForAnimEnd(); // 0x29b Func
	var_23_bool = 0; // 0x29d PushV
	func_769(var_23_bool); // 0x29e NEW_2
	var_24_bool = var_23_bool == 0; // 0x2a0 Not
	if(var_24_bool == 0) goto Label_675; // 0x2a1 JumpB
	return 12; // 0x2a2 Return
	
Label_675:
	var_25_int = 0; // 0x2a3 PushV
	func_1089(var_25_int); // 0x2a4 NEW_2
	var_17_int = var_25_int; // 0x2a5 Mov
	var_18_int = 0; // 0x2a7 MovI
	
Label_680:
	var_38_bool = 0; // 0x2a8 PushV
	var_38_bool = 0; // 0x2a9 MovB
	var_39_int = 5; // 0x2aa PushI
	var_40_bool = var_18_int < var_39_int; // 0x2ab LT
	if(var_40_bool == 0) goto Label_690; // 0x2ac JumpB
	var_41_bool = 0; // 0x2ad PushV
	func_769(var_41_bool); // 0x2ae NEW_2
	if(var_41_bool == 0) goto Label_690; // 0x2b0 JumpB
	var_38_bool = 1; // 0x2b1 MovB
	
Label_690:
	if(var_38_bool == 0) goto Label_732; // 0x2b2 JumpB
	var_42_bool = var_17_int == 0; // 0x2b3 Not
	if(var_42_bool == 0) goto Label_700; // 0x2b4 JumpB
	var_43_int = 3; // 0x2b5 PushI
	Sleep(var_43_int, var_19_bool); // 0x2b6 Func
	var_44_bool = var_19_bool == 0; // 0x2b8 Not
	if(var_44_bool == 0) goto Label_699; // 0x2b9 JumpB
	goto Label_732; // 0x2ba Jump
	
Label_732:
	ResetAAS(); // 0x2dc Func
	return 12; // 0x2de Return
	
Label_699:
	goto Label_721; // 0x2bb Jump
	
Label_721:
	var_45_bool = 0; // 0x2d1 PushV
	func_735(var_45_bool); // 0x2d2 NEW_2
	var_46_bool = var_45_bool == 0; // 0x2d4 Not
	if(var_46_bool == 0) goto Label_727; // 0x2d5 JumpB
	goto Label_732; // 0x2d6 Jump
	
Label_727:
	ResetAAS(); // 0x2d7 Func
	var_47_int = 1; // 0x2d9 PushI
	var_18_int = var_18_int + var_47_int; // 0x2da Add2
	goto Label_680; // 0x2db Jump
	
Label_700:
	irand(var_20_int, var_17_int); // 0x2bc Func
	var_48_int = 5; // 0x2be PushI
	irand(var_21_int, var_48_int); // 0x2bf Func
	var_49_int = 0; // 0x2c1 PushI
	var_50_bool = var_21_int != var_49_int; // 0x2c2 Neq
	if(var_50_bool == 0) goto Label_709; // 0x2c3 JumpB
	var_20_int = 0; // 0x2c4 MovI
	
Label_709:
	var_51_string = "all"; // 0x2c5 PushS
	var_52_string = ""; var_53_int = 0; // 0x2c6 PushV
	var_53_int = var_20_int; // 0x2c7 Mov
	func_1082(var_52_string, var_53_int); // 0x2c8 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2ca Func
	WaitForAnimEnd(var_22_bool); // 0x2cc Func
	var_54_bool = var_22_bool == 0; // 0x2ce Not
	if(var_54_bool == 0) goto Label_721; // 0x2cf JumpB
	goto Label_732; // 0x2d0 Jump
}


func_1052(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x41c PushV
	self(var_102_object); // 0x41d Func
	var_100_object = var_102_object; // 0x41f Mov
	return 2; // 0x420 Return
}


func_1182(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x49e PushV
	GetDiaryRoot(var_52_object); // 0x49f Func
	var_53_bool = var_52_object == 0; // 0x4a1 Not
	if(var_53_bool == 0) goto Label_1192; // 0x4a2 JumpB
	var_54_string = "Can't retrieve diary root"; // 0x4a3 PushS
	Trace(var_54_string); // 0x4a4 Func
	var_50_object = 0; // 0x4a6 MovB
	return 2; // 0x4a7 Return
	
Label_1192:
	var_50_object = var_52_object; // 0x4a8 Mov
	return 2; // 0x4a9 Return
}


func_546()
{
	var_268_float = 0; var_269_float = 0; // 0x222 PushV
	var_270_int = 8; // 0x223 PushI
	var_271_int = 16; // 0x224 PushI
	rand(var_269_float, var_270_int, var_271_int); // 0x225 Func
	var_272_int = 10; // 0x227 PushI
	SetTimer(var_272_int, var_269_float); // 0x228 Func
	return 2; // 0x22a Return
}


func_1058(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x422 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x423 Or
	var_68_float = sqrt(var_69_int); // 0x424 Sqrt2
	var_70_float = 0.0; // 0x425 PushF
	var_71_bool = var_68_float < var_70_float; // 0x426 LT
	if(var_71_bool == 0) goto Label_1066; // 0x427 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x428 MovV
	return 2; // 0x429 Return
	
Label_1066:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x42a Div2
	return 2; // 0x42b Return
}


func_555()
{
	var_267_int = 10; // 0x22b PushI
	KillTimer(var_267_int); // 0x22c Func
	return 0; // 0x22e Return
}


func_1068(var_221_int, var_222_string)
{
	var_223_int = 0; var_224_int = 0; // 0x42c PushV
	GetVariable(var_222_string, var_224_int); // 0x42d Func
	var_221_int = var_224_int; // 0x42f Mov
	return 2; // 0x430 Return
}


func_1195(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; // 0x4ab PushV
	var_50_object = Obj(); // 0x4ac PushV
	func_1182(var_50_object); // 0x4ad NEW_2
	var_47_object = var_50_object; // 0x4ae Mov
	Find(var_43_int, var_48_object); // 0x4b0 ObjFunc
	var_55_bool = var_48_object == 0; // 0x4b2 Not
	if(var_55_bool == 0) goto Label_1210; // 0x4b3 JumpB
	var_56_string = "Can't find diary parent with id: "; // 0x4b4 PushS
	var_57_int = var_56_string + var_43_int; // 0x4b5 Add
	Trace(var_57_int); // 0x4b6 Func
	var_41_bool = 0; // 0x4b8 MovB
	return 6; // 0x4b9 Return
	
Label_1210:
	AddChild(var_42_object); // 0x4ba ObjFunc
	var_58_int = 7; // 0x4bc PushI
	SendWorldWndMessage(var_58_int); // 0x4bd Func
	GetCategory(var_49_int); // 0x4bf ObjFunc
	SetDiarySection(var_49_int); // 0x4c1 Func
	var_41_bool = 0; // 0x4c3 MovB
	return 6; // 0x4c4 Return
}


func_1073(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x431 PushV
	GetGameTime(var_155_float); // 0x432 Func
	var_156_int = 1; // 0x434 PushI
	var_157_int = 0; // 0x435 PushV
	var_158_int = 24; // 0x436 PushI
	var_157_int = var_155_float / var_155_float; // 0x437 Div2
	var_153_int = var_156_int + var_157_int; // 0x438 Add2
	return 2; // 0x439 Return
}


func_441(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x1ba PushV
	var_27_object = var_25_object; // 0x1bb Mov
	TaskCall(0); // 0x1bc TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x1bd NEW_2
	TaskReturn(); // 0x1be TaskReturn
	return 0; // 0x1c0 Return
}


func_1082(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x43a PushV
	var_34_string = "idle"; // 0x43b MovS
	var_35_int = var_32_int; // 0x43c Push
	if(var_35_int == 0) goto Label_1087; // 0x43d JumpB
	var_34_string = var_34_string + var_32_int; // 0x43e Add2
	
Label_1087:
	var_31_string = var_34_string; // 0x43f Mov
	return 2; // 0x440 Return
}


func_956(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x3bc PushV
	var_152_string = "d"; // 0x3bd PushS
	var_153_int = 0; // 0x3be PushV
	func_1073(var_153_int); // 0x3bf NEW_2
	var_159_int = var_152_string + var_153_int; // 0x3c1 Add
	var_160_string = "m"; // 0x3c2 PushS
	var_147_string = var_159_int + var_160_string; // 0x3c3 Add2
	var_148_int = 0; // 0x3c4 MovI
	
Label_965:
	var_161_int = 1; // 0x3c5 PushI
	if(var_161_int == 0) goto Label_978; // 0x3c6 JumpB
	var_162_int = 1; // 0x3c7 PushI
	var_163_int = var_148_int + var_162_int; // 0x3c8 Add
	var_164_int = var_147_string + var_163_int; // 0x3c9 Add
	HasProperty(var_164_int, var_149_bool); // 0x3ca ObjFunc
	var_165_bool = var_149_bool == 0; // 0x3cc Not
	if(var_165_bool == 0) goto Label_975; // 0x3cd JumpB
	goto Label_978; // 0x3ce Jump
	
Label_978:
	var_166_bool = var_148_int == 0; // 0x3d2 Not
	if(var_166_bool == 0) goto Label_982; // 0x3d3 JumpB
	var_140_bool = 0; // 0x3d4 MovB
	return 10; // 0x3d5 Return
	
Label_982:
	var_150_int = 0; // 0x3d6 MovI
	var_167_int = 1; // 0x3d7 PushI
	var_168_bool = var_148_int > var_167_int; // 0x3d8 GT
	if(var_168_bool == 0) goto Label_988; // 0x3d9 JumpB
	irand(var_150_int, var_148_int); // 0x3da Func
	
Label_988:
	var_169_int = 1; // 0x3dc PushI
	var_170_int = var_150_int + var_169_int; // 0x3dd Add
	var_171_int = var_147_string + var_170_int; // 0x3de Add
	GetProperty(var_171_int, var_151_string); // 0x3df ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x3e1 PushV
	var_173_string = var_151_string; // 0x3e2 Mov
	func_1030(var_172_bool, var_173_string); // 0x3e3 NEW_2
	var_140_bool = var_172_bool; // 0x3e4 Mov
	return 10; // 0x3e6 Return
	
Label_975:
	var_174_int = 1; // 0x3cf PushI
	var_148_int = var_148_int + var_174_int; // 0x3d0 Add2
	goto Label_965; // 0x3d1 Jump
}


func_1089(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x441 PushV
	var_28_int = 0; // 0x442 MovI
	
Label_1091:
	var_30_string = "all"; // 0x443 PushS
	var_31_string = ""; var_32_int = 0; // 0x444 PushV
	var_32_int = var_28_int; // 0x445 Mov
	func_1082(var_31_string, var_32_int); // 0x446 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x448 Func
	var_36_bool = var_29_bool == 0; // 0x44a Not
	if(var_36_bool == 0) goto Label_1101; // 0x44b JumpB
	goto Label_1104; // 0x44c Jump
	
Label_1104:
	var_25_int = var_28_int; // 0x450 Mov
	return 4; // 0x451 Return
	
Label_1101:
	var_37_int = 1; // 0x44d PushI
	var_28_int = var_28_int + var_37_int; // 0x44e Add2
	goto Label_1091; // 0x44f Jump
}


func_1223(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x4c7 PushV
	var_92_string = "branch"; // 0x4c8 PushS
	GetVariable(var_92_string, var_91_int); // 0x4c9 Func
	var_93_int = 0; // 0x4cb PushI
	var_94_bool = var_91_int == var_93_int; // 0x4cc Eq
	if(var_94_bool == 0) goto Label_1233; // 0x4cd JumpB
	var_89_int = 1; // 0x4ce MovI
	return 2; // 0x4cf Return
	
Label_1233:
	var_95_int = 1; // 0x4d1 PushI
	var_96_bool = var_91_int == var_95_int; // 0x4d2 Eq
	if(var_96_bool == 0) goto Label_1238; // 0x4d3 JumpB
	var_89_int = 2; // 0x4d4 MovI
	return 2; // 0x4d5 Return
	
Label_1238:
	var_89_int = 3; // 0x4d6 MovI
	return 2; // 0x4d7 Return
}


func_843()
{
	var_259_bool = 0; var_260_bool = 0; // 0x34b PushV
	var_261_bool = 1; // 0x34c PushB
	CameraSwitchToNormal(var_261_bool); // 0x34d Func
	var_262_bool = 0; // 0x34f PushV
	func_1248(var_262_bool); // 0x350 NEW_2
	if(var_262_bool == 0) goto Label_852; // 0x352 JumpB
	goto Label_860; // 0x353 Jump
	
Label_860:
	return 2; // 0x35c Return
	
Label_852:
	var_263_string = "head"; // 0x354 PushS
	HasAnimationTrack(var_260_bool, var_263_string); // 0x355 Func
	var_264_bool = var_260_bool; // 0x357 Push
	if(var_264_bool == 0) goto Label_860; // 0x358 JumpB
	var_265_string = "head"; // 0x359 PushS
	UnlookAsync(var_265_string); // 0x35a Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_123; // 0x56 JumpB
	var_200_string = ""; // 0x57 PushV
	var_200_string = "Neutral"; // 0x58 MovS
	func_153(var_194_object, var_200_string); // 0x59 NEW_2
	var_217_int = 526499; // 0x5b PushI
	SetMessage(var_217_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_218_bool = 0; // 0x60 PushV
	var_218_bool = 0; // 0x61 MovB
	var_219_bool = 0; var_220_object = Obj(); // 0x62 PushV
	var_220_object = var_1_object; // 0x63 MovT
	func_1145(var_220_object); // 0x64 NEW_2
	if(var_219_bool == 0) goto Label_109; // 0x66 JumpB
	var_227_bool = 0; var_228_object = Obj(); // 0x67 PushV
	var_228_object = var_1_object; // 0x68 MovT
	func_1157(var_228_object); // 0x69 NEW_2
	if(var_227_bool == 0) goto Label_109; // 0x6b JumpB
	var_218_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_218_bool == 0) goto Label_115; // 0x6d JumpB
	var_233_int = 526501; // 0x6e PushI
	var_234_int = 27768; // 0x6f PushI
	var_235_int = 27767; // 0x70 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x71 TObjFunc
	
Label_115:
	var_236_int = 526500; // 0x73 PushI
	var_237_int = -1; // 0x74 PushI
	var_238_int = 27766; // 0x75 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x76 TObjFunc
	goto Label_123; // 0x78 Jump
	
Label_123:
	var_239_bool = 0; // 0x7b PushV
	func_1248(var_239_bool); // 0x7c NEW_2
	if(var_239_bool == 0) goto Label_138; // 0x7e JumpB
	
Label_127:
	lshWaitForAnimEnd(); // 0x7f Func
	var_240_string = var_3_string; // 0x81 PushT
	if(var_240_string == 0) goto Label_132; // 0x82 JumpB
	goto Label_137; // 0x83 Jump
	
Label_137:
	goto Label_152; // 0x89 Jump
	
Label_152:
	return 0; // 0x98 Return
	
Label_132:
	var_241_string = ""; // 0x84 PushV
	var_241_string = var_2_object; // 0x85 MovT
	func_999(var_241_string); // 0x86 NEW_2
	goto Label_127; // 0x88 Jump
	
Label_138:
	var_252_string = "all"; // 0x8a PushS
	var_253_string = "idle"; // 0x8b PushS
	PlayAnimation(var_252_string, var_253_string); // 0x8c Func
	
Label_142:
	WaitForAnimEnd(); // 0x8e Func
	var_254_string = var_3_string; // 0x90 PushT
	if(var_254_string == 0) goto Label_147; // 0x91 JumpB
	goto Label_152; // 0x92 Jump
	
Label_147:
	var_255_string = "all"; // 0x93 PushS
	var_256_string = "idle"; // 0x94 PushS
	PlayAnimation(var_255_string, var_256_string); // 0x95 Func
	goto Label_142; // 0x97 Jump
}


func_1106()
{
	var_15_string = "ook9BurahTermitnik2_1"; // 0x453 PushS
	var_16_int = 1; // 0x454 PushI
	SetVariable(var_15_string, var_16_int); // 0x455 Func
	return 0; // 0x457 Return
}


func_597()
{
	func_737(); // 0x256 NEW_2
	func_555(); // 0x259 NEW_2
	lshStopSpeech(); // 0x25b Func
	lshStopAnimation(); // 0x25d Func
	StopAsync(); // 0x25f Func
	Hold(); // 0x261 Func
	return 0; // 0x263 Return
}


func_1240(var_86_int)
{
	var_86_int = 515592; // 0x4d8 MovI
	return 0; // 0x4d9 Return
}


func_1112()
{
	var_19_string = "k9q01BurahTalk"; // 0x459 PushS
	var_20_int = 1; // 0x45a PushI
	SetVariable(var_19_string, var_20_int); // 0x45b Func
	return 0; // 0x45d Return
}


func_1242(var_85_int)
{
	var_85_int = 511961; // 0x4da MovI
	return 0; // 0x4db Return
}


func_1244(var_87_string)
{
	var_87_string = "ui/NPC_Burah.png"; // 0x4dc MovS
	return 0; // 0x4dd Return
}


func_861(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x35d PushV
	var_107_string = "voice_common"; // 0x35e PushS
	GetVariable(var_107_string, var_105_int); // 0x35f Func
	var_108_int = var_105_int; // 0x361 Push
	if(var_108_int == 0) goto Label_899; // 0x362 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x363 PushV
	var_110_object = var_99_object; // 0x364 Mov
	func_919(var_110_object); // 0x365 NEW_2
	var_139_bool = var_109_bool == 0; // 0x367 Not
	if(var_139_bool == 0) goto Label_881; // 0x368 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x369 PushV
	var_141_object = var_99_object; // 0x36a Mov
	func_956(var_141_object); // 0x36b NEW_2
	var_175_bool = var_140_bool == 0; // 0x36d Not
	if(var_175_bool == 0) goto Label_881; // 0x36e JumpB
	var_98_bool = 0; // 0x36f MovB
	return 4; // 0x370 Return
	
Label_881:
	var_176_int = 2; // 0x371 PushI
	irand(var_106_int, var_176_int); // 0x372 Func
	var_177_int = var_106_int; // 0x374 Push
	if(var_177_int == 0) goto Label_894; // 0x375 JumpB
	var_178_string = "voice_common"; // 0x376 PushS
	var_179_int = 1; // 0x377 PushI
	var_180_int = var_105_int + var_179_int; // 0x378 Add
	var_181_int = 3; // 0x379 PushI
	var_182_int = var_180_int / var_181_int; // 0x37a Mod
	SetVariable(var_178_string, var_182_int); // 0x37b Func
	goto Label_898; // 0x37d Jump
	
Label_898:
	goto Label_917; // 0x382 Jump
	
Label_917:
	var_98_bool = 1; // 0x395 MovB
	return 4; // 0x396 Return
	
Label_894:
	var_183_string = "voice_common"; // 0x37e PushS
	var_184_int = 0; // 0x37f PushI
	SetVariable(var_183_string, var_184_int); // 0x380 Func
	
Label_899:
	var_185_bool = 0; var_186_object = Obj(); // 0x383 PushV
	var_186_object = var_99_object; // 0x384 Mov
	func_956(var_186_object); // 0x385 NEW_2
	var_187_bool = var_185_bool == 0; // 0x387 Not
	if(var_187_bool == 0) goto Label_913; // 0x388 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x389 PushV
	var_189_object = var_99_object; // 0x38a Mov
	func_919(var_189_object); // 0x38b NEW_2
	var_190_bool = var_188_bool == 0; // 0x38d Not
	if(var_190_bool == 0) goto Label_913; // 0x38e JumpB
	var_98_bool = 0; // 0x38f MovB
	return 4; // 0x390 Return
	
Label_913:
	var_191_string = "voice_common"; // 0x391 PushS
	var_192_int = 1; // 0x392 PushI
	SetVariable(var_191_string, var_192_int); // 0x393 Func
}


func_1246(var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png"; // 0x4de MovS
	return 0; // 0x4df Return
}


func_1118()
{
	var_23_bool = 0; // 0x45f PushV
	var_23_bool = 0; // 0x460 MovB
	var_24_int = 0; var_25_string = ""; // 0x461 PushV
	var_25_string = "k9q01BurahTalk"; // 0x462 MovS
	func_1068(var_24_int, var_25_string); // 0x463 NEW_2
	var_28_int = 0; // 0x465 PushI
	var_29_bool = var_24_int != var_28_int; // 0x466 Neq
	if(var_29_bool == 0) goto Label_1136; // 0x467 JumpB
	var_30_int = 0; var_31_string = ""; // 0x468 PushV
	var_31_string = "k9q01DankoTalk"; // 0x469 MovS
	func_1068(var_30_int, var_31_string); // 0x46a NEW_2
	var_32_int = 0; // 0x46c PushI
	var_33_bool = var_30_int != var_32_int; // 0x46d Neq
	if(var_33_bool == 0) goto Label_1136; // 0x46e JumpB
	var_23_bool = 1; // 0x46f MovB
	
Label_1136:
	if(var_23_bool == 0) goto Label_1144; // 0x470 JumpB
	var_34_string = "k9q01"; // 0x471 PushS
	var_35_int = 3; // 0x472 PushI
	SetVariable(var_34_string, var_35_int); // 0x473 Func
	func_1169(); // 0x476 NEW_2
	
Label_1144:
	return 0; // 0x478 Return
}


func_1248(var_80_bool)
{
	var_80_bool = 1; // 0x4e0 MovB
	return 0; // 0x4e1 Return
}


func_737()
{
	StopAnimation(); // 0x2e1 Func
	StopGroup0(); // 0x2e3 Func
	return 0; // 0x2e5 Return
}


func_735(var_45_bool)
{
	var_45_bool = 1; // 0x2df MovB
	return 0; // 0x2e0 Return
}


func_612()
{
	StopGroup0(); // 0x264 Func
	func_555(); // 0x267 NEW_2
	var_8_string = ""; // 0x269 PushV
	var_8_string = "Neutral"; // 0x26a MovS
	func_999(var_8_string); // 0x26b NEW_2
	func_546(); // 0x26e NEW_2
	return 0; // 0x270 Return
}


func_742(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x2e6 PushV
	GetPosition(var_27_cvector); // 0x2e7 Func
	GetPosition(var_28_cvector); // 0x2e9 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2eb Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2ec Or2
	return 6; // 0x2ed Return
}


func_999(var_241_string)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0; // 0x3e7 PushV
	lshHasAnimation(var_245_bool, var_241_string); // 0x3e8 Func
	var_248_bool = var_245_bool; // 0x3ea Push
	if(var_248_bool == 0) goto Label_1010; // 0x3eb JumpB
	lshGetAnimTimes(var_241_string, var_246_float, var_247_float); // 0x3ec Func
	var_249_bool = 0; // 0x3ee PushB
	lshPlayAnimation(var_246_float, var_247_float, var_249_bool); // 0x3ef Func
	goto Label_1014; // 0x3f1 Jump
	
Label_1014:
	return 6; // 0x3f6 Return
	
Label_1010:
	var_250_string = "Can't find lsh animation : "; // 0x3f2 PushS
	var_251_int = var_250_string + var_241_string; // 0x3f3 Add
	Trace(var_251_int); // 0x3f4 Func
}


func_490(var_0_object)
{
	var_7_bool = 0; // 0x1ea PushV
	func_769(var_7_bool); // 0x1eb NEW_2
	var_10_bool = var_7_bool == 0; // 0x1ed Not
	if(var_10_bool == 0) goto Label_497; // 0x1ee JumpB
	Hold(); // 0x1ef Func
	
Label_497:
	GetDirection(var_0_object); // 0x1f1 Func
	
Label_499:
	func_666(); // 0x1f4 NEW_2
	goto Label_499; // 0x1f6 Jump
}


func_750(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x2ee PushV
	GetPosition(var_20_cvector); // 0x2ef Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x2f1 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x2f2 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x2f3 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x2f4 Func
	var_15_bool = var_22_bool; // 0x2f6 Mov
	return 6; // 0x2f7 Return
}


func_760(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x2f8 PushV
	GetPosition(var_14_cvector); // 0x2f9 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x2fb PushV
	var_16_cvector = var_14_cvector; // 0x2fc Mov
	func_750(var_15_bool, var_16_cvector); // 0x2fd NEW_2
	var_11_bool = var_15_bool; // 0x2fe Mov
	return 2; // 0x300 Return
}


func_1015(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0; // 0x3f7 PushV
	lshHasAnimation(var_211_bool, var_204_string); // 0x3f8 Func
	var_214_bool = var_211_bool; // 0x3fa Push
	if(var_214_bool == 0) goto Label_1025; // 0x3fb JumpB
	lshGetAnimTimes(var_204_string, var_212_float, var_213_float); // 0x3fc Func
	lshPlayAnimation(var_212_float, var_213_float, var_205_bool); // 0x3fe Func
	goto Label_1029; // 0x400 Jump
	
Label_1029:
	return 6; // 0x405 Return
	
Label_1025:
	var_215_string = "Can't find lsh animation : "; // 0x401 PushS
	var_216_int = var_215_string + var_204_string; // 0x402 Add
	Trace(var_216_int); // 0x403 Func
}


func_504(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x1f8 PushV
	var_35_string = "player"; // 0x1f9 PushS
	FindActor(var_34_object, var_35_string); // 0x1fa Func
	var_36_bool = var_34_object == 0; // 0x1fc Not
	if(var_36_bool == 0) goto Label_512; // 0x1fd JumpB
	var_32_bool = 0; // 0x1fe MovB
	return 2; // 0x1ff Return
	
Label_512:
	var_37_bool = 0; var_38_object = Obj(); // 0x200 PushV
	var_38_object = var_34_object; // 0x201 Mov
	func_760(var_38_object); // 0x202 NEW_2
	var_32_bool = var_37_bool; // 0x203 Mov
	return 2; // 0x205 Return
}


func_1145(var_219_bool)
{
	var_221_int = 0; var_222_string = ""; // 0x47a PushV
	var_222_string = "k9q01"; // 0x47b MovS
	func_1068(var_221_int, var_222_string); // 0x47c NEW_2
	var_225_int = 2; // 0x47e PushI
	var_226_bool = var_221_int == var_225_int; // 0x47f Eq
	if(var_226_bool == 0) goto Label_1155; // 0x480 JumpB
	var_219_bool = 1; // 0x481 MovB
	return 0; // 0x482 Return
	
Label_1155:
	var_219_bool = 0; // 0x483 MovB
	return 0; // 0x484 Return
}


