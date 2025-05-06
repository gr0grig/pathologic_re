task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xa0 PushI
	if(var_14_int == 0) goto Label_393; // 0xa1 JumpB
	func_787(); // 0xa3 NEW_2
	var_16_int = 21373; // 0xa5 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xa6 Eq
	if(var_17_bool == 0) goto Label_173; // 0xa7 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xa8 PushV
	var_18_object = var_1_object; // 0xa9 MovT
	var_19_object = var_0_object; // 0xaa MovT
	func_865(); // 0xab NEW_2
	
Label_173:
	var_22_int = 21383; // 0xad PushI
	var_23_bool = var_13_bool == var_22_int; // 0xae Eq
	if(var_23_bool == 0) goto Label_181; // 0xaf JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xb0 PushV
	var_24_object = var_1_object; // 0xb1 MovT
	var_25_object = var_0_object; // 0xb2 MovT
	func_851(); // 0xb3 NEW_2
	
Label_181:
	var_57_int = 21386; // 0xb5 PushI
	var_58_bool = var_13_bool == var_57_int; // 0xb6 Eq
	if(var_58_bool == 0) goto Label_189; // 0xb7 JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0xb8 PushV
	var_59_object = var_1_object; // 0xb9 MovT
	var_60_object = var_0_object; // 0xba MovT
	func_851(); // 0xbb NEW_2
	
Label_189:
	var_61_int = 21372; // 0xbd PushI
	var_62_bool = var_12_bool == var_61_int; // 0xbe Eq
	if(var_62_bool == 0) goto Label_217; // 0xbf JumpB
	var_63_string = ""; // 0xc0 PushV
	var_63_string = "Neutral"; // 0xc1 MovS
	func_137(var_13_bool, var_63_string); // 0xc2 NEW_2
	var_80_int = 520182; // 0xc4 PushI
	SetMessage(var_80_int); // 0xc5 TObjFunc
	ClearReplies(); // 0xc7 TObjFunc
	var_81_bool = 0; var_82_object = Obj(); // 0xc9 PushV
	var_82_object = var_1_object; // 0xca MovT
	func_871(var_82_object); // 0xcb NEW_2
	if(var_81_bool == 0) goto Label_211; // 0xcd JumpB
	var_89_int = 520183; // 0xce PushI
	var_90_int = 21374; // 0xcf PushI
	var_91_int = 21373; // 0xd0 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xd1 TObjFunc
	
Label_211:
	var_92_int = 520201; // 0xd3 PushI
	var_93_int = -1; // 0xd4 PushI
	var_94_int = 21393; // 0xd5 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xd6 TObjFunc
	return 0; // 0xd8 Return
	
Label_217:
	var_95_int = 21374; // 0xd9 PushI
	var_96_bool = var_12_bool == var_95_int; // 0xda Eq
	if(var_96_bool == 0) goto Label_240; // 0xdb JumpB
	var_97_string = ""; // 0xdc PushV
	var_97_string = "Neutral"; // 0xdd MovS
	func_137(var_13_bool, var_97_string); // 0xde NEW_2
	var_98_int = 520184; // 0xe0 PushI
	SetMessage(var_98_int); // 0xe1 TObjFunc
	ClearReplies(); // 0xe3 TObjFunc
	var_99_int = 520185; // 0xe5 PushI
	var_100_int = 21376; // 0xe6 PushI
	var_101_int = 21375; // 0xe7 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xe8 TObjFunc
	var_102_int = 520198; // 0xea PushI
	var_103_int = 21390; // 0xeb PushI
	var_104_int = 21389; // 0xec PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xed TObjFunc
	return 0; // 0xef Return
	
Label_240:
	var_105_int = 21390; // 0xf0 PushI
	var_106_bool = var_12_bool == var_105_int; // 0xf1 Eq
	if(var_106_bool == 0) goto Label_263; // 0xf2 JumpB
	var_107_string = ""; // 0xf3 PushV
	var_107_string = "Neutral"; // 0xf4 MovS
	func_137(var_13_bool, var_107_string); // 0xf5 NEW_2
	var_108_int = 520199; // 0xf7 PushI
	SetMessage(var_108_int); // 0xf8 TObjFunc
	ClearReplies(); // 0xfa TObjFunc
	var_109_int = 528307; // 0xfc PushI
	var_110_int = 29678; // 0xfd PushI
	var_111_int = 29677; // 0xfe PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0xff TObjFunc
	var_112_int = 528309; // 0x101 PushI
	var_113_int = 21376; // 0x102 PushI
	var_114_int = 29679; // 0x103 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x104 TObjFunc
	return 0; // 0x106 Return
	
