task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xcd PushI
	if(var_12_int == 0) goto Label_398; // 0xce JumpB
	func_727(); // 0xd0 NEW_2
	var_14_int = 38055; // 0xd2 PushI
	var_15_bool = var_11_object == var_14_int; // 0xd3 Eq
	if(var_15_bool == 0) goto Label_218; // 0xd4 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xd5 PushV
	var_16_object = var_1_object; // 0xd6 MovT
	var_17_object = var_0_object; // 0xd7 MovT
	func_773(); // 0xd8 NEW_2
	
Label_218:
	var_20_int = 38069; // 0xda PushI
	var_21_bool = var_11_object == var_20_int; // 0xdb Eq
	if(var_21_bool == 0) goto Label_226; // 0xdc JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xdd PushV
	var_22_object = var_1_object; // 0xde MovT
	var_23_object = var_0_object; // 0xdf MovT
	func_779(); // 0xe0 NEW_2
	
Label_226:
	var_26_int = 38054; // 0xe2 PushI
	var_27_bool = var_10_bool == var_26_int; // 0xe3 Eq
	if(var_27_bool == 0) goto Label_299; // 0xe4 JumpB
	var_28_bool = 0; // 0xe5 PushV
	var_28_bool = 0; // 0xe6 MovB
	var_29_bool = 0; var_30_object = Obj(); // 0xe7 PushV
	var_30_object = var_1_object; // 0xe8 MovT
	func_785(var_30_object); // 0xe9 NEW_2
	if(var_29_bool == 0) goto Label_243; // 0xeb JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0xec PushV
	var_38_object = var_1_object; // 0xed MovT
	func_797(var_38_object); // 0xee NEW_2
	var_43_bool = var_37_bool == 0; // 0xf0 Not
	if(var_43_bool == 0) goto Label_243; // 0xf1 JumpB
	var_28_bool = 1; // 0xf2 MovB
	
Label_243:
	if(var_28_bool == 0) goto Label_269; // 0xf3 JumpB
	var_44_string = ""; // 0xf4 PushV
	var_44_string = "Neutral"; // 0xf5 MovS
	func_182(var_11_object, var_44_string); // 0xf6 NEW_2
	var_61_int = 536270; // 0xf8 PushI
	SetMessage(var_61_int); // 0xf9 TObjFunc
	ClearReplies(); // 0xfb TObjFunc
	var_62_bool = 0; var_63_object = Obj(); // 0xfd PushV
	var_63_object = var_1_object; // 0xfe MovT
	func_809(var_63_object); // 0xff NEW_2
	if(var_62_bool == 0) goto Label_263; // 0x101 JumpB
	var_68_int = 536271; // 0x102 PushI
	var_69_int = 38074; // 0x103 PushI
	var_70_int = 38055; // 0x104 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x105 TObjFunc
	
Label_263:
	var_71_int = 536289; // 0x107 PushI
	var_72_int = -1; // 0x108 PushI
	var_73_int = 38073; // 0x109 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x10a TObjFunc
	return 0; // 0x10c Return
	
