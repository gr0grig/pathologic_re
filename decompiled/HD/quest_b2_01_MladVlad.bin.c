task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xbb PushI
	if(var_9_int == 0) goto Label_468; // 0xbc JumpB
	func_1073(); // 0xbe NEW_2
	var_11_int = 21418; // 0xc0 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc1 Eq
	if(var_12_bool == 0) goto Label_205; // 0xc2 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc3 PushV
	var_13_object = var_1_object; // 0xc4 MovT
	var_14_object = var_0_object; // 0xc5 MovT
	func_1146(); // 0xc6 NEW_2
	var_17_object = Obj(); var_18_object = Obj(); // 0xc8 PushV
	var_17_object = var_1_object; // 0xc9 MovT
	var_18_object = var_0_object; // 0xca MovT
	func_1164(); // 0xcb NEW_2
	
Label_205:
	var_41_int = 21423; // 0xcd PushI
	var_42_bool = var_8_bool == var_41_int; // 0xce Eq
	if(var_42_bool == 0) goto Label_218; // 0xcf JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0xd0 PushV
	var_43_object = var_1_object; // 0xd1 MovT
	var_44_object = var_0_object; // 0xd2 MovT
	func_1152(); // 0xd3 NEW_2
	var_47_object = Obj(); var_48_object = Obj(); // 0xd5 PushV
	var_47_object = var_1_object; // 0xd6 MovT
	var_48_object = var_0_object; // 0xd7 MovT
	func_1164(); // 0xd8 NEW_2
	
Label_218:
	var_49_int = 21431; // 0xda PushI
	var_50_bool = var_8_bool == var_49_int; // 0xdb Eq
	if(var_50_bool == 0) goto Label_231; // 0xdc JumpB
	var_51_object = Obj(); var_52_object = Obj(); // 0xdd PushV
	var_51_object = var_1_object; // 0xde MovT
	var_52_object = var_0_object; // 0xdf MovT
	func_1158(); // 0xe0 NEW_2
	var_55_object = Obj(); var_56_object = Obj(); // 0xe2 PushV
	var_55_object = var_1_object; // 0xe3 MovT
	var_56_object = var_0_object; // 0xe4 MovT
	func_1164(); // 0xe5 NEW_2
	
Label_231:
	var_57_int = 21417; // 0xe7 PushI
	var_58_bool = var_7_cvector == var_57_int; // 0xe8 Eq
	if(var_58_bool == 0) goto Label_279; // 0xe9 JumpB
	var_59_string = ""; // 0xea PushV
	var_59_string = "Neutral"; // 0xeb MovS
	func_164(var_8_bool, var_59_string); // 0xec NEW_2
	var_76_int = 520225; // 0xee PushI
	SetMessage(var_76_int); // 0xef TObjFunc
	ClearReplies(); // 0xf1 TObjFunc
	var_77_bool = 0; var_78_object = Obj(); // 0xf3 PushV
	var_78_object = var_1_object; // 0xf4 MovT
	func_1200(var_78_object); // 0xf5 NEW_2
	if(var_77_bool == 0) goto Label_253; // 0xf7 JumpB
	var_83_int = 520226; // 0xf8 PushI
	var_84_int = 21419; // 0xf9 PushI
	var_85_int = 21418; // 0xfa PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xfb TObjFunc
	
Label_253:
	var_86_bool = 0; var_87_object = Obj(); // 0xfd PushV
	var_87_object = var_1_object; // 0xfe MovT
	func_1212(var_87_object); // 0xff NEW_2
	if(var_86_bool == 0) goto Label_263; // 0x101 JumpB
	var_92_int = 520231; // 0x102 PushI
	var_93_int = 21424; // 0x103 PushI
	var_94_int = 21423; // 0x104 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x105 TObjFunc
	
Label_263:
	var_95_bool = 0; var_96_object = Obj(); // 0x107 PushV
	var_96_object = var_1_object; // 0x108 MovT
	func_1224(var_96_object); // 0x109 NEW_2
	if(var_95_bool == 0) goto Label_273; // 0x10b JumpB
	var_101_int = 520239; // 0x10c PushI
	var_102_int = 21432; // 0x10d PushI
	var_103_int = 21431; // 0x10e PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x10f TObjFunc
	
Label_273:
	var_104_int = 520246; // 0x111 PushI
	var_105_int = -1; // 0x112 PushI
	var_106_int = 21438; // 0x113 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x114 TObjFunc
	return 0; // 0x116 Return
	
Label_279:
	var_107_int = 21432; // 0x117 PushI
	var_108_bool = var_7_cvector == var_107_int; // 0x118 Eq
	if(var_108_bool == 0) goto Label_297; // 0x119 JumpB
	var_109_string = ""; // 0x11a PushV
	var_109_string = "Sly"; // 0x11b MovS
	func_164(var_8_bool, var_109_string); // 0x11c NEW_2
	var_110_int = 520240; // 0x11e PushI
	SetMessage(var_110_int); // 0x11f TObjFunc
	ClearReplies(); // 0x121 TObjFunc
	var_111_int = 520241; // 0x123 PushI
	var_112_int = 21434; // 0x124 PushI
	var_113_int = 21433; // 0x125 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x126 TObjFunc
	return 0; // 0x128 Return
	
Label_297:
	var_114_int = 21434; // 0x129 PushI
	var_115_bool = var_7_cvector == var_114_int; // 0x12a Eq
	if(var_115_bool == 0) goto Label_320; // 0x12b JumpB
	var_116_string = ""; // 0x12c PushV
	var_116_string = "Neutral"; // 0x12d MovS
	func_164(var_8_bool, var_116_string); // 0x12e NEW_2
	var_117_int = 520242; // 0x130 PushI
	SetMessage(var_117_int); // 0x131 TObjFunc
	ClearReplies(); // 0x133 TObjFunc
	var_118_int = 520243; // 0x135 PushI
	var_119_int = 21436; // 0x136 PushI
	var_120_int = 21435; // 0x137 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x138 TObjFunc
	var_121_int = 530818; // 0x13a PushI
	var_122_int = 32128; // 0x13b PushI
	var_123_int = 32127; // 0x13c PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x13d TObjFunc
	return 0; // 0x13f Return
	
