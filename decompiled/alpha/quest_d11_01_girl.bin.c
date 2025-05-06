task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xac PushI
	if(var_8_int == 0) goto Label_426; // 0xad JumpB
	func_563(); // 0xaf Call
	var_10_int = 15659; // 0xb1 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xb2 Eq
	if(var_11_bool == 0) goto Label_185; // 0xb3 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xb4 PushV
	var_12_object = var_1_object; // 0xb5 MovT
	var_13_object = var_0_object; // 0xb6 MovT
	func_614(); // 0xb7 Call
	
Label_185:
	var_63_int = 15660; // 0xb9 PushI
	var_64_bool = var_7_bool == var_63_int; // 0xba Eq
	if(var_64_bool == 0) goto Label_193; // 0xbb JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0xbc PushV
	var_65_object = var_1_object; // 0xbd MovT
	var_66_object = var_0_object; // 0xbe MovT
	func_614(); // 0xbf Call
	
Label_193:
	var_67_int = 15646; // 0xc1 PushI
	var_68_bool = var_6_int == var_67_int; // 0xc2 Eq
	if(var_68_bool == 0) goto Label_250; // 0xc3 JumpB
	var_69_bool = 0; // 0xc4 PushV
	var_69_bool = 0; // 0xc5 MovB
	var_70_bool = 0; var_71_object = Obj(); // 0xc6 PushV
	var_71_object = var_1_object; // 0xc7 MovT
	func_642(var_71_object); // 0xc8 Call
	if(var_70_bool == 0) goto Label_209; // 0xca JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0xcb PushV
	var_79_object = var_1_object; // 0xcc MovT
	func_654(var_79_object); // 0xcd Call
	if(var_78_bool == 0) goto Label_209; // 0xcf JumpB
	var_69_bool = 1; // 0xd0 MovB
	
Label_209:
	if(var_69_bool == 0) goto Label_235; // 0xd1 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0xd2 PushV
	var_84_object = var_1_object; // 0xd3 MovT
	var_85_object = var_0_object; // 0xd4 MovT
	func_608(); // 0xd5 Call
	var_88_string = ""; // 0xd7 PushV
	var_88_string = "Neutral"; // 0xd8 MovS
	func_155(var_7_bool, var_88_string); // 0xd9 Call
	var_103_int = 14421; // 0xdb PushI
	SetMessage(var_103_int); // 0xdc TObjFunc
	ClearReplies(); // 0xde TObjFunc
	var_104_int = 14422; // 0xe0 PushI
	var_105_int = 15648; // 0xe1 PushI
	var_106_int = 15647; // 0xe2 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xe3 TObjFunc
	var_107_int = 14443; // 0xe5 PushI
	var_108_int = 15650; // 0xe6 PushI
	var_109_int = 15670; // 0xe7 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_110_string = ""; // 0xeb PushV
	var_110_string = "Neutral"; // 0xec MovS
	func_155(var_7_bool, var_110_string); // 0xed Call
	var_111_int = 14502; // 0xef PushI
	SetMessage(var_111_int); // 0xf0 TObjFunc
	ClearReplies(); // 0xf2 TObjFunc
	var_112_int = 14503; // 0xf4 PushI
	var_113_int = -1; // 0xf5 PushI
	var_114_int = 15740; // 0xf6 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0xf7 TObjFunc
	return 0; // 0xf9 Return
	
Label_250:
	var_115_int = 15648; // 0xfa PushI
	var_116_bool = var_6_int == var_115_int; // 0xfb Eq
	if(var_116_bool == 0) goto Label_273; // 0xfc JumpB
	var_117_string = ""; // 0xfd PushV
	var_117_string = "Neutral"; // 0xfe MovS
	func_155(var_7_bool, var_117_string); // 0xff Call
	var_118_int = 14423; // 0x101 PushI
	SetMessage(var_118_int); // 0x102 TObjFunc
	ClearReplies(); // 0x104 TObjFunc
	var_119_int = 14424; // 0x106 PushI
	var_120_int = 15650; // 0x107 PushI
	var_121_int = 15649; // 0x108 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x109 TObjFunc
	var_122_int = 14440; // 0x10b PushI
	var_123_int = 15667; // 0x10c PushI
	var_124_int = 15666; // 0x10d PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x10e TObjFunc
	return 0; // 0x110 Return
	
