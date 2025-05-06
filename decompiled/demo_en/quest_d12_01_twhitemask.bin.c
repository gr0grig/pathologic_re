task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xd7 PushI
	if(var_14_int == 0) goto Label_505; // 0xd8 JumpB
	func_897(); // 0xda NEW_2
	var_16_int = 16338; // 0xdc PushI
	var_17_bool = var_13_bool == var_16_int; // 0xdd Eq
	if(var_17_bool == 0) goto Label_228; // 0xde JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xdf PushV
	var_18_object = var_1_object; // 0xe0 MovT
	var_19_object = var_0_object; // 0xe1 MovT
	func_979(); // 0xe2 NEW_2
	
Label_228:
	var_22_int = 16349; // 0xe4 PushI
	var_23_bool = var_13_bool == var_22_int; // 0xe5 Eq
	if(var_23_bool == 0) goto Label_236; // 0xe6 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xe7 PushV
	var_24_object = var_1_object; // 0xe8 MovT
	var_25_object = var_0_object; // 0xe9 MovT
	func_979(); // 0xea NEW_2
	
Label_236:
	var_26_int = 16351; // 0xec PushI
	var_27_bool = var_13_bool == var_26_int; // 0xed Eq
	if(var_27_bool == 0) goto Label_244; // 0xee JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0xef PushV
	var_28_object = var_1_object; // 0xf0 MovT
	var_29_object = var_0_object; // 0xf1 MovT
	func_979(); // 0xf2 NEW_2
	
Label_244:
	var_30_int = 16322; // 0xf4 PushI
	var_31_bool = var_12_bool == var_30_int; // 0xf5 Eq
	if(var_31_bool == 0) goto Label_327; // 0xf6 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0xf7 PushV
	var_33_object = var_1_object; // 0xf8 MovT
	func_985(var_33_object); // 0xf9 NEW_2
	if(var_32_bool == 0) goto Label_282; // 0xfb JumpB
	var_40_object = Obj(); var_41_object = Obj(); // 0xfc PushV
	var_40_object = var_1_object; // 0xfd MovT
	var_41_object = var_0_object; // 0xfe MovT
	func_973(); // 0xff NEW_2
	var_44_object = Obj(); var_45_object = Obj(); // 0x101 PushV
	var_44_object = var_1_object; // 0x102 MovT
	var_45_object = var_0_object; // 0x103 MovT
	func_966(); // 0x104 NEW_2
	var_56_string = ""; // 0x106 PushV
	var_56_string = "Neutral"; // 0x107 MovS
	func_192(var_13_bool, var_56_string); // 0x108 NEW_2
	var_73_int = 515058; // 0x10a PushI
	SetMessage(var_73_int); // 0x10b TObjFunc
	ClearReplies(); // 0x10d TObjFunc
	var_74_int = 515059; // 0x10f PushI
	var_75_int = 16324; // 0x110 PushI
	var_76_int = 16323; // 0x111 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x112 TObjFunc
	var_77_int = 515072; // 0x114 PushI
	var_78_int = -1; // 0x115 PushI
	var_79_int = 16336; // 0x116 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x117 TObjFunc
	return 0; // 0x119 Return
	
Label_282:
	var_80_string = ""; // 0x11a PushV
	var_80_string = "Neutral"; // 0x11b MovS
	func_192(var_13_bool, var_80_string); // 0x11c NEW_2
	var_81_int = 515073; // 0x11e PushI
	SetMessage(var_81_int); // 0x11f TObjFunc
	ClearReplies(); // 0x121 TObjFunc
	var_82_bool = 0; var_83_object = Obj(); // 0x123 PushV
	var_83_object = var_1_object; // 0x124 MovT
	func_997(var_83_object); // 0x125 NEW_2
	if(var_82_bool == 0) goto Label_301; // 0x127 JumpB
	var_88_int = 515074; // 0x128 PushI
	var_89_int = 16339; // 0x129 PushI
	var_90_int = 16338; // 0x12a PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x12b TObjFunc
	
Label_301:
	var_91_bool = 0; var_92_object = Obj(); // 0x12d PushV
	var_92_object = var_1_object; // 0x12e MovT
	func_997(var_92_object); // 0x12f NEW_2
	if(var_91_bool == 0) goto Label_311; // 0x131 JumpB
	var_93_int = 515085; // 0x132 PushI
	var_94_int = 16341; // 0x133 PushI
	var_95_int = 16349; // 0x134 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x135 TObjFunc
	
Label_311:
	var_96_bool = 0; var_97_object = Obj(); // 0x137 PushV
	var_97_object = var_1_object; // 0x138 MovT
	func_997(var_97_object); // 0x139 NEW_2
	if(var_96_bool == 0) goto Label_321; // 0x13b JumpB
	var_98_int = 515086; // 0x13c PushI
	var_99_int = 16341; // 0x13d PushI
	var_100_int = 16351; // 0x13e PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x13f TObjFunc
	
Label_321:
	var_101_int = 515087; // 0x141 PushI
	var_102_int = -1; // 0x142 PushI
	var_103_int = 16353; // 0x143 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x144 TObjFunc
	return 0; // 0x146 Return
	
