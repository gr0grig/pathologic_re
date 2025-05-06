task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x8a PushI
	if(var_8_int == 0) goto Label_345; // 0x8b JumpB
	func_531(); // 0x8d Call
	var_10_int = 10714; // 0x8f PushI
	var_11_bool = var_7_bool == var_10_int; // 0x90 Eq
	if(var_11_bool == 0) goto Label_156; // 0x91 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0x92 PushV
	var_12_object = var_1_object; // 0x93 MovT
	var_13_object = var_0_object; // 0x94 MovT
	func_589(); // 0x95 Call
	var_30_object = Obj(); var_31_object = Obj(); // 0x97 PushV
	var_30_object = var_1_object; // 0x98 MovT
	var_31_object = var_0_object; // 0x99 MovT
	func_605(); // 0x9a Call
	
Label_156:
	var_56_int = 10717; // 0x9c PushI
	var_57_bool = var_7_bool == var_56_int; // 0x9d Eq
	if(var_57_bool == 0) goto Label_169; // 0x9e JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x9f PushV
	var_58_object = var_1_object; // 0xa0 MovT
	var_59_object = var_0_object; // 0xa1 MovT
	func_589(); // 0xa2 Call
	var_60_object = Obj(); var_61_object = Obj(); // 0xa4 PushV
	var_60_object = var_1_object; // 0xa5 MovT
	var_61_object = var_0_object; // 0xa6 MovT
	func_605(); // 0xa7 Call
	
Label_169:
	var_62_int = 10718; // 0xa9 PushI
	var_63_bool = var_7_bool == var_62_int; // 0xaa Eq
	if(var_63_bool == 0) goto Label_182; // 0xab JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0xac PushV
	var_64_object = var_1_object; // 0xad MovT
	var_65_object = var_0_object; // 0xae MovT
	func_589(); // 0xaf Call
	var_66_object = Obj(); var_67_object = Obj(); // 0xb1 PushV
	var_66_object = var_1_object; // 0xb2 MovT
	var_67_object = var_0_object; // 0xb3 MovT
	func_605(); // 0xb4 Call
	
Label_182:
	var_68_int = 10709; // 0xb6 PushI
	var_69_bool = var_6_int == var_68_int; // 0xb7 Eq
	if(var_69_bool == 0) goto Label_205; // 0xb8 JumpB
	var_70_string = ""; // 0xb9 PushV
	var_70_string = "Neutral"; // 0xba MovS
	func_121(var_7_bool, var_70_string); // 0xbb Call
	var_85_int = 9726; // 0xbd PushI
	SetMessage(var_85_int); // 0xbe TObjFunc
	ClearReplies(); // 0xc0 TObjFunc
	var_86_int = 9727; // 0xc2 PushI
	var_87_int = 10711; // 0xc3 PushI
	var_88_int = 10710; // 0xc4 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xc5 TObjFunc
	var_89_int = 9742; // 0xc7 PushI
	var_90_int = 10728; // 0xc8 PushI
	var_91_int = 10727; // 0xc9 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xca TObjFunc
	return 0; // 0xcc Return
	
