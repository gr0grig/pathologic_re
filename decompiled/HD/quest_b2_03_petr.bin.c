task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xeb PushI
	if(var_9_int == 0) goto Label_394; // 0xec JumpB
	func_999(); // 0xee NEW_2
	var_11_int = 32383; // 0xf0 PushI
	var_12_bool = var_7_cvector == var_11_int; // 0xf1 Eq
	if(var_12_bool == 0) goto Label_336; // 0xf2 JumpB
	var_13_bool = 0; // 0xf3 PushV
	var_13_bool = 0; // 0xf4 MovB
	var_14_bool = 0; var_15_object = Obj(); // 0xf5 PushV
	var_15_object = var_1_object; // 0xf6 MovT
	func_1072(var_15_object); // 0xf7 NEW_2
	if(var_14_bool == 0) goto Label_256; // 0xf9 JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0xfa PushV
	var_23_object = var_1_object; // 0xfb MovT
	func_1084(var_23_object); // 0xfc NEW_2
	if(var_22_bool == 0) goto Label_256; // 0xfe JumpB
	var_13_bool = 1; // 0xff MovB
	
Label_256:
	if(var_13_bool == 0) goto Label_277; // 0x100 JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x101 PushV
	var_28_object = var_1_object; // 0x102 MovT
	var_29_object = var_0_object; // 0x103 MovT
	func_1060(); // 0x104 NEW_2
	var_32_string = ""; // 0x106 PushV
	var_32_string = "Neutral"; // 0x107 MovS
	func_212(var_8_bool, var_32_string); // 0x108 NEW_2
	var_49_int = 531057; // 0x10a PushI
	SetMessage(var_49_int); // 0x10b TObjFunc
	ClearReplies(); // 0x10d TObjFunc
	var_50_int = 531274; // 0x10f PushI
	var_51_int = 32589; // 0x110 PushI
	var_52_int = 32588; // 0x111 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x112 TObjFunc
	return 0; // 0x114 Return
	
Label_277:
	var_53_bool = 0; // 0x115 PushV
	var_53_bool = 0; // 0x116 MovB
	var_54_bool = 0; var_55_object = Obj(); // 0x117 PushV
	var_55_object = var_1_object; // 0x118 MovT
	func_1108(var_55_object); // 0x119 NEW_2
	if(var_54_bool == 0) goto Label_290; // 0x11b JumpB
	var_60_bool = 0; var_61_object = Obj(); // 0x11c PushV
	var_61_object = var_1_object; // 0x11d MovT
	func_1096(var_61_object); // 0x11e NEW_2
	if(var_60_bool == 0) goto Label_290; // 0x120 JumpB
	var_53_bool = 1; // 0x121 MovB
	
Label_290:
	if(var_53_bool == 0) goto Label_316; // 0x122 JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0x123 PushV
	var_66_object = var_1_object; // 0x124 MovT
	var_67_object = var_0_object; // 0x125 MovT
	func_1066(); // 0x126 NEW_2
	var_70_string = ""; // 0x128 PushV
	var_70_string = "Neutral"; // 0x129 MovS
	func_212(var_8_bool, var_70_string); // 0x12a NEW_2
	var_71_int = 531059; // 0x12c PushI
	SetMessage(var_71_int); // 0x12d TObjFunc
	ClearReplies(); // 0x12f TObjFunc
	var_72_int = 531060; // 0x131 PushI
	var_73_int = -1; // 0x132 PushI
	var_74_int = 32386; // 0x133 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x134 TObjFunc
	var_75_int = 531242; // 0x136 PushI
	var_76_int = -1; // 0x137 PushI
	var_77_int = 32557; // 0x138 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_78_string = ""; // 0x13c PushV
	var_78_string = "Untrust"; // 0x13d MovS
	func_212(var_8_bool, var_78_string); // 0x13e NEW_2
	var_79_int = 531055; // 0x140 PushI
	SetMessage(var_79_int); // 0x141 TObjFunc
	ClearReplies(); // 0x143 TObjFunc
	var_80_int = 531056; // 0x145 PushI
	var_81_int = -1; // 0x146 PushI
	var_82_int = 32382; // 0x147 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x148 TObjFunc
	var_83_int = 531241; // 0x14a PushI
	var_84_int = -1; // 0x14b PushI
	var_85_int = 32556; // 0x14c PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x14d TObjFunc
	return 0; // 0x14f Return
	
Label_336:
	var_86_int = 32589; // 0x150 PushI
	var_87_bool = var_7_cvector == var_86_int; // 0x151 Eq
	if(var_87_bool == 0) goto Label_359; // 0x152 JumpB
	var_88_string = ""; // 0x153 PushV
	var_88_string = "Autizm"; // 0x154 MovS
	func_212(var_8_bool, var_88_string); // 0x155 NEW_2
	var_89_int = 531275; // 0x157 PushI
	SetMessage(var_89_int); // 0x158 TObjFunc
	ClearReplies(); // 0x15a TObjFunc
	var_90_int = 531243; // 0x15c PushI
	var_91_int = 32559; // 0x15d PushI
	var_92_int = 32558; // 0x15e PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x15f TObjFunc
	var_93_int = 531058; // 0x161 PushI
	var_94_int = -1; // 0x162 PushI
	var_95_int = 32384; // 0x163 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x164 TObjFunc
	return 0; // 0x166 Return
	
Label_359:
	var_96_int = 32559; // 0x167 PushI
	var_97_bool = var_7_cvector == var_96_int; // 0x168 Eq
	if(var_97_bool == 0) goto Label_382; // 0x169 JumpB
	var_98_string = ""; // 0x16a PushV
	var_98_string = "Autizm"; // 0x16b MovS
	func_212(var_8_bool, var_98_string); // 0x16c NEW_2
	var_99_int = 531244; // 0x16e PushI
	SetMessage(var_99_int); // 0x16f TObjFunc
	ClearReplies(); // 0x171 TObjFunc
	var_100_int = 531245; // 0x173 PushI
	var_101_int = -1; // 0x174 PushI
	var_102_int = 32560; // 0x175 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x176 TObjFunc
	var_103_int = 531246; // 0x178 PushI
	var_104_int = -1; // 0x179 PushI
	var_105_int = 32561; // 0x17a PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x17b TObjFunc
	return 0; // 0x17d Return
	