Label_263:
	var_115_int = 29678; // 0x107 PushI
	var_116_bool = var_12_bool == var_115_int; // 0x108 Eq
	if(var_116_bool == 0) goto Label_281; // 0x109 JumpB
	var_117_string = ""; // 0x10a PushV
	var_117_string = "Neutral"; // 0x10b MovS
	func_137(var_13_bool, var_117_string); // 0x10c NEW_2
	var_118_int = 528308; // 0x10e PushI
	SetMessage(var_118_int); // 0x10f TObjFunc
	ClearReplies(); // 0x111 TObjFunc
	var_119_int = 520200; // 0x113 PushI
	var_120_int = 21376; // 0x114 PushI
	var_121_int = 21391; // 0x115 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x116 TObjFunc
	return 0; // 0x118 Return
	
Label_281:
	var_122_int = 21376; // 0x119 PushI
	var_123_bool = var_12_bool == var_122_int; // 0x11a Eq
	if(var_123_bool == 0) goto Label_304; // 0x11b JumpB
	var_124_string = ""; // 0x11c PushV
	var_124_string = "Neutral"; // 0x11d MovS
	func_137(var_13_bool, var_124_string); // 0x11e NEW_2
	var_125_int = 520186; // 0x120 PushI
	SetMessage(var_125_int); // 0x121 TObjFunc
	ClearReplies(); // 0x123 TObjFunc
	var_126_int = 520187; // 0x125 PushI
	var_127_int = 21378; // 0x126 PushI
	var_128_int = 21377; // 0x127 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x128 TObjFunc
	var_129_int = 520197; // 0x12a PushI
	var_130_int = 21378; // 0x12b PushI
	var_131_int = 21387; // 0x12c PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x12d TObjFunc
	return 0; // 0x12f Return
	
Label_304:
	var_132_int = 21378; // 0x130 PushI
	var_133_bool = var_12_bool == var_132_int; // 0x131 Eq
	if(var_133_bool == 0) goto Label_327; // 0x132 JumpB
	var_134_string = ""; // 0x133 PushV
	var_134_string = "Neutral"; // 0x134 MovS
	func_137(var_13_bool, var_134_string); // 0x135 NEW_2
	var_135_int = 520188; // 0x137 PushI
	SetMessage(var_135_int); // 0x138 TObjFunc
	ClearReplies(); // 0x13a TObjFunc
	var_136_int = 520189; // 0x13c PushI
	var_137_int = 21380; // 0x13d PushI
	var_138_int = 21379; // 0x13e PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x13f TObjFunc
	var_139_int = 520194; // 0x141 PushI
	var_140_int = 21385; // 0x142 PushI
	var_141_int = 21384; // 0x143 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x144 TObjFunc
	return 0; // 0x146 Return
	
Label_327:
	var_142_int = 21385; // 0x147 PushI
	var_143_bool = var_12_bool == var_142_int; // 0x148 Eq
	if(var_143_bool == 0) goto Label_345; // 0x149 JumpB
	var_144_string = ""; // 0x14a PushV
	var_144_string = "Neutral"; // 0x14b MovS
	func_137(var_13_bool, var_144_string); // 0x14c NEW_2
	var_145_int = 520195; // 0x14e PushI
	SetMessage(var_145_int); // 0x14f TObjFunc
	ClearReplies(); // 0x151 TObjFunc
	var_146_int = 520196; // 0x153 PushI
	var_147_int = -1; // 0x154 PushI
	var_148_int = 21386; // 0x155 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x156 TObjFunc
	return 0; // 0x158 Return
	
Label_345:
	var_149_int = 21380; // 0x159 PushI
	var_150_bool = var_12_bool == var_149_int; // 0x15a Eq
	if(var_150_bool == 0) goto Label_363; // 0x15b JumpB
	var_151_string = ""; // 0x15c PushV
	var_151_string = "Neutral"; // 0x15d MovS
	func_137(var_13_bool, var_151_string); // 0x15e NEW_2
	var_152_int = 520190; // 0x160 PushI
	SetMessage(var_152_int); // 0x161 TObjFunc
	ClearReplies(); // 0x163 TObjFunc
	var_153_int = 520191; // 0x165 PushI
	var_154_int = 21382; // 0x166 PushI
	var_155_int = 21381; // 0x167 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x168 TObjFunc
	return 0; // 0x16a Return
	
Label_363:
	var_156_int = 21382; // 0x16b PushI
	var_157_bool = var_12_bool == var_156_int; // 0x16c Eq
	if(var_157_bool == 0) goto Label_381; // 0x16d JumpB
	var_158_string = ""; // 0x16e PushV
	var_158_string = "Neutral"; // 0x16f MovS
	func_137(var_13_bool, var_158_string); // 0x170 NEW_2
	var_159_int = 520192; // 0x172 PushI
	SetMessage(var_159_int); // 0x173 TObjFunc
	ClearReplies(); // 0x175 TObjFunc
	var_160_int = 520193; // 0x177 PushI
	var_161_int = -1; // 0x178 PushI
	var_162_int = 21383; // 0x179 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x17a TObjFunc
	return 0; // 0x17c Return
	