Label_205:
	var_92_int = 10728; // 0xcd PushI
	var_93_bool = var_6_int == var_92_int; // 0xce Eq
	if(var_93_bool == 0) goto Label_223; // 0xcf JumpB
	var_94_string = ""; // 0xd0 PushV
	var_94_string = "Neutral"; // 0xd1 MovS
	func_121(var_7_bool, var_94_string); // 0xd2 Call
	var_95_int = 9743; // 0xd4 PushI
	SetMessage(var_95_int); // 0xd5 TObjFunc
	ClearReplies(); // 0xd7 TObjFunc
	var_96_int = 9744; // 0xd9 PushI
	var_97_int = 10711; // 0xda PushI
	var_98_int = 10729; // 0xdb PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_99_int = 10711; // 0xdf PushI
	var_100_bool = var_6_int == var_99_int; // 0xe0 Eq
	if(var_100_bool == 0) goto Label_246; // 0xe1 JumpB
	var_101_string = ""; // 0xe2 PushV
	var_101_string = "Neutral"; // 0xe3 MovS
	func_121(var_7_bool, var_101_string); // 0xe4 Call
	var_102_int = 9728; // 0xe6 PushI
	SetMessage(var_102_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_103_int = 9729; // 0xeb PushI
	var_104_int = 10713; // 0xec PushI
	var_105_int = 10712; // 0xed PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0xee TObjFunc
	var_106_int = 9736; // 0xf0 PushI
	var_107_int = 10720; // 0xf1 PushI
	var_108_int = 10719; // 0xf2 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_109_int = 10720; // 0xf6 PushI
	var_110_bool = var_6_int == var_109_int; // 0xf7 Eq
	if(var_110_bool == 0) goto Label_269; // 0xf8 JumpB
	var_111_string = ""; // 0xf9 PushV
	var_111_string = "Neutral"; // 0xfa MovS
	func_121(var_7_bool, var_111_string); // 0xfb Call
	var_112_int = 9737; // 0xfd PushI
	SetMessage(var_112_int); // 0xfe TObjFunc
	ClearReplies(); // 0x100 TObjFunc
	var_113_int = 9738; // 0x102 PushI
	var_114_int = 10722; // 0x103 PushI
	var_115_int = 10721; // 0x104 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x105 TObjFunc
	var_116_int = 9741; // 0x107 PushI
	var_117_int = 10713; // 0x108 PushI
	var_118_int = 10725; // 0x109 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x10a TObjFunc
	return 0; // 0x10c Return
	
Label_269:
	var_119_int = 10722; // 0x10d PushI
	var_120_bool = var_6_int == var_119_int; // 0x10e Eq
	if(var_120_bool == 0) goto Label_287; // 0x10f JumpB
	var_121_string = ""; // 0x110 PushV
	var_121_string = "Neutral"; // 0x111 MovS
	func_121(var_7_bool, var_121_string); // 0x112 Call
	var_122_int = 9739; // 0x114 PushI
	SetMessage(var_122_int); // 0x115 TObjFunc
	ClearReplies(); // 0x117 TObjFunc
	var_123_int = 9740; // 0x119 PushI
	var_124_int = 10713; // 0x11a PushI
	var_125_int = 10723; // 0x11b PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x11c TObjFunc
	return 0; // 0x11e Return
	
Label_287:
	var_126_int = 10713; // 0x11f PushI
	var_127_bool = var_6_int == var_126_int; // 0x120 Eq
	if(var_127_bool == 0) goto Label_310; // 0x121 JumpB
	var_128_string = ""; // 0x122 PushV
	var_128_string = "Neutral"; // 0x123 MovS
	func_121(var_7_bool, var_128_string); // 0x124 Call
	var_129_int = 9730; // 0x126 PushI
	SetMessage(var_129_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_130_int = 9731; // 0x12b PushI
	var_131_int = -1; // 0x12c PushI
	var_132_int = 10714; // 0x12d PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x12e TObjFunc
	var_133_int = 9732; // 0x130 PushI
	var_134_int = 10716; // 0x131 PushI
	var_135_int = 10715; // 0x132 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_136_int = 10716; // 0x136 PushI
	var_137_bool = var_6_int == var_136_int; // 0x137 Eq
	if(var_137_bool == 0) goto Label_333; // 0x138 JumpB
	var_138_string = ""; // 0x139 PushV
	var_138_string = "Neutral"; // 0x13a MovS
	func_121(var_7_bool, var_138_string); // 0x13b Call
	var_139_int = 9733; // 0x13d PushI
	SetMessage(var_139_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_140_int = 9734; // 0x142 PushI
	var_141_int = -1; // 0x143 PushI
	var_142_int = 10717; // 0x144 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x145 TObjFunc
	var_143_int = 9735; // 0x147 PushI
	var_144_int = -1; // 0x148 PushI
	var_145_int = 10718; // 0x149 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_3_string = 1; // 0x14d TMovB
	var_146_bool = 0; // 0x14e PushV
	func_692(var_146_bool); // 0x14f Call
	if(var_146_bool == 0) goto Label_341; // 0x151 JumpB
	lshStopAnimation(); // 0x152 Func
	goto Label_343; // 0x154 Jump
	
Label_343:
	return 0; // 0x157 Return
	
Label_341:
	StopAnimation(); // 0x155 Func
	
Label_345:
	return 0; // 0x159 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_bool = var_0_object == 0; // 0x164 Not
	if(var_7_bool == 0) goto Label_373; // 0x165 JumpB
	var_0_object = 1; // 0x166 TMovB
	func_443(); // 0x168 Call
	var_8_int = 0; var_9_object = Obj(); // 0x16a PushV
	var_9_object = var_6_object; // 0x16b Mov
	TaskCall(0); // 0x16c TaskCall
	func_0(var_10_object, var_8_int, var_9_object); // 0x16d Call
	TaskReturn(); // 0x16e TaskReturn
	var_110_bool = 0; var_111_string = ""; var_112_string = ""; // 0x170 PushV
	var_111_string = "quest_d4_01"; // 0x171 MovS
	var_112_string = "wastedwoman_done"; // 0x172 MovS
	func_548(var_110_bool, var_111_string, var_112_string); // 0x173 Call
	
Label_373:
	return 0; // 0x175 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_0_object = 0; // 0x15a TMovB
	
Label_347:
	var_6_int = 3; // 0x15b PushI
	Sleep(var_6_int); // 0x15c Func
	func_374(); // 0x15f Call
	goto Label_347; // 0x161 Jump
}


func_0(var_0_object, var_8_int, var_9_object)
{
	var_11_object = Obj(); var_12_bool = 0; var_13_int = 0; var_14_bool = 0; var_15_object = Obj(); var_16_bool = 0; var_17_int = 0; var_18_bool = 0; // 0x0 PushV
	var_0_object = var_9_object; // 0x1 TMov
	var_19_bool = 0; var_20_object = Obj(); // 0x2 PushV
	var_20_object = var_9_object; // 0x3 Mov
	func_453(var_20_object); // 0x4 Call
	var_59_bool = var_19_bool == 0; // 0x6 Not
	if(var_59_bool == 0) goto Label_10; // 0x7 JumpB
	var_8_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_15_object); // 0xa Func
	var_60_int = 0; // 0xc PushV
	func_688(var_60_int); // 0xd Call
	SetNPCName(var_60_int); // 0xf ObjFunc
	var_61_string = ""; // 0x11 PushV
	func_690(var_61_string); // 0x12 Call
	SetPhoto(var_61_string); // 0x14 ObjFunc
	var_62_int = 0; // 0x16 PushV
	func_671(var_62_int); // 0x17 Call
	SetPlayerName(var_62_int); // 0x19 ObjFunc
	var_17_int = -1; // 0x1b MovI
	IsOverrideActive(var_16_bool); // 0x1c Func
	var_70_bool = var_16_bool; // 0x1e Push
	if(var_70_bool == 0) goto Label_34; // 0x1f JumpB
	var_8_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_15_object); // 0x22 Func
	var_71_object = Obj(); var_72_object = Obj(); // 0x24 PushV
	var_71_object = var_9_object; // 0x25 Mov
	var_72_object = var_15_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_73_object, var_74_object, var_75_string, var_76_bool, var_71_object, var_72_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_18_bool); // 0x2b ObjFunc
	
