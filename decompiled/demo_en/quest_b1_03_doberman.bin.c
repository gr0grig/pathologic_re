task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 1; // 0x9b PushI
	if(var_19_int == 0) goto Label_383; // 0x9c JumpB
	func_2314(); // 0x9e NEW_2
	var_21_int = 19225; // 0xa0 PushI
	var_22_bool = var_18_bool == var_21_int; // 0xa1 Eq
	if(var_22_bool == 0) goto Label_168; // 0xa2 JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0xa3 PushV
	var_23_object = var_1_object; // 0xa4 MovT
	var_24_object = var_0_object; // 0xa5 MovT
	func_2520(); // 0xa6 NEW_2
	
Label_168:
	var_28_int = 19226; // 0xa8 PushI
	var_29_bool = var_18_bool == var_28_int; // 0xa9 Eq
	if(var_29_bool == 0) goto Label_176; // 0xaa JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0xab PushV
	var_30_object = var_1_object; // 0xac MovT
	var_31_object = var_0_object; // 0xad MovT
	func_2515(); // 0xae NEW_2
	
Label_176:
	var_33_int = 20788; // 0xb0 PushI
	var_34_bool = var_18_bool == var_33_int; // 0xb1 Eq
	if(var_34_bool == 0) goto Label_184; // 0xb2 JumpB
	var_35_object = Obj(); var_36_object = Obj(); // 0xb3 PushV
	var_35_object = var_1_object; // 0xb4 MovT
	var_36_object = var_0_object; // 0xb5 MovT
	func_2520(); // 0xb6 NEW_2
	
Label_184:
	var_37_int = 20778; // 0xb8 PushI
	var_38_bool = var_18_bool == var_37_int; // 0xb9 Eq
	if(var_38_bool == 0) goto Label_192; // 0xba JumpB
	var_39_object = Obj(); var_40_object = Obj(); // 0xbb PushV
	var_39_object = var_1_object; // 0xbc MovT
	var_40_object = var_0_object; // 0xbd MovT
	func_2515(); // 0xbe NEW_2
	
Label_192:
	var_41_int = 19224; // 0xc0 PushI
	var_42_bool = var_17_object == var_41_int; // 0xc1 Eq
	if(var_42_bool == 0) goto Label_215; // 0xc2 JumpB
	var_43_string = ""; // 0xc3 PushV
	var_43_string = "Neutral"; // 0xc4 MovS
	func_132(var_18_bool, var_43_string); // 0xc5 NEW_2
	var_60_int = 518092; // 0xc7 PushI
	SetMessage(var_60_int); // 0xc8 TObjFunc
	ClearReplies(); // 0xca TObjFunc
	var_61_int = 519592; // 0xcc PushI
	var_62_int = 20773; // 0xcd PushI
	var_63_int = 20772; // 0xce PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xcf TObjFunc
	var_64_int = 519588; // 0xd1 PushI
	var_65_int = 20769; // 0xd2 PushI
	var_66_int = 20768; // 0xd3 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xd4 TObjFunc
	return 0; // 0xd6 Return
	
Label_215:
	var_67_int = 20769; // 0xd7 PushI
	var_68_bool = var_17_object == var_67_int; // 0xd8 Eq
	if(var_68_bool == 0) goto Label_238; // 0xd9 JumpB
	var_69_string = ""; // 0xda PushV
	var_69_string = "Neutral"; // 0xdb MovS
	func_132(var_18_bool, var_69_string); // 0xdc NEW_2
	var_70_int = 519589; // 0xde PushI
	SetMessage(var_70_int); // 0xdf TObjFunc
	ClearReplies(); // 0xe1 TObjFunc
	var_71_int = 519590; // 0xe3 PushI
	var_72_int = 20771; // 0xe4 PushI
	var_73_int = 20770; // 0xe5 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xe6 TObjFunc
	var_74_int = 519596; // 0xe8 PushI
	var_75_int = 20773; // 0xe9 PushI
	var_76_int = 20776; // 0xea PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xeb TObjFunc
	return 0; // 0xed Return
	
Label_238:
	var_77_int = 20771; // 0xee PushI
	var_78_bool = var_17_object == var_77_int; // 0xef Eq
	if(var_78_bool == 0) goto Label_261; // 0xf0 JumpB
	var_79_string = ""; // 0xf1 PushV
	var_79_string = "Neutral"; // 0xf2 MovS
	func_132(var_18_bool, var_79_string); // 0xf3 NEW_2
	var_80_int = 519591; // 0xf5 PushI
	SetMessage(var_80_int); // 0xf6 TObjFunc
	ClearReplies(); // 0xf8 TObjFunc
	var_81_int = 519597; // 0xfa PushI
	var_82_int = -1; // 0xfb PushI
	var_83_int = 20778; // 0xfc PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0xfd TObjFunc
	var_84_int = 519598; // 0xff PushI
	var_85_int = 20773; // 0x100 PushI
	var_86_int = 20779; // 0x101 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x102 TObjFunc
	return 0; // 0x104 Return
	
Label_261:
	var_87_int = 20773; // 0x105 PushI
	var_88_bool = var_17_object == var_87_int; // 0x106 Eq
	if(var_88_bool == 0) goto Label_279; // 0x107 JumpB
	var_89_string = ""; // 0x108 PushV
	var_89_string = "Neutral"; // 0x109 MovS
	func_132(var_18_bool, var_89_string); // 0x10a NEW_2
	var_90_int = 519593; // 0x10c PushI
	SetMessage(var_90_int); // 0x10d TObjFunc
	ClearReplies(); // 0x10f TObjFunc
	var_91_int = 519594; // 0x111 PushI
	var_92_int = 20775; // 0x112 PushI
	var_93_int = 20774; // 0x113 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x114 TObjFunc
	return 0; // 0x116 Return
	
Label_279:
	var_94_int = 20775; // 0x117 PushI
	var_95_bool = var_17_object == var_94_int; // 0x118 Eq
	if(var_95_bool == 0) goto Label_302; // 0x119 JumpB
	var_96_string = ""; // 0x11a PushV
	var_96_string = "Neutral"; // 0x11b MovS
	func_132(var_18_bool, var_96_string); // 0x11c NEW_2
	var_97_int = 519595; // 0x11e PushI
	SetMessage(var_97_int); // 0x11f TObjFunc
	ClearReplies(); // 0x121 TObjFunc
	var_98_int = 519599; // 0x123 PushI
	var_99_int = 28362; // 0x124 PushI
	var_100_int = 20781; // 0x125 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x126 TObjFunc
	var_101_int = 519600; // 0x128 PushI
	var_102_int = 20786; // 0x129 PushI
	var_103_int = 20782; // 0x12a PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x12b TObjFunc
	return 0; // 0x12d Return
	
Label_302:
	var_104_int = 20786; // 0x12e PushI
	var_105_bool = var_17_object == var_104_int; // 0x12f Eq
	if(var_105_bool == 0) goto Label_325; // 0x130 JumpB
	var_106_string = ""; // 0x131 PushV
	var_106_string = "Neutral"; // 0x132 MovS
	func_132(var_18_bool, var_106_string); // 0x133 NEW_2
	var_107_int = 519603; // 0x135 PushI
	SetMessage(var_107_int); // 0x136 TObjFunc
	ClearReplies(); // 0x138 TObjFunc
	var_108_int = 519604; // 0x13a PushI
	var_109_int = 20784; // 0x13b PushI
	var_110_int = 20787; // 0x13c PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x13d TObjFunc
	var_111_int = 519605; // 0x13f PushI
	var_112_int = -1; // 0x140 PushI
	var_113_int = 20788; // 0x141 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x142 TObjFunc
	return 0; // 0x144 Return
	
Label_325:
	var_114_int = 28362; // 0x145 PushI
	var_115_bool = var_17_object == var_114_int; // 0x146 Eq
	if(var_115_bool == 0) goto Label_348; // 0x147 JumpB
	var_116_string = ""; // 0x148 PushV
	var_116_string = "Neutral"; // 0x149 MovS
	func_132(var_18_bool, var_116_string); // 0x14a NEW_2
	var_117_int = 527067; // 0x14c PushI
	SetMessage(var_117_int); // 0x14d TObjFunc
	ClearReplies(); // 0x14f TObjFunc
	var_118_int = 527068; // 0x151 PushI
	var_119_int = 20784; // 0x152 PushI
	var_120_int = 28363; // 0x153 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x154 TObjFunc
	var_121_int = 527069; // 0x156 PushI
	var_122_int = 20784; // 0x157 PushI
	var_123_int = 28364; // 0x158 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x159 TObjFunc
	return 0; // 0x15b Return
	
Label_348:
	var_124_int = 20784; // 0x15c PushI
	var_125_bool = var_17_object == var_124_int; // 0x15d Eq
	if(var_125_bool == 0) goto Label_371; // 0x15e JumpB
	var_126_string = ""; // 0x15f PushV
	var_126_string = "Neutral"; // 0x160 MovS
	func_132(var_18_bool, var_126_string); // 0x161 NEW_2
	var_127_int = 519602; // 0x163 PushI
	SetMessage(var_127_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_128_int = 518093; // 0x168 PushI
	var_129_int = -1; // 0x169 PushI
	var_130_int = 19225; // 0x16a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x16b TObjFunc
	var_131_int = 518094; // 0x16d PushI
	var_132_int = -1; // 0x16e PushI
	var_133_int = 19226; // 0x16f PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x170 TObjFunc
	return 0; // 0x172 Return
	
Label_371:
	var_3_string = 1; // 0x173 TMovB
	var_134_bool = 0; // 0x174 PushV
	func_2573(var_134_bool); // 0x175 NEW_2
	if(var_134_bool == 0) goto Label_379; // 0x177 JumpB
	lshStopAnimation(); // 0x178 Func
	goto Label_381; // 0x17a Jump
	
Label_381:
	return 0; // 0x17d Return
	
Label_379:
	StopAnimation(); // 0x17b Func
	
Label_383:
	return 0; // 0x17f Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0x188 PushV
	func_524(); // 0x18a NEW_2
	var_20_int = 0; var_21_object = Obj(); // 0x18c PushV
	var_21_object = var_17_bool; // 0x18d Mov
	TaskCall(0); // 0x18e TaskCall
	func_0(var_22_object, var_20_int, var_21_object); // 0x18f NEW_2
	TaskReturn(); // 0x190 TaskReturn
	var_19_int = var_22_object; // 0x191 Mov
	var_148_int = 0; // 0x193 PushI
	var_149_bool = var_19_int == var_148_int; // 0x194 Eq
	if(var_149_bool == 0) goto Label_418; // 0x195 JumpB
	var_150_bool = 0; var_151_object = Obj(); var_152_float = 0; // 0x196 PushV
	var_151_object = var_17_bool; // 0x197 Mov
	var_152_float = 0.05; // 0x198 MovF
	func_2404(var_150_bool, var_151_object, var_152_float); // 0x199 NEW_2
	var_188_object = Obj(); // 0x19b PushV
	var_188_object = var_17_bool; // 0x19c Mov
	TaskCall(3); // 0x19d TaskCall
	func_529(var_188_object); // 0x19e NEW_2
	TaskReturn(); // 0x19f TaskReturn
	goto Label_428; // 0x1a1 Jump
	
Label_428:
	return 2; // 0x1ac Return
	
Label_418:
	var_261_int = 1; // 0x1a2 PushI
	var_262_bool = var_19_int == var_261_int; // 0x1a3 Eq
	if(var_262_bool == 0) goto Label_428; // 0x1a4 JumpB
	var_263_object = Obj(); var_264_bool = 0; // 0x1a5 PushV
	var_263_object = var_17_bool; // 0x1a6 Mov
	var_264_bool = 1; // 0x1a7 MovB
	TaskCall(4); // 0x1a8 TaskCall
	func_739(var_263_object, var_264_bool); // 0x1a9 NEW_2
	TaskReturn(); // 0x1aa TaskReturn
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x1ae PushV
	var_19_object = var_17_bool; // 0x1af Mov
	func_2648(var_18_bool, var_19_object); // 0x1b0 NEW_2
	if(var_18_bool == 0) goto Label_442; // 0x1b2 JumpB
	func_524(); // 0x1b4 NEW_2
	var_54_object = Obj(); // 0x1b6 PushV
	var_54_object = var_17_bool; // 0x1b7 Mov
	func_2655(var_54_object); // 0x1b8 NEW_2
	
Label_442:
	return 0; // 0x1ba Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x21b PushV
	var_19_object = var_17_bool; // 0x21c Mov
	func_2648(var_18_bool, var_19_object); // 0x21d NEW_2
	if(var_18_bool == 0) goto Label_551; // 0x21f JumpB
	func_707(var_17_bool); // 0x221 NEW_2
	var_55_object = Obj(); // 0x223 PushV
	var_55_object = var_17_bool; // 0x224 Mov
	func_2655(var_55_object); // 0x225 NEW_2
	
Label_551:
	return 0; // 0x227 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; // 0x28f PushV
	var_26_int = 120; // 0x290 PushI
	var_27_bool = var_17_bool != var_26_int; // 0x291 Neq
	if(var_27_bool == 0) goto Label_660; // 0x292 JumpB
	return 8; // 0x293 Return
	
Label_660:
	var_28_bool = var_0_object == 0; // 0x294 NullEq
	if(var_28_bool == 0) goto Label_669; // 0x295 JumpB
	Stop(); // 0x296 Func
	var_29_int = 1; // 0x298 PushI
	KillTimer(var_29_int); // 0x299 Func
	var_2_object = 1; // 0x29b TMovB
	goto Label_706; // 0x29c Jump
	
Label_706:
	return 8; // 0x2c2 Return
	
Label_669:
	GetDirection(var_22_cvector); // 0x29d Func
	var_30_float = 7000.0; // 0x29f PushF
	FindDirLength(var_23_float, var_22_cvector, var_30_float); // 0x2a0 Func
	var_31_cvector = CVector(0,0,0); var_32_float = 0; // 0x2a2 PushV
	var_32_float = 1.74533; // 0x2a3 MovF
	func_552(var_31_cvector, var_32_float); // 0x2a4 NEW_2
	var_24_cvector = var_31_cvector; // 0x2a5 Mov
	var_25_float = var_24_cvector | var_24_cvector; // 0x2a7 Or2
	var_61_bool = 0; // 0x2a8 PushV
	var_61_bool = 0; // 0x2a9 MovB
	var_62_float = 2500.0; // 0x2aa PushF
	var_63_bool = var_25_float >= var_62_float; // 0x2ab GE
	if(var_63_bool == 0) goto Label_699; // 0x2ac JumpB
	var_64_bool = 0; // 0x2ad PushV
	var_64_bool = 1; // 0x2ae MovB
	var_65_float = var_23_float * var_23_float; // 0x2af Mult
	var_66_float = 2.25; // 0x2b0 PushF
	var_67_float = var_65_float * var_66_float; // 0x2b1 Mult
	var_68_bool = var_25_float >= var_67_float; // 0x2b2 GE
	if(var_68_bool == 0) goto Label_697; // 0x2b3 JumpB
	var_69_bool = 0; // 0x2b4 PushV
	func_723(var_64_bool, var_69_bool); // 0x2b5 NEW_2
	if(var_69_bool == 0) goto Label_697; // 0x2b7 JumpB
	var_64_bool = 0; // 0x2b8 MovB
	
Label_697:
	if(var_64_bool == 0) goto Label_699; // 0x2b9 JumpB
	var_61_bool = 1; // 0x2ba MovB
	
Label_699:
	if(var_61_bool == 0) goto Label_706; // 0x2bb JumpB
	Stop(); // 0x2bc Func
	var_89_cvector = CVector(0,0,0); // 0x2be PushV
	func_1856(var_89_cvector); // 0x2bf NEW_2
	var_1_object = var_89_cvector + var_24_cvector; // 0x2c1 Add2
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_707(var_17_bool); // 0x2cc NEW_2
	var_19_object = Obj(); // 0x2ce PushV
	var_19_object = var_17_bool; // 0x2cf Mov
	func_2642(); // 0x2d0 NEW_2
	return 0; // 0x2d2 Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_int)
{
	var_18_int = 1; // 0x5c5 PushI
	var_19_bool = var_17_int == var_18_int; // 0x5c6 Eq
	if(var_19_bool == 0) goto Label_1485; // 0x5c7 JumpB
	var_20_object = Obj(); // 0x5c8 PushV
	var_20_object = var_1_object; // 0x5c9 MovT
	func_2471(var_20_object); // 0x5ca NEW_2
	goto Label_1489; // 0x5cc Jump
	
Label_1489:
	return 0; // 0x5d1 Return
	
Label_1485:
	var_25_int = 0; // 0x5cd PushV
	var_25_int = var_17_int; // 0x5ce Mov
	func_1634(var_16_bool, var_17_int, var_25_int); // 0x5cf NEW_2
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; // 0x5e0 PushV
	var_18_bool = 0; // 0x5e1 MovB
	var_19_bool = var_1_object == var_17_object; // 0x5e2 Eq
	if(var_19_bool == 0) goto Label_1511; // 0x5e3 JumpB
	var_20_bool = var_2_object == 0; // 0x5e4 Not
	if(var_20_bool == 0) goto Label_1511; // 0x5e5 JumpB
	var_18_bool = 1; // 0x5e6 MovB
	
Label_1511:
	if(var_18_bool == 0) goto Label_1517; // 0x5e7 JumpB
	var_2_object = 1; // 0x5e8 TMovB
	var_21_object = Obj(); // 0x5e9 PushV
	var_21_object = var_17_object; // 0x5ea Mov
	func_2303(var_21_object); // 0x5eb NEW_2
	
Label_1517:
	return 0; // 0x5ed Return
}


task_5_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; // 0x5ef PushV
	var_18_bool = 0; // 0x5f0 MovB
	var_19_bool = var_1_object == var_17_object; // 0x5f1 Eq
	if(var_19_bool == 0) goto Label_1526; // 0x5f2 JumpB
	var_20_object = var_2_object; // 0x5f3 PushT
	if(var_20_object == 0) goto Label_1526; // 0x5f4 JumpB
	var_18_bool = 1; // 0x5f5 MovB
	
Label_1526:
	if(var_18_bool == 0) goto Label_1531; // 0x5f6 JumpB
	var_2_object = 0; // 0x5f7 TMovB
	var_21_string = "head"; // 0x5f8 PushS
	UnlookAsync(var_21_string); // 0x5f9 Func
	
Label_1531:
	return 0; // 0x5fb Return
}


