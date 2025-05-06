task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xc1 PushI
	if(var_8_int == 0) goto Label_400; // 0xc2 JumpB
	func_732(); // 0xc4 NEW_2
	var_10_int = 41153; // 0xc6 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc7 Eq
	if(var_11_bool == 0) goto Label_206; // 0xc8 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc9 PushV
	var_12_object = var_1_object; // 0xca MovT
	var_13_object = var_0_object; // 0xcb MovT
	func_769(); // 0xcc NEW_2
	
Label_206:
	var_16_int = 41152; // 0xce PushI
	var_17_bool = var_6_int == var_16_int; // 0xcf Eq
	if(var_17_bool == 0) goto Label_260; // 0xd0 JumpB
	var_18_bool = 0; var_19_object = Obj(); // 0xd1 PushV
	var_19_object = var_1_object; // 0xd2 MovT
	func_775(var_19_object); // 0xd3 NEW_2
	var_26_bool = var_18_bool == 0; // 0xd5 Not
	if(var_26_bool == 0) goto Label_240; // 0xd6 JumpB
	var_27_string = ""; // 0xd7 PushV
	var_27_string = "Neutral"; // 0xd8 MovS
	func_170(var_7_bool, var_27_string); // 0xd9 NEW_2
	var_44_int = 539209; // 0xdb PushI
	SetMessage(var_44_int); // 0xdc TObjFunc
	ClearReplies(); // 0xde TObjFunc
	var_45_bool = 0; var_46_object = Obj(); // 0xe0 PushV
	var_46_object = var_1_object; // 0xe1 MovT
	func_787(var_46_object); // 0xe2 NEW_2
	if(var_45_bool == 0) goto Label_234; // 0xe4 JumpB
	var_51_int = 539210; // 0xe5 PushI
	var_52_int = 43660; // 0xe6 PushI
	var_53_int = 41153; // 0xe7 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xe8 TObjFunc
	
Label_234:
	var_54_int = 543010; // 0xea PushI
	var_55_int = -1; // 0xeb PushI
	var_56_int = 45462; // 0xec PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xed TObjFunc
	return 0; // 0xef Return
	
Label_240:
	var_57_string = ""; // 0xf0 PushV
	var_57_string = "Neutral"; // 0xf1 MovS
	func_170(var_7_bool, var_57_string); // 0xf2 NEW_2
	var_58_int = 539211; // 0xf4 PushI
	SetMessage(var_58_int); // 0xf5 TObjFunc
	ClearReplies(); // 0xf7 TObjFunc
	var_59_int = 539212; // 0xf9 PushI
	var_60_int = -1; // 0xfa PushI
	var_61_int = 41155; // 0xfb PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xfc TObjFunc
	var_62_int = 541503; // 0xfe PushI
	var_63_int = -1; // 0xff PushI
	var_64_int = 43665; // 0x100 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x101 TObjFunc
	return 0; // 0x103 Return
	
Label_260:
	var_65_int = 43660; // 0x104 PushI
	var_66_bool = var_6_int == var_65_int; // 0x105 Eq
	if(var_66_bool == 0) goto Label_283; // 0x106 JumpB
	var_67_string = ""; // 0x107 PushV
	var_67_string = "Doubt"; // 0x108 MovS
	func_170(var_7_bool, var_67_string); // 0x109 NEW_2
	var_68_int = 541498; // 0x10b PushI
	SetMessage(var_68_int); // 0x10c TObjFunc
	ClearReplies(); // 0x10e TObjFunc
	var_69_int = 541499; // 0x110 PushI
	var_70_int = 43662; // 0x111 PushI
	var_71_int = 43661; // 0x112 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x113 TObjFunc
	var_72_int = 542901; // 0x115 PushI
	var_73_int = 45332; // 0x116 PushI
	var_74_int = 45330; // 0x117 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x118 TObjFunc
	return 0; // 0x11a Return
	
Label_283:
	var_75_int = 43662; // 0x11b PushI
	var_76_bool = var_6_int == var_75_int; // 0x11c Eq
	if(var_76_bool == 0) goto Label_301; // 0x11d JumpB
	var_77_string = ""; // 0x11e PushV
	var_77_string = "Doubt"; // 0x11f MovS
	func_170(var_7_bool, var_77_string); // 0x120 NEW_2
	var_78_int = 541500; // 0x122 PushI
	SetMessage(var_78_int); // 0x123 TObjFunc
	ClearReplies(); // 0x125 TObjFunc
	var_79_int = 541501; // 0x127 PushI
	var_80_int = 43664; // 0x128 PushI
	var_81_int = 43663; // 0x129 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x12a TObjFunc
	return 0; // 0x12c Return
	
