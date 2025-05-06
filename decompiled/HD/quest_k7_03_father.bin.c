task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xae PushI
	if(var_14_int == 0) goto Label_323; // 0xaf JumpB
	func_751(); // 0xb1 NEW_2
	var_16_int = 27665; // 0xb3 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xb4 Eq
	if(var_17_bool == 0) goto Label_192; // 0xb5 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xb6 PushV
	var_18_object = var_1_object; // 0xb7 MovT
	var_19_object = var_0_object; // 0xb8 MovT
	func_878(); // 0xb9 NEW_2
	var_49_object = Obj(); var_50_object = Obj(); // 0xbb PushV
	var_49_object = var_1_object; // 0xbc MovT
	var_50_object = var_0_object; // 0xbd MovT
	func_901(); // 0xbe NEW_2
	
Label_192:
	var_53_int = 30081; // 0xc0 PushI
	var_54_bool = var_13_bool == var_53_int; // 0xc1 Eq
	if(var_54_bool == 0) goto Label_205; // 0xc2 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xc3 PushV
	var_55_object = var_1_object; // 0xc4 MovT
	var_56_object = var_0_object; // 0xc5 MovT
	func_891(); // 0xc6 NEW_2
	var_71_object = Obj(); var_72_object = Obj(); // 0xc8 PushV
	var_71_object = var_1_object; // 0xc9 MovT
	var_72_object = var_0_object; // 0xca MovT
	func_871(var_72_object); // 0xcb NEW_2
	
Label_205:
	var_111_int = 27662; // 0xcd PushI
	var_112_bool = var_12_bool == var_111_int; // 0xce Eq
	if(var_112_bool == 0) goto Label_247; // 0xcf JumpB
	var_113_string = ""; // 0xd0 PushV
	var_113_string = "Neutral"; // 0xd1 MovS
	func_151(var_13_bool, var_113_string); // 0xd2 NEW_2
	var_130_int = 526382; // 0xd4 PushI
	SetMessage(var_130_int); // 0xd5 TObjFunc
	ClearReplies(); // 0xd7 TObjFunc
	var_131_bool = 0; // 0xd9 PushV
	var_131_bool = 0; // 0xda MovB
	var_132_bool = 0; var_133_object = Obj(); // 0xdb PushV
	var_133_object = var_1_object; // 0xdc MovT
	func_907(var_133_object); // 0xdd NEW_2
	if(var_132_bool == 0) goto Label_230; // 0xdf JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0xe0 PushV
	var_141_object = var_1_object; // 0xe1 MovT
	func_919(var_140_bool, var_141_object); // 0xe2 NEW_2
	if(var_140_bool == 0) goto Label_230; // 0xe4 JumpB
	var_131_bool = 1; // 0xe5 MovB
	
Label_230:
	if(var_131_bool == 0) goto Label_236; // 0xe6 JumpB
	var_149_int = 526383; // 0xe7 PushI
	var_150_int = 27664; // 0xe8 PushI
	var_151_int = 27663; // 0xe9 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0xea TObjFunc
	
Label_236:
	var_152_int = 526386; // 0xec PushI
	var_153_int = -1; // 0xed PushI
	var_154_int = 27666; // 0xee PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0xef TObjFunc
	var_155_int = 528664; // 0xf1 PushI
	var_156_int = -1; // 0xf2 PushI
	var_157_int = 30075; // 0xf3 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0xf4 TObjFunc
	return 0; // 0xf6 Return
	
Label_247:
	var_158_int = 27664; // 0xf7 PushI
	var_159_bool = var_12_bool == var_158_int; // 0xf8 Eq
	if(var_159_bool == 0) goto Label_270; // 0xf9 JumpB
	var_160_string = ""; // 0xfa PushV
	var_160_string = "Neutral"; // 0xfb MovS
	func_151(var_13_bool, var_160_string); // 0xfc NEW_2
	var_161_int = 526384; // 0xfe PushI
	SetMessage(var_161_int); // 0xff TObjFunc
	ClearReplies(); // 0x101 TObjFunc
	var_162_int = 528665; // 0x103 PushI
	var_163_int = 30078; // 0x104 PushI
	var_164_int = 30076; // 0x105 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x106 TObjFunc
	var_165_int = 528666; // 0x108 PushI
	var_166_int = 30078; // 0x109 PushI
	var_167_int = 30077; // 0x10a PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x10b TObjFunc
	return 0; // 0x10d Return
	
Label_270:
	var_168_int = 30078; // 0x10e PushI
	var_169_bool = var_12_bool == var_168_int; // 0x10f Eq
	if(var_169_bool == 0) goto Label_293; // 0x110 JumpB
	var_170_string = ""; // 0x111 PushV
	var_170_string = "Neutral"; // 0x112 MovS
	func_151(var_13_bool, var_170_string); // 0x113 NEW_2
	var_171_int = 528667; // 0x115 PushI
	SetMessage(var_171_int); // 0x116 TObjFunc
	ClearReplies(); // 0x118 TObjFunc
	var_172_int = 528668; // 0x11a PushI
	var_173_int = 30082; // 0x11b PushI
	var_174_int = 30079; // 0x11c PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x11d TObjFunc
	var_175_int = 528669; // 0x11f PushI
	var_176_int = -1; // 0x120 PushI
	var_177_int = 30081; // 0x121 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x122 TObjFunc
	return 0; // 0x124 Return
	
