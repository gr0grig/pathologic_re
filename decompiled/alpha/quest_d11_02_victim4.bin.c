task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0x85 PushI
	if(var_9_int == 0) goto Label_186; // 0x86 JumpB
	func_366(); // 0x88 Call
	var_11_int = 15395; // 0x8a PushI
	var_12_bool = var_7_bool == var_11_int; // 0x8b Eq
	if(var_12_bool == 0) goto Label_156; // 0x8c JumpB
	var_13_string = ""; // 0x8d PushV
	var_13_string = "Neutral"; // 0x8e MovS
	func_116(var_8_bool, var_13_string); // 0x8f Call
	var_28_int = 14181; // 0x91 PushI
	SetMessage(var_28_int); // 0x92 TObjFunc
	ClearReplies(); // 0x94 TObjFunc
	var_29_int = 14182; // 0x96 PushI
	var_30_int = 15397; // 0x97 PushI
	var_31_int = 15396; // 0x98 PushI
	AddReply(var_29_int, var_30_int, var_31_int); // 0x99 TObjFunc
	return 0; // 0x9b Return
	
Label_156:
	var_32_int = 15397; // 0x9c PushI
	var_33_bool = var_7_bool == var_32_int; // 0x9d Eq
	if(var_33_bool == 0) goto Label_174; // 0x9e JumpB
	var_34_string = ""; // 0x9f PushV
	var_34_string = "Neutral"; // 0xa0 MovS
	func_116(var_8_bool, var_34_string); // 0xa1 Call
	var_35_int = 14183; // 0xa3 PushI
	SetMessage(var_35_int); // 0xa4 TObjFunc
	ClearReplies(); // 0xa6 TObjFunc
	var_36_int = 14184; // 0xa8 PushI
	var_37_int = -1; // 0xa9 PushI
	var_38_int = 15398; // 0xaa PushI
	AddReply(var_36_int, var_37_int, var_38_int); // 0xab TObjFunc
	return 0; // 0xad Return
	
Label_174:
	var_3_string = 1; // 0xae TMovB
	var_39_bool = 0; // 0xaf PushV
	func_428(var_39_bool); // 0xb0 Call
	if(var_39_bool == 0) goto Label_182; // 0xb2 JumpB
	lshStopAnimation(); // 0xb3 Func
	goto Label_184; // 0xb5 Jump
	
Label_184:
	return 0; // 0xb8 Return
	
Label_182:
	StopAnimation(); // 0xb6 Func
	
Label_186:
	return 0; // 0xba Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0xc8 PushV
	var_10_string = "execute"; // 0xc9 PushS
	var_11_bool = var_7_string == var_10_string; // 0xca Eq
	if(var_11_bool == 0) goto Label_218; // 0xcb JumpB
	var_1_object = 1; // 0xcc TMovB
	var_12_string = "all"; // 0xcd PushS
	var_13_string = "bdie"; // 0xce PushS
	PlayAnimation(var_12_string, var_13_string); // 0xcf Func
	WaitForAnimEnd(var_9_bool); // 0xd1 Func
	var_14_bool = var_9_bool; // 0xd3 Push
	if(var_14_bool == 0) goto Label_217; // 0xd4 JumpB
	var_15_string = "all"; // 0xd5 PushS
	var_16_string = "bdie"; // 0xd6 PushS
	LockAnimationEnd(var_15_string, var_16_string); // 0xd7 Func
	
Label_217:
	goto Label_222; // 0xd9 Jump
	
Label_222:
	return 2; // 0xde Return
	
Label_218:
	var_17_string = ""; // 0xda PushV
	var_17_string = var_7_string; // 0xdb Mov
	func_242(var_9_bool, var_17_string); // 0xdc Call
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_object = var_1_object; // 0xdf PushT
	if(var_7_object == 0) goto Label_229; // 0xe0 JumpB
	var_8_string = "all"; // 0xe1 PushS
	var_9_string = "bdie"; // 0xe2 PushS
	LockAnimationEnd(var_8_string, var_9_string); // 0xe3 Func
	