Label_301:
	var_82_int = 43664; // 0x12d PushI
	var_83_bool = var_6_int == var_82_int; // 0x12e Eq
	if(var_83_bool == 0) goto Label_324; // 0x12f JumpB
	var_84_string = ""; // 0x130 PushV
	var_84_string = "Sorrow"; // 0x131 MovS
	func_170(var_7_bool, var_84_string); // 0x132 NEW_2
	var_85_int = 541502; // 0x134 PushI
	SetMessage(var_85_int); // 0x135 TObjFunc
	ClearReplies(); // 0x137 TObjFunc
	var_86_int = 541504; // 0x139 PushI
	var_87_int = 45332; // 0x13a PushI
	var_88_int = 43666; // 0x13b PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x13c TObjFunc
	var_89_int = 542902; // 0x13e PushI
	var_90_int = 45332; // 0x13f PushI
	var_91_int = 45331; // 0x140 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x141 TObjFunc
	return 0; // 0x143 Return
	
Label_324:
	var_92_int = 45332; // 0x144 PushI
	var_93_bool = var_6_int == var_92_int; // 0x145 Eq
	if(var_93_bool == 0) goto Label_347; // 0x146 JumpB
	var_94_string = ""; // 0x147 PushV
	var_94_string = "Neutral"; // 0x148 MovS
	func_170(var_7_bool, var_94_string); // 0x149 NEW_2
	var_95_int = 542903; // 0x14b PushI
	SetMessage(var_95_int); // 0x14c TObjFunc
	ClearReplies(); // 0x14e TObjFunc
	var_96_int = 542904; // 0x150 PushI
	var_97_int = -1; // 0x151 PushI
	var_98_int = 45335; // 0x152 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x153 TObjFunc
	var_99_int = 542905; // 0x155 PushI
	var_100_int = 45337; // 0x156 PushI
	var_101_int = 45336; // 0x157 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x158 TObjFunc
	return 0; // 0x15a Return
	
Label_347:
	var_102_int = 45337; // 0x15b PushI
	var_103_bool = var_6_int == var_102_int; // 0x15c Eq
	if(var_103_bool == 0) goto Label_365; // 0x15d JumpB
	var_104_string = ""; // 0x15e PushV
	var_104_string = "Neutral"; // 0x15f MovS
	func_170(var_7_bool, var_104_string); // 0x160 NEW_2
	var_105_int = 542906; // 0x162 PushI
	SetMessage(var_105_int); // 0x163 TObjFunc
	ClearReplies(); // 0x165 TObjFunc
	var_106_int = 542907; // 0x167 PushI
	var_107_int = 45339; // 0x168 PushI
	var_108_int = 45338; // 0x169 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x16a TObjFunc
	return 0; // 0x16c Return
	
Label_365:
	var_109_int = 45339; // 0x16d PushI
	var_110_bool = var_6_int == var_109_int; // 0x16e Eq
	if(var_110_bool == 0) goto Label_388; // 0x16f JumpB
	var_111_string = ""; // 0x170 PushV
	var_111_string = "Neutral"; // 0x171 MovS
	func_170(var_7_bool, var_111_string); // 0x172 NEW_2
	var_112_int = 542908; // 0x174 PushI
	SetMessage(var_112_int); // 0x175 TObjFunc
	ClearReplies(); // 0x177 TObjFunc
	var_113_int = 542909; // 0x179 PushI
	var_114_int = -1; // 0x17a PushI
	var_115_int = 45340; // 0x17b PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x17c TObjFunc
	var_116_int = 542910; // 0x17e PushI
	var_117_int = -1; // 0x17f PushI
	var_118_int = 45341; // 0x180 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x181 TObjFunc
	return 0; // 0x183 Return
	
Label_388:
	var_3_string = 1; // 0x184 TMovB
	var_119_bool = 0; // 0x185 PushV
	func_824(var_119_bool); // 0x186 NEW_2
	if(var_119_bool == 0) goto Label_396; // 0x188 JumpB
	lshStopAnimation(); // 0x189 Func
	goto Label_398; // 0x18b Jump
	
