task_0_event_26(var_0_int, var_1_object, var_2_object, var_3_object, var_4_string)
{
	Trace(var_4_string); // 0x2d Func
	var_5_string = "sleep_end"; // 0x2f PushS
	var_6_bool = var_4_string == var_5_string; // 0x30 Eq
	if(var_6_bool == 0) goto Label_69; // 0x31 JumpB
	var_7_int = 0; // 0x32 PushV
	var_8_int = 0; // 0x33 PushV
	func_208(var_8_int); // 0x34 NEW_2
	var_7_int = var_8_int; // 0x35 Mov
	func_100(var_3_object, var_4_string, var_7_int); // 0x37 NEW_2
	var_65_int = 0; var_66_float = 0; // 0x39 PushV
	var_67_int = 0; // 0x3a PushV
	func_208(var_67_int); // 0x3b NEW_2
	var_65_int = var_67_int; // 0x3c Mov
	var_68_float = 0; // 0x3e PushV
	func_203(var_68_float); // 0x3f NEW_2
	var_66_float = var_68_float; // 0x40 Mov
	func_149(var_65_int, var_66_float); // 0x42 NEW_2
	goto Label_85; // 0x44 Jump
	
Label_85:
	return 0; // 0x55 Return
	
Label_69:
	var_163_string = "remove_klara"; // 0x45 PushS
	var_164_bool = var_4_string == var_163_string; // 0x46 Eq
	if(var_164_bool == 0) goto Label_79; // 0x47 JumpB
	func_86(var_4_string); // 0x49 NEW_2
	func_297(); // 0x4c NEW_2
	goto Label_85; // 0x4e Jump
	
Label_79:
	var_193_string = "klara_stay"; // 0x4f PushS
	var_194_bool = var_4_string == var_193_string; // 0x50 Eq
	if(var_194_bool == 0) goto Label_85; // 0x51 JumpB
	func_310(); // 0x53 NEW_2
}


main(var_0_int, var_1_object, var_2_object, var_3_object)
{
	var_4_int = 0; var_5_int = 0; // 0x0 PushV
	var_0_int = -1; // 0x1 TMovI
	CreateBoolVector(var_4_int); // 0x2 Func
	CreateBoolVector(var_3_object); // 0x4 Func
	var_5_int = 0; // 0x6 MovI
	
Label_7:
	var_6_int = 12; // 0x7 PushI
	var_7_bool = var_5_int < var_6_int; // 0x8 LT
	if(var_7_bool == 0) goto Label_37; // 0x9 JumpB
	var_8_bool = 0; // 0xa PushB
	add(var_8_bool); // 0xb TObjFunc
	var_9_bool = 0; // 0xd PushV
	var_9_bool = 1; // 0xe MovB
	var_10_int = 1; // 0xf PushI
	var_11_int = var_5_int + var_10_int; // 0x10 Add
	var_12_int = 6; // 0x11 PushI
	var_13_bool = var_11_int < var_12_int; // 0x12 LT
	if(var_13_bool == 0) goto Label_26; // 0x13 JumpB
	var_14_int = 1; // 0x14 PushI
	var_15_int = var_5_int + var_14_int; // 0x15 Add
	var_16_int = 12; // 0x16 PushI
	var_17_bool = var_15_int == var_16_int; // 0x17 Eq
	if(var_17_bool == 0) goto Label_26; // 0x18 JumpB
	var_9_bool = 0; // 0x19 MovB
	
Label_26:
	if(var_9_bool == 0) goto Label_31; // 0x1a JumpB
	var_18_bool = 0; // 0x1b PushB
	add(var_18_bool); // 0x1c TObjFunc
	goto Label_34; // 0x1e Jump
	
Label_34:
	var_19_int = 1; // 0x22 PushI
	var_5_int = var_5_int + var_19_int; // 0x23 Add2
	goto Label_7; // 0x24 Jump
	
Label_31:
	var_20_bool = 1; // 0x1f PushB
	add(var_20_bool); // 0x20 TObjFunc
	
Label_37:
	func_168(); // 0x26 NEW_2
	
Label_40:
	Hold(); // 0x28 Func
	goto Label_40; // 0x2a Jump
}


