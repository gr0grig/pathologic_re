task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0x94 PushI
	if(var_7_int == 0) goto Label_349; // 0x95 JumpB
	func_440(); // 0x97 Call
	var_9_int = 16130; // 0x99 PushI
	var_10_bool = var_5_int == var_9_int; // 0x9a Eq
	if(var_10_bool == 0) goto Label_186; // 0x9b JumpB
	var_11_string = ""; // 0x9c PushV
	var_11_string = "Neutral"; // 0x9d MovS
	func_131(var_6_int, var_11_string); // 0x9e Call
	var_26_int = 14884; // 0xa0 PushI
	SetMessage(var_26_int); // 0xa1 TObjFunc
	ClearReplies(); // 0xa3 TObjFunc
	var_27_int = 14885; // 0xa5 PushI
	var_28_int = 16132; // 0xa6 PushI
	var_29_int = 16131; // 0xa7 PushI
	AddReply(var_27_int, var_28_int, var_29_int); // 0xa8 TObjFunc
	var_30_int = 14905; // 0xaa PushI
	var_31_int = 16132; // 0xab PushI
	var_32_int = 16151; // 0xac PushI
	AddReply(var_30_int, var_31_int, var_32_int); // 0xad TObjFunc
	var_33_int = 14906; // 0xaf PushI
	var_34_int = 16132; // 0xb0 PushI
	var_35_int = 16153; // 0xb1 PushI
	AddReply(var_33_int, var_34_int, var_35_int); // 0xb2 TObjFunc
	var_36_int = 14907; // 0xb4 PushI
	var_37_int = 16132; // 0xb5 PushI
	var_38_int = 16155; // 0xb6 PushI
	AddReply(var_36_int, var_37_int, var_38_int); // 0xb7 TObjFunc
	return 0; // 0xb9 Return
	
Label_186:
	var_39_int = 16132; // 0xba PushI
	var_40_bool = var_5_int == var_39_int; // 0xbb Eq
	if(var_40_bool == 0) goto Label_214; // 0xbc JumpB
	var_41_string = ""; // 0xbd PushV
	var_41_string = "Neutral"; // 0xbe MovS
	func_131(var_6_int, var_41_string); // 0xbf Call
	var_42_int = 14886; // 0xc1 PushI
	SetMessage(var_42_int); // 0xc2 TObjFunc
	ClearReplies(); // 0xc4 TObjFunc
	var_43_int = 14887; // 0xc6 PushI
	var_44_int = 16134; // 0xc7 PushI
	var_45_int = 16133; // 0xc8 PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xc9 TObjFunc
	var_46_int = 14893; // 0xcb PushI
	var_47_int = 16140; // 0xcc PushI
	var_48_int = 16139; // 0xcd PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xce TObjFunc
	var_49_int = 14899; // 0xd0 PushI
	var_50_int = 16146; // 0xd1 PushI
	var_51_int = 16145; // 0xd2 PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0xd3 TObjFunc
	return 0; // 0xd5 Return
	
Label_214:
	var_52_int = 16146; // 0xd6 PushI
	var_53_bool = var_5_int == var_52_int; // 0xd7 Eq
	if(var_53_bool == 0) goto Label_237; // 0xd8 JumpB
	var_54_string = ""; // 0xd9 PushV
	var_54_string = "Neutral"; // 0xda MovS
	func_131(var_6_int, var_54_string); // 0xdb Call
	var_55_int = 14900; // 0xdd PushI
	SetMessage(var_55_int); // 0xde TObjFunc
	ClearReplies(); // 0xe0 TObjFunc
	var_56_int = 14901; // 0xe2 PushI
	var_57_int = 16148; // 0xe3 PushI
	var_58_int = 16147; // 0xe4 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xe5 TObjFunc
	var_59_int = 14904; // 0xe7 PushI
	var_60_int = -1; // 0xe8 PushI
	var_61_int = 16150; // 0xe9 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xea TObjFunc
	return 0; // 0xec Return
	