Label_273:
	var_125_int = 15667; // 0x111 PushI
	var_126_bool = var_6_int == var_125_int; // 0x112 Eq
	if(var_126_bool == 0) goto Label_291; // 0x113 JumpB
	var_127_string = ""; // 0x114 PushV
	var_127_string = "Neutral"; // 0x115 MovS
	func_155(var_7_bool, var_127_string); // 0x116 Call
	var_128_int = 14441; // 0x118 PushI
	SetMessage(var_128_int); // 0x119 TObjFunc
	ClearReplies(); // 0x11b TObjFunc
	var_129_int = 14442; // 0x11d PushI
	var_130_int = 15650; // 0x11e PushI
	var_131_int = 15668; // 0x11f PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x120 TObjFunc
	return 0; // 0x122 Return
	
Label_291:
	var_132_int = 15650; // 0x123 PushI
	var_133_bool = var_6_int == var_132_int; // 0x124 Eq
	if(var_133_bool == 0) goto Label_314; // 0x125 JumpB
	var_134_string = ""; // 0x126 PushV
	var_134_string = "Neutral"; // 0x127 MovS
	func_155(var_7_bool, var_134_string); // 0x128 Call
	var_135_int = 14425; // 0x12a PushI
	SetMessage(var_135_int); // 0x12b TObjFunc
	ClearReplies(); // 0x12d TObjFunc
	var_136_int = 14426; // 0x12f PushI
	var_137_int = 15652; // 0x130 PushI
	var_138_int = 15651; // 0x131 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x132 TObjFunc
	var_139_int = 14436; // 0x134 PushI
	var_140_int = 15662; // 0x135 PushI
	var_141_int = 15661; // 0x136 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x137 TObjFunc
	return 0; // 0x139 Return
	
Label_314:
	var_142_int = 15662; // 0x13a PushI
	var_143_bool = var_6_int == var_142_int; // 0x13b Eq
	if(var_143_bool == 0) goto Label_337; // 0x13c JumpB
	var_144_string = ""; // 0x13d PushV
	var_144_string = "Neutral"; // 0x13e MovS
	func_155(var_7_bool, var_144_string); // 0x13f Call
	var_145_int = 14437; // 0x141 PushI
	SetMessage(var_145_int); // 0x142 TObjFunc
	ClearReplies(); // 0x144 TObjFunc
	var_146_int = 14438; // 0x146 PushI
	var_147_int = 15652; // 0x147 PushI
	var_148_int = 15663; // 0x148 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x149 TObjFunc
	var_149_int = 14439; // 0x14b PushI
	var_150_int = 15652; // 0x14c PushI
	var_151_int = 15665; // 0x14d PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x14e TObjFunc
	return 0; // 0x150 Return
	