Label_45:
	var_108_bool = var_18_bool == 0; // 0x2d Not
	if(var_108_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_18_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_109_object = Obj(); // 0x34 PushV
	var_109_object = var_9_object; // 0x35 Mov
	func_509(); // 0x36 Call
	StopDialog(var_15_object); // 0x38 Func
	GetReturnValue(var_17_int); // 0x3a ObjFunc
	var_8_int = var_17_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_513(var_82_string)
{
	var_83_float = 0; var_84_float = 0; var_85_float = 0; var_86_float = 0; // 0x201 PushV
	var_87_string = "playing "; // 0x202 PushS
	var_88_int = var_87_string + var_82_string; // 0x203 Add
	Trace(var_88_int); // 0x204 Func
	lshGetAnimTimes(var_82_string, var_85_float, var_86_float); // 0x206 Func
	lshPlayAnimation(var_85_float, var_86_float); // 0x208 Func
	var_89_string = "start: "; // 0x20a PushS
	var_90_int = var_89_string + var_85_float; // 0x20b Add
	Trace(var_90_int); // 0x20c Func
	var_91_string = "end: "; // 0x20e PushS
	var_92_int = var_91_string + var_86_float; // 0x20f Add
	Trace(var_92_int); // 0x210 Func
	return 4; // 0x212 Return
}


func_448(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x1c0 PushV
	IsLoaded(var_23_bool); // 0x1c1 Func
	var_21_bool = var_23_bool; // 0x1c3 Mov
	return 2; // 0x1c4 Return
}


func_453(var_19_bool)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x1c5 PushV
	GetPosition(var_30_cvector); // 0x1c6 ObjFunc
	GetEyesHeight(var_29_float); // 0x1c8 ObjFunc
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x1ca PushE
	var_37_float = var_37_float + var_29_float; // 0x1cb Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x1cc PopE
	GetPosition(var_31_cvector); // 0x1cd Func
	GetEyesHeight(var_29_float); // 0x1cf Func
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x1d1 PushE
	var_38_float = var_38_float + var_29_float; // 0x1d2 Add2
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x1d3 PopE
	var_32_cvector = var_30_cvector - var_31_cvector; // 0x1d4 Sub2
	var_39_float = GetByIndex(var_32_cvector, 1); // 0x1d5 PushE
	var_39_float = 0; // 0x1d6 MovI
	SetByIndex(var_32_cvector, 1) = var_39_float; // 0x1d7 PopE
	var_40_int = var_32_cvector | var_32_cvector; // 0x1d8 Or
	var_41_float = sqrt(var_40_int); // 0x1d9 Sqrt
	var_32_cvector = var_32_cvector / var_32_cvector; // 0x1da Div2
	var_33_cvector = -var_32_cvector; // 0x1db Neg2
	var_42_int = 70; // 0x1dc PushI
	var_43_float = var_32_cvector * var_42_int; // 0x1dd Mult
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x1de PushV
	var_46_cvector = CVector(0.0, 1.0, 0.0); // 0x1df PushVec
	var_45_cvector = var_33_cvector ^ var_46_cvector; // 0x1e0 Xor2
	func_538(var_44_cvector, var_45_cvector); // 0x1e1 Call
	var_52_int = 25; // 0x1e3 PushI
	var_53_float = var_44_cvector * var_52_int; // 0x1e4 Mult
	var_54_int = var_43_float + var_53_float; // 0x1e5 Add
	var_55_cvector = CVector(0.0, 10.0, 0.0); // 0x1e6 PushVec
	var_34_cvector = var_54_int - var_55_cvector; // 0x1e7 Sub2
	var_35_cvector = var_31_cvector + var_34_cvector; // 0x1e8 Add2
	IsOverrideActive(var_36_bool); // 0x1e9 Func
	var_56_bool = var_36_bool; // 0x1eb Push
	if(var_56_bool == 0) goto Label_495; // 0x1ec JumpB
	var_19_bool = 0; // 0x1ed MovB
	return 16; // 0x1ee Return
	
Label_495:
	StopWorld(); // 0x1ef Func
	CameraTransit(var_35_cvector, var_33_cvector); // 0x1f1 Func
	var_57_float = GetByIndex(var_34_cvector, 0); // 0x1f3 PushE
	var_58_float = GetByIndex(var_34_cvector, 2); // 0x1f4 PushE
	Rotate(var_57_float, var_58_float); // 0x1f5 Func
	CameraWaitForPlayFinish(); // 0x1f7 Func
	ResumeWorld(); // 0x1f9 Func
	var_19_bool = 1; // 0x1fb MovB
	return 16; // 0x1fc Return
}


