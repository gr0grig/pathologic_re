task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0x9b PushI
	if(var_9_int == 0) goto Label_218; // 0x9c JumpB
	func_442(); // 0x9e NEW_2
	var_11_int = 15395; // 0xa0 PushI
	var_12_bool = var_7_bool == var_11_int; // 0xa1 Eq
	if(var_12_bool == 0) goto Label_183; // 0xa2 JumpB
	var_13_string = ""; // 0xa3 PushV
	var_13_string = "Neutral"; // 0xa4 MovS
	func_132(var_8_bool, var_13_string); // 0xa5 NEW_2
	var_30_int = 514181; // 0xa7 PushI
	SetMessage(var_30_int); // 0xa8 TObjFunc
	ClearReplies(); // 0xaa TObjFunc
	var_31_int = 514182; // 0xac PushI
	var_32_int = 15397; // 0xad PushI
	var_33_int = 15396; // 0xae PushI
	AddReply(var_31_int, var_32_int, var_33_int); // 0xaf TObjFunc
	var_34_int = 539616; // 0xb1 PushI
	var_35_int = -1; // 0xb2 PushI
	var_36_int = 41563; // 0xb3 PushI
	AddReply(var_34_int, var_35_int, var_36_int); // 0xb4 TObjFunc
	return 0; // 0xb6 Return
	