Label_337:
	var_152_int = 15652; // 0x151 PushI
	var_153_bool = var_6_int == var_152_int; // 0x152 Eq
	if(var_153_bool == 0) goto Label_355; // 0x153 JumpB
	var_154_string = ""; // 0x154 PushV
	var_154_string = "Neutral"; // 0x155 MovS
	func_155(var_7_bool, var_154_string); // 0x156 Call
	var_155_int = 14427; // 0x158 PushI
	SetMessage(var_155_int); // 0x159 TObjFunc
	ClearReplies(); // 0x15b TObjFunc
	var_156_int = 14428; // 0x15d PushI
	var_157_int = 15654; // 0x15e PushI
	var_158_int = 15653; // 0x15f PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_159_int = 15654; // 0x163 PushI
	var_160_bool = var_6_int == var_159_int; // 0x164 Eq
	if(var_160_bool == 0) goto Label_373; // 0x165 JumpB
	var_161_string = ""; // 0x166 PushV
	var_161_string = "Neutral"; // 0x167 MovS
	func_155(var_7_bool, var_161_string); // 0x168 Call
	var_162_int = 14429; // 0x16a PushI
	SetMessage(var_162_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_163_int = 14430; // 0x16f PushI
	var_164_int = 15656; // 0x170 PushI
	var_165_int = 15655; // 0x171 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x172 TObjFunc
	return 0; // 0x174 Return
	
Label_373:
	var_166_int = 15656; // 0x175 PushI
	var_167_bool = var_6_int == var_166_int; // 0x176 Eq
	if(var_167_bool == 0) goto Label_391; // 0x177 JumpB
	var_168_string = ""; // 0x178 PushV
	var_168_string = "Neutral"; // 0x179 MovS
	func_155(var_7_bool, var_168_string); // 0x17a Call
	var_169_int = 14431; // 0x17c PushI
	SetMessage(var_169_int); // 0x17d TObjFunc
	ClearReplies(); // 0x17f TObjFunc
	var_170_int = 14432; // 0x181 PushI
	var_171_int = 15658; // 0x182 PushI
	var_172_int = 15657; // 0x183 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x184 TObjFunc
	return 0; // 0x186 Return
	
Label_391:
	var_173_int = 15658; // 0x187 PushI
	var_174_bool = var_6_int == var_173_int; // 0x188 Eq
	if(var_174_bool == 0) goto Label_414; // 0x189 JumpB
	var_175_string = ""; // 0x18a PushV
	var_175_string = "Neutral"; // 0x18b MovS
	func_155(var_7_bool, var_175_string); // 0x18c Call
	var_176_int = 14433; // 0x18e PushI
	SetMessage(var_176_int); // 0x18f TObjFunc
	ClearReplies(); // 0x191 TObjFunc
	var_177_int = 14434; // 0x193 PushI
	var_178_int = -1; // 0x194 PushI
	var_179_int = 15659; // 0x195 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x196 TObjFunc
	var_180_int = 14435; // 0x198 PushI
	var_181_int = -1; // 0x199 PushI
	var_182_int = 15660; // 0x19a PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x19b TObjFunc
	return 0; // 0x19d Return
	
Label_414:
	var_3_string = 1; // 0x19e TMovB
	var_183_bool = 0; // 0x19f PushV
	func_762(var_183_bool); // 0x1a0 Call
	if(var_183_bool == 0) goto Label_422; // 0x1a2 JumpB
	lshStopAnimation(); // 0x1a3 Func
	goto Label_424; // 0x1a5 Jump
	
Label_424:
	return 0; // 0x1a8 Return
	
Label_422:
	StopAnimation(); // 0x1a6 Func
	
Label_426:
	return 0; // 0x1aa Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x1ac PushV
	var_8_object = var_6_object; // 0x1ad Mov
	TaskCall(0); // 0x1ae TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x1af Call
	TaskReturn(); // 0x1b0 TaskReturn
	return 0; // 0x1b2 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1b7 PushV
	var_9_string = "cleanup"; // 0x1b8 PushS
	var_10_bool = var_6_string == var_9_string; // 0x1b9 Eq
	if(var_10_bool == 0) goto Label_462; // 0x1ba JumpB
	var_0_object = 1; // 0x1bb TMovB
	IsLoaded(var_8_bool); // 0x1bc Func
	var_11_bool = 0; // 0x1be PushV
	var_11_bool = 0; // 0x1bf MovB
	var_12_bool = var_8_bool == 0; // 0x1c0 Not
	if(var_12_bool == 0) goto Label_455; // 0x1c1 JumpB
	var_13_bool = 0; // 0x1c2 PushV
	func_483(var_13_bool); // 0x1c3 Call
	if(var_13_bool == 0) goto Label_455; // 0x1c5 JumpB
	var_11_bool = 1; // 0x1c6 MovB
	
Label_455:
	if(var_11_bool == 0) goto Label_461; // 0x1c7 JumpB
	var_14_object = Obj(); // 0x1c8 PushV
	func_570(var_14_object); // 0x1c9 Call
	RemoveActor(var_14_object); // 0x1cb Func
	
Label_461:
	goto Label_466; // 0x1cd Jump
	
Label_466:
	return 2; // 0x1d2 Return
	
Label_462:
	var_17_string = "restore"; // 0x1ce PushS
	var_18_bool = var_6_string == var_17_string; // 0x1cf Eq
	if(var_18_bool == 0) goto Label_466; // 0x1d0 JumpB
	var_0_object = 0; // 0x1d1 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1d3 PushV
	var_6_bool = 0; // 0x1d4 MovB
	var_7_object = var_0_object; // 0x1d5 PushT
	if(var_7_object == 0) goto Label_476; // 0x1d6 JumpB
	var_8_bool = 0; // 0x1d7 PushV
	func_483(var_8_bool); // 0x1d8 Call
	if(var_8_bool == 0) goto Label_476; // 0x1da JumpB
	var_6_bool = 1; // 0x1db MovB
	
Label_476:
	if(var_6_bool == 0) goto Label_482; // 0x1dc JumpB
	var_9_object = Obj(); // 0x1dd PushV
	func_570(var_9_object); // 0x1de Call
	RemoveActor(var_9_object); // 0x1e0 Func
	
Label_482:
	return 0; // 0x1e2 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_435:
	Hold(); // 0x1b3 Func
	goto Label_435; // 0x1b5 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	func_485(var_19_object); // 0x4 Call
	var_58_bool = var_18_bool == 0; // 0x6 Not
	if(var_58_bool == 0) goto Label_10; // 0x7 JumpB
	var_7_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_14_object); // 0xa Func
	var_59_int = 0; // 0xc PushV
	func_758(var_59_int); // 0xd Call
	SetNPCName(var_59_int); // 0xf ObjFunc
	var_60_string = ""; // 0x11 PushV
	func_760(var_60_string); // 0x12 Call
	SetPhoto(var_60_string); // 0x14 ObjFunc
	var_61_int = 0; // 0x16 PushV
	func_725(var_61_int); // 0x17 Call
	SetPlayerName(var_61_int); // 0x19 ObjFunc
	var_16_int = -1; // 0x1b MovI
	IsOverrideActive(var_15_bool); // 0x1c Func
	var_69_bool = var_15_bool; // 0x1e Push
	if(var_69_bool == 0) goto Label_34; // 0x1f JumpB
	var_7_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_14_object); // 0x22 Func
	var_70_object = Obj(); var_71_object = Obj(); // 0x24 PushV
	var_70_object = var_8_object; // 0x25 Mov
	var_71_object = var_14_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_17_bool); // 0x2b ObjFunc
	
