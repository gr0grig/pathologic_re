task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xbb PushI
	if(var_9_int == 0) goto Label_340; // 0xbc JumpB
	func_943(); // 0xbe NEW_2
	var_11_int = 26978; // 0xc0 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc1 Eq
	if(var_12_bool == 0) goto Label_210; // 0xc2 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc3 PushV
	var_13_object = var_1_object; // 0xc4 MovT
	var_14_object = var_0_object; // 0xc5 MovT
	func_1050(); // 0xc6 NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0xc8 PushV
	var_42_object = var_1_object; // 0xc9 MovT
	var_43_object = var_0_object; // 0xca MovT
	func_1063(var_43_object); // 0xcb NEW_2
	var_70_object = Obj(); var_71_object = Obj(); // 0xcd PushV
	var_70_object = var_1_object; // 0xce MovT
	var_71_object = var_0_object; // 0xcf MovT
	func_1092(var_71_object); // 0xd0 NEW_2
	
Label_210:
	var_85_int = 26979; // 0xd2 PushI
	var_86_bool = var_8_bool == var_85_int; // 0xd3 Eq
	if(var_86_bool == 0) goto Label_218; // 0xd4 JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0xd5 PushV
	var_87_object = var_1_object; // 0xd6 MovT
	var_88_object = var_0_object; // 0xd7 MovT
	func_1041(); // 0xd8 NEW_2
	
