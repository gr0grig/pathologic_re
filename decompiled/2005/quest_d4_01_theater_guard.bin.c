task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xc8 PushI
	if(var_12_int == 0) goto Label_393; // 0xc9 JumpB
	func_720(); // 0xcb NEW_2
	var_14_int = 38060; // 0xcd PushI
	var_15_bool = var_11_object == var_14_int; // 0xce Eq
	if(var_15_bool == 0) goto Label_213; // 0xcf JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xd0 PushV
	var_16_object = var_1_object; // 0xd1 MovT
	var_17_object = var_0_object; // 0xd2 MovT
	func_766(); // 0xd3 NEW_2
	
Label_213:
	var_20_int = 38064; // 0xd5 PushI
	var_21_bool = var_11_object == var_20_int; // 0xd6 Eq
	if(var_21_bool == 0) goto Label_221; // 0xd7 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xd8 PushV
	var_22_object = var_1_object; // 0xd9 MovT
	var_23_object = var_0_object; // 0xda MovT
	func_772(); // 0xdb NEW_2
	
Label_221:
	var_26_int = 38059; // 0xdd PushI
	var_27_bool = var_10_bool == var_26_int; // 0xde Eq
	if(var_27_bool == 0) goto Label_289; // 0xdf JumpB
	var_28_bool = 0; // 0xe0 PushV
	var_28_bool = 0; // 0xe1 MovB
	var_29_bool = 0; var_30_object = Obj(); // 0xe2 PushV
	var_30_object = var_1_object; // 0xe3 MovT
	func_778(var_30_object); // 0xe4 NEW_2
	if(var_29_bool == 0) goto Label_238; // 0xe6 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0xe7 PushV
	var_38_object = var_1_object; // 0xe8 MovT
	func_790(var_38_object); // 0xe9 NEW_2
	var_43_bool = var_37_bool == 0; // 0xeb Not
	if(var_43_bool == 0) goto Label_238; // 0xec JumpB
	var_28_bool = 1; // 0xed MovB
	
Label_238:
	if(var_28_bool == 0) goto Label_264; // 0xee JumpB
	var_44_string = ""; // 0xef PushV
	var_44_string = "Neutral"; // 0xf0 MovS
	func_177(var_11_object, var_44_string); // 0xf1 NEW_2
	var_61_int = 536275; // 0xf3 PushI
	SetMessage(var_61_int); // 0xf4 TObjFunc
	ClearReplies(); // 0xf6 TObjFunc
	var_62_bool = 0; var_63_object = Obj(); // 0xf8 PushV
	var_63_object = var_1_object; // 0xf9 MovT
	func_802(var_63_object); // 0xfa NEW_2
	if(var_62_bool == 0) goto Label_258; // 0xfc JumpB
	var_68_int = 536276; // 0xfd PushI
	var_69_int = 38085; // 0xfe PushI
	var_70_int = 38060; // 0xff PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x100 TObjFunc
	
Label_258:
	var_71_int = 536300; // 0x102 PushI
	var_72_int = -1; // 0x103 PushI
	var_73_int = 38084; // 0x104 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x105 TObjFunc
	return 0; // 0x107 Return
	
Label_264:
	var_74_string = ""; // 0x108 PushV
	var_74_string = "Neutral"; // 0x109 MovS
	func_177(var_11_object, var_74_string); // 0x10a NEW_2
	var_75_int = 536279; // 0x10c PushI
	SetMessage(var_75_int); // 0x10d TObjFunc
	ClearReplies(); // 0x10f TObjFunc
	var_76_bool = 0; var_77_object = Obj(); // 0x111 PushV
	var_77_object = var_1_object; // 0x112 MovT
	func_814(var_77_object); // 0x113 NEW_2
	if(var_76_bool == 0) goto Label_283; // 0x115 JumpB
	var_82_int = 536280; // 0x116 PushI
	var_83_int = 38092; // 0x117 PushI
	var_84_int = 38064; // 0x118 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x119 TObjFunc
	