func_589()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x24d PushV
	var_16_object = Obj(); // 0x24e PushV
	func_621(var_16_object); // 0x24f Call
	var_15_object = var_16_object; // 0x250 Mov
	var_23_string = "d4q01WastedMale"; // 0x252 PushS
	var_24_string = "pt_d4q01_key2"; // 0x253 PushS
	var_25_int = 1; // 0x254 PushI
	var_26_int = 11522; // 0x255 PushI
	var_27_float = 0; // 0x256 PushV
	func_560(var_27_float); // 0x257 Call
	AddMark(var_23_string, var_24_string, var_25_int, var_26_int, var_27_float); // 0x259 ObjFunc
	return 2; // 0x25b Return
}


func_531()
{
	var_9_bool = 0; // 0x213 PushV
	func_692(var_9_bool); // 0x214 Call
	if(var_9_bool == 0) goto Label_537; // 0x216 JumpB
	lshStopSpeech(); // 0x217 Func
	
Label_537:
	return 0; // 0x219 Return
}


func_538(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0; // 0x21a PushV
	var_49_int = var_45_cvector | var_45_cvector; // 0x21b Or
	var_48_float = sqrt(var_49_int); // 0x21c Sqrt2
	var_50_float = 0.0; // 0x21d PushF
	var_51_bool = var_48_float < var_50_float; // 0x21e LT
	if(var_51_bool == 0) goto Label_546; // 0x21f JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x220 MovV
	return 2; // 0x221 Return
	
Label_546:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x222 Div2
	return 2; // 0x223 Return
}


