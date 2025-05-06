task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0x8f PushI
	if(var_7_int == 0) goto Label_334; // 0x90 JumpB
	func_425(); // 0x92 Call
	var_9_int = 16159; // 0x94 PushI
	var_10_bool = var_6_int == var_9_int; // 0x95 Eq
	if(var_10_bool == 0) goto Label_156; // 0x96 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0x97 PushV
	var_11_object = var_1_object; // 0x98 MovT
	var_12_object = var_0_object; // 0x99 MovT
	func_447(); // 0x9a Call
	
Label_156:
	var_15_int = 16158; // 0x9c PushI
	var_16_bool = var_5_int == var_15_int; // 0x9d Eq
	if(var_16_bool == 0) goto Label_184; // 0x9e JumpB
	var_17_string = ""; // 0x9f PushV
	var_17_string = "Neutral"; // 0xa0 MovS
	func_126(var_6_int, var_17_string); // 0xa1 Call
	var_32_int = 14909; // 0xa3 PushI
	SetMessage(var_32_int); // 0xa4 TObjFunc
	ClearReplies(); // 0xa6 TObjFunc
	var_33_bool = 0; var_34_object = Obj(); // 0xa8 PushV
	var_34_object = var_1_object; // 0xa9 MovT
	func_453(var_34_object); // 0xaa Call
	if(var_33_bool == 0) goto Label_178; // 0xac JumpB
	var_41_int = 14910; // 0xad PushI
	var_42_int = 16160; // 0xae PushI
	var_43_int = 16159; // 0xaf PushI
	AddReply(var_41_int, var_42_int, var_43_int); // 0xb0 TObjFunc
	
Label_178:
	var_44_int = 14929; // 0xb2 PushI
	var_45_int = -1; // 0xb3 PushI
	var_46_int = 16180; // 0xb4 PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xb5 TObjFunc
	return 0; // 0xb7 Return
	
Label_184:
	var_47_int = 16160; // 0xb8 PushI
	var_48_bool = var_5_int == var_47_int; // 0xb9 Eq
	if(var_48_bool == 0) goto Label_212; // 0xba JumpB
	var_49_string = ""; // 0xbb PushV
	var_49_string = "Neutral"; // 0xbc MovS
	func_126(var_6_int, var_49_string); // 0xbd Call
	var_50_int = 14911; // 0xbf PushI
	SetMessage(var_50_int); // 0xc0 TObjFunc
	ClearReplies(); // 0xc2 TObjFunc
	var_51_int = 14912; // 0xc4 PushI
	var_52_int = 16162; // 0xc5 PushI
	var_53_int = 16161; // 0xc6 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xc7 TObjFunc
	var_54_int = 14922; // 0xc9 PushI
	var_55_int = 16172; // 0xca PushI
	var_56_int = 16171; // 0xcb PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xcc TObjFunc
	var_57_int = 14925; // 0xce PushI
	var_58_int = 16176; // 0xcf PushI
	var_59_int = 16175; // 0xd0 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xd1 TObjFunc
	return 0; // 0xd3 Return
	
