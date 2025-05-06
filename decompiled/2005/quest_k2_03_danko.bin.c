task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0x9d PushI
	if(var_9_int == 0) goto Label_192; // 0x9e JumpB
	func_795(); // 0xa0 NEW_2
	var_11_int = 26700; // 0xa2 PushI
	var_12_bool = var_7_cvector == var_11_int; // 0xa3 Eq
	if(var_12_bool == 0) goto Label_180; // 0xa4 JumpB
	var_13_string = ""; // 0xa5 PushV
	var_13_string = "Menace"; // 0xa6 MovS
	func_134(var_8_bool, var_13_string); // 0xa7 NEW_2
	var_30_int = 525332; // 0xa9 PushI
	SetMessage(var_30_int); // 0xaa TObjFunc
	ClearReplies(); // 0xac TObjFunc
	var_31_int = 525333; // 0xae PushI
	var_32_int = -1; // 0xaf PushI
	var_33_int = 26701; // 0xb0 PushI
	AddReply(var_31_int, var_32_int, var_33_int); // 0xb1 TObjFunc
	return 0; // 0xb3 Return
	
Label_180:
	var_3_string = 1; // 0xb4 TMovB
	var_34_bool = 0; // 0xb5 PushV
	func_876(var_34_bool); // 0xb6 NEW_2
	if(var_34_bool == 0) goto Label_188; // 0xb8 JumpB
	lshStopAnimation(); // 0xb9 Func
	goto Label_190; // 0xbb Jump
	
Label_190:
	return 0; // 0xbe Return
	
Label_188:
	StopAnimation(); // 0xbc Func
	
Label_192:
	return 0; // 0xc0 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0xcd PushV
	var_10_string = "cleanup"; // 0xce PushS
	var_11_bool = var_7_string == var_10_string; // 0xcf Eq
	if(var_11_bool == 0) goto Label_220; // 0xd0 JumpB
	var_1_object = 1; // 0xd1 TMovB
	IsLoaded(var_9_bool); // 0xd2 Func
	var_12_bool = var_9_bool == 0; // 0xd4 Not
	if(var_12_bool == 0) goto Label_219; // 0xd5 JumpB
	var_13_object = Obj(); // 0xd6 PushV
	func_802(var_13_object); // 0xd7 NEW_2
	RemoveActor(var_13_object); // 0xd9 Func
	
Label_219:
	goto Label_224; // 0xdb Jump
	
Label_224:
	return 2; // 0xe0 Return
	
Label_220:
	var_16_string = "restore"; // 0xdc PushS
	var_17_bool = var_7_string == var_16_string; // 0xdd Eq
	if(var_17_bool == 0) goto Label_224; // 0xde JumpB
	var_1_object = 0; // 0xdf TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0xe1 PushT
	if(var_7_object == 0) goto Label_234; // 0xe2 JumpB
	var_8_object = Obj(); // 0xe3 PushV
	func_802(var_8_object); // 0xe4 NEW_2
	RemoveActor(var_8_object); // 0xe6 Func
	Hold(); // 0xe8 Func
	
Label_234:
	func_349(); // 0xeb NEW_2
	return 0; // 0xed Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_364(); // 0xef NEW_2
	return 0; // 0xf1 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x138 PushI
	var_9_bool = var_7_int == var_8_int; // 0x139 Eq
	if(var_9_bool == 0) goto Label_348; // 0x13a JumpB
	func_307(); // 0x13c NEW_2
	var_11_bool = 0; // 0x13e PushV
	var_11_bool = 0; // 0x13f MovB
	var_12_bool = 0; // 0x140 PushV
	func_521(var_12_bool); // 0x141 NEW_2
	if(var_12_bool == 0) goto Label_329; // 0x143 JumpB
	var_15_bool = 0; // 0x144 PushV
	func_276(var_15_bool); // 0x145 NEW_2
	if(var_15_bool == 0) goto Label_329; // 0x147 JumpB
	var_11_bool = 1; // 0x148 MovB
	
Label_329:
	if(var_11_bool == 0) goto Label_342; // 0x149 JumpB
	var_32_bool = 0; // 0x14a PushV
	func_256(var_32_bool); // 0x14b NEW_2
	if(var_32_bool == 0) goto Label_341; // 0x14d JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x14e PushV
	var_53_object = Obj(); // 0x14f PushV
	func_802(var_53_object); // 0x150 NEW_2
	var_52_object = var_53_object; // 0x151 Mov
	func_669(var_52_object); // 0x153 NEW_2
	
