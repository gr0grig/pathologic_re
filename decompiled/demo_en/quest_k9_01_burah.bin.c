task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xb0 PushI
	if(var_9_int == 0) goto Label_440; // 0xb1 JumpB
	func_1043(); // 0xb3 NEW_2
	var_11_int = 27767; // 0xb5 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xb6 Eq
	if(var_12_bool == 0) goto Label_199; // 0xb7 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xb8 PushV
	var_13_object = var_1_object; // 0xb9 MovT
	var_14_object = var_0_object; // 0xba MovT
	func_1104(); // 0xbb NEW_2
	var_17_object = Obj(); var_18_object = Obj(); // 0xbd PushV
	var_17_object = var_1_object; // 0xbe MovT
	var_18_object = var_0_object; // 0xbf MovT
	func_1110(); // 0xc0 NEW_2
	var_21_object = Obj(); var_22_object = Obj(); // 0xc2 PushV
	var_21_object = var_1_object; // 0xc3 MovT
	var_22_object = var_0_object; // 0xc4 MovT
	func_1116(); // 0xc5 NEW_2
	
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
	func_1143(var_81_object); // 0xd7 NEW_2
	if(var_80_bool == 0) goto Label_224; // 0xd9 JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0xda PushV
	var_87_object = var_1_object; // 0xdb MovT
	func_1155(var_87_object); // 0xdc NEW_2
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
	func_1246(var_179_bool); // 0x1ae NEW_2
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
	func_1050(var_13_object); // 0x1cf NEW_2
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
	func_1050(var_8_object); // 0x1dc NEW_2
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
	func_1050(var_53_object); // 0x248 NEW_2
	var_52_object = var_53_object; // 0x249 Mov
	func_917(var_52_object); // 0x24b NEW_2
	
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
	func_997(var_14_string); // 0x27a NEW_2
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
	var_264_string = ""; // 0x28f PushV
	var_264_string = "Neutral"; // 0x290 MovS
	func_997(var_264_string); // 0x291 NEW_2
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
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1240(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1238(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1242(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1244(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1221(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1050(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_859(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_256_bool = var_36_bool == 0; // 0x3f Not
	if(var_256_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_257_object = Obj(); // 0x46 PushV
	var_257_object = var_27_object; // 0x47 Mov
	func_842(); // 0x48 NEW_2
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


func_1155(var_226_bool)
{
	var_228_int = 0; var_229_string = ""; // 0x484 PushV
	var_229_string = "ook9BurahTermitnik2_1"; // 0x485 MovS
	func_1066(var_228_int, var_229_string); // 0x486 NEW_2
	var_230_int = 0; // 0x488 PushI
	var_231_bool = var_228_int == var_230_int; // 0x489 Eq
	if(var_231_bool == 0) goto Label_1165; // 0x48a JumpB
	var_226_bool = 1; // 0x48b MovB
	return 0; // 0x48c Return
	
Label_1165:
	var_226_bool = 0; // 0x48d MovB
	return 0; // 0x48e Return
}


func_1028(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x404 PushV
	var_135_bool = 0; // 0x405 PushV
	func_1246(var_135_bool); // 0x406 NEW_2
	if(var_135_bool == 0) goto Label_1041; // 0x408 JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x409 Func
	var_136_bool = var_134_bool; // 0x40b Push
	if(var_136_bool == 0) goto Label_1041; // 0x40c JumpB
	lshPlaySpeech(var_132_string); // 0x40d Func
	var_131_bool = 1; // 0x40f MovB
	return 2; // 0x410 Return
	
Label_1041:
	var_131_bool = 0; // 0x411 MovB
	return 2; // 0x412 Return
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
	func_1056(var_64_cvector, var_65_cvector); // 0x321 NEW_2
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
	CameraTransit(var_55_cvector, var_53_cvector); // 0x331 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x333 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x334 PushE
	Rotate(var_77_float, var_78_float); // 0x335 Func
	var_79_bool = 0; // 0x337 PushV
	func_1246(var_79_bool); // 0x338 NEW_2
	if(var_79_bool == 0) goto Label_828; // 0x33a JumpB
	goto Label_836; // 0x33b Jump
	
Label_836:
	CameraWaitForPlayFinish(); // 0x344 Func
	ResumeWorld(); // 0x346 Func
	var_37_bool = 1; // 0x348 MovB
	return 18; // 0x349 Return
	
Label_828:
	var_80_string = "head"; // 0x33c PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x33d Func
	var_81_bool = var_57_bool; // 0x33f Push
	if(var_81_bool == 0) goto Label_836; // 0x340 JumpB
	var_82_string = "head"; // 0x341 PushS
	LookAsyncCamera(var_82_string); // 0x342 Func
}


func_519(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x207 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x208 PushE
	RotateAsync(var_84_float, var_85_float); // 0x209 Func
	return 0; // 0x20b Return
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


func_1167()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x48f PushV
	var_38_int = 520; // 0x490 PushI
	var_39_int = 1; // 0x491 PushI
	var_40_int = 529812; // 0x492 PushI
	CreateDiaryEntry(var_37_object, var_38_int, var_39_int, var_40_int); // 0x493 Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0x495 PushV
	var_42_object = var_37_object; // 0x496 Mov
	var_43_int = 517; // 0x497 MovI
	func_1193(var_41_bool, var_42_object, var_43_int); // 0x498 NEW_2
	return 2; // 0x49a Return
}


func_1043()
{
	var_10_bool = 0; // 0x413 PushV
	func_1246(var_10_bool); // 0x414 NEW_2
	if(var_10_bool == 0) goto Label_1049; // 0x416 JumpB
	lshStopSpeech(); // 0x417 Func
	
Label_1049:
	return 0; // 0x419 Return
}


func_917(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x395 PushV
	var_115_string = "c"; // 0x396 MovS
	var_116_int = 0; // 0x397 MovI
	
Label_920:
	var_120_int = 1; // 0x398 PushI
	if(var_120_int == 0) goto Label_933; // 0x399 JumpB
	var_121_int = 1; // 0x39a PushI
	var_122_int = var_116_int + var_121_int; // 0x39b Add
	var_123_int = var_115_string + var_122_int; // 0x39c Add
	HasProperty(var_123_int, var_117_bool); // 0x39d ObjFunc
	var_124_bool = var_117_bool == 0; // 0x39f Not
	if(var_124_bool == 0) goto Label_930; // 0x3a0 JumpB
	goto Label_933; // 0x3a1 Jump
	
Label_933:
	var_125_bool = var_116_int == 0; // 0x3a5 Not
	if(var_125_bool == 0) goto Label_937; // 0x3a6 JumpB
	var_108_bool = 0; // 0x3a7 MovB
	return 10; // 0x3a8 Return
	
Label_937:
	var_118_int = 0; // 0x3a9 MovI
	var_126_int = 1; // 0x3aa PushI
	var_127_bool = var_116_int > var_126_int; // 0x3ab GT
	if(var_127_bool == 0) goto Label_943; // 0x3ac JumpB
	irand(var_118_int, var_116_int); // 0x3ad Func
	
Label_943:
	var_128_int = 1; // 0x3af PushI
	var_129_int = var_118_int + var_128_int; // 0x3b0 Add
	var_130_int = var_115_string + var_129_int; // 0x3b1 Add
	GetProperty(var_130_int, var_119_string); // 0x3b2 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x3b4 PushV
	var_132_string = var_119_string; // 0x3b5 Mov
	func_1028(var_131_bool, var_132_string); // 0x3b6 NEW_2
	var_108_bool = var_131_bool; // 0x3b7 Mov
	return 10; // 0x3b9 Return
	
Label_930:
	var_137_int = 1; // 0x3a2 PushI
	var_116_int = var_116_int + var_137_int; // 0x3a3 Add2
	goto Label_920; // 0x3a4 Jump
}


func_153(var_2_object, var_199_string)
{
	var_200_bool = 0; // 0x9a PushV
	func_1246(var_200_bool); // 0x9b NEW_2
	var_201_bool = var_200_bool == 0; // 0x9d Not
	if(var_201_bool == 0) goto Label_160; // 0x9e JumpB
	return 0; // 0x9f Return
	
Label_160:
	var_202_bool = var_199_string == var_2_object; // 0xa0 Eq
	if(var_202_bool == 0) goto Label_163; // 0xa1 JumpB
	return 0; // 0xa2 Return
	
Label_163:
	var_203_string = ""; var_204_bool = 0; // 0xa3 PushV
	var_203_string = var_199_string; // 0xa4 Mov
	var_205_string = ""; // 0xa5 PushS
	var_206_bool = var_199_string == var_205_string; // 0xa6 Eq
	if(var_206_bool == 0) goto Label_170; // 0xa7 JumpB
	var_204_bool = 0; // 0xa8 MovB
	goto Label_171; // 0xa9 Jump
	
Label_171:
	func_1013(var_203_string, var_204_bool); // 0xab NEW_2
	var_2_object = var_199_string; // 0xad TMov
	return 0; // 0xae Return
	
Label_170:
	var_204_bool = 1; // 0xaa MovB
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
	func_1087(var_25_int); // 0x2a4 NEW_2
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
	func_1080(var_52_string, var_53_int); // 0x2c8 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2ca Func
	WaitForAnimEnd(var_22_bool); // 0x2cc Func
	var_54_bool = var_22_bool == 0; // 0x2ce Not
	if(var_54_bool == 0) goto Label_721; // 0x2cf JumpB
	goto Label_732; // 0x2d0 Jump
}


func_1050(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x41a PushV
	self(var_101_object); // 0x41b Func
	var_99_object = var_101_object; // 0x41d Mov
	return 2; // 0x41e Return
}


func_1180(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x49c PushV
	GetDiaryRoot(var_52_object); // 0x49d Func
	var_53_bool = var_52_object == 0; // 0x49f Not
	if(var_53_bool == 0) goto Label_1190; // 0x4a0 JumpB
	var_54_string = "Can't retrieve diary root"; // 0x4a1 PushS
	Trace(var_54_string); // 0x4a2 Func
	var_50_object = 0; // 0x4a4 MovB
	return 2; // 0x4a5 Return
	
Label_1190:
	var_50_object = var_52_object; // 0x4a6 Mov
	return 2; // 0x4a7 Return
}


func_1056(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x420 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x421 Or
	var_68_float = sqrt(var_69_int); // 0x422 Sqrt2
	var_70_float = 0.0; // 0x423 PushF
	var_71_bool = var_68_float < var_70_float; // 0x424 LT
	if(var_71_bool == 0) goto Label_1064; // 0x425 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x426 MovV
	return 2; // 0x427 Return
	
Label_1064:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x428 Div2
	return 2; // 0x429 Return
}


func_546()
{
	var_266_float = 0; var_267_float = 0; // 0x222 PushV
	var_268_int = 8; // 0x223 PushI
	var_269_int = 16; // 0x224 PushI
	rand(var_267_float, var_268_int, var_269_int); // 0x225 Func
	var_270_int = 10; // 0x227 PushI
	SetTimer(var_270_int, var_267_float); // 0x228 Func
	return 2; // 0x22a Return
}


func_1193(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; // 0x4a9 PushV
	var_50_object = Obj(); // 0x4aa PushV
	func_1180(var_50_object); // 0x4ab NEW_2
	var_47_object = var_50_object; // 0x4ac Mov
	Find(var_43_int, var_48_object); // 0x4ae ObjFunc
	var_55_bool = var_48_object == 0; // 0x4b0 Not
	if(var_55_bool == 0) goto Label_1208; // 0x4b1 JumpB
	var_56_string = "Can't find diary parent with id: "; // 0x4b2 PushS
	var_57_int = var_56_string + var_43_int; // 0x4b3 Add
	Trace(var_57_int); // 0x4b4 Func
	var_41_bool = 0; // 0x4b6 MovB
	return 6; // 0x4b7 Return
	
Label_1208:
	AddChild(var_42_object); // 0x4b8 ObjFunc
	var_58_int = 7; // 0x4ba PushI
	SendWorldWndMessage(var_58_int); // 0x4bb Func
	GetCategory(var_49_int); // 0x4bd ObjFunc
	SetDiarySection(var_49_int); // 0x4bf Func
	var_41_bool = 0; // 0x4c1 MovB
	return 6; // 0x4c2 Return
}


func_1066(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0; // 0x42a PushV
	GetVariable(var_221_string, var_223_int); // 0x42b Func
	var_220_int = var_223_int; // 0x42d Mov
	return 2; // 0x42e Return
}


func_555()
{
	var_265_int = 10; // 0x22b PushI
	KillTimer(var_265_int); // 0x22c Func
	return 0; // 0x22e Return
}


func_1071(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x42f PushV
	GetGameTime(var_154_float); // 0x430 Func
	var_155_int = 1; // 0x432 PushI
	var_156_int = 0; // 0x433 PushV
	var_157_int = 24; // 0x434 PushI
	var_156_int = var_154_float / var_154_float; // 0x435 Div2
	var_152_int = var_155_int + var_156_int; // 0x436 Add2
	return 2; // 0x437 Return
}


func_1080(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x438 PushV
	var_34_string = "idle"; // 0x439 MovS
	var_35_int = var_32_int; // 0x43a Push
	if(var_35_int == 0) goto Label_1085; // 0x43b JumpB
	var_34_string = var_34_string + var_32_int; // 0x43c Add2
	
Label_1085:
	var_31_string = var_34_string; // 0x43d Mov
	return 2; // 0x43e Return
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


func_954(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x3ba PushV
	var_151_string = "d"; // 0x3bb PushS
	var_152_int = 0; // 0x3bc PushV
	func_1071(var_152_int); // 0x3bd NEW_2
	var_158_int = var_151_string + var_152_int; // 0x3bf Add
	var_159_string = "m"; // 0x3c0 PushS
	var_146_string = var_158_int + var_159_string; // 0x3c1 Add2
	var_147_int = 0; // 0x3c2 MovI
	
Label_963:
	var_160_int = 1; // 0x3c3 PushI
	if(var_160_int == 0) goto Label_976; // 0x3c4 JumpB
	var_161_int = 1; // 0x3c5 PushI
	var_162_int = var_147_int + var_161_int; // 0x3c6 Add
	var_163_int = var_146_string + var_162_int; // 0x3c7 Add
	HasProperty(var_163_int, var_148_bool); // 0x3c8 ObjFunc
	var_164_bool = var_148_bool == 0; // 0x3ca Not
	if(var_164_bool == 0) goto Label_973; // 0x3cb JumpB
	goto Label_976; // 0x3cc Jump
	
Label_976:
	var_165_bool = var_147_int == 0; // 0x3d0 Not
	if(var_165_bool == 0) goto Label_980; // 0x3d1 JumpB
	var_139_bool = 0; // 0x3d2 MovB
	return 10; // 0x3d3 Return
	
Label_980:
	var_149_int = 0; // 0x3d4 MovI
	var_166_int = 1; // 0x3d5 PushI
	var_167_bool = var_147_int > var_166_int; // 0x3d6 GT
	if(var_167_bool == 0) goto Label_986; // 0x3d7 JumpB
	irand(var_149_int, var_147_int); // 0x3d8 Func
	
Label_986:
	var_168_int = 1; // 0x3da PushI
	var_169_int = var_149_int + var_168_int; // 0x3db Add
	var_170_int = var_146_string + var_169_int; // 0x3dc Add
	GetProperty(var_170_int, var_150_string); // 0x3dd ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x3df PushV
	var_172_string = var_150_string; // 0x3e0 Mov
	func_1028(var_171_bool, var_172_string); // 0x3e1 NEW_2
	var_139_bool = var_171_bool; // 0x3e2 Mov
	return 10; // 0x3e4 Return
	
Label_973:
	var_173_int = 1; // 0x3cd PushI
	var_147_int = var_147_int + var_173_int; // 0x3ce Add2
	goto Label_963; // 0x3cf Jump
}


func_1087(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x43f PushV
	var_28_int = 0; // 0x440 MovI
	
Label_1089:
	var_30_string = "all"; // 0x441 PushS
	var_31_string = ""; var_32_int = 0; // 0x442 PushV
	var_32_int = var_28_int; // 0x443 Mov
	func_1080(var_31_string, var_32_int); // 0x444 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x446 Func
	var_36_bool = var_29_bool == 0; // 0x448 Not
	if(var_36_bool == 0) goto Label_1099; // 0x449 JumpB
	goto Label_1102; // 0x44a Jump
	
Label_1102:
	var_25_int = var_28_int; // 0x44e Mov
	return 4; // 0x44f Return
	
Label_1099:
	var_37_int = 1; // 0x44b PushI
	var_28_int = var_28_int + var_37_int; // 0x44c Add2
	goto Label_1089; // 0x44d Jump
}


func_1221(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x4c5 PushV
	var_91_string = "branch"; // 0x4c6 PushS
	GetVariable(var_91_string, var_90_int); // 0x4c7 Func
	var_92_int = 0; // 0x4c9 PushI
	var_93_bool = var_90_int == var_92_int; // 0x4ca Eq
	if(var_93_bool == 0) goto Label_1231; // 0x4cb JumpB
	var_88_int = 1; // 0x4cc MovI
	return 2; // 0x4cd Return
	
Label_1231:
	var_94_int = 1; // 0x4cf PushI
	var_95_bool = var_90_int == var_94_int; // 0x4d0 Eq
	if(var_95_bool == 0) goto Label_1236; // 0x4d1 JumpB
	var_88_int = 2; // 0x4d2 MovI
	return 2; // 0x4d3 Return
	
Label_1236:
	var_88_int = 3; // 0x4d4 MovI
	return 2; // 0x4d5 Return
}


func_842()
{
	var_258_bool = 0; var_259_bool = 0; // 0x34a PushV
	CameraSwitchToNormal(); // 0x34b Func
	var_260_bool = 0; // 0x34d PushV
	func_1246(var_260_bool); // 0x34e NEW_2
	if(var_260_bool == 0) goto Label_850; // 0x350 JumpB
	goto Label_858; // 0x351 Jump
	
Label_858:
	return 2; // 0x35a Return
	
Label_850:
	var_261_string = "head"; // 0x352 PushS
	HasAnimationTrack(var_259_bool, var_261_string); // 0x353 Func
	var_262_bool = var_259_bool; // 0x355 Push
	if(var_262_bool == 0) goto Label_858; // 0x356 JumpB
	var_263_string = "head"; // 0x357 PushS
	UnlookAsync(var_263_string); // 0x358 Func
}


func_1104()
{
	var_15_string = "ook9BurahTermitnik2_1"; // 0x451 PushS
	var_16_int = 1; // 0x452 PushI
	SetVariable(var_15_string, var_16_int); // 0x453 Func
	return 0; // 0x455 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_123; // 0x56 JumpB
	var_199_string = ""; // 0x57 PushV
	var_199_string = "Neutral"; // 0x58 MovS
	func_153(var_193_object, var_199_string); // 0x59 NEW_2
	var_216_int = 526499; // 0x5b PushI
	SetMessage(var_216_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_217_bool = 0; // 0x60 PushV
	var_217_bool = 0; // 0x61 MovB
	var_218_bool = 0; var_219_object = Obj(); // 0x62 PushV
	var_219_object = var_1_object; // 0x63 MovT
	func_1143(var_219_object); // 0x64 NEW_2
	if(var_218_bool == 0) goto Label_109; // 0x66 JumpB
	var_226_bool = 0; var_227_object = Obj(); // 0x67 PushV
	var_227_object = var_1_object; // 0x68 MovT
	func_1155(var_227_object); // 0x69 NEW_2
	if(var_226_bool == 0) goto Label_109; // 0x6b JumpB
	var_217_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_217_bool == 0) goto Label_115; // 0x6d JumpB
	var_232_int = 526501; // 0x6e PushI
	var_233_int = 27768; // 0x6f PushI
	var_234_int = 27767; // 0x70 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x71 TObjFunc
	
Label_115:
	var_235_int = 526500; // 0x73 PushI
	var_236_int = -1; // 0x74 PushI
	var_237_int = 27766; // 0x75 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x76 TObjFunc
	goto Label_123; // 0x78 Jump
	
Label_123:
	var_238_bool = 0; // 0x7b PushV
	func_1246(var_238_bool); // 0x7c NEW_2
	if(var_238_bool == 0) goto Label_138; // 0x7e JumpB
	
Label_127:
	lshWaitForAnimEnd(); // 0x7f Func
	var_239_string = var_3_string; // 0x81 PushT
	if(var_239_string == 0) goto Label_132; // 0x82 JumpB
	goto Label_137; // 0x83 Jump
	
Label_137:
	goto Label_152; // 0x89 Jump
	
Label_152:
	return 0; // 0x98 Return
	
Label_132:
	var_240_string = ""; // 0x84 PushV
	var_240_string = var_2_object; // 0x85 MovT
	func_997(var_240_string); // 0x86 NEW_2
	goto Label_127; // 0x88 Jump
	
Label_138:
	var_251_string = "all"; // 0x8a PushS
	var_252_string = "idle"; // 0x8b PushS
	PlayAnimation(var_251_string, var_252_string); // 0x8c Func
	
Label_142:
	WaitForAnimEnd(); // 0x8e Func
	var_253_string = var_3_string; // 0x90 PushT
	if(var_253_string == 0) goto Label_147; // 0x91 JumpB
	goto Label_152; // 0x92 Jump
	
Label_147:
	var_254_string = "all"; // 0x93 PushS
	var_255_string = "idle"; // 0x94 PushS
	PlayAnimation(var_254_string, var_255_string); // 0x95 Func
	goto Label_142; // 0x97 Jump
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


func_1238(var_85_int)
{
	var_85_int = 515592; // 0x4d6 MovI
	return 0; // 0x4d7 Return
}


func_1110()
{
	var_19_string = "k9q01BurahTalk"; // 0x457 PushS
	var_20_int = 1; // 0x458 PushI
	SetVariable(var_19_string, var_20_int); // 0x459 Func
	return 0; // 0x45b Return
}


func_1240(var_84_int)
{
	var_84_int = 511961; // 0x4d8 MovI
	return 0; // 0x4d9 Return
}


func_1242(var_86_string)
{
	var_86_string = "ui/NPC_Burah.png"; // 0x4da MovS
	return 0; // 0x4db Return
}


func_859(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x35b PushV
	var_106_string = "voice_common"; // 0x35c PushS
	GetVariable(var_106_string, var_104_int); // 0x35d Func
	var_107_int = var_104_int; // 0x35f Push
	if(var_107_int == 0) goto Label_897; // 0x360 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x361 PushV
	var_109_object = var_98_object; // 0x362 Mov
	func_917(var_109_object); // 0x363 NEW_2
	var_138_bool = var_108_bool == 0; // 0x365 Not
	if(var_138_bool == 0) goto Label_879; // 0x366 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x367 PushV
	var_140_object = var_98_object; // 0x368 Mov
	func_954(var_140_object); // 0x369 NEW_2
	var_174_bool = var_139_bool == 0; // 0x36b Not
	if(var_174_bool == 0) goto Label_879; // 0x36c JumpB
	var_97_bool = 0; // 0x36d MovB
	return 4; // 0x36e Return
	
Label_879:
	var_175_int = 2; // 0x36f PushI
	irand(var_105_int, var_175_int); // 0x370 Func
	var_176_int = var_105_int; // 0x372 Push
	if(var_176_int == 0) goto Label_892; // 0x373 JumpB
	var_177_string = "voice_common"; // 0x374 PushS
	var_178_int = 1; // 0x375 PushI
	var_179_int = var_104_int + var_178_int; // 0x376 Add
	var_180_int = 3; // 0x377 PushI
	var_181_int = var_179_int / var_180_int; // 0x378 Mod
	SetVariable(var_177_string, var_181_int); // 0x379 Func
	goto Label_896; // 0x37b Jump
	
Label_896:
	goto Label_915; // 0x380 Jump
	
Label_915:
	var_97_bool = 1; // 0x393 MovB
	return 4; // 0x394 Return
	
Label_892:
	var_182_string = "voice_common"; // 0x37c PushS
	var_183_int = 0; // 0x37d PushI
	SetVariable(var_182_string, var_183_int); // 0x37e Func
	
Label_897:
	var_184_bool = 0; var_185_object = Obj(); // 0x381 PushV
	var_185_object = var_98_object; // 0x382 Mov
	func_954(var_185_object); // 0x383 NEW_2
	var_186_bool = var_184_bool == 0; // 0x385 Not
	if(var_186_bool == 0) goto Label_911; // 0x386 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x387 PushV
	var_188_object = var_98_object; // 0x388 Mov
	func_917(var_188_object); // 0x389 NEW_2
	var_189_bool = var_187_bool == 0; // 0x38b Not
	if(var_189_bool == 0) goto Label_911; // 0x38c JumpB
	var_97_bool = 0; // 0x38d MovB
	return 4; // 0x38e Return
	
Label_911:
	var_190_string = "voice_common"; // 0x38f PushS
	var_191_int = 1; // 0x390 PushI
	SetVariable(var_190_string, var_191_int); // 0x391 Func
}


func_1244(var_87_string)
{
	var_87_string = "ui/NPC_Burah_b.png"; // 0x4dc MovS
	return 0; // 0x4dd Return
}


func_1116()
{
	var_23_bool = 0; // 0x45d PushV
	var_23_bool = 0; // 0x45e MovB
	var_24_int = 0; var_25_string = ""; // 0x45f PushV
	var_25_string = "k9q01BurahTalk"; // 0x460 MovS
	func_1066(var_24_int, var_25_string); // 0x461 NEW_2
	var_28_int = 0; // 0x463 PushI
	var_29_bool = var_24_int != var_28_int; // 0x464 Neq
	if(var_29_bool == 0) goto Label_1134; // 0x465 JumpB
	var_30_int = 0; var_31_string = ""; // 0x466 PushV
	var_31_string = "k9q01DankoTalk"; // 0x467 MovS
	func_1066(var_30_int, var_31_string); // 0x468 NEW_2
	var_32_int = 0; // 0x46a PushI
	var_33_bool = var_30_int != var_32_int; // 0x46b Neq
	if(var_33_bool == 0) goto Label_1134; // 0x46c JumpB
	var_23_bool = 1; // 0x46d MovB
	
Label_1134:
	if(var_23_bool == 0) goto Label_1142; // 0x46e JumpB
	var_34_string = "k9q01"; // 0x46f PushS
	var_35_int = 3; // 0x470 PushI
	SetVariable(var_34_string, var_35_int); // 0x471 Func
	func_1167(); // 0x474 NEW_2
	
Label_1142:
	return 0; // 0x476 Return
}


func_1246(var_79_bool)
{
	var_79_bool = 1; // 0x4de MovB
	return 0; // 0x4df Return
}


func_735(var_45_bool)
{
	var_45_bool = 1; // 0x2df MovB
	return 0; // 0x2e0 Return
}


func_737()
{
	StopAnimation(); // 0x2e1 Func
	StopGroup0(); // 0x2e3 Func
	return 0; // 0x2e5 Return
}


func_612()
{
	StopGroup0(); // 0x264 Func
	func_555(); // 0x267 NEW_2
	var_8_string = ""; // 0x269 PushV
	var_8_string = "Neutral"; // 0x26a MovS
	func_997(var_8_string); // 0x26b NEW_2
	func_546(); // 0x26e NEW_2
	return 0; // 0x270 Return
}


func_997(var_240_string)
{
	var_241_bool = 0; var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_float = 0; var_246_float = 0; // 0x3e5 PushV
	lshHasAnimation(var_244_bool, var_240_string); // 0x3e6 Func
	var_247_bool = var_244_bool; // 0x3e8 Push
	if(var_247_bool == 0) goto Label_1008; // 0x3e9 JumpB
	lshGetAnimTimes(var_240_string, var_245_float, var_246_float); // 0x3ea Func
	var_248_bool = 0; // 0x3ec PushB
	lshPlayAnimation(var_245_float, var_246_float, var_248_bool); // 0x3ed Func
	goto Label_1012; // 0x3ef Jump
	
Label_1012:
	return 6; // 0x3f4 Return
	
Label_1008:
	var_249_string = "Can't find lsh animation : "; // 0x3f0 PushS
	var_250_int = var_249_string + var_240_string; // 0x3f1 Add
	Trace(var_250_int); // 0x3f2 Func
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


func_1013(var_203_string, var_204_bool)
{
	var_207_bool = 0; var_208_float = 0; var_209_float = 0; var_210_bool = 0; var_211_float = 0; var_212_float = 0; // 0x3f5 PushV
	lshHasAnimation(var_210_bool, var_203_string); // 0x3f6 Func
	var_213_bool = var_210_bool; // 0x3f8 Push
	if(var_213_bool == 0) goto Label_1023; // 0x3f9 JumpB
	lshGetAnimTimes(var_203_string, var_211_float, var_212_float); // 0x3fa Func
	lshPlayAnimation(var_211_float, var_212_float, var_204_bool); // 0x3fc Func
	goto Label_1027; // 0x3fe Jump
	
Label_1027:
	return 6; // 0x403 Return
	
Label_1023:
	var_214_string = "Can't find lsh animation : "; // 0x3ff PushS
	var_215_int = var_214_string + var_203_string; // 0x400 Add
	Trace(var_215_int); // 0x401 Func
}


func_1143(var_218_bool)
{
	var_220_int = 0; var_221_string = ""; // 0x478 PushV
	var_221_string = "k9q01"; // 0x479 MovS
	func_1066(var_220_int, var_221_string); // 0x47a NEW_2
	var_224_int = 2; // 0x47c PushI
	var_225_bool = var_220_int == var_224_int; // 0x47d Eq
	if(var_225_bool == 0) goto Label_1153; // 0x47e JumpB
	var_218_bool = 1; // 0x47f MovB
	return 0; // 0x480 Return
	
Label_1153:
	var_218_bool = 0; // 0x481 MovB
	return 0; // 0x482 Return
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


