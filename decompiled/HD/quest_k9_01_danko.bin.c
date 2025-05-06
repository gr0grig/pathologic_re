task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xb5 PushI
	if(var_9_int == 0) goto Label_368; // 0xb6 JumpB
	func_973(); // 0xb8 NEW_2
	var_11_int = 27758; // 0xba PushI
	var_12_bool = var_8_bool == var_11_int; // 0xbb Eq
	if(var_12_bool == 0) goto Label_204; // 0xbc JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xbd PushV
	var_13_object = var_1_object; // 0xbe MovT
	var_14_object = var_0_object; // 0xbf MovT
	func_1034(); // 0xc0 NEW_2
	var_17_object = Obj(); var_18_object = Obj(); // 0xc2 PushV
	var_17_object = var_1_object; // 0xc3 MovT
	var_18_object = var_0_object; // 0xc4 MovT
	func_1040(); // 0xc5 NEW_2
	var_21_object = Obj(); var_22_object = Obj(); // 0xc7 PushV
	var_21_object = var_1_object; // 0xc8 MovT
	var_22_object = var_0_object; // 0xc9 MovT
	func_1046(); // 0xca NEW_2
	
Label_204:
	var_59_int = 27757; // 0xcc PushI
	var_60_bool = var_7_cvector == var_59_int; // 0xcd Eq
	if(var_60_bool == 0) goto Label_246; // 0xce JumpB
	var_61_string = ""; // 0xcf PushV
	var_61_string = "Neutral"; // 0xd0 MovS
	func_158(var_8_bool, var_61_string); // 0xd1 NEW_2
	var_78_int = 526491; // 0xd3 PushI
	SetMessage(var_78_int); // 0xd4 TObjFunc
	ClearReplies(); // 0xd6 TObjFunc
	var_79_bool = 0; // 0xd8 PushV
	var_79_bool = 0; // 0xd9 MovB
	var_80_bool = 0; var_81_object = Obj(); // 0xda PushV
	var_81_object = var_1_object; // 0xdb MovT
	func_1073(var_81_object); // 0xdc NEW_2
	if(var_80_bool == 0) goto Label_229; // 0xde JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0xdf PushV
	var_87_object = var_1_object; // 0xe0 MovT
	func_1085(var_87_object); // 0xe1 NEW_2
	if(var_86_bool == 0) goto Label_229; // 0xe3 JumpB
	var_79_bool = 1; // 0xe4 MovB
	
Label_229:
	if(var_79_bool == 0) goto Label_235; // 0xe5 JumpB
	var_92_int = 526492; // 0xe6 PushI
	var_93_int = 27759; // 0xe7 PushI
	var_94_int = 27758; // 0xe8 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xe9 TObjFunc
	
Label_235:
	var_95_int = 526497; // 0xeb PushI
	var_96_int = -1; // 0xec PushI
	var_97_int = 27763; // 0xed PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xee TObjFunc
	var_98_int = 528836; // 0xf0 PushI
	var_99_int = -1; // 0xf1 PushI
	var_100_int = 30254; // 0xf2 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_101_int = 27759; // 0xf6 PushI
	var_102_bool = var_7_cvector == var_101_int; // 0xf7 Eq
	if(var_102_bool == 0) goto Label_269; // 0xf8 JumpB
	var_103_string = ""; // 0xf9 PushV
	var_103_string = "Neutral"; // 0xfa MovS
	func_158(var_8_bool, var_103_string); // 0xfb NEW_2
	var_104_int = 526493; // 0xfd PushI
	SetMessage(var_104_int); // 0xfe TObjFunc
	ClearReplies(); // 0x100 TObjFunc
	var_105_int = 528837; // 0x102 PushI
	var_106_int = 30256; // 0x103 PushI
	var_107_int = 30255; // 0x104 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x105 TObjFunc
	var_108_int = 541112; // 0x107 PushI
	var_109_int = 30256; // 0x108 PushI
	var_110_int = 43226; // 0x109 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x10a TObjFunc
	return 0; // 0x10c Return
	
Label_269:
	var_111_int = 30256; // 0x10d PushI
	var_112_bool = var_7_cvector == var_111_int; // 0x10e Eq
	if(var_112_bool == 0) goto Label_292; // 0x10f JumpB
	var_113_string = ""; // 0x110 PushV
	var_113_string = "Untrust"; // 0x111 MovS
	func_158(var_8_bool, var_113_string); // 0x112 NEW_2
	var_114_int = 528838; // 0x114 PushI
	SetMessage(var_114_int); // 0x115 TObjFunc
	ClearReplies(); // 0x117 TObjFunc
	var_115_int = 528839; // 0x119 PushI
	var_116_int = 30258; // 0x11a PushI
	var_117_int = 30257; // 0x11b PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x11c TObjFunc
	var_118_int = 541113; // 0x11e PushI
	var_119_int = 27761; // 0x11f PushI
	var_120_int = 43228; // 0x120 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x121 TObjFunc
	return 0; // 0x123 Return
	
Label_292:
	var_121_int = 30258; // 0x124 PushI
	var_122_bool = var_7_cvector == var_121_int; // 0x125 Eq
	if(var_122_bool == 0) goto Label_315; // 0x126 JumpB
	var_123_string = ""; // 0x127 PushV
	var_123_string = "Untrust"; // 0x128 MovS
	func_158(var_8_bool, var_123_string); // 0x129 NEW_2
	var_124_int = 528840; // 0x12b PushI
	SetMessage(var_124_int); // 0x12c TObjFunc
	ClearReplies(); // 0x12e TObjFunc
	var_125_int = 526494; // 0x130 PushI
	var_126_int = 27761; // 0x131 PushI
	var_127_int = 27760; // 0x132 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x133 TObjFunc
	var_128_int = 542479; // 0x135 PushI
	var_129_int = 44864; // 0x136 PushI
	var_130_int = 44863; // 0x137 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x138 TObjFunc
	return 0; // 0x13a Return
	