Label_293:
	var_178_int = 30082; // 0x125 PushI
	var_179_bool = var_12_bool == var_178_int; // 0x126 Eq
	if(var_179_bool == 0) goto Label_311; // 0x127 JumpB
	var_180_string = ""; // 0x128 PushV
	var_180_string = "Neutral"; // 0x129 MovS
	func_151(var_13_bool, var_180_string); // 0x12a NEW_2
	var_181_int = 528670; // 0x12c PushI
	SetMessage(var_181_int); // 0x12d TObjFunc
	ClearReplies(); // 0x12f TObjFunc
	var_182_int = 526385; // 0x131 PushI
	var_183_int = -1; // 0x132 PushI
	var_184_int = 27665; // 0x133 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_3_string = 1; // 0x137 TMovB
	var_185_bool = 0; // 0x138 PushV
	func_1032(var_185_bool); // 0x139 NEW_2
	if(var_185_bool == 0) goto Label_319; // 0x13b JumpB
	lshStopAnimation(); // 0x13c Func
	goto Label_321; // 0x13e Jump
	
Label_321:
	return 0; // 0x141 Return
	
Label_319:
	StopAnimation(); // 0x13f Func
	
Label_323:
	return 0; // 0x143 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_475(var_11_bool, var_12_object); // 0x14c NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x14e PushV
	var_17_object = var_12_object; // 0x14f Mov
	TaskCall(0); // 0x150 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x151 NEW_2
	TaskReturn(); // 0x152 TaskReturn
	return 0; // 0x154 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x17c PushS
	var_14_bool = var_12_string == var_13_string; // 0x17d Eq
	if(var_14_bool == 0) goto Label_386; // 0x17e JumpB
	func_359(var_12_string); // 0x180 NEW_2
	
Label_386:
	return 0; // 0x182 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x183 PushT
	if(var_12_int == 0) goto Label_392; // 0x184 JumpB
	func_475(var_10_bool, var_11_bool); // 0x186 NEW_2
	
Label_392:
	var_16_bool = 0; // 0x188 PushV
	var_16_bool = 0; // 0x189 MovB
	var_17_int = var_5_int; // 0x18a PushT
	if(var_17_int == 0) goto Label_401; // 0x18b JumpB
	var_18_bool = 0; // 0x18c PushV
	func_408(var_18_bool); // 0x18d NEW_2
	if(var_18_bool == 0) goto Label_401; // 0x18f JumpB
	var_16_bool = 1; // 0x190 MovB
	
Label_401:
	if(var_16_bool == 0) goto Label_407; // 0x191 JumpB
	var_19_object = Obj(); // 0x192 PushV
	func_758(var_19_object); // 0x193 NEW_2
	RemoveActor(var_19_object); // 0x195 Func
	
Label_407:
	return 0; // 0x197 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1c5 PushI
	var_14_bool = var_12_int == var_13_int; // 0x1c6 Eq
	if(var_14_bool == 0) goto Label_474; // 0x1c7 JumpB
	var_15_bool = 0; // 0x1c8 PushV
	func_437(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1c9 NEW_2
	if(var_15_bool == 0) goto Label_468; // 0x1cb JumpB
	var_28_bool = var_2_object == 0; // 0x1cc Not
	if(var_28_bool == 0) goto Label_467; // 0x1cd JumpB
	var_29_object = Obj(); // 0x1ce PushV
	var_29_object = var_4_bool; // 0x1cf MovT
	func_740(var_29_object); // 0x1d0 NEW_2
	var_2_object = 1; // 0x1d2 TMovB
	
Label_467:
	goto Label_474; // 0x1d3 Jump
	
Label_474:
	return 0; // 0x1da Return
	
Label_468:
	var_36_object = var_2_object; // 0x1d4 PushT
	if(var_36_object == 0) goto Label_474; // 0x1d5 JumpB
	var_37_string = "head"; // 0x1d6 PushS
	UnlookAsync(var_37_string); // 0x1d7 Func
	var_2_object = 0; // 0x1d9 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x144 PushV
	var_12_float = 300; // 0x145 MovI
	var_13_float = 100; // 0x146 MovI
	func_341(var_11_bool, var_12_float, var_13_float); // 0x147 NEW_2
	return 0; // 0x149 Return
}