func_323(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x143 PushV
	GetDiaryRoot(var_108_object); // 0x144 Func
	var_109_bool = var_108_object == 0; // 0x146 Not
	if(var_109_bool == 0) goto Label_333; // 0x147 JumpB
	var_110_string = "Can't retrieve diary root"; // 0x148 PushS
	Trace(var_110_string); // 0x149 Func
	var_106_object = 0; // 0x14b MovB
	return 2; // 0x14c Return
	
Label_333:
	var_106_object = var_108_object; // 0x14d Mov
	return 2; // 0x14e Return
}


func_262(var_141_int, var_142_float)
{
	var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_float = 0; // 0x107 PushV
	var_144_int = 538510; // 0x108 MovI
	var_145_int = 538509; // 0x109 MovI
	var_146_float = var_142_float; // 0x10a Mov
	func_364(var_143_int, var_144_int, var_145_int, var_146_float); // 0x10b NEW_2
	var_141_int = var_143_int; // 0x10c Mov
	return 0; // 0x10e Return
}


func_203(var_68_float)
{
	var_69_float = 0; var_70_float = 0; // 0xcb PushV
	GetGameTime(var_70_float); // 0xcc Func
	var_68_float = var_70_float; // 0xce Mov
	return 2; // 0xcf Return
}


func_271()
{
	var_92_object = Obj(); var_93_object = Obj(); // 0x10f PushV
	var_94_int = 723; // 0x110 PushI
	var_95_int = 2; // 0x111 PushI
	var_96_int = 539102; // 0x112 PushI
	CreateDiaryEntry(var_93_object, var_94_int, var_95_int, var_96_int); // 0x113 Func
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0; // 0x115 PushV
	var_98_object = var_93_object; // 0x116 Mov
	var_99_int = -1; // 0x117 MovI
	func_336(var_97_bool, var_98_object, var_99_int); // 0x118 NEW_2
	return 2; // 0x11a Return
}


func_208(var_8_int)
{
	var_9_float = 0; var_10_float = 0; // 0xd0 PushV
	GetGameTime(var_10_float); // 0xd1 Func
	var_11_int = 1; // 0xd3 PushI
	var_12_int = 0; // 0xd4 PushV
	var_13_int = 24; // 0xd5 PushI
	var_12_int = var_10_float / var_10_float; // 0xd6 Div2
	var_8_int = var_11_int + var_12_int; // 0xd7 Add2
	return 2; // 0xd8 Return
}


func_336(var_97_bool, var_98_object, var_99_int)
{
	var_100_object = Obj(); var_101_object = Obj(); var_102_int = 0; var_103_object = Obj(); var_104_object = Obj(); var_105_int = 0; // 0x150 PushV
	var_106_object = Obj(); // 0x151 PushV
	func_323(var_106_object); // 0x152 NEW_2
	var_103_object = var_106_object; // 0x153 Mov
	Find(var_99_int, var_104_object); // 0x155 ObjFunc
	var_111_bool = var_104_object == 0; // 0x157 Not
	if(var_111_bool == 0) goto Label_351; // 0x158 JumpB
	var_112_string = "Can't find diary parent with id: "; // 0x159 PushS
	var_113_int = var_112_string + var_99_int; // 0x15a Add
	Trace(var_113_int); // 0x15b Func
	var_97_bool = 0; // 0x15d MovB
	return 6; // 0x15e Return
	
Label_351:
	AddChild(var_98_object); // 0x15f ObjFunc
	var_114_int = 7; // 0x161 PushI
	SendWorldWndMessage(var_114_int); // 0x162 Func
	GetCategory(var_105_int); // 0x164 ObjFunc
	SetDiarySection(var_105_int); // 0x166 Func
	var_97_bool = 0; // 0x168 MovB
	return 6; // 0x169 Return
}


func_149(var_65_int, var_66_float)
{
	var_71_bool = 0; var_72_bool = 0; // 0x95 PushV
	var_73_int = 1; // 0x96 PushI
	var_74_int = var_65_int - var_73_int; // 0x97 Sub
	get(var_72_bool, var_74_int); // 0x98 TObjFunc
	var_75_bool = var_72_bool; // 0x9a Push
	if(var_75_bool == 0) goto Label_157; // 0x9b JumpB
	return 2; // 0x9c Return
	
Label_157:
	var_76_int = 1; // 0x9d PushI
	var_77_int = var_65_int - var_76_int; // 0x9e Sub
	var_78_bool = 1; // 0x9f PushB
	set(var_77_int, var_78_bool); // 0xa0 TObjFunc
	var_79_int = 0; var_80_float = 0; // 0xa2 PushV
	var_79_int = var_65_int; // 0xa3 Mov
	var_80_float = var_66_float; // 0xa4 Mov
	func_421(var_79_int, var_80_float); // 0xa5 NEW_2
	return 2; // 0xa7 Return
}