Label_381:
	var_3_string = 1; // 0x17d TMovB
	var_163_bool = 0; // 0x17e PushV
	func_962(var_163_bool); // 0x17f NEW_2
	if(var_163_bool == 0) goto Label_389; // 0x181 JumpB
	lshStopAnimation(); // 0x182 Func
	goto Label_391; // 0x184 Jump
	
Label_391:
	return 0; // 0x187 Return
	
Label_389:
	StopAnimation(); // 0x185 Func
	
Label_393:
	return 0; // 0x189 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_545(var_11_bool, var_12_object); // 0x192 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x194 PushV
	var_17_object = var_12_object; // 0x195 Mov
	TaskCall(0); // 0x196 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x197 NEW_2
	TaskReturn(); // 0x198 TaskReturn
	return 0; // 0x19a Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1c2 PushS
	var_14_bool = var_12_string == var_13_string; // 0x1c3 Eq
	if(var_14_bool == 0) goto Label_456; // 0x1c4 JumpB
	func_429(var_12_string); // 0x1c6 NEW_2
	
Label_456:
	return 0; // 0x1c8 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1c9 PushT
	if(var_12_int == 0) goto Label_462; // 0x1ca JumpB
	func_545(var_10_bool, var_11_bool); // 0x1cc NEW_2
	
Label_462:
	var_16_bool = 0; // 0x1ce PushV
	var_16_bool = 0; // 0x1cf MovB
	var_17_int = var_5_int; // 0x1d0 PushT
	if(var_17_int == 0) goto Label_471; // 0x1d1 JumpB
	var_18_bool = 0; // 0x1d2 PushV
	func_478(var_18_bool); // 0x1d3 NEW_2
	if(var_18_bool == 0) goto Label_471; // 0x1d5 JumpB
	var_16_bool = 1; // 0x1d6 MovB
	
Label_471:
	if(var_16_bool == 0) goto Label_477; // 0x1d7 JumpB
	var_19_object = Obj(); // 0x1d8 PushV
	func_794(var_19_object); // 0x1d9 NEW_2
	RemoveActor(var_19_object); // 0x1db Func
	
