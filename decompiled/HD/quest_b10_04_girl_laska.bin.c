task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xa0 PushI
	if(var_14_int == 0) goto Label_262; // 0xa1 JumpB
	func_656(); // 0xa3 NEW_2
	var_16_int = 31810; // 0xa5 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xa6 Eq
	if(var_17_bool == 0) goto Label_173; // 0xa7 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xa8 PushV
	var_18_object = var_1_object; // 0xa9 MovT
	var_19_object = var_0_object; // 0xaa MovT
	func_723(); // 0xab NEW_2
	
Label_173:
	var_22_int = 31812; // 0xad PushI
	var_23_bool = var_13_bool == var_22_int; // 0xae Eq
	if(var_23_bool == 0) goto Label_186; // 0xaf JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xb0 PushV
	var_24_object = var_1_object; // 0xb1 MovT
	var_25_object = var_0_object; // 0xb2 MovT
	func_729(); // 0xb3 NEW_2
	var_44_object = Obj(); var_45_object = Obj(); // 0xb5 PushV
	var_44_object = var_1_object; // 0xb6 MovT
	var_45_object = var_0_object; // 0xb7 MovT
	func_749(); // 0xb8 NEW_2
	
Label_186:
	var_70_int = 32837; // 0xba PushI
	var_71_bool = var_13_bool == var_70_int; // 0xbb Eq
	if(var_71_bool == 0) goto Label_199; // 0xbc JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0xbd PushV
	var_72_object = var_1_object; // 0xbe MovT
	var_73_object = var_0_object; // 0xbf MovT
	func_729(); // 0xc0 NEW_2
	var_74_object = Obj(); var_75_object = Obj(); // 0xc2 PushV
	var_74_object = var_1_object; // 0xc3 MovT
	var_75_object = var_0_object; // 0xc4 MovT
	func_749(); // 0xc5 NEW_2
	
Label_199:
	var_76_int = 31809; // 0xc7 PushI
	var_77_bool = var_12_bool == var_76_int; // 0xc8 Eq
	if(var_77_bool == 0) goto Label_227; // 0xc9 JumpB
	var_78_string = ""; // 0xca PushV
	var_78_string = "Neutral"; // 0xcb MovS
	func_137(var_13_bool, var_78_string); // 0xcc NEW_2
	var_95_int = 530443; // 0xce PushI
	SetMessage(var_95_int); // 0xcf TObjFunc
	ClearReplies(); // 0xd1 TObjFunc
	var_96_bool = 0; var_97_object = Obj(); // 0xd3 PushV
	var_97_object = var_1_object; // 0xd4 MovT
	func_765(var_97_object); // 0xd5 NEW_2
	if(var_96_bool == 0) goto Label_221; // 0xd7 JumpB
	var_104_int = 530444; // 0xd8 PushI
	var_105_int = 31811; // 0xd9 PushI
	var_106_int = 31810; // 0xda PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xdb TObjFunc
	
Label_221:
	var_107_int = 530447; // 0xdd PushI
	var_108_int = -1; // 0xde PushI
	var_109_int = 31813; // 0xdf PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xe0 TObjFunc
	return 0; // 0xe2 Return
	
Label_227:
	var_110_int = 31811; // 0xe3 PushI
	var_111_bool = var_12_bool == var_110_int; // 0xe4 Eq
	if(var_111_bool == 0) goto Label_250; // 0xe5 JumpB
	var_112_string = ""; // 0xe6 PushV
	var_112_string = "Neutral"; // 0xe7 MovS
	func_137(var_13_bool, var_112_string); // 0xe8 NEW_2
	var_113_int = 530445; // 0xea PushI
	SetMessage(var_113_int); // 0xeb TObjFunc
	ClearReplies(); // 0xed TObjFunc
	var_114_int = 530446; // 0xef PushI
	var_115_int = -1; // 0xf0 PushI
	var_116_int = 31812; // 0xf1 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xf2 TObjFunc
	var_117_int = 531483; // 0xf4 PushI
	var_118_int = -1; // 0xf5 PushI
	var_119_int = 32837; // 0xf6 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xf7 TObjFunc
	return 0; // 0xf9 Return
	