Label_341:
	goto Label_348; // 0x155 Jump
	
Label_348:
	return 0; // 0x15c Return
	
Label_342:
	func_271(var_7_int); // 0x157 NEW_2
	func_298(); // 0x15a NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x17a Push
	if(var_8_bool == 0) goto Label_384; // 0x17b JumpB
	func_298(); // 0x17d NEW_2
	goto Label_388; // 0x17f Jump
	
Label_388:
	return 0; // 0x184 Return
	
Label_384:
	var_14_string = ""; // 0x180 PushV
	var_14_string = "Neutral"; // 0x181 MovS
	func_749(var_14_string); // 0x182 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x185 PushV
	IsOverrideActive(var_9_bool); // 0x186 Func
	var_10_bool = var_9_bool == 0; // 0x188 Not
	if(var_10_bool == 0) goto Label_417; // 0x189 JumpB
	EventDisable(0); // 0x18a EventDisable
	func_489(); // 0x18c NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x18e PushV
	var_12_object = var_7_object; // 0x18f Mov
	func_512(var_12_object); // 0x190 NEW_2
	EventEnable(0); // 0x192 EventEnable
	var_25_object = Obj(); // 0x193 PushV
	var_25_object = var_7_object; // 0x194 Mov
	func_193(var_25_object); // 0x195 NEW_2
	var_246_string = ""; // 0x197 PushV
	var_246_string = "Neutral"; // 0x198 MovS
	func_749(var_246_string); // 0x199 NEW_2
	func_307(); // 0x19c NEW_2
	func_298(); // 0x19f NEW_2
	