Label_283:
	var_85_int = 536283; // 0x11b PushI
	var_86_int = -1; // 0x11c PushI
	var_87_int = 38067; // 0x11d PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_88_int = 38092; // 0x121 PushI
	var_89_bool = var_10_bool == var_88_int; // 0x122 Eq
	if(var_89_bool == 0) goto Label_312; // 0x123 JumpB
	var_90_string = ""; // 0x124 PushV
	var_90_string = "Neutral"; // 0x125 MovS
	func_177(var_11_object, var_90_string); // 0x126 NEW_2
	var_91_int = 536308; // 0x128 PushI
	SetMessage(var_91_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_92_int = 536309; // 0x12d PushI
	var_93_int = 38065; // 0x12e PushI
	var_94_int = 38093; // 0x12f PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x130 TObjFunc
	var_95_int = 536310; // 0x132 PushI
	var_96_int = 38065; // 0x133 PushI
	var_97_int = 38094; // 0x134 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x135 TObjFunc
	return 0; // 0x137 Return
	
Label_312:
	var_98_int = 38065; // 0x138 PushI
	var_99_bool = var_10_bool == var_98_int; // 0x139 Eq
	if(var_99_bool == 0) goto Label_335; // 0x13a JumpB
	var_100_string = ""; // 0x13b PushV
	var_100_string = "Neutral"; // 0x13c MovS
	func_177(var_11_object, var_100_string); // 0x13d NEW_2
	var_101_int = 536281; // 0x13f PushI
	SetMessage(var_101_int); // 0x140 TObjFunc
	ClearReplies(); // 0x142 TObjFunc
	var_102_int = 536282; // 0x144 PushI
	var_103_int = -1; // 0x145 PushI
	var_104_int = 38066; // 0x146 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x147 TObjFunc
	var_105_int = 536307; // 0x149 PushI
	var_106_int = -1; // 0x14a PushI
	var_107_int = 38091; // 0x14b PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x14c TObjFunc
	return 0; // 0x14e Return
	
Label_335:
	var_108_int = 38085; // 0x14f PushI
	var_109_bool = var_10_bool == var_108_int; // 0x150 Eq
	if(var_109_bool == 0) goto Label_358; // 0x151 JumpB
	var_110_string = ""; // 0x152 PushV
	var_110_string = "Neutral"; // 0x153 MovS
	func_177(var_11_object, var_110_string); // 0x154 NEW_2
	var_111_int = 536301; // 0x156 PushI
	SetMessage(var_111_int); // 0x157 TObjFunc
	ClearReplies(); // 0x159 TObjFunc
	var_112_int = 536302; // 0x15b PushI
	var_113_int = 38088; // 0x15c PushI
	var_114_int = 38086; // 0x15d PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x15e TObjFunc
	var_115_int = 536303; // 0x160 PushI
	var_116_int = -1; // 0x161 PushI
	var_117_int = 38087; // 0x162 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x163 TObjFunc
	return 0; // 0x165 Return
	
Label_358:
	var_118_int = 38088; // 0x166 PushI
	var_119_bool = var_10_bool == var_118_int; // 0x167 Eq
	if(var_119_bool == 0) goto Label_381; // 0x168 JumpB
	var_120_string = ""; // 0x169 PushV
	var_120_string = "Neutral"; // 0x16a MovS
	func_177(var_11_object, var_120_string); // 0x16b NEW_2
	var_121_int = 536304; // 0x16d PushI
	SetMessage(var_121_int); // 0x16e TObjFunc
	ClearReplies(); // 0x170 TObjFunc
	var_122_int = 536305; // 0x172 PushI
	var_123_int = -1; // 0x173 PushI
	var_124_int = 38089; // 0x174 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x175 TObjFunc
	var_125_int = 536306; // 0x177 PushI
	var_126_int = -1; // 0x178 PushI
	var_127_int = 38090; // 0x179 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x17a TObjFunc
	return 0; // 0x17c Return
	
Label_381:
	var_3_string = 1; // 0x17d TMovB
	var_128_bool = 0; // 0x17e PushV
	func_851(var_128_bool); // 0x17f NEW_2
	if(var_128_bool == 0) goto Label_389; // 0x181 JumpB
	lshStopAnimation(); // 0x182 Func
	goto Label_391; // 0x184 Jump
	
Label_391:
	return 0; // 0x187 Return
	
Label_389:
	StopAnimation(); // 0x185 Func
	
Label_393:
	return 0; // 0x189 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_480(var_9_object, var_10_object); // 0x196 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x198 PushV
	var_15_object = var_10_object; // 0x199 Mov
	TaskCall(0); // 0x19a TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x19b NEW_2
	TaskReturn(); // 0x19c TaskReturn
	return 0; // 0x19e Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x1ca PushI
	var_12_bool = var_10_int == var_11_int; // 0x1cb Eq
	if(var_12_bool == 0) goto Label_479; // 0x1cc JumpB
	var_13_bool = 0; // 0x1cd PushV
	func_442(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x1ce NEW_2
	if(var_13_bool == 0) goto Label_473; // 0x1d0 JumpB
	var_26_bool = var_2_object == 0; // 0x1d1 Not
	if(var_26_bool == 0) goto Label_472; // 0x1d2 JumpB
	var_27_object = Obj(); // 0x1d3 PushV
	var_27_object = var_4_bool; // 0x1d4 MovT
	func_709(var_27_object); // 0x1d5 NEW_2
	var_2_object = 1; // 0x1d7 TMovB
	
Label_472:
	goto Label_479; // 0x1d8 Jump
	
Label_479:
	return 0; // 0x1df Return
	
Label_473:
	var_34_object = var_2_object; // 0x1d9 PushT
	if(var_34_object == 0) goto Label_479; // 0x1da JumpB
	var_35_string = "head"; // 0x1db PushS
	UnlookAsync(var_35_string); // 0x1dc Func
	var_2_object = 0; // 0x1de TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_394:
	var_10_int = 1; // 0x18a PushI
	Sleep(var_10_int); // 0x18b Func
	var_11_float = 0; var_12_float = 0; // 0x18d PushV
	var_11_float = 300; // 0x18e MovI
	var_12_float = 100; // 0x18f MovI
	func_415(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x190 NEW_2
	goto Label_394; // 0x192 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 130.0; // 0x4 MovF
	func_593(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_845(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_843(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_847(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_849(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_826(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_170_bool = var_24_bool == 0; // 0x38 Not
	if(var_170_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_171_object = Obj(); // 0x3f PushV
	var_171_object = var_15_object; // 0x40 Mov
	func_661(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_772()
{
	var_24_string = "ood4TheaterGuard2"; // 0x305 PushS
	var_25_int = 1; // 0x306 PushI
	SetVariable(var_24_string, var_25_int); // 0x307 Func
	return 0; // 0x309 Return
}


func_778(var_93_bool)
{
	var_95_int = 0; var_96_string = ""; // 0x30b PushV
	var_96_string = "d4q01KeyWhite"; // 0x30c MovS
	func_737(var_95_int, var_96_string); // 0x30d NEW_2
	var_99_int = 0; // 0x30f PushI
	var_100_bool = var_95_int != var_99_int; // 0x310 Neq
	if(var_100_bool == 0) goto Label_788; // 0x311 JumpB
	var_93_bool = 1; // 0x312 MovB
	return 0; // 0x313 Return
	
Label_788:
	var_93_bool = 0; // 0x314 MovB
	return 0; // 0x315 Return
}


func_661()
{
	var_172_bool = 0; var_173_bool = 0; // 0x295 PushV
	CameraSwitchToNormal(); // 0x296 Func
	var_174_bool = 0; // 0x298 PushV
	func_851(var_174_bool); // 0x299 NEW_2
	if(var_174_bool == 0) goto Label_669; // 0x29b JumpB
	goto Label_677; // 0x29c Jump
	
Label_677:
	return 2; // 0x2a5 Return
	
Label_669:
	var_175_string = "head"; // 0x29d PushS
	HasAnimationTrack(var_173_bool, var_175_string); // 0x29e Func
	var_176_bool = var_173_bool; // 0x2a0 Push
	if(var_176_bool == 0) goto Label_677; // 0x2a1 JumpB
	var_177_string = "head"; // 0x2a2 PushS
	UnlookAsync(var_177_string); // 0x2a3 Func
}


func_790(var_101_bool)
{
	var_103_int = 0; var_104_string = ""; // 0x317 PushV
	var_104_string = "d4q01"; // 0x318 MovS
	func_737(var_103_int, var_104_string); // 0x319 NEW_2
	var_105_int = 1000; // 0x31b PushI
	var_106_bool = var_103_int == var_105_int; // 0x31c Eq
	if(var_106_bool == 0) goto Label_800; // 0x31d JumpB
	var_101_bool = 1; // 0x31e MovB
	return 0; // 0x31f Return
	
Label_800:
	var_101_bool = 0; // 0x320 MovB
	return 0; // 0x321 Return
}


func_415(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x1a0 PushV
	func_588(var_13_bool); // 0x1a1 NEW_2
	var_16_bool = var_13_bool == 0; // 0x1a3 Not
	if(var_16_bool == 0) goto Label_422; // 0x1a4 JumpB
	return 0; // 0x1a5 Return
	
Label_422:
	var_17_string = "player"; // 0x1a6 PushS
	FindActor(var_9_object, var_17_string); // 0x1a7 Func
	var_2_object = 0; // 0x1a9 TMovB
	var_3_string = 0; // 0x1aa TMovB
	var_0_object = var_11_float; // 0x1ab TMov
	var_1_object = var_12_float; // 0x1ac TMov
	var_18_int = 10; // 0x1ad PushI
	var_19_float = 1.0; // 0x1ae PushF
	SetTimer(var_18_int, var_19_float); // 0x1af Func
	func_494(); // 0x1b2 NEW_2
	var_71_bool = var_3_string == 0; // 0x1b4 Not
	if(var_71_bool == 0) goto Label_441; // 0x1b5 JumpB
	var_72_int = 10; // 0x1b6 PushI
	KillTimer(var_72_int); // 0x1b7 Func
	
Label_441:
	return 0; // 0x1b9 Return
}


func_802(var_126_bool)
{
	var_128_int = 0; var_129_string = ""; // 0x323 PushV
	var_129_string = "ood4TheaterGuard1"; // 0x324 MovS
	func_737(var_128_int, var_129_string); // 0x325 NEW_2
	var_130_int = 0; // 0x327 PushI
	var_131_bool = var_128_int == var_130_int; // 0x328 Eq
	if(var_131_bool == 0) goto Label_812; // 0x329 JumpB
	var_126_bool = 1; // 0x32a MovB
	return 0; // 0x32b Return
	
Label_812:
	var_126_bool = 0; // 0x32c MovB
	return 0; // 0x32d Return
}


func_678(var_140_string)
{
	var_141_bool = 0; var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_float = 0; var_146_float = 0; // 0x2a6 PushV
	lshHasAnimation(var_144_bool, var_140_string); // 0x2a7 Func
	var_147_bool = var_144_bool; // 0x2a9 Push
	if(var_147_bool == 0) goto Label_689; // 0x2aa JumpB
	lshGetAnimTimes(var_140_string, var_145_float, var_146_float); // 0x2ab Func
	var_148_bool = 0; // 0x2ad PushB
	lshPlayAnimation(var_145_float, var_146_float, var_148_bool); // 0x2ae Func
	goto Label_693; // 0x2b0 Jump
	
Label_693:
	return 6; // 0x2b5 Return
	
Label_689:
	var_149_string = "Can't find lsh animation : "; // 0x2b1 PushS
	var_150_int = var_149_string + var_140_string; // 0x2b2 Add
	Trace(var_150_int); // 0x2b3 Func
}


func_814(var_158_bool)
{
	var_160_int = 0; var_161_string = ""; // 0x32f PushV
	var_161_string = "ood4TheaterGuard2"; // 0x330 MovS
	func_737(var_160_int, var_161_string); // 0x331 NEW_2
	var_162_int = 0; // 0x333 PushI
	var_163_bool = var_160_int == var_162_int; // 0x334 Eq
	if(var_163_bool == 0) goto Label_824; // 0x335 JumpB
	var_158_bool = 1; // 0x336 MovB
	return 0; // 0x337 Return
	
Label_824:
	var_158_bool = 0; // 0x338 MovB
	return 0; // 0x339 Return
}


func_177(var_2_object, var_108_string)
{
	var_109_bool = 0; // 0xb2 PushV
	func_851(var_109_bool); // 0xb3 NEW_2
	var_110_bool = var_109_bool == 0; // 0xb5 Not
	if(var_110_bool == 0) goto Label_184; // 0xb6 JumpB
	return 0; // 0xb7 Return
	
Label_184:
	var_111_bool = var_108_string == var_2_object; // 0xb8 Eq
	if(var_111_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_112_string = ""; var_113_bool = 0; // 0xbb PushV
	var_112_string = var_108_string; // 0xbc Mov
	var_114_string = ""; // 0xbd PushS
	var_115_bool = var_108_string == var_114_string; // 0xbe Eq
	if(var_115_bool == 0) goto Label_194; // 0xbf JumpB
	var_113_bool = 0; // 0xc0 MovB
	goto Label_195; // 0xc1 Jump
	
Label_195:
	func_694(var_112_string, var_113_bool); // 0xc3 NEW_2
	var_2_object = var_108_string; // 0xc5 TMov
	return 0; // 0xc6 Return
	
Label_194:
	var_113_bool = 1; // 0xc2 MovB
}


func_694(var_112_string, var_113_bool)
{
	var_116_bool = 0; var_117_float = 0; var_118_float = 0; var_119_bool = 0; var_120_float = 0; var_121_float = 0; // 0x2b6 PushV
	lshHasAnimation(var_119_bool, var_112_string); // 0x2b7 Func
	var_122_bool = var_119_bool; // 0x2b9 Push
	if(var_122_bool == 0) goto Label_704; // 0x2ba JumpB
	lshGetAnimTimes(var_112_string, var_120_float, var_121_float); // 0x2bb Func
	lshPlayAnimation(var_120_float, var_121_float, var_113_bool); // 0x2bd Func
	goto Label_708; // 0x2bf Jump
	
Label_708:
	return 6; // 0x2c4 Return
	
Label_704:
	var_123_string = "Can't find lsh animation : "; // 0x2c0 PushS
	var_124_int = var_123_string + var_112_string; // 0x2c1 Add
	Trace(var_124_int); // 0x2c2 Func
}


func_442(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x1ba PushV
	var_16_bool = var_4_bool == 0; // 0x1bb NullEq
	if(var_16_bool == 0) goto Label_447; // 0x1bc JumpB
	var_13_bool = 0; // 0x1bd MovB
	return 2; // 0x1be Return
	
Label_447:
	var_17_float = 0; var_18_object = Obj(); // 0x1bf PushV
	var_18_object = var_4_bool; // 0x1c0 MovT
	func_580(var_18_object); // 0x1c1 NEW_2
	var_15_float = sqrt(var_17_float); // 0x1c3 Sqrt2
	var_25_object = var_2_object; // 0x1c4 PushT
	if(var_25_object == 0) goto Label_455; // 0x1c5 JumpB
	var_15_float = var_15_float - var_1_object; // 0x1c6 Sub2
	
Label_455:
	var_13_bool = var_15_float < var_0_object; // 0x1c7 LT2
	return 2; // 0x1c8 Return
}


func_826(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x33a PushV
	var_79_string = "branch"; // 0x33b PushS
	GetVariable(var_79_string, var_78_int); // 0x33c Func
	var_80_int = 0; // 0x33e PushI
	var_81_bool = var_78_int == var_80_int; // 0x33f Eq
	if(var_81_bool == 0) goto Label_836; // 0x340 JumpB
	var_76_int = 1; // 0x341 MovI
	return 2; // 0x342 Return
	
Label_836:
	var_82_int = 1; // 0x344 PushI
	var_83_bool = var_78_int == var_82_int; // 0x345 Eq
	if(var_83_bool == 0) goto Label_841; // 0x346 JumpB
	var_76_int = 2; // 0x347 MovI
	return 2; // 0x348 Return
	
Label_841:
	var_76_int = 3; // 0x349 MovI
	return 2; // 0x34a Return
}


func_573(var_61_bool)
{
	var_61_bool = 1; // 0x23d MovB
	return 0; // 0x23e Return
}


func_575()
{
	StopAnimation(); // 0x23f Func
	StopGroup0(); // 0x241 Func
	return 0; // 0x243 Return
}


func_580(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x244 PushV
	GetPosition(var_22_cvector); // 0x245 Func
	GetPosition(var_23_cvector); // 0x247 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x249 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x24a Or2
	return 6; // 0x24b Return
}


func_709(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x2c5 PushV
	GetEyesHeight(var_30_float); // 0x2c6 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x2c8 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x2c9 PushE
	var_32_float = var_30_float; // 0x2ca Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x2cb PopE
	var_33_string = "head"; // 0x2cc PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x2cd Func
	return 4; // 0x2cf Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_147; // 0x4f JumpB
	var_92_bool = 0; // 0x50 PushV
	var_92_bool = 0; // 0x51 MovB
	var_93_bool = 0; var_94_object = Obj(); // 0x52 PushV
	var_94_object = var_1_object; // 0x53 MovT
	func_778(var_94_object); // 0x54 NEW_2
	if(var_93_bool == 0) goto Label_94; // 0x56 JumpB
	var_101_bool = 0; var_102_object = Obj(); // 0x57 PushV
	var_102_object = var_1_object; // 0x58 MovT
	func_790(var_102_object); // 0x59 NEW_2
	var_107_bool = var_101_bool == 0; // 0x5b Not
	if(var_107_bool == 0) goto Label_94; // 0x5c JumpB
	var_92_bool = 1; // 0x5d MovB
	
Label_94:
	if(var_92_bool == 0) goto Label_120; // 0x5e JumpB
	var_108_string = ""; // 0x5f PushV
	var_108_string = "Neutral"; // 0x60 MovS
	func_177(var_86_object, var_108_string); // 0x61 NEW_2
	var_125_int = 536275; // 0x63 PushI
	SetMessage(var_125_int); // 0x64 TObjFunc
	ClearReplies(); // 0x66 TObjFunc
	var_126_bool = 0; var_127_object = Obj(); // 0x68 PushV
	var_127_object = var_1_object; // 0x69 MovT
	func_802(var_127_object); // 0x6a NEW_2
	if(var_126_bool == 0) goto Label_114; // 0x6c JumpB
	var_132_int = 536276; // 0x6d PushI
	var_133_int = 38085; // 0x6e PushI
	var_134_int = 38060; // 0x6f PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x70 TObjFunc
	
Label_114:
	var_135_int = 536300; // 0x72 PushI
	var_136_int = -1; // 0x73 PushI
	var_137_int = 38084; // 0x74 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x75 TObjFunc
	goto Label_147; // 0x77 Jump
	
Label_147:
	var_138_bool = 0; // 0x93 PushV
	func_851(var_138_bool); // 0x94 NEW_2
	if(var_138_bool == 0) goto Label_162; // 0x96 JumpB
	
Label_151:
	lshWaitForAnimEnd(); // 0x97 Func
	var_139_string = var_3_string; // 0x99 PushT
	if(var_139_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_161:
	goto Label_176; // 0xa1 Jump
	
Label_176:
	return 0; // 0xb0 Return
	
Label_156:
	var_140_string = ""; // 0x9c PushV
	var_140_string = var_2_object; // 0x9d MovT
	func_678(var_140_string); // 0x9e NEW_2
	goto Label_151; // 0xa0 Jump
	
Label_162:
	var_151_string = "all"; // 0xa2 PushS
	var_152_string = "idle"; // 0xa3 PushS
	PlayAnimation(var_151_string, var_152_string); // 0xa4 Func
	
Label_166:
	WaitForAnimEnd(); // 0xa6 Func
	var_153_string = var_3_string; // 0xa8 PushT
	if(var_153_string == 0) goto Label_171; // 0xa9 JumpB
	goto Label_176; // 0xaa Jump
	
Label_171:
	var_154_string = "all"; // 0xab PushS
	var_155_string = "idle"; // 0xac PushS
	PlayAnimation(var_154_string, var_155_string); // 0xad Func
	goto Label_166; // 0xaf Jump
	
Label_120:
	var_156_string = ""; // 0x78 PushV
	var_156_string = "Neutral"; // 0x79 MovS
	func_177(var_86_object, var_156_string); // 0x7a NEW_2
	var_157_int = 536279; // 0x7c PushI
	SetMessage(var_157_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_158_bool = 0; var_159_object = Obj(); // 0x81 PushV
	var_159_object = var_1_object; // 0x82 MovT
	func_814(var_159_object); // 0x83 NEW_2
	if(var_158_bool == 0) goto Label_139; // 0x85 JumpB
	var_164_int = 536280; // 0x86 PushI
	var_165_int = 38092; // 0x87 PushI
	var_166_int = 38064; // 0x88 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x89 TObjFunc
	
Label_139:
	var_167_int = 536283; // 0x8b PushI
	var_168_int = -1; // 0x8c PushI
	var_169_int = 38067; // 0x8d PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x8e TObjFunc
	goto Label_147; // 0x90 Jump
}


func_843(var_73_int)
{
	var_73_int = 515571; // 0x34b MovI
	return 0; // 0x34c Return
}


func_588(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x24c PushV
	IsLoaded(var_15_bool); // 0x24d Func
	var_13_bool = var_15_bool; // 0x24f Mov
	return 2; // 0x250 Return
}


func_845(var_72_int)
{
	var_72_int = 504029; // 0x34d MovI
	return 0; // 0x34e Return
}


func_847(var_74_string)
{
	var_74_string = "ui/NPC_bmask.png"; // 0x34f MovS
	return 0; // 0x350 Return
}


func_720()
{
	var_13_bool = 0; // 0x2d0 PushV
	func_851(var_13_bool); // 0x2d1 NEW_2
	if(var_13_bool == 0) goto Label_726; // 0x2d3 JumpB
	lshStopSpeech(); // 0x2d4 Func
	
Label_726:
	return 0; // 0x2d6 Return
}


func_849(var_75_string)
{
	var_75_string = "ui/NPC_bmask_b.png"; // 0x351 MovS
	return 0; // 0x352 Return
}


func_593(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x251 PushV
	GetPosition(var_38_cvector); // 0x252 ObjFunc
	GetEyesHeight(var_37_float); // 0x254 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x256 PushE
	var_46_float = var_46_float + var_37_float; // 0x257 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x258 PopE
	GetPosition(var_39_cvector); // 0x259 Func
	GetEyesHeight(var_37_float); // 0x25b Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x25d PushE
	var_47_float = var_47_float + var_37_float; // 0x25e Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x25f PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x260 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x261 PushE
	var_48_float = 0; // 0x262 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x263 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x264 Or
	var_50_float = sqrt(var_49_int); // 0x265 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x266 Div2
	var_41_cvector = -var_40_cvector; // 0x267 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x268 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x269 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x26a PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x26b Xor2
	func_727(var_52_cvector, var_53_cvector); // 0x26c NEW_2
	var_60_int = 25; // 0x26e PushI
	var_61_float = var_52_cvector * var_60_int; // 0x26f Mult
	var_62_int = var_51_float + var_61_float; // 0x270 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x271 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x272 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x273 Add2
	IsOverrideActive(var_44_bool); // 0x274 Func
	var_64_bool = var_44_bool; // 0x276 Push
	if(var_64_bool == 0) goto Label_634; // 0x277 JumpB
	var_25_bool = 0; // 0x278 MovB
	return 18; // 0x279 Return
	
Label_634:
	StopWorld(); // 0x27a Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x27c Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x27e PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x27f PushE
	Rotate(var_65_float, var_66_float); // 0x280 Func
	var_67_bool = 0; // 0x282 PushV
	func_851(var_67_bool); // 0x283 NEW_2
	if(var_67_bool == 0) goto Label_647; // 0x285 JumpB
	goto Label_655; // 0x286 Jump
	
Label_655:
	CameraWaitForPlayFinish(); // 0x28f Func
	ResumeWorld(); // 0x291 Func
	var_25_bool = 1; // 0x293 MovB
	return 18; // 0x294 Return
	
Label_647:
	var_68_string = "head"; // 0x287 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x288 Func
	var_69_bool = var_45_bool; // 0x28a Push
	if(var_69_bool == 0) goto Label_655; // 0x28b JumpB
	var_70_string = "head"; // 0x28c PushS
	LookAsyncCamera(var_70_string); // 0x28d Func
}


func_851(var_67_bool)
{
	var_67_bool = 0; // 0x353 MovB
	return 0; // 0x354 Return
}


func_727(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x2d7 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x2d8 Or
	var_56_float = sqrt(var_57_int); // 0x2d9 Sqrt2
	var_58_float = 0.0; // 0x2da PushF
	var_59_bool = var_56_float < var_58_float; // 0x2db LT
	if(var_59_bool == 0) goto Label_735; // 0x2dc JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x2dd MovV
	return 2; // 0x2de Return
	
Label_735:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x2df Div2
	return 2; // 0x2e0 Return
}


func_480(var_2_object, var_3_string)
{
	func_575(); // 0x1e1 NEW_2
	var_11_int = 10; // 0x1e3 PushI
	KillTimer(var_11_int); // 0x1e4 Func
	var_12_object = var_2_object; // 0x1e6 PushT
	if(var_12_object == 0) goto Label_492; // 0x1e7 JumpB
	var_13_string = "head"; // 0x1e8 PushS
	UnlookAsync(var_13_string); // 0x1e9 Func
	var_2_object = 0; // 0x1eb TMovB
	
Label_492:
	var_3_string = 1; // 0x1ec TMovB
	return 0; // 0x1ed Return
}


func_737(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0; // 0x2e1 PushV
	GetVariable(var_96_string, var_98_int); // 0x2e2 Func
	var_95_int = var_98_int; // 0x2e4 Mov
	return 2; // 0x2e5 Return
}


func_742(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x2e6 PushV
	var_45_string = "idle"; // 0x2e7 MovS
	var_46_int = var_43_int; // 0x2e8 Push
	if(var_46_int == 0) goto Label_747; // 0x2e9 JumpB
	var_45_string = var_45_string + var_43_int; // 0x2ea Add2
	
Label_747:
	var_42_string = var_45_string; // 0x2eb Mov
	return 2; // 0x2ec Return
}


func_749(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x2ed PushV
	var_39_int = 0; // 0x2ee MovI
	
Label_751:
	var_41_string = "all"; // 0x2ef PushS
	var_42_string = ""; var_43_int = 0; // 0x2f0 PushV
	var_43_int = var_39_int; // 0x2f1 Mov
	func_742(var_42_string, var_43_int); // 0x2f2 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x2f4 Func
	var_47_bool = var_40_bool == 0; // 0x2f6 Not
	if(var_47_bool == 0) goto Label_761; // 0x2f7 JumpB
	goto Label_764; // 0x2f8 Jump
	
Label_764:
	var_36_int = var_39_int; // 0x2fc Mov
	return 4; // 0x2fd Return
	
Label_761:
	var_48_int = 1; // 0x2f9 PushI
	var_39_int = var_39_int + var_48_int; // 0x2fa Add2
	goto Label_751; // 0x2fb Jump
}


func_494()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x1ee PushV
	WaitForAnimEnd(); // 0x1ef Func
	var_34_bool = 0; // 0x1f1 PushV
	func_588(var_34_bool); // 0x1f2 NEW_2
	var_35_bool = var_34_bool == 0; // 0x1f4 Not
	if(var_35_bool == 0) goto Label_503; // 0x1f5 JumpB
	return 14; // 0x1f6 Return
	
Label_503:
	var_36_int = 0; // 0x1f7 PushV
	func_749(var_36_int); // 0x1f8 NEW_2
	var_27_int = var_36_int; // 0x1f9 Mov
	var_28_int = 0; // 0x1fb MovI
	
Label_508:
	var_49_bool = 0; // 0x1fc PushV
	var_49_bool = 0; // 0x1fd MovB
	var_50_int = 5; // 0x1fe PushI
	var_51_bool = var_28_int < var_50_int; // 0x1ff LT
	if(var_51_bool == 0) goto Label_518; // 0x200 JumpB
	var_52_bool = 0; // 0x201 PushV
	func_588(var_52_bool); // 0x202 NEW_2
	if(var_52_bool == 0) goto Label_518; // 0x204 JumpB
	var_49_bool = 1; // 0x205 MovB
	
Label_518:
	if(var_49_bool == 0) goto Label_570; // 0x206 JumpB
	var_53_int = 3; // 0x207 PushI
	irand(var_29_int, var_53_int); // 0x208 Func
	var_54_int = 0; // 0x20a PushI
	var_55_bool = var_29_int == var_54_int; // 0x20b Eq
	if(var_55_bool == 0) goto Label_542; // 0x20c JumpB
	var_56_int = var_27_int; // 0x20d Push
	if(var_56_int == 0) goto Label_541; // 0x20e JumpB
	irand(var_30_int, var_27_int); // 0x20f Func
	var_57_string = "all"; // 0x211 PushS
	var_58_string = ""; var_59_int = 0; // 0x212 PushV
	var_59_int = var_30_int; // 0x213 Mov
	func_742(var_58_string, var_59_int); // 0x214 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x216 Func
	WaitForAnimEnd(var_31_bool); // 0x218 Func
	var_60_bool = var_31_bool == 0; // 0x21a Not
	if(var_60_bool == 0) goto Label_541; // 0x21b JumpB
	goto Label_570; // 0x21c Jump
	
Label_570:
	ResetAAS(); // 0x23a Func
	return 14; // 0x23c Return
	
Label_541:
	goto Label_559; // 0x21d Jump
	
Label_559:
	var_61_bool = 0; // 0x22f PushV
	func_573(var_61_bool); // 0x230 NEW_2
	var_62_bool = var_61_bool == 0; // 0x232 Not
	if(var_62_bool == 0) goto Label_565; // 0x233 JumpB
	goto Label_570; // 0x234 Jump
	
Label_565:
	ResetAAS(); // 0x235 Func
	var_63_int = 1; // 0x237 PushI
	var_28_int = var_28_int + var_63_int; // 0x238 Add2
	goto Label_508; // 0x239 Jump
	
Label_542:
	var_64_int = 1; // 0x21e PushI
	var_65_bool = var_29_int == var_64_int; // 0x21f Eq
	if(var_65_bool == 0) goto Label_556; // 0x220 JumpB
	var_66_int = 4; // 0x221 PushI
	rand(var_32_float, var_66_int); // 0x222 Func
	var_67_int = 1; // 0x224 PushI
	var_68_int = var_32_float + var_67_int; // 0x225 Add
	Sleep(var_68_int, var_33_bool); // 0x226 Func
	var_69_bool = var_33_bool == 0; // 0x228 Not
	if(var_69_bool == 0) goto Label_555; // 0x229 JumpB
	goto Label_570; // 0x22a Jump
	
Label_555:
	goto Label_559; // 0x22b Jump
	
Label_556:
	var_70_int = var_28_int; // 0x22c Push
	if(var_70_int == 0) goto Label_559; // 0x22d JumpB
	goto Label_570; // 0x22e Jump
}


func_766()
{
	var_18_string = "ood4TheaterGuard1"; // 0x2ff PushS
	var_19_int = 1; // 0x300 PushI
	SetVariable(var_18_string, var_19_int); // 0x301 Func
	return 0; // 0x303 Return
}


