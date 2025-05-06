task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0x85 PushI
	if(var_9_int == 0) goto Label_168; // 0x86 JumpB
	func_348(); // 0x88 Call
	var_11_int = 15389; // 0x8a PushI
	var_12_bool = var_7_bool == var_11_int; // 0x8b Eq
	if(var_12_bool == 0) goto Label_156; // 0x8c JumpB
	var_13_string = ""; // 0x8d PushV
	var_13_string = "Neutral"; // 0x8e MovS
	func_116(var_8_bool, var_13_string); // 0x8f Call
	var_28_int = 14175; // 0x91 PushI
	SetMessage(var_28_int); // 0x92 TObjFunc
	ClearReplies(); // 0x94 TObjFunc
	var_29_int = 14176; // 0x96 PushI
	var_30_int = -1; // 0x97 PushI
	var_31_int = 15390; // 0x98 PushI
	AddReply(var_29_int, var_30_int, var_31_int); // 0x99 TObjFunc
	return 0; // 0x9b Return
	
Label_156:
	var_3_string = 1; // 0x9c TMovB
	var_32_bool = 0; // 0x9d PushV
	func_410(var_32_bool); // 0x9e Call
	if(var_32_bool == 0) goto Label_164; // 0xa0 JumpB
	lshStopAnimation(); // 0xa1 Func
	goto Label_166; // 0xa3 Jump
	
Label_166:
	return 0; // 0xa6 Return
	
Label_164:
	StopAnimation(); // 0xa4 Func
	
Label_168:
	return 0; // 0xa8 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0xb6 PushV
	var_10_string = "execute"; // 0xb7 PushS
	var_11_bool = var_7_string == var_10_string; // 0xb8 Eq
	if(var_11_bool == 0) goto Label_200; // 0xb9 JumpB
	var_1_object = 1; // 0xba TMovB
	var_12_string = "all"; // 0xbb PushS
	var_13_string = "bdie"; // 0xbc PushS
	PlayAnimation(var_12_string, var_13_string); // 0xbd Func
	WaitForAnimEnd(var_9_bool); // 0xbf Func
	var_14_bool = var_9_bool; // 0xc1 Push
	if(var_14_bool == 0) goto Label_199; // 0xc2 JumpB
	var_15_string = "all"; // 0xc3 PushS
	var_16_string = "bdie"; // 0xc4 PushS
	LockAnimationEnd(var_15_string, var_16_string); // 0xc5 Func
	
Label_199:
	goto Label_204; // 0xc7 Jump
	
Label_204:
	return 2; // 0xcc Return
	
Label_200:
	var_17_string = ""; // 0xc8 PushV
	var_17_string = var_7_string; // 0xc9 Mov
	func_224(var_9_bool, var_17_string); // 0xca Call
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_object = var_1_object; // 0xcd PushT
	if(var_7_object == 0) goto Label_211; // 0xce JumpB
	var_8_string = "all"; // 0xcf PushS
	var_9_string = "bdie"; // 0xd0 PushS
	LockAnimationEnd(var_8_string, var_9_string); // 0xd1 Func
	
Label_211:
	return 0; // 0xd3 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0xd4 PushV
	var_10_string = "d11q02"; // 0xd5 PushS
	GetVariable(var_10_string, var_9_int); // 0xd6 Func
	var_11_int = 2; // 0xd8 PushI
	var_12_bool = var_9_int == var_11_int; // 0xd9 Eq
	if(var_12_bool == 0) goto Label_223; // 0xda JumpB
	var_13_object = Obj(); // 0xdb PushV
	var_13_object = var_7_object; // 0xdc Mov
	func_169(var_13_object); // 0xdd Call
	
Label_223:
	return 2; // 0xdf Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; // 0xfc PushV
	var_7_bool = 0; // 0xfd MovB
	var_8_object = var_0_object; // 0xfe PushT
	if(var_8_object == 0) goto Label_261; // 0xff JumpB
	var_9_bool = 0; // 0x100 PushV
	func_268(var_9_bool); // 0x101 Call
	if(var_9_bool == 0) goto Label_261; // 0x103 JumpB
	var_7_bool = 1; // 0x104 MovB
	
Label_261:
	if(var_7_bool == 0) goto Label_267; // 0x105 JumpB
	var_10_object = Obj(); // 0x106 PushV
	func_355(var_10_object); // 0x107 Call
	RemoveActor(var_10_object); // 0x109 Func
	
Label_267:
	return 0; // 0x10b Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; var_8_string = ""; var_9_string = ""; // 0x17f PushV
	var_8_string = "quest_d11_02"; // 0x180 MovS
	var_9_string = "actor_unload"; // 0x181 MovS
	func_371(var_7_bool, var_8_string, var_9_string); // 0x182 Call
	return 0; // 0x184 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = 0; // 0xb1 TMovB
	