Label_218:
	var_91_int = 26977; // 0xda PushI
	var_92_bool = var_7_cvector == var_91_int; // 0xdb Eq
	if(var_92_bool == 0) goto Label_266; // 0xdc JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0xdd PushV
	var_94_object = var_1_object; // 0xde MovT
	func_1121(var_94_object); // 0xdf NEW_2
	if(var_93_bool == 0) goto Label_246; // 0xe1 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0xe2 PushV
	var_101_object = var_1_object; // 0xe3 MovT
	var_102_object = var_0_object; // 0xe4 MovT
	func_1035(); // 0xe5 NEW_2
	var_105_string = ""; // 0xe7 PushV
	var_105_string = "Sorrow"; // 0xe8 MovS
	func_164(var_8_bool, var_105_string); // 0xe9 NEW_2
	var_122_int = 525635; // 0xeb PushI
	SetMessage(var_122_int); // 0xec TObjFunc
	ClearReplies(); // 0xee TObjFunc
	var_123_int = 529332; // 0xf0 PushI
	var_124_int = 30788; // 0xf1 PushI
	var_125_int = 30787; // 0xf2 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_126_string = ""; // 0xf6 PushV
	var_126_string = "Neutral"; // 0xf7 MovS
	func_164(var_8_bool, var_126_string); // 0xf8 NEW_2
	var_127_int = 525638; // 0xfa PushI
	SetMessage(var_127_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_128_int = 525639; // 0xff PushI
	var_129_int = -1; // 0x100 PushI
	var_130_int = 26981; // 0x101 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x102 TObjFunc
	var_131_int = 529336; // 0x104 PushI
	var_132_int = -1; // 0x105 PushI
	var_133_int = 30791; // 0x106 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_134_int = 42695; // 0x10a PushI
	var_135_bool = var_7_cvector == var_134_int; // 0x10b Eq
	if(var_135_bool == 0) goto Label_269; // 0x10c JumpB
	
Label_269:
	var_136_int = 30788; // 0x10d PushI
	var_137_bool = var_7_cvector == var_136_int; // 0x10e Eq
	if(var_137_bool == 0) goto Label_287; // 0x10f JumpB
	var_138_string = ""; // 0x110 PushV
	var_138_string = "Agression"; // 0x111 MovS
	func_164(var_8_bool, var_138_string); // 0x112 NEW_2
	var_139_int = 529333; // 0x114 PushI
	SetMessage(var_139_int); // 0x115 TObjFunc
	ClearReplies(); // 0x117 TObjFunc
	var_140_int = 540668; // 0x119 PushI
	var_141_int = 42699; // 0x11a PushI
	var_142_int = 42698; // 0x11b PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x11c TObjFunc
	return 0; // 0x11e Return
	
Label_287:
	var_143_int = 42699; // 0x11f PushI
	var_144_bool = var_7_cvector == var_143_int; // 0x120 Eq
	if(var_144_bool == 0) goto Label_305; // 0x121 JumpB
	var_145_string = ""; // 0x122 PushV
	var_145_string = "Agression"; // 0x123 MovS
	func_164(var_8_bool, var_145_string); // 0x124 NEW_2
	var_146_int = 540669; // 0x126 PushI
	SetMessage(var_146_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_147_int = 529334; // 0x12b PushI
	var_148_int = 30790; // 0x12c PushI
	var_149_int = 30789; // 0x12d PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x12e TObjFunc
	return 0; // 0x130 Return
	
Label_305:
	var_150_int = 30790; // 0x131 PushI
	var_151_bool = var_7_cvector == var_150_int; // 0x132 Eq
	if(var_151_bool == 0) goto Label_328; // 0x133 JumpB
	var_152_string = ""; // 0x134 PushV
	var_152_string = "Doubt"; // 0x135 MovS
	func_164(var_8_bool, var_152_string); // 0x136 NEW_2
	var_153_int = 529335; // 0x138 PushI
	SetMessage(var_153_int); // 0x139 TObjFunc
	ClearReplies(); // 0x13b TObjFunc
	var_154_int = 525636; // 0x13d PushI
	var_155_int = -1; // 0x13e PushI
	var_156_int = 26978; // 0x13f PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x140 TObjFunc
	var_157_int = 525637; // 0x142 PushI
	var_158_int = -1; // 0x143 PushI
	var_159_int = 26979; // 0x144 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_3_string = 1; // 0x148 TMovB
	var_160_bool = 0; // 0x149 PushV
	func_1212(var_160_bool); // 0x14a NEW_2
	if(var_160_bool == 0) goto Label_336; // 0x14c JumpB
	lshStopAnimation(); // 0x14d Func
	goto Label_338; // 0x14f Jump
	
Label_338:
	return 0; // 0x152 Return
	
Label_336:
	StopAnimation(); // 0x150 Func
	
Label_340:
	return 0; // 0x154 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x161 PushV
	var_10_string = "cleanup"; // 0x162 PushS
	var_11_bool = var_7_string == var_10_string; // 0x163 Eq
	if(var_11_bool == 0) goto Label_368; // 0x164 JumpB
	var_1_object = 1; // 0x165 TMovB
	IsLoaded(var_9_bool); // 0x166 Func
	var_12_bool = var_9_bool == 0; // 0x168 Not
	if(var_12_bool == 0) goto Label_367; // 0x169 JumpB
	var_13_object = Obj(); // 0x16a PushV
	func_950(var_13_object); // 0x16b NEW_2
	RemoveActor(var_13_object); // 0x16d Func
	
Label_367:
	goto Label_372; // 0x16f Jump
	
Label_372:
	return 2; // 0x174 Return
	
Label_368:
	var_16_string = "restore"; // 0x170 PushS
	var_17_bool = var_7_string == var_16_string; // 0x171 Eq
	if(var_17_bool == 0) goto Label_372; // 0x172 JumpB
	var_1_object = 0; // 0x173 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x175 PushT
	if(var_7_object == 0) goto Label_382; // 0x176 JumpB
	var_8_object = Obj(); // 0x177 PushV
	func_950(var_8_object); // 0x178 NEW_2
	RemoveActor(var_8_object); // 0x17a Func
	Hold(); // 0x17c Func
	
Label_382:
	func_497(); // 0x17f NEW_2
	return 0; // 0x181 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_512(); // 0x183 NEW_2
	return 0; // 0x185 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x1cc PushI
	var_9_bool = var_7_int == var_8_int; // 0x1cd Eq
	if(var_9_bool == 0) goto Label_496; // 0x1ce JumpB
	func_455(); // 0x1d0 NEW_2
	var_11_bool = 0; // 0x1d2 PushV
	var_11_bool = 0; // 0x1d3 MovB
	var_12_bool = 0; // 0x1d4 PushV
	func_669(var_12_bool); // 0x1d5 NEW_2
	if(var_12_bool == 0) goto Label_477; // 0x1d7 JumpB
	var_15_bool = 0; // 0x1d8 PushV
	func_424(var_15_bool); // 0x1d9 NEW_2
	if(var_15_bool == 0) goto Label_477; // 0x1db JumpB
	var_11_bool = 1; // 0x1dc MovB
	
Label_477:
	if(var_11_bool == 0) goto Label_490; // 0x1dd JumpB
	var_32_bool = 0; // 0x1de PushV
	func_404(var_32_bool); // 0x1df NEW_2
	if(var_32_bool == 0) goto Label_489; // 0x1e1 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x1e2 PushV
	var_53_object = Obj(); // 0x1e3 PushV
	func_950(var_53_object); // 0x1e4 NEW_2
	var_52_object = var_53_object; // 0x1e5 Mov
	func_817(var_52_object); // 0x1e7 NEW_2
	
Label_489:
	goto Label_496; // 0x1e9 Jump
	
Label_496:
	return 0; // 0x1f0 Return
	
Label_490:
	func_419(var_7_int); // 0x1eb NEW_2
	func_446(); // 0x1ee NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x20e Push
	if(var_8_bool == 0) goto Label_532; // 0x20f JumpB
	func_446(); // 0x211 NEW_2
	goto Label_536; // 0x213 Jump
	
Label_536:
	return 0; // 0x218 Return
	
Label_532:
	var_14_string = ""; // 0x214 PushV
	var_14_string = "Neutral"; // 0x215 MovS
	func_897(var_14_string); // 0x216 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x219 PushV
	IsOverrideActive(var_9_bool); // 0x21a Func
	var_10_bool = var_9_bool == 0; // 0x21c Not
	if(var_10_bool == 0) goto Label_565; // 0x21d JumpB
	EventDisable(0); // 0x21e EventDisable
	func_637(); // 0x220 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x222 PushV
	var_12_object = var_7_object; // 0x223 Mov
	func_660(var_12_object); // 0x224 NEW_2
	EventEnable(0); // 0x226 EventEnable
	var_25_object = Obj(); // 0x227 PushV
	var_25_object = var_7_object; // 0x228 Mov
	func_341(var_25_object); // 0x229 NEW_2
	var_266_string = ""; // 0x22b PushV
	var_266_string = "Neutral"; // 0x22c MovS
	func_897(var_266_string); // 0x22d NEW_2
	func_455(); // 0x230 NEW_2
	func_446(); // 0x233 NEW_2
	
Label_565:
	return 2; // 0x235 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_390(var_6_bool); // 0x15e NEW_2
	return 0; // 0x160 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_674(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1206(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1204(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1208(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1210(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1187(var_88_int); // 0x22 NEW_2
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
	func_950(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_759(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_258_bool = var_36_bool == 0; // 0x3f Not
	if(var_258_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_259_object = Obj(); // 0x46 PushV
	var_259_object = var_27_object; // 0x47 Mov
	func_742(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_897(var_234_string)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0; // 0x381 PushV
	lshHasAnimation(var_238_bool, var_234_string); // 0x382 Func
	var_241_bool = var_238_bool; // 0x384 Push
	if(var_241_bool == 0) goto Label_908; // 0x385 JumpB
	lshGetAnimTimes(var_234_string, var_239_float, var_240_float); // 0x386 Func
	var_242_bool = 0; // 0x388 PushB
	lshPlayAnimation(var_239_float, var_240_float, var_242_bool); // 0x389 Func
	goto Label_912; // 0x38b Jump
	
Label_912:
	return 6; // 0x390 Return
	
Label_908:
	var_243_string = "Can't find lsh animation : "; // 0x38c PushS
	var_244_int = var_243_string + var_234_string; // 0x38d Add
	Trace(var_244_int); // 0x38e Func
}


func_642(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x282 PushV
	GetPosition(var_27_cvector); // 0x283 Func
	GetPosition(var_28_cvector); // 0x285 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x287 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x288 Or2
	return 6; // 0x289 Return
}


func_512()
{
	StopGroup0(); // 0x200 Func
	func_455(); // 0x203 NEW_2
	var_8_string = ""; // 0x205 PushV
	var_8_string = "Neutral"; // 0x206 MovS
	func_897(var_8_string); // 0x207 NEW_2
	func_446(); // 0x20a NEW_2
	return 0; // 0x20c Return
}


func_1018(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x3fa PushV
	var_28_int = 0; // 0x3fb MovI
	
Label_1020:
	var_30_string = "all"; // 0x3fc PushS
	var_31_string = ""; var_32_int = 0; // 0x3fd PushV
	var_32_int = var_28_int; // 0x3fe Mov
	func_1011(var_31_string, var_32_int); // 0x3ff NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x401 Func
	var_36_bool = var_29_bool == 0; // 0x403 Not
	if(var_36_bool == 0) goto Label_1030; // 0x404 JumpB
	goto Label_1033; // 0x405 Jump
	
Label_1033:
	var_25_int = var_28_int; // 0x409 Mov
	return 4; // 0x40a Return
	
Label_1030:
	var_37_int = 1; // 0x406 PushI
	var_28_int = var_28_int + var_37_int; // 0x407 Add2
	goto Label_1020; // 0x408 Jump
}


func_390(var_0_object)
{
	var_7_bool = 0; // 0x186 PushV
	func_669(var_7_bool); // 0x187 NEW_2
	var_10_bool = var_7_bool == 0; // 0x189 Not
	if(var_10_bool == 0) goto Label_397; // 0x18a JumpB
	Hold(); // 0x18b Func
	
Label_397:
	GetDirection(var_0_object); // 0x18d Func
	
Label_399:
	func_566(); // 0x190 NEW_2
	goto Label_399; // 0x192 Jump
}


func_1159(var_24_bool, var_25_object, var_26_int)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; // 0x487 PushV
	var_33_object = Obj(); // 0x488 PushV
	func_1146(var_33_object); // 0x489 NEW_2
	var_30_object = var_33_object; // 0x48a Mov
	Find(var_26_int, var_31_object); // 0x48c ObjFunc
	var_38_bool = var_31_object == 0; // 0x48e Not
	if(var_38_bool == 0) goto Label_1174; // 0x48f JumpB
	var_39_string = "Can't find diary parent with id: "; // 0x490 PushS
	var_40_int = var_39_string + var_26_int; // 0x491 Add
	Trace(var_40_int); // 0x492 Func
	var_24_bool = 0; // 0x494 MovB
	return 6; // 0x495 Return
	
Label_1174:
	AddChild(var_25_object); // 0x496 ObjFunc
	var_41_int = 7; // 0x498 PushI
	SendWorldWndMessage(var_41_int); // 0x499 Func
	GetCategory(var_32_int); // 0x49b ObjFunc
	SetDiarySection(var_32_int); // 0x49d Func
	var_24_bool = 0; // 0x49f MovB
	return 6; // 0x4a0 Return
}


func_650(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x28a PushV
	GetPosition(var_20_cvector); // 0x28b Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x28d Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x28e PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x28f PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x290 Func
	var_15_bool = var_22_bool; // 0x292 Mov
	return 6; // 0x293 Return
}


func_1035()
{
	var_209_string = "ook3BurahIndoor1"; // 0x40c PushS
	var_210_int = 1; // 0x40d PushI
	SetVariable(var_209_string, var_210_int); // 0x40e Func
	return 0; // 0x410 Return
}


func_913(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x391 PushV
	lshHasAnimation(var_222_bool, var_215_string); // 0x392 Func
	var_225_bool = var_222_bool; // 0x394 Push
	if(var_225_bool == 0) goto Label_923; // 0x395 JumpB
	lshGetAnimTimes(var_215_string, var_223_float, var_224_float); // 0x396 Func
	lshPlayAnimation(var_223_float, var_224_float, var_216_bool); // 0x398 Func
	goto Label_927; // 0x39a Jump
	
Label_927:
	return 6; // 0x39f Return
	
Label_923:
	var_226_string = "Can't find lsh animation : "; // 0x39b PushS
	var_227_int = var_226_string + var_215_string; // 0x39c Add
	Trace(var_227_int); // 0x39d Func
}


func_1041()
{
	var_89_string = "k3q04"; // 0x412 PushS
	var_90_int = 3; // 0x413 PushI
	SetVariable(var_89_string, var_90_int); // 0x414 Func
	func_1133(); // 0x417 NEW_2
	return 0; // 0x419 Return
}


func_660(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x294 PushV
	GetPosition(var_14_cvector); // 0x295 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x297 PushV
	var_16_cvector = var_14_cvector; // 0x298 Mov
	func_650(var_15_bool, var_16_cvector); // 0x299 NEW_2
	var_11_bool = var_15_bool; // 0x29a Mov
	return 2; // 0x29c Return
}


func_404(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x194 PushV
	var_35_string = "player"; // 0x195 PushS
	FindActor(var_34_object, var_35_string); // 0x196 Func
	var_36_bool = var_34_object == 0; // 0x198 Not
	if(var_36_bool == 0) goto Label_412; // 0x199 JumpB
	var_32_bool = 0; // 0x19a MovB
	return 2; // 0x19b Return
	
Label_412:
	var_37_bool = 0; var_38_object = Obj(); // 0x19c PushV
	var_38_object = var_34_object; // 0x19d Mov
	func_660(var_38_object); // 0x19e NEW_2
	var_32_bool = var_37_bool; // 0x19f Mov
	return 2; // 0x1a1 Return
}


func_1050()
{
	var_15_string = "k3q04"; // 0x41b PushS
	var_16_int = 3; // 0x41c PushI
	SetVariable(var_15_string, var_16_int); // 0x41d Func
	var_17_string = "k3q04Promise"; // 0x41f PushS
	var_18_int = 1; // 0x420 PushI
	SetVariable(var_17_string, var_18_int); // 0x421 Func
	func_1133(); // 0x424 NEW_2
	return 0; // 0x426 Return
}


func_669(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x29d PushV
	IsLoaded(var_9_bool); // 0x29e Func
	var_7_bool = var_9_bool; // 0x2a0 Mov
	return 2; // 0x2a1 Return
}


func_928(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x3a0 PushV
	var_135_bool = 0; // 0x3a1 PushV
	func_1212(var_135_bool); // 0x3a2 NEW_2
	if(var_135_bool == 0) goto Label_941; // 0x3a4 JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x3a5 Func
	var_136_bool = var_134_bool; // 0x3a7 Push
	if(var_136_bool == 0) goto Label_941; // 0x3a8 JumpB
	lshPlaySpeech(var_132_string); // 0x3a9 Func
	var_131_bool = 1; // 0x3ab MovB
	return 2; // 0x3ac Return
	
Label_941:
	var_131_bool = 0; // 0x3ad MovB
	return 2; // 0x3ae Return
}


func_674(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x2a2 PushV
	GetPosition(var_50_cvector); // 0x2a3 ObjFunc
	GetEyesHeight(var_49_float); // 0x2a5 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2a7 PushE
	var_58_float = var_58_float + var_49_float; // 0x2a8 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2a9 PopE
	GetPosition(var_51_cvector); // 0x2aa Func
	GetEyesHeight(var_49_float); // 0x2ac Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x2ae PushE
	var_59_float = var_59_float + var_49_float; // 0x2af Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x2b0 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x2b1 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x2b2 PushE
	var_60_float = 0; // 0x2b3 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x2b4 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x2b5 Or
	var_62_float = sqrt(var_61_int); // 0x2b6 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x2b7 Div2
	var_53_cvector = -var_52_cvector; // 0x2b8 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x2b9 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x2ba PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x2bb PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x2bc Xor2
	func_956(var_64_cvector, var_65_cvector); // 0x2bd NEW_2
	var_72_int = 25; // 0x2bf PushI
	var_73_float = var_64_cvector * var_72_int; // 0x2c0 Mult
	var_74_int = var_63_float + var_73_float; // 0x2c1 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x2c2 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x2c3 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x2c4 Add2
	IsOverrideActive(var_56_bool); // 0x2c5 Func
	var_76_bool = var_56_bool; // 0x2c7 Push
	if(var_76_bool == 0) goto Label_715; // 0x2c8 JumpB
	var_37_bool = 0; // 0x2c9 MovB
	return 18; // 0x2ca Return
	
Label_715:
	StopWorld(); // 0x2cb Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x2cd Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x2cf PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x2d0 PushE
	Rotate(var_77_float, var_78_float); // 0x2d1 Func
	var_79_bool = 0; // 0x2d3 PushV
	func_1212(var_79_bool); // 0x2d4 NEW_2
	if(var_79_bool == 0) goto Label_728; // 0x2d6 JumpB
	goto Label_736; // 0x2d7 Jump
	
Label_736:
	CameraWaitForPlayFinish(); // 0x2e0 Func
	ResumeWorld(); // 0x2e2 Func
	var_37_bool = 1; // 0x2e4 MovB
	return 18; // 0x2e5 Return
	
Label_728:
	var_80_string = "head"; // 0x2d8 PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x2d9 Func
	var_81_bool = var_57_bool; // 0x2db Push
	if(var_81_bool == 0) goto Label_736; // 0x2dc JumpB
	var_82_string = "head"; // 0x2dd PushS
	LookAsyncCamera(var_82_string); // 0x2de Func
}


func_1187(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x4a3 PushV
	var_91_string = "branch"; // 0x4a4 PushS
	GetVariable(var_91_string, var_90_int); // 0x4a5 Func
	var_92_int = 0; // 0x4a7 PushI
	var_93_bool = var_90_int == var_92_int; // 0x4a8 Eq
	if(var_93_bool == 0) goto Label_1197; // 0x4a9 JumpB
	var_88_int = 1; // 0x4aa MovI
	return 2; // 0x4ab Return
	
Label_1197:
	var_94_int = 1; // 0x4ad PushI
	var_95_bool = var_90_int == var_94_int; // 0x4ae Eq
	if(var_95_bool == 0) goto Label_1202; // 0x4af JumpB
	var_88_int = 2; // 0x4b0 MovI
	return 2; // 0x4b1 Return
	
Label_1202:
	var_88_int = 3; // 0x4b2 MovI
	return 2; // 0x4b3 Return
}


func_164(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0xa5 PushV
	func_1212(var_212_bool); // 0xa6 NEW_2
	var_213_bool = var_212_bool == 0; // 0xa8 Not
	if(var_213_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_214_bool = var_211_string == var_2_object; // 0xab Eq
	if(var_214_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_215_string = ""; var_216_bool = 0; // 0xae PushV
	var_215_string = var_211_string; // 0xaf Mov
	var_217_string = ""; // 0xb0 PushS
	var_218_bool = var_211_string == var_217_string; // 0xb1 Eq
	if(var_218_bool == 0) goto Label_181; // 0xb2 JumpB
	var_216_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_913(var_215_string, var_216_bool); // 0xb6 NEW_2
	var_2_object = var_211_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_216_bool = 1; // 0xb5 MovB
}


func_419(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1a3 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1a4 PushE
	RotateAsync(var_84_float, var_85_float); // 0x1a5 Func
	return 0; // 0x1a7 Return
}


func_1063(var_42_object)
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x427 PushV
	var_46_string = "grass combination (good) is given"; // 0x428 PushS
	Trace(var_46_string); // 0x429 Func
	CreateInvItem(var_45_object); // 0x42b Func
	var_47_string = "grass_combination"; // 0x42d PushS
	SetItemName(var_47_string); // 0x42e ObjFunc
	var_48_string = "im_inc"; // 0x430 PushS
	var_49_float = 0.4; // 0x431 PushF
	SetProperty(var_48_string, var_49_float); // 0x432 ObjFunc
	var_50_string = "hl_inc"; // 0x434 PushS
	var_51_float = -0.01; // 0x435 PushF
	SetProperty(var_50_string, var_51_float); // 0x436 ObjFunc
	var_52_string = "tr_inc"; // 0x438 PushS
	var_53_float = 0.03; // 0x439 PushF
	SetProperty(var_52_string, var_53_float); // 0x43a ObjFunc
	var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; // 0x43c PushV
	var_54_object = var_42_object; // 0x43d Mov
	var_55_object = var_45_object; // 0x43e Mov
	var_56_int = 1; // 0x43f MovI
	func_983(var_55_object, var_56_int); // 0x440 NEW_2
	return 2; // 0x442 Return
}


func_424(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x1a8 PushV
	var_20_string = "player"; // 0x1a9 PushS
	FindActor(var_18_object, var_20_string); // 0x1aa Func
	var_21_bool = var_18_object == 0; // 0x1ac Not
	if(var_21_bool == 0) goto Label_432; // 0x1ad JumpB
	var_15_bool = 0; // 0x1ae MovB
	return 4; // 0x1af Return
	
Label_432:
	var_22_float = 0; var_23_object = Obj(); // 0x1b0 PushV
	var_23_object = var_18_object; // 0x1b1 Mov
	func_642(var_23_object); // 0x1b2 NEW_2
	var_30_float = 90000.0; // 0x1b4 PushF
	var_31_bool = var_22_float > var_30_float; // 0x1b5 GT
	if(var_31_bool == 0) goto Label_441; // 0x1b6 JumpB
	var_15_bool = 0; // 0x1b7 MovB
	return 4; // 0x1b8 Return
	
Label_441:
	CanSee(var_19_bool, var_18_object); // 0x1b9 Func
	var_15_bool = var_19_bool; // 0x1bb Mov
	return 4; // 0x1bc Return
}


func_943()
{
	var_10_bool = 0; // 0x3af PushV
	func_1212(var_10_bool); // 0x3b0 NEW_2
	if(var_10_bool == 0) goto Label_949; // 0x3b2 JumpB
	lshStopSpeech(); // 0x3b3 Func
	
Label_949:
	return 0; // 0x3b5 Return
}


func_817(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x331 PushV
	var_115_string = "c"; // 0x332 MovS
	var_116_int = 0; // 0x333 MovI
	
Label_820:
	var_120_int = 1; // 0x334 PushI
	if(var_120_int == 0) goto Label_833; // 0x335 JumpB
	var_121_int = 1; // 0x336 PushI
	var_122_int = var_116_int + var_121_int; // 0x337 Add
	var_123_int = var_115_string + var_122_int; // 0x338 Add
	HasProperty(var_123_int, var_117_bool); // 0x339 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x33b Not
	if(var_124_bool == 0) goto Label_830; // 0x33c JumpB
	goto Label_833; // 0x33d Jump
	
Label_833:
	var_125_bool = var_116_int == 0; // 0x341 Not
	if(var_125_bool == 0) goto Label_837; // 0x342 JumpB
	var_108_bool = 0; // 0x343 MovB
	return 10; // 0x344 Return
	
Label_837:
	var_118_int = 0; // 0x345 MovI
	var_126_int = 1; // 0x346 PushI
	var_127_bool = var_116_int > var_126_int; // 0x347 GT
	if(var_127_bool == 0) goto Label_843; // 0x348 JumpB
	irand(var_118_int, var_116_int); // 0x349 Func
	
Label_843:
	var_128_int = 1; // 0x34b PushI
	var_129_int = var_118_int + var_128_int; // 0x34c Add
	var_130_int = var_115_string + var_129_int; // 0x34d Add
	GetProperty(var_130_int, var_119_string); // 0x34e ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x350 PushV
	var_132_string = var_119_string; // 0x351 Mov
	func_928(var_131_bool, var_132_string); // 0x352 NEW_2
	var_108_bool = var_131_bool; // 0x353 Mov
	return 10; // 0x355 Return
	
Label_830:
	var_137_int = 1; // 0x33e PushI
	var_116_int = var_116_int + var_137_int; // 0x33f Add2
	goto Label_820; // 0x340 Jump
}


func_1204(var_85_int)
{
	var_85_int = 515592; // 0x4b4 MovI
	return 0; // 0x4b5 Return
}


func_1206(var_84_int)
{
	var_84_int = 511961; // 0x4b6 MovI
	return 0; // 0x4b7 Return
}


func_950(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x3b6 PushV
	self(var_101_object); // 0x3b7 Func
	var_99_object = var_101_object; // 0x3b9 Mov
	return 2; // 0x3ba Return
}


func_1208(var_86_string)
{
	var_86_string = "ui/NPC_Burah.png"; // 0x4b8 MovS
	return 0; // 0x4b9 Return
}


func_566()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x236 PushV
	WaitForAnimEnd(); // 0x237 Func
	var_23_bool = 0; // 0x239 PushV
	func_669(var_23_bool); // 0x23a NEW_2
	var_24_bool = var_23_bool == 0; // 0x23c Not
	if(var_24_bool == 0) goto Label_575; // 0x23d JumpB
	return 12; // 0x23e Return
	
Label_575:
	var_25_int = 0; // 0x23f PushV
	func_1018(var_25_int); // 0x240 NEW_2
	var_17_int = var_25_int; // 0x241 Mov
	var_18_int = 0; // 0x243 MovI
	
Label_580:
	var_38_bool = 0; // 0x244 PushV
	var_38_bool = 0; // 0x245 MovB
	var_39_int = 5; // 0x246 PushI
	var_40_bool = var_18_int < var_39_int; // 0x247 LT
	if(var_40_bool == 0) goto Label_590; // 0x248 JumpB
	var_41_bool = 0; // 0x249 PushV
	func_669(var_41_bool); // 0x24a NEW_2
	if(var_41_bool == 0) goto Label_590; // 0x24c JumpB
	var_38_bool = 1; // 0x24d MovB
	
Label_590:
	if(var_38_bool == 0) goto Label_632; // 0x24e JumpB
	var_42_bool = var_17_int == 0; // 0x24f Not
	if(var_42_bool == 0) goto Label_600; // 0x250 JumpB
	var_43_int = 3; // 0x251 PushI
	Sleep(var_43_int, var_19_bool); // 0x252 Func
	var_44_bool = var_19_bool == 0; // 0x254 Not
	if(var_44_bool == 0) goto Label_599; // 0x255 JumpB
	goto Label_632; // 0x256 Jump
	
Label_632:
	ResetAAS(); // 0x278 Func
	return 12; // 0x27a Return
	
Label_599:
	goto Label_621; // 0x257 Jump
	
Label_621:
	var_45_bool = 0; // 0x26d PushV
	func_635(var_45_bool); // 0x26e NEW_2
	var_46_bool = var_45_bool == 0; // 0x270 Not
	if(var_46_bool == 0) goto Label_627; // 0x271 JumpB
	goto Label_632; // 0x272 Jump
	
Label_627:
	ResetAAS(); // 0x273 Func
	var_47_int = 1; // 0x275 PushI
	var_18_int = var_18_int + var_47_int; // 0x276 Add2
	goto Label_580; // 0x277 Jump
	
Label_600:
	irand(var_20_int, var_17_int); // 0x258 Func
	var_48_int = 5; // 0x25a PushI
	irand(var_21_int, var_48_int); // 0x25b Func
	var_49_int = 0; // 0x25d PushI
	var_50_bool = var_21_int != var_49_int; // 0x25e Neq
	if(var_50_bool == 0) goto Label_609; // 0x25f JumpB
	var_20_int = 0; // 0x260 MovI
	
Label_609:
	var_51_string = "all"; // 0x261 PushS
	var_52_string = ""; var_53_int = 0; // 0x262 PushV
	var_53_int = var_20_int; // 0x263 Mov
	func_1011(var_52_string, var_53_int); // 0x264 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x266 Func
	WaitForAnimEnd(var_22_bool); // 0x268 Func
	var_54_bool = var_22_bool == 0; // 0x26a Not
	if(var_54_bool == 0) goto Label_621; // 0x26b JumpB
	goto Label_632; // 0x26c Jump
}


func_1210(var_87_string)
{
	var_87_string = "ui/NPC_Burah_b.png"; // 0x4ba MovS
	return 0; // 0x4bb Return
}


func_1212(var_79_bool)
{
	var_79_bool = 1; // 0x4bc MovB
	return 0; // 0x4bd Return
}


func_956(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x3bc PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x3bd Or
	var_68_float = sqrt(var_69_int); // 0x3be Sqrt2
	var_70_float = 0.0; // 0x3bf PushF
	var_71_bool = var_68_float < var_70_float; // 0x3c0 LT
	if(var_71_bool == 0) goto Label_964; // 0x3c1 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x3c2 MovV
	return 2; // 0x3c3 Return
	
Label_964:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x3c4 Div2
	return 2; // 0x3c5 Return
}


func_446()
{
	var_268_float = 0; var_269_float = 0; // 0x1be PushV
	var_270_int = 8; // 0x1bf PushI
	var_271_int = 16; // 0x1c0 PushI
	rand(var_269_float, var_270_int, var_271_int); // 0x1c1 Func
	var_272_int = 10; // 0x1c3 PushI
	SetTimer(var_272_int, var_269_float); // 0x1c4 Func
	return 2; // 0x1c6 Return
}


func_1092(var_70_object)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x444 PushV
	var_74_string = "grass combination (bad) is given"; // 0x445 PushS
	Trace(var_74_string); // 0x446 Func
	CreateInvItem(var_73_object); // 0x448 Func
	var_75_string = "grass_combination"; // 0x44a PushS
	SetItemName(var_75_string); // 0x44b ObjFunc
	var_76_string = "im_inc"; // 0x44d PushS
	var_77_float = 0.2; // 0x44e PushF
	SetProperty(var_76_string, var_77_float); // 0x44f ObjFunc
	var_78_string = "hl_inc"; // 0x451 PushS
	var_79_float = -0.08; // 0x452 PushF
	SetProperty(var_78_string, var_79_float); // 0x453 ObjFunc
	var_80_string = "tr_inc"; // 0x455 PushS
	var_81_float = 0.12; // 0x456 PushF
	SetProperty(var_80_string, var_81_float); // 0x457 ObjFunc
	var_82_object = Obj(); var_83_object = Obj(); var_84_int = 0; // 0x459 PushV
	var_82_object = var_70_object; // 0x45a Mov
	var_83_object = var_73_object; // 0x45b Mov
	var_84_int = 1; // 0x45c MovI
	func_983(var_83_object, var_84_int); // 0x45d NEW_2
	return 2; // 0x45f Return
}


func_966(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x3c6 PushV
	GetVariable(var_202_string, var_204_int); // 0x3c7 Func
	var_201_int = var_204_int; // 0x3c9 Mov
	return 2; // 0x3ca Return
}


func_455()
{
	var_267_int = 10; // 0x1c7 PushI
	KillTimer(var_267_int); // 0x1c8 Func
	return 0; // 0x1ca Return
}


func_971(var_65_int, var_66_int)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x3cb PushV
	CreateIntVector(var_68_object); // 0x3cc Func
	add(var_65_int); // 0x3ce ObjFunc
	add(var_66_int); // 0x3d0 ObjFunc
	var_69_int = 3; // 0x3d2 PushI
	SendWorldWndMessage(var_69_int, var_68_object); // 0x3d3 Func
	return 2; // 0x3d5 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_134; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_1121(var_200_object); // 0x59 NEW_2
	if(var_199_bool == 0) goto Label_112; // 0x5b JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x5c PushV
	var_207_object = var_1_object; // 0x5d MovT
	var_208_object = var_0_object; // 0x5e MovT
	func_1035(); // 0x5f NEW_2
	var_211_string = ""; // 0x61 PushV
	var_211_string = "Sorrow"; // 0x62 MovS
	func_164(var_193_object, var_211_string); // 0x63 NEW_2
	var_228_int = 525635; // 0x65 PushI
	SetMessage(var_228_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_229_int = 529332; // 0x6a PushI
	var_230_int = 30788; // 0x6b PushI
	var_231_int = 30787; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	goto Label_134; // 0x6f Jump
	
Label_134:
	var_232_bool = 0; // 0x86 PushV
	func_1212(var_232_bool); // 0x87 NEW_2
	if(var_232_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_233_string = var_3_string; // 0x8c PushT
	if(var_233_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_234_string = ""; // 0x8f PushV
	var_234_string = var_2_object; // 0x90 MovT
	func_897(var_234_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_245_string = "all"; // 0x95 PushS
	var_246_string = "idle"; // 0x96 PushS
	PlayAnimation(var_245_string, var_246_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_247_string = var_3_string; // 0x9b PushT
	if(var_247_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_248_string = "all"; // 0x9e PushS
	var_249_string = "idle"; // 0x9f PushS
	PlayAnimation(var_248_string, var_249_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
	
Label_112:
	var_250_string = ""; // 0x70 PushV
	var_250_string = "Neutral"; // 0x71 MovS
	func_164(var_193_object, var_250_string); // 0x72 NEW_2
	var_251_int = 525638; // 0x74 PushI
	SetMessage(var_251_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_252_int = 525639; // 0x79 PushI
	var_253_int = -1; // 0x7a PushI
	var_254_int = 26981; // 0x7b PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x7c TObjFunc
	var_255_int = 529336; // 0x7e PushI
	var_256_int = -1; // 0x7f PushI
	var_257_int = 30791; // 0x80 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
}


func_341(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x156 PushV
	var_27_object = var_25_object; // 0x157 Mov
	TaskCall(0); // 0x158 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x159 NEW_2
	TaskReturn(); // 0x15a TaskReturn
	return 0; // 0x15c Return
}


func_854(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x356 PushV
	var_151_string = "d"; // 0x357 PushS
	var_152_int = 0; // 0x358 PushV
	func_1002(var_152_int); // 0x359 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x35b Add
	var_159_string = "m"; // 0x35c PushS
	var_146_string = var_158_int + var_159_string; // 0x35d Add2
	var_147_int = 0; // 0x35e MovI
	
Label_863:
	var_160_int = 1; // 0x35f PushI
	if(var_160_int == 0) goto Label_876; // 0x360 JumpB
	var_161_int = 1; // 0x361 PushI
	var_162_int = var_147_int + var_161_int; // 0x362 Add
	var_163_int = var_146_string + var_162_int; // 0x363 Add
	HasProperty(var_163_int, var_148_bool); // 0x364 ObjFunc
	var_164_bool = var_148_bool == 0; // 0x366 Not
	if(var_164_bool == 0) goto Label_873; // 0x367 JumpB
	goto Label_876; // 0x368 Jump
	
Label_876:
	var_165_bool = var_147_int == 0; // 0x36c Not
	if(var_165_bool == 0) goto Label_880; // 0x36d JumpB
	var_139_bool = 0; // 0x36e MovB
	return 10; // 0x36f Return
	
Label_880:
	var_149_int = 0; // 0x370 MovI
	var_166_int = 1; // 0x371 PushI
	var_167_bool = var_147_int > var_166_int; // 0x372 GT
	if(var_167_bool == 0) goto Label_886; // 0x373 JumpB
	irand(var_149_int, var_147_int); // 0x374 Func
	
Label_886:
	var_168_int = 1; // 0x376 PushI
	var_169_int = var_149_int + var_168_int; // 0x377 Add
	var_170_int = var_146_string + var_169_int; // 0x378 Add
	GetProperty(var_170_int, var_150_string); // 0x379 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x37b PushV
	var_172_string = var_150_string; // 0x37c Mov
	func_928(var_171_bool, var_172_string); // 0x37d NEW_2
	var_139_bool = var_171_bool; // 0x37e Mov
	return 10; // 0x380 Return
	
Label_873:
	var_173_int = 1; // 0x369 PushI
	var_147_int = var_147_int + var_173_int; // 0x36a Add2
	goto Label_863; // 0x36b Jump
}


func_983(var_55_object, var_56_int)
{
	var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; // 0x3d7 PushV
	GetItemID(var_60_int); // 0x3d8 ObjFunc
	var_63_string = "Category"; // 0x3da PushS
	GetInvItemProperty(var_61_int, var_60_int, var_63_string); // 0x3db Func
	AddItem(var_62_bool, var_55_object, var_61_int, var_56_int); // 0x3dd ObjFunc
	var_64_bool = var_62_bool == 0; // 0x3df Not
	if(var_64_bool == 0) goto Label_996; // 0x3e0 JumpB
	DropItems(var_55_object, var_56_int); // 0x3e1 ObjFunc
	goto Label_1001; // 0x3e3 Jump
	
Label_1001:
	return 6; // 0x3e9 Return
	
Label_996:
	var_65_int = 0; var_66_int = 0; // 0x3e4 PushV
	var_65_int = var_60_int; // 0x3e5 Mov
	var_66_int = var_56_int; // 0x3e6 Mov
	func_971(var_65_int, var_66_int); // 0x3e7 NEW_2
}


func_1121(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x462 PushV
	var_202_string = "ook3BurahIndoor1"; // 0x463 MovS
	func_966(var_201_int, var_202_string); // 0x464 NEW_2
	var_205_int = 0; // 0x466 PushI
	var_206_bool = var_201_int == var_205_int; // 0x467 Eq
	if(var_206_bool == 0) goto Label_1131; // 0x468 JumpB
	var_199_bool = 1; // 0x469 MovB
	return 0; // 0x46a Return
	
Label_1131:
	var_199_bool = 0; // 0x46b MovB
	return 0; // 0x46c Return
}


func_742()
{
	var_260_bool = 0; var_261_bool = 0; // 0x2e6 PushV
	CameraSwitchToNormal(); // 0x2e7 Func
	var_262_bool = 0; // 0x2e9 PushV
	func_1212(var_262_bool); // 0x2ea NEW_2
	if(var_262_bool == 0) goto Label_750; // 0x2ec JumpB
	goto Label_758; // 0x2ed Jump
	
Label_758:
	return 2; // 0x2f6 Return
	
Label_750:
	var_263_string = "head"; // 0x2ee PushS
	HasAnimationTrack(var_261_bool, var_263_string); // 0x2ef Func
	var_264_bool = var_261_bool; // 0x2f1 Push
	if(var_264_bool == 0) goto Label_758; // 0x2f2 JumpB
	var_265_string = "head"; // 0x2f3 PushS
	UnlookAsync(var_265_string); // 0x2f4 Func
}


func_1002(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x3ea PushV
	GetGameTime(var_154_float); // 0x3eb Func
	var_155_int = 1; // 0x3ed PushI
	var_156_int = 0; // 0x3ee PushV
	var_157_int = 24; // 0x3ef PushI
	var_156_int = var_154_float / var_154_float; // 0x3f0 Div2
	var_152_int = var_155_int + var_156_int; // 0x3f1 Add2
	return 2; // 0x3f2 Return
}


func_1133()
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x46d PushV
	var_21_int = 357; // 0x46e PushI
	var_22_int = 2; // 0x46f PushI
	var_23_int = 525657; // 0x470 PushI
	CreateDiaryEntry(var_20_object, var_21_int, var_22_int, var_23_int); // 0x471 Func
	var_24_bool = 0; var_25_object = Obj(); var_26_int = 0; // 0x473 PushV
	var_25_object = var_20_object; // 0x474 Mov
	var_26_int = 354; // 0x475 MovI
	func_1159(var_24_bool, var_25_object, var_26_int); // 0x476 NEW_2
	return 2; // 0x478 Return
}


func_497()
{
	func_637(); // 0x1f2 NEW_2
	func_455(); // 0x1f5 NEW_2
	lshStopSpeech(); // 0x1f7 Func
	lshStopAnimation(); // 0x1f9 Func
	StopAsync(); // 0x1fb Func
	Hold(); // 0x1fd Func
	return 0; // 0x1ff Return
}


func_1011(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x3f3 PushV
	var_34_string = "idle"; // 0x3f4 MovS
	var_35_int = var_32_int; // 0x3f5 Push
	if(var_35_int == 0) goto Label_1016; // 0x3f6 JumpB
	var_34_string = var_34_string + var_32_int; // 0x3f7 Add2
	
Label_1016:
	var_31_string = var_34_string; // 0x3f8 Mov
	return 2; // 0x3f9 Return
}


func_759(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x2f7 PushV
	var_106_string = "voice_common"; // 0x2f8 PushS
	GetVariable(var_106_string, var_104_int); // 0x2f9 Func
	var_107_int = var_104_int; // 0x2fb Push
	if(var_107_int == 0) goto Label_797; // 0x2fc JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x2fd PushV
	var_109_object = var_98_object; // 0x2fe Mov
	func_817(var_109_object); // 0x2ff NEW_2
	var_138_bool = var_108_bool == 0; // 0x301 Not
	if(var_138_bool == 0) goto Label_779; // 0x302 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x303 PushV
	var_140_object = var_98_object; // 0x304 Mov
	func_854(var_140_object); // 0x305 NEW_2
	var_174_bool = var_139_bool == 0; // 0x307 Not
	if(var_174_bool == 0) goto Label_779; // 0x308 JumpB
	var_97_bool = 0; // 0x309 MovB
	return 4; // 0x30a Return
	
Label_779:
	var_175_int = 2; // 0x30b PushI
	irand(var_105_int, var_175_int); // 0x30c Func
	var_176_int = var_105_int; // 0x30e Push
	if(var_176_int == 0) goto Label_792; // 0x30f JumpB
	var_177_string = "voice_common"; // 0x310 PushS
	var_178_int = 1; // 0x311 PushI
	var_179_int = var_104_int + var_178_int; // 0x312 Add
	var_180_int = 3; // 0x313 PushI
	var_181_int = var_179_int / var_180_int; // 0x314 Mod
	SetVariable(var_177_string, var_181_int); // 0x315 Func
	goto Label_796; // 0x317 Jump
	
Label_796:
	goto Label_815; // 0x31c Jump
	
Label_815:
	var_97_bool = 1; // 0x32f MovB
	return 4; // 0x330 Return
	
Label_792:
	var_182_string = "voice_common"; // 0x318 PushS
	var_183_int = 0; // 0x319 PushI
	SetVariable(var_182_string, var_183_int); // 0x31a Func
	
Label_797:
	var_184_bool = 0; var_185_object = Obj(); // 0x31d PushV
	var_185_object = var_98_object; // 0x31e Mov
	func_854(var_185_object); // 0x31f NEW_2
	var_186_bool = var_184_bool == 0; // 0x321 Not
	if(var_186_bool == 0) goto Label_811; // 0x322 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x323 PushV
	var_188_object = var_98_object; // 0x324 Mov
	func_817(var_188_object); // 0x325 NEW_2
	var_189_bool = var_187_bool == 0; // 0x327 Not
	if(var_189_bool == 0) goto Label_811; // 0x328 JumpB
	var_97_bool = 0; // 0x329 MovB
	return 4; // 0x32a Return
	
Label_811:
	var_190_string = "voice_common"; // 0x32b PushS
	var_191_int = 1; // 0x32c PushI
	SetVariable(var_190_string, var_191_int); // 0x32d Func
}


func_1146(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x47a PushV
	GetDiaryRoot(var_35_object); // 0x47b Func
	var_36_bool = var_35_object == 0; // 0x47d Not
	if(var_36_bool == 0) goto Label_1156; // 0x47e JumpB
	var_37_string = "Can't retrieve diary root"; // 0x47f PushS
	Trace(var_37_string); // 0x480 Func
	var_33_object = 0; // 0x482 MovB
	return 2; // 0x483 Return
	
Label_1156:
	var_33_object = var_35_object; // 0x484 Mov
	return 2; // 0x485 Return
}


func_635(var_45_bool)
{
	var_45_bool = 1; // 0x27b MovB
	return 0; // 0x27c Return
}


func_637()
{
	StopAnimation(); // 0x27d Func
	StopGroup0(); // 0x27f Func
	return 0; // 0x281 Return
}