task_5_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	RequestClearPath(var_17_object); // 0x675 Func
	return 0; // 0x677 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	func_1490(var_17_object); // 0x681 NEW_2
	var_22_object = Obj(); // 0x683 PushV
	var_22_object = var_17_object; // 0x684 Mov
	func_2642(); // 0x685 NEW_2
	return 0; // 0x687 Return
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x6ad PushV
	IsOverrideActive(var_19_bool); // 0x6ae Func
	var_20_bool = var_19_bool == 0; // 0x6b0 Not
	if(var_20_bool == 0) goto Label_1718; // 0x6b1 JumpB
	var_21_object = Obj(); // 0x6b2 PushV
	var_21_object = var_17_object; // 0x6b3 Mov
	func_2552(var_21_object); // 0x6b4 NEW_2
	
Label_1718:
	return 2; // 0x6b6 Return
}


task_6_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	return 0; // 0x72d Return
}


task_6_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
{
	return 0; // 0x72f Return
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	return 0; // 0x731 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; // 0xa34 PushV
	var_21_object = var_17_object; // 0xa35 Mov
	var_22_int = var_18_int; // 0xa36 Mov
	var_23_float = var_19_float; // 0xa37 Mov
	func_2089(var_21_object, var_22_int, var_23_float); // 0xa38 NEW_2
	return 0; // 0xa3a Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0xa3c PushV
	var_23_object = var_17_object; // 0xa3d Mov
	var_24_int = var_18_int; // 0xa3e Mov
	var_25_float = var_19_float; // 0xa3f Mov
	var_26_cvector = var_21_cvector; // 0xa40 Mov
	var_27_cvector = var_22_cvector; // 0xa41 Mov
	func_2157(var_25_float, var_26_cvector, var_27_cvector); // 0xa42 NEW_2
	return 0; // 0xa44 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0; // 0xa45 PushV
	var_21_string = "health"; // 0xa46 PushS
	var_22_bool = var_18_string == var_21_string; // 0xa47 Eq
	if(var_22_bool == 0) goto Label_2641; // 0xa48 JumpB
	var_23_string = "health"; // 0xa49 PushS
	GetProperty(var_23_string, var_20_float); // 0xa4a Func
	var_24_int = 0; // 0xa4c PushI
	var_25_bool = var_20_float <= var_24_int; // 0xa4d LE
	if(var_25_bool == 0) goto Label_2641; // 0xa4e JumpB
	SignalDeath(var_17_object); // 0xa4f Func
	
Label_2641:
	return 2; // 0xa51 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_object = Obj(); // 0xa53 PushV
	var_18_object = var_17_object; // 0xa54 Mov
	func_2585(var_18_object); // 0xa55 NEW_2
	return 0; // 0xa57 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	
Label_384:
	var_17_int = 3; // 0x180 PushI
	Sleep(var_17_int); // 0x181 Func
	func_443(); // 0x184 NEW_2
	goto Label_384; // 0x186 Jump
}


func_0(var_0_object, var_20_int, var_21_object)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0x0 PushV
	var_0_object = var_21_object; // 0x1 TMov
	var_31_bool = 0; var_32_object = Obj(); var_33_float = 0; // 0x2 PushV
	var_32_object = var_21_object; // 0x3 Mov
	var_33_float = 70.0; // 0x4 MovF
	func_2187(var_32_object, var_33_float); // 0x5 NEW_2
	var_77_bool = var_31_bool == 0; // 0x7 Not
	if(var_77_bool == 0) goto Label_11; // 0x8 JumpB
	var_20_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_27_object); // 0xb Func
	var_78_int = 0; // 0xd PushV
	func_2567(var_78_int); // 0xe NEW_2
	SetNPCName(var_78_int); // 0x10 ObjFunc
	var_79_int = 0; // 0x12 PushV
	func_2565(var_79_int); // 0x13 NEW_2
	SetNPCDescription(var_79_int); // 0x15 ObjFunc
	var_80_string = ""; // 0x17 PushV
	func_2569(var_80_string); // 0x18 NEW_2
	SetPhoto(var_80_string); // 0x1a ObjFunc
	var_81_string = ""; // 0x1c PushV
	func_2571(var_81_string); // 0x1d NEW_2
	SetPhoto2(var_81_string); // 0x1f ObjFunc
	var_82_int = 0; // 0x21 PushV
	func_2529(var_82_int); // 0x22 NEW_2
	SetPlayerName(var_82_int); // 0x24 ObjFunc
	var_29_int = -1; // 0x26 MovI
	IsOverrideActive(var_28_bool); // 0x27 Func
	var_90_bool = var_28_bool; // 0x29 Push
	if(var_90_bool == 0) goto Label_45; // 0x2a JumpB
	var_20_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_27_object); // 0x2d Func
	var_91_object = Obj(); var_92_object = Obj(); // 0x2f PushV
	var_91_object = var_21_object; // 0x30 Mov
	var_92_object = var_27_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_93_object, var_94_object, var_95_string, var_96_bool, var_91_object, var_92_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_30_bool); // 0x36 ObjFunc
	
Label_56:
	var_140_bool = var_30_bool == 0; // 0x38 Not
	if(var_140_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_30_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_141_object = Obj(); // 0x3f PushV
	var_141_object = var_21_object; // 0x40 Mov
	func_2255(); // 0x41 NEW_2
	StopDialog(var_27_object); // 0x43 Func
	GetReturnValue(var_29_int); // 0x45 ObjFunc
	var_20_int = var_29_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1029(var_0_object, var_393_float, var_394_int)
{
	var_395_object = Obj(); var_396_float = 0; var_397_float = 0; var_398_object = Obj(); var_399_float = 0; var_400_float = 0; // 0x405 PushV
	var_401_float = 0.9; // 0x406 PushF
	var_402_float = var_393_float * var_401_float; // 0x407 Mult
	GetVictim(var_402_float, var_398_object); // 0x408 Func
	ReportAttack(var_0_object); // 0x40a Func
	var_403_bool = var_398_object == var_0_object; // 0x40c Eq
	if(var_403_bool == 0) goto Label_1066; // 0x40d JumpB
	var_404_float = 0; var_405_object = Obj(); var_406_int = 0; // 0x40e PushV
	var_405_object = var_398_object; // 0x40f Mov
	var_406_int = var_394_int; // 0x410 Mov
	func_759(var_406_int); // 0x411 NEW_2
	var_399_float = var_404_float; // 0x412 Mov
	var_407_float = 0; var_408_object = Obj(); var_409_float = 0; var_410_int = 0; // 0x414 PushV
	var_408_object = var_398_object; // 0x415 Mov
	var_409_float = var_399_float; // 0x416 Mov
	var_411_int = 0; var_412_object = Obj(); var_413_int = 0; // 0x417 PushV
	var_412_object = var_398_object; // 0x418 Mov
	var_413_int = var_394_int; // 0x419 Mov
	func_762(var_413_int); // 0x41a NEW_2
	var_410_int = var_411_int; // 0x41b Mov
	func_1907(var_407_float, var_408_object, var_409_float, var_410_int); // 0x41d NEW_2
	var_400_float = var_407_float; // 0x41e Mov
	var_468_int = 0; // 0x420 PushV
	func_1412(var_468_int); // 0x421 NEW_2
	ReportHit(var_0_object, var_468_int, var_400_float, var_399_float); // 0x423 Func
	var_469_object = Obj(); var_470_float = 0; // 0x425 PushV
	var_469_object = var_398_object; // 0x426 Mov
	var_470_float = var_400_float; // 0x427 Mov
	func_1419(); // 0x428 NEW_2
	
Label_1066:
	return 6; // 0x42a Return
}


func_2565(var_79_int)
{
	var_79_int = 543373; // 0xa05 MovI
	return 0; // 0xa06 Return
}


func_2567(var_78_int)
{
	var_78_int = 543372; // 0xa07 MovI
	return 0; // 0xa08 Return
}


func_2569(var_80_string)
{
	var_80_string = "ui/NPC_Citizen1.png"; // 0xa09 MovS
	return 0; // 0xa0a Return
}


func_522(var_61_bool)
{
	var_61_bool = 1; // 0x20a MovB
	return 0; // 0x20b Return
}


func_2571(var_81_string)
{
	var_81_string = "ui/NPC_Citizen1_b.png"; // 0xa0b MovS
	return 0; // 0xa0c Return
}


func_524()
{
	StopAnimation(); // 0x20c Func
	StopGroup0(); // 0x20e Func
	return 0; // 0x210 Return
}


func_2573(var_73_bool)
{
	var_73_bool = 0; // 0xa0d MovB
	return 0; // 0xa0e Return
}


func_2314()
{
	var_20_bool = 0; // 0x90a PushV
	func_2573(var_20_bool); // 0x90b NEW_2
	if(var_20_bool == 0) goto Label_2320; // 0x90d JumpB
	lshStopSpeech(); // 0x90e Func
	
Label_2320:
	return 0; // 0x910 Return
}


func_2575()
{
	var_67_object = Obj(); var_68_object = Obj(); // 0xa0f PushV
	GetScene(var_68_object); // 0xa10 Func
	var_69_object = Obj(); // 0xa12 PushV
	func_2362(var_69_object); // 0xa13 NEW_2
	RemoveStationaryActor(var_69_object); // 0xa15 ObjFunc
	return 2; // 0xa17 Return
}


func_529(var_188_object)
{
	func_2575(); // 0x213 NEW_2
	var_197_object = Obj(); // 0x215 PushV
	var_197_object = var_188_object; // 0x216 Mov
	func_582(var_190_cvector, var_191_bool, var_188_object, var_197_object); // 0x217 NEW_2
	return 0; // 0x219 Return
}


func_2321(var_102_string)
{
	var_103_bool = 0; var_104_int = 0; var_105_bool = 0; var_106_int = 0; var_107_bool = 0; var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_bool = 0; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_bool = 0; var_116_float = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); // 0x911 PushV
	IsExisting3DSound(var_111_bool, var_102_string); // 0x912 Func
	var_119_bool = var_111_bool == 0; // 0x914 Not
	if(var_119_bool == 0) goto Label_2346; // 0x915 JumpB
	var_112_int = 0; // 0x916 MovI
	
Label_2327:
	var_120_int = 1; // 0x917 PushI
	var_121_int = var_112_int + var_120_int; // 0x918 Add
	var_122_int = var_102_string + var_121_int; // 0x919 Add
	IsExisting3DSound(var_113_bool, var_122_int); // 0x91a Func
	var_123_bool = var_113_bool == 0; // 0x91c Not
	if(var_123_bool == 0) goto Label_2335; // 0x91d JumpB
	goto Label_2338; // 0x91e Jump
	
Label_2338:
	var_124_bool = var_112_int == 0; // 0x922 Not
	if(var_124_bool == 0) goto Label_2341; // 0x923 JumpB
	return 16; // 0x924 Return
	
Label_2341:
	irand(var_114_int, var_112_int); // 0x925 Func
	var_125_int = 1; // 0x927 PushI
	var_126_int = var_114_int + var_125_int; // 0x928 Add
	var_102_string = var_102_string + var_126_int; // 0x929 Add2
	
Label_2346:
	Is3DSoundLoaded(var_115_bool, var_102_string); // 0x92a Func
	var_127_bool = var_115_bool; // 0x92c Push
	if(var_127_bool == 0) goto Label_2361; // 0x92d JumpB
	GetEyesHeight(var_116_float); // 0x92e Func
	GetDirection(var_117_cvector); // 0x930 Func
	var_128_int = 50; // 0x932 PushI
	var_118_cvector = var_117_cvector * var_128_int; // 0x933 Mult2
	var_129_float = GetByIndex(var_118_cvector, 1); // 0x934 PushE
	var_129_float = var_129_float + var_116_float; // 0x935 Add2
	SetByIndex(var_118_cvector, 1) = var_129_float; // 0x936 PopE
	PlayGlobalSound(var_102_string, var_118_cvector); // 0x937 Func
	
Label_2361:
	return 16; // 0x939 Return
	
Label_2335:
	var_130_int = 1; // 0x91f PushI
	var_112_int = var_112_int + var_130_int; // 0x920 Add2
	goto Label_2327; // 0x921 Jump
}


func_1810(var_101_string)
{
	RemoveRTEnvelope(); // 0x713 Func
	SetDeathState(); // 0x715 Func
	Stop(); // 0x717 Func
	StopAsync(); // 0x719 Func
	StopSecondaryAnimation(); // 0x71b Func
	var_102_string = ""; // 0x71d PushV
	var_102_string = var_101_string; // 0x71e Mov
	func_2321(var_102_string); // 0x71f NEW_2
	var_131_string = "all"; // 0x721 PushS
	PlayAnimation(var_131_string, var_101_string); // 0x722 Func
	WaitForAnimEnd(); // 0x724 Func
	var_132_string = "all"; // 0x726 PushS
	LockAnimationEnd(var_132_string, var_101_string); // 0x727 Func
	RemoveEnvelope(); // 0x729 Func
	return 0; // 0x72b Return
}


func_1303(var_308_bool)
{
	var_309_bool = 0; // 0x517 PushV
	var_309_bool = 0; // 0x518 MovB
	var_310_bool = 0; // 0x519 PushV
	func_1275(var_309_bool, var_310_bool); // 0x51a NEW_2
	if(var_310_bool == 0) goto Label_1314; // 0x51c JumpB
	var_327_bool = 0; // 0x51d PushV
	func_1319(var_308_bool, var_309_bool, var_327_bool); // 0x51e NEW_2
	if(var_327_bool == 0) goto Label_1314; // 0x520 JumpB
	var_309_bool = 1; // 0x521 MovB
	
Label_1314:
	if(var_309_bool == 0) goto Label_1317; // 0x522 JumpB
	var_308_bool = 1; // 0x523 MovB
	return 0; // 0x524 Return
	
Label_1317:
	var_308_bool = 0; // 0x525 MovB
	return 0; // 0x526 Return
}


func_2585(var_18_object)
{
	var_19_bool = 0; var_20_object = Obj(); // 0xa1a PushV
	var_20_object = var_18_object; // 0xa1b Mov
	func_1868(var_19_bool, var_20_object); // 0xa1c NEW_2
	if(var_19_bool == 0) goto Label_2601; // 0xa1e JumpB
	var_23_bool = 0; var_24_object = Obj(); var_25_float = 0; // 0xa1f PushV
	var_24_object = var_18_object; // 0xa20 Mov
	var_25_float = -0.1; // 0xa21 MovF
	func_2404(var_23_bool, var_24_object, var_25_float); // 0xa22 NEW_2
	var_61_bool = 0; var_62_string = ""; var_63_string = ""; // 0xa24 PushV
	var_62_string = "quest_b1_03"; // 0xa25 MovS
	var_63_string = "doberman_dead"; // 0xa26 MovS
	func_2459(var_61_bool, var_62_string, var_63_string); // 0xa27 NEW_2
	
Label_2601:
	func_2575(); // 0xa2a NEW_2
	var_72_object = Obj(); // 0xa2c PushV
	var_72_object = var_18_object; // 0xa2d Mov
	TaskCall(6); // 0xa2e TaskCall
	func_1683(var_72_object); // 0xa2f NEW_2
	TaskReturn(); // 0xa30 TaskReturn
	return 0; // 0xa32 Return
}


func_1319(var_0_object, var_4_bool, var_327_bool)
{
	var_328_object = Obj(); var_329_bool = 0; var_330_float = 0; var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_object = Obj(); var_334_bool = 0; var_335_float = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); // 0x527 PushV
	GetScene(var_333_object); // 0x528 Func
	var_334_bool = 0; // 0x52a MovB
	