Label_382:
	var_3_string = 1; // 0x17e TMovB
	var_106_bool = 0; // 0x17f PushV
	func_1145(var_106_bool); // 0x180 NEW_2
	if(var_106_bool == 0) goto Label_390; // 0x182 JumpB
	lshStopAnimation(); // 0x183 Func
	goto Label_392; // 0x185 Jump
	
Label_392:
	return 0; // 0x188 Return
	
Label_390:
	StopAnimation(); // 0x186 Func
	
Label_394:
	return 0; // 0x18a Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x197 PushV
	var_10_string = "cleanup"; // 0x198 PushS
	var_11_bool = var_7_string == var_10_string; // 0x199 Eq
	if(var_11_bool == 0) goto Label_422; // 0x19a JumpB
	var_1_object = 1; // 0x19b TMovB
	IsLoaded(var_9_bool); // 0x19c Func
	var_12_bool = var_9_bool == 0; // 0x19e Not
	if(var_12_bool == 0) goto Label_421; // 0x19f JumpB
	var_13_object = Obj(); // 0x1a0 PushV
	func_1006(var_13_object); // 0x1a1 NEW_2
	RemoveActor(var_13_object); // 0x1a3 Func
	
Label_421:
	goto Label_426; // 0x1a5 Jump
	
Label_426:
	return 2; // 0x1aa Return
	
Label_422:
	var_16_string = "restore"; // 0x1a6 PushS
	var_17_bool = var_7_string == var_16_string; // 0x1a7 Eq
	if(var_17_bool == 0) goto Label_426; // 0x1a8 JumpB
	var_1_object = 0; // 0x1a9 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x1ab PushT
	if(var_7_object == 0) goto Label_436; // 0x1ac JumpB
	var_8_object = Obj(); // 0x1ad PushV
	func_1006(var_8_object); // 0x1ae NEW_2
	RemoveActor(var_8_object); // 0x1b0 Func
	Hold(); // 0x1b2 Func
	
Label_436:
	func_551(); // 0x1b5 NEW_2
	return 0; // 0x1b7 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_566(); // 0x1b9 NEW_2
	return 0; // 0x1bb Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x202 PushI
	var_9_bool = var_7_int == var_8_int; // 0x203 Eq
	if(var_9_bool == 0) goto Label_550; // 0x204 JumpB
	func_509(); // 0x206 NEW_2
	var_11_bool = 0; // 0x208 PushV
	var_11_bool = 0; // 0x209 MovB
	var_12_bool = 0; // 0x20a PushV
	func_723(var_12_bool); // 0x20b NEW_2
	if(var_12_bool == 0) goto Label_531; // 0x20d JumpB
	var_15_bool = 0; // 0x20e PushV
	func_478(var_15_bool); // 0x20f NEW_2
	if(var_15_bool == 0) goto Label_531; // 0x211 JumpB
	var_11_bool = 1; // 0x212 MovB
	
Label_531:
	if(var_11_bool == 0) goto Label_544; // 0x213 JumpB
	var_32_bool = 0; // 0x214 PushV
	func_458(var_32_bool); // 0x215 NEW_2
	if(var_32_bool == 0) goto Label_543; // 0x217 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x218 PushV
	var_53_object = Obj(); // 0x219 PushV
	func_1006(var_53_object); // 0x21a NEW_2
	var_52_object = var_53_object; // 0x21b Mov
	func_873(var_52_object); // 0x21d NEW_2
	
Label_543:
	goto Label_550; // 0x21f Jump
	
Label_550:
	return 0; // 0x226 Return
	
Label_544:
	func_473(var_7_int); // 0x221 NEW_2
	func_500(); // 0x224 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x244 Push
	if(var_8_bool == 0) goto Label_586; // 0x245 JumpB
	func_500(); // 0x247 NEW_2
	goto Label_590; // 0x249 Jump
	
Label_590:
	return 0; // 0x24e Return
	
Label_586:
	var_14_string = ""; // 0x24a PushV
	var_14_string = "Neutral"; // 0x24b MovS
	func_953(var_14_string); // 0x24c NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x24f PushV
	IsOverrideActive(var_9_bool); // 0x250 Func
	var_10_bool = var_9_bool == 0; // 0x252 Not
	if(var_10_bool == 0) goto Label_619; // 0x253 JumpB
	EventDisable(0); // 0x254 EventDisable
	func_691(); // 0x256 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x258 PushV
	var_12_object = var_7_object; // 0x259 Mov
	func_714(var_12_object); // 0x25a NEW_2
	EventEnable(0); // 0x25c EventEnable
	var_25_object = Obj(); // 0x25d PushV
	var_25_object = var_7_object; // 0x25e Mov
	func_395(var_25_object); // 0x25f NEW_2
	var_300_string = ""; // 0x261 PushV
	var_300_string = "Neutral"; // 0x262 MovS
	func_953(var_300_string); // 0x263 NEW_2
	func_509(); // 0x266 NEW_2
	func_500(); // 0x269 NEW_2
	