func_605()
{
	var_32_object = Obj(); var_33_string = ""; var_34_float = 0; // 0x25e PushV
	var_35_object = Obj(); // 0x25f PushV
	func_621(var_35_object); // 0x260 Call
	var_32_object = var_35_object; // 0x261 Mov
	var_33_string = "pt_d4q01_wastedmale"; // 0x263 MovS
	var_34_float = 2; // 0x264 MovI
	func_638(var_32_object, var_33_string, var_34_float); // 0x265 Call
	var_55_object = Obj(); // 0x267 PushV
	func_621(var_55_object); // 0x268 Call
	ShowMap(var_55_object); // 0x26a ObjFunc
	return 0; // 0x26c Return
}


func_671(var_62_int)
{
	var_63_int = 0; var_64_int = 0; // 0x29f PushV
	var_65_string = "player"; // 0x2a0 PushS
	GetVariable(var_65_string, var_64_int); // 0x2a1 Func
	var_66_int = 0; // 0x2a3 PushI
	var_67_bool = var_64_int == var_66_int; // 0x2a4 Eq
	if(var_67_bool == 0) goto Label_681; // 0x2a5 JumpB
	var_62_int = 200001; // 0x2a6 MovI
	return 2; // 0x2a7 Return
	
Label_681:
	var_68_int = 1; // 0x2a9 PushI
	var_69_bool = var_64_int == var_68_int; // 0x2aa Eq
	if(var_69_bool == 0) goto Label_686; // 0x2ab JumpB
	var_62_int = 200002; // 0x2ac MovI
	return 2; // 0x2ad Return
	
Label_686:
	var_62_int = 200003; // 0x2ae MovI
	return 2; // 0x2af Return
}


func_548(var_110_bool, var_111_string, var_112_string)
{
	var_113_object = Obj(); var_114_object = Obj(); // 0x224 PushV
	FindActor(var_114_object, var_111_string); // 0x225 Func
	var_115_bool = var_114_object == 0; // 0x227 NullEq
	if(var_115_bool == 0) goto Label_555; // 0x228 JumpB
	var_110_bool = 0; // 0x229 MovB
	return 2; // 0x22a Return
	
Label_555:
	Trigger(var_114_object, var_112_string); // 0x22b Func
	var_110_bool = 1; // 0x22d MovB
	return 2; // 0x22e Return
}


