task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xa7 PushI
	if(var_9_int == 0) goto Label_379; // 0xa8 JumpB
	func_984(); // 0xaa NEW_2
	var_11_int = 28282; // 0xac PushI
	var_12_bool = var_8_bool == var_11_int; // 0xad Eq
	if(var_12_bool == 0) goto Label_180; // 0xae JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xaf PushV
	var_13_object = var_1_object; // 0xb0 MovT
	var_14_object = var_0_object; // 0xb1 MovT
	func_1057(); // 0xb2 NEW_2
	
Label_180:
	var_46_int = 28277; // 0xb4 PushI
	var_47_bool = var_7_cvector == var_46_int; // 0xb5 Eq
	if(var_47_bool == 0) goto Label_208; // 0xb6 JumpB
	var_48_string = ""; // 0xb7 PushV
	var_48_string = "Neutral"; // 0xb8 MovS
	func_144(var_8_bool, var_48_string); // 0xb9 NEW_2
	var_65_int = 526985; // 0xbb PushI
	SetMessage(var_65_int); // 0xbc TObjFunc
	ClearReplies(); // 0xbe TObjFunc
	var_66_bool = 0; var_67_object = Obj(); // 0xc0 PushV
	var_67_object = var_1_object; // 0xc1 MovT
	func_1071(var_67_object); // 0xc2 NEW_2
	if(var_66_bool == 0) goto Label_202; // 0xc4 JumpB
	var_74_int = 526986; // 0xc5 PushI
	var_75_int = 29458; // 0xc6 PushI
	var_76_int = 28278; // 0xc7 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xc8 TObjFunc
	
Label_202:
	var_77_int = 526991; // 0xca PushI
	var_78_int = -1; // 0xcb PushI
	var_79_int = 28283; // 0xcc PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xcd TObjFunc
	return 0; // 0xcf Return
	
