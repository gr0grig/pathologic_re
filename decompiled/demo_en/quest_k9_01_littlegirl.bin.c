task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xbe PushI
	if(var_14_int == 0) goto Label_383; // 0xbf JumpB
	func_775(); // 0xc1 NEW_2
	var_16_int = 31225; // 0xc3 PushI
	var_17_bool = var_12_bool == var_16_int; // 0xc4 Eq
	if(var_17_bool == 0) goto Label_253; // 0xc5 JumpB
	var_18_bool = 0; var_19_object = Obj(); // 0xc6 PushV
	var_19_object = var_1_object; // 0xc7 MovT
	func_829(var_19_object); // 0xc8 NEW_2
	if(var_18_bool == 0) goto Label_233; // 0xca JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0xcb PushV
	var_26_object = var_1_object; // 0xcc MovT
	var_27_object = var_0_object; // 0xcd MovT
	func_803(); // 0xce NEW_2
	var_30_object = Obj(); var_31_object = Obj(); // 0xd0 PushV
	var_30_object = var_1_object; // 0xd1 MovT
	var_31_object = var_0_object; // 0xd2 MovT
	func_809(); // 0xd3 NEW_2
	var_63_string = ""; // 0xd5 PushV
	var_63_string = "Neutral"; // 0xd6 MovS
	func_167(var_13_bool, var_63_string); // 0xd7 NEW_2
	var_80_int = 529769; // 0xd9 PushI
	SetMessage(var_80_int); // 0xda TObjFunc
	ClearReplies(); // 0xdc TObjFunc
	var_81_int = 529773; // 0xde PushI
	var_82_int = 31230; // 0xdf PushI
	var_83_int = 31229; // 0xe0 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0xe1 TObjFunc
	var_84_int = 529776; // 0xe3 PushI
	var_85_int = 31233; // 0xe4 PushI
	var_86_int = 31232; // 0xe5 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0xe6 TObjFunc
	return 0; // 0xe8 Return
	
Label_233:
	var_87_string = ""; // 0xe9 PushV
	var_87_string = "Neutral"; // 0xea MovS
	func_167(var_13_bool, var_87_string); // 0xeb NEW_2
	var_88_int = 529770; // 0xed PushI
	SetMessage(var_88_int); // 0xee TObjFunc
	ClearReplies(); // 0xf0 TObjFunc
	var_89_int = 529771; // 0xf2 PushI
	var_90_int = -1; // 0xf3 PushI
	var_91_int = 31227; // 0xf4 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xf5 TObjFunc
	var_92_int = 529772; // 0xf7 PushI
	var_93_int = -1; // 0xf8 PushI
	var_94_int = 31228; // 0xf9 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xfa TObjFunc
	return 0; // 0xfc Return
	
Label_253:
	var_95_int = 31233; // 0xfd PushI
	var_96_bool = var_12_bool == var_95_int; // 0xfe Eq
	if(var_96_bool == 0) goto Label_271; // 0xff JumpB
	var_97_string = ""; // 0x100 PushV
	var_97_string = "Neutral"; // 0x101 MovS
	func_167(var_13_bool, var_97_string); // 0x102 NEW_2
	var_98_int = 529777; // 0x104 PushI
	SetMessage(var_98_int); // 0x105 TObjFunc
	ClearReplies(); // 0x107 TObjFunc
	var_99_int = 529778; // 0x109 PushI
	var_100_int = 31230; // 0x10a PushI
	var_101_int = 31234; // 0x10b PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x10c TObjFunc
	return 0; // 0x10e Return
	
