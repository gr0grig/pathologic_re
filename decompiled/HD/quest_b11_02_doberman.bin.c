task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xaa PushI
	if(var_12_int == 0) goto Label_323; // 0xab JumpB
	func_651(); // 0xad NEW_2
	var_14_int = 32738; // 0xaf PushI
	var_15_bool = var_11_object == var_14_int; // 0xb0 Eq
	if(var_15_bool == 0) goto Label_183; // 0xb1 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xb2 PushV
	var_16_object = var_1_object; // 0xb3 MovT
	var_17_object = var_0_object; // 0xb4 MovT
	func_730(); // 0xb5 NEW_2
	
Label_183:
	var_47_int = 32439; // 0xb7 PushI
	var_48_bool = var_11_object == var_47_int; // 0xb8 Eq
	if(var_48_bool == 0) goto Label_191; // 0xb9 JumpB
	var_49_object = Obj(); var_50_object = Obj(); // 0xba PushV
	var_49_object = var_1_object; // 0xbb MovT
	var_50_object = var_0_object; // 0xbc MovT
	func_719(); // 0xbd NEW_2
	
Label_191:
	var_56_int = 32435; // 0xbf PushI
	var_57_bool = var_10_bool == var_56_int; // 0xc0 Eq
	if(var_57_bool == 0) goto Label_229; // 0xc1 JumpB
	var_58_string = ""; // 0xc2 PushV
	var_58_string = "Neutral"; // 0xc3 MovS
	func_147(var_11_object, var_58_string); // 0xc4 NEW_2
	var_75_int = 531117; // 0xc6 PushI
	SetMessage(var_75_int); // 0xc7 TObjFunc
	ClearReplies(); // 0xc9 TObjFunc
	var_76_bool = 0; var_77_object = Obj(); // 0xcb PushV
	var_77_object = var_1_object; // 0xcc MovT
	func_740(var_77_object); // 0xcd NEW_2
	if(var_76_bool == 0) goto Label_213; // 0xcf JumpB
	var_84_int = 531387; // 0xd0 PushI
	var_85_int = 32728; // 0xd1 PushI
	var_86_int = 32726; // 0xd2 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0xd3 TObjFunc
	
Label_213:
	var_87_bool = 0; var_88_object = Obj(); // 0xd5 PushV
	var_88_object = var_1_object; // 0xd6 MovT
	func_740(var_88_object); // 0xd7 NEW_2
	if(var_87_bool == 0) goto Label_223; // 0xd9 JumpB
	var_89_int = 531119; // 0xda PushI
	var_90_int = 32438; // 0xdb PushI
	var_91_int = 32437; // 0xdc PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xdd TObjFunc
	
Label_223:
	var_92_int = 531388; // 0xdf PushI
	var_93_int = -1; // 0xe0 PushI
	var_94_int = 32727; // 0xe1 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xe2 TObjFunc
	return 0; // 0xe4 Return
	