func_86(var_0_int)
{
	var_165_object = var_1_object; // 0x56 PushT
	if(var_165_object == 0) goto Label_91; // 0x57 JumpB
	var_166_string = "cleanup"; // 0x58 PushS
	Trigger(var_166_string, var_166_string); // 0x59 Func
	
Label_91:
	var_167_int = 1; // 0x5b PushI
	var_168_int = var_0_int - var_167_int; // 0x5c Sub
	var_169_bool = 0; // 0x5d PushB
	set(var_168_int, var_169_bool); // 0x5e TObjFunc
	func_168(); // 0x61 NEW_2
	return 0; // 0x63 Return
}


func_217(var_149_int, var_150_float)
{
	var_151_int = 0; var_152_int = 0; var_153_int = 0; var_154_float = 0; // 0xda PushV
	var_152_int = 538512; // 0xdb MovI
	var_153_int = 538511; // 0xdc MovI
	var_154_float = var_150_float; // 0xdd Mov
	func_364(var_151_int, var_152_int, var_153_int, var_154_float); // 0xde NEW_2
	var_149_int = var_151_int; // 0xdf Mov
	return 0; // 0xe1 Return
}


func_284()
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x11c PushV
	var_117_int = 724; // 0x11d PushI
	var_118_int = 2; // 0x11e PushI
	var_119_int = 539103; // 0x11f PushI
	CreateDiaryEntry(var_116_object, var_117_int, var_118_int, var_119_int); // 0x120 Func
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0; // 0x122 PushV
	var_121_object = var_116_object; // 0x123 Mov
	var_122_int = 723; // 0x124 MovI
	func_336(var_120_bool, var_121_object, var_122_int); // 0x125 NEW_2
	return 2; // 0x127 Return
}


func_226(var_157_int, var_158_float)
{
	var_159_int = 0; var_160_int = 0; var_161_int = 0; var_162_float = 0; // 0xe3 PushV
	var_160_int = 538514; // 0xe4 MovI
	var_161_int = 538513; // 0xe5 MovI
	var_162_float = var_158_float; // 0xe6 Mov
	func_364(var_159_int, var_160_int, var_161_int, var_162_float); // 0xe7 NEW_2
	var_157_int = var_159_int; // 0xe8 Mov
	return 0; // 0xea Return
}


func_100(var_0_int, var_1_object, var_7_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_string = ""; var_17_bool = 0; var_18_object = Obj(); var_19_string = ""; // 0x64 PushV
	var_20_object = var_1_object; // 0x65 PushT
	if(var_20_object == 0) goto Label_105; // 0x66 JumpB
	RemoveActor(var_19_string); // 0x67 Func
	
Label_105:
	var_21_int = 1; // 0x69 PushI
	var_22_int = var_7_int - var_21_int; // 0x6a Sub
	get(var_17_bool, var_22_int); // 0x6b TObjFunc
	var_23_bool = var_17_bool == 0; // 0x6d Not
	if(var_23_bool == 0) goto Label_112; // 0x6e JumpB
	return 6; // 0x6f Return
	
Label_112:
	var_24_string = ""; var_25_int = 0; // 0x70 PushV
	var_25_int = var_7_int; // 0x71 Mov
	func_383(var_24_string, var_25_int); // 0x72 NEW_2
	var_19_string = var_24_string; // 0x73 Mov
	var_38_string = "Klara scene: "; // 0x75 PushS
	var_39_int = var_38_string + var_19_string; // 0x76 Add
	Trace(var_39_int); // 0x77 Func
	GetSceneByName(var_18_object, var_19_string); // 0x79 Func
	var_40_object = var_18_object; // 0x7b Push
	if(var_40_object == 0) goto Label_143; // 0x7c JumpB
	var_41_object = Obj(); var_42_object = Obj(); var_43_string = ""; var_44_string = ""; var_45_string = ""; // 0x7d PushV
	var_42_object = var_18_object; // 0x7e Mov
	var_46_string = "pt_klara"; // 0x7f PushS
	var_43_string = var_46_string + var_7_int; // 0x80 Add2
	var_44_string = "NPC_Klara"; // 0x81 MovS
	var_45_string = "k2system_klara2.xml"; // 0x82 MovS
	func_185(var_41_object, var_42_object, var_43_string, var_44_string, var_45_string); // 0x83 NEW_2
	var_1_object = var_41_object; // 0x84 TMov
	var_60_string = "day"; // 0x86 PushS
	SetProperty(var_60_string, var_7_int); // 0x87 TObjFunc
	var_61_int = 0; // 0x89 PushV
	var_61_int = var_7_int; // 0x8a Mov
	func_506(var_61_int); // 0x8b NEW_2
	var_0_int = var_7_int; // 0x8d TMov
	goto Label_147; // 0x8e Jump
	
Label_147:
	return 6; // 0x93 Return
	
Label_143:
	var_63_string = "ERROR: Klara2 scene was not found: "; // 0x8f PushS
	var_64_int = var_63_string + var_19_string; // 0x90 Add
	Trace(var_64_int); // 0x91 Func
}