Label_229:
	return 0; // 0xe5 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0; // 0xe6 PushV
	var_10_string = "d11q02"; // 0xe7 PushS
	GetVariable(var_10_string, var_9_int); // 0xe8 Func
	var_11_int = 2; // 0xea PushI
	var_12_bool = var_9_int == var_11_int; // 0xeb Eq
	if(var_12_bool == 0) goto Label_241; // 0xec JumpB
	var_13_object = Obj(); // 0xed PushV
	var_13_object = var_7_object; // 0xee Mov
	func_187(var_13_object); // 0xef Call
	
Label_241:
	return 2; // 0xf1 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; // 0x10e PushV
	var_7_bool = 0; // 0x10f MovB
	var_8_object = var_0_object; // 0x110 PushT
	if(var_8_object == 0) goto Label_279; // 0x111 JumpB
	var_9_bool = 0; // 0x112 PushV
	func_286(var_9_bool); // 0x113 Call
	if(var_9_bool == 0) goto Label_279; // 0x115 JumpB
	var_7_bool = 1; // 0x116 MovB
	
Label_279:
	if(var_7_bool == 0) goto Label_285; // 0x117 JumpB
	var_10_object = Obj(); // 0x118 PushV
	func_373(var_10_object); // 0x119 Call
	RemoveActor(var_10_object); // 0x11b Func
	
Label_285:
	return 0; // 0x11d Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; var_8_string = ""; var_9_string = ""; // 0x191 PushV
	var_8_string = "quest_d11_02"; // 0x192 MovS
	var_9_string = "actor_unload"; // 0x193 MovS
	func_389(var_7_bool, var_8_string, var_9_string); // 0x194 Call
	return 0; // 0x196 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = 0; // 0xc3 TMovB
	
Label_196:
	Hold(); // 0xc4 Func
	goto Label_196; // 0xc6 Jump
}


func_288(var_25_bool)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0; // 0x120 PushV
	GetPosition(var_36_cvector); // 0x121 ObjFunc
	GetEyesHeight(var_35_float); // 0x123 ObjFunc
	var_43_float = GetByIndex(var_36_cvector, 1); // 0x125 PushE
	var_43_float = var_43_float + var_35_float; // 0x126 Add2
	SetByIndex(var_36_cvector, 1) = var_43_float; // 0x127 PopE
	GetPosition(var_37_cvector); // 0x128 Func
	GetEyesHeight(var_35_float); // 0x12a Func
	var_44_float = GetByIndex(var_37_cvector, 1); // 0x12c PushE
	var_44_float = var_44_float + var_35_float; // 0x12d Add2
	SetByIndex(var_37_cvector, 1) = var_44_float; // 0x12e PopE
	var_38_cvector = var_36_cvector - var_37_cvector; // 0x12f Sub2
	var_45_float = GetByIndex(var_38_cvector, 1); // 0x130 PushE
	var_45_float = 0; // 0x131 MovI
	SetByIndex(var_38_cvector, 1) = var_45_float; // 0x132 PopE
	var_46_int = var_38_cvector | var_38_cvector; // 0x133 Or
	var_47_float = sqrt(var_46_int); // 0x134 Sqrt
	var_38_cvector = var_38_cvector / var_38_cvector; // 0x135 Div2
	var_39_cvector = -var_38_cvector; // 0x136 Neg2
	var_48_int = 70; // 0x137 PushI
	var_49_float = var_38_cvector * var_48_int; // 0x138 Mult
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x139 PushV
	var_52_cvector = CVector(0.0, 1.0, 0.0); // 0x13a PushVec
	var_51_cvector = var_39_cvector ^ var_52_cvector; // 0x13b Xor2
	func_379(var_50_cvector, var_51_cvector); // 0x13c Call
	var_58_int = 25; // 0x13e PushI
	var_59_float = var_50_cvector * var_58_int; // 0x13f Mult
	var_60_int = var_49_float + var_59_float; // 0x140 Add
	var_61_cvector = CVector(0.0, 10.0, 0.0); // 0x141 PushVec
	var_40_cvector = var_60_int - var_61_cvector; // 0x142 Sub2
	var_41_cvector = var_37_cvector + var_40_cvector; // 0x143 Add2
	IsOverrideActive(var_42_bool); // 0x144 Func
	var_62_bool = var_42_bool; // 0x146 Push
	if(var_62_bool == 0) goto Label_330; // 0x147 JumpB
	var_25_bool = 0; // 0x148 MovB
	return 16; // 0x149 Return
	