Label_320:
	var_124_int = 32128; // 0x140 PushI
	var_125_bool = var_7_cvector == var_124_int; // 0x141 Eq
	if(var_125_bool == 0) goto Label_338; // 0x142 JumpB
	var_126_string = ""; // 0x143 PushV
	var_126_string = "Neutral"; // 0x144 MovS
	func_164(var_8_bool, var_126_string); // 0x145 NEW_2
	var_127_int = 530819; // 0x147 PushI
	SetMessage(var_127_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_128_int = 530820; // 0x14c PushI
	var_129_int = 21436; // 0x14d PushI
	var_130_int = 32129; // 0x14e PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x14f TObjFunc
	return 0; // 0x151 Return
	
Label_338:
	var_131_int = 21436; // 0x152 PushI
	var_132_bool = var_7_cvector == var_131_int; // 0x153 Eq
	if(var_132_bool == 0) goto Label_361; // 0x154 JumpB
	var_133_string = ""; // 0x155 PushV
	var_133_string = "Neutral"; // 0x156 MovS
	func_164(var_8_bool, var_133_string); // 0x157 NEW_2
	var_134_int = 520244; // 0x159 PushI
	SetMessage(var_134_int); // 0x15a TObjFunc
	ClearReplies(); // 0x15c TObjFunc
	var_135_int = 520245; // 0x15e PushI
	var_136_int = -1; // 0x15f PushI
	var_137_int = 21437; // 0x160 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x161 TObjFunc
	var_138_int = 527839; // 0x163 PushI
	var_139_int = -1; // 0x164 PushI
	var_140_int = 29182; // 0x165 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x166 TObjFunc
	return 0; // 0x168 Return
	
Label_361:
	var_141_int = 21424; // 0x169 PushI
	var_142_bool = var_7_cvector == var_141_int; // 0x16a Eq
	if(var_142_bool == 0) goto Label_379; // 0x16b JumpB
	var_143_string = ""; // 0x16c PushV
	var_143_string = "Neutral"; // 0x16d MovS
	func_164(var_8_bool, var_143_string); // 0x16e NEW_2
	var_144_int = 520232; // 0x170 PushI
	SetMessage(var_144_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_145_int = 520233; // 0x175 PushI
	var_146_int = 21426; // 0x176 PushI
	var_147_int = 21425; // 0x177 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x178 TObjFunc
	return 0; // 0x17a Return
	
Label_379:
	var_148_int = 21426; // 0x17b PushI
	var_149_bool = var_7_cvector == var_148_int; // 0x17c Eq
	if(var_149_bool == 0) goto Label_402; // 0x17d JumpB
	var_150_string = ""; // 0x17e PushV
	var_150_string = "Untrust"; // 0x17f MovS
	func_164(var_8_bool, var_150_string); // 0x180 NEW_2
	var_151_int = 520234; // 0x182 PushI
	SetMessage(var_151_int); // 0x183 TObjFunc
	ClearReplies(); // 0x185 TObjFunc
	var_152_int = 520235; // 0x187 PushI
	var_153_int = 21428; // 0x188 PushI
	var_154_int = 21427; // 0x189 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x18a TObjFunc
	var_155_int = 520238; // 0x18c PushI
	var_156_int = -1; // 0x18d PushI
	var_157_int = 21430; // 0x18e PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_158_int = 21428; // 0x192 PushI
	var_159_bool = var_7_cvector == var_158_int; // 0x193 Eq
	if(var_159_bool == 0) goto Label_420; // 0x194 JumpB
	var_160_string = ""; // 0x195 PushV
	var_160_string = "Neutral"; // 0x196 MovS
	func_164(var_8_bool, var_160_string); // 0x197 NEW_2
	var_161_int = 520236; // 0x199 PushI
	SetMessage(var_161_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_162_int = 520237; // 0x19e PushI
	var_163_int = -1; // 0x19f PushI
	var_164_int = 21429; // 0x1a0 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x1a1 TObjFunc
	return 0; // 0x1a3 Return
	
Label_420:
	var_165_int = 21419; // 0x1a4 PushI
	var_166_bool = var_7_cvector == var_165_int; // 0x1a5 Eq
	if(var_166_bool == 0) goto Label_438; // 0x1a6 JumpB
	var_167_string = ""; // 0x1a7 PushV
	var_167_string = "Untrust"; // 0x1a8 MovS
	func_164(var_8_bool, var_167_string); // 0x1a9 NEW_2
	var_168_int = 520227; // 0x1ab PushI
	SetMessage(var_168_int); // 0x1ac TObjFunc
	ClearReplies(); // 0x1ae TObjFunc
	var_169_int = 520228; // 0x1b0 PushI
	var_170_int = 21421; // 0x1b1 PushI
	var_171_int = 21420; // 0x1b2 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x1b3 TObjFunc
	return 0; // 0x1b5 Return
	
Label_438:
	var_172_int = 21421; // 0x1b6 PushI
	var_173_bool = var_7_cvector == var_172_int; // 0x1b7 Eq
	if(var_173_bool == 0) goto Label_456; // 0x1b8 JumpB
	var_174_string = ""; // 0x1b9 PushV
	var_174_string = "Neutral"; // 0x1ba MovS
	func_164(var_8_bool, var_174_string); // 0x1bb NEW_2
	var_175_int = 520229; // 0x1bd PushI
	SetMessage(var_175_int); // 0x1be TObjFunc
	ClearReplies(); // 0x1c0 TObjFunc
	var_176_int = 520230; // 0x1c2 PushI
	var_177_int = -1; // 0x1c3 PushI
	var_178_int = 21422; // 0x1c4 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x1c5 TObjFunc
	return 0; // 0x1c7 Return
	
Label_456:
	var_3_string = 1; // 0x1c8 TMovB
	var_179_bool = 0; // 0x1c9 PushV
	func_1261(var_179_bool); // 0x1ca NEW_2
	if(var_179_bool == 0) goto Label_464; // 0x1cc JumpB
	lshStopAnimation(); // 0x1cd Func
	goto Label_466; // 0x1cf Jump
	
Label_466:
	return 0; // 0x1d2 Return
	
Label_464:
	StopAnimation(); // 0x1d0 Func
	
Label_468:
	return 0; // 0x1d4 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1e1 PushV
	var_10_string = "cleanup"; // 0x1e2 PushS
	var_11_bool = var_7_string == var_10_string; // 0x1e3 Eq
	if(var_11_bool == 0) goto Label_496; // 0x1e4 JumpB
	var_1_object = 1; // 0x1e5 TMovB
	IsLoaded(var_9_bool); // 0x1e6 Func
	var_12_bool = var_9_bool == 0; // 0x1e8 Not
	if(var_12_bool == 0) goto Label_495; // 0x1e9 JumpB
	var_13_object = Obj(); // 0x1ea PushV
	func_1080(var_13_object); // 0x1eb NEW_2
	RemoveActor(var_13_object); // 0x1ed Func
	
Label_495:
	goto Label_500; // 0x1ef Jump
	
Label_500:
	return 2; // 0x1f4 Return
	
Label_496:
	var_16_string = "restore"; // 0x1f0 PushS
	var_17_bool = var_7_string == var_16_string; // 0x1f1 Eq
	if(var_17_bool == 0) goto Label_500; // 0x1f2 JumpB
	var_1_object = 0; // 0x1f3 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x1f5 PushT
	if(var_7_object == 0) goto Label_510; // 0x1f6 JumpB
	var_8_object = Obj(); // 0x1f7 PushV
	func_1080(var_8_object); // 0x1f8 NEW_2
	RemoveActor(var_8_object); // 0x1fa Func
	Hold(); // 0x1fc Func
	
Label_510:
	func_625(); // 0x1ff NEW_2
	return 0; // 0x201 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_640(); // 0x203 NEW_2
	return 0; // 0x205 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x24c PushI
	var_9_bool = var_7_int == var_8_int; // 0x24d Eq
	if(var_9_bool == 0) goto Label_624; // 0x24e JumpB
	func_583(); // 0x250 NEW_2
	var_11_bool = 0; // 0x252 PushV
	var_11_bool = 0; // 0x253 MovB
	var_12_bool = 0; // 0x254 PushV
	func_797(var_12_bool); // 0x255 NEW_2
	if(var_12_bool == 0) goto Label_605; // 0x257 JumpB
	var_15_bool = 0; // 0x258 PushV
	func_552(var_15_bool); // 0x259 NEW_2
	if(var_15_bool == 0) goto Label_605; // 0x25b JumpB
	var_11_bool = 1; // 0x25c MovB
	
Label_605:
	if(var_11_bool == 0) goto Label_618; // 0x25d JumpB
	var_32_bool = 0; // 0x25e PushV
	func_532(var_32_bool); // 0x25f NEW_2
	if(var_32_bool == 0) goto Label_617; // 0x261 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x262 PushV
	var_53_object = Obj(); // 0x263 PushV
	func_1080(var_53_object); // 0x264 NEW_2
	var_52_object = var_53_object; // 0x265 Mov
	func_947(var_52_object); // 0x267 NEW_2
	
Label_617:
	goto Label_624; // 0x269 Jump
	
Label_624:
	return 0; // 0x270 Return
	
Label_618:
	func_547(var_7_int); // 0x26b NEW_2
	func_574(); // 0x26e NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x28e Push
	if(var_8_bool == 0) goto Label_660; // 0x28f JumpB
	func_574(); // 0x291 NEW_2
	goto Label_664; // 0x293 Jump
	
Label_664:
	return 0; // 0x298 Return
	
Label_660:
	var_14_string = ""; // 0x294 PushV
	var_14_string = "Neutral"; // 0x295 MovS
	func_1027(var_14_string); // 0x296 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x299 PushV
	IsOverrideActive(var_9_bool); // 0x29a Func
	var_10_bool = var_9_bool == 0; // 0x29c Not
	if(var_10_bool == 0) goto Label_693; // 0x29d JumpB
	EventDisable(0); // 0x29e EventDisable
	func_765(); // 0x2a0 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x2a2 PushV
	var_12_object = var_7_object; // 0x2a3 Mov
	func_788(var_12_object); // 0x2a4 NEW_2
	EventEnable(0); // 0x2a6 EventEnable
	var_25_object = Obj(); // 0x2a7 PushV
	var_25_object = var_7_object; // 0x2a8 Mov
	func_469(var_25_object); // 0x2a9 NEW_2
	var_277_string = ""; // 0x2ab PushV
	var_277_string = "Neutral"; // 0x2ac MovS
	func_1027(var_277_string); // 0x2ad NEW_2
	func_583(); // 0x2b0 NEW_2
	func_574(); // 0x2b3 NEW_2
	
Label_693:
	return 2; // 0x2b5 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_518(var_6_bool); // 0x1de NEW_2
	return 0; // 0x1e0 Return
}


func_1152()
{
	var_45_string = "oob2MladVladFactory2"; // 0x481 PushS
	var_46_int = 1; // 0x482 PushI
	SetVariable(var_45_string, var_46_int); // 0x483 Func
	return 0; // 0x485 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_802(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1255(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1253(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1257(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1259(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1236(var_89_int); // 0x22 NEW_2
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
	func_1080(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_889(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_268_bool = var_36_bool == 0; // 0x3f Not
	if(var_268_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_269_object = Obj(); // 0x46 PushV
	var_269_object = var_27_object; // 0x47 Mov
	func_871(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_770(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x302 PushV
	GetPosition(var_27_cvector); // 0x303 Func
	GetPosition(var_28_cvector); // 0x305 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x307 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x308 Or2
	return 6; // 0x309 Return
}


func_1027(var_252_string)
{
	var_253_bool = 0; var_254_float = 0; var_255_float = 0; var_256_bool = 0; var_257_float = 0; var_258_float = 0; // 0x403 PushV
	lshHasAnimation(var_256_bool, var_252_string); // 0x404 Func
	var_259_bool = var_256_bool; // 0x406 Push
	if(var_259_bool == 0) goto Label_1038; // 0x407 JumpB
	lshGetAnimTimes(var_252_string, var_257_float, var_258_float); // 0x408 Func
	var_260_bool = 0; // 0x40a PushB
	lshPlayAnimation(var_257_float, var_258_float, var_260_bool); // 0x40b Func
	goto Label_1042; // 0x40d Jump
	
Label_1042:
	return 6; // 0x412 Return
	
Label_1038:
	var_261_string = "Can't find lsh animation : "; // 0x40e PushS
	var_262_int = var_261_string + var_252_string; // 0x40f Add
	Trace(var_262_int); // 0x410 Func
}


func_640()
{
	StopGroup0(); // 0x280 Func
	func_583(); // 0x283 NEW_2
	var_8_string = ""; // 0x285 PushV
	var_8_string = "Neutral"; // 0x286 MovS
	func_1027(var_8_string); // 0x287 NEW_2
	func_574(); // 0x28a NEW_2
	return 0; // 0x28c Return
}


func_1158()
{
	var_53_string = "oob2MladVladFactory3"; // 0x487 PushS
	var_54_int = 1; // 0x488 PushI
	SetVariable(var_53_string, var_54_int); // 0x489 Func
	return 0; // 0x48b Return
}


func_518(var_0_object)
{
	var_7_bool = 0; // 0x206 PushV
	func_797(var_7_bool); // 0x207 NEW_2
	var_10_bool = var_7_bool == 0; // 0x209 Not
	if(var_10_bool == 0) goto Label_525; // 0x20a JumpB
	Hold(); // 0x20b Func
	
Label_525:
	GetDirection(var_0_object); // 0x20d Func
	
Label_527:
	func_694(); // 0x210 NEW_2
	goto Label_527; // 0x212 Jump
}


func_778(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x30a PushV
	GetPosition(var_20_cvector); // 0x30b Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x30d Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x30e PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x30f PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x310 Func
	var_15_bool = var_22_bool; // 0x312 Mov
	return 6; // 0x313 Return
}


func_1164()
{
	var_19_bool = 0; // 0x48d PushV
	var_19_bool = 0; // 0x48e MovB
	var_20_bool = 0; // 0x48f PushV
	var_20_bool = 0; // 0x490 MovB
	var_21_int = 0; var_22_string = ""; // 0x491 PushV
	var_22_string = "oob2MladVladFactory1"; // 0x492 MovS
	func_1096(var_21_int, var_22_string); // 0x493 NEW_2
	var_25_int = 0; // 0x495 PushI
	var_26_bool = var_21_int != var_25_int; // 0x496 Neq
	if(var_26_bool == 0) goto Label_1184; // 0x497 JumpB
	var_27_int = 0; var_28_string = ""; // 0x498 PushV
	var_28_string = "oob2MladVladFactory2"; // 0x499 MovS
	func_1096(var_27_int, var_28_string); // 0x49a NEW_2
	var_29_int = 0; // 0x49c PushI
	var_30_bool = var_27_int != var_29_int; // 0x49d Neq
	if(var_30_bool == 0) goto Label_1184; // 0x49e JumpB
	var_20_bool = 1; // 0x49f MovB
	
Label_1184:
	if(var_20_bool == 0) goto Label_1193; // 0x4a0 JumpB
	var_31_int = 0; var_32_string = ""; // 0x4a1 PushV
	var_32_string = "oob2MladVladFactory3"; // 0x4a2 MovS
	func_1096(var_31_int, var_32_string); // 0x4a3 NEW_2
	var_33_int = 0; // 0x4a5 PushI
	var_34_bool = var_31_int != var_33_int; // 0x4a6 Neq
	if(var_34_bool == 0) goto Label_1193; // 0x4a7 JumpB
	var_19_bool = 1; // 0x4a8 MovB
	
Label_1193:
	if(var_19_bool == 0) goto Label_1199; // 0x4a9 JumpB
	var_35_bool = 0; var_36_string = ""; var_37_string = ""; // 0x4aa PushV
	var_36_string = "quest_b2_01"; // 0x4ab MovS
	var_37_string = "remove_mladvlad"; // 0x4ac MovS
	func_1101(var_35_bool, var_36_string, var_37_string); // 0x4ad NEW_2
	
Label_1199:
	return 0; // 0x4af Return
}


func_1043(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0; // 0x413 PushV
	lshHasAnimation(var_211_bool, var_204_string); // 0x414 Func
	var_214_bool = var_211_bool; // 0x416 Push
	if(var_214_bool == 0) goto Label_1053; // 0x417 JumpB
	lshGetAnimTimes(var_204_string, var_212_float, var_213_float); // 0x418 Func
	lshPlayAnimation(var_212_float, var_213_float, var_205_bool); // 0x41a Func
	goto Label_1057; // 0x41c Jump
	
Label_1057:
	return 6; // 0x421 Return
	
Label_1053:
	var_215_string = "Can't find lsh animation : "; // 0x41d PushS
	var_216_int = var_215_string + var_204_string; // 0x41e Add
	Trace(var_216_int); // 0x41f Func
}


func_788(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x314 PushV
	GetPosition(var_14_cvector); // 0x315 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x317 PushV
	var_16_cvector = var_14_cvector; // 0x318 Mov
	func_778(var_15_bool, var_16_cvector); // 0x319 NEW_2
	var_11_bool = var_15_bool; // 0x31a Mov
	return 2; // 0x31c Return
}


func_532(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x214 PushV
	var_35_string = "player"; // 0x215 PushS
	FindActor(var_34_object, var_35_string); // 0x216 Func
	var_36_bool = var_34_object == 0; // 0x218 Not
	if(var_36_bool == 0) goto Label_540; // 0x219 JumpB
	var_32_bool = 0; // 0x21a MovB
	return 2; // 0x21b Return
	
Label_540:
	var_37_bool = 0; var_38_object = Obj(); // 0x21c PushV
	var_38_object = var_34_object; // 0x21d Mov
	func_788(var_38_object); // 0x21e NEW_2
	var_32_bool = var_37_bool; // 0x21f Mov
	return 2; // 0x221 Return
}


func_797(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x31d PushV
	IsLoaded(var_9_bool); // 0x31e Func
	var_7_bool = var_9_bool; // 0x320 Mov
	return 2; // 0x321 Return
}


func_802(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x322 PushV
	GetPosition(var_50_cvector); // 0x323 ObjFunc
	GetEyesHeight(var_49_float); // 0x325 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x327 PushE
	var_58_float = var_58_float + var_49_float; // 0x328 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x329 PopE
	GetPosition(var_51_cvector); // 0x32a Func
	GetEyesHeight(var_49_float); // 0x32c Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x32e PushE
	var_59_float = var_59_float + var_49_float; // 0x32f Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x330 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x331 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x332 PushE
	var_60_float = 0; // 0x333 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x334 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x335 Or
	var_62_float = sqrt(var_61_int); // 0x336 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x337 Div2
	var_53_cvector = -var_52_cvector; // 0x338 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x339 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x33a PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x33b PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x33c Xor2
	func_1086(var_64_cvector, var_65_cvector); // 0x33d NEW_2
	var_72_int = 25; // 0x33f PushI
	var_73_float = var_64_cvector * var_72_int; // 0x340 Mult
	var_74_int = var_63_float + var_73_float; // 0x341 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x342 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x343 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x344 Add2
	IsOverrideActive(var_56_bool); // 0x345 Func
	var_76_bool = var_56_bool; // 0x347 Push
	if(var_76_bool == 0) goto Label_843; // 0x348 JumpB
	var_37_bool = 0; // 0x349 MovB
	return 18; // 0x34a Return
	
Label_843:
	StopWorld(); // 0x34b Func
	var_77_bool = 1; // 0x34d PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x34e Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x350 PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x351 PushE
	Rotate(var_78_float, var_79_float); // 0x352 Func
	var_80_bool = 0; // 0x354 PushV
	func_1261(var_80_bool); // 0x355 NEW_2
	if(var_80_bool == 0) goto Label_857; // 0x357 JumpB
	goto Label_865; // 0x358 Jump
	
Label_865:
	CameraWaitForPlayFinish(); // 0x361 Func
	ResumeWorld(); // 0x363 Func
	var_37_bool = 1; // 0x365 MovB
	return 18; // 0x366 Return
	
Label_857:
	var_81_string = "head"; // 0x359 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x35a Func
	var_82_bool = var_57_bool; // 0x35c Push
	if(var_82_bool == 0) goto Label_865; // 0x35d JumpB
	var_83_string = "head"; // 0x35e PushS
	LookAsyncCamera(var_83_string); // 0x35f Func
}


func_547(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x223 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x224 PushE
	RotateAsync(var_84_float, var_85_float); // 0x225 Func
	return 0; // 0x227 Return
}


func_164(var_2_object, var_200_string)
{
	var_201_bool = 0; // 0xa5 PushV
	func_1261(var_201_bool); // 0xa6 NEW_2
	var_202_bool = var_201_bool == 0; // 0xa8 Not
	if(var_202_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_203_bool = var_200_string == var_2_object; // 0xab Eq
	if(var_203_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_204_string = ""; var_205_bool = 0; // 0xae PushV
	var_204_string = var_200_string; // 0xaf Mov
	var_206_string = ""; // 0xb0 PushS
	var_207_bool = var_200_string == var_206_string; // 0xb1 Eq
	if(var_207_bool == 0) goto Label_181; // 0xb2 JumpB
	var_205_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_1043(var_204_string, var_205_bool); // 0xb6 NEW_2
	var_2_object = var_200_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_205_bool = 1; // 0xb5 MovB
}


func_1058(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x422 PushV
	var_136_bool = 0; // 0x423 PushV
	func_1261(var_136_bool); // 0x424 NEW_2
	if(var_136_bool == 0) goto Label_1071; // 0x426 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x427 Func
	var_137_bool = var_135_bool; // 0x429 Push
	if(var_137_bool == 0) goto Label_1071; // 0x42a JumpB
	lshPlaySpeech(var_133_string); // 0x42b Func
	var_132_bool = 1; // 0x42d MovB
	return 2; // 0x42e Return
	
Label_1071:
	var_132_bool = 0; // 0x42f MovB
	return 2; // 0x430 Return
}


func_552(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x228 PushV
	var_20_string = "player"; // 0x229 PushS
	FindActor(var_18_object, var_20_string); // 0x22a Func
	var_21_bool = var_18_object == 0; // 0x22c Not
	if(var_21_bool == 0) goto Label_560; // 0x22d JumpB
	var_15_bool = 0; // 0x22e MovB
	return 4; // 0x22f Return
	
Label_560:
	var_22_float = 0; var_23_object = Obj(); // 0x230 PushV
	var_23_object = var_18_object; // 0x231 Mov
	func_770(var_23_object); // 0x232 NEW_2
	var_30_float = 90000.0; // 0x234 PushF
	var_31_bool = var_22_float > var_30_float; // 0x235 GT
	if(var_31_bool == 0) goto Label_569; // 0x236 JumpB
	var_15_bool = 0; // 0x237 MovB
	return 4; // 0x238 Return
	
Label_569:
	CanSee(var_19_bool, var_18_object); // 0x239 Func
	var_15_bool = var_19_bool; // 0x23b Mov
	return 4; // 0x23c Return
}


func_1200(var_218_bool)
{
	var_220_int = 0; var_221_string = ""; // 0x4b1 PushV
	var_221_string = "oob2MladVladFactory1"; // 0x4b2 MovS
	func_1096(var_220_int, var_221_string); // 0x4b3 NEW_2
	var_224_int = 0; // 0x4b5 PushI
	var_225_bool = var_220_int == var_224_int; // 0x4b6 Eq
	if(var_225_bool == 0) goto Label_1210; // 0x4b7 JumpB
	var_218_bool = 1; // 0x4b8 MovB
	return 0; // 0x4b9 Return
	
Label_1210:
	var_218_bool = 0; // 0x4ba MovB
	return 0; // 0x4bb Return
}


func_1073()
{
	var_10_bool = 0; // 0x431 PushV
	func_1261(var_10_bool); // 0x432 NEW_2
	if(var_10_bool == 0) goto Label_1079; // 0x434 JumpB
	lshStopSpeech(); // 0x435 Func
	
Label_1079:
	return 0; // 0x437 Return
}


func_947(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x3b3 PushV
	var_116_string = "c"; // 0x3b4 MovS
	var_117_int = 0; // 0x3b5 MovI
	
Label_950:
	var_121_int = 1; // 0x3b6 PushI
	if(var_121_int == 0) goto Label_963; // 0x3b7 JumpB
	var_122_int = 1; // 0x3b8 PushI
	var_123_int = var_117_int + var_122_int; // 0x3b9 Add
	var_124_int = var_116_string + var_123_int; // 0x3ba Add
	HasProperty(var_124_int, var_118_bool); // 0x3bb ObjFunc
	var_125_bool = var_118_bool == 0; // 0x3bd Not
	if(var_125_bool == 0) goto Label_960; // 0x3be JumpB
	goto Label_963; // 0x3bf Jump
	
Label_963:
	var_126_bool = var_117_int == 0; // 0x3c3 Not
	if(var_126_bool == 0) goto Label_967; // 0x3c4 JumpB
	var_109_bool = 0; // 0x3c5 MovB
	return 10; // 0x3c6 Return
	
Label_967:
	var_119_int = 0; // 0x3c7 MovI
	var_127_int = 1; // 0x3c8 PushI
	var_128_bool = var_117_int > var_127_int; // 0x3c9 GT
	if(var_128_bool == 0) goto Label_973; // 0x3ca JumpB
	irand(var_119_int, var_117_int); // 0x3cb Func
	
Label_973:
	var_129_int = 1; // 0x3cd PushI
	var_130_int = var_119_int + var_129_int; // 0x3ce Add
	var_131_int = var_116_string + var_130_int; // 0x3cf Add
	GetProperty(var_131_int, var_120_string); // 0x3d0 ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x3d2 PushV
	var_133_string = var_120_string; // 0x3d3 Mov
	func_1058(var_132_bool, var_133_string); // 0x3d4 NEW_2
	var_109_bool = var_132_bool; // 0x3d5 Mov
	return 10; // 0x3d7 Return
	
Label_960:
	var_138_int = 1; // 0x3c0 PushI
	var_117_int = var_117_int + var_138_int; // 0x3c1 Add2
	goto Label_950; // 0x3c2 Jump
}


func_694()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2b6 PushV
	WaitForAnimEnd(); // 0x2b7 Func
	var_23_bool = 0; // 0x2b9 PushV
	func_797(var_23_bool); // 0x2ba NEW_2
	var_24_bool = var_23_bool == 0; // 0x2bc Not
	if(var_24_bool == 0) goto Label_703; // 0x2bd JumpB
	return 12; // 0x2be Return
	
Label_703:
	var_25_int = 0; // 0x2bf PushV
	func_1129(var_25_int); // 0x2c0 NEW_2
	var_17_int = var_25_int; // 0x2c1 Mov
	var_18_int = 0; // 0x2c3 MovI
	
Label_708:
	var_38_bool = 0; // 0x2c4 PushV
	var_38_bool = 0; // 0x2c5 MovB
	var_39_int = 5; // 0x2c6 PushI
	var_40_bool = var_18_int < var_39_int; // 0x2c7 LT
	if(var_40_bool == 0) goto Label_718; // 0x2c8 JumpB
	var_41_bool = 0; // 0x2c9 PushV
	func_797(var_41_bool); // 0x2ca NEW_2
	if(var_41_bool == 0) goto Label_718; // 0x2cc JumpB
	var_38_bool = 1; // 0x2cd MovB
	
Label_718:
	if(var_38_bool == 0) goto Label_760; // 0x2ce JumpB
	var_42_bool = var_17_int == 0; // 0x2cf Not
	if(var_42_bool == 0) goto Label_728; // 0x2d0 JumpB
	var_43_int = 3; // 0x2d1 PushI
	Sleep(var_43_int, var_19_bool); // 0x2d2 Func
	var_44_bool = var_19_bool == 0; // 0x2d4 Not
	if(var_44_bool == 0) goto Label_727; // 0x2d5 JumpB
	goto Label_760; // 0x2d6 Jump
	
Label_760:
	ResetAAS(); // 0x2f8 Func
	return 12; // 0x2fa Return
	
Label_727:
	goto Label_749; // 0x2d7 Jump
	
Label_749:
	var_45_bool = 0; // 0x2ed PushV
	func_763(var_45_bool); // 0x2ee NEW_2
	var_46_bool = var_45_bool == 0; // 0x2f0 Not
	if(var_46_bool == 0) goto Label_755; // 0x2f1 JumpB
	goto Label_760; // 0x2f2 Jump
	
Label_755:
	ResetAAS(); // 0x2f3 Func
	var_47_int = 1; // 0x2f5 PushI
	var_18_int = var_18_int + var_47_int; // 0x2f6 Add2
	goto Label_708; // 0x2f7 Jump
	
Label_728:
	irand(var_20_int, var_17_int); // 0x2d8 Func
	var_48_int = 5; // 0x2da PushI
	irand(var_21_int, var_48_int); // 0x2db Func
	var_49_int = 0; // 0x2dd PushI
	var_50_bool = var_21_int != var_49_int; // 0x2de Neq
	if(var_50_bool == 0) goto Label_737; // 0x2df JumpB
	var_20_int = 0; // 0x2e0 MovI
	
Label_737:
	var_51_string = "all"; // 0x2e1 PushS
	var_52_string = ""; var_53_int = 0; // 0x2e2 PushV
	var_53_int = var_20_int; // 0x2e3 Mov
	func_1122(var_52_string, var_53_int); // 0x2e4 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2e6 Func
	WaitForAnimEnd(var_22_bool); // 0x2e8 Func
	var_54_bool = var_22_bool == 0; // 0x2ea Not
	if(var_54_bool == 0) goto Label_749; // 0x2eb JumpB
	goto Label_760; // 0x2ec Jump
}


func_1080(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x438 PushV
	self(var_102_object); // 0x439 Func
	var_100_object = var_102_object; // 0x43b Mov
	return 2; // 0x43c Return
}


func_1212(var_229_bool)
{
	var_231_int = 0; var_232_string = ""; // 0x4bd PushV
	var_232_string = "oob2MladVladFactory2"; // 0x4be MovS
	func_1096(var_231_int, var_232_string); // 0x4bf NEW_2
	var_233_int = 0; // 0x4c1 PushI
	var_234_bool = var_231_int == var_233_int; // 0x4c2 Eq
	if(var_234_bool == 0) goto Label_1222; // 0x4c3 JumpB
	var_229_bool = 1; // 0x4c4 MovB
	return 0; // 0x4c5 Return
	
Label_1222:
	var_229_bool = 0; // 0x4c6 MovB
	return 0; // 0x4c7 Return
}


func_574()
{
	var_279_float = 0; var_280_float = 0; // 0x23e PushV
	var_281_int = 8; // 0x23f PushI
	var_282_int = 16; // 0x240 PushI
	rand(var_280_float, var_281_int, var_282_int); // 0x241 Func
	var_283_int = 10; // 0x243 PushI
	SetTimer(var_283_int, var_280_float); // 0x244 Func
	return 2; // 0x246 Return
}


func_1086(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x43e PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x43f Or
	var_68_float = sqrt(var_69_int); // 0x440 Sqrt2
	var_70_float = 0.0; // 0x441 PushF
	var_71_bool = var_68_float < var_70_float; // 0x442 LT
	if(var_71_bool == 0) goto Label_1094; // 0x443 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x444 MovV
	return 2; // 0x445 Return
	
Label_1094:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x446 Div2
	return 2; // 0x447 Return
}


func_583()
{
	var_278_int = 10; // 0x247 PushI
	KillTimer(var_278_int); // 0x248 Func
	return 0; // 0x24a Return
}


func_1224(var_238_bool)
{
	var_240_int = 0; var_241_string = ""; // 0x4c9 PushV
	var_241_string = "oob2MladVladFactory3"; // 0x4ca MovS
	func_1096(var_240_int, var_241_string); // 0x4cb NEW_2
	var_242_int = 0; // 0x4cd PushI
	var_243_bool = var_240_int == var_242_int; // 0x4ce Eq
	if(var_243_bool == 0) goto Label_1234; // 0x4cf JumpB
	var_238_bool = 1; // 0x4d0 MovB
	return 0; // 0x4d1 Return
	
Label_1234:
	var_238_bool = 0; // 0x4d2 MovB
	return 0; // 0x4d3 Return
}


func_1096(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0; // 0x448 PushV
	GetVariable(var_221_string, var_223_int); // 0x449 Func
	var_220_int = var_223_int; // 0x44b Mov
	return 2; // 0x44c Return
}


func_1101(var_35_bool, var_36_string, var_37_string)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x44d PushV
	FindActor(var_39_object, var_36_string); // 0x44e Func
	var_40_bool = var_39_object == 0; // 0x450 NullEq
	if(var_40_bool == 0) goto Label_1108; // 0x451 JumpB
	var_35_bool = 0; // 0x452 MovB
	return 2; // 0x453 Return
	
Label_1108:
	Trigger(var_39_object, var_37_string); // 0x454 Func
	var_35_bool = 1; // 0x456 MovB
	return 2; // 0x457 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_134; // 0x56 JumpB
	var_200_string = ""; // 0x57 PushV
	var_200_string = "Neutral"; // 0x58 MovS
	func_164(var_194_object, var_200_string); // 0x59 NEW_2
	var_217_int = 520225; // 0x5b PushI
	SetMessage(var_217_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_218_bool = 0; var_219_object = Obj(); // 0x60 PushV
	var_219_object = var_1_object; // 0x61 MovT
	func_1200(var_219_object); // 0x62 NEW_2
	if(var_218_bool == 0) goto Label_106; // 0x64 JumpB
	var_226_int = 520226; // 0x65 PushI
	var_227_int = 21419; // 0x66 PushI
	var_228_int = 21418; // 0x67 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x68 TObjFunc
	
Label_106:
	var_229_bool = 0; var_230_object = Obj(); // 0x6a PushV
	var_230_object = var_1_object; // 0x6b MovT
	func_1212(var_230_object); // 0x6c NEW_2
	if(var_229_bool == 0) goto Label_116; // 0x6e JumpB
	var_235_int = 520231; // 0x6f PushI
	var_236_int = 21424; // 0x70 PushI
	var_237_int = 21423; // 0x71 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x72 TObjFunc
	
Label_116:
	var_238_bool = 0; var_239_object = Obj(); // 0x74 PushV
	var_239_object = var_1_object; // 0x75 MovT
	func_1224(var_239_object); // 0x76 NEW_2
	if(var_238_bool == 0) goto Label_126; // 0x78 JumpB
	var_244_int = 520239; // 0x79 PushI
	var_245_int = 21432; // 0x7a PushI
	var_246_int = 21431; // 0x7b PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x7c TObjFunc
	
Label_126:
	var_247_int = 520246; // 0x7e PushI
	var_248_int = -1; // 0x7f PushI
	var_249_int = 21438; // 0x80 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
	
Label_134:
	var_250_bool = 0; // 0x86 PushV
	func_1261(var_250_bool); // 0x87 NEW_2
	if(var_250_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_251_string = var_3_string; // 0x8c PushT
	if(var_251_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_252_string = ""; // 0x8f PushV
	var_252_string = var_2_object; // 0x90 MovT
	func_1027(var_252_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_263_string = "all"; // 0x95 PushS
	var_264_string = "idle"; // 0x96 PushS
	PlayAnimation(var_263_string, var_264_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_265_string = var_3_string; // 0x9b PushT
	if(var_265_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_266_string = "all"; // 0x9e PushS
	var_267_string = "idle"; // 0x9f PushS
	PlayAnimation(var_266_string, var_267_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
}


func_1236(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x4d4 PushV
	var_92_string = "branch"; // 0x4d5 PushS
	GetVariable(var_92_string, var_91_int); // 0x4d6 Func
	var_93_int = 0; // 0x4d8 PushI
	var_94_bool = var_91_int == var_93_int; // 0x4d9 Eq
	if(var_94_bool == 0) goto Label_1246; // 0x4da JumpB
	var_89_int = 1; // 0x4db MovI
	return 2; // 0x4dc Return
	
Label_1246:
	var_95_int = 1; // 0x4de PushI
	var_96_bool = var_91_int == var_95_int; // 0x4df Eq
	if(var_96_bool == 0) goto Label_1251; // 0x4e0 JumpB
	var_89_int = 2; // 0x4e1 MovI
	return 2; // 0x4e2 Return
	
Label_1251:
	var_89_int = 3; // 0x4e3 MovI
	return 2; // 0x4e4 Return
}


func_469(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x1d6 PushV
	var_27_object = var_25_object; // 0x1d7 Mov
	TaskCall(0); // 0x1d8 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x1d9 NEW_2
	TaskReturn(); // 0x1da TaskReturn
	return 0; // 0x1dc Return
}


func_984(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x3d8 PushV
	var_152_string = "d"; // 0x3d9 PushS
	var_153_int = 0; // 0x3da PushV
	func_1113(var_153_int); // 0x3db NEW_2
	var_159_int = var_152_string + var_153_int; // 0x3dd Add
	var_160_string = "m"; // 0x3de PushS
	var_147_string = var_159_int + var_160_string; // 0x3df Add2
	var_148_int = 0; // 0x3e0 MovI
	
Label_993:
	var_161_int = 1; // 0x3e1 PushI
	if(var_161_int == 0) goto Label_1006; // 0x3e2 JumpB
	var_162_int = 1; // 0x3e3 PushI
	var_163_int = var_148_int + var_162_int; // 0x3e4 Add
	var_164_int = var_147_string + var_163_int; // 0x3e5 Add
	HasProperty(var_164_int, var_149_bool); // 0x3e6 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x3e8 Not
	if(var_165_bool == 0) goto Label_1003; // 0x3e9 JumpB
	goto Label_1006; // 0x3ea Jump
	
Label_1006:
	var_166_bool = var_148_int == 0; // 0x3ee Not
	if(var_166_bool == 0) goto Label_1010; // 0x3ef JumpB
	var_140_bool = 0; // 0x3f0 MovB
	return 10; // 0x3f1 Return
	
Label_1010:
	var_150_int = 0; // 0x3f2 MovI
	var_167_int = 1; // 0x3f3 PushI
	var_168_bool = var_148_int > var_167_int; // 0x3f4 GT
	if(var_168_bool == 0) goto Label_1016; // 0x3f5 JumpB
	irand(var_150_int, var_148_int); // 0x3f6 Func
	
Label_1016:
	var_169_int = 1; // 0x3f8 PushI
	var_170_int = var_150_int + var_169_int; // 0x3f9 Add
	var_171_int = var_147_string + var_170_int; // 0x3fa Add
	GetProperty(var_171_int, var_151_string); // 0x3fb ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x3fd PushV
	var_173_string = var_151_string; // 0x3fe Mov
	func_1058(var_172_bool, var_173_string); // 0x3ff NEW_2
	var_140_bool = var_172_bool; // 0x400 Mov
	return 10; // 0x402 Return
	
Label_1003:
	var_174_int = 1; // 0x3eb PushI
	var_148_int = var_148_int + var_174_int; // 0x3ec Add2
	goto Label_993; // 0x3ed Jump
}


func_1113(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x459 PushV
	GetGameTime(var_155_float); // 0x45a Func
	var_156_int = 1; // 0x45c PushI
	var_157_int = 0; // 0x45d PushV
	var_158_int = 24; // 0x45e PushI
	var_157_int = var_155_float / var_155_float; // 0x45f Div2
	var_153_int = var_156_int + var_157_int; // 0x460 Add2
	return 2; // 0x461 Return
}


func_1122(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x462 PushV
	var_34_string = "idle"; // 0x463 MovS
	var_35_int = var_32_int; // 0x464 Push
	if(var_35_int == 0) goto Label_1127; // 0x465 JumpB
	var_34_string = var_34_string + var_32_int; // 0x466 Add2
	
Label_1127:
	var_31_string = var_34_string; // 0x467 Mov
	return 2; // 0x468 Return
}


func_1253(var_86_int)
{
	var_86_int = 515547; // 0x4e5 MovI
	return 0; // 0x4e6 Return
}


func_1255(var_85_int)
{
	var_85_int = 502872; // 0x4e7 MovI
	return 0; // 0x4e8 Return
}


func_871()
{
	var_270_bool = 0; var_271_bool = 0; // 0x367 PushV
	var_272_bool = 1; // 0x368 PushB
	CameraSwitchToNormal(var_272_bool); // 0x369 Func
	var_273_bool = 0; // 0x36b PushV
	func_1261(var_273_bool); // 0x36c NEW_2
	if(var_273_bool == 0) goto Label_880; // 0x36e JumpB
	goto Label_888; // 0x36f Jump
	
Label_888:
	return 2; // 0x378 Return
	
Label_880:
	var_274_string = "head"; // 0x370 PushS
	HasAnimationTrack(var_271_bool, var_274_string); // 0x371 Func
	var_275_bool = var_271_bool; // 0x373 Push
	if(var_275_bool == 0) goto Label_888; // 0x374 JumpB
	var_276_string = "head"; // 0x375 PushS
	UnlookAsync(var_276_string); // 0x376 Func
}


func_1257(var_87_string)
{
	var_87_string = "ui/NPC_MladVlad.png"; // 0x4e9 MovS
	return 0; // 0x4ea Return
}


func_1129(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x469 PushV
	var_28_int = 0; // 0x46a MovI
	
Label_1131:
	var_30_string = "all"; // 0x46b PushS
	var_31_string = ""; var_32_int = 0; // 0x46c PushV
	var_32_int = var_28_int; // 0x46d Mov
	func_1122(var_31_string, var_32_int); // 0x46e NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x470 Func
	var_36_bool = var_29_bool == 0; // 0x472 Not
	if(var_36_bool == 0) goto Label_1141; // 0x473 JumpB
	goto Label_1144; // 0x474 Jump
	
Label_1144:
	var_25_int = var_28_int; // 0x478 Mov
	return 4; // 0x479 Return
	
Label_1141:
	var_37_int = 1; // 0x475 PushI
	var_28_int = var_28_int + var_37_int; // 0x476 Add2
	goto Label_1131; // 0x477 Jump
}


func_1259(var_88_string)
{
	var_88_string = "ui/NPC_MladVlad_b.png"; // 0x4eb MovS
	return 0; // 0x4ec Return
}


func_1261(var_80_bool)
{
	var_80_bool = 1; // 0x4ed MovB
	return 0; // 0x4ee Return
}


func_625()
{
	func_765(); // 0x272 NEW_2
	func_583(); // 0x275 NEW_2
	lshStopSpeech(); // 0x277 Func
	lshStopAnimation(); // 0x279 Func
	StopAsync(); // 0x27b Func
	Hold(); // 0x27d Func
	return 0; // 0x27f Return
}


func_889(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x379 PushV
	var_107_string = "voice_common"; // 0x37a PushS
	GetVariable(var_107_string, var_105_int); // 0x37b Func
	var_108_int = var_105_int; // 0x37d Push
	if(var_108_int == 0) goto Label_927; // 0x37e JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x37f PushV
	var_110_object = var_99_object; // 0x380 Mov
	func_947(var_110_object); // 0x381 NEW_2
	var_139_bool = var_109_bool == 0; // 0x383 Not
	if(var_139_bool == 0) goto Label_909; // 0x384 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x385 PushV
	var_141_object = var_99_object; // 0x386 Mov
	func_984(var_141_object); // 0x387 NEW_2
	var_175_bool = var_140_bool == 0; // 0x389 Not
	if(var_175_bool == 0) goto Label_909; // 0x38a JumpB
	var_98_bool = 0; // 0x38b MovB
	return 4; // 0x38c Return
	
Label_909:
	var_176_int = 2; // 0x38d PushI
	irand(var_106_int, var_176_int); // 0x38e Func
	var_177_int = var_106_int; // 0x390 Push
	if(var_177_int == 0) goto Label_922; // 0x391 JumpB
	var_178_string = "voice_common"; // 0x392 PushS
	var_179_int = 1; // 0x393 PushI
	var_180_int = var_105_int + var_179_int; // 0x394 Add
	var_181_int = 3; // 0x395 PushI
	var_182_int = var_180_int / var_181_int; // 0x396 Mod
	SetVariable(var_178_string, var_182_int); // 0x397 Func
	goto Label_926; // 0x399 Jump
	
Label_926:
	goto Label_945; // 0x39e Jump
	
Label_945:
	var_98_bool = 1; // 0x3b1 MovB
	return 4; // 0x3b2 Return
	
Label_922:
	var_183_string = "voice_common"; // 0x39a PushS
	var_184_int = 0; // 0x39b PushI
	SetVariable(var_183_string, var_184_int); // 0x39c Func
	
Label_927:
	var_185_bool = 0; var_186_object = Obj(); // 0x39f PushV
	var_186_object = var_99_object; // 0x3a0 Mov
	func_984(var_186_object); // 0x3a1 NEW_2
	var_187_bool = var_185_bool == 0; // 0x3a3 Not
	if(var_187_bool == 0) goto Label_941; // 0x3a4 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x3a5 PushV
	var_189_object = var_99_object; // 0x3a6 Mov
	func_947(var_189_object); // 0x3a7 NEW_2
	var_190_bool = var_188_bool == 0; // 0x3a9 Not
	if(var_190_bool == 0) goto Label_941; // 0x3aa JumpB
	var_98_bool = 0; // 0x3ab MovB
	return 4; // 0x3ac Return
	
Label_941:
	var_191_string = "voice_common"; // 0x3ad PushS
	var_192_int = 1; // 0x3ae PushI
	SetVariable(var_191_string, var_192_int); // 0x3af Func
}


func_1146()
{
	var_15_string = "oob2MladVladFactory1"; // 0x47b PushS
	var_16_int = 1; // 0x47c PushI
	SetVariable(var_15_string, var_16_int); // 0x47d Func
	return 0; // 0x47f Return
}


func_763(var_45_bool)
{
	var_45_bool = 1; // 0x2fb MovB
	return 0; // 0x2fc Return
}


func_765()
{
	StopAnimation(); // 0x2fd Func
	StopGroup0(); // 0x2ff Func
	return 0; // 0x301 Return
}


