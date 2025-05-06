task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc0 PushI
	if(var_9_int == 0) goto Label_458; // 0xc1 JumpB
	func_1061(); // 0xc3 NEW_2
	var_11_int = 28227; // 0xc5 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc6 Eq
	if(var_12_bool == 0) goto Label_205; // 0xc7 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc8 PushV
	var_13_object = var_1_object; // 0xc9 MovT
	var_14_object = var_0_object; // 0xca MovT
	func_1122(); // 0xcb NEW_2
	
Label_205:
	var_48_int = 28226; // 0xcd PushI
	var_49_bool = var_7_cvector == var_48_int; // 0xce Eq
	if(var_49_bool == 0) goto Label_258; // 0xcf JumpB
	var_50_bool = 0; var_51_object = Obj(); // 0xd0 PushV
	var_51_object = var_1_object; // 0xd1 MovT
	func_1140(var_51_object); // 0xd2 NEW_2
	if(var_50_bool == 0) goto Label_238; // 0xd4 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0xd5 PushV
	var_58_object = var_1_object; // 0xd6 MovT
	var_59_object = var_0_object; // 0xd7 MovT
	func_1134(); // 0xd8 NEW_2
	var_62_string = ""; // 0xda PushV
	var_62_string = "Neutral"; // 0xdb MovS
	func_169(var_8_bool, var_62_string); // 0xdc NEW_2
	var_79_int = 526934; // 0xde PushI
	SetMessage(var_79_int); // 0xdf TObjFunc
	ClearReplies(); // 0xe1 TObjFunc
	var_80_int = 527936; // 0xe3 PushI
	var_81_int = 29290; // 0xe4 PushI
	var_82_int = 29289; // 0xe5 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xe6 TObjFunc
	var_83_int = 527942; // 0xe8 PushI
	var_84_int = 29297; // 0xe9 PushI
	var_85_int = 29295; // 0xea PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xeb TObjFunc
	return 0; // 0xed Return
	
