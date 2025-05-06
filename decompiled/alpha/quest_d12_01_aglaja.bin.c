task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0x8a PushI
	if(var_7_int == 0) goto Label_178; // 0x8b JumpB
	func_269(); // 0x8d Call
	var_9_int = 16089; // 0x8f PushI
	var_10_bool = var_5_int == var_9_int; // 0x90 Eq
	if(var_10_bool == 0) goto Label_166; // 0x91 JumpB
	var_11_string = ""; // 0x92 PushV
	var_11_string = "Neutral"; // 0x93 MovS
	func_121(var_6_int, var_11_string); // 0x94 Call
	var_26_int = 14843; // 0x96 PushI
	SetMessage(var_26_int); // 0x97 TObjFunc
	ClearReplies(); // 0x99 TObjFunc
	var_27_int = 14844; // 0x9b PushI
	var_28_int = -1; // 0x9c PushI
	var_29_int = 16090; // 0x9d PushI
	AddReply(var_27_int, var_28_int, var_29_int); // 0x9e TObjFunc
	var_30_int = 14845; // 0xa0 PushI
	var_31_int = -1; // 0xa1 PushI
	var_32_int = 16091; // 0xa2 PushI
	AddReply(var_30_int, var_31_int, var_32_int); // 0xa3 TObjFunc
	return 0; // 0xa5 Return
	
Label_166:
	var_3_string = 1; // 0xa6 TMovB
	var_33_bool = 0; // 0xa7 PushV
	func_307(var_33_bool); // 0xa8 Call
	if(var_33_bool == 0) goto Label_174; // 0xaa JumpB
	lshStopAnimation(); // 0xab Func
	goto Label_176; // 0xad Jump
	
Label_176:
	return 0; // 0xb0 Return
	
Label_174:
	StopAnimation(); // 0xae Func
	
Label_178:
	return 0; // 0xb2 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj(); // 0xb8 PushV
	var_7_object = var_5_object; // 0xb9 Mov
	TaskCall(0); // 0xba TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0xbb Call
	TaskReturn(); // 0xbc TaskReturn
	return 0; // 0xbe Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_179:
	Hold(); // 0xb3 Func
	goto Label_179; // 0xb5 Jump
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	func_191(var_18_object); // 0x4 Call
	var_57_bool = var_17_bool == 0; // 0x6 Not
	if(var_57_bool == 0) goto Label_10; // 0x7 JumpB
	var_6_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_13_object); // 0xa Func
	var_58_int = 0; // 0xc PushV
	func_303(var_58_int); // 0xd Call
	SetNPCName(var_58_int); // 0xf ObjFunc
	var_59_string = ""; // 0x11 PushV
	func_305(var_59_string); // 0x12 Call
	SetPhoto(var_59_string); // 0x14 ObjFunc
	var_60_int = 0; // 0x16 PushV
	func_286(var_60_int); // 0x17 Call
	SetPlayerName(var_60_int); // 0x19 ObjFunc
	var_15_int = -1; // 0x1b MovI
	IsOverrideActive(var_14_bool); // 0x1c Func
	var_68_bool = var_14_bool; // 0x1e Push
	if(var_68_bool == 0) goto Label_34; // 0x1f JumpB
	var_6_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_13_object); // 0x22 Func
	var_69_object = Obj(); var_70_object = Obj(); // 0x24 PushV
	var_69_object = var_7_object; // 0x25 Mov
	var_70_object = var_13_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_16_bool); // 0x2b ObjFunc
	