Label_237:
	var_62_int = 16148; // 0xed PushI
	var_63_bool = var_5_int == var_62_int; // 0xee Eq
	if(var_63_bool == 0) goto Label_255; // 0xef JumpB
	var_64_string = ""; // 0xf0 PushV
	var_64_string = "Neutral"; // 0xf1 MovS
	func_131(var_6_int, var_64_string); // 0xf2 Call
	var_65_int = 14902; // 0xf4 PushI
	SetMessage(var_65_int); // 0xf5 TObjFunc
	ClearReplies(); // 0xf7 TObjFunc
	var_66_int = 14903; // 0xf9 PushI
	var_67_int = -1; // 0xfa PushI
	var_68_int = 16149; // 0xfb PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xfc TObjFunc
	return 0; // 0xfe Return
	
Label_255:
	var_69_int = 16140; // 0xff PushI
	var_70_bool = var_5_int == var_69_int; // 0x100 Eq
	if(var_70_bool == 0) goto Label_278; // 0x101 JumpB
	var_71_string = ""; // 0x102 PushV
	var_71_string = "Neutral"; // 0x103 MovS
	func_131(var_6_int, var_71_string); // 0x104 Call
	var_72_int = 14894; // 0x106 PushI
	SetMessage(var_72_int); // 0x107 TObjFunc
	ClearReplies(); // 0x109 TObjFunc
	var_73_int = 14895; // 0x10b PushI
	var_74_int = 16142; // 0x10c PushI
	var_75_int = 16141; // 0x10d PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x10e TObjFunc
	var_76_int = 14898; // 0x110 PushI
	var_77_int = -1; // 0x111 PushI
	var_78_int = 16144; // 0x112 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x113 TObjFunc
	return 0; // 0x115 Return
	
Label_278:
	var_79_int = 16142; // 0x116 PushI
	var_80_bool = var_5_int == var_79_int; // 0x117 Eq
	if(var_80_bool == 0) goto Label_296; // 0x118 JumpB
	var_81_string = ""; // 0x119 PushV
	var_81_string = "Neutral"; // 0x11a MovS
	func_131(var_6_int, var_81_string); // 0x11b Call
	var_82_int = 14896; // 0x11d PushI
	SetMessage(var_82_int); // 0x11e TObjFunc
	ClearReplies(); // 0x120 TObjFunc
	var_83_int = 14897; // 0x122 PushI
	var_84_int = -1; // 0x123 PushI
	var_85_int = 16143; // 0x124 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x125 TObjFunc
	return 0; // 0x127 Return
	
