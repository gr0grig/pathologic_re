task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc0 PushI
	if(var_9_int == 0) goto Label_380; // 0xc1 JumpB
	func_1017(); // 0xc3 NEW_2
	var_11_int = 27393; // 0xc5 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc6 Eq
	if(var_12_bool == 0) goto Label_215; // 0xc7 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc8 PushV
	var_13_object = var_1_object; // 0xc9 MovT
	var_14_object = var_0_object; // 0xca MovT
	func_1152(); // 0xcb NEW_2
	var_21_object = Obj(); var_22_object = Obj(); // 0xcd PushV
	var_21_object = var_1_object; // 0xce MovT
	var_22_object = var_0_object; // 0xcf MovT
	func_1159(); // 0xd0 NEW_2
	var_49_object = Obj(); var_50_object = Obj(); // 0xd2 PushV
	var_49_object = var_1_object; // 0xd3 MovT
	var_50_object = var_0_object; // 0xd4 MovT
	func_1169(var_50_object); // 0xd5 NEW_2
	
Label_215:
	var_89_int = 27390; // 0xd7 PushI
	var_90_bool = var_8_bool == var_89_int; // 0xd8 Eq
	if(var_90_bool == 0) goto Label_233; // 0xd9 JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0xda PushV
	var_91_object = var_1_object; // 0xdb MovT
	var_92_object = var_0_object; // 0xdc MovT
	func_1152(); // 0xdd NEW_2
	var_93_object = Obj(); var_94_object = Obj(); // 0xdf PushV
	var_93_object = var_1_object; // 0xe0 MovT
	var_94_object = var_0_object; // 0xe1 MovT
	func_1159(); // 0xe2 NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0xe4 PushV
	var_95_object = var_1_object; // 0xe5 MovT
	var_96_object = var_0_object; // 0xe6 MovT
	func_1169(var_96_object); // 0xe7 NEW_2
	
Label_233:
	var_97_int = 27383; // 0xe9 PushI
	var_98_bool = var_7_cvector == var_97_int; // 0xea Eq
	if(var_98_bool == 0) goto Label_286; // 0xeb JumpB
	var_99_bool = 0; var_100_object = Obj(); // 0xec PushV
	var_100_object = var_1_object; // 0xed MovT
	func_1176(var_100_object); // 0xee NEW_2
	if(var_99_bool == 0) goto Label_266; // 0xf0 JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0xf1 PushV
	var_107_object = var_1_object; // 0xf2 MovT
	var_108_object = var_0_object; // 0xf3 MovT
	func_1146(); // 0xf4 NEW_2
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
	func_1267(var_177_bool); // 0x172 NEW_2
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
	func_1024(var_13_object); // 0x193 NEW_2
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
	func_1024(var_8_object); // 0x1a0 NEW_2
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
	func_1024(var_53_object); // 0x20c NEW_2
	var_52_object = var_53_object; // 0x20d Mov
	func_891(var_52_object); // 0x20f NEW_2
	
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
	func_971(var_14_string); // 0x23e NEW_2
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
	var_269_string = ""; // 0x253 PushV
	var_269_string = "Neutral"; // 0x254 MovS
	func_971(var_269_string); // 0x255 NEW_2
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


