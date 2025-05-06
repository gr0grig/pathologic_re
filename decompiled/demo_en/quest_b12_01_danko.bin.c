task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xdf PushI
	if(var_8_int == 0) goto Label_546; // 0xe0 JumpB
	func_878(); // 0xe2 NEW_2
	var_10_int = 23345; // 0xe4 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xe5 Eq
	if(var_11_bool == 0) goto Label_236; // 0xe6 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xe7 PushV
	var_12_object = var_1_object; // 0xe8 MovT
	var_13_object = var_0_object; // 0xe9 MovT
	func_915(); // 0xea NEW_2
	
Label_236:
	var_16_int = 24219; // 0xec PushI
	var_17_bool = var_7_bool == var_16_int; // 0xed Eq
	if(var_17_bool == 0) goto Label_244; // 0xee JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xef PushV
	var_18_object = var_1_object; // 0xf0 MovT
	var_19_object = var_0_object; // 0xf1 MovT
	func_921(); // 0xf2 NEW_2
	
Label_244:
	var_22_int = 24228; // 0xf4 PushI
	var_23_bool = var_7_bool == var_22_int; // 0xf5 Eq
	if(var_23_bool == 0) goto Label_252; // 0xf6 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xf7 PushV
	var_24_object = var_1_object; // 0xf8 MovT
	var_25_object = var_0_object; // 0xf9 MovT
	func_927(); // 0xfa NEW_2
	
Label_252:
	var_28_int = 24237; // 0xfc PushI
	var_29_bool = var_7_bool == var_28_int; // 0xfd Eq
	if(var_29_bool == 0) goto Label_260; // 0xfe JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0xff PushV
	var_30_object = var_1_object; // 0x100 MovT
	var_31_object = var_0_object; // 0x101 MovT
	func_933(); // 0x102 NEW_2
	