Label_45:
	var_131_bool = var_17_bool == 0; // 0x2d Not
	if(var_131_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_17_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_132_object = Obj(); // 0x34 PushV
	var_132_object = var_8_object; // 0x35 Mov
	func_541(); // 0x36 Call
	StopDialog(var_14_object); // 0x38 Func
	GetReturnValue(var_16_int); // 0x3a ObjFunc
	var_7_int = var_16_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_576(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0; // 0x240 PushV
	var_48_int = var_44_cvector | var_44_cvector; // 0x241 Or
	var_47_float = sqrt(var_48_int); // 0x242 Sqrt2
	var_49_float = 0.0; // 0x243 PushF
	var_50_bool = var_47_float < var_49_float; // 0x244 LT
	if(var_50_bool == 0) goto Label_584; // 0x245 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x246 MovV
	return 2; // 0x247 Return
	
Label_584:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x248 Div2
	return 2; // 0x249 Return
}


func_642(var_78_bool)
{
	var_80_int = 0; var_81_string = ""; // 0x283 PushV
	var_81_string = "d11q01"; // 0x284 MovS
	func_586(var_80_int, var_81_string); // 0x285 Call
	var_84_int = 1; // 0x287 PushI
	var_85_bool = var_80_int == var_84_int; // 0x288 Eq
	if(var_85_bool == 0) goto Label_652; // 0x289 JumpB
	var_78_bool = 1; // 0x28a MovB
	return 0; // 0x28b Return
	
Label_652:
	var_78_bool = 0; // 0x28c MovB
	return 0; // 0x28d Return
}


func_708(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x2c4 PushV
	GetMainOutdoorScene(var_21_object); // 0x2c5 Func
	var_23_bool = var_21_object == 0; // 0x2c7 NullEq
	if(var_23_bool == 0) goto Label_719; // 0x2c8 JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x2c9 PushS
	Trace(var_24_string); // 0x2ca Func
	var_22_object = 0; // 0x2cc SetNull
	var_18_object = var_22_object; // 0x2cd Mov
	return 4; // 0x2ce Return
	
Label_719:
	GetMap(var_22_object); // 0x2cf ObjFunc
	var_18_object = var_22_object; // 0x2d1 Mov
	return 4; // 0x2d2 Return
}


func_586(var_80_int, var_81_string)
{
	var_82_int = 0; var_83_int = 0; // 0x24a PushV
	GetVariable(var_81_string, var_83_int); // 0x24b Func
	var_80_int = var_83_int; // 0x24d Mov
	return 2; // 0x24e Return
}


func_654(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x28f PushV
	var_89_string = "ood11Nude1"; // 0x290 MovS
	func_586(var_88_int, var_89_string); // 0x291 Call
	var_90_int = 0; // 0x293 PushI
	var_91_bool = var_88_int == var_90_int; // 0x294 Eq
	if(var_91_bool == 0) goto Label_664; // 0x295 JumpB
	var_86_bool = 1; // 0x296 MovB
	return 0; // 0x297 Return
	
Label_664:
	var_86_bool = 0; // 0x298 MovB
	return 0; // 0x299 Return
}


func_591(var_57_bool, var_58_string, var_59_string)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x24f PushV
	FindActor(var_61_object, var_58_string); // 0x250 Func
	var_62_bool = var_61_object == 0; // 0x252 NullEq
	if(var_62_bool == 0) goto Label_598; // 0x253 JumpB
	var_57_bool = 0; // 0x254 MovB
	return 2; // 0x255 Return
	
Label_598:
	Trigger(var_61_object, var_59_string); // 0x256 Func
	var_57_bool = 1; // 0x258 MovB
	return 2; // 0x259 Return
}