Label_477:
	return 0; // 0x1dd Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x20b PushI
	var_14_bool = var_12_int == var_13_int; // 0x20c Eq
	if(var_14_bool == 0) goto Label_544; // 0x20d JumpB
	var_15_bool = 0; // 0x20e PushV
	func_507(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x20f NEW_2
	if(var_15_bool == 0) goto Label_538; // 0x211 JumpB
	var_28_bool = var_2_object == 0; // 0x212 Not
	if(var_28_bool == 0) goto Label_537; // 0x213 JumpB
	var_29_object = Obj(); // 0x214 PushV
	var_29_object = var_4_bool; // 0x215 MovT
	func_776(var_29_object); // 0x216 NEW_2
	var_2_object = 1; // 0x218 TMovB
	
Label_537:
	goto Label_544; // 0x219 Jump
	
Label_544:
	return 0; // 0x220 Return
	
Label_538:
	var_36_object = var_2_object; // 0x21a PushT
	if(var_36_object == 0) goto Label_544; // 0x21b JumpB
	var_37_string = "head"; // 0x21c PushS
	UnlookAsync(var_37_string); // 0x21d Func
	var_2_object = 0; // 0x21f TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x18a PushV
	var_12_float = 300; // 0x18b MovI
	var_13_float = 100; // 0x18c MovI
	func_411(var_11_bool, var_12_float, var_13_float); // 0x18d NEW_2
	return 0; // 0x18f Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_658(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_956(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_954(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_958(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_960(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_937(var_79_int); // 0x22 NEW_2
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
	func_727(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_896(var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x380 PushV
	GetDiaryRoot(var_44_object); // 0x381 Func
	var_45_bool = var_44_object == 0; // 0x383 Not
	if(var_45_bool == 0) goto Label_906; // 0x384 JumpB
	var_46_string = "Can't retrieve diary root"; // 0x385 PushS
	Trace(var_46_string); // 0x386 Func
	var_42_object = 0; // 0x388 MovB
	return 2; // 0x389 Return
	
Label_906:
	var_42_object = var_44_object; // 0x38a Mov
	return 2; // 0x38b Return
}


func_640()
{
	StopAnimation(); // 0x280 Func
	StopGroup0(); // 0x282 Func
	return 0; // 0x284 Return
}


func_645(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x285 PushV
	GetPosition(var_24_cvector); // 0x286 Func
	GetPosition(var_25_cvector); // 0x288 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x28a Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x28b Or2
	return 6; // 0x28c Return
}


func_776(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x308 PushV
	GetEyesHeight(var_32_float); // 0x309 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x30b MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x30c PushE
	var_34_float = var_32_float; // 0x30d Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x30e PopE
	var_35_string = "head"; // 0x30f PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x310 Func
	return 4; // 0x312 Return
}


func_137(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0x8a PushV
	func_962(var_96_bool); // 0x8b NEW_2
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
	func_761(var_99_string, var_100_bool); // 0x9b NEW_2
	var_2_object = var_95_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_100_bool = 1; // 0x9a MovB
}


func_653(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x28d PushV
	IsLoaded(var_25_bool); // 0x28e Func
	var_23_bool = var_25_bool; // 0x290 Mov
	return 2; // 0x291 Return
}


func_909(var_33_bool, var_34_object, var_35_int)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_int = 0; var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; // 0x38d PushV
	var_42_object = Obj(); // 0x38e PushV
	func_896(var_42_object); // 0x38f NEW_2
	var_39_object = var_42_object; // 0x390 Mov
	Find(var_35_int, var_40_object); // 0x392 ObjFunc
	var_47_bool = var_40_object == 0; // 0x394 Not
	if(var_47_bool == 0) goto Label_924; // 0x395 JumpB
	var_48_string = "Can't find diary parent with id: "; // 0x396 PushS
	var_49_int = var_48_string + var_35_int; // 0x397 Add
	Trace(var_49_int); // 0x398 Func
	var_33_bool = 0; // 0x39a MovB
	return 6; // 0x39b Return
	
Label_924:
	AddChild(var_34_object); // 0x39c ObjFunc
	var_50_int = 7; // 0x39e PushI
	SendWorldWndMessage(var_50_int); // 0x39f Func
	GetCategory(var_41_int); // 0x3a1 ObjFunc
	SetDiarySection(var_41_int); // 0x3a3 Func
	var_33_bool = 0; // 0x3a5 MovB
	return 6; // 0x3a6 Return
}


func_658(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x292 PushV
	GetPosition(var_40_cvector); // 0x293 ObjFunc
	GetEyesHeight(var_39_float); // 0x295 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x297 PushE
	var_48_float = var_48_float + var_39_float; // 0x298 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x299 PopE
	GetPosition(var_41_cvector); // 0x29a Func
	GetEyesHeight(var_39_float); // 0x29c Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x29e PushE
	var_49_float = var_49_float + var_39_float; // 0x29f Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x2a0 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x2a1 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x2a2 PushE
	var_50_float = 0; // 0x2a3 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x2a4 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x2a5 Or
	var_52_float = sqrt(var_51_int); // 0x2a6 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x2a7 Div2
	var_43_cvector = -var_42_cvector; // 0x2a8 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x2a9 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x2aa PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x2ab PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x2ac Xor2
	func_800(var_54_cvector, var_55_cvector); // 0x2ad NEW_2
	var_62_int = 25; // 0x2af PushI
	var_63_float = var_54_cvector * var_62_int; // 0x2b0 Mult
	var_64_int = var_53_float + var_63_float; // 0x2b1 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x2b2 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x2b3 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x2b4 Add2
	IsOverrideActive(var_46_bool); // 0x2b5 Func
	var_66_bool = var_46_bool; // 0x2b7 Push
	if(var_66_bool == 0) goto Label_699; // 0x2b8 JumpB
	var_27_bool = 0; // 0x2b9 MovB
	return 18; // 0x2ba Return
	
Label_699:
	StopWorld(); // 0x2bb Func
	var_67_bool = 1; // 0x2bd PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x2be Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x2c0 PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x2c1 PushE
	Rotate(var_68_float, var_69_float); // 0x2c2 Func
	var_70_bool = 0; // 0x2c4 PushV
	func_962(var_70_bool); // 0x2c5 NEW_2
	if(var_70_bool == 0) goto Label_713; // 0x2c7 JumpB
	goto Label_721; // 0x2c8 Jump
	
Label_721:
	CameraWaitForPlayFinish(); // 0x2d1 Func
	ResumeWorld(); // 0x2d3 Func
	var_27_bool = 1; // 0x2d5 MovB
	return 18; // 0x2d6 Return
	
Label_713:
	var_71_string = "head"; // 0x2c9 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x2ca Func
	var_72_bool = var_47_bool; // 0x2cc Push
	if(var_72_bool == 0) goto Label_721; // 0x2cd JumpB
	var_73_string = "head"; // 0x2ce PushS
	LookAsyncCamera(var_73_string); // 0x2cf Func
}


func_787()
{
	var_15_bool = 0; // 0x313 PushV
	func_962(var_15_bool); // 0x314 NEW_2
	if(var_15_bool == 0) goto Label_793; // 0x316 JumpB
	lshStopSpeech(); // 0x317 Func
	
Label_793:
	return 0; // 0x319 Return
}


func_794(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x31a PushV
	self(var_21_object); // 0x31b Func
	var_19_object = var_21_object; // 0x31d Mov
	return 2; // 0x31e Return
}


func_411(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x19b PushV
	var_6_int = 0; // 0x19c TMovB
	
Label_413:
	var_18_int = 3; // 0x19d PushI
	rand(var_16_float, var_18_int); // 0x19e Func
	var_19_int = 3; // 0x1a0 PushI
	var_20_int = var_16_float + var_19_int; // 0x1a1 Add
	Sleep(var_20_int, var_17_bool); // 0x1a2 Func
	var_6_int = 1; // 0x1a4 TMovB
	var_21_float = 0; var_22_float = 0; // 0x1a5 PushV
	var_21_float = var_12_float; // 0x1a6 Mov
	var_22_float = var_13_float; // 0x1a7 Mov
	func_480(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x1a8 NEW_2
	var_6_int = 0; // 0x1aa TMovB
	goto Label_413; // 0x1ab Jump
}


func_800(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x320 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x321 Or
	var_58_float = sqrt(var_59_int); // 0x322 Sqrt2
	var_60_float = 0.0; // 0x323 PushF
	var_61_bool = var_58_float < var_60_float; // 0x324 LT
	if(var_61_bool == 0) goto Label_808; // 0x325 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x326 MovV
	return 2; // 0x327 Return
	
Label_808:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x328 Div2
	return 2; // 0x329 Return
}


func_545(var_2_object, var_3_string)
{
	func_640(); // 0x222 NEW_2
	var_13_int = 10; // 0x224 PushI
	KillTimer(var_13_int); // 0x225 Func
	var_14_object = var_2_object; // 0x227 PushT
	if(var_14_object == 0) goto Label_557; // 0x228 JumpB
	var_15_string = "head"; // 0x229 PushS
	UnlookAsync(var_15_string); // 0x22a Func
	var_2_object = 0; // 0x22c TMovB
	
Label_557:
	var_3_string = 1; // 0x22d TMovB
	return 0; // 0x22e Return
}


func_937(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x3a9 PushV
	var_82_string = "branch"; // 0x3aa PushS
	GetVariable(var_82_string, var_81_int); // 0x3ab Func
	var_83_int = 0; // 0x3ad PushI
	var_84_bool = var_81_int == var_83_int; // 0x3ae Eq
	if(var_84_bool == 0) goto Label_947; // 0x3af JumpB
	var_79_int = 1; // 0x3b0 MovI
	return 2; // 0x3b1 Return
	
Label_947:
	var_85_int = 1; // 0x3b3 PushI
	var_86_bool = var_81_int == var_85_int; // 0x3b4 Eq
	if(var_86_bool == 0) goto Label_952; // 0x3b5 JumpB
	var_79_int = 2; // 0x3b6 MovI
	return 2; // 0x3b7 Return
	
Label_952:
	var_79_int = 3; // 0x3b8 MovI
	return 2; // 0x3b9 Return
}


func_810(var_115_int, var_116_string)
{
	var_117_int = 0; var_118_int = 0; // 0x32a PushV
	GetVariable(var_116_string, var_118_int); // 0x32b Func
	var_115_int = var_118_int; // 0x32d Mov
	return 2; // 0x32e Return
}


func_429(var_5_int)
{
	var_5_int = 1; // 0x1ad TMovB
	var_15_bool = 0; // 0x1ae PushV
	var_15_bool = 0; // 0x1af MovB
	var_16_bool = 0; // 0x1b0 PushV
	func_653(var_16_bool); // 0x1b1 NEW_2
	var_19_bool = var_16_bool == 0; // 0x1b3 Not
	if(var_19_bool == 0) goto Label_442; // 0x1b4 JumpB
	var_20_bool = 0; // 0x1b5 PushV
	func_478(var_20_bool); // 0x1b6 NEW_2
	if(var_20_bool == 0) goto Label_442; // 0x1b8 JumpB
	var_15_bool = 1; // 0x1b9 MovB
	
Label_442:
	if(var_15_bool == 0) goto Label_448; // 0x1ba JumpB
	var_21_object = Obj(); // 0x1bb PushV
	func_794(var_21_object); // 0x1bc NEW_2
	RemoveActor(var_21_object); // 0x1be Func
	
Label_448:
	return 0; // 0x1c0 Return
}


func_559()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x22f PushV
	WaitForAnimEnd(); // 0x230 Func
	var_44_bool = 0; // 0x232 PushV
	func_653(var_44_bool); // 0x233 NEW_2
	var_45_bool = var_44_bool == 0; // 0x235 Not
	if(var_45_bool == 0) goto Label_568; // 0x236 JumpB
	return 14; // 0x237 Return
	
Label_568:
	var_46_int = 0; // 0x238 PushV
	func_834(var_46_int); // 0x239 NEW_2
	var_37_int = var_46_int; // 0x23a Mov
	var_38_int = 0; // 0x23c MovI
	
Label_573:
	var_59_bool = 0; // 0x23d PushV
	var_59_bool = 0; // 0x23e MovB
	var_60_int = 5; // 0x23f PushI
	var_61_bool = var_38_int < var_60_int; // 0x240 LT
	if(var_61_bool == 0) goto Label_583; // 0x241 JumpB
	var_62_bool = 0; // 0x242 PushV
	func_653(var_62_bool); // 0x243 NEW_2
	if(var_62_bool == 0) goto Label_583; // 0x245 JumpB
	var_59_bool = 1; // 0x246 MovB
	
Label_583:
	if(var_59_bool == 0) goto Label_635; // 0x247 JumpB
	var_63_int = 3; // 0x248 PushI
	irand(var_39_int, var_63_int); // 0x249 Func
	var_64_int = 0; // 0x24b PushI
	var_65_bool = var_39_int == var_64_int; // 0x24c Eq
	if(var_65_bool == 0) goto Label_607; // 0x24d JumpB
	var_66_int = var_37_int; // 0x24e Push
	if(var_66_int == 0) goto Label_606; // 0x24f JumpB
	irand(var_40_int, var_37_int); // 0x250 Func
	var_67_string = "all"; // 0x252 PushS
	var_68_string = ""; var_69_int = 0; // 0x253 PushV
	var_69_int = var_40_int; // 0x254 Mov
	func_827(var_68_string, var_69_int); // 0x255 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x257 Func
	WaitForAnimEnd(var_41_bool); // 0x259 Func
	var_70_bool = var_41_bool == 0; // 0x25b Not
	if(var_70_bool == 0) goto Label_606; // 0x25c JumpB
	goto Label_635; // 0x25d Jump
	
Label_635:
	ResetAAS(); // 0x27b Func
	return 14; // 0x27d Return
	
Label_606:
	goto Label_624; // 0x25e Jump
	
Label_624:
	var_71_bool = 0; // 0x270 PushV
	func_638(var_71_bool); // 0x271 NEW_2
	var_72_bool = var_71_bool == 0; // 0x273 Not
	if(var_72_bool == 0) goto Label_630; // 0x274 JumpB
	goto Label_635; // 0x275 Jump
	
Label_630:
	ResetAAS(); // 0x276 Func
	var_73_int = 1; // 0x278 PushI
	var_38_int = var_38_int + var_73_int; // 0x279 Add2
	goto Label_573; // 0x27a Jump
	
Label_607:
	var_74_int = 1; // 0x25f PushI
	var_75_bool = var_39_int == var_74_int; // 0x260 Eq
	if(var_75_bool == 0) goto Label_621; // 0x261 JumpB
	var_76_int = 4; // 0x262 PushI
	rand(var_42_float, var_76_int); // 0x263 Func
	var_77_int = 1; // 0x265 PushI
	var_78_int = var_42_float + var_77_int; // 0x266 Add
	Sleep(var_78_int, var_43_bool); // 0x267 Func
	var_79_bool = var_43_bool == 0; // 0x269 Not
	if(var_79_bool == 0) goto Label_620; // 0x26a JumpB
	goto Label_635; // 0x26b Jump
	
Label_620:
	goto Label_624; // 0x26c Jump
	
Label_621:
	var_80_int = var_38_int; // 0x26d Push
	if(var_80_int == 0) goto Label_624; // 0x26e JumpB
	goto Label_635; // 0x26f Jump
}


func_815(var_51_bool, var_52_string, var_53_string)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x32f PushV
	FindActor(var_55_object, var_52_string); // 0x330 Func
	var_56_bool = var_55_object == 0; // 0x332 NullEq
	if(var_56_bool == 0) goto Label_822; // 0x333 JumpB
	var_51_bool = 0; // 0x334 MovB
	return 2; // 0x335 Return
	
Label_822:
	Trigger(var_55_object, var_53_string); // 0x336 Func
	var_51_bool = 1; // 0x338 MovB
	return 2; // 0x339 Return
}