Label_271:
	var_102_int = 31230; // 0x10f PushI
	var_103_bool = var_12_bool == var_102_int; // 0x110 Eq
	if(var_103_bool == 0) goto Label_289; // 0x111 JumpB
	var_104_string = ""; // 0x112 PushV
	var_104_string = "Neutral"; // 0x113 MovS
	func_167(var_13_bool, var_104_string); // 0x114 NEW_2
	var_105_int = 529774; // 0x116 PushI
	SetMessage(var_105_int); // 0x117 TObjFunc
	ClearReplies(); // 0x119 TObjFunc
	var_106_int = 529775; // 0x11b PushI
	var_107_int = 31236; // 0x11c PushI
	var_108_int = 31231; // 0x11d PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_109_int = 31236; // 0x121 PushI
	var_110_bool = var_12_bool == var_109_int; // 0x122 Eq
	if(var_110_bool == 0) goto Label_307; // 0x123 JumpB
	var_111_string = ""; // 0x124 PushV
	var_111_string = "Neutral"; // 0x125 MovS
	func_167(var_13_bool, var_111_string); // 0x126 NEW_2
	var_112_int = 529779; // 0x128 PushI
	SetMessage(var_112_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_113_int = 529780; // 0x12d PushI
	var_114_int = 31238; // 0x12e PushI
	var_115_int = 31237; // 0x12f PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_116_int = 31238; // 0x133 PushI
	var_117_bool = var_12_bool == var_116_int; // 0x134 Eq
	if(var_117_bool == 0) goto Label_330; // 0x135 JumpB
	var_118_string = ""; // 0x136 PushV
	var_118_string = "Neutral"; // 0x137 MovS
	func_167(var_13_bool, var_118_string); // 0x138 NEW_2
	var_119_int = 529781; // 0x13a PushI
	SetMessage(var_119_int); // 0x13b TObjFunc
	ClearReplies(); // 0x13d TObjFunc
	var_120_int = 529782; // 0x13f PushI
	var_121_int = 31243; // 0x140 PushI
	var_122_int = 31239; // 0x141 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x142 TObjFunc
	var_123_int = 529783; // 0x144 PushI
	var_124_int = 31241; // 0x145 PushI
	var_125_int = 31240; // 0x146 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x147 TObjFunc
	return 0; // 0x149 Return
	
Label_330:
	var_126_int = 31241; // 0x14a PushI
	var_127_bool = var_12_bool == var_126_int; // 0x14b Eq
	if(var_127_bool == 0) goto Label_348; // 0x14c JumpB
	var_128_string = ""; // 0x14d PushV
	var_128_string = "Neutral"; // 0x14e MovS
	func_167(var_13_bool, var_128_string); // 0x14f NEW_2
	var_129_int = 529784; // 0x151 PushI
	SetMessage(var_129_int); // 0x152 TObjFunc
	ClearReplies(); // 0x154 TObjFunc
	var_130_int = 529785; // 0x156 PushI
	var_131_int = 31243; // 0x157 PushI
	var_132_int = 31242; // 0x158 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x159 TObjFunc
	return 0; // 0x15b Return
	
Label_348:
	var_133_int = 31243; // 0x15c PushI
	var_134_bool = var_12_bool == var_133_int; // 0x15d Eq
	if(var_134_bool == 0) goto Label_371; // 0x15e JumpB
	var_135_string = ""; // 0x15f PushV
	var_135_string = "Neutral"; // 0x160 MovS
	func_167(var_13_bool, var_135_string); // 0x161 NEW_2
	var_136_int = 529786; // 0x163 PushI
	SetMessage(var_136_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_137_int = 529787; // 0x168 PushI
	var_138_int = -1; // 0x169 PushI
	var_139_int = 31245; // 0x16a PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x16b TObjFunc
	var_140_int = 529788; // 0x16d PushI
	var_141_int = -1; // 0x16e PushI
	var_142_int = 31246; // 0x16f PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x170 TObjFunc
	return 0; // 0x172 Return
	
Label_371:
	var_3_string = 1; // 0x173 TMovB
	var_143_bool = 0; // 0x174 PushV
	func_920(var_143_bool); // 0x175 NEW_2
	if(var_143_bool == 0) goto Label_379; // 0x177 JumpB
	lshStopAnimation(); // 0x178 Func
	goto Label_381; // 0x17a Jump
	
Label_381:
	return 0; // 0x17d Return
	
Label_379:
	StopAnimation(); // 0x17b Func
	
Label_383:
	return 0; // 0x17f Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_535(var_11_bool, var_12_object); // 0x188 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x18a PushV
	var_17_object = var_12_object; // 0x18b Mov
	TaskCall(0); // 0x18c TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x18d NEW_2
	TaskReturn(); // 0x18e TaskReturn
	return 0; // 0x190 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1b8 PushS
	var_14_bool = var_12_string == var_13_string; // 0x1b9 Eq
	if(var_14_bool == 0) goto Label_446; // 0x1ba JumpB
	func_419(var_12_string); // 0x1bc NEW_2
	
Label_446:
	return 0; // 0x1be Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1bf PushT
	if(var_12_int == 0) goto Label_452; // 0x1c0 JumpB
	func_535(var_10_bool, var_11_bool); // 0x1c2 NEW_2
	
Label_452:
	var_16_bool = 0; // 0x1c4 PushV
	var_16_bool = 0; // 0x1c5 MovB
	var_17_int = var_5_int; // 0x1c6 PushT
	if(var_17_int == 0) goto Label_461; // 0x1c7 JumpB
	var_18_bool = 0; // 0x1c8 PushV
	func_468(var_18_bool); // 0x1c9 NEW_2
	if(var_18_bool == 0) goto Label_461; // 0x1cb JumpB
	var_16_bool = 1; // 0x1cc MovB
	
Label_461:
	if(var_16_bool == 0) goto Label_467; // 0x1cd JumpB
	var_19_object = Obj(); // 0x1ce PushV
	func_782(var_19_object); // 0x1cf NEW_2
	RemoveActor(var_19_object); // 0x1d1 Func
	
Label_467:
	return 0; // 0x1d3 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x201 PushI
	var_14_bool = var_12_int == var_13_int; // 0x202 Eq
	if(var_14_bool == 0) goto Label_534; // 0x203 JumpB
	var_15_bool = 0; // 0x204 PushV
	func_497(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x205 NEW_2
	if(var_15_bool == 0) goto Label_528; // 0x207 JumpB
	var_28_bool = var_2_object == 0; // 0x208 Not
	if(var_28_bool == 0) goto Label_527; // 0x209 JumpB
	var_29_object = Obj(); // 0x20a PushV
	var_29_object = var_4_bool; // 0x20b MovT
	func_764(var_29_object); // 0x20c NEW_2
	var_2_object = 1; // 0x20e TMovB
	
Label_527:
	goto Label_534; // 0x20f Jump
	
Label_534:
	return 0; // 0x216 Return
	
Label_528:
	var_36_object = var_2_object; // 0x210 PushT
	if(var_36_object == 0) goto Label_534; // 0x211 JumpB
	var_37_string = "head"; // 0x212 PushS
	UnlookAsync(var_37_string); // 0x213 Func
	var_2_object = 0; // 0x215 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x180 PushV
	var_12_float = 300; // 0x181 MovI
	var_13_float = 100; // 0x182 MovI
	func_401(var_11_bool, var_12_float, var_13_float); // 0x183 NEW_2
	return 0; // 0x185 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_648(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_914(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_912(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_916(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_918(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_895(var_78_int); // 0x22 NEW_2
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
	var_189_bool = var_26_bool == 0; // 0x38 Not
	if(var_189_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_190_object = Obj(); // 0x3f PushV
	var_190_object = var_17_object; // 0x40 Mov
	func_716(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_643(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x283 PushV
	IsLoaded(var_25_bool); // 0x284 Func
	var_23_bool = var_25_bool; // 0x286 Mov
	return 2; // 0x287 Return
}


func_775()
{
	var_15_bool = 0; // 0x307 PushV
	func_920(var_15_bool); // 0x308 NEW_2
	if(var_15_bool == 0) goto Label_781; // 0x30a JumpB
	lshStopSpeech(); // 0x30b Func
	
Label_781:
	return 0; // 0x30d Return
}


func_648(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x288 PushV
	GetPosition(var_40_cvector); // 0x289 ObjFunc
	GetEyesHeight(var_39_float); // 0x28b ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x28d PushE
	var_48_float = var_48_float + var_39_float; // 0x28e Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x28f PopE
	GetPosition(var_41_cvector); // 0x290 Func
	GetEyesHeight(var_39_float); // 0x292 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x294 PushE
	var_49_float = var_49_float + var_39_float; // 0x295 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x296 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x297 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x298 PushE
	var_50_float = 0; // 0x299 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x29a PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x29b Or
	var_52_float = sqrt(var_51_int); // 0x29c Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x29d Div2
	var_43_cvector = -var_42_cvector; // 0x29e Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x29f Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x2a0 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x2a1 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x2a2 Xor2
	func_788(var_54_cvector, var_55_cvector); // 0x2a3 NEW_2
	var_62_int = 25; // 0x2a5 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x2a6 Mult
	var_64_int = var_53_float + var_63_float; // 0x2a7 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x2a8 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x2a9 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x2aa Add2
	IsOverrideActive(var_46_bool); // 0x2ab Func
	var_66_bool = var_46_bool; // 0x2ad Push
	if(var_66_bool == 0) goto Label_689; // 0x2ae JumpB
	var_27_bool = 0; // 0x2af MovB
	return 18; // 0x2b0 Return
	
Label_689:
	StopWorld(); // 0x2b1 Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x2b3 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x2b5 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x2b6 PushE
	Rotate(var_67_float, var_68_float); // 0x2b7 Func
	var_69_bool = 0; // 0x2b9 PushV
	func_920(var_69_bool); // 0x2ba NEW_2
	if(var_69_bool == 0) goto Label_702; // 0x2bc JumpB
	goto Label_710; // 0x2bd Jump
	
Label_710:
	CameraWaitForPlayFinish(); // 0x2c6 Func
	ResumeWorld(); // 0x2c8 Func
	var_27_bool = 1; // 0x2ca MovB
	return 18; // 0x2cb Return
	
Label_702:
	var_70_string = "head"; // 0x2be PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x2bf Func
	var_71_bool = var_47_bool; // 0x2c1 Push
	if(var_71_bool == 0) goto Label_710; // 0x2c2 JumpB
	var_72_string = "head"; // 0x2c3 PushS
	LookAsyncCamera(var_72_string); // 0x2c4 Func
}


func_782(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x30e PushV
	self(var_21_object); // 0x30f Func
	var_19_object = var_21_object; // 0x311 Mov
	return 2; // 0x312 Return
}


func_912(var_75_int)
{
	var_75_int = 515561; // 0x390 MovI
	return 0; // 0x391 Return
}


func_401(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x191 PushV
	var_6_int = 0; // 0x192 TMovB
	
Label_403:
	var_18_int = 3; // 0x193 PushI
	rand(var_16_float, var_18_int); // 0x194 Func
	var_19_int = 3; // 0x196 PushI
	var_20_int = var_16_float + var_19_int; // 0x197 Add
	Sleep(var_20_int, var_17_bool); // 0x198 Func
	var_6_int = 1; // 0x19a TMovB
	var_21_float = 0; var_22_float = 0; // 0x19b PushV
	var_21_float = var_12_float; // 0x19c Mov
	var_22_float = var_13_float; // 0x19d Mov
	func_470(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x19e NEW_2
	var_6_int = 0; // 0x1a0 TMovB
	goto Label_403; // 0x1a1 Jump
}


func_914(var_74_int)
{
	var_74_int = 503346; // 0x392 MovI
	return 0; // 0x393 Return
}


func_916(var_76_string)
{
	var_76_string = "ui/NPC_Citizen1.png"; // 0x394 MovS
	return 0; // 0x395 Return
}


func_788(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x314 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x315 Or
	var_58_float = sqrt(var_59_int); // 0x316 Sqrt2
	var_60_float = 0.0; // 0x317 PushF
	var_61_bool = var_58_float < var_60_float; // 0x318 LT
	if(var_61_bool == 0) goto Label_796; // 0x319 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x31a MovV
	return 2; // 0x31b Return
	
Label_796:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x31c Div2
	return 2; // 0x31d Return
}


func_918(var_77_string)
{
	var_77_string = "ui/NPC_Citizen1_b.png"; // 0x396 MovS
	return 0; // 0x397 Return
}


func_535(var_2_object, var_3_string)
{
	func_630(); // 0x218 NEW_2
	var_13_int = 10; // 0x21a PushI
	KillTimer(var_13_int); // 0x21b Func
	var_14_object = var_2_object; // 0x21d PushT
	if(var_14_object == 0) goto Label_547; // 0x21e JumpB
	var_15_string = "head"; // 0x21f PushS
	UnlookAsync(var_15_string); // 0x220 Func
	var_2_object = 0; // 0x222 TMovB
	
Label_547:
	var_3_string = 1; // 0x223 TMovB
	return 0; // 0x224 Return
}


func_920(var_69_bool)
{
	var_69_bool = 0; // 0x398 MovB
	return 0; // 0x399 Return
}


func_922(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x39a PushV
	var_55_string = "idle"; // 0x39b MovS
	var_56_int = var_53_int; // 0x39c Push
	if(var_56_int == 0) goto Label_927; // 0x39d JumpB
	var_55_string = var_55_string + var_53_int; // 0x39e Add2
	
Label_927:
	var_52_string = var_55_string; // 0x39f Mov
	return 2; // 0x3a0 Return
}


func_798(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x31e PushV
	GetVariable(var_97_string, var_99_int); // 0x31f Func
	var_96_int = var_99_int; // 0x321 Mov
	return 2; // 0x322 Return
}


func_929(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x3a1 PushV
	var_49_int = 0; // 0x3a2 MovI
	
Label_931:
	var_51_string = "all"; // 0x3a3 PushS
	var_52_string = ""; var_53_int = 0; // 0x3a4 PushV
	var_53_int = var_49_int; // 0x3a5 Mov
	func_922(var_52_string, var_53_int); // 0x3a6 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x3a8 Func
	var_57_bool = var_50_bool == 0; // 0x3aa Not
	if(var_57_bool == 0) goto Label_941; // 0x3ab JumpB
	goto Label_944; // 0x3ac Jump
	
Label_944:
	var_46_int = var_49_int; // 0x3b0 Mov
	return 4; // 0x3b1 Return
	
Label_941:
	var_58_int = 1; // 0x3ad PushI
	var_49_int = var_49_int + var_58_int; // 0x3ae Add2
	goto Label_931; // 0x3af Jump
}


func_803()
{
	var_104_string = "ook9Littlegirl1"; // 0x324 PushS
	var_105_int = 1; // 0x325 PushI
	SetVariable(var_104_string, var_105_int); // 0x326 Func
	return 0; // 0x328 Return
}


func_419(var_5_int)
{
	var_5_int = 1; // 0x1a3 TMovB
	var_15_bool = 0; // 0x1a4 PushV
	var_15_bool = 0; // 0x1a5 MovB
	var_16_bool = 0; // 0x1a6 PushV
	func_643(var_16_bool); // 0x1a7 NEW_2
	var_19_bool = var_16_bool == 0; // 0x1a9 Not
	if(var_19_bool == 0) goto Label_432; // 0x1aa JumpB
	var_20_bool = 0; // 0x1ab PushV
	func_468(var_20_bool); // 0x1ac NEW_2
	if(var_20_bool == 0) goto Label_432; // 0x1ae JumpB
	var_15_bool = 1; // 0x1af MovB
	
Label_432:
	if(var_15_bool == 0) goto Label_438; // 0x1b0 JumpB
	var_21_object = Obj(); // 0x1b1 PushV
	func_782(var_21_object); // 0x1b2 NEW_2
	RemoveActor(var_21_object); // 0x1b4 Func
	
Label_438:
	return 0; // 0x1b6 Return
}


func_549()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x225 PushV
	WaitForAnimEnd(); // 0x226 Func
	var_44_bool = 0; // 0x228 PushV
	func_643(var_44_bool); // 0x229 NEW_2
	var_45_bool = var_44_bool == 0; // 0x22b Not
	if(var_45_bool == 0) goto Label_558; // 0x22c JumpB
	return 14; // 0x22d Return
	
Label_558:
	var_46_int = 0; // 0x22e PushV
	func_929(var_46_int); // 0x22f NEW_2
	var_37_int = var_46_int; // 0x230 Mov
	var_38_int = 0; // 0x232 MovI
	
Label_563:
	var_59_bool = 0; // 0x233 PushV
	var_59_bool = 0; // 0x234 MovB
	var_60_int = 5; // 0x235 PushI
	var_61_bool = var_38_int < var_60_int; // 0x236 LT
	if(var_61_bool == 0) goto Label_573; // 0x237 JumpB
	var_62_bool = 0; // 0x238 PushV
	func_643(var_62_bool); // 0x239 NEW_2
	if(var_62_bool == 0) goto Label_573; // 0x23b JumpB
	var_59_bool = 1; // 0x23c MovB
	
Label_573:
	if(var_59_bool == 0) goto Label_625; // 0x23d JumpB
	var_63_int = 3; // 0x23e PushI
	irand(var_39_int, var_63_int); // 0x23f Func
	var_64_int = 0; // 0x241 PushI
	var_65_bool = var_39_int == var_64_int; // 0x242 Eq
	if(var_65_bool == 0) goto Label_597; // 0x243 JumpB
	var_66_int = var_37_int; // 0x244 Push
	if(var_66_int == 0) goto Label_596; // 0x245 JumpB
	irand(var_40_int, var_37_int); // 0x246 Func
	var_67_string = "all"; // 0x248 PushS
	var_68_string = ""; var_69_int = 0; // 0x249 PushV
	var_69_int = var_40_int; // 0x24a Mov
	func_922(var_68_string, var_69_int); // 0x24b NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x24d Func
	WaitForAnimEnd(var_41_bool); // 0x24f Func
	var_70_bool = var_41_bool == 0; // 0x251 Not
	if(var_70_bool == 0) goto Label_596; // 0x252 JumpB
	goto Label_625; // 0x253 Jump
	
Label_625:
	ResetAAS(); // 0x271 Func
	return 14; // 0x273 Return
	
Label_596:
	goto Label_614; // 0x254 Jump
	
Label_614:
	var_71_bool = 0; // 0x266 PushV
	func_628(var_71_bool); // 0x267 NEW_2
	var_72_bool = var_71_bool == 0; // 0x269 Not
	if(var_72_bool == 0) goto Label_620; // 0x26a JumpB
	goto Label_625; // 0x26b Jump
	
Label_620:
	ResetAAS(); // 0x26c Func
	var_73_int = 1; // 0x26e PushI
	var_38_int = var_38_int + var_73_int; // 0x26f Add2
	goto Label_563; // 0x270 Jump
	
Label_597:
	var_74_int = 1; // 0x255 PushI
	var_75_bool = var_39_int == var_74_int; // 0x256 Eq
	if(var_75_bool == 0) goto Label_611; // 0x257 JumpB
	var_76_int = 4; // 0x258 PushI
	rand(var_42_float, var_76_int); // 0x259 Func
	var_77_int = 1; // 0x25b PushI
	var_78_int = var_42_float + var_77_int; // 0x25c Add
	Sleep(var_78_int, var_43_bool); // 0x25d Func
	var_79_bool = var_43_bool == 0; // 0x25f Not
	if(var_79_bool == 0) goto Label_610; // 0x260 JumpB
	goto Label_625; // 0x261 Jump
	
Label_610:
	goto Label_614; // 0x262 Jump
	
Label_611:
	var_80_int = var_38_int; // 0x263 Push
	if(var_80_int == 0) goto Label_614; // 0x264 JumpB
	goto Label_625; // 0x265 Jump
}


func_167(var_2_object, var_139_string)
{
	var_140_bool = 0; // 0xa8 PushV
	func_920(var_140_bool); // 0xa9 NEW_2
	var_141_bool = var_140_bool == 0; // 0xab Not
	if(var_141_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_142_bool = var_139_string == var_2_object; // 0xae Eq
	if(var_142_bool == 0) goto Label_177; // 0xaf JumpB
	return 0; // 0xb0 Return
	
Label_177:
	var_143_string = ""; var_144_bool = 0; // 0xb1 PushV
	var_143_string = var_139_string; // 0xb2 Mov
	var_145_string = ""; // 0xb3 PushS
	var_146_bool = var_139_string == var_145_string; // 0xb4 Eq
	if(var_146_bool == 0) goto Label_184; // 0xb5 JumpB
	var_144_bool = 0; // 0xb6 MovB
	goto Label_185; // 0xb7 Jump
	
Label_185:
	func_749(var_143_string, var_144_bool); // 0xb9 NEW_2
	var_2_object = var_139_string; // 0xbb TMov
	return 0; // 0xbc Return
	
Label_184:
	var_144_bool = 1; // 0xb8 MovB
}


func_809()
{
	var_108_int = 0; var_109_string = ""; // 0x32a PushV
	var_109_string = "k9q01ChildTalk"; // 0x32b MovS
	func_798(var_108_int, var_109_string); // 0x32c NEW_2
	var_110_int = 0; // 0x32e PushI
	var_111_bool = var_108_int == var_110_int; // 0x32f Eq
	if(var_111_bool == 0) goto Label_828; // 0x330 JumpB
	var_112_string = "k9q01ChildTalk"; // 0x331 PushS
	var_113_int = 1; // 0x332 PushI
	SetVariable(var_112_string, var_113_int); // 0x333 Func
	var_114_string = "k9q01"; // 0x335 PushS
	var_115_int = 7; // 0x336 PushI
	SetVariable(var_114_string, var_115_int); // 0x337 Func
	func_841(); // 0x33a NEW_2
	
Label_828:
	return 0; // 0x33c Return
}


func_829(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x33e PushV
	var_97_string = "ook9Littlegirl1"; // 0x33f MovS
	func_798(var_96_int, var_97_string); // 0x340 NEW_2
	var_100_int = 0; // 0x342 PushI
	var_101_bool = var_96_int == var_100_int; // 0x343 Eq
	if(var_101_bool == 0) goto Label_839; // 0x344 JumpB
	var_94_bool = 1; // 0x345 MovB
	return 0; // 0x346 Return
	
Label_839:
	var_94_bool = 0; // 0x347 MovB
	return 0; // 0x348 Return
}


func_841()
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x349 PushV
	var_118_int = 524; // 0x34a PushI
	var_119_int = 1; // 0x34b PushI
	var_120_int = 529816; // 0x34c PushI
	CreateDiaryEntry(var_117_object, var_118_int, var_119_int, var_120_int); // 0x34d Func
	var_121_bool = 0; var_122_object = Obj(); var_123_int = 0; // 0x34f PushV
	var_122_object = var_117_object; // 0x350 Mov
	var_123_int = 517; // 0x351 MovI
	func_867(var_121_bool, var_122_object, var_123_int); // 0x352 NEW_2
	return 2; // 0x354 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_137; // 0x4f JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x50 PushV
	var_95_object = var_1_object; // 0x51 MovT
	func_829(var_95_object); // 0x52 NEW_2
	if(var_94_bool == 0) goto Label_115; // 0x54 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x55 PushV
	var_102_object = var_1_object; // 0x56 MovT
	var_103_object = var_0_object; // 0x57 MovT
	func_803(); // 0x58 NEW_2
	var_106_object = Obj(); var_107_object = Obj(); // 0x5a PushV
	var_106_object = var_1_object; // 0x5b MovT
	var_107_object = var_0_object; // 0x5c MovT
	func_809(); // 0x5d NEW_2
	var_139_string = ""; // 0x5f PushV
	var_139_string = "Neutral"; // 0x60 MovS
	func_167(var_88_object, var_139_string); // 0x61 NEW_2
	var_156_int = 529769; // 0x63 PushI
	SetMessage(var_156_int); // 0x64 TObjFunc
	ClearReplies(); // 0x66 TObjFunc
	var_157_int = 529773; // 0x68 PushI
	var_158_int = 31230; // 0x69 PushI
	var_159_int = 31229; // 0x6a PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x6b TObjFunc
	var_160_int = 529776; // 0x6d PushI
	var_161_int = 31233; // 0x6e PushI
	var_162_int = 31232; // 0x6f PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x70 TObjFunc
	goto Label_137; // 0x72 Jump
	
Label_137:
	var_163_bool = 0; // 0x89 PushV
	func_920(var_163_bool); // 0x8a NEW_2
	if(var_163_bool == 0) goto Label_152; // 0x8c JumpB
	
Label_141:
	lshWaitForAnimEnd(); // 0x8d Func
	var_164_string = var_3_string; // 0x8f PushT
	if(var_164_string == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_151:
	goto Label_166; // 0x97 Jump
	
Label_166:
	return 0; // 0xa6 Return
	
Label_146:
	var_165_string = ""; // 0x92 PushV
	var_165_string = var_2_object; // 0x93 MovT
	func_733(var_165_string); // 0x94 NEW_2
	goto Label_141; // 0x96 Jump
	
Label_152:
	var_176_string = "all"; // 0x98 PushS
	var_177_string = "idle"; // 0x99 PushS
	PlayAnimation(var_176_string, var_177_string); // 0x9a Func
	
Label_156:
	WaitForAnimEnd(); // 0x9c Func
	var_178_string = var_3_string; // 0x9e PushT
	if(var_178_string == 0) goto Label_161; // 0x9f JumpB
	goto Label_166; // 0xa0 Jump
	
Label_161:
	var_179_string = "all"; // 0xa1 PushS
	var_180_string = "idle"; // 0xa2 PushS
	PlayAnimation(var_179_string, var_180_string); // 0xa3 Func
	goto Label_156; // 0xa5 Jump
	
Label_115:
	var_181_string = ""; // 0x73 PushV
	var_181_string = "Neutral"; // 0x74 MovS
	func_167(var_88_object, var_181_string); // 0x75 NEW_2
	var_182_int = 529770; // 0x77 PushI
	SetMessage(var_182_int); // 0x78 TObjFunc
	ClearReplies(); // 0x7a TObjFunc
	var_183_int = 529771; // 0x7c PushI
	var_184_int = -1; // 0x7d PushI
	var_185_int = 31227; // 0x7e PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x7f TObjFunc
	var_186_int = 529772; // 0x81 PushI
	var_187_int = -1; // 0x82 PushI
	var_188_int = 31228; // 0x83 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x84 TObjFunc
	goto Label_137; // 0x86 Jump
}


func_716()
{
	var_191_bool = 0; var_192_bool = 0; // 0x2cc PushV
	CameraSwitchToNormal(); // 0x2cd Func
	var_193_bool = 0; // 0x2cf PushV
	func_920(var_193_bool); // 0x2d0 NEW_2
	if(var_193_bool == 0) goto Label_724; // 0x2d2 JumpB
	goto Label_732; // 0x2d3 Jump
	
Label_732:
	return 2; // 0x2dc Return
	
Label_724:
	var_194_string = "head"; // 0x2d4 PushS
	HasAnimationTrack(var_192_bool, var_194_string); // 0x2d5 Func
	var_195_bool = var_192_bool; // 0x2d7 Push
	if(var_195_bool == 0) goto Label_732; // 0x2d8 JumpB
	var_196_string = "head"; // 0x2d9 PushS
	UnlookAsync(var_196_string); // 0x2da Func
}


func_468(var_18_bool)
{
	var_18_bool = 1; // 0x1d4 MovB
	return 0; // 0x1d5 Return
}


func_470(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1d7 PushV
	func_643(var_23_bool); // 0x1d8 NEW_2
	var_26_bool = var_23_bool == 0; // 0x1da Not
	if(var_26_bool == 0) goto Label_477; // 0x1db JumpB
	return 0; // 0x1dc Return
	
Label_477:
	var_27_string = "player"; // 0x1dd PushS
	FindActor(var_17_bool, var_27_string); // 0x1de Func
	var_2_object = 0; // 0x1e0 TMovB
	var_3_string = 0; // 0x1e1 TMovB
	var_0_object = var_21_float; // 0x1e2 TMov
	var_1_object = var_22_float; // 0x1e3 TMov
	var_28_int = 10; // 0x1e4 PushI
	var_29_float = 1.0; // 0x1e5 PushF
	SetTimer(var_28_int, var_29_float); // 0x1e6 Func
	func_549(); // 0x1e9 NEW_2
	var_81_bool = var_3_string == 0; // 0x1eb Not
	if(var_81_bool == 0) goto Label_496; // 0x1ec JumpB
	var_82_int = 10; // 0x1ed PushI
	KillTimer(var_82_int); // 0x1ee Func
	
Label_496:
	return 0; // 0x1f0 Return
}


func_854(var_130_object)
{
	var_131_object = Obj(); var_132_object = Obj(); // 0x356 PushV
	GetDiaryRoot(var_132_object); // 0x357 Func
	var_133_bool = var_132_object == 0; // 0x359 Not
	if(var_133_bool == 0) goto Label_864; // 0x35a JumpB
	var_134_string = "Can't retrieve diary root"; // 0x35b PushS
	Trace(var_134_string); // 0x35c Func
	var_130_object = 0; // 0x35e MovB
	return 2; // 0x35f Return
	
Label_864:
	var_130_object = var_132_object; // 0x360 Mov
	return 2; // 0x361 Return
}


func_733(var_165_string)
{
	var_166_bool = 0; var_167_float = 0; var_168_float = 0; var_169_bool = 0; var_170_float = 0; var_171_float = 0; // 0x2dd PushV
	lshHasAnimation(var_169_bool, var_165_string); // 0x2de Func
	var_172_bool = var_169_bool; // 0x2e0 Push
	if(var_172_bool == 0) goto Label_744; // 0x2e1 JumpB
	lshGetAnimTimes(var_165_string, var_170_float, var_171_float); // 0x2e2 Func
	var_173_bool = 0; // 0x2e4 PushB
	lshPlayAnimation(var_170_float, var_171_float, var_173_bool); // 0x2e5 Func
	goto Label_748; // 0x2e7 Jump
	
Label_748:
	return 6; // 0x2ec Return
	
Label_744:
	var_174_string = "Can't find lsh animation : "; // 0x2e8 PushS
	var_175_int = var_174_string + var_165_string; // 0x2e9 Add
	Trace(var_175_int); // 0x2ea Func
}


func_867(var_121_bool, var_122_object, var_123_int)
{
	var_124_object = Obj(); var_125_object = Obj(); var_126_int = 0; var_127_object = Obj(); var_128_object = Obj(); var_129_int = 0; // 0x363 PushV
	var_130_object = Obj(); // 0x364 PushV
	func_854(var_130_object); // 0x365 NEW_2
	var_127_object = var_130_object; // 0x366 Mov
	Find(var_123_int, var_128_object); // 0x368 ObjFunc
	var_135_bool = var_128_object == 0; // 0x36a Not
	if(var_135_bool == 0) goto Label_882; // 0x36b JumpB
	var_136_string = "Can't find diary parent with id: "; // 0x36c PushS
	var_137_int = var_136_string + var_123_int; // 0x36d Add
	Trace(var_137_int); // 0x36e Func
	var_121_bool = 0; // 0x370 MovB
	return 6; // 0x371 Return
	
Label_882:
	AddChild(var_122_object); // 0x372 ObjFunc
	var_138_int = 7; // 0x374 PushI
	SendWorldWndMessage(var_138_int); // 0x375 Func
	GetCategory(var_129_int); // 0x377 ObjFunc
	SetDiarySection(var_129_int); // 0x379 Func
	var_121_bool = 0; // 0x37b MovB
	return 6; // 0x37c Return
}


func_749(var_143_string, var_144_bool)
{
	var_147_bool = 0; var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_float = 0; var_152_float = 0; // 0x2ed PushV
	lshHasAnimation(var_150_bool, var_143_string); // 0x2ee Func
	var_153_bool = var_150_bool; // 0x2f0 Push
	if(var_153_bool == 0) goto Label_759; // 0x2f1 JumpB
	lshGetAnimTimes(var_143_string, var_151_float, var_152_float); // 0x2f2 Func
	lshPlayAnimation(var_151_float, var_152_float, var_144_bool); // 0x2f4 Func
	goto Label_763; // 0x2f6 Jump
	
Label_763:
	return 6; // 0x2fb Return
	
Label_759:
	var_154_string = "Can't find lsh animation : "; // 0x2f7 PushS
	var_155_int = var_154_string + var_143_string; // 0x2f8 Add
	Trace(var_155_int); // 0x2f9 Func
}


func_497(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1f1 PushV
	var_18_bool = var_4_bool == 0; // 0x1f2 NullEq
	if(var_18_bool == 0) goto Label_502; // 0x1f3 JumpB
	var_15_bool = 0; // 0x1f4 MovB
	return 2; // 0x1f5 Return
	
Label_502:
	var_19_float = 0; var_20_object = Obj(); // 0x1f6 PushV
	var_20_object = var_4_bool; // 0x1f7 MovT
	func_635(var_20_object); // 0x1f8 NEW_2
	var_17_float = sqrt(var_19_float); // 0x1fa Sqrt2
	var_27_object = var_2_object; // 0x1fb PushT
	if(var_27_object == 0) goto Label_510; // 0x1fc JumpB
	var_17_float = var_17_float - var_1_object; // 0x1fd Sub2
	
Label_510:
	var_15_bool = var_17_float < var_0_object; // 0x1fe LT2
	return 2; // 0x1ff Return
}


func_628(var_71_bool)
{
	var_71_bool = 1; // 0x274 MovB
	return 0; // 0x275 Return
}


func_630()
{
	StopAnimation(); // 0x276 Func
	StopGroup0(); // 0x278 Func
	return 0; // 0x27a Return
}


func_635(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x27b PushV
	GetPosition(var_24_cvector); // 0x27c Func
	GetPosition(var_25_cvector); // 0x27e ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x280 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x281 Or2
	return 6; // 0x282 Return
}


func_764(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2fc PushV
	GetEyesHeight(var_32_float); // 0x2fd ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2ff MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x300 PushE
	var_34_float = var_32_float; // 0x301 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x302 PopE
	var_35_string = "head"; // 0x303 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x304 Func
	return 4; // 0x306 Return
}


func_895(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x37f PushV
	var_81_string = "branch"; // 0x380 PushS
	GetVariable(var_81_string, var_80_int); // 0x381 Func
	var_82_int = 0; // 0x383 PushI
	var_83_bool = var_80_int == var_82_int; // 0x384 Eq
	if(var_83_bool == 0) goto Label_905; // 0x385 JumpB
	var_78_int = 1; // 0x386 MovI
	return 2; // 0x387 Return
	
Label_905:
	var_84_int = 1; // 0x389 PushI
	var_85_bool = var_80_int == var_84_int; // 0x38a Eq
	if(var_85_bool == 0) goto Label_910; // 0x38b JumpB
	var_78_int = 2; // 0x38c MovI
	return 2; // 0x38d Return
	
Label_910:
	var_78_int = 3; // 0x38e MovI
	return 2; // 0x38f Return
}


