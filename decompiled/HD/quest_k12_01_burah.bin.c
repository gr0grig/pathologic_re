task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xc1 PushI
	if(var_8_int == 0) goto Label_400; // 0xc2 JumpB
	func_734(); // 0xc4 NEW_2
	var_10_int = 41153; // 0xc6 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc7 Eq
	if(var_11_bool == 0) goto Label_206; // 0xc8 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc9 PushV
	var_12_object = var_1_object; // 0xca MovT
	var_13_object = var_0_object; // 0xcb MovT
	func_771(); // 0xcc NEW_2
	
Label_206:
	var_16_int = 41152; // 0xce PushI
	var_17_bool = var_6_int == var_16_int; // 0xcf Eq
	if(var_17_bool == 0) goto Label_260; // 0xd0 JumpB
	var_18_bool = 0; var_19_object = Obj(); // 0xd1 PushV
	var_19_object = var_1_object; // 0xd2 MovT
	func_777(var_19_object); // 0xd3 NEW_2
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
	func_789(var_46_object); // 0xe2 NEW_2
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
	func_826(var_119_bool); // 0x186 NEW_2
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
	func_741(var_14_object); // 0x1b3 NEW_2
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
	func_741(var_9_object); // 0x1c8 NEW_2
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
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_820(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_818(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_822(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_824(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_801(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_bool = 0; var_80_object = Obj(); // 0x2f PushV
	var_81_object = Obj(); // 0x30 PushV
	func_741(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_550(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_246_bool = var_17_bool == 0; // 0x3f Not
	if(var_246_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_247_object = Obj(); // 0x46 PushV
	var_247_object = var_8_object; // 0x47 Mov
	func_532(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_704(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0x2c0 PushV
	lshHasAnimation(var_201_bool, var_194_string); // 0x2c1 Func
	var_204_bool = var_201_bool; // 0x2c3 Push
	if(var_204_bool == 0) goto Label_714; // 0x2c4 JumpB
	lshGetAnimTimes(var_194_string, var_202_float, var_203_float); // 0x2c5 Func
	lshPlayAnimation(var_202_float, var_203_float, var_195_bool); // 0x2c7 Func
	goto Label_718; // 0x2c9 Jump
	
Label_718:
	return 6; // 0x2ce Return
	
Label_714:
	var_205_string = "Can't find lsh animation : "; // 0x2ca PushS
	var_206_int = var_205_string + var_194_string; // 0x2cb Add
	Trace(var_206_int); // 0x2cc Func
}


func_771()
{
	var_14_string = "ook12BurahSobor1"; // 0x304 PushS
	var_15_int = 1; // 0x305 PushI
	SetVariable(var_14_string, var_15_int); // 0x306 Func
	return 0; // 0x308 Return
}


func_645(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x285 PushV
	var_133_string = "d"; // 0x286 PushS
	var_134_int = 0; // 0x287 PushV
	func_762(var_134_int); // 0x288 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x28a Add
	var_141_string = "m"; // 0x28b PushS
	var_128_string = var_140_int + var_141_string; // 0x28c Add2
	var_129_int = 0; // 0x28d MovI
	
Label_654:
	var_142_int = 1; // 0x28e PushI
	if(var_142_int == 0) goto Label_667; // 0x28f JumpB
	var_143_int = 1; // 0x290 PushI
	var_144_int = var_129_int + var_143_int; // 0x291 Add
	var_145_int = var_128_string + var_144_int; // 0x292 Add
	HasProperty(var_145_int, var_130_bool); // 0x293 ObjFunc
	var_146_bool = var_130_bool == 0; // 0x295 Not
	if(var_146_bool == 0) goto Label_664; // 0x296 JumpB
	goto Label_667; // 0x297 Jump
	
Label_667:
	var_147_bool = var_129_int == 0; // 0x29b Not
	if(var_147_bool == 0) goto Label_671; // 0x29c JumpB
	var_121_bool = 0; // 0x29d MovB
	return 10; // 0x29e Return
	
Label_671:
	var_131_int = 0; // 0x29f MovI
	var_148_int = 1; // 0x2a0 PushI
	var_149_bool = var_129_int > var_148_int; // 0x2a1 GT
	if(var_149_bool == 0) goto Label_677; // 0x2a2 JumpB
	irand(var_131_int, var_129_int); // 0x2a3 Func
	
Label_677:
	var_150_int = 1; // 0x2a5 PushI
	var_151_int = var_131_int + var_150_int; // 0x2a6 Add
	var_152_int = var_128_string + var_151_int; // 0x2a7 Add
	GetProperty(var_152_int, var_132_string); // 0x2a8 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x2aa PushV
	var_154_string = var_132_string; // 0x2ab Mov
	func_719(var_153_bool, var_154_string); // 0x2ac NEW_2
	var_121_bool = var_153_bool; // 0x2ad Mov
	return 10; // 0x2af Return
	
Label_664:
	var_155_int = 1; // 0x298 PushI
	var_129_int = var_129_int + var_155_int; // 0x299 Add2
	goto Label_654; // 0x29a Jump
}


func_777(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x30a PushV
	var_184_string = "game_final"; // 0x30b MovS
	func_757(var_183_int, var_184_string); // 0x30c NEW_2
	var_187_int = 0; // 0x30e PushI
	var_188_bool = var_183_int != var_187_int; // 0x30f Neq
	if(var_188_bool == 0) goto Label_787; // 0x310 JumpB
	var_181_bool = 1; // 0x311 MovB
	return 0; // 0x312 Return
	
Label_787:
	var_181_bool = 0; // 0x313 MovB
	return 0; // 0x314 Return
}


func_461(var_8_bool)
{
	var_8_bool = 1; // 0x1cd MovB
	return 0; // 0x1ce Return
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
	func_747(var_45_cvector, var_46_cvector); // 0x1ea NEW_2
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
	var_58_bool = 1; // 0x1fa PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x1fb Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x1fd PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x1fe PushE
	Rotate(var_59_float, var_60_float); // 0x1ff Func
	var_61_bool = 0; // 0x201 PushV
	func_826(var_61_bool); // 0x202 NEW_2
	if(var_61_bool == 0) goto Label_518; // 0x204 JumpB
	goto Label_526; // 0x205 Jump
	
Label_526:
	CameraWaitForPlayFinish(); // 0x20e Func
	ResumeWorld(); // 0x210 Func
	var_18_bool = 1; // 0x212 MovB
	return 18; // 0x213 Return
	
Label_518:
	var_62_string = "head"; // 0x206 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x207 Func
	var_63_bool = var_38_bool; // 0x209 Push
	if(var_63_bool == 0) goto Label_526; // 0x20a JumpB
	var_64_string = "head"; // 0x20b PushS
	LookAsyncCamera(var_64_string); // 0x20c Func
}


func_719(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x2cf PushV
	var_117_bool = 0; // 0x2d0 PushV
	func_826(var_117_bool); // 0x2d1 NEW_2
	if(var_117_bool == 0) goto Label_732; // 0x2d3 JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x2d4 Func
	var_118_bool = var_116_bool; // 0x2d6 Push
	if(var_118_bool == 0) goto Label_732; // 0x2d7 JumpB
	lshPlaySpeech(var_114_string); // 0x2d8 Func
	var_113_bool = 1; // 0x2da MovB
	return 2; // 0x2db Return
	
Label_732:
	var_113_bool = 0; // 0x2dc MovB
	return 2; // 0x2dd Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_140; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_777(var_182_object); // 0x59 NEW_2
	var_189_bool = var_181_bool == 0; // 0x5b Not
	if(var_189_bool == 0) goto Label_118; // 0x5c JumpB
	var_190_string = ""; // 0x5d PushV
	var_190_string = "Neutral"; // 0x5e MovS
	func_170(var_175_object, var_190_string); // 0x5f NEW_2
	var_207_int = 539209; // 0x61 PushI
	SetMessage(var_207_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_208_bool = 0; var_209_object = Obj(); // 0x66 PushV
	var_209_object = var_1_object; // 0x67 MovT
	func_789(var_209_object); // 0x68 NEW_2
	if(var_208_bool == 0) goto Label_112; // 0x6a JumpB
	var_214_int = 539210; // 0x6b PushI
	var_215_int = 43660; // 0x6c PushI
	var_216_int = 41153; // 0x6d PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x6e TObjFunc
	
Label_112:
	var_217_int = 543010; // 0x70 PushI
	var_218_int = -1; // 0x71 PushI
	var_219_int = 45462; // 0x72 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x73 TObjFunc
	goto Label_140; // 0x75 Jump
	
Label_140:
	var_220_bool = 0; // 0x8c PushV
	func_826(var_220_bool); // 0x8d NEW_2
	if(var_220_bool == 0) goto Label_155; // 0x8f JumpB
	
Label_144:
	lshWaitForAnimEnd(); // 0x90 Func
	var_221_string = var_3_string; // 0x92 PushT
	if(var_221_string == 0) goto Label_149; // 0x93 JumpB
	goto Label_154; // 0x94 Jump
	
Label_154:
	goto Label_169; // 0x9a Jump
	
Label_169:
	return 0; // 0xa9 Return
	
Label_149:
	var_222_string = ""; // 0x95 PushV
	var_222_string = var_2_object; // 0x96 MovT
	func_688(var_222_string); // 0x97 NEW_2
	goto Label_144; // 0x99 Jump
	
Label_155:
	var_233_string = "all"; // 0x9b PushS
	var_234_string = "idle"; // 0x9c PushS
	PlayAnimation(var_233_string, var_234_string); // 0x9d Func
	
Label_159:
	WaitForAnimEnd(); // 0x9f Func
	var_235_string = var_3_string; // 0xa1 PushT
	if(var_235_string == 0) goto Label_164; // 0xa2 JumpB
	goto Label_169; // 0xa3 Jump
	
Label_164:
	var_236_string = "all"; // 0xa4 PushS
	var_237_string = "idle"; // 0xa5 PushS
	PlayAnimation(var_236_string, var_237_string); // 0xa6 Func
	goto Label_159; // 0xa8 Jump
	
Label_118:
	var_238_string = ""; // 0x76 PushV
	var_238_string = "Neutral"; // 0x77 MovS
	func_170(var_175_object, var_238_string); // 0x78 NEW_2
	var_239_int = 539211; // 0x7a PushI
	SetMessage(var_239_int); // 0x7b TObjFunc
	ClearReplies(); // 0x7d TObjFunc
	var_240_int = 539212; // 0x7f PushI
	var_241_int = -1; // 0x80 PushI
	var_242_int = 41155; // 0x81 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x82 TObjFunc
	var_243_int = 541503; // 0x84 PushI
	var_244_int = -1; // 0x85 PushI
	var_245_int = 43665; // 0x86 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x87 TObjFunc
	goto Label_140; // 0x89 Jump
}


func_532()
{
	var_248_bool = 0; var_249_bool = 0; // 0x214 PushV
	var_250_bool = 1; // 0x215 PushB
	CameraSwitchToNormal(var_250_bool); // 0x216 Func
	var_251_bool = 0; // 0x218 PushV
	func_826(var_251_bool); // 0x219 NEW_2
	if(var_251_bool == 0) goto Label_541; // 0x21b JumpB
	goto Label_549; // 0x21c Jump
	
Label_549:
	return 2; // 0x225 Return
	
Label_541:
	var_252_string = "head"; // 0x21d PushS
	HasAnimationTrack(var_249_bool, var_252_string); // 0x21e Func
	var_253_bool = var_249_bool; // 0x220 Push
	if(var_253_bool == 0) goto Label_549; // 0x221 JumpB
	var_254_string = "head"; // 0x222 PushS
	UnlookAsync(var_254_string); // 0x223 Func
}


func_789(var_208_bool)
{
	var_210_int = 0; var_211_string = ""; // 0x316 PushV
	var_211_string = "ook12BurahSobor1"; // 0x317 MovS
	func_757(var_210_int, var_211_string); // 0x318 NEW_2
	var_212_int = 0; // 0x31a PushI
	var_213_bool = var_210_int == var_212_int; // 0x31b Eq
	if(var_213_bool == 0) goto Label_799; // 0x31c JumpB
	var_208_bool = 1; // 0x31d MovB
	return 0; // 0x31e Return
	
Label_799:
	var_208_bool = 0; // 0x31f MovB
	return 0; // 0x320 Return
}


func_413()
{
	
Label_413:
	Hold(); // 0x19d Func
	goto Label_413; // 0x19f Jump
}


func_734()
{
	var_9_bool = 0; // 0x2de PushV
	func_826(var_9_bool); // 0x2df NEW_2
	if(var_9_bool == 0) goto Label_740; // 0x2e1 JumpB
	lshStopSpeech(); // 0x2e2 Func
	
Label_740:
	return 0; // 0x2e4 Return
}


func_608(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x260 PushV
	var_97_string = "c"; // 0x261 MovS
	var_98_int = 0; // 0x262 MovI
	
Label_611:
	var_102_int = 1; // 0x263 PushI
	if(var_102_int == 0) goto Label_624; // 0x264 JumpB
	var_103_int = 1; // 0x265 PushI
	var_104_int = var_98_int + var_103_int; // 0x266 Add
	var_105_int = var_97_string + var_104_int; // 0x267 Add
	HasProperty(var_105_int, var_99_bool); // 0x268 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x26a Not
	if(var_106_bool == 0) goto Label_621; // 0x26b JumpB
	goto Label_624; // 0x26c Jump
	
Label_624:
	var_107_bool = var_98_int == 0; // 0x270 Not
	if(var_107_bool == 0) goto Label_628; // 0x271 JumpB
	var_90_bool = 0; // 0x272 MovB
	return 10; // 0x273 Return
	
Label_628:
	var_100_int = 0; // 0x274 MovI
	var_108_int = 1; // 0x275 PushI
	var_109_bool = var_98_int > var_108_int; // 0x276 GT
	if(var_109_bool == 0) goto Label_634; // 0x277 JumpB
	irand(var_100_int, var_98_int); // 0x278 Func
	
Label_634:
	var_110_int = 1; // 0x27a PushI
	var_111_int = var_100_int + var_110_int; // 0x27b Add
	var_112_int = var_97_string + var_111_int; // 0x27c Add
	GetProperty(var_112_int, var_101_string); // 0x27d ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x27f PushV
	var_114_string = var_101_string; // 0x280 Mov
	func_719(var_113_bool, var_114_string); // 0x281 NEW_2
	var_90_bool = var_113_bool; // 0x282 Mov
	return 10; // 0x284 Return
	
Label_621:
	var_119_int = 1; // 0x26d PushI
	var_98_int = var_98_int + var_119_int; // 0x26e Add2
	goto Label_611; // 0x26f Jump
}


func_801(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x321 PushV
	var_73_string = "branch"; // 0x322 PushS
	GetVariable(var_73_string, var_72_int); // 0x323 Func
	var_74_int = 0; // 0x325 PushI
	var_75_bool = var_72_int == var_74_int; // 0x326 Eq
	if(var_75_bool == 0) goto Label_811; // 0x327 JumpB
	var_70_int = 1; // 0x328 MovI
	return 2; // 0x329 Return
	
Label_811:
	var_76_int = 1; // 0x32b PushI
	var_77_bool = var_72_int == var_76_int; // 0x32c Eq
	if(var_77_bool == 0) goto Label_816; // 0x32d JumpB
	var_70_int = 2; // 0x32e MovI
	return 2; // 0x32f Return
	
Label_816:
	var_70_int = 3; // 0x330 MovI
	return 2; // 0x331 Return
}


func_762(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x2fa PushV
	GetGameTime(var_136_float); // 0x2fb Func
	var_137_int = 1; // 0x2fd PushI
	var_138_int = 0; // 0x2fe PushV
	var_139_int = 24; // 0x2ff PushI
	var_138_int = var_136_float / var_136_float; // 0x300 Div2
	var_134_int = var_137_int + var_138_int; // 0x301 Add2
	return 2; // 0x302 Return
}


func_741(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2e5 PushV
	self(var_11_object); // 0x2e6 Func
	var_9_object = var_11_object; // 0x2e8 Mov
	return 2; // 0x2e9 Return
}


func_550(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x226 PushV
	var_88_string = "voice_common"; // 0x227 PushS
	GetVariable(var_88_string, var_86_int); // 0x228 Func
	var_89_int = var_86_int; // 0x22a Push
	if(var_89_int == 0) goto Label_588; // 0x22b JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x22c PushV
	var_91_object = var_80_object; // 0x22d Mov
	func_608(var_91_object); // 0x22e NEW_2
	var_120_bool = var_90_bool == 0; // 0x230 Not
	if(var_120_bool == 0) goto Label_570; // 0x231 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x232 PushV
	var_122_object = var_80_object; // 0x233 Mov
	func_645(var_122_object); // 0x234 NEW_2
	var_156_bool = var_121_bool == 0; // 0x236 Not
	if(var_156_bool == 0) goto Label_570; // 0x237 JumpB
	var_79_bool = 0; // 0x238 MovB
	return 4; // 0x239 Return
	
Label_570:
	var_157_int = 2; // 0x23a PushI
	irand(var_87_int, var_157_int); // 0x23b Func
	var_158_int = var_87_int; // 0x23d Push
	if(var_158_int == 0) goto Label_583; // 0x23e JumpB
	var_159_string = "voice_common"; // 0x23f PushS
	var_160_int = 1; // 0x240 PushI
	var_161_int = var_86_int + var_160_int; // 0x241 Add
	var_162_int = 3; // 0x242 PushI
	var_163_int = var_161_int / var_162_int; // 0x243 Mod
	SetVariable(var_159_string, var_163_int); // 0x244 Func
	goto Label_587; // 0x246 Jump
	
Label_587:
	goto Label_606; // 0x24b Jump
	
Label_606:
	var_79_bool = 1; // 0x25e MovB
	return 4; // 0x25f Return
	
Label_583:
	var_164_string = "voice_common"; // 0x247 PushS
	var_165_int = 0; // 0x248 PushI
	SetVariable(var_164_string, var_165_int); // 0x249 Func
	
Label_588:
	var_166_bool = 0; var_167_object = Obj(); // 0x24c PushV
	var_167_object = var_80_object; // 0x24d Mov
	func_645(var_167_object); // 0x24e NEW_2
	var_168_bool = var_166_bool == 0; // 0x250 Not
	if(var_168_bool == 0) goto Label_602; // 0x251 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x252 PushV
	var_170_object = var_80_object; // 0x253 Mov
	func_608(var_170_object); // 0x254 NEW_2
	var_171_bool = var_169_bool == 0; // 0x256 Not
	if(var_171_bool == 0) goto Label_602; // 0x257 JumpB
	var_79_bool = 0; // 0x258 MovB
	return 4; // 0x259 Return
	
Label_602:
	var_172_string = "voice_common"; // 0x25a PushS
	var_173_int = 1; // 0x25b PushI
	SetVariable(var_172_string, var_173_int); // 0x25c Func
}


func_170(var_2_object, var_190_string)
{
	var_191_bool = 0; // 0xab PushV
	func_826(var_191_bool); // 0xac NEW_2
	var_192_bool = var_191_bool == 0; // 0xae Not
	if(var_192_bool == 0) goto Label_177; // 0xaf JumpB
	return 0; // 0xb0 Return
	
Label_177:
	var_193_bool = var_190_string == var_2_object; // 0xb1 Eq
	if(var_193_bool == 0) goto Label_180; // 0xb2 JumpB
	return 0; // 0xb3 Return
	
Label_180:
	var_194_string = ""; var_195_bool = 0; // 0xb4 PushV
	var_194_string = var_190_string; // 0xb5 Mov
	var_196_string = ""; // 0xb6 PushS
	var_197_bool = var_190_string == var_196_string; // 0xb7 Eq
	if(var_197_bool == 0) goto Label_187; // 0xb8 JumpB
	var_195_bool = 0; // 0xb9 MovB
	goto Label_188; // 0xba Jump
	
Label_188:
	func_704(var_194_string, var_195_bool); // 0xbc NEW_2
	var_2_object = var_190_string; // 0xbe TMov
	return 0; // 0xbf Return
	
Label_187:
	var_195_bool = 1; // 0xbb MovB
}


func_747(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x2eb PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x2ec Or
	var_49_float = sqrt(var_50_int); // 0x2ed Sqrt2
	var_51_float = 0.0; // 0x2ee PushF
	var_52_bool = var_49_float < var_51_float; // 0x2ef LT
	if(var_52_bool == 0) goto Label_755; // 0x2f0 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x2f1 MovV
	return 2; // 0x2f2 Return
	
Label_755:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x2f3 Div2
	return 2; // 0x2f4 Return
}


func_688(var_222_string)
{
	var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_float = 0; var_228_float = 0; // 0x2b0 PushV
	lshHasAnimation(var_226_bool, var_222_string); // 0x2b1 Func
	var_229_bool = var_226_bool; // 0x2b3 Push
	if(var_229_bool == 0) goto Label_699; // 0x2b4 JumpB
	lshGetAnimTimes(var_222_string, var_227_float, var_228_float); // 0x2b5 Func
	var_230_bool = 0; // 0x2b7 PushB
	lshPlayAnimation(var_227_float, var_228_float, var_230_bool); // 0x2b8 Func
	goto Label_703; // 0x2ba Jump
	
Label_703:
	return 6; // 0x2bf Return
	
Label_699:
	var_231_string = "Can't find lsh animation : "; // 0x2bb PushS
	var_232_int = var_231_string + var_222_string; // 0x2bc Add
	Trace(var_232_int); // 0x2bd Func
}


func_818(var_67_int)
{
	var_67_int = 515592; // 0x332 MovI
	return 0; // 0x333 Return
}


func_820(var_66_int)
{
	var_66_int = 511961; // 0x334 MovI
	return 0; // 0x335 Return
}


func_757(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x2f5 PushV
	GetVariable(var_184_string, var_186_int); // 0x2f6 Func
	var_183_int = var_186_int; // 0x2f8 Mov
	return 2; // 0x2f9 Return
}


func_822(var_68_string)
{
	var_68_string = "ui/NPC_Burah.png"; // 0x336 MovS
	return 0; // 0x337 Return
}


func_824(var_69_string)
{
	var_69_string = "ui/NPC_Burah_b.png"; // 0x338 MovS
	return 0; // 0x339 Return
}


func_826(var_61_bool)
{
	var_61_bool = 1; // 0x33a MovB
	return 0; // 0x33b Return
}