func_621(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); // 0x26d PushV
	GetMainOutdoorScene(var_19_object); // 0x26e Func
	var_21_bool = var_19_object == 0; // 0x270 NullEq
	if(var_21_bool == 0) goto Label_632; // 0x271 JumpB
	var_22_string = "Can't find main outdoor scene"; // 0x272 PushS
	Trace(var_22_string); // 0x273 Func
	var_20_object = 0; // 0x275 SetNull
	var_16_object = var_20_object; // 0x276 Mov
	return 4; // 0x277 Return
	
Label_632:
	GetMap(var_20_object); // 0x278 ObjFunc
	var_16_object = var_20_object; // 0x27a Mov
	return 4; // 0x27b Return
}


func_688(var_60_int)
{
	var_60_int = 3340; // 0x2b0 MovI
	return 0; // 0x2b1 Return
}


func_560(var_27_float)
{
	var_28_float = 0; var_29_float = 0; // 0x230 PushV
	GetGameTime(var_29_float); // 0x231 Func
	var_27_float = var_29_float; // 0x233 Mov
	return 2; // 0x234 Return
}


func_690(var_61_string)
{
	var_61_string = "ui/NPC_None.png"; // 0x2b2 MovS
	return 0; // 0x2b3 Return
}


func_692(var_79_bool)
{
	var_79_bool = 0; // 0x2b4 MovB
	return 0; // 0x2b5 Return
}


func_565(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x235 PushV
	var_34_string = "idle"; // 0x236 MovS
	var_35_int = var_32_int; // 0x237 Push
	if(var_35_int == 0) goto Label_570; // 0x238 JumpB
	var_34_string = var_34_string + var_32_int; // 0x239 Add2
	
Label_570:
	var_31_string = var_34_string; // 0x23a Mov
	return 2; // 0x23b Return
}


func_374()
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_bool = 0; var_12_float = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0; // 0x176 PushV
	WaitForAnimEnd(); // 0x177 Func
	var_21_bool = 0; // 0x179 PushV
	func_448(var_21_bool); // 0x17a Call
	var_24_bool = var_21_bool == 0; // 0x17c Not
	if(var_24_bool == 0) goto Label_383; // 0x17d JumpB
	return 14; // 0x17e Return
	
Label_383:
	var_25_int = 0; // 0x17f PushV
	func_572(var_25_int); // 0x180 Call
	var_14_int = var_25_int; // 0x181 Mov
	var_15_int = 0; // 0x183 MovI
	
Label_388:
	var_38_bool = 0; // 0x184 PushV
	var_38_bool = 0; // 0x185 MovB
	var_39_int = 5; // 0x186 PushI
	var_40_bool = var_15_int < var_39_int; // 0x187 LT
	if(var_40_bool == 0) goto Label_398; // 0x188 JumpB
	var_41_bool = 0; // 0x189 PushV
	func_448(var_41_bool); // 0x18a Call
	if(var_41_bool == 0) goto Label_398; // 0x18c JumpB
	var_38_bool = 1; // 0x18d MovB
	
Label_398:
	if(var_38_bool == 0) goto Label_442; // 0x18e JumpB
	var_42_int = 3; // 0x18f PushI
	irand(var_16_int, var_42_int); // 0x190 Func
	var_43_int = 0; // 0x192 PushI
	var_44_bool = var_16_int == var_43_int; // 0x193 Eq
	if(var_44_bool == 0) goto Label_422; // 0x194 JumpB
	var_45_int = var_14_int; // 0x195 Push
	if(var_45_int == 0) goto Label_421; // 0x196 JumpB
	irand(var_17_int, var_14_int); // 0x197 Func
	var_46_string = "all"; // 0x199 PushS
	var_47_string = ""; var_48_int = 0; // 0x19a PushV
	var_48_int = var_17_int; // 0x19b Mov
	func_565(var_47_string, var_48_int); // 0x19c Call
	PlayAnimation(var_46_string, var_47_string); // 0x19e Func
	WaitForAnimEnd(var_18_bool); // 0x1a0 Func
	var_49_bool = var_18_bool == 0; // 0x1a2 Not
	if(var_49_bool == 0) goto Label_421; // 0x1a3 JumpB
	goto Label_442; // 0x1a4 Jump
	