func_421(var_79_int, var_80_float)
{
	var_81_int = 6; // 0x1a6 PushI
	var_82_bool = var_79_int == var_81_int; // 0x1a7 Eq
	if(var_82_bool == 0) goto Label_436; // 0x1a8 JumpB
	var_83_int = 0; var_84_float = 0; // 0x1a9 PushV
	var_84_float = var_80_float; // 0x1aa Mov
	func_235(var_83_int, var_84_float); // 0x1ab NEW_2
	func_271(); // 0x1ae NEW_2
	func_284(); // 0x1b1 NEW_2
	goto Label_505; // 0x1b3 Jump
	
Label_505:
	return 0; // 0x1f9 Return
	
Label_436:
	var_123_int = 7; // 0x1b4 PushI
	var_124_bool = var_79_int == var_123_int; // 0x1b5 Eq
	if(var_124_bool == 0) goto Label_450; // 0x1b6 JumpB
	var_125_int = 0; var_126_float = 0; // 0x1b7 PushV
	var_126_float = var_80_float; // 0x1b8 Mov
	func_244(var_125_int, var_126_float); // 0x1b9 NEW_2
	func_271(); // 0x1bc NEW_2
	func_284(); // 0x1bf NEW_2
	goto Label_505; // 0x1c1 Jump
	
Label_450:
	var_131_int = 8; // 0x1c2 PushI
	var_132_bool = var_79_int == var_131_int; // 0x1c3 Eq
	if(var_132_bool == 0) goto Label_464; // 0x1c4 JumpB
	var_133_int = 0; var_134_float = 0; // 0x1c5 PushV
	var_134_float = var_80_float; // 0x1c6 Mov
	func_253(var_133_int, var_134_float); // 0x1c7 NEW_2
	func_271(); // 0x1ca NEW_2
	func_284(); // 0x1cd NEW_2
	goto Label_505; // 0x1cf Jump
	
Label_464:
	var_139_int = 9; // 0x1d0 PushI
	var_140_bool = var_79_int == var_139_int; // 0x1d1 Eq
	if(var_140_bool == 0) goto Label_478; // 0x1d2 JumpB
	var_141_int = 0; var_142_float = 0; // 0x1d3 PushV
	var_142_float = var_80_float; // 0x1d4 Mov
	func_262(var_141_int, var_142_float); // 0x1d5 NEW_2
	func_271(); // 0x1d8 NEW_2
	func_284(); // 0x1db NEW_2
	goto Label_505; // 0x1dd Jump
	
Label_478:
	var_147_int = 10; // 0x1de PushI
	var_148_bool = var_79_int == var_147_int; // 0x1df Eq
	if(var_148_bool == 0) goto Label_492; // 0x1e0 JumpB
	var_149_int = 0; var_150_float = 0; // 0x1e1 PushV
	var_150_float = var_80_float; // 0x1e2 Mov
	func_217(var_149_int, var_150_float); // 0x1e3 NEW_2
	func_271(); // 0x1e6 NEW_2
	func_284(); // 0x1e9 NEW_2
	goto Label_505; // 0x1eb Jump
	
Label_492:
	var_155_int = 11; // 0x1ec PushI
	var_156_bool = var_79_int == var_155_int; // 0x1ed Eq
	if(var_156_bool == 0) goto Label_505; // 0x1ee JumpB
	var_157_int = 0; var_158_float = 0; // 0x1ef PushV
	var_158_float = var_80_float; // 0x1f0 Mov
	func_226(var_157_int, var_158_float); // 0x1f1 NEW_2
	func_271(); // 0x1f4 NEW_2
	func_284(); // 0x1f7 NEW_2
}