Label_269:
	var_74_string = ""; // 0x10d PushV
	var_74_string = "Neutral"; // 0x10e MovS
	func_182(var_11_object, var_74_string); // 0x10f NEW_2
	var_75_int = 536284; // 0x111 PushI
	SetMessage(var_75_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_76_bool = 0; var_77_object = Obj(); // 0x116 PushV
	var_77_object = var_1_object; // 0x117 MovT
	func_821(var_77_object); // 0x118 NEW_2
	if(var_76_bool == 0) goto Label_288; // 0x11a JumpB
	var_82_int = 536285; // 0x11b PushI
	var_83_int = 38070; // 0x11c PushI
	var_84_int = 38069; // 0x11d PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x11e TObjFunc
	
Label_288:
	var_85_int = 536288; // 0x120 PushI
	var_86_int = -1; // 0x121 PushI
	var_87_int = 38072; // 0x122 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x123 TObjFunc
	var_88_int = 536291; // 0x125 PushI
	var_89_int = -1; // 0x126 PushI
	var_90_int = 38075; // 0x127 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x128 TObjFunc
	return 0; // 0x12a Return
	
Label_299:
	var_91_int = 38070; // 0x12b PushI
	var_92_bool = var_10_bool == var_91_int; // 0x12c Eq
	if(var_92_bool == 0) goto Label_317; // 0x12d JumpB
	var_93_string = ""; // 0x12e PushV
	var_93_string = "Neutral"; // 0x12f MovS
	func_182(var_11_object, var_93_string); // 0x130 NEW_2
	var_94_int = 536286; // 0x132 PushI
	SetMessage(var_94_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_95_int = 536287; // 0x137 PushI
	var_96_int = 38076; // 0x138 PushI
	var_97_int = 38071; // 0x139 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x13a TObjFunc
	return 0; // 0x13c Return
	
Label_317:
	var_98_int = 38076; // 0x13d PushI
	var_99_bool = var_10_bool == var_98_int; // 0x13e Eq
	if(var_99_bool == 0) goto Label_340; // 0x13f JumpB
	var_100_string = ""; // 0x140 PushV
	var_100_string = "Neutral"; // 0x141 MovS
	func_182(var_11_object, var_100_string); // 0x142 NEW_2
	var_101_int = 536292; // 0x144 PushI
	SetMessage(var_101_int); // 0x145 TObjFunc
	ClearReplies(); // 0x147 TObjFunc
	var_102_int = 536293; // 0x149 PushI
	var_103_int = 38079; // 0x14a PushI
	var_104_int = 38077; // 0x14b PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x14c TObjFunc
	var_105_int = 536294; // 0x14e PushI
	var_106_int = -1; // 0x14f PushI
	var_107_int = 38078; // 0x150 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x151 TObjFunc
	return 0; // 0x153 Return
	
Label_340:
	var_108_int = 38079; // 0x154 PushI
	var_109_bool = var_10_bool == var_108_int; // 0x155 Eq
	if(var_109_bool == 0) goto Label_358; // 0x156 JumpB
	var_110_string = ""; // 0x157 PushV
	var_110_string = "Neutral"; // 0x158 MovS
	func_182(var_11_object, var_110_string); // 0x159 NEW_2
	var_111_int = 536295; // 0x15b PushI
	SetMessage(var_111_int); // 0x15c TObjFunc
	ClearReplies(); // 0x15e TObjFunc
	var_112_int = 536296; // 0x160 PushI
	var_113_int = -1; // 0x161 PushI
	var_114_int = 38080; // 0x162 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x163 TObjFunc
	return 0; // 0x165 Return
	
Label_358:
	var_115_int = 38074; // 0x166 PushI
	var_116_bool = var_10_bool == var_115_int; // 0x167 Eq
	if(var_116_bool == 0) goto Label_386; // 0x168 JumpB
	var_117_string = ""; // 0x169 PushV
	var_117_string = "Neutral"; // 0x16a MovS
	func_182(var_11_object, var_117_string); // 0x16b NEW_2
	var_118_int = 536290; // 0x16d PushI
	SetMessage(var_118_int); // 0x16e TObjFunc
	ClearReplies(); // 0x170 TObjFunc
	var_119_int = 536297; // 0x172 PushI
	var_120_int = -1; // 0x173 PushI
	var_121_int = 38081; // 0x174 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x175 TObjFunc
	var_122_int = 536298; // 0x177 PushI
	var_123_int = -1; // 0x178 PushI
	var_124_int = 38082; // 0x179 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x17a TObjFunc
	var_125_int = 536299; // 0x17c PushI
	var_126_int = -1; // 0x17d PushI
	var_127_int = 38083; // 0x17e PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x17f TObjFunc
	return 0; // 0x181 Return
	
Label_386:
	var_3_string = 1; // 0x182 TMovB
	var_128_bool = 0; // 0x183 PushV
	func_858(var_128_bool); // 0x184 NEW_2
	if(var_128_bool == 0) goto Label_394; // 0x186 JumpB
	lshStopAnimation(); // 0x187 Func
	goto Label_396; // 0x189 Jump
	
Label_396:
	return 0; // 0x18c Return
	
Label_394:
	StopAnimation(); // 0x18a Func
	
Label_398:
	return 0; // 0x18e Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_485(var_9_object, var_10_object); // 0x19b NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x19d PushV
	var_15_object = var_10_object; // 0x19e Mov
	TaskCall(0); // 0x19f TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x1a0 NEW_2
	TaskReturn(); // 0x1a1 TaskReturn
	return 0; // 0x1a3 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x1cf PushI
	var_12_bool = var_10_int == var_11_int; // 0x1d0 Eq
	if(var_12_bool == 0) goto Label_484; // 0x1d1 JumpB
	var_13_bool = 0; // 0x1d2 PushV
	func_447(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x1d3 NEW_2
	if(var_13_bool == 0) goto Label_478; // 0x1d5 JumpB
	var_26_bool = var_2_object == 0; // 0x1d6 Not
	if(var_26_bool == 0) goto Label_477; // 0x1d7 JumpB
	var_27_object = Obj(); // 0x1d8 PushV
	var_27_object = var_4_bool; // 0x1d9 MovT
	func_716(var_27_object); // 0x1da NEW_2
	var_2_object = 1; // 0x1dc TMovB
	
Label_477:
	goto Label_484; // 0x1dd Jump
	
Label_484:
	return 0; // 0x1e4 Return
	
Label_478:
	var_34_object = var_2_object; // 0x1de PushT
	if(var_34_object == 0) goto Label_484; // 0x1df JumpB
	var_35_string = "head"; // 0x1e0 PushS
	UnlookAsync(var_35_string); // 0x1e1 Func
	var_2_object = 0; // 0x1e3 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_399:
	var_10_int = 1; // 0x18f PushI
	Sleep(var_10_int); // 0x190 Func
	var_11_float = 0; var_12_float = 0; // 0x192 PushV
	var_11_float = 300; // 0x193 MovI
	var_12_float = 100; // 0x194 MovI
	func_420(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x195 NEW_2
	goto Label_399; // 0x197 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_598(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_852(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_850(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_854(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_856(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_833(var_77_int); // 0x22 NEW_2
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
	var_174_bool = var_24_bool == 0; // 0x38 Not
	if(var_174_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_175_object = Obj(); // 0x3f PushV
	var_175_object = var_15_object; // 0x40 Mov
	func_667(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_773()
{
	var_18_string = "ood4SoborGuard1"; // 0x306 PushS
	var_19_int = 1; // 0x307 PushI
	SetVariable(var_18_string, var_19_int); // 0x308 Func
	return 0; // 0x30a Return
}


func_779()
{
	var_24_string = "ood4TheaterGuard2"; // 0x30c PushS
	var_25_int = 1; // 0x30d PushI
	SetVariable(var_24_string, var_25_int); // 0x30e Func
	return 0; // 0x310 Return
}


func_785(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x312 PushV
	var_97_string = "d4q01KeyWasted"; // 0x313 MovS
	func_744(var_96_int, var_97_string); // 0x314 NEW_2
	var_100_int = 0; // 0x316 PushI
	var_101_bool = var_96_int != var_100_int; // 0x317 Neq
	if(var_101_bool == 0) goto Label_795; // 0x318 JumpB
	var_94_bool = 1; // 0x319 MovB
	return 0; // 0x31a Return
	
Label_795:
	var_94_bool = 0; // 0x31b MovB
	return 0; // 0x31c Return
}


func_667()
{
	var_176_bool = 0; var_177_bool = 0; // 0x29b PushV
	var_178_bool = 1; // 0x29c PushB
	CameraSwitchToNormal(var_178_bool); // 0x29d Func
	var_179_bool = 0; // 0x29f PushV
	func_858(var_179_bool); // 0x2a0 NEW_2
	if(var_179_bool == 0) goto Label_676; // 0x2a2 JumpB
	goto Label_684; // 0x2a3 Jump
	
Label_684:
	return 2; // 0x2ac Return
	
Label_676:
	var_180_string = "head"; // 0x2a4 PushS
	HasAnimationTrack(var_177_bool, var_180_string); // 0x2a5 Func
	var_181_bool = var_177_bool; // 0x2a7 Push
	if(var_181_bool == 0) goto Label_684; // 0x2a8 JumpB
	var_182_string = "head"; // 0x2a9 PushS
	UnlookAsync(var_182_string); // 0x2aa Func
}


func_797(var_102_bool)
{
	var_104_int = 0; var_105_string = ""; // 0x31e PushV
	var_105_string = "d4q01"; // 0x31f MovS
	func_744(var_104_int, var_105_string); // 0x320 NEW_2
	var_106_int = 1000; // 0x322 PushI
	var_107_bool = var_104_int == var_106_int; // 0x323 Eq
	if(var_107_bool == 0) goto Label_807; // 0x324 JumpB
	var_102_bool = 1; // 0x325 MovB
	return 0; // 0x326 Return
	
Label_807:
	var_102_bool = 0; // 0x327 MovB
	return 0; // 0x328 Return
}


func_420(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x1a5 PushV
	func_593(var_13_bool); // 0x1a6 NEW_2
	var_16_bool = var_13_bool == 0; // 0x1a8 Not
	if(var_16_bool == 0) goto Label_427; // 0x1a9 JumpB
	return 0; // 0x1aa Return
	
Label_427:
	var_17_string = "player"; // 0x1ab PushS
	FindActor(var_9_object, var_17_string); // 0x1ac Func
	var_2_object = 0; // 0x1ae TMovB
	var_3_string = 0; // 0x1af TMovB
	var_0_object = var_11_float; // 0x1b0 TMov
	var_1_object = var_12_float; // 0x1b1 TMov
	var_18_int = 10; // 0x1b2 PushI
	var_19_float = 1.0; // 0x1b3 PushF
	SetTimer(var_18_int, var_19_float); // 0x1b4 Func
	func_499(); // 0x1b7 NEW_2
	var_71_bool = var_3_string == 0; // 0x1b9 Not
	if(var_71_bool == 0) goto Label_446; // 0x1ba JumpB
	var_72_int = 10; // 0x1bb PushI
	KillTimer(var_72_int); // 0x1bc Func
	
Label_446:
	return 0; // 0x1be Return
}


func_809(var_127_bool)
{
	var_129_int = 0; var_130_string = ""; // 0x32a PushV
	var_130_string = "ood4SoborGuard1"; // 0x32b MovS
	func_744(var_129_int, var_130_string); // 0x32c NEW_2
	var_131_int = 0; // 0x32e PushI
	var_132_bool = var_129_int == var_131_int; // 0x32f Eq
	if(var_132_bool == 0) goto Label_819; // 0x330 JumpB
	var_127_bool = 1; // 0x331 MovB
	return 0; // 0x332 Return
	
Label_819:
	var_127_bool = 0; // 0x333 MovB
	return 0; // 0x334 Return
}


func_685(var_141_string)
{
	var_142_bool = 0; var_143_float = 0; var_144_float = 0; var_145_bool = 0; var_146_float = 0; var_147_float = 0; // 0x2ad PushV
	lshHasAnimation(var_145_bool, var_141_string); // 0x2ae Func
	var_148_bool = var_145_bool; // 0x2b0 Push
	if(var_148_bool == 0) goto Label_696; // 0x2b1 JumpB
	lshGetAnimTimes(var_141_string, var_146_float, var_147_float); // 0x2b2 Func
	var_149_bool = 0; // 0x2b4 PushB
	lshPlayAnimation(var_146_float, var_147_float, var_149_bool); // 0x2b5 Func
	goto Label_700; // 0x2b7 Jump
	
Label_700:
	return 6; // 0x2bc Return
	
Label_696:
	var_150_string = "Can't find lsh animation : "; // 0x2b8 PushS
	var_151_int = var_150_string + var_141_string; // 0x2b9 Add
	Trace(var_151_int); // 0x2ba Func
}


func_821(var_159_bool)
{
	var_161_int = 0; var_162_string = ""; // 0x336 PushV
	var_162_string = "ood4TheaterGuard2"; // 0x337 MovS
	func_744(var_161_int, var_162_string); // 0x338 NEW_2
	var_163_int = 0; // 0x33a PushI
	var_164_bool = var_161_int == var_163_int; // 0x33b Eq
	if(var_164_bool == 0) goto Label_831; // 0x33c JumpB
	var_159_bool = 1; // 0x33d MovB
	return 0; // 0x33e Return
	
Label_831:
	var_159_bool = 0; // 0x33f MovB
	return 0; // 0x340 Return
}


func_182(var_2_object, var_109_string)
{
	var_110_bool = 0; // 0xb7 PushV
	func_858(var_110_bool); // 0xb8 NEW_2
	var_111_bool = var_110_bool == 0; // 0xba Not
	if(var_111_bool == 0) goto Label_189; // 0xbb JumpB
	return 0; // 0xbc Return
	
Label_189:
	var_112_bool = var_109_string == var_2_object; // 0xbd Eq
	if(var_112_bool == 0) goto Label_192; // 0xbe JumpB
	return 0; // 0xbf Return
	
Label_192:
	var_113_string = ""; var_114_bool = 0; // 0xc0 PushV
	var_113_string = var_109_string; // 0xc1 Mov
	var_115_string = ""; // 0xc2 PushS
	var_116_bool = var_109_string == var_115_string; // 0xc3 Eq
	if(var_116_bool == 0) goto Label_199; // 0xc4 JumpB
	var_114_bool = 0; // 0xc5 MovB
	goto Label_200; // 0xc6 Jump
	
Label_200:
	func_701(var_113_string, var_114_bool); // 0xc8 NEW_2
	var_2_object = var_109_string; // 0xca TMov
	return 0; // 0xcb Return
	
Label_199:
	var_114_bool = 1; // 0xc7 MovB
}


func_701(var_113_string, var_114_bool)
{
	var_117_bool = 0; var_118_float = 0; var_119_float = 0; var_120_bool = 0; var_121_float = 0; var_122_float = 0; // 0x2bd PushV
	lshHasAnimation(var_120_bool, var_113_string); // 0x2be Func
	var_123_bool = var_120_bool; // 0x2c0 Push
	if(var_123_bool == 0) goto Label_711; // 0x2c1 JumpB
	lshGetAnimTimes(var_113_string, var_121_float, var_122_float); // 0x2c2 Func
	lshPlayAnimation(var_121_float, var_122_float, var_114_bool); // 0x2c4 Func
	goto Label_715; // 0x2c6 Jump
	
Label_715:
	return 6; // 0x2cb Return
	
Label_711:
	var_124_string = "Can't find lsh animation : "; // 0x2c7 PushS
	var_125_int = var_124_string + var_113_string; // 0x2c8 Add
	Trace(var_125_int); // 0x2c9 Func
}


func_447(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x1bf PushV
	var_16_bool = var_4_bool == 0; // 0x1c0 NullEq
	if(var_16_bool == 0) goto Label_452; // 0x1c1 JumpB
	var_13_bool = 0; // 0x1c2 MovB
	return 2; // 0x1c3 Return
	
Label_452:
	var_17_float = 0; var_18_object = Obj(); // 0x1c4 PushV
	var_18_object = var_4_bool; // 0x1c5 MovT
	func_585(var_18_object); // 0x1c6 NEW_2
	var_15_float = sqrt(var_17_float); // 0x1c8 Sqrt2
	var_25_object = var_2_object; // 0x1c9 PushT
	if(var_25_object == 0) goto Label_460; // 0x1ca JumpB
	var_15_float = var_15_float - var_1_object; // 0x1cb Sub2
	
Label_460:
	var_13_bool = var_15_float < var_0_object; // 0x1cc LT2
	return 2; // 0x1cd Return
}


func_833(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x341 PushV
	var_80_string = "branch"; // 0x342 PushS
	GetVariable(var_80_string, var_79_int); // 0x343 Func
	var_81_int = 0; // 0x345 PushI
	var_82_bool = var_79_int == var_81_int; // 0x346 Eq
	if(var_82_bool == 0) goto Label_843; // 0x347 JumpB
	var_77_int = 1; // 0x348 MovI
	return 2; // 0x349 Return
	
Label_843:
	var_83_int = 1; // 0x34b PushI
	var_84_bool = var_79_int == var_83_int; // 0x34c Eq
	if(var_84_bool == 0) goto Label_848; // 0x34d JumpB
	var_77_int = 2; // 0x34e MovI
	return 2; // 0x34f Return
	
Label_848:
	var_77_int = 3; // 0x350 MovI
	return 2; // 0x351 Return
}


func_578(var_61_bool)
{
	var_61_bool = 1; // 0x242 MovB
	return 0; // 0x243 Return
}


func_580()
{
	StopAnimation(); // 0x244 Func
	StopGroup0(); // 0x246 Func
	return 0; // 0x248 Return
}


func_585(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x249 PushV
	GetPosition(var_22_cvector); // 0x24a Func
	GetPosition(var_23_cvector); // 0x24c ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x24e Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x24f Or2
	return 6; // 0x250 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_152; // 0x4f JumpB
	var_93_bool = 0; // 0x50 PushV
	var_93_bool = 0; // 0x51 MovB
	var_94_bool = 0; var_95_object = Obj(); // 0x52 PushV
	var_95_object = var_1_object; // 0x53 MovT
	func_785(var_95_object); // 0x54 NEW_2
	if(var_94_bool == 0) goto Label_94; // 0x56 JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x57 PushV
	var_103_object = var_1_object; // 0x58 MovT
	func_797(var_103_object); // 0x59 NEW_2
	var_108_bool = var_102_bool == 0; // 0x5b Not
	if(var_108_bool == 0) goto Label_94; // 0x5c JumpB
	var_93_bool = 1; // 0x5d MovB
	
Label_94:
	if(var_93_bool == 0) goto Label_120; // 0x5e JumpB
	var_109_string = ""; // 0x5f PushV
	var_109_string = "Neutral"; // 0x60 MovS
	func_182(var_87_object, var_109_string); // 0x61 NEW_2
	var_126_int = 536270; // 0x63 PushI
	SetMessage(var_126_int); // 0x64 TObjFunc
	ClearReplies(); // 0x66 TObjFunc
	var_127_bool = 0; var_128_object = Obj(); // 0x68 PushV
	var_128_object = var_1_object; // 0x69 MovT
	func_809(var_128_object); // 0x6a NEW_2
	if(var_127_bool == 0) goto Label_114; // 0x6c JumpB
	var_133_int = 536271; // 0x6d PushI
	var_134_int = 38074; // 0x6e PushI
	var_135_int = 38055; // 0x6f PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x70 TObjFunc
	
Label_114:
	var_136_int = 536289; // 0x72 PushI
	var_137_int = -1; // 0x73 PushI
	var_138_int = 38073; // 0x74 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x75 TObjFunc
	goto Label_152; // 0x77 Jump
	
Label_152:
	var_139_bool = 0; // 0x98 PushV
	func_858(var_139_bool); // 0x99 NEW_2
	if(var_139_bool == 0) goto Label_167; // 0x9b JumpB
	
Label_156:
	lshWaitForAnimEnd(); // 0x9c Func
	var_140_string = var_3_string; // 0x9e PushT
	if(var_140_string == 0) goto Label_161; // 0x9f JumpB
	goto Label_166; // 0xa0 Jump
	
Label_166:
	goto Label_181; // 0xa6 Jump
	
Label_181:
	return 0; // 0xb5 Return
	
Label_161:
	var_141_string = ""; // 0xa1 PushV
	var_141_string = var_2_object; // 0xa2 MovT
	func_685(var_141_string); // 0xa3 NEW_2
	goto Label_156; // 0xa5 Jump
	
Label_167:
	var_152_string = "all"; // 0xa7 PushS
	var_153_string = "idle"; // 0xa8 PushS
	PlayAnimation(var_152_string, var_153_string); // 0xa9 Func
	
Label_171:
	WaitForAnimEnd(); // 0xab Func
	var_154_string = var_3_string; // 0xad PushT
	if(var_154_string == 0) goto Label_176; // 0xae JumpB
	goto Label_181; // 0xaf Jump
	
Label_176:
	var_155_string = "all"; // 0xb0 PushS
	var_156_string = "idle"; // 0xb1 PushS
	PlayAnimation(var_155_string, var_156_string); // 0xb2 Func
	goto Label_171; // 0xb4 Jump
	
Label_120:
	var_157_string = ""; // 0x78 PushV
	var_157_string = "Neutral"; // 0x79 MovS
	func_182(var_87_object, var_157_string); // 0x7a NEW_2
	var_158_int = 536284; // 0x7c PushI
	SetMessage(var_158_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_159_bool = 0; var_160_object = Obj(); // 0x81 PushV
	var_160_object = var_1_object; // 0x82 MovT
	func_821(var_160_object); // 0x83 NEW_2
	if(var_159_bool == 0) goto Label_139; // 0x85 JumpB
	var_165_int = 536285; // 0x86 PushI
	var_166_int = 38070; // 0x87 PushI
	var_167_int = 38069; // 0x88 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x89 TObjFunc
	
Label_139:
	var_168_int = 536288; // 0x8b PushI
	var_169_int = -1; // 0x8c PushI
	var_170_int = 38072; // 0x8d PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x8e TObjFunc
	var_171_int = 536291; // 0x90 PushI
	var_172_int = -1; // 0x91 PushI
	var_173_int = 38075; // 0x92 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x93 TObjFunc
	goto Label_152; // 0x95 Jump
}


func_716(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x2cc PushV
	GetEyesHeight(var_30_float); // 0x2cd ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x2cf MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x2d0 PushE
	var_32_float = var_30_float; // 0x2d1 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x2d2 PopE
	var_33_string = "head"; // 0x2d3 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x2d4 Func
	return 4; // 0x2d6 Return
}


func_593(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x251 PushV
	IsLoaded(var_15_bool); // 0x252 Func
	var_13_bool = var_15_bool; // 0x254 Mov
	return 2; // 0x255 Return
}


func_850(var_74_int)
{
	var_74_int = 515556; // 0x352 MovI
	return 0; // 0x353 Return
}


func_852(var_73_int)
{
	var_73_int = 503341; // 0x354 MovI
	return 0; // 0x355 Return
}


func_854(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png"; // 0x356 MovS
	return 0; // 0x357 Return
}


func_727()
{
	var_13_bool = 0; // 0x2d7 PushV
	func_858(var_13_bool); // 0x2d8 NEW_2
	if(var_13_bool == 0) goto Label_733; // 0x2da JumpB
	lshStopSpeech(); // 0x2db Func
	
Label_733:
	return 0; // 0x2dd Return
}


func_598(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x256 PushV
	GetPosition(var_38_cvector); // 0x257 ObjFunc
	GetEyesHeight(var_37_float); // 0x259 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x25b PushE
	var_46_float = var_46_float + var_37_float; // 0x25c Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x25d PopE
	GetPosition(var_39_cvector); // 0x25e Func
	GetEyesHeight(var_37_float); // 0x260 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x262 PushE
	var_47_float = var_47_float + var_37_float; // 0x263 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x264 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x265 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x266 PushE
	var_48_float = 0; // 0x267 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x268 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x269 Or
	var_50_float = sqrt(var_49_int); // 0x26a Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x26b Div2
	var_41_cvector = -var_40_cvector; // 0x26c Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x26d Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x26e PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x26f PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x270 Xor2
	func_734(var_52_cvector, var_53_cvector); // 0x271 NEW_2
	var_60_int = 25; // 0x273 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x274 Mult
	var_62_int = var_51_float + var_61_float; // 0x275 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x276 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x277 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x278 Add2
	IsOverrideActive(var_44_bool); // 0x279 Func
	var_64_bool = var_44_bool; // 0x27b Push
	if(var_64_bool == 0) goto Label_639; // 0x27c JumpB
	var_25_bool = 0; // 0x27d MovB
	return 18; // 0x27e Return
	
Label_639:
	StopWorld(); // 0x27f Func
	var_65_bool = 1; // 0x281 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x282 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x284 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x285 PushE
	Rotate(var_66_float, var_67_float); // 0x286 Func
	var_68_bool = 0; // 0x288 PushV
	func_858(var_68_bool); // 0x289 NEW_2
	if(var_68_bool == 0) goto Label_653; // 0x28b JumpB
	goto Label_661; // 0x28c Jump
	
Label_661:
	CameraWaitForPlayFinish(); // 0x295 Func
	ResumeWorld(); // 0x297 Func
	var_25_bool = 1; // 0x299 MovB
	return 18; // 0x29a Return
	
Label_653:
	var_69_string = "head"; // 0x28d PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x28e Func
	var_70_bool = var_45_bool; // 0x290 Push
	if(var_70_bool == 0) goto Label_661; // 0x291 JumpB
	var_71_string = "head"; // 0x292 PushS
	LookAsyncCamera(var_71_string); // 0x293 Func
}


func_856(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png"; // 0x358 MovS
	return 0; // 0x359 Return
}


func_858(var_68_bool)
{
	var_68_bool = 0; // 0x35a MovB
	return 0; // 0x35b Return
}


func_734(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x2de PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x2df Or
	var_56_float = sqrt(var_57_int); // 0x2e0 Sqrt2
	var_58_float = 0.0; // 0x2e1 PushF
	var_59_bool = var_56_float < var_58_float; // 0x2e2 LT
	if(var_59_bool == 0) goto Label_742; // 0x2e3 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x2e4 MovV
	return 2; // 0x2e5 Return
	
Label_742:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x2e6 Div2
	return 2; // 0x2e7 Return
}


func_485(var_2_object, var_3_string)
{
	func_580(); // 0x1e6 NEW_2
	var_11_int = 10; // 0x1e8 PushI
	KillTimer(var_11_int); // 0x1e9 Func
	var_12_object = var_2_object; // 0x1eb PushT
	if(var_12_object == 0) goto Label_497; // 0x1ec JumpB
	var_13_string = "head"; // 0x1ed PushS
	UnlookAsync(var_13_string); // 0x1ee Func
	var_2_object = 0; // 0x1f0 TMovB
	
Label_497:
	var_3_string = 1; // 0x1f1 TMovB
	return 0; // 0x1f2 Return
}


func_744(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x2e8 PushV
	GetVariable(var_97_string, var_99_int); // 0x2e9 Func
	var_96_int = var_99_int; // 0x2eb Mov
	return 2; // 0x2ec Return
}


func_749(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x2ed PushV
	var_45_string = "idle"; // 0x2ee MovS
	var_46_int = var_43_int; // 0x2ef Push
	if(var_46_int == 0) goto Label_754; // 0x2f0 JumpB
	var_45_string = var_45_string + var_43_int; // 0x2f1 Add2
	
Label_754:
	var_42_string = var_45_string; // 0x2f2 Mov
	return 2; // 0x2f3 Return
}


func_499()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x1f3 PushV
	WaitForAnimEnd(); // 0x1f4 Func
	var_34_bool = 0; // 0x1f6 PushV
	func_593(var_34_bool); // 0x1f7 NEW_2
	var_35_bool = var_34_bool == 0; // 0x1f9 Not
	if(var_35_bool == 0) goto Label_508; // 0x1fa JumpB
	return 14; // 0x1fb Return
	
Label_508:
	var_36_int = 0; // 0x1fc PushV
	func_756(var_36_int); // 0x1fd NEW_2
	var_27_int = var_36_int; // 0x1fe Mov
	var_28_int = 0; // 0x200 MovI
	
Label_513:
	var_49_bool = 0; // 0x201 PushV
	var_49_bool = 0; // 0x202 MovB
	var_50_int = 5; // 0x203 PushI
	var_51_bool = var_28_int < var_50_int; // 0x204 LT
	if(var_51_bool == 0) goto Label_523; // 0x205 JumpB
	var_52_bool = 0; // 0x206 PushV
	func_593(var_52_bool); // 0x207 NEW_2
	if(var_52_bool == 0) goto Label_523; // 0x209 JumpB
	var_49_bool = 1; // 0x20a MovB
	
Label_523:
	if(var_49_bool == 0) goto Label_575; // 0x20b JumpB
	var_53_int = 3; // 0x20c PushI
	irand(var_29_int, var_53_int); // 0x20d Func
	var_54_int = 0; // 0x20f PushI
	var_55_bool = var_29_int == var_54_int; // 0x210 Eq
	if(var_55_bool == 0) goto Label_547; // 0x211 JumpB
	var_56_int = var_27_int; // 0x212 Push
	if(var_56_int == 0) goto Label_546; // 0x213 JumpB
	irand(var_30_int, var_27_int); // 0x214 Func
	var_57_string = "all"; // 0x216 PushS
	var_58_string = ""; var_59_int = 0; // 0x217 PushV
	var_59_int = var_30_int; // 0x218 Mov
	func_749(var_58_string, var_59_int); // 0x219 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x21b Func
	WaitForAnimEnd(var_31_bool); // 0x21d Func
	var_60_bool = var_31_bool == 0; // 0x21f Not
	if(var_60_bool == 0) goto Label_546; // 0x220 JumpB
	goto Label_575; // 0x221 Jump
	
Label_575:
	ResetAAS(); // 0x23f Func
	return 14; // 0x241 Return
	
Label_546:
	goto Label_564; // 0x222 Jump
	
Label_564:
	var_61_bool = 0; // 0x234 PushV
	func_578(var_61_bool); // 0x235 NEW_2
	var_62_bool = var_61_bool == 0; // 0x237 Not
	if(var_62_bool == 0) goto Label_570; // 0x238 JumpB
	goto Label_575; // 0x239 Jump
	
Label_570:
	ResetAAS(); // 0x23a Func
	var_63_int = 1; // 0x23c PushI
	var_28_int = var_28_int + var_63_int; // 0x23d Add2
	goto Label_513; // 0x23e Jump
	
Label_547:
	var_64_int = 1; // 0x223 PushI
	var_65_bool = var_29_int == var_64_int; // 0x224 Eq
	if(var_65_bool == 0) goto Label_561; // 0x225 JumpB
	var_66_int = 4; // 0x226 PushI
	rand(var_32_float, var_66_int); // 0x227 Func
	var_67_int = 1; // 0x229 PushI
	var_68_int = var_32_float + var_67_int; // 0x22a Add
	Sleep(var_68_int, var_33_bool); // 0x22b Func
	var_69_bool = var_33_bool == 0; // 0x22d Not
	if(var_69_bool == 0) goto Label_560; // 0x22e JumpB
	goto Label_575; // 0x22f Jump
	
Label_560:
	goto Label_564; // 0x230 Jump
	
Label_561:
	var_70_int = var_28_int; // 0x231 Push
	if(var_70_int == 0) goto Label_564; // 0x232 JumpB
	goto Label_575; // 0x233 Jump
}


func_756(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x2f4 PushV
	var_39_int = 0; // 0x2f5 MovI
	
Label_758:
	var_41_string = "all"; // 0x2f6 PushS
	var_42_string = ""; var_43_int = 0; // 0x2f7 PushV
	var_43_int = var_39_int; // 0x2f8 Mov
	func_749(var_42_string, var_43_int); // 0x2f9 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x2fb Func
	var_47_bool = var_40_bool == 0; // 0x2fd Not
	if(var_47_bool == 0) goto Label_768; // 0x2fe JumpB
	goto Label_771; // 0x2ff Jump
	
Label_771:
	var_36_int = var_39_int; // 0x303 Mov
	return 4; // 0x304 Return
	
Label_768:
	var_48_int = 1; // 0x300 PushI
	var_39_int = var_39_int + var_48_int; // 0x301 Add2
	goto Label_758; // 0x302 Jump
}