Label_315:
	var_131_int = 44864; // 0x13b PushI
	var_132_bool = var_7_cvector == var_131_int; // 0x13c Eq
	if(var_132_bool == 0) goto Label_333; // 0x13d JumpB
	var_133_string = ""; // 0x13e PushV
	var_133_string = "Untrust"; // 0x13f MovS
	func_158(var_8_bool, var_133_string); // 0x140 NEW_2
	var_134_int = 542480; // 0x142 PushI
	SetMessage(var_134_int); // 0x143 TObjFunc
	ClearReplies(); // 0x145 TObjFunc
	var_135_int = 542481; // 0x147 PushI
	var_136_int = 27761; // 0x148 PushI
	var_137_int = 44865; // 0x149 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_138_int = 27761; // 0x14d PushI
	var_139_bool = var_7_cvector == var_138_int; // 0x14e Eq
	if(var_139_bool == 0) goto Label_356; // 0x14f JumpB
	var_140_string = ""; // 0x150 PushV
	var_140_string = "Untrust"; // 0x151 MovS
	func_158(var_8_bool, var_140_string); // 0x152 NEW_2
	var_141_int = 526495; // 0x154 PushI
	SetMessage(var_141_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_142_int = 526496; // 0x159 PushI
	var_143_int = -1; // 0x15a PushI
	var_144_int = 27762; // 0x15b PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x15c TObjFunc
	var_145_int = 541114; // 0x15e PushI
	var_146_int = -1; // 0x15f PushI
	var_147_int = 43230; // 0x160 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x161 TObjFunc
	return 0; // 0x163 Return
	
Label_356:
	var_3_string = 1; // 0x164 TMovB
	var_148_bool = 0; // 0x165 PushV
	func_1176(var_148_bool); // 0x166 NEW_2
	if(var_148_bool == 0) goto Label_364; // 0x168 JumpB
	lshStopAnimation(); // 0x169 Func
	goto Label_366; // 0x16b Jump
	
Label_366:
	return 0; // 0x16e Return
	
Label_364:
	StopAnimation(); // 0x16c Func
	
Label_368:
	return 0; // 0x170 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x17d PushV
	var_10_string = "cleanup"; // 0x17e PushS
	var_11_bool = var_7_string == var_10_string; // 0x17f Eq
	if(var_11_bool == 0) goto Label_396; // 0x180 JumpB
	var_1_object = 1; // 0x181 TMovB
	IsLoaded(var_9_bool); // 0x182 Func
	var_12_bool = var_9_bool == 0; // 0x184 Not
	if(var_12_bool == 0) goto Label_395; // 0x185 JumpB
	var_13_object = Obj(); // 0x186 PushV
	func_980(var_13_object); // 0x187 NEW_2
	RemoveActor(var_13_object); // 0x189 Func
	
Label_395:
	goto Label_400; // 0x18b Jump
	
Label_400:
	return 2; // 0x190 Return
	
Label_396:
	var_16_string = "restore"; // 0x18c PushS
	var_17_bool = var_7_string == var_16_string; // 0x18d Eq
	if(var_17_bool == 0) goto Label_400; // 0x18e JumpB
	var_1_object = 0; // 0x18f TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x191 PushT
	if(var_7_object == 0) goto Label_410; // 0x192 JumpB
	var_8_object = Obj(); // 0x193 PushV
	func_980(var_8_object); // 0x194 NEW_2
	RemoveActor(var_8_object); // 0x196 Func
	Hold(); // 0x198 Func
	
Label_410:
	func_525(); // 0x19b NEW_2
	return 0; // 0x19d Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_540(); // 0x19f NEW_2
	return 0; // 0x1a1 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x1e8 PushI
	var_9_bool = var_7_int == var_8_int; // 0x1e9 Eq
	if(var_9_bool == 0) goto Label_524; // 0x1ea JumpB
	func_483(); // 0x1ec NEW_2
	var_11_bool = 0; // 0x1ee PushV
	var_11_bool = 0; // 0x1ef MovB
	var_12_bool = 0; // 0x1f0 PushV
	func_697(var_12_bool); // 0x1f1 NEW_2
	if(var_12_bool == 0) goto Label_505; // 0x1f3 JumpB
	var_15_bool = 0; // 0x1f4 PushV
	func_452(var_15_bool); // 0x1f5 NEW_2
	if(var_15_bool == 0) goto Label_505; // 0x1f7 JumpB
	var_11_bool = 1; // 0x1f8 MovB
	
Label_505:
	if(var_11_bool == 0) goto Label_518; // 0x1f9 JumpB
	var_32_bool = 0; // 0x1fa PushV
	func_432(var_32_bool); // 0x1fb NEW_2
	if(var_32_bool == 0) goto Label_517; // 0x1fd JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x1fe PushV
	var_53_object = Obj(); // 0x1ff PushV
	func_980(var_53_object); // 0x200 NEW_2
	var_52_object = var_53_object; // 0x201 Mov
	func_847(var_52_object); // 0x203 NEW_2
	
Label_517:
	goto Label_524; // 0x205 Jump
	
Label_524:
	return 0; // 0x20c Return
	
Label_518:
	func_447(var_7_int); // 0x207 NEW_2
	func_474(); // 0x20a NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x22a Push
	if(var_8_bool == 0) goto Label_560; // 0x22b JumpB
	func_474(); // 0x22d NEW_2
	goto Label_564; // 0x22f Jump
	
Label_564:
	return 0; // 0x234 Return
	
Label_560:
	var_14_string = ""; // 0x230 PushV
	var_14_string = "Neutral"; // 0x231 MovS
	func_927(var_14_string); // 0x232 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x235 PushV
	IsOverrideActive(var_9_bool); // 0x236 Func
	var_10_bool = var_9_bool == 0; // 0x238 Not
	if(var_10_bool == 0) goto Label_593; // 0x239 JumpB
	EventDisable(0); // 0x23a EventDisable
	func_665(); // 0x23c NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x23e PushV
	var_12_object = var_7_object; // 0x23f Mov
	func_688(var_12_object); // 0x240 NEW_2
	EventEnable(0); // 0x242 EventEnable
	var_25_object = Obj(); // 0x243 PushV
	var_25_object = var_7_object; // 0x244 Mov
	func_369(var_25_object); // 0x245 NEW_2
	var_269_string = ""; // 0x247 PushV
	var_269_string = "Neutral"; // 0x248 MovS
	func_927(var_269_string); // 0x249 NEW_2
	func_483(); // 0x24c NEW_2
	func_474(); // 0x24f NEW_2
	
Label_593:
	return 2; // 0x251 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_418(var_6_bool); // 0x17a NEW_2
	return 0; // 0x17c Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_702(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1170(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1168(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1172(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1174(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1151(var_89_int); // 0x22 NEW_2
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
	func_980(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_789(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
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
	func_771(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_771()
{
	var_262_bool = 0; var_263_bool = 0; // 0x303 PushV
	var_264_bool = 1; // 0x304 PushB
	CameraSwitchToNormal(var_264_bool); // 0x305 Func
	var_265_bool = 0; // 0x307 PushV
	func_1176(var_265_bool); // 0x308 NEW_2
	if(var_265_bool == 0) goto Label_780; // 0x30a JumpB
	goto Label_788; // 0x30b Jump
	
Label_788:
	return 2; // 0x314 Return
	
Label_780:
	var_266_string = "head"; // 0x30c PushS
	HasAnimationTrack(var_263_bool, var_266_string); // 0x30d Func
	var_267_bool = var_263_bool; // 0x30f Push
	if(var_267_bool == 0) goto Label_788; // 0x310 JumpB
	var_268_string = "head"; // 0x311 PushS
	UnlookAsync(var_268_string); // 0x312 Func
}


func_1034()
{
	var_15_string = "ook9DankoTermitnik2_1"; // 0x40b PushS
	var_16_int = 1; // 0x40c PushI
	SetVariable(var_15_string, var_16_int); // 0x40d Func
	return 0; // 0x40f Return
}


func_525()
{
	func_665(); // 0x20e NEW_2
	func_483(); // 0x211 NEW_2
	lshStopSpeech(); // 0x213 Func
	lshStopAnimation(); // 0x215 Func
	StopAsync(); // 0x217 Func
	Hold(); // 0x219 Func
	return 0; // 0x21b Return
}


func_1168(var_86_int)
{
	var_86_int = 515573; // 0x490 MovI
	return 0; // 0x491 Return
}


func_1040()
{
	var_19_string = "k9q01DankoTalk"; // 0x411 PushS
	var_20_int = 1; // 0x412 PushI
	SetVariable(var_19_string, var_20_int); // 0x413 Func
	return 0; // 0x415 Return
}


func_1170(var_85_int)
{
	var_85_int = 504032; // 0x492 MovI
	return 0; // 0x493 Return
}


func_1172(var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr.png"; // 0x494 MovS
	return 0; // 0x495 Return
}


func_789(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x315 PushV
	var_107_string = "voice_common"; // 0x316 PushS
	GetVariable(var_107_string, var_105_int); // 0x317 Func
	var_108_int = var_105_int; // 0x319 Push
	if(var_108_int == 0) goto Label_827; // 0x31a JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x31b PushV
	var_110_object = var_99_object; // 0x31c Mov
	func_847(var_110_object); // 0x31d NEW_2
	var_139_bool = var_109_bool == 0; // 0x31f Not
	if(var_139_bool == 0) goto Label_809; // 0x320 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x321 PushV
	var_141_object = var_99_object; // 0x322 Mov
	func_884(var_141_object); // 0x323 NEW_2
	var_175_bool = var_140_bool == 0; // 0x325 Not
	if(var_175_bool == 0) goto Label_809; // 0x326 JumpB
	var_98_bool = 0; // 0x327 MovB
	return 4; // 0x328 Return
	
Label_809:
	var_176_int = 2; // 0x329 PushI
	irand(var_106_int, var_176_int); // 0x32a Func
	var_177_int = var_106_int; // 0x32c Push
	if(var_177_int == 0) goto Label_822; // 0x32d JumpB
	var_178_string = "voice_common"; // 0x32e PushS
	var_179_int = 1; // 0x32f PushI
	var_180_int = var_105_int + var_179_int; // 0x330 Add
	var_181_int = 3; // 0x331 PushI
	var_182_int = var_180_int / var_181_int; // 0x332 Mod
	SetVariable(var_178_string, var_182_int); // 0x333 Func
	goto Label_826; // 0x335 Jump
	
Label_826:
	goto Label_845; // 0x33a Jump
	
Label_845:
	var_98_bool = 1; // 0x34d MovB
	return 4; // 0x34e Return
	
Label_822:
	var_183_string = "voice_common"; // 0x336 PushS
	var_184_int = 0; // 0x337 PushI
	SetVariable(var_183_string, var_184_int); // 0x338 Func
	
Label_827:
	var_185_bool = 0; var_186_object = Obj(); // 0x33b PushV
	var_186_object = var_99_object; // 0x33c Mov
	func_884(var_186_object); // 0x33d NEW_2
	var_187_bool = var_185_bool == 0; // 0x33f Not
	if(var_187_bool == 0) goto Label_841; // 0x340 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x341 PushV
	var_189_object = var_99_object; // 0x342 Mov
	func_847(var_189_object); // 0x343 NEW_2
	var_190_bool = var_188_bool == 0; // 0x345 Not
	if(var_190_bool == 0) goto Label_841; // 0x346 JumpB
	var_98_bool = 0; // 0x347 MovB
	return 4; // 0x348 Return
	
Label_841:
	var_191_string = "voice_common"; // 0x349 PushS
	var_192_int = 1; // 0x34a PushI
	SetVariable(var_191_string, var_192_int); // 0x34b Func
}


func_1174(var_88_string)
{
	var_88_string = "ui/NPC_Bakalavr_b.png"; // 0x496 MovS
	return 0; // 0x497 Return
}


func_663(var_45_bool)
{
	var_45_bool = 1; // 0x297 MovB
	return 0; // 0x298 Return
}


func_1046()
{
	var_23_bool = 0; // 0x417 PushV
	var_23_bool = 0; // 0x418 MovB
	var_24_int = 0; var_25_string = ""; // 0x419 PushV
	var_25_string = "k9q01BurahTalk"; // 0x41a MovS
	func_996(var_24_int, var_25_string); // 0x41b NEW_2
	var_28_int = 0; // 0x41d PushI
	var_29_bool = var_24_int != var_28_int; // 0x41e Neq
	if(var_29_bool == 0) goto Label_1064; // 0x41f JumpB
	var_30_int = 0; var_31_string = ""; // 0x420 PushV
	var_31_string = "k9q01DankoTalk"; // 0x421 MovS
	func_996(var_30_int, var_31_string); // 0x422 NEW_2
	var_32_int = 0; // 0x424 PushI
	var_33_bool = var_30_int != var_32_int; // 0x425 Neq
	if(var_33_bool == 0) goto Label_1064; // 0x426 JumpB
	var_23_bool = 1; // 0x427 MovB
	
Label_1064:
	if(var_23_bool == 0) goto Label_1072; // 0x428 JumpB
	var_34_string = "k9q01"; // 0x429 PushS
	var_35_int = 3; // 0x42a PushI
	SetVariable(var_34_string, var_35_int); // 0x42b Func
	func_1097(); // 0x42e NEW_2
	
Label_1072:
	return 0; // 0x430 Return
}


func_1176(var_80_bool)
{
	var_80_bool = 1; // 0x498 MovB
	return 0; // 0x499 Return
}


func_665()
{
	StopAnimation(); // 0x299 Func
	StopGroup0(); // 0x29b Func
	return 0; // 0x29d Return
}


func_540()
{
	StopGroup0(); // 0x21c Func
	func_483(); // 0x21f NEW_2
	var_8_string = ""; // 0x221 PushV
	var_8_string = "Neutral"; // 0x222 MovS
	func_927(var_8_string); // 0x223 NEW_2
	func_474(); // 0x226 NEW_2
	return 0; // 0x228 Return
}


func_670(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x29e PushV
	GetPosition(var_27_cvector); // 0x29f Func
	GetPosition(var_28_cvector); // 0x2a1 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2a3 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2a4 Or2
	return 6; // 0x2a5 Return
}


func_158(var_2_object, var_200_string)
{
	var_201_bool = 0; // 0x9f PushV
	func_1176(var_201_bool); // 0xa0 NEW_2
	var_202_bool = var_201_bool == 0; // 0xa2 Not
	if(var_202_bool == 0) goto Label_165; // 0xa3 JumpB
	return 0; // 0xa4 Return
	
Label_165:
	var_203_bool = var_200_string == var_2_object; // 0xa5 Eq
	if(var_203_bool == 0) goto Label_168; // 0xa6 JumpB
	return 0; // 0xa7 Return
	
Label_168:
	var_204_string = ""; var_205_bool = 0; // 0xa8 PushV
	var_204_string = var_200_string; // 0xa9 Mov
	var_206_string = ""; // 0xaa PushS
	var_207_bool = var_200_string == var_206_string; // 0xab Eq
	if(var_207_bool == 0) goto Label_175; // 0xac JumpB
	var_205_bool = 0; // 0xad MovB
	goto Label_176; // 0xae Jump
	
Label_176:
	func_943(var_204_string, var_205_bool); // 0xb0 NEW_2
	var_2_object = var_200_string; // 0xb2 TMov
	return 0; // 0xb3 Return
	
Label_175:
	var_205_bool = 1; // 0xaf MovB
}


func_927(var_244_string)
{
	var_245_bool = 0; var_246_float = 0; var_247_float = 0; var_248_bool = 0; var_249_float = 0; var_250_float = 0; // 0x39f PushV
	lshHasAnimation(var_248_bool, var_244_string); // 0x3a0 Func
	var_251_bool = var_248_bool; // 0x3a2 Push
	if(var_251_bool == 0) goto Label_938; // 0x3a3 JumpB
	lshGetAnimTimes(var_244_string, var_249_float, var_250_float); // 0x3a4 Func
	var_252_bool = 0; // 0x3a6 PushB
	lshPlayAnimation(var_249_float, var_250_float, var_252_bool); // 0x3a7 Func
	goto Label_942; // 0x3a9 Jump
	
Label_942:
	return 6; // 0x3ae Return
	
Label_938:
	var_253_string = "Can't find lsh animation : "; // 0x3aa PushS
	var_254_int = var_253_string + var_244_string; // 0x3ab Add
	Trace(var_254_int); // 0x3ac Func
}


func_418(var_0_object)
{
	var_7_bool = 0; // 0x1a2 PushV
	func_697(var_7_bool); // 0x1a3 NEW_2
	var_10_bool = var_7_bool == 0; // 0x1a5 Not
	if(var_10_bool == 0) goto Label_425; // 0x1a6 JumpB
	Hold(); // 0x1a7 Func
	
Label_425:
	GetDirection(var_0_object); // 0x1a9 Func
	
Label_427:
	func_594(); // 0x1ac NEW_2
	goto Label_427; // 0x1ae Jump
}


func_678(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x2a6 PushV
	GetPosition(var_20_cvector); // 0x2a7 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x2a9 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x2aa PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x2ab PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x2ac Func
	var_15_bool = var_22_bool; // 0x2ae Mov
	return 6; // 0x2af Return
}


func_943(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0; // 0x3af PushV
	lshHasAnimation(var_211_bool, var_204_string); // 0x3b0 Func
	var_214_bool = var_211_bool; // 0x3b2 Push
	if(var_214_bool == 0) goto Label_953; // 0x3b3 JumpB
	lshGetAnimTimes(var_204_string, var_212_float, var_213_float); // 0x3b4 Func
	lshPlayAnimation(var_212_float, var_213_float, var_205_bool); // 0x3b6 Func
	goto Label_957; // 0x3b8 Jump
	
Label_957:
	return 6; // 0x3bd Return
	
Label_953:
	var_215_string = "Can't find lsh animation : "; // 0x3b9 PushS
	var_216_int = var_215_string + var_204_string; // 0x3ba Add
	Trace(var_216_int); // 0x3bb Func
}


func_688(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x2b0 PushV
	GetPosition(var_14_cvector); // 0x2b1 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x2b3 PushV
	var_16_cvector = var_14_cvector; // 0x2b4 Mov
	func_678(var_15_bool, var_16_cvector); // 0x2b5 NEW_2
	var_11_bool = var_15_bool; // 0x2b6 Mov
	return 2; // 0x2b8 Return
}


func_1073(var_219_bool)
{
	var_221_int = 0; var_222_string = ""; // 0x432 PushV
	var_222_string = "k9q01"; // 0x433 MovS
	func_996(var_221_int, var_222_string); // 0x434 NEW_2
	var_225_int = 2; // 0x436 PushI
	var_226_bool = var_221_int == var_225_int; // 0x437 Eq
	if(var_226_bool == 0) goto Label_1083; // 0x438 JumpB
	var_219_bool = 1; // 0x439 MovB
	return 0; // 0x43a Return
	
Label_1083:
	var_219_bool = 0; // 0x43b MovB
	return 0; // 0x43c Return
}


func_432(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x1b0 PushV
	var_35_string = "player"; // 0x1b1 PushS
	FindActor(var_34_object, var_35_string); // 0x1b2 Func
	var_36_bool = var_34_object == 0; // 0x1b4 Not
	if(var_36_bool == 0) goto Label_440; // 0x1b5 JumpB
	var_32_bool = 0; // 0x1b6 MovB
	return 2; // 0x1b7 Return
	
Label_440:
	var_37_bool = 0; var_38_object = Obj(); // 0x1b8 PushV
	var_38_object = var_34_object; // 0x1b9 Mov
	func_688(var_38_object); // 0x1ba NEW_2
	var_32_bool = var_37_bool; // 0x1bb Mov
	return 2; // 0x1bd Return
}


func_697(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2b9 PushV
	IsLoaded(var_9_bool); // 0x2ba Func
	var_7_bool = var_9_bool; // 0x2bc Mov
	return 2; // 0x2bd Return
}


func_1085(var_227_bool)
{
	var_229_int = 0; var_230_string = ""; // 0x43e PushV
	var_230_string = "ook9DankoTermitnik2_1"; // 0x43f MovS
	func_996(var_229_int, var_230_string); // 0x440 NEW_2
	var_231_int = 0; // 0x442 PushI
	var_232_bool = var_229_int == var_231_int; // 0x443 Eq
	if(var_232_bool == 0) goto Label_1095; // 0x444 JumpB
	var_227_bool = 1; // 0x445 MovB
	return 0; // 0x446 Return
	
Label_1095:
	var_227_bool = 0; // 0x447 MovB
	return 0; // 0x448 Return
}


func_702(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x2be PushV
	GetPosition(var_50_cvector); // 0x2bf ObjFunc
	GetEyesHeight(var_49_float); // 0x2c1 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2c3 PushE
	var_58_float = var_58_float + var_49_float; // 0x2c4 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2c5 PopE
	GetPosition(var_51_cvector); // 0x2c6 Func
	GetEyesHeight(var_49_float); // 0x2c8 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x2ca PushE
	var_59_float = var_59_float + var_49_float; // 0x2cb Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x2cc PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x2cd Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x2ce PushE
	var_60_float = 0; // 0x2cf MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x2d0 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x2d1 Or
	var_62_float = sqrt(var_61_int); // 0x2d2 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x2d3 Div2
	var_53_cvector = -var_52_cvector; // 0x2d4 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x2d5 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x2d6 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x2d7 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x2d8 Xor2
	func_986(var_64_cvector, var_65_cvector); // 0x2d9 NEW_2
	var_72_int = 25; // 0x2db PushI
	var_73_float = var_64_cvector * var_72_int; // 0x2dc Mult
	var_74_int = var_63_float + var_73_float; // 0x2dd Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x2de PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x2df Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x2e0 Add2
	IsOverrideActive(var_56_bool); // 0x2e1 Func
	var_76_bool = var_56_bool; // 0x2e3 Push
	if(var_76_bool == 0) goto Label_743; // 0x2e4 JumpB
	var_37_bool = 0; // 0x2e5 MovB
	return 18; // 0x2e6 Return
	
Label_743:
	StopWorld(); // 0x2e7 Func
	var_77_bool = 1; // 0x2e9 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x2ea Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x2ec PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x2ed PushE
	Rotate(var_78_float, var_79_float); // 0x2ee Func
	var_80_bool = 0; // 0x2f0 PushV
	func_1176(var_80_bool); // 0x2f1 NEW_2
	if(var_80_bool == 0) goto Label_757; // 0x2f3 JumpB
	goto Label_765; // 0x2f4 Jump
	
Label_765:
	CameraWaitForPlayFinish(); // 0x2fd Func
	ResumeWorld(); // 0x2ff Func
	var_37_bool = 1; // 0x301 MovB
	return 18; // 0x302 Return
	
Label_757:
	var_81_string = "head"; // 0x2f5 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x2f6 Func
	var_82_bool = var_57_bool; // 0x2f8 Push
	if(var_82_bool == 0) goto Label_765; // 0x2f9 JumpB
	var_83_string = "head"; // 0x2fa PushS
	LookAsyncCamera(var_83_string); // 0x2fb Func
}


func_447(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1bf PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1c0 PushE
	RotateAsync(var_84_float, var_85_float); // 0x1c1 Func
	return 0; // 0x1c3 Return
}


func_958(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x3be PushV
	var_136_bool = 0; // 0x3bf PushV
	func_1176(var_136_bool); // 0x3c0 NEW_2
	if(var_136_bool == 0) goto Label_971; // 0x3c2 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x3c3 Func
	var_137_bool = var_135_bool; // 0x3c5 Push
	if(var_137_bool == 0) goto Label_971; // 0x3c6 JumpB
	lshPlaySpeech(var_133_string); // 0x3c7 Func
	var_132_bool = 1; // 0x3c9 MovB
	return 2; // 0x3ca Return
	
Label_971:
	var_132_bool = 0; // 0x3cb MovB
	return 2; // 0x3cc Return
}


func_452(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x1c4 PushV
	var_20_string = "player"; // 0x1c5 PushS
	FindActor(var_18_object, var_20_string); // 0x1c6 Func
	var_21_bool = var_18_object == 0; // 0x1c8 Not
	if(var_21_bool == 0) goto Label_460; // 0x1c9 JumpB
	var_15_bool = 0; // 0x1ca MovB
	return 4; // 0x1cb Return
	
Label_460:
	var_22_float = 0; var_23_object = Obj(); // 0x1cc PushV
	var_23_object = var_18_object; // 0x1cd Mov
	func_670(var_23_object); // 0x1ce NEW_2
	var_30_float = 90000.0; // 0x1d0 PushF
	var_31_bool = var_22_float > var_30_float; // 0x1d1 GT
	if(var_31_bool == 0) goto Label_469; // 0x1d2 JumpB
	var_15_bool = 0; // 0x1d3 MovB
	return 4; // 0x1d4 Return
	
Label_469:
	CanSee(var_19_bool, var_18_object); // 0x1d5 Func
	var_15_bool = var_19_bool; // 0x1d7 Mov
	return 4; // 0x1d8 Return
}


func_1097()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x449 PushV
	var_38_int = 520; // 0x44a PushI
	var_39_int = 1; // 0x44b PushI
	var_40_int = 529812; // 0x44c PushI
	CreateDiaryEntry(var_37_object, var_38_int, var_39_int, var_40_int); // 0x44d Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0x44f PushV
	var_42_object = var_37_object; // 0x450 Mov
	var_43_int = 517; // 0x451 MovI
	func_1123(var_41_bool, var_42_object, var_43_int); // 0x452 NEW_2
	return 2; // 0x454 Return
}


func_973()
{
	var_10_bool = 0; // 0x3cd PushV
	func_1176(var_10_bool); // 0x3ce NEW_2
	if(var_10_bool == 0) goto Label_979; // 0x3d0 JumpB
	lshStopSpeech(); // 0x3d1 Func
	
Label_979:
	return 0; // 0x3d3 Return
}


func_847(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x34f PushV
	var_116_string = "c"; // 0x350 MovS
	var_117_int = 0; // 0x351 MovI
	
Label_850:
	var_121_int = 1; // 0x352 PushI
	if(var_121_int == 0) goto Label_863; // 0x353 JumpB
	var_122_int = 1; // 0x354 PushI
	var_123_int = var_117_int + var_122_int; // 0x355 Add
	var_124_int = var_116_string + var_123_int; // 0x356 Add
	HasProperty(var_124_int, var_118_bool); // 0x357 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x359 Not
	if(var_125_bool == 0) goto Label_860; // 0x35a JumpB
	goto Label_863; // 0x35b Jump
	
Label_863:
	var_126_bool = var_117_int == 0; // 0x35f Not
	if(var_126_bool == 0) goto Label_867; // 0x360 JumpB
	var_109_bool = 0; // 0x361 MovB
	return 10; // 0x362 Return
	
Label_867:
	var_119_int = 0; // 0x363 MovI
	var_127_int = 1; // 0x364 PushI
	var_128_bool = var_117_int > var_127_int; // 0x365 GT
	if(var_128_bool == 0) goto Label_873; // 0x366 JumpB
	irand(var_119_int, var_117_int); // 0x367 Func
	
Label_873:
	var_129_int = 1; // 0x369 PushI
	var_130_int = var_119_int + var_129_int; // 0x36a Add
	var_131_int = var_116_string + var_130_int; // 0x36b Add
	GetProperty(var_131_int, var_120_string); // 0x36c ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x36e PushV
	var_133_string = var_120_string; // 0x36f Mov
	func_958(var_132_bool, var_133_string); // 0x370 NEW_2
	var_109_bool = var_132_bool; // 0x371 Mov
	return 10; // 0x373 Return
	
Label_860:
	var_138_int = 1; // 0x35c PushI
	var_117_int = var_117_int + var_138_int; // 0x35d Add2
	goto Label_850; // 0x35e Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_128; // 0x56 JumpB
	var_200_string = ""; // 0x57 PushV
	var_200_string = "Neutral"; // 0x58 MovS
	func_158(var_194_object, var_200_string); // 0x59 NEW_2
	var_217_int = 526491; // 0x5b PushI
	SetMessage(var_217_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_218_bool = 0; // 0x60 PushV
	var_218_bool = 0; // 0x61 MovB
	var_219_bool = 0; var_220_object = Obj(); // 0x62 PushV
	var_220_object = var_1_object; // 0x63 MovT
	func_1073(var_220_object); // 0x64 NEW_2
	if(var_219_bool == 0) goto Label_109; // 0x66 JumpB
	var_227_bool = 0; var_228_object = Obj(); // 0x67 PushV
	var_228_object = var_1_object; // 0x68 MovT
	func_1085(var_228_object); // 0x69 NEW_2
	if(var_227_bool == 0) goto Label_109; // 0x6b JumpB
	var_218_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_218_bool == 0) goto Label_115; // 0x6d JumpB
	var_233_int = 526492; // 0x6e PushI
	var_234_int = 27759; // 0x6f PushI
	var_235_int = 27758; // 0x70 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x71 TObjFunc
	
Label_115:
	var_236_int = 526497; // 0x73 PushI
	var_237_int = -1; // 0x74 PushI
	var_238_int = 27763; // 0x75 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x76 TObjFunc
	var_239_int = 528836; // 0x78 PushI
	var_240_int = -1; // 0x79 PushI
	var_241_int = 30254; // 0x7a PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x7b TObjFunc
	goto Label_128; // 0x7d Jump
	
Label_128:
	var_242_bool = 0; // 0x80 PushV
	func_1176(var_242_bool); // 0x81 NEW_2
	if(var_242_bool == 0) goto Label_143; // 0x83 JumpB
	
Label_132:
	lshWaitForAnimEnd(); // 0x84 Func
	var_243_string = var_3_string; // 0x86 PushT
	if(var_243_string == 0) goto Label_137; // 0x87 JumpB
	goto Label_142; // 0x88 Jump
	
Label_142:
	goto Label_157; // 0x8e Jump
	
Label_157:
	return 0; // 0x9d Return
	
Label_137:
	var_244_string = ""; // 0x89 PushV
	var_244_string = var_2_object; // 0x8a MovT
	func_927(var_244_string); // 0x8b NEW_2
	goto Label_132; // 0x8d Jump
	
Label_143:
	var_255_string = "all"; // 0x8f PushS
	var_256_string = "idle"; // 0x90 PushS
	PlayAnimation(var_255_string, var_256_string); // 0x91 Func
	
Label_147:
	WaitForAnimEnd(); // 0x93 Func
	var_257_string = var_3_string; // 0x95 PushT
	if(var_257_string == 0) goto Label_152; // 0x96 JumpB
	goto Label_157; // 0x97 Jump
	
Label_152:
	var_258_string = "all"; // 0x98 PushS
	var_259_string = "idle"; // 0x99 PushS
	PlayAnimation(var_258_string, var_259_string); // 0x9a Func
	goto Label_147; // 0x9c Jump
}


func_594()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x252 PushV
	WaitForAnimEnd(); // 0x253 Func
	var_23_bool = 0; // 0x255 PushV
	func_697(var_23_bool); // 0x256 NEW_2
	var_24_bool = var_23_bool == 0; // 0x258 Not
	if(var_24_bool == 0) goto Label_603; // 0x259 JumpB
	return 12; // 0x25a Return
	
Label_603:
	var_25_int = 0; // 0x25b PushV
	func_1017(var_25_int); // 0x25c NEW_2
	var_17_int = var_25_int; // 0x25d Mov
	var_18_int = 0; // 0x25f MovI
	
Label_608:
	var_38_bool = 0; // 0x260 PushV
	var_38_bool = 0; // 0x261 MovB
	var_39_int = 5; // 0x262 PushI
	var_40_bool = var_18_int < var_39_int; // 0x263 LT
	if(var_40_bool == 0) goto Label_618; // 0x264 JumpB
	var_41_bool = 0; // 0x265 PushV
	func_697(var_41_bool); // 0x266 NEW_2
	if(var_41_bool == 0) goto Label_618; // 0x268 JumpB
	var_38_bool = 1; // 0x269 MovB
	
Label_618:
	if(var_38_bool == 0) goto Label_660; // 0x26a JumpB
	var_42_bool = var_17_int == 0; // 0x26b Not
	if(var_42_bool == 0) goto Label_628; // 0x26c JumpB
	var_43_int = 3; // 0x26d PushI
	Sleep(var_43_int, var_19_bool); // 0x26e Func
	var_44_bool = var_19_bool == 0; // 0x270 Not
	if(var_44_bool == 0) goto Label_627; // 0x271 JumpB
	goto Label_660; // 0x272 Jump
	
Label_660:
	ResetAAS(); // 0x294 Func
	return 12; // 0x296 Return
	
Label_627:
	goto Label_649; // 0x273 Jump
	
Label_649:
	var_45_bool = 0; // 0x289 PushV
	func_663(var_45_bool); // 0x28a NEW_2
	var_46_bool = var_45_bool == 0; // 0x28c Not
	if(var_46_bool == 0) goto Label_655; // 0x28d JumpB
	goto Label_660; // 0x28e Jump
	
Label_655:
	ResetAAS(); // 0x28f Func
	var_47_int = 1; // 0x291 PushI
	var_18_int = var_18_int + var_47_int; // 0x292 Add2
	goto Label_608; // 0x293 Jump
	
Label_628:
	irand(var_20_int, var_17_int); // 0x274 Func
	var_48_int = 5; // 0x276 PushI
	irand(var_21_int, var_48_int); // 0x277 Func
	var_49_int = 0; // 0x279 PushI
	var_50_bool = var_21_int != var_49_int; // 0x27a Neq
	if(var_50_bool == 0) goto Label_637; // 0x27b JumpB
	var_20_int = 0; // 0x27c MovI
	
Label_637:
	var_51_string = "all"; // 0x27d PushS
	var_52_string = ""; var_53_int = 0; // 0x27e PushV
	var_53_int = var_20_int; // 0x27f Mov
	func_1010(var_52_string, var_53_int); // 0x280 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x282 Func
	WaitForAnimEnd(var_22_bool); // 0x284 Func
	var_54_bool = var_22_bool == 0; // 0x286 Not
	if(var_54_bool == 0) goto Label_649; // 0x287 JumpB
	goto Label_660; // 0x288 Jump
}


func_980(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x3d4 PushV
	self(var_102_object); // 0x3d5 Func
	var_100_object = var_102_object; // 0x3d7 Mov
	return 2; // 0x3d8 Return
}


func_1110(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x456 PushV
	GetDiaryRoot(var_52_object); // 0x457 Func
	var_53_bool = var_52_object == 0; // 0x459 Not
	if(var_53_bool == 0) goto Label_1120; // 0x45a JumpB
	var_54_string = "Can't retrieve diary root"; // 0x45b PushS
	Trace(var_54_string); // 0x45c Func
	var_50_object = 0; // 0x45e MovB
	return 2; // 0x45f Return
	
Label_1120:
	var_50_object = var_52_object; // 0x460 Mov
	return 2; // 0x461 Return
}


func_474()
{
	var_271_float = 0; var_272_float = 0; // 0x1da PushV
	var_273_int = 8; // 0x1db PushI
	var_274_int = 16; // 0x1dc PushI
	rand(var_272_float, var_273_int, var_274_int); // 0x1dd Func
	var_275_int = 10; // 0x1df PushI
	SetTimer(var_275_int, var_272_float); // 0x1e0 Func
	return 2; // 0x1e2 Return
}


func_986(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x3da PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x3db Or
	var_68_float = sqrt(var_69_int); // 0x3dc Sqrt2
	var_70_float = 0.0; // 0x3dd PushF
	var_71_bool = var_68_float < var_70_float; // 0x3de LT
	if(var_71_bool == 0) goto Label_994; // 0x3df JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x3e0 MovV
	return 2; // 0x3e1 Return
	
Label_994:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x3e2 Div2
	return 2; // 0x3e3 Return
}


func_483()
{
	var_270_int = 10; // 0x1e3 PushI
	KillTimer(var_270_int); // 0x1e4 Func
	return 0; // 0x1e6 Return
}


func_996(var_221_int, var_222_string)
{
	var_223_int = 0; var_224_int = 0; // 0x3e4 PushV
	GetVariable(var_222_string, var_224_int); // 0x3e5 Func
	var_221_int = var_224_int; // 0x3e7 Mov
	return 2; // 0x3e8 Return
}


func_1123(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; // 0x463 PushV
	var_50_object = Obj(); // 0x464 PushV
	func_1110(var_50_object); // 0x465 NEW_2
	var_47_object = var_50_object; // 0x466 Mov
	Find(var_43_int, var_48_object); // 0x468 ObjFunc
	var_55_bool = var_48_object == 0; // 0x46a Not
	if(var_55_bool == 0) goto Label_1138; // 0x46b JumpB
	var_56_string = "Can't find diary parent with id: "; // 0x46c PushS
	var_57_int = var_56_string + var_43_int; // 0x46d Add
	Trace(var_57_int); // 0x46e Func
	var_41_bool = 0; // 0x470 MovB
	return 6; // 0x471 Return
	
Label_1138:
	AddChild(var_42_object); // 0x472 ObjFunc
	var_58_int = 7; // 0x474 PushI
	SendWorldWndMessage(var_58_int); // 0x475 Func
	GetCategory(var_49_int); // 0x477 ObjFunc
	SetDiarySection(var_49_int); // 0x479 Func
	var_41_bool = 0; // 0x47b MovB
	return 6; // 0x47c Return
}


func_1001(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x3e9 PushV
	GetGameTime(var_155_float); // 0x3ea Func
	var_156_int = 1; // 0x3ec PushI
	var_157_int = 0; // 0x3ed PushV
	var_158_int = 24; // 0x3ee PushI
	var_157_int = var_155_float / var_155_float; // 0x3ef Div2
	var_153_int = var_156_int + var_157_int; // 0x3f0 Add2
	return 2; // 0x3f1 Return
}


func_369(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x172 PushV
	var_27_object = var_25_object; // 0x173 Mov
	TaskCall(0); // 0x174 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x175 NEW_2
	TaskReturn(); // 0x176 TaskReturn
	return 0; // 0x178 Return
}


func_1010(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x3f2 PushV
	var_34_string = "idle"; // 0x3f3 MovS
	var_35_int = var_32_int; // 0x3f4 Push
	if(var_35_int == 0) goto Label_1015; // 0x3f5 JumpB
	var_34_string = var_34_string + var_32_int; // 0x3f6 Add2
	
Label_1015:
	var_31_string = var_34_string; // 0x3f7 Mov
	return 2; // 0x3f8 Return
}


func_884(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x374 PushV
	var_152_string = "d"; // 0x375 PushS
	var_153_int = 0; // 0x376 PushV
	func_1001(var_153_int); // 0x377 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x379 Add
	var_160_string = "m"; // 0x37a PushS
	var_147_string = var_159_int + var_160_string; // 0x37b Add2
	var_148_int = 0; // 0x37c MovI
	
Label_893:
	var_161_int = 1; // 0x37d PushI
	if(var_161_int == 0) goto Label_906; // 0x37e JumpB
	var_162_int = 1; // 0x37f PushI
	var_163_int = var_148_int + var_162_int; // 0x380 Add
	var_164_int = var_147_string + var_163_int; // 0x381 Add
	HasProperty(var_164_int, var_149_bool); // 0x382 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x384 Not
	if(var_165_bool == 0) goto Label_903; // 0x385 JumpB
	goto Label_906; // 0x386 Jump
	
Label_906:
	var_166_bool = var_148_int == 0; // 0x38a Not
	if(var_166_bool == 0) goto Label_910; // 0x38b JumpB
	var_140_bool = 0; // 0x38c MovB
	return 10; // 0x38d Return
	
Label_910:
	var_150_int = 0; // 0x38e MovI
	var_167_int = 1; // 0x38f PushI
	var_168_bool = var_148_int > var_167_int; // 0x390 GT
	if(var_168_bool == 0) goto Label_916; // 0x391 JumpB
	irand(var_150_int, var_148_int); // 0x392 Func
	
Label_916:
	var_169_int = 1; // 0x394 PushI
	var_170_int = var_150_int + var_169_int; // 0x395 Add
	var_171_int = var_147_string + var_170_int; // 0x396 Add
	GetProperty(var_171_int, var_151_string); // 0x397 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x399 PushV
	var_173_string = var_151_string; // 0x39a Mov
	func_958(var_172_bool, var_173_string); // 0x39b NEW_2
	var_140_bool = var_172_bool; // 0x39c Mov
	return 10; // 0x39e Return
	
Label_903:
	var_174_int = 1; // 0x387 PushI
	var_148_int = var_148_int + var_174_int; // 0x388 Add2
	goto Label_893; // 0x389 Jump
}


func_1017(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x3f9 PushV
	var_28_int = 0; // 0x3fa MovI
	
Label_1019:
	var_30_string = "all"; // 0x3fb PushS
	var_31_string = ""; var_32_int = 0; // 0x3fc PushV
	var_32_int = var_28_int; // 0x3fd Mov
	func_1010(var_31_string, var_32_int); // 0x3fe NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x400 Func
	var_36_bool = var_29_bool == 0; // 0x402 Not
	if(var_36_bool == 0) goto Label_1029; // 0x403 JumpB
	goto Label_1032; // 0x404 Jump
	
Label_1032:
	var_25_int = var_28_int; // 0x408 Mov
	return 4; // 0x409 Return
	
Label_1029:
	var_37_int = 1; // 0x405 PushI
	var_28_int = var_28_int + var_37_int; // 0x406 Add2
	goto Label_1019; // 0x407 Jump
}


func_1151(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x47f PushV
	var_92_string = "branch"; // 0x480 PushS
	GetVariable(var_92_string, var_91_int); // 0x481 Func
	var_93_int = 0; // 0x483 PushI
	var_94_bool = var_91_int == var_93_int; // 0x484 Eq
	if(var_94_bool == 0) goto Label_1161; // 0x485 JumpB
	var_89_int = 1; // 0x486 MovI
	return 2; // 0x487 Return
	
Label_1161:
	var_95_int = 1; // 0x489 PushI
	var_96_bool = var_91_int == var_95_int; // 0x48a Eq
	if(var_96_bool == 0) goto Label_1166; // 0x48b JumpB
	var_89_int = 2; // 0x48c MovI
	return 2; // 0x48d Return
	
Label_1166:
	var_89_int = 3; // 0x48e MovI
	return 2; // 0x48f Return
}