func_1024(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x400 PushV
	self(var_101_object); // 0x401 Func
	var_99_object = var_101_object; // 0x403 Mov
	return 2; // 0x404 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_748(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1261(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1259(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1263(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1265(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1242(var_88_int); // 0x22 NEW_2
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
	func_1024(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_833(var_97_bool, var_98_object); // 0x34 NEW_2
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
	func_816(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1152()
{
	var_15_bool = 0; var_16_string = ""; var_17_string = ""; // 0x481 PushV
	var_16_string = "quest_k6_01"; // 0x482 MovS
	var_17_string = "teleport"; // 0x483 MovS
	func_1101(var_15_bool, var_16_string, var_17_string); // 0x484 NEW_2
	return 0; // 0x486 Return
}


func_1030(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x406 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x407 Or
	var_68_float = sqrt(var_69_int); // 0x408 Sqrt2
	var_70_float = 0.0; // 0x409 PushF
	var_71_bool = var_68_float < var_70_float; // 0x40a LT
	if(var_71_bool == 0) goto Label_1038; // 0x40b JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x40c MovV
	return 2; // 0x40d Return
	
Label_1038:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x40e Div2
	return 2; // 0x40f Return
}


func_1159()
{
	func_1188(); // 0x489 NEW_2
	var_46_bool = 0; var_47_string = ""; var_48_string = ""; // 0x48b PushV
	var_47_string = "quest_k6_01"; // 0x48c MovS
	var_48_string = "completed"; // 0x48d MovS
	func_1101(var_46_bool, var_47_string, var_48_string); // 0x48e NEW_2
	return 0; // 0x490 Return
}


func_1040(var_80_float, var_81_float, var_82_float, var_83_float)
{
	var_84_bool = var_81_float < var_82_float; // 0x411 LT
	if(var_84_bool == 0) goto Label_1045; // 0x412 JumpB
	var_80_float = var_82_float; // 0x413 Mov
	return 0; // 0x414 Return
	
Label_1045:
	var_85_bool = var_81_float > var_83_float; // 0x415 GT
	if(var_85_bool == 0) goto Label_1049; // 0x416 JumpB
	var_80_float = var_83_float; // 0x417 Mov
	return 0; // 0x418 Return
	
Label_1049:
	var_80_float = var_81_float; // 0x419 Mov
	return 0; // 0x41a Return
}


func_1169(var_49_object)
{
	var_51_bool = 0; var_52_object = Obj(); var_53_float = 0; // 0x492 PushV
	var_52_object = var_49_object; // 0x493 Mov
	var_53_float = 0.3; // 0x494 MovF
	func_1056(var_51_bool, var_52_object, var_53_float); // 0x495 NEW_2
	return 0; // 0x497 Return
}


func_1176(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x499 PushV
	var_202_string = "ook6Danko1"; // 0x49a MovS
	func_1051(var_201_int, var_202_string); // 0x49b NEW_2
	var_205_int = 0; // 0x49d PushI
	var_206_bool = var_201_int == var_205_int; // 0x49e Eq
	if(var_206_bool == 0) goto Label_1186; // 0x49f JumpB
	var_199_bool = 1; // 0x4a0 MovB
	return 0; // 0x4a1 Return
	
Label_1186:
	var_199_bool = 0; // 0x4a2 MovB
	return 0; // 0x4a3 Return
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


func_1051(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x41b PushV
	GetVariable(var_202_string, var_204_int); // 0x41c Func
	var_201_int = var_204_int; // 0x41e Mov
	return 2; // 0x41f Return
}


func_928(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x3a0 PushV
	var_151_string = "d"; // 0x3a1 PushS
	var_152_int = 0; // 0x3a2 PushV
	func_1113(var_152_int); // 0x3a3 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x3a5 Add
	var_159_string = "m"; // 0x3a6 PushS
	var_146_string = var_158_int + var_159_string; // 0x3a7 Add2
	var_147_int = 0; // 0x3a8 MovI
	
Label_937:
	var_160_int = 1; // 0x3a9 PushI
	if(var_160_int == 0) goto Label_950; // 0x3aa JumpB
	var_161_int = 1; // 0x3ab PushI
	var_162_int = var_147_int + var_161_int; // 0x3ac Add
	var_163_int = var_146_string + var_162_int; // 0x3ad Add
	HasProperty(var_163_int, var_148_bool); // 0x3ae ObjFunc
	var_164_bool = var_148_bool == 0; // 0x3b0 Not
	if(var_164_bool == 0) goto Label_947; // 0x3b1 JumpB
	goto Label_950; // 0x3b2 Jump
	
Label_950:
	var_165_bool = var_147_int == 0; // 0x3b6 Not
	if(var_165_bool == 0) goto Label_954; // 0x3b7 JumpB
	var_139_bool = 0; // 0x3b8 MovB
	return 10; // 0x3b9 Return
	
Label_954:
	var_149_int = 0; // 0x3ba MovI
	var_166_int = 1; // 0x3bb PushI
	var_167_bool = var_147_int > var_166_int; // 0x3bc GT
	if(var_167_bool == 0) goto Label_960; // 0x3bd JumpB
	irand(var_149_int, var_147_int); // 0x3be Func
	
Label_960:
	var_168_int = 1; // 0x3c0 PushI
	var_169_int = var_149_int + var_168_int; // 0x3c1 Add
	var_170_int = var_146_string + var_169_int; // 0x3c2 Add
	GetProperty(var_170_int, var_150_string); // 0x3c3 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x3c5 PushV
	var_172_string = var_150_string; // 0x3c6 Mov
	func_1002(var_171_bool, var_172_string); // 0x3c7 NEW_2
	var_139_bool = var_171_bool; // 0x3c8 Mov
	return 10; // 0x3ca Return
	
Label_947:
	var_173_int = 1; // 0x3b3 PushI
	var_147_int = var_147_int + var_173_int; // 0x3b4 Add2
	goto Label_937; // 0x3b5 Jump
}


func_1056(var_51_bool, var_52_object, var_53_float)
{
	var_54_bool = var_52_object == 0; // 0x421 Not
	if(var_54_bool == 0) goto Label_1061; // 0x422 JumpB
	var_51_bool = 0; // 0x423 MovB
	return 0; // 0x424 Return
	
Label_1061:
	var_55_int = 0; // 0x425 PushI
	var_56_bool = var_53_float > var_55_int; // 0x426 GT
	if(var_56_bool == 0) goto Label_1068; // 0x427 JumpB
	var_57_int = 8; // 0x428 PushI
	SendWorldWndMessage(var_57_int); // 0x429 Func
	goto Label_1077; // 0x42b Jump
	
Label_1077:
	var_58_float = 0; // 0x435 PushV
	var_58_float = var_53_float; // 0x436 Mov
	func_1091(var_58_float); // 0x437 NEW_2
	var_62_bool = 0; var_63_object = Obj(); var_64_string = ""; var_65_float = 0; var_66_float = 0; var_67_float = 0; // 0x439 PushV
	var_63_object = var_52_object; // 0x43a Mov
	var_64_string = "reputation"; // 0x43b MovS
	var_65_float = var_53_float; // 0x43c Mov
	var_66_float = 0; // 0x43d MovI
	var_67_float = 1; // 0x43e MovI
	func_702(var_62_bool, var_63_object, var_64_string, var_65_float, var_66_float, var_67_float); // 0x43f NEW_2
	var_51_bool = 1; // 0x441 MovB
	return 0; // 0x442 Return
	
Label_1068:
	var_86_int = 0; // 0x42c PushI
	var_87_bool = var_53_float < var_86_int; // 0x42d LT
	if(var_87_bool == 0) goto Label_1075; // 0x42e JumpB
	var_88_int = 9; // 0x42f PushI
	SendWorldWndMessage(var_88_int); // 0x430 Func
	goto Label_1077; // 0x432 Jump
	
Label_1075:
	var_51_bool = 0; // 0x433 MovB
	return 0; // 0x434 Return
}


func_675(var_45_bool)
{
	var_45_bool = 1; // 0x2a3 MovB
	return 0; // 0x2a4 Return
}


func_1188()
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x4a4 PushV
	var_25_int = 415; // 0x4a5 PushI
	var_26_int = 1; // 0x4a6 PushI
	var_27_int = 526116; // 0x4a7 PushI
	CreateDiaryEntry(var_24_object, var_25_int, var_26_int, var_27_int); // 0x4a8 Func
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; // 0x4aa PushV
	var_29_object = var_24_object; // 0x4ab Mov
	var_30_int = 408; // 0x4ac MovI
	func_1214(var_28_bool, var_29_object, var_30_int); // 0x4ad NEW_2
	return 2; // 0x4af Return
}


func_677()
{
	StopAnimation(); // 0x2a5 Func
	StopGroup0(); // 0x2a7 Func
	return 0; // 0x2a9 Return
}


func_552()
{
	StopGroup0(); // 0x228 Func
	func_495(); // 0x22b NEW_2
	var_8_string = ""; // 0x22d PushV
	var_8_string = "Neutral"; // 0x22e MovS
	func_971(var_8_string); // 0x22f NEW_2
	func_486(); // 0x232 NEW_2
	return 0; // 0x234 Return
}


func_169(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0xaa PushV
	func_1267(var_212_bool); // 0xab NEW_2
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
	func_987(var_215_string, var_216_bool); // 0xbb NEW_2
	var_2_object = var_211_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_216_bool = 1; // 0xba MovB
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


func_816()
{
	var_263_bool = 0; var_264_bool = 0; // 0x330 PushV
	CameraSwitchToNormal(); // 0x331 Func
	var_265_bool = 0; // 0x333 PushV
	func_1267(var_265_bool); // 0x334 NEW_2
	if(var_265_bool == 0) goto Label_824; // 0x336 JumpB
	goto Label_832; // 0x337 Jump
	
Label_832:
	return 2; // 0x340 Return
	
Label_824:
	var_266_string = "head"; // 0x338 PushS
	HasAnimationTrack(var_264_bool, var_266_string); // 0x339 Func
	var_267_bool = var_264_bool; // 0x33b Push
	if(var_267_bool == 0) goto Label_832; // 0x33c JumpB
	var_268_string = "head"; // 0x33d PushS
	UnlookAsync(var_268_string); // 0x33e Func
}


func_1201(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x4b1 PushV
	GetDiaryRoot(var_39_object); // 0x4b2 Func
	var_40_bool = var_39_object == 0; // 0x4b4 Not
	if(var_40_bool == 0) goto Label_1211; // 0x4b5 JumpB
	var_41_string = "Can't retrieve diary root"; // 0x4b6 PushS
	Trace(var_41_string); // 0x4b7 Func
	var_37_object = 0; // 0x4b9 MovB
	return 2; // 0x4ba Return
	
Label_1211:
	var_37_object = var_39_object; // 0x4bb Mov
	return 2; // 0x4bc Return
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
	func_1040(var_80_float, var_81_float, var_82_float, var_83_float); // 0x2ce NEW_2
	SetProperty(var_64_string, var_80_float); // 0x2d0 ObjFunc
	var_62_bool = 1; // 0x2d2 MovB
	return 2; // 0x2d3 Return
}


func_1214(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; // 0x4be PushV
	var_37_object = Obj(); // 0x4bf PushV
	func_1201(var_37_object); // 0x4c0 NEW_2
	var_34_object = var_37_object; // 0x4c1 Mov
	Find(var_30_int, var_35_object); // 0x4c3 ObjFunc
	var_42_bool = var_35_object == 0; // 0x4c5 Not
	if(var_42_bool == 0) goto Label_1229; // 0x4c6 JumpB
	var_43_string = "Can't find diary parent with id: "; // 0x4c7 PushS
	var_44_int = var_43_string + var_30_int; // 0x4c8 Add
	Trace(var_44_int); // 0x4c9 Func
	var_28_bool = 0; // 0x4cb MovB
	return 6; // 0x4cc Return
	
Label_1229:
	AddChild(var_29_object); // 0x4cd ObjFunc
	var_45_int = 7; // 0x4cf PushI
	SendWorldWndMessage(var_45_int); // 0x4d0 Func
	GetCategory(var_36_int); // 0x4d2 ObjFunc
	SetDiarySection(var_36_int); // 0x4d4 Func
	var_28_bool = 0; // 0x4d6 MovB
	return 6; // 0x4d7 Return
}


func_833(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x341 PushV
	var_106_string = "voice_common"; // 0x342 PushS
	GetVariable(var_106_string, var_104_int); // 0x343 Func
	var_107_int = var_104_int; // 0x345 Push
	if(var_107_int == 0) goto Label_871; // 0x346 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x347 PushV
	var_109_object = var_98_object; // 0x348 Mov
	func_891(var_109_object); // 0x349 NEW_2
	var_138_bool = var_108_bool == 0; // 0x34b Not
	if(var_138_bool == 0) goto Label_853; // 0x34c JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x34d PushV
	var_140_object = var_98_object; // 0x34e Mov
	func_928(var_140_object); // 0x34f NEW_2
	var_174_bool = var_139_bool == 0; // 0x351 Not
	if(var_174_bool == 0) goto Label_853; // 0x352 JumpB
	var_97_bool = 0; // 0x353 MovB
	return 4; // 0x354 Return
	
Label_853:
	var_175_int = 2; // 0x355 PushI
	irand(var_105_int, var_175_int); // 0x356 Func
	var_176_int = var_105_int; // 0x358 Push
	if(var_176_int == 0) goto Label_866; // 0x359 JumpB
	var_177_string = "voice_common"; // 0x35a PushS
	var_178_int = 1; // 0x35b PushI
	var_179_int = var_104_int + var_178_int; // 0x35c Add
	var_180_int = 3; // 0x35d PushI
	var_181_int = var_179_int / var_180_int; // 0x35e Mod
	SetVariable(var_177_string, var_181_int); // 0x35f Func
	goto Label_870; // 0x361 Jump
	
Label_870:
	goto Label_889; // 0x366 Jump
	
Label_889:
	var_97_bool = 1; // 0x379 MovB
	return 4; // 0x37a Return
	
Label_866:
	var_182_string = "voice_common"; // 0x362 PushS
	var_183_int = 0; // 0x363 PushI
	SetVariable(var_182_string, var_183_int); // 0x364 Func
	
Label_871:
	var_184_bool = 0; var_185_object = Obj(); // 0x367 PushV
	var_185_object = var_98_object; // 0x368 Mov
	func_928(var_185_object); // 0x369 NEW_2
	var_186_bool = var_184_bool == 0; // 0x36b Not
	if(var_186_bool == 0) goto Label_885; // 0x36c JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x36d PushV
	var_188_object = var_98_object; // 0x36e Mov
	func_891(var_188_object); // 0x36f NEW_2
	var_189_bool = var_187_bool == 0; // 0x371 Not
	if(var_189_bool == 0) goto Label_885; // 0x372 JumpB
	var_97_bool = 0; // 0x373 MovB
	return 4; // 0x374 Return
	
Label_885:
	var_190_string = "voice_common"; // 0x375 PushS
	var_191_int = 1; // 0x376 PushI
	SetVariable(var_190_string, var_191_int); // 0x377 Func
}


func_1091(var_58_float)
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x443 PushV
	CreateFloatVector(var_60_object); // 0x444 Func
	add(var_58_float); // 0x446 ObjFunc
	var_61_int = 16; // 0x448 PushI
	SendWorldWndMessage(var_61_int, var_60_object); // 0x449 Func
	return 2; // 0x44b Return
}


func_971(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x3cb PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x3cc Func
	var_244_bool = var_241_bool; // 0x3ce Push
	if(var_244_bool == 0) goto Label_982; // 0x3cf JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x3d0 Func
	var_245_bool = 0; // 0x3d2 PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x3d3 Func
	goto Label_986; // 0x3d5 Jump
	
Label_986:
	return 6; // 0x3da Return
	
Label_982:
	var_246_string = "Can't find lsh animation : "; // 0x3d6 PushS
	var_247_int = var_246_string + var_237_string; // 0x3d7 Add
	Trace(var_247_int); // 0x3d8 Func
}


func_459(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1cb PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1cc PushE
	RotateAsync(var_84_float, var_85_float); // 0x1cd Func
	return 0; // 0x1cf Return
}


func_1101(var_15_bool, var_16_string, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x44d PushV
	FindActor(var_19_object, var_16_string); // 0x44e Func
	var_20_bool = var_19_object == 0; // 0x450 NullEq
	if(var_20_bool == 0) goto Label_1108; // 0x451 JumpB
	var_15_bool = 0; // 0x452 MovB
	return 2; // 0x453 Return
	
Label_1108:
	Trigger(var_19_object, var_17_string); // 0x454 Func
	var_15_bool = 1; // 0x456 MovB
	return 2; // 0x457 Return
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


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_139; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_1176(var_200_object); // 0x59 NEW_2
	if(var_199_bool == 0) goto Label_117; // 0x5b JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x5c PushV
	var_207_object = var_1_object; // 0x5d MovT
	var_208_object = var_0_object; // 0x5e MovT
	func_1146(); // 0x5f NEW_2
	var_211_string = ""; // 0x61 PushV
	var_211_string = "Menace"; // 0x62 MovS
	func_169(var_193_object, var_211_string); // 0x63 NEW_2
	var_228_int = 526097; // 0x65 PushI
	SetMessage(var_228_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_229_int = 526098; // 0x6a PushI
	var_230_int = 27386; // 0x6b PushI
	var_231_int = 27384; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	var_232_int = 526099; // 0x6f PushI
	var_233_int = 27386; // 0x70 PushI
	var_234_int = 27385; // 0x71 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x72 TObjFunc
	goto Label_139; // 0x74 Jump
	
Label_139:
	var_235_bool = 0; // 0x8b PushV
	func_1267(var_235_bool); // 0x8c NEW_2
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
	func_971(var_237_string); // 0x96 NEW_2
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
	var_253_string = "Menace"; // 0x76 MovS
	func_169(var_193_object, var_253_string); // 0x77 NEW_2
	var_254_int = 526107; // 0x79 PushI
	SetMessage(var_254_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_255_int = 526108; // 0x7e PushI
	var_256_int = -1; // 0x7f PushI
	var_257_int = 27395; // 0x80 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x81 TObjFunc
	var_258_int = 528917; // 0x83 PushI
	var_259_int = -1; // 0x84 PushI
	var_260_int = 30347; // 0x85 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x86 TObjFunc
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


func_1113(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x459 PushV
	GetGameTime(var_154_float); // 0x45a Func
	var_155_int = 1; // 0x45c PushI
	var_156_int = 0; // 0x45d PushV
	var_157_int = 24; // 0x45e PushI
	var_156_int = var_154_float / var_154_float; // 0x45f Div2
	var_152_int = var_155_int + var_156_int; // 0x460 Add2
	return 2; // 0x461 Return
}


func_1242(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x4da PushV
	var_91_string = "branch"; // 0x4db PushS
	GetVariable(var_91_string, var_90_int); // 0x4dc Func
	var_92_int = 0; // 0x4de PushI
	var_93_bool = var_90_int == var_92_int; // 0x4df Eq
	if(var_93_bool == 0) goto Label_1252; // 0x4e0 JumpB
	var_88_int = 1; // 0x4e1 MovI
	return 2; // 0x4e2 Return
	
Label_1252:
	var_94_int = 1; // 0x4e4 PushI
	var_95_bool = var_90_int == var_94_int; // 0x4e5 Eq
	if(var_95_bool == 0) goto Label_1257; // 0x4e6 JumpB
	var_88_int = 2; // 0x4e7 MovI
	return 2; // 0x4e8 Return
	
Label_1257:
	var_88_int = 3; // 0x4e9 MovI
	return 2; // 0x4ea Return
}


func_987(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x3db PushV
	lshHasAnimation(var_222_bool, var_215_string); // 0x3dc Func
	var_225_bool = var_222_bool; // 0x3de Push
	if(var_225_bool == 0) goto Label_997; // 0x3df JumpB
	lshGetAnimTimes(var_215_string, var_223_float, var_224_float); // 0x3e0 Func
	lshPlayAnimation(var_223_float, var_224_float, var_216_bool); // 0x3e2 Func
	goto Label_1001; // 0x3e4 Jump
	
Label_1001:
	return 6; // 0x3e9 Return
	
Label_997:
	var_226_string = "Can't find lsh animation : "; // 0x3e5 PushS
	var_227_int = var_226_string + var_215_string; // 0x3e6 Add
	Trace(var_227_int); // 0x3e7 Func
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
	func_1129(var_25_int); // 0x268 NEW_2
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
	func_1122(var_52_string, var_53_int); // 0x28c NEW_2
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


func_486()
{
	var_271_float = 0; var_272_float = 0; // 0x1e6 PushV
	var_273_int = 8; // 0x1e7 PushI
	var_274_int = 16; // 0x1e8 PushI
	rand(var_272_float, var_273_int, var_274_int); // 0x1e9 Func
	var_275_int = 10; // 0x1eb PushI
	SetTimer(var_275_int, var_272_float); // 0x1ec Func
	return 2; // 0x1ee Return
}


func_743(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2e7 PushV
	IsLoaded(var_9_bool); // 0x2e8 Func
	var_7_bool = var_9_bool; // 0x2ea Mov
	return 2; // 0x2eb Return
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


func_1002(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x3ea PushV
	var_135_bool = 0; // 0x3eb PushV
	func_1267(var_135_bool); // 0x3ec NEW_2
	if(var_135_bool == 0) goto Label_1015; // 0x3ee JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x3ef Func
	var_136_bool = var_134_bool; // 0x3f1 Push
	if(var_136_bool == 0) goto Label_1015; // 0x3f2 JumpB
	lshPlaySpeech(var_132_string); // 0x3f3 Func
	var_131_bool = 1; // 0x3f5 MovB
	return 2; // 0x3f6 Return
	
Label_1015:
	var_131_bool = 0; // 0x3f7 MovB
	return 2; // 0x3f8 Return
}


func_1259(var_85_int)
{
	var_85_int = 515573; // 0x4eb MovI
	return 0; // 0x4ec Return
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
	func_1030(var_64_cvector, var_65_cvector); // 0x307 NEW_2
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
	CameraTransit(var_55_cvector, var_53_cvector); // 0x317 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x319 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x31a PushE
	Rotate(var_77_float, var_78_float); // 0x31b Func
	var_79_bool = 0; // 0x31d PushV
	func_1267(var_79_bool); // 0x31e NEW_2
	if(var_79_bool == 0) goto Label_802; // 0x320 JumpB
	goto Label_810; // 0x321 Jump
	
Label_810:
	CameraWaitForPlayFinish(); // 0x32a Func
	ResumeWorld(); // 0x32c Func
	var_37_bool = 1; // 0x32e MovB
	return 18; // 0x32f Return
	
Label_802:
	var_80_string = "head"; // 0x322 PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x323 Func
	var_81_bool = var_57_bool; // 0x325 Push
	if(var_81_bool == 0) goto Label_810; // 0x326 JumpB
	var_82_string = "head"; // 0x327 PushS
	LookAsyncCamera(var_82_string); // 0x328 Func
}


func_1261(var_84_int)
{
	var_84_int = 504032; // 0x4ed MovI
	return 0; // 0x4ee Return
}


func_1263(var_86_string)
{
	var_86_string = "ui/NPC_Bakalavr.png"; // 0x4ef MovS
	return 0; // 0x4f0 Return
}


func_495()
{
	var_270_int = 10; // 0x1ef PushI
	KillTimer(var_270_int); // 0x1f0 Func
	return 0; // 0x1f2 Return
}


func_1265(var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr_b.png"; // 0x4f1 MovS
	return 0; // 0x4f2 Return
}


func_1267(var_79_bool)
{
	var_79_bool = 1; // 0x4f3 MovB
	return 0; // 0x4f4 Return
}


func_1017()
{
	var_10_bool = 0; // 0x3f9 PushV
	func_1267(var_10_bool); // 0x3fa NEW_2
	if(var_10_bool == 0) goto Label_1023; // 0x3fc JumpB
	lshStopSpeech(); // 0x3fd Func
	
Label_1023:
	return 0; // 0x3ff Return
}


func_1146()
{
	var_209_string = "ook6Danko1"; // 0x47b PushS
	var_210_int = 1; // 0x47c PushI
	SetVariable(var_209_string, var_210_int); // 0x47d Func
	return 0; // 0x47f Return
}


func_891(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x37b PushV
	var_115_string = "c"; // 0x37c MovS
	var_116_int = 0; // 0x37d MovI
	
Label_894:
	var_120_int = 1; // 0x37e PushI
	if(var_120_int == 0) goto Label_907; // 0x37f JumpB
	var_121_int = 1; // 0x380 PushI
	var_122_int = var_116_int + var_121_int; // 0x381 Add
	var_123_int = var_115_string + var_122_int; // 0x382 Add
	HasProperty(var_123_int, var_117_bool); // 0x383 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x385 Not
	if(var_124_bool == 0) goto Label_904; // 0x386 JumpB
	goto Label_907; // 0x387 Jump
	
Label_907:
	var_125_bool = var_116_int == 0; // 0x38b Not
	if(var_125_bool == 0) goto Label_911; // 0x38c JumpB
	var_108_bool = 0; // 0x38d MovB
	return 10; // 0x38e Return
	
Label_911:
	var_118_int = 0; // 0x38f MovI
	var_126_int = 1; // 0x390 PushI
	var_127_bool = var_116_int > var_126_int; // 0x391 GT
	if(var_127_bool == 0) goto Label_917; // 0x392 JumpB
	irand(var_118_int, var_116_int); // 0x393 Func
	
Label_917:
	var_128_int = 1; // 0x395 PushI
	var_129_int = var_118_int + var_128_int; // 0x396 Add
	var_130_int = var_115_string + var_129_int; // 0x397 Add
	GetProperty(var_130_int, var_119_string); // 0x398 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x39a PushV
	var_132_string = var_119_string; // 0x39b Mov
	func_1002(var_131_bool, var_132_string); // 0x39c NEW_2
	var_108_bool = var_131_bool; // 0x39d Mov
	return 10; // 0x39f Return
	
Label_904:
	var_137_int = 1; // 0x388 PushI
	var_116_int = var_116_int + var_137_int; // 0x389 Add2
	goto Label_894; // 0x38a Jump
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