Label_212:
	var_60_int = 16176; // 0xd4 PushI
	var_61_bool = var_5_int == var_60_int; // 0xd5 Eq
	if(var_61_bool == 0) goto Label_235; // 0xd6 JumpB
	var_62_string = ""; // 0xd7 PushV
	var_62_string = "Neutral"; // 0xd8 MovS
	func_126(var_6_int, var_62_string); // 0xd9 Call
	var_63_int = 14926; // 0xdb PushI
	SetMessage(var_63_int); // 0xdc TObjFunc
	ClearReplies(); // 0xde TObjFunc
	var_64_int = 14927; // 0xe0 PushI
	var_65_int = -1; // 0xe1 PushI
	var_66_int = 16177; // 0xe2 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xe3 TObjFunc
	var_67_int = 14928; // 0xe5 PushI
	var_68_int = 16162; // 0xe6 PushI
	var_69_int = 16178; // 0xe7 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_70_int = 16172; // 0xeb PushI
	var_71_bool = var_5_int == var_70_int; // 0xec Eq
	if(var_71_bool == 0) goto Label_253; // 0xed JumpB
	var_72_string = ""; // 0xee PushV
	var_72_string = "Neutral"; // 0xef MovS
	func_126(var_6_int, var_72_string); // 0xf0 Call
	var_73_int = 14923; // 0xf2 PushI
	SetMessage(var_73_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_74_int = 14924; // 0xf7 PushI
	var_75_int = 16162; // 0xf8 PushI
	var_76_int = 16173; // 0xf9 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xfa TObjFunc
	return 0; // 0xfc Return
	
Label_253:
	var_77_int = 16162; // 0xfd PushI
	var_78_bool = var_5_int == var_77_int; // 0xfe Eq
	if(var_78_bool == 0) goto Label_276; // 0xff JumpB
	var_79_string = ""; // 0x100 PushV
	var_79_string = "Neutral"; // 0x101 MovS
	func_126(var_6_int, var_79_string); // 0x102 Call
	var_80_int = 14913; // 0x104 PushI
	SetMessage(var_80_int); // 0x105 TObjFunc
	ClearReplies(); // 0x107 TObjFunc
	var_81_int = 14914; // 0x109 PushI
	var_82_int = 16164; // 0x10a PushI
	var_83_int = 16163; // 0x10b PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x10c TObjFunc
	var_84_int = 14921; // 0x10e PushI
	var_85_int = -1; // 0x10f PushI
	var_86_int = 16170; // 0x110 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x111 TObjFunc
	return 0; // 0x113 Return
	
Label_276:
	var_87_int = 16164; // 0x114 PushI
	var_88_bool = var_5_int == var_87_int; // 0x115 Eq
	if(var_88_bool == 0) goto Label_299; // 0x116 JumpB
	var_89_string = ""; // 0x117 PushV
	var_89_string = "Neutral"; // 0x118 MovS
	func_126(var_6_int, var_89_string); // 0x119 Call
	var_90_int = 14915; // 0x11b PushI
	SetMessage(var_90_int); // 0x11c TObjFunc
	ClearReplies(); // 0x11e TObjFunc
	var_91_int = 14916; // 0x120 PushI
	var_92_int = 16166; // 0x121 PushI
	var_93_int = 16165; // 0x122 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x123 TObjFunc
	var_94_int = 14920; // 0x125 PushI
	var_95_int = -1; // 0x126 PushI
	var_96_int = 16169; // 0x127 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x128 TObjFunc
	return 0; // 0x12a Return
	
Label_299:
	var_97_int = 16166; // 0x12b PushI
	var_98_bool = var_5_int == var_97_int; // 0x12c Eq
	if(var_98_bool == 0) goto Label_322; // 0x12d JumpB
	var_99_string = ""; // 0x12e PushV
	var_99_string = "Neutral"; // 0x12f MovS
	func_126(var_6_int, var_99_string); // 0x130 Call
	var_100_int = 14917; // 0x132 PushI
	SetMessage(var_100_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_101_int = 14918; // 0x137 PushI
	var_102_int = -1; // 0x138 PushI
	var_103_int = 16167; // 0x139 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x13a TObjFunc
	var_104_int = 14919; // 0x13c PushI
	var_105_int = -1; // 0x13d PushI
	var_106_int = 16168; // 0x13e PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x13f TObjFunc
	return 0; // 0x141 Return
	
Label_322:
	var_3_string = 1; // 0x142 TMovB
	var_107_bool = 0; // 0x143 PushV
	func_486(var_107_bool); // 0x144 Call
	if(var_107_bool == 0) goto Label_330; // 0x146 JumpB
	lshStopAnimation(); // 0x147 Func
	goto Label_332; // 0x149 Jump
	
Label_332:
	return 0; // 0x14c Return
	
Label_330:
	StopAnimation(); // 0x14a Func
	
Label_334:
	return 0; // 0x14e Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj(); // 0x154 PushV
	var_7_object = var_5_object; // 0x155 Mov
	TaskCall(0); // 0x156 TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x157 Call
	TaskReturn(); // 0x158 TaskReturn
	return 0; // 0x15a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_335:
	Hold(); // 0x14f Func
	goto Label_335; // 0x151 Jump
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	func_347(var_18_object); // 0x4 Call
	var_57_bool = var_17_bool == 0; // 0x6 Not
	if(var_57_bool == 0) goto Label_10; // 0x7 JumpB
	var_6_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_13_object); // 0xa Func
	var_58_int = 0; // 0xc PushV
	func_482(var_58_int); // 0xd Call
	SetNPCName(var_58_int); // 0xf ObjFunc
	var_59_string = ""; // 0x11 PushV
	func_484(var_59_string); // 0x12 Call
	SetPhoto(var_59_string); // 0x14 ObjFunc
	var_60_int = 0; // 0x16 PushV
	func_465(var_60_int); // 0x17 Call
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
	var_114_bool = var_16_bool == 0; // 0x2d Not
	if(var_114_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_16_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_115_object = Obj(); // 0x34 PushV
	var_115_object = var_7_object; // 0x35 Mov
	func_403(); // 0x36 Call
	StopDialog(var_13_object); // 0x38 Func
	GetReturnValue(var_15_int); // 0x3a ObjFunc
	var_6_int = var_15_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_482(var_58_int)
{
	var_58_int = 11961; // 0x1e2 MovI
	return 0; // 0x1e3 Return
}


func_484(var_59_string)
{
	var_59_string = "ui/NPC_Burah.png"; // 0x1e4 MovS
	return 0; // 0x1e5 Return
}


func_453(var_92_bool)
{
	var_94_int = 0; var_95_string = ""; // 0x1c6 PushV
	var_95_string = "ood12Burah1"; // 0x1c7 MovS
	func_442(var_94_int, var_95_string); // 0x1c8 Call
	var_98_int = 0; // 0x1ca PushI
	var_99_bool = var_94_int == var_98_int; // 0x1cb Eq
	if(var_99_bool == 0) goto Label_463; // 0x1cc JumpB
	var_92_bool = 1; // 0x1cd MovB
	return 0; // 0x1ce Return
	
Label_463:
	var_92_bool = 0; // 0x1cf MovB
	return 0; // 0x1d0 Return
}


func_486(var_77_bool)
{
	var_77_bool = 1; // 0x1e6 MovB
	return 0; // 0x1e7 Return
}


func_425()
{
	var_8_bool = 0; // 0x1a9 PushV
	func_486(var_8_bool); // 0x1aa Call
	if(var_8_bool == 0) goto Label_431; // 0x1ac JumpB
	lshStopSpeech(); // 0x1ad Func
	
Label_431:
	return 0; // 0x1af Return
}


func_447()
{
	var_13_string = "ood12Burah1"; // 0x1c0 PushS
	var_14_int = 1; // 0x1c1 PushI
	SetVariable(var_13_string, var_14_int); // 0x1c2 Func
	return 0; // 0x1c4 Return
}


func_432(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0; // 0x1b0 PushV
	var_47_int = var_43_cvector | var_43_cvector; // 0x1b1 Or
	var_46_float = sqrt(var_47_int); // 0x1b2 Sqrt2
	var_48_float = 0.0; // 0x1b3 PushF
	var_49_bool = var_46_float < var_48_float; // 0x1b4 LT
	if(var_49_bool == 0) goto Label_440; // 0x1b5 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x1b6 MovV
	return 2; // 0x1b7 Return
	
Label_440:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x1b8 Div2
	return 2; // 0x1b9 Return
}


func_465(var_60_int)
{
	var_61_int = 0; var_62_int = 0; // 0x1d1 PushV
	var_63_string = "player"; // 0x1d2 PushS
	GetVariable(var_63_string, var_62_int); // 0x1d3 Func
	var_64_int = 0; // 0x1d5 PushI
	var_65_bool = var_62_int == var_64_int; // 0x1d6 Eq
	if(var_65_bool == 0) goto Label_475; // 0x1d7 JumpB
	var_60_int = 200001; // 0x1d8 MovI
	return 2; // 0x1d9 Return
	
Label_475:
	var_66_int = 1; // 0x1db PushI
	var_67_bool = var_62_int == var_66_int; // 0x1dc Eq
	if(var_67_bool == 0) goto Label_480; // 0x1dd JumpB
	var_60_int = 200002; // 0x1de MovI
	return 2; // 0x1df Return
	
Label_480:
	var_60_int = 200003; // 0x1e0 MovI
	return 2; // 0x1e1 Return
}


func_403()
{
	CameraSwitchToNormal(); // 0x194 Func
	return 0; // 0x196 Return
}


func_407(var_80_string)
{
	var_81_float = 0; var_82_float = 0; var_83_float = 0; var_84_float = 0; // 0x197 PushV
	var_85_string = "playing "; // 0x198 PushS
	var_86_int = var_85_string + var_80_string; // 0x199 Add
	Trace(var_86_int); // 0x19a Func
	lshGetAnimTimes(var_80_string, var_83_float, var_84_float); // 0x19c Func
	lshPlayAnimation(var_83_float, var_84_float); // 0x19e Func
	var_87_string = "start: "; // 0x1a0 PushS
	var_88_int = var_87_string + var_83_float; // 0x1a1 Add
	Trace(var_88_int); // 0x1a2 Func
	var_89_string = "end: "; // 0x1a4 PushS
	var_90_int = var_89_string + var_84_float; // 0x1a5 Add
	Trace(var_90_int); // 0x1a6 Func
	return 4; // 0x1a8 Return
}


func_442(var_94_int, var_95_string)
{
	var_96_int = 0; var_97_int = 0; // 0x1ba PushV
	GetVariable(var_95_string, var_97_int); // 0x1bb Func
	var_94_int = var_97_int; // 0x1bd Mov
	return 2; // 0x1be Return
}


func_347(var_17_bool)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; // 0x15b PushV
	GetPosition(var_28_cvector); // 0x15c ObjFunc
	GetEyesHeight(var_27_float); // 0x15e ObjFunc
	var_35_float = GetByIndex(var_28_cvector, 1); // 0x160 PushE
	var_35_float = var_35_float + var_27_float; // 0x161 Add2
	SetByIndex(var_28_cvector, 1) = var_35_float; // 0x162 PopE
	GetPosition(var_29_cvector); // 0x163 Func
	GetEyesHeight(var_27_float); // 0x165 Func
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x167 PushE
	var_36_float = var_36_float + var_27_float; // 0x168 Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x169 PopE
	var_30_cvector = var_28_cvector - var_29_cvector; // 0x16a Sub2
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x16b PushE
	var_37_float = 0; // 0x16c MovI
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x16d PopE
	var_38_int = var_30_cvector | var_30_cvector; // 0x16e Or
	var_39_float = sqrt(var_38_int); // 0x16f Sqrt
	var_30_cvector = var_30_cvector / var_30_cvector; // 0x170 Div2
	var_31_cvector = -var_30_cvector; // 0x171 Neg2
	var_40_int = 70; // 0x172 PushI
	var_41_float = var_30_cvector * var_40_int; // 0x173 Mult
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x174 PushV
	var_44_cvector = CVector(0.0, 1.0, 0.0); // 0x175 PushVec
	var_43_cvector = var_31_cvector ^ var_44_cvector; // 0x176 Xor2
	func_432(var_42_cvector, var_43_cvector); // 0x177 Call
	var_50_int = 25; // 0x179 PushI
	var_51_float = var_42_cvector * var_50_int; // 0x17a Mult
	var_52_int = var_41_float + var_51_float; // 0x17b Add
	var_53_cvector = CVector(0.0, 10.0, 0.0); // 0x17c PushVec
	var_32_cvector = var_52_int - var_53_cvector; // 0x17d Sub2
	var_33_cvector = var_29_cvector + var_32_cvector; // 0x17e Add2
	IsOverrideActive(var_34_bool); // 0x17f Func
	var_54_bool = var_34_bool; // 0x181 Push
	if(var_54_bool == 0) goto Label_389; // 0x182 JumpB
	var_17_bool = 0; // 0x183 MovB
	return 16; // 0x184 Return
	
Label_389:
	StopWorld(); // 0x185 Func
	CameraTransit(var_33_cvector, var_31_cvector); // 0x187 Func
	var_55_float = GetByIndex(var_32_cvector, 0); // 0x189 PushE
	var_56_float = GetByIndex(var_32_cvector, 2); // 0x18a PushE
	Rotate(var_55_float, var_56_float); // 0x18b Func
	CameraWaitForPlayFinish(); // 0x18d Func
	ResumeWorld(); // 0x18f Func
	var_17_bool = 1; // 0x191 MovB
	return 16; // 0x192 Return
}


func_126(var_2_object, var_76_string)
{
	var_77_bool = 0; // 0x7f PushV
	func_486(var_77_bool); // 0x80 Call
	var_78_bool = var_77_bool == 0; // 0x82 Not
	if(var_78_bool == 0) goto Label_133; // 0x83 JumpB
	return 0; // 0x84 Return
	
Label_133:
	var_79_bool = var_76_string == var_2_object; // 0x85 Eq
	if(var_79_bool == 0) goto Label_136; // 0x86 JumpB
	return 0; // 0x87 Return
	
Label_136:
	var_80_string = ""; // 0x88 PushV
	var_80_string = var_76_string; // 0x89 Mov
	func_407(var_80_string); // 0x8a Call
	var_2_object = var_76_string; // 0x8c TMov
	return 0; // 0x8d Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object; // 0x40 TMov
	var_1_object = var_69_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_75_int = 1; // 0x43 PushI
	if(var_75_int == 0) goto Label_96; // 0x44 JumpB
	var_76_string = ""; // 0x45 PushV
	var_76_string = "Neutral"; // 0x46 MovS
	func_126(var_70_object, var_76_string); // 0x47 Call
	var_91_int = 14909; // 0x49 PushI
	SetMessage(var_91_int); // 0x4a TObjFunc
	ClearReplies(); // 0x4c TObjFunc
	var_92_bool = 0; var_93_object = Obj(); // 0x4e PushV
	var_93_object = var_1_object; // 0x4f MovT
	func_453(var_93_object); // 0x50 Call
	if(var_92_bool == 0) goto Label_88; // 0x52 JumpB
	var_100_int = 14910; // 0x53 PushI
	var_101_int = 16160; // 0x54 PushI
	var_102_int = 16159; // 0x55 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x56 TObjFunc
	
Label_88:
	var_103_int = 14929; // 0x58 PushI
	var_104_int = -1; // 0x59 PushI
	var_105_int = 16180; // 0x5a PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x5b TObjFunc
	goto Label_96; // 0x5d Jump
	
Label_96:
	var_106_bool = 0; // 0x60 PushV
	func_486(var_106_bool); // 0x61 Call
	if(var_106_bool == 0) goto Label_111; // 0x63 JumpB
	
Label_100:
	lshWaitForAnimEnd(); // 0x64 Func
	var_107_string = var_3_string; // 0x66 PushT
	if(var_107_string == 0) goto Label_105; // 0x67 JumpB
	goto Label_110; // 0x68 Jump
	
Label_110:
	goto Label_125; // 0x6e Jump
	
Label_125:
	return 0; // 0x7d Return
	
Label_105:
	var_108_string = ""; // 0x69 PushV
	var_108_string = var_2_object; // 0x6a MovT
	func_407(var_108_string); // 0x6b Call
	goto Label_100; // 0x6d Jump
	
Label_111:
	var_109_string = "all"; // 0x6f PushS
	var_110_string = "idle"; // 0x70 PushS
	PlayAnimation(var_109_string, var_110_string); // 0x71 Func
	
Label_115:
	WaitForAnimEnd(); // 0x73 Func
	var_111_string = var_3_string; // 0x75 PushT
	if(var_111_string == 0) goto Label_120; // 0x76 JumpB
	goto Label_125; // 0x77 Jump
	
Label_120:
	var_112_string = "all"; // 0x78 PushS
	var_113_string = "idle"; // 0x79 PushS
	PlayAnimation(var_112_string, var_113_string); // 0x7a Func
	goto Label_115; // 0x7c Jump
}