Label_178:
	Hold(); // 0xb2 Func
	goto Label_178; // 0xb4 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	func_270(var_26_object); // 0x4 Call
	var_65_bool = var_25_bool == 0; // 0x6 Not
	if(var_65_bool == 0) goto Label_10; // 0x7 JumpB
	var_14_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_21_object); // 0xa Func
	var_66_int = 0; // 0xc PushV
	func_406(var_66_int); // 0xd Call
	SetNPCName(var_66_int); // 0xf ObjFunc
	var_67_string = ""; // 0x11 PushV
	func_408(var_67_string); // 0x12 Call
	SetPhoto(var_67_string); // 0x14 ObjFunc
	var_68_int = 0; // 0x16 PushV
	func_389(var_68_int); // 0x17 Call
	SetPlayerName(var_68_int); // 0x19 ObjFunc
	var_23_int = -1; // 0x1b MovI
	IsOverrideActive(var_22_bool); // 0x1c Func
	var_76_bool = var_22_bool; // 0x1e Push
	if(var_76_bool == 0) goto Label_34; // 0x1f JumpB
	var_14_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_21_object); // 0x22 Func
	var_77_object = Obj(); var_78_object = Obj(); // 0x24 PushV
	var_77_object = var_15_object; // 0x25 Mov
	var_78_object = var_21_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_24_bool); // 0x2b ObjFunc
	
