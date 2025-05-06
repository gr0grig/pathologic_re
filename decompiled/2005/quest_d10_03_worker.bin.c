task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xb9 PushI
	if(var_14_int == 0) goto Label_278; // 0xba JumpB
	func_670(); // 0xbc NEW_2
	var_16_int = 35724; // 0xbe PushI
	var_17_bool = var_12_bool == var_16_int; // 0xbf Eq
	if(var_17_bool == 0) goto Label_243; // 0xc0 JumpB
	var_18_bool = 0; var_19_object = Obj(); // 0xc1 PushV
	var_19_object = var_1_object; // 0xc2 MovT
	func_728(var_19_object); // 0xc3 NEW_2
	if(var_18_bool == 0) goto Label_223; // 0xc5 JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0xc6 PushV
	var_26_object = var_1_object; // 0xc7 MovT
	var_27_object = var_0_object; // 0xc8 MovT
	func_722(); // 0xc9 NEW_2
	var_30_string = ""; // 0xcb PushV
	var_30_string = "Neutral"; // 0xcc MovS
	func_162(var_13_bool, var_30_string); // 0xcd NEW_2
	var_47_int = 534137; // 0xcf PushI
	SetMessage(var_47_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_48_int = 534138; // 0xd4 PushI
	var_49_int = 36063; // 0xd5 PushI
	var_50_int = 35725; // 0xd6 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xd7 TObjFunc
	var_51_int = 536530; // 0xd9 PushI
	var_52_int = -1; // 0xda PushI
	var_53_int = 38337; // 0xdb PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_54_string = ""; // 0xdf PushV
	var_54_string = "Neutral"; // 0xe0 MovS
	func_162(var_13_bool, var_54_string); // 0xe1 NEW_2
	var_55_int = 534139; // 0xe3 PushI
	SetMessage(var_55_int); // 0xe4 TObjFunc
	ClearReplies(); // 0xe6 TObjFunc
	var_56_int = 534140; // 0xe8 PushI
	var_57_int = -1; // 0xe9 PushI
	var_58_int = 35727; // 0xea PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xeb TObjFunc
	var_59_int = 534434; // 0xed PushI
	var_60_int = -1; // 0xee PushI
	var_61_int = 36065; // 0xef PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xf0 TObjFunc
	return 0; // 0xf2 Return
	
Label_243:
	var_62_int = 36063; // 0xf3 PushI
	var_63_bool = var_12_bool == var_62_int; // 0xf4 Eq
	if(var_63_bool == 0) goto Label_266; // 0xf5 JumpB
	var_64_string = ""; // 0xf6 PushV
	var_64_string = "Neutral"; // 0xf7 MovS
	func_162(var_13_bool, var_64_string); // 0xf8 NEW_2
	var_65_int = 534432; // 0xfa PushI
	SetMessage(var_65_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_66_int = 534433; // 0xff PushI
	var_67_int = -1; // 0x100 PushI
	var_68_int = 36064; // 0x101 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x102 TObjFunc
	var_69_int = 536531; // 0x104 PushI
	var_70_int = -1; // 0x105 PushI
	var_71_int = 38338; // 0x106 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_3_string = 1; // 0x10a TMovB
	var_72_bool = 0; // 0x10b PushV
	func_765(var_72_bool); // 0x10c NEW_2
	if(var_72_bool == 0) goto Label_274; // 0x10e JumpB
	lshStopAnimation(); // 0x10f Func
	goto Label_276; // 0x111 Jump
	
Label_276:
	return 0; // 0x114 Return
	
Label_274:
	StopAnimation(); // 0x112 Func
	
Label_278:
	return 0; // 0x116 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_430(var_11_bool, var_12_object); // 0x11f NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x121 PushV
	var_17_object = var_12_object; // 0x122 Mov
	TaskCall(0); // 0x123 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x124 NEW_2
	TaskReturn(); // 0x125 TaskReturn
	return 0; // 0x127 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x14f PushS
	var_14_bool = var_12_string == var_13_string; // 0x150 Eq
	if(var_14_bool == 0) goto Label_341; // 0x151 JumpB
	func_314(var_12_string); // 0x153 NEW_2
	
Label_341:
	return 0; // 0x155 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x156 PushT
	if(var_12_int == 0) goto Label_347; // 0x157 JumpB
	func_430(var_10_bool, var_11_bool); // 0x159 NEW_2
	
Label_347:
	var_16_bool = 0; // 0x15b PushV
	var_16_bool = 0; // 0x15c MovB
	var_17_int = var_5_int; // 0x15d PushT
	if(var_17_int == 0) goto Label_356; // 0x15e JumpB
	var_18_bool = 0; // 0x15f PushV
	func_363(var_18_bool); // 0x160 NEW_2
	if(var_18_bool == 0) goto Label_356; // 0x162 JumpB
	var_16_bool = 1; // 0x163 MovB
	
Label_356:
	if(var_16_bool == 0) goto Label_362; // 0x164 JumpB
	var_19_object = Obj(); // 0x165 PushV
	func_677(var_19_object); // 0x166 NEW_2
	RemoveActor(var_19_object); // 0x168 Func
	
Label_362:
	return 0; // 0x16a Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x198 PushI
	var_14_bool = var_12_int == var_13_int; // 0x199 Eq
	if(var_14_bool == 0) goto Label_429; // 0x19a JumpB
	var_15_bool = 0; // 0x19b PushV
	func_392(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x19c NEW_2
	if(var_15_bool == 0) goto Label_423; // 0x19e JumpB
	var_28_bool = var_2_object == 0; // 0x19f Not
	if(var_28_bool == 0) goto Label_422; // 0x1a0 JumpB
	var_29_object = Obj(); // 0x1a1 PushV
	var_29_object = var_4_bool; // 0x1a2 MovT
	func_659(var_29_object); // 0x1a3 NEW_2
	var_2_object = 1; // 0x1a5 TMovB
	
Label_422:
	goto Label_429; // 0x1a6 Jump
	
Label_429:
	return 0; // 0x1ad Return
	
Label_423:
	var_36_object = var_2_object; // 0x1a7 PushT
	if(var_36_object == 0) goto Label_429; // 0x1a8 JumpB
	var_37_string = "head"; // 0x1a9 PushS
	UnlookAsync(var_37_string); // 0x1aa Func
	var_2_object = 0; // 0x1ac TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x117 PushV
	var_12_float = 300; // 0x118 MovI
	var_13_float = 100; // 0x119 MovI
	func_296(var_11_bool, var_12_float, var_13_float); // 0x11a NEW_2
	return 0; // 0x11c Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_543(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_759(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_757(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_761(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_763(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_740(var_78_int); // 0x22 NEW_2
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
	var_156_bool = var_26_bool == 0; // 0x38 Not
	if(var_156_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_157_object = Obj(); // 0x3f PushV
	var_157_object = var_17_object; // 0x40 Mov
	func_611(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_644(var_110_string, var_111_bool)
{
	var_114_bool = 0; var_115_float = 0; var_116_float = 0; var_117_bool = 0; var_118_float = 0; var_119_float = 0; // 0x284 PushV
	lshHasAnimation(var_117_bool, var_110_string); // 0x285 Func
	var_120_bool = var_117_bool; // 0x287 Push
	if(var_120_bool == 0) goto Label_654; // 0x288 JumpB
	lshGetAnimTimes(var_110_string, var_118_float, var_119_float); // 0x289 Func
	lshPlayAnimation(var_118_float, var_119_float, var_111_bool); // 0x28b Func
	goto Label_658; // 0x28d Jump
	
Label_658:
	return 6; // 0x292 Return
	
Label_654:
	var_121_string = "Can't find lsh animation : "; // 0x28e PushS
	var_122_int = var_121_string + var_110_string; // 0x28f Add
	Trace(var_122_int); // 0x290 Func
}


func_392(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x188 PushV
	var_18_bool = var_4_bool == 0; // 0x189 NullEq
	if(var_18_bool == 0) goto Label_397; // 0x18a JumpB
	var_15_bool = 0; // 0x18b MovB
	return 2; // 0x18c Return
	
Label_397:
	var_19_float = 0; var_20_object = Obj(); // 0x18d PushV
	var_20_object = var_4_bool; // 0x18e MovT
	func_530(var_20_object); // 0x18f NEW_2
	var_17_float = sqrt(var_19_float); // 0x191 Sqrt2
	var_27_object = var_2_object; // 0x192 PushT
	if(var_27_object == 0) goto Label_405; // 0x193 JumpB
	var_17_float = var_17_float - var_1_object; // 0x194 Sub2
	
Label_405:
	var_15_bool = var_17_float < var_0_object; // 0x195 LT2
	return 2; // 0x196 Return
}


func_523(var_71_bool)
{
	var_71_bool = 1; // 0x20b MovB
	return 0; // 0x20c Return
}


func_525()
{
	StopAnimation(); // 0x20d Func
	StopGroup0(); // 0x20f Func
	return 0; // 0x211 Return
}


func_530(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x212 PushV
	GetPosition(var_24_cvector); // 0x213 Func
	GetPosition(var_25_cvector); // 0x215 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x217 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x218 Or2
	return 6; // 0x219 Return
}


func_659(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x293 PushV
	GetEyesHeight(var_32_float); // 0x294 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x296 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x297 PushE
	var_34_float = var_32_float; // 0x298 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x299 PopE
	var_35_string = "head"; // 0x29a PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x29b Func
	return 4; // 0x29d Return
}


func_538(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x21a PushV
	IsLoaded(var_25_bool); // 0x21b Func
	var_23_bool = var_25_bool; // 0x21d Mov
	return 2; // 0x21e Return
}


func_670()
{
	var_15_bool = 0; // 0x29e PushV
	func_765(var_15_bool); // 0x29f NEW_2
	if(var_15_bool == 0) goto Label_676; // 0x2a1 JumpB
	lshStopSpeech(); // 0x2a2 Func
	
Label_676:
	return 0; // 0x2a4 Return
}


func_543(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x21f PushV
	GetPosition(var_40_cvector); // 0x220 ObjFunc
	GetEyesHeight(var_39_float); // 0x222 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x224 PushE
	var_48_float = var_48_float + var_39_float; // 0x225 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x226 PopE
	GetPosition(var_41_cvector); // 0x227 Func
	GetEyesHeight(var_39_float); // 0x229 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x22b PushE
	var_49_float = var_49_float + var_39_float; // 0x22c Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x22d PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x22e Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x22f PushE
	var_50_float = 0; // 0x230 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x231 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x232 Or
	var_52_float = sqrt(var_51_int); // 0x233 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x234 Div2
	var_43_cvector = -var_42_cvector; // 0x235 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x236 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x237 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x238 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x239 Xor2
	func_683(var_54_cvector, var_55_cvector); // 0x23a NEW_2
	var_62_int = 25; // 0x23c PushI
	var_63_float = var_54_cvector * var_62_int; // 0x23d Mult
	var_64_int = var_53_float + var_63_float; // 0x23e Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x23f PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x240 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x241 Add2
	IsOverrideActive(var_46_bool); // 0x242 Func
	var_66_bool = var_46_bool; // 0x244 Push
	if(var_66_bool == 0) goto Label_584; // 0x245 JumpB
	var_27_bool = 0; // 0x246 MovB
	return 18; // 0x247 Return
	
Label_584:
	StopWorld(); // 0x248 Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x24a Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x24c PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x24d PushE
	Rotate(var_67_float, var_68_float); // 0x24e Func
	var_69_bool = 0; // 0x250 PushV
	func_765(var_69_bool); // 0x251 NEW_2
	if(var_69_bool == 0) goto Label_597; // 0x253 JumpB
	goto Label_605; // 0x254 Jump
	
Label_605:
	CameraWaitForPlayFinish(); // 0x25d Func
	ResumeWorld(); // 0x25f Func
	var_27_bool = 1; // 0x261 MovB
	return 18; // 0x262 Return
	
Label_597:
	var_70_string = "head"; // 0x255 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x256 Func
	var_71_bool = var_47_bool; // 0x258 Push
	if(var_71_bool == 0) goto Label_605; // 0x259 JumpB
	var_72_string = "head"; // 0x25a PushS
	LookAsyncCamera(var_72_string); // 0x25b Func
}


func_162(var_2_object, var_106_string)
{
	var_107_bool = 0; // 0xa3 PushV
	func_765(var_107_bool); // 0xa4 NEW_2
	var_108_bool = var_107_bool == 0; // 0xa6 Not
	if(var_108_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_109_bool = var_106_string == var_2_object; // 0xa9 Eq
	if(var_109_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_110_string = ""; var_111_bool = 0; // 0xac PushV
	var_110_string = var_106_string; // 0xad Mov
	var_112_string = ""; // 0xae PushS
	var_113_bool = var_106_string == var_112_string; // 0xaf Eq
	if(var_113_bool == 0) goto Label_179; // 0xb0 JumpB
	var_111_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_644(var_110_string, var_111_bool); // 0xb4 NEW_2
	var_2_object = var_106_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_111_bool = 1; // 0xb3 MovB
}


func_677(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2a5 PushV
	self(var_21_object); // 0x2a6 Func
	var_19_object = var_21_object; // 0x2a8 Mov
	return 2; // 0x2a9 Return
}


func_296(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x128 PushV
	var_6_int = 0; // 0x129 TMovB
	
Label_298:
	var_18_int = 3; // 0x12a PushI
	rand(var_16_float, var_18_int); // 0x12b Func
	var_19_int = 3; // 0x12d PushI
	var_20_int = var_16_float + var_19_int; // 0x12e Add
	Sleep(var_20_int, var_17_bool); // 0x12f Func
	var_6_int = 1; // 0x131 TMovB
	var_21_float = 0; var_22_float = 0; // 0x132 PushV
	var_21_float = var_12_float; // 0x133 Mov
	var_22_float = var_13_float; // 0x134 Mov
	func_365(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x135 NEW_2
	var_6_int = 0; // 0x137 TMovB
	goto Label_298; // 0x138 Jump
}


func_683(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x2ab PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x2ac Or
	var_58_float = sqrt(var_59_int); // 0x2ad Sqrt2
	var_60_float = 0.0; // 0x2ae PushF
	var_61_bool = var_58_float < var_60_float; // 0x2af LT
	if(var_61_bool == 0) goto Label_691; // 0x2b0 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x2b1 MovV
	return 2; // 0x2b2 Return
	
Label_691:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x2b3 Div2
	return 2; // 0x2b4 Return
}


func_430(var_2_object, var_3_string)
{
	func_525(); // 0x1af NEW_2
	var_13_int = 10; // 0x1b1 PushI
	KillTimer(var_13_int); // 0x1b2 Func
	var_14_object = var_2_object; // 0x1b4 PushT
	if(var_14_object == 0) goto Label_442; // 0x1b5 JumpB
	var_15_string = "head"; // 0x1b6 PushS
	UnlookAsync(var_15_string); // 0x1b7 Func
	var_2_object = 0; // 0x1b9 TMovB
	
Label_442:
	var_3_string = 1; // 0x1ba TMovB
	return 0; // 0x1bb Return
}


func_693(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x2b5 PushV
	GetVariable(var_97_string, var_99_int); // 0x2b6 Func
	var_96_int = var_99_int; // 0x2b8 Mov
	return 2; // 0x2b9 Return
}


func_314(var_5_int)
{
	var_5_int = 1; // 0x13a TMovB
	var_15_bool = 0; // 0x13b PushV
	var_15_bool = 0; // 0x13c MovB
	var_16_bool = 0; // 0x13d PushV
	func_538(var_16_bool); // 0x13e NEW_2
	var_19_bool = var_16_bool == 0; // 0x140 Not
	if(var_19_bool == 0) goto Label_327; // 0x141 JumpB
	var_20_bool = 0; // 0x142 PushV
	func_363(var_20_bool); // 0x143 NEW_2
	if(var_20_bool == 0) goto Label_327; // 0x145 JumpB
	var_15_bool = 1; // 0x146 MovB
	
Label_327:
	if(var_15_bool == 0) goto Label_333; // 0x147 JumpB
	var_21_object = Obj(); // 0x148 PushV
	func_677(var_21_object); // 0x149 NEW_2
	RemoveActor(var_21_object); // 0x14b Func
	
Label_333:
	return 0; // 0x14d Return
}


func_698(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x2ba PushV
	var_55_string = "idle"; // 0x2bb MovS
	var_56_int = var_53_int; // 0x2bc Push
	if(var_56_int == 0) goto Label_703; // 0x2bd JumpB
	var_55_string = var_55_string + var_53_int; // 0x2be Add2
	
Label_703:
	var_52_string = var_55_string; // 0x2bf Mov
	return 2; // 0x2c0 Return
}


func_444()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x1bc PushV
	WaitForAnimEnd(); // 0x1bd Func
	var_44_bool = 0; // 0x1bf PushV
	func_538(var_44_bool); // 0x1c0 NEW_2
	var_45_bool = var_44_bool == 0; // 0x1c2 Not
	if(var_45_bool == 0) goto Label_453; // 0x1c3 JumpB
	return 14; // 0x1c4 Return
	
Label_453:
	var_46_int = 0; // 0x1c5 PushV
	func_705(var_46_int); // 0x1c6 NEW_2
	var_37_int = var_46_int; // 0x1c7 Mov
	var_38_int = 0; // 0x1c9 MovI
	
Label_458:
	var_59_bool = 0; // 0x1ca PushV
	var_59_bool = 0; // 0x1cb MovB
	var_60_int = 5; // 0x1cc PushI
	var_61_bool = var_38_int < var_60_int; // 0x1cd LT
	if(var_61_bool == 0) goto Label_468; // 0x1ce JumpB
	var_62_bool = 0; // 0x1cf PushV
	func_538(var_62_bool); // 0x1d0 NEW_2
	if(var_62_bool == 0) goto Label_468; // 0x1d2 JumpB
	var_59_bool = 1; // 0x1d3 MovB
	
Label_468:
	if(var_59_bool == 0) goto Label_520; // 0x1d4 JumpB
	var_63_int = 3; // 0x1d5 PushI
	irand(var_39_int, var_63_int); // 0x1d6 Func
	var_64_int = 0; // 0x1d8 PushI
	var_65_bool = var_39_int == var_64_int; // 0x1d9 Eq
	if(var_65_bool == 0) goto Label_492; // 0x1da JumpB
	var_66_int = var_37_int; // 0x1db Push
	if(var_66_int == 0) goto Label_491; // 0x1dc JumpB
	irand(var_40_int, var_37_int); // 0x1dd Func
	var_67_string = "all"; // 0x1df PushS
	var_68_string = ""; var_69_int = 0; // 0x1e0 PushV
	var_69_int = var_40_int; // 0x1e1 Mov
	func_698(var_68_string, var_69_int); // 0x1e2 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x1e4 Func
	WaitForAnimEnd(var_41_bool); // 0x1e6 Func
	var_70_bool = var_41_bool == 0; // 0x1e8 Not
	if(var_70_bool == 0) goto Label_491; // 0x1e9 JumpB
	goto Label_520; // 0x1ea Jump
	
Label_520:
	ResetAAS(); // 0x208 Func
	return 14; // 0x20a Return
	
Label_491:
	goto Label_509; // 0x1eb Jump
	
Label_509:
	var_71_bool = 0; // 0x1fd PushV
	func_523(var_71_bool); // 0x1fe NEW_2
	var_72_bool = var_71_bool == 0; // 0x200 Not
	if(var_72_bool == 0) goto Label_515; // 0x201 JumpB
	goto Label_520; // 0x202 Jump
	
Label_515:
	ResetAAS(); // 0x203 Func
	var_73_int = 1; // 0x205 PushI
	var_38_int = var_38_int + var_73_int; // 0x206 Add2
	goto Label_458; // 0x207 Jump
	
Label_492:
	var_74_int = 1; // 0x1ec PushI
	var_75_bool = var_39_int == var_74_int; // 0x1ed Eq
	if(var_75_bool == 0) goto Label_506; // 0x1ee JumpB
	var_76_int = 4; // 0x1ef PushI
	rand(var_42_float, var_76_int); // 0x1f0 Func
	var_77_int = 1; // 0x1f2 PushI
	var_78_int = var_42_float + var_77_int; // 0x1f3 Add
	Sleep(var_78_int, var_43_bool); // 0x1f4 Func
	var_79_bool = var_43_bool == 0; // 0x1f6 Not
	if(var_79_bool == 0) goto Label_505; // 0x1f7 JumpB
	goto Label_520; // 0x1f8 Jump
	
Label_505:
	goto Label_509; // 0x1f9 Jump
	
Label_506:
	var_80_int = var_38_int; // 0x1fa Push
	if(var_80_int == 0) goto Label_509; // 0x1fb JumpB
	goto Label_520; // 0x1fc Jump
}


func_705(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x2c1 PushV
	var_49_int = 0; // 0x2c2 MovI
	
Label_707:
	var_51_string = "all"; // 0x2c3 PushS
	var_52_string = ""; var_53_int = 0; // 0x2c4 PushV
	var_53_int = var_49_int; // 0x2c5 Mov
	func_698(var_52_string, var_53_int); // 0x2c6 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x2c8 Func
	var_57_bool = var_50_bool == 0; // 0x2ca Not
	if(var_57_bool == 0) goto Label_717; // 0x2cb JumpB
	goto Label_720; // 0x2cc Jump
	
Label_720:
	var_46_int = var_49_int; // 0x2d0 Mov
	return 4; // 0x2d1 Return
	
Label_717:
	var_58_int = 1; // 0x2cd PushI
	var_49_int = var_49_int + var_58_int; // 0x2ce Add2
	goto Label_707; // 0x2cf Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_132; // 0x4f JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x50 PushV
	var_95_object = var_1_object; // 0x51 MovT
	func_728(var_95_object); // 0x52 NEW_2
	if(var_94_bool == 0) goto Label_110; // 0x54 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x55 PushV
	var_102_object = var_1_object; // 0x56 MovT
	var_103_object = var_0_object; // 0x57 MovT
	func_722(); // 0x58 NEW_2
	var_106_string = ""; // 0x5a PushV
	var_106_string = "Neutral"; // 0x5b MovS
	func_162(var_88_object, var_106_string); // 0x5c NEW_2
	var_123_int = 534137; // 0x5e PushI
	SetMessage(var_123_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_124_int = 534138; // 0x63 PushI
	var_125_int = 36063; // 0x64 PushI
	var_126_int = 35725; // 0x65 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x66 TObjFunc
	var_127_int = 536530; // 0x68 PushI
	var_128_int = -1; // 0x69 PushI
	var_129_int = 38337; // 0x6a PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x6b TObjFunc
	goto Label_132; // 0x6d Jump
	
Label_132:
	var_130_bool = 0; // 0x84 PushV
	func_765(var_130_bool); // 0x85 NEW_2
	if(var_130_bool == 0) goto Label_147; // 0x87 JumpB
	
Label_136:
	lshWaitForAnimEnd(); // 0x88 Func
	var_131_string = var_3_string; // 0x8a PushT
	if(var_131_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_146:
	goto Label_161; // 0x92 Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_141:
	var_132_string = ""; // 0x8d PushV
	var_132_string = var_2_object; // 0x8e MovT
	func_628(var_132_string); // 0x8f NEW_2
	goto Label_136; // 0x91 Jump
	
Label_147:
	var_143_string = "all"; // 0x93 PushS
	var_144_string = "idle"; // 0x94 PushS
	PlayAnimation(var_143_string, var_144_string); // 0x95 Func
	
Label_151:
	WaitForAnimEnd(); // 0x97 Func
	var_145_string = var_3_string; // 0x99 PushT
	if(var_145_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_156:
	var_146_string = "all"; // 0x9c PushS
	var_147_string = "idle"; // 0x9d PushS
	PlayAnimation(var_146_string, var_147_string); // 0x9e Func
	goto Label_151; // 0xa0 Jump
	
Label_110:
	var_148_string = ""; // 0x6e PushV
	var_148_string = "Neutral"; // 0x6f MovS
	func_162(var_88_object, var_148_string); // 0x70 NEW_2
	var_149_int = 534139; // 0x72 PushI
	SetMessage(var_149_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_150_int = 534140; // 0x77 PushI
	var_151_int = -1; // 0x78 PushI
	var_152_int = 35727; // 0x79 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x7a TObjFunc
	var_153_int = 534434; // 0x7c PushI
	var_154_int = -1; // 0x7d PushI
	var_155_int = 36065; // 0x7e PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
}


func_722()
{
	var_104_string = "ood10Crowd1"; // 0x2d3 PushS
	var_105_int = 1; // 0x2d4 PushI
	SetVariable(var_104_string, var_105_int); // 0x2d5 Func
	return 0; // 0x2d7 Return
}


func_728(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x2d9 PushV
	var_97_string = "ood10Crowd1"; // 0x2da MovS
	func_693(var_96_int, var_97_string); // 0x2db NEW_2
	var_100_int = 0; // 0x2dd PushI
	var_101_bool = var_96_int == var_100_int; // 0x2de Eq
	if(var_101_bool == 0) goto Label_738; // 0x2df JumpB
	var_94_bool = 1; // 0x2e0 MovB
	return 0; // 0x2e1 Return
	
Label_738:
	var_94_bool = 0; // 0x2e2 MovB
	return 0; // 0x2e3 Return
}


func_611()
{
	var_158_bool = 0; var_159_bool = 0; // 0x263 PushV
	CameraSwitchToNormal(); // 0x264 Func
	var_160_bool = 0; // 0x266 PushV
	func_765(var_160_bool); // 0x267 NEW_2
	if(var_160_bool == 0) goto Label_619; // 0x269 JumpB
	goto Label_627; // 0x26a Jump
	
Label_627:
	return 2; // 0x273 Return
	
Label_619:
	var_161_string = "head"; // 0x26b PushS
	HasAnimationTrack(var_159_bool, var_161_string); // 0x26c Func
	var_162_bool = var_159_bool; // 0x26e Push
	if(var_162_bool == 0) goto Label_627; // 0x26f JumpB
	var_163_string = "head"; // 0x270 PushS
	UnlookAsync(var_163_string); // 0x271 Func
}


func_740(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x2e4 PushV
	var_81_string = "branch"; // 0x2e5 PushS
	GetVariable(var_81_string, var_80_int); // 0x2e6 Func
	var_82_int = 0; // 0x2e8 PushI
	var_83_bool = var_80_int == var_82_int; // 0x2e9 Eq
	if(var_83_bool == 0) goto Label_750; // 0x2ea JumpB
	var_78_int = 1; // 0x2eb MovI
	return 2; // 0x2ec Return
	
Label_750:
	var_84_int = 1; // 0x2ee PushI
	var_85_bool = var_80_int == var_84_int; // 0x2ef Eq
	if(var_85_bool == 0) goto Label_755; // 0x2f0 JumpB
	var_78_int = 2; // 0x2f1 MovI
	return 2; // 0x2f2 Return
	
Label_755:
	var_78_int = 3; // 0x2f3 MovI
	return 2; // 0x2f4 Return
}


func_363(var_18_bool)
{
	var_18_bool = 1; // 0x16b MovB
	return 0; // 0x16c Return
}


func_365(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x16e PushV
	func_538(var_23_bool); // 0x16f NEW_2
	var_26_bool = var_23_bool == 0; // 0x171 Not
	if(var_26_bool == 0) goto Label_372; // 0x172 JumpB
	return 0; // 0x173 Return
	
Label_372:
	var_27_string = "player"; // 0x174 PushS
	FindActor(var_17_bool, var_27_string); // 0x175 Func
	var_2_object = 0; // 0x177 TMovB
	var_3_string = 0; // 0x178 TMovB
	var_0_object = var_21_float; // 0x179 TMov
	var_1_object = var_22_float; // 0x17a TMov
	var_28_int = 10; // 0x17b PushI
	var_29_float = 1.0; // 0x17c PushF
	SetTimer(var_28_int, var_29_float); // 0x17d Func
	func_444(); // 0x180 NEW_2
	var_81_bool = var_3_string == 0; // 0x182 Not
	if(var_81_bool == 0) goto Label_391; // 0x183 JumpB
	var_82_int = 10; // 0x184 PushI
	KillTimer(var_82_int); // 0x185 Func
	
Label_391:
	return 0; // 0x187 Return
}


func_628(var_132_string)
{
	var_133_bool = 0; var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_float = 0; var_138_float = 0; // 0x274 PushV
	lshHasAnimation(var_136_bool, var_132_string); // 0x275 Func
	var_139_bool = var_136_bool; // 0x277 Push
	if(var_139_bool == 0) goto Label_639; // 0x278 JumpB
	lshGetAnimTimes(var_132_string, var_137_float, var_138_float); // 0x279 Func
	var_140_bool = 0; // 0x27b PushB
	lshPlayAnimation(var_137_float, var_138_float, var_140_bool); // 0x27c Func
	goto Label_643; // 0x27e Jump
	
Label_643:
	return 6; // 0x283 Return
	
Label_639:
	var_141_string = "Can't find lsh animation : "; // 0x27f PushS
	var_142_int = var_141_string + var_132_string; // 0x280 Add
	Trace(var_142_int); // 0x281 Func
}


func_757(var_75_int)
{
	var_75_int = 515568; // 0x2f5 MovI
	return 0; // 0x2f6 Return
}


func_759(var_74_int)
{
	var_74_int = 503353; // 0x2f7 MovI
	return 0; // 0x2f8 Return
}


func_761(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1.png"; // 0x2f9 MovS
	return 0; // 0x2fa Return
}


func_763(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1_b.png"; // 0x2fb MovS
	return 0; // 0x2fc Return
}


func_765(var_69_bool)
{
	var_69_bool = 0; // 0x2fd MovB
	return 0; // 0x2fe Return
}


