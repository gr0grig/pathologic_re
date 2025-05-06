task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xc9 PushI
	if(var_12_int == 0) goto Label_364; // 0xca JumpB
	func_691(); // 0xcc NEW_2
	var_14_int = 21088; // 0xce PushI
	var_15_bool = var_10_bool == var_14_int; // 0xcf Eq
	if(var_15_bool == 0) goto Label_275; // 0xd0 JumpB
	var_16_bool = 0; var_17_object = Obj(); // 0xd1 PushV
	var_17_object = var_1_object; // 0xd2 MovT
	func_792(var_17_object); // 0xd3 NEW_2
	if(var_16_bool == 0) goto Label_234; // 0xd5 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xd6 PushV
	var_24_object = var_1_object; // 0xd7 MovT
	var_25_object = var_0_object; // 0xd8 MovT
	func_760(); // 0xd9 NEW_2
	var_28_string = ""; // 0xdb PushV
	var_28_string = "Neutral"; // 0xdc MovS
	func_178(var_11_object, var_28_string); // 0xdd NEW_2
	var_45_int = 519919; // 0xdf PushI
	SetMessage(var_45_int); // 0xe0 TObjFunc
	ClearReplies(); // 0xe2 TObjFunc
	var_46_int = 519920; // 0xe4 PushI
	var_47_int = 21090; // 0xe5 PushI
	var_48_int = 21089; // 0xe6 PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_49_bool = 0; var_50_object = Obj(); // 0xea PushV
	var_50_object = var_1_object; // 0xeb MovT
	func_782(var_49_bool, var_50_object); // 0xec NEW_2
	var_60_bool = var_49_bool == 0; // 0xee Not
	if(var_60_bool == 0) goto Label_255; // 0xef JumpB
	var_61_string = ""; // 0xf0 PushV
	var_61_string = "Neutral"; // 0xf1 MovS
	func_178(var_11_object, var_61_string); // 0xf2 NEW_2
	var_62_int = 520031; // 0xf4 PushI
	SetMessage(var_62_int); // 0xf5 TObjFunc
	ClearReplies(); // 0xf7 TObjFunc
	var_63_int = 520032; // 0xf9 PushI
	var_64_int = -1; // 0xfa PushI
	var_65_int = 21216; // 0xfb PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xfc TObjFunc
	return 0; // 0xfe Return
	