func_1024(var_76_int)
{
	var_76_int = 515564; // 0x400 MovI
	return 0; // 0x401 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_622(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_1026(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_1024(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_1028(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_1030(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_1007(var_79_int); // 0x22 NEW_2
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
	var_158_bool = var_26_bool == 0; // 0x38 Not
	if(var_158_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_159_object = Obj(); // 0x3f PushV
	var_159_object = var_17_object; // 0x40 Mov
	func_691(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1026(var_75_int)
{
	var_75_int = 503349; // 0x402 MovI
	return 0; // 0x403 Return
}


func_1028(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png"; // 0x404 MovS
	return 0; // 0x405 Return
}


func_901()
{
	var_51_string = "playsound"; // 0x386 PushS
	var_52_string = "giveitem"; // 0x387 PushS
	TriggerWorld(var_51_string, var_52_string); // 0x388 Func
	return 0; // 0x38a Return
}


func_1030(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png"; // 0x406 MovS
	return 0; // 0x407 Return
}


func_774(var_102_float, var_103_float, var_104_float, var_105_float)
{
	var_106_bool = var_103_float < var_104_float; // 0x307 LT
	if(var_106_bool == 0) goto Label_779; // 0x308 JumpB
	var_102_float = var_104_float; // 0x309 Mov
	return 0; // 0x30a Return
	
Label_779:
	var_107_bool = var_103_float > var_105_float; // 0x30b GT
	if(var_107_bool == 0) goto Label_783; // 0x30c JumpB
	var_102_float = var_105_float; // 0x30d Mov
	return 0; // 0x30e Return
	
Label_783:
	var_102_float = var_103_float; // 0x30f Mov
	return 0; // 0x310 Return
}


func_1032(var_70_bool)
{
	var_70_bool = 0; // 0x408 MovB
	return 0; // 0x409 Return
}


func_907(var_114_bool)
{
	var_116_int = 0; var_117_string = ""; // 0x38c PushV
	var_117_string = "k7q03"; // 0x38d MovS
	func_785(var_116_int, var_117_string); // 0x38e NEW_2
	var_120_int = 1; // 0x390 PushI
	var_121_bool = var_116_int == var_120_int; // 0x391 Eq
	if(var_121_bool == 0) goto Label_917; // 0x392 JumpB
	var_114_bool = 1; // 0x393 MovB
	return 0; // 0x394 Return
	
Label_917:
	var_114_bool = 0; // 0x395 MovB
	return 0; // 0x396 Return
}


func_785(var_116_int, var_117_string)
{
	var_118_int = 0; var_119_int = 0; // 0x311 PushV
	GetVariable(var_117_string, var_119_int); // 0x312 Func
	var_116_int = var_119_int; // 0x314 Mov
	return 2; // 0x315 Return
}


func_790(var_73_bool, var_74_object, var_75_float)
{
	var_76_bool = var_74_object == 0; // 0x317 Not
	if(var_76_bool == 0) goto Label_795; // 0x318 JumpB
	var_73_bool = 0; // 0x319 MovB
	return 0; // 0x31a Return
	
Label_795:
	var_77_int = 0; // 0x31b PushI
	var_78_bool = var_75_float > var_77_int; // 0x31c GT
	if(var_78_bool == 0) goto Label_802; // 0x31d JumpB
	var_79_int = 8; // 0x31e PushI
	SendWorldWndMessage(var_79_int); // 0x31f Func
	goto Label_811; // 0x321 Jump
	
Label_811:
	var_80_float = 0; // 0x32b PushV
	var_80_float = var_75_float; // 0x32c Mov
	func_825(var_80_float); // 0x32d NEW_2
	var_84_bool = 0; var_85_object = Obj(); var_86_string = ""; var_87_float = 0; var_88_float = 0; var_89_float = 0; // 0x32f PushV
	var_85_object = var_74_object; // 0x330 Mov
	var_86_string = "reputation"; // 0x331 MovS
	var_87_float = var_75_float; // 0x332 Mov
	var_88_float = 0; // 0x333 MovI
	var_89_float = 1; // 0x334 MovI
	func_595(var_84_bool, var_85_object, var_86_string, var_87_float, var_88_float, var_89_float); // 0x335 NEW_2
	var_73_bool = 1; // 0x337 MovB
	return 0; // 0x338 Return
	
Label_802:
	var_108_int = 0; // 0x322 PushI
	var_109_bool = var_75_float < var_108_int; // 0x323 LT
	if(var_109_bool == 0) goto Label_809; // 0x324 JumpB
	var_110_int = 9; // 0x325 PushI
	SendWorldWndMessage(var_110_int); // 0x326 Func
	goto Label_811; // 0x328 Jump
	
Label_809:
	var_73_bool = 0; // 0x329 MovB
	return 0; // 0x32a Return
}


func_919(var_122_bool, var_123_object)
{
	var_124_bool = 0; var_125_object = Obj(); // 0x398 PushV
	var_125_object = var_123_object; // 0x399 Mov
	func_929(var_125_object); // 0x39a NEW_2
	if(var_124_bool == 0) goto Label_927; // 0x39c JumpB
	var_122_bool = 1; // 0x39d MovB
	return 0; // 0x39e Return
	
Label_927:
	var_122_bool = 0; // 0x39f MovB
	return 0; // 0x3a0 Return
}


func_408(var_18_bool)
{
	var_18_bool = 1; // 0x198 MovB
	return 0; // 0x199 Return
}


func_151(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0x98 PushV
	func_1032(var_96_bool); // 0x99 NEW_2
	var_97_bool = var_96_bool == 0; // 0x9b Not
	if(var_97_bool == 0) goto Label_158; // 0x9c JumpB
	return 0; // 0x9d Return
	
Label_158:
	var_98_bool = var_95_string == var_2_object; // 0x9e Eq
	if(var_98_bool == 0) goto Label_161; // 0x9f JumpB
	return 0; // 0xa0 Return
	
Label_161:
	var_99_string = ""; var_100_bool = 0; // 0xa1 PushV
	var_99_string = var_95_string; // 0xa2 Mov
	var_101_string = ""; // 0xa3 PushS
	var_102_bool = var_95_string == var_101_string; // 0xa4 Eq
	if(var_102_bool == 0) goto Label_168; // 0xa5 JumpB
	var_100_bool = 0; // 0xa6 MovB
	goto Label_169; // 0xa7 Jump
	
Label_169:
	func_725(var_99_string, var_100_bool); // 0xa9 NEW_2
	var_2_object = var_95_string; // 0xab TMov
	return 0; // 0xac Return
	
Label_168:
	var_100_bool = 1; // 0xa8 MovB
}


func_410(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x19b PushV
	func_617(var_23_bool); // 0x19c NEW_2
	var_26_bool = var_23_bool == 0; // 0x19e Not
	if(var_26_bool == 0) goto Label_417; // 0x19f JumpB
	return 0; // 0x1a0 Return
	
Label_417:
	var_27_string = "player"; // 0x1a1 PushS
	FindActor(var_17_bool, var_27_string); // 0x1a2 Func
	var_2_object = 0; // 0x1a4 TMovB
	var_3_string = 0; // 0x1a5 TMovB
	var_0_object = var_21_float; // 0x1a6 TMov
	var_1_object = var_22_float; // 0x1a7 TMov
	var_28_int = 10; // 0x1a8 PushI
	var_29_float = 1.0; // 0x1a9 PushF
	SetTimer(var_28_int, var_29_float); // 0x1aa Func
	func_489(); // 0x1ad NEW_2
	var_81_bool = var_3_string == 0; // 0x1af Not
	if(var_81_bool == 0) goto Label_436; // 0x1b0 JumpB
	var_82_int = 10; // 0x1b1 PushI
	KillTimer(var_82_int); // 0x1b2 Func
	
Label_436:
	return 0; // 0x1b4 Return
}


func_929(var_124_bool)
{
	var_126_int = 0; var_127_int = 0; // 0x3a1 PushV
	var_128_string = "tvirin"; // 0x3a2 PushS
	GetItemCountOfType(var_127_int, var_128_string); // 0x3a3 ObjFunc
	var_129_int = 5; // 0x3a5 PushI
	var_130_bool = var_127_int >= var_129_int; // 0x3a6 GE
	if(var_130_bool == 0) goto Label_938; // 0x3a7 JumpB
	var_124_bool = 1; // 0x3a8 MovB
	return 2; // 0x3a9 Return
	
Label_938:
	var_124_bool = 0; // 0x3aa MovB
	return 2; // 0x3ab Return
}


func_940()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x3ac PushV
	var_59_int = 779; // 0x3ad PushI
	var_60_int = 2; // 0x3ae PushI
	var_61_int = 541759; // 0x3af PushI
	CreateDiaryEntry(var_58_object, var_59_int, var_60_int, var_61_int); // 0x3b0 Func
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0; // 0x3b2 PushV
	var_63_object = var_58_object; // 0x3b3 Mov
	var_64_int = 434; // 0x3b4 MovI
	func_979(var_62_bool, var_63_object, var_64_int); // 0x3b5 NEW_2
	return 2; // 0x3b7 Return
}


func_691()
{
	var_160_bool = 0; var_161_bool = 0; // 0x2b3 PushV
	var_162_bool = 1; // 0x2b4 PushB
	CameraSwitchToNormal(var_162_bool); // 0x2b5 Func
	var_163_bool = 0; // 0x2b7 PushV
	func_1032(var_163_bool); // 0x2b8 NEW_2
	if(var_163_bool == 0) goto Label_700; // 0x2ba JumpB
	goto Label_708; // 0x2bb Jump
	
Label_708:
	return 2; // 0x2c4 Return
	
Label_700:
	var_164_string = "head"; // 0x2bc PushS
	HasAnimationTrack(var_161_bool, var_164_string); // 0x2bd Func
	var_165_bool = var_161_bool; // 0x2bf Push
	if(var_165_bool == 0) goto Label_708; // 0x2c0 JumpB
	var_166_string = "head"; // 0x2c1 PushS
	UnlookAsync(var_166_string); // 0x2c2 Func
}


func_437(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1b5 PushV
	var_18_bool = var_4_bool == 0; // 0x1b6 NullEq
	if(var_18_bool == 0) goto Label_442; // 0x1b7 JumpB
	var_15_bool = 0; // 0x1b8 MovB
	return 2; // 0x1b9 Return
	
Label_442:
	var_19_float = 0; var_20_object = Obj(); // 0x1ba PushV
	var_20_object = var_4_bool; // 0x1bb MovT
	func_575(var_20_object); // 0x1bc NEW_2
	var_17_float = sqrt(var_19_float); // 0x1be Sqrt2
	var_27_object = var_2_object; // 0x1bf PushT
	if(var_27_object == 0) goto Label_450; // 0x1c0 JumpB
	var_17_float = var_17_float - var_1_object; // 0x1c1 Sub2
	
Label_450:
	var_15_bool = var_17_float < var_0_object; // 0x1c2 LT2
	return 2; // 0x1c3 Return
}


func_568(var_71_bool)
{
	var_71_bool = 1; // 0x238 MovB
	return 0; // 0x239 Return
}


func_825(var_80_float)
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x339 PushV
	CreateFloatVector(var_82_object); // 0x33a Func
	add(var_80_float); // 0x33c ObjFunc
	var_83_int = 16; // 0x33e PushI
	SendWorldWndMessage(var_83_int, var_82_object); // 0x33f Func
	return 2; // 0x341 Return
}


func_570()
{
	StopAnimation(); // 0x23a Func
	StopGroup0(); // 0x23c Func
	return 0; // 0x23e Return
}


func_953()
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x3b9 PushV
	var_26_int = 436; // 0x3ba PushI
	var_27_int = 2; // 0x3bb PushI
	var_28_int = 526392; // 0x3bc PushI
	CreateDiaryEntry(var_25_object, var_26_int, var_27_int, var_28_int); // 0x3bd Func
	var_29_bool = 0; var_30_object = Obj(); var_31_int = 0; // 0x3bf PushV
	var_30_object = var_25_object; // 0x3c0 Mov
	var_31_int = 434; // 0x3c1 MovI
	func_979(var_29_bool, var_30_object, var_31_int); // 0x3c2 NEW_2
	return 2; // 0x3c4 Return
}