Label_250:
	var_3_string = 1; // 0xfa TMovB
	var_120_bool = 0; // 0xfb PushV
	func_721(var_120_bool); // 0xfc NEW_2
	if(var_120_bool == 0) goto Label_258; // 0xfe JumpB
	lshStopAnimation(); // 0xff Func
	goto Label_260; // 0x101 Jump
	
Label_260:
	return 0; // 0x104 Return
	
Label_258:
	StopAnimation(); // 0x102 Func
	
Label_262:
	return 0; // 0x106 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_414(var_11_bool, var_12_object); // 0x10f NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x111 PushV
	var_17_object = var_12_object; // 0x112 Mov
	TaskCall(0); // 0x113 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x114 NEW_2
	TaskReturn(); // 0x115 TaskReturn
	return 0; // 0x117 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x13f PushS
	var_14_bool = var_12_string == var_13_string; // 0x140 Eq
	if(var_14_bool == 0) goto Label_325; // 0x141 JumpB
	func_298(var_12_string); // 0x143 NEW_2
	
Label_325:
	return 0; // 0x145 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x146 PushT
	if(var_12_int == 0) goto Label_331; // 0x147 JumpB
	func_414(var_10_bool, var_11_bool); // 0x149 NEW_2
	
Label_331:
	var_16_bool = 0; // 0x14b PushV
	var_16_bool = 0; // 0x14c MovB
	var_17_int = var_5_int; // 0x14d PushT
	if(var_17_int == 0) goto Label_340; // 0x14e JumpB
	var_18_bool = 0; // 0x14f PushV
	func_347(var_18_bool); // 0x150 NEW_2
	if(var_18_bool == 0) goto Label_340; // 0x152 JumpB
	var_16_bool = 1; // 0x153 MovB
	
Label_340:
	if(var_16_bool == 0) goto Label_346; // 0x154 JumpB
	var_19_object = Obj(); // 0x155 PushV
	func_663(var_19_object); // 0x156 NEW_2
	RemoveActor(var_19_object); // 0x158 Func
	
