task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc0 PushI
	if(var_9_int == 0) goto Label_375; // 0xc1 JumpB
	func_978(); // 0xc3 NEW_2
	var_11_int = 25990; // 0xc5 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc6 Eq
	if(var_12_bool == 0) goto Label_210; // 0xc7 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc8 PushV
	var_13_object = var_1_object; // 0xc9 MovT
	var_14_object = var_0_object; // 0xca MovT
	func_1056(); // 0xcb NEW_2
	var_70_object = Obj(); var_71_object = Obj(); // 0xcd PushV
	var_70_object = var_1_object; // 0xce MovT
	var_71_object = var_0_object; // 0xcf MovT
	func_1087(); // 0xd0 NEW_2
	
Label_210:
	var_96_int = 25978; // 0xd2 PushI
	var_97_bool = var_7_cvector == var_96_int; // 0xd3 Eq
	if(var_97_bool == 0) goto Label_263; // 0xd4 JumpB
	var_98_bool = 0; var_99_object = Obj(); // 0xd5 PushV
	var_99_object = var_1_object; // 0xd6 MovT
	func_1103(var_99_object); // 0xd7 NEW_2
	if(var_98_bool == 0) goto Label_238; // 0xd9 JumpB
	var_106_string = ""; // 0xda PushV
	var_106_string = "Neutral"; // 0xdb MovS
	func_169(var_8_bool, var_106_string); // 0xdc NEW_2
	var_123_int = 524639; // 0xde PushI
	SetMessage(var_123_int); // 0xdf TObjFunc
	ClearReplies(); // 0xe1 TObjFunc
	var_124_int = 524640; // 0xe3 PushI
	var_125_int = 27569; // 0xe4 PushI
	var_126_int = 25979; // 0xe5 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xe6 TObjFunc
	var_127_int = 526284; // 0xe8 PushI
	var_128_int = 27569; // 0xe9 PushI
	var_129_int = 27562; // 0xea PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0xeb TObjFunc
	return 0; // 0xed Return
	