Label_45:
	var_106_bool = var_16_bool == 0; // 0x2d Not
	if(var_106_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_16_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_107_object = Obj(); // 0x34 PushV
	var_107_object = var_7_object; // 0x35 Mov
	func_247(); // 0x36 Call
	StopDialog(var_13_object); // 0x38 Func
	GetReturnValue(var_15_int); // 0x3a ObjFunc
	var_6_int = var_15_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_191(var_17_bool)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; // 0xbf PushV
	GetPosition(var_28_cvector); // 0xc0 ObjFunc
	GetEyesHeight(var_27_float); // 0xc2 ObjFunc
	var_35_float = GetByIndex(var_28_cvector, 1); // 0xc4 PushE
	var_35_float = var_35_float + var_27_float; // 0xc5 Add2
	SetByIndex(var_28_cvector, 1) = var_35_float; // 0xc6 PopE
	GetPosition(var_29_cvector); // 0xc7 Func
	GetEyesHeight(var_27_float); // 0xc9 Func
	var_36_float = GetByIndex(var_29_cvector, 1); // 0xcb PushE
	var_36_float = var_36_float + var_27_float; // 0xcc Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0xcd PopE
	var_30_cvector = var_28_cvector - var_29_cvector; // 0xce Sub2
	var_37_float = GetByIndex(var_30_cvector, 1); // 0xcf PushE
	var_37_float = 0; // 0xd0 MovI
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0xd1 PopE
	var_38_int = var_30_cvector | var_30_cvector; // 0xd2 Or
	var_39_float = sqrt(var_38_int); // 0xd3 Sqrt
	var_30_cvector = var_30_cvector / var_30_cvector; // 0xd4 Div2
	var_31_cvector = -var_30_cvector; // 0xd5 Neg2
	var_40_int = 70; // 0xd6 PushI
	var_41_float = var_30_cvector * var_40_int; // 0xd7 Mult
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0xd8 PushV
	var_44_cvector = CVector(0.0, 1.0, 0.0); // 0xd9 PushVec
	var_43_cvector = var_31_cvector ^ var_44_cvector; // 0xda Xor2
	func_276(var_42_cvector, var_43_cvector); // 0xdb Call
	var_50_int = 25; // 0xdd PushI
	var_51_float = var_42_cvector * var_50_int; // 0xde Mult
	var_52_int = var_41_float + var_51_float; // 0xdf Add
	var_53_cvector = CVector(0.0, 10.0, 0.0); // 0xe0 PushVec
	var_32_cvector = var_52_int - var_53_cvector; // 0xe1 Sub2
	var_33_cvector = var_29_cvector + var_32_cvector; // 0xe2 Add2
	IsOverrideActive(var_34_bool); // 0xe3 Func
	var_54_bool = var_34_bool; // 0xe5 Push
	if(var_54_bool == 0) goto Label_233; // 0xe6 JumpB
	var_17_bool = 0; // 0xe7 MovB
	return 16; // 0xe8 Return
	
Label_233:
	StopWorld(); // 0xe9 Func
	CameraTransit(var_33_cvector, var_31_cvector); // 0xeb Func
	var_55_float = GetByIndex(var_32_cvector, 0); // 0xed PushE
	var_56_float = GetByIndex(var_32_cvector, 2); // 0xee PushE
	Rotate(var_55_float, var_56_float); // 0xef Func
	CameraWaitForPlayFinish(); // 0xf1 Func
	ResumeWorld(); // 0xf3 Func
	var_17_bool = 1; // 0xf5 MovB
	return 16; // 0xf6 Return
}


func_269()
{
	var_8_bool = 0; // 0x10d PushV
	func_307(var_8_bool); // 0x10e Call
	if(var_8_bool == 0) goto Label_275; // 0x110 JumpB
	lshStopSpeech(); // 0x111 Func
	
Label_275:
	return 0; // 0x113 Return
}


func_303(var_58_int)
{
	var_58_int = 13334; // 0x12f MovI
	return 0; // 0x130 Return
}


func_305(var_59_string)
{
	var_59_string = "ui/NPC_Aglaja.png"; // 0x131 MovS
	return 0; // 0x132 Return
}


func_307(var_77_bool)
{
	var_77_bool = 1; // 0x133 MovB
	return 0; // 0x134 Return
}


func_276(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0; // 0x114 PushV
	var_47_int = var_43_cvector | var_43_cvector; // 0x115 Or
	var_46_float = sqrt(var_47_int); // 0x116 Sqrt2
	var_48_float = 0.0; // 0x117 PushF
	var_49_bool = var_46_float < var_48_float; // 0x118 LT
	if(var_49_bool == 0) goto Label_284; // 0x119 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x11a MovV
	return 2; // 0x11b Return
	
Label_284:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x11c Div2
	return 2; // 0x11d Return
}


func_247()
{
	CameraSwitchToNormal(); // 0xf8 Func
	return 0; // 0xfa Return
}


func_121(var_2_object, var_76_string)
{
	var_77_bool = 0; // 0x7a PushV
	func_307(var_77_bool); // 0x7b Call
	var_78_bool = var_77_bool == 0; // 0x7d Not
	if(var_78_bool == 0) goto Label_128; // 0x7e JumpB
	return 0; // 0x7f Return
	
Label_128:
	var_79_bool = var_76_string == var_2_object; // 0x80 Eq
	if(var_79_bool == 0) goto Label_131; // 0x81 JumpB
	return 0; // 0x82 Return
	
Label_131:
	var_80_string = ""; // 0x83 PushV
	var_80_string = var_76_string; // 0x84 Mov
	func_251(var_80_string); // 0x85 Call
	var_2_object = var_76_string; // 0x87 TMov
	return 0; // 0x88 Return
}