Label_183:
	var_37_int = 15397; // 0xb7 PushI
	var_38_bool = var_7_bool == var_37_int; // 0xb8 Eq
	if(var_38_bool == 0) goto Label_206; // 0xb9 JumpB
	var_39_string = ""; // 0xba PushV
	var_39_string = "Neutral"; // 0xbb MovS
	func_132(var_8_bool, var_39_string); // 0xbc NEW_2
	var_40_int = 514183; // 0xbe PushI
	SetMessage(var_40_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_41_int = 514184; // 0xc3 PushI
	var_42_int = -1; // 0xc4 PushI
	var_43_int = 15398; // 0xc5 PushI
	AddReply(var_41_int, var_42_int, var_43_int); // 0xc6 TObjFunc
	var_44_int = 539617; // 0xc8 PushI
	var_45_int = -1; // 0xc9 PushI
	var_46_int = 41564; // 0xca PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xcb TObjFunc
	return 0; // 0xcd Return
	
Label_206:
	var_3_string = 1; // 0xce TMovB
	var_47_bool = 0; // 0xcf PushV
	func_508(var_47_bool); // 0xd0 NEW_2
	if(var_47_bool == 0) goto Label_214; // 0xd2 JumpB
	lshStopAnimation(); // 0xd3 Func
	goto Label_216; // 0xd5 Jump
	
Label_216:
	return 0; // 0xd8 Return
	
Label_214:
	StopAnimation(); // 0xd6 Func
	
Label_218:
	return 0; // 0xda Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0xe8 PushV
	var_10_string = "execute"; // 0xe9 PushS
	var_11_bool = var_7_string == var_10_string; // 0xea Eq
	if(var_11_bool == 0) goto Label_250; // 0xeb JumpB
	var_1_object = 1; // 0xec TMovB
	var_12_string = "all"; // 0xed PushS
	var_13_string = "bdie"; // 0xee PushS
	PlayAnimation(var_12_string, var_13_string); // 0xef Func
	WaitForAnimEnd(var_9_bool); // 0xf1 Func
	var_14_bool = var_9_bool; // 0xf3 Push
	if(var_14_bool == 0) goto Label_249; // 0xf4 JumpB
	var_15_string = "all"; // 0xf5 PushS
	var_16_string = "bdie"; // 0xf6 PushS
	LockAnimationEnd(var_15_string, var_16_string); // 0xf7 Func
	
Label_249:
	goto Label_254; // 0xf9 Jump
	
Label_254:
	return 2; // 0xfe Return
	
Label_250:
	var_17_string = ""; // 0xfa PushV
	var_17_string = var_7_string; // 0xfb Mov
	func_280(var_9_bool, var_17_string); // 0xfc NEW_2
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_object = var_1_object; // 0xff PushT
	if(var_7_object == 0) goto Label_261; // 0x100 JumpB
	var_8_string = "all"; // 0x101 PushS
	var_9_string = "bdie"; // 0x102 PushS
	LockAnimationEnd(var_8_string, var_9_string); // 0x103 Func
	
Label_261:
	return 0; // 0x105 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0x106 PushV
	var_10_string = "d11q02"; // 0x107 PushS
	GetVariable(var_10_string, var_9_int); // 0x108 Func
	var_11_bool = 0; // 0x10a PushV
	var_11_bool = 0; // 0x10b MovB
	var_12_int = 2; // 0x10c PushI
	var_13_bool = var_9_int == var_12_int; // 0x10d Eq
	if(var_13_bool == 0) goto Label_274; // 0x10e JumpB
	var_14_bool = var_1_object == 0; // 0x10f Not
	if(var_14_bool == 0) goto Label_274; // 0x110 JumpB
	var_11_bool = 1; // 0x111 MovB
	
Label_274:
	if(var_11_bool == 0) goto Label_279; // 0x112 JumpB
	var_15_object = Obj(); // 0x113 PushV
	var_15_object = var_7_object; // 0x114 Mov
	func_219(var_15_object); // 0x115 NEW_2
	
Label_279:
	return 2; // 0x117 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; // 0x134 PushV
	var_7_bool = 0; // 0x135 MovB
	var_8_object = var_0_object; // 0x136 PushT
	if(var_8_object == 0) goto Label_317; // 0x137 JumpB
	var_9_bool = 0; // 0x138 PushV
	func_324(var_9_bool); // 0x139 NEW_2
	if(var_9_bool == 0) goto Label_317; // 0x13b JumpB
	var_7_bool = 1; // 0x13c MovB
	
Label_317:
	if(var_7_bool == 0) goto Label_323; // 0x13d JumpB
	var_10_object = Obj(); // 0x13e PushV
	func_449(var_10_object); // 0x13f NEW_2
	RemoveActor(var_10_object); // 0x141 Func
	
Label_323:
	return 0; // 0x143 Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; var_8_string = ""; var_9_string = ""; // 0x1dd PushV
	var_8_string = "quest_d11_02"; // 0x1de MovS
	var_9_string = "actor_unload"; // 0x1df MovS
	func_465(var_7_bool, var_8_string, var_9_string); // 0x1e0 NEW_2
	return 0; // 0x1e2 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = 0; // 0xe3 TMovB
	
Label_228:
	Hold(); // 0xe4 Func
	goto Label_228; // 0xe6 Jump
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_326(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_502(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_500(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_504(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_506(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_483(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_136_bool = var_26_bool == 0; // 0x38 Not
	if(var_136_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_137_object = Obj(); // 0x3f PushV
	var_137_object = var_17_object; // 0x40 Mov
	func_394(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_132(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0x85 PushV
	func_508(var_95_bool); // 0x86 NEW_2
	var_96_bool = var_95_bool == 0; // 0x88 Not
	if(var_96_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_97_bool = var_94_string == var_2_object; // 0x8b Eq
	if(var_97_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_98_string = ""; var_99_bool = 0; // 0x8e PushV
	var_98_string = var_94_string; // 0x8f Mov
	var_100_string = ""; // 0x90 PushS
	var_101_bool = var_94_string == var_100_string; // 0x91 Eq
	if(var_101_bool == 0) goto Label_149; // 0x92 JumpB
	var_99_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_427(var_98_string, var_99_bool); // 0x96 NEW_2
	var_2_object = var_94_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_99_bool = 1; // 0x95 MovB
}


func_394()
{
	var_138_bool = 0; var_139_bool = 0; // 0x18a PushV
	CameraSwitchToNormal(); // 0x18b Func
	var_140_bool = 0; // 0x18d PushV
	func_508(var_140_bool); // 0x18e NEW_2
	if(var_140_bool == 0) goto Label_402; // 0x190 JumpB
	goto Label_410; // 0x191 Jump
	
Label_410:
	return 2; // 0x19a Return
	
Label_402:
	var_141_string = "head"; // 0x192 PushS
	HasAnimationTrack(var_139_bool, var_141_string); // 0x193 Func
	var_142_bool = var_139_bool; // 0x195 Push
	if(var_142_bool == 0) goto Label_410; // 0x196 JumpB
	var_143_string = "head"; // 0x197 PushS
	UnlookAsync(var_143_string); // 0x198 Func
}


func_280(var_0_object, var_17_string)
{
	var_18_bool = 0; var_19_bool = 0; // 0x118 PushV
	var_20_string = "cleanup"; // 0x119 PushS
	var_21_bool = var_17_string == var_20_string; // 0x11a Eq
	if(var_21_bool == 0) goto Label_303; // 0x11b JumpB
	var_0_object = 1; // 0x11c TMovB
	IsLoaded(var_19_bool); // 0x11d Func
	var_22_bool = 0; // 0x11f PushV
	var_22_bool = 0; // 0x120 MovB
	var_23_bool = var_19_bool == 0; // 0x121 Not
	if(var_23_bool == 0) goto Label_296; // 0x122 JumpB
	var_24_bool = 0; // 0x123 PushV
	func_324(var_24_bool); // 0x124 NEW_2
	if(var_24_bool == 0) goto Label_296; // 0x126 JumpB
	var_22_bool = 1; // 0x127 MovB
	
Label_296:
	if(var_22_bool == 0) goto Label_302; // 0x128 JumpB
	var_25_object = Obj(); // 0x129 PushV
	func_449(var_25_object); // 0x12a NEW_2
	RemoveActor(var_25_object); // 0x12c Func
	
Label_302:
	goto Label_307; // 0x12e Jump
	
Label_307:
	return 2; // 0x133 Return
	
Label_303:
	var_28_string = "restore"; // 0x12f PushS
	var_29_bool = var_17_string == var_28_string; // 0x130 Eq
	if(var_29_bool == 0) goto Label_307; // 0x131 JumpB
	var_0_object = 0; // 0x132 TMovB
}


func_411(var_120_string)
{
	var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0; // 0x19b PushV
	lshHasAnimation(var_124_bool, var_120_string); // 0x19c Func
	var_127_bool = var_124_bool; // 0x19e Push
	if(var_127_bool == 0) goto Label_422; // 0x19f JumpB
	lshGetAnimTimes(var_120_string, var_125_float, var_126_float); // 0x1a0 Func
	var_128_bool = 0; // 0x1a2 PushB
	lshPlayAnimation(var_125_float, var_126_float, var_128_bool); // 0x1a3 Func
	goto Label_426; // 0x1a5 Jump
	
Label_426:
	return 6; // 0x1aa Return
	
Label_422:
	var_129_string = "Can't find lsh animation : "; // 0x1a6 PushS
	var_130_int = var_129_string + var_120_string; // 0x1a7 Add
	Trace(var_130_int); // 0x1a8 Func
}


func_427(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x1ab PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x1ac Func
	var_108_bool = var_105_bool; // 0x1ae Push
	if(var_108_bool == 0) goto Label_437; // 0x1af JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x1b0 Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x1b2 Func
	goto Label_441; // 0x1b4 Jump
	
Label_441:
	return 6; // 0x1b9 Return
	
Label_437:
	var_109_string = "Can't find lsh animation : "; // 0x1b5 PushS
	var_110_int = var_109_string + var_98_string; // 0x1b6 Add
	Trace(var_110_int); // 0x1b7 Func
}


func_442()
{
	var_10_bool = 0; // 0x1ba PushV
	func_508(var_10_bool); // 0x1bb NEW_2
	if(var_10_bool == 0) goto Label_448; // 0x1bd JumpB
	lshStopSpeech(); // 0x1be Func
	
Label_448:
	return 0; // 0x1c0 Return
}


func_449(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x1c1 PushV
	self(var_12_object); // 0x1c2 Func
	var_10_object = var_12_object; // 0x1c4 Mov
	return 2; // 0x1c5 Return
}


func_324(var_9_bool)
{
	var_9_bool = 1; // 0x144 MovB
	return 0; // 0x145 Return
}


func_326(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x146 PushV
	GetPosition(var_40_cvector); // 0x147 ObjFunc
	GetEyesHeight(var_39_float); // 0x149 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x14b PushE
	var_48_float = var_48_float + var_39_float; // 0x14c Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x14d PopE
	GetPosition(var_41_cvector); // 0x14e Func
	GetEyesHeight(var_39_float); // 0x150 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x152 PushE
	var_49_float = var_49_float + var_39_float; // 0x153 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x154 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x155 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x156 PushE
	var_50_float = 0; // 0x157 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x158 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x159 Or
	var_52_float = sqrt(var_51_int); // 0x15a Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x15b Div2
	var_43_cvector = -var_42_cvector; // 0x15c Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x15d Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x15e PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x15f PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x160 Xor2
	func_455(var_54_cvector, var_55_cvector); // 0x161 NEW_2
	var_62_int = 25; // 0x163 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x164 Mult
	var_64_int = var_53_float + var_63_float; // 0x165 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x166 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x167 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x168 Add2
	IsOverrideActive(var_46_bool); // 0x169 Func
	var_66_bool = var_46_bool; // 0x16b Push
	if(var_66_bool == 0) goto Label_367; // 0x16c JumpB
	var_27_bool = 0; // 0x16d MovB
	return 18; // 0x16e Return
	
Label_367:
	StopWorld(); // 0x16f Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x171 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x173 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x174 PushE
	Rotate(var_67_float, var_68_float); // 0x175 Func
	var_69_bool = 0; // 0x177 PushV
	func_508(var_69_bool); // 0x178 NEW_2
	if(var_69_bool == 0) goto Label_380; // 0x17a JumpB
	goto Label_388; // 0x17b Jump
	
Label_388:
	CameraWaitForPlayFinish(); // 0x184 Func
	ResumeWorld(); // 0x186 Func
	var_27_bool = 1; // 0x188 MovB
	return 18; // 0x189 Return
	
Label_380:
	var_70_string = "head"; // 0x17c PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x17d Func
	var_71_bool = var_47_bool; // 0x17f Push
	if(var_71_bool == 0) goto Label_388; // 0x180 JumpB
	var_72_string = "head"; // 0x181 PushS
	LookAsyncCamera(var_72_string); // 0x182 Func
}


func_455(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x1c7 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x1c8 Or
	var_58_float = sqrt(var_59_int); // 0x1c9 Sqrt2
	var_60_float = 0.0; // 0x1ca PushF
	var_61_bool = var_58_float < var_60_float; // 0x1cb LT
	if(var_61_bool == 0) goto Label_463; // 0x1cc JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x1cd MovV
	return 2; // 0x1ce Return
	
Label_463:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x1cf Div2
	return 2; // 0x1d0 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_102; // 0x4f JumpB
	var_94_string = ""; // 0x50 PushV
	var_94_string = "Neutral"; // 0x51 MovS
	func_132(var_88_object, var_94_string); // 0x52 NEW_2
	var_111_int = 514181; // 0x54 PushI
	SetMessage(var_111_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_112_int = 514182; // 0x59 PushI
	var_113_int = 15397; // 0x5a PushI
	var_114_int = 15396; // 0x5b PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x5c TObjFunc
	var_115_int = 539616; // 0x5e PushI
	var_116_int = -1; // 0x5f PushI
	var_117_int = 41563; // 0x60 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_118_bool = 0; // 0x66 PushV
	func_508(var_118_bool); // 0x67 NEW_2
	if(var_118_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_119_string = var_3_string; // 0x6c PushT
	if(var_119_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_120_string = ""; // 0x6f PushV
	var_120_string = var_2_object; // 0x70 MovT
	func_411(var_120_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_131_string = "all"; // 0x75 PushS
	var_132_string = "idle"; // 0x76 PushS
	PlayAnimation(var_131_string, var_132_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_133_string = var_3_string; // 0x7b PushT
	if(var_133_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_134_string = "all"; // 0x7e PushS
	var_135_string = "idle"; // 0x7f PushS
	PlayAnimation(var_134_string, var_135_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_465(var_7_bool, var_8_string, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x1d1 PushV
	FindActor(var_11_object, var_8_string); // 0x1d2 Func
	var_12_bool = var_11_object == 0; // 0x1d4 NullEq
	if(var_12_bool == 0) goto Label_472; // 0x1d5 JumpB
	var_7_bool = 0; // 0x1d6 MovB
	return 2; // 0x1d7 Return
	
Label_472:
	Trigger(var_11_object, var_9_string); // 0x1d8 Func
	var_7_bool = 1; // 0x1da MovB
	return 2; // 0x1db Return
}


func_219(var_15_object)
{
	var_16_int = 0; var_17_object = Obj(); // 0xdc PushV
	var_17_object = var_15_object; // 0xdd Mov
	TaskCall(0); // 0xde TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0xdf NEW_2
	TaskReturn(); // 0xe0 TaskReturn
	return 0; // 0xe2 Return
}


func_483(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x1e3 PushV
	var_81_string = "branch"; // 0x1e4 PushS
	GetVariable(var_81_string, var_80_int); // 0x1e5 Func
	var_82_int = 0; // 0x1e7 PushI
	var_83_bool = var_80_int == var_82_int; // 0x1e8 Eq
	if(var_83_bool == 0) goto Label_493; // 0x1e9 JumpB
	var_78_int = 1; // 0x1ea MovI
	return 2; // 0x1eb Return
	
Label_493:
	var_84_int = 1; // 0x1ed PushI
	var_85_bool = var_80_int == var_84_int; // 0x1ee Eq
	if(var_85_bool == 0) goto Label_498; // 0x1ef JumpB
	var_78_int = 2; // 0x1f0 MovI
	return 2; // 0x1f1 Return
	
Label_498:
	var_78_int = 3; // 0x1f2 MovI
	return 2; // 0x1f3 Return
}


func_500(var_75_int)
{
	var_75_int = 515564; // 0x1f4 MovI
	return 0; // 0x1f5 Return
}


func_502(var_74_int)
{
	var_74_int = 503349; // 0x1f6 MovI
	return 0; // 0x1f7 Return
}


func_504(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2.png"; // 0x1f8 MovS
	return 0; // 0x1f9 Return
}


func_506(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2_b.png"; // 0x1fa MovS
	return 0; // 0x1fb Return
}


func_508(var_69_bool)
{
	var_69_bool = 0; // 0x1fc MovB
	return 0; // 0x1fd Return
}