Label_296:
	var_86_int = 16134; // 0x128 PushI
	var_87_bool = var_5_int == var_86_int; // 0x129 Eq
	if(var_87_bool == 0) goto Label_319; // 0x12a JumpB
	var_88_string = ""; // 0x12b PushV
	var_88_string = "Neutral"; // 0x12c MovS
	func_131(var_6_int, var_88_string); // 0x12d Call
	var_89_int = 14888; // 0x12f PushI
	SetMessage(var_89_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_90_int = 14889; // 0x134 PushI
	var_91_int = 16136; // 0x135 PushI
	var_92_int = 16135; // 0x136 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x137 TObjFunc
	var_93_int = 14892; // 0x139 PushI
	var_94_int = -1; // 0x13a PushI
	var_95_int = 16138; // 0x13b PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x13c TObjFunc
	return 0; // 0x13e Return
	
Label_319:
	var_96_int = 16136; // 0x13f PushI
	var_97_bool = var_5_int == var_96_int; // 0x140 Eq
	if(var_97_bool == 0) goto Label_337; // 0x141 JumpB
	var_98_string = ""; // 0x142 PushV
	var_98_string = "Neutral"; // 0x143 MovS
	func_131(var_6_int, var_98_string); // 0x144 Call
	var_99_int = 14890; // 0x146 PushI
	SetMessage(var_99_int); // 0x147 TObjFunc
	ClearReplies(); // 0x149 TObjFunc
	var_100_int = 14891; // 0x14b PushI
	var_101_int = -1; // 0x14c PushI
	var_102_int = 16137; // 0x14d PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x14e TObjFunc
	return 0; // 0x150 Return
	
Label_337:
	var_3_string = 1; // 0x151 TMovB
	var_103_bool = 0; // 0x152 PushV
	func_478(var_103_bool); // 0x153 Call
	if(var_103_bool == 0) goto Label_345; // 0x155 JumpB
	lshStopAnimation(); // 0x156 Func
	goto Label_347; // 0x158 Jump
	
Label_347:
	return 0; // 0x15b Return
	
Label_345:
	StopAnimation(); // 0x159 Func
	
Label_349:
	return 0; // 0x15d Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj(); // 0x163 PushV
	var_7_object = var_5_object; // 0x164 Mov
	TaskCall(0); // 0x165 TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x166 Call
	TaskReturn(); // 0x167 TaskReturn
	return 0; // 0x169 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_350:
	Hold(); // 0x15e Func
	goto Label_350; // 0x160 Jump
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	func_362(var_18_object); // 0x4 Call
	var_57_bool = var_17_bool == 0; // 0x6 Not
	if(var_57_bool == 0) goto Label_10; // 0x7 JumpB
	var_6_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_13_object); // 0xa Func
	var_58_int = 0; // 0xc PushV
	func_474(var_58_int); // 0xd Call
	SetNPCName(var_58_int); // 0xf ObjFunc
	var_59_string = ""; // 0x11 PushV
	func_476(var_59_string); // 0x12 Call
	SetPhoto(var_59_string); // 0x14 ObjFunc
	var_60_int = 0; // 0x16 PushV
	func_457(var_60_int); // 0x17 Call
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
	var_112_bool = var_16_bool == 0; // 0x2d Not
	if(var_112_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_16_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_113_object = Obj(); // 0x34 PushV
	var_113_object = var_7_object; // 0x35 Mov
	func_418(); // 0x36 Call
	StopDialog(var_13_object); // 0x38 Func
	GetReturnValue(var_15_int); // 0x3a ObjFunc
	var_6_int = var_15_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_418()
{
	CameraSwitchToNormal(); // 0x1a3 Func
	return 0; // 0x1a5 Return
}


func_131(var_2_object, var_76_string)
{
	var_77_bool = 0; // 0x84 PushV
	func_478(var_77_bool); // 0x85 Call
	var_78_bool = var_77_bool == 0; // 0x87 Not
	if(var_78_bool == 0) goto Label_138; // 0x88 JumpB
	return 0; // 0x89 Return
	
Label_138:
	var_79_bool = var_76_string == var_2_object; // 0x8a Eq
	if(var_79_bool == 0) goto Label_141; // 0x8b JumpB
	return 0; // 0x8c Return
	
Label_141:
	var_80_string = ""; // 0x8d PushV
	var_80_string = var_76_string; // 0x8e Mov
	func_422(var_80_string); // 0x8f Call
	var_2_object = var_76_string; // 0x91 TMov
	return 0; // 0x92 Return
}


func_422(var_80_string)
{
	var_81_float = 0; var_82_float = 0; var_83_float = 0; var_84_float = 0; // 0x1a6 PushV
	var_85_string = "playing "; // 0x1a7 PushS
	var_86_int = var_85_string + var_80_string; // 0x1a8 Add
	Trace(var_86_int); // 0x1a9 Func
	lshGetAnimTimes(var_80_string, var_83_float, var_84_float); // 0x1ab Func
	lshPlayAnimation(var_83_float, var_84_float); // 0x1ad Func
	var_87_string = "start: "; // 0x1af PushS
	var_88_int = var_87_string + var_83_float; // 0x1b0 Add
	Trace(var_88_int); // 0x1b1 Func
	var_89_string = "end: "; // 0x1b3 PushS
	var_90_int = var_89_string + var_84_float; // 0x1b4 Add
	Trace(var_90_int); // 0x1b5 Func
	return 4; // 0x1b7 Return
}


func_457(var_60_int)
{
	var_61_int = 0; var_62_int = 0; // 0x1c9 PushV
	var_63_string = "player"; // 0x1ca PushS
	GetVariable(var_63_string, var_62_int); // 0x1cb Func
	var_64_int = 0; // 0x1cd PushI
	var_65_bool = var_62_int == var_64_int; // 0x1ce Eq
	if(var_65_bool == 0) goto Label_467; // 0x1cf JumpB
	var_60_int = 200001; // 0x1d0 MovI
	return 2; // 0x1d1 Return
	
Label_467:
	var_66_int = 1; // 0x1d3 PushI
	var_67_bool = var_62_int == var_66_int; // 0x1d4 Eq
	if(var_67_bool == 0) goto Label_472; // 0x1d5 JumpB
	var_60_int = 200002; // 0x1d6 MovI
	return 2; // 0x1d7 Return
	
Label_472:
	var_60_int = 200003; // 0x1d8 MovI
	return 2; // 0x1d9 Return
}


func_362(var_17_bool)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; // 0x16a PushV
	GetPosition(var_28_cvector); // 0x16b ObjFunc
	GetEyesHeight(var_27_float); // 0x16d ObjFunc
	var_35_float = GetByIndex(var_28_cvector, 1); // 0x16f PushE
	var_35_float = var_35_float + var_27_float; // 0x170 Add2
	SetByIndex(var_28_cvector, 1) = var_35_float; // 0x171 PopE
	GetPosition(var_29_cvector); // 0x172 Func
	GetEyesHeight(var_27_float); // 0x174 Func
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x176 PushE
	var_36_float = var_36_float + var_27_float; // 0x177 Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x178 PopE
	var_30_cvector = var_28_cvector - var_29_cvector; // 0x179 Sub2
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x17a PushE
	var_37_float = 0; // 0x17b MovI
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x17c PopE
	var_38_int = var_30_cvector | var_30_cvector; // 0x17d Or
	var_39_float = sqrt(var_38_int); // 0x17e Sqrt
	var_30_cvector = var_30_cvector / var_30_cvector; // 0x17f Div2
	var_31_cvector = -var_30_cvector; // 0x180 Neg2
	var_40_int = 70; // 0x181 PushI
	var_41_float = var_30_cvector * var_40_int; // 0x182 Mult
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x183 PushV
	var_44_cvector = CVector(0.0, 1.0, 0.0); // 0x184 PushVec
	var_43_cvector = var_31_cvector ^ var_44_cvector; // 0x185 Xor2
	func_447(var_42_cvector, var_43_cvector); // 0x186 Call
	var_50_int = 25; // 0x188 PushI
	var_51_float = var_42_cvector * var_50_int; // 0x189 Mult
	var_52_int = var_41_float + var_51_float; // 0x18a Add
	var_53_cvector = CVector(0.0, 10.0, 0.0); // 0x18b PushVec
	var_32_cvector = var_52_int - var_53_cvector; // 0x18c Sub2
	var_33_cvector = var_29_cvector + var_32_cvector; // 0x18d Add2
	IsOverrideActive(var_34_bool); // 0x18e Func
	var_54_bool = var_34_bool; // 0x190 Push
	if(var_54_bool == 0) goto Label_404; // 0x191 JumpB
	var_17_bool = 0; // 0x192 MovB
	return 16; // 0x193 Return
	
Label_404:
	StopWorld(); // 0x194 Func
	CameraTransit(var_33_cvector, var_31_cvector); // 0x196 Func
	var_55_float = GetByIndex(var_32_cvector, 0); // 0x198 PushE
	var_56_float = GetByIndex(var_32_cvector, 2); // 0x199 PushE
	Rotate(var_55_float, var_56_float); // 0x19a Func
	CameraWaitForPlayFinish(); // 0x19c Func
	ResumeWorld(); // 0x19e Func
	var_17_bool = 1; // 0x1a0 MovB
	return 16; // 0x1a1 Return
}