func_725(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x2d5 PushV
	var_64_string = "player"; // 0x2d6 PushS
	GetVariable(var_64_string, var_63_int); // 0x2d7 Func
	var_65_int = 0; // 0x2d9 PushI
	var_66_bool = var_63_int == var_65_int; // 0x2da Eq
	if(var_66_bool == 0) goto Label_735; // 0x2db JumpB
	var_61_int = 200001; // 0x2dc MovI
	return 2; // 0x2dd Return
	
Label_735:
	var_67_int = 1; // 0x2df PushI
	var_68_bool = var_63_int == var_67_int; // 0x2e0 Eq
	if(var_68_bool == 0) goto Label_740; // 0x2e1 JumpB
	var_61_int = 200002; // 0x2e2 MovI
	return 2; // 0x2e3 Return
	
Label_740:
	var_61_int = 200003; // 0x2e4 MovI
	return 2; // 0x2e5 Return
}


func_666(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x29a PushV
	GetDiaryRoot(var_49_object); // 0x29b Func
	var_50_bool = var_49_object == 0; // 0x29d Not
	if(var_50_bool == 0) goto Label_676; // 0x29e JumpB
	var_51_string = "Can't retrieve diary root"; // 0x29f PushS
	Trace(var_51_string); // 0x2a0 Func
	var_47_object = 0; // 0x2a2 MovB
	return 2; // 0x2a3 Return
	
Label_676:
	var_47_object = var_49_object; // 0x2a4 Mov
	return 2; // 0x2a5 Return
}


func_155(var_2_object, var_96_string)
{
	var_97_bool = 0; // 0x9c PushV
	func_762(var_97_bool); // 0x9d Call
	var_98_bool = var_97_bool == 0; // 0x9f Not
	if(var_98_bool == 0) goto Label_162; // 0xa0 JumpB
	return 0; // 0xa1 Return
	
Label_162:
	var_99_bool = var_96_string == var_2_object; // 0xa2 Eq
	if(var_99_bool == 0) goto Label_165; // 0xa3 JumpB
	return 0; // 0xa4 Return
	
Label_165:
	var_100_string = ""; // 0xa5 PushV
	var_100_string = var_96_string; // 0xa6 Mov
	func_545(var_100_string); // 0xa7 Call
	var_2_object = var_96_string; // 0xa9 TMov
	return 0; // 0xaa Return
}


func_603(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x25b PushV
	GetGameTime(var_31_float); // 0x25c Func
	var_29_float = var_31_float; // 0x25e Mov
	return 2; // 0x25f Return
}