func_954(var_76_int)
{
	var_76_int = 518716; // 0x3ba MovI
	return 0; // 0x3bb Return
}


func_827(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x33b PushV
	var_55_string = "idle"; // 0x33c MovS
	var_56_int = var_53_int; // 0x33d Push
	if(var_56_int == 0) goto Label_832; // 0x33e JumpB
	var_55_string = var_55_string + var_53_int; // 0x33f Add2
	
Label_832:
	var_52_string = var_55_string; // 0x340 Mov
	return 2; // 0x341 Return
}


func_956(var_75_int)
{
	var_75_int = 518715; // 0x3bc MovI
	return 0; // 0x3bd Return
}


func_958(var_77_string)
{
	var_77_string = "ui/NPC_Prophet.png"; // 0x3be MovS
	return 0; // 0x3bf Return
}


func_960(var_78_string)
{
	var_78_string = "ui/NPC_Prophet_b.png"; // 0x3c0 MovS
	return 0; // 0x3c1 Return
}


func_962(var_70_bool)
{
	var_70_bool = 0; // 0x3c2 MovB
	return 0; // 0x3c3 Return
}


func_834(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x342 PushV
	var_49_int = 0; // 0x343 MovI
	
Label_836:
	var_51_string = "all"; // 0x344 PushS
	var_52_string = ""; var_53_int = 0; // 0x345 PushV
	var_53_int = var_49_int; // 0x346 Mov
	func_827(var_52_string, var_53_int); // 0x347 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x349 Func
	var_57_bool = var_50_bool == 0; // 0x34b Not
	if(var_57_bool == 0) goto Label_846; // 0x34c JumpB
	goto Label_849; // 0x34d Jump
	
Label_849:
	var_46_int = var_49_int; // 0x351 Mov
	return 4; // 0x352 Return
	
Label_846:
	var_58_int = 1; // 0x34e PushI
	var_49_int = var_49_int + var_58_int; // 0x34f Add2
	goto Label_836; // 0x350 Jump
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
	var_112_int = 520182; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_bool = 0; var_114_object = Obj(); // 0x59 PushV
	var_114_object = var_1_object; // 0x5a MovT
	func_871(var_114_object); // 0x5b NEW_2
	if(var_113_bool == 0) goto Label_99; // 0x5d JumpB
	var_121_int = 520183; // 0x5e PushI
	var_122_int = 21374; // 0x5f PushI
	var_123_int = 21373; // 0x60 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x61 TObjFunc
	
Label_99:
	var_124_int = 520201; // 0x63 PushI
	var_125_int = -1; // 0x64 PushI
	var_126_int = 21393; // 0x65 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_127_bool = 0; // 0x6b PushV
	func_962(var_127_bool); // 0x6c NEW_2
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
	func_745(var_129_string); // 0x76 NEW_2
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


func_851()
{
	var_26_string = "b5q02"; // 0x354 PushS
	var_27_int = 2; // 0x355 PushI
	SetVariable(var_26_string, var_27_int); // 0x356 Func
	func_883(); // 0x359 NEW_2
	var_51_bool = 0; var_52_string = ""; var_53_string = ""; // 0x35b PushV
	var_52_string = "quest_b5_02"; // 0x35c MovS
	var_53_string = "remove_prophet"; // 0x35d MovS
	func_815(var_51_bool, var_52_string, var_53_string); // 0x35e NEW_2
	return 0; // 0x360 Return
}


func_727()
{
	var_147_bool = 0; var_148_bool = 0; // 0x2d7 PushV
	var_149_bool = 1; // 0x2d8 PushB
	CameraSwitchToNormal(var_149_bool); // 0x2d9 Func
	var_150_bool = 0; // 0x2db PushV
	func_962(var_150_bool); // 0x2dc NEW_2
	if(var_150_bool == 0) goto Label_736; // 0x2de JumpB
	goto Label_744; // 0x2df Jump
	
Label_744:
	return 2; // 0x2e8 Return
	
Label_736:
	var_151_string = "head"; // 0x2e0 PushS
	HasAnimationTrack(var_148_bool, var_151_string); // 0x2e1 Func
	var_152_bool = var_148_bool; // 0x2e3 Push
	if(var_152_bool == 0) goto Label_744; // 0x2e4 JumpB
	var_153_string = "head"; // 0x2e5 PushS
	UnlookAsync(var_153_string); // 0x2e6 Func
}


func_478(var_18_bool)
{
	var_18_bool = 1; // 0x1de MovB
	return 0; // 0x1df Return
}


func_480(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x1e1 PushV
	func_653(var_23_bool); // 0x1e2 NEW_2
	var_26_bool = var_23_bool == 0; // 0x1e4 Not
	if(var_26_bool == 0) goto Label_487; // 0x1e5 JumpB
	return 0; // 0x1e6 Return
	
Label_487:
	var_27_string = "player"; // 0x1e7 PushS
	FindActor(var_17_bool, var_27_string); // 0x1e8 Func
	var_2_object = 0; // 0x1ea TMovB
	var_3_string = 0; // 0x1eb TMovB
	var_0_object = var_21_float; // 0x1ec TMov
	var_1_object = var_22_float; // 0x1ed TMov
	var_28_int = 10; // 0x1ee PushI
	var_29_float = 1.0; // 0x1ef PushF
	SetTimer(var_28_int, var_29_float); // 0x1f0 Func
	func_559(); // 0x1f3 NEW_2
	var_81_bool = var_3_string == 0; // 0x1f5 Not
	if(var_81_bool == 0) goto Label_506; // 0x1f6 JumpB
	var_82_int = 10; // 0x1f7 PushI
	KillTimer(var_82_int); // 0x1f8 Func
	
Label_506:
	return 0; // 0x1fa Return
}


func_865()
{
	var_20_string = "oob5Prophet1"; // 0x362 PushS
	var_21_int = 1; // 0x363 PushI
	SetVariable(var_20_string, var_21_int); // 0x364 Func
	return 0; // 0x366 Return
}


func_871(var_113_bool)
{
	var_115_int = 0; var_116_string = ""; // 0x368 PushV
	var_116_string = "oob5Prophet1"; // 0x369 MovS
	func_810(var_115_int, var_116_string); // 0x36a NEW_2
	var_119_int = 0; // 0x36c PushI
	var_120_bool = var_115_int == var_119_int; // 0x36d Eq
	if(var_120_bool == 0) goto Label_881; // 0x36e JumpB
	var_113_bool = 1; // 0x36f MovB
	return 0; // 0x370 Return
	
Label_881:
	var_113_bool = 0; // 0x371 MovB
	return 0; // 0x372 Return
}


func_745(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0; // 0x2e9 PushV
	lshHasAnimation(var_133_bool, var_129_string); // 0x2ea Func
	var_136_bool = var_133_bool; // 0x2ec Push
	if(var_136_bool == 0) goto Label_756; // 0x2ed JumpB
	lshGetAnimTimes(var_129_string, var_134_float, var_135_float); // 0x2ee Func
	var_137_bool = 0; // 0x2f0 PushB
	lshPlayAnimation(var_134_float, var_135_float, var_137_bool); // 0x2f1 Func
	goto Label_760; // 0x2f3 Jump
	
Label_760:
	return 6; // 0x2f8 Return
	
Label_756:
	var_138_string = "Can't find lsh animation : "; // 0x2f4 PushS
	var_139_int = var_138_string + var_129_string; // 0x2f5 Add
	Trace(var_139_int); // 0x2f6 Func
}


func_883()
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x373 PushV
	var_30_int = 251; // 0x374 PushI
	var_31_int = 2; // 0x375 PushI
	var_32_int = 520667; // 0x376 PushI
	CreateDiaryEntry(var_29_object, var_30_int, var_31_int, var_32_int); // 0x377 Func
	var_33_bool = 0; var_34_object = Obj(); var_35_int = 0; // 0x379 PushV
	var_34_object = var_29_object; // 0x37a Mov
	var_35_int = 249; // 0x37b MovI
	func_909(var_33_bool, var_34_object, var_35_int); // 0x37c NEW_2
	return 2; // 0x37e Return
}