Label_255:
	var_66_bool = 0; var_67_object = Obj(); // 0xff PushV
	var_67_object = var_1_object; // 0x100 MovT
	func_782(var_66_bool, var_67_object); // 0x101 NEW_2
	if(var_66_bool == 0) goto Label_275; // 0x103 JumpB
	var_68_string = ""; // 0x104 PushV
	var_68_string = "Neutral"; // 0x105 MovS
	func_178(var_11_object, var_68_string); // 0x106 NEW_2
	var_69_int = 524628; // 0x108 PushI
	SetMessage(var_69_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_70_int = 524629; // 0x10d PushI
	var_71_int = -1; // 0x10e PushI
	var_72_int = 25969; // 0x10f PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_73_int = 21099; // 0x113 PushI
	var_74_bool = var_10_bool == var_73_int; // 0x114 Eq
	if(var_74_bool == 0) goto Label_278; // 0x115 JumpB
	
Label_278:
	var_75_int = 21090; // 0x116 PushI
	var_76_bool = var_10_bool == var_75_int; // 0x117 Eq
	if(var_76_bool == 0) goto Label_306; // 0x118 JumpB
	var_77_object = Obj(); var_78_object = Obj(); // 0x119 PushV
	var_77_object = var_1_object; // 0x11a MovT
	var_78_object = var_0_object; // 0x11b MovT
	func_766(); // 0x11c NEW_2
	var_95_string = ""; // 0x11e PushV
	var_95_string = "Neutral"; // 0x11f MovS
	func_178(var_11_object, var_95_string); // 0x120 NEW_2
	var_96_int = 519921; // 0x122 PushI
	SetMessage(var_96_int); // 0x123 TObjFunc
	ClearReplies(); // 0x125 TObjFunc
	var_97_int = 519922; // 0x127 PushI
	var_98_int = 21092; // 0x128 PushI
	var_99_int = 21091; // 0x129 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x12a TObjFunc
	var_100_int = 519928; // 0x12c PushI
	var_101_int = -1; // 0x12d PushI
	var_102_int = 21097; // 0x12e PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x12f TObjFunc
	return 0; // 0x131 Return
	
Label_306:
	var_103_int = 21092; // 0x132 PushI
	var_104_bool = var_10_bool == var_103_int; // 0x133 Eq
	if(var_104_bool == 0) goto Label_329; // 0x134 JumpB
	var_105_string = ""; // 0x135 PushV
	var_105_string = "Neutral"; // 0x136 MovS
	func_178(var_11_object, var_105_string); // 0x137 NEW_2
	var_106_int = 519923; // 0x139 PushI
	SetMessage(var_106_int); // 0x13a TObjFunc
	ClearReplies(); // 0x13c TObjFunc
	var_107_int = 519924; // 0x13e PushI
	var_108_int = 21094; // 0x13f PushI
	var_109_int = 21093; // 0x140 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x141 TObjFunc
	var_110_int = 519927; // 0x143 PushI
	var_111_int = -1; // 0x144 PushI
	var_112_int = 21096; // 0x145 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x146 TObjFunc
	return 0; // 0x148 Return
	
Label_329:
	var_113_int = 21094; // 0x149 PushI
	var_114_bool = var_10_bool == var_113_int; // 0x14a Eq
	if(var_114_bool == 0) goto Label_352; // 0x14b JumpB
	var_115_string = ""; // 0x14c PushV
	var_115_string = "Neutral"; // 0x14d MovS
	func_178(var_11_object, var_115_string); // 0x14e NEW_2
	var_116_int = 519925; // 0x150 PushI
	SetMessage(var_116_int); // 0x151 TObjFunc
	ClearReplies(); // 0x153 TObjFunc
	var_117_int = 519926; // 0x155 PushI
	var_118_int = -1; // 0x156 PushI
	var_119_int = 21095; // 0x157 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x158 TObjFunc
	var_120_int = 527022; // 0x15a PushI
	var_121_int = -1; // 0x15b PushI
	var_122_int = 28306; // 0x15c PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x15d TObjFunc
	return 0; // 0x15f Return
	
Label_352:
	var_3_string = 1; // 0x160 TMovB
	var_123_bool = 0; // 0x161 PushV
	func_734(var_123_bool); // 0x162 NEW_2
	if(var_123_bool == 0) goto Label_360; // 0x164 JumpB
	lshStopAnimation(); // 0x165 Func
	goto Label_362; // 0x167 Jump
	
Label_362:
	return 0; // 0x16a Return
	
Label_360:
	StopAnimation(); // 0x168 Func
	
Label_364:
	return 0; // 0x16c Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_451(var_9_object, var_10_object); // 0x179 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x17b PushV
	var_15_object = var_10_object; // 0x17c Mov
	TaskCall(0); // 0x17d TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x17e NEW_2
	TaskReturn(); // 0x17f TaskReturn
	return 0; // 0x181 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x1ad PushI
	var_12_bool = var_10_int == var_11_int; // 0x1ae Eq
	if(var_12_bool == 0) goto Label_450; // 0x1af JumpB
	var_13_bool = 0; // 0x1b0 PushV
	func_413(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x1b1 NEW_2
	if(var_13_bool == 0) goto Label_444; // 0x1b3 JumpB
	var_26_bool = var_2_object == 0; // 0x1b4 Not
	if(var_26_bool == 0) goto Label_443; // 0x1b5 JumpB
	var_27_object = Obj(); // 0x1b6 PushV
	var_27_object = var_4_bool; // 0x1b7 MovT
	func_680(var_27_object); // 0x1b8 NEW_2
	var_2_object = 1; // 0x1ba TMovB
	
Label_443:
	goto Label_450; // 0x1bb Jump
	
Label_450:
	return 0; // 0x1c2 Return
	
Label_444:
	var_34_object = var_2_object; // 0x1bc PushT
	if(var_34_object == 0) goto Label_450; // 0x1bd JumpB
	var_35_string = "head"; // 0x1be PushS
	UnlookAsync(var_35_string); // 0x1bf Func
	var_2_object = 0; // 0x1c1 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_365:
	var_10_float = 0; var_11_float = 0; // 0x16d PushV
	var_10_float = 300; // 0x16e MovI
	var_11_float = 100; // 0x16f MovI
	func_386(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0x170 NEW_2
	var_72_int = 3; // 0x172 PushI
	Sleep(var_72_int); // 0x173 Func
	goto Label_365; // 0x175 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_564(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_728(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_726(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_730(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_732(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_832(var_76_int); // 0x22 NEW_2
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
	var_167_bool = var_24_bool == 0; // 0x38 Not
	if(var_167_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_168_object = Obj(); // 0x3f PushV
	var_168_object = var_15_object; // 0x40 Mov
	func_632(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_386(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x183 PushV
	func_559(var_12_bool); // 0x184 NEW_2
	var_15_bool = var_12_bool == 0; // 0x186 Not
	if(var_15_bool == 0) goto Label_393; // 0x187 JumpB
	return 0; // 0x188 Return
	
Label_393:
	var_16_string = "player"; // 0x189 PushS
	FindActor(var_9_object, var_16_string); // 0x18a Func
	var_2_object = 0; // 0x18c TMovB
	var_3_string = 0; // 0x18d TMovB
	var_0_object = var_10_float; // 0x18e TMov
	var_1_object = var_11_float; // 0x18f TMov
	var_17_int = 10; // 0x190 PushI
	var_18_float = 1.0; // 0x191 PushF
	SetTimer(var_17_int, var_18_float); // 0x192 Func
	func_465(); // 0x195 NEW_2
	var_70_bool = var_3_string == 0; // 0x197 Not
	if(var_70_bool == 0) goto Label_412; // 0x198 JumpB
	var_71_int = 10; // 0x199 PushI
	KillTimer(var_71_int); // 0x19a Func
	
Label_412:
	return 0; // 0x19c Return
}


func_649(var_127_string)
{
	var_128_bool = 0; var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_float = 0; var_133_float = 0; // 0x289 PushV
	lshHasAnimation(var_131_bool, var_127_string); // 0x28a Func
	var_134_bool = var_131_bool; // 0x28c Push
	if(var_134_bool == 0) goto Label_660; // 0x28d JumpB
	lshGetAnimTimes(var_127_string, var_132_float, var_133_float); // 0x28e Func
	var_135_bool = 0; // 0x290 PushB
	lshPlayAnimation(var_132_float, var_133_float, var_135_bool); // 0x291 Func
	goto Label_664; // 0x293 Jump
	
Label_664:
	return 6; // 0x298 Return
	
Label_660:
	var_136_string = "Can't find lsh animation : "; // 0x294 PushS
	var_137_int = var_136_string + var_127_string; // 0x295 Add
	Trace(var_137_int); // 0x296 Func
}


func_782(var_143_bool, var_144_object)
{
	var_145_bool = 0; var_146_object = Obj(); // 0x30f PushV
	var_146_object = var_144_object; // 0x310 Mov
	func_804(var_146_object); // 0x311 NEW_2
	if(var_145_bool == 0) goto Label_790; // 0x313 JumpB
	var_143_bool = 1; // 0x314 MovB
	return 0; // 0x315 Return
	
Label_790:
	var_143_bool = 0; // 0x316 MovB
	return 0; // 0x317 Return
}


func_792(var_92_bool)
{
	var_94_int = 0; var_95_string = ""; // 0x319 PushV
	var_95_string = "oob1WhiteMask1"; // 0x31a MovS
	func_708(var_94_int, var_95_string); // 0x31b NEW_2
	var_98_int = 0; // 0x31d PushI
	var_99_bool = var_94_int == var_98_int; // 0x31e Eq
	if(var_99_bool == 0) goto Label_802; // 0x31f JumpB
	var_92_bool = 1; // 0x320 MovB
	return 0; // 0x321 Return
	
Label_802:
	var_92_bool = 0; // 0x322 MovB
	return 0; // 0x323 Return
}


func_665(var_108_string, var_109_bool)
{
	var_112_bool = 0; var_113_float = 0; var_114_float = 0; var_115_bool = 0; var_116_float = 0; var_117_float = 0; // 0x299 PushV
	lshHasAnimation(var_115_bool, var_108_string); // 0x29a Func
	var_118_bool = var_115_bool; // 0x29c Push
	if(var_118_bool == 0) goto Label_675; // 0x29d JumpB
	lshGetAnimTimes(var_108_string, var_116_float, var_117_float); // 0x29e Func
	lshPlayAnimation(var_116_float, var_117_float, var_109_bool); // 0x2a0 Func
	goto Label_679; // 0x2a2 Jump
	
Label_679:
	return 6; // 0x2a7 Return
	
Label_675:
	var_119_string = "Can't find lsh animation : "; // 0x2a3 PushS
	var_120_int = var_119_string + var_108_string; // 0x2a4 Add
	Trace(var_120_int); // 0x2a5 Func
}


func_413(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x19d PushV
	var_16_bool = var_4_bool == 0; // 0x19e NullEq
	if(var_16_bool == 0) goto Label_418; // 0x19f JumpB
	var_13_bool = 0; // 0x1a0 MovB
	return 2; // 0x1a1 Return
	
Label_418:
	var_17_float = 0; var_18_object = Obj(); // 0x1a2 PushV
	var_18_object = var_4_bool; // 0x1a3 MovT
	func_551(var_18_object); // 0x1a4 NEW_2
	var_15_float = sqrt(var_17_float); // 0x1a6 Sqrt2
	var_25_object = var_2_object; // 0x1a7 PushT
	if(var_25_object == 0) goto Label_426; // 0x1a8 JumpB
	var_15_float = var_15_float - var_1_object; // 0x1a9 Sub2
	
Label_426:
	var_13_bool = var_15_float < var_0_object; // 0x1aa LT2
	return 2; // 0x1ab Return
}


func_544(var_60_bool)
{
	var_60_bool = 1; // 0x220 MovB
	return 0; // 0x221 Return
}


func_546()
{
	StopAnimation(); // 0x222 Func
	StopGroup0(); // 0x224 Func
	return 0; // 0x226 Return
}


func_804(var_145_bool)
{
	var_147_int = 0; // 0x325 PushV
	func_718(var_147_int); // 0x326 NEW_2
	var_152_int = 11; // 0x328 PushI
	var_153_bool = var_147_int >= var_152_int; // 0x329 GE
	if(var_153_bool == 0) goto Label_813; // 0x32a JumpB
	var_145_bool = 1; // 0x32b MovB
	return 0; // 0x32c Return
	
Label_813:
	var_145_bool = 0; // 0x32d MovB
	return 0; // 0x32e Return
}


func_551(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x227 PushV
	GetPosition(var_22_cvector); // 0x228 Func
	GetPosition(var_23_cvector); // 0x22a ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x22c Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x22d Or2
	return 6; // 0x22e Return
}


func_680(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x2a8 PushV
	GetEyesHeight(var_30_float); // 0x2a9 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x2ab MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x2ac PushE
	var_32_float = var_30_float; // 0x2ad Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x2ae PopE
	var_33_string = "head"; // 0x2af PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x2b0 Func
	return 4; // 0x2b2 Return
}


func_559(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x22f PushV
	IsLoaded(var_14_bool); // 0x230 Func
	var_12_bool = var_14_bool; // 0x232 Mov
	return 2; // 0x233 Return
}


func_815(var_81_object)
{
	var_82_object = Obj(); var_83_object = Obj(); var_84_object = Obj(); var_85_object = Obj(); // 0x32f PushV
	GetMainOutdoorScene(var_84_object); // 0x330 Func
	var_86_bool = var_84_object == 0; // 0x332 NullEq
	if(var_86_bool == 0) goto Label_826; // 0x333 JumpB
	var_87_string = "Can't find main outdoor scene"; // 0x334 PushS
	Trace(var_87_string); // 0x335 Func
	var_85_object = 0; // 0x337 SetNull
	var_81_object = var_85_object; // 0x338 Mov
	return 4; // 0x339 Return
	
Label_826:
	GetMap(var_85_object); // 0x33a ObjFunc
	var_81_object = var_85_object; // 0x33c Mov
	return 4; // 0x33d Return
}


func_178(var_2_object, var_104_string)
{
	var_105_bool = 0; // 0xb3 PushV
	func_734(var_105_bool); // 0xb4 NEW_2
	var_106_bool = var_105_bool == 0; // 0xb6 Not
	if(var_106_bool == 0) goto Label_185; // 0xb7 JumpB
	return 0; // 0xb8 Return
	
Label_185:
	var_107_bool = var_104_string == var_2_object; // 0xb9 Eq
	if(var_107_bool == 0) goto Label_188; // 0xba JumpB
	return 0; // 0xbb Return
	
Label_188:
	var_108_string = ""; var_109_bool = 0; // 0xbc PushV
	var_108_string = var_104_string; // 0xbd Mov
	var_110_string = ""; // 0xbe PushS
	var_111_bool = var_104_string == var_110_string; // 0xbf Eq
	if(var_111_bool == 0) goto Label_195; // 0xc0 JumpB
	var_109_bool = 0; // 0xc1 MovB
	goto Label_196; // 0xc2 Jump
	
Label_196:
	func_665(var_108_string, var_109_bool); // 0xc4 NEW_2
	var_2_object = var_104_string; // 0xc6 TMov
	return 0; // 0xc7 Return
	
Label_195:
	var_109_bool = 1; // 0xc3 MovB
}


func_691()
{
	var_13_bool = 0; // 0x2b3 PushV
	func_734(var_13_bool); // 0x2b4 NEW_2
	if(var_13_bool == 0) goto Label_697; // 0x2b6 JumpB
	lshStopSpeech(); // 0x2b7 Func
	
Label_697:
	return 0; // 0x2b9 Return
}


func_564(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x234 PushV
	GetPosition(var_38_cvector); // 0x235 ObjFunc
	GetEyesHeight(var_37_float); // 0x237 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x239 PushE
	var_46_float = var_46_float + var_37_float; // 0x23a Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x23b PopE
	GetPosition(var_39_cvector); // 0x23c Func
	GetEyesHeight(var_37_float); // 0x23e Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x240 PushE
	var_47_float = var_47_float + var_37_float; // 0x241 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x242 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x243 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x244 PushE
	var_48_float = 0; // 0x245 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x246 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x247 Or
	var_50_float = sqrt(var_49_int); // 0x248 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x249 Div2
	var_41_cvector = -var_40_cvector; // 0x24a Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x24b Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x24c PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x24d PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x24e Xor2
	func_698(var_52_cvector, var_53_cvector); // 0x24f NEW_2
	var_60_int = 25; // 0x251 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x252 Mult
	var_62_int = var_51_float + var_61_float; // 0x253 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x254 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x255 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x256 Add2
	IsOverrideActive(var_44_bool); // 0x257 Func
	var_64_bool = var_44_bool; // 0x259 Push
	if(var_64_bool == 0) goto Label_605; // 0x25a JumpB
	var_25_bool = 0; // 0x25b MovB
	return 18; // 0x25c Return
	
Label_605:
	StopWorld(); // 0x25d Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x25f Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x261 PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x262 PushE
	Rotate(var_65_float, var_66_float); // 0x263 Func
	var_67_bool = 0; // 0x265 PushV
	func_734(var_67_bool); // 0x266 NEW_2
	if(var_67_bool == 0) goto Label_618; // 0x268 JumpB
	goto Label_626; // 0x269 Jump
	
Label_626:
	CameraWaitForPlayFinish(); // 0x272 Func
	ResumeWorld(); // 0x274 Func
	var_25_bool = 1; // 0x276 MovB
	return 18; // 0x277 Return
	
Label_618:
	var_68_string = "head"; // 0x26a PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x26b Func
	var_69_bool = var_45_bool; // 0x26d Push
	if(var_69_bool == 0) goto Label_626; // 0x26e JumpB
	var_70_string = "head"; // 0x26f PushS
	LookAsyncCamera(var_70_string); // 0x270 Func
}


func_698(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x2ba PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x2bb Or
	var_56_float = sqrt(var_57_int); // 0x2bc Sqrt2
	var_58_float = 0.0; // 0x2bd PushF
	var_59_bool = var_56_float < var_58_float; // 0x2be LT
	if(var_59_bool == 0) goto Label_706; // 0x2bf JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x2c0 MovV
	return 2; // 0x2c1 Return
	
Label_706:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x2c2 Div2
	return 2; // 0x2c3 Return
}


func_832(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x340 PushV
	var_79_string = "branch"; // 0x341 PushS
	GetVariable(var_79_string, var_78_int); // 0x342 Func
	var_80_int = 0; // 0x344 PushI
	var_81_bool = var_78_int == var_80_int; // 0x345 Eq
	if(var_81_bool == 0) goto Label_842; // 0x346 JumpB
	var_76_int = 1; // 0x347 MovI
	return 2; // 0x348 Return
	
Label_842:
	var_82_int = 1; // 0x34a PushI
	var_83_bool = var_78_int == var_82_int; // 0x34b Eq
	if(var_83_bool == 0) goto Label_847; // 0x34c JumpB
	var_76_int = 2; // 0x34d MovI
	return 2; // 0x34e Return
	
Label_847:
	var_76_int = 3; // 0x34f MovI
	return 2; // 0x350 Return
}


func_451(var_2_object, var_3_string)
{
	func_546(); // 0x1c4 NEW_2
	var_11_int = 10; // 0x1c6 PushI
	KillTimer(var_11_int); // 0x1c7 Func
	var_12_object = var_2_object; // 0x1c9 PushT
	if(var_12_object == 0) goto Label_463; // 0x1ca JumpB
	var_13_string = "head"; // 0x1cb PushS
	UnlookAsync(var_13_string); // 0x1cc Func
	var_2_object = 0; // 0x1ce TMovB
	
Label_463:
	var_3_string = 1; // 0x1cf TMovB
	return 0; // 0x1d0 Return
}


func_708(var_94_int, var_95_string)
{
	var_96_int = 0; var_97_int = 0; // 0x2c4 PushV
	GetVariable(var_95_string, var_97_int); // 0x2c5 Func
	var_94_int = var_97_int; // 0x2c7 Mov
	return 2; // 0x2c8 Return
}


func_713(var_92_float)
{
	var_93_float = 0; var_94_float = 0; // 0x2c9 PushV
	GetGameTime(var_94_float); // 0x2ca Func
	var_92_float = var_94_float; // 0x2cc Mov
	return 2; // 0x2cd Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_148; // 0x4f JumpB
	var_92_bool = 0; var_93_object = Obj(); // 0x50 PushV
	var_93_object = var_1_object; // 0x51 MovT
	func_792(var_93_object); // 0x52 NEW_2
	if(var_92_bool == 0) goto Label_105; // 0x54 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x55 PushV
	var_100_object = var_1_object; // 0x56 MovT
	var_101_object = var_0_object; // 0x57 MovT
	func_760(); // 0x58 NEW_2
	var_104_string = ""; // 0x5a PushV
	var_104_string = "Neutral"; // 0x5b MovS
	func_178(var_86_object, var_104_string); // 0x5c NEW_2
	var_121_int = 519919; // 0x5e PushI
	SetMessage(var_121_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_122_int = 519920; // 0x63 PushI
	var_123_int = 21090; // 0x64 PushI
	var_124_int = 21089; // 0x65 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x66 TObjFunc
	goto Label_148; // 0x68 Jump
	
Label_148:
	var_125_bool = 0; // 0x94 PushV
	func_734(var_125_bool); // 0x95 NEW_2
	if(var_125_bool == 0) goto Label_163; // 0x97 JumpB
	
Label_152:
	lshWaitForAnimEnd(); // 0x98 Func
	var_126_string = var_3_string; // 0x9a PushT
	if(var_126_string == 0) goto Label_157; // 0x9b JumpB
	goto Label_162; // 0x9c Jump
	
Label_162:
	goto Label_177; // 0xa2 Jump
	
Label_177:
	return 0; // 0xb1 Return
	
Label_157:
	var_127_string = ""; // 0x9d PushV
	var_127_string = var_2_object; // 0x9e MovT
	func_649(var_127_string); // 0x9f NEW_2
	goto Label_152; // 0xa1 Jump
	
Label_163:
	var_138_string = "all"; // 0xa3 PushS
	var_139_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_138_string, var_139_string); // 0xa5 Func
	
Label_167:
	WaitForAnimEnd(); // 0xa7 Func
	var_140_string = var_3_string; // 0xa9 PushT
	if(var_140_string == 0) goto Label_172; // 0xaa JumpB
	goto Label_177; // 0xab Jump
	
Label_172:
	var_141_string = "all"; // 0xac PushS
	var_142_string = "idle"; // 0xad PushS
	PlayAnimation(var_141_string, var_142_string); // 0xae Func
	goto Label_167; // 0xb0 Jump
	
Label_105:
	var_143_bool = 0; var_144_object = Obj(); // 0x69 PushV
	var_144_object = var_1_object; // 0x6a MovT
	func_782(var_143_bool, var_144_object); // 0x6b NEW_2
	var_154_bool = var_143_bool == 0; // 0x6d Not
	if(var_154_bool == 0) goto Label_126; // 0x6e JumpB
	var_155_string = ""; // 0x6f PushV
	var_155_string = "Neutral"; // 0x70 MovS
	func_178(var_86_object, var_155_string); // 0x71 NEW_2
	var_156_int = 520031; // 0x73 PushI
	SetMessage(var_156_int); // 0x74 TObjFunc
	ClearReplies(); // 0x76 TObjFunc
	var_157_int = 520032; // 0x78 PushI
	var_158_int = -1; // 0x79 PushI
	var_159_int = 21216; // 0x7a PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x7b TObjFunc
	goto Label_148; // 0x7d Jump
	
Label_126:
	var_160_bool = 0; var_161_object = Obj(); // 0x7e PushV
	var_161_object = var_1_object; // 0x7f MovT
	func_782(var_160_bool, var_161_object); // 0x80 NEW_2
	if(var_160_bool == 0) goto Label_146; // 0x82 JumpB
	var_162_string = ""; // 0x83 PushV
	var_162_string = "Neutral"; // 0x84 MovS
	func_178(var_86_object, var_162_string); // 0x85 NEW_2
	var_163_int = 524628; // 0x87 PushI
	SetMessage(var_163_int); // 0x88 TObjFunc
	ClearReplies(); // 0x8a TObjFunc
	var_164_int = 524629; // 0x8c PushI
	var_165_int = -1; // 0x8d PushI
	var_166_int = 25969; // 0x8e PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x8f TObjFunc
	goto Label_148; // 0x91 Jump
	
Label_146:
	return 0; // 0x92 Return
}


func_718(var_147_int)
{
	var_148_float = 0; var_149_float = 0; // 0x2ce PushV
	GetGameTime(var_149_float); // 0x2cf Func
	var_150_int = 0; // 0x2d1 PushV
	var_150_int = var_149_float; // 0x2d2 Mov
	var_151_int = 24; // 0x2d3 PushI
	var_147_int = var_150_int % var_151_int; // 0x2d4 Mod2
	return 2; // 0x2d5 Return
}


func_465()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x1d1 PushV
	WaitForAnimEnd(); // 0x1d2 Func
	var_33_bool = 0; // 0x1d4 PushV
	func_559(var_33_bool); // 0x1d5 NEW_2
	var_34_bool = var_33_bool == 0; // 0x1d7 Not
	if(var_34_bool == 0) goto Label_474; // 0x1d8 JumpB
	return 14; // 0x1d9 Return
	
Label_474:
	var_35_int = 0; // 0x1da PushV
	func_743(var_35_int); // 0x1db NEW_2
	var_26_int = var_35_int; // 0x1dc Mov
	var_27_int = 0; // 0x1de MovI
	
Label_479:
	var_48_bool = 0; // 0x1df PushV
	var_48_bool = 0; // 0x1e0 MovB
	var_49_int = 5; // 0x1e1 PushI
	var_50_bool = var_27_int < var_49_int; // 0x1e2 LT
	if(var_50_bool == 0) goto Label_489; // 0x1e3 JumpB
	var_51_bool = 0; // 0x1e4 PushV
	func_559(var_51_bool); // 0x1e5 NEW_2
	if(var_51_bool == 0) goto Label_489; // 0x1e7 JumpB
	var_48_bool = 1; // 0x1e8 MovB
	
Label_489:
	if(var_48_bool == 0) goto Label_541; // 0x1e9 JumpB
	var_52_int = 3; // 0x1ea PushI
	irand(var_28_int, var_52_int); // 0x1eb Func
	var_53_int = 0; // 0x1ed PushI
	var_54_bool = var_28_int == var_53_int; // 0x1ee Eq
	if(var_54_bool == 0) goto Label_513; // 0x1ef JumpB
	var_55_int = var_26_int; // 0x1f0 Push
	if(var_55_int == 0) goto Label_512; // 0x1f1 JumpB
	irand(var_29_int, var_26_int); // 0x1f2 Func
	var_56_string = "all"; // 0x1f4 PushS
	var_57_string = ""; var_58_int = 0; // 0x1f5 PushV
	var_58_int = var_29_int; // 0x1f6 Mov
	func_736(var_57_string, var_58_int); // 0x1f7 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x1f9 Func
	WaitForAnimEnd(var_30_bool); // 0x1fb Func
	var_59_bool = var_30_bool == 0; // 0x1fd Not
	if(var_59_bool == 0) goto Label_512; // 0x1fe JumpB
	goto Label_541; // 0x1ff Jump
	
Label_541:
	ResetAAS(); // 0x21d Func
	return 14; // 0x21f Return
	
Label_512:
	goto Label_530; // 0x200 Jump
	
Label_530:
	var_60_bool = 0; // 0x212 PushV
	func_544(var_60_bool); // 0x213 NEW_2
	var_61_bool = var_60_bool == 0; // 0x215 Not
	if(var_61_bool == 0) goto Label_536; // 0x216 JumpB
	goto Label_541; // 0x217 Jump
	
Label_536:
	ResetAAS(); // 0x218 Func
	var_62_int = 1; // 0x21a PushI
	var_27_int = var_27_int + var_62_int; // 0x21b Add2
	goto Label_479; // 0x21c Jump
	
Label_513:
	var_63_int = 1; // 0x201 PushI
	var_64_bool = var_28_int == var_63_int; // 0x202 Eq
	if(var_64_bool == 0) goto Label_527; // 0x203 JumpB
	var_65_int = 4; // 0x204 PushI
	rand(var_31_float, var_65_int); // 0x205 Func
	var_66_int = 1; // 0x207 PushI
	var_67_int = var_31_float + var_66_int; // 0x208 Add
	Sleep(var_67_int, var_32_bool); // 0x209 Func
	var_68_bool = var_32_bool == 0; // 0x20b Not
	if(var_68_bool == 0) goto Label_526; // 0x20c JumpB
	goto Label_541; // 0x20d Jump
	
Label_526:
	goto Label_530; // 0x20e Jump
	
Label_527:
	var_69_int = var_27_int; // 0x20f Push
	if(var_69_int == 0) goto Label_530; // 0x210 JumpB
	goto Label_541; // 0x211 Jump
}


func_726(var_73_int)
{
	var_73_int = 515569; // 0x2d6 MovI
	return 0; // 0x2d7 Return
}


func_728(var_72_int)
{
	var_72_int = 503354; // 0x2d8 MovI
	return 0; // 0x2d9 Return
}


func_730(var_74_string)
{
	var_74_string = "ui/NPC_wmask.png"; // 0x2da MovS
	return 0; // 0x2db Return
}


func_732(var_75_string)
{
	var_75_string = "ui/NPC_wmask_b.png"; // 0x2dc MovS
	return 0; // 0x2dd Return
}


func_734(var_67_bool)
{
	var_67_bool = 0; // 0x2de MovB
	return 0; // 0x2df Return
}


func_736(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x2e0 PushV
	var_44_string = "idle"; // 0x2e1 MovS
	var_45_int = var_42_int; // 0x2e2 Push
	if(var_45_int == 0) goto Label_741; // 0x2e3 JumpB
	var_44_string = var_44_string + var_42_int; // 0x2e4 Add2
	
Label_741:
	var_41_string = var_44_string; // 0x2e5 Mov
	return 2; // 0x2e6 Return
}


func_743(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x2e7 PushV
	var_38_int = 0; // 0x2e8 MovI
	
Label_745:
	var_40_string = "all"; // 0x2e9 PushS
	var_41_string = ""; var_42_int = 0; // 0x2ea PushV
	var_42_int = var_38_int; // 0x2eb Mov
	func_736(var_41_string, var_42_int); // 0x2ec NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x2ee Func
	var_46_bool = var_39_bool == 0; // 0x2f0 Not
	if(var_46_bool == 0) goto Label_755; // 0x2f1 JumpB
	goto Label_758; // 0x2f2 Jump
	
Label_758:
	var_35_int = var_38_int; // 0x2f6 Mov
	return 4; // 0x2f7 Return
	
Label_755:
	var_47_int = 1; // 0x2f3 PushI
	var_38_int = var_38_int + var_47_int; // 0x2f4 Add2
	goto Label_745; // 0x2f5 Jump
}


func_632()
{
	var_169_bool = 0; var_170_bool = 0; // 0x278 PushV
	CameraSwitchToNormal(); // 0x279 Func
	var_171_bool = 0; // 0x27b PushV
	func_734(var_171_bool); // 0x27c NEW_2
	if(var_171_bool == 0) goto Label_640; // 0x27e JumpB
	goto Label_648; // 0x27f Jump
	
Label_648:
	return 2; // 0x288 Return
	
Label_640:
	var_172_string = "head"; // 0x280 PushS
	HasAnimationTrack(var_170_bool, var_172_string); // 0x281 Func
	var_173_bool = var_170_bool; // 0x283 Push
	if(var_173_bool == 0) goto Label_648; // 0x284 JumpB
	var_174_string = "head"; // 0x285 PushS
	UnlookAsync(var_174_string); // 0x286 Func
}


func_760()
{
	var_102_string = "oob1WhiteMask1"; // 0x2f9 PushS
	var_103_int = 1; // 0x2fa PushI
	SetVariable(var_102_string, var_103_int); // 0x2fb Func
	return 0; // 0x2fd Return
}


func_766()
{
	var_79_object = Obj(); var_80_object = Obj(); // 0x2fe PushV
	var_81_object = Obj(); // 0x2ff PushV
	func_815(var_81_object); // 0x300 NEW_2
	var_80_object = var_81_object; // 0x301 Mov
	var_88_string = "b1BigVlad11Hours"; // 0x303 PushS
	var_89_string = "pt_map_bigvlad"; // 0x304 PushS
	var_90_int = 3; // 0x305 PushI
	var_91_int = 524625; // 0x306 PushI
	var_92_float = 0; // 0x307 PushV
	func_713(var_92_float); // 0x308 NEW_2
	AddMark(var_88_string, var_89_string, var_90_int, var_91_int, var_92_float); // 0x30a ObjFunc
	return 2; // 0x30c Return
}