func_168()
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0xa8 PushV
	var_23_int = 0; // 0xa9 MovI
	
Label_170:
	var_25_int = 12; // 0xaa PushI
	var_26_bool = var_23_int < var_25_int; // 0xab LT
	if(var_26_bool == 0) goto Label_184; // 0xac JumpB
	get(var_24_bool, var_23_int); // 0xad TObjFunc
	var_27_int = 0; var_28_bool = 0; // 0xaf PushV
	var_29_int = 1; // 0xb0 PushI
	var_27_int = var_23_int + var_29_int; // 0xb1 Add2
	var_28_bool = var_24_bool; // 0xb2 Mov
	func_372(var_27_int, var_28_bool); // 0xb3 NEW_2
	var_35_int = 1; // 0xb5 PushI
	var_23_int = var_23_int + var_35_int; // 0xb6 Add2
	goto Label_170; // 0xb7 Jump
	
Label_184:
	return 4; // 0xb8 Return
}


func_297()
{
	var_185_object = Obj(); var_186_object = Obj(); // 0x129 PushV
	var_187_int = 725; // 0x12a PushI
	var_188_int = 2; // 0x12b PushI
	var_189_int = 539104; // 0x12c PushI
	CreateDiaryEntry(var_186_object, var_187_int, var_188_int, var_189_int); // 0x12d Func
	var_190_bool = 0; var_191_object = Obj(); var_192_int = 0; // 0x12f PushV
	var_191_object = var_186_object; // 0x130 Mov
	var_192_int = 723; // 0x131 MovI
	func_336(var_190_bool, var_191_object, var_192_int); // 0x132 NEW_2
	return 2; // 0x134 Return
}


func_235(var_83_int, var_84_float)
{
	var_85_int = 0; var_86_int = 0; var_87_int = 0; var_88_float = 0; // 0xec PushV
	var_86_int = 538504; // 0xed MovI
	var_87_int = 538503; // 0xee MovI
	var_88_float = var_84_float; // 0xef Mov
	func_364(var_85_int, var_86_int, var_87_int, var_88_float); // 0xf0 NEW_2
	var_83_int = var_85_int; // 0xf1 Mov
	return 0; // 0xf3 Return
}


func_364(var_85_int, var_86_int, var_87_int, var_88_float)
{
	var_89_int = 0; var_90_int = 0; // 0x16c PushV
	AddMessage(var_86_int, var_87_int, var_88_float, var_90_int); // 0x16d Func
	var_91_int = 6; // 0x16f PushI
	SendWorldWndMessage(var_91_int); // 0x170 Func
	var_85_int = var_90_int; // 0x172 Mov
	return 2; // 0x173 Return
}


func_372(var_27_int, var_28_bool)
{
	var_30_string = "K2System"; // 0x175 PushS
	var_31_int = var_30_string + var_27_int; // 0x176 Add
	var_32_bool = var_28_bool; // 0x177 Push
	if(var_32_bool == 0) goto Label_379; // 0x178 JumpB
	var_33_int = 1; // 0x179 PushI
	goto Label_380; // 0x17a Jump
	
Label_380:
	SetVariable(var_31_int, var_33_int); // 0x17c Func
	return 0; // 0x17e Return
	
Label_379:
	var_34_int = 0; // 0x17b PushI
}


func_244(var_125_int, var_126_float)
{
	var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_float = 0; // 0xf5 PushV
	var_128_int = 538506; // 0xf6 MovI
	var_129_int = 538505; // 0xf7 MovI
	var_130_float = var_126_float; // 0xf8 Mov
	func_364(var_127_int, var_128_int, var_129_int, var_130_float); // 0xf9 NEW_2
	var_125_int = var_127_int; // 0xfa Mov
	return 0; // 0xfc Return
}


func_310()
{
	var_195_object = Obj(); var_196_object = Obj(); // 0x136 PushV
	var_197_int = 726; // 0x137 PushI
	var_198_int = 2; // 0x138 PushI
	var_199_int = 539105; // 0x139 PushI
	CreateDiaryEntry(var_196_object, var_197_int, var_198_int, var_199_int); // 0x13a Func
	var_200_bool = 0; var_201_object = Obj(); var_202_int = 0; // 0x13c PushV
	var_201_object = var_196_object; // 0x13d Mov
	var_202_int = 723; // 0x13e MovI
	func_336(var_200_bool, var_201_object, var_202_int); // 0x13f NEW_2
	return 2; // 0x141 Return
}


