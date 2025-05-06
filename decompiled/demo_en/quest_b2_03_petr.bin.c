task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xeb PushI
	if(var_9_int == 0) goto Label_394; // 0xec JumpB
	func_997(); // 0xee NEW_2
	var_11_int = 32383; // 0xf0 PushI
	var_12_bool = var_7_cvector == var_11_int; // 0xf1 Eq
	if(var_12_bool == 0) goto Label_336; // 0xf2 JumpB
	var_13_bool = 0; // 0xf3 PushV
	var_13_bool = 0; // 0xf4 MovB
	var_14_bool = 0; var_15_object = Obj(); // 0xf5 PushV
	var_15_object = var_1_object; // 0xf6 MovT
	func_1070(var_15_object); // 0xf7 NEW_2
	if(var_14_bool == 0) goto Label_256; // 0xf9 JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0xfa PushV
	var_23_object = var_1_object; // 0xfb MovT
	func_1082(var_23_object); // 0xfc NEW_2
	if(var_22_bool == 0) goto Label_256; // 0xfe JumpB
	var_13_bool = 1; // 0xff MovB
	
Label_256:
	if(var_13_bool == 0) goto Label_277; // 0x100 JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x101 PushV
	var_28_object = var_1_object; // 0x102 MovT
	var_29_object = var_0_object; // 0x103 MovT
	func_1058(); // 0x104 NEW_2
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
	func_1106(var_55_object); // 0x119 NEW_2
	if(var_54_bool == 0) goto Label_290; // 0x11b JumpB
	var_60_bool = 0; var_61_object = Obj(); // 0x11c PushV
	var_61_object = var_1_object; // 0x11d MovT
	func_1094(var_61_object); // 0x11e NEW_2
	if(var_60_bool == 0) goto Label_290; // 0x120 JumpB
	var_53_bool = 1; // 0x121 MovB
	