func_761(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x2f9 PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x2fa Func
	var_109_bool = var_106_bool; // 0x2fc Push
	if(var_109_bool == 0) goto Label_771; // 0x2fd JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x2fe Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x300 Func
	goto Label_775; // 0x302 Jump
	
Label_775:
	return 6; // 0x307 Return
	
Label_771:
	var_110_string = "Can't find lsh animation : "; // 0x303 PushS
	var_111_int = var_110_string + var_99_string; // 0x304 Add
	Trace(var_111_int); // 0x305 Func
}


func_507(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1fb PushV
	var_18_bool = var_4_bool == 0; // 0x1fc NullEq
	if(var_18_bool == 0) goto Label_512; // 0x1fd JumpB
	var_15_bool = 0; // 0x1fe MovB
	return 2; // 0x1ff Return
	
Label_512:
	var_19_float = 0; var_20_object = Obj(); // 0x200 PushV
	var_20_object = var_4_bool; // 0x201 MovT
	func_645(var_20_object); // 0x202 NEW_2
	var_17_float = sqrt(var_19_float); // 0x204 Sqrt2
	var_27_object = var_2_object; // 0x205 PushT
	if(var_27_object == 0) goto Label_520; // 0x206 JumpB
	var_17_float = var_17_float - var_1_object; // 0x207 Sub2
	
Label_520:
	var_15_bool = var_17_float < var_0_object; // 0x208 LT2
	return 2; // 0x209 Return
}


func_638(var_71_bool)
{
	var_71_bool = 1; // 0x27e MovB
	return 0; // 0x27f Return
}


