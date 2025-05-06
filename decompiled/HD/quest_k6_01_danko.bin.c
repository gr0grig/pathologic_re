task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc0 PushI
	if(var_9_int == 0) goto Label_380; // 0xc1 JumpB
	func_1019(); // 0xc3 NEW_2
	var_11_int = 27393; // 0xc5 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc6 Eq
	if(var_12_bool == 0) goto Label_215; // 0xc7 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc8 PushV
	var_13_object = var_1_object; // 0xc9 MovT
	var_14_object = var_0_object; // 0xca MovT
	func_1154(); // 0xcb NEW_2
	var_21_object = Obj(); var_22_object = Obj(); // 0xcd PushV
	var_21_object = var_1_object; // 0xce MovT
	var_22_object = var_0_object; // 0xcf MovT
	func_1161(); // 0xd0 NEW_2
	var_49_object = Obj(); var_50_object = Obj(); // 0xd2 PushV
	var_49_object = var_1_object; // 0xd3 MovT
	var_50_object = var_0_object; // 0xd4 MovT
	func_1171(var_50_object); // 0xd5 NEW_2
	
Label_215:
	var_89_int = 27390; // 0xd7 PushI
	var_90_bool = var_8_bool == var_89_int; // 0xd8 Eq
	if(var_90_bool == 0) goto Label_233; // 0xd9 JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0xda PushV
	var_91_object = var_1_object; // 0xdb MovT
	var_92_object = var_0_object; // 0xdc MovT
	func_1154(); // 0xdd NEW_2
	var_93_object = Obj(); var_94_object = Obj(); // 0xdf PushV
	var_93_object = var_1_object; // 0xe0 MovT
	var_94_object = var_0_object; // 0xe1 MovT
	func_1161(); // 0xe2 NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0xe4 PushV
	var_95_object = var_1_object; // 0xe5 MovT
	var_96_object = var_0_object; // 0xe6 MovT
	func_1171(var_96_object); // 0xe7 NEW_2
	
