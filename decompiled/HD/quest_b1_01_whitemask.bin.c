task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xce PushI
	if(var_12_int == 0) goto Label_394; // 0xcf JumpB
	func_723(); // 0xd1 NEW_2
	var_14_int = 21088; // 0xd3 PushI
	var_15_bool = var_10_bool == var_14_int; // 0xd4 Eq
	if(var_15_bool == 0) goto Label_285; // 0xd5 JumpB
	var_16_bool = 0; var_17_object = Obj(); // 0xd6 PushV
	var_17_object = var_1_object; // 0xd7 MovT
	func_824(var_17_object); // 0xd8 NEW_2
	if(var_16_bool == 0) goto Label_244; // 0xda JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xdb PushV
	var_24_object = var_1_object; // 0xdc MovT
	var_25_object = var_0_object; // 0xdd MovT
	func_792(); // 0xde NEW_2
	var_28_string = ""; // 0xe0 PushV
	var_28_string = "Neutral"; // 0xe1 MovS
	func_183(var_11_object, var_28_string); // 0xe2 NEW_2
	var_45_int = 519919; // 0xe4 PushI
	SetMessage(var_45_int); // 0xe5 TObjFunc
	ClearReplies(); // 0xe7 TObjFunc
	var_46_int = 519920; // 0xe9 PushI
	var_47_int = 21090; // 0xea PushI
	var_48_int = 21089; // 0xeb PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xec TObjFunc
	var_49_int = 519929; // 0xee PushI
	var_50_int = 21099; // 0xef PushI
	var_51_int = 21098; // 0xf0 PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0xf1 TObjFunc
	return 0; // 0xf3 Return
	
Label_244:
	var_52_bool = 0; var_53_object = Obj(); // 0xf4 PushV
	var_53_object = var_1_object; // 0xf5 MovT
	func_814(var_52_bool, var_53_object); // 0xf6 NEW_2
	var_63_bool = var_52_bool == 0; // 0xf8 Not
	if(var_63_bool == 0) goto Label_265; // 0xf9 JumpB
	var_64_string = ""; // 0xfa PushV
	var_64_string = "Neutral"; // 0xfb MovS
	func_183(var_11_object, var_64_string); // 0xfc NEW_2
	var_65_int = 520031; // 0xfe PushI
	SetMessage(var_65_int); // 0xff TObjFunc
	ClearReplies(); // 0x101 TObjFunc
	var_66_int = 520032; // 0x103 PushI
	var_67_int = -1; // 0x104 PushI
	var_68_int = 21216; // 0x105 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x106 TObjFunc
	return 0; // 0x108 Return
	
Label_265:
	var_69_bool = 0; var_70_object = Obj(); // 0x109 PushV
	var_70_object = var_1_object; // 0x10a MovT
	func_814(var_69_bool, var_70_object); // 0x10b NEW_2
	if(var_69_bool == 0) goto Label_285; // 0x10d JumpB
	var_71_string = ""; // 0x10e PushV
	var_71_string = "Neutral"; // 0x10f MovS
	func_183(var_11_object, var_71_string); // 0x110 NEW_2
	var_72_int = 524628; // 0x112 PushI
	SetMessage(var_72_int); // 0x113 TObjFunc
	ClearReplies(); // 0x115 TObjFunc
	var_73_int = 524629; // 0x117 PushI
	var_74_int = -1; // 0x118 PushI
	var_75_int = 25969; // 0x119 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x11a TObjFunc
	return 0; // 0x11c Return
	