Label_330:
	StopWorld(); // 0x14a Func
	CameraTransit(var_41_cvector, var_39_cvector); // 0x14c Func
	var_63_float = GetByIndex(var_40_cvector, 0); // 0x14e PushE
	var_64_float = GetByIndex(var_40_cvector, 2); // 0x14f PushE
	Rotate(var_63_float, var_64_float); // 0x150 Func
	CameraWaitForPlayFinish(); // 0x152 Func
	ResumeWorld(); // 0x154 Func
	var_25_bool = 1; // 0x156 MovB
	return 16; // 0x157 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	func_288(var_26_object); // 0x4 Call
	var_65_bool = var_25_bool == 0; // 0x6 Not
	if(var_65_bool == 0) goto Label_10; // 0x7 JumpB
	var_14_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_21_object); // 0xa Func
	var_66_int = 0; // 0xc PushV
	func_424(var_66_int); // 0xd Call
	SetNPCName(var_66_int); // 0xf ObjFunc
	var_67_string = ""; // 0x11 PushV
	func_426(var_67_string); // 0x12 Call
	SetPhoto(var_67_string); // 0x14 ObjFunc
	var_68_int = 0; // 0x16 PushV
	func_407(var_68_int); // 0x17 Call
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
	func_344(); // 0x36 Call
	StopDialog(var_21_object); // 0x38 Func
	GetReturnValue(var_23_int); // 0x3a ObjFunc
	var_14_int = var_23_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_389(var_7_bool, var_8_string, var_9_string)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x185 PushV
	FindActor(var_11_object, var_8_string); // 0x186 Func
	var_12_bool = var_11_object == 0; // 0x188 NullEq
	if(var_12_bool == 0) goto Label_396; // 0x189 JumpB
	var_7_bool = 0; // 0x18a MovB
	return 2; // 0x18b Return
	
Label_396:
	Trigger(var_11_object, var_9_string); // 0x18c Func
	var_7_bool = 1; // 0x18e MovB
	return 2; // 0x18f Return
}


func_424(var_66_int)
{
	var_66_int = 3349; // 0x1a8 MovI
	return 0; // 0x1a9 Return
}


func_426(var_67_string)
{
	var_67_string = "ui/NPC_None.png"; // 0x1aa MovS
	return 0; // 0x1ab Return
}


func_428(var_85_bool)
{
	var_85_bool = 0; // 0x1ac MovB
	return 0; // 0x1ad Return
}


func_366()
{
	var_10_bool = 0; // 0x16e PushV
	func_428(var_10_bool); // 0x16f Call
	if(var_10_bool == 0) goto Label_372; // 0x171 JumpB
	lshStopSpeech(); // 0x172 Func
	
Label_372:
	return 0; // 0x174 Return
}


func_242(var_0_object, var_17_string)
{
	var_18_bool = 0; var_19_bool = 0; // 0xf2 PushV
	var_20_string = "cleanup"; // 0xf3 PushS
	var_21_bool = var_17_string == var_20_string; // 0xf4 Eq
	if(var_21_bool == 0) goto Label_265; // 0xf5 JumpB
	var_0_object = 1; // 0xf6 TMovB
	IsLoaded(var_19_bool); // 0xf7 Func
	var_22_bool = 0; // 0xf9 PushV
	var_22_bool = 0; // 0xfa MovB
	var_23_bool = var_19_bool == 0; // 0xfb Not
	if(var_23_bool == 0) goto Label_258; // 0xfc JumpB
	var_24_bool = 0; // 0xfd PushV
	func_286(var_24_bool); // 0xfe Call
	if(var_24_bool == 0) goto Label_258; // 0x100 JumpB
	var_22_bool = 1; // 0x101 MovB
	
Label_258:
	if(var_22_bool == 0) goto Label_264; // 0x102 JumpB
	var_25_object = Obj(); // 0x103 PushV
	func_373(var_25_object); // 0x104 Call
	RemoveActor(var_25_object); // 0x106 Func
	
Label_264:
	goto Label_269; // 0x108 Jump
	
Label_269:
	return 2; // 0x10d Return
	
Label_265:
	var_28_string = "restore"; // 0x109 PushS
	var_29_bool = var_17_string == var_28_string; // 0x10a Eq
	if(var_29_bool == 0) goto Label_269; // 0x10b JumpB
	var_0_object = 0; // 0x10c TMovB
}