Label_442:
	return 14; // 0x1ba Return
	
Label_421:
	goto Label_439; // 0x1a5 Jump
	
Label_439:
	var_50_int = 1; // 0x1b7 PushI
	var_15_int = var_15_int + var_50_int; // 0x1b8 Add2
	goto Label_388; // 0x1b9 Jump
	
Label_422:
	var_51_int = 1; // 0x1a6 PushI
	var_52_bool = var_16_int == var_51_int; // 0x1a7 Eq
	if(var_52_bool == 0) goto Label_436; // 0x1a8 JumpB
	var_53_int = 4; // 0x1a9 PushI
	rand(var_19_float, var_53_int); // 0x1aa Func
	var_54_int = 1; // 0x1ac PushI
	var_55_int = var_19_float + var_54_int; // 0x1ad Add
	Sleep(var_55_int, var_20_bool); // 0x1ae Func
	var_56_bool = var_20_bool == 0; // 0x1b0 Not
	if(var_56_bool == 0) goto Label_435; // 0x1b1 JumpB
	goto Label_442; // 0x1b2 Jump
	
Label_435:
	goto Label_439; // 0x1b3 Jump
	
Label_436:
	var_57_int = var_15_int; // 0x1b4 Push
	if(var_57_int == 0) goto Label_439; // 0x1b5 JumpB
	goto Label_442; // 0x1b6 Jump
}


func_121(var_2_object, var_78_string)
{
	var_79_bool = 0; // 0x7a PushV
	func_692(var_79_bool); // 0x7b Call
	var_80_bool = var_79_bool == 0; // 0x7d Not
	if(var_80_bool == 0) goto Label_128; // 0x7e JumpB
	return 0; // 0x7f Return
	
Label_128:
	var_81_bool = var_78_string == var_2_object; // 0x80 Eq
	if(var_81_bool == 0) goto Label_131; // 0x81 JumpB
	return 0; // 0x82 Return
	
Label_131:
	var_82_string = ""; // 0x83 PushV
	var_82_string = var_78_string; // 0x84 Mov
	func_513(var_82_string); // 0x85 Call
	var_2_object = var_78_string; // 0x87 TMov
	return 0; // 0x88 Return
}


func_443()
{
	StopAnimation(); // 0x1bb Func
	StopGroup0(); // 0x1bd Func
	return 0; // 0x1bf Return
}


func_572(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x23c PushV
	var_28_int = 0; // 0x23d MovI
	
Label_574:
	var_30_string = "all"; // 0x23e PushS
	var_31_string = ""; var_32_int = 0; // 0x23f PushV
	var_32_int = var_28_int; // 0x240 Mov
	func_565(var_31_string, var_32_int); // 0x241 Call
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x243 Func
	var_36_bool = var_29_bool == 0; // 0x245 Not
	if(var_36_bool == 0) goto Label_584; // 0x246 JumpB
	goto Label_587; // 0x247 Jump
	
Label_587:
	var_25_int = var_28_int; // 0x24b Mov
	return 4; // 0x24c Return
	
Label_584:
	var_37_int = 1; // 0x248 PushI
	var_28_int = var_28_int + var_37_int; // 0x249 Add2
	goto Label_574; // 0x24a Jump
}


func_509()
{
	CameraSwitchToNormal(); // 0x1fe Func
	return 0; // 0x200 Return
}


func_638(var_32_object, var_33_string, var_34_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); var_43_bool = 0; // 0x27e PushV
	GetMainOutdoorScene(var_42_object); // 0x27f Func
	var_44_bool = var_42_object == 0; // 0x281 NullEq
	if(var_44_bool == 0) goto Label_647; // 0x282 JumpB
	var_45_string = "Can't find main outdoor scene"; // 0x283 PushS
	Trace(var_45_string); // 0x284 Func
	return 8; // 0x286 Return
	
