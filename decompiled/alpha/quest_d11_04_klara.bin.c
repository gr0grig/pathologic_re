task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x9e PushI
	if(var_8_int == 0) goto Label_362; // 0x9f JumpB
	func_499(); // 0xa1 Call
	var_10_int = 15573; // 0xa3 PushI
	var_11_bool = var_6_int == var_10_int; // 0xa4 Eq
	if(var_11_bool == 0) goto Label_206; // 0xa5 JumpB
	var_12_bool = 0; var_13_object = Obj(); // 0xa6 PushV
	var_13_object = var_1_object; // 0xa7 MovT
	func_533(var_13_object); // 0xa8 Call
	if(var_12_bool == 0) goto Label_191; // 0xaa JumpB
	var_20_object = Obj(); var_21_object = Obj(); // 0xab PushV
	var_20_object = var_1_object; // 0xac MovT
	var_21_object = var_0_object; // 0xad MovT
	func_527(); // 0xae Call
	var_24_string = ""; // 0xb0 PushV
	var_24_string = "Neutral"; // 0xb1 MovS
	func_141(var_7_bool, var_24_string); // 0xb2 Call
	var_39_int = 14350; // 0xb4 PushI
	SetMessage(var_39_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_40_int = 14351; // 0xb9 PushI
	var_41_int = 15575; // 0xba PushI
	var_42_int = 15574; // 0xbb PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xbc TObjFunc
	return 0; // 0xbe Return
	
Label_191:
	var_43_string = ""; // 0xbf PushV
	var_43_string = "Neutral"; // 0xc0 MovS
	func_141(var_7_bool, var_43_string); // 0xc1 Call
	var_44_int = 14514; // 0xc3 PushI
	SetMessage(var_44_int); // 0xc4 TObjFunc
	ClearReplies(); // 0xc6 TObjFunc
	var_45_int = 14515; // 0xc8 PushI
	var_46_int = -1; // 0xc9 PushI
	var_47_int = 15754; // 0xca PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xcb TObjFunc
	return 0; // 0xcd Return
	
Label_206:
	var_48_int = 15575; // 0xce PushI
	var_49_bool = var_6_int == var_48_int; // 0xcf Eq
	if(var_49_bool == 0) goto Label_224; // 0xd0 JumpB
	var_50_string = ""; // 0xd1 PushV
	var_50_string = "Neutral"; // 0xd2 MovS
	func_141(var_7_bool, var_50_string); // 0xd3 Call
	var_51_int = 14352; // 0xd5 PushI
	SetMessage(var_51_int); // 0xd6 TObjFunc
	ClearReplies(); // 0xd8 TObjFunc
	var_52_int = 14353; // 0xda PushI
	var_53_int = 15577; // 0xdb PushI
	var_54_int = 15576; // 0xdc PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_55_int = 15577; // 0xe0 PushI
	var_56_bool = var_6_int == var_55_int; // 0xe1 Eq
	if(var_56_bool == 0) goto Label_242; // 0xe2 JumpB
	var_57_string = ""; // 0xe3 PushV
	var_57_string = "Neutral"; // 0xe4 MovS
	func_141(var_7_bool, var_57_string); // 0xe5 Call
	var_58_int = 14354; // 0xe7 PushI
	SetMessage(var_58_int); // 0xe8 TObjFunc
	ClearReplies(); // 0xea TObjFunc
	var_59_int = 14355; // 0xec PushI
	var_60_int = 15579; // 0xed PushI
	var_61_int = 15578; // 0xee PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xef TObjFunc
	return 0; // 0xf1 Return
	
Label_242:
	var_62_int = 15579; // 0xf2 PushI
	var_63_bool = var_6_int == var_62_int; // 0xf3 Eq
	if(var_63_bool == 0) goto Label_260; // 0xf4 JumpB
	var_64_string = ""; // 0xf5 PushV
	var_64_string = "Neutral"; // 0xf6 MovS
	func_141(var_7_bool, var_64_string); // 0xf7 Call
	var_65_int = 14356; // 0xf9 PushI
	SetMessage(var_65_int); // 0xfa TObjFunc
	ClearReplies(); // 0xfc TObjFunc
	var_66_int = 14357; // 0xfe PushI
	var_67_int = 15581; // 0xff PushI
	var_68_int = 15580; // 0x100 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x101 TObjFunc
	return 0; // 0x103 Return
	
Label_260:
	var_69_int = 15581; // 0x104 PushI
	var_70_bool = var_6_int == var_69_int; // 0x105 Eq
	if(var_70_bool == 0) goto Label_278; // 0x106 JumpB
	var_71_string = ""; // 0x107 PushV
	var_71_string = "Neutral"; // 0x108 MovS
	func_141(var_7_bool, var_71_string); // 0x109 Call
	var_72_int = 14358; // 0x10b PushI
	SetMessage(var_72_int); // 0x10c TObjFunc
	ClearReplies(); // 0x10e TObjFunc
	var_73_int = 14359; // 0x110 PushI
	var_74_int = 15583; // 0x111 PushI
	var_75_int = 15582; // 0x112 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x113 TObjFunc
	return 0; // 0x115 Return
	
Label_278:
	var_76_int = 15583; // 0x116 PushI
	var_77_bool = var_6_int == var_76_int; // 0x117 Eq
	if(var_77_bool == 0) goto Label_296; // 0x118 JumpB
	var_78_string = ""; // 0x119 PushV
	var_78_string = "Neutral"; // 0x11a MovS
	func_141(var_7_bool, var_78_string); // 0x11b Call
	var_79_int = 14360; // 0x11d PushI
	SetMessage(var_79_int); // 0x11e TObjFunc
	ClearReplies(); // 0x120 TObjFunc
	var_80_int = 14361; // 0x122 PushI
	var_81_int = 15585; // 0x123 PushI
	var_82_int = 15584; // 0x124 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x125 TObjFunc
	return 0; // 0x127 Return
	
Label_296:
	var_83_int = 15585; // 0x128 PushI
	var_84_bool = var_6_int == var_83_int; // 0x129 Eq
	if(var_84_bool == 0) goto Label_314; // 0x12a JumpB
	var_85_string = ""; // 0x12b PushV
	var_85_string = "Neutral"; // 0x12c MovS
	func_141(var_7_bool, var_85_string); // 0x12d Call
	var_86_int = 14362; // 0x12f PushI
	SetMessage(var_86_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_87_int = 14363; // 0x134 PushI
	var_88_int = 15587; // 0x135 PushI
	var_89_int = 15586; // 0x136 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x137 TObjFunc
	return 0; // 0x139 Return
	
Label_314:
	var_90_int = 15587; // 0x13a PushI
	var_91_bool = var_6_int == var_90_int; // 0x13b Eq
	if(var_91_bool == 0) goto Label_332; // 0x13c JumpB
	var_92_string = ""; // 0x13d PushV
	var_92_string = "Neutral"; // 0x13e MovS
	func_141(var_7_bool, var_92_string); // 0x13f Call
	var_93_int = 14364; // 0x141 PushI
	SetMessage(var_93_int); // 0x142 TObjFunc
	ClearReplies(); // 0x144 TObjFunc
	var_94_int = 14365; // 0x146 PushI
	var_95_int = 15589; // 0x147 PushI
	var_96_int = 15588; // 0x148 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_97_int = 15589; // 0x14c PushI
	var_98_bool = var_6_int == var_97_int; // 0x14d Eq
	if(var_98_bool == 0) goto Label_350; // 0x14e JumpB
	var_99_string = ""; // 0x14f PushV
	var_99_string = "Neutral"; // 0x150 MovS
	func_141(var_7_bool, var_99_string); // 0x151 Call
	var_100_int = 14366; // 0x153 PushI
	SetMessage(var_100_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_101_int = 14367; // 0x158 PushI
	var_102_int = -1; // 0x159 PushI
	var_103_int = 15590; // 0x15a PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x15b TObjFunc
	return 0; // 0x15d Return
	
Label_350:
	var_3_string = 1; // 0x15e TMovB
	var_104_bool = 0; // 0x15f PushV
	func_566(var_104_bool); // 0x160 Call
	if(var_104_bool == 0) goto Label_358; // 0x162 JumpB
	lshStopAnimation(); // 0x163 Func
	goto Label_360; // 0x165 Jump
	
Label_360:
	return 0; // 0x168 Return
	
Label_358:
	StopAnimation(); // 0x166 Func
	
Label_362:
	return 0; // 0x16a Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x16c PushV
	var_8_object = var_6_object; // 0x16d Mov
	TaskCall(0); // 0x16e TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x16f Call
	TaskReturn(); // 0x170 TaskReturn
	return 0; // 0x172 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x177 PushV
	var_9_string = "cleanup"; // 0x178 PushS
	var_10_bool = var_6_string == var_9_string; // 0x179 Eq
	if(var_10_bool == 0) goto Label_398; // 0x17a JumpB
	var_0_object = 1; // 0x17b TMovB
	IsLoaded(var_8_bool); // 0x17c Func
	var_11_bool = 0; // 0x17e PushV
	var_11_bool = 0; // 0x17f MovB
	var_12_bool = var_8_bool == 0; // 0x180 Not
	if(var_12_bool == 0) goto Label_391; // 0x181 JumpB
	var_13_bool = 0; // 0x182 PushV
	func_419(var_13_bool); // 0x183 Call
	if(var_13_bool == 0) goto Label_391; // 0x185 JumpB
	var_11_bool = 1; // 0x186 MovB
	
Label_391:
	if(var_11_bool == 0) goto Label_397; // 0x187 JumpB
	var_14_object = Obj(); // 0x188 PushV
	func_506(var_14_object); // 0x189 Call
	RemoveActor(var_14_object); // 0x18b Func
	
Label_397:
	goto Label_402; // 0x18d Jump
	
Label_402:
	return 2; // 0x192 Return
	
Label_398:
	var_17_string = "restore"; // 0x18e PushS
	var_18_bool = var_6_string == var_17_string; // 0x18f Eq
	if(var_18_bool == 0) goto Label_402; // 0x190 JumpB
	var_0_object = 0; // 0x191 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x193 PushV
	var_6_bool = 0; // 0x194 MovB
	var_7_object = var_0_object; // 0x195 PushT
	if(var_7_object == 0) goto Label_412; // 0x196 JumpB
	var_8_bool = 0; // 0x197 PushV
	func_419(var_8_bool); // 0x198 Call
	if(var_8_bool == 0) goto Label_412; // 0x19a JumpB
	var_6_bool = 1; // 0x19b MovB
	
Label_412:
	if(var_6_bool == 0) goto Label_418; // 0x19c JumpB
	var_9_object = Obj(); // 0x19d PushV
	func_506(var_9_object); // 0x19e Call
	RemoveActor(var_9_object); // 0x1a0 Func
	
Label_418:
	return 0; // 0x1a2 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_371:
	Hold(); // 0x173 Func
	goto Label_371; // 0x175 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	func_421(var_19_object); // 0x4 Call
	var_58_bool = var_18_bool == 0; // 0x6 Not
	if(var_58_bool == 0) goto Label_10; // 0x7 JumpB
	var_7_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_14_object); // 0xa Func
	var_59_int = 0; // 0xc PushV
	func_562(var_59_int); // 0xd Call
	SetNPCName(var_59_int); // 0xf ObjFunc
	var_60_string = ""; // 0x11 PushV
	func_564(var_60_string); // 0x12 Call
	SetPhoto(var_60_string); // 0x14 ObjFunc
	var_61_int = 0; // 0x16 PushV
	func_545(var_61_int); // 0x17 Call
	SetPlayerName(var_61_int); // 0x19 ObjFunc
	var_16_int = -1; // 0x1b MovI
	IsOverrideActive(var_15_bool); // 0x1c Func
	var_69_bool = var_15_bool; // 0x1e Push
	if(var_69_bool == 0) goto Label_34; // 0x1f JumpB
	var_7_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_14_object); // 0x22 Func
	var_70_object = Obj(); var_71_object = Obj(); // 0x24 PushV
	var_70_object = var_8_object; // 0x25 Mov
	var_71_object = var_14_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_17_bool); // 0x2b ObjFunc
	