Label_417:
	return 2; // 0x1a1 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_242(var_6_bool); // 0xca NEW_2
	return 0; // 0xcc Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_526(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_870(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_868(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_872(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_874(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_851(var_88_int); // 0x22 NEW_2
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
	func_802(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_611(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_238_bool = var_36_bool == 0; // 0x3f Not
	if(var_238_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_239_object = Obj(); // 0x46 PushV
	var_239_object = var_27_object; // 0x47 Mov
	func_594(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_512(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x200 PushV
	GetPosition(var_14_cvector); // 0x201 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x203 PushV
	var_16_cvector = var_14_cvector; // 0x204 Mov
	func_502(var_15_bool, var_16_cvector); // 0x205 NEW_2
	var_11_bool = var_15_bool; // 0x206 Mov
	return 2; // 0x208 Return
}


func_256(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x100 PushV
	var_35_string = "player"; // 0x101 PushS
	FindActor(var_34_object, var_35_string); // 0x102 Func
	var_36_bool = var_34_object == 0; // 0x104 Not
	if(var_36_bool == 0) goto Label_264; // 0x105 JumpB
	var_32_bool = 0; // 0x106 MovB
	return 2; // 0x107 Return
	
Label_264:
	var_37_bool = 0; var_38_object = Obj(); // 0x108 PushV
	var_38_object = var_34_object; // 0x109 Mov
	func_512(var_38_object); // 0x10a NEW_2
	var_32_bool = var_37_bool; // 0x10b Mov
	return 2; // 0x10d Return
}


func_134(var_2_object, var_199_string)
{
	var_200_bool = 0; // 0x87 PushV
	func_876(var_200_bool); // 0x88 NEW_2
	var_201_bool = var_200_bool == 0; // 0x8a Not
	if(var_201_bool == 0) goto Label_141; // 0x8b JumpB
	return 0; // 0x8c Return
	
Label_141:
	var_202_bool = var_199_string == var_2_object; // 0x8d Eq
	if(var_202_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_203_string = ""; var_204_bool = 0; // 0x90 PushV
	var_203_string = var_199_string; // 0x91 Mov
	var_205_string = ""; // 0x92 PushS
	var_206_bool = var_199_string == var_205_string; // 0x93 Eq
	if(var_206_bool == 0) goto Label_151; // 0x94 JumpB
	var_204_bool = 0; // 0x95 MovB
	goto Label_152; // 0x96 Jump
	
Label_152:
	func_765(var_203_string, var_204_bool); // 0x98 NEW_2
	var_2_object = var_199_string; // 0x9a TMov
	return 0; // 0x9b Return
	
Label_151:
	var_204_bool = 1; // 0x97 MovB
}


func_521(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x209 PushV
	IsLoaded(var_9_bool); // 0x20a Func
	var_7_bool = var_9_bool; // 0x20c Mov
	return 2; // 0x20d Return
}


func_780(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x30c PushV
	var_135_bool = 0; // 0x30d PushV
	func_876(var_135_bool); // 0x30e NEW_2
	if(var_135_bool == 0) goto Label_793; // 0x310 JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x311 Func
	var_136_bool = var_134_bool; // 0x313 Push
	if(var_136_bool == 0) goto Label_793; // 0x314 JumpB
	lshPlaySpeech(var_132_string); // 0x315 Func
	var_131_bool = 1; // 0x317 MovB
	return 2; // 0x318 Return
	
Label_793:
	var_131_bool = 0; // 0x319 MovB
	return 2; // 0x31a Return
}


func_526(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x20e PushV
	GetPosition(var_50_cvector); // 0x20f ObjFunc
	GetEyesHeight(var_49_float); // 0x211 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x213 PushE
	var_58_float = var_58_float + var_49_float; // 0x214 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x215 PopE
	GetPosition(var_51_cvector); // 0x216 Func
	GetEyesHeight(var_49_float); // 0x218 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x21a PushE
	var_59_float = var_59_float + var_49_float; // 0x21b Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x21c PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x21d Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x21e PushE
	var_60_float = 0; // 0x21f MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x220 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x221 Or
	var_62_float = sqrt(var_61_int); // 0x222 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x223 Div2
	var_53_cvector = -var_52_cvector; // 0x224 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x225 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x226 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x227 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x228 Xor2
	func_808(var_64_cvector, var_65_cvector); // 0x229 NEW_2
	var_72_int = 25; // 0x22b PushI
	var_73_float = var_64_cvector * var_72_int; // 0x22c Mult
	var_74_int = var_63_float + var_73_float; // 0x22d Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x22e PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x22f Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x230 Add2
	IsOverrideActive(var_56_bool); // 0x231 Func
	var_76_bool = var_56_bool; // 0x233 Push
	if(var_76_bool == 0) goto Label_567; // 0x234 JumpB
	var_37_bool = 0; // 0x235 MovB
	return 18; // 0x236 Return
	
Label_567:
	StopWorld(); // 0x237 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x239 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x23b PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x23c PushE
	Rotate(var_77_float, var_78_float); // 0x23d Func
	var_79_bool = 0; // 0x23f PushV
	func_876(var_79_bool); // 0x240 NEW_2
	if(var_79_bool == 0) goto Label_580; // 0x242 JumpB
	goto Label_588; // 0x243 Jump
	
Label_588:
	CameraWaitForPlayFinish(); // 0x24c Func
	ResumeWorld(); // 0x24e Func
	var_37_bool = 1; // 0x250 MovB
	return 18; // 0x251 Return
	
Label_580:
	var_80_string = "head"; // 0x244 PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x245 Func
	var_81_bool = var_57_bool; // 0x247 Push
	if(var_81_bool == 0) goto Label_588; // 0x248 JumpB
	var_82_string = "head"; // 0x249 PushS
	LookAsyncCamera(var_82_string); // 0x24a Func
}


func_271(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x10f PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x110 PushE
	RotateAsync(var_84_float, var_85_float); // 0x111 Func
	return 0; // 0x113 Return
}


func_276(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x114 PushV
	var_20_string = "player"; // 0x115 PushS
	FindActor(var_18_object, var_20_string); // 0x116 Func
	var_21_bool = var_18_object == 0; // 0x118 Not
	if(var_21_bool == 0) goto Label_284; // 0x119 JumpB
	var_15_bool = 0; // 0x11a MovB
	return 4; // 0x11b Return
	
Label_284:
	var_22_float = 0; var_23_object = Obj(); // 0x11c PushV
	var_23_object = var_18_object; // 0x11d Mov
	func_494(var_23_object); // 0x11e NEW_2
	var_30_float = 90000.0; // 0x120 PushF
	var_31_bool = var_22_float > var_30_float; // 0x121 GT
	if(var_31_bool == 0) goto Label_293; // 0x122 JumpB
	var_15_bool = 0; // 0x123 MovB
	return 4; // 0x124 Return
	
Label_293:
	CanSee(var_19_bool, var_18_object); // 0x125 Func
	var_15_bool = var_19_bool; // 0x127 Mov
	return 4; // 0x128 Return
}


func_795()
{
	var_10_bool = 0; // 0x31b PushV
	func_876(var_10_bool); // 0x31c NEW_2
	if(var_10_bool == 0) goto Label_801; // 0x31e JumpB
	lshStopSpeech(); // 0x31f Func
	
Label_801:
	return 0; // 0x321 Return
}


func_669(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x29d PushV
	var_115_string = "c"; // 0x29e MovS
	var_116_int = 0; // 0x29f MovI
	
Label_672:
	var_120_int = 1; // 0x2a0 PushI
	if(var_120_int == 0) goto Label_685; // 0x2a1 JumpB
	var_121_int = 1; // 0x2a2 PushI
	var_122_int = var_116_int + var_121_int; // 0x2a3 Add
	var_123_int = var_115_string + var_122_int; // 0x2a4 Add
	HasProperty(var_123_int, var_117_bool); // 0x2a5 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x2a7 Not
	if(var_124_bool == 0) goto Label_682; // 0x2a8 JumpB
	goto Label_685; // 0x2a9 Jump
	
Label_685:
	var_125_bool = var_116_int == 0; // 0x2ad Not
	if(var_125_bool == 0) goto Label_689; // 0x2ae JumpB
	var_108_bool = 0; // 0x2af MovB
	return 10; // 0x2b0 Return
	
Label_689:
	var_118_int = 0; // 0x2b1 MovI
	var_126_int = 1; // 0x2b2 PushI
	var_127_bool = var_116_int > var_126_int; // 0x2b3 GT
	if(var_127_bool == 0) goto Label_695; // 0x2b4 JumpB
	irand(var_118_int, var_116_int); // 0x2b5 Func
	
Label_695:
	var_128_int = 1; // 0x2b7 PushI
	var_129_int = var_118_int + var_128_int; // 0x2b8 Add
	var_130_int = var_115_string + var_129_int; // 0x2b9 Add
	GetProperty(var_130_int, var_119_string); // 0x2ba ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x2bc PushV
	var_132_string = var_119_string; // 0x2bd Mov
	func_780(var_131_bool, var_132_string); // 0x2be NEW_2
	var_108_bool = var_131_bool; // 0x2bf Mov
	return 10; // 0x2c1 Return
	
Label_682:
	var_137_int = 1; // 0x2aa PushI
	var_116_int = var_116_int + var_137_int; // 0x2ab Add2
	goto Label_672; // 0x2ac Jump
}


func_802(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x322 PushV
	self(var_101_object); // 0x323 Func
	var_99_object = var_101_object; // 0x325 Mov
	return 2; // 0x326 Return
}


func_418()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x1a2 PushV
	WaitForAnimEnd(); // 0x1a3 Func
	var_23_bool = 0; // 0x1a5 PushV
	func_521(var_23_bool); // 0x1a6 NEW_2
	var_24_bool = var_23_bool == 0; // 0x1a8 Not
	if(var_24_bool == 0) goto Label_427; // 0x1a9 JumpB
	return 12; // 0x1aa Return
	
Label_427:
	var_25_int = 0; // 0x1ab PushV
	func_834(var_25_int); // 0x1ac NEW_2
	var_17_int = var_25_int; // 0x1ad Mov
	var_18_int = 0; // 0x1af MovI
	
Label_432:
	var_38_bool = 0; // 0x1b0 PushV
	var_38_bool = 0; // 0x1b1 MovB
	var_39_int = 5; // 0x1b2 PushI
	var_40_bool = var_18_int < var_39_int; // 0x1b3 LT
	if(var_40_bool == 0) goto Label_442; // 0x1b4 JumpB
	var_41_bool = 0; // 0x1b5 PushV
	func_521(var_41_bool); // 0x1b6 NEW_2
	if(var_41_bool == 0) goto Label_442; // 0x1b8 JumpB
	var_38_bool = 1; // 0x1b9 MovB
	
Label_442:
	if(var_38_bool == 0) goto Label_484; // 0x1ba JumpB
	var_42_bool = var_17_int == 0; // 0x1bb Not
	if(var_42_bool == 0) goto Label_452; // 0x1bc JumpB
	var_43_int = 3; // 0x1bd PushI
	Sleep(var_43_int, var_19_bool); // 0x1be Func
	var_44_bool = var_19_bool == 0; // 0x1c0 Not
	if(var_44_bool == 0) goto Label_451; // 0x1c1 JumpB
	goto Label_484; // 0x1c2 Jump
	
Label_484:
	ResetAAS(); // 0x1e4 Func
	return 12; // 0x1e6 Return
	
Label_451:
	goto Label_473; // 0x1c3 Jump
	
Label_473:
	var_45_bool = 0; // 0x1d9 PushV
	func_487(var_45_bool); // 0x1da NEW_2
	var_46_bool = var_45_bool == 0; // 0x1dc Not
	if(var_46_bool == 0) goto Label_479; // 0x1dd JumpB
	goto Label_484; // 0x1de Jump
	
Label_479:
	ResetAAS(); // 0x1df Func
	var_47_int = 1; // 0x1e1 PushI
	var_18_int = var_18_int + var_47_int; // 0x1e2 Add2
	goto Label_432; // 0x1e3 Jump
	
Label_452:
	irand(var_20_int, var_17_int); // 0x1c4 Func
	var_48_int = 5; // 0x1c6 PushI
	irand(var_21_int, var_48_int); // 0x1c7 Func
	var_49_int = 0; // 0x1c9 PushI
	var_50_bool = var_21_int != var_49_int; // 0x1ca Neq
	if(var_50_bool == 0) goto Label_461; // 0x1cb JumpB
	var_20_int = 0; // 0x1cc MovI
	
Label_461:
	var_51_string = "all"; // 0x1cd PushS
	var_52_string = ""; var_53_int = 0; // 0x1ce PushV
	var_53_int = var_20_int; // 0x1cf Mov
	func_827(var_52_string, var_53_int); // 0x1d0 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x1d2 Func
	WaitForAnimEnd(var_22_bool); // 0x1d4 Func
	var_54_bool = var_22_bool == 0; // 0x1d6 Not
	if(var_54_bool == 0) goto Label_473; // 0x1d7 JumpB
	goto Label_484; // 0x1d8 Jump
}


func_808(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x328 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x329 Or
	var_68_float = sqrt(var_69_int); // 0x32a Sqrt2
	var_70_float = 0.0; // 0x32b PushF
	var_71_bool = var_68_float < var_70_float; // 0x32c LT
	if(var_71_bool == 0) goto Label_816; // 0x32d JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x32e MovV
	return 2; // 0x32f Return
	
Label_816:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x330 Div2
	return 2; // 0x331 Return
}


func_298()
{
	var_248_float = 0; var_249_float = 0; // 0x12a PushV
	var_250_int = 8; // 0x12b PushI
	var_251_int = 16; // 0x12c PushI
	rand(var_249_float, var_250_int, var_251_int); // 0x12d Func
	var_252_int = 10; // 0x12f PushI
	SetTimer(var_252_int, var_249_float); // 0x130 Func
	return 2; // 0x132 Return
}


func_818(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x332 PushV
	GetGameTime(var_154_float); // 0x333 Func
	var_155_int = 1; // 0x335 PushI
	var_156_int = 0; // 0x336 PushV
	var_157_int = 24; // 0x337 PushI
	var_156_int = var_154_float / var_154_float; // 0x338 Div2
	var_152_int = var_155_int + var_156_int; // 0x339 Add2
	return 2; // 0x33a Return
}


func_307()
{
	var_247_int = 10; // 0x133 PushI
	KillTimer(var_247_int); // 0x134 Func
	return 0; // 0x136 Return
}


func_827(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x33b PushV
	var_34_string = "idle"; // 0x33c MovS
	var_35_int = var_32_int; // 0x33d Push
	if(var_35_int == 0) goto Label_832; // 0x33e JumpB
	var_34_string = var_34_string + var_32_int; // 0x33f Add2
	
Label_832:
	var_31_string = var_34_string; // 0x340 Mov
	return 2; // 0x341 Return
}


func_193(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0xc2 PushV
	var_27_object = var_25_object; // 0xc3 Mov
	TaskCall(0); // 0xc4 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0xc5 NEW_2
	TaskReturn(); // 0xc6 TaskReturn
	return 0; // 0xc8 Return
}


func_834(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x342 PushV
	var_28_int = 0; // 0x343 MovI
	
Label_836:
	var_30_string = "all"; // 0x344 PushS
	var_31_string = ""; var_32_int = 0; // 0x345 PushV
	var_32_int = var_28_int; // 0x346 Mov
	func_827(var_31_string, var_32_int); // 0x347 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x349 Func
	var_36_bool = var_29_bool == 0; // 0x34b Not
	if(var_36_bool == 0) goto Label_846; // 0x34c JumpB
	goto Label_849; // 0x34d Jump
	
Label_849:
	var_25_int = var_28_int; // 0x351 Mov
	return 4; // 0x352 Return
	
Label_846:
	var_37_int = 1; // 0x34e PushI
	var_28_int = var_28_int + var_37_int; // 0x34f Add2
	goto Label_836; // 0x350 Jump
}


func_706(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x2c2 PushV
	var_151_string = "d"; // 0x2c3 PushS
	var_152_int = 0; // 0x2c4 PushV
	func_818(var_152_int); // 0x2c5 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x2c7 Add
	var_159_string = "m"; // 0x2c8 PushS
	var_146_string = var_158_int + var_159_string; // 0x2c9 Add2
	var_147_int = 0; // 0x2ca MovI
	
Label_715:
	var_160_int = 1; // 0x2cb PushI
	if(var_160_int == 0) goto Label_728; // 0x2cc JumpB
	var_161_int = 1; // 0x2cd PushI
	var_162_int = var_147_int + var_161_int; // 0x2ce Add
	var_163_int = var_146_string + var_162_int; // 0x2cf Add
	HasProperty(var_163_int, var_148_bool); // 0x2d0 ObjFunc
	var_164_bool = var_148_bool == 0; // 0x2d2 Not
	if(var_164_bool == 0) goto Label_725; // 0x2d3 JumpB
	goto Label_728; // 0x2d4 Jump
	
Label_728:
	var_165_bool = var_147_int == 0; // 0x2d8 Not
	if(var_165_bool == 0) goto Label_732; // 0x2d9 JumpB
	var_139_bool = 0; // 0x2da MovB
	return 10; // 0x2db Return
	
Label_732:
	var_149_int = 0; // 0x2dc MovI
	var_166_int = 1; // 0x2dd PushI
	var_167_bool = var_147_int > var_166_int; // 0x2de GT
	if(var_167_bool == 0) goto Label_738; // 0x2df JumpB
	irand(var_149_int, var_147_int); // 0x2e0 Func
	
Label_738:
	var_168_int = 1; // 0x2e2 PushI
	var_169_int = var_149_int + var_168_int; // 0x2e3 Add
	var_170_int = var_146_string + var_169_int; // 0x2e4 Add
	GetProperty(var_170_int, var_150_string); // 0x2e5 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x2e7 PushV
	var_172_string = var_150_string; // 0x2e8 Mov
	func_780(var_171_bool, var_172_string); // 0x2e9 NEW_2
	var_139_bool = var_171_bool; // 0x2ea Mov
	return 10; // 0x2ec Return
	
Label_725:
	var_173_int = 1; // 0x2d5 PushI
	var_147_int = var_147_int + var_173_int; // 0x2d6 Add2
	goto Label_715; // 0x2d7 Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_104; // 0x56 JumpB
	var_199_string = ""; // 0x57 PushV
	var_199_string = "Menace"; // 0x58 MovS
	func_134(var_193_object, var_199_string); // 0x59 NEW_2
	var_216_int = 525332; // 0x5b PushI
	SetMessage(var_216_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_217_int = 525333; // 0x60 PushI
	var_218_int = -1; // 0x61 PushI
	var_219_int = 26701; // 0x62 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x63 TObjFunc
	goto Label_104; // 0x65 Jump
	
Label_104:
	var_220_bool = 0; // 0x68 PushV
	func_876(var_220_bool); // 0x69 NEW_2
	if(var_220_bool == 0) goto Label_119; // 0x6b JumpB
	
Label_108:
	lshWaitForAnimEnd(); // 0x6c Func
	var_221_string = var_3_string; // 0x6e PushT
	if(var_221_string == 0) goto Label_113; // 0x6f JumpB
	goto Label_118; // 0x70 Jump
	
Label_118:
	goto Label_133; // 0x76 Jump
	
Label_133:
	return 0; // 0x85 Return
	
Label_113:
	var_222_string = ""; // 0x71 PushV
	var_222_string = var_2_object; // 0x72 MovT
	func_749(var_222_string); // 0x73 NEW_2
	goto Label_108; // 0x75 Jump
	
Label_119:
	var_233_string = "all"; // 0x77 PushS
	var_234_string = "idle"; // 0x78 PushS
	PlayAnimation(var_233_string, var_234_string); // 0x79 Func
	
Label_123:
	WaitForAnimEnd(); // 0x7b Func
	var_235_string = var_3_string; // 0x7d PushT
	if(var_235_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_128:
	var_236_string = "all"; // 0x80 PushS
	var_237_string = "idle"; // 0x81 PushS
	PlayAnimation(var_236_string, var_237_string); // 0x82 Func
	goto Label_123; // 0x84 Jump
}


func_594()
{
	var_240_bool = 0; var_241_bool = 0; // 0x252 PushV
	CameraSwitchToNormal(); // 0x253 Func
	var_242_bool = 0; // 0x255 PushV
	func_876(var_242_bool); // 0x256 NEW_2
	if(var_242_bool == 0) goto Label_602; // 0x258 JumpB
	goto Label_610; // 0x259 Jump
	
Label_610:
	return 2; // 0x262 Return
	
Label_602:
	var_243_string = "head"; // 0x25a PushS
	HasAnimationTrack(var_241_bool, var_243_string); // 0x25b Func
	var_244_bool = var_241_bool; // 0x25d Push
	if(var_244_bool == 0) goto Label_610; // 0x25e JumpB
	var_245_string = "head"; // 0x25f PushS
	UnlookAsync(var_245_string); // 0x260 Func
}


func_851(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x353 PushV
	var_91_string = "branch"; // 0x354 PushS
	GetVariable(var_91_string, var_90_int); // 0x355 Func
	var_92_int = 0; // 0x357 PushI
	var_93_bool = var_90_int == var_92_int; // 0x358 Eq
	if(var_93_bool == 0) goto Label_861; // 0x359 JumpB
	var_88_int = 1; // 0x35a MovI
	return 2; // 0x35b Return
	
Label_861:
	var_94_int = 1; // 0x35d PushI
	var_95_bool = var_90_int == var_94_int; // 0x35e Eq
	if(var_95_bool == 0) goto Label_866; // 0x35f JumpB
	var_88_int = 2; // 0x360 MovI
	return 2; // 0x361 Return
	
Label_866:
	var_88_int = 3; // 0x362 MovI
	return 2; // 0x363 Return
}


func_349()
{
	func_489(); // 0x15e NEW_2
	func_307(); // 0x161 NEW_2
	lshStopSpeech(); // 0x163 Func
	lshStopAnimation(); // 0x165 Func
	StopAsync(); // 0x167 Func
	Hold(); // 0x169 Func
	return 0; // 0x16b Return
}


func_611(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x263 PushV
	var_106_string = "voice_common"; // 0x264 PushS
	GetVariable(var_106_string, var_104_int); // 0x265 Func
	var_107_int = var_104_int; // 0x267 Push
	if(var_107_int == 0) goto Label_649; // 0x268 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x269 PushV
	var_109_object = var_98_object; // 0x26a Mov
	func_669(var_109_object); // 0x26b NEW_2
	var_138_bool = var_108_bool == 0; // 0x26d Not
	if(var_138_bool == 0) goto Label_631; // 0x26e JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x26f PushV
	var_140_object = var_98_object; // 0x270 Mov
	func_706(var_140_object); // 0x271 NEW_2
	var_174_bool = var_139_bool == 0; // 0x273 Not
	if(var_174_bool == 0) goto Label_631; // 0x274 JumpB
	var_97_bool = 0; // 0x275 MovB
	return 4; // 0x276 Return
	
Label_631:
	var_175_int = 2; // 0x277 PushI
	irand(var_105_int, var_175_int); // 0x278 Func
	var_176_int = var_105_int; // 0x27a Push
	if(var_176_int == 0) goto Label_644; // 0x27b JumpB
	var_177_string = "voice_common"; // 0x27c PushS
	var_178_int = 1; // 0x27d PushI
	var_179_int = var_104_int + var_178_int; // 0x27e Add
	var_180_int = 3; // 0x27f PushI
	var_181_int = var_179_int / var_180_int; // 0x280 Mod
	SetVariable(var_177_string, var_181_int); // 0x281 Func
	goto Label_648; // 0x283 Jump
	
Label_648:
	goto Label_667; // 0x288 Jump
	
Label_667:
	var_97_bool = 1; // 0x29b MovB
	return 4; // 0x29c Return
	
Label_644:
	var_182_string = "voice_common"; // 0x284 PushS
	var_183_int = 0; // 0x285 PushI
	SetVariable(var_182_string, var_183_int); // 0x286 Func
	
Label_649:
	var_184_bool = 0; var_185_object = Obj(); // 0x289 PushV
	var_185_object = var_98_object; // 0x28a Mov
	func_706(var_185_object); // 0x28b NEW_2
	var_186_bool = var_184_bool == 0; // 0x28d Not
	if(var_186_bool == 0) goto Label_663; // 0x28e JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x28f PushV
	var_188_object = var_98_object; // 0x290 Mov
	func_669(var_188_object); // 0x291 NEW_2
	var_189_bool = var_187_bool == 0; // 0x293 Not
	if(var_189_bool == 0) goto Label_663; // 0x294 JumpB
	var_97_bool = 0; // 0x295 MovB
	return 4; // 0x296 Return
	
Label_663:
	var_190_string = "voice_common"; // 0x297 PushS
	var_191_int = 1; // 0x298 PushI
	SetVariable(var_190_string, var_191_int); // 0x299 Func
}


func_868(var_85_int)
{
	var_85_int = 515573; // 0x364 MovI
	return 0; // 0x365 Return
}


func_870(var_84_int)
{
	var_84_int = 504032; // 0x366 MovI
	return 0; // 0x367 Return
}


func_487(var_45_bool)
{
	var_45_bool = 1; // 0x1e7 MovB
	return 0; // 0x1e8 Return
}


func_872(var_86_string)
{
	var_86_string = "ui/NPC_Bakalavr.png"; // 0x368 MovS
	return 0; // 0x369 Return
}


func_489()
{
	StopAnimation(); // 0x1e9 Func
	StopGroup0(); // 0x1eb Func
	return 0; // 0x1ed Return
}


func_874(var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr_b.png"; // 0x36a MovS
	return 0; // 0x36b Return
}


func_876(var_79_bool)
{
	var_79_bool = 1; // 0x36c MovB
	return 0; // 0x36d Return
}


func_749(var_222_string)
{
	var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_float = 0; var_228_float = 0; // 0x2ed PushV
	lshHasAnimation(var_226_bool, var_222_string); // 0x2ee Func
	var_229_bool = var_226_bool; // 0x2f0 Push
	if(var_229_bool == 0) goto Label_760; // 0x2f1 JumpB
	lshGetAnimTimes(var_222_string, var_227_float, var_228_float); // 0x2f2 Func
	var_230_bool = 0; // 0x2f4 PushB
	lshPlayAnimation(var_227_float, var_228_float, var_230_bool); // 0x2f5 Func
	goto Label_764; // 0x2f7 Jump
	
Label_764:
	return 6; // 0x2fc Return
	
Label_760:
	var_231_string = "Can't find lsh animation : "; // 0x2f8 PushS
	var_232_int = var_231_string + var_222_string; // 0x2f9 Add
	Trace(var_232_int); // 0x2fa Func
}


func_364()
{
	StopGroup0(); // 0x16c Func
	func_307(); // 0x16f NEW_2
	var_8_string = ""; // 0x171 PushV
	var_8_string = "Neutral"; // 0x172 MovS
	func_749(var_8_string); // 0x173 NEW_2
	func_298(); // 0x176 NEW_2
	return 0; // 0x178 Return
}


func_494(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x1ee PushV
	GetPosition(var_27_cvector); // 0x1ef Func
	GetPosition(var_28_cvector); // 0x1f1 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x1f3 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x1f4 Or2
	return 6; // 0x1f5 Return
}


func_242(var_0_object)
{
	var_7_bool = 0; // 0xf2 PushV
	func_521(var_7_bool); // 0xf3 NEW_2
	var_10_bool = var_7_bool == 0; // 0xf5 Not
	if(var_10_bool == 0) goto Label_249; // 0xf6 JumpB
	Hold(); // 0xf7 Func
	
Label_249:
	GetDirection(var_0_object); // 0xf9 Func
	
Label_251:
	func_418(); // 0xfc NEW_2
	goto Label_251; // 0xfe Jump
}


func_502(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x1f6 PushV
	GetPosition(var_20_cvector); // 0x1f7 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x1f9 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x1fa PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x1fb PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x1fc Func
	var_15_bool = var_22_bool; // 0x1fe Mov
	return 6; // 0x1ff Return
}


func_765(var_203_string, var_204_bool)
{
	var_207_bool = 0; var_208_float = 0; var_209_float = 0; var_210_bool = 0; var_211_float = 0; var_212_float = 0; // 0x2fd PushV
	lshHasAnimation(var_210_bool, var_203_string); // 0x2fe Func
	var_213_bool = var_210_bool; // 0x300 Push
	if(var_213_bool == 0) goto Label_775; // 0x301 JumpB
	lshGetAnimTimes(var_203_string, var_211_float, var_212_float); // 0x302 Func
	lshPlayAnimation(var_211_float, var_212_float, var_204_bool); // 0x304 Func
	goto Label_779; // 0x306 Jump
	
Label_779:
	return 6; // 0x30b Return
	
Label_775:
	var_214_string = "Can't find lsh animation : "; // 0x307 PushS
	var_215_int = var_214_string + var_203_string; // 0x308 Add
	Trace(var_215_int); // 0x309 Func
}