Label_398:
	return 0; // 0x18e Return
	
Label_396:
	StopAnimation(); // 0x18c Func
	
Label_400:
	return 0; // 0x190 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x196 PushV
	var_8_object = var_6_object; // 0x197 Mov
	TaskCall(0); // 0x198 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x199 NEW_2
	TaskReturn(); // 0x19a TaskReturn
	return 0; // 0x19c Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x1a1 PushV
	var_9_string = "cleanup"; // 0x1a2 PushS
	var_10_bool = var_6_string == var_9_string; // 0x1a3 Eq
	if(var_10_bool == 0) goto Label_440; // 0x1a4 JumpB
	var_0_object = 1; // 0x1a5 TMovB
	IsLoaded(var_8_bool); // 0x1a6 Func
	var_11_bool = 0; // 0x1a8 PushV
	var_11_bool = 0; // 0x1a9 MovB
	var_12_bool = var_8_bool == 0; // 0x1aa Not
	if(var_12_bool == 0) goto Label_433; // 0x1ab JumpB
	var_13_bool = 0; // 0x1ac PushV
	func_461(var_13_bool); // 0x1ad NEW_2
	if(var_13_bool == 0) goto Label_433; // 0x1af JumpB
	var_11_bool = 1; // 0x1b0 MovB
	
Label_433:
	if(var_11_bool == 0) goto Label_439; // 0x1b1 JumpB
	var_14_object = Obj(); // 0x1b2 PushV
	func_739(var_14_object); // 0x1b3 NEW_2
	RemoveActor(var_14_object); // 0x1b5 Func
	
Label_439:
	goto Label_444; // 0x1b7 Jump
	
Label_444:
	return 2; // 0x1bc Return
	
Label_440:
	var_17_string = "restore"; // 0x1b8 PushS
	var_18_bool = var_6_string == var_17_string; // 0x1b9 Eq
	if(var_18_bool == 0) goto Label_444; // 0x1ba JumpB
	var_0_object = 0; // 0x1bb TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x1bd PushV
	var_6_bool = 0; // 0x1be MovB
	var_7_object = var_0_object; // 0x1bf PushT
	if(var_7_object == 0) goto Label_454; // 0x1c0 JumpB
	var_8_bool = 0; // 0x1c1 PushV
	func_461(var_8_bool); // 0x1c2 NEW_2
	if(var_8_bool == 0) goto Label_454; // 0x1c4 JumpB
	var_6_bool = 1; // 0x1c5 MovB
	
Label_454:
	if(var_6_bool == 0) goto Label_460; // 0x1c6 JumpB
	var_9_object = Obj(); // 0x1c7 PushV
	func_739(var_9_object); // 0x1c8 NEW_2
	RemoveActor(var_9_object); // 0x1ca Func
	