Label_45:
	var_111_bool = var_24_bool == 0; // 0x2d Not
	if(var_111_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_24_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_112_object = Obj(); // 0x34 PushV
	var_112_object = var_15_object; // 0x35 Mov
	func_326(); // 0x36 Call
	StopDialog(var_21_object); // 0x38 Func
	GetReturnValue(var_23_int); // 0x3a ObjFunc
	var_14_int = var_23_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_224(var_0_object, var_17_string)
{
	var_18_bool = 0; var_19_bool = 0; // 0xe0 PushV
	var_20_string = "cleanup"; // 0xe1 PushS
	var_21_bool = var_17_string == var_20_string; // 0xe2 Eq
	if(var_21_bool == 0) goto Label_247; // 0xe3 JumpB
	var_0_object = 1; // 0xe4 TMovB
	IsLoaded(var_19_bool); // 0xe5 Func
	var_22_bool = 0; // 0xe7 PushV
	var_22_bool = 0; // 0xe8 MovB
	var_23_bool = var_19_bool == 0; // 0xe9 Not
	if(var_23_bool == 0) goto Label_240; // 0xea JumpB
	var_24_bool = 0; // 0xeb PushV
	func_268(var_24_bool); // 0xec Call
	if(var_24_bool == 0) goto Label_240; // 0xee JumpB
	var_22_bool = 1; // 0xef MovB
	
Label_240:
	if(var_22_bool == 0) goto Label_246; // 0xf0 JumpB
	var_25_object = Obj(); // 0xf1 PushV
	func_355(var_25_object); // 0xf2 Call
	RemoveActor(var_25_object); // 0xf4 Func
	
Label_246:
	goto Label_251; // 0xf6 Jump
	
Label_251:
	return 2; // 0xfb Return
	
Label_247:
	var_28_string = "restore"; // 0xf7 PushS
	var_29_bool = var_17_string == var_28_string; // 0xf8 Eq
	if(var_29_bool == 0) goto Label_251; // 0xf9 JumpB
	var_0_object = 0; // 0xfa TMovB
}


func_355(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x163 PushV
	self(var_12_object); // 0x164 Func
	var_10_object = var_12_object; // 0x166 Mov
	return 2; // 0x167 Return
}


func_389(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x185 PushV
	var_71_string = "player"; // 0x186 PushS
	GetVariable(var_71_string, var_70_int); // 0x187 Func
	var_72_int = 0; // 0x189 PushI
	var_73_bool = var_70_int == var_72_int; // 0x18a Eq
	if(var_73_bool == 0) goto Label_399; // 0x18b JumpB
	var_68_int = 200001; // 0x18c MovI
	return 2; // 0x18d Return
	
Label_399:
	var_74_int = 1; // 0x18f PushI
	var_75_bool = var_70_int == var_74_int; // 0x190 Eq
	if(var_75_bool == 0) goto Label_404; // 0x191 JumpB
	var_68_int = 200002; // 0x192 MovI
	return 2; // 0x193 Return
	
Label_404:
	var_68_int = 200003; // 0x194 MovI
	return 2; // 0x195 Return
}


func_326()
{
	CameraSwitchToNormal(); // 0x147 Func
	return 0; // 0x149 Return
}


func_169(var_13_object)
{
	var_14_int = 0; var_15_object = Obj(); // 0xaa PushV
	var_15_object = var_13_object; // 0xab Mov
	TaskCall(0); // 0xac TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0xad Call
	TaskReturn(); // 0xae TaskReturn
	return 0; // 0xb0 Return
}


func_330(var_88_string)
{
	var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0; // 0x14a PushV
	var_93_string = "playing "; // 0x14b PushS
	var_94_int = var_93_string + var_88_string; // 0x14c Add
	Trace(var_94_int); // 0x14d Func
	lshGetAnimTimes(var_88_string, var_91_float, var_92_float); // 0x14f Func
	lshPlayAnimation(var_91_float, var_92_float); // 0x151 Func
	var_95_string = "start: "; // 0x153 PushS
	var_96_int = var_95_string + var_91_float; // 0x154 Add
	Trace(var_96_int); // 0x155 Func
	var_97_string = "end: "; // 0x157 PushS
	var_98_int = var_97_string + var_92_float; // 0x158 Add
	Trace(var_98_int); // 0x159 Func
	return 4; // 0x15b Return
}


func_361(var_50_cvector, var_51_cvector)
{
	var_53_float = 0; var_54_float = 0; // 0x169 PushV
	var_55_int = var_51_cvector | var_51_cvector; // 0x16a Or
	var_54_float = sqrt(var_55_int); // 0x16b Sqrt2
	var_56_float = 0.0; // 0x16c PushF
	var_57_bool = var_54_float < var_56_float; // 0x16d LT
	if(var_57_bool == 0) goto Label_369; // 0x16e JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0x16f MovV
	return 2; // 0x170 Return
	
Label_369:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0x171 Div2
	return 2; // 0x172 Return
}


func_268(var_9_bool)
{
	var_9_bool = 1; // 0x10c MovB
	return 0; // 0x10d Return
}


func_270(var_25_bool)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0; // 0x10e PushV
	GetPosition(var_36_cvector); // 0x10f ObjFunc
	GetEyesHeight(var_35_float); // 0x111 ObjFunc
	var_43_float = GetByIndex(var_36_cvector, 1); // 0x113 PushE
	var_43_float = var_43_float + var_35_float; // 0x114 Add2
	SetByIndex(var_36_cvector, 1) = var_43_float; // 0x115 PopE
	GetPosition(var_37_cvector); // 0x116 Func
	GetEyesHeight(var_35_float); // 0x118 Func
	var_44_float = GetByIndex(var_37_cvector, 1); // 0x11a PushE
	var_44_float = var_44_float + var_35_float; // 0x11b Add2
	SetByIndex(var_37_cvector, 1) = var_44_float; // 0x11c PopE
	var_38_cvector = var_36_cvector - var_37_cvector; // 0x11d Sub2
	var_45_float = GetByIndex(var_38_cvector, 1); // 0x11e PushE
	var_45_float = 0; // 0x11f MovI
	SetByIndex(var_38_cvector, 1) = var_45_float; // 0x120 PopE
	var_46_int = var_38_cvector | var_38_cvector; // 0x121 Or
	var_47_float = sqrt(var_46_int); // 0x122 Sqrt
	var_38_cvector = var_38_cvector / var_38_cvector; // 0x123 Div2
	var_39_cvector = -var_38_cvector; // 0x124 Neg2
	var_48_int = 70; // 0x125 PushI
	var_49_float = var_38_cvector * var_48_int; // 0x126 Mult
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x127 PushV
	var_52_cvector = CVector(0.0, 1.0, 0.0); // 0x128 PushVec
	var_51_cvector = var_39_cvector ^ var_52_cvector; // 0x129 Xor2
	func_361(var_50_cvector, var_51_cvector); // 0x12a Call
	var_58_int = 25; // 0x12c PushI
	var_59_float = var_50_cvector * var_58_int; // 0x12d Mult
	var_60_int = var_49_float + var_59_float; // 0x12e Add
	var_61_cvector = CVector(0.0, 10.0, 0.0); // 0x12f PushVec
	var_40_cvector = var_60_int - var_61_cvector; // 0x130 Sub2
	var_41_cvector = var_37_cvector + var_40_cvector; // 0x131 Add2
	IsOverrideActive(var_42_bool); // 0x132 Func
	var_62_bool = var_42_bool; // 0x134 Push
	if(var_62_bool == 0) goto Label_312; // 0x135 JumpB
	var_25_bool = 0; // 0x136 MovB
	return 16; // 0x137 Return
	
Label_312:
	StopWorld(); // 0x138 Func
	CameraTransit(var_41_cvector, var_39_cvector); // 0x13a Func
	var_63_float = GetByIndex(var_40_cvector, 0); // 0x13c PushE
	var_64_float = GetByIndex(var_40_cvector, 2); // 0x13d PushE
	Rotate(var_63_float, var_64_float); // 0x13e Func
	CameraWaitForPlayFinish(); // 0x140 Func
	ResumeWorld(); // 0x142 Func
	var_25_bool = 1; // 0x144 MovB
	return 16; // 0x145 Return
}