Label_346:
	return 0; // 0x15a Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x188 PushI
	var_14_bool = var_12_int == var_13_int; // 0x189 Eq
	if(var_14_bool == 0) goto Label_413; // 0x18a JumpB
	var_15_bool = 0; // 0x18b PushV
	func_376(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x18c NEW_2
	if(var_15_bool == 0) goto Label_407; // 0x18e JumpB
	var_28_bool = var_2_object == 0; // 0x18f Not
	if(var_28_bool == 0) goto Label_406; // 0x190 JumpB
	var_29_object = Obj(); // 0x191 PushV
	var_29_object = var_4_bool; // 0x192 MovT
	func_645(var_29_object); // 0x193 NEW_2
	var_2_object = 1; // 0x195 TMovB
	
Label_406:
	goto Label_413; // 0x196 Jump
	
Label_413:
	return 0; // 0x19d Return
	
Label_407:
	var_36_object = var_2_object; // 0x197 PushT
	if(var_36_object == 0) goto Label_413; // 0x198 JumpB
	var_37_string = "head"; // 0x199 PushS
	UnlookAsync(var_37_string); // 0x19a Func
	var_2_object = 0; // 0x19c TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x107 PushV
	var_12_float = 300; // 0x108 MovI
	var_13_float = 100; // 0x109 MovI
	func_280(var_11_bool, var_12_float, var_13_float); // 0x10a NEW_2
	return 0; // 0x10c Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_527(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_715(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_713(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_717(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_719(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_827(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_87_bool = var_24_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_17_object; // 0x30 Mov
	var_89_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_145_bool = var_26_bool == 0; // 0x38 Not
	if(var_145_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_146_object = Obj(); // 0x3f PushV
	var_146_object = var_17_object; // 0x40 Mov
	func_596(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_514(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x202 PushV
	GetPosition(var_24_cvector); // 0x203 Func
	GetPosition(var_25_cvector); // 0x205 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x207 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x208 Or2
	return 6; // 0x209 Return
}


func_645(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x285 PushV
	GetEyesHeight(var_32_float); // 0x286 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x288 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x289 PushE
	var_34_float = var_32_float; // 0x28a Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x28b PopE
	var_35_string = "head"; // 0x28c PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x28d Func
	return 4; // 0x28f Return
}


func_137(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0x8a PushV
	func_721(var_96_bool); // 0x8b NEW_2
	var_97_bool = var_96_bool == 0; // 0x8d Not
	if(var_97_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_98_bool = var_95_string == var_2_object; // 0x90 Eq
	if(var_98_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_99_string = ""; var_100_bool = 0; // 0x93 PushV
	var_99_string = var_95_string; // 0x94 Mov
	var_101_string = ""; // 0x95 PushS
	var_102_bool = var_95_string == var_101_string; // 0x96 Eq
	if(var_102_bool == 0) goto Label_154; // 0x97 JumpB
	var_100_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_630(var_99_string, var_100_bool); // 0x9b NEW_2
	var_2_object = var_95_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_100_bool = 1; // 0x9a MovB
}


func_522(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x20a PushV
	IsLoaded(var_25_bool); // 0x20b Func
	var_23_bool = var_25_bool; // 0x20d Mov
	return 2; // 0x20e Return
}


func_777(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0x309 PushV
	GetMainOutdoorScene(var_33_object); // 0x30a Func
	var_35_bool = var_33_object == 0; // 0x30c NullEq
	if(var_35_bool == 0) goto Label_788; // 0x30d JumpB
	var_36_string = "Can't find main outdoor scene"; // 0x30e PushS
	Trace(var_36_string); // 0x30f Func
	var_34_object = 0; // 0x311 SetNull
	var_30_object = var_34_object; // 0x312 Mov
	return 4; // 0x313 Return
	
Label_788:
	GetMap(var_34_object); // 0x314 ObjFunc
	var_30_object = var_34_object; // 0x316 Mov
	return 4; // 0x317 Return
}


func_765(var_113_bool)
{
	var_115_int = 0; var_116_string = ""; // 0x2fe PushV
	var_116_string = "oob10GirlLaska1"; // 0x2ff MovS
	func_679(var_115_int, var_116_string); // 0x300 NEW_2
	var_119_int = 0; // 0x302 PushI
	var_120_bool = var_115_int == var_119_int; // 0x303 Eq
	if(var_120_bool == 0) goto Label_775; // 0x304 JumpB
	var_113_bool = 1; // 0x305 MovB
	return 0; // 0x306 Return
	
Label_775:
	var_113_bool = 0; // 0x307 MovB
	return 0; // 0x308 Return
}


func_527(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x20f PushV
	GetPosition(var_40_cvector); // 0x210 ObjFunc
	GetEyesHeight(var_39_float); // 0x212 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x214 PushE
	var_48_float = var_48_float + var_39_float; // 0x215 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x216 PopE
	GetPosition(var_41_cvector); // 0x217 Func
	GetEyesHeight(var_39_float); // 0x219 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x21b PushE
	var_49_float = var_49_float + var_39_float; // 0x21c Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x21d PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x21e Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x21f PushE
	var_50_float = 0; // 0x220 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x221 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x222 Or
	var_52_float = sqrt(var_51_int); // 0x223 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x224 Div2
	var_43_cvector = -var_42_cvector; // 0x225 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x226 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x227 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x228 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x229 Xor2
	func_669(var_54_cvector, var_55_cvector); // 0x22a NEW_2
	var_62_int = 25; // 0x22c PushI
	var_63_float = var_54_cvector * var_62_int; // 0x22d Mult
	var_64_int = var_53_float + var_63_float; // 0x22e Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x22f PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x230 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x231 Add2
	IsOverrideActive(var_46_bool); // 0x232 Func
	var_66_bool = var_46_bool; // 0x234 Push
	if(var_66_bool == 0) goto Label_568; // 0x235 JumpB
	var_27_bool = 0; // 0x236 MovB
	return 18; // 0x237 Return
	
Label_568:
	StopWorld(); // 0x238 Func
	var_67_bool = 1; // 0x23a PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x23b Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x23d PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x23e PushE
	Rotate(var_68_float, var_69_float); // 0x23f Func
	var_70_bool = 0; // 0x241 PushV
	func_721(var_70_bool); // 0x242 NEW_2
	if(var_70_bool == 0) goto Label_582; // 0x244 JumpB
	goto Label_590; // 0x245 Jump
	
Label_590:
	CameraWaitForPlayFinish(); // 0x24e Func
	ResumeWorld(); // 0x250 Func
	var_27_bool = 1; // 0x252 MovB
	return 18; // 0x253 Return
	
Label_582:
	var_71_string = "head"; // 0x246 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x247 Func
	var_72_bool = var_47_bool; // 0x249 Push
	if(var_72_bool == 0) goto Label_590; // 0x24a JumpB
	var_73_string = "head"; // 0x24b PushS
	LookAsyncCamera(var_73_string); // 0x24c Func
}


func_656()
{
	var_15_bool = 0; // 0x290 PushV
	func_721(var_15_bool); // 0x291 NEW_2
	if(var_15_bool == 0) goto Label_662; // 0x293 JumpB
	lshStopSpeech(); // 0x294 Func
	
Label_662:
	return 0; // 0x296 Return
}


func_663(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x297 PushV
	self(var_21_object); // 0x298 Func
	var_19_object = var_21_object; // 0x29a Mov
	return 2; // 0x29b Return
}


func_280(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x118 PushV
	var_6_int = 0; // 0x119 TMovB
	
Label_282:
	var_18_int = 3; // 0x11a PushI
	rand(var_16_float, var_18_int); // 0x11b Func
	var_19_int = 3; // 0x11d PushI
	var_20_int = var_16_float + var_19_int; // 0x11e Add
	Sleep(var_20_int, var_17_bool); // 0x11f Func
	var_6_int = 1; // 0x121 TMovB
	var_21_float = 0; var_22_float = 0; // 0x122 PushV
	var_21_float = var_12_float; // 0x123 Mov
	var_22_float = var_13_float; // 0x124 Mov
	func_349(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x125 NEW_2
	var_6_int = 0; // 0x127 TMovB
	goto Label_282; // 0x128 Jump
}


func_794(var_46_object, var_47_string, var_48_float)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_object = Obj(); var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_object = Obj(); var_57_bool = 0; // 0x31a PushV
	GetMainOutdoorScene(var_56_object); // 0x31b Func
	var_58_bool = var_56_object == 0; // 0x31d NullEq
	if(var_58_bool == 0) goto Label_803; // 0x31e JumpB
	var_59_string = "Can't find main outdoor scene"; // 0x31f PushS
	Trace(var_59_string); // 0x320 Func
	return 8; // 0x322 Return
	
Label_803:
	GetLocator(var_47_string, var_57_bool, var_54_cvector, var_55_cvector); // 0x323 ObjFunc
	var_60_bool = var_57_bool == 0; // 0x325 Not
	if(var_60_bool == 0) goto Label_813; // 0x326 JumpB
	var_61_string = "Warning: outdoor scene locator "; // 0x327 PushS
	var_62_int = var_61_string + var_47_string; // 0x328 Add
	var_63_string = " doesnt exist"; // 0x329 PushS
	var_64_int = var_62_int + var_63_string; // 0x32a Add
	Trace(var_64_int); // 0x32b Func
	
Label_813:
	GetMap(var_46_object); // 0x32d ObjFunc
	var_65_bool = var_46_object == 0; // 0x32f NullEq
	if(var_65_bool == 0) goto Label_821; // 0x330 JumpB
	var_66_string = "Can't find map"; // 0x331 PushS
	Trace(var_66_string); // 0x332 Func
	return 8; // 0x334 Return
	
Label_821:
	var_67_float = GetByIndex(var_54_cvector, 0); // 0x335 PushE
	var_68_float = GetByIndex(var_54_cvector, 2); // 0x336 PushE
	SetMapParams(var_67_float, var_68_float, var_48_float); // 0x337 ObjFunc
	return 8; // 0x339 Return
}


func_669(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x29d PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x29e Or
	var_58_float = sqrt(var_59_int); // 0x29f Sqrt2
	var_60_float = 0.0; // 0x2a0 PushF
	var_61_bool = var_58_float < var_60_float; // 0x2a1 LT
	if(var_61_bool == 0) goto Label_677; // 0x2a2 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x2a3 MovV
	return 2; // 0x2a4 Return
	
Label_677:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x2a5 Div2
	return 2; // 0x2a6 Return
}


func_414(var_2_object, var_3_string)
{
	func_509(); // 0x19f NEW_2
	var_13_int = 10; // 0x1a1 PushI
	KillTimer(var_13_int); // 0x1a2 Func
	var_14_object = var_2_object; // 0x1a4 PushT
	if(var_14_object == 0) goto Label_426; // 0x1a5 JumpB
	var_15_string = "head"; // 0x1a6 PushS
	UnlookAsync(var_15_string); // 0x1a7 Func
	var_2_object = 0; // 0x1a9 TMovB
	
Label_426:
	var_3_string = 1; // 0x1aa TMovB
	return 0; // 0x1ab Return
}


func_679(var_115_int, var_116_string)
{
	var_117_int = 0; var_118_int = 0; // 0x2a7 PushV
	GetVariable(var_116_string, var_118_int); // 0x2a8 Func
	var_115_int = var_118_int; // 0x2aa Mov
	return 2; // 0x2ab Return
}


func_298(var_5_int)
{
	var_5_int = 1; // 0x12a TMovB
	var_15_bool = 0; // 0x12b PushV
	var_15_bool = 0; // 0x12c MovB
	var_16_bool = 0; // 0x12d PushV
	func_522(var_16_bool); // 0x12e NEW_2
	var_19_bool = var_16_bool == 0; // 0x130 Not
	if(var_19_bool == 0) goto Label_311; // 0x131 JumpB
	var_20_bool = 0; // 0x132 PushV
	func_347(var_20_bool); // 0x133 NEW_2
	if(var_20_bool == 0) goto Label_311; // 0x135 JumpB
	var_15_bool = 1; // 0x136 MovB
	
Label_311:
	if(var_15_bool == 0) goto Label_317; // 0x137 JumpB
	var_21_object = Obj(); // 0x138 PushV
	func_663(var_21_object); // 0x139 NEW_2
	RemoveActor(var_21_object); // 0x13b Func
	
Label_317:
	return 0; // 0x13d Return
}


func_428()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x1ac PushV
	WaitForAnimEnd(); // 0x1ad Func
	var_44_bool = 0; // 0x1af PushV
	func_522(var_44_bool); // 0x1b0 NEW_2
	var_45_bool = var_44_bool == 0; // 0x1b2 Not
	if(var_45_bool == 0) goto Label_437; // 0x1b3 JumpB
	return 14; // 0x1b4 Return
	
Label_437:
	var_46_int = 0; // 0x1b5 PushV
	func_696(var_46_int); // 0x1b6 NEW_2
	var_37_int = var_46_int; // 0x1b7 Mov
	var_38_int = 0; // 0x1b9 MovI
	
Label_442:
	var_59_bool = 0; // 0x1ba PushV
	var_59_bool = 0; // 0x1bb MovB
	var_60_int = 5; // 0x1bc PushI
	var_61_bool = var_38_int < var_60_int; // 0x1bd LT
	if(var_61_bool == 0) goto Label_452; // 0x1be JumpB
	var_62_bool = 0; // 0x1bf PushV
	func_522(var_62_bool); // 0x1c0 NEW_2
	if(var_62_bool == 0) goto Label_452; // 0x1c2 JumpB
	var_59_bool = 1; // 0x1c3 MovB
	
Label_452:
	if(var_59_bool == 0) goto Label_504; // 0x1c4 JumpB
	var_63_int = 3; // 0x1c5 PushI
	irand(var_39_int, var_63_int); // 0x1c6 Func
	var_64_int = 0; // 0x1c8 PushI
	var_65_bool = var_39_int == var_64_int; // 0x1c9 Eq
	if(var_65_bool == 0) goto Label_476; // 0x1ca JumpB
	var_66_int = var_37_int; // 0x1cb Push
	if(var_66_int == 0) goto Label_475; // 0x1cc JumpB
	irand(var_40_int, var_37_int); // 0x1cd Func
	var_67_string = "all"; // 0x1cf PushS
	var_68_string = ""; var_69_int = 0; // 0x1d0 PushV
	var_69_int = var_40_int; // 0x1d1 Mov
	func_689(var_68_string, var_69_int); // 0x1d2 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x1d4 Func
	WaitForAnimEnd(var_41_bool); // 0x1d6 Func
	var_70_bool = var_41_bool == 0; // 0x1d8 Not
	if(var_70_bool == 0) goto Label_475; // 0x1d9 JumpB
	goto Label_504; // 0x1da Jump
	
Label_504:
	ResetAAS(); // 0x1f8 Func
	return 14; // 0x1fa Return
	
Label_475:
	goto Label_493; // 0x1db Jump
	
Label_493:
	var_71_bool = 0; // 0x1ed PushV
	func_507(var_71_bool); // 0x1ee NEW_2
	var_72_bool = var_71_bool == 0; // 0x1f0 Not
	if(var_72_bool == 0) goto Label_499; // 0x1f1 JumpB
	goto Label_504; // 0x1f2 Jump
	
Label_499:
	ResetAAS(); // 0x1f3 Func
	var_73_int = 1; // 0x1f5 PushI
	var_38_int = var_38_int + var_73_int; // 0x1f6 Add2
	goto Label_442; // 0x1f7 Jump
	
Label_476:
	var_74_int = 1; // 0x1dc PushI
	var_75_bool = var_39_int == var_74_int; // 0x1dd Eq
	if(var_75_bool == 0) goto Label_490; // 0x1de JumpB
	var_76_int = 4; // 0x1df PushI
	rand(var_42_float, var_76_int); // 0x1e0 Func
	var_77_int = 1; // 0x1e2 PushI
	var_78_int = var_42_float + var_77_int; // 0x1e3 Add
	Sleep(var_78_int, var_43_bool); // 0x1e4 Func
	var_79_bool = var_43_bool == 0; // 0x1e6 Not
	if(var_79_bool == 0) goto Label_489; // 0x1e7 JumpB
	goto Label_504; // 0x1e8 Jump
	
Label_489:
	goto Label_493; // 0x1e9 Jump
	
Label_490:
	var_80_int = var_38_int; // 0x1ea Push
	if(var_80_int == 0) goto Label_493; // 0x1eb JumpB
	goto Label_504; // 0x1ec Jump
}


func_684(var_41_float)
{
	var_42_float = 0; var_43_float = 0; // 0x2ac PushV
	GetGameTime(var_43_float); // 0x2ad Func
	var_41_float = var_43_float; // 0x2af Mov
	return 2; // 0x2b0 Return
}


func_689(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x2b1 PushV
	var_55_string = "idle"; // 0x2b2 MovS
	var_56_int = var_53_int; // 0x2b3 Push
	if(var_56_int == 0) goto Label_694; // 0x2b4 JumpB
	var_55_string = var_55_string + var_53_int; // 0x2b5 Add2
	
Label_694:
	var_52_string = var_55_string; // 0x2b6 Mov
	return 2; // 0x2b7 Return
}


func_696(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x2b8 PushV
	var_49_int = 0; // 0x2b9 MovI
	
Label_698:
	var_51_string = "all"; // 0x2ba PushS
	var_52_string = ""; var_53_int = 0; // 0x2bb PushV
	var_53_int = var_49_int; // 0x2bc Mov
	func_689(var_52_string, var_53_int); // 0x2bd NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x2bf Func
	var_57_bool = var_50_bool == 0; // 0x2c1 Not
	if(var_57_bool == 0) goto Label_708; // 0x2c2 JumpB
	goto Label_711; // 0x2c3 Jump
	
Label_711:
	var_46_int = var_49_int; // 0x2c7 Mov
	return 4; // 0x2c8 Return
	
Label_708:
	var_58_int = 1; // 0x2c4 PushI
	var_49_int = var_49_int + var_58_int; // 0x2c5 Add2
	goto Label_698; // 0x2c6 Jump
}


func_827(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x33b PushV
	var_82_string = "branch"; // 0x33c PushS
	GetVariable(var_82_string, var_81_int); // 0x33d Func
	var_83_int = 0; // 0x33f PushI
	var_84_bool = var_81_int == var_83_int; // 0x340 Eq
	if(var_84_bool == 0) goto Label_837; // 0x341 JumpB
	var_79_int = 1; // 0x342 MovI
	return 2; // 0x343 Return
	
Label_837:
	var_85_int = 1; // 0x345 PushI
	var_86_bool = var_81_int == var_85_int; // 0x346 Eq
	if(var_86_bool == 0) goto Label_842; // 0x347 JumpB
	var_79_int = 2; // 0x348 MovI
	return 2; // 0x349 Return
	
Label_842:
	var_79_int = 3; // 0x34a MovI
	return 2; // 0x34b Return
}


func_713(var_76_int)
{
	var_76_int = 515559; // 0x2c9 MovI
	return 0; // 0x2ca Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_107; // 0x4f JumpB
	var_95_string = ""; // 0x50 PushV
	var_95_string = "Neutral"; // 0x51 MovS
	func_137(var_89_object, var_95_string); // 0x52 NEW_2
	var_112_int = 530443; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_bool = 0; var_114_object = Obj(); // 0x59 PushV
	var_114_object = var_1_object; // 0x5a MovT
	func_765(var_114_object); // 0x5b NEW_2
	if(var_113_bool == 0) goto Label_99; // 0x5d JumpB
	var_121_int = 530444; // 0x5e PushI
	var_122_int = 31811; // 0x5f PushI
	var_123_int = 31810; // 0x60 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x61 TObjFunc
	
Label_99:
	var_124_int = 530447; // 0x63 PushI
	var_125_int = -1; // 0x64 PushI
	var_126_int = 31813; // 0x65 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_127_bool = 0; // 0x6b PushV
	func_721(var_127_bool); // 0x6c NEW_2
	if(var_127_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_128_string = var_3_string; // 0x71 PushT
	if(var_128_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_129_string = ""; // 0x74 PushV
	var_129_string = var_2_object; // 0x75 MovT
	func_614(var_129_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_140_string = "all"; // 0x7a PushS
	var_141_string = "idle"; // 0x7b PushS
	PlayAnimation(var_140_string, var_141_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_142_string = var_3_string; // 0x80 PushT
	if(var_142_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_143_string = "all"; // 0x83 PushS
	var_144_string = "idle"; // 0x84 PushS
	PlayAnimation(var_143_string, var_144_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_715(var_75_int)
{
	var_75_int = 503344; // 0x2cb MovI
	return 0; // 0x2cc Return
}


func_717(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png"; // 0x2cd MovS
	return 0; // 0x2ce Return
}


func_719(var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png"; // 0x2cf MovS
	return 0; // 0x2d0 Return
}


func_721(var_70_bool)
{
	var_70_bool = 0; // 0x2d1 MovB
	return 0; // 0x2d2 Return
}


func_723()
{
	var_20_string = "oob10GirlLaska1"; // 0x2d4 PushS
	var_21_int = 1; // 0x2d5 PushI
	SetVariable(var_20_string, var_21_int); // 0x2d6 Func
	return 0; // 0x2d8 Return
}


func_596()
{
	var_147_bool = 0; var_148_bool = 0; // 0x254 PushV
	var_149_bool = 1; // 0x255 PushB
	CameraSwitchToNormal(var_149_bool); // 0x256 Func
	var_150_bool = 0; // 0x258 PushV
	func_721(var_150_bool); // 0x259 NEW_2
	if(var_150_bool == 0) goto Label_605; // 0x25b JumpB
	goto Label_613; // 0x25c Jump
	
Label_613:
	return 2; // 0x265 Return
	
Label_605:
	var_151_string = "head"; // 0x25d PushS
	HasAnimationTrack(var_148_bool, var_151_string); // 0x25e Func
	var_152_bool = var_148_bool; // 0x260 Push
	if(var_152_bool == 0) goto Label_613; // 0x261 JumpB
	var_153_string = "head"; // 0x262 PushS
	UnlookAsync(var_153_string); // 0x263 Func
}


func_729()
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x2d9 PushV
	var_28_string = "b10q04GirlGotoKapella"; // 0x2da PushS
	var_29_int = 1; // 0x2db PushI
	SetVariable(var_28_string, var_29_int); // 0x2dc Func
	var_30_object = Obj(); // 0x2de PushV
	func_777(var_30_object); // 0x2df NEW_2
	var_27_object = var_30_object; // 0x2e0 Mov
	var_37_string = "b10q04GirlGotoKapella"; // 0x2e2 PushS
	var_38_string = "pt_map_kapella"; // 0x2e3 PushS
	var_39_int = 0; // 0x2e4 PushI
	var_40_int = 530490; // 0x2e5 PushI
	var_41_float = 0; // 0x2e6 PushV
	func_684(var_41_float); // 0x2e7 NEW_2
	AddMark(var_37_string, var_38_string, var_39_int, var_40_int, var_41_float); // 0x2e9 ObjFunc
	return 2; // 0x2eb Return
}


func_347(var_18_bool)
{
	var_18_bool = 1; // 0x15b MovB
	return 0; // 0x15c Return
}


func_349(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x15e PushV
	func_522(var_23_bool); // 0x15f NEW_2
	var_26_bool = var_23_bool == 0; // 0x161 Not
	if(var_26_bool == 0) goto Label_356; // 0x162 JumpB
	return 0; // 0x163 Return
	
Label_356:
	var_27_string = "player"; // 0x164 PushS
	FindActor(var_17_bool, var_27_string); // 0x165 Func
	var_2_object = 0; // 0x167 TMovB
	var_3_string = 0; // 0x168 TMovB
	var_0_object = var_21_float; // 0x169 TMov
	var_1_object = var_22_float; // 0x16a TMov
	var_28_int = 10; // 0x16b PushI
	var_29_float = 1.0; // 0x16c PushF
	SetTimer(var_28_int, var_29_float); // 0x16d Func
	func_428(); // 0x170 NEW_2
	var_81_bool = var_3_string == 0; // 0x172 Not
	if(var_81_bool == 0) goto Label_375; // 0x173 JumpB
	var_82_int = 10; // 0x174 PushI
	KillTimer(var_82_int); // 0x175 Func
	
Label_375:
	return 0; // 0x177 Return
}


func_614(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0; // 0x266 PushV
	lshHasAnimation(var_133_bool, var_129_string); // 0x267 Func
	var_136_bool = var_133_bool; // 0x269 Push
	if(var_136_bool == 0) goto Label_625; // 0x26a JumpB
	lshGetAnimTimes(var_129_string, var_134_float, var_135_float); // 0x26b Func
	var_137_bool = 0; // 0x26d PushB
	lshPlayAnimation(var_134_float, var_135_float, var_137_bool); // 0x26e Func
	goto Label_629; // 0x270 Jump
	
Label_629:
	return 6; // 0x275 Return
	
Label_625:
	var_138_string = "Can't find lsh animation : "; // 0x271 PushS
	var_139_int = var_138_string + var_129_string; // 0x272 Add
	Trace(var_139_int); // 0x273 Func
}


func_749()
{
	var_46_object = Obj(); var_47_string = ""; var_48_float = 0; // 0x2ee PushV
	var_49_object = Obj(); // 0x2ef PushV
	func_777(var_49_object); // 0x2f0 NEW_2
	var_46_object = var_49_object; // 0x2f1 Mov
	var_47_string = "pt_map_kapella"; // 0x2f3 MovS
	var_48_float = 2; // 0x2f4 MovI
	func_794(var_46_object, var_47_string, var_48_float); // 0x2f5 NEW_2
	var_69_object = Obj(); // 0x2f7 PushV
	func_777(var_69_object); // 0x2f8 NEW_2
	ShowMap(var_69_object); // 0x2fa ObjFunc
	return 0; // 0x2fc Return
}


func_630(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x276 PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x277 Func
	var_109_bool = var_106_bool; // 0x279 Push
	if(var_109_bool == 0) goto Label_640; // 0x27a JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x27b Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x27d Func
	goto Label_644; // 0x27f Jump
	
Label_644:
	return 6; // 0x284 Return
	
Label_640:
	var_110_string = "Can't find lsh animation : "; // 0x280 PushS
	var_111_int = var_110_string + var_99_string; // 0x281 Add
	Trace(var_111_int); // 0x282 Func
}


func_376(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x178 PushV
	var_18_bool = var_4_bool == 0; // 0x179 NullEq
	if(var_18_bool == 0) goto Label_381; // 0x17a JumpB
	var_15_bool = 0; // 0x17b MovB
	return 2; // 0x17c Return
	
Label_381:
	var_19_float = 0; var_20_object = Obj(); // 0x17d PushV
	var_20_object = var_4_bool; // 0x17e MovT
	func_514(var_20_object); // 0x17f NEW_2
	var_17_float = sqrt(var_19_float); // 0x181 Sqrt2
	var_27_object = var_2_object; // 0x182 PushT
	if(var_27_object == 0) goto Label_389; // 0x183 JumpB
	var_17_float = var_17_float - var_1_object; // 0x184 Sub2
	
Label_389:
	var_15_bool = var_17_float < var_0_object; // 0x185 LT2
	return 2; // 0x186 Return
}


func_507(var_71_bool)
{
	var_71_bool = 1; // 0x1fb MovB
	return 0; // 0x1fc Return
}


func_509()
{
	StopAnimation(); // 0x1fd Func
	StopGroup0(); // 0x1ff Func
	return 0; // 0x201 Return
}


