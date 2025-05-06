task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xc8 PushI
	if(var_12_int == 0) goto Label_393; // 0xc9 JumpB
	func_722(); // 0xcb NEW_2
	var_14_int = 38060; // 0xcd PushI
	var_15_bool = var_11_object == var_14_int; // 0xce Eq
	if(var_15_bool == 0) goto Label_213; // 0xcf JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xd0 PushV
	var_16_object = var_1_object; // 0xd1 MovT
	var_17_object = var_0_object; // 0xd2 MovT
	func_768(); // 0xd3 NEW_2
	
Label_213:
	var_20_int = 38064; // 0xd5 PushI
	var_21_bool = var_11_object == var_20_int; // 0xd6 Eq
	if(var_21_bool == 0) goto Label_221; // 0xd7 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xd8 PushV
	var_22_object = var_1_object; // 0xd9 MovT
	var_23_object = var_0_object; // 0xda MovT
	func_774(); // 0xdb NEW_2
	
Label_221:
	var_26_int = 38059; // 0xdd PushI
	var_27_bool = var_10_bool == var_26_int; // 0xde Eq
	if(var_27_bool == 0) goto Label_289; // 0xdf JumpB
	var_28_bool = 0; // 0xe0 PushV
	var_28_bool = 0; // 0xe1 MovB
	var_29_bool = 0; var_30_object = Obj(); // 0xe2 PushV
	var_30_object = var_1_object; // 0xe3 MovT
	func_780(var_30_object); // 0xe4 NEW_2
	if(var_29_bool == 0) goto Label_238; // 0xe6 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0xe7 PushV
	var_38_object = var_1_object; // 0xe8 MovT
	func_792(var_38_object); // 0xe9 NEW_2
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
	func_804(var_63_object); // 0xfa NEW_2
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
	func_816(var_77_object); // 0x113 NEW_2
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
	func_853(var_128_bool); // 0x17f NEW_2
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
	func_711(var_27_object); // 0x1d5 NEW_2
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


