task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xa0 PushI
	if(var_14_int == 0) goto Label_300; // 0xa1 JumpB
	func_694(); // 0xa3 NEW_2
	var_16_int = 31833; // 0xa5 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xa6 Eq
	if(var_17_bool == 0) goto Label_173; // 0xa7 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xa8 PushV
	var_18_object = var_1_object; // 0xa9 MovT
	var_19_object = var_0_object; // 0xaa MovT
	func_756(); // 0xab NEW_2
	
Label_173:
	var_22_int = 31832; // 0xad PushI
	var_23_bool = var_12_bool == var_22_int; // 0xae Eq
	if(var_23_bool == 0) goto Label_201; // 0xaf JumpB
	var_24_string = ""; // 0xb0 PushV
	var_24_string = "Neutral"; // 0xb1 MovS
	func_137(var_13_bool, var_24_string); // 0xb2 NEW_2
	var_41_int = 530466; // 0xb4 PushI
	SetMessage(var_41_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_42_bool = 0; var_43_object = Obj(); // 0xb9 PushV
	var_43_object = var_1_object; // 0xba MovT
	func_762(var_43_object); // 0xbb NEW_2
	if(var_42_bool == 0) goto Label_195; // 0xbd JumpB
	var_50_int = 530467; // 0xbe PushI
	var_51_int = 32813; // 0xbf PushI
	var_52_int = 31833; // 0xc0 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xc1 TObjFunc
	
Label_195:
	var_53_int = 530470; // 0xc3 PushI
	var_54_int = -1; // 0xc4 PushI
	var_55_int = 31836; // 0xc5 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_56_int = 32813; // 0xc9 PushI
	var_57_bool = var_12_bool == var_56_int; // 0xca Eq
	if(var_57_bool == 0) goto Label_229; // 0xcb JumpB
	var_58_string = ""; // 0xcc PushV
	var_58_string = "Neutral"; // 0xcd MovS
	func_137(var_13_bool, var_58_string); // 0xce NEW_2
	var_59_int = 531463; // 0xd0 PushI
	SetMessage(var_59_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_60_int = 531468; // 0xd5 PushI
	var_61_int = 32819; // 0xd6 PushI
	var_62_int = 32818; // 0xd7 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xd8 TObjFunc
	var_63_int = 531464; // 0xda PushI
	var_64_int = 31834; // 0xdb PushI
	var_65_int = 32814; // 0xdc PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xdd TObjFunc
	var_66_int = 531465; // 0xdf PushI
	var_67_int = 32816; // 0xe0 PushI
	var_68_int = 32815; // 0xe1 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xe2 TObjFunc
	return 0; // 0xe4 Return
	
Label_229:
	var_69_int = 32816; // 0xe5 PushI
	var_70_bool = var_12_bool == var_69_int; // 0xe6 Eq
	if(var_70_bool == 0) goto Label_247; // 0xe7 JumpB
	var_71_string = ""; // 0xe8 PushV
	var_71_string = "Neutral"; // 0xe9 MovS
	func_137(var_13_bool, var_71_string); // 0xea NEW_2
	var_72_int = 531466; // 0xec PushI
	SetMessage(var_72_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_73_int = 531467; // 0xf1 PushI
	var_74_int = 32819; // 0xf2 PushI
	var_75_int = 32817; // 0xf3 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xf4 TObjFunc
	return 0; // 0xf6 Return
	
Label_247:
	var_76_int = 32819; // 0xf7 PushI
	var_77_bool = var_12_bool == var_76_int; // 0xf8 Eq
	if(var_77_bool == 0) goto Label_265; // 0xf9 JumpB
	var_78_string = ""; // 0xfa PushV
	var_78_string = "Neutral"; // 0xfb MovS
	func_137(var_13_bool, var_78_string); // 0xfc NEW_2
	var_79_int = 531469; // 0xfe PushI
	SetMessage(var_79_int); // 0xff TObjFunc
	ClearReplies(); // 0x101 TObjFunc
	var_80_int = 531470; // 0x103 PushI
	var_81_int = -1; // 0x104 PushI
	var_82_int = 32820; // 0x105 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x106 TObjFunc
	return 0; // 0x108 Return
	
Label_265:
	var_83_int = 31834; // 0x109 PushI
	var_84_bool = var_12_bool == var_83_int; // 0x10a Eq
	if(var_84_bool == 0) goto Label_288; // 0x10b JumpB
	var_85_string = ""; // 0x10c PushV
	var_85_string = "Neutral"; // 0x10d MovS
	func_137(var_13_bool, var_85_string); // 0x10e NEW_2
	var_86_int = 530468; // 0x110 PushI
	SetMessage(var_86_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_87_int = 530469; // 0x115 PushI
	var_88_int = -1; // 0x116 PushI
	var_89_int = 31835; // 0x117 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x118 TObjFunc
	var_90_int = 531471; // 0x11a PushI
	var_91_int = -1; // 0x11b PushI
	var_92_int = 32822; // 0x11c PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_3_string = 1; // 0x120 TMovB
	var_93_bool = 0; // 0x121 PushV
	func_754(var_93_bool); // 0x122 NEW_2
	if(var_93_bool == 0) goto Label_296; // 0x124 JumpB
	lshStopAnimation(); // 0x125 Func
	goto Label_298; // 0x127 Jump
	
Label_298:
	return 0; // 0x12a Return
	
Label_296:
	StopAnimation(); // 0x128 Func
	
Label_300:
	return 0; // 0x12c Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_452(var_11_bool, var_12_object); // 0x135 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x137 PushV
	var_17_object = var_12_object; // 0x138 Mov
	TaskCall(0); // 0x139 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x13a NEW_2
	TaskReturn(); // 0x13b TaskReturn
	return 0; // 0x13d Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x165 PushS
	var_14_bool = var_12_string == var_13_string; // 0x166 Eq
	if(var_14_bool == 0) goto Label_363; // 0x167 JumpB
	func_336(var_12_string); // 0x169 NEW_2
	
Label_363:
	return 0; // 0x16b Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x16c PushT
	if(var_12_int == 0) goto Label_369; // 0x16d JumpB
	func_452(var_10_bool, var_11_bool); // 0x16f NEW_2
	
Label_369:
	var_16_bool = 0; // 0x171 PushV
	var_16_bool = 0; // 0x172 MovB
	var_17_int = var_5_int; // 0x173 PushT
	if(var_17_int == 0) goto Label_378; // 0x174 JumpB
	var_18_bool = 0; // 0x175 PushV
	func_385(var_18_bool); // 0x176 NEW_2
	if(var_18_bool == 0) goto Label_378; // 0x178 JumpB
	var_16_bool = 1; // 0x179 MovB
	
Label_378:
	if(var_16_bool == 0) goto Label_384; // 0x17a JumpB
	var_19_object = Obj(); // 0x17b PushV
	func_701(var_19_object); // 0x17c NEW_2
	RemoveActor(var_19_object); // 0x17e Func
	
Label_384:
	return 0; // 0x180 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1ae PushI
	var_14_bool = var_12_int == var_13_int; // 0x1af Eq
	if(var_14_bool == 0) goto Label_451; // 0x1b0 JumpB
	var_15_bool = 0; // 0x1b1 PushV
	func_414(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1b2 NEW_2
	if(var_15_bool == 0) goto Label_445; // 0x1b4 JumpB
	var_28_bool = var_2_object == 0; // 0x1b5 Not
	if(var_28_bool == 0) goto Label_444; // 0x1b6 JumpB
	var_29_object = Obj(); // 0x1b7 PushV
	var_29_object = var_4_bool; // 0x1b8 MovT
	func_683(var_29_object); // 0x1b9 NEW_2
	var_2_object = 1; // 0x1bb TMovB
	
Label_444:
	goto Label_451; // 0x1bc Jump
	
Label_451:
	return 0; // 0x1c3 Return
	
Label_445:
	var_36_object = var_2_object; // 0x1bd PushT
	if(var_36_object == 0) goto Label_451; // 0x1be JumpB
	var_37_string = "head"; // 0x1bf PushS
	UnlookAsync(var_37_string); // 0x1c0 Func
	var_2_object = 0; // 0x1c2 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x12d PushV
	var_12_float = 300; // 0x12e MovI
	var_13_float = 100; // 0x12f MovI
	func_318(var_11_bool, var_12_float, var_13_float); // 0x130 NEW_2
	return 0; // 0x132 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_565(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_748(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_746(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_750(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_752(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_774(var_79_int); // 0x22 NEW_2
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
	func_634(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_385(var_18_bool)
{
	var_18_bool = 1; // 0x181 MovB
	return 0; // 0x182 Return
}


func_387(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x184 PushV
	func_560(var_23_bool); // 0x185 NEW_2
	var_26_bool = var_23_bool == 0; // 0x187 Not
	if(var_26_bool == 0) goto Label_394; // 0x188 JumpB
	return 0; // 0x189 Return
	
Label_394:
	var_27_string = "player"; // 0x18a PushS
	FindActor(var_17_bool, var_27_string); // 0x18b Func
	var_2_object = 0; // 0x18d TMovB
	var_3_string = 0; // 0x18e TMovB
	var_0_object = var_21_float; // 0x18f TMov
	var_1_object = var_22_float; // 0x190 TMov
	var_28_int = 10; // 0x191 PushI
	var_29_float = 1.0; // 0x192 PushF
	SetTimer(var_28_int, var_29_float); // 0x193 Func
	func_466(); // 0x196 NEW_2
	var_81_bool = var_3_string == 0; // 0x198 Not
	if(var_81_bool == 0) goto Label_413; // 0x199 JumpB
	var_82_int = 10; // 0x19a PushI
	KillTimer(var_82_int); // 0x19b Func
	
Label_413:
	return 0; // 0x19d Return
}


func_774(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x306 PushV
	var_82_string = "branch"; // 0x307 PushS
	GetVariable(var_82_string, var_81_int); // 0x308 Func
	var_83_int = 0; // 0x30a PushI
	var_84_bool = var_81_int == var_83_int; // 0x30b Eq
	if(var_84_bool == 0) goto Label_784; // 0x30c JumpB
	var_79_int = 1; // 0x30d MovI
	return 2; // 0x30e Return
	
Label_784:
	var_85_int = 1; // 0x310 PushI
	var_86_bool = var_81_int == var_85_int; // 0x311 Eq
	if(var_86_bool == 0) goto Label_789; // 0x312 JumpB
	var_79_int = 2; // 0x313 MovI
	return 2; // 0x314 Return
	
Label_789:
	var_79_int = 3; // 0x315 MovI
	return 2; // 0x316 Return
}


func_137(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0x8a PushV
	func_754(var_96_bool); // 0x8b NEW_2
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
	func_668(var_99_string, var_100_bool); // 0x9b NEW_2
	var_2_object = var_95_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_100_bool = 1; // 0x9a MovB
}


func_652(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0; // 0x28c PushV
	lshHasAnimation(var_133_bool, var_129_string); // 0x28d Func
	var_136_bool = var_133_bool; // 0x28f Push
	if(var_136_bool == 0) goto Label_663; // 0x290 JumpB
	lshGetAnimTimes(var_129_string, var_134_float, var_135_float); // 0x291 Func
	var_137_bool = 0; // 0x293 PushB
	lshPlayAnimation(var_134_float, var_135_float, var_137_bool); // 0x294 Func
	goto Label_667; // 0x296 Jump
	
Label_667:
	return 6; // 0x29b Return
	
Label_663:
	var_138_string = "Can't find lsh animation : "; // 0x297 PushS
	var_139_int = var_138_string + var_129_string; // 0x298 Add
	Trace(var_139_int); // 0x299 Func
}


func_668(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x29c PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x29d Func
	var_109_bool = var_106_bool; // 0x29f Push
	if(var_109_bool == 0) goto Label_678; // 0x2a0 JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x2a1 Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x2a3 Func
	goto Label_682; // 0x2a5 Jump
	
Label_682:
	return 6; // 0x2aa Return
	
Label_678:
	var_110_string = "Can't find lsh animation : "; // 0x2a6 PushS
	var_111_int = var_110_string + var_99_string; // 0x2a7 Add
	Trace(var_111_int); // 0x2a8 Func
}


func_414(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x19e PushV
	var_18_bool = var_4_bool == 0; // 0x19f NullEq
	if(var_18_bool == 0) goto Label_419; // 0x1a0 JumpB
	var_15_bool = 0; // 0x1a1 MovB
	return 2; // 0x1a2 Return
	
Label_419:
	var_19_float = 0; var_20_object = Obj(); // 0x1a3 PushV
	var_20_object = var_4_bool; // 0x1a4 MovT
	func_552(var_20_object); // 0x1a5 NEW_2
	var_17_float = sqrt(var_19_float); // 0x1a7 Sqrt2
	var_27_object = var_2_object; // 0x1a8 PushT
	if(var_27_object == 0) goto Label_427; // 0x1a9 JumpB
	var_17_float = var_17_float - var_1_object; // 0x1aa Sub2
	
Label_427:
	var_15_bool = var_17_float < var_0_object; // 0x1ab LT2
	return 2; // 0x1ac Return
}


func_545(var_71_bool)
{
	var_71_bool = 1; // 0x221 MovB
	return 0; // 0x222 Return
}


func_547()
{
	StopAnimation(); // 0x223 Func
	StopGroup0(); // 0x225 Func
	return 0; // 0x227 Return
}


func_552(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x228 PushV
	GetPosition(var_24_cvector); // 0x229 Func
	GetPosition(var_25_cvector); // 0x22b ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x22d Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x22e Or2
	return 6; // 0x22f Return
}


func_683(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2ab PushV
	GetEyesHeight(var_32_float); // 0x2ac ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2ae MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2af PushE
	var_34_float = var_32_float; // 0x2b0 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x2b1 PopE
	var_35_string = "head"; // 0x2b2 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x2b3 Func
	return 4; // 0x2b5 Return
}


func_560(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x230 PushV
	IsLoaded(var_25_bool); // 0x231 Func
	var_23_bool = var_25_bool; // 0x233 Mov
	return 2; // 0x234 Return
}


func_565(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x235 PushV
	GetPosition(var_40_cvector); // 0x236 ObjFunc
	GetEyesHeight(var_39_float); // 0x238 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x23a PushE
	var_48_float = var_48_float + var_39_float; // 0x23b Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x23c PopE
	GetPosition(var_41_cvector); // 0x23d Func
	GetEyesHeight(var_39_float); // 0x23f Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x241 PushE
	var_49_float = var_49_float + var_39_float; // 0x242 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x243 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x244 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x245 PushE
	var_50_float = 0; // 0x246 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x247 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x248 Or
	var_52_float = sqrt(var_51_int); // 0x249 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x24a Div2
	var_43_cvector = -var_42_cvector; // 0x24b Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x24c Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x24d PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x24e PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x24f Xor2
	func_707(var_54_cvector, var_55_cvector); // 0x250 NEW_2
	var_62_int = 25; // 0x252 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x253 Mult
	var_64_int = var_53_float + var_63_float; // 0x254 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x255 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x256 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x257 Add2
	IsOverrideActive(var_46_bool); // 0x258 Func
	var_66_bool = var_46_bool; // 0x25a Push
	if(var_66_bool == 0) goto Label_606; // 0x25b JumpB
	var_27_bool = 0; // 0x25c MovB
	return 18; // 0x25d Return
	
Label_606:
	StopWorld(); // 0x25e Func
	var_67_bool = 1; // 0x260 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x261 Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x263 PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x264 PushE
	Rotate(var_68_float, var_69_float); // 0x265 Func
	var_70_bool = 0; // 0x267 PushV
	func_754(var_70_bool); // 0x268 NEW_2
	if(var_70_bool == 0) goto Label_620; // 0x26a JumpB
	goto Label_628; // 0x26b Jump
	
Label_628:
	CameraWaitForPlayFinish(); // 0x274 Func
	ResumeWorld(); // 0x276 Func
	var_27_bool = 1; // 0x278 MovB
	return 18; // 0x279 Return
	
Label_620:
	var_71_string = "head"; // 0x26c PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x26d Func
	var_72_bool = var_47_bool; // 0x26f Push
	if(var_72_bool == 0) goto Label_628; // 0x270 JumpB
	var_73_string = "head"; // 0x271 PushS
	LookAsyncCamera(var_73_string); // 0x272 Func
}


func_694()
{
	var_15_bool = 0; // 0x2b6 PushV
	func_754(var_15_bool); // 0x2b7 NEW_2
	if(var_15_bool == 0) goto Label_700; // 0x2b9 JumpB
	lshStopSpeech(); // 0x2ba Func
	
Label_700:
	return 0; // 0x2bc Return
}


func_701(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2bd PushV
	self(var_21_object); // 0x2be Func
	var_19_object = var_21_object; // 0x2c0 Mov
	return 2; // 0x2c1 Return
}


func_318(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x13e PushV
	var_6_int = 0; // 0x13f TMovB
	
Label_320:
	var_18_int = 3; // 0x140 PushI
	rand(var_16_float, var_18_int); // 0x141 Func
	var_19_int = 3; // 0x143 PushI
	var_20_int = var_16_float + var_19_int; // 0x144 Add
	Sleep(var_20_int, var_17_bool); // 0x145 Func
	var_6_int = 1; // 0x147 TMovB
	var_21_float = 0; var_22_float = 0; // 0x148 PushV
	var_21_float = var_12_float; // 0x149 Mov
	var_22_float = var_13_float; // 0x14a Mov
	func_387(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x14b NEW_2
	var_6_int = 0; // 0x14d TMovB
	goto Label_320; // 0x14e Jump
}


func_707(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x2c3 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x2c4 Or
	var_58_float = sqrt(var_59_int); // 0x2c5 Sqrt2
	var_60_float = 0.0; // 0x2c6 PushF
	var_61_bool = var_58_float < var_60_float; // 0x2c7 LT
	if(var_61_bool == 0) goto Label_715; // 0x2c8 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x2c9 MovV
	return 2; // 0x2ca Return
	
Label_715:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x2cb Div2
	return 2; // 0x2cc Return
}


func_452(var_2_object, var_3_string)
{
	func_547(); // 0x1c5 NEW_2
	var_13_int = 10; // 0x1c7 PushI
	KillTimer(var_13_int); // 0x1c8 Func
	var_14_object = var_2_object; // 0x1ca PushT
	if(var_14_object == 0) goto Label_464; // 0x1cb JumpB
	var_15_string = "head"; // 0x1cc PushS
	UnlookAsync(var_15_string); // 0x1cd Func
	var_2_object = 0; // 0x1cf TMovB
	
Label_464:
	var_3_string = 1; // 0x1d0 TMovB
	return 0; // 0x1d1 Return
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
	var_112_int = 530466; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_bool = 0; var_114_object = Obj(); // 0x59 PushV
	var_114_object = var_1_object; // 0x5a MovT
	func_762(var_114_object); // 0x5b NEW_2
	if(var_113_bool == 0) goto Label_99; // 0x5d JumpB
	var_121_int = 530467; // 0x5e PushI
	var_122_int = 32813; // 0x5f PushI
	var_123_int = 31833; // 0x60 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x61 TObjFunc
	
Label_99:
	var_124_int = 530470; // 0x63 PushI
	var_125_int = -1; // 0x64 PushI
	var_126_int = 31836; // 0x65 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_127_bool = 0; // 0x6b PushV
	func_754(var_127_bool); // 0x6c NEW_2
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
	func_652(var_129_string); // 0x76 NEW_2
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


func_717(var_115_int, var_116_string)
{
	var_117_int = 0; var_118_int = 0; // 0x2cd PushV
	GetVariable(var_116_string, var_118_int); // 0x2ce Func
	var_115_int = var_118_int; // 0x2d0 Mov
	return 2; // 0x2d1 Return
}


func_336(var_5_int)
{
	var_5_int = 1; // 0x150 TMovB
	var_15_bool = 0; // 0x151 PushV
	var_15_bool = 0; // 0x152 MovB
	var_16_bool = 0; // 0x153 PushV
	func_560(var_16_bool); // 0x154 NEW_2
	var_19_bool = var_16_bool == 0; // 0x156 Not
	if(var_19_bool == 0) goto Label_349; // 0x157 JumpB
	var_20_bool = 0; // 0x158 PushV
	func_385(var_20_bool); // 0x159 NEW_2
	if(var_20_bool == 0) goto Label_349; // 0x15b JumpB
	var_15_bool = 1; // 0x15c MovB
	
Label_349:
	if(var_15_bool == 0) goto Label_355; // 0x15d JumpB
	var_21_object = Obj(); // 0x15e PushV
	func_701(var_21_object); // 0x15f NEW_2
	RemoveActor(var_21_object); // 0x161 Func
	
Label_355:
	return 0; // 0x163 Return
}


func_466()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x1d2 PushV
	WaitForAnimEnd(); // 0x1d3 Func
	var_44_bool = 0; // 0x1d5 PushV
	func_560(var_44_bool); // 0x1d6 NEW_2
	var_45_bool = var_44_bool == 0; // 0x1d8 Not
	if(var_45_bool == 0) goto Label_475; // 0x1d9 JumpB
	return 14; // 0x1da Return
	
Label_475:
	var_46_int = 0; // 0x1db PushV
	func_729(var_46_int); // 0x1dc NEW_2
	var_37_int = var_46_int; // 0x1dd Mov
	var_38_int = 0; // 0x1df MovI
	
Label_480:
	var_59_bool = 0; // 0x1e0 PushV
	var_59_bool = 0; // 0x1e1 MovB
	var_60_int = 5; // 0x1e2 PushI
	var_61_bool = var_38_int < var_60_int; // 0x1e3 LT
	if(var_61_bool == 0) goto Label_490; // 0x1e4 JumpB
	var_62_bool = 0; // 0x1e5 PushV
	func_560(var_62_bool); // 0x1e6 NEW_2
	if(var_62_bool == 0) goto Label_490; // 0x1e8 JumpB
	var_59_bool = 1; // 0x1e9 MovB
	
Label_490:
	if(var_59_bool == 0) goto Label_542; // 0x1ea JumpB
	var_63_int = 3; // 0x1eb PushI
	irand(var_39_int, var_63_int); // 0x1ec Func
	var_64_int = 0; // 0x1ee PushI
	var_65_bool = var_39_int == var_64_int; // 0x1ef Eq
	if(var_65_bool == 0) goto Label_514; // 0x1f0 JumpB
	var_66_int = var_37_int; // 0x1f1 Push
	if(var_66_int == 0) goto Label_513; // 0x1f2 JumpB
	irand(var_40_int, var_37_int); // 0x1f3 Func
	var_67_string = "all"; // 0x1f5 PushS
	var_68_string = ""; var_69_int = 0; // 0x1f6 PushV
	var_69_int = var_40_int; // 0x1f7 Mov
	func_722(var_68_string, var_69_int); // 0x1f8 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x1fa Func
	WaitForAnimEnd(var_41_bool); // 0x1fc Func
	var_70_bool = var_41_bool == 0; // 0x1fe Not
	if(var_70_bool == 0) goto Label_513; // 0x1ff JumpB
	goto Label_542; // 0x200 Jump
	
Label_542:
	ResetAAS(); // 0x21e Func
	return 14; // 0x220 Return
	
Label_513:
	goto Label_531; // 0x201 Jump
	
Label_531:
	var_71_bool = 0; // 0x213 PushV
	func_545(var_71_bool); // 0x214 NEW_2
	var_72_bool = var_71_bool == 0; // 0x216 Not
	if(var_72_bool == 0) goto Label_537; // 0x217 JumpB
	goto Label_542; // 0x218 Jump
	
Label_537:
	ResetAAS(); // 0x219 Func
	var_73_int = 1; // 0x21b PushI
	var_38_int = var_38_int + var_73_int; // 0x21c Add2
	goto Label_480; // 0x21d Jump
	
Label_514:
	var_74_int = 1; // 0x202 PushI
	var_75_bool = var_39_int == var_74_int; // 0x203 Eq
	if(var_75_bool == 0) goto Label_528; // 0x204 JumpB
	var_76_int = 4; // 0x205 PushI
	rand(var_42_float, var_76_int); // 0x206 Func
	var_77_int = 1; // 0x208 PushI
	var_78_int = var_42_float + var_77_int; // 0x209 Add
	Sleep(var_78_int, var_43_bool); // 0x20a Func
	var_79_bool = var_43_bool == 0; // 0x20c Not
	if(var_79_bool == 0) goto Label_527; // 0x20d JumpB
	goto Label_542; // 0x20e Jump
	
Label_527:
	goto Label_531; // 0x20f Jump
	
Label_528:
	var_80_int = var_38_int; // 0x210 Push
	if(var_80_int == 0) goto Label_531; // 0x211 JumpB
	goto Label_542; // 0x212 Jump
}


func_722(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x2d2 PushV
	var_55_string = "idle"; // 0x2d3 MovS
	var_56_int = var_53_int; // 0x2d4 Push
	if(var_56_int == 0) goto Label_727; // 0x2d5 JumpB
	var_55_string = var_55_string + var_53_int; // 0x2d6 Add2
	
Label_727:
	var_52_string = var_55_string; // 0x2d7 Mov
	return 2; // 0x2d8 Return
}


func_729(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x2d9 PushV
	var_49_int = 0; // 0x2da MovI
	
Label_731:
	var_51_string = "all"; // 0x2db PushS
	var_52_string = ""; var_53_int = 0; // 0x2dc PushV
	var_53_int = var_49_int; // 0x2dd Mov
	func_722(var_52_string, var_53_int); // 0x2de NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x2e0 Func
	var_57_bool = var_50_bool == 0; // 0x2e2 Not
	if(var_57_bool == 0) goto Label_741; // 0x2e3 JumpB
	goto Label_744; // 0x2e4 Jump
	
Label_744:
	var_46_int = var_49_int; // 0x2e8 Mov
	return 4; // 0x2e9 Return
	
Label_741:
	var_58_int = 1; // 0x2e5 PushI
	var_49_int = var_49_int + var_58_int; // 0x2e6 Add2
	goto Label_731; // 0x2e7 Jump
}


func_762(var_113_bool)
{
	var_115_int = 0; var_116_string = ""; // 0x2fb PushV
	var_116_string = "oob10Officer1"; // 0x2fc MovS
	func_717(var_115_int, var_116_string); // 0x2fd NEW_2
	var_119_int = 0; // 0x2ff PushI
	var_120_bool = var_115_int == var_119_int; // 0x300 Eq
	if(var_120_bool == 0) goto Label_772; // 0x301 JumpB
	var_113_bool = 1; // 0x302 MovB
	return 0; // 0x303 Return
	
Label_772:
	var_113_bool = 0; // 0x304 MovB
	return 0; // 0x305 Return
}


func_746(var_76_int)
{
	var_76_int = 515597; // 0x2ea MovI
	return 0; // 0x2eb Return
}


func_748(var_75_int)
{
	var_75_int = 514841; // 0x2ec MovI
	return 0; // 0x2ed Return
}


func_750(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png"; // 0x2ee MovS
	return 0; // 0x2ef Return
}


func_752(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png"; // 0x2f0 MovS
	return 0; // 0x2f1 Return
}


func_754(var_70_bool)
{
	var_70_bool = 0; // 0x2f2 MovB
	return 0; // 0x2f3 Return
}


func_756()
{
	var_20_string = "oob10Officer1"; // 0x2f5 PushS
	var_21_int = 1; // 0x2f6 PushI
	SetVariable(var_20_string, var_21_int); // 0x2f7 Func
	return 0; // 0x2f9 Return
}


func_634()
{
	var_147_bool = 0; var_148_bool = 0; // 0x27a PushV
	var_149_bool = 1; // 0x27b PushB
	CameraSwitchToNormal(var_149_bool); // 0x27c Func
	var_150_bool = 0; // 0x27e PushV
	func_754(var_150_bool); // 0x27f NEW_2
	if(var_150_bool == 0) goto Label_643; // 0x281 JumpB
	goto Label_651; // 0x282 Jump
	
Label_651:
	return 2; // 0x28b Return
	
Label_643:
	var_151_string = "head"; // 0x283 PushS
	HasAnimationTrack(var_148_bool, var_151_string); // 0x284 Func
	var_152_bool = var_148_bool; // 0x286 Push
	if(var_152_bool == 0) goto Label_651; // 0x287 JumpB
	var_153_string = "head"; // 0x288 PushS
	UnlookAsync(var_153_string); // 0x289 Func
}