Label_619:
	return 2; // 0x26b Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_444(var_6_bool); // 0x194 NEW_2
	return 0; // 0x196 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_728(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1139(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1137(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1141(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1143(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1120(var_89_int); // 0x22 NEW_2
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
	func_1006(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_815(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_291_bool = var_36_bool == 0; // 0x3f Not
	if(var_291_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_292_object = Obj(); // 0x46 PushV
	var_292_object = var_27_object; // 0x47 Mov
	func_797(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1027(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x403 PushV
	GetGameTime(var_155_float); // 0x404 Func
	var_156_int = 1; // 0x406 PushI
	var_157_int = 0; // 0x407 PushV
	var_158_int = 24; // 0x408 PushI
	var_157_int = var_155_float / var_155_float; // 0x409 Div2
	var_153_int = var_156_int + var_157_int; // 0x40a Add2
	return 2; // 0x40b Return
}


func_395(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x18c PushV
	var_27_object = var_25_object; // 0x18d Mov
	TaskCall(0); // 0x18e TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x18f NEW_2
	TaskReturn(); // 0x190 TaskReturn
	return 0; // 0x192 Return
}


func_1036(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x40c PushV
	var_34_string = "idle"; // 0x40d MovS
	var_35_int = var_32_int; // 0x40e Push
	if(var_35_int == 0) goto Label_1041; // 0x40f JumpB
	var_34_string = var_34_string + var_32_int; // 0x410 Add2
	
Label_1041:
	var_31_string = var_34_string; // 0x411 Mov
	return 2; // 0x412 Return
}


func_910(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x38e PushV
	var_152_string = "d"; // 0x38f PushS
	var_153_int = 0; // 0x390 PushV
	func_1027(var_153_int); // 0x391 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x393 Add
	var_160_string = "m"; // 0x394 PushS
	var_147_string = var_159_int + var_160_string; // 0x395 Add2
	var_148_int = 0; // 0x396 MovI
	
Label_919:
	var_161_int = 1; // 0x397 PushI
	if(var_161_int == 0) goto Label_932; // 0x398 JumpB
	var_162_int = 1; // 0x399 PushI
	var_163_int = var_148_int + var_162_int; // 0x39a Add
	var_164_int = var_147_string + var_163_int; // 0x39b Add
	HasProperty(var_164_int, var_149_bool); // 0x39c ObjFunc
	var_165_bool = var_149_bool == 0; // 0x39e Not
	if(var_165_bool == 0) goto Label_929; // 0x39f JumpB
	goto Label_932; // 0x3a0 Jump
	
Label_932:
	var_166_bool = var_148_int == 0; // 0x3a4 Not
	if(var_166_bool == 0) goto Label_936; // 0x3a5 JumpB
	var_140_bool = 0; // 0x3a6 MovB
	return 10; // 0x3a7 Return
	
Label_936:
	var_150_int = 0; // 0x3a8 MovI
	var_167_int = 1; // 0x3a9 PushI
	var_168_bool = var_148_int > var_167_int; // 0x3aa GT
	if(var_168_bool == 0) goto Label_942; // 0x3ab JumpB
	irand(var_150_int, var_148_int); // 0x3ac Func
	
Label_942:
	var_169_int = 1; // 0x3ae PushI
	var_170_int = var_150_int + var_169_int; // 0x3af Add
	var_171_int = var_147_string + var_170_int; // 0x3b0 Add
	GetProperty(var_171_int, var_151_string); // 0x3b1 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x3b3 PushV
	var_173_string = var_151_string; // 0x3b4 Mov
	func_984(var_172_bool, var_173_string); // 0x3b5 NEW_2
	var_140_bool = var_172_bool; // 0x3b6 Mov
	return 10; // 0x3b8 Return
	
Label_929:
	var_174_int = 1; // 0x3a1 PushI
	var_148_int = var_148_int + var_174_int; // 0x3a2 Add2
	goto Label_919; // 0x3a3 Jump
}


func_1043(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x413 PushV
	var_28_int = 0; // 0x414 MovI
	
Label_1045:
	var_30_string = "all"; // 0x415 PushS
	var_31_string = ""; var_32_int = 0; // 0x416 PushV
	var_32_int = var_28_int; // 0x417 Mov
	func_1036(var_31_string, var_32_int); // 0x418 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x41a Func
	var_36_bool = var_29_bool == 0; // 0x41c Not
	if(var_36_bool == 0) goto Label_1055; // 0x41d JumpB
	goto Label_1058; // 0x41e Jump
	
Label_1058:
	var_25_int = var_28_int; // 0x422 Mov
	return 4; // 0x423 Return
	
Label_1055:
	var_37_int = 1; // 0x41f PushI
	var_28_int = var_28_int + var_37_int; // 0x420 Add2
	goto Label_1045; // 0x421 Jump
}


func_797()
{
	var_293_bool = 0; var_294_bool = 0; // 0x31d PushV
	var_295_bool = 1; // 0x31e PushB
	CameraSwitchToNormal(var_295_bool); // 0x31f Func
	var_296_bool = 0; // 0x321 PushV
	func_1145(var_296_bool); // 0x322 NEW_2
	if(var_296_bool == 0) goto Label_806; // 0x324 JumpB
	goto Label_814; // 0x325 Jump
	
Label_814:
	return 2; // 0x32e Return
	
Label_806:
	var_297_string = "head"; // 0x326 PushS
	HasAnimationTrack(var_294_bool, var_297_string); // 0x327 Func
	var_298_bool = var_294_bool; // 0x329 Push
	if(var_298_bool == 0) goto Label_814; // 0x32a JumpB
	var_299_string = "head"; // 0x32b PushS
	UnlookAsync(var_299_string); // 0x32c Func
}


func_1060()
{
	var_217_string = "oob2PetrKabak1"; // 0x425 PushS
	var_218_int = 1; // 0x426 PushI
	SetVariable(var_217_string, var_218_int); // 0x427 Func
	return 0; // 0x429 Return
}


func_551()
{
	func_691(); // 0x228 NEW_2
	func_509(); // 0x22b NEW_2
	lshStopSpeech(); // 0x22d Func
	lshStopAnimation(); // 0x22f Func
	StopAsync(); // 0x231 Func
	Hold(); // 0x233 Func
	return 0; // 0x235 Return
}


func_1066()
{
	var_273_string = "oob2PetrKabak2"; // 0x42b PushS
	var_274_int = 1; // 0x42c PushI
	SetVariable(var_273_string, var_274_int); // 0x42d Func
	return 0; // 0x42f Return
}


func_815(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x32f PushV
	var_107_string = "voice_common"; // 0x330 PushS
	GetVariable(var_107_string, var_105_int); // 0x331 Func
	var_108_int = var_105_int; // 0x333 Push
	if(var_108_int == 0) goto Label_853; // 0x334 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x335 PushV
	var_110_object = var_99_object; // 0x336 Mov
	func_873(var_110_object); // 0x337 NEW_2
	var_139_bool = var_109_bool == 0; // 0x339 Not
	if(var_139_bool == 0) goto Label_835; // 0x33a JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x33b PushV
	var_141_object = var_99_object; // 0x33c Mov
	func_910(var_141_object); // 0x33d NEW_2
	var_175_bool = var_140_bool == 0; // 0x33f Not
	if(var_175_bool == 0) goto Label_835; // 0x340 JumpB
	var_98_bool = 0; // 0x341 MovB
	return 4; // 0x342 Return
	
Label_835:
	var_176_int = 2; // 0x343 PushI
	irand(var_106_int, var_176_int); // 0x344 Func
	var_177_int = var_106_int; // 0x346 Push
	if(var_177_int == 0) goto Label_848; // 0x347 JumpB
	var_178_string = "voice_common"; // 0x348 PushS
	var_179_int = 1; // 0x349 PushI
	var_180_int = var_105_int + var_179_int; // 0x34a Add
	var_181_int = 3; // 0x34b PushI
	var_182_int = var_180_int / var_181_int; // 0x34c Mod
	SetVariable(var_178_string, var_182_int); // 0x34d Func
	goto Label_852; // 0x34f Jump
	
Label_852:
	goto Label_871; // 0x354 Jump
	
Label_871:
	var_98_bool = 1; // 0x367 MovB
	return 4; // 0x368 Return
	
Label_848:
	var_183_string = "voice_common"; // 0x350 PushS
	var_184_int = 0; // 0x351 PushI
	SetVariable(var_183_string, var_184_int); // 0x352 Func
	
Label_853:
	var_185_bool = 0; var_186_object = Obj(); // 0x355 PushV
	var_186_object = var_99_object; // 0x356 Mov
	func_910(var_186_object); // 0x357 NEW_2
	var_187_bool = var_185_bool == 0; // 0x359 Not
	if(var_187_bool == 0) goto Label_867; // 0x35a JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x35b PushV
	var_189_object = var_99_object; // 0x35c Mov
	func_873(var_189_object); // 0x35d NEW_2
	var_190_bool = var_188_bool == 0; // 0x35f Not
	if(var_190_bool == 0) goto Label_867; // 0x360 JumpB
	var_98_bool = 0; // 0x361 MovB
	return 4; // 0x362 Return
	
Label_867:
	var_191_string = "voice_common"; // 0x363 PushS
	var_192_int = 1; // 0x364 PushI
	SetVariable(var_191_string, var_192_int); // 0x365 Func
}


func_1072(var_201_bool)
{
	var_203_int = 0; var_204_string = ""; // 0x431 PushV
	var_204_string = "b2q03"; // 0x432 MovS
	func_1022(var_203_int, var_204_string); // 0x433 NEW_2
	var_207_int = 1; // 0x435 PushI
	var_208_bool = var_203_int == var_207_int; // 0x436 Eq
	if(var_208_bool == 0) goto Label_1082; // 0x437 JumpB
	var_201_bool = 1; // 0x438 MovB
	return 0; // 0x439 Return
	
Label_1082:
	var_201_bool = 0; // 0x43a MovB
	return 0; // 0x43b Return
}


func_689(var_45_bool)
{
	var_45_bool = 1; // 0x2b1 MovB
	return 0; // 0x2b2 Return
}


func_691()
{
	StopAnimation(); // 0x2b3 Func
	StopGroup0(); // 0x2b5 Func
	return 0; // 0x2b7 Return
}


func_566()
{
	StopGroup0(); // 0x236 Func
	func_509(); // 0x239 NEW_2
	var_8_string = ""; // 0x23b PushV
	var_8_string = "Neutral"; // 0x23c MovS
	func_953(var_8_string); // 0x23d NEW_2
	func_500(); // 0x240 NEW_2
	return 0; // 0x242 Return
}


func_696(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x2b8 PushV
	GetPosition(var_27_cvector); // 0x2b9 Func
	GetPosition(var_28_cvector); // 0x2bb ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2bd Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2be Or2
	return 6; // 0x2bf Return
}


func_953(var_242_string)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0; // 0x3b9 PushV
	lshHasAnimation(var_246_bool, var_242_string); // 0x3ba Func
	var_249_bool = var_246_bool; // 0x3bc Push
	if(var_249_bool == 0) goto Label_964; // 0x3bd JumpB
	lshGetAnimTimes(var_242_string, var_247_float, var_248_float); // 0x3be Func
	var_250_bool = 0; // 0x3c0 PushB
	lshPlayAnimation(var_247_float, var_248_float, var_250_bool); // 0x3c1 Func
	goto Label_968; // 0x3c3 Jump
	
Label_968:
	return 6; // 0x3c8 Return
	
Label_964:
	var_251_string = "Can't find lsh animation : "; // 0x3c4 PushS
	var_252_int = var_251_string + var_242_string; // 0x3c5 Add
	Trace(var_252_int); // 0x3c6 Func
}


func_444(var_0_object)
{
	var_7_bool = 0; // 0x1bc PushV
	func_723(var_7_bool); // 0x1bd NEW_2
	var_10_bool = var_7_bool == 0; // 0x1bf Not
	if(var_10_bool == 0) goto Label_451; // 0x1c0 JumpB
	Hold(); // 0x1c1 Func
	
Label_451:
	GetDirection(var_0_object); // 0x1c3 Func
	
Label_453:
	func_620(); // 0x1c6 NEW_2
	goto Label_453; // 0x1c8 Jump
}


func_1084(var_209_bool)
{
	var_211_int = 0; var_212_string = ""; // 0x43d PushV
	var_212_string = "oob2PetrKabak1"; // 0x43e MovS
	func_1022(var_211_int, var_212_string); // 0x43f NEW_2
	var_213_int = 0; // 0x441 PushI
	var_214_bool = var_211_int == var_213_int; // 0x442 Eq
	if(var_214_bool == 0) goto Label_1094; // 0x443 JumpB
	var_209_bool = 1; // 0x444 MovB
	return 0; // 0x445 Return
	
Label_1094:
	var_209_bool = 0; // 0x446 MovB
	return 0; // 0x447 Return
}


func_704(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x2c0 PushV
	GetPosition(var_20_cvector); // 0x2c1 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x2c3 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x2c4 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x2c5 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x2c6 Func
	var_15_bool = var_22_bool; // 0x2c8 Mov
	return 6; // 0x2c9 Return
}


func_1096(var_265_bool)
{
	var_267_int = 0; var_268_string = ""; // 0x449 PushV
	var_268_string = "oob2PetrKabak2"; // 0x44a MovS
	func_1022(var_267_int, var_268_string); // 0x44b NEW_2
	var_269_int = 0; // 0x44d PushI
	var_270_bool = var_267_int == var_269_int; // 0x44e Eq
	if(var_270_bool == 0) goto Label_1106; // 0x44f JumpB
	var_265_bool = 1; // 0x450 MovB
	return 0; // 0x451 Return
	
Label_1106:
	var_265_bool = 0; // 0x452 MovB
	return 0; // 0x453 Return
}


func_969(var_223_string, var_224_bool)
{
	var_227_bool = 0; var_228_float = 0; var_229_float = 0; var_230_bool = 0; var_231_float = 0; var_232_float = 0; // 0x3c9 PushV
	lshHasAnimation(var_230_bool, var_223_string); // 0x3ca Func
	var_233_bool = var_230_bool; // 0x3cc Push
	if(var_233_bool == 0) goto Label_979; // 0x3cd JumpB
	lshGetAnimTimes(var_223_string, var_231_float, var_232_float); // 0x3ce Func
	lshPlayAnimation(var_231_float, var_232_float, var_224_bool); // 0x3d0 Func
	goto Label_983; // 0x3d2 Jump
	
Label_983:
	return 6; // 0x3d7 Return
	
Label_979:
	var_234_string = "Can't find lsh animation : "; // 0x3d3 PushS
	var_235_int = var_234_string + var_223_string; // 0x3d4 Add
	Trace(var_235_int); // 0x3d5 Func
}


func_714(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x2ca PushV
	GetPosition(var_14_cvector); // 0x2cb ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x2cd PushV
	var_16_cvector = var_14_cvector; // 0x2ce Mov
	func_704(var_15_bool, var_16_cvector); // 0x2cf NEW_2
	var_11_bool = var_15_bool; // 0x2d0 Mov
	return 2; // 0x2d2 Return
}


func_458(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x1ca PushV
	var_35_string = "player"; // 0x1cb PushS
	FindActor(var_34_object, var_35_string); // 0x1cc Func
	var_36_bool = var_34_object == 0; // 0x1ce Not
	if(var_36_bool == 0) goto Label_466; // 0x1cf JumpB
	var_32_bool = 0; // 0x1d0 MovB
	return 2; // 0x1d1 Return
	
Label_466:
	var_37_bool = 0; var_38_object = Obj(); // 0x1d2 PushV
	var_38_object = var_34_object; // 0x1d3 Mov
	func_714(var_38_object); // 0x1d4 NEW_2
	var_32_bool = var_37_bool; // 0x1d5 Mov
	return 2; // 0x1d7 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_182; // 0x56 JumpB
	var_200_bool = 0; // 0x57 PushV
	var_200_bool = 0; // 0x58 MovB
	var_201_bool = 0; var_202_object = Obj(); // 0x59 PushV
	var_202_object = var_1_object; // 0x5a MovT
	func_1072(var_202_object); // 0x5b NEW_2
	if(var_201_bool == 0) goto Label_100; // 0x5d JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x5e PushV
	var_210_object = var_1_object; // 0x5f MovT
	func_1084(var_210_object); // 0x60 NEW_2
	if(var_209_bool == 0) goto Label_100; // 0x62 JumpB
	var_200_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_200_bool == 0) goto Label_121; // 0x64 JumpB
	var_215_object = Obj(); var_216_object = Obj(); // 0x65 PushV
	var_215_object = var_1_object; // 0x66 MovT
	var_216_object = var_0_object; // 0x67 MovT
	func_1060(); // 0x68 NEW_2
	var_219_string = ""; // 0x6a PushV
	var_219_string = "Neutral"; // 0x6b MovS
	func_212(var_194_object, var_219_string); // 0x6c NEW_2
	var_236_int = 531057; // 0x6e PushI
	SetMessage(var_236_int); // 0x6f TObjFunc
	ClearReplies(); // 0x71 TObjFunc
	var_237_int = 531274; // 0x73 PushI
	var_238_int = 32589; // 0x74 PushI
	var_239_int = 32588; // 0x75 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x76 TObjFunc
	goto Label_182; // 0x78 Jump
	
Label_182:
	var_240_bool = 0; // 0xb6 PushV
	func_1145(var_240_bool); // 0xb7 NEW_2
	if(var_240_bool == 0) goto Label_197; // 0xb9 JumpB
	
Label_186:
	lshWaitForAnimEnd(); // 0xba Func
	var_241_string = var_3_string; // 0xbc PushT
	if(var_241_string == 0) goto Label_191; // 0xbd JumpB
	goto Label_196; // 0xbe Jump
	
Label_196:
	goto Label_211; // 0xc4 Jump
	
Label_211:
	return 0; // 0xd3 Return
	
Label_191:
	var_242_string = ""; // 0xbf PushV
	var_242_string = var_2_object; // 0xc0 MovT
	func_953(var_242_string); // 0xc1 NEW_2
	goto Label_186; // 0xc3 Jump
	
Label_197:
	var_253_string = "all"; // 0xc5 PushS
	var_254_string = "idle"; // 0xc6 PushS
	PlayAnimation(var_253_string, var_254_string); // 0xc7 Func
	
Label_201:
	WaitForAnimEnd(); // 0xc9 Func
	var_255_string = var_3_string; // 0xcb PushT
	if(var_255_string == 0) goto Label_206; // 0xcc JumpB
	goto Label_211; // 0xcd Jump
	
Label_206:
	var_256_string = "all"; // 0xce PushS
	var_257_string = "idle"; // 0xcf PushS
	PlayAnimation(var_256_string, var_257_string); // 0xd0 Func
	goto Label_201; // 0xd2 Jump
	
Label_121:
	var_258_bool = 0; // 0x79 PushV
	var_258_bool = 0; // 0x7a MovB
	var_259_bool = 0; var_260_object = Obj(); // 0x7b PushV
	var_260_object = var_1_object; // 0x7c MovT
	func_1108(var_260_object); // 0x7d NEW_2
	if(var_259_bool == 0) goto Label_134; // 0x7f JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x80 PushV
	var_266_object = var_1_object; // 0x81 MovT
	func_1096(var_266_object); // 0x82 NEW_2
	if(var_265_bool == 0) goto Label_134; // 0x84 JumpB
	var_258_bool = 1; // 0x85 MovB
	
Label_134:
	if(var_258_bool == 0) goto Label_160; // 0x86 JumpB
	var_271_object = Obj(); var_272_object = Obj(); // 0x87 PushV
	var_271_object = var_1_object; // 0x88 MovT
	var_272_object = var_0_object; // 0x89 MovT
	func_1066(); // 0x8a NEW_2
	var_275_string = ""; // 0x8c PushV
	var_275_string = "Neutral"; // 0x8d MovS
	func_212(var_194_object, var_275_string); // 0x8e NEW_2
	var_276_int = 531059; // 0x90 PushI
	SetMessage(var_276_int); // 0x91 TObjFunc
	ClearReplies(); // 0x93 TObjFunc
	var_277_int = 531060; // 0x95 PushI
	var_278_int = -1; // 0x96 PushI
	var_279_int = 32386; // 0x97 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x98 TObjFunc
	var_280_int = 531242; // 0x9a PushI
	var_281_int = -1; // 0x9b PushI
	var_282_int = 32557; // 0x9c PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x9d TObjFunc
	goto Label_182; // 0x9f Jump
	
Label_160:
	var_283_string = ""; // 0xa0 PushV
	var_283_string = "Untrust"; // 0xa1 MovS
	func_212(var_194_object, var_283_string); // 0xa2 NEW_2
	var_284_int = 531055; // 0xa4 PushI
	SetMessage(var_284_int); // 0xa5 TObjFunc
	ClearReplies(); // 0xa7 TObjFunc
	var_285_int = 531056; // 0xa9 PushI
	var_286_int = -1; // 0xaa PushI
	var_287_int = 32382; // 0xab PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0xac TObjFunc
	var_288_int = 531241; // 0xae PushI
	var_289_int = -1; // 0xaf PushI
	var_290_int = 32556; // 0xb0 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0xb1 TObjFunc
	goto Label_182; // 0xb3 Jump
}


func_723(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2d3 PushV
	IsLoaded(var_9_bool); // 0x2d4 Func
	var_7_bool = var_9_bool; // 0x2d6 Mov
	return 2; // 0x2d7 Return
}


func_212(var_2_object, var_219_string)
{
	var_220_bool = 0; // 0xd5 PushV
	func_1145(var_220_bool); // 0xd6 NEW_2
	var_221_bool = var_220_bool == 0; // 0xd8 Not
	if(var_221_bool == 0) goto Label_219; // 0xd9 JumpB
	return 0; // 0xda Return
	
Label_219:
	var_222_bool = var_219_string == var_2_object; // 0xdb Eq
	if(var_222_bool == 0) goto Label_222; // 0xdc JumpB
	return 0; // 0xdd Return
	
Label_222:
	var_223_string = ""; var_224_bool = 0; // 0xde PushV
	var_223_string = var_219_string; // 0xdf Mov
	var_225_string = ""; // 0xe0 PushS
	var_226_bool = var_219_string == var_225_string; // 0xe1 Eq
	if(var_226_bool == 0) goto Label_229; // 0xe2 JumpB
	var_224_bool = 0; // 0xe3 MovB
	goto Label_230; // 0xe4 Jump
	
Label_230:
	func_969(var_223_string, var_224_bool); // 0xe6 NEW_2
	var_2_object = var_219_string; // 0xe8 TMov
	return 0; // 0xe9 Return
	
Label_229:
	var_224_bool = 1; // 0xe5 MovB
}


func_1108(var_259_bool)
{
	var_261_int = 0; var_262_string = ""; // 0x455 PushV
	var_262_string = "b2q03"; // 0x456 MovS
	func_1022(var_261_int, var_262_string); // 0x457 NEW_2
	var_263_int = 1000; // 0x459 PushI
	var_264_bool = var_261_int == var_263_int; // 0x45a Eq
	if(var_264_bool == 0) goto Label_1118; // 0x45b JumpB
	var_259_bool = 1; // 0x45c MovB
	return 0; // 0x45d Return
	
Label_1118:
	var_259_bool = 0; // 0x45e MovB
	return 0; // 0x45f Return
}


func_728(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x2d8 PushV
	GetPosition(var_50_cvector); // 0x2d9 ObjFunc
	GetEyesHeight(var_49_float); // 0x2db ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2dd PushE
	var_58_float = var_58_float + var_49_float; // 0x2de Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2df PopE
	GetPosition(var_51_cvector); // 0x2e0 Func
	GetEyesHeight(var_49_float); // 0x2e2 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x2e4 PushE
	var_59_float = var_59_float + var_49_float; // 0x2e5 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x2e6 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x2e7 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x2e8 PushE
	var_60_float = 0; // 0x2e9 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x2ea PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x2eb Or
	var_62_float = sqrt(var_61_int); // 0x2ec Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x2ed Div2
	var_53_cvector = -var_52_cvector; // 0x2ee Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x2ef Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x2f0 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x2f1 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x2f2 Xor2
	func_1012(var_64_cvector, var_65_cvector); // 0x2f3 NEW_2
	var_72_int = 25; // 0x2f5 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x2f6 Mult
	var_74_int = var_63_float + var_73_float; // 0x2f7 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x2f8 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x2f9 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x2fa Add2
	IsOverrideActive(var_56_bool); // 0x2fb Func
	var_76_bool = var_56_bool; // 0x2fd Push
	if(var_76_bool == 0) goto Label_769; // 0x2fe JumpB
	var_37_bool = 0; // 0x2ff MovB
	return 18; // 0x300 Return
	
Label_769:
	StopWorld(); // 0x301 Func
	var_77_bool = 1; // 0x303 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x304 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x306 PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x307 PushE
	Rotate(var_78_float, var_79_float); // 0x308 Func
	var_80_bool = 0; // 0x30a PushV
	func_1145(var_80_bool); // 0x30b NEW_2
	if(var_80_bool == 0) goto Label_783; // 0x30d JumpB
	goto Label_791; // 0x30e Jump
	
Label_791:
	CameraWaitForPlayFinish(); // 0x317 Func
	ResumeWorld(); // 0x319 Func
	var_37_bool = 1; // 0x31b MovB
	return 18; // 0x31c Return
	
Label_783:
	var_81_string = "head"; // 0x30f PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x310 Func
	var_82_bool = var_57_bool; // 0x312 Push
	if(var_82_bool == 0) goto Label_791; // 0x313 JumpB
	var_83_string = "head"; // 0x314 PushS
	LookAsyncCamera(var_83_string); // 0x315 Func
}


func_473(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1d9 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1da PushE
	RotateAsync(var_84_float, var_85_float); // 0x1db Func
	return 0; // 0x1dd Return
}


func_984(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x3d8 PushV
	var_136_bool = 0; // 0x3d9 PushV
	func_1145(var_136_bool); // 0x3da NEW_2
	if(var_136_bool == 0) goto Label_997; // 0x3dc JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x3dd Func
	var_137_bool = var_135_bool; // 0x3df Push
	if(var_137_bool == 0) goto Label_997; // 0x3e0 JumpB
	lshPlaySpeech(var_133_string); // 0x3e1 Func
	var_132_bool = 1; // 0x3e3 MovB
	return 2; // 0x3e4 Return
	
Label_997:
	var_132_bool = 0; // 0x3e5 MovB
	return 2; // 0x3e6 Return
}


func_478(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x1de PushV
	var_20_string = "player"; // 0x1df PushS
	FindActor(var_18_object, var_20_string); // 0x1e0 Func
	var_21_bool = var_18_object == 0; // 0x1e2 Not
	if(var_21_bool == 0) goto Label_486; // 0x1e3 JumpB
	var_15_bool = 0; // 0x1e4 MovB
	return 4; // 0x1e5 Return
	
Label_486:
	var_22_float = 0; var_23_object = Obj(); // 0x1e6 PushV
	var_23_object = var_18_object; // 0x1e7 Mov
	func_696(var_23_object); // 0x1e8 NEW_2
	var_30_float = 90000.0; // 0x1ea PushF
	var_31_bool = var_22_float > var_30_float; // 0x1eb GT
	if(var_31_bool == 0) goto Label_495; // 0x1ec JumpB
	var_15_bool = 0; // 0x1ed MovB
	return 4; // 0x1ee Return
	
Label_495:
	CanSee(var_19_bool, var_18_object); // 0x1ef Func
	var_15_bool = var_19_bool; // 0x1f1 Mov
	return 4; // 0x1f2 Return
}


func_1120(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x460 PushV
	var_92_string = "branch"; // 0x461 PushS
	GetVariable(var_92_string, var_91_int); // 0x462 Func
	var_93_int = 0; // 0x464 PushI
	var_94_bool = var_91_int == var_93_int; // 0x465 Eq
	if(var_94_bool == 0) goto Label_1130; // 0x466 JumpB
	var_89_int = 1; // 0x467 MovI
	return 2; // 0x468 Return
	
Label_1130:
	var_95_int = 1; // 0x46a PushI
	var_96_bool = var_91_int == var_95_int; // 0x46b Eq
	if(var_96_bool == 0) goto Label_1135; // 0x46c JumpB
	var_89_int = 2; // 0x46d MovI
	return 2; // 0x46e Return
	
Label_1135:
	var_89_int = 3; // 0x46f MovI
	return 2; // 0x470 Return
}


func_999()
{
	var_10_bool = 0; // 0x3e7 PushV
	func_1145(var_10_bool); // 0x3e8 NEW_2
	if(var_10_bool == 0) goto Label_1005; // 0x3ea JumpB
	lshStopSpeech(); // 0x3eb Func
	
Label_1005:
	return 0; // 0x3ed Return
}


func_873(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x369 PushV
	var_116_string = "c"; // 0x36a MovS
	var_117_int = 0; // 0x36b MovI
	
Label_876:
	var_121_int = 1; // 0x36c PushI
	if(var_121_int == 0) goto Label_889; // 0x36d JumpB
	var_122_int = 1; // 0x36e PushI
	var_123_int = var_117_int + var_122_int; // 0x36f Add
	var_124_int = var_116_string + var_123_int; // 0x370 Add
	HasProperty(var_124_int, var_118_bool); // 0x371 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x373 Not
	if(var_125_bool == 0) goto Label_886; // 0x374 JumpB
	goto Label_889; // 0x375 Jump
	
Label_889:
	var_126_bool = var_117_int == 0; // 0x379 Not
	if(var_126_bool == 0) goto Label_893; // 0x37a JumpB
	var_109_bool = 0; // 0x37b MovB
	return 10; // 0x37c Return
	
Label_893:
	var_119_int = 0; // 0x37d MovI
	var_127_int = 1; // 0x37e PushI
	var_128_bool = var_117_int > var_127_int; // 0x37f GT
	if(var_128_bool == 0) goto Label_899; // 0x380 JumpB
	irand(var_119_int, var_117_int); // 0x381 Func
	
Label_899:
	var_129_int = 1; // 0x383 PushI
	var_130_int = var_119_int + var_129_int; // 0x384 Add
	var_131_int = var_116_string + var_130_int; // 0x385 Add
	GetProperty(var_131_int, var_120_string); // 0x386 ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x388 PushV
	var_133_string = var_120_string; // 0x389 Mov
	func_984(var_132_bool, var_133_string); // 0x38a NEW_2
	var_109_bool = var_132_bool; // 0x38b Mov
	return 10; // 0x38d Return
	
Label_886:
	var_138_int = 1; // 0x376 PushI
	var_117_int = var_117_int + var_138_int; // 0x377 Add2
	goto Label_876; // 0x378 Jump
}


func_620()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x26c PushV
	WaitForAnimEnd(); // 0x26d Func
	var_23_bool = 0; // 0x26f PushV
	func_723(var_23_bool); // 0x270 NEW_2
	var_24_bool = var_23_bool == 0; // 0x272 Not
	if(var_24_bool == 0) goto Label_629; // 0x273 JumpB
	return 12; // 0x274 Return
	
Label_629:
	var_25_int = 0; // 0x275 PushV
	func_1043(var_25_int); // 0x276 NEW_2
	var_17_int = var_25_int; // 0x277 Mov
	var_18_int = 0; // 0x279 MovI
	
Label_634:
	var_38_bool = 0; // 0x27a PushV
	var_38_bool = 0; // 0x27b MovB
	var_39_int = 5; // 0x27c PushI
	var_40_bool = var_18_int < var_39_int; // 0x27d LT
	if(var_40_bool == 0) goto Label_644; // 0x27e JumpB
	var_41_bool = 0; // 0x27f PushV
	func_723(var_41_bool); // 0x280 NEW_2
	if(var_41_bool == 0) goto Label_644; // 0x282 JumpB
	var_38_bool = 1; // 0x283 MovB
	
Label_644:
	if(var_38_bool == 0) goto Label_686; // 0x284 JumpB
	var_42_bool = var_17_int == 0; // 0x285 Not
	if(var_42_bool == 0) goto Label_654; // 0x286 JumpB
	var_43_int = 3; // 0x287 PushI
	Sleep(var_43_int, var_19_bool); // 0x288 Func
	var_44_bool = var_19_bool == 0; // 0x28a Not
	if(var_44_bool == 0) goto Label_653; // 0x28b JumpB
	goto Label_686; // 0x28c Jump
	
Label_686:
	ResetAAS(); // 0x2ae Func
	return 12; // 0x2b0 Return
	
Label_653:
	goto Label_675; // 0x28d Jump
	
Label_675:
	var_45_bool = 0; // 0x2a3 PushV
	func_689(var_45_bool); // 0x2a4 NEW_2
	var_46_bool = var_45_bool == 0; // 0x2a6 Not
	if(var_46_bool == 0) goto Label_681; // 0x2a7 JumpB
	goto Label_686; // 0x2a8 Jump
	
Label_681:
	ResetAAS(); // 0x2a9 Func
	var_47_int = 1; // 0x2ab PushI
	var_18_int = var_18_int + var_47_int; // 0x2ac Add2
	goto Label_634; // 0x2ad Jump
	
Label_654:
	irand(var_20_int, var_17_int); // 0x28e Func
	var_48_int = 5; // 0x290 PushI
	irand(var_21_int, var_48_int); // 0x291 Func
	var_49_int = 0; // 0x293 PushI
	var_50_bool = var_21_int != var_49_int; // 0x294 Neq
	if(var_50_bool == 0) goto Label_663; // 0x295 JumpB
	var_20_int = 0; // 0x296 MovI
	
Label_663:
	var_51_string = "all"; // 0x297 PushS
	var_52_string = ""; var_53_int = 0; // 0x298 PushV
	var_53_int = var_20_int; // 0x299 Mov
	func_1036(var_52_string, var_53_int); // 0x29a NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x29c Func
	WaitForAnimEnd(var_22_bool); // 0x29e Func
	var_54_bool = var_22_bool == 0; // 0x2a0 Not
	if(var_54_bool == 0) goto Label_675; // 0x2a1 JumpB
	goto Label_686; // 0x2a2 Jump
}


func_1006(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x3ee PushV
	self(var_102_object); // 0x3ef Func
	var_100_object = var_102_object; // 0x3f1 Mov
	return 2; // 0x3f2 Return
}


func_1137(var_86_int)
{
	var_86_int = 515550; // 0x471 MovI
	return 0; // 0x472 Return
}


func_1139(var_85_int)
{
	var_85_int = 502875; // 0x473 MovI
	return 0; // 0x474 Return
}


func_500()
{
	var_302_float = 0; var_303_float = 0; // 0x1f4 PushV
	var_304_int = 8; // 0x1f5 PushI
	var_305_int = 16; // 0x1f6 PushI
	rand(var_303_float, var_304_int, var_305_int); // 0x1f7 Func
	var_306_int = 10; // 0x1f9 PushI
	SetTimer(var_306_int, var_303_float); // 0x1fa Func
	return 2; // 0x1fc Return
}


func_1141(var_87_string)
{
	var_87_string = "ui/NPC_Petr.png"; // 0x475 MovS
	return 0; // 0x476 Return
}


func_1012(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x3f4 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x3f5 Or
	var_68_float = sqrt(var_69_int); // 0x3f6 Sqrt2
	var_70_float = 0.0; // 0x3f7 PushF
	var_71_bool = var_68_float < var_70_float; // 0x3f8 LT
	if(var_71_bool == 0) goto Label_1020; // 0x3f9 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x3fa MovV
	return 2; // 0x3fb Return
	
Label_1020:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x3fc Div2
	return 2; // 0x3fd Return
}


func_1143(var_88_string)
{
	var_88_string = "ui/NPC_Petr_b.png"; // 0x477 MovS
	return 0; // 0x478 Return
}


func_1145(var_80_bool)
{
	var_80_bool = 1; // 0x479 MovB
	return 0; // 0x47a Return
}


func_509()
{
	var_301_int = 10; // 0x1fd PushI
	KillTimer(var_301_int); // 0x1fe Func
	return 0; // 0x200 Return
}


func_1022(var_203_int, var_204_string)
{
	var_205_int = 0; var_206_int = 0; // 0x3fe PushV
	GetVariable(var_204_string, var_206_int); // 0x3ff Func
	var_203_int = var_206_int; // 0x401 Mov
	return 2; // 0x402 Return
}