Label_1323:
	var_338_cvector = CVector(0,0,0); var_339_object = Obj(); // 0x52b PushV
	var_339_object = var_0_object; // 0x52c MovT
	func_1861(var_339_object); // 0x52d NEW_2
	var_344_int = -var_338_cvector; // 0x52f Neg
	FindDirLength(var_335_float, var_344_int, var_335_float); // 0x530 Func
	var_345_bool = var_335_float < var_4_bool; // 0x532 LT
	if(var_345_bool == 0) goto Label_1333; // 0x533 JumpB
	goto Label_1361; // 0x534 Jump
	
Label_1361:
	var_327_bool = var_334_bool; // 0x551 Mov
	return 10; // 0x552 Return
	
Label_1333:
	Face(var_0_object); // 0x535 Func
	var_346_string = "all"; // 0x537 PushS
	var_347_string = "bjump"; // 0x538 PushS
	PlayAnimation(var_346_string, var_347_string); // 0x539 Func
	GetPFPosition(var_336_cvector); // 0x53b TObjFunc
	GetPFPosition(var_337_cvector); // 0x53d Func
	WaitForAnimEnd(); // 0x53f Func
	func_1407(var_337_cvector); // 0x542 NEW_2
	StopAsync(); // 0x544 Func
	var_348_cvector = CVector(0.0, 0.0, 0.0); // 0x546 PushVec
	SetSpeed(var_348_cvector); // 0x547 Func
	var_334_bool = 1; // 0x549 MovB
	var_349_bool = 0; // 0x54a PushV
	func_1275(var_337_cvector, var_349_bool); // 0x54b NEW_2
	var_350_bool = var_349_bool == 0; // 0x54d Not
	if(var_350_bool == 0) goto Label_1360; // 0x54e JumpB
	goto Label_1361; // 0x54f Jump
	
Label_1360:
	goto Label_1323; // 0x550 Jump
}


func_552(var_31_cvector, var_32_float)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_float = 0; // 0x228 PushV
	GetPosition(var_39_cvector); // 0x229 Func
	GetPosition(var_40_cvector); // 0x22b TObjFunc
	GetDirection(var_41_cvector); // 0x22d Func
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x22f PushV
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x230 PushV
	var_48_cvector = var_39_cvector - var_40_cvector; // 0x231 Sub2
	func_2368(var_47_cvector, var_48_cvector); // 0x232 NEW_2
	var_54_float = 0.75; // 0x234 PushF
	var_55_float = var_41_cvector * var_54_float; // 0x235 Mult
	var_46_cvector = var_47_cvector + var_55_float; // 0x236 Add2
	func_2368(var_45_cvector, var_46_cvector); // 0x237 NEW_2
	var_42_cvector = var_45_cvector; // 0x238 Mov
	var_56_int = 32; // 0x23a PushI
	var_57_float = 7000.0; // 0x23b PushF
	FindLongestDir(var_43_cvector, var_44_float, var_42_cvector, var_32_float, var_56_int, var_57_float); // 0x23c Func
	var_58_int = 100; // 0x23e PushI
	var_44_float = var_44_float - var_58_int; // 0x23f Sub2
	var_59_int = 0; // 0x240 PushI
	var_60_bool = var_44_float < var_59_int; // 0x241 LT
	if(var_60_bool == 0) goto Label_580; // 0x242 JumpB
	var_44_float = 0; // 0x243 MovI
	
Label_580:
	var_31_cvector = var_43_cvector * var_44_float; // 0x244 Mult2
	return 12; // 0x245 Return
}


func_2089(var_21_object, var_22_int, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_int = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); // 0x829 PushV
	var_42_bool = 0; // 0x82a PushV
	var_42_bool = 0; // 0x82b MovB
	var_43_bool = 0; // 0x82c PushV
	var_43_bool = 0; // 0x82d MovB
	var_44_object = var_21_object; // 0x82e Push
	if(var_44_object == 0) goto Label_2100; // 0x82f JumpB
	var_45_int = 4; // 0x830 PushI
	var_46_bool = var_22_int != var_45_int; // 0x831 Neq
	if(var_46_bool == 0) goto Label_2100; // 0x832 JumpB
	var_43_bool = 1; // 0x833 MovB
	
Label_2100:
	if(var_43_bool == 0) goto Label_2105; // 0x834 JumpB
	var_47_int = 5; // 0x835 PushI
	var_48_bool = var_22_int != var_47_int; // 0x836 Neq
	if(var_48_bool == 0) goto Label_2105; // 0x837 JumpB
	var_42_bool = 1; // 0x838 MovB
	
Label_2105:
	if(var_42_bool == 0) goto Label_2152; // 0x839 JumpB
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x83a PushV
	var_51_cvector = CVector(0,0,0); var_52_object = Obj(); // 0x83b PushV
	var_52_object = var_21_object; // 0x83c Mov
	func_1861(var_52_object); // 0x83d NEW_2
	var_50_cvector = var_51_cvector; // 0x83e Mov
	func_2368(var_49_cvector, var_50_cvector); // 0x840 NEW_2
	var_33_cvector = var_49_cvector; // 0x841 Mov
	CreateVectorVector(var_34_object); // 0x843 Func
	var_35_int = 1; // 0x845 MovI
	
Label_2118:
	var_62_string = "hit"; // 0x846 PushS
	var_63_int = var_62_string + var_35_int; // 0x847 Add
	GetGeometryLocator(var_63_int, var_36_bool, var_37_cvector, var_38_cvector); // 0x848 Func
	var_64_bool = var_36_bool == 0; // 0x84a Not
	if(var_64_bool == 0) goto Label_2125; // 0x84b JumpB
	goto Label_2134; // 0x84c Jump
	
Label_2134:
	size(var_39_int); // 0x856 ObjFunc
	var_65_int = var_39_int; // 0x858 Push
	if(var_65_int == 0) goto Label_2151; // 0x859 JumpB
	irand(var_40_int, var_39_int); // 0x85a Func
	get(var_41_cvector, var_40_int); // 0x85c ObjFunc
	var_66_object = Obj(); var_67_int = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x85e PushV
	var_66_object = var_21_object; // 0x85f Mov
	var_67_int = var_22_int; // 0x860 Mov
	var_68_float = var_23_float; // 0x861 Mov
	var_69_cvector = var_41_cvector; // 0x862 Mov
	var_70_cvector = -var_33_cvector; // 0x863 Neg2
	func_2157(var_68_float, var_69_cvector, var_70_cvector); // 0x864 NEW_2
	return 18; // 0x866 Return
	
Label_2151:
	var_34_object = 0; // 0x867 SetNull
	
Label_2152:
	var_111_object = Obj(); // 0x868 PushV
	var_111_object = var_21_object; // 0x869 Mov
	func_2045(var_111_object); // 0x86a NEW_2
	return 18; // 0x86c Return
	
Label_2125:
	var_112_int = var_38_cvector | var_33_cvector; // 0x84d Or
	var_113_float = 0.70711; // 0x84e PushF
	var_114_bool = var_112_int >= var_113_float; // 0x84f GE
	if(var_114_bool == 0) goto Label_2131; // 0x850 JumpB
	add(var_37_cvector); // 0x851 ObjFunc
	
Label_2131:
	var_115_int = 1; // 0x853 PushI
	var_35_int = var_35_int + var_115_int; // 0x854 Add2
	goto Label_2118; // 0x855 Jump
}


func_1068(var_0_object, var_356_bool, var_357_float)
{
	var_358_int = 0; var_359_bool = 0; var_360_int = 0; var_361_string = ""; var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_string = ""; // 0x42c PushV
	func_1407(var_365_string); // 0x42e NEW_2
	irand(var_362_int, var_365_string); // 0x430 Func
	var_366_int = 1; // 0x432 PushI
	var_362_int = var_362_int + var_366_int; // 0x433 Add2
	Face(var_0_object); // 0x434 Func
	var_367_bool = 1; // 0x436 PushB
	SetAttackState(var_367_bool); // 0x437 Func
	func_2480(); // 0x43a NEW_2
	var_372_string = "all"; // 0x43c PushS
	var_373_string = "attack_begin"; // 0x43d PushS
	var_374_int = var_373_string + var_362_int; // 0x43e Add
	PlayAnimation(var_372_string, var_374_int); // 0x43f Func
	WaitForAnimEnd(); // 0x441 Func
	func_1375(var_364_int, var_365_string); // 0x444 NEW_2
	var_390_bool = 0; var_391_object = Obj(); // 0x446 PushV
	var_391_object = var_0_object; // 0x447 MovT
	func_2021(var_390_bool, var_391_object); // 0x448 NEW_2
	var_392_bool = var_390_bool == 0; // 0x44a Not
	if(var_392_bool == 0) goto Label_1104; // 0x44b JumpB
	StopAsync(); // 0x44c Func
	var_356_bool = 0; // 0x44e MovB
	return 8; // 0x44f Return
	
Label_1104:
	var_393_float = 0; var_394_int = 0; // 0x450 PushV
	var_393_float = var_357_float; // 0x451 Mov
	var_394_int = var_362_int; // 0x452 Mov
	func_1029(var_365_string, var_393_float, var_394_int); // 0x453 NEW_2
	var_471_string = "all"; // 0x455 PushS
	var_472_string = "attack_middle"; // 0x456 PushS
	var_473_int = var_472_string + var_362_int; // 0x457 Add
	HasAnimation(var_363_bool, var_471_string, var_473_int); // 0x458 Func
	var_474_bool = var_363_bool; // 0x45a Push
	if(var_474_bool == 0) goto Label_1185; // 0x45b JumpB
	func_2480(); // 0x45d NEW_2
	var_475_string = "all"; // 0x45f PushS
	var_476_string = "attack_middle"; // 0x460 PushS
	var_477_int = var_476_string + var_362_int; // 0x461 Add
	PlayAnimation(var_475_string, var_477_int); // 0x462 Func
	WaitForAnimEnd(); // 0x464 Func
	func_1407(var_365_string); // 0x467 NEW_2
	var_478_bool = 0; var_479_object = Obj(); // 0x469 PushV
	var_479_object = var_0_object; // 0x46a MovT
	func_2021(var_478_bool, var_479_object); // 0x46b NEW_2
	var_480_bool = var_478_bool == 0; // 0x46d Not
	if(var_480_bool == 0) goto Label_1139; // 0x46e JumpB
	StopAsync(); // 0x46f Func
	var_356_bool = 0; // 0x471 MovB
	return 8; // 0x472 Return
	
Label_1139:
	var_481_float = 0; var_482_int = 0; // 0x473 PushV
	var_481_float = var_357_float; // 0x474 Mov
	var_482_int = var_362_int; // 0x475 Mov
	func_1029(var_365_string, var_481_float, var_482_int); // 0x476 NEW_2
	var_364_int = 1; // 0x478 MovI
	
Label_1145:
	var_483_string = "attack_middle"; // 0x479 PushS
	var_484_int = var_483_string + var_362_int; // 0x47a Add
	var_485_string = "_"; // 0x47b PushS
	var_486_int = var_484_int + var_485_string; // 0x47c Add
	var_365_string = var_486_int + var_364_int; // 0x47d Add2
	var_487_string = "all"; // 0x47e PushS
	HasAnimation(var_363_bool, var_487_string, var_365_string); // 0x47f Func
	var_488_bool = var_363_bool == 0; // 0x481 Not
	if(var_488_bool == 0) goto Label_1156; // 0x482 JumpB
	goto Label_1185; // 0x483 Jump
	
Label_1185:
	var_489_bool = 0; // 0x4a1 PushB
	SetAttackState(var_489_bool); // 0x4a2 Func
	var_490_string = "all"; // 0x4a4 PushS
	var_491_string = "attack_end"; // 0x4a5 PushS
	var_492_int = var_491_string + var_362_int; // 0x4a6 Add
	PlayAnimation(var_490_string, var_492_int); // 0x4a7 Func
	var_493_bool = 0; // 0x4a9 PushV
	func_1421(var_493_bool); // 0x4aa NEW_2
	if(var_493_bool == 0) goto Label_1203; // 0x4ac JumpB
	var_494_bool = 0; var_495_float = 0; // 0x4ad PushV
	var_495_float = 0.75; // 0x4ae MovF
	func_1205(var_494_bool, var_495_float); // 0x4af NEW_2
	StopAsync(); // 0x4b1 Func
	
Label_1203:
	var_356_bool = 1; // 0x4b3 MovB
	return 8; // 0x4b4 Return
	
Label_1156:
	func_2480(); // 0x485 NEW_2
	var_503_string = "all"; // 0x487 PushS
	PlayAnimation(var_503_string, var_365_string); // 0x488 Func
	WaitForAnimEnd(); // 0x48a Func
	func_1407(var_365_string); // 0x48d NEW_2
	var_504_bool = 0; var_505_object = Obj(); // 0x48f PushV
	var_505_object = var_0_object; // 0x490 MovT
	func_2021(var_504_bool, var_505_object); // 0x491 NEW_2
	var_506_bool = var_504_bool == 0; // 0x493 Not
	if(var_506_bool == 0) goto Label_1177; // 0x494 JumpB
	StopAsync(); // 0x495 Func
	var_356_bool = 0; // 0x497 MovB
	return 8; // 0x498 Return
	
Label_1177:
	var_507_float = 0; var_508_int = 0; // 0x499 PushV
	var_507_float = var_357_float; // 0x49a Mov
	var_508_int = var_362_int; // 0x49b Mov
	func_1029(var_365_string, var_507_float, var_508_int); // 0x49c NEW_2
	var_509_int = 1; // 0x49e PushI
	var_364_int = var_364_int + var_509_int; // 0x49f Add2
	goto Label_1145; // 0x4a0 Jump
}


func_2045(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_bool = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = ""; // 0x7fd PushV
	var_49_bool = var_34_object == 0; // 0x7fe NullEq
	if(var_49_bool == 0) goto Label_2049; // 0x7ff JumpB
	return 14; // 0x800 Return
	
Label_2049:
	IsDead(var_42_bool); // 0x801 Func
	var_50_bool = var_42_bool; // 0x803 Push
	if(var_50_bool == 0) goto Label_2054; // 0x804 JumpB
	return 14; // 0x805 Return
	
Label_2054:
	GetSecondaryAnimationType(var_43_int); // 0x806 Func
	var_51_int = 0; // 0x808 PushI
	var_52_bool = var_43_int < var_51_int; // 0x809 LT
	if(var_52_bool == 0) goto Label_2060; // 0x80a JumpB
	return 14; // 0x80b Return
	
Label_2060:
	GetPosition(var_44_cvector); // 0x80c ObjFunc
	GetPosition(var_45_cvector); // 0x80e Func
	GetDirection(var_46_cvector); // 0x810 Func
	var_47_cvector = var_45_cvector - var_44_cvector; // 0x812 Sub2
	var_53_float = GetByIndex(var_47_cvector, 0); // 0x813 PushE
	var_54_float = GetByIndex(var_46_cvector, 0); // 0x814 PushE
	var_55_float = var_53_float * var_54_float; // 0x815 Mult
	var_56_float = GetByIndex(var_47_cvector, 2); // 0x816 PushE
	var_57_float = GetByIndex(var_46_cvector, 2); // 0x817 PushE
	var_58_float = var_56_float * var_57_float; // 0x818 Mult
	var_59_int = var_55_float + var_58_float; // 0x819 Add
	var_60_int = 0; // 0x81a PushI
	var_61_bool = var_59_int >= var_60_int; // 0x81b GE
	if(var_61_bool == 0) goto Label_2079; // 0x81c JumpB
	var_48_string = "fhit"; // 0x81d MovS
	goto Label_2080; // 0x81e Jump
	
Label_2080:
	var_62_string = "hit_react"; // 0x820 PushS
	var_63_string = "1"; // 0x821 PushS
	var_64_int = var_48_string + var_63_string; // 0x822 Add
	var_65_string = "2"; // 0x823 PushS
	var_66_int = var_48_string + var_65_string; // 0x824 Add
	var_67_int = -10; // 0x825 PushI
	FadeSecondaryAnimation(var_62_string, var_64_int, var_66_int, var_67_int); // 0x826 Func
	return 14; // 0x828 Return
	
Label_2079:
	var_48_string = "bhit"; // 0x81f MovS
}


func_1842(var_435_string, var_436_int)
{
	var_437_int = 2; // 0x733 PushI
	var_438_bool = var_436_int == var_437_int; // 0x734 Eq
	if(var_438_bool == 0) goto Label_1849; // 0x735 JumpB
	var_435_string = "fire"; // 0x736 MovS
	return 0; // 0x737 Return
	
Label_1849:
	var_439_int = 1; // 0x739 PushI
	var_440_bool = var_436_int == var_439_int; // 0x73a Eq
	if(var_440_bool == 0) goto Label_1854; // 0x73b JumpB
	var_435_string = "bullet"; // 0x73c MovS
	return 0; // 0x73d Return
	
Label_1854:
	var_435_string = "phys"; // 0x73e MovS
	return 0; // 0x73f Return
}


func_2362(var_69_object)
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x93a PushV
	self(var_71_object); // 0x93b Func
	var_69_object = var_71_object; // 0x93d Mov
	return 2; // 0x93e Return
}