Label_229:
	var_95_int = 32438; // 0xe5 PushI
	var_96_bool = var_10_bool == var_95_int; // 0xe6 Eq
	if(var_96_bool == 0) goto Label_247; // 0xe7 JumpB
	var_97_string = ""; // 0xe8 PushV
	var_97_string = "Neutral"; // 0xe9 MovS
	func_147(var_11_object, var_97_string); // 0xea NEW_2
	var_98_int = 531120; // 0xec PushI
	SetMessage(var_98_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_99_int = 531121; // 0xf1 PushI
	var_100_int = -1; // 0xf2 PushI
	var_101_int = 32439; // 0xf3 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xf4 TObjFunc
	return 0; // 0xf6 Return
	
Label_247:
	var_102_int = 32728; // 0xf7 PushI
	var_103_bool = var_10_bool == var_102_int; // 0xf8 Eq
	if(var_103_bool == 0) goto Label_270; // 0xf9 JumpB
	var_104_string = ""; // 0xfa PushV
	var_104_string = "Neutral"; // 0xfb MovS
	func_147(var_11_object, var_104_string); // 0xfc NEW_2
	var_105_int = 531389; // 0xfe PushI
	SetMessage(var_105_int); // 0xff TObjFunc
	ClearReplies(); // 0x101 TObjFunc
	var_106_int = 531390; // 0x103 PushI
	var_107_int = 32730; // 0x104 PushI
	var_108_int = 32729; // 0x105 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x106 TObjFunc
	var_109_int = 531395; // 0x108 PushI
	var_110_int = 32736; // 0x109 PushI
	var_111_int = 32735; // 0x10a PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x10b TObjFunc
	return 0; // 0x10d Return
	
Label_270:
	var_112_int = 32730; // 0x10e PushI
	var_113_bool = var_10_bool == var_112_int; // 0x10f Eq
	if(var_113_bool == 0) goto Label_293; // 0x110 JumpB
	var_114_string = ""; // 0x111 PushV
	var_114_string = "Neutral"; // 0x112 MovS
	func_147(var_11_object, var_114_string); // 0x113 NEW_2
	var_115_int = 531391; // 0x115 PushI
	SetMessage(var_115_int); // 0x116 TObjFunc
	ClearReplies(); // 0x118 TObjFunc
	var_116_int = 531394; // 0x11a PushI
	var_117_int = 32736; // 0x11b PushI
	var_118_int = 32734; // 0x11c PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x11d TObjFunc
	var_119_int = 531392; // 0x11f PushI
	var_120_int = 32438; // 0x120 PushI
	var_121_int = 32731; // 0x121 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x122 TObjFunc
	return 0; // 0x124 Return
	
Label_293:
	var_122_int = 32736; // 0x125 PushI
	var_123_bool = var_10_bool == var_122_int; // 0x126 Eq
	if(var_123_bool == 0) goto Label_311; // 0x127 JumpB
	var_124_string = ""; // 0x128 PushV
	var_124_string = "Neutral"; // 0x129 MovS
	func_147(var_11_object, var_124_string); // 0x12a NEW_2
	var_125_int = 531396; // 0x12c PushI
	SetMessage(var_125_int); // 0x12d TObjFunc
	ClearReplies(); // 0x12f TObjFunc
	var_126_int = 531397; // 0x131 PushI
	var_127_int = -1; // 0x132 PushI
	var_128_int = 32738; // 0x133 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_3_string = 1; // 0x137 TMovB
	var_129_bool = 0; // 0x138 PushV
	func_717(var_129_bool); // 0x139 NEW_2
	if(var_129_bool == 0) goto Label_319; // 0x13b JumpB
	lshStopAnimation(); // 0x13c Func
	goto Label_321; // 0x13e Jump
	
Label_321:
	return 0; // 0x141 Return
	
Label_319:
	StopAnimation(); // 0x13f Func
	
Label_323:
	return 0; // 0x143 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_409(var_9_object, var_10_object); // 0x14f NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x151 PushV
	var_15_object = var_10_object; // 0x152 Mov
	TaskCall(0); // 0x153 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x154 NEW_2
	TaskReturn(); // 0x155 TaskReturn
	return 0; // 0x157 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x183 PushI
	var_12_bool = var_10_int == var_11_int; // 0x184 Eq
	if(var_12_bool == 0) goto Label_408; // 0x185 JumpB
	var_13_bool = 0; // 0x186 PushV
	func_371(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x187 NEW_2
	if(var_13_bool == 0) goto Label_402; // 0x189 JumpB
	var_26_bool = var_2_object == 0; // 0x18a Not
	if(var_26_bool == 0) goto Label_401; // 0x18b JumpB
	var_27_object = Obj(); // 0x18c PushV
	var_27_object = var_4_bool; // 0x18d MovT
	func_640(var_27_object); // 0x18e NEW_2
	var_2_object = 1; // 0x190 TMovB
	
Label_401:
	goto Label_408; // 0x191 Jump
	
Label_408:
	return 0; // 0x198 Return
	
Label_402:
	var_34_object = var_2_object; // 0x192 PushT
	if(var_34_object == 0) goto Label_408; // 0x193 JumpB
	var_35_string = "head"; // 0x194 PushS
	UnlookAsync(var_35_string); // 0x195 Func
	var_2_object = 0; // 0x197 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_324:
	var_10_bool = 1; // 0x144 PushB
	if(var_10_bool == 0) goto Label_332; // 0x145 JumpB
	var_11_float = 0; var_12_float = 0; // 0x146 PushV
	var_11_float = 300; // 0x147 MovI
	var_12_float = 100; // 0x148 MovI
	func_344(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x149 NEW_2
	goto Label_324; // 0x14b Jump
	
Label_332:
	return 0; // 0x14c Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_522(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_711(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_709(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_713(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_715(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_806(var_77_int); // 0x22 NEW_2
	SetPlayerName(var_77_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_85_bool = var_22_bool; // 0x29 Push
	if(var_85_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x2f PushV
	var_86_object = var_15_object; // 0x30 Mov
	var_87_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_148_bool = var_24_bool == 0; // 0x38 Not
	if(var_148_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_149_object = Obj(); // 0x3f PushV
	var_149_object = var_15_object; // 0x40 Mov
	func_591(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_640(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x280 PushV
	GetEyesHeight(var_30_float); // 0x281 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x283 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x284 PushE
	var_32_float = var_30_float; // 0x285 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x286 PopE
	var_33_string = "head"; // 0x287 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x288 Func
	return 4; // 0x28a Return
}


func_509(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1fd PushV
	GetPosition(var_22_cvector); // 0x1fe Func
	GetPosition(var_23_cvector); // 0x200 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x202 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x203 Or2
	return 6; // 0x204 Return
}


func_517(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x205 PushV
	IsLoaded(var_15_bool); // 0x206 Func
	var_13_bool = var_15_bool; // 0x208 Mov
	return 2; // 0x209 Return
}


func_522(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x20a PushV
	GetPosition(var_38_cvector); // 0x20b ObjFunc
	GetEyesHeight(var_37_float); // 0x20d ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x20f PushE
	var_46_float = var_46_float + var_37_float; // 0x210 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x211 PopE
	GetPosition(var_39_cvector); // 0x212 Func
	GetEyesHeight(var_37_float); // 0x214 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x216 PushE
	var_47_float = var_47_float + var_37_float; // 0x217 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x218 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x219 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x21a PushE
	var_48_float = 0; // 0x21b MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x21c PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x21d Or
	var_50_float = sqrt(var_49_int); // 0x21e Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x21f Div2
	var_41_cvector = -var_40_cvector; // 0x220 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x221 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x222 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x223 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x224 Xor2
	func_658(var_52_cvector, var_53_cvector); // 0x225 NEW_2
	var_60_int = 25; // 0x227 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x228 Mult
	var_62_int = var_51_float + var_61_float; // 0x229 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x22a PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x22b Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x22c Add2
	IsOverrideActive(var_44_bool); // 0x22d Func
	var_64_bool = var_44_bool; // 0x22f Push
	if(var_64_bool == 0) goto Label_563; // 0x230 JumpB
	var_25_bool = 0; // 0x231 MovB
	return 18; // 0x232 Return
	
Label_563:
	StopWorld(); // 0x233 Func
	var_65_bool = 1; // 0x235 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x236 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x238 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x239 PushE
	Rotate(var_66_float, var_67_float); // 0x23a Func
	var_68_bool = 0; // 0x23c PushV
	func_717(var_68_bool); // 0x23d NEW_2
	if(var_68_bool == 0) goto Label_577; // 0x23f JumpB
	goto Label_585; // 0x240 Jump
	
Label_585:
	CameraWaitForPlayFinish(); // 0x249 Func
	ResumeWorld(); // 0x24b Func
	var_25_bool = 1; // 0x24d MovB
	return 18; // 0x24e Return
	
Label_577:
	var_69_string = "head"; // 0x241 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x242 Func
	var_70_bool = var_45_bool; // 0x244 Push
	if(var_70_bool == 0) goto Label_585; // 0x245 JumpB
	var_71_string = "head"; // 0x246 PushS
	LookAsyncCamera(var_71_string); // 0x247 Func
}


func_651()
{
	var_13_bool = 0; // 0x28b PushV
	func_717(var_13_bool); // 0x28c NEW_2
	if(var_13_bool == 0) goto Label_657; // 0x28e JumpB
	lshStopSpeech(); // 0x28f Func
	
Label_657:
	return 0; // 0x291 Return
}


func_778(var_23_bool, var_24_object, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0; // 0x30a PushV
	var_32_object = Obj(); // 0x30b PushV
	func_765(var_32_object); // 0x30c NEW_2
	var_29_object = var_32_object; // 0x30d Mov
	Find(var_25_int, var_30_object); // 0x30f ObjFunc
	var_37_bool = var_30_object == 0; // 0x311 Not
	if(var_37_bool == 0) goto Label_793; // 0x312 JumpB
	var_38_string = "Can't find diary parent with id: "; // 0x313 PushS
	var_39_int = var_38_string + var_25_int; // 0x314 Add
	Trace(var_39_int); // 0x315 Func
	var_23_bool = 0; // 0x317 MovB
	return 6; // 0x318 Return
	
Label_793:
	AddChild(var_24_object); // 0x319 ObjFunc
	var_40_int = 7; // 0x31b PushI
	SendWorldWndMessage(var_40_int); // 0x31c Func
	GetCategory(var_31_int); // 0x31e ObjFunc
	SetDiarySection(var_31_int); // 0x320 Func
	var_23_bool = 0; // 0x322 MovB
	return 6; // 0x323 Return
}


func_658(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x292 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x293 Or
	var_56_float = sqrt(var_57_int); // 0x294 Sqrt2
	var_58_float = 0.0; // 0x295 PushF
	var_59_bool = var_56_float < var_58_float; // 0x296 LT
	if(var_59_bool == 0) goto Label_666; // 0x297 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x298 MovV
	return 2; // 0x299 Return
	
Label_666:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x29a Div2
	return 2; // 0x29b Return
}


func_147(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0x94 PushV
	func_717(var_94_bool); // 0x95 NEW_2
	var_95_bool = var_94_bool == 0; // 0x97 Not
	if(var_95_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_96_bool = var_93_string == var_2_object; // 0x9a Eq
	if(var_96_bool == 0) goto Label_157; // 0x9b JumpB
	return 0; // 0x9c Return
	
Label_157:
	var_97_string = ""; var_98_bool = 0; // 0x9d PushV
	var_97_string = var_93_string; // 0x9e Mov
	var_99_string = ""; // 0x9f PushS
	var_100_bool = var_93_string == var_99_string; // 0xa0 Eq
	if(var_100_bool == 0) goto Label_164; // 0xa1 JumpB
	var_98_bool = 0; // 0xa2 MovB
	goto Label_165; // 0xa3 Jump
	
Label_165:
	func_625(var_97_string, var_98_bool); // 0xa5 NEW_2
	var_2_object = var_93_string; // 0xa7 TMov
	return 0; // 0xa8 Return
	
Label_164:
	var_98_bool = 1; // 0xa4 MovB
}


func_409(var_2_object, var_3_string)
{
	func_504(); // 0x19a NEW_2
	var_11_int = 10; // 0x19c PushI
	KillTimer(var_11_int); // 0x19d Func
	var_12_object = var_2_object; // 0x19f PushT
	if(var_12_object == 0) goto Label_421; // 0x1a0 JumpB
	var_13_string = "head"; // 0x1a1 PushS
	UnlookAsync(var_13_string); // 0x1a2 Func
	var_2_object = 0; // 0x1a4 TMovB
	
Label_421:
	var_3_string = 1; // 0x1a5 TMovB
	return 0; // 0x1a6 Return
}


func_668(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0; // 0x29c PushV
	GetVariable(var_114_string, var_116_int); // 0x29d Func
	var_113_int = var_116_int; // 0x29f Mov
	return 2; // 0x2a0 Return
}


func_673(var_41_bool, var_42_string, var_43_string)
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x2a1 PushV
	FindActor(var_45_object, var_42_string); // 0x2a2 Func
	var_46_bool = var_45_object == 0; // 0x2a4 NullEq
	if(var_46_bool == 0) goto Label_680; // 0x2a5 JumpB
	var_41_bool = 0; // 0x2a6 MovB
	return 2; // 0x2a7 Return
	
Label_680:
	Trigger(var_45_object, var_43_string); // 0x2a8 Func
	var_41_bool = 1; // 0x2aa MovB
	return 2; // 0x2ab Return
}


func_806(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x326 PushV
	var_80_string = "branch"; // 0x327 PushS
	GetVariable(var_80_string, var_79_int); // 0x328 Func
	var_81_int = 0; // 0x32a PushI
	var_82_bool = var_79_int == var_81_int; // 0x32b Eq
	if(var_82_bool == 0) goto Label_816; // 0x32c JumpB
	var_77_int = 1; // 0x32d MovI
	return 2; // 0x32e Return
	
Label_816:
	var_83_int = 1; // 0x330 PushI
	var_84_bool = var_79_int == var_83_int; // 0x331 Eq
	if(var_84_bool == 0) goto Label_821; // 0x332 JumpB
	var_77_int = 2; // 0x333 MovI
	return 2; // 0x334 Return
	
Label_821:
	var_77_int = 3; // 0x335 MovI
	return 2; // 0x336 Return
}


func_423()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x1a7 PushV
	WaitForAnimEnd(); // 0x1a8 Func
	var_34_bool = 0; // 0x1aa PushV
	func_517(var_34_bool); // 0x1ab NEW_2
	var_35_bool = var_34_bool == 0; // 0x1ad Not
	if(var_35_bool == 0) goto Label_432; // 0x1ae JumpB
	return 14; // 0x1af Return
	
Label_432:
	var_36_int = 0; // 0x1b0 PushV
	func_692(var_36_int); // 0x1b1 NEW_2
	var_27_int = var_36_int; // 0x1b2 Mov
	var_28_int = 0; // 0x1b4 MovI
	
Label_437:
	var_49_bool = 0; // 0x1b5 PushV
	var_49_bool = 0; // 0x1b6 MovB
	var_50_int = 5; // 0x1b7 PushI
	var_51_bool = var_28_int < var_50_int; // 0x1b8 LT
	if(var_51_bool == 0) goto Label_447; // 0x1b9 JumpB
	var_52_bool = 0; // 0x1ba PushV
	func_517(var_52_bool); // 0x1bb NEW_2
	if(var_52_bool == 0) goto Label_447; // 0x1bd JumpB
	var_49_bool = 1; // 0x1be MovB
	
Label_447:
	if(var_49_bool == 0) goto Label_499; // 0x1bf JumpB
	var_53_int = 3; // 0x1c0 PushI
	irand(var_29_int, var_53_int); // 0x1c1 Func
	var_54_int = 0; // 0x1c3 PushI
	var_55_bool = var_29_int == var_54_int; // 0x1c4 Eq
	if(var_55_bool == 0) goto Label_471; // 0x1c5 JumpB
	var_56_int = var_27_int; // 0x1c6 Push
	if(var_56_int == 0) goto Label_470; // 0x1c7 JumpB
	irand(var_30_int, var_27_int); // 0x1c8 Func
	var_57_string = "all"; // 0x1ca PushS
	var_58_string = ""; var_59_int = 0; // 0x1cb PushV
	var_59_int = var_30_int; // 0x1cc Mov
	func_685(var_58_string, var_59_int); // 0x1cd NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x1cf Func
	WaitForAnimEnd(var_31_bool); // 0x1d1 Func
	var_60_bool = var_31_bool == 0; // 0x1d3 Not
	if(var_60_bool == 0) goto Label_470; // 0x1d4 JumpB
	goto Label_499; // 0x1d5 Jump
	
Label_499:
	ResetAAS(); // 0x1f3 Func
	return 14; // 0x1f5 Return
	
Label_470:
	goto Label_488; // 0x1d6 Jump
	
Label_488:
	var_61_bool = 0; // 0x1e8 PushV
	func_502(var_61_bool); // 0x1e9 NEW_2
	var_62_bool = var_61_bool == 0; // 0x1eb Not
	if(var_62_bool == 0) goto Label_494; // 0x1ec JumpB
	goto Label_499; // 0x1ed Jump
	
Label_494:
	ResetAAS(); // 0x1ee Func
	var_63_int = 1; // 0x1f0 PushI
	var_28_int = var_28_int + var_63_int; // 0x1f1 Add2
	goto Label_437; // 0x1f2 Jump
	
Label_471:
	var_64_int = 1; // 0x1d7 PushI
	var_65_bool = var_29_int == var_64_int; // 0x1d8 Eq
	if(var_65_bool == 0) goto Label_485; // 0x1d9 JumpB
	var_66_int = 4; // 0x1da PushI
	rand(var_32_float, var_66_int); // 0x1db Func
	var_67_int = 1; // 0x1dd PushI
	var_68_int = var_32_float + var_67_int; // 0x1de Add
	Sleep(var_68_int, var_33_bool); // 0x1df Func
	var_69_bool = var_33_bool == 0; // 0x1e1 Not
	if(var_69_bool == 0) goto Label_484; // 0x1e2 JumpB
	goto Label_499; // 0x1e3 Jump
	
Label_484:
	goto Label_488; // 0x1e4 Jump
	
Label_485:
	var_70_int = var_28_int; // 0x1e5 Push
	if(var_70_int == 0) goto Label_488; // 0x1e6 JumpB
	goto Label_499; // 0x1e7 Jump
}


func_685(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x2ad PushV
	var_45_string = "idle"; // 0x2ae MovS
	var_46_int = var_43_int; // 0x2af Push
	if(var_46_int == 0) goto Label_690; // 0x2b0 JumpB
	var_45_string = var_45_string + var_43_int; // 0x2b1 Add2
	
Label_690:
	var_42_string = var_45_string; // 0x2b2 Mov
	return 2; // 0x2b3 Return
}


func_692(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x2b4 PushV
	var_39_int = 0; // 0x2b5 MovI
	
Label_694:
	var_41_string = "all"; // 0x2b6 PushS
	var_42_string = ""; var_43_int = 0; // 0x2b7 PushV
	var_43_int = var_39_int; // 0x2b8 Mov
	func_685(var_42_string, var_43_int); // 0x2b9 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x2bb Func
	var_47_bool = var_40_bool == 0; // 0x2bd Not
	if(var_47_bool == 0) goto Label_704; // 0x2be JumpB
	goto Label_707; // 0x2bf Jump
	
Label_707:
	var_36_int = var_39_int; // 0x2c3 Mov
	return 4; // 0x2c4 Return
	
Label_704:
	var_48_int = 1; // 0x2c0 PushI
	var_39_int = var_39_int + var_48_int; // 0x2c1 Add2
	goto Label_694; // 0x2c2 Jump
}


func_709(var_74_int)
{
	var_74_int = 518097; // 0x2c5 MovI
	return 0; // 0x2c6 Return
}


func_711(var_73_int)
{
	var_73_int = 518096; // 0x2c7 MovI
	return 0; // 0x2c8 Return
}


func_713(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png"; // 0x2c9 MovS
	return 0; // 0x2ca Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_117; // 0x4f JumpB
	var_93_string = ""; // 0x50 PushV
	var_93_string = "Neutral"; // 0x51 MovS
	func_147(var_87_object, var_93_string); // 0x52 NEW_2
	var_110_int = 531117; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_bool = 0; var_112_object = Obj(); // 0x59 PushV
	var_112_object = var_1_object; // 0x5a MovT
	func_740(var_112_object); // 0x5b NEW_2
	if(var_111_bool == 0) goto Label_99; // 0x5d JumpB
	var_119_int = 531387; // 0x5e PushI
	var_120_int = 32728; // 0x5f PushI
	var_121_int = 32726; // 0x60 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x61 TObjFunc
	
Label_99:
	var_122_bool = 0; var_123_object = Obj(); // 0x63 PushV
	var_123_object = var_1_object; // 0x64 MovT
	func_740(var_123_object); // 0x65 NEW_2
	if(var_122_bool == 0) goto Label_109; // 0x67 JumpB
	var_124_int = 531119; // 0x68 PushI
	var_125_int = 32438; // 0x69 PushI
	var_126_int = 32437; // 0x6a PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x6b TObjFunc
	
Label_109:
	var_127_int = 531388; // 0x6d PushI
	var_128_int = -1; // 0x6e PushI
	var_129_int = 32727; // 0x6f PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x70 TObjFunc
	goto Label_117; // 0x72 Jump
	
Label_117:
	var_130_bool = 0; // 0x75 PushV
	func_717(var_130_bool); // 0x76 NEW_2
	if(var_130_bool == 0) goto Label_132; // 0x78 JumpB
	
Label_121:
	lshWaitForAnimEnd(); // 0x79 Func
	var_131_string = var_3_string; // 0x7b PushT
	if(var_131_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_131:
	goto Label_146; // 0x83 Jump
	
Label_146:
	return 0; // 0x92 Return
	
Label_126:
	var_132_string = ""; // 0x7e PushV
	var_132_string = var_2_object; // 0x7f MovT
	func_609(var_132_string); // 0x80 NEW_2
	goto Label_121; // 0x82 Jump
	
Label_132:
	var_143_string = "all"; // 0x84 PushS
	var_144_string = "idle"; // 0x85 PushS
	PlayAnimation(var_143_string, var_144_string); // 0x86 Func
	
Label_136:
	WaitForAnimEnd(); // 0x88 Func
	var_145_string = var_3_string; // 0x8a PushT
	if(var_145_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_141:
	var_146_string = "all"; // 0x8d PushS
	var_147_string = "idle"; // 0x8e PushS
	PlayAnimation(var_146_string, var_147_string); // 0x8f Func
	goto Label_136; // 0x91 Jump
}


func_715(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png"; // 0x2cb MovS
	return 0; // 0x2cc Return
}


func_717(var_68_bool)
{
	var_68_bool = 0; // 0x2cd MovB
	return 0; // 0x2ce Return
}


func_591()
{
	var_150_bool = 0; var_151_bool = 0; // 0x24f PushV
	var_152_bool = 1; // 0x250 PushB
	CameraSwitchToNormal(var_152_bool); // 0x251 Func
	var_153_bool = 0; // 0x253 PushV
	func_717(var_153_bool); // 0x254 NEW_2
	if(var_153_bool == 0) goto Label_600; // 0x256 JumpB
	goto Label_608; // 0x257 Jump
	
Label_608:
	return 2; // 0x260 Return
	
Label_600:
	var_154_string = "head"; // 0x258 PushS
	HasAnimationTrack(var_151_bool, var_154_string); // 0x259 Func
	var_155_bool = var_151_bool; // 0x25b Push
	if(var_155_bool == 0) goto Label_608; // 0x25c JumpB
	var_156_string = "head"; // 0x25d PushS
	UnlookAsync(var_156_string); // 0x25e Func
}


func_719()
{
	var_51_string = "b11q02"; // 0x2d0 PushS
	var_52_int = 3; // 0x2d1 PushI
	SetVariable(var_51_string, var_52_int); // 0x2d2 Func
	var_53_bool = 0; var_54_string = ""; var_55_string = ""; // 0x2d4 PushV
	var_54_string = "quest_b11_02"; // 0x2d5 MovS
	var_55_string = "teleport"; // 0x2d6 MovS
	func_673(var_53_bool, var_54_string, var_55_string); // 0x2d7 NEW_2
	return 0; // 0x2d9 Return
}


func_344(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x159 PushV
	func_517(var_13_bool); // 0x15a NEW_2
	var_16_bool = var_13_bool == 0; // 0x15c Not
	if(var_16_bool == 0) goto Label_351; // 0x15d JumpB
	return 0; // 0x15e Return
	
Label_351:
	var_17_string = "player"; // 0x15f PushS
	FindActor(var_9_object, var_17_string); // 0x160 Func
	var_2_object = 0; // 0x162 TMovB
	var_3_string = 0; // 0x163 TMovB
	var_0_object = var_11_float; // 0x164 TMov
	var_1_object = var_12_float; // 0x165 TMov
	var_18_int = 10; // 0x166 PushI
	var_19_float = 1.0; // 0x167 PushF
	SetTimer(var_18_int, var_19_float); // 0x168 Func
	func_423(); // 0x16b NEW_2
	var_71_bool = var_3_string == 0; // 0x16d Not
	if(var_71_bool == 0) goto Label_370; // 0x16e JumpB
	var_72_int = 10; // 0x16f PushI
	KillTimer(var_72_int); // 0x170 Func
	
Label_370:
	return 0; // 0x172 Return
}


func_730()
{
	func_752(); // 0x2dc NEW_2
	var_41_bool = 0; var_42_string = ""; var_43_string = ""; // 0x2de PushV
	var_42_string = "quest_b11_02"; // 0x2df MovS
	var_43_string = "fail"; // 0x2e0 MovS
	func_673(var_41_bool, var_42_string, var_43_string); // 0x2e1 NEW_2
	return 0; // 0x2e3 Return
}


func_609(var_132_string)
{
	var_133_bool = 0; var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_float = 0; var_138_float = 0; // 0x261 PushV
	lshHasAnimation(var_136_bool, var_132_string); // 0x262 Func
	var_139_bool = var_136_bool; // 0x264 Push
	if(var_139_bool == 0) goto Label_620; // 0x265 JumpB
	lshGetAnimTimes(var_132_string, var_137_float, var_138_float); // 0x266 Func
	var_140_bool = 0; // 0x268 PushB
	lshPlayAnimation(var_137_float, var_138_float, var_140_bool); // 0x269 Func
	goto Label_624; // 0x26b Jump
	
Label_624:
	return 6; // 0x270 Return
	
Label_620:
	var_141_string = "Can't find lsh animation : "; // 0x26c PushS
	var_142_int = var_141_string + var_132_string; // 0x26d Add
	Trace(var_142_int); // 0x26e Func
}


func_740(var_111_bool)
{
	var_113_int = 0; var_114_string = ""; // 0x2e5 PushV
	var_114_string = "b11q02"; // 0x2e6 MovS
	func_668(var_113_int, var_114_string); // 0x2e7 NEW_2
	var_117_int = 2; // 0x2e9 PushI
	var_118_bool = var_113_int == var_117_int; // 0x2ea Eq
	if(var_118_bool == 0) goto Label_750; // 0x2eb JumpB
	var_111_bool = 1; // 0x2ec MovB
	return 0; // 0x2ed Return
	
Label_750:
	var_111_bool = 0; // 0x2ee MovB
	return 0; // 0x2ef Return
}


func_752()
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x2f0 PushV
	var_20_int = 610; // 0x2f1 PushI
	var_21_int = 2; // 0x2f2 PushI
	var_22_int = 531505; // 0x2f3 PushI
	CreateDiaryEntry(var_19_object, var_20_int, var_21_int, var_22_int); // 0x2f4 Func
	var_23_bool = 0; var_24_object = Obj(); var_25_int = 0; // 0x2f6 PushV
	var_24_object = var_19_object; // 0x2f7 Mov
	var_25_int = 598; // 0x2f8 MovI
	func_778(var_23_bool, var_24_object, var_25_int); // 0x2f9 NEW_2
	return 2; // 0x2fb Return
}


func_625(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x271 PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x272 Func
	var_107_bool = var_104_bool; // 0x274 Push
	if(var_107_bool == 0) goto Label_635; // 0x275 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x276 Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x278 Func
	goto Label_639; // 0x27a Jump
	
Label_639:
	return 6; // 0x27f Return
	
Label_635:
	var_108_string = "Can't find lsh animation : "; // 0x27b PushS
	var_109_int = var_108_string + var_97_string; // 0x27c Add
	Trace(var_109_int); // 0x27d Func
}


func_371(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x173 PushV
	var_16_bool = var_4_bool == 0; // 0x174 NullEq
	if(var_16_bool == 0) goto Label_376; // 0x175 JumpB
	var_13_bool = 0; // 0x176 MovB
	return 2; // 0x177 Return
	
Label_376:
	var_17_float = 0; var_18_object = Obj(); // 0x178 PushV
	var_18_object = var_4_bool; // 0x179 MovT
	func_509(var_18_object); // 0x17a NEW_2
	var_15_float = sqrt(var_17_float); // 0x17c Sqrt2
	var_25_object = var_2_object; // 0x17d PushT
	if(var_25_object == 0) goto Label_384; // 0x17e JumpB
	var_15_float = var_15_float - var_1_object; // 0x17f Sub2
	
Label_384:
	var_13_bool = var_15_float < var_0_object; // 0x180 LT2
	return 2; // 0x181 Return
}


func_502(var_61_bool)
{
	var_61_bool = 1; // 0x1f6 MovB
	return 0; // 0x1f7 Return
}


func_504()
{
	StopAnimation(); // 0x1f8 Func
	StopGroup0(); // 0x1fa Func
	return 0; // 0x1fc Return
}


func_765(var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x2fd PushV
	GetDiaryRoot(var_34_object); // 0x2fe Func
	var_35_bool = var_34_object == 0; // 0x300 Not
	if(var_35_bool == 0) goto Label_775; // 0x301 JumpB
	var_36_string = "Can't retrieve diary root"; // 0x302 PushS
	Trace(var_36_string); // 0x303 Func
	var_32_object = 0; // 0x305 MovB
	return 2; // 0x306 Return
	
Label_775:
	var_32_object = var_34_object; // 0x307 Mov
	return 2; // 0x308 Return
}