func_575(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x23f PushV
	GetPosition(var_24_cvector); // 0x240 Func
	GetPosition(var_25_cvector); // 0x242 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x244 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x245 Or2
	return 6; // 0x246 Return
}


func_835(var_65_bool, var_66_string, var_67_string)
{
	var_68_object = Obj(); var_69_object = Obj(); // 0x343 PushV
	FindActor(var_69_object, var_66_string); // 0x344 Func
	var_70_bool = var_69_object == 0; // 0x346 NullEq
	if(var_70_bool == 0) goto Label_842; // 0x347 JumpB
	var_65_bool = 0; // 0x348 MovB
	return 2; // 0x349 Return
	
Label_842:
	Trigger(var_69_object, var_67_string); // 0x34a Func
	var_65_bool = 1; // 0x34c MovB
	return 2; // 0x34d Return
}


func_709(var_142_string)
{
	var_143_bool = 0; var_144_float = 0; var_145_float = 0; var_146_bool = 0; var_147_float = 0; var_148_float = 0; // 0x2c5 PushV
	lshHasAnimation(var_146_bool, var_142_string); // 0x2c6 Func
	var_149_bool = var_146_bool; // 0x2c8 Push
	if(var_149_bool == 0) goto Label_720; // 0x2c9 JumpB
	lshGetAnimTimes(var_142_string, var_147_float, var_148_float); // 0x2ca Func
	var_150_bool = 0; // 0x2cc PushB
	lshPlayAnimation(var_147_float, var_148_float, var_150_bool); // 0x2cd Func
	goto Label_724; // 0x2cf Jump
	
Label_724:
	return 6; // 0x2d4 Return
	
Label_720:
	var_151_string = "Can't find lsh animation : "; // 0x2d0 PushS
	var_152_int = var_151_string + var_142_string; // 0x2d1 Add
	Trace(var_152_int); // 0x2d2 Func
}