Label_45:
	var_121_bool = var_17_bool == 0; // 0x2d Not
	if(var_121_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_17_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_122_object = Obj(); // 0x34 PushV
	var_122_object = var_8_object; // 0x35 Mov
	func_477(); // 0x36 Call
	StopDialog(var_14_object); // 0x38 Func
	GetReturnValue(var_16_int); // 0x3a ObjFunc
	var_7_int = var_16_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_545(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x221 PushV
	var_64_string = "player"; // 0x222 PushS
	GetVariable(var_64_string, var_63_int); // 0x223 Func
	var_65_int = 0; // 0x225 PushI
	var_66_bool = var_63_int == var_65_int; // 0x226 Eq
	if(var_66_bool == 0) goto Label_555; // 0x227 JumpB
	var_61_int = 200001; // 0x228 MovI
	return 2; // 0x229 Return
	
Label_555:
	var_67_int = 1; // 0x22b PushI
	var_68_bool = var_63_int == var_67_int; // 0x22c Eq
	if(var_68_bool == 0) goto Label_560; // 0x22d JumpB
	var_61_int = 200002; // 0x22e MovI
	return 2; // 0x22f Return
	
Label_560:
	var_61_int = 200003; // 0x230 MovI
	return 2; // 0x231 Return
}


func_481(var_93_string)
{
	var_94_float = 0; var_95_float = 0; var_96_float = 0; var_97_float = 0; // 0x1e1 PushV
	var_98_string = "playing "; // 0x1e2 PushS
	var_99_int = var_98_string + var_93_string; // 0x1e3 Add
	Trace(var_99_int); // 0x1e4 Func
	lshGetAnimTimes(var_93_string, var_96_float, var_97_float); // 0x1e6 Func
	lshPlayAnimation(var_96_float, var_97_float); // 0x1e8 Func
	var_100_string = "start: "; // 0x1ea PushS
	var_101_int = var_100_string + var_96_float; // 0x1eb Add
	Trace(var_101_int); // 0x1ec Func
	var_102_string = "end: "; // 0x1ee PushS
	var_103_int = var_102_string + var_97_float; // 0x1ef Add
	Trace(var_103_int); // 0x1f0 Func
	return 4; // 0x1f2 Return
}


func_419(var_8_bool)
{
	var_8_bool = 1; // 0x1a3 MovB
	return 0; // 0x1a4 Return
}


func_512(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0; // 0x200 PushV
	var_48_int = var_44_cvector | var_44_cvector; // 0x201 Or
	var_47_float = sqrt(var_48_int); // 0x202 Sqrt2
	var_49_float = 0.0; // 0x203 PushF
	var_50_bool = var_47_float < var_49_float; // 0x204 LT
	if(var_50_bool == 0) goto Label_520; // 0x205 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x206 MovV
	return 2; // 0x207 Return
	
Label_520:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x208 Div2
	return 2; // 0x209 Return
}


func_421(var_18_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x1a5 PushV
	GetPosition(var_29_cvector); // 0x1a6 ObjFunc
	GetEyesHeight(var_28_float); // 0x1a8 ObjFunc
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x1aa PushE
	var_36_float = var_36_float + var_28_float; // 0x1ab Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x1ac PopE
	GetPosition(var_30_cvector); // 0x1ad Func
	GetEyesHeight(var_28_float); // 0x1af Func
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x1b1 PushE
	var_37_float = var_37_float + var_28_float; // 0x1b2 Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x1b3 PopE
	var_31_cvector = var_29_cvector - var_30_cvector; // 0x1b4 Sub2
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x1b5 PushE
	var_38_float = 0; // 0x1b6 MovI
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x1b7 PopE
	var_39_int = var_31_cvector | var_31_cvector; // 0x1b8 Or
	var_40_float = sqrt(var_39_int); // 0x1b9 Sqrt
	var_31_cvector = var_31_cvector / var_31_cvector; // 0x1ba Div2
	var_32_cvector = -var_31_cvector; // 0x1bb Neg2
	var_41_int = 70; // 0x1bc PushI
	var_42_float = var_31_cvector * var_41_int; // 0x1bd Mult
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x1be PushV
	var_45_cvector = CVector(0.0, 1.0, 0.0); // 0x1bf PushVec
	var_44_cvector = var_32_cvector ^ var_45_cvector; // 0x1c0 Xor2
	func_512(var_43_cvector, var_44_cvector); // 0x1c1 Call
	var_51_int = 25; // 0x1c3 PushI
	var_52_float = var_43_cvector * var_51_int; // 0x1c4 Mult
	var_53_int = var_42_float + var_52_float; // 0x1c5 Add
	var_54_cvector = CVector(0.0, 10.0, 0.0); // 0x1c6 PushVec
	var_33_cvector = var_53_int - var_54_cvector; // 0x1c7 Sub2
	var_34_cvector = var_30_cvector + var_33_cvector; // 0x1c8 Add2
	IsOverrideActive(var_35_bool); // 0x1c9 Func
	var_55_bool = var_35_bool; // 0x1cb Push
	if(var_55_bool == 0) goto Label_463; // 0x1cc JumpB
	var_18_bool = 0; // 0x1cd MovB
	return 16; // 0x1ce Return
	
Label_463:
	StopWorld(); // 0x1cf Func
	CameraTransit(var_34_cvector, var_32_cvector); // 0x1d1 Func
	var_56_float = GetByIndex(var_33_cvector, 0); // 0x1d3 PushE
	var_57_float = GetByIndex(var_33_cvector, 2); // 0x1d4 PushE
	Rotate(var_56_float, var_57_float); // 0x1d5 Func
	CameraWaitForPlayFinish(); // 0x1d7 Func
	ResumeWorld(); // 0x1d9 Func
	var_18_bool = 1; // 0x1db MovB
	return 16; // 0x1dc Return
}


func_522(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0; // 0x20a PushV
	GetVariable(var_80_string, var_82_int); // 0x20b Func
	var_79_int = var_82_int; // 0x20d Mov
	return 2; // 0x20e Return
}


func_141(var_2_object, var_89_string)
{
	var_90_bool = 0; // 0x8e PushV
	func_566(var_90_bool); // 0x8f Call
	var_91_bool = var_90_bool == 0; // 0x91 Not
	if(var_91_bool == 0) goto Label_148; // 0x92 JumpB
	return 0; // 0x93 Return
	
Label_148:
	var_92_bool = var_89_string == var_2_object; // 0x94 Eq
	if(var_92_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_93_string = ""; // 0x97 PushV
	var_93_string = var_89_string; // 0x98 Mov
	func_481(var_93_string); // 0x99 Call
	var_2_object = var_89_string; // 0x9b TMov
	return 0; // 0x9c Return
}


func_527()
{
	var_87_string = "ood11Klara1"; // 0x210 PushS
	var_88_int = 1; // 0x211 PushI
	SetVariable(var_87_string, var_88_int); // 0x212 Func
	return 0; // 0x214 Return
}


func_562(var_59_int)
{
	var_59_int = 2865; // 0x232 MovI
	return 0; // 0x233 Return
}


func_499()
{
	var_9_bool = 0; // 0x1f3 PushV
	func_566(var_9_bool); // 0x1f4 Call
	if(var_9_bool == 0) goto Label_505; // 0x1f6 JumpB
	lshStopSpeech(); // 0x1f7 Func
	
Label_505:
	return 0; // 0x1f9 Return
}


func_564(var_60_string)
{
	var_60_string = "ui/NPC_Klara.png"; // 0x234 MovS
	return 0; // 0x235 Return
}


func_533(var_77_bool)
{
	var_79_int = 0; var_80_string = ""; // 0x216 PushV
	var_80_string = "ood11Klara1"; // 0x217 MovS
	func_522(var_79_int, var_80_string); // 0x218 Call
	var_83_int = 0; // 0x21a PushI
	var_84_bool = var_79_int == var_83_int; // 0x21b Eq
	if(var_84_bool == 0) goto Label_543; // 0x21c JumpB
	var_77_bool = 1; // 0x21d MovB
	return 0; // 0x21e Return
	
Label_543:
	var_77_bool = 0; // 0x21f MovB
	return 0; // 0x220 Return
}


func_566(var_90_bool)
{
	var_90_bool = 1; // 0x236 MovB
	return 0; // 0x237 Return
}


func_506(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x1fa PushV
	self(var_11_object); // 0x1fb Func
	var_9_object = var_11_object; // 0x1fd Mov
	return 2; // 0x1fe Return
}


func_477()
{
	CameraSwitchToNormal(); // 0x1de Func
	return 0; // 0x1e0 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object; // 0x40 TMov
	var_1_object = var_70_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_76_int = 1; // 0x43 PushI
	if(var_76_int == 0) goto Label_111; // 0x44 JumpB
	var_77_bool = 0; var_78_object = Obj(); // 0x45 PushV
	var_78_object = var_1_object; // 0x46 MovT
	func_533(var_78_object); // 0x47 Call
	if(var_77_bool == 0) goto Label_94; // 0x49 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x4a PushV
	var_85_object = var_1_object; // 0x4b MovT
	var_86_object = var_0_object; // 0x4c MovT
	func_527(); // 0x4d Call
	var_89_string = ""; // 0x4f PushV
	var_89_string = "Neutral"; // 0x50 MovS
	func_141(var_71_object, var_89_string); // 0x51 Call
	var_104_int = 14350; // 0x53 PushI
	SetMessage(var_104_int); // 0x54 TObjFunc
	ClearReplies(); // 0x56 TObjFunc
	var_105_int = 14351; // 0x58 PushI
	var_106_int = 15575; // 0x59 PushI
	var_107_int = 15574; // 0x5a PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x5b TObjFunc
	goto Label_111; // 0x5d Jump
	
Label_111:
	var_108_bool = 0; // 0x6f PushV
	func_566(var_108_bool); // 0x70 Call
	if(var_108_bool == 0) goto Label_126; // 0x72 JumpB
	
Label_115:
	lshWaitForAnimEnd(); // 0x73 Func
	var_109_string = var_3_string; // 0x75 PushT
	if(var_109_string == 0) goto Label_120; // 0x76 JumpB
	goto Label_125; // 0x77 Jump
	
Label_125:
	goto Label_140; // 0x7d Jump
	
Label_140:
	return 0; // 0x8c Return
	
Label_120:
	var_110_string = ""; // 0x78 PushV
	var_110_string = var_2_object; // 0x79 MovT
	func_481(var_110_string); // 0x7a Call
	goto Label_115; // 0x7c Jump
	
Label_126:
	var_111_string = "all"; // 0x7e PushS
	var_112_string = "idle"; // 0x7f PushS
	PlayAnimation(var_111_string, var_112_string); // 0x80 Func
	
Label_130:
	WaitForAnimEnd(); // 0x82 Func
	var_113_string = var_3_string; // 0x84 PushT
	if(var_113_string == 0) goto Label_135; // 0x85 JumpB
	goto Label_140; // 0x86 Jump
	
Label_135:
	var_114_string = "all"; // 0x87 PushS
	var_115_string = "idle"; // 0x88 PushS
	PlayAnimation(var_114_string, var_115_string); // 0x89 Func
	goto Label_130; // 0x8b Jump
	
Label_94:
	var_116_string = ""; // 0x5e PushV
	var_116_string = "Neutral"; // 0x5f MovS
	func_141(var_71_object, var_116_string); // 0x60 Call
	var_117_int = 14514; // 0x62 PushI
	SetMessage(var_117_int); // 0x63 TObjFunc
	ClearReplies(); // 0x65 TObjFunc
	var_118_int = 14515; // 0x67 PushI
	var_119_int = -1; // 0x68 PushI
	var_120_int = 15754; // 0x69 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x6a TObjFunc
	goto Label_111; // 0x6c Jump
}