func_447(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0; // 0x1bf PushV
	var_47_int = var_43_cvector | var_43_cvector; // 0x1c0 Or
	var_46_float = sqrt(var_47_int); // 0x1c1 Sqrt2
	var_48_float = 0.0; // 0x1c2 PushF
	var_49_bool = var_46_float < var_48_float; // 0x1c3 LT
	if(var_49_bool == 0) goto Label_455; // 0x1c4 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x1c5 MovV
	return 2; // 0x1c6 Return
	
Label_455:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x1c7 Div2
	return 2; // 0x1c8 Return
}


func_440()
{
	var_8_bool = 0; // 0x1b8 PushV
	func_478(var_8_bool); // 0x1b9 Call
	if(var_8_bool == 0) goto Label_446; // 0x1bb JumpB
	lshStopSpeech(); // 0x1bc Func
	
Label_446:
	return 0; // 0x1be Return
}


func_474(var_58_int)
{
	var_58_int = 14840; // 0x1da MovI
	return 0; // 0x1db Return
}


func_476(var_59_string)
{
	var_59_string = "ui/NPC_Black.png"; // 0x1dc MovS
	return 0; // 0x1dd Return
}


func_478(var_77_bool)
{
	var_77_bool = 1; // 0x1de MovB
	return 0; // 0x1df Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object; // 0x40 TMov
	var_1_object = var_69_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_75_int = 1; // 0x43 PushI
	if(var_75_int == 0) goto Label_101; // 0x44 JumpB
	var_76_string = ""; // 0x45 PushV
	var_76_string = "Neutral"; // 0x46 MovS
	func_131(var_70_object, var_76_string); // 0x47 Call
	var_91_int = 14884; // 0x49 PushI
	SetMessage(var_91_int); // 0x4a TObjFunc
	ClearReplies(); // 0x4c TObjFunc
	var_92_int = 14885; // 0x4e PushI
	var_93_int = 16132; // 0x4f PushI
	var_94_int = 16131; // 0x50 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x51 TObjFunc
	var_95_int = 14905; // 0x53 PushI
	var_96_int = 16132; // 0x54 PushI
	var_97_int = 16151; // 0x55 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x56 TObjFunc
	var_98_int = 14906; // 0x58 PushI
	var_99_int = 16132; // 0x59 PushI
	var_100_int = 16153; // 0x5a PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x5b TObjFunc
	var_101_int = 14907; // 0x5d PushI
	var_102_int = 16132; // 0x5e PushI
	var_103_int = 16155; // 0x5f PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x60 TObjFunc
	goto Label_101; // 0x62 Jump
	
Label_101:
	var_104_bool = 0; // 0x65 PushV
	func_478(var_104_bool); // 0x66 Call
	if(var_104_bool == 0) goto Label_116; // 0x68 JumpB
	
Label_105:
	lshWaitForAnimEnd(); // 0x69 Func
	var_105_string = var_3_string; // 0x6b PushT
	if(var_105_string == 0) goto Label_110; // 0x6c JumpB
	goto Label_115; // 0x6d Jump
	
Label_115:
	goto Label_130; // 0x73 Jump
	
Label_130:
	return 0; // 0x82 Return
	
Label_110:
	var_106_string = ""; // 0x6e PushV
	var_106_string = var_2_object; // 0x6f MovT
	func_422(var_106_string); // 0x70 Call
	goto Label_105; // 0x72 Jump
	
Label_116:
	var_107_string = "all"; // 0x74 PushS
	var_108_string = "idle"; // 0x75 PushS
	PlayAnimation(var_107_string, var_108_string); // 0x76 Func
	
Label_120:
	WaitForAnimEnd(); // 0x78 Func
	var_109_string = var_3_string; // 0x7a PushT
	if(var_109_string == 0) goto Label_125; // 0x7b JumpB
	goto Label_130; // 0x7c Jump
	
Label_125:
	var_110_string = "all"; // 0x7d PushS
	var_111_string = "idle"; // 0x7e PushS
	PlayAnimation(var_110_string, var_111_string); // 0x7f Func
	goto Label_120; // 0x81 Jump
}