Label_290:
	if(var_53_bool == 0) goto Label_316; // 0x122 JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0x123 PushV
	var_66_object = var_1_object; // 0x124 MovT
	var_67_object = var_0_object; // 0x125 MovT
	func_1064(); // 0x126 NEW_2
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
	func_1143(var_106_bool); // 0x180 NEW_2
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
	func_1004(var_13_object); // 0x1a1 NEW_2
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
	func_1004(var_8_object); // 0x1ae NEW_2
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
	func_1004(var_53_object); // 0x21a NEW_2
	var_52_object = var_53_object; // 0x21b Mov
	func_871(var_52_object); // 0x21d NEW_2
	
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
	func_951(var_14_string); // 0x24c NEW_2
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
	var_298_string = ""; // 0x261 PushV
	var_298_string = "Neutral"; // 0x262 MovS
	func_951(var_298_string); // 0x263 NEW_2
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
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1137(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1135(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1139(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1141(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1118(var_88_int); // 0x22 NEW_2
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
	func_1004(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_813(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_290_bool = var_36_bool == 0; // 0x3f Not
	if(var_290_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_291_object = Obj(); // 0x46 PushV
	var_291_object = var_27_object; // 0x47 Mov
	func_796(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1025(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x401 PushV
	GetGameTime(var_154_float); // 0x402 Func
	var_155_int = 1; // 0x404 PushI
	var_156_int = 0; // 0x405 PushV
	var_157_int = 24; // 0x406 PushI
	var_156_int = var_154_float / var_154_float; // 0x407 Div2
	var_152_int = var_155_int + var_156_int; // 0x408 Add2
	return 2; // 0x409 Return
}


func_1034(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x40a PushV
	var_34_string = "idle"; // 0x40b MovS
	var_35_int = var_32_int; // 0x40c Push
	if(var_35_int == 0) goto Label_1039; // 0x40d JumpB
	var_34_string = var_34_string + var_32_int; // 0x40e Add2
	
Label_1039:
	var_31_string = var_34_string; // 0x40f Mov
	return 2; // 0x410 Return
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


func_908(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x38c PushV
	var_151_string = "d"; // 0x38d PushS
	var_152_int = 0; // 0x38e PushV
	func_1025(var_152_int); // 0x38f NEW_2
	var_158_int = var_151_string + var_152_int; // 0x391 Add
	var_159_string = "m"; // 0x392 PushS
	var_146_string = var_158_int + var_159_string; // 0x393 Add2
	var_147_int = 0; // 0x394 MovI
	
Label_917:
	var_160_int = 1; // 0x395 PushI
	if(var_160_int == 0) goto Label_930; // 0x396 JumpB
	var_161_int = 1; // 0x397 PushI
	var_162_int = var_147_int + var_161_int; // 0x398 Add
	var_163_int = var_146_string + var_162_int; // 0x399 Add
	HasProperty(var_163_int, var_148_bool); // 0x39a ObjFunc
	var_164_bool = var_148_bool == 0; // 0x39c Not
	if(var_164_bool == 0) goto Label_927; // 0x39d JumpB
	goto Label_930; // 0x39e Jump
	
Label_930:
	var_165_bool = var_147_int == 0; // 0x3a2 Not
	if(var_165_bool == 0) goto Label_934; // 0x3a3 JumpB
	var_139_bool = 0; // 0x3a4 MovB
	return 10; // 0x3a5 Return
	
Label_934:
	var_149_int = 0; // 0x3a6 MovI
	var_166_int = 1; // 0x3a7 PushI
	var_167_bool = var_147_int > var_166_int; // 0x3a8 GT
	if(var_167_bool == 0) goto Label_940; // 0x3a9 JumpB
	irand(var_149_int, var_147_int); // 0x3aa Func
	
Label_940:
	var_168_int = 1; // 0x3ac PushI
	var_169_int = var_149_int + var_168_int; // 0x3ad Add
	var_170_int = var_146_string + var_169_int; // 0x3ae Add
	GetProperty(var_170_int, var_150_string); // 0x3af ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x3b1 PushV
	var_172_string = var_150_string; // 0x3b2 Mov
	func_982(var_171_bool, var_172_string); // 0x3b3 NEW_2
	var_139_bool = var_171_bool; // 0x3b4 Mov
	return 10; // 0x3b6 Return
	
Label_927:
	var_173_int = 1; // 0x39f PushI
	var_147_int = var_147_int + var_173_int; // 0x3a0 Add2
	goto Label_917; // 0x3a1 Jump
}


func_1041(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x411 PushV
	var_28_int = 0; // 0x412 MovI
	
Label_1043:
	var_30_string = "all"; // 0x413 PushS
	var_31_string = ""; var_32_int = 0; // 0x414 PushV
	var_32_int = var_28_int; // 0x415 Mov
	func_1034(var_31_string, var_32_int); // 0x416 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x418 Func
	var_36_bool = var_29_bool == 0; // 0x41a Not
	if(var_36_bool == 0) goto Label_1053; // 0x41b JumpB
	goto Label_1056; // 0x41c Jump
	
Label_1056:
	var_25_int = var_28_int; // 0x420 Mov
	return 4; // 0x421 Return
	
Label_1053:
	var_37_int = 1; // 0x41d PushI
	var_28_int = var_28_int + var_37_int; // 0x41e Add2
	goto Label_1043; // 0x41f Jump
}


func_796()
{
	var_292_bool = 0; var_293_bool = 0; // 0x31c PushV
	CameraSwitchToNormal(); // 0x31d Func
	var_294_bool = 0; // 0x31f PushV
	func_1143(var_294_bool); // 0x320 NEW_2
	if(var_294_bool == 0) goto Label_804; // 0x322 JumpB
	goto Label_812; // 0x323 Jump
	
Label_812:
	return 2; // 0x32c Return
	
Label_804:
	var_295_string = "head"; // 0x324 PushS
	HasAnimationTrack(var_293_bool, var_295_string); // 0x325 Func
	var_296_bool = var_293_bool; // 0x327 Push
	if(var_296_bool == 0) goto Label_812; // 0x328 JumpB
	var_297_string = "head"; // 0x329 PushS
	UnlookAsync(var_297_string); // 0x32a Func
}


func_1058()
{
	var_216_string = "oob2PetrKabak1"; // 0x423 PushS
	var_217_int = 1; // 0x424 PushI
	SetVariable(var_216_string, var_217_int); // 0x425 Func
	return 0; // 0x427 Return
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


func_1064()
{
	var_272_string = "oob2PetrKabak2"; // 0x429 PushS
	var_273_int = 1; // 0x42a PushI
	SetVariable(var_272_string, var_273_int); // 0x42b Func
	return 0; // 0x42d Return
}


func_813(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x32d PushV
	var_106_string = "voice_common"; // 0x32e PushS
	GetVariable(var_106_string, var_104_int); // 0x32f Func
	var_107_int = var_104_int; // 0x331 Push
	if(var_107_int == 0) goto Label_851; // 0x332 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x333 PushV
	var_109_object = var_98_object; // 0x334 Mov
	func_871(var_109_object); // 0x335 NEW_2
	var_138_bool = var_108_bool == 0; // 0x337 Not
	if(var_138_bool == 0) goto Label_833; // 0x338 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x339 PushV
	var_140_object = var_98_object; // 0x33a Mov
	func_908(var_140_object); // 0x33b NEW_2
	var_174_bool = var_139_bool == 0; // 0x33d Not
	if(var_174_bool == 0) goto Label_833; // 0x33e JumpB
	var_97_bool = 0; // 0x33f MovB
	return 4; // 0x340 Return
	
Label_833:
	var_175_int = 2; // 0x341 PushI
	irand(var_105_int, var_175_int); // 0x342 Func
	var_176_int = var_105_int; // 0x344 Push
	if(var_176_int == 0) goto Label_846; // 0x345 JumpB
	var_177_string = "voice_common"; // 0x346 PushS
	var_178_int = 1; // 0x347 PushI
	var_179_int = var_104_int + var_178_int; // 0x348 Add
	var_180_int = 3; // 0x349 PushI
	var_181_int = var_179_int / var_180_int; // 0x34a Mod
	SetVariable(var_177_string, var_181_int); // 0x34b Func
	goto Label_850; // 0x34d Jump
	
Label_850:
	goto Label_869; // 0x352 Jump
	
Label_869:
	var_97_bool = 1; // 0x365 MovB
	return 4; // 0x366 Return
	
Label_846:
	var_182_string = "voice_common"; // 0x34e PushS
	var_183_int = 0; // 0x34f PushI
	SetVariable(var_182_string, var_183_int); // 0x350 Func
	
Label_851:
	var_184_bool = 0; var_185_object = Obj(); // 0x353 PushV
	var_185_object = var_98_object; // 0x354 Mov
	func_908(var_185_object); // 0x355 NEW_2
	var_186_bool = var_184_bool == 0; // 0x357 Not
	if(var_186_bool == 0) goto Label_865; // 0x358 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x359 PushV
	var_188_object = var_98_object; // 0x35a Mov
	func_871(var_188_object); // 0x35b NEW_2
	var_189_bool = var_187_bool == 0; // 0x35d Not
	if(var_189_bool == 0) goto Label_865; // 0x35e JumpB
	var_97_bool = 0; // 0x35f MovB
	return 4; // 0x360 Return
	
Label_865:
	var_190_string = "voice_common"; // 0x361 PushS
	var_191_int = 1; // 0x362 PushI
	SetVariable(var_190_string, var_191_int); // 0x363 Func
}


func_1070(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x42f PushV
	var_203_string = "b2q03"; // 0x430 MovS
	func_1020(var_202_int, var_203_string); // 0x431 NEW_2
	var_206_int = 1; // 0x433 PushI
	var_207_bool = var_202_int == var_206_int; // 0x434 Eq
	if(var_207_bool == 0) goto Label_1080; // 0x435 JumpB
	var_200_bool = 1; // 0x436 MovB
	return 0; // 0x437 Return
	
Label_1080:
	var_200_bool = 0; // 0x438 MovB
	return 0; // 0x439 Return
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
	func_951(var_8_string); // 0x23d NEW_2
	func_500(); // 0x240 NEW_2
	return 0; // 0x242 Return
}


func_951(var_241_string)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0; // 0x3b7 PushV
	lshHasAnimation(var_245_bool, var_241_string); // 0x3b8 Func
	var_248_bool = var_245_bool; // 0x3ba Push
	if(var_248_bool == 0) goto Label_962; // 0x3bb JumpB
	lshGetAnimTimes(var_241_string, var_246_float, var_247_float); // 0x3bc Func
	var_249_bool = 0; // 0x3be PushB
	lshPlayAnimation(var_246_float, var_247_float, var_249_bool); // 0x3bf Func
	goto Label_966; // 0x3c1 Jump
	
Label_966:
	return 6; // 0x3c6 Return
	
Label_962:
	var_250_string = "Can't find lsh animation : "; // 0x3c2 PushS
	var_251_int = var_250_string + var_241_string; // 0x3c3 Add
	Trace(var_251_int); // 0x3c4 Func
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


func_1082(var_208_bool)
{
	var_210_int = 0; var_211_string = ""; // 0x43b PushV
	var_211_string = "oob2PetrKabak1"; // 0x43c MovS
	func_1020(var_210_int, var_211_string); // 0x43d NEW_2
	var_212_int = 0; // 0x43f PushI
	var_213_bool = var_210_int == var_212_int; // 0x440 Eq
	if(var_213_bool == 0) goto Label_1092; // 0x441 JumpB
	var_208_bool = 1; // 0x442 MovB
	return 0; // 0x443 Return
	
Label_1092:
	var_208_bool = 0; // 0x444 MovB
	return 0; // 0x445 Return
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


func_1094(var_264_bool)
{
	var_266_int = 0; var_267_string = ""; // 0x447 PushV
	var_267_string = "oob2PetrKabak2"; // 0x448 MovS
	func_1020(var_266_int, var_267_string); // 0x449 NEW_2
	var_268_int = 0; // 0x44b PushI
	var_269_bool = var_266_int == var_268_int; // 0x44c Eq
	if(var_269_bool == 0) goto Label_1104; // 0x44d JumpB
	var_264_bool = 1; // 0x44e MovB
	return 0; // 0x44f Return
	
Label_1104:
	var_264_bool = 0; // 0x450 MovB
	return 0; // 0x451 Return
}


func_967(var_222_string, var_223_bool)
{
	var_226_bool = 0; var_227_float = 0; var_228_float = 0; var_229_bool = 0; var_230_float = 0; var_231_float = 0; // 0x3c7 PushV
	lshHasAnimation(var_229_bool, var_222_string); // 0x3c8 Func
	var_232_bool = var_229_bool; // 0x3ca Push
	if(var_232_bool == 0) goto Label_977; // 0x3cb JumpB
	lshGetAnimTimes(var_222_string, var_230_float, var_231_float); // 0x3cc Func
	lshPlayAnimation(var_230_float, var_231_float, var_223_bool); // 0x3ce Func
	goto Label_981; // 0x3d0 Jump
	
Label_981:
	return 6; // 0x3d5 Return
	
Label_977:
	var_233_string = "Can't find lsh animation : "; // 0x3d1 PushS
	var_234_int = var_233_string + var_222_string; // 0x3d2 Add
	Trace(var_234_int); // 0x3d3 Func
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


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_182; // 0x56 JumpB
	var_199_bool = 0; // 0x57 PushV
	var_199_bool = 0; // 0x58 MovB
	var_200_bool = 0; var_201_object = Obj(); // 0x59 PushV
	var_201_object = var_1_object; // 0x5a MovT
	func_1070(var_201_object); // 0x5b NEW_2
	if(var_200_bool == 0) goto Label_100; // 0x5d JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x5e PushV
	var_209_object = var_1_object; // 0x5f MovT
	func_1082(var_209_object); // 0x60 NEW_2
	if(var_208_bool == 0) goto Label_100; // 0x62 JumpB
	var_199_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_199_bool == 0) goto Label_121; // 0x64 JumpB
	var_214_object = Obj(); var_215_object = Obj(); // 0x65 PushV
	var_214_object = var_1_object; // 0x66 MovT
	var_215_object = var_0_object; // 0x67 MovT
	func_1058(); // 0x68 NEW_2
	var_218_string = ""; // 0x6a PushV
	var_218_string = "Neutral"; // 0x6b MovS
	func_212(var_193_object, var_218_string); // 0x6c NEW_2
	var_235_int = 531057; // 0x6e PushI
	SetMessage(var_235_int); // 0x6f TObjFunc
	ClearReplies(); // 0x71 TObjFunc
	var_236_int = 531274; // 0x73 PushI
	var_237_int = 32589; // 0x74 PushI
	var_238_int = 32588; // 0x75 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x76 TObjFunc
	goto Label_182; // 0x78 Jump
	
Label_182:
	var_239_bool = 0; // 0xb6 PushV
	func_1143(var_239_bool); // 0xb7 NEW_2
	if(var_239_bool == 0) goto Label_197; // 0xb9 JumpB
	
Label_186:
	lshWaitForAnimEnd(); // 0xba Func
	var_240_string = var_3_string; // 0xbc PushT
	if(var_240_string == 0) goto Label_191; // 0xbd JumpB
	goto Label_196; // 0xbe Jump
	
Label_196:
	goto Label_211; // 0xc4 Jump
	
Label_211:
	return 0; // 0xd3 Return
	
Label_191:
	var_241_string = ""; // 0xbf PushV
	var_241_string = var_2_object; // 0xc0 MovT
	func_951(var_241_string); // 0xc1 NEW_2
	goto Label_186; // 0xc3 Jump
	
Label_197:
	var_252_string = "all"; // 0xc5 PushS
	var_253_string = "idle"; // 0xc6 PushS
	PlayAnimation(var_252_string, var_253_string); // 0xc7 Func
	
Label_201:
	WaitForAnimEnd(); // 0xc9 Func
	var_254_string = var_3_string; // 0xcb PushT
	if(var_254_string == 0) goto Label_206; // 0xcc JumpB
	goto Label_211; // 0xcd Jump
	
Label_206:
	var_255_string = "all"; // 0xce PushS
	var_256_string = "idle"; // 0xcf PushS
	PlayAnimation(var_255_string, var_256_string); // 0xd0 Func
	goto Label_201; // 0xd2 Jump
	
Label_121:
	var_257_bool = 0; // 0x79 PushV
	var_257_bool = 0; // 0x7a MovB
	var_258_bool = 0; var_259_object = Obj(); // 0x7b PushV
	var_259_object = var_1_object; // 0x7c MovT
	func_1106(var_259_object); // 0x7d NEW_2
	if(var_258_bool == 0) goto Label_134; // 0x7f JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x80 PushV
	var_265_object = var_1_object; // 0x81 MovT
	func_1094(var_265_object); // 0x82 NEW_2
	if(var_264_bool == 0) goto Label_134; // 0x84 JumpB
	var_257_bool = 1; // 0x85 MovB
	
Label_134:
	if(var_257_bool == 0) goto Label_160; // 0x86 JumpB
	var_270_object = Obj(); var_271_object = Obj(); // 0x87 PushV
	var_270_object = var_1_object; // 0x88 MovT
	var_271_object = var_0_object; // 0x89 MovT
	func_1064(); // 0x8a NEW_2
	var_274_string = ""; // 0x8c PushV
	var_274_string = "Neutral"; // 0x8d MovS
	func_212(var_193_object, var_274_string); // 0x8e NEW_2
	var_275_int = 531059; // 0x90 PushI
	SetMessage(var_275_int); // 0x91 TObjFunc
	ClearReplies(); // 0x93 TObjFunc
	var_276_int = 531060; // 0x95 PushI
	var_277_int = -1; // 0x96 PushI
	var_278_int = 32386; // 0x97 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x98 TObjFunc
	var_279_int = 531242; // 0x9a PushI
	var_280_int = -1; // 0x9b PushI
	var_281_int = 32557; // 0x9c PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x9d TObjFunc
	goto Label_182; // 0x9f Jump
	
Label_160:
	var_282_string = ""; // 0xa0 PushV
	var_282_string = "Untrust"; // 0xa1 MovS
	func_212(var_193_object, var_282_string); // 0xa2 NEW_2
	var_283_int = 531055; // 0xa4 PushI
	SetMessage(var_283_int); // 0xa5 TObjFunc
	ClearReplies(); // 0xa7 TObjFunc
	var_284_int = 531056; // 0xa9 PushI
	var_285_int = -1; // 0xaa PushI
	var_286_int = 32382; // 0xab PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0xac TObjFunc
	var_287_int = 531241; // 0xae PushI
	var_288_int = -1; // 0xaf PushI
	var_289_int = 32556; // 0xb0 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0xb1 TObjFunc
	goto Label_182; // 0xb3 Jump
}


func_1106(var_258_bool)
{
	var_260_int = 0; var_261_string = ""; // 0x453 PushV
	var_261_string = "b2q03"; // 0x454 MovS
	func_1020(var_260_int, var_261_string); // 0x455 NEW_2
	var_262_int = 1000; // 0x457 PushI
	var_263_bool = var_260_int == var_262_int; // 0x458 Eq
	if(var_263_bool == 0) goto Label_1116; // 0x459 JumpB
	var_258_bool = 1; // 0x45a MovB
	return 0; // 0x45b Return
	
Label_1116:
	var_258_bool = 0; // 0x45c MovB
	return 0; // 0x45d Return
}


func_723(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2d3 PushV
	IsLoaded(var_9_bool); // 0x2d4 Func
	var_7_bool = var_9_bool; // 0x2d6 Mov
	return 2; // 0x2d7 Return
}


func_212(var_2_object, var_218_string)
{
	var_219_bool = 0; // 0xd5 PushV
	func_1143(var_219_bool); // 0xd6 NEW_2
	var_220_bool = var_219_bool == 0; // 0xd8 Not
	if(var_220_bool == 0) goto Label_219; // 0xd9 JumpB
	return 0; // 0xda Return
	
Label_219:
	var_221_bool = var_218_string == var_2_object; // 0xdb Eq
	if(var_221_bool == 0) goto Label_222; // 0xdc JumpB
	return 0; // 0xdd Return
	
Label_222:
	var_222_string = ""; var_223_bool = 0; // 0xde PushV
	var_222_string = var_218_string; // 0xdf Mov
	var_224_string = ""; // 0xe0 PushS
	var_225_bool = var_218_string == var_224_string; // 0xe1 Eq
	if(var_225_bool == 0) goto Label_229; // 0xe2 JumpB
	var_223_bool = 0; // 0xe3 MovB
	goto Label_230; // 0xe4 Jump
	
Label_230:
	func_967(var_222_string, var_223_bool); // 0xe6 NEW_2
	var_2_object = var_218_string; // 0xe8 TMov
	return 0; // 0xe9 Return
	
Label_229:
	var_223_bool = 1; // 0xe5 MovB
}


func_982(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x3d6 PushV
	var_135_bool = 0; // 0x3d7 PushV
	func_1143(var_135_bool); // 0x3d8 NEW_2
	if(var_135_bool == 0) goto Label_995; // 0x3da JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x3db Func
	var_136_bool = var_134_bool; // 0x3dd Push
	if(var_136_bool == 0) goto Label_995; // 0x3de JumpB
	lshPlaySpeech(var_132_string); // 0x3df Func
	var_131_bool = 1; // 0x3e1 MovB
	return 2; // 0x3e2 Return
	
Label_995:
	var_131_bool = 0; // 0x3e3 MovB
	return 2; // 0x3e4 Return
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
	func_1010(var_64_cvector, var_65_cvector); // 0x2f3 NEW_2
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
	CameraTransit(var_55_cvector, var_53_cvector); // 0x303 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x305 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x306 PushE
	Rotate(var_77_float, var_78_float); // 0x307 Func
	var_79_bool = 0; // 0x309 PushV
	func_1143(var_79_bool); // 0x30a NEW_2
	if(var_79_bool == 0) goto Label_782; // 0x30c JumpB
	goto Label_790; // 0x30d Jump
	
Label_790:
	CameraWaitForPlayFinish(); // 0x316 Func
	ResumeWorld(); // 0x318 Func
	var_37_bool = 1; // 0x31a MovB
	return 18; // 0x31b Return
	
Label_782:
	var_80_string = "head"; // 0x30e PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x30f Func
	var_81_bool = var_57_bool; // 0x311 Push
	if(var_81_bool == 0) goto Label_790; // 0x312 JumpB
	var_82_string = "head"; // 0x313 PushS
	LookAsyncCamera(var_82_string); // 0x314 Func
}


func_473(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1d9 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1da PushE
	RotateAsync(var_84_float, var_85_float); // 0x1db Func
	return 0; // 0x1dd Return
}


func_1118(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x45e PushV
	var_91_string = "branch"; // 0x45f PushS
	GetVariable(var_91_string, var_90_int); // 0x460 Func
	var_92_int = 0; // 0x462 PushI
	var_93_bool = var_90_int == var_92_int; // 0x463 Eq
	if(var_93_bool == 0) goto Label_1128; // 0x464 JumpB
	var_88_int = 1; // 0x465 MovI
	return 2; // 0x466 Return
	
Label_1128:
	var_94_int = 1; // 0x468 PushI
	var_95_bool = var_90_int == var_94_int; // 0x469 Eq
	if(var_95_bool == 0) goto Label_1133; // 0x46a JumpB
	var_88_int = 2; // 0x46b MovI
	return 2; // 0x46c Return
	
Label_1133:
	var_88_int = 3; // 0x46d MovI
	return 2; // 0x46e Return
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


func_997()
{
	var_10_bool = 0; // 0x3e5 PushV
	func_1143(var_10_bool); // 0x3e6 NEW_2
	if(var_10_bool == 0) goto Label_1003; // 0x3e8 JumpB
	lshStopSpeech(); // 0x3e9 Func
	
Label_1003:
	return 0; // 0x3eb Return
}


func_871(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x367 PushV
	var_115_string = "c"; // 0x368 MovS
	var_116_int = 0; // 0x369 MovI
	
Label_874:
	var_120_int = 1; // 0x36a PushI
	if(var_120_int == 0) goto Label_887; // 0x36b JumpB
	var_121_int = 1; // 0x36c PushI
	var_122_int = var_116_int + var_121_int; // 0x36d Add
	var_123_int = var_115_string + var_122_int; // 0x36e Add
	HasProperty(var_123_int, var_117_bool); // 0x36f ObjFunc
	var_124_bool = var_117_bool == 0; // 0x371 Not
	if(var_124_bool == 0) goto Label_884; // 0x372 JumpB
	goto Label_887; // 0x373 Jump
	
Label_887:
	var_125_bool = var_116_int == 0; // 0x377 Not
	if(var_125_bool == 0) goto Label_891; // 0x378 JumpB
	var_108_bool = 0; // 0x379 MovB
	return 10; // 0x37a Return
	
Label_891:
	var_118_int = 0; // 0x37b MovI
	var_126_int = 1; // 0x37c PushI
	var_127_bool = var_116_int > var_126_int; // 0x37d GT
	if(var_127_bool == 0) goto Label_897; // 0x37e JumpB
	irand(var_118_int, var_116_int); // 0x37f Func
	
Label_897:
	var_128_int = 1; // 0x381 PushI
	var_129_int = var_118_int + var_128_int; // 0x382 Add
	var_130_int = var_115_string + var_129_int; // 0x383 Add
	GetProperty(var_130_int, var_119_string); // 0x384 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x386 PushV
	var_132_string = var_119_string; // 0x387 Mov
	func_982(var_131_bool, var_132_string); // 0x388 NEW_2
	var_108_bool = var_131_bool; // 0x389 Mov
	return 10; // 0x38b Return
	
Label_884:
	var_137_int = 1; // 0x374 PushI
	var_116_int = var_116_int + var_137_int; // 0x375 Add2
	goto Label_874; // 0x376 Jump
}


func_1004(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x3ec PushV
	self(var_101_object); // 0x3ed Func
	var_99_object = var_101_object; // 0x3ef Mov
	return 2; // 0x3f0 Return
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
	func_1041(var_25_int); // 0x276 NEW_2
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
	func_1034(var_52_string, var_53_int); // 0x29a NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x29c Func
	WaitForAnimEnd(var_22_bool); // 0x29e Func
	var_54_bool = var_22_bool == 0; // 0x2a0 Not
	if(var_54_bool == 0) goto Label_675; // 0x2a1 JumpB
	goto Label_686; // 0x2a2 Jump
}


func_1135(var_85_int)
{
	var_85_int = 515550; // 0x46f MovI
	return 0; // 0x470 Return
}


func_1137(var_84_int)
{
	var_84_int = 502875; // 0x471 MovI
	return 0; // 0x472 Return
}


func_1010(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x3f2 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x3f3 Or
	var_68_float = sqrt(var_69_int); // 0x3f4 Sqrt2
	var_70_float = 0.0; // 0x3f5 PushF
	var_71_bool = var_68_float < var_70_float; // 0x3f6 LT
	if(var_71_bool == 0) goto Label_1018; // 0x3f7 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x3f8 MovV
	return 2; // 0x3f9 Return
	
Label_1018:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x3fa Div2
	return 2; // 0x3fb Return
}


func_1139(var_86_string)
{
	var_86_string = "ui/NPC_Petr.png"; // 0x473 MovS
	return 0; // 0x474 Return
}


func_500()
{
	var_300_float = 0; var_301_float = 0; // 0x1f4 PushV
	var_302_int = 8; // 0x1f5 PushI
	var_303_int = 16; // 0x1f6 PushI
	rand(var_301_float, var_302_int, var_303_int); // 0x1f7 Func
	var_304_int = 10; // 0x1f9 PushI
	SetTimer(var_304_int, var_301_float); // 0x1fa Func
	return 2; // 0x1fc Return
}


func_1141(var_87_string)
{
	var_87_string = "ui/NPC_Petr_b.png"; // 0x475 MovS
	return 0; // 0x476 Return
}


func_1143(var_79_bool)
{
	var_79_bool = 1; // 0x477 MovB
	return 0; // 0x478 Return
}


func_1020(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x3fc PushV
	GetVariable(var_203_string, var_205_int); // 0x3fd Func
	var_202_int = var_205_int; // 0x3ff Mov
	return 2; // 0x400 Return
}


func_509()
{
	var_299_int = 10; // 0x1fd PushI
	KillTimer(var_299_int); // 0x1fe Func
	return 0; // 0x200 Return
}