Label_647:
	GetLocator(var_33_string, var_43_bool, var_40_cvector, var_41_cvector); // 0x287 ObjFunc
	var_46_bool = var_43_bool == 0; // 0x289 Not
	if(var_46_bool == 0) goto Label_657; // 0x28a JumpB
	var_47_string = "Warning: outdoor scene locator "; // 0x28b PushS
	var_48_int = var_47_string + var_33_string; // 0x28c Add
	var_49_string = " doesnt exist"; // 0x28d PushS
	var_50_int = var_48_int + var_49_string; // 0x28e Add
	Trace(var_50_int); // 0x28f Func
	
Label_657:
	GetMap(var_32_object); // 0x291 ObjFunc
	var_51_bool = var_32_object == 0; // 0x293 NullEq
	if(var_51_bool == 0) goto Label_665; // 0x294 JumpB
	var_52_string = "Can't find map"; // 0x295 PushS
	Trace(var_52_string); // 0x296 Func
	return 8; // 0x298 Return
	
Label_665:
	var_53_float = GetByIndex(var_40_cvector, 0); // 0x299 PushE
	var_54_float = GetByIndex(var_40_cvector, 2); // 0x29a PushE
	SetMapParams(var_53_float, var_54_float, var_34_float); // 0x29b ObjFunc
	return 8; // 0x29d Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_71_object, var_72_object)
{
	var_0_object = var_72_object; // 0x40 TMov
	var_1_object = var_71_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_77_int = 1; // 0x43 PushI
	if(var_77_int == 0) goto Label_91; // 0x44 JumpB
	var_78_string = ""; // 0x45 PushV
	var_78_string = "Neutral"; // 0x46 MovS
	func_121(var_72_object, var_78_string); // 0x47 Call
	var_93_int = 9726; // 0x49 PushI
	SetMessage(var_93_int); // 0x4a TObjFunc
	ClearReplies(); // 0x4c TObjFunc
	var_94_int = 9727; // 0x4e PushI
	var_95_int = 10711; // 0x4f PushI
	var_96_int = 10710; // 0x50 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x51 TObjFunc
	var_97_int = 9742; // 0x53 PushI
	var_98_int = 10728; // 0x54 PushI
	var_99_int = 10727; // 0x55 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x56 TObjFunc
	goto Label_91; // 0x58 Jump
	
Label_91:
	var_100_bool = 0; // 0x5b PushV
	func_692(var_100_bool); // 0x5c Call
	if(var_100_bool == 0) goto Label_106; // 0x5e JumpB
	
Label_95:
	lshWaitForAnimEnd(); // 0x5f Func
	var_101_string = var_3_string; // 0x61 PushT
	if(var_101_string == 0) goto Label_100; // 0x62 JumpB
	goto Label_105; // 0x63 Jump
	
Label_105:
	goto Label_120; // 0x69 Jump
	
Label_120:
	return 0; // 0x78 Return
	
Label_100:
	var_102_string = ""; // 0x64 PushV
	var_102_string = var_2_object; // 0x65 MovT
	func_513(var_102_string); // 0x66 Call
	goto Label_95; // 0x68 Jump
	
Label_106:
	var_103_string = "all"; // 0x6a PushS
	var_104_string = "idle"; // 0x6b PushS
	PlayAnimation(var_103_string, var_104_string); // 0x6c Func
	
Label_110:
	WaitForAnimEnd(); // 0x6e Func
	var_105_string = var_3_string; // 0x70 PushT
	if(var_105_string == 0) goto Label_115; // 0x71 JumpB
	goto Label_120; // 0x72 Jump
	
Label_115:
	var_106_string = "all"; // 0x73 PushS
	var_107_string = "idle"; // 0x74 PushS
	PlayAnimation(var_106_string, var_107_string); // 0x75 Func
	goto Label_110; // 0x77 Jump
}