Label_238:
	var_86_string = ""; // 0xee PushV
	var_86_string = "Neutral"; // 0xef MovS
	func_169(var_8_bool, var_86_string); // 0xf0 NEW_2
	var_87_int = 526936; // 0xf2 PushI
	SetMessage(var_87_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_88_int = 527935; // 0xf7 PushI
	var_89_int = -1; // 0xf8 PushI
	var_90_int = 29288; // 0xf9 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xfa TObjFunc
	var_91_int = 526937; // 0xfc PushI
	var_92_int = -1; // 0xfd PushI
	var_93_int = 28229; // 0xfe PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xff TObjFunc
	return 0; // 0x101 Return
	
Label_258:
	var_94_int = 29297; // 0x102 PushI
	var_95_bool = var_7_cvector == var_94_int; // 0x103 Eq
	if(var_95_bool == 0) goto Label_276; // 0x104 JumpB
	var_96_string = ""; // 0x105 PushV
	var_96_string = "Sorrow"; // 0x106 MovS
	func_169(var_8_bool, var_96_string); // 0x107 NEW_2
	var_97_int = 527943; // 0x109 PushI
	SetMessage(var_97_int); // 0x10a TObjFunc
	ClearReplies(); // 0x10c TObjFunc
	var_98_int = 527944; // 0x10e PushI
	var_99_int = 29292; // 0x10f PushI
	var_100_int = 29298; // 0x110 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x111 TObjFunc
	return 0; // 0x113 Return
	
Label_276:
	var_101_int = 29290; // 0x114 PushI
	var_102_bool = var_7_cvector == var_101_int; // 0x115 Eq
	if(var_102_bool == 0) goto Label_294; // 0x116 JumpB
	var_103_string = ""; // 0x117 PushV
	var_103_string = "Smile"; // 0x118 MovS
	func_169(var_8_bool, var_103_string); // 0x119 NEW_2
	var_104_int = 527937; // 0x11b PushI
	SetMessage(var_104_int); // 0x11c TObjFunc
	ClearReplies(); // 0x11e TObjFunc
	var_105_int = 527945; // 0x120 PushI
	var_106_int = 29300; // 0x121 PushI
	var_107_int = 29299; // 0x122 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x123 TObjFunc
	return 0; // 0x125 Return
	
Label_294:
	var_108_int = 29300; // 0x126 PushI
	var_109_bool = var_7_cvector == var_108_int; // 0x127 Eq
	if(var_109_bool == 0) goto Label_312; // 0x128 JumpB
	var_110_string = ""; // 0x129 PushV
	var_110_string = "Smile"; // 0x12a MovS
	func_169(var_8_bool, var_110_string); // 0x12b NEW_2
	var_111_int = 527946; // 0x12d PushI
	SetMessage(var_111_int); // 0x12e TObjFunc
	ClearReplies(); // 0x130 TObjFunc
	var_112_int = 527947; // 0x132 PushI
	var_113_int = 29292; // 0x133 PushI
	var_114_int = 29301; // 0x134 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x135 TObjFunc
	return 0; // 0x137 Return
	
Label_312:
	var_115_int = 29292; // 0x138 PushI
	var_116_bool = var_7_cvector == var_115_int; // 0x139 Eq
	if(var_116_bool == 0) goto Label_330; // 0x13a JumpB
	var_117_string = ""; // 0x13b PushV
	var_117_string = "Sorrow"; // 0x13c MovS
	func_169(var_8_bool, var_117_string); // 0x13d NEW_2
	var_118_int = 527939; // 0x13f PushI
	SetMessage(var_118_int); // 0x140 TObjFunc
	ClearReplies(); // 0x142 TObjFunc
	var_119_int = 527948; // 0x144 PushI
	var_120_int = 29304; // 0x145 PushI
	var_121_int = 29303; // 0x146 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x147 TObjFunc
	return 0; // 0x149 Return
	
Label_330:
	var_122_int = 29294; // 0x14a PushI
	var_123_bool = var_7_cvector == var_122_int; // 0x14b Eq
	if(var_123_bool == 0) goto Label_333; // 0x14c JumpB
	
Label_333:
	var_124_int = 29309; // 0x14d PushI
	var_125_bool = var_7_cvector == var_124_int; // 0x14e Eq
	if(var_125_bool == 0) goto Label_351; // 0x14f JumpB
	var_126_string = ""; // 0x150 PushV
	var_126_string = "Untrust"; // 0x151 MovS
	func_169(var_8_bool, var_126_string); // 0x152 NEW_2
	var_127_int = 527954; // 0x154 PushI
	SetMessage(var_127_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_128_int = 527956; // 0x159 PushI
	var_129_int = 29304; // 0x15a PushI
	var_130_int = 29311; // 0x15b PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x15c TObjFunc
	return 0; // 0x15e Return
	
Label_351:
	var_131_int = 29304; // 0x15f PushI
	var_132_bool = var_7_cvector == var_131_int; // 0x160 Eq
	if(var_132_bool == 0) goto Label_369; // 0x161 JumpB
	var_133_string = ""; // 0x162 PushV
	var_133_string = "Sorrow"; // 0x163 MovS
	func_169(var_8_bool, var_133_string); // 0x164 NEW_2
	var_134_int = 527949; // 0x166 PushI
	SetMessage(var_134_int); // 0x167 TObjFunc
	ClearReplies(); // 0x169 TObjFunc
	var_135_int = 527950; // 0x16b PushI
	var_136_int = 29310; // 0x16c PushI
	var_137_int = 29305; // 0x16d PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x16e TObjFunc
	return 0; // 0x170 Return
	
Label_369:
	var_138_int = 29310; // 0x171 PushI
	var_139_bool = var_7_cvector == var_138_int; // 0x172 Eq
	if(var_139_bool == 0) goto Label_392; // 0x173 JumpB
	var_140_string = ""; // 0x174 PushV
	var_140_string = "Sorrow"; // 0x175 MovS
	func_169(var_8_bool, var_140_string); // 0x176 NEW_2
	var_141_int = 527955; // 0x178 PushI
	SetMessage(var_141_int); // 0x179 TObjFunc
	ClearReplies(); // 0x17b TObjFunc
	var_142_int = 527960; // 0x17d PushI
	var_143_int = 29317; // 0x17e PushI
	var_144_int = 29316; // 0x17f PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x180 TObjFunc
	var_145_int = 527957; // 0x182 PushI
	var_146_int = 29314; // 0x183 PushI
	var_147_int = 29313; // 0x184 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x185 TObjFunc
	return 0; // 0x187 Return
	
Label_392:
	var_148_int = 29314; // 0x188 PushI
	var_149_bool = var_7_cvector == var_148_int; // 0x189 Eq
	if(var_149_bool == 0) goto Label_410; // 0x18a JumpB
	var_150_string = ""; // 0x18b PushV
	var_150_string = "Untrust"; // 0x18c MovS
	func_169(var_8_bool, var_150_string); // 0x18d NEW_2
	var_151_int = 527958; // 0x18f PushI
	SetMessage(var_151_int); // 0x190 TObjFunc
	ClearReplies(); // 0x192 TObjFunc
	var_152_int = 527959; // 0x194 PushI
	var_153_int = 29319; // 0x195 PushI
	var_154_int = 29315; // 0x196 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x197 TObjFunc
	return 0; // 0x199 Return
	
Label_410:
	var_155_int = 29317; // 0x19a PushI
	var_156_bool = var_7_cvector == var_155_int; // 0x19b Eq
	if(var_156_bool == 0) goto Label_428; // 0x19c JumpB
	var_157_string = ""; // 0x19d PushV
	var_157_string = "Untrust"; // 0x19e MovS
	func_169(var_8_bool, var_157_string); // 0x19f NEW_2
	var_158_int = 527961; // 0x1a1 PushI
	SetMessage(var_158_int); // 0x1a2 TObjFunc
	ClearReplies(); // 0x1a4 TObjFunc
	var_159_int = 527962; // 0x1a6 PushI
	var_160_int = 29319; // 0x1a7 PushI
	var_161_int = 29318; // 0x1a8 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x1a9 TObjFunc
	return 0; // 0x1ab Return
	
Label_428:
	var_162_int = 29319; // 0x1ac PushI
	var_163_bool = var_7_cvector == var_162_int; // 0x1ad Eq
	if(var_163_bool == 0) goto Label_446; // 0x1ae JumpB
	var_164_string = ""; // 0x1af PushV
	var_164_string = "Untrust"; // 0x1b0 MovS
	func_169(var_8_bool, var_164_string); // 0x1b1 NEW_2
	var_165_int = 527963; // 0x1b3 PushI
	SetMessage(var_165_int); // 0x1b4 TObjFunc
	ClearReplies(); // 0x1b6 TObjFunc
	var_166_int = 526935; // 0x1b8 PushI
	var_167_int = -1; // 0x1b9 PushI
	var_168_int = 28227; // 0x1ba PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x1bb TObjFunc
	return 0; // 0x1bd Return
	
Label_446:
	var_3_string = 1; // 0x1be TMovB
	var_169_bool = 0; // 0x1bf PushV
	func_1244(var_169_bool); // 0x1c0 NEW_2
	if(var_169_bool == 0) goto Label_454; // 0x1c2 JumpB
	lshStopAnimation(); // 0x1c3 Func
	goto Label_456; // 0x1c5 Jump
	
Label_456:
	return 0; // 0x1c8 Return
	
Label_454:
	StopAnimation(); // 0x1c6 Func
	
Label_458:
	return 0; // 0x1ca Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1d7 PushV
	var_10_string = "cleanup"; // 0x1d8 PushS
	var_11_bool = var_7_string == var_10_string; // 0x1d9 Eq
	if(var_11_bool == 0) goto Label_486; // 0x1da JumpB
	var_1_object = 1; // 0x1db TMovB
	IsLoaded(var_9_bool); // 0x1dc Func
	var_12_bool = var_9_bool == 0; // 0x1de Not
	if(var_12_bool == 0) goto Label_485; // 0x1df JumpB
	var_13_object = Obj(); // 0x1e0 PushV
	func_1068(var_13_object); // 0x1e1 NEW_2
	RemoveActor(var_13_object); // 0x1e3 Func
	
Label_485:
	goto Label_490; // 0x1e5 Jump
	
Label_490:
	return 2; // 0x1ea Return
	
Label_486:
	var_16_string = "restore"; // 0x1e6 PushS
	var_17_bool = var_7_string == var_16_string; // 0x1e7 Eq
	if(var_17_bool == 0) goto Label_490; // 0x1e8 JumpB
	var_1_object = 0; // 0x1e9 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x1eb PushT
	if(var_7_object == 0) goto Label_500; // 0x1ec JumpB
	var_8_object = Obj(); // 0x1ed PushV
	func_1068(var_8_object); // 0x1ee NEW_2
	RemoveActor(var_8_object); // 0x1f0 Func
	Hold(); // 0x1f2 Func
	
Label_500:
	func_615(); // 0x1f5 NEW_2
	return 0; // 0x1f7 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_630(); // 0x1f9 NEW_2
	return 0; // 0x1fb Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x242 PushI
	var_9_bool = var_7_int == var_8_int; // 0x243 Eq
	if(var_9_bool == 0) goto Label_614; // 0x244 JumpB
	func_573(); // 0x246 NEW_2
	var_11_bool = 0; // 0x248 PushV
	var_11_bool = 0; // 0x249 MovB
	var_12_bool = 0; // 0x24a PushV
	func_787(var_12_bool); // 0x24b NEW_2
	if(var_12_bool == 0) goto Label_595; // 0x24d JumpB
	var_15_bool = 0; // 0x24e PushV
	func_542(var_15_bool); // 0x24f NEW_2
	if(var_15_bool == 0) goto Label_595; // 0x251 JumpB
	var_11_bool = 1; // 0x252 MovB
	
Label_595:
	if(var_11_bool == 0) goto Label_608; // 0x253 JumpB
	var_32_bool = 0; // 0x254 PushV
	func_522(var_32_bool); // 0x255 NEW_2
	if(var_32_bool == 0) goto Label_607; // 0x257 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x258 PushV
	var_53_object = Obj(); // 0x259 PushV
	func_1068(var_53_object); // 0x25a NEW_2
	var_52_object = var_53_object; // 0x25b Mov
	func_935(var_52_object); // 0x25d NEW_2
	
Label_607:
	goto Label_614; // 0x25f Jump
	
Label_614:
	return 0; // 0x266 Return
	
Label_608:
	func_537(var_7_int); // 0x261 NEW_2
	func_564(); // 0x264 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x284 Push
	if(var_8_bool == 0) goto Label_650; // 0x285 JumpB
	func_564(); // 0x287 NEW_2
	goto Label_654; // 0x289 Jump
	
Label_654:
	return 0; // 0x28e Return
	
Label_650:
	var_14_string = ""; // 0x28a PushV
	var_14_string = "Neutral"; // 0x28b MovS
	func_1015(var_14_string); // 0x28c NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x28f PushV
	IsOverrideActive(var_9_bool); // 0x290 Func
	var_10_bool = var_9_bool == 0; // 0x292 Not
	if(var_10_bool == 0) goto Label_683; // 0x293 JumpB
	EventDisable(0); // 0x294 EventDisable
	func_755(); // 0x296 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x298 PushV
	var_12_object = var_7_object; // 0x299 Mov
	func_778(var_12_object); // 0x29a NEW_2
	EventEnable(0); // 0x29c EventEnable
	var_25_object = Obj(); // 0x29d PushV
	var_25_object = var_7_object; // 0x29e Mov
	func_459(var_25_object); // 0x29f NEW_2
	var_269_string = ""; // 0x2a1 PushV
	var_269_string = "Neutral"; // 0x2a2 MovS
	func_1015(var_269_string); // 0x2a3 NEW_2
	func_573(); // 0x2a6 NEW_2
	func_564(); // 0x2a9 NEW_2
	
Label_683:
	return 2; // 0x2ab Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_508(var_6_bool); // 0x1d4 NEW_2
	return 0; // 0x1d6 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_792(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1238(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1236(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1240(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1242(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1219(var_88_int); // 0x22 NEW_2
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
	func_1068(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_877(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_261_bool = var_36_bool == 0; // 0x3f Not
	if(var_261_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_262_object = Obj(); // 0x46 PushV
	var_262_object = var_27_object; // 0x47 Mov
	func_860(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_768(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x300 PushV
	GetPosition(var_20_cvector); // 0x301 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x303 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x304 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x305 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x306 Func
	var_15_bool = var_22_bool; // 0x308 Mov
	return 6; // 0x309 Return
}


func_1152()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x480 PushV
	var_19_int = 447; // 0x481 PushI
	var_20_int = 1; // 0x482 PushI
	var_21_int = 527005; // 0x483 PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x484 Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x486 PushV
	var_23_object = var_18_object; // 0x487 Mov
	var_24_int = -1; // 0x488 MovI
	func_1191(var_22_bool, var_23_object, var_24_int); // 0x489 NEW_2
	return 2; // 0x48b Return
}


func_1031(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x407 PushV
	lshHasAnimation(var_222_bool, var_215_string); // 0x408 Func
	var_225_bool = var_222_bool; // 0x40a Push
	if(var_225_bool == 0) goto Label_1041; // 0x40b JumpB
	lshGetAnimTimes(var_215_string, var_223_float, var_224_float); // 0x40c Func
	lshPlayAnimation(var_223_float, var_224_float, var_216_bool); // 0x40e Func
	goto Label_1045; // 0x410 Jump
	
Label_1045:
	return 6; // 0x415 Return
	
Label_1041:
	var_226_string = "Can't find lsh animation : "; // 0x411 PushS
	var_227_int = var_226_string + var_215_string; // 0x412 Add
	Trace(var_227_int); // 0x413 Func
}


func_778(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x30a PushV
	GetPosition(var_14_cvector); // 0x30b ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x30d PushV
	var_16_cvector = var_14_cvector; // 0x30e Mov
	func_768(var_15_bool, var_16_cvector); // 0x30f NEW_2
	var_11_bool = var_15_bool; // 0x310 Mov
	return 2; // 0x312 Return
}


func_522(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x20a PushV
	var_35_string = "player"; // 0x20b PushS
	FindActor(var_34_object, var_35_string); // 0x20c Func
	var_36_bool = var_34_object == 0; // 0x20e Not
	if(var_36_bool == 0) goto Label_530; // 0x20f JumpB
	var_32_bool = 0; // 0x210 MovB
	return 2; // 0x211 Return
	
Label_530:
	var_37_bool = 0; var_38_object = Obj(); // 0x212 PushV
	var_38_object = var_34_object; // 0x213 Mov
	func_778(var_38_object); // 0x214 NEW_2
	var_32_bool = var_37_bool; // 0x215 Mov
	return 2; // 0x217 Return
}


func_1165()
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x48d PushV
	var_42_int = 448; // 0x48e PushI
	var_43_int = 1; // 0x48f PushI
	var_44_int = 527006; // 0x490 PushI
	CreateDiaryEntry(var_41_object, var_42_int, var_43_int, var_44_int); // 0x491 Func
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0; // 0x493 PushV
	var_46_object = var_41_object; // 0x494 Mov
	var_47_int = 447; // 0x495 MovI
	func_1191(var_45_bool, var_46_object, var_47_int); // 0x496 NEW_2
	return 2; // 0x498 Return
}


func_787(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x313 PushV
	IsLoaded(var_9_bool); // 0x314 Func
	var_7_bool = var_9_bool; // 0x316 Mov
	return 2; // 0x317 Return
}


func_1046(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x416 PushV
	var_135_bool = 0; // 0x417 PushV
	func_1244(var_135_bool); // 0x418 NEW_2
	if(var_135_bool == 0) goto Label_1059; // 0x41a JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x41b Func
	var_136_bool = var_134_bool; // 0x41d Push
	if(var_136_bool == 0) goto Label_1059; // 0x41e JumpB
	lshPlaySpeech(var_132_string); // 0x41f Func
	var_131_bool = 1; // 0x421 MovB
	return 2; // 0x422 Return
	
Label_1059:
	var_131_bool = 0; // 0x423 MovB
	return 2; // 0x424 Return
}


func_792(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x318 PushV
	GetPosition(var_50_cvector); // 0x319 ObjFunc
	GetEyesHeight(var_49_float); // 0x31b ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x31d PushE
	var_58_float = var_58_float + var_49_float; // 0x31e Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x31f PopE
	GetPosition(var_51_cvector); // 0x320 Func
	GetEyesHeight(var_49_float); // 0x322 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x324 PushE
	var_59_float = var_59_float + var_49_float; // 0x325 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x326 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x327 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x328 PushE
	var_60_float = 0; // 0x329 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x32a PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x32b Or
	var_62_float = sqrt(var_61_int); // 0x32c Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x32d Div2
	var_53_cvector = -var_52_cvector; // 0x32e Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x32f Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x330 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x331 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x332 Xor2
	func_1074(var_64_cvector, var_65_cvector); // 0x333 NEW_2
	var_72_int = 25; // 0x335 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x336 Mult
	var_74_int = var_63_float + var_73_float; // 0x337 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x338 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x339 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x33a Add2
	IsOverrideActive(var_56_bool); // 0x33b Func
	var_76_bool = var_56_bool; // 0x33d Push
	if(var_76_bool == 0) goto Label_833; // 0x33e JumpB
	var_37_bool = 0; // 0x33f MovB
	return 18; // 0x340 Return
	
Label_833:
	StopWorld(); // 0x341 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x343 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x345 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x346 PushE
	Rotate(var_77_float, var_78_float); // 0x347 Func
	var_79_bool = 0; // 0x349 PushV
	func_1244(var_79_bool); // 0x34a NEW_2
	if(var_79_bool == 0) goto Label_846; // 0x34c JumpB
	goto Label_854; // 0x34d Jump
	
Label_854:
	CameraWaitForPlayFinish(); // 0x356 Func
	ResumeWorld(); // 0x358 Func
	var_37_bool = 1; // 0x35a MovB
	return 18; // 0x35b Return
	
Label_846:
	var_80_string = "head"; // 0x34e PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x34f Func
	var_81_bool = var_57_bool; // 0x351 Push
	if(var_81_bool == 0) goto Label_854; // 0x352 JumpB
	var_82_string = "head"; // 0x353 PushS
	LookAsyncCamera(var_82_string); // 0x354 Func
}


func_537(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x219 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x21a PushE
	RotateAsync(var_84_float, var_85_float); // 0x21b Func
	return 0; // 0x21d Return
}


func_1178(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x49a PushV
	GetDiaryRoot(var_33_object); // 0x49b Func
	var_34_bool = var_33_object == 0; // 0x49d Not
	if(var_34_bool == 0) goto Label_1188; // 0x49e JumpB
	var_35_string = "Can't retrieve diary root"; // 0x49f PushS
	Trace(var_35_string); // 0x4a0 Func
	var_31_object = 0; // 0x4a2 MovB
	return 2; // 0x4a3 Return
	
Label_1188:
	var_31_object = var_33_object; // 0x4a4 Mov
	return 2; // 0x4a5 Return
}


func_542(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x21e PushV
	var_20_string = "player"; // 0x21f PushS
	FindActor(var_18_object, var_20_string); // 0x220 Func
	var_21_bool = var_18_object == 0; // 0x222 Not
	if(var_21_bool == 0) goto Label_550; // 0x223 JumpB
	var_15_bool = 0; // 0x224 MovB
	return 4; // 0x225 Return
	
Label_550:
	var_22_float = 0; var_23_object = Obj(); // 0x226 PushV
	var_23_object = var_18_object; // 0x227 Mov
	func_760(var_23_object); // 0x228 NEW_2
	var_30_float = 90000.0; // 0x22a PushF
	var_31_bool = var_22_float > var_30_float; // 0x22b GT
	if(var_31_bool == 0) goto Label_559; // 0x22c JumpB
	var_15_bool = 0; // 0x22d MovB
	return 4; // 0x22e Return
	
Label_559:
	CanSee(var_19_bool, var_18_object); // 0x22f Func
	var_15_bool = var_19_bool; // 0x231 Mov
	return 4; // 0x232 Return
}


func_1061()
{
	var_10_bool = 0; // 0x425 PushV
	func_1244(var_10_bool); // 0x426 NEW_2
	if(var_10_bool == 0) goto Label_1067; // 0x428 JumpB
	lshStopSpeech(); // 0x429 Func
	
Label_1067:
	return 0; // 0x42b Return
}


func_935(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x3a7 PushV
	var_115_string = "c"; // 0x3a8 MovS
	var_116_int = 0; // 0x3a9 MovI
	
Label_938:
	var_120_int = 1; // 0x3aa PushI
	if(var_120_int == 0) goto Label_951; // 0x3ab JumpB
	var_121_int = 1; // 0x3ac PushI
	var_122_int = var_116_int + var_121_int; // 0x3ad Add
	var_123_int = var_115_string + var_122_int; // 0x3ae Add
	HasProperty(var_123_int, var_117_bool); // 0x3af ObjFunc
	var_124_bool = var_117_bool == 0; // 0x3b1 Not
	if(var_124_bool == 0) goto Label_948; // 0x3b2 JumpB
	goto Label_951; // 0x3b3 Jump
	
Label_951:
	var_125_bool = var_116_int == 0; // 0x3b7 Not
	if(var_125_bool == 0) goto Label_955; // 0x3b8 JumpB
	var_108_bool = 0; // 0x3b9 MovB
	return 10; // 0x3ba Return
	
Label_955:
	var_118_int = 0; // 0x3bb MovI
	var_126_int = 1; // 0x3bc PushI
	var_127_bool = var_116_int > var_126_int; // 0x3bd GT
	if(var_127_bool == 0) goto Label_961; // 0x3be JumpB
	irand(var_118_int, var_116_int); // 0x3bf Func
	
Label_961:
	var_128_int = 1; // 0x3c1 PushI
	var_129_int = var_118_int + var_128_int; // 0x3c2 Add
	var_130_int = var_115_string + var_129_int; // 0x3c3 Add
	GetProperty(var_130_int, var_119_string); // 0x3c4 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x3c6 PushV
	var_132_string = var_119_string; // 0x3c7 Mov
	func_1046(var_131_bool, var_132_string); // 0x3c8 NEW_2
	var_108_bool = var_131_bool; // 0x3c9 Mov
	return 10; // 0x3cb Return
	
Label_948:
	var_137_int = 1; // 0x3b4 PushI
	var_116_int = var_116_int + var_137_int; // 0x3b5 Add2
	goto Label_938; // 0x3b6 Jump
}


func_1191(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x4a7 PushV
	var_31_object = Obj(); // 0x4a8 PushV
	func_1178(var_31_object); // 0x4a9 NEW_2
	var_28_object = var_31_object; // 0x4aa Mov
	Find(var_24_int, var_29_object); // 0x4ac ObjFunc
	var_36_bool = var_29_object == 0; // 0x4ae Not
	if(var_36_bool == 0) goto Label_1206; // 0x4af JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x4b0 PushS
	var_38_int = var_37_string + var_24_int; // 0x4b1 Add
	Trace(var_38_int); // 0x4b2 Func
	var_22_bool = 0; // 0x4b4 MovB
	return 6; // 0x4b5 Return
	
Label_1206:
	AddChild(var_23_object); // 0x4b6 ObjFunc
	var_39_int = 7; // 0x4b8 PushI
	SendWorldWndMessage(var_39_int); // 0x4b9 Func
	GetCategory(var_30_int); // 0x4bb ObjFunc
	SetDiarySection(var_30_int); // 0x4bd Func
	var_22_bool = 0; // 0x4bf MovB
	return 6; // 0x4c0 Return
}


func_169(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0xaa PushV
	func_1244(var_212_bool); // 0xab NEW_2
	var_213_bool = var_212_bool == 0; // 0xad Not
	if(var_213_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_214_bool = var_211_string == var_2_object; // 0xb0 Eq
	if(var_214_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_215_string = ""; var_216_bool = 0; // 0xb3 PushV
	var_215_string = var_211_string; // 0xb4 Mov
	var_217_string = ""; // 0xb5 PushS
	var_218_bool = var_211_string == var_217_string; // 0xb6 Eq
	if(var_218_bool == 0) goto Label_186; // 0xb7 JumpB
	var_216_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_1031(var_215_string, var_216_bool); // 0xbb NEW_2
	var_2_object = var_211_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_216_bool = 1; // 0xba MovB
}


func_1068(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x42c PushV
	self(var_101_object); // 0x42d Func
	var_99_object = var_101_object; // 0x42f Mov
	return 2; // 0x430 Return
}


func_684()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2ac PushV
	WaitForAnimEnd(); // 0x2ad Func
	var_23_bool = 0; // 0x2af PushV
	func_787(var_23_bool); // 0x2b0 NEW_2
	var_24_bool = var_23_bool == 0; // 0x2b2 Not
	if(var_24_bool == 0) goto Label_693; // 0x2b3 JumpB
	return 12; // 0x2b4 Return
	
Label_693:
	var_25_int = 0; // 0x2b5 PushV
	func_1105(var_25_int); // 0x2b6 NEW_2
	var_17_int = var_25_int; // 0x2b7 Mov
	var_18_int = 0; // 0x2b9 MovI
	
Label_698:
	var_38_bool = 0; // 0x2ba PushV
	var_38_bool = 0; // 0x2bb MovB
	var_39_int = 5; // 0x2bc PushI
	var_40_bool = var_18_int < var_39_int; // 0x2bd LT
	if(var_40_bool == 0) goto Label_708; // 0x2be JumpB
	var_41_bool = 0; // 0x2bf PushV
	func_787(var_41_bool); // 0x2c0 NEW_2
	if(var_41_bool == 0) goto Label_708; // 0x2c2 JumpB
	var_38_bool = 1; // 0x2c3 MovB
	
Label_708:
	if(var_38_bool == 0) goto Label_750; // 0x2c4 JumpB
	var_42_bool = var_17_int == 0; // 0x2c5 Not
	if(var_42_bool == 0) goto Label_718; // 0x2c6 JumpB
	var_43_int = 3; // 0x2c7 PushI
	Sleep(var_43_int, var_19_bool); // 0x2c8 Func
	var_44_bool = var_19_bool == 0; // 0x2ca Not
	if(var_44_bool == 0) goto Label_717; // 0x2cb JumpB
	goto Label_750; // 0x2cc Jump
	
Label_750:
	ResetAAS(); // 0x2ee Func
	return 12; // 0x2f0 Return
	
Label_717:
	goto Label_739; // 0x2cd Jump
	
Label_739:
	var_45_bool = 0; // 0x2e3 PushV
	func_753(var_45_bool); // 0x2e4 NEW_2
	var_46_bool = var_45_bool == 0; // 0x2e6 Not
	if(var_46_bool == 0) goto Label_745; // 0x2e7 JumpB
	goto Label_750; // 0x2e8 Jump
	
Label_745:
	ResetAAS(); // 0x2e9 Func
	var_47_int = 1; // 0x2eb PushI
	var_18_int = var_18_int + var_47_int; // 0x2ec Add2
	goto Label_698; // 0x2ed Jump
	
Label_718:
	irand(var_20_int, var_17_int); // 0x2ce Func
	var_48_int = 5; // 0x2d0 PushI
	irand(var_21_int, var_48_int); // 0x2d1 Func
	var_49_int = 0; // 0x2d3 PushI
	var_50_bool = var_21_int != var_49_int; // 0x2d4 Neq
	if(var_50_bool == 0) goto Label_727; // 0x2d5 JumpB
	var_20_int = 0; // 0x2d6 MovI
	
Label_727:
	var_51_string = "all"; // 0x2d7 PushS
	var_52_string = ""; var_53_int = 0; // 0x2d8 PushV
	var_53_int = var_20_int; // 0x2d9 Mov
	func_1098(var_52_string, var_53_int); // 0x2da NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2dc Func
	WaitForAnimEnd(var_22_bool); // 0x2de Func
	var_54_bool = var_22_bool == 0; // 0x2e0 Not
	if(var_54_bool == 0) goto Label_739; // 0x2e1 JumpB
	goto Label_750; // 0x2e2 Jump
}


func_1074(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x432 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x433 Or
	var_68_float = sqrt(var_69_int); // 0x434 Sqrt2
	var_70_float = 0.0; // 0x435 PushF
	var_71_bool = var_68_float < var_70_float; // 0x436 LT
	if(var_71_bool == 0) goto Label_1082; // 0x437 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x438 MovV
	return 2; // 0x439 Return
	
Label_1082:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x43a Div2
	return 2; // 0x43b Return
}


func_564()
{
	var_271_float = 0; var_272_float = 0; // 0x234 PushV
	var_273_int = 8; // 0x235 PushI
	var_274_int = 16; // 0x236 PushI
	rand(var_272_float, var_273_int, var_274_int); // 0x237 Func
	var_275_int = 10; // 0x239 PushI
	SetTimer(var_275_int, var_272_float); // 0x23a Func
	return 2; // 0x23c Return
}


func_1084(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x43c PushV
	GetVariable(var_202_string, var_204_int); // 0x43d Func
	var_201_int = var_204_int; // 0x43f Mov
	return 2; // 0x440 Return
}


func_573()
{
	var_270_int = 10; // 0x23d PushI
	KillTimer(var_270_int); // 0x23e Func
	return 0; // 0x240 Return
}


func_1089(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x441 PushV
	GetGameTime(var_154_float); // 0x442 Func
	var_155_int = 1; // 0x444 PushI
	var_156_int = 0; // 0x445 PushV
	var_157_int = 24; // 0x446 PushI
	var_156_int = var_154_float / var_154_float; // 0x447 Div2
	var_152_int = var_155_int + var_156_int; // 0x448 Add2
	return 2; // 0x449 Return
}


func_1219(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x4c3 PushV
	var_91_string = "branch"; // 0x4c4 PushS
	GetVariable(var_91_string, var_90_int); // 0x4c5 Func
	var_92_int = 0; // 0x4c7 PushI
	var_93_bool = var_90_int == var_92_int; // 0x4c8 Eq
	if(var_93_bool == 0) goto Label_1229; // 0x4c9 JumpB
	var_88_int = 1; // 0x4ca MovI
	return 2; // 0x4cb Return
	
Label_1229:
	var_94_int = 1; // 0x4cd PushI
	var_95_bool = var_90_int == var_94_int; // 0x4ce Eq
	if(var_95_bool == 0) goto Label_1234; // 0x4cf JumpB
	var_88_int = 2; // 0x4d0 MovI
	return 2; // 0x4d1 Return
	
Label_1234:
	var_88_int = 3; // 0x4d2 MovI
	return 2; // 0x4d3 Return
}


func_1098(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x44a PushV
	var_34_string = "idle"; // 0x44b MovS
	var_35_int = var_32_int; // 0x44c Push
	if(var_35_int == 0) goto Label_1103; // 0x44d JumpB
	var_34_string = var_34_string + var_32_int; // 0x44e Add2
	
Label_1103:
	var_31_string = var_34_string; // 0x44f Mov
	return 2; // 0x450 Return
}


func_459(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x1cc PushV
	var_27_object = var_25_object; // 0x1cd Mov
	TaskCall(0); // 0x1ce TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x1cf NEW_2
	TaskReturn(); // 0x1d0 TaskReturn
	return 0; // 0x1d2 Return
}


func_972(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x3cc PushV
	var_151_string = "d"; // 0x3cd PushS
	var_152_int = 0; // 0x3ce PushV
	func_1089(var_152_int); // 0x3cf NEW_2
	var_158_int = var_151_string + var_152_int; // 0x3d1 Add
	var_159_string = "m"; // 0x3d2 PushS
	var_146_string = var_158_int + var_159_string; // 0x3d3 Add2
	var_147_int = 0; // 0x3d4 MovI
	
Label_981:
	var_160_int = 1; // 0x3d5 PushI
	if(var_160_int == 0) goto Label_994; // 0x3d6 JumpB
	var_161_int = 1; // 0x3d7 PushI
	var_162_int = var_147_int + var_161_int; // 0x3d8 Add
	var_163_int = var_146_string + var_162_int; // 0x3d9 Add
	HasProperty(var_163_int, var_148_bool); // 0x3da ObjFunc
	var_164_bool = var_148_bool == 0; // 0x3dc Not
	if(var_164_bool == 0) goto Label_991; // 0x3dd JumpB
	goto Label_994; // 0x3de Jump
	
Label_994:
	var_165_bool = var_147_int == 0; // 0x3e2 Not
	if(var_165_bool == 0) goto Label_998; // 0x3e3 JumpB
	var_139_bool = 0; // 0x3e4 MovB
	return 10; // 0x3e5 Return
	
Label_998:
	var_149_int = 0; // 0x3e6 MovI
	var_166_int = 1; // 0x3e7 PushI
	var_167_bool = var_147_int > var_166_int; // 0x3e8 GT
	if(var_167_bool == 0) goto Label_1004; // 0x3e9 JumpB
	irand(var_149_int, var_147_int); // 0x3ea Func
	
Label_1004:
	var_168_int = 1; // 0x3ec PushI
	var_169_int = var_149_int + var_168_int; // 0x3ed Add
	var_170_int = var_146_string + var_169_int; // 0x3ee Add
	GetProperty(var_170_int, var_150_string); // 0x3ef ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x3f1 PushV
	var_172_string = var_150_string; // 0x3f2 Mov
	func_1046(var_171_bool, var_172_string); // 0x3f3 NEW_2
	var_139_bool = var_171_bool; // 0x3f4 Mov
	return 10; // 0x3f6 Return
	
Label_991:
	var_173_int = 1; // 0x3df PushI
	var_147_int = var_147_int + var_173_int; // 0x3e0 Add2
	goto Label_981; // 0x3e1 Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_139; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_1140(var_200_object); // 0x59 NEW_2
	if(var_199_bool == 0) goto Label_117; // 0x5b JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x5c PushV
	var_207_object = var_1_object; // 0x5d MovT
	var_208_object = var_0_object; // 0x5e MovT
	func_1134(); // 0x5f NEW_2
	var_211_string = ""; // 0x61 PushV
	var_211_string = "Neutral"; // 0x62 MovS
	func_169(var_193_object, var_211_string); // 0x63 NEW_2
	var_228_int = 526934; // 0x65 PushI
	SetMessage(var_228_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_229_int = 527936; // 0x6a PushI
	var_230_int = 29290; // 0x6b PushI
	var_231_int = 29289; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	var_232_int = 527942; // 0x6f PushI
	var_233_int = 29297; // 0x70 PushI
	var_234_int = 29295; // 0x71 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x72 TObjFunc
	goto Label_139; // 0x74 Jump
	
Label_139:
	var_235_bool = 0; // 0x8b PushV
	func_1244(var_235_bool); // 0x8c NEW_2
	if(var_235_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_236_string = var_3_string; // 0x91 PushT
	if(var_236_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_237_string = ""; // 0x94 PushV
	var_237_string = var_2_object; // 0x95 MovT
	func_1015(var_237_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_248_string = "all"; // 0x9a PushS
	var_249_string = "idle"; // 0x9b PushS
	PlayAnimation(var_248_string, var_249_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_250_string = var_3_string; // 0xa0 PushT
	if(var_250_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_251_string = "all"; // 0xa3 PushS
	var_252_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_251_string, var_252_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_117:
	var_253_string = ""; // 0x75 PushV
	var_253_string = "Neutral"; // 0x76 MovS
	func_169(var_193_object, var_253_string); // 0x77 NEW_2
	var_254_int = 526936; // 0x79 PushI
	SetMessage(var_254_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_255_int = 527935; // 0x7e PushI
	var_256_int = -1; // 0x7f PushI
	var_257_int = 29288; // 0x80 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x81 TObjFunc
	var_258_int = 526937; // 0x83 PushI
	var_259_int = -1; // 0x84 PushI
	var_260_int = 28229; // 0x85 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_1105(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x451 PushV
	var_28_int = 0; // 0x452 MovI
	
Label_1107:
	var_30_string = "all"; // 0x453 PushS
	var_31_string = ""; var_32_int = 0; // 0x454 PushV
	var_32_int = var_28_int; // 0x455 Mov
	func_1098(var_31_string, var_32_int); // 0x456 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x458 Func
	var_36_bool = var_29_bool == 0; // 0x45a Not
	if(var_36_bool == 0) goto Label_1117; // 0x45b JumpB
	goto Label_1120; // 0x45c Jump
	
Label_1120:
	var_25_int = var_28_int; // 0x460 Mov
	return 4; // 0x461 Return
	
Label_1117:
	var_37_int = 1; // 0x45d PushI
	var_28_int = var_28_int + var_37_int; // 0x45e Add2
	goto Label_1107; // 0x45f Jump
}


func_1236(var_85_int)
{
	var_85_int = 515573; // 0x4d4 MovI
	return 0; // 0x4d5 Return
}


func_1238(var_84_int)
{
	var_84_int = 504032; // 0x4d6 MovI
	return 0; // 0x4d7 Return
}


func_1240(var_86_string)
{
	var_86_string = "ui/NPC_Bakalavr.png"; // 0x4d8 MovS
	return 0; // 0x4d9 Return
}


func_1242(var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr_b.png"; // 0x4da MovS
	return 0; // 0x4db Return
}


func_1244(var_79_bool)
{
	var_79_bool = 1; // 0x4dc MovB
	return 0; // 0x4dd Return
}


func_860()
{
	var_263_bool = 0; var_264_bool = 0; // 0x35c PushV
	CameraSwitchToNormal(); // 0x35d Func
	var_265_bool = 0; // 0x35f PushV
	func_1244(var_265_bool); // 0x360 NEW_2
	if(var_265_bool == 0) goto Label_868; // 0x362 JumpB
	goto Label_876; // 0x363 Jump
	
Label_876:
	return 2; // 0x36c Return
	
Label_868:
	var_266_string = "head"; // 0x364 PushS
	HasAnimationTrack(var_264_bool, var_266_string); // 0x365 Func
	var_267_bool = var_264_bool; // 0x367 Push
	if(var_267_bool == 0) goto Label_876; // 0x368 JumpB
	var_268_string = "head"; // 0x369 PushS
	UnlookAsync(var_268_string); // 0x36a Func
}


func_1122()
{
	var_15_string = "k10q01"; // 0x463 PushS
	var_16_int = 1; // 0x464 PushI
	SetVariable(var_15_string, var_16_int); // 0x465 Func
	func_1152(); // 0x468 NEW_2
	func_1165(); // 0x46b NEW_2
	return 0; // 0x46d Return
}


func_615()
{
	func_755(); // 0x268 NEW_2
	func_573(); // 0x26b NEW_2
	lshStopSpeech(); // 0x26d Func
	lshStopAnimation(); // 0x26f Func
	StopAsync(); // 0x271 Func
	Hold(); // 0x273 Func
	return 0; // 0x275 Return
}


func_877(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x36d PushV
	var_106_string = "voice_common"; // 0x36e PushS
	GetVariable(var_106_string, var_104_int); // 0x36f Func
	var_107_int = var_104_int; // 0x371 Push
	if(var_107_int == 0) goto Label_915; // 0x372 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x373 PushV
	var_109_object = var_98_object; // 0x374 Mov
	func_935(var_109_object); // 0x375 NEW_2
	var_138_bool = var_108_bool == 0; // 0x377 Not
	if(var_138_bool == 0) goto Label_897; // 0x378 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x379 PushV
	var_140_object = var_98_object; // 0x37a Mov
	func_972(var_140_object); // 0x37b NEW_2
	var_174_bool = var_139_bool == 0; // 0x37d Not
	if(var_174_bool == 0) goto Label_897; // 0x37e JumpB
	var_97_bool = 0; // 0x37f MovB
	return 4; // 0x380 Return
	
Label_897:
	var_175_int = 2; // 0x381 PushI
	irand(var_105_int, var_175_int); // 0x382 Func
	var_176_int = var_105_int; // 0x384 Push
	if(var_176_int == 0) goto Label_910; // 0x385 JumpB
	var_177_string = "voice_common"; // 0x386 PushS
	var_178_int = 1; // 0x387 PushI
	var_179_int = var_104_int + var_178_int; // 0x388 Add
	var_180_int = 3; // 0x389 PushI
	var_181_int = var_179_int / var_180_int; // 0x38a Mod
	SetVariable(var_177_string, var_181_int); // 0x38b Func
	goto Label_914; // 0x38d Jump
	
Label_914:
	goto Label_933; // 0x392 Jump
	
Label_933:
	var_97_bool = 1; // 0x3a5 MovB
	return 4; // 0x3a6 Return
	
Label_910:
	var_182_string = "voice_common"; // 0x38e PushS
	var_183_int = 0; // 0x38f PushI
	SetVariable(var_182_string, var_183_int); // 0x390 Func
	
Label_915:
	var_184_bool = 0; var_185_object = Obj(); // 0x393 PushV
	var_185_object = var_98_object; // 0x394 Mov
	func_972(var_185_object); // 0x395 NEW_2
	var_186_bool = var_184_bool == 0; // 0x397 Not
	if(var_186_bool == 0) goto Label_929; // 0x398 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x399 PushV
	var_188_object = var_98_object; // 0x39a Mov
	func_935(var_188_object); // 0x39b NEW_2
	var_189_bool = var_187_bool == 0; // 0x39d Not
	if(var_189_bool == 0) goto Label_929; // 0x39e JumpB
	var_97_bool = 0; // 0x39f MovB
	return 4; // 0x3a0 Return
	
Label_929:
	var_190_string = "voice_common"; // 0x3a1 PushS
	var_191_int = 1; // 0x3a2 PushI
	SetVariable(var_190_string, var_191_int); // 0x3a3 Func
}


func_1134()
{
	var_209_string = "k10q01KnowAboutRubin"; // 0x46f PushS
	var_210_int = 1; // 0x470 PushI
	SetVariable(var_209_string, var_210_int); // 0x471 Func
	return 0; // 0x473 Return
}


func_753(var_45_bool)
{
	var_45_bool = 1; // 0x2f1 MovB
	return 0; // 0x2f2 Return
}


func_755()
{
	StopAnimation(); // 0x2f3 Func
	StopGroup0(); // 0x2f5 Func
	return 0; // 0x2f7 Return
}


func_1140(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x475 PushV
	var_202_string = "k10q01"; // 0x476 MovS
	func_1084(var_201_int, var_202_string); // 0x477 NEW_2
	var_205_int = 0; // 0x479 PushI
	var_206_bool = var_201_int == var_205_int; // 0x47a Eq
	if(var_206_bool == 0) goto Label_1150; // 0x47b JumpB
	var_199_bool = 1; // 0x47c MovB
	return 0; // 0x47d Return
	
Label_1150:
	var_199_bool = 0; // 0x47e MovB
	return 0; // 0x47f Return
}


func_630()
{
	StopGroup0(); // 0x276 Func
	func_573(); // 0x279 NEW_2
	var_8_string = ""; // 0x27b PushV
	var_8_string = "Neutral"; // 0x27c MovS
	func_1015(var_8_string); // 0x27d NEW_2
	func_564(); // 0x280 NEW_2
	return 0; // 0x282 Return
}


func_1015(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x3f7 PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x3f8 Func
	var_244_bool = var_241_bool; // 0x3fa Push
	if(var_244_bool == 0) goto Label_1026; // 0x3fb JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x3fc Func
	var_245_bool = 0; // 0x3fe PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x3ff Func
	goto Label_1030; // 0x401 Jump
	
Label_1030:
	return 6; // 0x406 Return
	
Label_1026:
	var_246_string = "Can't find lsh animation : "; // 0x402 PushS
	var_247_int = var_246_string + var_237_string; // 0x403 Add
	Trace(var_247_int); // 0x404 Func
}


func_760(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x2f8 PushV
	GetPosition(var_27_cvector); // 0x2f9 Func
	GetPosition(var_28_cvector); // 0x2fb ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2fd Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2fe Or2
	return 6; // 0x2ff Return
}


func_508(var_0_object)
{
	var_7_bool = 0; // 0x1fc PushV
	func_787(var_7_bool); // 0x1fd NEW_2
	var_10_bool = var_7_bool == 0; // 0x1ff Not
	if(var_10_bool == 0) goto Label_515; // 0x200 JumpB
	Hold(); // 0x201 Func
	
Label_515:
	GetDirection(var_0_object); // 0x203 Func
	
Label_517:
	func_684(); // 0x206 NEW_2
	goto Label_517; // 0x208 Jump
}