Label_327:
	var_104_int = 16339; // 0x147 PushI
	var_105_bool = var_12_bool == var_104_int; // 0x148 Eq
	if(var_105_bool == 0) goto Label_355; // 0x149 JumpB
	var_106_string = ""; // 0x14a PushV
	var_106_string = "Neutral"; // 0x14b MovS
	func_192(var_13_bool, var_106_string); // 0x14c NEW_2
	var_107_int = 515075; // 0x14e PushI
	SetMessage(var_107_int); // 0x14f TObjFunc
	ClearReplies(); // 0x151 TObjFunc
	var_108_int = 515076; // 0x153 PushI
	var_109_int = 16341; // 0x154 PushI
	var_110_int = 16340; // 0x155 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x156 TObjFunc
	var_111_int = 515081; // 0x158 PushI
	var_112_int = -1; // 0x159 PushI
	var_113_int = 16345; // 0x15a PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x15b TObjFunc
	var_114_int = 515082; // 0x15d PushI
	var_115_int = 16347; // 0x15e PushI
	var_116_int = 16346; // 0x15f PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_117_int = 16347; // 0x163 PushI
	var_118_bool = var_12_bool == var_117_int; // 0x164 Eq
	if(var_118_bool == 0) goto Label_373; // 0x165 JumpB
	var_119_string = ""; // 0x166 PushV
	var_119_string = "Neutral"; // 0x167 MovS
	func_192(var_13_bool, var_119_string); // 0x168 NEW_2
	var_120_int = 515083; // 0x16a PushI
	SetMessage(var_120_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_121_int = 515084; // 0x16f PushI
	var_122_int = 16341; // 0x170 PushI
	var_123_int = 16348; // 0x171 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x172 TObjFunc
	return 0; // 0x174 Return
	
Label_373:
	var_124_int = 16341; // 0x175 PushI
	var_125_bool = var_12_bool == var_124_int; // 0x176 Eq
	if(var_125_bool == 0) goto Label_401; // 0x177 JumpB
	var_126_string = ""; // 0x178 PushV
	var_126_string = "Neutral"; // 0x179 MovS
	func_192(var_13_bool, var_126_string); // 0x17a NEW_2
	var_127_int = 515077; // 0x17c PushI
	SetMessage(var_127_int); // 0x17d TObjFunc
	ClearReplies(); // 0x17f TObjFunc
	var_128_int = 515078; // 0x181 PushI
	var_129_int = -1; // 0x182 PushI
	var_130_int = 16342; // 0x183 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x184 TObjFunc
	var_131_int = 515079; // 0x186 PushI
	var_132_int = -1; // 0x187 PushI
	var_133_int = 16343; // 0x188 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x189 TObjFunc
	var_134_int = 515080; // 0x18b PushI
	var_135_int = -1; // 0x18c PushI
	var_136_int = 16344; // 0x18d PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_137_int = 16324; // 0x191 PushI
	var_138_bool = var_12_bool == var_137_int; // 0x192 Eq
	if(var_138_bool == 0) goto Label_424; // 0x193 JumpB
	var_139_string = ""; // 0x194 PushV
	var_139_string = "Neutral"; // 0x195 MovS
	func_192(var_13_bool, var_139_string); // 0x196 NEW_2
	var_140_int = 515060; // 0x198 PushI
	SetMessage(var_140_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_141_int = 515071; // 0x19d PushI
	var_142_int = -1; // 0x19e PushI
	var_143_int = 16335; // 0x19f PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x1a0 TObjFunc
	var_144_int = 515061; // 0x1a2 PushI
	var_145_int = 16326; // 0x1a3 PushI
	var_146_int = 16325; // 0x1a4 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x1a5 TObjFunc
	return 0; // 0x1a7 Return
	
Label_424:
	var_147_int = 16326; // 0x1a8 PushI
	var_148_bool = var_12_bool == var_147_int; // 0x1a9 Eq
	if(var_148_bool == 0) goto Label_447; // 0x1aa JumpB
	var_149_string = ""; // 0x1ab PushV
	var_149_string = "Neutral"; // 0x1ac MovS
	func_192(var_13_bool, var_149_string); // 0x1ad NEW_2
	var_150_int = 515062; // 0x1af PushI
	SetMessage(var_150_int); // 0x1b0 TObjFunc
	ClearReplies(); // 0x1b2 TObjFunc
	var_151_int = 515063; // 0x1b4 PushI
	var_152_int = 16328; // 0x1b5 PushI
	var_153_int = 16327; // 0x1b6 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x1b7 TObjFunc
	var_154_int = 515067; // 0x1b9 PushI
	var_155_int = 16332; // 0x1ba PushI
	var_156_int = 16331; // 0x1bb PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x1bc TObjFunc
	return 0; // 0x1be Return
	
Label_447:
	var_157_int = 16332; // 0x1bf PushI
	var_158_bool = var_12_bool == var_157_int; // 0x1c0 Eq
	if(var_158_bool == 0) goto Label_470; // 0x1c1 JumpB
	var_159_string = ""; // 0x1c2 PushV
	var_159_string = "Neutral"; // 0x1c3 MovS
	func_192(var_13_bool, var_159_string); // 0x1c4 NEW_2
	var_160_int = 515068; // 0x1c6 PushI
	SetMessage(var_160_int); // 0x1c7 TObjFunc
	ClearReplies(); // 0x1c9 TObjFunc
	var_161_int = 515069; // 0x1cb PushI
	var_162_int = -1; // 0x1cc PushI
	var_163_int = 16333; // 0x1cd PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x1ce TObjFunc
	var_164_int = 515070; // 0x1d0 PushI
	var_165_int = -1; // 0x1d1 PushI
	var_166_int = 16334; // 0x1d2 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x1d3 TObjFunc
	return 0; // 0x1d5 Return
	
Label_470:
	var_167_int = 16328; // 0x1d6 PushI
	var_168_bool = var_12_bool == var_167_int; // 0x1d7 Eq
	if(var_168_bool == 0) goto Label_493; // 0x1d8 JumpB
	var_169_string = ""; // 0x1d9 PushV
	var_169_string = "Neutral"; // 0x1da MovS
	func_192(var_13_bool, var_169_string); // 0x1db NEW_2
	var_170_int = 515064; // 0x1dd PushI
	SetMessage(var_170_int); // 0x1de TObjFunc
	ClearReplies(); // 0x1e0 TObjFunc
	var_171_int = 515065; // 0x1e2 PushI
	var_172_int = -1; // 0x1e3 PushI
	var_173_int = 16329; // 0x1e4 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1e5 TObjFunc
	var_174_int = 515066; // 0x1e7 PushI
	var_175_int = -1; // 0x1e8 PushI
	var_176_int = 16330; // 0x1e9 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x1ea TObjFunc
	return 0; // 0x1ec Return
	
Label_493:
	var_3_string = 1; // 0x1ed TMovB
	var_177_bool = 0; // 0x1ee PushV
	func_1034(var_177_bool); // 0x1ef NEW_2
	if(var_177_bool == 0) goto Label_501; // 0x1f1 JumpB
	lshStopAnimation(); // 0x1f2 Func
	goto Label_503; // 0x1f4 Jump
	
Label_503:
	return 0; // 0x1f7 Return
	
Label_501:
	StopAnimation(); // 0x1f5 Func
	
Label_505:
	return 0; // 0x1f9 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_657(var_11_bool, var_12_object); // 0x202 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x204 PushV
	var_17_object = var_12_object; // 0x205 Mov
	TaskCall(0); // 0x206 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x207 NEW_2
	TaskReturn(); // 0x208 TaskReturn
	return 0; // 0x20a Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x232 PushS
	var_14_bool = var_12_string == var_13_string; // 0x233 Eq
	if(var_14_bool == 0) goto Label_568; // 0x234 JumpB
	func_541(var_12_string); // 0x236 NEW_2
	
Label_568:
	return 0; // 0x238 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x239 PushT
	if(var_12_int == 0) goto Label_574; // 0x23a JumpB
	func_657(var_10_bool, var_11_bool); // 0x23c NEW_2
	
Label_574:
	var_16_bool = 0; // 0x23e PushV
	var_16_bool = 0; // 0x23f MovB
	var_17_int = var_5_int; // 0x240 PushT
	if(var_17_int == 0) goto Label_583; // 0x241 JumpB
	var_18_bool = 0; // 0x242 PushV
	func_590(var_18_bool); // 0x243 NEW_2
	if(var_18_bool == 0) goto Label_583; // 0x245 JumpB
	var_16_bool = 1; // 0x246 MovB
	
Label_583:
	if(var_16_bool == 0) goto Label_589; // 0x247 JumpB
	var_19_object = Obj(); // 0x248 PushV
	func_904(var_19_object); // 0x249 NEW_2
	RemoveActor(var_19_object); // 0x24b Func
	
Label_589:
	return 0; // 0x24d Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x27b PushI
	var_14_bool = var_12_int == var_13_int; // 0x27c Eq
	if(var_14_bool == 0) goto Label_656; // 0x27d JumpB
	var_15_bool = 0; // 0x27e PushV
	func_619(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x27f NEW_2
	if(var_15_bool == 0) goto Label_650; // 0x281 JumpB
	var_28_bool = var_2_object == 0; // 0x282 Not
	if(var_28_bool == 0) goto Label_649; // 0x283 JumpB
	var_29_object = Obj(); // 0x284 PushV
	var_29_object = var_4_bool; // 0x285 MovT
	func_886(var_29_object); // 0x286 NEW_2
	var_2_object = 1; // 0x288 TMovB
	
Label_649:
	goto Label_656; // 0x289 Jump
	
Label_656:
	return 0; // 0x290 Return
	
Label_650:
	var_36_object = var_2_object; // 0x28a PushT
	if(var_36_object == 0) goto Label_656; // 0x28b JumpB
	var_37_string = "head"; // 0x28c PushS
	UnlookAsync(var_37_string); // 0x28d Func
	var_2_object = 0; // 0x28f TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x1fa PushV
	var_12_float = 300; // 0x1fb MovI
	var_13_float = 100; // 0x1fc MovI
	func_523(var_11_bool, var_12_float, var_13_float); // 0x1fd NEW_2
	return 0; // 0x1ff Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_770(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_1028(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_1026(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_1030(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_1032(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_1009(var_78_int); // 0x22 NEW_2
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
	var_184_bool = var_26_bool == 0; // 0x38 Not
	if(var_184_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_185_object = Obj(); // 0x3f PushV
	var_185_object = var_17_object; // 0x40 Mov
	func_838(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_897()
{
	var_15_bool = 0; // 0x381 PushV
	func_1034(var_15_bool); // 0x382 NEW_2
	if(var_15_bool == 0) goto Label_903; // 0x384 JumpB
	lshStopSpeech(); // 0x385 Func
	
Label_903:
	return 0; // 0x387 Return
}


func_770(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x302 PushV
	GetPosition(var_40_cvector); // 0x303 ObjFunc
	GetEyesHeight(var_39_float); // 0x305 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x307 PushE
	var_48_float = var_48_float + var_39_float; // 0x308 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x309 PopE
	GetPosition(var_41_cvector); // 0x30a Func
	GetEyesHeight(var_39_float); // 0x30c Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x30e PushE
	var_49_float = var_49_float + var_39_float; // 0x30f Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x310 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x311 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x312 PushE
	var_50_float = 0; // 0x313 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x314 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x315 Or
	var_52_float = sqrt(var_51_int); // 0x316 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x317 Div2
	var_43_cvector = -var_42_cvector; // 0x318 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x319 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x31a PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x31b PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x31c Xor2
	func_910(var_54_cvector, var_55_cvector); // 0x31d NEW_2
	var_62_int = 25; // 0x31f PushI
	var_63_float = var_54_cvector * var_62_int; // 0x320 Mult
	var_64_int = var_53_float + var_63_float; // 0x321 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x322 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x323 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x324 Add2
	IsOverrideActive(var_46_bool); // 0x325 Func
	var_66_bool = var_46_bool; // 0x327 Push
	if(var_66_bool == 0) goto Label_811; // 0x328 JumpB
	var_27_bool = 0; // 0x329 MovB
	return 18; // 0x32a Return
	
Label_811:
	StopWorld(); // 0x32b Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x32d Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x32f PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x330 PushE
	Rotate(var_67_float, var_68_float); // 0x331 Func
	var_69_bool = 0; // 0x333 PushV
	func_1034(var_69_bool); // 0x334 NEW_2
	if(var_69_bool == 0) goto Label_824; // 0x336 JumpB
	goto Label_832; // 0x337 Jump
	
Label_832:
	CameraWaitForPlayFinish(); // 0x340 Func
	ResumeWorld(); // 0x342 Func
	var_27_bool = 1; // 0x344 MovB
	return 18; // 0x345 Return
	
Label_824:
	var_70_string = "head"; // 0x338 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x339 Func
	var_71_bool = var_47_bool; // 0x33b Push
	if(var_71_bool == 0) goto Label_832; // 0x33c JumpB
	var_72_string = "head"; // 0x33d PushS
	LookAsyncCamera(var_72_string); // 0x33e Func
}


func_1026(var_75_int)
{
	var_75_int = 515569; // 0x402 MovI
	return 0; // 0x403 Return
}


func_1028(var_74_int)
{
	var_74_int = 503354; // 0x404 MovI
	return 0; // 0x405 Return
}


func_1030(var_76_string)
{
	var_76_string = "ui/NPC_wmask.png"; // 0x406 MovS
	return 0; // 0x407 Return
}


func_1032(var_77_string)
{
	var_77_string = "ui/NPC_wmask_b.png"; // 0x408 MovS
	return 0; // 0x409 Return
}


func_904(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x388 PushV
	self(var_21_object); // 0x389 Func
	var_19_object = var_21_object; // 0x38b Mov
	return 2; // 0x38c Return
}


func_1034(var_69_bool)
{
	var_69_bool = 0; // 0x40a MovB
	return 0; // 0x40b Return
}


func_523(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x20b PushV
	var_6_int = 0; // 0x20c TMovB
	
Label_525:
	var_18_int = 3; // 0x20d PushI
	rand(var_16_float, var_18_int); // 0x20e Func
	var_19_int = 3; // 0x210 PushI
	var_20_int = var_16_float + var_19_int; // 0x211 Add
	Sleep(var_20_int, var_17_bool); // 0x212 Func
	var_6_int = 1; // 0x214 TMovB
	var_21_float = 0; var_22_float = 0; // 0x215 PushV
	var_21_float = var_12_float; // 0x216 Mov
	var_22_float = var_13_float; // 0x217 Mov
	func_592(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x218 NEW_2
	var_6_int = 0; // 0x21a TMovB
	goto Label_525; // 0x21b Jump
}


func_910(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x38e PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x38f Or
	var_58_float = sqrt(var_59_int); // 0x390 Sqrt2
	var_60_float = 0.0; // 0x391 PushF
	var_61_bool = var_58_float < var_60_float; // 0x392 LT
	if(var_61_bool == 0) goto Label_918; // 0x393 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x394 MovV
	return 2; // 0x395 Return
	
Label_918:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x396 Div2
	return 2; // 0x397 Return
}


func_657(var_2_object, var_3_string)
{
	func_752(); // 0x292 NEW_2
	var_13_int = 10; // 0x294 PushI
	KillTimer(var_13_int); // 0x295 Func
	var_14_object = var_2_object; // 0x297 PushT
	if(var_14_object == 0) goto Label_669; // 0x298 JumpB
	var_15_string = "head"; // 0x299 PushS
	UnlookAsync(var_15_string); // 0x29a Func
	var_2_object = 0; // 0x29c TMovB
	
Label_669:
	var_3_string = 1; // 0x29d TMovB
	return 0; // 0x29e Return
}


func_920(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x398 PushV
	GetVariable(var_97_string, var_99_int); // 0x399 Func
	var_96_int = var_99_int; // 0x39b Mov
	return 2; // 0x39c Return
}


func_925(var_108_string, var_109_bool)
{
	var_110_object = Obj(); var_111_object = Obj(); // 0x39d PushV
	FindActor(var_111_object, var_108_string); // 0x39e Func
	var_112_bool = var_111_object == 0; // 0x3a0 Not
	if(var_112_bool == 0) goto Label_937; // 0x3a1 JumpB
	var_113_string = "Door "; // 0x3a2 PushS
	var_114_int = var_113_string + var_108_string; // 0x3a3 Add
	var_115_string = " not found"; // 0x3a4 PushS
	var_116_int = var_114_int + var_115_string; // 0x3a5 Add
	Trace(var_116_int); // 0x3a6 Func
	goto Label_940; // 0x3a8 Jump
	
Label_940:
	return 2; // 0x3ac Return
	
Label_937:
	var_117_string = "locked"; // 0x3a9 PushS
	SetProperty(var_117_string, var_109_bool); // 0x3aa ObjFunc
}


func_541(var_5_int)
{
	var_5_int = 1; // 0x21d TMovB
	var_15_bool = 0; // 0x21e PushV
	var_15_bool = 0; // 0x21f MovB
	var_16_bool = 0; // 0x220 PushV
	func_765(var_16_bool); // 0x221 NEW_2
	var_19_bool = var_16_bool == 0; // 0x223 Not
	if(var_19_bool == 0) goto Label_554; // 0x224 JumpB
	var_20_bool = 0; // 0x225 PushV
	func_590(var_20_bool); // 0x226 NEW_2
	if(var_20_bool == 0) goto Label_554; // 0x228 JumpB
	var_15_bool = 1; // 0x229 MovB
	
Label_554:
	if(var_15_bool == 0) goto Label_560; // 0x22a JumpB
	var_21_object = Obj(); // 0x22b PushV
	func_904(var_21_object); // 0x22c NEW_2
	RemoveActor(var_21_object); // 0x22e Func
	
Label_560:
	return 0; // 0x230 Return
}


func_671()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x29f PushV
	WaitForAnimEnd(); // 0x2a0 Func
	var_44_bool = 0; // 0x2a2 PushV
	func_765(var_44_bool); // 0x2a3 NEW_2
	var_45_bool = var_44_bool == 0; // 0x2a5 Not
	if(var_45_bool == 0) goto Label_680; // 0x2a6 JumpB
	return 14; // 0x2a7 Return
	
Label_680:
	var_46_int = 0; // 0x2a8 PushV
	func_949(var_46_int); // 0x2a9 NEW_2
	var_37_int = var_46_int; // 0x2aa Mov
	var_38_int = 0; // 0x2ac MovI
	
Label_685:
	var_59_bool = 0; // 0x2ad PushV
	var_59_bool = 0; // 0x2ae MovB
	var_60_int = 5; // 0x2af PushI
	var_61_bool = var_38_int < var_60_int; // 0x2b0 LT
	if(var_61_bool == 0) goto Label_695; // 0x2b1 JumpB
	var_62_bool = 0; // 0x2b2 PushV
	func_765(var_62_bool); // 0x2b3 NEW_2
	if(var_62_bool == 0) goto Label_695; // 0x2b5 JumpB
	var_59_bool = 1; // 0x2b6 MovB
	
Label_695:
	if(var_59_bool == 0) goto Label_747; // 0x2b7 JumpB
	var_63_int = 3; // 0x2b8 PushI
	irand(var_39_int, var_63_int); // 0x2b9 Func
	var_64_int = 0; // 0x2bb PushI
	var_65_bool = var_39_int == var_64_int; // 0x2bc Eq
	if(var_65_bool == 0) goto Label_719; // 0x2bd JumpB
	var_66_int = var_37_int; // 0x2be Push
	if(var_66_int == 0) goto Label_718; // 0x2bf JumpB
	irand(var_40_int, var_37_int); // 0x2c0 Func
	var_67_string = "all"; // 0x2c2 PushS
	var_68_string = ""; var_69_int = 0; // 0x2c3 PushV
	var_69_int = var_40_int; // 0x2c4 Mov
	func_942(var_68_string, var_69_int); // 0x2c5 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x2c7 Func
	WaitForAnimEnd(var_41_bool); // 0x2c9 Func
	var_70_bool = var_41_bool == 0; // 0x2cb Not
	if(var_70_bool == 0) goto Label_718; // 0x2cc JumpB
	goto Label_747; // 0x2cd Jump
	
Label_747:
	ResetAAS(); // 0x2eb Func
	return 14; // 0x2ed Return
	
Label_718:
	goto Label_736; // 0x2ce Jump
	
Label_736:
	var_71_bool = 0; // 0x2e0 PushV
	func_750(var_71_bool); // 0x2e1 NEW_2
	var_72_bool = var_71_bool == 0; // 0x2e3 Not
	if(var_72_bool == 0) goto Label_742; // 0x2e4 JumpB
	goto Label_747; // 0x2e5 Jump
	
Label_742:
	ResetAAS(); // 0x2e6 Func
	var_73_int = 1; // 0x2e8 PushI
	var_38_int = var_38_int + var_73_int; // 0x2e9 Add2
	goto Label_685; // 0x2ea Jump
	
Label_719:
	var_74_int = 1; // 0x2cf PushI
	var_75_bool = var_39_int == var_74_int; // 0x2d0 Eq
	if(var_75_bool == 0) goto Label_733; // 0x2d1 JumpB
	var_76_int = 4; // 0x2d2 PushI
	rand(var_42_float, var_76_int); // 0x2d3 Func
	var_77_int = 1; // 0x2d5 PushI
	var_78_int = var_42_float + var_77_int; // 0x2d6 Add
	Sleep(var_78_int, var_43_bool); // 0x2d7 Func
	var_79_bool = var_43_bool == 0; // 0x2d9 Not
	if(var_79_bool == 0) goto Label_732; // 0x2da JumpB
	goto Label_747; // 0x2db Jump
	
Label_732:
	goto Label_736; // 0x2dc Jump
	
Label_733:
	var_80_int = var_38_int; // 0x2dd Push
	if(var_80_int == 0) goto Label_736; // 0x2de JumpB
	goto Label_747; // 0x2df Jump
}


func_942(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x3ae PushV
	var_55_string = "idle"; // 0x3af MovS
	var_56_int = var_53_int; // 0x3b0 Push
	if(var_56_int == 0) goto Label_947; // 0x3b1 JumpB
	var_55_string = var_55_string + var_53_int; // 0x3b2 Add2
	
Label_947:
	var_52_string = var_55_string; // 0x3b3 Mov
	return 2; // 0x3b4 Return
}


func_949(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x3b5 PushV
	var_49_int = 0; // 0x3b6 MovI
	
Label_951:
	var_51_string = "all"; // 0x3b7 PushS
	var_52_string = ""; var_53_int = 0; // 0x3b8 PushV
	var_53_int = var_49_int; // 0x3b9 Mov
	func_942(var_52_string, var_53_int); // 0x3ba NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x3bc Func
	var_57_bool = var_50_bool == 0; // 0x3be Not
	if(var_57_bool == 0) goto Label_961; // 0x3bf JumpB
	goto Label_964; // 0x3c0 Jump
	
Label_964:
	var_46_int = var_49_int; // 0x3c4 Mov
	return 4; // 0x3c5 Return
	
Label_961:
	var_58_int = 1; // 0x3c1 PushI
	var_49_int = var_49_int + var_58_int; // 0x3c2 Add2
	goto Label_951; // 0x3c3 Jump
}


func_192(var_2_object, var_118_string)
{
	var_119_bool = 0; // 0xc1 PushV
	func_1034(var_119_bool); // 0xc2 NEW_2
	var_120_bool = var_119_bool == 0; // 0xc4 Not
	if(var_120_bool == 0) goto Label_199; // 0xc5 JumpB
	return 0; // 0xc6 Return
	
Label_199:
	var_121_bool = var_118_string == var_2_object; // 0xc7 Eq
	if(var_121_bool == 0) goto Label_202; // 0xc8 JumpB
	return 0; // 0xc9 Return
	
Label_202:
	var_122_string = ""; var_123_bool = 0; // 0xca PushV
	var_122_string = var_118_string; // 0xcb Mov
	var_124_string = ""; // 0xcc PushS
	var_125_bool = var_118_string == var_124_string; // 0xcd Eq
	if(var_125_bool == 0) goto Label_209; // 0xce JumpB
	var_123_bool = 0; // 0xcf MovB
	goto Label_210; // 0xd0 Jump
	
Label_210:
	func_871(var_122_string, var_123_bool); // 0xd2 NEW_2
	var_2_object = var_118_string; // 0xd4 TMov
	return 0; // 0xd5 Return
	
Label_209:
	var_123_bool = 1; // 0xd1 MovB
}


func_838()
{
	var_186_bool = 0; var_187_bool = 0; // 0x346 PushV
	CameraSwitchToNormal(); // 0x347 Func
	var_188_bool = 0; // 0x349 PushV
	func_1034(var_188_bool); // 0x34a NEW_2
	if(var_188_bool == 0) goto Label_846; // 0x34c JumpB
	goto Label_854; // 0x34d Jump
	
Label_854:
	return 2; // 0x356 Return
	
Label_846:
	var_189_string = "head"; // 0x34e PushS
	HasAnimationTrack(var_187_bool, var_189_string); // 0x34f Func
	var_190_bool = var_187_bool; // 0x351 Push
	if(var_190_bool == 0) goto Label_854; // 0x352 JumpB
	var_191_string = "head"; // 0x353 PushS
	UnlookAsync(var_191_string); // 0x354 Func
}


func_966()
{
	var_108_string = ""; var_109_bool = 0; // 0x3c7 PushV
	var_108_string = "itheater@door1"; // 0x3c8 MovS
	var_109_bool = 0; // 0x3c9 MovB
	func_925(var_108_string, var_109_bool); // 0x3ca NEW_2
	return 0; // 0x3cc Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_162; // 0x4f JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x50 PushV
	var_95_object = var_1_object; // 0x51 MovT
	func_985(var_95_object); // 0x52 NEW_2
	if(var_94_bool == 0) goto Label_115; // 0x54 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x55 PushV
	var_102_object = var_1_object; // 0x56 MovT
	var_103_object = var_0_object; // 0x57 MovT
	func_973(); // 0x58 NEW_2
	var_106_object = Obj(); var_107_object = Obj(); // 0x5a PushV
	var_106_object = var_1_object; // 0x5b MovT
	var_107_object = var_0_object; // 0x5c MovT
	func_966(); // 0x5d NEW_2
	var_118_string = ""; // 0x5f PushV
	var_118_string = "Neutral"; // 0x60 MovS
	func_192(var_88_object, var_118_string); // 0x61 NEW_2
	var_135_int = 515058; // 0x63 PushI
	SetMessage(var_135_int); // 0x64 TObjFunc
	ClearReplies(); // 0x66 TObjFunc
	var_136_int = 515059; // 0x68 PushI
	var_137_int = 16324; // 0x69 PushI
	var_138_int = 16323; // 0x6a PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x6b TObjFunc
	var_139_int = 515072; // 0x6d PushI
	var_140_int = -1; // 0x6e PushI
	var_141_int = 16336; // 0x6f PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x70 TObjFunc
	goto Label_162; // 0x72 Jump
	
Label_162:
	var_142_bool = 0; // 0xa2 PushV
	func_1034(var_142_bool); // 0xa3 NEW_2
	if(var_142_bool == 0) goto Label_177; // 0xa5 JumpB
	
Label_166:
	lshWaitForAnimEnd(); // 0xa6 Func
	var_143_string = var_3_string; // 0xa8 PushT
	if(var_143_string == 0) goto Label_171; // 0xa9 JumpB
	goto Label_176; // 0xaa Jump
	
Label_176:
	goto Label_191; // 0xb0 Jump
	
Label_191:
	return 0; // 0xbf Return
	
Label_171:
	var_144_string = ""; // 0xab PushV
	var_144_string = var_2_object; // 0xac MovT
	func_855(var_144_string); // 0xad NEW_2
	goto Label_166; // 0xaf Jump
	
Label_177:
	var_155_string = "all"; // 0xb1 PushS
	var_156_string = "idle"; // 0xb2 PushS
	PlayAnimation(var_155_string, var_156_string); // 0xb3 Func
	
Label_181:
	WaitForAnimEnd(); // 0xb5 Func
	var_157_string = var_3_string; // 0xb7 PushT
	if(var_157_string == 0) goto Label_186; // 0xb8 JumpB
	goto Label_191; // 0xb9 Jump
	
Label_186:
	var_158_string = "all"; // 0xba PushS
	var_159_string = "idle"; // 0xbb PushS
	PlayAnimation(var_158_string, var_159_string); // 0xbc Func
	goto Label_181; // 0xbe Jump
	
Label_115:
	var_160_string = ""; // 0x73 PushV
	var_160_string = "Neutral"; // 0x74 MovS
	func_192(var_88_object, var_160_string); // 0x75 NEW_2
	var_161_int = 515073; // 0x77 PushI
	SetMessage(var_161_int); // 0x78 TObjFunc
	ClearReplies(); // 0x7a TObjFunc
	var_162_bool = 0; var_163_object = Obj(); // 0x7c PushV
	var_163_object = var_1_object; // 0x7d MovT
	func_997(var_163_object); // 0x7e NEW_2
	if(var_162_bool == 0) goto Label_134; // 0x80 JumpB
	var_168_int = 515074; // 0x81 PushI
	var_169_int = 16339; // 0x82 PushI
	var_170_int = 16338; // 0x83 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x84 TObjFunc
	
Label_134:
	var_171_bool = 0; var_172_object = Obj(); // 0x86 PushV
	var_172_object = var_1_object; // 0x87 MovT
	func_997(var_172_object); // 0x88 NEW_2
	if(var_171_bool == 0) goto Label_144; // 0x8a JumpB
	var_173_int = 515085; // 0x8b PushI
	var_174_int = 16341; // 0x8c PushI
	var_175_int = 16349; // 0x8d PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x8e TObjFunc
	
Label_144:
	var_176_bool = 0; var_177_object = Obj(); // 0x90 PushV
	var_177_object = var_1_object; // 0x91 MovT
	func_997(var_177_object); // 0x92 NEW_2
	if(var_176_bool == 0) goto Label_154; // 0x94 JumpB
	var_178_int = 515086; // 0x95 PushI
	var_179_int = 16341; // 0x96 PushI
	var_180_int = 16351; // 0x97 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x98 TObjFunc
	
Label_154:
	var_181_int = 515087; // 0x9a PushI
	var_182_int = -1; // 0x9b PushI
	var_183_int = 16353; // 0x9c PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x9d TObjFunc
	goto Label_162; // 0x9f Jump
}


func_973()
{
	var_104_string = "ood12Whitemask1"; // 0x3ce PushS
	var_105_int = 1; // 0x3cf PushI
	SetVariable(var_104_string, var_105_int); // 0x3d0 Func
	return 0; // 0x3d2 Return
}


func_590(var_18_bool)
{
	var_18_bool = 1; // 0x24e MovB
	return 0; // 0x24f Return
}


func_592(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x251 PushV
	func_765(var_23_bool); // 0x252 NEW_2
	var_26_bool = var_23_bool == 0; // 0x254 Not
	if(var_26_bool == 0) goto Label_599; // 0x255 JumpB
	return 0; // 0x256 Return
	
Label_599:
	var_27_string = "player"; // 0x257 PushS
	FindActor(var_17_bool, var_27_string); // 0x258 Func
	var_2_object = 0; // 0x25a TMovB
	var_3_string = 0; // 0x25b TMovB
	var_0_object = var_21_float; // 0x25c TMov
	var_1_object = var_22_float; // 0x25d TMov
	var_28_int = 10; // 0x25e PushI
	var_29_float = 1.0; // 0x25f PushF
	SetTimer(var_28_int, var_29_float); // 0x260 Func
	func_671(); // 0x263 NEW_2
	var_81_bool = var_3_string == 0; // 0x265 Not
	if(var_81_bool == 0) goto Label_618; // 0x266 JumpB
	var_82_int = 10; // 0x267 PushI
	KillTimer(var_82_int); // 0x268 Func
	
Label_618:
	return 0; // 0x26a Return
}


func_979()
{
	var_20_string = "ood12Whitemask2"; // 0x3d4 PushS
	var_21_int = 1; // 0x3d5 PushI
	SetVariable(var_20_string, var_21_int); // 0x3d6 Func
	return 0; // 0x3d8 Return
}


func_855(var_144_string)
{
	var_145_bool = 0; var_146_float = 0; var_147_float = 0; var_148_bool = 0; var_149_float = 0; var_150_float = 0; // 0x357 PushV
	lshHasAnimation(var_148_bool, var_144_string); // 0x358 Func
	var_151_bool = var_148_bool; // 0x35a Push
	if(var_151_bool == 0) goto Label_866; // 0x35b JumpB
	lshGetAnimTimes(var_144_string, var_149_float, var_150_float); // 0x35c Func
	var_152_bool = 0; // 0x35e PushB
	lshPlayAnimation(var_149_float, var_150_float, var_152_bool); // 0x35f Func
	goto Label_870; // 0x361 Jump
	
Label_870:
	return 6; // 0x366 Return
	
Label_866:
	var_153_string = "Can't find lsh animation : "; // 0x362 PushS
	var_154_int = var_153_string + var_144_string; // 0x363 Add
	Trace(var_154_int); // 0x364 Func
}


func_985(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x3da PushV
	var_97_string = "ood12Whitemask1"; // 0x3db MovS
	func_920(var_96_int, var_97_string); // 0x3dc NEW_2
	var_100_int = 0; // 0x3de PushI
	var_101_bool = var_96_int == var_100_int; // 0x3df Eq
	if(var_101_bool == 0) goto Label_995; // 0x3e0 JumpB
	var_94_bool = 1; // 0x3e1 MovB
	return 0; // 0x3e2 Return
	
Label_995:
	var_94_bool = 0; // 0x3e3 MovB
	return 0; // 0x3e4 Return
}


func_997(var_162_bool)
{
	var_164_int = 0; var_165_string = ""; // 0x3e6 PushV
	var_165_string = "ood12Whitemask2"; // 0x3e7 MovS
	func_920(var_164_int, var_165_string); // 0x3e8 NEW_2
	var_166_int = 0; // 0x3ea PushI
	var_167_bool = var_164_int == var_166_int; // 0x3eb Eq
	if(var_167_bool == 0) goto Label_1007; // 0x3ec JumpB
	var_162_bool = 1; // 0x3ed MovB
	return 0; // 0x3ee Return
	
Label_1007:
	var_162_bool = 0; // 0x3ef MovB
	return 0; // 0x3f0 Return
}


func_871(var_122_string, var_123_bool)
{
	var_126_bool = 0; var_127_float = 0; var_128_float = 0; var_129_bool = 0; var_130_float = 0; var_131_float = 0; // 0x367 PushV
	lshHasAnimation(var_129_bool, var_122_string); // 0x368 Func
	var_132_bool = var_129_bool; // 0x36a Push
	if(var_132_bool == 0) goto Label_881; // 0x36b JumpB
	lshGetAnimTimes(var_122_string, var_130_float, var_131_float); // 0x36c Func
	lshPlayAnimation(var_130_float, var_131_float, var_123_bool); // 0x36e Func
	goto Label_885; // 0x370 Jump
	
Label_885:
	return 6; // 0x375 Return
	
Label_881:
	var_133_string = "Can't find lsh animation : "; // 0x371 PushS
	var_134_int = var_133_string + var_122_string; // 0x372 Add
	Trace(var_134_int); // 0x373 Func
}


func_619(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x26b PushV
	var_18_bool = var_4_bool == 0; // 0x26c NullEq
	if(var_18_bool == 0) goto Label_624; // 0x26d JumpB
	var_15_bool = 0; // 0x26e MovB
	return 2; // 0x26f Return
	
Label_624:
	var_19_float = 0; var_20_object = Obj(); // 0x270 PushV
	var_20_object = var_4_bool; // 0x271 MovT
	func_757(var_20_object); // 0x272 NEW_2
	var_17_float = sqrt(var_19_float); // 0x274 Sqrt2
	var_27_object = var_2_object; // 0x275 PushT
	if(var_27_object == 0) goto Label_632; // 0x276 JumpB
	var_17_float = var_17_float - var_1_object; // 0x277 Sub2
	
Label_632:
	var_15_bool = var_17_float < var_0_object; // 0x278 LT2
	return 2; // 0x279 Return
}


func_750(var_71_bool)
{
	var_71_bool = 1; // 0x2ee MovB
	return 0; // 0x2ef Return
}


func_752()
{
	StopAnimation(); // 0x2f0 Func
	StopGroup0(); // 0x2f2 Func
	return 0; // 0x2f4 Return
}


func_1009(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x3f1 PushV
	var_81_string = "branch"; // 0x3f2 PushS
	GetVariable(var_81_string, var_80_int); // 0x3f3 Func
	var_82_int = 0; // 0x3f5 PushI
	var_83_bool = var_80_int == var_82_int; // 0x3f6 Eq
	if(var_83_bool == 0) goto Label_1019; // 0x3f7 JumpB
	var_78_int = 1; // 0x3f8 MovI
	return 2; // 0x3f9 Return
	
Label_1019:
	var_84_int = 1; // 0x3fb PushI
	var_85_bool = var_80_int == var_84_int; // 0x3fc Eq
	if(var_85_bool == 0) goto Label_1024; // 0x3fd JumpB
	var_78_int = 2; // 0x3fe MovI
	return 2; // 0x3ff Return
	
Label_1024:
	var_78_int = 3; // 0x400 MovI
	return 2; // 0x401 Return
}


func_757(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x2f5 PushV
	GetPosition(var_24_cvector); // 0x2f6 Func
	GetPosition(var_25_cvector); // 0x2f8 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x2fa Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x2fb Or2
	return 6; // 0x2fc Return
}


func_886(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x376 PushV
	GetEyesHeight(var_32_float); // 0x377 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x379 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x37a PushE
	var_34_float = var_32_float; // 0x37b Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x37c PopE
	var_35_string = "head"; // 0x37d PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x37e Func
	return 4; // 0x380 Return
}


func_765(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x2fd PushV
	IsLoaded(var_25_bool); // 0x2fe Func
	var_23_bool = var_25_bool; // 0x300 Mov
	return 2; // 0x301 Return
}