func_541()
{
	CameraSwitchToNormal(); // 0x21e Func
	return 0; // 0x220 Return
}


func_608()
{
	var_94_string = "ood11Nude1"; // 0x261 PushS
	var_95_int = 1; // 0x262 PushI
	SetVariable(var_94_string, var_95_int); // 0x263 Func
	return 0; // 0x265 Return
}


func_545(var_100_string)
{
	var_101_float = 0; var_102_float = 0; var_103_float = 0; var_104_float = 0; // 0x221 PushV
	var_105_string = "playing "; // 0x222 PushS
	var_106_int = var_105_string + var_100_string; // 0x223 Add
	Trace(var_106_int); // 0x224 Func
	lshGetAnimTimes(var_100_string, var_103_float, var_104_float); // 0x226 Func
	lshPlayAnimation(var_103_float, var_104_float); // 0x228 Func
	var_107_string = "start: "; // 0x22a PushS
	var_108_int = var_107_string + var_103_float; // 0x22b Add
	Trace(var_108_int); // 0x22c Func
	var_109_string = "end: "; // 0x22e PushS
	var_110_int = var_109_string + var_104_float; // 0x22f Add
	Trace(var_110_int); // 0x230 Func
	return 4; // 0x232 Return
}


func_483(var_8_bool)
{
	var_8_bool = 1; // 0x1e3 MovB
	return 0; // 0x1e4 Return
}


func_762(var_97_bool)
{
	var_97_bool = 0; // 0x2fa MovB
	return 0; // 0x2fb Return
}


func_485(var_18_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x1e5 PushV
	GetPosition(var_29_cvector); // 0x1e6 ObjFunc
	GetEyesHeight(var_28_float); // 0x1e8 ObjFunc
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x1ea PushE
	var_36_float = var_36_float + var_28_float; // 0x1eb Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x1ec PopE
	GetPosition(var_30_cvector); // 0x1ed Func
	GetEyesHeight(var_28_float); // 0x1ef Func
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x1f1 PushE
	var_37_float = var_37_float + var_28_float; // 0x1f2 Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x1f3 PopE
	var_31_cvector = var_29_cvector - var_30_cvector; // 0x1f4 Sub2
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x1f5 PushE
	var_38_float = 0; // 0x1f6 MovI
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x1f7 PopE
	var_39_int = var_31_cvector | var_31_cvector; // 0x1f8 Or
	var_40_float = sqrt(var_39_int); // 0x1f9 Sqrt
	var_31_cvector = var_31_cvector / var_31_cvector; // 0x1fa Div2
	var_32_cvector = -var_31_cvector; // 0x1fb Neg2
	var_41_int = 70; // 0x1fc PushI
	var_42_float = var_31_cvector * var_41_int; // 0x1fd Mult
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x1fe PushV
	var_45_cvector = CVector(0.0, 1.0, 0.0); // 0x1ff PushVec
	var_44_cvector = var_32_cvector ^ var_45_cvector; // 0x200 Xor2
	func_576(var_43_cvector, var_44_cvector); // 0x201 Call
	var_51_int = 25; // 0x203 PushI
	var_52_float = var_43_cvector * var_51_int; // 0x204 Mult
	var_53_int = var_42_float + var_52_float; // 0x205 Add
	var_54_cvector = CVector(0.0, 10.0, 0.0); // 0x206 PushVec
	var_33_cvector = var_53_int - var_54_cvector; // 0x207 Sub2
	var_34_cvector = var_30_cvector + var_33_cvector; // 0x208 Add2
	IsOverrideActive(var_35_bool); // 0x209 Func
	var_55_bool = var_35_bool; // 0x20b Push
	if(var_55_bool == 0) goto Label_527; // 0x20c JumpB
	var_18_bool = 0; // 0x20d MovB
	return 16; // 0x20e Return
	
Label_527:
	StopWorld(); // 0x20f Func
	CameraTransit(var_34_cvector, var_32_cvector); // 0x211 Func
	var_56_float = GetByIndex(var_33_cvector, 0); // 0x213 PushE
	var_57_float = GetByIndex(var_33_cvector, 2); // 0x214 PushE
	Rotate(var_56_float, var_57_float); // 0x215 Func
	CameraWaitForPlayFinish(); // 0x217 Func
	ResumeWorld(); // 0x219 Func
	var_18_bool = 1; // 0x21b MovB
	return 16; // 0x21c Return
}