func_966(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x3c6 PushV
	GetDiaryRoot(var_40_object); // 0x3c7 Func
	var_41_bool = var_40_object == 0; // 0x3c9 Not
	if(var_41_bool == 0) goto Label_976; // 0x3ca JumpB
	var_42_string = "Can't retrieve diary root"; // 0x3cb PushS
	Trace(var_42_string); // 0x3cc Func
	var_38_object = 0; // 0x3ce MovB
	return 2; // 0x3cf Return
	
Label_976:
	var_38_object = var_40_object; // 0x3d0 Mov
	return 2; // 0x3d1 Return
}


func_583(var_92_bool, var_93_object, var_94_string)
{
	var_95_bool = 0; var_96_bool = 0; // 0x247 PushV
	var_97_string = "HasProperty"; // 0x248 PushS
	var_98_int = 2; // 0x249 PushI
	var_99_bool = IsFuncExist(var_93_object, var_97_string, var_98_int); // 0x24a FuncExist
	var_100_bool = var_99_bool == 0; // 0x24b Not
	if(var_100_bool == 0) goto Label_591; // 0x24c JumpB
	var_92_bool = 0; // 0x24d MovB
	return 2; // 0x24e Return
	
Label_591:
	HasProperty(var_94_string, var_96_bool); // 0x24f ObjFunc
	var_92_bool = var_96_bool; // 0x251 Mov
	return 2; // 0x252 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_121; // 0x4f JumpB
	var_95_string = ""; // 0x50 PushV
	var_95_string = "Neutral"; // 0x51 MovS
	func_151(var_89_object, var_95_string); // 0x52 NEW_2
	var_112_int = 526382; // 0x54 PushI
	SetMessage(var_112_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_113_bool = 0; // 0x59 PushV
	var_113_bool = 0; // 0x5a MovB
	var_114_bool = 0; var_115_object = Obj(); // 0x5b PushV
	var_115_object = var_1_object; // 0x5c MovT
	func_907(var_115_object); // 0x5d NEW_2
	if(var_114_bool == 0) goto Label_102; // 0x5f JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x60 PushV
	var_123_object = var_1_object; // 0x61 MovT
	func_919(var_122_bool, var_123_object); // 0x62 NEW_2
	if(var_122_bool == 0) goto Label_102; // 0x64 JumpB
	var_113_bool = 1; // 0x65 MovB
	
Label_102:
	if(var_113_bool == 0) goto Label_108; // 0x66 JumpB
	var_131_int = 526383; // 0x67 PushI
	var_132_int = 27664; // 0x68 PushI
	var_133_int = 27663; // 0x69 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x6a TObjFunc
	
Label_108:
	var_134_int = 526386; // 0x6c PushI
	var_135_int = -1; // 0x6d PushI
	var_136_int = 27666; // 0x6e PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x6f TObjFunc
	var_137_int = 528664; // 0x71 PushI
	var_138_int = -1; // 0x72 PushI
	var_139_int = 30075; // 0x73 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x74 TObjFunc
	goto Label_121; // 0x76 Jump
	
Label_121:
	var_140_bool = 0; // 0x79 PushV
	func_1032(var_140_bool); // 0x7a NEW_2
	if(var_140_bool == 0) goto Label_136; // 0x7c JumpB
	
Label_125:
	lshWaitForAnimEnd(); // 0x7d Func
	var_141_string = var_3_string; // 0x7f PushT
	if(var_141_string == 0) goto Label_130; // 0x80 JumpB
	goto Label_135; // 0x81 Jump
	
Label_135:
	goto Label_150; // 0x87 Jump
	
Label_150:
	return 0; // 0x96 Return
	
Label_130:
	var_142_string = ""; // 0x82 PushV
	var_142_string = var_2_object; // 0x83 MovT
	func_709(var_142_string); // 0x84 NEW_2
	goto Label_125; // 0x86 Jump
	
Label_136:
	var_153_string = "all"; // 0x88 PushS
	var_154_string = "idle"; // 0x89 PushS
	PlayAnimation(var_153_string, var_154_string); // 0x8a Func
	
Label_140:
	WaitForAnimEnd(); // 0x8c Func
	var_155_string = var_3_string; // 0x8e PushT
	if(var_155_string == 0) goto Label_145; // 0x8f JumpB
	goto Label_150; // 0x90 Jump
	
Label_145:
	var_156_string = "all"; // 0x91 PushS
	var_157_string = "idle"; // 0x92 PushS
	PlayAnimation(var_156_string, var_157_string); // 0x93 Func
	goto Label_140; // 0x95 Jump
}


func_847(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x34f PushV
	var_55_string = "idle"; // 0x350 MovS
	var_56_int = var_53_int; // 0x351 Push
	if(var_56_int == 0) goto Label_852; // 0x352 JumpB
	var_55_string = var_55_string + var_53_int; // 0x353 Add2
	
Label_852:
	var_52_string = var_55_string; // 0x354 Mov
	return 2; // 0x355 Return
}


func_595(var_84_bool, var_85_object, var_86_string, var_87_float, var_88_float, var_89_float)
{
	var_90_float = 0; var_91_float = 0; // 0x253 PushV
	var_92_bool = 0; var_93_object = Obj(); var_94_string = ""; // 0x254 PushV
	var_93_object = var_85_object; // 0x255 Mov
	var_94_string = var_86_string; // 0x256 Mov
	func_583(var_92_bool, var_93_object, var_94_string); // 0x257 NEW_2
	var_101_bool = var_92_bool == 0; // 0x259 Not
	if(var_101_bool == 0) goto Label_605; // 0x25a JumpB
	var_84_bool = 0; // 0x25b MovB
	return 2; // 0x25c Return
	
Label_605:
	GetProperty(var_86_string, var_91_float); // 0x25d ObjFunc
	var_102_float = 0; var_103_float = 0; var_104_float = 0; var_105_float = 0; // 0x25f PushV
	var_103_float = var_91_float + var_87_float; // 0x260 Add2
	var_104_float = var_88_float; // 0x261 Mov
	var_105_float = var_89_float; // 0x262 Mov
	func_774(var_102_float, var_103_float, var_104_float, var_105_float); // 0x263 NEW_2
	SetProperty(var_86_string, var_102_float); // 0x265 ObjFunc
	var_84_bool = 1; // 0x267 MovB
	return 2; // 0x268 Return
}


func_979(var_29_bool, var_30_object, var_31_int)
{
	var_32_object = Obj(); var_33_object = Obj(); var_34_int = 0; var_35_object = Obj(); var_36_object = Obj(); var_37_int = 0; // 0x3d3 PushV
	var_38_object = Obj(); // 0x3d4 PushV
	func_966(var_38_object); // 0x3d5 NEW_2
	var_35_object = var_38_object; // 0x3d6 Mov
	Find(var_31_int, var_36_object); // 0x3d8 ObjFunc
	var_43_bool = var_36_object == 0; // 0x3da Not
	if(var_43_bool == 0) goto Label_994; // 0x3db JumpB
	var_44_string = "Can't find diary parent with id: "; // 0x3dc PushS
	var_45_int = var_44_string + var_31_int; // 0x3dd Add
	Trace(var_45_int); // 0x3de Func
	var_29_bool = 0; // 0x3e0 MovB
	return 6; // 0x3e1 Return
	
Label_994:
	AddChild(var_30_object); // 0x3e2 ObjFunc
	var_46_int = 7; // 0x3e4 PushI
	SendWorldWndMessage(var_46_int); // 0x3e5 Func
	GetCategory(var_37_int); // 0x3e7 ObjFunc
	SetDiarySection(var_37_int); // 0x3e9 Func
	var_29_bool = 0; // 0x3eb MovB
	return 6; // 0x3ec Return
}


func_725(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x2d5 PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x2d6 Func
	var_109_bool = var_106_bool; // 0x2d8 Push
	if(var_109_bool == 0) goto Label_735; // 0x2d9 JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x2da Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x2dc Func
	goto Label_739; // 0x2de Jump
	
Label_739:
	return 6; // 0x2e3 Return
	
Label_735:
	var_110_string = "Can't find lsh animation : "; // 0x2df PushS
	var_111_int = var_110_string + var_99_string; // 0x2e0 Add
	Trace(var_111_int); // 0x2e1 Func
}


func_341(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x155 PushV
	var_6_int = 0; // 0x156 TMovB
	
Label_343:
	var_18_int = 3; // 0x157 PushI
	rand(var_16_float, var_18_int); // 0x158 Func
	var_19_int = 3; // 0x15a PushI
	var_20_int = var_16_float + var_19_int; // 0x15b Add
	Sleep(var_20_int, var_17_bool); // 0x15c Func
	var_6_int = 1; // 0x15e TMovB
	var_21_float = 0; var_22_float = 0; // 0x15f PushV
	var_21_float = var_12_float; // 0x160 Mov
	var_22_float = var_13_float; // 0x161 Mov
	func_410(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x162 NEW_2
	var_6_int = 0; // 0x164 TMovB
	goto Label_343; // 0x165 Jump
}


func_854(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x356 PushV
	var_49_int = 0; // 0x357 MovI
	
Label_856:
	var_51_string = "all"; // 0x358 PushS
	var_52_string = ""; var_53_int = 0; // 0x359 PushV
	var_53_int = var_49_int; // 0x35a Mov
	func_847(var_52_string, var_53_int); // 0x35b NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x35d Func
	var_57_bool = var_50_bool == 0; // 0x35f Not
	if(var_57_bool == 0) goto Label_866; // 0x360 JumpB
	goto Label_869; // 0x361 Jump
	
Label_869:
	var_46_int = var_49_int; // 0x365 Mov
	return 4; // 0x366 Return
	
Label_866:
	var_58_int = 1; // 0x362 PushI
	var_49_int = var_49_int + var_58_int; // 0x363 Add2
	goto Label_856; // 0x364 Jump
}


func_475(var_2_object, var_3_string)
{
	func_570(); // 0x1dc NEW_2
	var_13_int = 10; // 0x1de PushI
	KillTimer(var_13_int); // 0x1df Func
	var_14_object = var_2_object; // 0x1e1 PushT
	if(var_14_object == 0) goto Label_487; // 0x1e2 JumpB
	var_15_string = "head"; // 0x1e3 PushS
	UnlookAsync(var_15_string); // 0x1e4 Func
	var_2_object = 0; // 0x1e6 TMovB
	
Label_487:
	var_3_string = 1; // 0x1e7 TMovB
	return 0; // 0x1e8 Return
}


func_740(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2e4 PushV
	GetEyesHeight(var_32_float); // 0x2e5 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2e7 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2e8 PushE
	var_34_float = var_32_float; // 0x2e9 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x2ea PopE
	var_35_string = "head"; // 0x2eb PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x2ec Func
	return 4; // 0x2ee Return
}


func_871(var_71_object)
{
	var_73_bool = 0; var_74_object = Obj(); var_75_float = 0; // 0x368 PushV
	var_74_object = var_71_object; // 0x369 Mov
	var_75_float = -0.05; // 0x36a MovF
	func_790(var_73_bool, var_74_object, var_75_float); // 0x36b NEW_2
	return 0; // 0x36d Return
}


func_359(var_5_int)
{
	var_5_int = 1; // 0x167 TMovB
	var_15_bool = 0; // 0x168 PushV
	var_15_bool = 0; // 0x169 MovB
	var_16_bool = 0; // 0x16a PushV
	func_617(var_16_bool); // 0x16b NEW_2
	var_19_bool = var_16_bool == 0; // 0x16d Not
	if(var_19_bool == 0) goto Label_372; // 0x16e JumpB
	var_20_bool = 0; // 0x16f PushV
	func_408(var_20_bool); // 0x170 NEW_2
	if(var_20_bool == 0) goto Label_372; // 0x172 JumpB
	var_15_bool = 1; // 0x173 MovB
	
Label_372:
	if(var_15_bool == 0) goto Label_378; // 0x174 JumpB
	var_21_object = Obj(); // 0x175 PushV
	func_758(var_21_object); // 0x176 NEW_2
	RemoveActor(var_21_object); // 0x178 Func
	
Label_378:
	return 0; // 0x17a Return
}


func_617(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x269 PushV
	IsLoaded(var_25_bool); // 0x26a Func
	var_23_bool = var_25_bool; // 0x26c Mov
	return 2; // 0x26d Return
}


func_489()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x1e9 PushV
	WaitForAnimEnd(); // 0x1ea Func
	var_44_bool = 0; // 0x1ec PushV
	func_617(var_44_bool); // 0x1ed NEW_2
	var_45_bool = var_44_bool == 0; // 0x1ef Not
	if(var_45_bool == 0) goto Label_498; // 0x1f0 JumpB
	return 14; // 0x1f1 Return
	
Label_498:
	var_46_int = 0; // 0x1f2 PushV
	func_854(var_46_int); // 0x1f3 NEW_2
	var_37_int = var_46_int; // 0x1f4 Mov
	var_38_int = 0; // 0x1f6 MovI
	
Label_503:
	var_59_bool = 0; // 0x1f7 PushV
	var_59_bool = 0; // 0x1f8 MovB
	var_60_int = 5; // 0x1f9 PushI
	var_61_bool = var_38_int < var_60_int; // 0x1fa LT
	if(var_61_bool == 0) goto Label_513; // 0x1fb JumpB
	var_62_bool = 0; // 0x1fc PushV
	func_617(var_62_bool); // 0x1fd NEW_2
	if(var_62_bool == 0) goto Label_513; // 0x1ff JumpB
	var_59_bool = 1; // 0x200 MovB
	
Label_513:
	if(var_59_bool == 0) goto Label_565; // 0x201 JumpB
	var_63_int = 3; // 0x202 PushI
	irand(var_39_int, var_63_int); // 0x203 Func
	var_64_int = 0; // 0x205 PushI
	var_65_bool = var_39_int == var_64_int; // 0x206 Eq
	if(var_65_bool == 0) goto Label_537; // 0x207 JumpB
	var_66_int = var_37_int; // 0x208 Push
	if(var_66_int == 0) goto Label_536; // 0x209 JumpB
	irand(var_40_int, var_37_int); // 0x20a Func
	var_67_string = "all"; // 0x20c PushS
	var_68_string = ""; var_69_int = 0; // 0x20d PushV
	var_69_int = var_40_int; // 0x20e Mov
	func_847(var_68_string, var_69_int); // 0x20f NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x211 Func
	WaitForAnimEnd(var_41_bool); // 0x213 Func
	var_70_bool = var_41_bool == 0; // 0x215 Not
	if(var_70_bool == 0) goto Label_536; // 0x216 JumpB
	goto Label_565; // 0x217 Jump
	
Label_565:
	ResetAAS(); // 0x235 Func
	return 14; // 0x237 Return
	
Label_536:
	goto Label_554; // 0x218 Jump
	
Label_554:
	var_71_bool = 0; // 0x22a PushV
	func_568(var_71_bool); // 0x22b NEW_2
	var_72_bool = var_71_bool == 0; // 0x22d Not
	if(var_72_bool == 0) goto Label_560; // 0x22e JumpB
	goto Label_565; // 0x22f Jump
	
Label_560:
	ResetAAS(); // 0x230 Func
	var_73_int = 1; // 0x232 PushI
	var_38_int = var_38_int + var_73_int; // 0x233 Add2
	goto Label_503; // 0x234 Jump
	
Label_537:
	var_74_int = 1; // 0x219 PushI
	var_75_bool = var_39_int == var_74_int; // 0x21a Eq
	if(var_75_bool == 0) goto Label_551; // 0x21b JumpB
	var_76_int = 4; // 0x21c PushI
	rand(var_42_float, var_76_int); // 0x21d Func
	var_77_int = 1; // 0x21f PushI
	var_78_int = var_42_float + var_77_int; // 0x220 Add
	Sleep(var_78_int, var_43_bool); // 0x221 Func
	var_79_bool = var_43_bool == 0; // 0x223 Not
	if(var_79_bool == 0) goto Label_550; // 0x224 JumpB
	goto Label_565; // 0x225 Jump
	
Label_550:
	goto Label_554; // 0x226 Jump
	
Label_551:
	var_80_int = var_38_int; // 0x227 Push
	if(var_80_int == 0) goto Label_554; // 0x228 JumpB
	goto Label_565; // 0x229 Jump
}


func_622(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x26e PushV
	GetPosition(var_40_cvector); // 0x26f ObjFunc
	GetEyesHeight(var_39_float); // 0x271 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x273 PushE
	var_48_float = var_48_float + var_39_float; // 0x274 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x275 PopE
	GetPosition(var_41_cvector); // 0x276 Func
	GetEyesHeight(var_39_float); // 0x278 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x27a PushE
	var_49_float = var_49_float + var_39_float; // 0x27b Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x27c PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x27d Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x27e PushE
	var_50_float = 0; // 0x27f MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x280 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x281 Or
	var_52_float = sqrt(var_51_int); // 0x282 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x283 Div2
	var_43_cvector = -var_42_cvector; // 0x284 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x285 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x286 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x287 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x288 Xor2
	func_764(var_54_cvector, var_55_cvector); // 0x289 NEW_2
	var_62_int = 25; // 0x28b PushI
	var_63_float = var_54_cvector * var_62_int; // 0x28c Mult
	var_64_int = var_53_float + var_63_float; // 0x28d Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x28e PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x28f Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x290 Add2
	IsOverrideActive(var_46_bool); // 0x291 Func
	var_66_bool = var_46_bool; // 0x293 Push
	if(var_66_bool == 0) goto Label_663; // 0x294 JumpB
	var_27_bool = 0; // 0x295 MovB
	return 18; // 0x296 Return
	
Label_663:
	StopWorld(); // 0x297 Func
	var_67_bool = 1; // 0x299 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x29a Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x29c PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x29d PushE
	Rotate(var_68_float, var_69_float); // 0x29e Func
	var_70_bool = 0; // 0x2a0 PushV
	func_1032(var_70_bool); // 0x2a1 NEW_2
	if(var_70_bool == 0) goto Label_677; // 0x2a3 JumpB
	goto Label_685; // 0x2a4 Jump
	
Label_685:
	CameraWaitForPlayFinish(); // 0x2ad Func
	ResumeWorld(); // 0x2af Func
	var_27_bool = 1; // 0x2b1 MovB
	return 18; // 0x2b2 Return
	
Label_677:
	var_71_string = "head"; // 0x2a5 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x2a6 Func
	var_72_bool = var_47_bool; // 0x2a8 Push
	if(var_72_bool == 0) goto Label_685; // 0x2a9 JumpB
	var_73_string = "head"; // 0x2aa PushS
	LookAsyncCamera(var_73_string); // 0x2ab Func
}


func_1007(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x3ef PushV
	var_82_string = "branch"; // 0x3f0 PushS
	GetVariable(var_82_string, var_81_int); // 0x3f1 Func
	var_83_int = 0; // 0x3f3 PushI
	var_84_bool = var_81_int == var_83_int; // 0x3f4 Eq
	if(var_84_bool == 0) goto Label_1017; // 0x3f5 JumpB
	var_79_int = 1; // 0x3f6 MovI
	return 2; // 0x3f7 Return
	
Label_1017:
	var_85_int = 1; // 0x3f9 PushI
	var_86_bool = var_81_int == var_85_int; // 0x3fa Eq
	if(var_86_bool == 0) goto Label_1022; // 0x3fb JumpB
	var_79_int = 2; // 0x3fc MovI
	return 2; // 0x3fd Return
	
Label_1022:
	var_79_int = 3; // 0x3fe MovI
	return 2; // 0x3ff Return
}


func_751()
{
	var_15_bool = 0; // 0x2ef PushV
	func_1032(var_15_bool); // 0x2f0 NEW_2
	if(var_15_bool == 0) goto Label_757; // 0x2f2 JumpB
	lshStopSpeech(); // 0x2f3 Func
	
Label_757:
	return 0; // 0x2f5 Return
}


func_878()
{
	var_20_int = 0; var_21_int = 0; // 0x36e PushV
	var_22_string = "k7q03"; // 0x36f PushS
	var_23_int = 2; // 0x370 PushI
	SetVariable(var_22_string, var_23_int); // 0x371 Func
	func_953(); // 0x374 NEW_2
	var_47_string = "tvirin"; // 0x376 PushS
	var_48_int = 5; // 0x377 PushI
	RemoveItemByType(var_21_int, var_47_string, var_48_int); // 0x378 ObjFunc
	return 2; // 0x37a Return
}


func_758(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2f6 PushV
	self(var_21_object); // 0x2f7 Func
	var_19_object = var_21_object; // 0x2f9 Mov
	return 2; // 0x2fa Return
}


func_891()
{
	func_940(); // 0x37d NEW_2
	var_65_bool = 0; var_66_string = ""; var_67_string = ""; // 0x37f PushV
	var_66_string = "quest_k7_03"; // 0x380 MovS
	var_67_string = "fail"; // 0x381 MovS
	func_835(var_65_bool, var_66_string, var_67_string); // 0x382 NEW_2
	return 0; // 0x384 Return
}


func_764(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x2fc PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x2fd Or
	var_58_float = sqrt(var_59_int); // 0x2fe Sqrt2
	var_60_float = 0.0; // 0x2ff PushF
	var_61_bool = var_58_float < var_60_float; // 0x300 LT
	if(var_61_bool == 0) goto Label_772; // 0x301 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x302 MovV
	return 2; // 0x303 Return
	
Label_772:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x304 Div2
	return 2; // 0x305 Return
}