Label_460:
	return 0; // 0x1cc Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_413(); // 0x192 NEW_2
	return 0; // 0x194 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_463(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_818(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_816(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_820(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_822(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_799(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_bool = 0; var_79_object = Obj(); // 0x2f PushV
	var_80_object = Obj(); // 0x30 PushV
	func_739(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_548(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_245_bool = var_17_bool == 0; // 0x3f Not
	if(var_245_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_246_object = Obj(); // 0x46 PushV
	var_246_object = var_8_object; // 0x47 Mov
	func_531(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_769()
{
	var_14_string = "ook12BurahSobor1"; // 0x302 PushS
	var_15_int = 1; // 0x303 PushI
	SetVariable(var_14_string, var_15_int); // 0x304 Func
	return 0; // 0x306 Return
}


func_643(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x283 PushV
	var_132_string = "d"; // 0x284 PushS
	var_133_int = 0; // 0x285 PushV
	func_760(var_133_int); // 0x286 NEW_2
	var_139_int = var_132_string + var_133_int; // 0x288 Add
	var_140_string = "m"; // 0x289 PushS
	var_127_string = var_139_int + var_140_string; // 0x28a Add2
	var_128_int = 0; // 0x28b MovI
	
Label_652:
	var_141_int = 1; // 0x28c PushI
	if(var_141_int == 0) goto Label_665; // 0x28d JumpB
	var_142_int = 1; // 0x28e PushI
	var_143_int = var_128_int + var_142_int; // 0x28f Add
	var_144_int = var_127_string + var_143_int; // 0x290 Add
	HasProperty(var_144_int, var_129_bool); // 0x291 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x293 Not
	if(var_145_bool == 0) goto Label_662; // 0x294 JumpB
	goto Label_665; // 0x295 Jump
	
Label_665:
	var_146_bool = var_128_int == 0; // 0x299 Not
	if(var_146_bool == 0) goto Label_669; // 0x29a JumpB
	var_120_bool = 0; // 0x29b MovB
	return 10; // 0x29c Return
	
Label_669:
	var_130_int = 0; // 0x29d MovI
	var_147_int = 1; // 0x29e PushI
	var_148_bool = var_128_int > var_147_int; // 0x29f GT
	if(var_148_bool == 0) goto Label_675; // 0x2a0 JumpB
	irand(var_130_int, var_128_int); // 0x2a1 Func
	
Label_675:
	var_149_int = 1; // 0x2a3 PushI
	var_150_int = var_130_int + var_149_int; // 0x2a4 Add
	var_151_int = var_127_string + var_150_int; // 0x2a5 Add
	GetProperty(var_151_int, var_131_string); // 0x2a6 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x2a8 PushV
	var_153_string = var_131_string; // 0x2a9 Mov
	func_717(var_152_bool, var_153_string); // 0x2aa NEW_2
	var_120_bool = var_152_bool; // 0x2ab Mov
	return 10; // 0x2ad Return
	
Label_662:
	var_154_int = 1; // 0x296 PushI
	var_128_int = var_128_int + var_154_int; // 0x297 Add2
	goto Label_652; // 0x298 Jump
}


func_775(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x308 PushV
	var_183_string = "game_final"; // 0x309 MovS
	func_755(var_182_int, var_183_string); // 0x30a NEW_2
	var_186_int = 0; // 0x30c PushI
	var_187_bool = var_182_int != var_186_int; // 0x30d Neq
	if(var_187_bool == 0) goto Label_785; // 0x30e JumpB
	var_180_bool = 1; // 0x30f MovB
	return 0; // 0x310 Return
	
Label_785:
	var_180_bool = 0; // 0x311 MovB
	return 0; // 0x312 Return
}


func_461(var_8_bool)
{
	var_8_bool = 1; // 0x1cd MovB
	return 0; // 0x1ce Return
}


func_717(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x2cd PushV
	var_116_bool = 0; // 0x2ce PushV
	func_824(var_116_bool); // 0x2cf NEW_2
	if(var_116_bool == 0) goto Label_730; // 0x2d1 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x2d2 Func
	var_117_bool = var_115_bool; // 0x2d4 Push
	if(var_117_bool == 0) goto Label_730; // 0x2d5 JumpB
	lshPlaySpeech(var_113_string); // 0x2d6 Func
	var_112_bool = 1; // 0x2d8 MovB
	return 2; // 0x2d9 Return
	
Label_730:
	var_112_bool = 0; // 0x2da MovB
	return 2; // 0x2db Return
}


func_463(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x1cf PushV
	GetPosition(var_31_cvector); // 0x1d0 ObjFunc
	GetEyesHeight(var_30_float); // 0x1d2 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x1d4 PushE
	var_39_float = var_39_float + var_30_float; // 0x1d5 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x1d6 PopE
	GetPosition(var_32_cvector); // 0x1d7 Func
	GetEyesHeight(var_30_float); // 0x1d9 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x1db PushE
	var_40_float = var_40_float + var_30_float; // 0x1dc Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x1dd PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x1de Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x1df PushE
	var_41_float = 0; // 0x1e0 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x1e1 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x1e2 Or
	var_43_float = sqrt(var_42_int); // 0x1e3 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x1e4 Div2
	var_34_cvector = -var_33_cvector; // 0x1e5 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x1e6 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x1e7 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x1e8 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x1e9 Xor2
	func_745(var_45_cvector, var_46_cvector); // 0x1ea NEW_2
	var_53_int = 25; // 0x1ec PushI
	var_54_float = var_45_cvector * var_53_int; // 0x1ed Mult
	var_55_int = var_44_float + var_54_float; // 0x1ee Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x1ef PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x1f0 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x1f1 Add2
	IsOverrideActive(var_37_bool); // 0x1f2 Func
	var_57_bool = var_37_bool; // 0x1f4 Push
	if(var_57_bool == 0) goto Label_504; // 0x1f5 JumpB
	var_18_bool = 0; // 0x1f6 MovB
	return 18; // 0x1f7 Return
	
Label_504:
	StopWorld(); // 0x1f8 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x1fa Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x1fc PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x1fd PushE
	Rotate(var_58_float, var_59_float); // 0x1fe Func
	var_60_bool = 0; // 0x200 PushV
	func_824(var_60_bool); // 0x201 NEW_2
	if(var_60_bool == 0) goto Label_517; // 0x203 JumpB
	goto Label_525; // 0x204 Jump
	
Label_525:
	CameraWaitForPlayFinish(); // 0x20d Func
	ResumeWorld(); // 0x20f Func
	var_18_bool = 1; // 0x211 MovB
	return 18; // 0x212 Return
	
Label_517:
	var_61_string = "head"; // 0x205 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x206 Func
	var_62_bool = var_38_bool; // 0x208 Push
	if(var_62_bool == 0) goto Label_525; // 0x209 JumpB
	var_63_string = "head"; // 0x20a PushS
	LookAsyncCamera(var_63_string); // 0x20b Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_140; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_775(var_181_object); // 0x59 NEW_2
	var_188_bool = var_180_bool == 0; // 0x5b Not
	if(var_188_bool == 0) goto Label_118; // 0x5c JumpB
	var_189_string = ""; // 0x5d PushV
	var_189_string = "Neutral"; // 0x5e MovS
	func_170(var_174_object, var_189_string); // 0x5f NEW_2
	var_206_int = 539209; // 0x61 PushI
	SetMessage(var_206_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_207_bool = 0; var_208_object = Obj(); // 0x66 PushV
	var_208_object = var_1_object; // 0x67 MovT
	func_787(var_208_object); // 0x68 NEW_2
	if(var_207_bool == 0) goto Label_112; // 0x6a JumpB
	var_213_int = 539210; // 0x6b PushI
	var_214_int = 43660; // 0x6c PushI
	var_215_int = 41153; // 0x6d PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x6e TObjFunc
	
Label_112:
	var_216_int = 543010; // 0x70 PushI
	var_217_int = -1; // 0x71 PushI
	var_218_int = 45462; // 0x72 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x73 TObjFunc
	goto Label_140; // 0x75 Jump
	
Label_140:
	var_219_bool = 0; // 0x8c PushV
	func_824(var_219_bool); // 0x8d NEW_2
	if(var_219_bool == 0) goto Label_155; // 0x8f JumpB
	
Label_144:
	lshWaitForAnimEnd(); // 0x90 Func
	var_220_string = var_3_string; // 0x92 PushT
	if(var_220_string == 0) goto Label_149; // 0x93 JumpB
	goto Label_154; // 0x94 Jump
	
Label_154:
	goto Label_169; // 0x9a Jump
	
Label_169:
	return 0; // 0xa9 Return
	
Label_149:
	var_221_string = ""; // 0x95 PushV
	var_221_string = var_2_object; // 0x96 MovT
	func_686(var_221_string); // 0x97 NEW_2
	goto Label_144; // 0x99 Jump
	
Label_155:
	var_232_string = "all"; // 0x9b PushS
	var_233_string = "idle"; // 0x9c PushS
	PlayAnimation(var_232_string, var_233_string); // 0x9d Func
	
Label_159:
	WaitForAnimEnd(); // 0x9f Func
	var_234_string = var_3_string; // 0xa1 PushT
	if(var_234_string == 0) goto Label_164; // 0xa2 JumpB
	goto Label_169; // 0xa3 Jump
	
Label_164:
	var_235_string = "all"; // 0xa4 PushS
	var_236_string = "idle"; // 0xa5 PushS
	PlayAnimation(var_235_string, var_236_string); // 0xa6 Func
	goto Label_159; // 0xa8 Jump
	
Label_118:
	var_237_string = ""; // 0x76 PushV
	var_237_string = "Neutral"; // 0x77 MovS
	func_170(var_174_object, var_237_string); // 0x78 NEW_2
	var_238_int = 539211; // 0x7a PushI
	SetMessage(var_238_int); // 0x7b TObjFunc
	ClearReplies(); // 0x7d TObjFunc
	var_239_int = 539212; // 0x7f PushI
	var_240_int = -1; // 0x80 PushI
	var_241_int = 41155; // 0x81 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x82 TObjFunc
	var_242_int = 541503; // 0x84 PushI
	var_243_int = -1; // 0x85 PushI
	var_244_int = 43665; // 0x86 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x87 TObjFunc
	goto Label_140; // 0x89 Jump
}


func_531()
{
	var_247_bool = 0; var_248_bool = 0; // 0x213 PushV
	CameraSwitchToNormal(); // 0x214 Func
	var_249_bool = 0; // 0x216 PushV
	func_824(var_249_bool); // 0x217 NEW_2
	if(var_249_bool == 0) goto Label_539; // 0x219 JumpB
	goto Label_547; // 0x21a Jump
	
Label_547:
	return 2; // 0x223 Return
	
Label_539:
	var_250_string = "head"; // 0x21b PushS
	HasAnimationTrack(var_248_bool, var_250_string); // 0x21c Func
	var_251_bool = var_248_bool; // 0x21e Push
	if(var_251_bool == 0) goto Label_547; // 0x21f JumpB
	var_252_string = "head"; // 0x220 PushS
	UnlookAsync(var_252_string); // 0x221 Func
}


func_787(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0x314 PushV
	var_210_string = "ook12BurahSobor1"; // 0x315 MovS
	func_755(var_209_int, var_210_string); // 0x316 NEW_2
	var_211_int = 0; // 0x318 PushI
	var_212_bool = var_209_int == var_211_int; // 0x319 Eq
	if(var_212_bool == 0) goto Label_797; // 0x31a JumpB
	var_207_bool = 1; // 0x31b MovB
	return 0; // 0x31c Return
	
Label_797:
	var_207_bool = 0; // 0x31d MovB
	return 0; // 0x31e Return
}


func_732()
{
	var_9_bool = 0; // 0x2dc PushV
	func_824(var_9_bool); // 0x2dd NEW_2
	if(var_9_bool == 0) goto Label_738; // 0x2df JumpB
	lshStopSpeech(); // 0x2e0 Func
	
Label_738:
	return 0; // 0x2e2 Return
}


func_413()
{
	
Label_413:
	Hold(); // 0x19d Func
	goto Label_413; // 0x19f Jump
}


func_606(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x25e PushV
	var_96_string = "c"; // 0x25f MovS
	var_97_int = 0; // 0x260 MovI
	
Label_609:
	var_101_int = 1; // 0x261 PushI
	if(var_101_int == 0) goto Label_622; // 0x262 JumpB
	var_102_int = 1; // 0x263 PushI
	var_103_int = var_97_int + var_102_int; // 0x264 Add
	var_104_int = var_96_string + var_103_int; // 0x265 Add
	HasProperty(var_104_int, var_98_bool); // 0x266 ObjFunc
	var_105_bool = var_98_bool == 0; // 0x268 Not
	if(var_105_bool == 0) goto Label_619; // 0x269 JumpB
	goto Label_622; // 0x26a Jump
	
Label_622:
	var_106_bool = var_97_int == 0; // 0x26e Not
	if(var_106_bool == 0) goto Label_626; // 0x26f JumpB
	var_89_bool = 0; // 0x270 MovB
	return 10; // 0x271 Return
	
Label_626:
	var_99_int = 0; // 0x272 MovI
	var_107_int = 1; // 0x273 PushI
	var_108_bool = var_97_int > var_107_int; // 0x274 GT
	if(var_108_bool == 0) goto Label_632; // 0x275 JumpB
	irand(var_99_int, var_97_int); // 0x276 Func
	
Label_632:
	var_109_int = 1; // 0x278 PushI
	var_110_int = var_99_int + var_109_int; // 0x279 Add
	var_111_int = var_96_string + var_110_int; // 0x27a Add
	GetProperty(var_111_int, var_100_string); // 0x27b ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x27d PushV
	var_113_string = var_100_string; // 0x27e Mov
	func_717(var_112_bool, var_113_string); // 0x27f NEW_2
	var_89_bool = var_112_bool; // 0x280 Mov
	return 10; // 0x282 Return
	
Label_619:
	var_118_int = 1; // 0x26b PushI
	var_97_int = var_97_int + var_118_int; // 0x26c Add2
	goto Label_609; // 0x26d Jump
}


func_799(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x31f PushV
	var_72_string = "branch"; // 0x320 PushS
	GetVariable(var_72_string, var_71_int); // 0x321 Func
	var_73_int = 0; // 0x323 PushI
	var_74_bool = var_71_int == var_73_int; // 0x324 Eq
	if(var_74_bool == 0) goto Label_809; // 0x325 JumpB
	var_69_int = 1; // 0x326 MovI
	return 2; // 0x327 Return
	
Label_809:
	var_75_int = 1; // 0x329 PushI
	var_76_bool = var_71_int == var_75_int; // 0x32a Eq
	if(var_76_bool == 0) goto Label_814; // 0x32b JumpB
	var_69_int = 2; // 0x32c MovI
	return 2; // 0x32d Return
	
Label_814:
	var_69_int = 3; // 0x32e MovI
	return 2; // 0x32f Return
}


func_739(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2e3 PushV
	self(var_11_object); // 0x2e4 Func
	var_9_object = var_11_object; // 0x2e6 Mov
	return 2; // 0x2e7 Return
}


func_548(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x224 PushV
	var_87_string = "voice_common"; // 0x225 PushS
	GetVariable(var_87_string, var_85_int); // 0x226 Func
	var_88_int = var_85_int; // 0x228 Push
	if(var_88_int == 0) goto Label_586; // 0x229 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x22a PushV
	var_90_object = var_79_object; // 0x22b Mov
	func_606(var_90_object); // 0x22c NEW_2
	var_119_bool = var_89_bool == 0; // 0x22e Not
	if(var_119_bool == 0) goto Label_568; // 0x22f JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x230 PushV
	var_121_object = var_79_object; // 0x231 Mov
	func_643(var_121_object); // 0x232 NEW_2
	var_155_bool = var_120_bool == 0; // 0x234 Not
	if(var_155_bool == 0) goto Label_568; // 0x235 JumpB
	var_78_bool = 0; // 0x236 MovB
	return 4; // 0x237 Return
	
Label_568:
	var_156_int = 2; // 0x238 PushI
	irand(var_86_int, var_156_int); // 0x239 Func
	var_157_int = var_86_int; // 0x23b Push
	if(var_157_int == 0) goto Label_581; // 0x23c JumpB
	var_158_string = "voice_common"; // 0x23d PushS
	var_159_int = 1; // 0x23e PushI
	var_160_int = var_85_int + var_159_int; // 0x23f Add
	var_161_int = 3; // 0x240 PushI
	var_162_int = var_160_int / var_161_int; // 0x241 Mod
	SetVariable(var_158_string, var_162_int); // 0x242 Func
	goto Label_585; // 0x244 Jump
	
Label_585:
	goto Label_604; // 0x249 Jump
	
Label_604:
	var_78_bool = 1; // 0x25c MovB
	return 4; // 0x25d Return
	
Label_581:
	var_163_string = "voice_common"; // 0x245 PushS
	var_164_int = 0; // 0x246 PushI
	SetVariable(var_163_string, var_164_int); // 0x247 Func
	
Label_586:
	var_165_bool = 0; var_166_object = Obj(); // 0x24a PushV
	var_166_object = var_79_object; // 0x24b Mov
	func_643(var_166_object); // 0x24c NEW_2
	var_167_bool = var_165_bool == 0; // 0x24e Not
	if(var_167_bool == 0) goto Label_600; // 0x24f JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x250 PushV
	var_169_object = var_79_object; // 0x251 Mov
	func_606(var_169_object); // 0x252 NEW_2
	var_170_bool = var_168_bool == 0; // 0x254 Not
	if(var_170_bool == 0) goto Label_600; // 0x255 JumpB
	var_78_bool = 0; // 0x256 MovB
	return 4; // 0x257 Return
	
Label_600:
	var_171_string = "voice_common"; // 0x258 PushS
	var_172_int = 1; // 0x259 PushI
	SetVariable(var_171_string, var_172_int); // 0x25a Func
}


func_745(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x2e9 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x2ea Or
	var_49_float = sqrt(var_50_int); // 0x2eb Sqrt2
	var_51_float = 0.0; // 0x2ec PushF
	var_52_bool = var_49_float < var_51_float; // 0x2ed LT
	if(var_52_bool == 0) goto Label_753; // 0x2ee JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2ef MovV
	return 2; // 0x2f0 Return
	
Label_753:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2f1 Div2
	return 2; // 0x2f2 Return
}


func_170(var_2_object, var_189_string)
{
	var_190_bool = 0; // 0xab PushV
	func_824(var_190_bool); // 0xac NEW_2
	var_191_bool = var_190_bool == 0; // 0xae Not
	if(var_191_bool == 0) goto Label_177; // 0xaf JumpB
	return 0; // 0xb0 Return
	
Label_177:
	var_192_bool = var_189_string == var_2_object; // 0xb1 Eq
	if(var_192_bool == 0) goto Label_180; // 0xb2 JumpB
	return 0; // 0xb3 Return
	
Label_180:
	var_193_string = ""; var_194_bool = 0; // 0xb4 PushV
	var_193_string = var_189_string; // 0xb5 Mov
	var_195_string = ""; // 0xb6 PushS
	var_196_bool = var_189_string == var_195_string; // 0xb7 Eq
	if(var_196_bool == 0) goto Label_187; // 0xb8 JumpB
	var_194_bool = 0; // 0xb9 MovB
	goto Label_188; // 0xba Jump
	
Label_188:
	func_702(var_193_string, var_194_bool); // 0xbc NEW_2
	var_2_object = var_189_string; // 0xbe TMov
	return 0; // 0xbf Return
	
Label_187:
	var_194_bool = 1; // 0xbb MovB
}


func_686(var_221_string)
{
	var_222_bool = 0; var_223_float = 0; var_224_float = 0; var_225_bool = 0; var_226_float = 0; var_227_float = 0; // 0x2ae PushV
	lshHasAnimation(var_225_bool, var_221_string); // 0x2af Func
	var_228_bool = var_225_bool; // 0x2b1 Push
	if(var_228_bool == 0) goto Label_697; // 0x2b2 JumpB
	lshGetAnimTimes(var_221_string, var_226_float, var_227_float); // 0x2b3 Func
	var_229_bool = 0; // 0x2b5 PushB
	lshPlayAnimation(var_226_float, var_227_float, var_229_bool); // 0x2b6 Func
	goto Label_701; // 0x2b8 Jump
	
Label_701:
	return 6; // 0x2bd Return
	
Label_697:
	var_230_string = "Can't find lsh animation : "; // 0x2b9 PushS
	var_231_int = var_230_string + var_221_string; // 0x2ba Add
	Trace(var_231_int); // 0x2bb Func
}


func_816(var_66_int)
{
	var_66_int = 515592; // 0x330 MovI
	return 0; // 0x331 Return
}


func_760(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x2f8 PushV
	GetGameTime(var_135_float); // 0x2f9 Func
	var_136_int = 1; // 0x2fb PushI
	var_137_int = 0; // 0x2fc PushV
	var_138_int = 24; // 0x2fd PushI
	var_137_int = var_135_float / var_135_float; // 0x2fe Div2
	var_133_int = var_136_int + var_137_int; // 0x2ff Add2
	return 2; // 0x300 Return
}


func_818(var_65_int)
{
	var_65_int = 511961; // 0x332 MovI
	return 0; // 0x333 Return
}


func_755(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x2f3 PushV
	GetVariable(var_183_string, var_185_int); // 0x2f4 Func
	var_182_int = var_185_int; // 0x2f6 Mov
	return 2; // 0x2f7 Return
}


func_820(var_67_string)
{
	var_67_string = "ui/NPC_Burah.png"; // 0x334 MovS
	return 0; // 0x335 Return
}


func_822(var_68_string)
{
	var_68_string = "ui/NPC_Burah_b.png"; // 0x336 MovS
	return 0; // 0x337 Return
}


func_824(var_60_bool)
{
	var_60_bool = 1; // 0x338 MovB
	return 0; // 0x339 Return
}


func_702(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x2be PushV
	lshHasAnimation(var_200_bool, var_193_string); // 0x2bf Func
	var_203_bool = var_200_bool; // 0x2c1 Push
	if(var_203_bool == 0) goto Label_712; // 0x2c2 JumpB
	lshGetAnimTimes(var_193_string, var_201_float, var_202_float); // 0x2c3 Func
	lshPlayAnimation(var_201_float, var_202_float, var_194_bool); // 0x2c5 Func
	goto Label_716; // 0x2c7 Jump
	
Label_716:
	return 6; // 0x2cc Return
	
Label_712:
	var_204_string = "Can't find lsh animation : "; // 0x2c8 PushS
	var_205_int = var_204_string + var_193_string; // 0x2c9 Add
	Trace(var_205_int); // 0x2ca Func
}