Label_233:
	var_97_int = 27383; // 0xe9 PushI
	var_98_bool = var_7_cvector == var_97_int; // 0xea Eq
	if(var_98_bool == 0) goto Label_286; // 0xeb JumpB
	var_99_bool = 0; var_100_object = Obj(); // 0xec PushV
	var_100_object = var_1_object; // 0xed MovT
	func_1178(var_100_object); // 0xee NEW_2
	if(var_99_bool == 0) goto Label_266; // 0xf0 JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0xf1 PushV
	var_107_object = var_1_object; // 0xf2 MovT
	var_108_object = var_0_object; // 0xf3 MovT
	func_1148(); // 0xf4 NEW_2
	var_111_string = ""; // 0xf6 PushV
	var_111_string = "Menace"; // 0xf7 MovS
	func_169(var_8_bool, var_111_string); // 0xf8 NEW_2
	var_128_int = 526097; // 0xfa PushI
	SetMessage(var_128_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_129_int = 526098; // 0xff PushI
	var_130_int = 27386; // 0x100 PushI
	var_131_int = 27384; // 0x101 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x102 TObjFunc
	var_132_int = 526099; // 0x104 PushI
	var_133_int = 27386; // 0x105 PushI
	var_134_int = 27385; // 0x106 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_135_string = ""; // 0x10a PushV
	var_135_string = "Menace"; // 0x10b MovS
	func_169(var_8_bool, var_135_string); // 0x10c NEW_2
	var_136_int = 526107; // 0x10e PushI
	SetMessage(var_136_int); // 0x10f TObjFunc
	ClearReplies(); // 0x111 TObjFunc
	var_137_int = 526108; // 0x113 PushI
	var_138_int = -1; // 0x114 PushI
	var_139_int = 27395; // 0x115 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x116 TObjFunc
	var_140_int = 528917; // 0x118 PushI
	var_141_int = -1; // 0x119 PushI
	var_142_int = 30347; // 0x11a PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x11b TObjFunc
	return 0; // 0x11d Return
	
Label_286:
	var_143_int = 27386; // 0x11e PushI
	var_144_bool = var_7_cvector == var_143_int; // 0x11f Eq
	if(var_144_bool == 0) goto Label_309; // 0x120 JumpB
	var_145_string = ""; // 0x121 PushV
	var_145_string = "Smile"; // 0x122 MovS
	func_169(var_8_bool, var_145_string); // 0x123 NEW_2
	var_146_int = 526100; // 0x125 PushI
	SetMessage(var_146_int); // 0x126 TObjFunc
	ClearReplies(); // 0x128 TObjFunc
	var_147_int = 526101; // 0x12a PushI
	var_148_int = 27388; // 0x12b PushI
	var_149_int = 27387; // 0x12c PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x12d TObjFunc
	var_150_int = 541281; // 0x12f PushI
	var_151_int = 43414; // 0x130 PushI
	var_152_int = 43413; // 0x131 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_153_int = 43414; // 0x135 PushI
	var_154_bool = var_7_cvector == var_153_int; // 0x136 Eq
	if(var_154_bool == 0) goto Label_327; // 0x137 JumpB
	var_155_string = ""; // 0x138 PushV
	var_155_string = "Untrust"; // 0x139 MovS
	func_169(var_8_bool, var_155_string); // 0x13a NEW_2
	var_156_int = 541282; // 0x13c PushI
	SetMessage(var_156_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_157_int = 541283; // 0x141 PushI
	var_158_int = 27392; // 0x142 PushI
	var_159_int = 43415; // 0x143 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x144 TObjFunc
	return 0; // 0x146 Return
	
Label_327:
	var_160_int = 27388; // 0x147 PushI
	var_161_bool = var_7_cvector == var_160_int; // 0x148 Eq
	if(var_161_bool == 0) goto Label_350; // 0x149 JumpB
	var_162_string = ""; // 0x14a PushV
	var_162_string = "Sorrow"; // 0x14b MovS
	func_169(var_8_bool, var_162_string); // 0x14c NEW_2
	var_163_int = 526102; // 0x14e PushI
	SetMessage(var_163_int); // 0x14f TObjFunc
	ClearReplies(); // 0x151 TObjFunc
	var_164_int = 526103; // 0x153 PushI
	var_165_int = 27392; // 0x154 PushI
	var_166_int = 27389; // 0x155 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x156 TObjFunc
	var_167_int = 526104; // 0x158 PushI
	var_168_int = -1; // 0x159 PushI
	var_169_int = 27390; // 0x15a PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x15b TObjFunc
	return 0; // 0x15d Return
	
Label_350:
	var_170_int = 27392; // 0x15e PushI
	var_171_bool = var_7_cvector == var_170_int; // 0x15f Eq
	if(var_171_bool == 0) goto Label_368; // 0x160 JumpB
	var_172_string = ""; // 0x161 PushV
	var_172_string = "Smile"; // 0x162 MovS
	func_169(var_8_bool, var_172_string); // 0x163 NEW_2
	var_173_int = 526105; // 0x165 PushI
	SetMessage(var_173_int); // 0x166 TObjFunc
	ClearReplies(); // 0x168 TObjFunc
	var_174_int = 526106; // 0x16a PushI
	var_175_int = -1; // 0x16b PushI
	var_176_int = 27393; // 0x16c PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x16d TObjFunc
	return 0; // 0x16f Return
	
Label_368:
	var_3_string = 1; // 0x170 TMovB
	var_177_bool = 0; // 0x171 PushV
	func_1269(var_177_bool); // 0x172 NEW_2
	if(var_177_bool == 0) goto Label_376; // 0x174 JumpB
	lshStopAnimation(); // 0x175 Func
	goto Label_378; // 0x177 Jump
	
Label_378:
	return 0; // 0x17a Return
	
Label_376:
	StopAnimation(); // 0x178 Func
	
Label_380:
	return 0; // 0x17c Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x189 PushV
	var_10_string = "cleanup"; // 0x18a PushS
	var_11_bool = var_7_string == var_10_string; // 0x18b Eq
	if(var_11_bool == 0) goto Label_408; // 0x18c JumpB
	var_1_object = 1; // 0x18d TMovB
	IsLoaded(var_9_bool); // 0x18e Func
	var_12_bool = var_9_bool == 0; // 0x190 Not
	if(var_12_bool == 0) goto Label_407; // 0x191 JumpB
	var_13_object = Obj(); // 0x192 PushV
	func_1026(var_13_object); // 0x193 NEW_2
	RemoveActor(var_13_object); // 0x195 Func
	
Label_407:
	goto Label_412; // 0x197 Jump
	
Label_412:
	return 2; // 0x19c Return
	
Label_408:
	var_16_string = "restore"; // 0x198 PushS
	var_17_bool = var_7_string == var_16_string; // 0x199 Eq
	if(var_17_bool == 0) goto Label_412; // 0x19a JumpB
	var_1_object = 0; // 0x19b TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x19d PushT
	if(var_7_object == 0) goto Label_422; // 0x19e JumpB
	var_8_object = Obj(); // 0x19f PushV
	func_1026(var_8_object); // 0x1a0 NEW_2
	RemoveActor(var_8_object); // 0x1a2 Func
	Hold(); // 0x1a4 Func
	
Label_422:
	func_537(); // 0x1a7 NEW_2
	return 0; // 0x1a9 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_552(); // 0x1ab NEW_2
	return 0; // 0x1ad Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x1f4 PushI
	var_9_bool = var_7_int == var_8_int; // 0x1f5 Eq
	if(var_9_bool == 0) goto Label_536; // 0x1f6 JumpB
	func_495(); // 0x1f8 NEW_2
	var_11_bool = 0; // 0x1fa PushV
	var_11_bool = 0; // 0x1fb MovB
	var_12_bool = 0; // 0x1fc PushV
	func_743(var_12_bool); // 0x1fd NEW_2
	if(var_12_bool == 0) goto Label_517; // 0x1ff JumpB
	var_15_bool = 0; // 0x200 PushV
	func_464(var_15_bool); // 0x201 NEW_2
	if(var_15_bool == 0) goto Label_517; // 0x203 JumpB
	var_11_bool = 1; // 0x204 MovB
	
Label_517:
	if(var_11_bool == 0) goto Label_530; // 0x205 JumpB
	var_32_bool = 0; // 0x206 PushV
	func_444(var_32_bool); // 0x207 NEW_2
	if(var_32_bool == 0) goto Label_529; // 0x209 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x20a PushV
	var_53_object = Obj(); // 0x20b PushV
	func_1026(var_53_object); // 0x20c NEW_2
	var_52_object = var_53_object; // 0x20d Mov
	func_893(var_52_object); // 0x20f NEW_2
	
Label_529:
	goto Label_536; // 0x211 Jump
	
Label_536:
	return 0; // 0x218 Return
	
Label_530:
	func_459(var_7_int); // 0x213 NEW_2
	func_486(); // 0x216 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x236 Push
	if(var_8_bool == 0) goto Label_572; // 0x237 JumpB
	func_486(); // 0x239 NEW_2
	goto Label_576; // 0x23b Jump
	
Label_576:
	return 0; // 0x240 Return
	
Label_572:
	var_14_string = ""; // 0x23c PushV
	var_14_string = "Neutral"; // 0x23d MovS
	func_973(var_14_string); // 0x23e NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x241 PushV
	IsOverrideActive(var_9_bool); // 0x242 Func
	var_10_bool = var_9_bool == 0; // 0x244 Not
	if(var_10_bool == 0) goto Label_605; // 0x245 JumpB
	EventDisable(0); // 0x246 EventDisable
	func_677(); // 0x248 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x24a PushV
	var_12_object = var_7_object; // 0x24b Mov
	func_734(var_12_object); // 0x24c NEW_2
	EventEnable(0); // 0x24e EventEnable
	var_25_object = Obj(); // 0x24f PushV
	var_25_object = var_7_object; // 0x250 Mov
	func_381(var_25_object); // 0x251 NEW_2
	var_271_string = ""; // 0x253 PushV
	var_271_string = "Neutral"; // 0x254 MovS
	func_973(var_271_string); // 0x255 NEW_2
	func_495(); // 0x258 NEW_2
	func_486(); // 0x25b NEW_2
	
Label_605:
	return 2; // 0x25d Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_430(var_6_bool); // 0x186 NEW_2
	return 0; // 0x188 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_748(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1263(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1261(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1265(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1267(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1244(var_89_int); // 0x22 NEW_2
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
	func_1026(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_835(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_262_bool = var_36_bool == 0; // 0x3f Not
	if(var_262_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_263_object = Obj(); // 0x46 PushV
	var_263_object = var_27_object; // 0x47 Mov
	func_817(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1026(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x402 PushV
	self(var_102_object); // 0x403 Func
	var_100_object = var_102_object; // 0x405 Mov
	return 2; // 0x406 Return
}


func_1154()
{
	var_15_bool = 0; var_16_string = ""; var_17_string = ""; // 0x483 PushV
	var_16_string = "quest_k6_01"; // 0x484 MovS
	var_17_string = "teleport"; // 0x485 MovS
	func_1103(var_15_bool, var_16_string, var_17_string); // 0x486 NEW_2
	return 0; // 0x488 Return
}


func_1032(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x408 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x409 Or
	var_68_float = sqrt(var_69_int); // 0x40a Sqrt2
	var_70_float = 0.0; // 0x40b PushF
	var_71_bool = var_68_float < var_70_float; // 0x40c LT
	if(var_71_bool == 0) goto Label_1040; // 0x40d JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x40e MovV
	return 2; // 0x40f Return
	
Label_1040:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x410 Div2
	return 2; // 0x411 Return
}


func_1161()
{
	func_1190(); // 0x48b NEW_2
	var_46_bool = 0; var_47_string = ""; var_48_string = ""; // 0x48d PushV
	var_47_string = "quest_k6_01"; // 0x48e MovS
	var_48_string = "completed"; // 0x48f MovS
	func_1103(var_46_bool, var_47_string, var_48_string); // 0x490 NEW_2
	return 0; // 0x492 Return
}


func_893(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x37d PushV
	var_116_string = "c"; // 0x37e MovS
	var_117_int = 0; // 0x37f MovI
	
Label_896:
	var_121_int = 1; // 0x380 PushI
	if(var_121_int == 0) goto Label_909; // 0x381 JumpB
	var_122_int = 1; // 0x382 PushI
	var_123_int = var_117_int + var_122_int; // 0x383 Add
	var_124_int = var_116_string + var_123_int; // 0x384 Add
	HasProperty(var_124_int, var_118_bool); // 0x385 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x387 Not
	if(var_125_bool == 0) goto Label_906; // 0x388 JumpB
	goto Label_909; // 0x389 Jump
	
Label_909:
	var_126_bool = var_117_int == 0; // 0x38d Not
	if(var_126_bool == 0) goto Label_913; // 0x38e JumpB
	var_109_bool = 0; // 0x38f MovB
	return 10; // 0x390 Return
	
Label_913:
	var_119_int = 0; // 0x391 MovI
	var_127_int = 1; // 0x392 PushI
	var_128_bool = var_117_int > var_127_int; // 0x393 GT
	if(var_128_bool == 0) goto Label_919; // 0x394 JumpB
	irand(var_119_int, var_117_int); // 0x395 Func
	
Label_919:
	var_129_int = 1; // 0x397 PushI
	var_130_int = var_119_int + var_129_int; // 0x398 Add
	var_131_int = var_116_string + var_130_int; // 0x399 Add
	GetProperty(var_131_int, var_120_string); // 0x39a ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x39c PushV
	var_133_string = var_120_string; // 0x39d Mov
	func_1004(var_132_bool, var_133_string); // 0x39e NEW_2
	var_109_bool = var_132_bool; // 0x39f Mov
	return 10; // 0x3a1 Return
	
Label_906:
	var_138_int = 1; // 0x38a PushI
	var_117_int = var_117_int + var_138_int; // 0x38b Add2
	goto Label_896; // 0x38c Jump
}


func_1042(var_80_float, var_81_float, var_82_float, var_83_float)
{
	var_84_bool = var_81_float < var_82_float; // 0x413 LT
	if(var_84_bool == 0) goto Label_1047; // 0x414 JumpB
	var_80_float = var_82_float; // 0x415 Mov
	return 0; // 0x416 Return
	
Label_1047:
	var_85_bool = var_81_float > var_83_float; // 0x417 GT
	if(var_85_bool == 0) goto Label_1051; // 0x418 JumpB
	var_80_float = var_83_float; // 0x419 Mov
	return 0; // 0x41a Return
	
Label_1051:
	var_80_float = var_81_float; // 0x41b Mov
	return 0; // 0x41c Return
}


func_1171(var_49_object)
{
	var_51_bool = 0; var_52_object = Obj(); var_53_float = 0; // 0x494 PushV
	var_52_object = var_49_object; // 0x495 Mov
	var_53_float = 0.3; // 0x496 MovF
	func_1058(var_51_bool, var_52_object, var_53_float); // 0x497 NEW_2
	return 0; // 0x499 Return
}


func_537()
{
	func_677(); // 0x21a NEW_2
	func_495(); // 0x21d NEW_2
	lshStopSpeech(); // 0x21f Func
	lshStopAnimation(); // 0x221 Func
	StopAsync(); // 0x223 Func
	Hold(); // 0x225 Func
	return 0; // 0x227 Return
}


func_1178(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x49b PushV
	var_203_string = "ook6Danko1"; // 0x49c MovS
	func_1053(var_202_int, var_203_string); // 0x49d NEW_2
	var_206_int = 0; // 0x49f PushI
	var_207_bool = var_202_int == var_206_int; // 0x4a0 Eq
	if(var_207_bool == 0) goto Label_1188; // 0x4a1 JumpB
	var_200_bool = 1; // 0x4a2 MovB
	return 0; // 0x4a3 Return
	
Label_1188:
	var_200_bool = 0; // 0x4a4 MovB
	return 0; // 0x4a5 Return
}


func_1053(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x41d PushV
	GetVariable(var_203_string, var_205_int); // 0x41e Func
	var_202_int = var_205_int; // 0x420 Mov
	return 2; // 0x421 Return
}


func_930(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x3a2 PushV
	var_152_string = "d"; // 0x3a3 PushS
	var_153_int = 0; // 0x3a4 PushV
	func_1115(var_153_int); // 0x3a5 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x3a7 Add
	var_160_string = "m"; // 0x3a8 PushS
	var_147_string = var_159_int + var_160_string; // 0x3a9 Add2
	var_148_int = 0; // 0x3aa MovI
	
Label_939:
	var_161_int = 1; // 0x3ab PushI
	if(var_161_int == 0) goto Label_952; // 0x3ac JumpB
	var_162_int = 1; // 0x3ad PushI
	var_163_int = var_148_int + var_162_int; // 0x3ae Add
	var_164_int = var_147_string + var_163_int; // 0x3af Add
	HasProperty(var_164_int, var_149_bool); // 0x3b0 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x3b2 Not
	if(var_165_bool == 0) goto Label_949; // 0x3b3 JumpB
	goto Label_952; // 0x3b4 Jump
	
Label_952:
	var_166_bool = var_148_int == 0; // 0x3b8 Not
	if(var_166_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_140_bool = 0; // 0x3ba MovB
	return 10; // 0x3bb Return
	
Label_956:
	var_150_int = 0; // 0x3bc MovI
	var_167_int = 1; // 0x3bd PushI
	var_168_bool = var_148_int > var_167_int; // 0x3be GT
	if(var_168_bool == 0) goto Label_962; // 0x3bf JumpB
	irand(var_150_int, var_148_int); // 0x3c0 Func
	
Label_962:
	var_169_int = 1; // 0x3c2 PushI
	var_170_int = var_150_int + var_169_int; // 0x3c3 Add
	var_171_int = var_147_string + var_170_int; // 0x3c4 Add
	GetProperty(var_171_int, var_151_string); // 0x3c5 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x3c7 PushV
	var_173_string = var_151_string; // 0x3c8 Mov
	func_1004(var_172_bool, var_173_string); // 0x3c9 NEW_2
	var_140_bool = var_172_bool; // 0x3ca Mov
	return 10; // 0x3cc Return
	
Label_949:
	var_174_int = 1; // 0x3b5 PushI
	var_148_int = var_148_int + var_174_int; // 0x3b6 Add2
	goto Label_939; // 0x3b7 Jump
}


func_675(var_45_bool)
{
	var_45_bool = 1; // 0x2a3 MovB
	return 0; // 0x2a4 Return
}


func_1058(var_51_bool, var_52_object, var_53_float)
{
	var_54_bool = var_52_object == 0; // 0x423 Not
	if(var_54_bool == 0) goto Label_1063; // 0x424 JumpB
	var_51_bool = 0; // 0x425 MovB
	return 0; // 0x426 Return
	
Label_1063:
	var_55_int = 0; // 0x427 PushI
	var_56_bool = var_53_float > var_55_int; // 0x428 GT
	if(var_56_bool == 0) goto Label_1070; // 0x429 JumpB
	var_57_int = 8; // 0x42a PushI
	SendWorldWndMessage(var_57_int); // 0x42b Func
	goto Label_1079; // 0x42d Jump
	
Label_1079:
	var_58_float = 0; // 0x437 PushV
	var_58_float = var_53_float; // 0x438 Mov
	func_1093(var_58_float); // 0x439 NEW_2
	var_62_bool = 0; var_63_object = Obj(); var_64_string = ""; var_65_float = 0; var_66_float = 0; var_67_float = 0; // 0x43b PushV
	var_63_object = var_52_object; // 0x43c Mov
	var_64_string = "reputation"; // 0x43d MovS
	var_65_float = var_53_float; // 0x43e Mov
	var_66_float = 0; // 0x43f MovI
	var_67_float = 1; // 0x440 MovI
	func_702(var_62_bool, var_63_object, var_64_string, var_65_float, var_66_float, var_67_float); // 0x441 NEW_2
	var_51_bool = 1; // 0x443 MovB
	return 0; // 0x444 Return
	
Label_1070:
	var_86_int = 0; // 0x42e PushI
	var_87_bool = var_53_float < var_86_int; // 0x42f LT
	if(var_87_bool == 0) goto Label_1077; // 0x430 JumpB
	var_88_int = 9; // 0x431 PushI
	SendWorldWndMessage(var_88_int); // 0x432 Func
	goto Label_1079; // 0x434 Jump
	
Label_1077:
	var_51_bool = 0; // 0x435 MovB
	return 0; // 0x436 Return
}


func_677()
{
	StopAnimation(); // 0x2a5 Func
	StopGroup0(); // 0x2a7 Func
	return 0; // 0x2a9 Return
}


func_1190()
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x4a6 PushV
	var_25_int = 415; // 0x4a7 PushI
	var_26_int = 1; // 0x4a8 PushI
	var_27_int = 526116; // 0x4a9 PushI
	CreateDiaryEntry(var_24_object, var_25_int, var_26_int, var_27_int); // 0x4aa Func
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; // 0x4ac PushV
	var_29_object = var_24_object; // 0x4ad Mov
	var_30_int = 408; // 0x4ae MovI
	func_1216(var_28_bool, var_29_object, var_30_int); // 0x4af NEW_2
	return 2; // 0x4b1 Return
}


func_552()
{
	StopGroup0(); // 0x228 Func
	func_495(); // 0x22b NEW_2
	var_8_string = ""; // 0x22d PushV
	var_8_string = "Neutral"; // 0x22e MovS
	func_973(var_8_string); // 0x22f NEW_2
	func_486(); // 0x232 NEW_2
	return 0; // 0x234 Return
}


func_169(var_2_object, var_212_string)
{
	var_213_bool = 0; // 0xaa PushV
	func_1269(var_213_bool); // 0xab NEW_2
	var_214_bool = var_213_bool == 0; // 0xad Not
	if(var_214_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_215_bool = var_212_string == var_2_object; // 0xb0 Eq
	if(var_215_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_216_string = ""; var_217_bool = 0; // 0xb3 PushV
	var_216_string = var_212_string; // 0xb4 Mov
	var_218_string = ""; // 0xb5 PushS
	var_219_bool = var_212_string == var_218_string; // 0xb6 Eq
	if(var_219_bool == 0) goto Label_186; // 0xb7 JumpB
	var_217_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_989(var_216_string, var_217_bool); // 0xbb NEW_2
	var_2_object = var_212_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_217_bool = 1; // 0xba MovB
}


func_682(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x2aa PushV
	GetPosition(var_27_cvector); // 0x2ab Func
	GetPosition(var_28_cvector); // 0x2ad ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2af Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2b0 Or2
	return 6; // 0x2b1 Return
}


func_430(var_0_object)
{
	var_7_bool = 0; // 0x1ae PushV
	func_743(var_7_bool); // 0x1af NEW_2
	var_10_bool = var_7_bool == 0; // 0x1b1 Not
	if(var_10_bool == 0) goto Label_437; // 0x1b2 JumpB
	Hold(); // 0x1b3 Func
	
Label_437:
	GetDirection(var_0_object); // 0x1b5 Func
	
Label_439:
	func_606(); // 0x1b8 NEW_2
	goto Label_439; // 0x1ba Jump
}


func_817()
{
	var_264_bool = 0; var_265_bool = 0; // 0x331 PushV
	var_266_bool = 1; // 0x332 PushB
	CameraSwitchToNormal(var_266_bool); // 0x333 Func
	var_267_bool = 0; // 0x335 PushV
	func_1269(var_267_bool); // 0x336 NEW_2
	if(var_267_bool == 0) goto Label_826; // 0x338 JumpB
	goto Label_834; // 0x339 Jump
	
Label_834:
	return 2; // 0x342 Return
	
Label_826:
	var_268_string = "head"; // 0x33a PushS
	HasAnimationTrack(var_265_bool, var_268_string); // 0x33b Func
	var_269_bool = var_265_bool; // 0x33d Push
	if(var_269_bool == 0) goto Label_834; // 0x33e JumpB
	var_270_string = "head"; // 0x33f PushS
	UnlookAsync(var_270_string); // 0x340 Func
}


func_690(var_70_bool, var_71_object, var_72_string)
{
	var_73_bool = 0; var_74_bool = 0; // 0x2b2 PushV
	var_75_string = "HasProperty"; // 0x2b3 PushS
	var_76_int = 2; // 0x2b4 PushI
	var_77_bool = IsFuncExist(var_71_object, var_75_string, var_76_int); // 0x2b5 FuncExist
	var_78_bool = var_77_bool == 0; // 0x2b6 Not
	if(var_78_bool == 0) goto Label_698; // 0x2b7 JumpB
	var_70_bool = 0; // 0x2b8 MovB
	return 2; // 0x2b9 Return
	
Label_698:
	HasProperty(var_72_string, var_74_bool); // 0x2ba ObjFunc
	var_70_bool = var_74_bool; // 0x2bc Mov
	return 2; // 0x2bd Return
}


func_1203(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x4b3 PushV
	GetDiaryRoot(var_39_object); // 0x4b4 Func
	var_40_bool = var_39_object == 0; // 0x4b6 Not
	if(var_40_bool == 0) goto Label_1213; // 0x4b7 JumpB
	var_41_string = "Can't retrieve diary root"; // 0x4b8 PushS
	Trace(var_41_string); // 0x4b9 Func
	var_37_object = 0; // 0x4bb MovB
	return 2; // 0x4bc Return
	
Label_1213:
	var_37_object = var_39_object; // 0x4bd Mov
	return 2; // 0x4be Return
}


func_444(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x1bc PushV
	var_35_string = "player"; // 0x1bd PushS
	FindActor(var_34_object, var_35_string); // 0x1be Func
	var_36_bool = var_34_object == 0; // 0x1c0 Not
	if(var_36_bool == 0) goto Label_452; // 0x1c1 JumpB
	var_32_bool = 0; // 0x1c2 MovB
	return 2; // 0x1c3 Return
	
Label_452:
	var_37_bool = 0; var_38_object = Obj(); // 0x1c4 PushV
	var_38_object = var_34_object; // 0x1c5 Mov
	func_734(var_38_object); // 0x1c6 NEW_2
	var_32_bool = var_37_bool; // 0x1c7 Mov
	return 2; // 0x1c9 Return
}


func_702(var_62_bool, var_63_object, var_64_string, var_65_float, var_66_float, var_67_float)
{
	var_68_float = 0; var_69_float = 0; // 0x2be PushV
	var_70_bool = 0; var_71_object = Obj(); var_72_string = ""; // 0x2bf PushV
	var_71_object = var_63_object; // 0x2c0 Mov
	var_72_string = var_64_string; // 0x2c1 Mov
	func_690(var_70_bool, var_71_object, var_72_string); // 0x2c2 NEW_2
	var_79_bool = var_70_bool == 0; // 0x2c4 Not
	if(var_79_bool == 0) goto Label_712; // 0x2c5 JumpB
	var_62_bool = 0; // 0x2c6 MovB
	return 2; // 0x2c7 Return
	
Label_712:
	GetProperty(var_64_string, var_69_float); // 0x2c8 ObjFunc
	var_80_float = 0; var_81_float = 0; var_82_float = 0; var_83_float = 0; // 0x2ca PushV
	var_81_float = var_69_float + var_65_float; // 0x2cb Add2
	var_82_float = var_66_float; // 0x2cc Mov
	var_83_float = var_67_float; // 0x2cd Mov
	func_1042(var_80_float, var_81_float, var_82_float, var_83_float); // 0x2ce NEW_2
	SetProperty(var_64_string, var_80_float); // 0x2d0 ObjFunc
	var_62_bool = 1; // 0x2d2 MovB
	return 2; // 0x2d3 Return
}


func_1216(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; // 0x4c0 PushV
	var_37_object = Obj(); // 0x4c1 PushV
	func_1203(var_37_object); // 0x4c2 NEW_2
	var_34_object = var_37_object; // 0x4c3 Mov
	Find(var_30_int, var_35_object); // 0x4c5 ObjFunc
	var_42_bool = var_35_object == 0; // 0x4c7 Not
	if(var_42_bool == 0) goto Label_1231; // 0x4c8 JumpB
	var_43_string = "Can't find diary parent with id: "; // 0x4c9 PushS
	var_44_int = var_43_string + var_30_int; // 0x4ca Add
	Trace(var_44_int); // 0x4cb Func
	var_28_bool = 0; // 0x4cd MovB
	return 6; // 0x4ce Return
	
Label_1231:
	AddChild(var_29_object); // 0x4cf ObjFunc
	var_45_int = 7; // 0x4d1 PushI
	SendWorldWndMessage(var_45_int); // 0x4d2 Func
	GetCategory(var_36_int); // 0x4d4 ObjFunc
	SetDiarySection(var_36_int); // 0x4d6 Func
	var_28_bool = 0; // 0x4d8 MovB
	return 6; // 0x4d9 Return
}


func_835(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x343 PushV
	var_107_string = "voice_common"; // 0x344 PushS
	GetVariable(var_107_string, var_105_int); // 0x345 Func
	var_108_int = var_105_int; // 0x347 Push
	if(var_108_int == 0) goto Label_873; // 0x348 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x349 PushV
	var_110_object = var_99_object; // 0x34a Mov
	func_893(var_110_object); // 0x34b NEW_2
	var_139_bool = var_109_bool == 0; // 0x34d Not
	if(var_139_bool == 0) goto Label_855; // 0x34e JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x34f PushV
	var_141_object = var_99_object; // 0x350 Mov
	func_930(var_141_object); // 0x351 NEW_2
	var_175_bool = var_140_bool == 0; // 0x353 Not
	if(var_175_bool == 0) goto Label_855; // 0x354 JumpB
	var_98_bool = 0; // 0x355 MovB
	return 4; // 0x356 Return
	
Label_855:
	var_176_int = 2; // 0x357 PushI
	irand(var_106_int, var_176_int); // 0x358 Func
	var_177_int = var_106_int; // 0x35a Push
	if(var_177_int == 0) goto Label_868; // 0x35b JumpB
	var_178_string = "voice_common"; // 0x35c PushS
	var_179_int = 1; // 0x35d PushI
	var_180_int = var_105_int + var_179_int; // 0x35e Add
	var_181_int = 3; // 0x35f PushI
	var_182_int = var_180_int / var_181_int; // 0x360 Mod
	SetVariable(var_178_string, var_182_int); // 0x361 Func
	goto Label_872; // 0x363 Jump
	
Label_872:
	goto Label_891; // 0x368 Jump
	
Label_891:
	var_98_bool = 1; // 0x37b MovB
	return 4; // 0x37c Return
	
Label_868:
	var_183_string = "voice_common"; // 0x364 PushS
	var_184_int = 0; // 0x365 PushI
	SetVariable(var_183_string, var_184_int); // 0x366 Func
	
Label_873:
	var_185_bool = 0; var_186_object = Obj(); // 0x369 PushV
	var_186_object = var_99_object; // 0x36a Mov
	func_930(var_186_object); // 0x36b NEW_2
	var_187_bool = var_185_bool == 0; // 0x36d Not
	if(var_187_bool == 0) goto Label_887; // 0x36e JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x36f PushV
	var_189_object = var_99_object; // 0x370 Mov
	func_893(var_189_object); // 0x371 NEW_2
	var_190_bool = var_188_bool == 0; // 0x373 Not
	if(var_190_bool == 0) goto Label_887; // 0x374 JumpB
	var_98_bool = 0; // 0x375 MovB
	return 4; // 0x376 Return
	
Label_887:
	var_191_string = "voice_common"; // 0x377 PushS
	var_192_int = 1; // 0x378 PushI
	SetVariable(var_191_string, var_192_int); // 0x379 Func
}


func_1093(var_58_float)
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x445 PushV
	CreateFloatVector(var_60_object); // 0x446 Func
	add(var_58_float); // 0x448 ObjFunc
	var_61_int = 16; // 0x44a PushI
	SendWorldWndMessage(var_61_int, var_60_object); // 0x44b Func
	return 2; // 0x44d Return
}


func_459(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1cb PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1cc PushE
	RotateAsync(var_84_float, var_85_float); // 0x1cd Func
	return 0; // 0x1cf Return
}


func_973(var_238_string)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0; // 0x3cd PushV
	lshHasAnimation(var_242_bool, var_238_string); // 0x3ce Func
	var_245_bool = var_242_bool; // 0x3d0 Push
	if(var_245_bool == 0) goto Label_984; // 0x3d1 JumpB
	lshGetAnimTimes(var_238_string, var_243_float, var_244_float); // 0x3d2 Func
	var_246_bool = 0; // 0x3d4 PushB
	lshPlayAnimation(var_243_float, var_244_float, var_246_bool); // 0x3d5 Func
	goto Label_988; // 0x3d7 Jump
	
Label_988:
	return 6; // 0x3dc Return
	
Label_984:
	var_247_string = "Can't find lsh animation : "; // 0x3d8 PushS
	var_248_int = var_247_string + var_238_string; // 0x3d9 Add
	Trace(var_248_int); // 0x3da Func
}


func_1103(var_15_bool, var_16_string, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x44f PushV
	FindActor(var_19_object, var_16_string); // 0x450 Func
	var_20_bool = var_19_object == 0; // 0x452 NullEq
	if(var_20_bool == 0) goto Label_1110; // 0x453 JumpB
	var_15_bool = 0; // 0x454 MovB
	return 2; // 0x455 Return
	
Label_1110:
	Trigger(var_19_object, var_17_string); // 0x456 Func
	var_15_bool = 1; // 0x458 MovB
	return 2; // 0x459 Return
}


func_464(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x1d0 PushV
	var_20_string = "player"; // 0x1d1 PushS
	FindActor(var_18_object, var_20_string); // 0x1d2 Func
	var_21_bool = var_18_object == 0; // 0x1d4 Not
	if(var_21_bool == 0) goto Label_472; // 0x1d5 JumpB
	var_15_bool = 0; // 0x1d6 MovB
	return 4; // 0x1d7 Return
	
Label_472:
	var_22_float = 0; var_23_object = Obj(); // 0x1d8 PushV
	var_23_object = var_18_object; // 0x1d9 Mov
	func_682(var_23_object); // 0x1da NEW_2
	var_30_float = 90000.0; // 0x1dc PushF
	var_31_bool = var_22_float > var_30_float; // 0x1dd GT
	if(var_31_bool == 0) goto Label_481; // 0x1de JumpB
	var_15_bool = 0; // 0x1df MovB
	return 4; // 0x1e0 Return
	
Label_481:
	CanSee(var_19_bool, var_18_object); // 0x1e1 Func
	var_15_bool = var_19_bool; // 0x1e3 Mov
	return 4; // 0x1e4 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_139; // 0x56 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x57 PushV
	var_201_object = var_1_object; // 0x58 MovT
	func_1178(var_201_object); // 0x59 NEW_2
	if(var_200_bool == 0) goto Label_117; // 0x5b JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0x5c PushV
	var_208_object = var_1_object; // 0x5d MovT
	var_209_object = var_0_object; // 0x5e MovT
	func_1148(); // 0x5f NEW_2
	var_212_string = ""; // 0x61 PushV
	var_212_string = "Menace"; // 0x62 MovS
	func_169(var_194_object, var_212_string); // 0x63 NEW_2
	var_229_int = 526097; // 0x65 PushI
	SetMessage(var_229_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_230_int = 526098; // 0x6a PushI
	var_231_int = 27386; // 0x6b PushI
	var_232_int = 27384; // 0x6c PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x6d TObjFunc
	var_233_int = 526099; // 0x6f PushI
	var_234_int = 27386; // 0x70 PushI
	var_235_int = 27385; // 0x71 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x72 TObjFunc
	goto Label_139; // 0x74 Jump
	
Label_139:
	var_236_bool = 0; // 0x8b PushV
	func_1269(var_236_bool); // 0x8c NEW_2
	if(var_236_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_237_string = var_3_string; // 0x91 PushT
	if(var_237_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_238_string = ""; // 0x94 PushV
	var_238_string = var_2_object; // 0x95 MovT
	func_973(var_238_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_249_string = "all"; // 0x9a PushS
	var_250_string = "idle"; // 0x9b PushS
	PlayAnimation(var_249_string, var_250_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_251_string = var_3_string; // 0xa0 PushT
	if(var_251_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_252_string = "all"; // 0xa3 PushS
	var_253_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_252_string, var_253_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_117:
	var_254_string = ""; // 0x75 PushV
	var_254_string = "Menace"; // 0x76 MovS
	func_169(var_194_object, var_254_string); // 0x77 NEW_2
	var_255_int = 526107; // 0x79 PushI
	SetMessage(var_255_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_256_int = 526108; // 0x7e PushI
	var_257_int = -1; // 0x7f PushI
	var_258_int = 27395; // 0x80 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x81 TObjFunc
	var_259_int = 528917; // 0x83 PushI
	var_260_int = -1; // 0x84 PushI
	var_261_int = 30347; // 0x85 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_724(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x2d4 PushV
	GetPosition(var_20_cvector); // 0x2d5 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x2d7 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x2d8 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x2d9 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x2da Func
	var_15_bool = var_22_bool; // 0x2dc Mov
	return 6; // 0x2dd Return
}


func_1115(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x45b PushV
	GetGameTime(var_155_float); // 0x45c Func
	var_156_int = 1; // 0x45e PushI
	var_157_int = 0; // 0x45f PushV
	var_158_int = 24; // 0x460 PushI
	var_157_int = var_155_float / var_155_float; // 0x461 Div2
	var_153_int = var_156_int + var_157_int; // 0x462 Add2
	return 2; // 0x463 Return
}


func_1244(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x4dc PushV
	var_92_string = "branch"; // 0x4dd PushS
	GetVariable(var_92_string, var_91_int); // 0x4de Func
	var_93_int = 0; // 0x4e0 PushI
	var_94_bool = var_91_int == var_93_int; // 0x4e1 Eq
	if(var_94_bool == 0) goto Label_1254; // 0x4e2 JumpB
	var_89_int = 1; // 0x4e3 MovI
	return 2; // 0x4e4 Return
	
Label_1254:
	var_95_int = 1; // 0x4e6 PushI
	var_96_bool = var_91_int == var_95_int; // 0x4e7 Eq
	if(var_96_bool == 0) goto Label_1259; // 0x4e8 JumpB
	var_89_int = 2; // 0x4e9 MovI
	return 2; // 0x4ea Return
	
Label_1259:
	var_89_int = 3; // 0x4eb MovI
	return 2; // 0x4ec Return
}


func_989(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; // 0x3dd PushV
	lshHasAnimation(var_223_bool, var_216_string); // 0x3de Func
	var_226_bool = var_223_bool; // 0x3e0 Push
	if(var_226_bool == 0) goto Label_999; // 0x3e1 JumpB
	lshGetAnimTimes(var_216_string, var_224_float, var_225_float); // 0x3e2 Func
	lshPlayAnimation(var_224_float, var_225_float, var_217_bool); // 0x3e4 Func
	goto Label_1003; // 0x3e6 Jump
	
Label_1003:
	return 6; // 0x3eb Return
	
Label_999:
	var_227_string = "Can't find lsh animation : "; // 0x3e7 PushS
	var_228_int = var_227_string + var_216_string; // 0x3e8 Add
	Trace(var_228_int); // 0x3e9 Func
}


func_606()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x25e PushV
	WaitForAnimEnd(); // 0x25f Func
	var_23_bool = 0; // 0x261 PushV
	func_743(var_23_bool); // 0x262 NEW_2
	var_24_bool = var_23_bool == 0; // 0x264 Not
	if(var_24_bool == 0) goto Label_615; // 0x265 JumpB
	return 12; // 0x266 Return
	
Label_615:
	var_25_int = 0; // 0x267 PushV
	func_1131(var_25_int); // 0x268 NEW_2
	var_17_int = var_25_int; // 0x269 Mov
	var_18_int = 0; // 0x26b MovI
	
Label_620:
	var_38_bool = 0; // 0x26c PushV
	var_38_bool = 0; // 0x26d MovB
	var_39_int = 5; // 0x26e PushI
	var_40_bool = var_18_int < var_39_int; // 0x26f LT
	if(var_40_bool == 0) goto Label_630; // 0x270 JumpB
	var_41_bool = 0; // 0x271 PushV
	func_743(var_41_bool); // 0x272 NEW_2
	if(var_41_bool == 0) goto Label_630; // 0x274 JumpB
	var_38_bool = 1; // 0x275 MovB
	
Label_630:
	if(var_38_bool == 0) goto Label_672; // 0x276 JumpB
	var_42_bool = var_17_int == 0; // 0x277 Not
	if(var_42_bool == 0) goto Label_640; // 0x278 JumpB
	var_43_int = 3; // 0x279 PushI
	Sleep(var_43_int, var_19_bool); // 0x27a Func
	var_44_bool = var_19_bool == 0; // 0x27c Not
	if(var_44_bool == 0) goto Label_639; // 0x27d JumpB
	goto Label_672; // 0x27e Jump
	
Label_672:
	ResetAAS(); // 0x2a0 Func
	return 12; // 0x2a2 Return
	
Label_639:
	goto Label_661; // 0x27f Jump
	
Label_661:
	var_45_bool = 0; // 0x295 PushV
	func_675(var_45_bool); // 0x296 NEW_2
	var_46_bool = var_45_bool == 0; // 0x298 Not
	if(var_46_bool == 0) goto Label_667; // 0x299 JumpB
	goto Label_672; // 0x29a Jump
	
Label_667:
	ResetAAS(); // 0x29b Func
	var_47_int = 1; // 0x29d PushI
	var_18_int = var_18_int + var_47_int; // 0x29e Add2
	goto Label_620; // 0x29f Jump
	
Label_640:
	irand(var_20_int, var_17_int); // 0x280 Func
	var_48_int = 5; // 0x282 PushI
	irand(var_21_int, var_48_int); // 0x283 Func
	var_49_int = 0; // 0x285 PushI
	var_50_bool = var_21_int != var_49_int; // 0x286 Neq
	if(var_50_bool == 0) goto Label_649; // 0x287 JumpB
	var_20_int = 0; // 0x288 MovI
	
Label_649:
	var_51_string = "all"; // 0x289 PushS
	var_52_string = ""; var_53_int = 0; // 0x28a PushV
	var_53_int = var_20_int; // 0x28b Mov
	func_1124(var_52_string, var_53_int); // 0x28c NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x28e Func
	WaitForAnimEnd(var_22_bool); // 0x290 Func
	var_54_bool = var_22_bool == 0; // 0x292 Not
	if(var_54_bool == 0) goto Label_661; // 0x293 JumpB
	goto Label_672; // 0x294 Jump
}


func_734(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x2de PushV
	GetPosition(var_14_cvector); // 0x2df ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x2e1 PushV
	var_16_cvector = var_14_cvector; // 0x2e2 Mov
	func_724(var_15_bool, var_16_cvector); // 0x2e3 NEW_2
	var_11_bool = var_15_bool; // 0x2e4 Mov
	return 2; // 0x2e6 Return
}


func_1124(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x464 PushV
	var_34_string = "idle"; // 0x465 MovS
	var_35_int = var_32_int; // 0x466 Push
	if(var_35_int == 0) goto Label_1129; // 0x467 JumpB
	var_34_string = var_34_string + var_32_int; // 0x468 Add2
	
Label_1129:
	var_31_string = var_34_string; // 0x469 Mov
	return 2; // 0x46a Return
}


func_486()
{
	var_273_float = 0; var_274_float = 0; // 0x1e6 PushV
	var_275_int = 8; // 0x1e7 PushI
	var_276_int = 16; // 0x1e8 PushI
	rand(var_274_float, var_275_int, var_276_int); // 0x1e9 Func
	var_277_int = 10; // 0x1eb PushI
	SetTimer(var_277_int, var_274_float); // 0x1ec Func
	return 2; // 0x1ee Return
}


func_743(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2e7 PushV
	IsLoaded(var_9_bool); // 0x2e8 Func
	var_7_bool = var_9_bool; // 0x2ea Mov
	return 2; // 0x2eb Return
}


func_1131(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x46b PushV
	var_28_int = 0; // 0x46c MovI
	
Label_1133:
	var_30_string = "all"; // 0x46d PushS
	var_31_string = ""; var_32_int = 0; // 0x46e PushV
	var_32_int = var_28_int; // 0x46f Mov
	func_1124(var_31_string, var_32_int); // 0x470 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x472 Func
	var_36_bool = var_29_bool == 0; // 0x474 Not
	if(var_36_bool == 0) goto Label_1143; // 0x475 JumpB
	goto Label_1146; // 0x476 Jump
	
Label_1146:
	var_25_int = var_28_int; // 0x47a Mov
	return 4; // 0x47b Return
	
Label_1143:
	var_37_int = 1; // 0x477 PushI
	var_28_int = var_28_int + var_37_int; // 0x478 Add2
	goto Label_1133; // 0x479 Jump
}


func_748(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x2ec PushV
	GetPosition(var_50_cvector); // 0x2ed ObjFunc
	GetEyesHeight(var_49_float); // 0x2ef ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2f1 PushE
	var_58_float = var_58_float + var_49_float; // 0x2f2 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2f3 PopE
	GetPosition(var_51_cvector); // 0x2f4 Func
	GetEyesHeight(var_49_float); // 0x2f6 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x2f8 PushE
	var_59_float = var_59_float + var_49_float; // 0x2f9 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x2fa PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x2fb Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x2fc PushE
	var_60_float = 0; // 0x2fd MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x2fe PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x2ff Or
	var_62_float = sqrt(var_61_int); // 0x300 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x301 Div2
	var_53_cvector = -var_52_cvector; // 0x302 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x303 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x304 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x305 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x306 Xor2
	func_1032(var_64_cvector, var_65_cvector); // 0x307 NEW_2
	var_72_int = 25; // 0x309 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x30a Mult
	var_74_int = var_63_float + var_73_float; // 0x30b Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x30c PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x30d Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x30e Add2
	IsOverrideActive(var_56_bool); // 0x30f Func
	var_76_bool = var_56_bool; // 0x311 Push
	if(var_76_bool == 0) goto Label_789; // 0x312 JumpB
	var_37_bool = 0; // 0x313 MovB
	return 18; // 0x314 Return
	
Label_789:
	StopWorld(); // 0x315 Func
	var_77_bool = 1; // 0x317 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x318 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x31a PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x31b PushE
	Rotate(var_78_float, var_79_float); // 0x31c Func
	var_80_bool = 0; // 0x31e PushV
	func_1269(var_80_bool); // 0x31f NEW_2
	if(var_80_bool == 0) goto Label_803; // 0x321 JumpB
	goto Label_811; // 0x322 Jump
	
Label_811:
	CameraWaitForPlayFinish(); // 0x32b Func
	ResumeWorld(); // 0x32d Func
	var_37_bool = 1; // 0x32f MovB
	return 18; // 0x330 Return
	
Label_803:
	var_81_string = "head"; // 0x323 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x324 Func
	var_82_bool = var_57_bool; // 0x326 Push
	if(var_82_bool == 0) goto Label_811; // 0x327 JumpB
	var_83_string = "head"; // 0x328 PushS
	LookAsyncCamera(var_83_string); // 0x329 Func
}


func_1261(var_86_int)
{
	var_86_int = 515573; // 0x4ed MovI
	return 0; // 0x4ee Return
}


func_1004(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x3ec PushV
	var_136_bool = 0; // 0x3ed PushV
	func_1269(var_136_bool); // 0x3ee NEW_2
	if(var_136_bool == 0) goto Label_1017; // 0x3f0 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x3f1 Func
	var_137_bool = var_135_bool; // 0x3f3 Push
	if(var_137_bool == 0) goto Label_1017; // 0x3f4 JumpB
	lshPlaySpeech(var_133_string); // 0x3f5 Func
	var_132_bool = 1; // 0x3f7 MovB
	return 2; // 0x3f8 Return
	
Label_1017:
	var_132_bool = 0; // 0x3f9 MovB
	return 2; // 0x3fa Return
}


func_1263(var_85_int)
{
	var_85_int = 504032; // 0x4ef MovI
	return 0; // 0x4f0 Return
}


func_495()
{
	var_272_int = 10; // 0x1ef PushI
	KillTimer(var_272_int); // 0x1f0 Func
	return 0; // 0x1f2 Return
}


func_1265(var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr.png"; // 0x4f1 MovS
	return 0; // 0x4f2 Return
}


func_1267(var_88_string)
{
	var_88_string = "ui/NPC_Bakalavr_b.png"; // 0x4f3 MovS
	return 0; // 0x4f4 Return
}


func_1269(var_80_bool)
{
	var_80_bool = 1; // 0x4f5 MovB
	return 0; // 0x4f6 Return
}


func_1019()
{
	var_10_bool = 0; // 0x3fb PushV
	func_1269(var_10_bool); // 0x3fc NEW_2
	if(var_10_bool == 0) goto Label_1025; // 0x3fe JumpB
	lshStopSpeech(); // 0x3ff Func
	
Label_1025:
	return 0; // 0x401 Return
}


func_1148()
{
	var_210_string = "ook6Danko1"; // 0x47d PushS
	var_211_int = 1; // 0x47e PushI
	SetVariable(var_210_string, var_211_int); // 0x47f Func
	return 0; // 0x481 Return
}


func_381(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x17e PushV
	var_27_object = var_25_object; // 0x17f Mov
	TaskCall(0); // 0x180 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x181 NEW_2
	TaskReturn(); // 0x182 TaskReturn
	return 0; // 0x184 Return
}