func_185(var_41_object, var_42_object, var_43_string, var_44_string, var_45_string)
{
	var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_object = Obj(); var_51_bool = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_object = Obj(); // 0xb9 PushV
	GetLocator(var_43_string, var_51_bool, var_52_cvector, var_53_cvector); // 0xba ObjFunc
	var_55_bool = var_51_bool == 0; // 0xbc Not
	if(var_55_bool == 0) goto Label_198; // 0xbd JumpB
	var_56_string = "Locator "; // 0xbe PushS
	var_57_int = var_56_string + var_43_string; // 0xbf Add
	var_58_string = " doesn't exist"; // 0xc0 PushS
	var_59_int = var_57_int + var_58_string; // 0xc1 Add
	Trace(var_59_int); // 0xc2 Func
	var_54_object = 0; // 0xc4 SetNull
	goto Label_200; // 0xc5 Jump
	
Label_200:
	var_41_object = var_54_object; // 0xc8 Mov
	return 8; // 0xc9 Return
	
Label_198:
	AddActor(var_54_object, var_44_string, var_42_object, var_52_cvector, var_53_cvector, var_45_string); // 0xc6 Func
}


func_506(var_61_int)
{
	var_62_string = "k2system_klara_day"; // 0x1fb PushS
	SetVariable(var_62_string, var_61_int); // 0x1fc Func
	return 0; // 0x1fe Return
}


func_253(var_133_int, var_134_float)
{
	var_135_int = 0; var_136_int = 0; var_137_int = 0; var_138_float = 0; // 0xfe PushV
	var_136_int = 538508; // 0xff MovI
	var_137_int = 538507; // 0x100 MovI
	var_138_float = var_134_float; // 0x101 Mov
	func_364(var_135_int, var_136_int, var_137_int, var_138_float); // 0x102 NEW_2
	var_133_int = var_135_int; // 0x103 Mov
	return 0; // 0x105 Return
}


func_383(var_24_string, var_25_int)
{
	var_26_int = 6; // 0x180 PushI
	var_27_bool = var_25_int == var_26_int; // 0x181 Eq
	if(var_27_bool == 0) goto Label_390; // 0x182 JumpB
	var_24_string = "lc_House6_04"; // 0x183 MovS
	return 0; // 0x184 Return
	
Label_390:
	var_28_int = 7; // 0x186 PushI
	var_29_bool = var_25_int == var_28_int; // 0x187 Eq
	if(var_29_bool == 0) goto Label_396; // 0x188 JumpB
	var_24_string = "r2_house3_03"; // 0x189 MovS
	return 0; // 0x18a Return
	
Label_396:
	var_30_int = 8; // 0x18c PushI
	var_31_bool = var_25_int == var_30_int; // 0x18d Eq
	if(var_31_bool == 0) goto Label_402; // 0x18e JumpB
	var_24_string = "house1_se_04r"; // 0x18f MovS
	return 0; // 0x190 Return
	
Label_402:
	var_32_int = 9; // 0x192 PushI
	var_33_bool = var_25_int == var_32_int; // 0x193 Eq
	if(var_33_bool == 0) goto Label_408; // 0x194 JumpB
	var_24_string = "r7_house3_02_i2"; // 0x195 MovS
	return 0; // 0x196 Return
	
Label_408:
	var_34_int = 10; // 0x198 PushI
	var_35_bool = var_25_int == var_34_int; // 0x199 Eq
	if(var_35_bool == 0) goto Label_414; // 0x19a JumpB
	var_24_string = "house5_15"; // 0x19b MovS
	return 0; // 0x19c Return
	
Label_414:
	var_36_int = 11; // 0x19e PushI
	var_37_bool = var_25_int == var_36_int; // 0x19f Eq
	if(var_37_bool == 0) goto Label_419; // 0x1a0 JumpB
	var_24_string = "r5_house2_01"; // 0x1a1 MovS
	return 0; // 0x1a2 Return
	
Label_419:
	var_24_string = ""; // 0x1a3 MovS
	return 0; // 0x1a4 Return
}