Label_238:
	var_130_string = ""; // 0xee PushV
	var_130_string = "Neutral"; // 0xef MovS
	func_169(var_8_bool, var_130_string); // 0xf0 NEW_2
	var_131_int = 524641; // 0xf2 PushI
	SetMessage(var_131_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_132_int = 524642; // 0xf7 PushI
	var_133_int = 27563; // 0xf8 PushI
	var_134_int = 25981; // 0xf9 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xfa TObjFunc
	var_135_int = 526287; // 0xfc PushI
	var_136_int = 27567; // 0xfd PushI
	var_137_int = 27565; // 0xfe PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0xff TObjFunc
	var_138_int = 526288; // 0x101 PushI
	var_139_int = -1; // 0x102 PushI
	var_140_int = 27566; // 0x103 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x104 TObjFunc
	return 0; // 0x106 Return
	
Label_263:
	var_141_int = 27567; // 0x107 PushI
	var_142_bool = var_7_cvector == var_141_int; // 0x108 Eq
	if(var_142_bool == 0) goto Label_281; // 0x109 JumpB
	var_143_string = ""; // 0x10a PushV
	var_143_string = "Neutral"; // 0x10b MovS
	func_169(var_8_bool, var_143_string); // 0x10c NEW_2
	var_144_int = 526289; // 0x10e PushI
	SetMessage(var_144_int); // 0x10f TObjFunc
	ClearReplies(); // 0x111 TObjFunc
	var_145_int = 526290; // 0x113 PushI
	var_146_int = -1; // 0x114 PushI
	var_147_int = 27568; // 0x115 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x116 TObjFunc
	return 0; // 0x118 Return
	
Label_281:
	var_148_int = 27563; // 0x119 PushI
	var_149_bool = var_7_cvector == var_148_int; // 0x11a Eq
	if(var_149_bool == 0) goto Label_304; // 0x11b JumpB
	var_150_string = ""; // 0x11c PushV
	var_150_string = "Suffering"; // 0x11d MovS
	func_169(var_8_bool, var_150_string); // 0x11e NEW_2
	var_151_int = 526285; // 0x120 PushI
	SetMessage(var_151_int); // 0x121 TObjFunc
	ClearReplies(); // 0x123 TObjFunc
	var_152_int = 526286; // 0x125 PushI
	var_153_int = -1; // 0x126 PushI
	var_154_int = 27564; // 0x127 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x128 TObjFunc
	var_155_int = 541700; // 0x12a PushI
	var_156_int = -1; // 0x12b PushI
	var_157_int = 43882; // 0x12c PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x12d TObjFunc
	return 0; // 0x12f Return
	
Label_304:
	var_158_int = 27569; // 0x130 PushI
	var_159_bool = var_7_cvector == var_158_int; // 0x131 Eq
	if(var_159_bool == 0) goto Label_327; // 0x132 JumpB
	var_160_string = ""; // 0x133 PushV
	var_160_string = "Penetrating"; // 0x134 MovS
	func_169(var_8_bool, var_160_string); // 0x135 NEW_2
	var_161_int = 526291; // 0x137 PushI
	SetMessage(var_161_int); // 0x138 TObjFunc
	ClearReplies(); // 0x13a TObjFunc
	var_162_int = 526292; // 0x13c PushI
	var_163_int = 25989; // 0x13d PushI
	var_164_int = 27570; // 0x13e PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x13f TObjFunc
	var_165_int = 526293; // 0x141 PushI
	var_166_int = 25989; // 0x142 PushI
	var_167_int = 27572; // 0x143 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x144 TObjFunc
	return 0; // 0x146 Return
	
Label_327:
	var_168_int = 25989; // 0x147 PushI
	var_169_bool = var_7_cvector == var_168_int; // 0x148 Eq
	if(var_169_bool == 0) goto Label_345; // 0x149 JumpB
	var_170_string = ""; // 0x14a PushV
	var_170_string = "Neutral"; // 0x14b MovS
	func_169(var_8_bool, var_170_string); // 0x14c NEW_2
	var_171_int = 524650; // 0x14e PushI
	SetMessage(var_171_int); // 0x14f TObjFunc
	ClearReplies(); // 0x151 TObjFunc
	var_172_int = 526296; // 0x153 PushI
	var_173_int = 27577; // 0x154 PushI
	var_174_int = 27576; // 0x155 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x156 TObjFunc
	return 0; // 0x158 Return
	
Label_345:
	var_175_int = 27577; // 0x159 PushI
	var_176_bool = var_7_cvector == var_175_int; // 0x15a Eq
	if(var_176_bool == 0) goto Label_363; // 0x15b JumpB
	var_177_string = ""; // 0x15c PushV
	var_177_string = "Suffering"; // 0x15d MovS
	func_169(var_8_bool, var_177_string); // 0x15e NEW_2
	var_178_int = 526297; // 0x160 PushI
	SetMessage(var_178_int); // 0x161 TObjFunc
	ClearReplies(); // 0x163 TObjFunc
	var_179_int = 524651; // 0x165 PushI
	var_180_int = -1; // 0x166 PushI
	var_181_int = 25990; // 0x167 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x168 TObjFunc
	return 0; // 0x16a Return
	
Label_363:
	var_3_string = 1; // 0x16b TMovB
	var_182_bool = 0; // 0x16c PushV
	func_1257(var_182_bool); // 0x16d NEW_2
	if(var_182_bool == 0) goto Label_371; // 0x16f JumpB
	lshStopAnimation(); // 0x170 Func
	goto Label_373; // 0x172 Jump
	
Label_373:
	return 0; // 0x175 Return
	
Label_371:
	StopAnimation(); // 0x173 Func
	
Label_375:
	return 0; // 0x177 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x184 PushV
	var_10_string = "cleanup"; // 0x185 PushS
	var_11_bool = var_7_string == var_10_string; // 0x186 Eq
	if(var_11_bool == 0) goto Label_403; // 0x187 JumpB
	var_1_object = 1; // 0x188 TMovB
	IsLoaded(var_9_bool); // 0x189 Func
	var_12_bool = var_9_bool == 0; // 0x18b Not
	if(var_12_bool == 0) goto Label_402; // 0x18c JumpB
	var_13_object = Obj(); // 0x18d PushV
	func_985(var_13_object); // 0x18e NEW_2
	RemoveActor(var_13_object); // 0x190 Func
	
Label_402:
	goto Label_407; // 0x192 Jump
	
Label_407:
	return 2; // 0x197 Return
	
Label_403:
	var_16_string = "restore"; // 0x193 PushS
	var_17_bool = var_7_string == var_16_string; // 0x194 Eq
	if(var_17_bool == 0) goto Label_407; // 0x195 JumpB
	var_1_object = 0; // 0x196 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x198 PushT
	if(var_7_object == 0) goto Label_417; // 0x199 JumpB
	var_8_object = Obj(); // 0x19a PushV
	func_985(var_8_object); // 0x19b NEW_2
	RemoveActor(var_8_object); // 0x19d Func
	Hold(); // 0x19f Func
	
Label_417:
	func_532(); // 0x1a2 NEW_2
	return 0; // 0x1a4 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_547(); // 0x1a6 NEW_2
	return 0; // 0x1a8 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x1ef PushI
	var_9_bool = var_7_int == var_8_int; // 0x1f0 Eq
	if(var_9_bool == 0) goto Label_531; // 0x1f1 JumpB
	func_490(); // 0x1f3 NEW_2
	var_11_bool = 0; // 0x1f5 PushV
	var_11_bool = 0; // 0x1f6 MovB
	var_12_bool = 0; // 0x1f7 PushV
	func_704(var_12_bool); // 0x1f8 NEW_2
	if(var_12_bool == 0) goto Label_512; // 0x1fa JumpB
	var_15_bool = 0; // 0x1fb PushV
	func_459(var_15_bool); // 0x1fc NEW_2
	if(var_15_bool == 0) goto Label_512; // 0x1fe JumpB
	var_11_bool = 1; // 0x1ff MovB
	
Label_512:
	if(var_11_bool == 0) goto Label_525; // 0x200 JumpB
	var_32_bool = 0; // 0x201 PushV
	func_439(var_32_bool); // 0x202 NEW_2
	if(var_32_bool == 0) goto Label_524; // 0x204 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x205 PushV
	var_53_object = Obj(); // 0x206 PushV
	func_985(var_53_object); // 0x207 NEW_2
	var_52_object = var_53_object; // 0x208 Mov
	func_852(var_52_object); // 0x20a NEW_2
	
Label_524:
	goto Label_531; // 0x20c Jump
	
Label_531:
	return 0; // 0x213 Return
	
Label_525:
	func_454(var_7_int); // 0x20e NEW_2
	func_481(); // 0x211 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x231 Push
	if(var_8_bool == 0) goto Label_567; // 0x232 JumpB
	func_481(); // 0x234 NEW_2
	goto Label_571; // 0x236 Jump
	
Label_571:
	return 0; // 0x23b Return
	
Label_567:
	var_14_string = ""; // 0x237 PushV
	var_14_string = "Neutral"; // 0x238 MovS
	func_932(var_14_string); // 0x239 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x23c PushV
	IsOverrideActive(var_9_bool); // 0x23d Func
	var_10_bool = var_9_bool == 0; // 0x23f Not
	if(var_10_bool == 0) goto Label_600; // 0x240 JumpB
	EventDisable(0); // 0x241 EventDisable
	func_672(); // 0x243 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x245 PushV
	var_12_object = var_7_object; // 0x246 Mov
	func_695(var_12_object); // 0x247 NEW_2
	EventEnable(0); // 0x249 EventEnable
	var_25_object = Obj(); // 0x24a PushV
	var_25_object = var_7_object; // 0x24b Mov
	func_376(var_25_object); // 0x24c NEW_2
	var_268_string = ""; // 0x24e PushV
	var_268_string = "Neutral"; // 0x24f MovS
	func_932(var_268_string); // 0x250 NEW_2
	func_490(); // 0x253 NEW_2
	func_481(); // 0x256 NEW_2
	
Label_600:
	return 2; // 0x258 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_425(var_6_bool); // 0x181 NEW_2
	return 0; // 0x183 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_709(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1251(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1249(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1253(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1255(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1232(var_88_int); // 0x22 NEW_2
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
	func_985(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_794(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_260_bool = var_36_bool == 0; // 0x3f Not
	if(var_260_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_261_object = Obj(); // 0x46 PushV
	var_261_object = var_27_object; // 0x47 Mov
	func_777(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1154(var_38_bool, var_39_object, var_40_int)
{
	var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x482 PushV
	var_47_object = Obj(); // 0x483 PushV
	func_1141(var_47_object); // 0x484 NEW_2
	var_44_object = var_47_object; // 0x485 Mov
	Find(var_40_int, var_45_object); // 0x487 ObjFunc
	var_52_bool = var_45_object == 0; // 0x489 Not
	if(var_52_bool == 0) goto Label_1169; // 0x48a JumpB
	var_53_string = "Can't find diary parent with id: "; // 0x48b PushS
	var_54_int = var_53_string + var_40_int; // 0x48c Add
	Trace(var_54_int); // 0x48d Func
	var_38_bool = 0; // 0x48f MovB
	return 6; // 0x490 Return
	
Label_1169:
	AddChild(var_39_object); // 0x491 ObjFunc
	var_55_int = 7; // 0x493 PushI
	SendWorldWndMessage(var_55_int); // 0x494 Func
	GetCategory(var_46_int); // 0x496 ObjFunc
	SetDiarySection(var_46_int); // 0x498 Func
	var_38_bool = 0; // 0x49a MovB
	return 6; // 0x49b Return
}


func_1032(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x408 PushV
	var_34_string = "idle"; // 0x409 MovS
	var_35_int = var_32_int; // 0x40a Push
	if(var_35_int == 0) goto Label_1037; // 0x40b JumpB
	var_34_string = var_34_string + var_32_int; // 0x40c Add2
	
Label_1037:
	var_31_string = var_34_string; // 0x40d Mov
	return 2; // 0x40e Return
}


func_777()
{
	var_262_bool = 0; var_263_bool = 0; // 0x309 PushV
	CameraSwitchToNormal(); // 0x30a Func
	var_264_bool = 0; // 0x30c PushV
	func_1257(var_264_bool); // 0x30d NEW_2
	if(var_264_bool == 0) goto Label_785; // 0x30f JumpB
	goto Label_793; // 0x310 Jump
	
Label_793:
	return 2; // 0x319 Return
	
Label_785:
	var_265_string = "head"; // 0x311 PushS
	HasAnimationTrack(var_263_bool, var_265_string); // 0x312 Func
	var_266_bool = var_263_bool; // 0x314 Push
	if(var_266_bool == 0) goto Label_793; // 0x315 JumpB
	var_267_string = "head"; // 0x316 PushS
	UnlookAsync(var_267_string); // 0x317 Func
}


func_1039(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x40f PushV
	var_28_int = 0; // 0x410 MovI
	
Label_1041:
	var_30_string = "all"; // 0x411 PushS
	var_31_string = ""; var_32_int = 0; // 0x412 PushV
	var_32_int = var_28_int; // 0x413 Mov
	func_1032(var_31_string, var_32_int); // 0x414 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x416 Func
	var_36_bool = var_29_bool == 0; // 0x418 Not
	if(var_36_bool == 0) goto Label_1051; // 0x419 JumpB
	goto Label_1054; // 0x41a Jump
	
Label_1054:
	var_25_int = var_28_int; // 0x41e Mov
	return 4; // 0x41f Return
	
Label_1051:
	var_37_int = 1; // 0x41b PushI
	var_28_int = var_28_int + var_37_int; // 0x41c Add2
	goto Label_1041; // 0x41d Jump
}


func_532()
{
	func_672(); // 0x215 NEW_2
	func_490(); // 0x218 NEW_2
	lshStopSpeech(); // 0x21a Func
	lshStopAnimation(); // 0x21c Func
	StopAsync(); // 0x21e Func
	Hold(); // 0x220 Func
	return 0; // 0x222 Return
}


func_794(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x31a PushV
	var_106_string = "voice_common"; // 0x31b PushS
	GetVariable(var_106_string, var_104_int); // 0x31c Func
	var_107_int = var_104_int; // 0x31e Push
	if(var_107_int == 0) goto Label_832; // 0x31f JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x320 PushV
	var_109_object = var_98_object; // 0x321 Mov
	func_852(var_109_object); // 0x322 NEW_2
	var_138_bool = var_108_bool == 0; // 0x324 Not
	if(var_138_bool == 0) goto Label_814; // 0x325 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x326 PushV
	var_140_object = var_98_object; // 0x327 Mov
	func_889(var_140_object); // 0x328 NEW_2
	var_174_bool = var_139_bool == 0; // 0x32a Not
	if(var_174_bool == 0) goto Label_814; // 0x32b JumpB
	var_97_bool = 0; // 0x32c MovB
	return 4; // 0x32d Return
	
Label_814:
	var_175_int = 2; // 0x32e PushI
	irand(var_105_int, var_175_int); // 0x32f Func
	var_176_int = var_105_int; // 0x331 Push
	if(var_176_int == 0) goto Label_827; // 0x332 JumpB
	var_177_string = "voice_common"; // 0x333 PushS
	var_178_int = 1; // 0x334 PushI
	var_179_int = var_104_int + var_178_int; // 0x335 Add
	var_180_int = 3; // 0x336 PushI
	var_181_int = var_179_int / var_180_int; // 0x337 Mod
	SetVariable(var_177_string, var_181_int); // 0x338 Func
	goto Label_831; // 0x33a Jump
	
Label_831:
	goto Label_850; // 0x33f Jump
	
Label_850:
	var_97_bool = 1; // 0x352 MovB
	return 4; // 0x353 Return
	
Label_827:
	var_182_string = "voice_common"; // 0x33b PushS
	var_183_int = 0; // 0x33c PushI
	SetVariable(var_182_string, var_183_int); // 0x33d Func
	
Label_832:
	var_184_bool = 0; var_185_object = Obj(); // 0x340 PushV
	var_185_object = var_98_object; // 0x341 Mov
	func_889(var_185_object); // 0x342 NEW_2
	var_186_bool = var_184_bool == 0; // 0x344 Not
	if(var_186_bool == 0) goto Label_846; // 0x345 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x346 PushV
	var_188_object = var_98_object; // 0x347 Mov
	func_852(var_188_object); // 0x348 NEW_2
	var_189_bool = var_187_bool == 0; // 0x34a Not
	if(var_189_bool == 0) goto Label_846; // 0x34b JumpB
	var_97_bool = 0; // 0x34c MovB
	return 4; // 0x34d Return
	
Label_846:
	var_190_string = "voice_common"; // 0x34e PushS
	var_191_int = 1; // 0x34f PushI
	SetVariable(var_190_string, var_191_int); // 0x350 Func
}


func_1182(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x49e PushV
	GetMainOutdoorScene(var_22_object); // 0x49f Func
	var_24_bool = var_22_object == 0; // 0x4a1 NullEq
	if(var_24_bool == 0) goto Label_1193; // 0x4a2 JumpB
	var_25_string = "Can't find main outdoor scene"; // 0x4a3 PushS
	Trace(var_25_string); // 0x4a4 Func
	var_23_object = 0; // 0x4a6 SetNull
	var_19_object = var_23_object; // 0x4a7 Mov
	return 4; // 0x4a8 Return
	
Label_1193:
	GetMap(var_23_object); // 0x4a9 ObjFunc
	var_19_object = var_23_object; // 0x4ab Mov
	return 4; // 0x4ac Return
}


func_670(var_45_bool)
{
	var_45_bool = 1; // 0x29e MovB
	return 0; // 0x29f Return
}


func_1056()
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x420 PushV
	var_17_string = "k1q01"; // 0x421 PushS
	var_18_int = 1; // 0x422 PushI
	SetVariable(var_17_string, var_18_int); // 0x423 Func
	var_19_object = Obj(); // 0x425 PushV
	func_1182(var_19_object); // 0x426 NEW_2
	var_16_object = var_19_object; // 0x427 Mov
	var_26_string = "k1q01KaterinaGotoAlexandr"; // 0x429 PushS
	var_27_string = "pt_map_alexandr"; // 0x42a PushS
	var_28_int = 1; // 0x42b PushI
	var_29_int = 524727; // 0x42c PushI
	var_30_float = 0; // 0x42d PushV
	func_1018(var_30_float); // 0x42e NEW_2
	AddMark(var_26_string, var_27_string, var_28_int, var_29_int, var_30_float); // 0x430 ObjFunc
	func_1115(); // 0x433 NEW_2
	func_1128(); // 0x436 NEW_2
	var_64_bool = 0; var_65_string = ""; var_66_string = ""; // 0x438 PushV
	var_65_string = "quest_k1_01"; // 0x439 MovS
	var_66_string = "remove_katerina"; // 0x43a MovS
	func_1006(var_64_bool, var_65_string, var_66_string); // 0x43b NEW_2
	return 2; // 0x43d Return
}


func_672()
{
	StopAnimation(); // 0x2a0 Func
	StopGroup0(); // 0x2a2 Func
	return 0; // 0x2a4 Return
}


func_547()
{
	StopGroup0(); // 0x223 Func
	func_490(); // 0x226 NEW_2
	var_8_string = ""; // 0x228 PushV
	var_8_string = "Neutral"; // 0x229 MovS
	func_932(var_8_string); // 0x22a NEW_2
	func_481(); // 0x22d NEW_2
	return 0; // 0x22f Return
}


func_932(var_233_string)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0; // 0x3a4 PushV
	lshHasAnimation(var_237_bool, var_233_string); // 0x3a5 Func
	var_240_bool = var_237_bool; // 0x3a7 Push
	if(var_240_bool == 0) goto Label_943; // 0x3a8 JumpB
	lshGetAnimTimes(var_233_string, var_238_float, var_239_float); // 0x3a9 Func
	var_241_bool = 0; // 0x3ab PushB
	lshPlayAnimation(var_238_float, var_239_float, var_241_bool); // 0x3ac Func
	goto Label_947; // 0x3ae Jump
	
Label_947:
	return 6; // 0x3b3 Return
	
Label_943:
	var_242_string = "Can't find lsh animation : "; // 0x3af PushS
	var_243_int = var_242_string + var_233_string; // 0x3b0 Add
	Trace(var_243_int); // 0x3b1 Func
}


func_677(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x2a5 PushV
	GetPosition(var_27_cvector); // 0x2a6 Func
	GetPosition(var_28_cvector); // 0x2a8 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2aa Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2ab Or2
	return 6; // 0x2ac Return
}


func_169(var_2_object, var_207_string)
{
	var_208_bool = 0; // 0xaa PushV
	func_1257(var_208_bool); // 0xab NEW_2
	var_209_bool = var_208_bool == 0; // 0xad Not
	if(var_209_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_210_bool = var_207_string == var_2_object; // 0xb0 Eq
	if(var_210_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_211_string = ""; var_212_bool = 0; // 0xb3 PushV
	var_211_string = var_207_string; // 0xb4 Mov
	var_213_string = ""; // 0xb5 PushS
	var_214_bool = var_207_string == var_213_string; // 0xb6 Eq
	if(var_214_bool == 0) goto Label_186; // 0xb7 JumpB
	var_212_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_948(var_211_string, var_212_bool); // 0xbb NEW_2
	var_2_object = var_207_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_212_bool = 1; // 0xba MovB
}


func_425(var_0_object)
{
	var_7_bool = 0; // 0x1a9 PushV
	func_704(var_7_bool); // 0x1aa NEW_2
	var_10_bool = var_7_bool == 0; // 0x1ac Not
	if(var_10_bool == 0) goto Label_432; // 0x1ad JumpB
	Hold(); // 0x1ae Func
	
Label_432:
	GetDirection(var_0_object); // 0x1b0 Func
	
Label_434:
	func_601(); // 0x1b3 NEW_2
	goto Label_434; // 0x1b5 Jump
}


func_685(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x2ad PushV
	GetPosition(var_20_cvector); // 0x2ae Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x2b0 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x2b1 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x2b2 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x2b3 Func
	var_15_bool = var_22_bool; // 0x2b5 Mov
	return 6; // 0x2b6 Return
}


func_1199(var_72_object, var_73_string, var_74_float)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0; // 0x4af PushV
	GetMainOutdoorScene(var_82_object); // 0x4b0 Func
	var_84_bool = var_82_object == 0; // 0x4b2 NullEq
	if(var_84_bool == 0) goto Label_1208; // 0x4b3 JumpB
	var_85_string = "Can't find main outdoor scene"; // 0x4b4 PushS
	Trace(var_85_string); // 0x4b5 Func
	return 8; // 0x4b7 Return
	
Label_1208:
	GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector); // 0x4b8 ObjFunc
	var_86_bool = var_83_bool == 0; // 0x4ba Not
	if(var_86_bool == 0) goto Label_1218; // 0x4bb JumpB
	var_87_string = "Warning: outdoor scene locator "; // 0x4bc PushS
	var_88_int = var_87_string + var_73_string; // 0x4bd Add
	var_89_string = " doesnt exist"; // 0x4be PushS
	var_90_int = var_88_int + var_89_string; // 0x4bf Add
	Trace(var_90_int); // 0x4c0 Func
	
Label_1218:
	GetMap(var_72_object); // 0x4c2 ObjFunc
	var_91_bool = var_72_object == 0; // 0x4c4 NullEq
	if(var_91_bool == 0) goto Label_1226; // 0x4c5 JumpB
	var_92_string = "Can't find map"; // 0x4c6 PushS
	Trace(var_92_string); // 0x4c7 Func
	return 8; // 0x4c9 Return
	
Label_1226:
	var_93_float = GetByIndex(var_80_cvector, 0); // 0x4ca PushE
	var_94_float = GetByIndex(var_80_cvector, 2); // 0x4cb PushE
	SetMapParams(var_93_float, var_94_float, var_74_float); // 0x4cc ObjFunc
	return 8; // 0x4ce Return
}


func_948(var_211_string, var_212_bool)
{
	var_215_bool = 0; var_216_float = 0; var_217_float = 0; var_218_bool = 0; var_219_float = 0; var_220_float = 0; // 0x3b4 PushV
	lshHasAnimation(var_218_bool, var_211_string); // 0x3b5 Func
	var_221_bool = var_218_bool; // 0x3b7 Push
	if(var_221_bool == 0) goto Label_958; // 0x3b8 JumpB
	lshGetAnimTimes(var_211_string, var_219_float, var_220_float); // 0x3b9 Func
	lshPlayAnimation(var_219_float, var_220_float, var_212_bool); // 0x3bb Func
	goto Label_962; // 0x3bd Jump
	
Label_962:
	return 6; // 0x3c2 Return
	
Label_958:
	var_222_string = "Can't find lsh animation : "; // 0x3be PushS
	var_223_int = var_222_string + var_211_string; // 0x3bf Add
	Trace(var_223_int); // 0x3c0 Func
}


func_695(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x2b7 PushV
	GetPosition(var_14_cvector); // 0x2b8 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x2ba PushV
	var_16_cvector = var_14_cvector; // 0x2bb Mov
	func_685(var_15_bool, var_16_cvector); // 0x2bc NEW_2
	var_11_bool = var_15_bool; // 0x2bd Mov
	return 2; // 0x2bf Return
}


func_439(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x1b7 PushV
	var_35_string = "player"; // 0x1b8 PushS
	FindActor(var_34_object, var_35_string); // 0x1b9 Func
	var_36_bool = var_34_object == 0; // 0x1bb Not
	if(var_36_bool == 0) goto Label_447; // 0x1bc JumpB
	var_32_bool = 0; // 0x1bd MovB
	return 2; // 0x1be Return
	
Label_447:
	var_37_bool = 0; var_38_object = Obj(); // 0x1bf PushV
	var_38_object = var_34_object; // 0x1c0 Mov
	func_695(var_38_object); // 0x1c1 NEW_2
	var_32_bool = var_37_bool; // 0x1c2 Mov
	return 2; // 0x1c4 Return
}


func_1087()
{
	var_72_object = Obj(); var_73_string = ""; var_74_float = 0; // 0x440 PushV
	var_75_object = Obj(); // 0x441 PushV
	func_1182(var_75_object); // 0x442 NEW_2
	var_72_object = var_75_object; // 0x443 Mov
	var_73_string = "pt_map_alexandr"; // 0x445 MovS
	var_74_float = 2; // 0x446 MovI
	func_1199(var_72_object, var_73_string, var_74_float); // 0x447 NEW_2
	var_95_object = Obj(); // 0x449 PushV
	func_1182(var_95_object); // 0x44a NEW_2
	ShowMap(var_95_object); // 0x44c ObjFunc
	return 0; // 0x44e Return
}


func_704(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2c0 PushV
	IsLoaded(var_9_bool); // 0x2c1 Func
	var_7_bool = var_9_bool; // 0x2c3 Mov
	return 2; // 0x2c4 Return
}


func_963(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x3c3 PushV
	var_135_bool = 0; // 0x3c4 PushV
	func_1257(var_135_bool); // 0x3c5 NEW_2
	if(var_135_bool == 0) goto Label_976; // 0x3c7 JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x3c8 Func
	var_136_bool = var_134_bool; // 0x3ca Push
	if(var_136_bool == 0) goto Label_976; // 0x3cb JumpB
	lshPlaySpeech(var_132_string); // 0x3cc Func
	var_131_bool = 1; // 0x3ce MovB
	return 2; // 0x3cf Return
	
Label_976:
	var_131_bool = 0; // 0x3d0 MovB
	return 2; // 0x3d1 Return
}


func_709(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x2c5 PushV
	GetPosition(var_50_cvector); // 0x2c6 ObjFunc
	GetEyesHeight(var_49_float); // 0x2c8 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2ca PushE
	var_58_float = var_58_float + var_49_float; // 0x2cb Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2cc PopE
	GetPosition(var_51_cvector); // 0x2cd Func
	GetEyesHeight(var_49_float); // 0x2cf Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x2d1 PushE
	var_59_float = var_59_float + var_49_float; // 0x2d2 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x2d3 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x2d4 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x2d5 PushE
	var_60_float = 0; // 0x2d6 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x2d7 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x2d8 Or
	var_62_float = sqrt(var_61_int); // 0x2d9 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x2da Div2
	var_53_cvector = -var_52_cvector; // 0x2db Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x2dc Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x2dd PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x2de PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x2df Xor2
	func_991(var_64_cvector, var_65_cvector); // 0x2e0 NEW_2
	var_72_int = 25; // 0x2e2 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x2e3 Mult
	var_74_int = var_63_float + var_73_float; // 0x2e4 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x2e5 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x2e6 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x2e7 Add2
	IsOverrideActive(var_56_bool); // 0x2e8 Func
	var_76_bool = var_56_bool; // 0x2ea Push
	if(var_76_bool == 0) goto Label_750; // 0x2eb JumpB
	var_37_bool = 0; // 0x2ec MovB
	return 18; // 0x2ed Return
	
Label_750:
	StopWorld(); // 0x2ee Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x2f0 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x2f2 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x2f3 PushE
	Rotate(var_77_float, var_78_float); // 0x2f4 Func
	var_79_bool = 0; // 0x2f6 PushV
	func_1257(var_79_bool); // 0x2f7 NEW_2
	if(var_79_bool == 0) goto Label_763; // 0x2f9 JumpB
	goto Label_771; // 0x2fa Jump
	
Label_771:
	CameraWaitForPlayFinish(); // 0x303 Func
	ResumeWorld(); // 0x305 Func
	var_37_bool = 1; // 0x307 MovB
	return 18; // 0x308 Return
	
Label_763:
	var_80_string = "head"; // 0x2fb PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x2fc Func
	var_81_bool = var_57_bool; // 0x2fe Push
	if(var_81_bool == 0) goto Label_771; // 0x2ff JumpB
	var_82_string = "head"; // 0x300 PushS
	LookAsyncCamera(var_82_string); // 0x301 Func
}


func_454(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1c6 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1c7 PushE
	RotateAsync(var_84_float, var_85_float); // 0x1c8 Func
	return 0; // 0x1ca Return
}


func_459(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x1cb PushV
	var_20_string = "player"; // 0x1cc PushS
	FindActor(var_18_object, var_20_string); // 0x1cd Func
	var_21_bool = var_18_object == 0; // 0x1cf Not
	if(var_21_bool == 0) goto Label_467; // 0x1d0 JumpB
	var_15_bool = 0; // 0x1d1 MovB
	return 4; // 0x1d2 Return
	
Label_467:
	var_22_float = 0; var_23_object = Obj(); // 0x1d3 PushV
	var_23_object = var_18_object; // 0x1d4 Mov
	func_677(var_23_object); // 0x1d5 NEW_2
	var_30_float = 90000.0; // 0x1d7 PushF
	var_31_bool = var_22_float > var_30_float; // 0x1d8 GT
	if(var_31_bool == 0) goto Label_476; // 0x1d9 JumpB
	var_15_bool = 0; // 0x1da MovB
	return 4; // 0x1db Return
	
Label_476:
	CanSee(var_19_bool, var_18_object); // 0x1dc Func
	var_15_bool = var_19_bool; // 0x1de Mov
	return 4; // 0x1df Return
}


func_1103(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x450 PushV
	var_202_string = "k1q01"; // 0x451 MovS
	func_1001(var_201_int, var_202_string); // 0x452 NEW_2
	var_205_int = 0; // 0x454 PushI
	var_206_bool = var_201_int == var_205_int; // 0x455 Eq
	if(var_206_bool == 0) goto Label_1113; // 0x456 JumpB
	var_199_bool = 1; // 0x457 MovB
	return 0; // 0x458 Return
	
Label_1113:
	var_199_bool = 0; // 0x459 MovB
	return 0; // 0x45a Return
}


func_1232(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x4d0 PushV
	var_91_string = "branch"; // 0x4d1 PushS
	GetVariable(var_91_string, var_90_int); // 0x4d2 Func
	var_92_int = 0; // 0x4d4 PushI
	var_93_bool = var_90_int == var_92_int; // 0x4d5 Eq
	if(var_93_bool == 0) goto Label_1242; // 0x4d6 JumpB
	var_88_int = 1; // 0x4d7 MovI
	return 2; // 0x4d8 Return
	
Label_1242:
	var_94_int = 1; // 0x4da PushI
	var_95_bool = var_90_int == var_94_int; // 0x4db Eq
	if(var_95_bool == 0) goto Label_1247; // 0x4dc JumpB
	var_88_int = 2; // 0x4dd MovI
	return 2; // 0x4de Return
	
Label_1247:
	var_88_int = 3; // 0x4df MovI
	return 2; // 0x4e0 Return
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
	func_1103(var_200_object); // 0x59 NEW_2
	if(var_199_bool == 0) goto Label_112; // 0x5b JumpB
	var_207_string = ""; // 0x5c PushV
	var_207_string = "Neutral"; // 0x5d MovS
	func_169(var_193_object, var_207_string); // 0x5e NEW_2
	var_224_int = 524639; // 0x60 PushI
	SetMessage(var_224_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_225_int = 524640; // 0x65 PushI
	var_226_int = 27569; // 0x66 PushI
	var_227_int = 25979; // 0x67 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x68 TObjFunc
	var_228_int = 526284; // 0x6a PushI
	var_229_int = 27569; // 0x6b PushI
	var_230_int = 27562; // 0x6c PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x6d TObjFunc
	goto Label_139; // 0x6f Jump
	
Label_139:
	var_231_bool = 0; // 0x8b PushV
	func_1257(var_231_bool); // 0x8c NEW_2
	if(var_231_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_232_string = var_3_string; // 0x91 PushT
	if(var_232_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_233_string = ""; // 0x94 PushV
	var_233_string = var_2_object; // 0x95 MovT
	func_932(var_233_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_244_string = "all"; // 0x9a PushS
	var_245_string = "idle"; // 0x9b PushS
	PlayAnimation(var_244_string, var_245_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_246_string = var_3_string; // 0xa0 PushT
	if(var_246_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_247_string = "all"; // 0xa3 PushS
	var_248_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_247_string, var_248_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_112:
	var_249_string = ""; // 0x70 PushV
	var_249_string = "Neutral"; // 0x71 MovS
	func_169(var_193_object, var_249_string); // 0x72 NEW_2
	var_250_int = 524641; // 0x74 PushI
	SetMessage(var_250_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_251_int = 524642; // 0x79 PushI
	var_252_int = 27563; // 0x7a PushI
	var_253_int = 25981; // 0x7b PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x7c TObjFunc
	var_254_int = 526287; // 0x7e PushI
	var_255_int = 27567; // 0x7f PushI
	var_256_int = 27565; // 0x80 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x81 TObjFunc
	var_257_int = 526288; // 0x83 PushI
	var_258_int = -1; // 0x84 PushI
	var_259_int = 27566; // 0x85 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_978()
{
	var_10_bool = 0; // 0x3d2 PushV
	func_1257(var_10_bool); // 0x3d3 NEW_2
	if(var_10_bool == 0) goto Label_984; // 0x3d5 JumpB
	lshStopSpeech(); // 0x3d6 Func
	
Label_984:
	return 0; // 0x3d8 Return
}


func_852(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x354 PushV
	var_115_string = "c"; // 0x355 MovS
	var_116_int = 0; // 0x356 MovI
	
Label_855:
	var_120_int = 1; // 0x357 PushI
	if(var_120_int == 0) goto Label_868; // 0x358 JumpB
	var_121_int = 1; // 0x359 PushI
	var_122_int = var_116_int + var_121_int; // 0x35a Add
	var_123_int = var_115_string + var_122_int; // 0x35b Add
	HasProperty(var_123_int, var_117_bool); // 0x35c ObjFunc
	var_124_bool = var_117_bool == 0; // 0x35e Not
	if(var_124_bool == 0) goto Label_865; // 0x35f JumpB
	goto Label_868; // 0x360 Jump
	
Label_868:
	var_125_bool = var_116_int == 0; // 0x364 Not
	if(var_125_bool == 0) goto Label_872; // 0x365 JumpB
	var_108_bool = 0; // 0x366 MovB
	return 10; // 0x367 Return
	
Label_872:
	var_118_int = 0; // 0x368 MovI
	var_126_int = 1; // 0x369 PushI
	var_127_bool = var_116_int > var_126_int; // 0x36a GT
	if(var_127_bool == 0) goto Label_878; // 0x36b JumpB
	irand(var_118_int, var_116_int); // 0x36c Func
	
Label_878:
	var_128_int = 1; // 0x36e PushI
	var_129_int = var_118_int + var_128_int; // 0x36f Add
	var_130_int = var_115_string + var_129_int; // 0x370 Add
	GetProperty(var_130_int, var_119_string); // 0x371 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x373 PushV
	var_132_string = var_119_string; // 0x374 Mov
	func_963(var_131_bool, var_132_string); // 0x375 NEW_2
	var_108_bool = var_131_bool; // 0x376 Mov
	return 10; // 0x378 Return
	
Label_865:
	var_137_int = 1; // 0x361 PushI
	var_116_int = var_116_int + var_137_int; // 0x362 Add2
	goto Label_855; // 0x363 Jump
}


func_985(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x3d9 PushV
	self(var_101_object); // 0x3da Func
	var_99_object = var_101_object; // 0x3dc Mov
	return 2; // 0x3dd Return
}


func_601()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x259 PushV
	WaitForAnimEnd(); // 0x25a Func
	var_23_bool = 0; // 0x25c PushV
	func_704(var_23_bool); // 0x25d NEW_2
	var_24_bool = var_23_bool == 0; // 0x25f Not
	if(var_24_bool == 0) goto Label_610; // 0x260 JumpB
	return 12; // 0x261 Return
	
Label_610:
	var_25_int = 0; // 0x262 PushV
	func_1039(var_25_int); // 0x263 NEW_2
	var_17_int = var_25_int; // 0x264 Mov
	var_18_int = 0; // 0x266 MovI
	
Label_615:
	var_38_bool = 0; // 0x267 PushV
	var_38_bool = 0; // 0x268 MovB
	var_39_int = 5; // 0x269 PushI
	var_40_bool = var_18_int < var_39_int; // 0x26a LT
	if(var_40_bool == 0) goto Label_625; // 0x26b JumpB
	var_41_bool = 0; // 0x26c PushV
	func_704(var_41_bool); // 0x26d NEW_2
	if(var_41_bool == 0) goto Label_625; // 0x26f JumpB
	var_38_bool = 1; // 0x270 MovB
	
Label_625:
	if(var_38_bool == 0) goto Label_667; // 0x271 JumpB
	var_42_bool = var_17_int == 0; // 0x272 Not
	if(var_42_bool == 0) goto Label_635; // 0x273 JumpB
	var_43_int = 3; // 0x274 PushI
	Sleep(var_43_int, var_19_bool); // 0x275 Func
	var_44_bool = var_19_bool == 0; // 0x277 Not
	if(var_44_bool == 0) goto Label_634; // 0x278 JumpB
	goto Label_667; // 0x279 Jump
	
Label_667:
	ResetAAS(); // 0x29b Func
	return 12; // 0x29d Return
	
Label_634:
	goto Label_656; // 0x27a Jump
	
Label_656:
	var_45_bool = 0; // 0x290 PushV
	func_670(var_45_bool); // 0x291 NEW_2
	var_46_bool = var_45_bool == 0; // 0x293 Not
	if(var_46_bool == 0) goto Label_662; // 0x294 JumpB
	goto Label_667; // 0x295 Jump
	
Label_662:
	ResetAAS(); // 0x296 Func
	var_47_int = 1; // 0x298 PushI
	var_18_int = var_18_int + var_47_int; // 0x299 Add2
	goto Label_615; // 0x29a Jump
	
Label_635:
	irand(var_20_int, var_17_int); // 0x27b Func
	var_48_int = 5; // 0x27d PushI
	irand(var_21_int, var_48_int); // 0x27e Func
	var_49_int = 0; // 0x280 PushI
	var_50_bool = var_21_int != var_49_int; // 0x281 Neq
	if(var_50_bool == 0) goto Label_644; // 0x282 JumpB
	var_20_int = 0; // 0x283 MovI
	
Label_644:
	var_51_string = "all"; // 0x284 PushS
	var_52_string = ""; var_53_int = 0; // 0x285 PushV
	var_53_int = var_20_int; // 0x286 Mov
	func_1032(var_52_string, var_53_int); // 0x287 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x289 Func
	WaitForAnimEnd(var_22_bool); // 0x28b Func
	var_54_bool = var_22_bool == 0; // 0x28d Not
	if(var_54_bool == 0) goto Label_656; // 0x28e JumpB
	goto Label_667; // 0x28f Jump
}


func_1115()
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x45b PushV
	var_35_int = 318; // 0x45c PushI
	var_36_int = 1; // 0x45d PushI
	var_37_int = 524734; // 0x45e PushI
	CreateDiaryEntry(var_34_object, var_35_int, var_36_int, var_37_int); // 0x45f Func
	var_38_bool = 0; var_39_object = Obj(); var_40_int = 0; // 0x461 PushV
	var_39_object = var_34_object; // 0x462 Mov
	var_40_int = -1; // 0x463 MovI
	func_1154(var_38_bool, var_39_object, var_40_int); // 0x464 NEW_2
	return 2; // 0x466 Return
}


func_991(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x3df PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x3e0 Or
	var_68_float = sqrt(var_69_int); // 0x3e1 Sqrt2
	var_70_float = 0.0; // 0x3e2 PushF
	var_71_bool = var_68_float < var_70_float; // 0x3e3 LT
	if(var_71_bool == 0) goto Label_999; // 0x3e4 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x3e5 MovV
	return 2; // 0x3e6 Return
	
Label_999:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x3e7 Div2
	return 2; // 0x3e8 Return
}


func_1249(var_85_int)
{
	var_85_int = 515539; // 0x4e1 MovI
	return 0; // 0x4e2 Return
}


func_481()
{
	var_270_float = 0; var_271_float = 0; // 0x1e1 PushV
	var_272_int = 8; // 0x1e2 PushI
	var_273_int = 16; // 0x1e3 PushI
	rand(var_271_float, var_272_int, var_273_int); // 0x1e4 Func
	var_274_int = 10; // 0x1e6 PushI
	SetTimer(var_274_int, var_271_float); // 0x1e7 Func
	return 2; // 0x1e9 Return
}


func_1251(var_84_int)
{
	var_84_int = 502864; // 0x4e3 MovI
	return 0; // 0x4e4 Return
}


func_1253(var_86_string)
{
	var_86_string = "ui/NPC_Katerina.png"; // 0x4e5 MovS
	return 0; // 0x4e6 Return
}


func_1255(var_87_string)
{
	var_87_string = "ui/NPC_Katerina_b.png"; // 0x4e7 MovS
	return 0; // 0x4e8 Return
}


func_1128()
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x468 PushV
	var_58_int = 319; // 0x469 PushI
	var_59_int = 1; // 0x46a PushI
	var_60_int = 524735; // 0x46b PushI
	CreateDiaryEntry(var_57_object, var_58_int, var_59_int, var_60_int); // 0x46c Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x46e PushV
	var_62_object = var_57_object; // 0x46f Mov
	var_63_int = 318; // 0x470 MovI
	func_1154(var_61_bool, var_62_object, var_63_int); // 0x471 NEW_2
	return 2; // 0x473 Return
}


func_1257(var_79_bool)
{
	var_79_bool = 1; // 0x4e9 MovB
	return 0; // 0x4ea Return
}


func_490()
{
	var_269_int = 10; // 0x1ea PushI
	KillTimer(var_269_int); // 0x1eb Func
	return 0; // 0x1ed Return
}


func_1001(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x3e9 PushV
	GetVariable(var_202_string, var_204_int); // 0x3ea Func
	var_201_int = var_204_int; // 0x3ec Mov
	return 2; // 0x3ed Return
}


func_1006(var_64_bool, var_65_string, var_66_string)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x3ee PushV
	FindActor(var_68_object, var_65_string); // 0x3ef Func
	var_69_bool = var_68_object == 0; // 0x3f1 NullEq
	if(var_69_bool == 0) goto Label_1013; // 0x3f2 JumpB
	var_64_bool = 0; // 0x3f3 MovB
	return 2; // 0x3f4 Return
	
Label_1013:
	Trigger(var_68_object, var_66_string); // 0x3f5 Func
	var_64_bool = 1; // 0x3f7 MovB
	return 2; // 0x3f8 Return
}


func_1141(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x475 PushV
	GetDiaryRoot(var_49_object); // 0x476 Func
	var_50_bool = var_49_object == 0; // 0x478 Not
	if(var_50_bool == 0) goto Label_1151; // 0x479 JumpB
	var_51_string = "Can't retrieve diary root"; // 0x47a PushS
	Trace(var_51_string); // 0x47b Func
	var_47_object = 0; // 0x47d MovB
	return 2; // 0x47e Return
	
Label_1151:
	var_47_object = var_49_object; // 0x47f Mov
	return 2; // 0x480 Return
}


func_376(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x179 PushV
	var_27_object = var_25_object; // 0x17a Mov
	TaskCall(0); // 0x17b TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x17c NEW_2
	TaskReturn(); // 0x17d TaskReturn
	return 0; // 0x17f Return
}


func_889(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x379 PushV
	var_151_string = "d"; // 0x37a PushS
	var_152_int = 0; // 0x37b PushV
	func_1023(var_152_int); // 0x37c NEW_2
	var_158_int = var_151_string + var_152_int; // 0x37e Add
	var_159_string = "m"; // 0x37f PushS
	var_146_string = var_158_int + var_159_string; // 0x380 Add2
	var_147_int = 0; // 0x381 MovI
	
Label_898:
	var_160_int = 1; // 0x382 PushI
	if(var_160_int == 0) goto Label_911; // 0x383 JumpB
	var_161_int = 1; // 0x384 PushI
	var_162_int = var_147_int + var_161_int; // 0x385 Add
	var_163_int = var_146_string + var_162_int; // 0x386 Add
	HasProperty(var_163_int, var_148_bool); // 0x387 ObjFunc
	var_164_bool = var_148_bool == 0; // 0x389 Not
	if(var_164_bool == 0) goto Label_908; // 0x38a JumpB
	goto Label_911; // 0x38b Jump
	
Label_911:
	var_165_bool = var_147_int == 0; // 0x38f Not
	if(var_165_bool == 0) goto Label_915; // 0x390 JumpB
	var_139_bool = 0; // 0x391 MovB
	return 10; // 0x392 Return
	
Label_915:
	var_149_int = 0; // 0x393 MovI
	var_166_int = 1; // 0x394 PushI
	var_167_bool = var_147_int > var_166_int; // 0x395 GT
	if(var_167_bool == 0) goto Label_921; // 0x396 JumpB
	irand(var_149_int, var_147_int); // 0x397 Func
	
Label_921:
	var_168_int = 1; // 0x399 PushI
	var_169_int = var_149_int + var_168_int; // 0x39a Add
	var_170_int = var_146_string + var_169_int; // 0x39b Add
	GetProperty(var_170_int, var_150_string); // 0x39c ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x39e PushV
	var_172_string = var_150_string; // 0x39f Mov
	func_963(var_171_bool, var_172_string); // 0x3a0 NEW_2
	var_139_bool = var_171_bool; // 0x3a1 Mov
	return 10; // 0x3a3 Return
	
Label_908:
	var_173_int = 1; // 0x38c PushI
	var_147_int = var_147_int + var_173_int; // 0x38d Add2
	goto Label_898; // 0x38e Jump
}


func_1018(var_30_float)
{
	var_31_float = 0; var_32_float = 0; // 0x3fa PushV
	GetGameTime(var_32_float); // 0x3fb Func
	var_30_float = var_32_float; // 0x3fd Mov
	return 2; // 0x3fe Return
}


func_1023(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x3ff PushV
	GetGameTime(var_154_float); // 0x400 Func
	var_155_int = 1; // 0x402 PushI
	var_156_int = 0; // 0x403 PushV
	var_157_int = 24; // 0x404 PushI
	var_156_int = var_154_float / var_154_float; // 0x405 Div2
	var_152_int = var_155_int + var_156_int; // 0x406 Add2
	return 2; // 0x407 Return
}