func_379(var_50_cvector, var_51_cvector)
{
	var_53_float = 0; var_54_float = 0; // 0x17b PushV
	var_55_int = var_51_cvector | var_51_cvector; // 0x17c Or
	var_54_float = sqrt(var_55_int); // 0x17d Sqrt2
	var_56_float = 0.0; // 0x17e PushF
	var_57_bool = var_54_float < var_56_float; // 0x17f LT
	if(var_57_bool == 0) goto Label_387; // 0x180 JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0x181 MovV
	return 2; // 0x182 Return
	
Label_387:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0x183 Div2
	return 2; // 0x184 Return
}


func_116(var_2_object, var_84_string)
{
	var_85_bool = 0; // 0x75 PushV
	func_428(var_85_bool); // 0x76 Call
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
	func_348(var_88_string); // 0x80 Call
	var_2_object = var_84_string; // 0x82 TMov
	return 0; // 0x83 Return
}


func_373(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x175 PushV
	self(var_12_object); // 0x176 Func
	var_10_object = var_12_object; // 0x178 Mov
	return 2; // 0x179 Return
}


func_407(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x197 PushV
	var_71_string = "player"; // 0x198 PushS
	GetVariable(var_71_string, var_70_int); // 0x199 Func
	var_72_int = 0; // 0x19b PushI
	var_73_bool = var_70_int == var_72_int; // 0x19c Eq
	if(var_73_bool == 0) goto Label_417; // 0x19d JumpB
	var_68_int = 200001; // 0x19e MovI
	return 2; // 0x19f Return
	
Label_417:
	var_74_int = 1; // 0x1a1 PushI
	var_75_bool = var_70_int == var_74_int; // 0x1a2 Eq
	if(var_75_bool == 0) goto Label_422; // 0x1a3 JumpB
	var_68_int = 200002; // 0x1a4 MovI
	return 2; // 0x1a5 Return
	
Label_422:
	var_68_int = 200003; // 0x1a6 MovI
	return 2; // 0x1a7 Return
}


func_344()
{
	CameraSwitchToNormal(); // 0x159 Func
	return 0; // 0x15b Return
}


func_187(var_13_object)
{
	var_14_int = 0; var_15_object = Obj(); // 0xbc PushV
	var_15_object = var_13_object; // 0xbd Mov
	TaskCall(0); // 0xbe TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0xbf Call
	TaskReturn(); // 0xc0 TaskReturn
	return 0; // 0xc2 Return
}


func_348(var_88_string)
{
	var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0; // 0x15c PushV
	var_93_string = "playing "; // 0x15d PushS
	var_94_int = var_93_string + var_88_string; // 0x15e Add
	Trace(var_94_int); // 0x15f Func
	lshGetAnimTimes(var_88_string, var_91_float, var_92_float); // 0x161 Func
	lshPlayAnimation(var_91_float, var_92_float); // 0x163 Func
	var_95_string = "start: "; // 0x165 PushS
	var_96_int = var_95_string + var_91_float; // 0x166 Add
	Trace(var_96_int); // 0x167 Func
	var_97_string = "end: "; // 0x169 PushS
	var_98_int = var_97_string + var_92_float; // 0x16a Add
	Trace(var_98_int); // 0x16b Func
	return 4; // 0x16d Return
}


func_286(var_9_bool)
{
	var_9_bool = 1; // 0x11e MovB
	return 0; // 0x11f Return
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
	var_99_int = 14181; // 0x49 PushI
	SetMessage(var_99_int); // 0x4a TObjFunc
	ClearReplies(); // 0x4c TObjFunc
	var_100_int = 14182; // 0x4e PushI
	var_101_int = 15397; // 0x4f PushI
	var_102_int = 15396; // 0x50 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x51 TObjFunc
	goto Label_86; // 0x53 Jump
	
Label_86:
	var_103_bool = 0; // 0x56 PushV
	func_428(var_103_bool); // 0x57 Call
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
	func_348(var_105_string); // 0x61 Call
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