Label_260:
	var_34_int = 23344; // 0x104 PushI
	var_35_bool = var_6_int == var_34_int; // 0x105 Eq
	if(var_35_bool == 0) goto Label_344; // 0x106 JumpB
	var_36_bool = 0; var_37_object = Obj(); // 0x107 PushV
	var_37_object = var_1_object; // 0x108 MovT
	func_939(var_37_object); // 0x109 NEW_2
	var_44_bool = var_36_bool == 0; // 0x10b Not
	if(var_44_bool == 0) goto Label_324; // 0x10c JumpB
	var_45_string = ""; // 0x10d PushV
	var_45_string = "Neutral"; // 0x10e MovS
	func_200(var_7_bool, var_45_string); // 0x10f NEW_2
	var_62_int = 522177; // 0x111 PushI
	SetMessage(var_62_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_63_bool = 0; var_64_object = Obj(); // 0x116 PushV
	var_64_object = var_1_object; // 0x117 MovT
	func_951(var_64_object); // 0x118 NEW_2
	if(var_63_bool == 0) goto Label_288; // 0x11a JumpB
	var_69_int = 522178; // 0x11b PushI
	var_70_int = 24218; // 0x11c PushI
	var_71_int = 23345; // 0x11d PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x11e TObjFunc
	
Label_288:
	var_72_bool = 0; var_73_object = Obj(); // 0x120 PushV
	var_73_object = var_1_object; // 0x121 MovT
	func_963(var_73_object); // 0x122 NEW_2
	if(var_72_bool == 0) goto Label_298; // 0x124 JumpB
	var_78_int = 523026; // 0x125 PushI
	var_79_int = 24220; // 0x126 PushI
	var_80_int = 24219; // 0x127 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x128 TObjFunc
	
Label_298:
	var_81_bool = 0; var_82_object = Obj(); // 0x12a PushV
	var_82_object = var_1_object; // 0x12b MovT
	func_975(var_82_object); // 0x12c NEW_2
	if(var_81_bool == 0) goto Label_308; // 0x12e JumpB
	var_87_int = 523035; // 0x12f PushI
	var_88_int = 24229; // 0x130 PushI
	var_89_int = 24228; // 0x131 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x132 TObjFunc
	
Label_308:
	var_90_bool = 0; var_91_object = Obj(); // 0x134 PushV
	var_91_object = var_1_object; // 0x135 MovT
	func_987(var_91_object); // 0x136 NEW_2
	if(var_90_bool == 0) goto Label_318; // 0x138 JumpB
	var_96_int = 523044; // 0x139 PushI
	var_97_int = 24238; // 0x13a PushI
	var_98_int = 24237; // 0x13b PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x13c TObjFunc
	
Label_318:
	var_99_int = 523028; // 0x13e PushI
	var_100_int = -1; // 0x13f PushI
	var_101_int = 24221; // 0x140 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x141 TObjFunc
	return 0; // 0x143 Return
	
Label_324:
	var_102_string = ""; // 0x144 PushV
	var_102_string = "Neutral"; // 0x145 MovS
	func_200(var_7_bool, var_102_string); // 0x146 NEW_2
	var_103_int = 523163; // 0x148 PushI
	SetMessage(var_103_int); // 0x149 TObjFunc
	ClearReplies(); // 0x14b TObjFunc
	var_104_int = 523164; // 0x14d PushI
	var_105_int = -1; // 0x14e PushI
	var_106_int = 24366; // 0x14f PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x150 TObjFunc
	var_107_int = 523174; // 0x152 PushI
	var_108_int = -1; // 0x153 PushI
	var_109_int = 24376; // 0x154 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x155 TObjFunc
	return 0; // 0x157 Return
	
Label_344:
	var_110_int = 24238; // 0x158 PushI
	var_111_bool = var_6_int == var_110_int; // 0x159 Eq
	if(var_111_bool == 0) goto Label_362; // 0x15a JumpB
	var_112_string = ""; // 0x15b PushV
	var_112_string = "Menace"; // 0x15c MovS
	func_200(var_7_bool, var_112_string); // 0x15d NEW_2
	var_113_int = 523045; // 0x15f PushI
	SetMessage(var_113_int); // 0x160 TObjFunc
	ClearReplies(); // 0x162 TObjFunc
	var_114_int = 523046; // 0x164 PushI
	var_115_int = -1; // 0x165 PushI
	var_116_int = 24239; // 0x166 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x167 TObjFunc
	return 0; // 0x169 Return
	
Label_362:
	var_117_int = 24229; // 0x16a PushI
	var_118_bool = var_6_int == var_117_int; // 0x16b Eq
	if(var_118_bool == 0) goto Label_380; // 0x16c JumpB
	var_119_string = ""; // 0x16d PushV
	var_119_string = "Smile"; // 0x16e MovS
	func_200(var_7_bool, var_119_string); // 0x16f NEW_2
	var_120_int = 523036; // 0x171 PushI
	SetMessage(var_120_int); // 0x172 TObjFunc
	ClearReplies(); // 0x174 TObjFunc
	var_121_int = 523037; // 0x176 PushI
	var_122_int = 24231; // 0x177 PushI
	var_123_int = 24230; // 0x178 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x179 TObjFunc
	return 0; // 0x17b Return
	
Label_380:
	var_124_int = 24231; // 0x17c PushI
	var_125_bool = var_6_int == var_124_int; // 0x17d Eq
	if(var_125_bool == 0) goto Label_398; // 0x17e JumpB
	var_126_string = ""; // 0x17f PushV
	var_126_string = "Smile"; // 0x180 MovS
	func_200(var_7_bool, var_126_string); // 0x181 NEW_2
	var_127_int = 523038; // 0x183 PushI
	SetMessage(var_127_int); // 0x184 TObjFunc
	ClearReplies(); // 0x186 TObjFunc
	var_128_int = 523039; // 0x188 PushI
	var_129_int = 24233; // 0x189 PushI
	var_130_int = 24232; // 0x18a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x18b TObjFunc
	return 0; // 0x18d Return
	
Label_398:
	var_131_int = 24233; // 0x18e PushI
	var_132_bool = var_6_int == var_131_int; // 0x18f Eq
	if(var_132_bool == 0) goto Label_416; // 0x190 JumpB
	var_133_string = ""; // 0x191 PushV
	var_133_string = "Menace"; // 0x192 MovS
	func_200(var_7_bool, var_133_string); // 0x193 NEW_2
	var_134_int = 523040; // 0x195 PushI
	SetMessage(var_134_int); // 0x196 TObjFunc
	ClearReplies(); // 0x198 TObjFunc
	var_135_int = 523041; // 0x19a PushI
	var_136_int = -1; // 0x19b PushI
	var_137_int = 24234; // 0x19c PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x19d TObjFunc
	return 0; // 0x19f Return
	
Label_416:
	var_138_int = 24220; // 0x1a0 PushI
	var_139_bool = var_6_int == var_138_int; // 0x1a1 Eq
	if(var_139_bool == 0) goto Label_434; // 0x1a2 JumpB
	var_140_string = ""; // 0x1a3 PushV
	var_140_string = "Menace"; // 0x1a4 MovS
	func_200(var_7_bool, var_140_string); // 0x1a5 NEW_2
	var_141_int = 523027; // 0x1a7 PushI
	SetMessage(var_141_int); // 0x1a8 TObjFunc
	ClearReplies(); // 0x1aa TObjFunc
	var_142_int = 531982; // 0x1ac PushI
	var_143_int = -1; // 0x1ad PushI
	var_144_int = 33388; // 0x1ae PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x1af TObjFunc
	return 0; // 0x1b1 Return
	
Label_434:
	var_145_int = 24218; // 0x1b2 PushI
	var_146_bool = var_6_int == var_145_int; // 0x1b3 Eq
	if(var_146_bool == 0) goto Label_457; // 0x1b4 JumpB
	var_147_string = ""; // 0x1b5 PushV
	var_147_string = "Menace"; // 0x1b6 MovS
	func_200(var_7_bool, var_147_string); // 0x1b7 NEW_2
	var_148_int = 523025; // 0x1b9 PushI
	SetMessage(var_148_int); // 0x1ba TObjFunc
	ClearReplies(); // 0x1bc TObjFunc
	var_149_int = 523029; // 0x1be PushI
	var_150_int = 24223; // 0x1bf PushI
	var_151_int = 24222; // 0x1c0 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1c1 TObjFunc
	var_152_int = 538760; // 0x1c3 PushI
	var_153_int = 24223; // 0x1c4 PushI
	var_154_int = 40673; // 0x1c5 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x1c6 TObjFunc
	return 0; // 0x1c8 Return
	
Label_457:
	var_155_int = 24223; // 0x1c9 PushI
	var_156_bool = var_6_int == var_155_int; // 0x1ca Eq
	if(var_156_bool == 0) goto Label_475; // 0x1cb JumpB
	var_157_string = ""; // 0x1cc PushV
	var_157_string = "Menace"; // 0x1cd MovS
	func_200(var_7_bool, var_157_string); // 0x1ce NEW_2
	var_158_int = 523030; // 0x1d0 PushI
	SetMessage(var_158_int); // 0x1d1 TObjFunc
	ClearReplies(); // 0x1d3 TObjFunc
	var_159_int = 523034; // 0x1d5 PushI
	var_160_int = 24235; // 0x1d6 PushI
	var_161_int = 24227; // 0x1d7 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x1d8 TObjFunc
	return 0; // 0x1da Return
	
Label_475:
	var_162_int = 24235; // 0x1db PushI
	var_163_bool = var_6_int == var_162_int; // 0x1dc Eq
	if(var_163_bool == 0) goto Label_498; // 0x1dd JumpB
	var_164_string = ""; // 0x1de PushV
	var_164_string = "Menace"; // 0x1df MovS
	func_200(var_7_bool, var_164_string); // 0x1e0 NEW_2
	var_165_int = 523042; // 0x1e2 PushI
	SetMessage(var_165_int); // 0x1e3 TObjFunc
	ClearReplies(); // 0x1e5 TObjFunc
	var_166_int = 523031; // 0x1e7 PushI
	var_167_int = 24225; // 0x1e8 PushI
	var_168_int = 24224; // 0x1e9 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x1ea TObjFunc
	var_169_int = 523033; // 0x1ec PushI
	var_170_int = 24240; // 0x1ed PushI
	var_171_int = 24226; // 0x1ee PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x1ef TObjFunc
	return 0; // 0x1f1 Return
	
Label_498:
	var_172_int = 24240; // 0x1f2 PushI
	var_173_bool = var_6_int == var_172_int; // 0x1f3 Eq
	if(var_173_bool == 0) goto Label_516; // 0x1f4 JumpB
	var_174_string = ""; // 0x1f5 PushV
	var_174_string = "Sorrow"; // 0x1f6 MovS
	func_200(var_7_bool, var_174_string); // 0x1f7 NEW_2
	var_175_int = 523047; // 0x1f9 PushI
	SetMessage(var_175_int); // 0x1fa TObjFunc
	ClearReplies(); // 0x1fc TObjFunc
	var_176_int = 523048; // 0x1fe PushI
	var_177_int = -1; // 0x1ff PushI
	var_178_int = 24241; // 0x200 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x201 TObjFunc
	return 0; // 0x203 Return
	
Label_516:
	var_179_int = 24225; // 0x204 PushI
	var_180_bool = var_6_int == var_179_int; // 0x205 Eq
	if(var_180_bool == 0) goto Label_534; // 0x206 JumpB
	var_181_string = ""; // 0x207 PushV
	var_181_string = "Sorrow"; // 0x208 MovS
	func_200(var_7_bool, var_181_string); // 0x209 NEW_2
	var_182_int = 523032; // 0x20b PushI
	SetMessage(var_182_int); // 0x20c TObjFunc
	ClearReplies(); // 0x20e TObjFunc
	var_183_int = 523043; // 0x210 PushI
	var_184_int = -1; // 0x211 PushI
	var_185_int = 24236; // 0x212 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x213 TObjFunc
	return 0; // 0x215 Return
	
Label_534:
	var_3_string = 1; // 0x216 TMovB
	var_186_bool = 0; // 0x217 PushV
	func_1024(var_186_bool); // 0x218 NEW_2
	if(var_186_bool == 0) goto Label_542; // 0x21a JumpB
	lshStopAnimation(); // 0x21b Func
	goto Label_544; // 0x21d Jump
	
Label_544:
	return 0; // 0x220 Return
	
Label_542:
	StopAnimation(); // 0x21e Func
	
Label_546:
	return 0; // 0x222 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x228 PushV
	var_8_object = var_6_object; // 0x229 Mov
	TaskCall(0); // 0x22a TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x22b NEW_2
	TaskReturn(); // 0x22c TaskReturn
	return 0; // 0x22e Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x233 PushV
	var_9_string = "cleanup"; // 0x234 PushS
	var_10_bool = var_6_string == var_9_string; // 0x235 Eq
	if(var_10_bool == 0) goto Label_586; // 0x236 JumpB
	var_0_object = 1; // 0x237 TMovB
	IsLoaded(var_8_bool); // 0x238 Func
	var_11_bool = 0; // 0x23a PushV
	var_11_bool = 0; // 0x23b MovB
	var_12_bool = var_8_bool == 0; // 0x23c Not
	if(var_12_bool == 0) goto Label_579; // 0x23d JumpB
	var_13_bool = 0; // 0x23e PushV
	func_607(var_13_bool); // 0x23f NEW_2
	if(var_13_bool == 0) goto Label_579; // 0x241 JumpB
	var_11_bool = 1; // 0x242 MovB
	
Label_579:
	if(var_11_bool == 0) goto Label_585; // 0x243 JumpB
	var_14_object = Obj(); // 0x244 PushV
	func_885(var_14_object); // 0x245 NEW_2
	RemoveActor(var_14_object); // 0x247 Func
	
Label_585:
	goto Label_590; // 0x249 Jump
	
Label_590:
	return 2; // 0x24e Return
	
Label_586:
	var_17_string = "restore"; // 0x24a PushS
	var_18_bool = var_6_string == var_17_string; // 0x24b Eq
	if(var_18_bool == 0) goto Label_590; // 0x24c JumpB
	var_0_object = 0; // 0x24d TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x24f PushV
	var_6_bool = 0; // 0x250 MovB
	var_7_object = var_0_object; // 0x251 PushT
	if(var_7_object == 0) goto Label_600; // 0x252 JumpB
	var_8_bool = 0; // 0x253 PushV
	func_607(var_8_bool); // 0x254 NEW_2
	if(var_8_bool == 0) goto Label_600; // 0x256 JumpB
	var_6_bool = 1; // 0x257 MovB
	
Label_600:
	if(var_6_bool == 0) goto Label_606; // 0x258 JumpB
	var_9_object = Obj(); // 0x259 PushV
	func_885(var_9_object); // 0x25a NEW_2
	RemoveActor(var_9_object); // 0x25c Func
	
Label_606:
	return 0; // 0x25e Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_559(); // 0x224 NEW_2
	return 0; // 0x226 Return
}