func_371(var_7_bool, var_8_string, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x173 PushV
	FindActor(var_11_object, var_8_string); // 0x174 Func
	var_12_bool = var_11_object == 0; // 0x176 NullEq
	if(var_12_bool == 0) goto Label_378; // 0x177 JumpB
	var_7_bool = 0; // 0x178 MovB
	return 2; // 0x179 Return
	
Label_378:
	Trigger(var_11_object, var_9_string); // 0x17a Func
	var_7_bool = 1; // 0x17c MovB
	return 2; // 0x17d Return
}


func_116(var_2_object, var_84_string)
{
	var_85_bool = 0; // 0x75 PushV
	func_410(var_85_bool); // 0x76 Call
	var_86_bool = var_85_bool == 0; // 0x78 Not
	if(var_86_bool == 0) goto Label_123; // 0x79 JumpB
	return 0; // 0x7a Return
	
Label_123:
	var_87_bool = var_84_string == var_2_object; // 0x7b Eq
	if(var_87_bool == 0) goto Label_126; // 0x7c JumpB
	return 0; // 0x7d Return
	
Label_126:
	var_88_string = ""; // 0x7e PushV
	var_88_string = var_84_string; // 0x7f Mov
	func_330(var_88_string); // 0x80 Call
	var_2_object = var_84_string; // 0x82 TMov
	return 0; // 0x83 Return
}


func_406(var_66_int)
{
	var_66_int = 3353; // 0x196 MovI
	return 0; // 0x197 Return
}


func_408(var_67_string)
{
	var_67_string = "ui/NPC_None.png"; // 0x198 MovS
	return 0; // 0x199 Return
}


func_410(var_85_bool)
{
	var_85_bool = 0; // 0x19a MovB
	return 0; // 0x19b Return
}


func_348()
{
	var_10_bool = 0; // 0x15c PushV
	func_410(var_10_bool); // 0x15d Call
	if(var_10_bool == 0) goto Label_354; // 0x15f JumpB
	lshStopSpeech(); // 0x160 Func
	
Label_354:
	return 0; // 0x162 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_77_object, var_78_object)
{
	var_0_object = var_78_object; // 0x40 TMov
	var_1_object = var_77_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_83_int = 1; // 0x43 PushI
	if(var_83_int == 0) goto Label_86; // 0x44 JumpB
	var_84_string = ""; // 0x45 PushV
	var_84_string = "Neutral"; // 0x46 MovS
	func_116(var_78_object, var_84_string); // 0x47 Call
	var_99_int = 14175; // 0x49 PushI
	SetMessage(var_99_int); // 0x4a TObjFunc
	ClearReplies(); // 0x4c TObjFunc
	var_100_int = 14176; // 0x4e PushI
	var_101_int = -1; // 0x4f PushI
	var_102_int = 15390; // 0x50 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x51 TObjFunc
	goto Label_86; // 0x53 Jump
	
Label_86:
	var_103_bool = 0; // 0x56 PushV
	func_410(var_103_bool); // 0x57 Call
	if(var_103_bool == 0) goto Label_101; // 0x59 JumpB
	
Label_90:
	lshWaitForAnimEnd(); // 0x5a Func
	var_104_string = var_3_string; // 0x5c PushT
	if(var_104_string == 0) goto Label_95; // 0x5d JumpB
	goto Label_100; // 0x5e Jump
	
Label_100:
	goto Label_115; // 0x64 Jump
	
Label_115:
	return 0; // 0x73 Return
	
Label_95:
	var_105_string = ""; // 0x5f PushV
	var_105_string = var_2_object; // 0x60 MovT
	func_330(var_105_string); // 0x61 Call
	goto Label_90; // 0x63 Jump
	
Label_101:
	var_106_string = "all"; // 0x65 PushS
	var_107_string = "idle"; // 0x66 PushS
	PlayAnimation(var_106_string, var_107_string); // 0x67 Func
	
Label_105:
	WaitForAnimEnd(); // 0x69 Func
	var_108_string = var_3_string; // 0x6b PushT
	if(var_108_string == 0) goto Label_110; // 0x6c JumpB
	goto Label_115; // 0x6d Jump
	
Label_110:
	var_109_string = "all"; // 0x6e PushS
	var_110_string = "idle"; // 0x6f PushS
	PlayAnimation(var_109_string, var_110_string); // 0x70 Func
	goto Label_105; // 0x72 Jump
}