func_251(var_80_string)
{
	var_81_float = 0; var_82_float = 0; var_83_float = 0; var_84_float = 0; // 0xfb PushV
	var_85_string = "playing "; // 0xfc PushS
	var_86_int = var_85_string + var_80_string; // 0xfd Add
	Trace(var_86_int); // 0xfe Func
	lshGetAnimTimes(var_80_string, var_83_float, var_84_float); // 0x100 Func
	lshPlayAnimation(var_83_float, var_84_float); // 0x102 Func
	var_87_string = "start: "; // 0x104 PushS
	var_88_int = var_87_string + var_83_float; // 0x105 Add
	Trace(var_88_int); // 0x106 Func
	var_89_string = "end: "; // 0x108 PushS
	var_90_int = var_89_string + var_84_float; // 0x109 Add
	Trace(var_90_int); // 0x10a Func
	return 4; // 0x10c Return
}


func_286(var_60_int)
{
	var_61_int = 0; var_62_int = 0; // 0x11e PushV
	var_63_string = "player"; // 0x11f PushS
	GetVariable(var_63_string, var_62_int); // 0x120 Func
	var_64_int = 0; // 0x122 PushI
	var_65_bool = var_62_int == var_64_int; // 0x123 Eq
	if(var_65_bool == 0) goto Label_296; // 0x124 JumpB
	var_60_int = 200001; // 0x125 MovI
	return 2; // 0x126 Return
	
Label_296:
	var_66_int = 1; // 0x128 PushI
	var_67_bool = var_62_int == var_66_int; // 0x129 Eq
	if(var_67_bool == 0) goto Label_301; // 0x12a JumpB
	var_60_int = 200002; // 0x12b MovI
	return 2; // 0x12c Return
	
Label_301:
	var_60_int = 200003; // 0x12d MovI
	return 2; // 0x12e Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object; // 0x40 TMov
	var_1_object = var_69_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_75_int = 1; // 0x43 PushI
	if(var_75_int == 0) goto Label_91; // 0x44 JumpB
	var_76_string = ""; // 0x45 PushV
	var_76_string = "Neutral"; // 0x46 MovS
	func_121(var_70_object, var_76_string); // 0x47 Call
	var_91_int = 14843; // 0x49 PushI
	SetMessage(var_91_int); // 0x4a TObjFunc
	ClearReplies(); // 0x4c TObjFunc
	var_92_int = 14844; // 0x4e PushI
	var_93_int = -1; // 0x4f PushI
	var_94_int = 16090; // 0x50 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x51 TObjFunc
	var_95_int = 14845; // 0x53 PushI
	var_96_int = -1; // 0x54 PushI
	var_97_int = 16091; // 0x55 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x56 TObjFunc
	goto Label_91; // 0x58 Jump
	
Label_91:
	var_98_bool = 0; // 0x5b PushV
	func_307(var_98_bool); // 0x5c Call
	if(var_98_bool == 0) goto Label_106; // 0x5e JumpB
	
Label_95:
	lshWaitForAnimEnd(); // 0x5f Func
	var_99_string = var_3_string; // 0x61 PushT
	if(var_99_string == 0) goto Label_100; // 0x62 JumpB
	goto Label_105; // 0x63 Jump
	
Label_105:
	goto Label_120; // 0x69 Jump
	
Label_120:
	return 0; // 0x78 Return
	
Label_100:
	var_100_string = ""; // 0x64 PushV
	var_100_string = var_2_object; // 0x65 MovT
	func_251(var_100_string); // 0x66 Call
	goto Label_95; // 0x68 Jump
	
Label_106:
	var_101_string = "all"; // 0x6a PushS
	var_102_string = "idle"; // 0x6b PushS
	PlayAnimation(var_101_string, var_102_string); // 0x6c Func
	
Label_110:
	WaitForAnimEnd(); // 0x6e Func
	var_103_string = var_3_string; // 0x70 PushT
	if(var_103_string == 0) goto Label_115; // 0x71 JumpB
	goto Label_120; // 0x72 Jump
	
Label_115:
	var_104_string = "all"; // 0x73 PushS
	var_105_string = "idle"; // 0x74 PushS
	PlayAnimation(var_104_string, var_105_string); // 0x75 Func
	goto Label_110; // 0x77 Jump
}