func_1024(var_60_bool)
{
	var_60_bool = 1; // 0x400 MovB
	return 0; // 0x401 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_609(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1018(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1016(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1020(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1022(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_999(var_69_int); // 0x22 NEW_2
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
	func_885(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_694(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_272_bool = var_17_bool == 0; // 0x3f Not
	if(var_272_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_273_object = Obj(); // 0x46 PushV
	var_273_object = var_8_object; // 0x47 Mov
	func_677(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_901(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x385 PushV
	GetVariable(var_183_string, var_185_int); // 0x386 Func
	var_182_int = var_185_int; // 0x388 Mov
	return 2; // 0x389 Return
}


func_906(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x38a PushV
	GetGameTime(var_135_float); // 0x38b Func
	var_136_int = 1; // 0x38d PushI
	var_137_int = 0; // 0x38e PushV
	var_138_int = 24; // 0x38f PushI
	var_137_int = var_135_float / var_135_float; // 0x390 Div2
	var_133_int = var_136_int + var_137_int; // 0x391 Add2
	return 2; // 0x392 Return
}


func_915()
{
	var_14_string = "oob12DankoSobor1"; // 0x394 PushS
	var_15_int = 1; // 0x395 PushI
	SetVariable(var_14_string, var_15_int); // 0x396 Func
	return 0; // 0x398 Return
}


func_789(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x315 PushV
	var_132_string = "d"; // 0x316 PushS
	var_133_int = 0; // 0x317 PushV
	func_906(var_133_int); // 0x318 NEW_2
	var_139_int = var_132_string + var_133_int; // 0x31a Add
	var_140_string = "m"; // 0x31b PushS
	var_127_string = var_139_int + var_140_string; // 0x31c Add2
	var_128_int = 0; // 0x31d MovI
	
Label_798:
	var_141_int = 1; // 0x31e PushI
	if(var_141_int == 0) goto Label_811; // 0x31f JumpB
	var_142_int = 1; // 0x320 PushI
	var_143_int = var_128_int + var_142_int; // 0x321 Add
	var_144_int = var_127_string + var_143_int; // 0x322 Add
	HasProperty(var_144_int, var_129_bool); // 0x323 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x325 Not
	if(var_145_bool == 0) goto Label_808; // 0x326 JumpB
	goto Label_811; // 0x327 Jump
	
Label_811:
	var_146_bool = var_128_int == 0; // 0x32b Not
	if(var_146_bool == 0) goto Label_815; // 0x32c JumpB
	var_120_bool = 0; // 0x32d MovB
	return 10; // 0x32e Return
	
Label_815:
	var_130_int = 0; // 0x32f MovI
	var_147_int = 1; // 0x330 PushI
	var_148_bool = var_128_int > var_147_int; // 0x331 GT
	if(var_148_bool == 0) goto Label_821; // 0x332 JumpB
	irand(var_130_int, var_128_int); // 0x333 Func
	
Label_821:
	var_149_int = 1; // 0x335 PushI
	var_150_int = var_130_int + var_149_int; // 0x336 Add
	var_151_int = var_127_string + var_150_int; // 0x337 Add
	GetProperty(var_151_int, var_131_string); // 0x338 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x33a PushV
	var_153_string = var_131_string; // 0x33b Mov
	func_863(var_152_bool, var_153_string); // 0x33c NEW_2
	var_120_bool = var_152_bool; // 0x33d Mov
	return 10; // 0x33f Return
	
Label_808:
	var_154_int = 1; // 0x328 PushI
	var_128_int = var_128_int + var_154_int; // 0x329 Add2
	goto Label_798; // 0x32a Jump
}


func_921()
{
	var_20_string = "oob12DankoSobor2"; // 0x39a PushS
	var_21_int = 1; // 0x39b PushI
	SetVariable(var_20_string, var_21_int); // 0x39c Func
	return 0; // 0x39e Return
}


func_927()
{
	var_26_string = "oob12DankoSobor3"; // 0x3a0 PushS
	var_27_int = 1; // 0x3a1 PushI
	SetVariable(var_26_string, var_27_int); // 0x3a2 Func
	return 0; // 0x3a4 Return
}


func_677()
{
	var_274_bool = 0; var_275_bool = 0; // 0x2a5 PushV
	CameraSwitchToNormal(); // 0x2a6 Func
	var_276_bool = 0; // 0x2a8 PushV
	func_1024(var_276_bool); // 0x2a9 NEW_2
	if(var_276_bool == 0) goto Label_685; // 0x2ab JumpB
	goto Label_693; // 0x2ac Jump
	
Label_693:
	return 2; // 0x2b5 Return
	
Label_685:
	var_277_string = "head"; // 0x2ad PushS
	HasAnimationTrack(var_275_bool, var_277_string); // 0x2ae Func
	var_278_bool = var_275_bool; // 0x2b0 Push
	if(var_278_bool == 0) goto Label_693; // 0x2b1 JumpB
	var_279_string = "head"; // 0x2b2 PushS
	UnlookAsync(var_279_string); // 0x2b3 Func
}


func_933()
{
	var_32_string = "oob12DankoSobor4"; // 0x3a6 PushS
	var_33_int = 1; // 0x3a7 PushI
	SetVariable(var_32_string, var_33_int); // 0x3a8 Func
	return 0; // 0x3aa Return
}


func_939(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x3ac PushV
	var_183_string = "game_final"; // 0x3ad MovS
	func_901(var_182_int, var_183_string); // 0x3ae NEW_2
	var_186_int = 0; // 0x3b0 PushI
	var_187_bool = var_182_int != var_186_int; // 0x3b1 Neq
	if(var_187_bool == 0) goto Label_949; // 0x3b2 JumpB
	var_180_bool = 1; // 0x3b3 MovB
	return 0; // 0x3b4 Return
	
Label_949:
	var_180_bool = 0; // 0x3b5 MovB
	return 0; // 0x3b6 Return
}


func_559()
{
	
Label_559:
	Hold(); // 0x22f Func
	goto Label_559; // 0x231 Jump
}


func_694(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x2b6 PushV
	var_87_string = "voice_common"; // 0x2b7 PushS
	GetVariable(var_87_string, var_85_int); // 0x2b8 Func
	var_88_int = var_85_int; // 0x2ba Push
	if(var_88_int == 0) goto Label_732; // 0x2bb JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x2bc PushV
	var_90_object = var_79_object; // 0x2bd Mov
	func_752(var_90_object); // 0x2be NEW_2
	var_119_bool = var_89_bool == 0; // 0x2c0 Not
	if(var_119_bool == 0) goto Label_714; // 0x2c1 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x2c2 PushV
	var_121_object = var_79_object; // 0x2c3 Mov
	func_789(var_121_object); // 0x2c4 NEW_2
	var_155_bool = var_120_bool == 0; // 0x2c6 Not
	if(var_155_bool == 0) goto Label_714; // 0x2c7 JumpB
	var_78_bool = 0; // 0x2c8 MovB
	return 4; // 0x2c9 Return
	
Label_714:
	var_156_int = 2; // 0x2ca PushI
	irand(var_86_int, var_156_int); // 0x2cb Func
	var_157_int = var_86_int; // 0x2cd Push
	if(var_157_int == 0) goto Label_727; // 0x2ce JumpB
	var_158_string = "voice_common"; // 0x2cf PushS
	var_159_int = 1; // 0x2d0 PushI
	var_160_int = var_85_int + var_159_int; // 0x2d1 Add
	var_161_int = 3; // 0x2d2 PushI
	var_162_int = var_160_int / var_161_int; // 0x2d3 Mod
	SetVariable(var_158_string, var_162_int); // 0x2d4 Func
	goto Label_731; // 0x2d6 Jump
	
Label_731:
	goto Label_750; // 0x2db Jump
	
Label_750:
	var_78_bool = 1; // 0x2ee MovB
	return 4; // 0x2ef Return
	
Label_727:
	var_163_string = "voice_common"; // 0x2d7 PushS
	var_164_int = 0; // 0x2d8 PushI
	SetVariable(var_163_string, var_164_int); // 0x2d9 Func
	
Label_732:
	var_165_bool = 0; var_166_object = Obj(); // 0x2dc PushV
	var_166_object = var_79_object; // 0x2dd Mov
	func_789(var_166_object); // 0x2de NEW_2
	var_167_bool = var_165_bool == 0; // 0x2e0 Not
	if(var_167_bool == 0) goto Label_746; // 0x2e1 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x2e2 PushV
	var_169_object = var_79_object; // 0x2e3 Mov
	func_752(var_169_object); // 0x2e4 NEW_2
	var_170_bool = var_168_bool == 0; // 0x2e6 Not
	if(var_170_bool == 0) goto Label_746; // 0x2e7 JumpB
	var_78_bool = 0; // 0x2e8 MovB
	return 4; // 0x2e9 Return
	
Label_746:
	var_171_string = "voice_common"; // 0x2ea PushS
	var_172_int = 1; // 0x2eb PushI
	SetVariable(var_171_string, var_172_int); // 0x2ec Func
}


func_951(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0x3b8 PushV
	var_210_string = "oob12DankoSobor1"; // 0x3b9 MovS
	func_901(var_209_int, var_210_string); // 0x3ba NEW_2
	var_211_int = 0; // 0x3bc PushI
	var_212_bool = var_209_int == var_211_int; // 0x3bd Eq
	if(var_212_bool == 0) goto Label_961; // 0x3be JumpB
	var_207_bool = 1; // 0x3bf MovB
	return 0; // 0x3c0 Return
	
Label_961:
	var_207_bool = 0; // 0x3c1 MovB
	return 0; // 0x3c2 Return
}


func_832(var_248_string)
{
	var_249_bool = 0; var_250_float = 0; var_251_float = 0; var_252_bool = 0; var_253_float = 0; var_254_float = 0; // 0x340 PushV
	lshHasAnimation(var_252_bool, var_248_string); // 0x341 Func
	var_255_bool = var_252_bool; // 0x343 Push
	if(var_255_bool == 0) goto Label_843; // 0x344 JumpB
	lshGetAnimTimes(var_248_string, var_253_float, var_254_float); // 0x345 Func
	var_256_bool = 0; // 0x347 PushB
	lshPlayAnimation(var_253_float, var_254_float, var_256_bool); // 0x348 Func
	goto Label_847; // 0x34a Jump
	
Label_847:
	return 6; // 0x34f Return
	
Label_843:
	var_257_string = "Can't find lsh animation : "; // 0x34b PushS
	var_258_int = var_257_string + var_248_string; // 0x34c Add
	Trace(var_258_int); // 0x34d Func
}


func_963(var_216_bool)
{
	var_218_int = 0; var_219_string = ""; // 0x3c4 PushV
	var_219_string = "oob12DankoSobor2"; // 0x3c5 MovS
	func_901(var_218_int, var_219_string); // 0x3c6 NEW_2
	var_220_int = 0; // 0x3c8 PushI
	var_221_bool = var_218_int == var_220_int; // 0x3c9 Eq
	if(var_221_bool == 0) goto Label_973; // 0x3ca JumpB
	var_216_bool = 1; // 0x3cb MovB
	return 0; // 0x3cc Return
	
Label_973:
	var_216_bool = 0; // 0x3cd MovB
	return 0; // 0x3ce Return
}


func_200(var_2_object, var_189_string)
{
	var_190_bool = 0; // 0xc9 PushV
	func_1024(var_190_bool); // 0xca NEW_2
	var_191_bool = var_190_bool == 0; // 0xcc Not
	if(var_191_bool == 0) goto Label_207; // 0xcd JumpB
	return 0; // 0xce Return
	
Label_207:
	var_192_bool = var_189_string == var_2_object; // 0xcf Eq
	if(var_192_bool == 0) goto Label_210; // 0xd0 JumpB
	return 0; // 0xd1 Return
	
Label_210:
	var_193_string = ""; var_194_bool = 0; // 0xd2 PushV
	var_193_string = var_189_string; // 0xd3 Mov
	var_195_string = ""; // 0xd4 PushS
	var_196_bool = var_189_string == var_195_string; // 0xd5 Eq
	if(var_196_bool == 0) goto Label_217; // 0xd6 JumpB
	var_194_bool = 0; // 0xd7 MovB
	goto Label_218; // 0xd8 Jump
	
Label_218:
	func_848(var_193_string, var_194_bool); // 0xda NEW_2
	var_2_object = var_189_string; // 0xdc TMov
	return 0; // 0xdd Return
	
Label_217:
	var_194_bool = 1; // 0xd9 MovB
}


func_975(var_225_bool)
{
	var_227_int = 0; var_228_string = ""; // 0x3d0 PushV
	var_228_string = "oob12DankoSobor3"; // 0x3d1 MovS
	func_901(var_227_int, var_228_string); // 0x3d2 NEW_2
	var_229_int = 0; // 0x3d4 PushI
	var_230_bool = var_227_int == var_229_int; // 0x3d5 Eq
	if(var_230_bool == 0) goto Label_985; // 0x3d6 JumpB
	var_225_bool = 1; // 0x3d7 MovB
	return 0; // 0x3d8 Return
	
Label_985:
	var_225_bool = 0; // 0x3d9 MovB
	return 0; // 0x3da Return
}


func_848(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x350 PushV
	lshHasAnimation(var_200_bool, var_193_string); // 0x351 Func
	var_203_bool = var_200_bool; // 0x353 Push
	if(var_203_bool == 0) goto Label_858; // 0x354 JumpB
	lshGetAnimTimes(var_193_string, var_201_float, var_202_float); // 0x355 Func
	lshPlayAnimation(var_201_float, var_202_float, var_194_bool); // 0x357 Func
	goto Label_862; // 0x359 Jump
	
Label_862:
	return 6; // 0x35e Return
	
Label_858:
	var_204_string = "Can't find lsh animation : "; // 0x35a PushS
	var_205_int = var_204_string + var_193_string; // 0x35b Add
	Trace(var_205_int); // 0x35c Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_170; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_939(var_181_object); // 0x59 NEW_2
	var_188_bool = var_180_bool == 0; // 0x5b Not
	if(var_188_bool == 0) goto Label_148; // 0x5c JumpB
	var_189_string = ""; // 0x5d PushV
	var_189_string = "Neutral"; // 0x5e MovS
	func_200(var_174_object, var_189_string); // 0x5f NEW_2
	var_206_int = 522177; // 0x61 PushI
	SetMessage(var_206_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_207_bool = 0; var_208_object = Obj(); // 0x66 PushV
	var_208_object = var_1_object; // 0x67 MovT
	func_951(var_208_object); // 0x68 NEW_2
	if(var_207_bool == 0) goto Label_112; // 0x6a JumpB
	var_213_int = 522178; // 0x6b PushI
	var_214_int = 24218; // 0x6c PushI
	var_215_int = 23345; // 0x6d PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x6e TObjFunc
	
Label_112:
	var_216_bool = 0; var_217_object = Obj(); // 0x70 PushV
	var_217_object = var_1_object; // 0x71 MovT
	func_963(var_217_object); // 0x72 NEW_2
	if(var_216_bool == 0) goto Label_122; // 0x74 JumpB
	var_222_int = 523026; // 0x75 PushI
	var_223_int = 24220; // 0x76 PushI
	var_224_int = 24219; // 0x77 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x78 TObjFunc
	
Label_122:
	var_225_bool = 0; var_226_object = Obj(); // 0x7a PushV
	var_226_object = var_1_object; // 0x7b MovT
	func_975(var_226_object); // 0x7c NEW_2
	if(var_225_bool == 0) goto Label_132; // 0x7e JumpB
	var_231_int = 523035; // 0x7f PushI
	var_232_int = 24229; // 0x80 PushI
	var_233_int = 24228; // 0x81 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x82 TObjFunc
	
Label_132:
	var_234_bool = 0; var_235_object = Obj(); // 0x84 PushV
	var_235_object = var_1_object; // 0x85 MovT
	func_987(var_235_object); // 0x86 NEW_2
	if(var_234_bool == 0) goto Label_142; // 0x88 JumpB
	var_240_int = 523044; // 0x89 PushI
	var_241_int = 24238; // 0x8a PushI
	var_242_int = 24237; // 0x8b PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x8c TObjFunc
	
Label_142:
	var_243_int = 523028; // 0x8e PushI
	var_244_int = -1; // 0x8f PushI
	var_245_int = 24221; // 0x90 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x91 TObjFunc
	goto Label_170; // 0x93 Jump
	
Label_170:
	var_246_bool = 0; // 0xaa PushV
	func_1024(var_246_bool); // 0xab NEW_2
	if(var_246_bool == 0) goto Label_185; // 0xad JumpB
	
Label_174:
	lshWaitForAnimEnd(); // 0xae Func
	var_247_string = var_3_string; // 0xb0 PushT
	if(var_247_string == 0) goto Label_179; // 0xb1 JumpB
	goto Label_184; // 0xb2 Jump
	
Label_184:
	goto Label_199; // 0xb8 Jump
	
Label_199:
	return 0; // 0xc7 Return
	
Label_179:
	var_248_string = ""; // 0xb3 PushV
	var_248_string = var_2_object; // 0xb4 MovT
	func_832(var_248_string); // 0xb5 NEW_2
	goto Label_174; // 0xb7 Jump
	
Label_185:
	var_259_string = "all"; // 0xb9 PushS
	var_260_string = "idle"; // 0xba PushS
	PlayAnimation(var_259_string, var_260_string); // 0xbb Func
	
Label_189:
	WaitForAnimEnd(); // 0xbd Func
	var_261_string = var_3_string; // 0xbf PushT
	if(var_261_string == 0) goto Label_194; // 0xc0 JumpB
	goto Label_199; // 0xc1 Jump
	
Label_194:
	var_262_string = "all"; // 0xc2 PushS
	var_263_string = "idle"; // 0xc3 PushS
	PlayAnimation(var_262_string, var_263_string); // 0xc4 Func
	goto Label_189; // 0xc6 Jump
	
Label_148:
	var_264_string = ""; // 0x94 PushV
	var_264_string = "Neutral"; // 0x95 MovS
	func_200(var_174_object, var_264_string); // 0x96 NEW_2
	var_265_int = 523163; // 0x98 PushI
	SetMessage(var_265_int); // 0x99 TObjFunc
	ClearReplies(); // 0x9b TObjFunc
	var_266_int = 523164; // 0x9d PushI
	var_267_int = -1; // 0x9e PushI
	var_268_int = 24366; // 0x9f PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xa0 TObjFunc
	var_269_int = 523174; // 0xa2 PushI
	var_270_int = -1; // 0xa3 PushI
	var_271_int = 24376; // 0xa4 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xa5 TObjFunc
	goto Label_170; // 0xa7 Jump
}


func_987(var_234_bool)
{
	var_236_int = 0; var_237_string = ""; // 0x3dc PushV
	var_237_string = "oob12DankoSobor4"; // 0x3dd MovS
	func_901(var_236_int, var_237_string); // 0x3de NEW_2
	var_238_int = 0; // 0x3e0 PushI
	var_239_bool = var_236_int == var_238_int; // 0x3e1 Eq
	if(var_239_bool == 0) goto Label_997; // 0x3e2 JumpB
	var_234_bool = 1; // 0x3e3 MovB
	return 0; // 0x3e4 Return
	
Label_997:
	var_234_bool = 0; // 0x3e5 MovB
	return 0; // 0x3e6 Return
}


func_607(var_8_bool)
{
	var_8_bool = 1; // 0x25f MovB
	return 0; // 0x260 Return
}


func_863(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x35f PushV
	var_116_bool = 0; // 0x360 PushV
	func_1024(var_116_bool); // 0x361 NEW_2
	if(var_116_bool == 0) goto Label_876; // 0x363 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x364 Func
	var_117_bool = var_115_bool; // 0x366 Push
	if(var_117_bool == 0) goto Label_876; // 0x367 JumpB
	lshPlaySpeech(var_113_string); // 0x368 Func
	var_112_bool = 1; // 0x36a MovB
	return 2; // 0x36b Return
	
Label_876:
	var_112_bool = 0; // 0x36c MovB
	return 2; // 0x36d Return
}


func_609(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x261 PushV
	GetPosition(var_31_cvector); // 0x262 ObjFunc
	GetEyesHeight(var_30_float); // 0x264 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x266 PushE
	var_39_float = var_39_float + var_30_float; // 0x267 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x268 PopE
	GetPosition(var_32_cvector); // 0x269 Func
	GetEyesHeight(var_30_float); // 0x26b Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x26d PushE
	var_40_float = var_40_float + var_30_float; // 0x26e Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x26f PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x270 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x271 PushE
	var_41_float = 0; // 0x272 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x273 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x274 Or
	var_43_float = sqrt(var_42_int); // 0x275 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x276 Div2
	var_34_cvector = -var_33_cvector; // 0x277 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x278 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x279 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x27a PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x27b Xor2
	func_891(var_45_cvector, var_46_cvector); // 0x27c NEW_2
	var_53_int = 25; // 0x27e PushI
	var_54_float = var_45_cvector * var_53_int; // 0x27f Mult
	var_55_int = var_44_float + var_54_float; // 0x280 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x281 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x282 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x283 Add2
	IsOverrideActive(var_37_bool); // 0x284 Func
	var_57_bool = var_37_bool; // 0x286 Push
	if(var_57_bool == 0) goto Label_650; // 0x287 JumpB
	var_18_bool = 0; // 0x288 MovB
	return 18; // 0x289 Return
	
Label_650:
	StopWorld(); // 0x28a Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x28c Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x28e PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x28f PushE
	Rotate(var_58_float, var_59_float); // 0x290 Func
	var_60_bool = 0; // 0x292 PushV
	func_1024(var_60_bool); // 0x293 NEW_2
	if(var_60_bool == 0) goto Label_663; // 0x295 JumpB
	goto Label_671; // 0x296 Jump
	
Label_671:
	CameraWaitForPlayFinish(); // 0x29f Func
	ResumeWorld(); // 0x2a1 Func
	var_18_bool = 1; // 0x2a3 MovB
	return 18; // 0x2a4 Return
	
Label_663:
	var_61_string = "head"; // 0x297 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x298 Func
	var_62_bool = var_38_bool; // 0x29a Push
	if(var_62_bool == 0) goto Label_671; // 0x29b JumpB
	var_63_string = "head"; // 0x29c PushS
	LookAsyncCamera(var_63_string); // 0x29d Func
}


func_999(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x3e7 PushV
	var_72_string = "branch"; // 0x3e8 PushS
	GetVariable(var_72_string, var_71_int); // 0x3e9 Func
	var_73_int = 0; // 0x3eb PushI
	var_74_bool = var_71_int == var_73_int; // 0x3ec Eq
	if(var_74_bool == 0) goto Label_1009; // 0x3ed JumpB
	var_69_int = 1; // 0x3ee MovI
	return 2; // 0x3ef Return
	
Label_1009:
	var_75_int = 1; // 0x3f1 PushI
	var_76_bool = var_71_int == var_75_int; // 0x3f2 Eq
	if(var_76_bool == 0) goto Label_1014; // 0x3f3 JumpB
	var_69_int = 2; // 0x3f4 MovI
	return 2; // 0x3f5 Return
	
Label_1014:
	var_69_int = 3; // 0x3f6 MovI
	return 2; // 0x3f7 Return
}


func_878()
{
	var_9_bool = 0; // 0x36e PushV
	func_1024(var_9_bool); // 0x36f NEW_2
	if(var_9_bool == 0) goto Label_884; // 0x371 JumpB
	lshStopSpeech(); // 0x372 Func
	
Label_884:
	return 0; // 0x374 Return
}


func_752(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x2f0 PushV
	var_96_string = "c"; // 0x2f1 MovS
	var_97_int = 0; // 0x2f2 MovI
	
Label_755:
	var_101_int = 1; // 0x2f3 PushI
	if(var_101_int == 0) goto Label_768; // 0x2f4 JumpB
	var_102_int = 1; // 0x2f5 PushI
	var_103_int = var_97_int + var_102_int; // 0x2f6 Add
	var_104_int = var_96_string + var_103_int; // 0x2f7 Add
	HasProperty(var_104_int, var_98_bool); // 0x2f8 ObjFunc
	var_105_bool = var_98_bool == 0; // 0x2fa Not
	if(var_105_bool == 0) goto Label_765; // 0x2fb JumpB
	goto Label_768; // 0x2fc Jump
	
Label_768:
	var_106_bool = var_97_int == 0; // 0x300 Not
	if(var_106_bool == 0) goto Label_772; // 0x301 JumpB
	var_89_bool = 0; // 0x302 MovB
	return 10; // 0x303 Return
	
Label_772:
	var_99_int = 0; // 0x304 MovI
	var_107_int = 1; // 0x305 PushI
	var_108_bool = var_97_int > var_107_int; // 0x306 GT
	if(var_108_bool == 0) goto Label_778; // 0x307 JumpB
	irand(var_99_int, var_97_int); // 0x308 Func
	
Label_778:
	var_109_int = 1; // 0x30a PushI
	var_110_int = var_99_int + var_109_int; // 0x30b Add
	var_111_int = var_96_string + var_110_int; // 0x30c Add
	GetProperty(var_111_int, var_100_string); // 0x30d ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x30f PushV
	var_113_string = var_100_string; // 0x310 Mov
	func_863(var_112_bool, var_113_string); // 0x311 NEW_2
	var_89_bool = var_112_bool; // 0x312 Mov
	return 10; // 0x314 Return
	
Label_765:
	var_118_int = 1; // 0x2fd PushI
	var_97_int = var_97_int + var_118_int; // 0x2fe Add2
	goto Label_755; // 0x2ff Jump
}


func_885(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x375 PushV
	self(var_11_object); // 0x376 Func
	var_9_object = var_11_object; // 0x378 Mov
	return 2; // 0x379 Return
}


func_1016(var_66_int)
{
	var_66_int = 515573; // 0x3f8 MovI
	return 0; // 0x3f9 Return
}


func_1018(var_65_int)
{
	var_65_int = 504032; // 0x3fa MovI
	return 0; // 0x3fb Return
}


func_891(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x37b PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x37c Or
	var_49_float = sqrt(var_50_int); // 0x37d Sqrt2
	var_51_float = 0.0; // 0x37e PushF
	var_52_bool = var_49_float < var_51_float; // 0x37f LT
	if(var_52_bool == 0) goto Label_899; // 0x380 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x381 MovV
	return 2; // 0x382 Return
	
Label_899:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x383 Div2
	return 2; // 0x384 Return
}


func_1020(var_67_string)
{
	var_67_string = "ui/NPC_Bakalavr.png"; // 0x3fc MovS
	return 0; // 0x3fd Return
}


func_1022(var_68_string)
{
	var_68_string = "ui/NPC_Bakalavr_b.png"; // 0x3fe MovS
	return 0; // 0x3ff Return
}