Label_285:
	var_76_int = 21099; // 0x11d PushI
	var_77_bool = var_10_bool == var_76_int; // 0x11e Eq
	if(var_77_bool == 0) goto Label_308; // 0x11f JumpB
	var_78_string = ""; // 0x120 PushV
	var_78_string = "Neutral"; // 0x121 MovS
	func_183(var_11_object, var_78_string); // 0x122 NEW_2
	var_79_int = 519930; // 0x124 PushI
	SetMessage(var_79_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_80_int = 519931; // 0x129 PushI
	var_81_int = 21090; // 0x12a PushI
	var_82_int = 21100; // 0x12b PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x12c TObjFunc
	var_83_int = 519932; // 0x12e PushI
	var_84_int = 21090; // 0x12f PushI
	var_85_int = 21102; // 0x130 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x131 TObjFunc
	return 0; // 0x133 Return
	
Label_308:
	var_86_int = 21090; // 0x134 PushI
	var_87_bool = var_10_bool == var_86_int; // 0x135 Eq
	if(var_87_bool == 0) goto Label_336; // 0x136 JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x137 PushV
	var_88_object = var_1_object; // 0x138 MovT
	var_89_object = var_0_object; // 0x139 MovT
	func_798(); // 0x13a NEW_2
	var_106_string = ""; // 0x13c PushV
	var_106_string = "Neutral"; // 0x13d MovS
	func_183(var_11_object, var_106_string); // 0x13e NEW_2
	var_107_int = 519921; // 0x140 PushI
	SetMessage(var_107_int); // 0x141 TObjFunc
	ClearReplies(); // 0x143 TObjFunc
	var_108_int = 519922; // 0x145 PushI
	var_109_int = 21092; // 0x146 PushI
	var_110_int = 21091; // 0x147 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x148 TObjFunc
	var_111_int = 519928; // 0x14a PushI
	var_112_int = -1; // 0x14b PushI
	var_113_int = 21097; // 0x14c PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x14d TObjFunc
	return 0; // 0x14f Return
	
Label_336:
	var_114_int = 21092; // 0x150 PushI
	var_115_bool = var_10_bool == var_114_int; // 0x151 Eq
	if(var_115_bool == 0) goto Label_359; // 0x152 JumpB
	var_116_string = ""; // 0x153 PushV
	var_116_string = "Neutral"; // 0x154 MovS
	func_183(var_11_object, var_116_string); // 0x155 NEW_2
	var_117_int = 519923; // 0x157 PushI
	SetMessage(var_117_int); // 0x158 TObjFunc
	ClearReplies(); // 0x15a TObjFunc
	var_118_int = 519924; // 0x15c PushI
	var_119_int = 21094; // 0x15d PushI
	var_120_int = 21093; // 0x15e PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x15f TObjFunc
	var_121_int = 519927; // 0x161 PushI
	var_122_int = -1; // 0x162 PushI
	var_123_int = 21096; // 0x163 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x164 TObjFunc
	return 0; // 0x166 Return
	
Label_359:
	var_124_int = 21094; // 0x167 PushI
	var_125_bool = var_10_bool == var_124_int; // 0x168 Eq
	if(var_125_bool == 0) goto Label_382; // 0x169 JumpB
	var_126_string = ""; // 0x16a PushV
	var_126_string = "Neutral"; // 0x16b MovS
	func_183(var_11_object, var_126_string); // 0x16c NEW_2
	var_127_int = 519925; // 0x16e PushI
	SetMessage(var_127_int); // 0x16f TObjFunc
	ClearReplies(); // 0x171 TObjFunc
	var_128_int = 519926; // 0x173 PushI
	var_129_int = -1; // 0x174 PushI
	var_130_int = 21095; // 0x175 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x176 TObjFunc
	var_131_int = 527022; // 0x178 PushI
	var_132_int = -1; // 0x179 PushI
	var_133_int = 28306; // 0x17a PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x17b TObjFunc
	return 0; // 0x17d Return
	
Label_382:
	var_3_string = 1; // 0x17e TMovB
	var_134_bool = 0; // 0x17f PushV
	func_766(var_134_bool); // 0x180 NEW_2
	if(var_134_bool == 0) goto Label_390; // 0x182 JumpB
	lshStopAnimation(); // 0x183 Func
	goto Label_392; // 0x185 Jump
	
Label_392:
	return 0; // 0x188 Return
	
Label_390:
	StopAnimation(); // 0x186 Func
	
Label_394:
	return 0; // 0x18a Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_481(var_9_object, var_10_object); // 0x197 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x199 PushV
	var_15_object = var_10_object; // 0x19a Mov
	TaskCall(0); // 0x19b TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x19c NEW_2
	TaskReturn(); // 0x19d TaskReturn
	return 0; // 0x19f Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x1cb PushI
	var_12_bool = var_10_int == var_11_int; // 0x1cc Eq
	if(var_12_bool == 0) goto Label_480; // 0x1cd JumpB
	var_13_bool = 0; // 0x1ce PushV
	func_443(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x1cf NEW_2
	if(var_13_bool == 0) goto Label_474; // 0x1d1 JumpB
	var_26_bool = var_2_object == 0; // 0x1d2 Not
	if(var_26_bool == 0) goto Label_473; // 0x1d3 JumpB
	var_27_object = Obj(); // 0x1d4 PushV
	var_27_object = var_4_bool; // 0x1d5 MovT
	func_712(var_27_object); // 0x1d6 NEW_2
	var_2_object = 1; // 0x1d8 TMovB
	
Label_473:
	goto Label_480; // 0x1d9 Jump
	
Label_480:
	return 0; // 0x1e0 Return
	
Label_474:
	var_34_object = var_2_object; // 0x1da PushT
	if(var_34_object == 0) goto Label_480; // 0x1db JumpB
	var_35_string = "head"; // 0x1dc PushS
	UnlookAsync(var_35_string); // 0x1dd Func
	var_2_object = 0; // 0x1df TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_395:
	var_10_float = 0; var_11_float = 0; // 0x18b PushV
	var_10_float = 300; // 0x18c MovI
	var_11_float = 100; // 0x18d MovI
	func_416(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0x18e NEW_2
	var_72_int = 3; // 0x190 PushI
	Sleep(var_72_int); // 0x191 Func
	goto Label_395; // 0x193 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_594(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_760(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_758(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_762(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_764(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_864(var_77_int); // 0x22 NEW_2
	SetPlayerName(var_77_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_85_bool = var_22_bool; // 0x29 Push
	if(var_85_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x2f PushV
	var_86_object = var_15_object; // 0x30 Mov
	var_87_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_171_bool = var_24_bool == 0; // 0x38 Not
	if(var_171_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_172_object = Obj(); // 0x3f PushV
	var_172_object = var_15_object; // 0x40 Mov
	func_663(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_768(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x300 PushV
	var_44_string = "idle"; // 0x301 MovS
	var_45_int = var_42_int; // 0x302 Push
	if(var_45_int == 0) goto Label_773; // 0x303 JumpB
	var_44_string = var_44_string + var_42_int; // 0x304 Add2
	
Label_773:
	var_41_string = var_44_string; // 0x305 Mov
	return 2; // 0x306 Return
}


func_775(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x307 PushV
	var_38_int = 0; // 0x308 MovI
	
Label_777:
	var_40_string = "all"; // 0x309 PushS
	var_41_string = ""; var_42_int = 0; // 0x30a PushV
	var_42_int = var_38_int; // 0x30b Mov
	func_768(var_41_string, var_42_int); // 0x30c NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x30e Func
	var_46_bool = var_39_bool == 0; // 0x310 Not
	if(var_46_bool == 0) goto Label_787; // 0x311 JumpB
	goto Label_790; // 0x312 Jump
	
Label_790:
	var_35_int = var_38_int; // 0x316 Mov
	return 4; // 0x317 Return
	
Label_787:
	var_47_int = 1; // 0x313 PushI
	var_38_int = var_38_int + var_47_int; // 0x314 Add2
	goto Label_777; // 0x315 Jump
}


func_663()
{
	var_173_bool = 0; var_174_bool = 0; // 0x297 PushV
	var_175_bool = 1; // 0x298 PushB
	CameraSwitchToNormal(var_175_bool); // 0x299 Func
	var_176_bool = 0; // 0x29b PushV
	func_766(var_176_bool); // 0x29c NEW_2
	if(var_176_bool == 0) goto Label_672; // 0x29e JumpB
	goto Label_680; // 0x29f Jump
	
Label_680:
	return 2; // 0x2a8 Return
	
Label_672:
	var_177_string = "head"; // 0x2a0 PushS
	HasAnimationTrack(var_174_bool, var_177_string); // 0x2a1 Func
	var_178_bool = var_174_bool; // 0x2a3 Push
	if(var_178_bool == 0) goto Label_680; // 0x2a4 JumpB
	var_179_string = "head"; // 0x2a5 PushS
	UnlookAsync(var_179_string); // 0x2a6 Func
}


func_792()
{
	var_103_string = "oob1WhiteMask1"; // 0x319 PushS
	var_104_int = 1; // 0x31a PushI
	SetVariable(var_103_string, var_104_int); // 0x31b Func
	return 0; // 0x31d Return
}


func_798()
{
	var_90_object = Obj(); var_91_object = Obj(); // 0x31e PushV
	var_92_object = Obj(); // 0x31f PushV
	func_847(var_92_object); // 0x320 NEW_2
	var_91_object = var_92_object; // 0x321 Mov
	var_99_string = "b1BigVlad11Hours"; // 0x323 PushS
	var_100_string = "pt_map_bigvlad"; // 0x324 PushS
	var_101_int = 3; // 0x325 PushI
	var_102_int = 524625; // 0x326 PushI
	var_103_float = 0; // 0x327 PushV
	func_745(var_103_float); // 0x328 NEW_2
	AddMark(var_99_string, var_100_string, var_101_int, var_102_int, var_103_float); // 0x32a ObjFunc
	return 2; // 0x32c Return
}


func_416(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x1a1 PushV
	func_589(var_12_bool); // 0x1a2 NEW_2
	var_15_bool = var_12_bool == 0; // 0x1a4 Not
	if(var_15_bool == 0) goto Label_423; // 0x1a5 JumpB
	return 0; // 0x1a6 Return
	
Label_423:
	var_16_string = "player"; // 0x1a7 PushS
	FindActor(var_9_object, var_16_string); // 0x1a8 Func
	var_2_object = 0; // 0x1aa TMovB
	var_3_string = 0; // 0x1ab TMovB
	var_0_object = var_10_float; // 0x1ac TMov
	var_1_object = var_11_float; // 0x1ad TMov
	var_17_int = 10; // 0x1ae PushI
	var_18_float = 1.0; // 0x1af PushF
	SetTimer(var_17_int, var_18_float); // 0x1b0 Func
	func_495(); // 0x1b3 NEW_2
	var_70_bool = var_3_string == 0; // 0x1b5 Not
	if(var_70_bool == 0) goto Label_442; // 0x1b6 JumpB
	var_71_int = 10; // 0x1b7 PushI
	KillTimer(var_71_int); // 0x1b8 Func
	
Label_442:
	return 0; // 0x1ba Return
}


func_681(var_131_string)
{
	var_132_bool = 0; var_133_float = 0; var_134_float = 0; var_135_bool = 0; var_136_float = 0; var_137_float = 0; // 0x2a9 PushV
	lshHasAnimation(var_135_bool, var_131_string); // 0x2aa Func
	var_138_bool = var_135_bool; // 0x2ac Push
	if(var_138_bool == 0) goto Label_692; // 0x2ad JumpB
	lshGetAnimTimes(var_131_string, var_136_float, var_137_float); // 0x2ae Func
	var_139_bool = 0; // 0x2b0 PushB
	lshPlayAnimation(var_136_float, var_137_float, var_139_bool); // 0x2b1 Func
	goto Label_696; // 0x2b3 Jump
	
Label_696:
	return 6; // 0x2b8 Return
	
Label_692:
	var_140_string = "Can't find lsh animation : "; // 0x2b4 PushS
	var_141_int = var_140_string + var_131_string; // 0x2b5 Add
	Trace(var_141_int); // 0x2b6 Func
}


func_814(var_147_bool, var_148_object)
{
	var_149_bool = 0; var_150_object = Obj(); // 0x32f PushV
	var_150_object = var_148_object; // 0x330 Mov
	func_836(var_150_object); // 0x331 NEW_2
	if(var_149_bool == 0) goto Label_822; // 0x333 JumpB
	var_147_bool = 1; // 0x334 MovB
	return 0; // 0x335 Return
	
Label_822:
	var_147_bool = 0; // 0x336 MovB
	return 0; // 0x337 Return
}


func_183(var_2_object, var_105_string)
{
	var_106_bool = 0; // 0xb8 PushV
	func_766(var_106_bool); // 0xb9 NEW_2
	var_107_bool = var_106_bool == 0; // 0xbb Not
	if(var_107_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_108_bool = var_105_string == var_2_object; // 0xbe Eq
	if(var_108_bool == 0) goto Label_193; // 0xbf JumpB
	return 0; // 0xc0 Return
	
Label_193:
	var_109_string = ""; var_110_bool = 0; // 0xc1 PushV
	var_109_string = var_105_string; // 0xc2 Mov
	var_111_string = ""; // 0xc3 PushS
	var_112_bool = var_105_string == var_111_string; // 0xc4 Eq
	if(var_112_bool == 0) goto Label_200; // 0xc5 JumpB
	var_110_bool = 0; // 0xc6 MovB
	goto Label_201; // 0xc7 Jump
	
Label_201:
	func_697(var_109_string, var_110_bool); // 0xc9 NEW_2
	var_2_object = var_105_string; // 0xcb TMov
	return 0; // 0xcc Return
	
Label_200:
	var_110_bool = 1; // 0xc8 MovB
}


func_824(var_93_bool)
{
	var_95_int = 0; var_96_string = ""; // 0x339 PushV
	var_96_string = "oob1WhiteMask1"; // 0x33a MovS
	func_740(var_95_int, var_96_string); // 0x33b NEW_2
	var_99_int = 0; // 0x33d PushI
	var_100_bool = var_95_int == var_99_int; // 0x33e Eq
	if(var_100_bool == 0) goto Label_834; // 0x33f JumpB
	var_93_bool = 1; // 0x340 MovB
	return 0; // 0x341 Return
	
Label_834:
	var_93_bool = 0; // 0x342 MovB
	return 0; // 0x343 Return
}


func_697(var_109_string, var_110_bool)
{
	var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_bool = 0; var_117_float = 0; var_118_float = 0; // 0x2b9 PushV
	lshHasAnimation(var_116_bool, var_109_string); // 0x2ba Func
	var_119_bool = var_116_bool; // 0x2bc Push
	if(var_119_bool == 0) goto Label_707; // 0x2bd JumpB
	lshGetAnimTimes(var_109_string, var_117_float, var_118_float); // 0x2be Func
	lshPlayAnimation(var_117_float, var_118_float, var_110_bool); // 0x2c0 Func
	goto Label_711; // 0x2c2 Jump
	
Label_711:
	return 6; // 0x2c7 Return
	
Label_707:
	var_120_string = "Can't find lsh animation : "; // 0x2c3 PushS
	var_121_int = var_120_string + var_109_string; // 0x2c4 Add
	Trace(var_121_int); // 0x2c5 Func
}


func_443(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x1bb PushV
	var_16_bool = var_4_bool == 0; // 0x1bc NullEq
	if(var_16_bool == 0) goto Label_448; // 0x1bd JumpB
	var_13_bool = 0; // 0x1be MovB
	return 2; // 0x1bf Return
	
Label_448:
	var_17_float = 0; var_18_object = Obj(); // 0x1c0 PushV
	var_18_object = var_4_bool; // 0x1c1 MovT
	func_581(var_18_object); // 0x1c2 NEW_2
	var_15_float = sqrt(var_17_float); // 0x1c4 Sqrt2
	var_25_object = var_2_object; // 0x1c5 PushT
	if(var_25_object == 0) goto Label_456; // 0x1c6 JumpB
	var_15_float = var_15_float - var_1_object; // 0x1c7 Sub2
	
Label_456:
	var_13_bool = var_15_float < var_0_object; // 0x1c8 LT2
	return 2; // 0x1c9 Return
}


func_574(var_60_bool)
{
	var_60_bool = 1; // 0x23e MovB
	return 0; // 0x23f Return
}


func_576()
{
	StopAnimation(); // 0x240 Func
	StopGroup0(); // 0x242 Func
	return 0; // 0x244 Return
}


func_836(var_149_bool)
{
	var_151_int = 0; // 0x345 PushV
	func_750(var_151_int); // 0x346 NEW_2
	var_156_int = 11; // 0x348 PushI
	var_157_bool = var_151_int >= var_156_int; // 0x349 GE
	if(var_157_bool == 0) goto Label_845; // 0x34a JumpB
	var_149_bool = 1; // 0x34b MovB
	return 0; // 0x34c Return
	
Label_845:
	var_149_bool = 0; // 0x34d MovB
	return 0; // 0x34e Return
}


func_581(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x245 PushV
	GetPosition(var_22_cvector); // 0x246 Func
	GetPosition(var_23_cvector); // 0x248 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x24a Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x24b Or2
	return 6; // 0x24c Return
}


func_712(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x2c8 PushV
	GetEyesHeight(var_30_float); // 0x2c9 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x2cb MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x2cc PushE
	var_32_float = var_30_float; // 0x2cd Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x2ce PopE
	var_33_string = "head"; // 0x2cf PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x2d0 Func
	return 4; // 0x2d2 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_153; // 0x4f JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0x50 PushV
	var_94_object = var_1_object; // 0x51 MovT
	func_824(var_94_object); // 0x52 NEW_2
	if(var_93_bool == 0) goto Label_110; // 0x54 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0x55 PushV
	var_101_object = var_1_object; // 0x56 MovT
	var_102_object = var_0_object; // 0x57 MovT
	func_792(); // 0x58 NEW_2
	var_105_string = ""; // 0x5a PushV
	var_105_string = "Neutral"; // 0x5b MovS
	func_183(var_87_object, var_105_string); // 0x5c NEW_2
	var_122_int = 519919; // 0x5e PushI
	SetMessage(var_122_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_123_int = 519920; // 0x63 PushI
	var_124_int = 21090; // 0x64 PushI
	var_125_int = 21089; // 0x65 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x66 TObjFunc
	var_126_int = 519929; // 0x68 PushI
	var_127_int = 21099; // 0x69 PushI
	var_128_int = 21098; // 0x6a PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x6b TObjFunc
	goto Label_153; // 0x6d Jump
	
Label_153:
	var_129_bool = 0; // 0x99 PushV
	func_766(var_129_bool); // 0x9a NEW_2
	if(var_129_bool == 0) goto Label_168; // 0x9c JumpB
	
Label_157:
	lshWaitForAnimEnd(); // 0x9d Func
	var_130_string = var_3_string; // 0x9f PushT
	if(var_130_string == 0) goto Label_162; // 0xa0 JumpB
	goto Label_167; // 0xa1 Jump
	
Label_167:
	goto Label_182; // 0xa7 Jump
	
Label_182:
	return 0; // 0xb6 Return
	
Label_162:
	var_131_string = ""; // 0xa2 PushV
	var_131_string = var_2_object; // 0xa3 MovT
	func_681(var_131_string); // 0xa4 NEW_2
	goto Label_157; // 0xa6 Jump
	
Label_168:
	var_142_string = "all"; // 0xa8 PushS
	var_143_string = "idle"; // 0xa9 PushS
	PlayAnimation(var_142_string, var_143_string); // 0xaa Func
	
Label_172:
	WaitForAnimEnd(); // 0xac Func
	var_144_string = var_3_string; // 0xae PushT
	if(var_144_string == 0) goto Label_177; // 0xaf JumpB
	goto Label_182; // 0xb0 Jump
	
Label_177:
	var_145_string = "all"; // 0xb1 PushS
	var_146_string = "idle"; // 0xb2 PushS
	PlayAnimation(var_145_string, var_146_string); // 0xb3 Func
	goto Label_172; // 0xb5 Jump
	
Label_110:
	var_147_bool = 0; var_148_object = Obj(); // 0x6e PushV
	var_148_object = var_1_object; // 0x6f MovT
	func_814(var_147_bool, var_148_object); // 0x70 NEW_2
	var_158_bool = var_147_bool == 0; // 0x72 Not
	if(var_158_bool == 0) goto Label_131; // 0x73 JumpB
	var_159_string = ""; // 0x74 PushV
	var_159_string = "Neutral"; // 0x75 MovS
	func_183(var_87_object, var_159_string); // 0x76 NEW_2
	var_160_int = 520031; // 0x78 PushI
	SetMessage(var_160_int); // 0x79 TObjFunc
	ClearReplies(); // 0x7b TObjFunc
	var_161_int = 520032; // 0x7d PushI
	var_162_int = -1; // 0x7e PushI
	var_163_int = 21216; // 0x7f PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x80 TObjFunc
	goto Label_153; // 0x82 Jump
	
Label_131:
	var_164_bool = 0; var_165_object = Obj(); // 0x83 PushV
	var_165_object = var_1_object; // 0x84 MovT
	func_814(var_164_bool, var_165_object); // 0x85 NEW_2
	if(var_164_bool == 0) goto Label_151; // 0x87 JumpB
	var_166_string = ""; // 0x88 PushV
	var_166_string = "Neutral"; // 0x89 MovS
	func_183(var_87_object, var_166_string); // 0x8a NEW_2
	var_167_int = 524628; // 0x8c PushI
	SetMessage(var_167_int); // 0x8d TObjFunc
	ClearReplies(); // 0x8f TObjFunc
	var_168_int = 524629; // 0x91 PushI
	var_169_int = -1; // 0x92 PushI
	var_170_int = 25969; // 0x93 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x94 TObjFunc
	goto Label_153; // 0x96 Jump
	
Label_151:
	return 0; // 0x97 Return
}


func_589(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x24d PushV
	IsLoaded(var_14_bool); // 0x24e Func
	var_12_bool = var_14_bool; // 0x250 Mov
	return 2; // 0x251 Return
}


func_847(var_92_object)
{
	var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); // 0x34f PushV
	GetMainOutdoorScene(var_95_object); // 0x350 Func
	var_97_bool = var_95_object == 0; // 0x352 NullEq
	if(var_97_bool == 0) goto Label_858; // 0x353 JumpB
	var_98_string = "Can't find main outdoor scene"; // 0x354 PushS
	Trace(var_98_string); // 0x355 Func
	var_96_object = 0; // 0x357 SetNull
	var_92_object = var_96_object; // 0x358 Mov
	return 4; // 0x359 Return
	
Label_858:
	GetMap(var_96_object); // 0x35a ObjFunc
	var_92_object = var_96_object; // 0x35c Mov
	return 4; // 0x35d Return
}


func_594(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x252 PushV
	GetPosition(var_38_cvector); // 0x253 ObjFunc
	GetEyesHeight(var_37_float); // 0x255 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x257 PushE
	var_46_float = var_46_float + var_37_float; // 0x258 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x259 PopE
	GetPosition(var_39_cvector); // 0x25a Func
	GetEyesHeight(var_37_float); // 0x25c Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x25e PushE
	var_47_float = var_47_float + var_37_float; // 0x25f Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x260 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x261 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x262 PushE
	var_48_float = 0; // 0x263 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x264 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x265 Or
	var_50_float = sqrt(var_49_int); // 0x266 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x267 Div2
	var_41_cvector = -var_40_cvector; // 0x268 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x269 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x26a PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x26b PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x26c Xor2
	func_730(var_52_cvector, var_53_cvector); // 0x26d NEW_2
	var_60_int = 25; // 0x26f PushI
	var_61_float = var_52_cvector * var_60_int; // 0x270 Mult
	var_62_int = var_51_float + var_61_float; // 0x271 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x272 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x273 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x274 Add2
	IsOverrideActive(var_44_bool); // 0x275 Func
	var_64_bool = var_44_bool; // 0x277 Push
	if(var_64_bool == 0) goto Label_635; // 0x278 JumpB
	var_25_bool = 0; // 0x279 MovB
	return 18; // 0x27a Return
	
Label_635:
	StopWorld(); // 0x27b Func
	var_65_bool = 1; // 0x27d PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x27e Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x280 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x281 PushE
	Rotate(var_66_float, var_67_float); // 0x282 Func
	var_68_bool = 0; // 0x284 PushV
	func_766(var_68_bool); // 0x285 NEW_2
	if(var_68_bool == 0) goto Label_649; // 0x287 JumpB
	goto Label_657; // 0x288 Jump
	
Label_657:
	CameraWaitForPlayFinish(); // 0x291 Func
	ResumeWorld(); // 0x293 Func
	var_25_bool = 1; // 0x295 MovB
	return 18; // 0x296 Return
	
Label_649:
	var_69_string = "head"; // 0x289 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x28a Func
	var_70_bool = var_45_bool; // 0x28c Push
	if(var_70_bool == 0) goto Label_657; // 0x28d JumpB
	var_71_string = "head"; // 0x28e PushS
	LookAsyncCamera(var_71_string); // 0x28f Func
}


func_723()
{
	var_13_bool = 0; // 0x2d3 PushV
	func_766(var_13_bool); // 0x2d4 NEW_2
	if(var_13_bool == 0) goto Label_729; // 0x2d6 JumpB
	lshStopSpeech(); // 0x2d7 Func
	
Label_729:
	return 0; // 0x2d9 Return
}


func_730(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x2da PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x2db Or
	var_56_float = sqrt(var_57_int); // 0x2dc Sqrt2
	var_58_float = 0.0; // 0x2dd PushF
	var_59_bool = var_56_float < var_58_float; // 0x2de LT
	if(var_59_bool == 0) goto Label_738; // 0x2df JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x2e0 MovV
	return 2; // 0x2e1 Return
	
Label_738:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x2e2 Div2
	return 2; // 0x2e3 Return
}


func_864(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x360 PushV
	var_80_string = "branch"; // 0x361 PushS
	GetVariable(var_80_string, var_79_int); // 0x362 Func
	var_81_int = 0; // 0x364 PushI
	var_82_bool = var_79_int == var_81_int; // 0x365 Eq
	if(var_82_bool == 0) goto Label_874; // 0x366 JumpB
	var_77_int = 1; // 0x367 MovI
	return 2; // 0x368 Return
	
Label_874:
	var_83_int = 1; // 0x36a PushI
	var_84_bool = var_79_int == var_83_int; // 0x36b Eq
	if(var_84_bool == 0) goto Label_879; // 0x36c JumpB
	var_77_int = 2; // 0x36d MovI
	return 2; // 0x36e Return
	
Label_879:
	var_77_int = 3; // 0x36f MovI
	return 2; // 0x370 Return
}


func_481(var_2_object, var_3_string)
{
	func_576(); // 0x1e2 NEW_2
	var_11_int = 10; // 0x1e4 PushI
	KillTimer(var_11_int); // 0x1e5 Func
	var_12_object = var_2_object; // 0x1e7 PushT
	if(var_12_object == 0) goto Label_493; // 0x1e8 JumpB
	var_13_string = "head"; // 0x1e9 PushS
	UnlookAsync(var_13_string); // 0x1ea Func
	var_2_object = 0; // 0x1ec TMovB
	
Label_493:
	var_3_string = 1; // 0x1ed TMovB
	return 0; // 0x1ee Return
}


func_740(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0; // 0x2e4 PushV
	GetVariable(var_96_string, var_98_int); // 0x2e5 Func
	var_95_int = var_98_int; // 0x2e7 Mov
	return 2; // 0x2e8 Return
}


func_745(var_103_float)
{
	var_104_float = 0; var_105_float = 0; // 0x2e9 PushV
	GetGameTime(var_105_float); // 0x2ea Func
	var_103_float = var_105_float; // 0x2ec Mov
	return 2; // 0x2ed Return
}


func_750(var_151_int)
{
	var_152_float = 0; var_153_float = 0; // 0x2ee PushV
	GetGameTime(var_153_float); // 0x2ef Func
	var_154_int = 0; // 0x2f1 PushV
	var_154_int = var_153_float; // 0x2f2 Mov
	var_155_int = 24; // 0x2f3 PushI
	var_151_int = var_154_int % var_155_int; // 0x2f4 Mod2
	return 2; // 0x2f5 Return
}


func_495()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x1ef PushV
	WaitForAnimEnd(); // 0x1f0 Func
	var_33_bool = 0; // 0x1f2 PushV
	func_589(var_33_bool); // 0x1f3 NEW_2
	var_34_bool = var_33_bool == 0; // 0x1f5 Not
	if(var_34_bool == 0) goto Label_504; // 0x1f6 JumpB
	return 14; // 0x1f7 Return
	
Label_504:
	var_35_int = 0; // 0x1f8 PushV
	func_775(var_35_int); // 0x1f9 NEW_2
	var_26_int = var_35_int; // 0x1fa Mov
	var_27_int = 0; // 0x1fc MovI
	
Label_509:
	var_48_bool = 0; // 0x1fd PushV
	var_48_bool = 0; // 0x1fe MovB
	var_49_int = 5; // 0x1ff PushI
	var_50_bool = var_27_int < var_49_int; // 0x200 LT
	if(var_50_bool == 0) goto Label_519; // 0x201 JumpB
	var_51_bool = 0; // 0x202 PushV
	func_589(var_51_bool); // 0x203 NEW_2
	if(var_51_bool == 0) goto Label_519; // 0x205 JumpB
	var_48_bool = 1; // 0x206 MovB
	
Label_519:
	if(var_48_bool == 0) goto Label_571; // 0x207 JumpB
	var_52_int = 3; // 0x208 PushI
	irand(var_28_int, var_52_int); // 0x209 Func
	var_53_int = 0; // 0x20b PushI
	var_54_bool = var_28_int == var_53_int; // 0x20c Eq
	if(var_54_bool == 0) goto Label_543; // 0x20d JumpB
	var_55_int = var_26_int; // 0x20e Push
	if(var_55_int == 0) goto Label_542; // 0x20f JumpB
	irand(var_29_int, var_26_int); // 0x210 Func
	var_56_string = "all"; // 0x212 PushS
	var_57_string = ""; var_58_int = 0; // 0x213 PushV
	var_58_int = var_29_int; // 0x214 Mov
	func_768(var_57_string, var_58_int); // 0x215 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x217 Func
	WaitForAnimEnd(var_30_bool); // 0x219 Func
	var_59_bool = var_30_bool == 0; // 0x21b Not
	if(var_59_bool == 0) goto Label_542; // 0x21c JumpB
	goto Label_571; // 0x21d Jump
	
Label_571:
	ResetAAS(); // 0x23b Func
	return 14; // 0x23d Return
	
Label_542:
	goto Label_560; // 0x21e Jump
	
Label_560:
	var_60_bool = 0; // 0x230 PushV
	func_574(var_60_bool); // 0x231 NEW_2
	var_61_bool = var_60_bool == 0; // 0x233 Not
	if(var_61_bool == 0) goto Label_566; // 0x234 JumpB
	goto Label_571; // 0x235 Jump
	
Label_566:
	ResetAAS(); // 0x236 Func
	var_62_int = 1; // 0x238 PushI
	var_27_int = var_27_int + var_62_int; // 0x239 Add2
	goto Label_509; // 0x23a Jump
	
Label_543:
	var_63_int = 1; // 0x21f PushI
	var_64_bool = var_28_int == var_63_int; // 0x220 Eq
	if(var_64_bool == 0) goto Label_557; // 0x221 JumpB
	var_65_int = 4; // 0x222 PushI
	rand(var_31_float, var_65_int); // 0x223 Func
	var_66_int = 1; // 0x225 PushI
	var_67_int = var_31_float + var_66_int; // 0x226 Add
	Sleep(var_67_int, var_32_bool); // 0x227 Func
	var_68_bool = var_32_bool == 0; // 0x229 Not
	if(var_68_bool == 0) goto Label_556; // 0x22a JumpB
	goto Label_571; // 0x22b Jump
	
Label_556:
	goto Label_560; // 0x22c Jump
	
Label_557:
	var_69_int = var_27_int; // 0x22d Push
	if(var_69_int == 0) goto Label_560; // 0x22e JumpB
	goto Label_571; // 0x22f Jump
}


func_758(var_74_int)
{
	var_74_int = 515569; // 0x2f6 MovI
	return 0; // 0x2f7 Return
}


func_760(var_73_int)
{
	var_73_int = 503354; // 0x2f8 MovI
	return 0; // 0x2f9 Return
}


func_762(var_75_string)
{
	var_75_string = "ui/NPC_wmask.png"; // 0x2fa MovS
	return 0; // 0x2fb Return
}


func_764(var_76_string)
{
	var_76_string = "ui/NPC_wmask_b.png"; // 0x2fc MovS
	return 0; // 0x2fd Return
}


func_766(var_68_bool)
{
	var_68_bool = 0; // 0x2fe MovB
	return 0; // 0x2ff Return
}


