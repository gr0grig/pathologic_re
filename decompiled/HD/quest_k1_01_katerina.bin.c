task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc0 PushI
	if(var_9_int == 0) goto Label_375; // 0xc1 JumpB
	func_980(); // 0xc3 NEW_2
	var_11_int = 25990; // 0xc5 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc6 Eq
	if(var_12_bool == 0) goto Label_210; // 0xc7 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc8 PushV
	var_13_object = var_1_object; // 0xc9 MovT
	var_14_object = var_0_object; // 0xca MovT
	func_1058(); // 0xcb NEW_2
	var_70_object = Obj(); var_71_object = Obj(); // 0xcd PushV
	var_70_object = var_1_object; // 0xce MovT
	var_71_object = var_0_object; // 0xcf MovT
	func_1089(); // 0xd0 NEW_2
	
Label_210:
	var_96_int = 25978; // 0xd2 PushI
	var_97_bool = var_7_cvector == var_96_int; // 0xd3 Eq
	if(var_97_bool == 0) goto Label_263; // 0xd4 JumpB
	var_98_bool = 0; var_99_object = Obj(); // 0xd5 PushV
	var_99_object = var_1_object; // 0xd6 MovT
	func_1105(var_99_object); // 0xd7 NEW_2
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
	func_1259(var_182_bool); // 0x16d NEW_2
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
	func_987(var_13_object); // 0x18e NEW_2
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
	func_987(var_8_object); // 0x19b NEW_2
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
	func_987(var_53_object); // 0x207 NEW_2
	var_52_object = var_53_object; // 0x208 Mov
	func_854(var_52_object); // 0x20a NEW_2
	
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
	func_934(var_14_string); // 0x239 NEW_2
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
	var_270_string = ""; // 0x24e PushV
	var_270_string = "Neutral"; // 0x24f MovS
	func_934(var_270_string); // 0x250 NEW_2
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
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1253(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1251(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1255(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1257(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1234(var_89_int); // 0x22 NEW_2
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
	func_987(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_796(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
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
	func_778(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1025(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x401 PushV
	GetGameTime(var_155_float); // 0x402 Func
	var_156_int = 1; // 0x404 PushI
	var_157_int = 0; // 0x405 PushV
	var_158_int = 24; // 0x406 PushI
	var_157_int = var_155_float / var_155_float; // 0x407 Div2
	var_153_int = var_156_int + var_157_int; // 0x408 Add2
	return 2; // 0x409 Return
}


func_1156(var_38_bool, var_39_object, var_40_int)
{
	var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x484 PushV
	var_47_object = Obj(); // 0x485 PushV
	func_1143(var_47_object); // 0x486 NEW_2
	var_44_object = var_47_object; // 0x487 Mov
	Find(var_40_int, var_45_object); // 0x489 ObjFunc
	var_52_bool = var_45_object == 0; // 0x48b Not
	if(var_52_bool == 0) goto Label_1171; // 0x48c JumpB
	var_53_string = "Can't find diary parent with id: "; // 0x48d PushS
	var_54_int = var_53_string + var_40_int; // 0x48e Add
	Trace(var_54_int); // 0x48f Func
	var_38_bool = 0; // 0x491 MovB
	return 6; // 0x492 Return
	
Label_1171:
	AddChild(var_39_object); // 0x493 ObjFunc
	var_55_int = 7; // 0x495 PushI
	SendWorldWndMessage(var_55_int); // 0x496 Func
	GetCategory(var_46_int); // 0x498 ObjFunc
	SetDiarySection(var_46_int); // 0x49a Func
	var_38_bool = 0; // 0x49c MovB
	return 6; // 0x49d Return
}


func_778()
{
	var_263_bool = 0; var_264_bool = 0; // 0x30a PushV
	var_265_bool = 1; // 0x30b PushB
	CameraSwitchToNormal(var_265_bool); // 0x30c Func
	var_266_bool = 0; // 0x30e PushV
	func_1259(var_266_bool); // 0x30f NEW_2
	if(var_266_bool == 0) goto Label_787; // 0x311 JumpB
	goto Label_795; // 0x312 Jump
	
Label_795:
	return 2; // 0x31b Return
	
Label_787:
	var_267_string = "head"; // 0x313 PushS
	HasAnimationTrack(var_264_bool, var_267_string); // 0x314 Func
	var_268_bool = var_264_bool; // 0x316 Push
	if(var_268_bool == 0) goto Label_795; // 0x317 JumpB
	var_269_string = "head"; // 0x318 PushS
	UnlookAsync(var_269_string); // 0x319 Func
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


func_796(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x31c PushV
	var_107_string = "voice_common"; // 0x31d PushS
	GetVariable(var_107_string, var_105_int); // 0x31e Func
	var_108_int = var_105_int; // 0x320 Push
	if(var_108_int == 0) goto Label_834; // 0x321 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x322 PushV
	var_110_object = var_99_object; // 0x323 Mov
	func_854(var_110_object); // 0x324 NEW_2
	var_139_bool = var_109_bool == 0; // 0x326 Not
	if(var_139_bool == 0) goto Label_816; // 0x327 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x328 PushV
	var_141_object = var_99_object; // 0x329 Mov
	func_891(var_141_object); // 0x32a NEW_2
	var_175_bool = var_140_bool == 0; // 0x32c Not
	if(var_175_bool == 0) goto Label_816; // 0x32d JumpB
	var_98_bool = 0; // 0x32e MovB
	return 4; // 0x32f Return
	
Label_816:
	var_176_int = 2; // 0x330 PushI
	irand(var_106_int, var_176_int); // 0x331 Func
	var_177_int = var_106_int; // 0x333 Push
	if(var_177_int == 0) goto Label_829; // 0x334 JumpB
	var_178_string = "voice_common"; // 0x335 PushS
	var_179_int = 1; // 0x336 PushI
	var_180_int = var_105_int + var_179_int; // 0x337 Add
	var_181_int = 3; // 0x338 PushI
	var_182_int = var_180_int / var_181_int; // 0x339 Mod
	SetVariable(var_178_string, var_182_int); // 0x33a Func
	goto Label_833; // 0x33c Jump
	
Label_833:
	goto Label_852; // 0x341 Jump
	
Label_852:
	var_98_bool = 1; // 0x354 MovB
	return 4; // 0x355 Return
	
Label_829:
	var_183_string = "voice_common"; // 0x33d PushS
	var_184_int = 0; // 0x33e PushI
	SetVariable(var_183_string, var_184_int); // 0x33f Func
	
Label_834:
	var_185_bool = 0; var_186_object = Obj(); // 0x342 PushV
	var_186_object = var_99_object; // 0x343 Mov
	func_891(var_186_object); // 0x344 NEW_2
	var_187_bool = var_185_bool == 0; // 0x346 Not
	if(var_187_bool == 0) goto Label_848; // 0x347 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x348 PushV
	var_189_object = var_99_object; // 0x349 Mov
	func_854(var_189_object); // 0x34a NEW_2
	var_190_bool = var_188_bool == 0; // 0x34c Not
	if(var_190_bool == 0) goto Label_848; // 0x34d JumpB
	var_98_bool = 0; // 0x34e MovB
	return 4; // 0x34f Return
	
Label_848:
	var_191_string = "voice_common"; // 0x350 PushS
	var_192_int = 1; // 0x351 PushI
	SetVariable(var_191_string, var_192_int); // 0x352 Func
}


func_670(var_45_bool)
{
	var_45_bool = 1; // 0x29e MovB
	return 0; // 0x29f Return
}


func_672()
{
	StopAnimation(); // 0x2a0 Func
	StopGroup0(); // 0x2a2 Func
	return 0; // 0x2a4 Return
}


func_1184(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); // 0x4a0 PushV
	GetMainOutdoorScene(var_22_object); // 0x4a1 Func
	var_24_bool = var_22_object == 0; // 0x4a3 NullEq
	if(var_24_bool == 0) goto Label_1195; // 0x4a4 JumpB
	var_25_string = "Can't find main outdoor scene"; // 0x4a5 PushS
	Trace(var_25_string); // 0x4a6 Func
	var_23_object = 0; // 0x4a8 SetNull
	var_19_object = var_23_object; // 0x4a9 Mov
	return 4; // 0x4aa Return
	
Label_1195:
	GetMap(var_23_object); // 0x4ab ObjFunc
	var_19_object = var_23_object; // 0x4ad Mov
	return 4; // 0x4ae Return
}


func_1058()
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x422 PushV
	var_17_string = "k1q01"; // 0x423 PushS
	var_18_int = 1; // 0x424 PushI
	SetVariable(var_17_string, var_18_int); // 0x425 Func
	var_19_object = Obj(); // 0x427 PushV
	func_1184(var_19_object); // 0x428 NEW_2
	var_16_object = var_19_object; // 0x429 Mov
	var_26_string = "k1q01KaterinaGotoAlexandr"; // 0x42b PushS
	var_27_string = "pt_map_alexandr"; // 0x42c PushS
	var_28_int = 1; // 0x42d PushI
	var_29_int = 524727; // 0x42e PushI
	var_30_float = 0; // 0x42f PushV
	func_1020(var_30_float); // 0x430 NEW_2
	AddMark(var_26_string, var_27_string, var_28_int, var_29_int, var_30_float); // 0x432 ObjFunc
	func_1117(); // 0x435 NEW_2
	func_1130(); // 0x438 NEW_2
	var_64_bool = 0; var_65_string = ""; var_66_string = ""; // 0x43a PushV
	var_65_string = "quest_k1_01"; // 0x43b MovS
	var_66_string = "remove_katerina"; // 0x43c MovS
	func_1008(var_64_bool, var_65_string, var_66_string); // 0x43d NEW_2
	return 2; // 0x43f Return
}


func_547()
{
	StopGroup0(); // 0x223 Func
	func_490(); // 0x226 NEW_2
	var_8_string = ""; // 0x228 PushV
	var_8_string = "Neutral"; // 0x229 MovS
	func_934(var_8_string); // 0x22a NEW_2
	func_481(); // 0x22d NEW_2
	return 0; // 0x22f Return
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


func_934(var_234_string)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0; // 0x3a6 PushV
	lshHasAnimation(var_238_bool, var_234_string); // 0x3a7 Func
	var_241_bool = var_238_bool; // 0x3a9 Push
	if(var_241_bool == 0) goto Label_945; // 0x3aa JumpB
	lshGetAnimTimes(var_234_string, var_239_float, var_240_float); // 0x3ab Func
	var_242_bool = 0; // 0x3ad PushB
	lshPlayAnimation(var_239_float, var_240_float, var_242_bool); // 0x3ae Func
	goto Label_949; // 0x3b0 Jump
	
Label_949:
	return 6; // 0x3b5 Return
	
Label_945:
	var_243_string = "Can't find lsh animation : "; // 0x3b1 PushS
	var_244_int = var_243_string + var_234_string; // 0x3b2 Add
	Trace(var_244_int); // 0x3b3 Func
}


func_169(var_2_object, var_208_string)
{
	var_209_bool = 0; // 0xaa PushV
	func_1259(var_209_bool); // 0xab NEW_2
	var_210_bool = var_209_bool == 0; // 0xad Not
	if(var_210_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_211_bool = var_208_string == var_2_object; // 0xb0 Eq
	if(var_211_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_212_string = ""; var_213_bool = 0; // 0xb3 PushV
	var_212_string = var_208_string; // 0xb4 Mov
	var_214_string = ""; // 0xb5 PushS
	var_215_bool = var_208_string == var_214_string; // 0xb6 Eq
	if(var_215_bool == 0) goto Label_186; // 0xb7 JumpB
	var_213_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_950(var_212_string, var_213_bool); // 0xbb NEW_2
	var_2_object = var_208_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_213_bool = 1; // 0xba MovB
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


func_1201(var_72_object, var_73_string, var_74_float)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0; // 0x4b1 PushV
	GetMainOutdoorScene(var_82_object); // 0x4b2 Func
	var_84_bool = var_82_object == 0; // 0x4b4 NullEq
	if(var_84_bool == 0) goto Label_1210; // 0x4b5 JumpB
	var_85_string = "Can't find main outdoor scene"; // 0x4b6 PushS
	Trace(var_85_string); // 0x4b7 Func
	return 8; // 0x4b9 Return
	
Label_1210:
	GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector); // 0x4ba ObjFunc
	var_86_bool = var_83_bool == 0; // 0x4bc Not
	if(var_86_bool == 0) goto Label_1220; // 0x4bd JumpB
	var_87_string = "Warning: outdoor scene locator "; // 0x4be PushS
	var_88_int = var_87_string + var_73_string; // 0x4bf Add
	var_89_string = " doesnt exist"; // 0x4c0 PushS
	var_90_int = var_88_int + var_89_string; // 0x4c1 Add
	Trace(var_90_int); // 0x4c2 Func
	
Label_1220:
	GetMap(var_72_object); // 0x4c4 ObjFunc
	var_91_bool = var_72_object == 0; // 0x4c6 NullEq
	if(var_91_bool == 0) goto Label_1228; // 0x4c7 JumpB
	var_92_string = "Can't find map"; // 0x4c8 PushS
	Trace(var_92_string); // 0x4c9 Func
	return 8; // 0x4cb Return
	
Label_1228:
	var_93_float = GetByIndex(var_80_cvector, 0); // 0x4cc PushE
	var_94_float = GetByIndex(var_80_cvector, 2); // 0x4cd PushE
	SetMapParams(var_93_float, var_94_float, var_74_float); // 0x4ce ObjFunc
	return 8; // 0x4d0 Return
}


func_950(var_212_string, var_213_bool)
{
	var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_float = 0; var_221_float = 0; // 0x3b6 PushV
	lshHasAnimation(var_219_bool, var_212_string); // 0x3b7 Func
	var_222_bool = var_219_bool; // 0x3b9 Push
	if(var_222_bool == 0) goto Label_960; // 0x3ba JumpB
	lshGetAnimTimes(var_212_string, var_220_float, var_221_float); // 0x3bb Func
	lshPlayAnimation(var_220_float, var_221_float, var_213_bool); // 0x3bd Func
	goto Label_964; // 0x3bf Jump
	
Label_964:
	return 6; // 0x3c4 Return
	
Label_960:
	var_223_string = "Can't find lsh animation : "; // 0x3c0 PushS
	var_224_int = var_223_string + var_212_string; // 0x3c1 Add
	Trace(var_224_int); // 0x3c2 Func
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


func_704(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2c0 PushV
	IsLoaded(var_9_bool); // 0x2c1 Func
	var_7_bool = var_9_bool; // 0x2c3 Mov
	return 2; // 0x2c4 Return
}


func_1089()
{
	var_72_object = Obj(); var_73_string = ""; var_74_float = 0; // 0x442 PushV
	var_75_object = Obj(); // 0x443 PushV
	func_1184(var_75_object); // 0x444 NEW_2
	var_72_object = var_75_object; // 0x445 Mov
	var_73_string = "pt_map_alexandr"; // 0x447 MovS
	var_74_float = 2; // 0x448 MovI
	func_1201(var_72_object, var_73_string, var_74_float); // 0x449 NEW_2
	var_95_object = Obj(); // 0x44b PushV
	func_1184(var_95_object); // 0x44c NEW_2
	ShowMap(var_95_object); // 0x44e ObjFunc
	return 0; // 0x450 Return
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
	func_993(var_64_cvector, var_65_cvector); // 0x2e0 NEW_2
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
	var_77_bool = 1; // 0x2f0 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x2f1 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x2f3 PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x2f4 PushE
	Rotate(var_78_float, var_79_float); // 0x2f5 Func
	var_80_bool = 0; // 0x2f7 PushV
	func_1259(var_80_bool); // 0x2f8 NEW_2
	if(var_80_bool == 0) goto Label_764; // 0x2fa JumpB
	goto Label_772; // 0x2fb Jump
	
Label_772:
	CameraWaitForPlayFinish(); // 0x304 Func
	ResumeWorld(); // 0x306 Func
	var_37_bool = 1; // 0x308 MovB
	return 18; // 0x309 Return
	
Label_764:
	var_81_string = "head"; // 0x2fc PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x2fd Func
	var_82_bool = var_57_bool; // 0x2ff Push
	if(var_82_bool == 0) goto Label_772; // 0x300 JumpB
	var_83_string = "head"; // 0x301 PushS
	LookAsyncCamera(var_83_string); // 0x302 Func
}


func_454(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1c6 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1c7 PushE
	RotateAsync(var_84_float, var_85_float); // 0x1c8 Func
	return 0; // 0x1ca Return
}


func_965(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x3c5 PushV
	var_136_bool = 0; // 0x3c6 PushV
	func_1259(var_136_bool); // 0x3c7 NEW_2
	if(var_136_bool == 0) goto Label_978; // 0x3c9 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x3ca Func
	var_137_bool = var_135_bool; // 0x3cc Push
	if(var_137_bool == 0) goto Label_978; // 0x3cd JumpB
	lshPlaySpeech(var_133_string); // 0x3ce Func
	var_132_bool = 1; // 0x3d0 MovB
	return 2; // 0x3d1 Return
	
Label_978:
	var_132_bool = 0; // 0x3d2 MovB
	return 2; // 0x3d3 Return
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


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_139; // 0x56 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x57 PushV
	var_201_object = var_1_object; // 0x58 MovT
	func_1105(var_201_object); // 0x59 NEW_2
	if(var_200_bool == 0) goto Label_112; // 0x5b JumpB
	var_208_string = ""; // 0x5c PushV
	var_208_string = "Neutral"; // 0x5d MovS
	func_169(var_194_object, var_208_string); // 0x5e NEW_2
	var_225_int = 524639; // 0x60 PushI
	SetMessage(var_225_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_226_int = 524640; // 0x65 PushI
	var_227_int = 27569; // 0x66 PushI
	var_228_int = 25979; // 0x67 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x68 TObjFunc
	var_229_int = 526284; // 0x6a PushI
	var_230_int = 27569; // 0x6b PushI
	var_231_int = 27562; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	goto Label_139; // 0x6f Jump
	
Label_139:
	var_232_bool = 0; // 0x8b PushV
	func_1259(var_232_bool); // 0x8c NEW_2
	if(var_232_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_233_string = var_3_string; // 0x91 PushT
	if(var_233_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_234_string = ""; // 0x94 PushV
	var_234_string = var_2_object; // 0x95 MovT
	func_934(var_234_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_245_string = "all"; // 0x9a PushS
	var_246_string = "idle"; // 0x9b PushS
	PlayAnimation(var_245_string, var_246_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_247_string = var_3_string; // 0xa0 PushT
	if(var_247_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_248_string = "all"; // 0xa3 PushS
	var_249_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_248_string, var_249_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_112:
	var_250_string = ""; // 0x70 PushV
	var_250_string = "Neutral"; // 0x71 MovS
	func_169(var_194_object, var_250_string); // 0x72 NEW_2
	var_251_int = 524641; // 0x74 PushI
	SetMessage(var_251_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_252_int = 524642; // 0x79 PushI
	var_253_int = 27563; // 0x7a PushI
	var_254_int = 25981; // 0x7b PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x7c TObjFunc
	var_255_int = 526287; // 0x7e PushI
	var_256_int = 27567; // 0x7f PushI
	var_257_int = 27565; // 0x80 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x81 TObjFunc
	var_258_int = 526288; // 0x83 PushI
	var_259_int = -1; // 0x84 PushI
	var_260_int = 27566; // 0x85 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_1234(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x4d2 PushV
	var_92_string = "branch"; // 0x4d3 PushS
	GetVariable(var_92_string, var_91_int); // 0x4d4 Func
	var_93_int = 0; // 0x4d6 PushI
	var_94_bool = var_91_int == var_93_int; // 0x4d7 Eq
	if(var_94_bool == 0) goto Label_1244; // 0x4d8 JumpB
	var_89_int = 1; // 0x4d9 MovI
	return 2; // 0x4da Return
	
Label_1244:
	var_95_int = 1; // 0x4dc PushI
	var_96_bool = var_91_int == var_95_int; // 0x4dd Eq
	if(var_96_bool == 0) goto Label_1249; // 0x4de JumpB
	var_89_int = 2; // 0x4df MovI
	return 2; // 0x4e0 Return
	
Label_1249:
	var_89_int = 3; // 0x4e1 MovI
	return 2; // 0x4e2 Return
}


func_1105(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x452 PushV
	var_203_string = "k1q01"; // 0x453 MovS
	func_1003(var_202_int, var_203_string); // 0x454 NEW_2
	var_206_int = 0; // 0x456 PushI
	var_207_bool = var_202_int == var_206_int; // 0x457 Eq
	if(var_207_bool == 0) goto Label_1115; // 0x458 JumpB
	var_200_bool = 1; // 0x459 MovB
	return 0; // 0x45a Return
	
Label_1115:
	var_200_bool = 0; // 0x45b MovB
	return 0; // 0x45c Return
}


func_980()
{
	var_10_bool = 0; // 0x3d4 PushV
	func_1259(var_10_bool); // 0x3d5 NEW_2
	if(var_10_bool == 0) goto Label_986; // 0x3d7 JumpB
	lshStopSpeech(); // 0x3d8 Func
	
Label_986:
	return 0; // 0x3da Return
}


func_854(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x356 PushV
	var_116_string = "c"; // 0x357 MovS
	var_117_int = 0; // 0x358 MovI
	
Label_857:
	var_121_int = 1; // 0x359 PushI
	if(var_121_int == 0) goto Label_870; // 0x35a JumpB
	var_122_int = 1; // 0x35b PushI
	var_123_int = var_117_int + var_122_int; // 0x35c Add
	var_124_int = var_116_string + var_123_int; // 0x35d Add
	HasProperty(var_124_int, var_118_bool); // 0x35e ObjFunc
	var_125_bool = var_118_bool == 0; // 0x360 Not
	if(var_125_bool == 0) goto Label_867; // 0x361 JumpB
	goto Label_870; // 0x362 Jump
	
Label_870:
	var_126_bool = var_117_int == 0; // 0x366 Not
	if(var_126_bool == 0) goto Label_874; // 0x367 JumpB
	var_109_bool = 0; // 0x368 MovB
	return 10; // 0x369 Return
	
Label_874:
	var_119_int = 0; // 0x36a MovI
	var_127_int = 1; // 0x36b PushI
	var_128_bool = var_117_int > var_127_int; // 0x36c GT
	if(var_128_bool == 0) goto Label_880; // 0x36d JumpB
	irand(var_119_int, var_117_int); // 0x36e Func
	
Label_880:
	var_129_int = 1; // 0x370 PushI
	var_130_int = var_119_int + var_129_int; // 0x371 Add
	var_131_int = var_116_string + var_130_int; // 0x372 Add
	GetProperty(var_131_int, var_120_string); // 0x373 ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x375 PushV
	var_133_string = var_120_string; // 0x376 Mov
	func_965(var_132_bool, var_133_string); // 0x377 NEW_2
	var_109_bool = var_132_bool; // 0x378 Mov
	return 10; // 0x37a Return
	
Label_867:
	var_138_int = 1; // 0x363 PushI
	var_117_int = var_117_int + var_138_int; // 0x364 Add2
	goto Label_857; // 0x365 Jump
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
	func_1041(var_25_int); // 0x263 NEW_2
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
	func_1034(var_52_string, var_53_int); // 0x287 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x289 Func
	WaitForAnimEnd(var_22_bool); // 0x28b Func
	var_54_bool = var_22_bool == 0; // 0x28d Not
	if(var_54_bool == 0) goto Label_656; // 0x28e JumpB
	goto Label_667; // 0x28f Jump
}


func_987(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x3db PushV
	self(var_102_object); // 0x3dc Func
	var_100_object = var_102_object; // 0x3de Mov
	return 2; // 0x3df Return
}


func_1117()
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x45d PushV
	var_35_int = 318; // 0x45e PushI
	var_36_int = 1; // 0x45f PushI
	var_37_int = 524734; // 0x460 PushI
	CreateDiaryEntry(var_34_object, var_35_int, var_36_int, var_37_int); // 0x461 Func
	var_38_bool = 0; var_39_object = Obj(); var_40_int = 0; // 0x463 PushV
	var_39_object = var_34_object; // 0x464 Mov
	var_40_int = -1; // 0x465 MovI
	func_1156(var_38_bool, var_39_object, var_40_int); // 0x466 NEW_2
	return 2; // 0x468 Return
}


func_481()
{
	var_272_float = 0; var_273_float = 0; // 0x1e1 PushV
	var_274_int = 8; // 0x1e2 PushI
	var_275_int = 16; // 0x1e3 PushI
	rand(var_273_float, var_274_int, var_275_int); // 0x1e4 Func
	var_276_int = 10; // 0x1e6 PushI
	SetTimer(var_276_int, var_273_float); // 0x1e7 Func
	return 2; // 0x1e9 Return
}


func_993(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x3e1 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x3e2 Or
	var_68_float = sqrt(var_69_int); // 0x3e3 Sqrt2
	var_70_float = 0.0; // 0x3e4 PushF
	var_71_bool = var_68_float < var_70_float; // 0x3e5 LT
	if(var_71_bool == 0) goto Label_1001; // 0x3e6 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x3e7 MovV
	return 2; // 0x3e8 Return
	
Label_1001:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x3e9 Div2
	return 2; // 0x3ea Return
}


func_1251(var_86_int)
{
	var_86_int = 515539; // 0x4e3 MovI
	return 0; // 0x4e4 Return
}


func_1253(var_85_int)
{
	var_85_int = 502864; // 0x4e5 MovI
	return 0; // 0x4e6 Return
}


func_1255(var_87_string)
{
	var_87_string = "ui/NPC_Katerina.png"; // 0x4e7 MovS
	return 0; // 0x4e8 Return
}


func_1257(var_88_string)
{
	var_88_string = "ui/NPC_Katerina_b.png"; // 0x4e9 MovS
	return 0; // 0x4ea Return
}


func_490()
{
	var_271_int = 10; // 0x1ea PushI
	KillTimer(var_271_int); // 0x1eb Func
	return 0; // 0x1ed Return
}


func_1259(var_80_bool)
{
	var_80_bool = 1; // 0x4eb MovB
	return 0; // 0x4ec Return
}


func_1130()
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x46a PushV
	var_58_int = 319; // 0x46b PushI
	var_59_int = 1; // 0x46c PushI
	var_60_int = 524735; // 0x46d PushI
	CreateDiaryEntry(var_57_object, var_58_int, var_59_int, var_60_int); // 0x46e Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x470 PushV
	var_62_object = var_57_object; // 0x471 Mov
	var_63_int = 318; // 0x472 MovI
	func_1156(var_61_bool, var_62_object, var_63_int); // 0x473 NEW_2
	return 2; // 0x475 Return
}


func_1003(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x3eb PushV
	GetVariable(var_203_string, var_205_int); // 0x3ec Func
	var_202_int = var_205_int; // 0x3ee Mov
	return 2; // 0x3ef Return
}


func_1008(var_64_bool, var_65_string, var_66_string)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x3f0 PushV
	FindActor(var_68_object, var_65_string); // 0x3f1 Func
	var_69_bool = var_68_object == 0; // 0x3f3 NullEq
	if(var_69_bool == 0) goto Label_1015; // 0x3f4 JumpB
	var_64_bool = 0; // 0x3f5 MovB
	return 2; // 0x3f6 Return
	
Label_1015:
	Trigger(var_68_object, var_66_string); // 0x3f7 Func
	var_64_bool = 1; // 0x3f9 MovB
	return 2; // 0x3fa Return
}


func_1143(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x477 PushV
	GetDiaryRoot(var_49_object); // 0x478 Func
	var_50_bool = var_49_object == 0; // 0x47a Not
	if(var_50_bool == 0) goto Label_1153; // 0x47b JumpB
	var_51_string = "Can't retrieve diary root"; // 0x47c PushS
	Trace(var_51_string); // 0x47d Func
	var_47_object = 0; // 0x47f MovB
	return 2; // 0x480 Return
	
Label_1153:
	var_47_object = var_49_object; // 0x481 Mov
	return 2; // 0x482 Return
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


func_891(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x37b PushV
	var_152_string = "d"; // 0x37c PushS
	var_153_int = 0; // 0x37d PushV
	func_1025(var_153_int); // 0x37e NEW_2
	var_159_int = var_152_string + var_153_int; // 0x380 Add
	var_160_string = "m"; // 0x381 PushS
	var_147_string = var_159_int + var_160_string; // 0x382 Add2
	var_148_int = 0; // 0x383 MovI
	
Label_900:
	var_161_int = 1; // 0x384 PushI
	if(var_161_int == 0) goto Label_913; // 0x385 JumpB
	var_162_int = 1; // 0x386 PushI
	var_163_int = var_148_int + var_162_int; // 0x387 Add
	var_164_int = var_147_string + var_163_int; // 0x388 Add
	HasProperty(var_164_int, var_149_bool); // 0x389 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x38b Not
	if(var_165_bool == 0) goto Label_910; // 0x38c JumpB
	goto Label_913; // 0x38d Jump
	
Label_913:
	var_166_bool = var_148_int == 0; // 0x391 Not
	if(var_166_bool == 0) goto Label_917; // 0x392 JumpB
	var_140_bool = 0; // 0x393 MovB
	return 10; // 0x394 Return
	
Label_917:
	var_150_int = 0; // 0x395 MovI
	var_167_int = 1; // 0x396 PushI
	var_168_bool = var_148_int > var_167_int; // 0x397 GT
	if(var_168_bool == 0) goto Label_923; // 0x398 JumpB
	irand(var_150_int, var_148_int); // 0x399 Func
	
Label_923:
	var_169_int = 1; // 0x39b PushI
	var_170_int = var_150_int + var_169_int; // 0x39c Add
	var_171_int = var_147_string + var_170_int; // 0x39d Add
	GetProperty(var_171_int, var_151_string); // 0x39e ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x3a0 PushV
	var_173_string = var_151_string; // 0x3a1 Mov
	func_965(var_172_bool, var_173_string); // 0x3a2 NEW_2
	var_140_bool = var_172_bool; // 0x3a3 Mov
	return 10; // 0x3a5 Return
	
Label_910:
	var_174_int = 1; // 0x38e PushI
	var_148_int = var_148_int + var_174_int; // 0x38f Add2
	goto Label_900; // 0x390 Jump
}


func_1020(var_30_float)
{
	var_31_float = 0; var_32_float = 0; // 0x3fc PushV
	GetGameTime(var_32_float); // 0x3fd Func
	var_30_float = var_32_float; // 0x3ff Mov
	return 2; // 0x400 Return
}