func_614()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x266 PushV
	var_16_string = "d11q01"; // 0x267 PushS
	var_17_int = 2; // 0x268 PushI
	SetVariable(var_16_string, var_17_int); // 0x269 Func
	var_18_object = Obj(); // 0x26b PushV
	func_708(var_18_object); // 0x26c Call
	var_15_object = var_18_object; // 0x26d Mov
	var_25_string = "d11q01NudeGotoRastrel"; // 0x26f PushS
	var_26_string = "pt_d11q01_msoldier"; // 0x270 PushS
	var_27_int = 1; // 0x271 PushI
	var_28_int = 15482; // 0x272 PushI
	var_29_float = 0; // 0x273 PushV
	func_603(var_29_float); // 0x274 Call
	AddMark(var_25_string, var_26_string, var_27_int, var_28_int, var_29_float); // 0x276 ObjFunc
	func_742(); // 0x279 Call
	var_57_bool = 0; var_58_string = ""; var_59_string = ""; // 0x27b PushV
	var_58_string = "quest_d11_01"; // 0x27c MovS
	var_59_string = "init_soldiers"; // 0x27d MovS
	func_591(var_57_bool, var_58_string, var_59_string); // 0x27e Call
	return 2; // 0x280 Return
}


func_679(var_38_bool, var_39_object, var_40_int)
{
	var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x2a7 PushV
	var_47_object = Obj(); // 0x2a8 PushV
	func_666(var_47_object); // 0x2a9 Call
	var_44_object = var_47_object; // 0x2aa Mov
	Find(var_40_int, var_45_object); // 0x2ac ObjFunc
	var_52_bool = var_45_object == 0; // 0x2ae Not
	if(var_52_bool == 0) goto Label_694; // 0x2af JumpB
	var_53_string = "Can't find diary parent with id: "; // 0x2b0 PushS
	var_54_int = var_53_string + var_40_int; // 0x2b1 Add
	Trace(var_54_int); // 0x2b2 Func
	var_38_bool = 0; // 0x2b4 MovB
	return 6; // 0x2b5 Return
	
Label_694:
	AddChild(var_39_object); // 0x2b6 ObjFunc
	var_55_string = "player_diary"; // 0x2b8 PushS
	var_56_int = 1; // 0x2b9 PushI
	SetVariable(var_55_string, var_56_int); // 0x2ba Func
	GetCategory(var_46_int); // 0x2bc ObjFunc
	SetDiarySection(var_46_int); // 0x2be Func
	var_38_bool = 0; // 0x2c0 MovB
	return 6; // 0x2c1 Return
}


func_742()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x2e6 PushV
	var_34_string = "Adding diary entry"; // 0x2e7 PushS
	Trace(var_34_string); // 0x2e8 Func
	var_35_int = 194; // 0x2ea PushI
	var_36_int = 1; // 0x2eb PushI
	var_37_int = 15479; // 0x2ec PushI
	CreateDiaryEntry(var_33_object, var_35_int, var_36_int, var_37_int); // 0x2ed Func
	var_38_bool = 0; var_39_object = Obj(); var_40_int = 0; // 0x2ef PushV
	var_39_object = var_33_object; // 0x2f0 Mov
	var_40_int = 192; // 0x2f1 MovI
	func_679(var_38_bool, var_39_object, var_40_int); // 0x2f2 Call
	return 2; // 0x2f4 Return
}


func_563()
{
	var_9_bool = 0; // 0x233 PushV
	func_762(var_9_bool); // 0x234 Call
	if(var_9_bool == 0) goto Label_569; // 0x236 JumpB
	lshStopSpeech(); // 0x237 Func
	
Label_569:
	return 0; // 0x239 Return
}


func_758(var_59_int)
{
	var_59_int = 14839; // 0x2f6 MovI
	return 0; // 0x2f7 Return
}