func_768()
{
	var_18_string = "ood4TheaterGuard1"; // 0x301 PushS
	var_19_int = 1; // 0x302 PushI
	SetVariable(var_18_string, var_19_int); // 0x303 Func
	return 0; // 0x305 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 130.0; // 0x4 MovF
	func_593(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_847(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_845(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_849(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_851(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_828(var_77_int); // 0x22 NEW_2
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
	var_171_bool = var_24_bool == 0; // 0x38 Not
	if(var_171_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_172_object = Obj(); // 0x3f PushV
	var_172_object = var_15_object; // 0x40 Mov
	func_662(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_774()
{
	var_24_string = "ood4TheaterGuard2"; // 0x307 PushS
	var_25_int = 1; // 0x308 PushI
	SetVariable(var_24_string, var_25_int); // 0x309 Func
	return 0; // 0x30b Return
}


func_780(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x30d PushV
	var_97_string = "d4q01KeyWhite"; // 0x30e MovS
	func_739(var_96_int, var_97_string); // 0x30f NEW_2
	var_100_int = 0; // 0x311 PushI
	var_101_bool = var_96_int != var_100_int; // 0x312 Neq
	if(var_101_bool == 0) goto Label_790; // 0x313 JumpB
	var_94_bool = 1; // 0x314 MovB
	return 0; // 0x315 Return
	
Label_790:
	var_94_bool = 0; // 0x316 MovB
	return 0; // 0x317 Return
}


func_662()
{
	var_173_bool = 0; var_174_bool = 0; // 0x296 PushV
	var_175_bool = 1; // 0x297 PushB
	CameraSwitchToNormal(var_175_bool); // 0x298 Func
	var_176_bool = 0; // 0x29a PushV
	func_853(var_176_bool); // 0x29b NEW_2
	if(var_176_bool == 0) goto Label_671; // 0x29d JumpB
	goto Label_679; // 0x29e Jump
	
Label_679:
	return 2; // 0x2a7 Return
	
Label_671:
	var_177_string = "head"; // 0x29f PushS
	HasAnimationTrack(var_174_bool, var_177_string); // 0x2a0 Func
	var_178_bool = var_174_bool; // 0x2a2 Push
	if(var_178_bool == 0) goto Label_679; // 0x2a3 JumpB
	var_179_string = "head"; // 0x2a4 PushS
	UnlookAsync(var_179_string); // 0x2a5 Func
}


func_792(var_102_bool)
{
	var_104_int = 0; var_105_string = ""; // 0x319 PushV
	var_105_string = "d4q01"; // 0x31a MovS
	func_739(var_104_int, var_105_string); // 0x31b NEW_2
	var_106_int = 1000; // 0x31d PushI
	var_107_bool = var_104_int == var_106_int; // 0x31e Eq
	if(var_107_bool == 0) goto Label_802; // 0x31f JumpB
	var_102_bool = 1; // 0x320 MovB
	return 0; // 0x321 Return
	
Label_802:
	var_102_bool = 0; // 0x322 MovB
	return 0; // 0x323 Return
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


func_804(var_127_bool)
{
	var_129_int = 0; var_130_string = ""; // 0x325 PushV
	var_130_string = "ood4TheaterGuard1"; // 0x326 MovS
	func_739(var_129_int, var_130_string); // 0x327 NEW_2
	var_131_int = 0; // 0x329 PushI
	var_132_bool = var_129_int == var_131_int; // 0x32a Eq
	if(var_132_bool == 0) goto Label_814; // 0x32b JumpB
	var_127_bool = 1; // 0x32c MovB
	return 0; // 0x32d Return
	
Label_814:
	var_127_bool = 0; // 0x32e MovB
	return 0; // 0x32f Return
}


func_680(var_141_string)
{
	var_142_bool = 0; var_143_float = 0; var_144_float = 0; var_145_bool = 0; var_146_float = 0; var_147_float = 0; // 0x2a8 PushV
	lshHasAnimation(var_145_bool, var_141_string); // 0x2a9 Func
	var_148_bool = var_145_bool; // 0x2ab Push
	if(var_148_bool == 0) goto Label_691; // 0x2ac JumpB
	lshGetAnimTimes(var_141_string, var_146_float, var_147_float); // 0x2ad Func
	var_149_bool = 0; // 0x2af PushB
	lshPlayAnimation(var_146_float, var_147_float, var_149_bool); // 0x2b0 Func
	goto Label_695; // 0x2b2 Jump
	
Label_695:
	return 6; // 0x2b7 Return
	
Label_691:
	var_150_string = "Can't find lsh animation : "; // 0x2b3 PushS
	var_151_int = var_150_string + var_141_string; // 0x2b4 Add
	Trace(var_151_int); // 0x2b5 Func
}


func_816(var_159_bool)
{
	var_161_int = 0; var_162_string = ""; // 0x331 PushV
	var_162_string = "ood4TheaterGuard2"; // 0x332 MovS
	func_739(var_161_int, var_162_string); // 0x333 NEW_2
	var_163_int = 0; // 0x335 PushI
	var_164_bool = var_161_int == var_163_int; // 0x336 Eq
	if(var_164_bool == 0) goto Label_826; // 0x337 JumpB
	var_159_bool = 1; // 0x338 MovB
	return 0; // 0x339 Return
	
Label_826:
	var_159_bool = 0; // 0x33a MovB
	return 0; // 0x33b Return
}


func_177(var_2_object, var_109_string)
{
	var_110_bool = 0; // 0xb2 PushV
	func_853(var_110_bool); // 0xb3 NEW_2
	var_111_bool = var_110_bool == 0; // 0xb5 Not
	if(var_111_bool == 0) goto Label_184; // 0xb6 JumpB
	return 0; // 0xb7 Return
	
Label_184:
	var_112_bool = var_109_string == var_2_object; // 0xb8 Eq
	if(var_112_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_113_string = ""; var_114_bool = 0; // 0xbb PushV
	var_113_string = var_109_string; // 0xbc Mov
	var_115_string = ""; // 0xbd PushS
	var_116_bool = var_109_string == var_115_string; // 0xbe Eq
	if(var_116_bool == 0) goto Label_194; // 0xbf JumpB
	var_114_bool = 0; // 0xc0 MovB
	goto Label_195; // 0xc1 Jump
	
Label_195:
	func_696(var_113_string, var_114_bool); // 0xc3 NEW_2
	var_2_object = var_109_string; // 0xc5 TMov
	return 0; // 0xc6 Return
	
Label_194:
	var_114_bool = 1; // 0xc2 MovB
}


func_696(var_113_string, var_114_bool)
{
	var_117_bool = 0; var_118_float = 0; var_119_float = 0; var_120_bool = 0; var_121_float = 0; var_122_float = 0; // 0x2b8 PushV
	lshHasAnimation(var_120_bool, var_113_string); // 0x2b9 Func
	var_123_bool = var_120_bool; // 0x2bb Push
	if(var_123_bool == 0) goto Label_706; // 0x2bc JumpB
	lshGetAnimTimes(var_113_string, var_121_float, var_122_float); // 0x2bd Func
	lshPlayAnimation(var_121_float, var_122_float, var_114_bool); // 0x2bf Func
	goto Label_710; // 0x2c1 Jump
	
Label_710:
	return 6; // 0x2c6 Return
	
Label_706:
	var_124_string = "Can't find lsh animation : "; // 0x2c2 PushS
	var_125_int = var_124_string + var_113_string; // 0x2c3 Add
	Trace(var_125_int); // 0x2c4 Func
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


func_828(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x33c PushV
	var_80_string = "branch"; // 0x33d PushS
	GetVariable(var_80_string, var_79_int); // 0x33e Func
	var_81_int = 0; // 0x340 PushI
	var_82_bool = var_79_int == var_81_int; // 0x341 Eq
	if(var_82_bool == 0) goto Label_838; // 0x342 JumpB
	var_77_int = 1; // 0x343 MovI
	return 2; // 0x344 Return
	
Label_838:
	var_83_int = 1; // 0x346 PushI
	var_84_bool = var_79_int == var_83_int; // 0x347 Eq
	if(var_84_bool == 0) goto Label_843; // 0x348 JumpB
	var_77_int = 2; // 0x349 MovI
	return 2; // 0x34a Return
	
Label_843:
	var_77_int = 3; // 0x34b MovI
	return 2; // 0x34c Return
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


func_711(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x2c7 PushV
	GetEyesHeight(var_30_float); // 0x2c8 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x2ca MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x2cb PushE
	var_32_float = var_30_float; // 0x2cc Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x2cd PopE
	var_33_string = "head"; // 0x2ce PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x2cf Func
	return 4; // 0x2d1 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_147; // 0x4f JumpB
	var_93_bool = 0; // 0x50 PushV
	var_93_bool = 0; // 0x51 MovB
	var_94_bool = 0; var_95_object = Obj(); // 0x52 PushV
	var_95_object = var_1_object; // 0x53 MovT
	func_780(var_95_object); // 0x54 NEW_2
	if(var_94_bool == 0) goto Label_94; // 0x56 JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x57 PushV
	var_103_object = var_1_object; // 0x58 MovT
	func_792(var_103_object); // 0x59 NEW_2
	var_108_bool = var_102_bool == 0; // 0x5b Not
	if(var_108_bool == 0) goto Label_94; // 0x5c JumpB
	var_93_bool = 1; // 0x5d MovB
	
Label_94:
	if(var_93_bool == 0) goto Label_120; // 0x5e JumpB
	var_109_string = ""; // 0x5f PushV
	var_109_string = "Neutral"; // 0x60 MovS
	func_177(var_87_object, var_109_string); // 0x61 NEW_2
	var_126_int = 536275; // 0x63 PushI
	SetMessage(var_126_int); // 0x64 TObjFunc
	ClearReplies(); // 0x66 TObjFunc
	var_127_bool = 0; var_128_object = Obj(); // 0x68 PushV
	var_128_object = var_1_object; // 0x69 MovT
	func_804(var_128_object); // 0x6a NEW_2
	if(var_127_bool == 0) goto Label_114; // 0x6c JumpB
	var_133_int = 536276; // 0x6d PushI
	var_134_int = 38085; // 0x6e PushI
	var_135_int = 38060; // 0x6f PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x70 TObjFunc
	
Label_114:
	var_136_int = 536300; // 0x72 PushI
	var_137_int = -1; // 0x73 PushI
	var_138_int = 38084; // 0x74 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x75 TObjFunc
	goto Label_147; // 0x77 Jump
	
Label_147:
	var_139_bool = 0; // 0x93 PushV
	func_853(var_139_bool); // 0x94 NEW_2
	if(var_139_bool == 0) goto Label_162; // 0x96 JumpB
	
Label_151:
	lshWaitForAnimEnd(); // 0x97 Func
	var_140_string = var_3_string; // 0x99 PushT
	if(var_140_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_161:
	goto Label_176; // 0xa1 Jump
	
Label_176:
	return 0; // 0xb0 Return
	
Label_156:
	var_141_string = ""; // 0x9c PushV
	var_141_string = var_2_object; // 0x9d MovT
	func_680(var_141_string); // 0x9e NEW_2
	goto Label_151; // 0xa0 Jump
	
Label_162:
	var_152_string = "all"; // 0xa2 PushS
	var_153_string = "idle"; // 0xa3 PushS
	PlayAnimation(var_152_string, var_153_string); // 0xa4 Func
	
Label_166:
	WaitForAnimEnd(); // 0xa6 Func
	var_154_string = var_3_string; // 0xa8 PushT
	if(var_154_string == 0) goto Label_171; // 0xa9 JumpB
	goto Label_176; // 0xaa Jump
	
Label_171:
	var_155_string = "all"; // 0xab PushS
	var_156_string = "idle"; // 0xac PushS
	PlayAnimation(var_155_string, var_156_string); // 0xad Func
	goto Label_166; // 0xaf Jump
	
Label_120:
	var_157_string = ""; // 0x78 PushV
	var_157_string = "Neutral"; // 0x79 MovS
	func_177(var_87_object, var_157_string); // 0x7a NEW_2
	var_158_int = 536279; // 0x7c PushI
	SetMessage(var_158_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_159_bool = 0; var_160_object = Obj(); // 0x81 PushV
	var_160_object = var_1_object; // 0x82 MovT
	func_816(var_160_object); // 0x83 NEW_2
	if(var_159_bool == 0) goto Label_139; // 0x85 JumpB
	var_165_int = 536280; // 0x86 PushI
	var_166_int = 38092; // 0x87 PushI
	var_167_int = 38064; // 0x88 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x89 TObjFunc
	
Label_139:
	var_168_int = 536283; // 0x8b PushI
	var_169_int = -1; // 0x8c PushI
	var_170_int = 38067; // 0x8d PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x8e TObjFunc
	goto Label_147; // 0x90 Jump
}


func_588(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x24c PushV
	IsLoaded(var_15_bool); // 0x24d Func
	var_13_bool = var_15_bool; // 0x24f Mov
	return 2; // 0x250 Return
}


func_845(var_74_int)
{
	var_74_int = 515571; // 0x34d MovI
	return 0; // 0x34e Return
}


func_847(var_73_int)
{
	var_73_int = 504029; // 0x34f MovI
	return 0; // 0x350 Return
}


func_849(var_75_string)
{
	var_75_string = "ui/NPC_bmask.png"; // 0x351 MovS
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
	func_729(var_52_cvector, var_53_cvector); // 0x26c NEW_2
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
	var_65_bool = 1; // 0x27c PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x27d Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x27f PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x280 PushE
	Rotate(var_66_float, var_67_float); // 0x281 Func
	var_68_bool = 0; // 0x283 PushV
	func_853(var_68_bool); // 0x284 NEW_2
	if(var_68_bool == 0) goto Label_648; // 0x286 JumpB
	goto Label_656; // 0x287 Jump
	
Label_656:
	CameraWaitForPlayFinish(); // 0x290 Func
	ResumeWorld(); // 0x292 Func
	var_25_bool = 1; // 0x294 MovB
	return 18; // 0x295 Return
	
Label_648:
	var_69_string = "head"; // 0x288 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x289 Func
	var_70_bool = var_45_bool; // 0x28b Push
	if(var_70_bool == 0) goto Label_656; // 0x28c JumpB
	var_71_string = "head"; // 0x28d PushS
	LookAsyncCamera(var_71_string); // 0x28e Func
}


func_851(var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png"; // 0x353 MovS
	return 0; // 0x354 Return
}


func_722()
{
	var_13_bool = 0; // 0x2d2 PushV
	func_853(var_13_bool); // 0x2d3 NEW_2
	if(var_13_bool == 0) goto Label_728; // 0x2d5 JumpB
	lshStopSpeech(); // 0x2d6 Func
	
Label_728:
	return 0; // 0x2d8 Return
}


func_853(var_68_bool)
{
	var_68_bool = 0; // 0x355 MovB
	return 0; // 0x356 Return
}


func_729(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x2d9 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x2da Or
	var_56_float = sqrt(var_57_int); // 0x2db Sqrt2
	var_58_float = 0.0; // 0x2dc PushF
	var_59_bool = var_56_float < var_58_float; // 0x2dd LT
	if(var_59_bool == 0) goto Label_737; // 0x2de JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x2df MovV
	return 2; // 0x2e0 Return
	
Label_737:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x2e1 Div2
	return 2; // 0x2e2 Return
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


func_739(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x2e3 PushV
	GetVariable(var_97_string, var_99_int); // 0x2e4 Func
	var_96_int = var_99_int; // 0x2e6 Mov
	return 2; // 0x2e7 Return
}


func_744(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x2e8 PushV
	var_45_string = "idle"; // 0x2e9 MovS
	var_46_int = var_43_int; // 0x2ea Push
	if(var_46_int == 0) goto Label_749; // 0x2eb JumpB
	var_45_string = var_45_string + var_43_int; // 0x2ec Add2
	
Label_749:
	var_42_string = var_45_string; // 0x2ed Mov
	return 2; // 0x2ee Return
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
	func_751(var_36_int); // 0x1f8 NEW_2
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
	func_744(var_58_string, var_59_int); // 0x214 NEW_2
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


func_751(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x2ef PushV
	var_39_int = 0; // 0x2f0 MovI
	
Label_753:
	var_41_string = "all"; // 0x2f1 PushS
	var_42_string = ""; var_43_int = 0; // 0x2f2 PushV
	var_43_int = var_39_int; // 0x2f3 Mov
	func_744(var_42_string, var_43_int); // 0x2f4 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x2f6 Func
	var_47_bool = var_40_bool == 0; // 0x2f8 Not
	if(var_47_bool == 0) goto Label_763; // 0x2f9 JumpB
	goto Label_766; // 0x2fa Jump
	
Label_766:
	var_36_int = var_39_int; // 0x2fe Mov
	return 4; // 0x2ff Return
	
Label_763:
	var_48_int = 1; // 0x2fb PushI
	var_39_int = var_39_int + var_48_int; // 0x2fc Add2
	goto Label_753; // 0x2fd Jump
}