Label_208:
	var_80_int = 29458; // 0xd0 PushI
	var_81_bool = var_7_cvector == var_80_int; // 0xd1 Eq
	if(var_81_bool == 0) goto Label_226; // 0xd2 JumpB
	var_82_string = ""; // 0xd3 PushV
	var_82_string = "Agression"; // 0xd4 MovS
	func_144(var_8_bool, var_82_string); // 0xd5 NEW_2
	var_83_int = 528112; // 0xd7 PushI
	SetMessage(var_83_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_84_int = 528113; // 0xdc PushI
	var_85_int = 29460; // 0xdd PushI
	var_86_int = 29459; // 0xde PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_87_int = 29460; // 0xe2 PushI
	var_88_bool = var_7_cvector == var_87_int; // 0xe3 Eq
	if(var_88_bool == 0) goto Label_254; // 0xe4 JumpB
	var_89_string = ""; // 0xe5 PushV
	var_89_string = "Agression"; // 0xe6 MovS
	func_144(var_8_bool, var_89_string); // 0xe7 NEW_2
	var_90_int = 528114; // 0xe9 PushI
	SetMessage(var_90_int); // 0xea TObjFunc
	ClearReplies(); // 0xec TObjFunc
	var_91_int = 528115; // 0xee PushI
	var_92_int = 28279; // 0xef PushI
	var_93_int = 29461; // 0xf0 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xf1 TObjFunc
	var_94_int = 528116; // 0xf3 PushI
	var_95_int = 29464; // 0xf4 PushI
	var_96_int = 29462; // 0xf5 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xf6 TObjFunc
	var_97_int = 528117; // 0xf8 PushI
	var_98_int = 29464; // 0xf9 PushI
	var_99_int = 29463; // 0xfa PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xfb TObjFunc
	return 0; // 0xfd Return
	
Label_254:
	var_100_int = 29464; // 0xfe PushI
	var_101_bool = var_7_cvector == var_100_int; // 0xff Eq
	if(var_101_bool == 0) goto Label_272; // 0x100 JumpB
	var_102_string = ""; // 0x101 PushV
	var_102_string = "Doubt"; // 0x102 MovS
	func_144(var_8_bool, var_102_string); // 0x103 NEW_2
	var_103_int = 528118; // 0x105 PushI
	SetMessage(var_103_int); // 0x106 TObjFunc
	ClearReplies(); // 0x108 TObjFunc
	var_104_int = 528119; // 0x10a PushI
	var_105_int = 28279; // 0x10b PushI
	var_106_int = 29466; // 0x10c PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x10d TObjFunc
	return 0; // 0x10f Return
	
Label_272:
	var_107_int = 28279; // 0x110 PushI
	var_108_bool = var_7_cvector == var_107_int; // 0x111 Eq
	if(var_108_bool == 0) goto Label_290; // 0x112 JumpB
	var_109_string = ""; // 0x113 PushV
	var_109_string = "Agression"; // 0x114 MovS
	func_144(var_8_bool, var_109_string); // 0x115 NEW_2
	var_110_int = 526987; // 0x117 PushI
	SetMessage(var_110_int); // 0x118 TObjFunc
	ClearReplies(); // 0x11a TObjFunc
	var_111_int = 528120; // 0x11c PushI
	var_112_int = 29468; // 0x11d PushI
	var_113_int = 29467; // 0x11e PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x11f TObjFunc
	return 0; // 0x121 Return
	
Label_290:
	var_114_int = 29468; // 0x122 PushI
	var_115_bool = var_7_cvector == var_114_int; // 0x123 Eq
	if(var_115_bool == 0) goto Label_313; // 0x124 JumpB
	var_116_string = ""; // 0x125 PushV
	var_116_string = "Doubt"; // 0x126 MovS
	func_144(var_8_bool, var_116_string); // 0x127 NEW_2
	var_117_int = 528121; // 0x129 PushI
	SetMessage(var_117_int); // 0x12a TObjFunc
	ClearReplies(); // 0x12c TObjFunc
	var_118_int = 528122; // 0x12e PushI
	var_119_int = 29470; // 0x12f PushI
	var_120_int = 29469; // 0x130 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x131 TObjFunc
	var_121_int = 528124; // 0x133 PushI
	var_122_int = 29472; // 0x134 PushI
	var_123_int = 29471; // 0x135 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x136 TObjFunc
	return 0; // 0x138 Return
	
Label_313:
	var_124_int = 29472; // 0x139 PushI
	var_125_bool = var_7_cvector == var_124_int; // 0x13a Eq
	if(var_125_bool == 0) goto Label_331; // 0x13b JumpB
	var_126_string = ""; // 0x13c PushV
	var_126_string = "Neutral"; // 0x13d MovS
	func_144(var_8_bool, var_126_string); // 0x13e NEW_2
	var_127_int = 528125; // 0x140 PushI
	SetMessage(var_127_int); // 0x141 TObjFunc
	ClearReplies(); // 0x143 TObjFunc
	var_128_int = 528126; // 0x145 PushI
	var_129_int = 28281; // 0x146 PushI
	var_130_int = 29473; // 0x147 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x148 TObjFunc
	return 0; // 0x14a Return
	
Label_331:
	var_131_int = 29470; // 0x14b PushI
	var_132_bool = var_7_cvector == var_131_int; // 0x14c Eq
	if(var_132_bool == 0) goto Label_349; // 0x14d JumpB
	var_133_string = ""; // 0x14e PushV
	var_133_string = "Doubt"; // 0x14f MovS
	func_144(var_8_bool, var_133_string); // 0x150 NEW_2
	var_134_int = 528123; // 0x152 PushI
	SetMessage(var_134_int); // 0x153 TObjFunc
	ClearReplies(); // 0x155 TObjFunc
	var_135_int = 526988; // 0x157 PushI
	var_136_int = 28281; // 0x158 PushI
	var_137_int = 28280; // 0x159 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x15a TObjFunc
	return 0; // 0x15c Return
	
Label_349:
	var_138_int = 28281; // 0x15d PushI
	var_139_bool = var_7_cvector == var_138_int; // 0x15e Eq
	if(var_139_bool == 0) goto Label_367; // 0x15f JumpB
	var_140_string = ""; // 0x160 PushV
	var_140_string = "Sorrow"; // 0x161 MovS
	func_144(var_8_bool, var_140_string); // 0x162 NEW_2
	var_141_int = 526989; // 0x164 PushI
	SetMessage(var_141_int); // 0x165 TObjFunc
	ClearReplies(); // 0x167 TObjFunc
	var_142_int = 526990; // 0x169 PushI
	var_143_int = -1; // 0x16a PushI
	var_144_int = 28282; // 0x16b PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_3_string = 1; // 0x16f TMovB
	var_145_bool = 0; // 0x170 PushV
	func_1162(var_145_bool); // 0x171 NEW_2
	if(var_145_bool == 0) goto Label_375; // 0x173 JumpB
	lshStopAnimation(); // 0x174 Func
	goto Label_377; // 0x176 Jump
	
Label_377:
	return 0; // 0x179 Return
	
Label_375:
	StopAnimation(); // 0x177 Func
	
Label_379:
	return 0; // 0x17b Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x188 PushV
	var_10_string = "cleanup"; // 0x189 PushS
	var_11_bool = var_7_string == var_10_string; // 0x18a Eq
	if(var_11_bool == 0) goto Label_407; // 0x18b JumpB
	var_1_object = 1; // 0x18c TMovB
	IsLoaded(var_9_bool); // 0x18d Func
	var_12_bool = var_9_bool == 0; // 0x18f Not
	if(var_12_bool == 0) goto Label_406; // 0x190 JumpB
	var_13_object = Obj(); // 0x191 PushV
	func_991(var_13_object); // 0x192 NEW_2
	RemoveActor(var_13_object); // 0x194 Func
	
Label_406:
	goto Label_411; // 0x196 Jump
	
Label_411:
	return 2; // 0x19b Return
	
Label_407:
	var_16_string = "restore"; // 0x197 PushS
	var_17_bool = var_7_string == var_16_string; // 0x198 Eq
	if(var_17_bool == 0) goto Label_411; // 0x199 JumpB
	var_1_object = 0; // 0x19a TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x19c PushT
	if(var_7_object == 0) goto Label_421; // 0x19d JumpB
	var_8_object = Obj(); // 0x19e PushV
	func_991(var_8_object); // 0x19f NEW_2
	RemoveActor(var_8_object); // 0x1a1 Func
	Hold(); // 0x1a3 Func
	
Label_421:
	func_536(); // 0x1a6 NEW_2
	return 0; // 0x1a8 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_551(); // 0x1aa NEW_2
	return 0; // 0x1ac Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x1f3 PushI
	var_9_bool = var_7_int == var_8_int; // 0x1f4 Eq
	if(var_9_bool == 0) goto Label_535; // 0x1f5 JumpB
	func_494(); // 0x1f7 NEW_2
	var_11_bool = 0; // 0x1f9 PushV
	var_11_bool = 0; // 0x1fa MovB
	var_12_bool = 0; // 0x1fb PushV
	func_708(var_12_bool); // 0x1fc NEW_2
	if(var_12_bool == 0) goto Label_516; // 0x1fe JumpB
	var_15_bool = 0; // 0x1ff PushV
	func_463(var_15_bool); // 0x200 NEW_2
	if(var_15_bool == 0) goto Label_516; // 0x202 JumpB
	var_11_bool = 1; // 0x203 MovB
	
Label_516:
	if(var_11_bool == 0) goto Label_529; // 0x204 JumpB
	var_32_bool = 0; // 0x205 PushV
	func_443(var_32_bool); // 0x206 NEW_2
	if(var_32_bool == 0) goto Label_528; // 0x208 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x209 PushV
	var_53_object = Obj(); // 0x20a PushV
	func_991(var_53_object); // 0x20b NEW_2
	var_52_object = var_53_object; // 0x20c Mov
	func_858(var_52_object); // 0x20e NEW_2
	
Label_528:
	goto Label_535; // 0x210 Jump
	
Label_535:
	return 0; // 0x217 Return
	
Label_529:
	func_458(var_7_int); // 0x212 NEW_2
	func_485(); // 0x215 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x235 Push
	if(var_8_bool == 0) goto Label_571; // 0x236 JumpB
	func_485(); // 0x238 NEW_2
	goto Label_575; // 0x23a Jump
	
Label_575:
	return 0; // 0x23f Return
	
Label_571:
	var_14_string = ""; // 0x23b PushV
	var_14_string = "Neutral"; // 0x23c MovS
	func_938(var_14_string); // 0x23d NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x240 PushV
	IsOverrideActive(var_9_bool); // 0x241 Func
	var_10_bool = var_9_bool == 0; // 0x243 Not
	if(var_10_bool == 0) goto Label_604; // 0x244 JumpB
	EventDisable(0); // 0x245 EventDisable
	func_676(); // 0x247 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x249 PushV
	var_12_object = var_7_object; // 0x24a Mov
	func_699(var_12_object); // 0x24b NEW_2
	EventEnable(0); // 0x24d EventEnable
	var_25_object = Obj(); // 0x24e PushV
	var_25_object = var_7_object; // 0x24f Mov
	func_380(var_25_object); // 0x250 NEW_2
	var_259_string = ""; // 0x252 PushV
	var_259_string = "Neutral"; // 0x253 MovS
	func_938(var_259_string); // 0x254 NEW_2
	func_494(); // 0x257 NEW_2
	func_485(); // 0x25a NEW_2
	
Label_604:
	return 2; // 0x25c Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_429(var_6_bool); // 0x185 NEW_2
	return 0; // 0x187 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_713(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1156(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1154(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1158(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1160(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1137(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_991(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_800(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_250_bool = var_36_bool == 0; // 0x3f Not
	if(var_250_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_251_object = Obj(); // 0x46 PushV
	var_251_object = var_27_object; // 0x47 Mov
	func_782(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1024(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x400 PushV
	GetGameTime(var_155_float); // 0x401 Func
	var_156_int = 1; // 0x403 PushI
	var_157_int = 0; // 0x404 PushV
	var_158_int = 24; // 0x405 PushI
	var_157_int = var_155_float / var_155_float; // 0x406 Div2
	var_153_int = var_156_int + var_157_int; // 0x407 Add2
	return 2; // 0x408 Return
}


func_1154(var_86_int)
{
	var_86_int = 515592; // 0x482 MovI
	return 0; // 0x483 Return
}


func_1156(var_85_int)
{
	var_85_int = 511961; // 0x484 MovI
	return 0; // 0x485 Return
}


func_1158(var_87_string)
{
	var_87_string = "ui/NPC_Burah.png"; // 0x486 MovS
	return 0; // 0x487 Return
}


func_1160(var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png"; // 0x488 MovS
	return 0; // 0x489 Return
}


func_1033(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x409 PushV
	var_34_string = "idle"; // 0x40a MovS
	var_35_int = var_32_int; // 0x40b Push
	if(var_35_int == 0) goto Label_1038; // 0x40c JumpB
	var_34_string = var_34_string + var_32_int; // 0x40d Add2
	
Label_1038:
	var_31_string = var_34_string; // 0x40e Mov
	return 2; // 0x40f Return
}


func_1162(var_80_bool)
{
	var_80_bool = 1; // 0x48a MovB
	return 0; // 0x48b Return
}


func_782()
{
	var_252_bool = 0; var_253_bool = 0; // 0x30e PushV
	var_254_bool = 1; // 0x30f PushB
	CameraSwitchToNormal(var_254_bool); // 0x310 Func
	var_255_bool = 0; // 0x312 PushV
	func_1162(var_255_bool); // 0x313 NEW_2
	if(var_255_bool == 0) goto Label_791; // 0x315 JumpB
	goto Label_799; // 0x316 Jump
	
Label_799:
	return 2; // 0x31f Return
	
Label_791:
	var_256_string = "head"; // 0x317 PushS
	HasAnimationTrack(var_253_bool, var_256_string); // 0x318 Func
	var_257_bool = var_253_bool; // 0x31a Push
	if(var_257_bool == 0) goto Label_799; // 0x31b JumpB
	var_258_string = "head"; // 0x31c PushS
	UnlookAsync(var_258_string); // 0x31d Func
}


func_144(var_2_object, var_200_string)
{
	var_201_bool = 0; // 0x91 PushV
	func_1162(var_201_bool); // 0x92 NEW_2
	var_202_bool = var_201_bool == 0; // 0x94 Not
	if(var_202_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_203_bool = var_200_string == var_2_object; // 0x97 Eq
	if(var_203_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_204_string = ""; var_205_bool = 0; // 0x9a PushV
	var_204_string = var_200_string; // 0x9b Mov
	var_206_string = ""; // 0x9c PushS
	var_207_bool = var_200_string == var_206_string; // 0x9d Eq
	if(var_207_bool == 0) goto Label_161; // 0x9e JumpB
	var_205_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_954(var_204_string, var_205_bool); // 0xa2 NEW_2
	var_2_object = var_200_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_205_bool = 1; // 0xa1 MovB
}


func_1040(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x410 PushV
	var_28_int = 0; // 0x411 MovI
	
Label_1042:
	var_30_string = "all"; // 0x412 PushS
	var_31_string = ""; var_32_int = 0; // 0x413 PushV
	var_32_int = var_28_int; // 0x414 Mov
	func_1033(var_31_string, var_32_int); // 0x415 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x417 Func
	var_36_bool = var_29_bool == 0; // 0x419 Not
	if(var_36_bool == 0) goto Label_1052; // 0x41a JumpB
	goto Label_1055; // 0x41b Jump
	
Label_1055:
	var_25_int = var_28_int; // 0x41f Mov
	return 4; // 0x420 Return
	
Label_1052:
	var_37_int = 1; // 0x41c PushI
	var_28_int = var_28_int + var_37_int; // 0x41d Add2
	goto Label_1042; // 0x41e Jump
}


func_536()
{
	func_676(); // 0x219 NEW_2
	func_494(); // 0x21c NEW_2
	lshStopSpeech(); // 0x21e Func
	lshStopAnimation(); // 0x220 Func
	StopAsync(); // 0x222 Func
	Hold(); // 0x224 Func
	return 0; // 0x226 Return
}


func_800(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x320 PushV
	var_107_string = "voice_common"; // 0x321 PushS
	GetVariable(var_107_string, var_105_int); // 0x322 Func
	var_108_int = var_105_int; // 0x324 Push
	if(var_108_int == 0) goto Label_838; // 0x325 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x326 PushV
	var_110_object = var_99_object; // 0x327 Mov
	func_858(var_110_object); // 0x328 NEW_2
	var_139_bool = var_109_bool == 0; // 0x32a Not
	if(var_139_bool == 0) goto Label_820; // 0x32b JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x32c PushV
	var_141_object = var_99_object; // 0x32d Mov
	func_895(var_141_object); // 0x32e NEW_2
	var_175_bool = var_140_bool == 0; // 0x330 Not
	if(var_175_bool == 0) goto Label_820; // 0x331 JumpB
	var_98_bool = 0; // 0x332 MovB
	return 4; // 0x333 Return
	
Label_820:
	var_176_int = 2; // 0x334 PushI
	irand(var_106_int, var_176_int); // 0x335 Func
	var_177_int = var_106_int; // 0x337 Push
	if(var_177_int == 0) goto Label_833; // 0x338 JumpB
	var_178_string = "voice_common"; // 0x339 PushS
	var_179_int = 1; // 0x33a PushI
	var_180_int = var_105_int + var_179_int; // 0x33b Add
	var_181_int = 3; // 0x33c PushI
	var_182_int = var_180_int / var_181_int; // 0x33d Mod
	SetVariable(var_178_string, var_182_int); // 0x33e Func
	goto Label_837; // 0x340 Jump
	
Label_837:
	goto Label_856; // 0x345 Jump
	
Label_856:
	var_98_bool = 1; // 0x358 MovB
	return 4; // 0x359 Return
	
Label_833:
	var_183_string = "voice_common"; // 0x341 PushS
	var_184_int = 0; // 0x342 PushI
	SetVariable(var_183_string, var_184_int); // 0x343 Func
	
Label_838:
	var_185_bool = 0; var_186_object = Obj(); // 0x346 PushV
	var_186_object = var_99_object; // 0x347 Mov
	func_895(var_186_object); // 0x348 NEW_2
	var_187_bool = var_185_bool == 0; // 0x34a Not
	if(var_187_bool == 0) goto Label_852; // 0x34b JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x34c PushV
	var_189_object = var_99_object; // 0x34d Mov
	func_858(var_189_object); // 0x34e NEW_2
	var_190_bool = var_188_bool == 0; // 0x350 Not
	if(var_190_bool == 0) goto Label_852; // 0x351 JumpB
	var_98_bool = 0; // 0x352 MovB
	return 4; // 0x353 Return
	
Label_852:
	var_191_string = "voice_common"; // 0x354 PushS
	var_192_int = 1; // 0x355 PushI
	SetVariable(var_191_string, var_192_int); // 0x356 Func
}


func_1057()
{
	var_15_string = "k10q01"; // 0x422 PushS
	var_16_int = 7; // 0x423 PushI
	SetVariable(var_15_string, var_16_int); // 0x424 Func
	func_1083(); // 0x427 NEW_2
	var_40_bool = 0; var_41_string = ""; var_42_string = ""; // 0x429 PushV
	var_41_string = "quest_k10_01"; // 0x42a MovS
	var_42_string = "place_prophet"; // 0x42b MovS
	func_1012(var_40_bool, var_41_string, var_42_string); // 0x42c NEW_2
	return 0; // 0x42e Return
}


func_674(var_45_bool)
{
	var_45_bool = 1; // 0x2a2 MovB
	return 0; // 0x2a3 Return
}


func_676()
{
	StopAnimation(); // 0x2a4 Func
	StopGroup0(); // 0x2a6 Func
	return 0; // 0x2a8 Return
}


func_551()
{
	StopGroup0(); // 0x227 Func
	func_494(); // 0x22a NEW_2
	var_8_string = ""; // 0x22c PushV
	var_8_string = "Neutral"; // 0x22d MovS
	func_938(var_8_string); // 0x22e NEW_2
	func_485(); // 0x231 NEW_2
	return 0; // 0x233 Return
}


func_681(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x2a9 PushV
	GetPosition(var_27_cvector); // 0x2aa Func
	GetPosition(var_28_cvector); // 0x2ac ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2ae Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2af Or2
	return 6; // 0x2b0 Return
}


func_938(var_234_string)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0; // 0x3aa PushV
	lshHasAnimation(var_238_bool, var_234_string); // 0x3ab Func
	var_241_bool = var_238_bool; // 0x3ad Push
	if(var_241_bool == 0) goto Label_949; // 0x3ae JumpB
	lshGetAnimTimes(var_234_string, var_239_float, var_240_float); // 0x3af Func
	var_242_bool = 0; // 0x3b1 PushB
	lshPlayAnimation(var_239_float, var_240_float, var_242_bool); // 0x3b2 Func
	goto Label_953; // 0x3b4 Jump
	
Label_953:
	return 6; // 0x3b9 Return
	
Label_949:
	var_243_string = "Can't find lsh animation : "; // 0x3b5 PushS
	var_244_int = var_243_string + var_234_string; // 0x3b6 Add
	Trace(var_244_int); // 0x3b7 Func
}


func_429(var_0_object)
{
	var_7_bool = 0; // 0x1ad PushV
	func_708(var_7_bool); // 0x1ae NEW_2
	var_10_bool = var_7_bool == 0; // 0x1b0 Not
	if(var_10_bool == 0) goto Label_436; // 0x1b1 JumpB
	Hold(); // 0x1b2 Func
	
Label_436:
	GetDirection(var_0_object); // 0x1b4 Func
	
Label_438:
	func_605(); // 0x1b7 NEW_2
	goto Label_438; // 0x1b9 Jump
}


func_1071(var_218_bool)
{
	var_220_int = 0; var_221_string = ""; // 0x430 PushV
	var_221_string = "k10q01"; // 0x431 MovS
	func_1007(var_220_int, var_221_string); // 0x432 NEW_2
	var_224_int = 6; // 0x434 PushI
	var_225_bool = var_220_int == var_224_int; // 0x435 Eq
	if(var_225_bool == 0) goto Label_1081; // 0x436 JumpB
	var_218_bool = 1; // 0x437 MovB
	return 0; // 0x438 Return
	
Label_1081:
	var_218_bool = 0; // 0x439 MovB
	return 0; // 0x43a Return
}


func_689(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x2b1 PushV
	GetPosition(var_20_cvector); // 0x2b2 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x2b4 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x2b5 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x2b6 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x2b7 Func
	var_15_bool = var_22_bool; // 0x2b9 Mov
	return 6; // 0x2ba Return
}


func_954(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0; // 0x3ba PushV
	lshHasAnimation(var_211_bool, var_204_string); // 0x3bb Func
	var_214_bool = var_211_bool; // 0x3bd Push
	if(var_214_bool == 0) goto Label_964; // 0x3be JumpB
	lshGetAnimTimes(var_204_string, var_212_float, var_213_float); // 0x3bf Func
	lshPlayAnimation(var_212_float, var_213_float, var_205_bool); // 0x3c1 Func
	goto Label_968; // 0x3c3 Jump
	
Label_968:
	return 6; // 0x3c8 Return
	
Label_964:
	var_215_string = "Can't find lsh animation : "; // 0x3c4 PushS
	var_216_int = var_215_string + var_204_string; // 0x3c5 Add
	Trace(var_216_int); // 0x3c6 Func
}


func_699(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x2bb PushV
	GetPosition(var_14_cvector); // 0x2bc ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x2be PushV
	var_16_cvector = var_14_cvector; // 0x2bf Mov
	func_689(var_15_bool, var_16_cvector); // 0x2c0 NEW_2
	var_11_bool = var_15_bool; // 0x2c1 Mov
	return 2; // 0x2c3 Return
}


func_443(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x1bb PushV
	var_35_string = "player"; // 0x1bc PushS
	FindActor(var_34_object, var_35_string); // 0x1bd Func
	var_36_bool = var_34_object == 0; // 0x1bf Not
	if(var_36_bool == 0) goto Label_451; // 0x1c0 JumpB
	var_32_bool = 0; // 0x1c1 MovB
	return 2; // 0x1c2 Return
	
Label_451:
	var_37_bool = 0; var_38_object = Obj(); // 0x1c3 PushV
	var_38_object = var_34_object; // 0x1c4 Mov
	func_699(var_38_object); // 0x1c5 NEW_2
	var_32_bool = var_37_bool; // 0x1c6 Mov
	return 2; // 0x1c8 Return
}


func_1083()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x43b PushV
	var_19_int = 454; // 0x43c PushI
	var_20_int = 1; // 0x43d PushI
	var_21_int = 527012; // 0x43e PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x43f Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x441 PushV
	var_23_object = var_18_object; // 0x442 Mov
	var_24_int = 447; // 0x443 MovI
	func_1109(var_22_bool, var_23_object, var_24_int); // 0x444 NEW_2
	return 2; // 0x446 Return
}


func_708(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2c4 PushV
	IsLoaded(var_9_bool); // 0x2c5 Func
	var_7_bool = var_9_bool; // 0x2c7 Mov
	return 2; // 0x2c8 Return
}


func_1096(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x448 PushV
	GetDiaryRoot(var_33_object); // 0x449 Func
	var_34_bool = var_33_object == 0; // 0x44b Not
	if(var_34_bool == 0) goto Label_1106; // 0x44c JumpB
	var_35_string = "Can't retrieve diary root"; // 0x44d PushS
	Trace(var_35_string); // 0x44e Func
	var_31_object = 0; // 0x450 MovB
	return 2; // 0x451 Return
	
Label_1106:
	var_31_object = var_33_object; // 0x452 Mov
	return 2; // 0x453 Return
}


func_713(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x2c9 PushV
	GetPosition(var_50_cvector); // 0x2ca ObjFunc
	GetEyesHeight(var_49_float); // 0x2cc ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2ce PushE
	var_58_float = var_58_float + var_49_float; // 0x2cf Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2d0 PopE
	GetPosition(var_51_cvector); // 0x2d1 Func
	GetEyesHeight(var_49_float); // 0x2d3 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x2d5 PushE
	var_59_float = var_59_float + var_49_float; // 0x2d6 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x2d7 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x2d8 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x2d9 PushE
	var_60_float = 0; // 0x2da MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x2db PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x2dc Or
	var_62_float = sqrt(var_61_int); // 0x2dd Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x2de Div2
	var_53_cvector = -var_52_cvector; // 0x2df Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x2e0 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x2e1 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x2e2 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x2e3 Xor2
	func_997(var_64_cvector, var_65_cvector); // 0x2e4 NEW_2
	var_72_int = 25; // 0x2e6 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x2e7 Mult
	var_74_int = var_63_float + var_73_float; // 0x2e8 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x2e9 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x2ea Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x2eb Add2
	IsOverrideActive(var_56_bool); // 0x2ec Func
	var_76_bool = var_56_bool; // 0x2ee Push
	if(var_76_bool == 0) goto Label_754; // 0x2ef JumpB
	var_37_bool = 0; // 0x2f0 MovB
	return 18; // 0x2f1 Return
	
Label_754:
	StopWorld(); // 0x2f2 Func
	var_77_bool = 1; // 0x2f4 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x2f5 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x2f7 PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x2f8 PushE
	Rotate(var_78_float, var_79_float); // 0x2f9 Func
	var_80_bool = 0; // 0x2fb PushV
	func_1162(var_80_bool); // 0x2fc NEW_2
	if(var_80_bool == 0) goto Label_768; // 0x2fe JumpB
	goto Label_776; // 0x2ff Jump
	
Label_776:
	CameraWaitForPlayFinish(); // 0x308 Func
	ResumeWorld(); // 0x30a Func
	var_37_bool = 1; // 0x30c MovB
	return 18; // 0x30d Return
	
Label_768:
	var_81_string = "head"; // 0x300 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x301 Func
	var_82_bool = var_57_bool; // 0x303 Push
	if(var_82_bool == 0) goto Label_776; // 0x304 JumpB
	var_83_string = "head"; // 0x305 PushS
	LookAsyncCamera(var_83_string); // 0x306 Func
}


func_458(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x1ca PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x1cb PushE
	RotateAsync(var_84_float, var_85_float); // 0x1cc Func
	return 0; // 0x1ce Return
}


func_969(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x3c9 PushV
	var_136_bool = 0; // 0x3ca PushV
	func_1162(var_136_bool); // 0x3cb NEW_2
	if(var_136_bool == 0) goto Label_982; // 0x3cd JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x3ce Func
	var_137_bool = var_135_bool; // 0x3d0 Push
	if(var_137_bool == 0) goto Label_982; // 0x3d1 JumpB
	lshPlaySpeech(var_133_string); // 0x3d2 Func
	var_132_bool = 1; // 0x3d4 MovB
	return 2; // 0x3d5 Return
	
Label_982:
	var_132_bool = 0; // 0x3d6 MovB
	return 2; // 0x3d7 Return
}


func_463(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x1cf PushV
	var_20_string = "player"; // 0x1d0 PushS
	FindActor(var_18_object, var_20_string); // 0x1d1 Func
	var_21_bool = var_18_object == 0; // 0x1d3 Not
	if(var_21_bool == 0) goto Label_471; // 0x1d4 JumpB
	var_15_bool = 0; // 0x1d5 MovB
	return 4; // 0x1d6 Return
	
Label_471:
	var_22_float = 0; var_23_object = Obj(); // 0x1d7 PushV
	var_23_object = var_18_object; // 0x1d8 Mov
	func_681(var_23_object); // 0x1d9 NEW_2
	var_30_float = 90000.0; // 0x1db PushF
	var_31_bool = var_22_float > var_30_float; // 0x1dc GT
	if(var_31_bool == 0) goto Label_480; // 0x1dd JumpB
	var_15_bool = 0; // 0x1de MovB
	return 4; // 0x1df Return
	
Label_480:
	CanSee(var_19_bool, var_18_object); // 0x1e0 Func
	var_15_bool = var_19_bool; // 0x1e2 Mov
	return 4; // 0x1e3 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_114; // 0x56 JumpB
	var_200_string = ""; // 0x57 PushV
	var_200_string = "Neutral"; // 0x58 MovS
	func_144(var_194_object, var_200_string); // 0x59 NEW_2
	var_217_int = 526985; // 0x5b PushI
	SetMessage(var_217_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_218_bool = 0; var_219_object = Obj(); // 0x60 PushV
	var_219_object = var_1_object; // 0x61 MovT
	func_1071(var_219_object); // 0x62 NEW_2
	if(var_218_bool == 0) goto Label_106; // 0x64 JumpB
	var_226_int = 526986; // 0x65 PushI
	var_227_int = 29458; // 0x66 PushI
	var_228_int = 28278; // 0x67 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x68 TObjFunc
	
Label_106:
	var_229_int = 526991; // 0x6a PushI
	var_230_int = -1; // 0x6b PushI
	var_231_int = 28283; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_232_bool = 0; // 0x72 PushV
	func_1162(var_232_bool); // 0x73 NEW_2
	if(var_232_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_233_string = var_3_string; // 0x78 PushT
	if(var_233_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_234_string = ""; // 0x7b PushV
	var_234_string = var_2_object; // 0x7c MovT
	func_938(var_234_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_245_string = "all"; // 0x81 PushS
	var_246_string = "idle"; // 0x82 PushS
	PlayAnimation(var_245_string, var_246_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_247_string = var_3_string; // 0x87 PushT
	if(var_247_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_248_string = "all"; // 0x8a PushS
	var_249_string = "idle"; // 0x8b PushS
	PlayAnimation(var_248_string, var_249_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_1109(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x455 PushV
	var_31_object = Obj(); // 0x456 PushV
	func_1096(var_31_object); // 0x457 NEW_2
	var_28_object = var_31_object; // 0x458 Mov
	Find(var_24_int, var_29_object); // 0x45a ObjFunc
	var_36_bool = var_29_object == 0; // 0x45c Not
	if(var_36_bool == 0) goto Label_1124; // 0x45d JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x45e PushS
	var_38_int = var_37_string + var_24_int; // 0x45f Add
	Trace(var_38_int); // 0x460 Func
	var_22_bool = 0; // 0x462 MovB
	return 6; // 0x463 Return
	
Label_1124:
	AddChild(var_23_object); // 0x464 ObjFunc
	var_39_int = 7; // 0x466 PushI
	SendWorldWndMessage(var_39_int); // 0x467 Func
	GetCategory(var_30_int); // 0x469 ObjFunc
	SetDiarySection(var_30_int); // 0x46b Func
	var_22_bool = 0; // 0x46d MovB
	return 6; // 0x46e Return
}


func_984()
{
	var_10_bool = 0; // 0x3d8 PushV
	func_1162(var_10_bool); // 0x3d9 NEW_2
	if(var_10_bool == 0) goto Label_990; // 0x3db JumpB
	lshStopSpeech(); // 0x3dc Func
	
Label_990:
	return 0; // 0x3de Return
}


func_858(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x35a PushV
	var_116_string = "c"; // 0x35b MovS
	var_117_int = 0; // 0x35c MovI
	
Label_861:
	var_121_int = 1; // 0x35d PushI
	if(var_121_int == 0) goto Label_874; // 0x35e JumpB
	var_122_int = 1; // 0x35f PushI
	var_123_int = var_117_int + var_122_int; // 0x360 Add
	var_124_int = var_116_string + var_123_int; // 0x361 Add
	HasProperty(var_124_int, var_118_bool); // 0x362 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x364 Not
	if(var_125_bool == 0) goto Label_871; // 0x365 JumpB
	goto Label_874; // 0x366 Jump
	
Label_874:
	var_126_bool = var_117_int == 0; // 0x36a Not
	if(var_126_bool == 0) goto Label_878; // 0x36b JumpB
	var_109_bool = 0; // 0x36c MovB
	return 10; // 0x36d Return
	
Label_878:
	var_119_int = 0; // 0x36e MovI
	var_127_int = 1; // 0x36f PushI
	var_128_bool = var_117_int > var_127_int; // 0x370 GT
	if(var_128_bool == 0) goto Label_884; // 0x371 JumpB
	irand(var_119_int, var_117_int); // 0x372 Func
	
Label_884:
	var_129_int = 1; // 0x374 PushI
	var_130_int = var_119_int + var_129_int; // 0x375 Add
	var_131_int = var_116_string + var_130_int; // 0x376 Add
	GetProperty(var_131_int, var_120_string); // 0x377 ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x379 PushV
	var_133_string = var_120_string; // 0x37a Mov
	func_969(var_132_bool, var_133_string); // 0x37b NEW_2
	var_109_bool = var_132_bool; // 0x37c Mov
	return 10; // 0x37e Return
	
Label_871:
	var_138_int = 1; // 0x367 PushI
	var_117_int = var_117_int + var_138_int; // 0x368 Add2
	goto Label_861; // 0x369 Jump
}


func_605()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x25d PushV
	WaitForAnimEnd(); // 0x25e Func
	var_23_bool = 0; // 0x260 PushV
	func_708(var_23_bool); // 0x261 NEW_2
	var_24_bool = var_23_bool == 0; // 0x263 Not
	if(var_24_bool == 0) goto Label_614; // 0x264 JumpB
	return 12; // 0x265 Return
	
Label_614:
	var_25_int = 0; // 0x266 PushV
	func_1040(var_25_int); // 0x267 NEW_2
	var_17_int = var_25_int; // 0x268 Mov
	var_18_int = 0; // 0x26a MovI
	
Label_619:
	var_38_bool = 0; // 0x26b PushV
	var_38_bool = 0; // 0x26c MovB
	var_39_int = 5; // 0x26d PushI
	var_40_bool = var_18_int < var_39_int; // 0x26e LT
	if(var_40_bool == 0) goto Label_629; // 0x26f JumpB
	var_41_bool = 0; // 0x270 PushV
	func_708(var_41_bool); // 0x271 NEW_2
	if(var_41_bool == 0) goto Label_629; // 0x273 JumpB
	var_38_bool = 1; // 0x274 MovB
	
Label_629:
	if(var_38_bool == 0) goto Label_671; // 0x275 JumpB
	var_42_bool = var_17_int == 0; // 0x276 Not
	if(var_42_bool == 0) goto Label_639; // 0x277 JumpB
	var_43_int = 3; // 0x278 PushI
	Sleep(var_43_int, var_19_bool); // 0x279 Func
	var_44_bool = var_19_bool == 0; // 0x27b Not
	if(var_44_bool == 0) goto Label_638; // 0x27c JumpB
	goto Label_671; // 0x27d Jump
	
Label_671:
	ResetAAS(); // 0x29f Func
	return 12; // 0x2a1 Return
	
Label_638:
	goto Label_660; // 0x27e Jump
	
Label_660:
	var_45_bool = 0; // 0x294 PushV
	func_674(var_45_bool); // 0x295 NEW_2
	var_46_bool = var_45_bool == 0; // 0x297 Not
	if(var_46_bool == 0) goto Label_666; // 0x298 JumpB
	goto Label_671; // 0x299 Jump
	
Label_666:
	ResetAAS(); // 0x29a Func
	var_47_int = 1; // 0x29c PushI
	var_18_int = var_18_int + var_47_int; // 0x29d Add2
	goto Label_619; // 0x29e Jump
	
Label_639:
	irand(var_20_int, var_17_int); // 0x27f Func
	var_48_int = 5; // 0x281 PushI
	irand(var_21_int, var_48_int); // 0x282 Func
	var_49_int = 0; // 0x284 PushI
	var_50_bool = var_21_int != var_49_int; // 0x285 Neq
	if(var_50_bool == 0) goto Label_648; // 0x286 JumpB
	var_20_int = 0; // 0x287 MovI
	
Label_648:
	var_51_string = "all"; // 0x288 PushS
	var_52_string = ""; var_53_int = 0; // 0x289 PushV
	var_53_int = var_20_int; // 0x28a Mov
	func_1033(var_52_string, var_53_int); // 0x28b NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x28d Func
	WaitForAnimEnd(var_22_bool); // 0x28f Func
	var_54_bool = var_22_bool == 0; // 0x291 Not
	if(var_54_bool == 0) goto Label_660; // 0x292 JumpB
	goto Label_671; // 0x293 Jump
}


func_991(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x3df PushV
	self(var_102_object); // 0x3e0 Func
	var_100_object = var_102_object; // 0x3e2 Mov
	return 2; // 0x3e3 Return
}


func_485()
{
	var_261_float = 0; var_262_float = 0; // 0x1e5 PushV
	var_263_int = 8; // 0x1e6 PushI
	var_264_int = 16; // 0x1e7 PushI
	rand(var_262_float, var_263_int, var_264_int); // 0x1e8 Func
	var_265_int = 10; // 0x1ea PushI
	SetTimer(var_265_int, var_262_float); // 0x1eb Func
	return 2; // 0x1ed Return
}


func_997(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x3e5 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x3e6 Or
	var_68_float = sqrt(var_69_int); // 0x3e7 Sqrt2
	var_70_float = 0.0; // 0x3e8 PushF
	var_71_bool = var_68_float < var_70_float; // 0x3e9 LT
	if(var_71_bool == 0) goto Label_1005; // 0x3ea JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x3eb MovV
	return 2; // 0x3ec Return
	
Label_1005:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x3ed Div2
	return 2; // 0x3ee Return
}


func_494()
{
	var_260_int = 10; // 0x1ee PushI
	KillTimer(var_260_int); // 0x1ef Func
	return 0; // 0x1f1 Return
}


func_1007(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0; // 0x3ef PushV
	GetVariable(var_221_string, var_223_int); // 0x3f0 Func
	var_220_int = var_223_int; // 0x3f2 Mov
	return 2; // 0x3f3 Return
}


func_1137(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x471 PushV
	var_92_string = "branch"; // 0x472 PushS
	GetVariable(var_92_string, var_91_int); // 0x473 Func
	var_93_int = 0; // 0x475 PushI
	var_94_bool = var_91_int == var_93_int; // 0x476 Eq
	if(var_94_bool == 0) goto Label_1147; // 0x477 JumpB
	var_89_int = 1; // 0x478 MovI
	return 2; // 0x479 Return
	
Label_1147:
	var_95_int = 1; // 0x47b PushI
	var_96_bool = var_91_int == var_95_int; // 0x47c Eq
	if(var_96_bool == 0) goto Label_1152; // 0x47d JumpB
	var_89_int = 2; // 0x47e MovI
	return 2; // 0x47f Return
	
Label_1152:
	var_89_int = 3; // 0x480 MovI
	return 2; // 0x481 Return
}


func_1012(var_40_bool, var_41_string, var_42_string)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x3f4 PushV
	FindActor(var_44_object, var_41_string); // 0x3f5 Func
	var_45_bool = var_44_object == 0; // 0x3f7 NullEq
	if(var_45_bool == 0) goto Label_1019; // 0x3f8 JumpB
	var_40_bool = 0; // 0x3f9 MovB
	return 2; // 0x3fa Return
	
Label_1019:
	Trigger(var_44_object, var_42_string); // 0x3fb Func
	var_40_bool = 1; // 0x3fd MovB
	return 2; // 0x3fe Return
}


func_380(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x17d PushV
	var_27_object = var_25_object; // 0x17e Mov
	TaskCall(0); // 0x17f TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x180 NEW_2
	TaskReturn(); // 0x181 TaskReturn
	return 0; // 0x183 Return
}


func_895(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x37f PushV
	var_152_string = "d"; // 0x380 PushS
	var_153_int = 0; // 0x381 PushV
	func_1024(var_153_int); // 0x382 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x384 Add
	var_160_string = "m"; // 0x385 PushS
	var_147_string = var_159_int + var_160_string; // 0x386 Add2
	var_148_int = 0; // 0x387 MovI
	
Label_904:
	var_161_int = 1; // 0x388 PushI
	if(var_161_int == 0) goto Label_917; // 0x389 JumpB
	var_162_int = 1; // 0x38a PushI
	var_163_int = var_148_int + var_162_int; // 0x38b Add
	var_164_int = var_147_string + var_163_int; // 0x38c Add
	HasProperty(var_164_int, var_149_bool); // 0x38d ObjFunc
	var_165_bool = var_149_bool == 0; // 0x38f Not
	if(var_165_bool == 0) goto Label_914; // 0x390 JumpB
	goto Label_917; // 0x391 Jump
	
Label_917:
	var_166_bool = var_148_int == 0; // 0x395 Not
	if(var_166_bool == 0) goto Label_921; // 0x396 JumpB
	var_140_bool = 0; // 0x397 MovB
	return 10; // 0x398 Return
	
Label_921:
	var_150_int = 0; // 0x399 MovI
	var_167_int = 1; // 0x39a PushI
	var_168_bool = var_148_int > var_167_int; // 0x39b GT
	if(var_168_bool == 0) goto Label_927; // 0x39c JumpB
	irand(var_150_int, var_148_int); // 0x39d Func
	
Label_927:
	var_169_int = 1; // 0x39f PushI
	var_170_int = var_150_int + var_169_int; // 0x3a0 Add
	var_171_int = var_147_string + var_170_int; // 0x3a1 Add
	GetProperty(var_171_int, var_151_string); // 0x3a2 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x3a4 PushV
	var_173_string = var_151_string; // 0x3a5 Mov
	func_969(var_172_bool, var_173_string); // 0x3a6 NEW_2
	var_140_bool = var_172_bool; // 0x3a7 Mov
	return 10; // 0x3a9 Return
	
Label_914:
	var_174_int = 1; // 0x392 PushI
	var_148_int = var_148_int + var_174_int; // 0x393 Add2
	goto Label_904; // 0x394 Jump
}