func_760(var_60_string)
{
	var_60_string = "ui/NPC_None.png"; // 0x2f8 MovS
	return 0; // 0x2f9 Return
}


func_570(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x23a PushV
	self(var_11_object); // 0x23b Func
	var_9_object = var_11_object; // 0x23d Mov
	return 2; // 0x23e Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object; // 0x40 TMov
	var_1_object = var_70_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_76_int = 1; // 0x43 PushI
	if(var_76_int == 0) goto Label_125; // 0x44 JumpB
	var_77_bool = 0; // 0x45 PushV
	var_77_bool = 0; // 0x46 MovB
	var_78_bool = 0; var_79_object = Obj(); // 0x47 PushV
	var_79_object = var_1_object; // 0x48 MovT
	func_642(var_79_object); // 0x49 Call
	if(var_78_bool == 0) goto Label_82; // 0x4b JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x4c PushV
	var_87_object = var_1_object; // 0x4d MovT
	func_654(var_87_object); // 0x4e Call
	if(var_86_bool == 0) goto Label_82; // 0x50 JumpB
	var_77_bool = 1; // 0x51 MovB
	
Label_82:
	if(var_77_bool == 0) goto Label_108; // 0x52 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x53 PushV
	var_92_object = var_1_object; // 0x54 MovT
	var_93_object = var_0_object; // 0x55 MovT
	func_608(); // 0x56 Call
	var_96_string = ""; // 0x58 PushV
	var_96_string = "Neutral"; // 0x59 MovS
	func_155(var_71_object, var_96_string); // 0x5a Call
	var_111_int = 14421; // 0x5c PushI
	SetMessage(var_111_int); // 0x5d TObjFunc
	ClearReplies(); // 0x5f TObjFunc
	var_112_int = 14422; // 0x61 PushI
	var_113_int = 15648; // 0x62 PushI
	var_114_int = 15647; // 0x63 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x64 TObjFunc
	var_115_int = 14443; // 0x66 PushI
	var_116_int = 15650; // 0x67 PushI
	var_117_int = 15670; // 0x68 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x69 TObjFunc
	goto Label_125; // 0x6b Jump
	
Label_125:
	var_118_bool = 0; // 0x7d PushV
	func_762(var_118_bool); // 0x7e Call
	if(var_118_bool == 0) goto Label_140; // 0x80 JumpB
	
Label_129:
	lshWaitForAnimEnd(); // 0x81 Func
	var_119_string = var_3_string; // 0x83 PushT
	if(var_119_string == 0) goto Label_134; // 0x84 JumpB
	goto Label_139; // 0x85 Jump
	
Label_139:
	goto Label_154; // 0x8b Jump
	
Label_154:
	return 0; // 0x9a Return
	
Label_134:
	var_120_string = ""; // 0x86 PushV
	var_120_string = var_2_object; // 0x87 MovT
	func_545(var_120_string); // 0x88 Call
	goto Label_129; // 0x8a Jump
	
Label_140:
	var_121_string = "all"; // 0x8c PushS
	var_122_string = "idle"; // 0x8d PushS
	PlayAnimation(var_121_string, var_122_string); // 0x8e Func
	
Label_144:
	WaitForAnimEnd(); // 0x90 Func
	var_123_string = var_3_string; // 0x92 PushT
	if(var_123_string == 0) goto Label_149; // 0x93 JumpB
	goto Label_154; // 0x94 Jump
	
Label_149:
	var_124_string = "all"; // 0x95 PushS
	var_125_string = "idle"; // 0x96 PushS
	PlayAnimation(var_124_string, var_125_string); // 0x97 Func
	goto Label_144; // 0x99 Jump
	
Label_108:
	var_126_string = ""; // 0x6c PushV
	var_126_string = "Neutral"; // 0x6d MovS
	func_155(var_71_object, var_126_string); // 0x6e Call
	var_127_int = 14502; // 0x70 PushI
	SetMessage(var_127_int); // 0x71 TObjFunc
	ClearReplies(); // 0x73 TObjFunc
	var_128_int = 14503; // 0x75 PushI
	var_129_int = -1; // 0x76 PushI
	var_130_int = 15740; // 0x77 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x78 TObjFunc
	goto Label_125; // 0x7a Jump
}