func_2368(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x940 PushV
	var_59_int = var_50_cvector | var_50_cvector; // 0x941 Or
	var_58_float = sqrt(var_59_int); // 0x942 Sqrt2
	var_60_float = 0.0; // 0x943 PushF
	var_61_bool = var_58_float < var_60_float; // 0x944 LT
	if(var_61_bool == 0) goto Label_2376; // 0x945 JumpB
	var_49_cvector = CVector(0.0, 0.0, 0.0); // 0x946 MovV
	return 2; // 0x947 Return
	
Label_2376:
	var_49_cvector = var_50_cvector / var_50_cvector; // 0x948 Div2
	return 2; // 0x949 Return
}


func_1856(var_89_cvector)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0x740 PushV
	GetPosition(var_91_cvector); // 0x741 Func
	var_89_cvector = var_91_cvector; // 0x743 Mov
	return 2; // 0x744 Return
}


func_1861(var_51_cvector)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x745 PushV
	GetPosition(var_55_cvector); // 0x746 Func
	GetPosition(var_56_cvector); // 0x748 ObjFunc
	var_51_cvector = var_56_cvector - var_55_cvector; // 0x74a Sub2
	return 4; // 0x74b Return
}


func_582(var_0_object, var_1_object, var_2_object, var_197_object)
{
	var_198_cvector = CVector(0,0,0); var_199_float = 0; var_200_bool = 0; var_201_cvector = CVector(0,0,0); var_202_float = 0; var_203_cvector = CVector(0,0,0); var_204_float = 0; var_205_bool = 0; var_206_cvector = CVector(0,0,0); var_207_float = 0; // 0x246 PushV
	var_0_object = var_197_object; // 0x247 TMov
	var_208_cvector = CVector(0,0,0); var_209_float = 0; // 0x248 PushV
	var_209_float = 1.74533; // 0x249 MovF
	func_552(var_208_cvector, var_209_float); // 0x24a NEW_2
	var_203_cvector = var_208_cvector; // 0x24b Mov
	var_204_float = var_203_cvector | var_203_cvector; // 0x24d Or2
	var_233_float = 2500.0; // 0x24e PushF
	var_234_bool = var_204_float < var_233_float; // 0x24f LT
	if(var_234_bool == 0) goto Label_611; // 0x250 JumpB
	var_235_cvector = CVector(0,0,0); var_236_float = 0; // 0x251 PushV
	var_236_float = 2.61799; // 0x252 MovF
	func_552(var_235_cvector, var_236_float); // 0x253 NEW_2
	var_203_cvector = var_235_cvector; // 0x254 Mov
	var_204_float = var_203_cvector | var_203_cvector; // 0x256 Or2
	var_237_float = 2500.0; // 0x257 PushF
	var_238_bool = var_204_float < var_237_float; // 0x258 LT
	if(var_238_bool == 0) goto Label_611; // 0x259 JumpB
	var_239_string = "Can't retreat, distance: "; // 0x25a PushS
	var_240_float = sqrt(var_204_float); // 0x25b Sqrt
	var_241_int = var_239_string + var_240_float; // 0x25c Add
	Trace(var_241_int); // 0x25d Func
	var_242_float = 0.5; // 0x25f PushF
	Sleep(var_242_float); // 0x260 Func
	return 10; // 0x262 Return
	
Label_611:
	var_243_float = GetByIndex(var_203_cvector, 0); // 0x263 PushE
	var_244_float = GetByIndex(var_203_cvector, 2); // 0x264 PushE
	Rotate(var_243_float, var_244_float); // 0x265 Func
	var_245_cvector = CVector(0,0,0); // 0x267 PushV
	func_1856(var_245_cvector); // 0x268 NEW_2
	var_1_object = var_245_cvector + var_203_cvector; // 0x26a Add2
	var_248_int = 120; // 0x26b PushI
	var_249_float = 0.5; // 0x26c PushF
	SetTimer(var_248_int, var_249_float); // 0x26d Func
	var_2_object = 0; // 0x26f TMovB
	
Label_624:
	var_250_int = 1; // 0x270 PushI
	MovePoint(var_250_int, var_250_int, var_205_bool); // 0x271 Func
	var_251_bool = var_205_bool; // 0x273 Push
	if(var_251_bool == 0) goto Label_652; // 0x274 JumpB
	var_252_bool = var_0_object == 0; // 0x275 NullEq
	if(var_252_bool == 0) goto Label_633; // 0x276 JumpB
	goto Label_654; // 0x277 Jump
	
Label_654:
	return 10; // 0x28e Return
	
Label_633:
	var_253_cvector = CVector(0,0,0); var_254_float = 0; // 0x279 PushV
	var_254_float = 2.61799; // 0x27a MovF
	func_552(var_253_cvector, var_254_float); // 0x27b NEW_2
	var_206_cvector = var_253_cvector; // 0x27c Mov
	var_207_float = var_206_cvector | var_206_cvector; // 0x27e Or2
	var_255_float = 2500.0; // 0x27f PushF
	var_256_bool = var_207_float >= var_255_float; // 0x280 GE
	if(var_256_bool == 0) goto Label_651; // 0x281 JumpB
	var_257_cvector = CVector(0,0,0); // 0x282 PushV
	func_1856(var_257_cvector); // 0x283 NEW_2
	var_1_object = var_257_cvector + var_206_cvector; // 0x285 Add2
	var_258_int = 120; // 0x286 PushI
	var_259_float = 0.5; // 0x287 PushF
	SetTimer(var_258_int, var_259_float); // 0x288 Func
	goto Label_652; // 0x28a Jump
	
Label_652:
	var_260_bool = var_2_object == 0; // 0x28c Not
	if(var_260_bool == 0) goto Label_624; // 0x28d JumpB
	
Label_651:
	goto Label_654; // 0x28b Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_91_object, var_92_object)
{
	var_0_object = var_92_object; // 0x4b TMov
	var_1_object = var_91_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_97_int = 1; // 0x4e PushI
	if(var_97_int == 0) goto Label_102; // 0x4f JumpB
	var_98_string = ""; // 0x50 PushV
	var_98_string = "Neutral"; // 0x51 MovS
	func_132(var_92_object, var_98_string); // 0x52 NEW_2
	var_115_int = 518092; // 0x54 PushI
	SetMessage(var_115_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_116_int = 519592; // 0x59 PushI
	var_117_int = 20773; // 0x5a PushI
	var_118_int = 20772; // 0x5b PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x5c TObjFunc
	var_119_int = 519588; // 0x5e PushI
	var_120_int = 20769; // 0x5f PushI
	var_121_int = 20768; // 0x60 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_122_bool = 0; // 0x66 PushV
	func_2573(var_122_bool); // 0x67 NEW_2
	if(var_122_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_123_string = var_3_string; // 0x6c PushT
	if(var_123_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_124_string = ""; // 0x6f PushV
	var_124_string = var_2_object; // 0x70 MovT
	func_2272(var_124_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_135_string = "all"; // 0x75 PushS
	var_136_string = "idle"; // 0x76 PushS
	PlayAnimation(var_135_string, var_136_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_137_string = var_3_string; // 0x7b PushT
	if(var_137_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_138_string = "all"; // 0x7e PushS
	var_139_string = "idle"; // 0x7f PushS
	PlayAnimation(var_138_string, var_139_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_2378(var_445_float, var_446_float, var_447_float)
{
	var_450_bool = var_446_float < var_447_float; // 0x94b LT
	if(var_450_bool == 0) goto Label_2383; // 0x94c JumpB
	var_445_float = var_446_float; // 0x94d Mov
	goto Label_2384; // 0x94e Jump
	
Label_2384:
	return 0; // 0x950 Return
	
Label_2383:
	var_445_float = var_447_float; // 0x94f Mov
}


func_1868(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x74c PushV
	IsPlayerActor(var_20_object, var_22_bool); // 0x74d Func
	var_19_bool = var_22_bool; // 0x74f Mov
	return 2; // 0x750 Return
}


func_1873(var_42_bool, var_43_object, var_44_string)
{
	var_45_bool = 0; var_46_bool = 0; // 0x751 PushV
	var_47_string = "HasProperty"; // 0x752 PushS
	var_48_int = 2; // 0x753 PushI
	var_49_bool = IsFuncExist(var_43_object, var_47_string, var_48_int); // 0x754 FuncExist
	var_50_bool = var_49_bool == 0; // 0x755 Not
	if(var_50_bool == 0) goto Label_1881; // 0x756 JumpB
	var_42_bool = 0; // 0x757 MovB
	return 2; // 0x758 Return
	
Label_1881:
	HasProperty(var_44_string, var_46_bool); // 0x759 ObjFunc
	var_42_bool = var_46_bool; // 0x75b Mov
	return 2; // 0x75c Return
}


func_2385(var_52_float, var_53_float, var_54_float, var_55_float)
{
	var_56_bool = var_53_float < var_54_float; // 0x952 LT
	if(var_56_bool == 0) goto Label_2390; // 0x953 JumpB
	var_52_float = var_54_float; // 0x954 Mov
	return 0; // 0x955 Return
	
Label_2390:
	var_57_bool = var_53_float > var_55_float; // 0x956 GT
	if(var_57_bool == 0) goto Label_2394; // 0x957 JumpB
	var_52_float = var_55_float; // 0x958 Mov
	return 0; // 0x959 Return
	
Label_2394:
	var_52_float = var_53_float; // 0x95a Mov
	return 0; // 0x95b Return
}


func_1364(var_0_object, var_258_bool)
{
	var_259_bool = 0; var_260_bool = 0; // 0x554 PushV
	var_261_string = "IsAttacking"; // 0x555 PushS
	var_262_int = 1; // 0x556 PushI
	var_263_bool = IsFuncExist(var_0_object, var_261_string, var_262_int); // 0x557 FuncExist
	if(var_263_bool == 0) goto Label_1373; // 0x558 JumpB
	IsAttacking(var_260_bool); // 0x559 TObjFunc
	var_258_bool = var_260_bool; // 0x55b Mov
	return 2; // 0x55c Return
	
Label_1373:
	var_258_bool = 0; // 0x55d MovB
	return 2; // 0x55e Return
}


func_2648(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xa59 PushV
	var_21_object = var_19_object; // 0xa5a Mov
	func_2021(var_20_bool, var_21_object); // 0xa5b NEW_2
	var_18_bool = var_20_bool; // 0xa5c Mov
	return 0; // 0xa5e Return
}


func_2396(var_80_float, var_81_cvector, var_82_cvector)
{
	var_83_int = var_81_cvector | var_82_cvector; // 0x95d Or
	var_84_int = var_81_cvector | var_81_cvector; // 0x95e Or
	var_85_int = var_82_cvector | var_82_cvector; // 0x95f Or
	var_86_float = var_84_int * var_85_int; // 0x960 Mult
	var_87_float = sqrt(var_86_float); // 0x961 Sqrt
	var_80_float = var_83_int / var_83_int; // 0x962 Div2
	return 0; // 0x963 Return
}


func_1885(var_34_bool, var_35_object, var_36_string, var_37_float, var_38_float, var_39_float)
{
	var_40_float = 0; var_41_float = 0; // 0x75d PushV
	var_42_bool = 0; var_43_object = Obj(); var_44_string = ""; // 0x75e PushV
	var_43_object = var_35_object; // 0x75f Mov
	var_44_string = var_36_string; // 0x760 Mov
	func_1873(var_42_bool, var_43_object, var_44_string); // 0x761 NEW_2
	var_51_bool = var_42_bool == 0; // 0x763 Not
	if(var_51_bool == 0) goto Label_1895; // 0x764 JumpB
	var_34_bool = 0; // 0x765 MovB
	return 2; // 0x766 Return
	
Label_1895:
	GetProperty(var_36_string, var_41_float); // 0x767 ObjFunc
	var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_float = 0; // 0x769 PushV
	var_53_float = var_41_float + var_37_float; // 0x76a Add2
	var_54_float = var_38_float; // 0x76b Mov
	var_55_float = var_39_float; // 0x76c Mov
	func_2385(var_52_float, var_53_float, var_54_float, var_55_float); // 0x76d NEW_2
	SetProperty(var_36_string, var_52_float); // 0x76f ObjFunc
	var_34_bool = 1; // 0x771 MovB
	return 2; // 0x772 Return
}


func_2655(var_55_object)
{
	var_56_object = Obj(); var_57_bool = 0; // 0xa60 PushV
	var_56_object = var_55_object; // 0xa61 Mov
	var_57_bool = 1; // 0xa62 MovB
	TaskCall(4); // 0xa63 TaskCall
	func_739(var_56_object, var_57_bool); // 0xa64 NEW_2
	TaskReturn(); // 0xa65 TaskReturn
	return 0; // 0xa67 Return
}


func_1375(var_2_object, var_5_object)
{
	var_375_float = 0; var_376_int = 0; var_377_float = 0; var_378_int = 0; // 0x55f PushV
	var_379_bool = var_2_object == 0; // 0x560 Not
	if(var_379_bool == 0) goto Label_1379; // 0x561 JumpB
	return 4; // 0x562 Return
	
Label_1379:
	var_380_object = var_5_object; // 0x563 PushT
	if(var_380_object == 0) goto Label_1387; // 0x564 JumpB
	var_381_int = -1; // 0x565 PushI
	var_5_object = var_5_object + var_381_int; // 0x566 Add2
	var_382_int = 0; // 0x567 PushI
	var_383_bool = var_5_object > var_382_int; // 0x568 GT
	if(var_383_bool == 0) goto Label_1387; // 0x569 JumpB
	return 4; // 0x56a Return
	
Label_1387:
	rand(var_377_float); // 0x56b Func
	var_384_float = 0; // 0x56d PushV
	func_1425(var_384_float); // 0x56e NEW_2
	var_385_bool = var_377_float < var_384_float; // 0x570 LT
	if(var_385_bool == 0) goto Label_1406; // 0x571 JumpB
	irand(var_378_int, var_377_float); // 0x572 Func
	var_386_int = 1; // 0x574 PushI
	var_378_int = var_378_int + var_386_int; // 0x575 Add2
	var_387_string = "attack"; // 0x576 PushS
	var_388_int = var_387_string + var_378_int; // 0x577 Add
	Speak(var_388_int); // 0x578 Func
	var_389_int = 0; // 0x57a PushV
	func_1423(var_389_int); // 0x57b NEW_2
	var_5_object = var_389_int; // 0x57c TMov
	
Label_1406:
	return 4; // 0x57e Return
}


func_1634(var_0_object, var_1_object, var_25_int)
{
	var_26_int = 0; // 0x663 PushI
	var_27_bool = var_25_int != var_26_int; // 0x664 Neq
	if(var_27_bool == 0) goto Label_1639; // 0x665 JumpB
	return 0; // 0x666 Return
	
Label_1639:
	var_28_bool = 0; var_29_object = Obj(); // 0x667 PushV
	var_29_object = var_1_object; // 0x668 MovT
	func_1672(var_28_bool, var_29_object); // 0x669 NEW_2
	var_64_bool = var_28_bool == 0; // 0x66b Not
	if(var_64_bool == 0) goto Label_1646; // 0x66c JumpB
	var_0_object = 1; // 0x66d TMovB
	
Label_1646:
	var_65_int = 0; // 0x66e PushI
	KillTimer(var_65_int); // 0x66f Func
	Stop(); // 0x671 Func
	return 0; // 0x673 Return
}


func_2404(var_23_bool, var_24_object, var_25_float)
{
	var_26_bool = var_24_object == 0; // 0x965 Not
	if(var_26_bool == 0) goto Label_2409; // 0x966 JumpB
	var_23_bool = 0; // 0x967 MovB
	return 0; // 0x968 Return
	
Label_2409:
	var_27_int = 0; // 0x969 PushI
	var_28_bool = var_25_float > var_27_int; // 0x96a GT
	if(var_28_bool == 0) goto Label_2416; // 0x96b JumpB
	var_29_int = 8; // 0x96c PushI
	SendWorldWndMessage(var_29_int); // 0x96d Func
	goto Label_2425; // 0x96f Jump
	
Label_2425:
	var_30_float = 0; // 0x979 PushV
	var_30_float = var_25_float; // 0x97a Mov
	func_2449(var_30_float); // 0x97b NEW_2
	var_34_bool = 0; var_35_object = Obj(); var_36_string = ""; var_37_float = 0; var_38_float = 0; var_39_float = 0; // 0x97d PushV
	var_35_object = var_24_object; // 0x97e Mov
	var_36_string = "reputation"; // 0x97f MovS
	var_37_float = var_25_float; // 0x980 Mov
	var_38_float = 0; // 0x981 MovI
	var_39_float = 1; // 0x982 MovI
	func_1885(var_34_bool, var_35_object, var_36_string, var_37_float, var_38_float, var_39_float); // 0x983 NEW_2
	var_23_bool = 1; // 0x985 MovB
	return 0; // 0x986 Return
	
Label_2416:
	var_58_int = 0; // 0x970 PushI
	var_59_bool = var_25_float < var_58_int; // 0x971 LT
	if(var_59_bool == 0) goto Label_2423; // 0x972 JumpB
	var_60_int = 9; // 0x973 PushI
	SendWorldWndMessage(var_60_int); // 0x974 Func
	goto Label_2425; // 0x976 Jump
	
Label_2423:
	var_23_bool = 0; // 0x977 MovB
	return 0; // 0x978 Return
}


func_2157(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x86d PushV
	GetScene(var_30_object); // 0x86e Func
	var_32_string = "scripted"; // 0x870 PushS
	var_33_string = "blood_dir.xml"; // 0x871 PushS
	AddActorByType(var_31_object, var_32_string, var_30_object, var_26_cvector, var_27_cvector, var_33_string); // 0x872 Func
	var_34_object = Obj(); // 0x874 PushV
	var_34_object = var_23_object; // 0x875 Mov
	func_2045(var_34_object); // 0x876 NEW_2
	return 4; // 0x878 Return
}


func_1907(var_407_float, var_408_object, var_409_float, var_410_int)
{
	var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; var_420_int = 0; var_421_string = ""; var_422_int = 0; var_423_float = 0; var_424_float = 0; var_425_float = 0; // 0x773 PushV
	var_426_bool = 0; var_427_object = Obj(); var_428_string = ""; // 0x774 PushV
	var_427_object = var_408_object; // 0x775 Mov
	var_428_string = "health"; // 0x776 MovS
	func_1873(var_426_bool, var_427_object, var_428_string); // 0x777 NEW_2
	var_429_bool = var_426_bool == 0; // 0x779 Not
	if(var_429_bool == 0) goto Label_1917; // 0x77a JumpB
	var_407_float = 0.0; // 0x77b MovF
	return 12; // 0x77c Return
	
Label_1917:
	var_430_bool = 0; var_431_object = Obj(); var_432_string = ""; // 0x77d PushV
	var_431_object = var_408_object; // 0x77e Mov
	var_432_string = "armor"; // 0x77f MovS
	func_1873(var_430_bool, var_431_object, var_432_string); // 0x780 NEW_2
	var_433_bool = var_430_bool == 0; // 0x782 Not
	if(var_433_bool == 0) goto Label_1926; // 0x783 JumpB
	var_420_int = 0; // 0x784 MovI
	goto Label_1929; // 0x785 Jump
	
Label_1929:
	var_434_string = "armor_"; // 0x789 PushS
	var_435_string = ""; var_436_int = 0; // 0x78a PushV
	var_436_int = var_410_int; // 0x78b Mov
	func_1842(var_435_string, var_436_int); // 0x78c NEW_2
	var_421_string = var_434_string + var_435_string; // 0x78e Add2
	var_441_bool = 0; var_442_object = Obj(); var_443_string = ""; // 0x78f PushV
	var_442_object = var_408_object; // 0x790 Mov
	var_443_string = var_421_string; // 0x791 Mov
	func_1873(var_441_bool, var_442_object, var_443_string); // 0x792 NEW_2
	var_444_bool = var_441_bool == 0; // 0x794 Not
	if(var_444_bool == 0) goto Label_1944; // 0x795 JumpB
	var_422_int = 0; // 0x796 MovI
	goto Label_1946; // 0x797 Jump
	
Label_1946:
	var_445_float = 0; var_446_float = 0; var_447_float = 0; // 0x79a PushV
	var_448_int = var_420_int + var_422_int; // 0x79b Add
	var_449_float = 100.0; // 0x79c PushF
	var_446_float = var_448_int / var_448_int; // 0x79d Div2
	var_447_float = 1; // 0x79e MovI
	func_2378(var_445_float, var_446_float, var_447_float); // 0x79f NEW_2
	var_423_float = var_445_float; // 0x7a0 Mov
	var_451_string = "health"; // 0x7a2 PushS
	GetProperty(var_451_string, var_424_float); // 0x7a3 ObjFunc
	var_452_int = 1; // 0x7a5 PushI
	var_453_int = var_452_int - var_423_float; // 0x7a6 Sub
	var_425_float = var_409_float * var_453_int; // 0x7a7 Mult2
	var_454_string = "health"; // 0x7a8 PushS
	var_455_float = 0; var_456_float = 0; var_457_float = 0; var_458_float = 0; // 0x7a9 PushV
	var_456_float = var_424_float - var_425_float; // 0x7aa Sub2
	var_457_float = 0; // 0x7ab MovI
	var_458_float = 1; // 0x7ac MovI
	func_2385(var_455_float, var_456_float, var_457_float, var_458_float); // 0x7ad NEW_2
	SetProperty(var_454_string, var_455_float); // 0x7af ObjFunc
	var_461_bool = 0; var_462_object = Obj(); // 0x7b1 PushV
	var_462_object = var_408_object; // 0x7b2 Mov
	func_1868(var_461_bool, var_462_object); // 0x7b3 NEW_2
	if(var_461_bool == 0) goto Label_1978; // 0x7b5 JumpB
	var_463_float = 0; // 0x7b6 PushV
	var_463_float = -var_425_float; // 0x7b7 Neg2
	func_2439(var_463_float); // 0x7b8 NEW_2
	
Label_1978:
	var_407_float = var_425_float; // 0x7ba Mov
	return 12; // 0x7bb Return
	
Label_1944:
	GetProperty(var_421_string, var_422_int); // 0x798 ObjFunc
	
Label_1926:
	var_467_string = "armor"; // 0x786 PushS
	GetProperty(var_467_string, var_420_int); // 0x787 ObjFunc
}


func_1656(var_0_object)
{
	var_0_object = 1; // 0x678 TMovB
	var_21_int = 0; // 0x679 PushI
	KillTimer(var_21_int); // 0x67a Func
	Stop(); // 0x67c Func
	return 0; // 0x67e Return
}


func_2171()
{
	var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); // 0x87b PushV
	GetPosition(var_245_cvector); // 0x87c ObjFunc
	GetPosition(var_246_cvector); // 0x87e Func
	var_247_cvector = var_245_cvector - var_246_cvector; // 0x880 Sub2
	var_248_float = GetByIndex(var_247_cvector, 0); // 0x881 PushE
	var_249_float = GetByIndex(var_247_cvector, 2); // 0x882 PushE
	RotateAsync(var_248_float, var_249_float); // 0x883 Func
	return 6; // 0x885 Return
}


func_1407(var_0_object)
{
	var_131_object = Obj(); // 0x57f PushV
	var_131_object = var_0_object; // 0x580 MovT
	func_2471(var_131_object); // 0x581 NEW_2
	return 0; // 0x583 Return
}


func_132(var_2_object, var_98_string)
{
	var_99_bool = 0; // 0x85 PushV
	func_2573(var_99_bool); // 0x86 NEW_2
	var_100_bool = var_99_bool == 0; // 0x88 Not
	if(var_100_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_101_bool = var_98_string == var_2_object; // 0x8b Eq
	if(var_101_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_102_string = ""; var_103_bool = 0; // 0x8e PushV
	var_102_string = var_98_string; // 0x8f Mov
	var_104_string = ""; // 0x90 PushS
	var_105_bool = var_98_string == var_104_string; // 0x91 Eq
	if(var_105_bool == 0) goto Label_149; // 0x92 JumpB
	var_103_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_2288(var_102_string, var_103_bool); // 0x96 NEW_2
	var_2_object = var_98_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_103_bool = 1; // 0x95 MovB
}


func_1412(var_468_int)
{
	var_468_int = 0; // 0x584 MovI
	return 0; // 0x585 Return
}


func_2182(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x886 PushV
	IsLoaded(var_34_bool); // 0x887 Func
	var_32_bool = var_34_bool; // 0x889 Mov
	return 2; // 0x88a Return
}


func_1414()
{
	var_264_string = ""; // 0x586 PushV
	var_264_string = "attack_stay"; // 0x587 MovS
	func_2321(var_264_string); // 0x588 NEW_2
	return 0; // 0x58a Return
}


func_1672(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj(); // 0x689 PushV
	var_31_object = var_29_object; // 0x68a Mov
	func_2021(var_30_bool, var_31_object); // 0x68b NEW_2
	var_28_bool = var_30_bool; // 0x68c Mov
	return 0; // 0x68e Return
}


func_2439(var_463_float)
{
	var_464_object = Obj(); var_465_object = Obj(); // 0x987 PushV
	CreateFloatVector(var_465_object); // 0x988 Func
	add(var_463_float); // 0x98a ObjFunc
	var_466_int = 15; // 0x98c PushI
	SendWorldWndMessage(var_466_int, var_465_object); // 0x98d Func
	return 2; // 0x98f Return
}


func_2187(var_31_bool, var_33_float)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0; // 0x88b PushV
	GetPosition(var_44_cvector); // 0x88c ObjFunc
	GetEyesHeight(var_43_float); // 0x88e ObjFunc
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x890 PushE
	var_52_float = var_52_float + var_43_float; // 0x891 Add2
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x892 PopE
	GetPosition(var_45_cvector); // 0x893 Func
	GetEyesHeight(var_43_float); // 0x895 Func
	var_53_float = GetByIndex(var_45_cvector, 1); // 0x897 PushE
	var_53_float = var_53_float + var_43_float; // 0x898 Add2
	SetByIndex(var_45_cvector, 1) = var_53_float; // 0x899 PopE
	var_46_cvector = var_44_cvector - var_45_cvector; // 0x89a Sub2
	var_54_float = GetByIndex(var_46_cvector, 1); // 0x89b PushE
	var_54_float = 0; // 0x89c MovI
	SetByIndex(var_46_cvector, 1) = var_54_float; // 0x89d PopE
	var_55_int = var_46_cvector | var_46_cvector; // 0x89e Or
	var_56_float = sqrt(var_55_int); // 0x89f Sqrt
	var_46_cvector = var_46_cvector / var_46_cvector; // 0x8a0 Div2
	var_47_cvector = -var_46_cvector; // 0x8a1 Neg2
	var_57_float = var_46_cvector * var_33_float; // 0x8a2 Mult
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0x8a3 PushV
	var_60_cvector = CVector(0.0, 1.0, 0.0); // 0x8a4 PushVec
	var_59_cvector = var_47_cvector ^ var_60_cvector; // 0x8a5 Xor2
	func_2368(var_58_cvector, var_59_cvector); // 0x8a6 NEW_2
	var_66_int = 25; // 0x8a8 PushI
	var_67_float = var_58_cvector * var_66_int; // 0x8a9 Mult
	var_68_int = var_57_float + var_67_float; // 0x8aa Add
	var_69_cvector = CVector(0.0, 10.0, 0.0); // 0x8ab PushVec
	var_48_cvector = var_68_int - var_69_cvector; // 0x8ac Sub2
	var_49_cvector = var_45_cvector + var_48_cvector; // 0x8ad Add2
	IsOverrideActive(var_50_bool); // 0x8ae Func
	var_70_bool = var_50_bool; // 0x8b0 Push
	if(var_70_bool == 0) goto Label_2228; // 0x8b1 JumpB
	var_31_bool = 0; // 0x8b2 MovB
	return 18; // 0x8b3 Return
	
Label_2228:
	StopWorld(); // 0x8b4 Func
	CameraTransit(var_49_cvector, var_47_cvector); // 0x8b6 Func
	var_71_float = GetByIndex(var_48_cvector, 0); // 0x8b8 PushE
	var_72_float = GetByIndex(var_48_cvector, 2); // 0x8b9 PushE
	Rotate(var_71_float, var_72_float); // 0x8ba Func
	var_73_bool = 0; // 0x8bc PushV
	func_2573(var_73_bool); // 0x8bd NEW_2
	if(var_73_bool == 0) goto Label_2241; // 0x8bf JumpB
	goto Label_2249; // 0x8c0 Jump
	
Label_2249:
	CameraWaitForPlayFinish(); // 0x8c9 Func
	ResumeWorld(); // 0x8cb Func
	var_31_bool = 1; // 0x8cd MovB
	return 18; // 0x8ce Return
	
Label_2241:
	var_74_string = "head"; // 0x8c1 PushS
	HasAnimationTrack(var_51_bool, var_74_string); // 0x8c2 Func
	var_75_bool = var_51_bool; // 0x8c4 Push
	if(var_75_bool == 0) goto Label_2249; // 0x8c5 JumpB
	var_76_string = "head"; // 0x8c6 PushS
	LookAsyncCamera(var_76_string); // 0x8c7 Func
}


func_1419()
{
	return 0; // 0x58c Return
}


func_1421(var_493_bool)
{
	var_493_bool = 1; // 0x58d MovB
	return 0; // 0x58e Return
}


func_1679(var_207_string)
{
	var_207_string = "walk"; // 0x68f MovS
	return 0; // 0x690 Return
}


func_1423(var_389_int)
{
	var_389_int = 1; // 0x58f MovI
	return 0; // 0x590 Return
}


func_1681(var_208_string)
{
	var_208_string = "run"; // 0x691 MovS
	return 0; // 0x692 Return
}


func_1425(var_384_float)
{
	var_384_float = 0.5; // 0x591 MovF
	return 0; // 0x592 Return
}


func_1683(var_72_object)
{
	var_73_bool = 0; var_74_bool = 0; // 0x693 PushV
	var_75_string = "powder"; // 0x694 PushS
	var_76_int = 0; // 0x695 PushI
	var_77_int = 1; // 0x696 PushI
	AddItem(var_74_bool, var_75_string, var_76_int, var_77_int); // 0x697 Func
	var_78_object = Obj(); // 0x699 PushV
	var_78_object = var_72_object; // 0x69a Mov
	func_1694(var_78_object); // 0x69b NEW_2
	return 2; // 0x69d Return
}


func_2449(var_30_float)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x991 PushV
	CreateFloatVector(var_32_object); // 0x992 Func
	add(var_30_float); // 0x994 ObjFunc
	var_33_int = 16; // 0x996 PushI
	SendWorldWndMessage(var_33_int, var_32_object); // 0x997 Func
	return 2; // 0x999 Return
}


func_1427(var_2_object, var_138_bool, var_139_object, var_140_float, var_141_float, var_142_bool, var_143_bool)
{
	var_147_bool = 0; var_148_bool = 0; var_149_bool = 0; var_150_bool = 0; // 0x593 PushV
	var_151_object = Obj(); // 0x594 PushV
	var_151_object = var_139_object; // 0x595 Mov
	func_2471(var_151_object); // 0x596 NEW_2
	var_152_int = 1; // 0x598 PushI
	var_153_int = 5; // 0x599 PushI
	SetTimer(var_152_int, var_153_int); // 0x59a Func
	CanSee(var_149_bool, var_139_object); // 0x59c Func
	var_154_bool = var_149_bool; // 0x59e Push
	if(var_154_bool == 0) goto Label_1446; // 0x59f JumpB
	var_2_object = 1; // 0x5a0 TMovB
	var_155_object = Obj(); // 0x5a1 PushV
	var_155_object = var_139_object; // 0x5a2 Mov
	func_2303(var_155_object); // 0x5a3 NEW_2
	goto Label_1447; // 0x5a5 Jump
	
Label_1447:
	var_162_bool = 0; var_163_object = Obj(); // 0x5a7 PushV
	var_163_object = var_139_object; // 0x5a8 Mov
	func_1868(var_162_bool, var_163_object); // 0x5a9 NEW_2
	if(var_162_bool == 0) goto Label_1457; // 0x5ab JumpB
	var_166_object = Obj(); // 0x5ac PushV
	func_2362(var_166_object); // 0x5ad NEW_2
	SendPlayerEnemy(var_139_object, var_166_object); // 0x5af Func
	
Label_1457:
	var_167_bool = 0; var_168_object = Obj(); var_169_float = 0; var_170_float = 0; var_171_bool = 0; var_172_bool = 0; // 0x5b1 PushV
	var_168_object = var_139_object; // 0x5b2 Mov
	var_169_float = var_140_float; // 0x5b3 Mov
	var_170_float = var_141_float; // 0x5b4 Mov
	var_171_bool = var_142_bool; // 0x5b5 Mov
	var_172_bool = var_143_bool; // 0x5b6 Mov
	func_1532(var_149_bool, var_150_bool, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool); // 0x5b7 NEW_2
	var_150_bool = var_167_bool; // 0x5b8 Mov
	var_218_object = var_2_object; // 0x5ba PushT
	if(var_218_object == 0) goto Label_1471; // 0x5bb JumpB
	var_219_string = "head"; // 0x5bc PushS
	UnlookAsync(var_219_string); // 0x5bd Func
	
Label_1471:
	var_220_int = 1; // 0x5bf PushI
	KillTimer(var_220_int); // 0x5c0 Func
	var_138_bool = var_150_bool; // 0x5c2 Mov
	return 4; // 0x5c3 Return
	
Label_1446:
	var_2_object = 0; // 0x5a6 TMovB
}


func_2459(var_61_bool, var_62_string, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x99b PushV
	FindActor(var_65_object, var_62_string); // 0x99c Func
	var_66_bool = var_65_object == 0; // 0x99e NullEq
	if(var_66_bool == 0) goto Label_2466; // 0x99f JumpB
	var_61_bool = 0; // 0x9a0 MovB
	return 2; // 0x9a1 Return
	
Label_2466:
	Trigger(var_65_object, var_63_string); // 0x9a2 Func
	var_61_bool = 1; // 0x9a4 MovB
	return 2; // 0x9a5 Return
}


func_1694(var_78_object)
{
	EventDisable(0); // 0x69f EventDisable
	var_79_object = Obj(); // 0x6a0 PushV
	var_79_object = var_78_object; // 0x6a1 Mov
	func_1719(var_79_object); // 0x6a2 NEW_2
	var_159_int = 50; // 0x6a4 PushI
	var_160_int = 40; // 0x6a5 PushI
	SetRTEnvelope(var_159_int, var_160_int); // 0x6a6 Func
	EventEnable(0); // 0x6a8 EventEnable
	
Label_1705:
	Hold(); // 0x6a9 Func
	goto Label_1705; // 0x6ab Jump
}


func_2471(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x9a7 PushV
	IsPlayerActor(var_20_object, var_22_bool); // 0x9a8 Func
	var_23_bool = var_22_bool; // 0x9aa Push
	if(var_23_bool == 0) goto Label_2479; // 0x9ab JumpB
	var_24_string = "attack"; // 0x9ac PushS
	PlayGlobalMusic(var_24_string); // 0x9ad Func
	
Label_2479:
	return 2; // 0x9af Return
}


func_2480()
{
	var_368_object = Obj(); var_369_object = Obj(); // 0x9b0 PushV
	GetScene(var_369_object); // 0x9b1 Func
	var_370_string = "battle"; // 0x9b3 PushS
	var_371_object = Obj(); // 0x9b4 PushV
	func_2362(var_371_object); // 0x9b5 NEW_2
	BroadcastMessage(var_370_string, var_371_object, var_369_object); // 0x9b7 Func
	return 2; // 0x9b9 Return
}


func_1205(var_494_bool, var_495_float)
{
	var_496_float = 0; var_497_bool = 0; var_498_float = 0; var_499_bool = 0; // 0x4b5 PushV
	rand(var_498_float); // 0x4b6 Func
	var_500_bool = var_498_float < var_495_float; // 0x4b8 LT
	if(var_500_bool == 0) goto Label_1225; // 0x4b9 JumpB
	
Label_1210:
	IsAnimationPlaying(var_499_bool); // 0x4ba Func
	var_501_bool = var_499_bool == 0; // 0x4bc Not
	if(var_501_bool == 0) goto Label_1215; // 0x4bd JumpB
	goto Label_1224; // 0x4be Jump
	
Label_1224:
	goto Label_1230; // 0x4c8 Jump
	
Label_1230:
	var_494_bool = 0; // 0x4ce MovB
	return 4; // 0x4cf Return
	
Label_1215:
	var_502_bool = 0; // 0x4bf PushV
	func_1303(var_502_bool); // 0x4c0 NEW_2
	if(var_502_bool == 0) goto Label_1221; // 0x4c2 JumpB
	var_494_bool = 1; // 0x4c3 MovB
	return 4; // 0x4c4 Return
	
Label_1221:
	sync(); // 0x4c5 Func
	goto Label_1210; // 0x4c7 Jump
	
Label_1225:
	WaitForAnimEnd(); // 0x4c9 Func
	func_1407(var_499_bool); // 0x4cc NEW_2
}


func_1719(var_79_object)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_string = ""; var_85_object = Obj(); var_86_bool = 0; var_87_bool = 0; var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_string = ""; var_95_object = Obj(); var_96_bool = 0; var_97_bool = 0; var_98_float = 0; var_99_cvector = CVector(0,0,0); // 0x6b7 PushV
	var_100_bool = var_79_object == 0; // 0x6b8 NullEq
	if(var_100_bool == 0) goto Label_1727; // 0x6b9 JumpB
	var_101_string = ""; // 0x6ba PushV
	var_101_string = "fdie"; // 0x6bb MovS
	func_1810(var_101_string); // 0x6bc NEW_2
	goto Label_1809; // 0x6be Jump
	
Label_1809:
	return 20; // 0x711 Return
	
Label_1727:
	GetPosition(var_90_cvector); // 0x6bf ObjFunc
	GetPosition(var_91_cvector); // 0x6c1 Func
	GetDirection(var_92_cvector); // 0x6c3 Func
	var_93_cvector = var_91_cvector - var_90_cvector; // 0x6c5 Sub2
	var_133_float = GetByIndex(var_93_cvector, 0); // 0x6c6 PushE
	var_134_float = GetByIndex(var_92_cvector, 0); // 0x6c7 PushE
	var_135_float = var_133_float * var_134_float; // 0x6c8 Mult
	var_136_float = GetByIndex(var_93_cvector, 2); // 0x6c9 PushE
	var_137_float = GetByIndex(var_92_cvector, 2); // 0x6ca PushE
	var_138_float = var_136_float * var_137_float; // 0x6cb Mult
	var_139_int = var_135_float + var_138_float; // 0x6cc Add
	var_140_int = 0; // 0x6cd PushI
	var_141_bool = var_139_int >= var_140_int; // 0x6ce GE
	if(var_141_bool == 0) goto Label_1746; // 0x6cf JumpB
	var_94_string = "fdie"; // 0x6d0 MovS
	goto Label_1747; // 0x6d1 Jump
	
Label_1747:
	RemoveRTEnvelope(); // 0x6d3 Func
	SetDeathState(); // 0x6d5 Func
	Stop(); // 0x6d7 Func
	StopAsync(); // 0x6d9 Func
	var_95_object = var_79_object; // 0x6db Mov
	var_142_string = "GetScriptProperty"; // 0x6dc PushS
	var_143_int = 2; // 0x6dd PushI
	var_144_bool = IsFuncExist(var_79_object, var_142_string, var_143_int); // 0x6de FuncExist
	if(var_144_bool == 0) goto Label_1771; // 0x6df JumpB
	var_145_string = "Owner"; // 0x6e0 PushS
	HasScriptProperty(var_96_bool, var_145_string); // 0x6e1 ObjFunc
	var_146_bool = var_96_bool; // 0x6e3 Push
	if(var_146_bool == 0) goto Label_1771; // 0x6e4 JumpB
	var_147_string = "Owner"; // 0x6e5 PushS
	GetScriptProperty(var_95_object, var_147_string); // 0x6e6 ObjFunc
	var_148_bool = var_95_object == 0; // 0x6e8 NullEq
	if(var_148_bool == 0) goto Label_1771; // 0x6e9 JumpB
	var_95_object = var_79_object; // 0x6ea Mov
	
Label_1771:
	var_149_string = "@GetEyesHeight"; // 0x6eb PushS
	var_150_int = 1; // 0x6ec PushI
	var_151_bool = IsFuncExist(var_95_object, var_149_string, var_150_int); // 0x6ed FuncExist
	if(var_151_bool == 0) goto Label_1786; // 0x6ee JumpB
	GetEyesHeight(var_98_float); // 0x6ef ObjFunc
	var_99_cvector = CVector(0.0, 0.0, 0.0); // 0x6f1 MovV
	var_152_float = GetByIndex(var_99_cvector, 1); // 0x6f2 PushE
	var_152_float = var_98_float; // 0x6f3 Mov
	SetByIndex(var_99_cvector, 1) = var_152_float; // 0x6f4 PopE
	var_153_string = "head"; // 0x6f5 PushS
	LookAsync(var_79_object, var_153_string, var_99_cvector); // 0x6f6 Func
	var_97_bool = 1; // 0x6f8 MovB
	goto Label_1787; // 0x6f9 Jump
	
Label_1787:
	var_154_string = ""; // 0x6fb PushV
	var_154_string = var_94_string; // 0x6fc Mov
	func_2321(var_154_string); // 0x6fd NEW_2
	var_155_string = "all"; // 0x6ff PushS
	PlayAnimation(var_155_string, var_94_string); // 0x700 Func
	WaitForAnimEnd(); // 0x702 Func
	var_156_bool = var_97_bool; // 0x704 Push
	if(var_156_bool == 0) goto Label_1803; // 0x705 JumpB
	StopAsync(); // 0x706 Func
	var_157_string = "head"; // 0x708 PushS
	UnlookAsync(var_157_string); // 0x709 Func
	
Label_1803:
	var_158_string = "all"; // 0x70b PushS
	LockAnimationEnd(var_158_string, var_94_string); // 0x70c Func
	RemoveEnvelope(); // 0x70e Func
	var_95_object = 0; // 0x710 SetNull
	
Label_1786:
	var_97_bool = 0; // 0x6fa MovB
	
Label_1746:
	var_94_string = "bdie"; // 0x6d2 MovS
}


func_443()
{
	var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_float = 0; var_31_bool = 0; // 0x1bb PushV
	WaitForAnimEnd(); // 0x1bc Func
	var_32_bool = 0; // 0x1be PushV
	func_2182(var_32_bool); // 0x1bf NEW_2
	var_35_bool = var_32_bool == 0; // 0x1c1 Not
	if(var_35_bool == 0) goto Label_452; // 0x1c2 JumpB
	return 14; // 0x1c3 Return
	
Label_452:
	var_36_int = 0; // 0x1c4 PushV
	func_2498(var_36_int); // 0x1c5 NEW_2
	var_25_int = var_36_int; // 0x1c6 Mov
	var_26_int = 0; // 0x1c8 MovI
	
Label_457:
	var_49_bool = 0; // 0x1c9 PushV
	var_49_bool = 0; // 0x1ca MovB
	var_50_int = 5; // 0x1cb PushI
	var_51_bool = var_26_int < var_50_int; // 0x1cc LT
	if(var_51_bool == 0) goto Label_467; // 0x1cd JumpB
	var_52_bool = 0; // 0x1ce PushV
	func_2182(var_52_bool); // 0x1cf NEW_2
	if(var_52_bool == 0) goto Label_467; // 0x1d1 JumpB
	var_49_bool = 1; // 0x1d2 MovB
	
Label_467:
	if(var_49_bool == 0) goto Label_519; // 0x1d3 JumpB
	var_53_int = 3; // 0x1d4 PushI
	irand(var_27_int, var_53_int); // 0x1d5 Func
	var_54_int = 0; // 0x1d7 PushI
	var_55_bool = var_27_int == var_54_int; // 0x1d8 Eq
	if(var_55_bool == 0) goto Label_491; // 0x1d9 JumpB
	var_56_int = var_25_int; // 0x1da Push
	if(var_56_int == 0) goto Label_490; // 0x1db JumpB
	irand(var_28_int, var_25_int); // 0x1dc Func
	var_57_string = "all"; // 0x1de PushS
	var_58_string = ""; var_59_int = 0; // 0x1df PushV
	var_59_int = var_28_int; // 0x1e0 Mov
	func_2491(var_58_string, var_59_int); // 0x1e1 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x1e3 Func
	WaitForAnimEnd(var_29_bool); // 0x1e5 Func
	var_60_bool = var_29_bool == 0; // 0x1e7 Not
	if(var_60_bool == 0) goto Label_490; // 0x1e8 JumpB
	goto Label_519; // 0x1e9 Jump
	
Label_519:
	ResetAAS(); // 0x207 Func
	return 14; // 0x209 Return
	
Label_490:
	goto Label_508; // 0x1ea Jump
	
Label_508:
	var_61_bool = 0; // 0x1fc PushV
	func_522(var_61_bool); // 0x1fd NEW_2
	var_62_bool = var_61_bool == 0; // 0x1ff Not
	if(var_62_bool == 0) goto Label_514; // 0x200 JumpB
	goto Label_519; // 0x201 Jump
	
Label_514:
	ResetAAS(); // 0x202 Func
	var_63_int = 1; // 0x204 PushI
	var_26_int = var_26_int + var_63_int; // 0x205 Add2
	goto Label_457; // 0x206 Jump
	
Label_491:
	var_64_int = 1; // 0x1eb PushI
	var_65_bool = var_27_int == var_64_int; // 0x1ec Eq
	if(var_65_bool == 0) goto Label_505; // 0x1ed JumpB
	var_66_int = 4; // 0x1ee PushI
	rand(var_30_float, var_66_int); // 0x1ef Func
	var_67_int = 1; // 0x1f1 PushI
	var_68_int = var_30_float + var_67_int; // 0x1f2 Add
	Sleep(var_68_int, var_31_bool); // 0x1f3 Func
	var_69_bool = var_31_bool == 0; // 0x1f5 Not
	if(var_69_bool == 0) goto Label_504; // 0x1f6 JumpB
	goto Label_519; // 0x1f7 Jump
	
Label_504:
	goto Label_508; // 0x1f8 Jump
	
Label_505:
	var_70_int = var_26_int; // 0x1f9 Push
	if(var_70_int == 0) goto Label_508; // 0x1fa JumpB
	goto Label_519; // 0x1fb Jump
}


func_2491(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x9bb PushV
	var_45_string = "idle"; // 0x9bc MovS
	var_46_int = var_43_int; // 0x9bd Push
	if(var_46_int == 0) goto Label_2496; // 0x9be JumpB
	var_45_string = var_45_string + var_43_int; // 0x9bf Add2
	
Label_2496:
	var_42_string = var_45_string; // 0x9c0 Mov
	return 2; // 0x9c1 Return
}


func_1980(var_45_bool)
{
	var_47_bool = 0; var_48_bool = 0; // 0x7bc PushV
	IsDead(var_48_bool); // 0x7bd ObjFunc
	var_45_bool = var_48_bool; // 0x7bf Mov
	return 2; // 0x7c0 Return
}


func_1985(var_34_bool, var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); // 0x7c1 PushV
	var_40_bool = var_35_object == 0; // 0x7c2 NullEq
	if(var_40_bool == 0) goto Label_1990; // 0x7c3 JumpB
	var_34_bool = 0; // 0x7c4 MovB
	return 4; // 0x7c5 Return
	
Label_1990:
	var_41_bool = 0; // 0x7c6 PushV
	var_41_bool = 0; // 0x7c7 MovB
	var_42_string = "IsDead"; // 0x7c8 PushS
	var_43_int = 1; // 0x7c9 PushI
	var_44_bool = IsFuncExist(var_35_object, var_42_string, var_43_int); // 0x7ca FuncExist
	if(var_44_bool == 0) goto Label_2002; // 0x7cb JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0x7cc PushV
	var_46_object = var_35_object; // 0x7cd Mov
	func_1980(var_46_object); // 0x7ce NEW_2
	if(var_45_bool == 0) goto Label_2002; // 0x7d0 JumpB
	var_41_bool = 1; // 0x7d1 MovB
	
Label_2002:
	if(var_41_bool == 0) goto Label_2005; // 0x7d2 JumpB
	var_34_bool = 0; // 0x7d3 MovB
	return 4; // 0x7d4 Return
	
Label_2005:
	GetScene(var_38_object); // 0x7d5 Func
	var_49_bool = var_38_object == 0; // 0x7d7 NullEq
	if(var_49_bool == 0) goto Label_2011; // 0x7d8 JumpB
	var_34_bool = 0; // 0x7d9 MovB
	return 4; // 0x7da Return
	
Label_2011:
	GetScene(var_39_object); // 0x7db ObjFunc
	var_50_bool = var_38_object != var_39_object; // 0x7dd Neq
	if(var_50_bool == 0) goto Label_2017; // 0x7de JumpB
	var_34_bool = 0; // 0x7df MovB
	return 4; // 0x7e0 Return
	
Label_2017:
	var_34_bool = 1; // 0x7e1 MovB
	return 4; // 0x7e2 Return
}


func_2498(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x9c2 PushV
	var_39_int = 0; // 0x9c3 MovI
	
Label_2500:
	var_41_string = "all"; // 0x9c4 PushS
	var_42_string = ""; var_43_int = 0; // 0x9c5 PushV
	var_43_int = var_39_int; // 0x9c6 Mov
	func_2491(var_42_string, var_43_int); // 0x9c7 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x9c9 Func
	var_47_bool = var_40_bool == 0; // 0x9cb Not
	if(var_47_bool == 0) goto Label_2510; // 0x9cc JumpB
	goto Label_2513; // 0x9cd Jump
	
Label_2513:
	var_36_int = var_39_int; // 0x9d1 Mov
	return 4; // 0x9d2 Return
	
Label_2510:
	var_48_int = 1; // 0x9ce PushI
	var_39_int = var_39_int + var_48_int; // 0x9cf Add2
	goto Label_2500; // 0x9d0 Jump
}


func_707(var_2_object)
{
	Stop(); // 0x2c3 Func
	var_18_int = 120; // 0x2c5 PushI
	KillTimer(var_18_int); // 0x2c6 Func
	var_2_object = 1; // 0x2c8 TMovB
	return 0; // 0x2c9 Return
}


func_2255()
{
	var_142_bool = 0; var_143_bool = 0; // 0x8cf PushV
	CameraSwitchToNormal(); // 0x8d0 Func
	var_144_bool = 0; // 0x8d2 PushV
	func_2573(var_144_bool); // 0x8d3 NEW_2
	if(var_144_bool == 0) goto Label_2263; // 0x8d5 JumpB
	goto Label_2271; // 0x8d6 Jump
	
Label_2271:
	return 2; // 0x8df Return
	
Label_2263:
	var_145_string = "head"; // 0x8d7 PushS
	HasAnimationTrack(var_143_bool, var_145_string); // 0x8d8 Func
	var_146_bool = var_143_bool; // 0x8da Push
	if(var_146_bool == 0) goto Label_2271; // 0x8db JumpB
	var_147_string = "head"; // 0x8dc PushS
	UnlookAsync(var_147_string); // 0x8dd Func
}


func_1232(var_0_object, var_295_bool, var_296_float)
{
	var_297_bool = 0; var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_bool = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; // 0x4d0 PushV
	
Label_1233:
	IsAnimationPlaying(var_302_bool); // 0x4d1 Func
	var_307_bool = var_302_bool == 0; // 0x4d3 Not
	if(var_307_bool == 0) goto Label_1238; // 0x4d4 JumpB
	goto Label_1270; // 0x4d5 Jump
	
Label_1270:
	func_1407(var_306_float); // 0x4f7 NEW_2
	var_295_bool = 0; // 0x4f9 MovB
	return 10; // 0x4fa Return
	
Label_1238:
	var_308_bool = 0; // 0x4d6 PushV
	func_1303(var_308_bool); // 0x4d7 NEW_2
	if(var_308_bool == 0) goto Label_1244; // 0x4d9 JumpB
	var_295_bool = 1; // 0x4da MovB
	return 10; // 0x4db Return
	
Label_1244:
	var_351_bool = 0; var_352_object = Obj(); // 0x4dc PushV
	var_352_object = var_0_object; // 0x4dd MovT
	func_2021(var_351_bool, var_352_object); // 0x4de NEW_2
	var_353_bool = var_351_bool == 0; // 0x4e0 Not
	if(var_353_bool == 0) goto Label_1252; // 0x4e1 JumpB
	var_295_bool = 0; // 0x4e2 MovB
	return 10; // 0x4e3 Return
	
Label_1252:
	GetPFPosition(var_303_cvector); // 0x4e4 TObjFunc
	GetPFPosition(var_304_cvector); // 0x4e6 Func
	var_305_cvector = var_303_cvector - var_304_cvector; // 0x4e8 Sub2
	var_306_float = var_305_cvector | var_305_cvector; // 0x4e9 Or2
	var_354_float = var_296_float * var_296_float; // 0x4ea Mult
	var_355_bool = var_306_float < var_354_float; // 0x4eb LT
	if(var_355_bool == 0) goto Label_1267; // 0x4ec JumpB
	var_356_bool = 0; var_357_float = 0; // 0x4ed PushV
	var_357_float = var_296_float; // 0x4ee Mov
	func_1068(var_306_float, var_356_bool, var_357_float); // 0x4ef NEW_2
	var_295_bool = 1; // 0x4f1 MovB
	return 10; // 0x4f2 Return
	
Label_1267:
	sync(); // 0x4f3 Func
	goto Label_1233; // 0x4f5 Jump
}


func_1490(var_2_object)
{
	var_18_int = 1; // 0x5d2 PushI
	KillTimer(var_18_int); // 0x5d3 Func
	var_19_object = var_2_object; // 0x5d5 PushT
	if(var_19_object == 0) goto Label_1499; // 0x5d6 JumpB
	var_2_object = 0; // 0x5d7 TMovB
	var_20_string = "head"; // 0x5d8 PushS
	UnlookAsync(var_20_string); // 0x5d9 Func
	
Label_1499:
	func_1656(var_17_object); // 0x5dc NEW_2
	return 0; // 0x5de Return
}


func_723(var_0_object, var_69_bool)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x2d3 PushV
	GetDirection(var_72_cvector); // 0x2d4 Func
	var_74_cvector = CVector(0,0,0); var_75_object = Obj(); // 0x2d6 PushV
	var_75_object = var_0_object; // 0x2d7 MovT
	func_1861(var_75_object); // 0x2d8 NEW_2
	var_73_cvector = var_74_cvector; // 0x2d9 Mov
	var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0x2db PushV
	var_81_cvector = var_72_cvector; // 0x2dc Mov
	var_82_cvector = var_73_cvector; // 0x2dd Mov
	func_2396(var_80_float, var_81_cvector, var_82_cvector); // 0x2de NEW_2
	var_88_float = -0.34202; // 0x2e0 PushF
	var_69_bool = var_80_float >= var_88_float; // 0x2e1 GE2
	return 4; // 0x2e2 Return
}


func_2515()
{
	var_32_int = 1; // 0x9d4 PushI
	SetReturnValue(var_32_int); // 0x9d5 ObjFunc
	return 0; // 0x9d7 Return
}


func_2520()
{
	var_25_string = "b1q03_retreat"; // 0x9d9 PushS
	var_26_int = 1; // 0x9da PushI
	SetVariable(var_25_string, var_26_int); // 0x9db Func
	var_27_int = 0; // 0x9dd PushI
	SetReturnValue(var_27_int); // 0x9de ObjFunc
	return 0; // 0x9e0 Return
}


func_2272(var_124_string)
{
	var_125_bool = 0; var_126_float = 0; var_127_float = 0; var_128_bool = 0; var_129_float = 0; var_130_float = 0; // 0x8e0 PushV
	lshHasAnimation(var_128_bool, var_124_string); // 0x8e1 Func
	var_131_bool = var_128_bool; // 0x8e3 Push
	if(var_131_bool == 0) goto Label_2283; // 0x8e4 JumpB
	lshGetAnimTimes(var_124_string, var_129_float, var_130_float); // 0x8e5 Func
	var_132_bool = 0; // 0x8e7 PushB
	lshPlayAnimation(var_129_float, var_130_float, var_132_bool); // 0x8e8 Func
	goto Label_2287; // 0x8ea Jump
	
Label_2287:
	return 6; // 0x8ef Return
	
Label_2283:
	var_133_string = "Can't find lsh animation : "; // 0x8eb PushS
	var_134_int = var_133_string + var_124_string; // 0x8ec Add
	Trace(var_134_int); // 0x8ed Func
}


func_2529(var_82_int)
{
	var_83_int = 0; var_84_int = 0; // 0x9e1 PushV
	var_85_string = "branch"; // 0x9e2 PushS
	GetVariable(var_85_string, var_84_int); // 0x9e3 Func
	var_86_int = 0; // 0x9e5 PushI
	var_87_bool = var_84_int == var_86_int; // 0x9e6 Eq
	if(var_87_bool == 0) goto Label_2539; // 0x9e7 JumpB
	var_82_int = 1; // 0x9e8 MovI
	return 2; // 0x9e9 Return
	
Label_2539:
	var_88_int = 1; // 0x9eb PushI
	var_89_bool = var_84_int == var_88_int; // 0x9ec Eq
	if(var_89_bool == 0) goto Label_2544; // 0x9ed JumpB
	var_82_int = 2; // 0x9ee MovI
	return 2; // 0x9ef Return
	
Label_2544:
	var_82_int = 3; // 0x9f0 MovI
	return 2; // 0x9f1 Return
}


func_994(var_1_object, var_2_object, var_4_bool)
{
	var_94_bool = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_bool = 0; var_99_cvector = CVector(0,0,0); // 0x3e2 PushV
	var_1_object = 0; // 0x3e3 TMovI
	
Label_996:
	var_100_string = "all"; // 0x3e4 PushS
	var_101_string = "attack_begin"; // 0x3e5 PushS
	var_102_int = 1; // 0x3e6 PushI
	var_103_int = var_1_object + var_102_int; // 0x3e7 Add
	var_104_int = var_101_string + var_103_int; // 0x3e8 Add
	HasAnimation(var_97_bool, var_100_string, var_104_int); // 0x3e9 Func
	var_105_bool = var_97_bool == 0; // 0x3eb Not
	if(var_105_bool == 0) goto Label_1006; // 0x3ec JumpB
	goto Label_1009; // 0x3ed Jump
	
Label_1009:
	var_2_object = 0; // 0x3f1 TMovI
	
Label_1010:
	var_106_string = "attack"; // 0x3f2 PushS
	var_107_int = 1; // 0x3f3 PushI
	var_108_int = var_2_object + var_107_int; // 0x3f4 Add
	var_109_int = var_106_string + var_108_int; // 0x3f5 Add
	IsExisting3DSound(var_98_bool, var_109_int); // 0x3f6 Func
	var_110_bool = var_98_bool == 0; // 0x3f8 Not
	if(var_110_bool == 0) goto Label_1019; // 0x3f9 JumpB
	goto Label_1022; // 0x3fa Jump
	
Label_1022:
	var_111_string = "all"; // 0x3fe PushS
	var_112_string = "bjump"; // 0x3ff PushS
	GetAnimationOffset(var_99_cvector, var_111_string, var_112_string); // 0x400 Func
	var_113_float = GetByIndex(var_99_cvector, 2); // 0x402 PushE
	var_4_bool = -var_113_float; // 0x403 Neg2
	return 6; // 0x404 Return
	
Label_1019:
	var_114_int = 1; // 0x3fb PushI
	var_2_object = var_2_object + var_114_int; // 0x3fc Add2
	goto Label_1010; // 0x3fd Jump
	
Label_1006:
	var_115_int = 1; // 0x3ee PushI
	var_1_object = var_1_object + var_115_int; // 0x3ef Add2
	goto Label_996; // 0x3f0 Jump
}


func_739(var_56_object, var_57_bool)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x2e3 PushV
	GetScene(var_65_object); // 0x2e4 Func
	var_66_object = Obj(); // 0x2e6 PushV
	func_2362(var_66_object); // 0x2e7 NEW_2
	RemoveStationaryActor(var_66_object); // 0x2e9 ObjFunc
	
Label_747:
	var_69_object = Obj(); var_70_bool = 0; var_71_float = 0; // 0x2eb PushV
	var_69_object = var_56_object; // 0x2ec Mov
	var_70_bool = var_57_bool; // 0x2ed Mov
	var_71_float = 180.0; // 0x2ee MovF
	func_765(var_63_int, var_56_object, var_57_bool, var_64_object, var_65_object, var_69_object, var_70_bool, var_71_float); // 0x2ef NEW_2
	var_526_int = 1; // 0x2f1 PushI
	Sleep(var_526_int); // 0x2f2 Func
	goto Label_747; // 0x2f4 Jump
}


func_2021(var_30_bool, var_31_object)
{
	var_32_int = 0; var_33_int = 0; // 0x7e5 PushV
	var_34_bool = 0; var_35_object = Obj(); // 0x7e6 PushV
	var_35_object = var_31_object; // 0x7e7 Mov
	func_1985(var_34_bool, var_35_object); // 0x7e8 NEW_2
	var_51_bool = var_34_bool == 0; // 0x7ea Not
	if(var_51_bool == 0) goto Label_2030; // 0x7eb JumpB
	var_30_bool = 0; // 0x7ec MovB
	return 2; // 0x7ed Return
	
Label_2030:
	var_52_bool = 0; var_53_object = Obj(); var_54_string = ""; // 0x7ee PushV
	var_53_object = var_31_object; // 0x7ef Mov
	var_54_string = "noaccess"; // 0x7f0 MovS
	func_1873(var_52_bool, var_53_object, var_54_string); // 0x7f1 NEW_2
	var_61_bool = var_52_bool == 0; // 0x7f3 Not
	if(var_61_bool == 0) goto Label_2039; // 0x7f4 JumpB
	var_30_bool = 1; // 0x7f5 MovB
	return 2; // 0x7f6 Return
	
Label_2039:
	var_62_string = "noaccess"; // 0x7f7 PushS
	GetProperty(var_62_string, var_33_int); // 0x7f8 ObjFunc
	var_63_int = 0; // 0x7fa PushI
	var_30_bool = var_33_int == var_63_int; // 0x7fb Eq2
	return 2; // 0x7fc Return
}


func_2288(var_102_string, var_103_bool)
{
	var_106_bool = 0; var_107_float = 0; var_108_float = 0; var_109_bool = 0; var_110_float = 0; var_111_float = 0; // 0x8f0 PushV
	lshHasAnimation(var_109_bool, var_102_string); // 0x8f1 Func
	var_112_bool = var_109_bool; // 0x8f3 Push
	if(var_112_bool == 0) goto Label_2298; // 0x8f4 JumpB
	lshGetAnimTimes(var_102_string, var_110_float, var_111_float); // 0x8f5 Func
	lshPlayAnimation(var_110_float, var_111_float, var_103_bool); // 0x8f7 Func
	goto Label_2302; // 0x8f9 Jump
	
Label_2302:
	return 6; // 0x8fe Return
	
Label_2298:
	var_113_string = "Can't find lsh animation : "; // 0x8fa PushS
	var_114_int = var_113_string + var_102_string; // 0x8fb Add
	Trace(var_114_int); // 0x8fc Func
}


func_2546(var_22_int)
{
	var_23_int = 0; var_24_int = 0; // 0x9f2 PushV
	var_25_string = "branch"; // 0x9f3 PushS
	GetVariable(var_25_string, var_24_int); // 0x9f4 Func
	var_22_int = var_24_int; // 0x9f6 Mov
	return 2; // 0x9f7 Return
}


func_759(var_404_float)
{
	var_404_float = 0.03; // 0x2f8 MovF
	return 0; // 0x2f9 Return
}


func_2552(var_21_object)
{
	var_22_int = 0; // 0x9f9 PushV
	func_2546(var_22_int); // 0x9fa NEW_2
	var_26_int = 1; // 0x9fc PushI
	var_27_bool = var_22_int == var_26_int; // 0x9fd Eq
	if(var_27_bool == 0) goto Label_2562; // 0x9fe JumpB
	WorkWithCorpse(var_21_object); // 0x9ff Func
	goto Label_2564; // 0xa01 Jump
	
Label_2564:
	return 0; // 0xa04 Return
	
Label_2562:
	Barter(var_21_object); // 0xa02 Func
}


func_762(var_411_int)
{
	var_411_int = 0; // 0x2fb MovI
	return 0; // 0x2fc Return
}


func_1275(var_0_object, var_310_bool)
{
	var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_float = 0; var_315_float = 0; var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_float = 0; // 0x4fb PushV
	var_321_bool = 0; var_322_object = Obj(); // 0x4fc PushV
	var_322_object = var_0_object; // 0x4fd MovT
	func_2021(var_321_bool, var_322_object); // 0x4fe NEW_2
	var_323_bool = var_321_bool == 0; // 0x500 Not
	if(var_323_bool == 0) goto Label_1284; // 0x501 JumpB
	var_310_bool = 0; // 0x502 MovB
	return 10; // 0x503 Return
	
Label_1284:
	var_324_bool = 0; // 0x504 PushV
	func_1364(var_320_float, var_324_bool); // 0x505 NEW_2
	if(var_324_bool == 0) goto Label_1301; // 0x507 JumpB
	GetPFPosition(var_316_cvector); // 0x508 TObjFunc
	GetPFPosition(var_317_cvector); // 0x50a Func
	var_318_cvector = var_316_cvector - var_317_cvector; // 0x50c Sub2
	var_319_float = var_318_cvector | var_318_cvector; // 0x50d Or2
	GetAttackDistance(var_320_float); // 0x50e TObjFunc
	var_325_int = 50; // 0x510 PushI
	var_320_float = var_320_float + var_325_int; // 0x511 Add2
	var_326_float = var_320_float * var_320_float; // 0x512 Mult
	var_310_bool = var_319_float <= var_326_float; // 0x513 LE2
	return 10; // 0x514 Return
	
Label_1301:
	var_310_bool = 0; // 0x515 MovB
	return 10; // 0x516 Return
}


func_1532(var_0_object, var_1_object, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool)
{
	var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); var_181_bool = 0; var_182_bool = 0; var_183_object = Obj(); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_float = 0; var_188_object = Obj(); // 0x5fc PushV
	var_0_object = 0; // 0x5fd TMovB
	var_1_object = var_168_object; // 0x5fe TMov
	var_182_bool = var_172_bool; // 0x5ff Mov
	
Label_1536:
	var_189_bool = 0; var_190_object = Obj(); // 0x600 PushV
	var_190_object = var_168_object; // 0x601 Mov
	func_1672(var_189_bool, var_190_object); // 0x602 NEW_2
	var_193_bool = var_189_bool == 0; // 0x604 Not
	if(var_193_bool == 0) goto Label_1544; // 0x605 JumpB
	var_167_bool = 0; // 0x606 MovB
	return 16; // 0x607 Return
	
Label_1544:
	GetPosition(var_184_cvector); // 0x608 ObjFunc
	GetPosition(var_185_cvector); // 0x60a Func
	var_186_cvector = var_184_cvector - var_185_cvector; // 0x60c Sub2
	var_187_float = var_186_cvector | var_186_cvector; // 0x60d Or2
	var_194_bool = 0; // 0x60e PushV
	var_194_bool = 0; // 0x60f MovB
	var_195_int = 0; // 0x610 PushI
	var_196_bool = var_170_float > var_195_int; // 0x611 GT
	if(var_196_bool == 0) goto Label_1559; // 0x612 JumpB
	var_197_float = var_170_float * var_170_float; // 0x613 Mult
	var_198_bool = var_187_float > var_197_float; // 0x614 GT
	if(var_198_bool == 0) goto Label_1559; // 0x615 JumpB
	var_194_bool = 1; // 0x616 MovB
	
Label_1559:
	if(var_194_bool == 0) goto Label_1564; // 0x617 JumpB
	Stop(); // 0x618 Func
	var_167_bool = 0; // 0x61a MovB
	return 16; // 0x61b Return
	
Label_1564:
	var_199_float = var_169_float * var_169_float; // 0x61c Mult
	var_200_bool = var_187_float > var_199_float; // 0x61d GT
	if(var_200_bool == 0) goto Label_1626; // 0x61e JumpB
	GetPFPosition(var_184_cvector); // 0x61f ObjFunc
	FindPathTo(var_188_object, var_184_cvector); // 0x621 Func
	var_201_bool = var_188_object != 0; // 0x623 NullNeq
	if(var_201_bool == 0) goto Label_1575; // 0x624 JumpB
	var_183_object = var_188_object; // 0x625 Mov
	var_188_object = 0; // 0x626 SetNull
	
Label_1575:
	var_202_bool = var_183_object != 0; // 0x627 NullNeq
	if(var_202_bool == 0) goto Label_1608; // 0x628 JumpB
	var_203_bool = var_182_bool; // 0x629 Push
	if(var_203_bool == 0) goto Label_1585; // 0x62a JumpB
	var_182_bool = 0; // 0x62b MovB
	RotatePath(var_183_object, var_181_bool); // 0x62c Func
	var_204_bool = var_181_bool == 0; // 0x62e Not
	if(var_204_bool == 0) goto Label_1585; // 0x62f JumpB
	goto Label_1632; // 0x630 Jump
	
Label_1632:
	var_167_bool = !var_0_object; // 0x660 Not2
	return 16; // 0x661 Return
	
Label_1585:
	var_205_int = 0; // 0x631 PushI
	var_206_float = 0.3; // 0x632 PushF
	SetTimer(var_205_int, var_206_float); // 0x633 Func
	var_207_string = ""; // 0x635 PushV
	func_1679(var_207_string); // 0x636 NEW_2
	var_208_string = ""; // 0x638 PushV
	func_1681(var_208_string); // 0x639 NEW_2
	FollowPath(var_183_object, var_171_bool, var_181_bool, var_207_string, var_208_string); // 0x63b Func
	var_209_bool = var_181_bool == 0; // 0x63d Not
	if(var_209_bool == 0) goto Label_1606; // 0x63e JumpB
	var_210_object = var_0_object; // 0x63f PushT
	if(var_210_object == 0) goto Label_1604; // 0x640 JumpB
	var_183_object = 0; // 0x641 SetNull
	goto Label_1632; // 0x642 Jump
	
Label_1604:
	goto Label_1631; // 0x644 Jump
	
Label_1631:
	goto Label_1536; // 0x65f Jump
	
Label_1606:
	var_183_object = 0; // 0x646 SetNull
	goto Label_1624; // 0x647 Jump
	
Label_1624:
	var_188_object = 0; // 0x658 SetNull
	goto Label_1630; // 0x659 Jump
	
Label_1630:
	var_183_object = 0; // 0x65e SetNull
	
Label_1608:
	var_211_int = 0; // 0x648 PushI
	KillTimer(var_211_int); // 0x649 Func
	var_212_float = 0.5; // 0x64b PushF
	Sleep(var_212_float, var_181_bool); // 0x64c Func
	var_213_bool = var_181_bool == 0; // 0x64e Not
	if(var_213_bool == 0) goto Label_1620; // 0x64f JumpB
	var_214_object = var_0_object; // 0x650 PushT
	if(var_214_object == 0) goto Label_1620; // 0x651 JumpB
	var_183_object = 0; // 0x652 SetNull
	goto Label_1632; // 0x653 Jump
	
Label_1620:
	var_215_int = 0; // 0x654 PushI
	var_216_float = 0.3; // 0x655 PushF
	SetTimer(var_215_int, var_216_float); // 0x656 Func
	
Label_1626:
	var_217_int = 0; // 0x65a PushI
	KillTimer(var_217_int); // 0x65b Func
	goto Label_1632; // 0x65d Jump
}


func_765(var_0_object, var_3_string, var_5_object, var_69_object, var_70_bool, var_71_float, var_144_bool, var_236_bool)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_float = 0; var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_bool = 0; var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_float = 0; // 0x2fd PushV
	func_994(var_91_cvector, var_92_bool, var_93_float); // 0x2ff NEW_2
	var_5_object = 0; // 0x301 TMovI
	var_116_string = "@GetAttackDistance"; // 0x302 PushS
	var_117_int = 1; // 0x303 PushI
	var_118_bool = IsFuncExist(var_69_object, var_116_string, var_117_int); // 0x304 FuncExist
	if(var_118_bool == 0) goto Label_779; // 0x305 JumpB
	GetAttackDistance(var_83_float); // 0x306 ObjFunc
	var_119_int = 50; // 0x308 PushI
	var_83_float = var_83_float + var_119_int; // 0x309 Add2
	goto Label_780; // 0x30a Jump
	
Label_780:
	var_120_int = 150; // 0x30c PushI
	var_121_bool = var_83_float >= var_120_int; // 0x30d GE
	if(var_121_bool == 0) goto Label_784; // 0x30e JumpB
	var_83_float = 150; // 0x30f MovI
	
Label_784:
	var_3_string = 0; // 0x310 TMovB
	var_0_object = var_69_object; // 0x311 TMov
	IsPlayerActor(var_0_object, var_86_bool); // 0x312 Func
	var_122_bool = var_86_bool; // 0x314 Push
	if(var_122_bool == 0) goto Label_798; // 0x315 JumpB
	var_123_string = "attack"; // 0x316 PushS
	PlayGlobalMusic(var_123_string); // 0x317 Func
	var_124_object = Obj(); // 0x319 PushV
	func_2362(var_124_object); // 0x31a NEW_2
	SendPlayerEnemy(var_69_object, var_124_object); // 0x31c Func
	
Label_798:
	var_125_bool = var_70_bool; // 0x31e Push
	if(var_125_bool == 0) goto Label_802; // 0x31f JumpB
	var_87_bool = 0; // 0x320 MovB
	goto Label_803; // 0x321 Jump
	
Label_803:
	var_126_float = 400.0; // 0x323 PushF
	var_88_float = var_126_float + var_83_float; // 0x324 Add2
	
Label_805:
	var_127_bool = 0; // 0x325 PushV
	var_127_bool = 0; // 0x326 MovB
	var_128_bool = 0; var_129_object = Obj(); // 0x327 PushV
	var_129_object = var_0_object; // 0x328 MovT
	func_2021(var_128_bool, var_129_object); // 0x329 NEW_2
	if(var_128_bool == 0) goto Label_815; // 0x32b JumpB
	var_130_bool = var_3_string == 0; // 0x32c Not
	if(var_130_bool == 0) goto Label_815; // 0x32d JumpB
	var_127_bool = 1; // 0x32e MovB
	
Label_815:
	if(var_127_bool == 0) goto Label_977; // 0x32f JumpB
	func_1407(var_93_float); // 0x331 NEW_2
	GetPFPosition(var_84_cvector); // 0x333 TObjFunc
	GetPFPosition(var_85_cvector); // 0x335 Func
	var_89_cvector = var_84_cvector - var_85_cvector; // 0x337 Sub2
	var_90_float = var_89_cvector | var_89_cvector; // 0x338 Or2
	var_136_float = var_88_float * var_88_float; // 0x339 Mult
	var_137_bool = var_90_float >= var_136_float; // 0x33a GE
	if(var_137_bool == 0) goto Label_843; // 0x33b JumpB
	var_138_bool = 0; var_139_object = Obj(); var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_bool = 0; // 0x33c PushV
	var_139_object = var_0_object; // 0x33d MovT
	var_140_float = var_83_float; // 0x33e Mov
	var_141_float = 10000.0; // 0x33f MovF
	var_142_bool = 1; // 0x340 MovB
	var_143_bool = 0; // 0x341 MovB
	TaskCall(5); // 0x342 TaskCall
	func_1427(var_146_bool, var_138_bool, var_139_object, var_140_float, var_141_float, var_142_bool, var_143_bool); // 0x343 NEW_2
	TaskReturn(); // 0x344 TaskReturn
	var_221_bool = var_144_bool == 0; // 0x346 Not
	if(var_221_bool == 0) goto Label_841; // 0x347 JumpB
	goto Label_977; // 0x348 Jump
	
Label_977:
	WaitForAnimEnd(); // 0x3d1 Func
	var_222_string = var_3_string; // 0x3d3 PushT
	if(var_222_string == 0) goto Label_982; // 0x3d4 JumpB
	return 22; // 0x3d5 Return
	
Label_982:
	var_223_string = "all"; // 0x3d6 PushS
	var_224_string = "attack_off"; // 0x3d7 PushS
	PlayAnimation(var_223_string, var_224_string); // 0x3d8 Func
	WaitForAnimEnd(); // 0x3da Func
	var_225_bool = var_86_bool; // 0x3dc Push
	if(var_225_bool == 0) goto Label_993; // 0x3dd JumpB
	var_226_float = 2.0; // 0x3de PushF
	Sleep(var_226_float); // 0x3df Func
	
Label_993:
	return 22; // 0x3e1 Return
	
Label_841:
	var_87_bool = 0; // 0x349 MovB
	goto Label_976; // 0x34a Jump
	
Label_976:
	goto Label_805; // 0x3d0 Jump
	
Label_843:
	var_227_float = var_71_float * var_71_float; // 0x34b Mult
	var_228_bool = var_90_float >= var_227_float; // 0x34c GE
	if(var_228_bool == 0) goto Label_968; // 0x34d JumpB
	GetPFPosition(var_91_cvector); // 0x34e TObjFunc
	CanReachByPF(var_92_bool, var_91_cvector); // 0x350 Func
	var_229_bool = var_92_bool == 0; // 0x352 Not
	if(var_229_bool == 0) goto Label_867; // 0x353 JumpB
	var_230_bool = 0; var_231_object = Obj(); var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_bool = 0; // 0x354 PushV
	var_231_object = var_0_object; // 0x355 MovT
	var_232_float = var_83_float; // 0x356 Mov
	var_233_float = 10000.0; // 0x357 MovF
	var_234_bool = 1; // 0x358 MovB
	var_235_bool = 0; // 0x359 MovB
	TaskCall(5); // 0x35a TaskCall
	func_1427(var_238_bool, var_230_bool, var_231_object, var_232_float, var_233_float, var_234_bool, var_235_bool); // 0x35b NEW_2
	TaskReturn(); // 0x35c TaskReturn
	var_239_bool = var_236_bool == 0; // 0x35e Not
	if(var_239_bool == 0) goto Label_865; // 0x35f JumpB
	goto Label_977; // 0x360 Jump
	
Label_865:
	var_87_bool = 0; // 0x361 MovB
	goto Label_805; // 0x362 Jump
	
Label_867:
	var_240_bool = var_87_bool == 0; // 0x363 Not
	if(var_240_bool == 0) goto Label_892; // 0x364 JumpB
	var_241_object = Obj(); // 0x365 PushV
	var_241_object = var_0_object; // 0x366 MovT
	func_2171(); // 0x367 NEW_2
	var_250_string = "all"; // 0x369 PushS
	var_251_string = "attack_on"; // 0x36a PushS
	PlayAnimation(var_250_string, var_251_string); // 0x36b Func
	WaitForAnimEnd(); // 0x36d Func
	func_1407(var_93_float); // 0x370 NEW_2
	StopAsync(); // 0x372 Func
	var_87_bool = 1; // 0x374 MovB
	var_252_bool = 0; var_253_object = Obj(); // 0x375 PushV
	var_253_object = var_0_object; // 0x376 MovT
	func_2021(var_252_bool, var_253_object); // 0x377 NEW_2
	var_254_bool = var_252_bool == 0; // 0x379 Not
	if(var_254_bool == 0) goto Label_892; // 0x37a JumpB
	goto Label_977; // 0x37b Jump
	
Label_892:
	rand(var_93_float); // 0x37c Func
	var_255_bool = 0; // 0x37e PushV
	var_255_bool = 1; // 0x37f MovB
	var_256_float = 0.25; // 0x380 PushF
	var_257_bool = var_93_float < var_256_float; // 0x381 LT
	if(var_257_bool == 0) goto Label_904; // 0x382 JumpB
	var_258_bool = 0; // 0x383 PushV
	func_1364(var_255_bool, var_258_bool); // 0x384 NEW_2
	if(var_258_bool == 0) goto Label_904; // 0x386 JumpB
	var_255_bool = 0; // 0x387 MovB
	
Label_904:
	if(var_255_bool == 0) goto Label_921; // 0x388 JumpB
	Face(var_0_object); // 0x389 Func
	func_1414(); // 0x38c NEW_2
	var_293_string = "all"; // 0x38e PushS
	var_294_string = "attack_stay"; // 0x38f PushS
	PlayAnimation(var_293_string, var_294_string); // 0x390 Func
	var_295_bool = 0; var_296_float = 0; // 0x392 PushV
	var_296_float = var_71_float; // 0x393 Mov
	func_1232(var_93_float, var_295_bool, var_296_float); // 0x394 NEW_2
	StopAsync(); // 0x396 Func
	goto Label_967; // 0x398 Jump
	
Label_967:
	goto Label_976; // 0x3c7 Jump
	
Label_921:
	Face(var_0_object); // 0x399 Func
	var_510_string = "all"; // 0x39b PushS
	var_511_string = "fjump"; // 0x39c PushS
	PlayAnimation(var_510_string, var_511_string); // 0x39d Func
	WaitForAnimEnd(); // 0x39f Func
	func_1407(var_93_float); // 0x3a2 NEW_2
	var_512_cvector = CVector(0.0, 0.0, 0.0); // 0x3a4 PushVec
	SetSpeed(var_512_cvector); // 0x3a5 Func
	Stop(); // 0x3a7 Func
	StopAsync(); // 0x3a9 Func
	var_513_bool = 0; // 0x3ab PushV
	func_1364(var_93_float, var_513_bool); // 0x3ac NEW_2
	var_514_bool = var_513_bool == 0; // 0x3ae Not
	if(var_514_bool == 0) goto Label_967; // 0x3af JumpB
	var_515_bool = 0; var_516_object = Obj(); // 0x3b0 PushV
	var_516_object = var_0_object; // 0x3b1 MovT
	func_2021(var_515_bool, var_516_object); // 0x3b2 NEW_2
	var_517_bool = var_515_bool == 0; // 0x3b4 Not
	if(var_517_bool == 0) goto Label_951; // 0x3b5 JumpB
	goto Label_977; // 0x3b6 Jump
	
Label_951:
	GetPFPosition(var_84_cvector); // 0x3b7 TObjFunc
	GetPFPosition(var_85_cvector); // 0x3b9 Func
	var_89_cvector = var_84_cvector - var_85_cvector; // 0x3bb Sub2
	var_90_float = var_89_cvector | var_89_cvector; // 0x3bc Or2
	var_518_float = var_71_float * var_71_float; // 0x3bd Mult
	var_519_bool = var_90_float < var_518_float; // 0x3be LT
	if(var_519_bool == 0) goto Label_967; // 0x3bf JumpB
	var_520_bool = 0; var_521_float = 0; // 0x3c0 PushV
	var_521_float = var_71_float; // 0x3c1 Mov
	func_1068(var_93_float, var_520_bool, var_521_float); // 0x3c2 NEW_2
	var_522_bool = var_520_bool == 0; // 0x3c4 Not
	if(var_522_bool == 0) goto Label_967; // 0x3c5 JumpB
	goto Label_977; // 0x3c6 Jump
	
Label_968:
	var_523_bool = 0; var_524_float = 0; // 0x3c8 PushV
	var_524_float = var_71_float; // 0x3c9 Mov
	func_1068(var_93_float, var_523_bool, var_524_float); // 0x3ca NEW_2
	var_525_bool = var_523_bool == 0; // 0x3cc Not
	if(var_525_bool == 0) goto Label_975; // 0x3cd JumpB
	goto Label_977; // 0x3ce Jump
	
Label_975:
	var_87_bool = 1; // 0x3cf MovB
	
Label_802:
	var_87_bool = 1; // 0x322 MovB
	
Label_779:
	var_83_float = var_71_float; // 0x30b Mov
}


func_2303(var_21_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); // 0x8ff PushV
	GetEyesHeight(var_24_float); // 0x900 ObjFunc
	var_25_cvector = CVector(0.0, 0.0, 0.0); // 0x902 MovV
	var_26_float = GetByIndex(var_25_cvector, 1); // 0x903 PushE
	var_26_float = var_24_float; // 0x904 Mov
	SetByIndex(var_25_cvector, 1) = var_26_float; // 0x905 PopE
	var_27_string = "head"; // 0x906 PushS
	LookAsync(var_21_object, var_27_string, var_25_cvector); // 0x907 Func
	return 4; // 0x909 Return
}


