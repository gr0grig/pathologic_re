task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xb9 PushI
	if(var_14_int == 0) goto Label_304; // 0xba JumpB
	func_698(); // 0xbc NEW_2
	var_16_int = 35730; // 0xbe PushI
	var_17_bool = var_13_bool == var_16_int; // 0xbf Eq
	if(var_17_bool == 0) goto Label_198; // 0xc0 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xc1 PushV
	var_18_object = var_1_object; // 0xc2 MovT
	var_19_object = var_0_object; // 0xc3 MovT
	func_756(); // 0xc4 NEW_2
	
Label_198:
	var_45_int = 35729; // 0xc6 PushI
	var_46_bool = var_12_bool == var_45_int; // 0xc7 Eq
	if(var_46_bool == 0) goto Label_251; // 0xc8 JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0xc9 PushV
	var_48_object = var_1_object; // 0xca MovT
	func_765(var_48_object); // 0xcb NEW_2
	if(var_47_bool == 0) goto Label_231; // 0xcd JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xce PushV
	var_55_object = var_1_object; // 0xcf MovT
	var_56_object = var_0_object; // 0xd0 MovT
	func_750(); // 0xd1 NEW_2
	var_59_string = ""; // 0xd3 PushV
	var_59_string = "Neutral"; // 0xd4 MovS
	func_162(var_13_bool, var_59_string); // 0xd5 NEW_2
	var_76_int = 534142; // 0xd7 PushI
	SetMessage(var_76_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_77_int = 534435; // 0xdc PushI
	var_78_int = 36067; // 0xdd PushI
	var_79_int = 36066; // 0xde PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xdf TObjFunc
	var_80_int = 534437; // 0xe1 PushI
	var_81_int = 36067; // 0xe2 PushI
	var_82_int = 36068; // 0xe3 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_83_string = ""; // 0xe7 PushV
	var_83_string = "Neutral"; // 0xe8 MovS
	func_162(var_13_bool, var_83_string); // 0xe9 NEW_2
	var_84_int = 534144; // 0xeb PushI
	SetMessage(var_84_int); // 0xec TObjFunc
	ClearReplies(); // 0xee TObjFunc
	var_85_int = 534145; // 0xf0 PushI
	var_86_int = -1; // 0xf1 PushI
	var_87_int = 35732; // 0xf2 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0xf3 TObjFunc
	var_88_int = 534443; // 0xf5 PushI
	var_89_int = -1; // 0xf6 PushI
	var_90_int = 36076; // 0xf7 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xf8 TObjFunc
	return 0; // 0xfa Return
	
Label_251:
	var_91_int = 36067; // 0xfb PushI
	var_92_bool = var_12_bool == var_91_int; // 0xfc Eq
	if(var_92_bool == 0) goto Label_274; // 0xfd JumpB
	var_93_string = ""; // 0xfe PushV
	var_93_string = "Neutral"; // 0xff MovS
	func_162(var_13_bool, var_93_string); // 0x100 NEW_2
	var_94_int = 534436; // 0x102 PushI
	SetMessage(var_94_int); // 0x103 TObjFunc
	ClearReplies(); // 0x105 TObjFunc
	var_95_int = 534438; // 0x107 PushI
	var_96_int = 36070; // 0x108 PushI
	var_97_int = 36069; // 0x109 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x10a TObjFunc
	var_98_int = 534442; // 0x10c PushI
	var_99_int = 36070; // 0x10d PushI
	var_100_int = 36074; // 0x10e PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x10f TObjFunc
	return 0; // 0x111 Return
	
Label_274:
	var_101_int = 36070; // 0x112 PushI
	var_102_bool = var_12_bool == var_101_int; // 0x113 Eq
	if(var_102_bool == 0) goto Label_292; // 0x114 JumpB
	var_103_string = ""; // 0x115 PushV
	var_103_string = "Neutral"; // 0x116 MovS
	func_162(var_13_bool, var_103_string); // 0x117 NEW_2
	var_104_int = 534439; // 0x119 PushI
	SetMessage(var_104_int); // 0x11a TObjFunc
	ClearReplies(); // 0x11c TObjFunc
	var_105_int = 534143; // 0x11e PushI
	var_106_int = -1; // 0x11f PushI
	var_107_int = 35730; // 0x120 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x121 TObjFunc
	return 0; // 0x123 Return
	
Label_292:
	var_3_string = 1; // 0x124 TMovB
	var_108_bool = 0; // 0x125 PushV
	func_856(var_108_bool); // 0x126 NEW_2
	if(var_108_bool == 0) goto Label_300; // 0x128 JumpB
	lshStopAnimation(); // 0x129 Func
	goto Label_302; // 0x12b Jump
	
Label_302:
	return 0; // 0x12e Return
	
Label_300:
	StopAnimation(); // 0x12c Func
	
Label_304:
	return 0; // 0x130 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_456(var_11_bool, var_12_object); // 0x139 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x13b PushV
	var_17_object = var_12_object; // 0x13c Mov
	TaskCall(0); // 0x13d TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x13e NEW_2
	TaskReturn(); // 0x13f TaskReturn
	return 0; // 0x141 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x169 PushS
	var_14_bool = var_12_string == var_13_string; // 0x16a Eq
	if(var_14_bool == 0) goto Label_367; // 0x16b JumpB
	func_340(var_12_string); // 0x16d NEW_2
	
Label_367:
	return 0; // 0x16f Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x170 PushT
	if(var_12_int == 0) goto Label_373; // 0x171 JumpB
	func_456(var_10_bool, var_11_bool); // 0x173 NEW_2
	
Label_373:
	var_16_bool = 0; // 0x175 PushV
	var_16_bool = 0; // 0x176 MovB
	var_17_int = var_5_int; // 0x177 PushT
	if(var_17_int == 0) goto Label_382; // 0x178 JumpB
	var_18_bool = 0; // 0x179 PushV
	func_389(var_18_bool); // 0x17a NEW_2
	if(var_18_bool == 0) goto Label_382; // 0x17c JumpB
	var_16_bool = 1; // 0x17d MovB
	
Label_382:
	if(var_16_bool == 0) goto Label_388; // 0x17e JumpB
	var_19_object = Obj(); // 0x17f PushV
	func_705(var_19_object); // 0x180 NEW_2
	RemoveActor(var_19_object); // 0x182 Func
	
Label_388:
	return 0; // 0x184 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x1b2 PushI
	var_14_bool = var_12_int == var_13_int; // 0x1b3 Eq
	if(var_14_bool == 0) goto Label_455; // 0x1b4 JumpB
	var_15_bool = 0; // 0x1b5 PushV
	func_418(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x1b6 NEW_2
	if(var_15_bool == 0) goto Label_449; // 0x1b8 JumpB
	var_28_bool = var_2_object == 0; // 0x1b9 Not
	if(var_28_bool == 0) goto Label_448; // 0x1ba JumpB
	var_29_object = Obj(); // 0x1bb PushV
	var_29_object = var_4_bool; // 0x1bc MovT
	func_687(var_29_object); // 0x1bd NEW_2
	var_2_object = 1; // 0x1bf TMovB
	
Label_448:
	goto Label_455; // 0x1c0 Jump
	
Label_455:
	return 0; // 0x1c7 Return
	
Label_449:
	var_36_object = var_2_object; // 0x1c1 PushT
	if(var_36_object == 0) goto Label_455; // 0x1c2 JumpB
	var_37_string = "head"; // 0x1c3 PushS
	UnlookAsync(var_37_string); // 0x1c4 Func
	var_2_object = 0; // 0x1c6 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x131 PushV
	var_12_float = 300; // 0x132 MovI
	var_13_float = 100; // 0x133 MovI
	func_322(var_11_bool, var_12_float, var_13_float); // 0x134 NEW_2
	return 0; // 0x136 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_569(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_850(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_848(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_852(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_854(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_831(var_79_int); // 0x22 NEW_2
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
	var_157_bool = var_26_bool == 0; // 0x38 Not
	if(var_157_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_158_object = Obj(); // 0x3f PushV
	var_158_object = var_17_object; // 0x40 Mov
	func_638(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_389(var_18_bool)
{
	var_18_bool = 1; // 0x185 MovB
	return 0; // 0x186 Return
}


func_391(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x188 PushV
	func_564(var_23_bool); // 0x189 NEW_2
	var_26_bool = var_23_bool == 0; // 0x18b Not
	if(var_26_bool == 0) goto Label_398; // 0x18c JumpB
	return 0; // 0x18d Return
	
Label_398:
	var_27_string = "player"; // 0x18e PushS
	FindActor(var_17_bool, var_27_string); // 0x18f Func
	var_2_object = 0; // 0x191 TMovB
	var_3_string = 0; // 0x192 TMovB
	var_0_object = var_21_float; // 0x193 TMov
	var_1_object = var_22_float; // 0x194 TMov
	var_28_int = 10; // 0x195 PushI
	var_29_float = 1.0; // 0x196 PushF
	SetTimer(var_28_int, var_29_float); // 0x197 Func
	func_470(); // 0x19a NEW_2
	var_81_bool = var_3_string == 0; // 0x19c Not
	if(var_81_bool == 0) goto Label_417; // 0x19d JumpB
	var_82_int = 10; // 0x19e PushI
	KillTimer(var_82_int); // 0x19f Func
	
Label_417:
	return 0; // 0x1a1 Return
}


func_777()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x309 PushV
	var_24_int = 674; // 0x30a PushI
	var_25_int = 2; // 0x30b PushI
	var_26_int = 534159; // 0x30c PushI
	CreateDiaryEntry(var_23_object, var_24_int, var_25_int, var_26_int); // 0x30d Func
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; // 0x30f PushV
	var_28_object = var_23_object; // 0x310 Mov
	var_29_int = 672; // 0x311 MovI
	func_803(var_27_bool, var_28_object, var_29_int); // 0x312 NEW_2
	return 2; // 0x314 Return
}


func_656(var_133_string)
{
	var_134_bool = 0; var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_float = 0; var_139_float = 0; // 0x290 PushV
	lshHasAnimation(var_137_bool, var_133_string); // 0x291 Func
	var_140_bool = var_137_bool; // 0x293 Push
	if(var_140_bool == 0) goto Label_667; // 0x294 JumpB
	lshGetAnimTimes(var_133_string, var_138_float, var_139_float); // 0x295 Func
	var_141_bool = 0; // 0x297 PushB
	lshPlayAnimation(var_138_float, var_139_float, var_141_bool); // 0x298 Func
	goto Label_671; // 0x29a Jump
	
Label_671:
	return 6; // 0x29f Return
	
Label_667:
	var_142_string = "Can't find lsh animation : "; // 0x29b PushS
	var_143_int = var_142_string + var_133_string; // 0x29c Add
	Trace(var_143_int); // 0x29d Func
}


func_790(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x316 PushV
	GetDiaryRoot(var_38_object); // 0x317 Func
	var_39_bool = var_38_object == 0; // 0x319 Not
	if(var_39_bool == 0) goto Label_800; // 0x31a JumpB
	var_40_string = "Can't retrieve diary root"; // 0x31b PushS
	Trace(var_40_string); // 0x31c Func
	var_36_object = 0; // 0x31e MovB
	return 2; // 0x31f Return
	
Label_800:
	var_36_object = var_38_object; // 0x320 Mov
	return 2; // 0x321 Return
}


func_672(var_111_string, var_112_bool)
{
	var_115_bool = 0; var_116_float = 0; var_117_float = 0; var_118_bool = 0; var_119_float = 0; var_120_float = 0; // 0x2a0 PushV
	lshHasAnimation(var_118_bool, var_111_string); // 0x2a1 Func
	var_121_bool = var_118_bool; // 0x2a3 Push
	if(var_121_bool == 0) goto Label_682; // 0x2a4 JumpB
	lshGetAnimTimes(var_111_string, var_119_float, var_120_float); // 0x2a5 Func
	lshPlayAnimation(var_119_float, var_120_float, var_112_bool); // 0x2a7 Func
	goto Label_686; // 0x2a9 Jump
	
Label_686:
	return 6; // 0x2ae Return
	
Label_682:
	var_122_string = "Can't find lsh animation : "; // 0x2aa PushS
	var_123_int = var_122_string + var_111_string; // 0x2ab Add
	Trace(var_123_int); // 0x2ac Func
}


func_162(var_2_object, var_107_string)
{
	var_108_bool = 0; // 0xa3 PushV
	func_856(var_108_bool); // 0xa4 NEW_2
	var_109_bool = var_108_bool == 0; // 0xa6 Not
	if(var_109_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_110_bool = var_107_string == var_2_object; // 0xa9 Eq
	if(var_110_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_111_string = ""; var_112_bool = 0; // 0xac PushV
	var_111_string = var_107_string; // 0xad Mov
	var_113_string = ""; // 0xae PushS
	var_114_bool = var_107_string == var_113_string; // 0xaf Eq
	if(var_114_bool == 0) goto Label_179; // 0xb0 JumpB
	var_112_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_672(var_111_string, var_112_bool); // 0xb4 NEW_2
	var_2_object = var_107_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_112_bool = 1; // 0xb3 MovB
}


func_418(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x1a2 PushV
	var_18_bool = var_4_bool == 0; // 0x1a3 NullEq
	if(var_18_bool == 0) goto Label_423; // 0x1a4 JumpB
	var_15_bool = 0; // 0x1a5 MovB
	return 2; // 0x1a6 Return
	
Label_423:
	var_19_float = 0; var_20_object = Obj(); // 0x1a7 PushV
	var_20_object = var_4_bool; // 0x1a8 MovT
	func_556(var_20_object); // 0x1a9 NEW_2
	var_17_float = sqrt(var_19_float); // 0x1ab Sqrt2
	var_27_object = var_2_object; // 0x1ac PushT
	if(var_27_object == 0) goto Label_431; // 0x1ad JumpB
	var_17_float = var_17_float - var_1_object; // 0x1ae Sub2
	
Label_431:
	var_15_bool = var_17_float < var_0_object; // 0x1af LT2
	return 2; // 0x1b0 Return
}


func_803(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; // 0x323 PushV
	var_36_object = Obj(); // 0x324 PushV
	func_790(var_36_object); // 0x325 NEW_2
	var_33_object = var_36_object; // 0x326 Mov
	Find(var_29_int, var_34_object); // 0x328 ObjFunc
	var_41_bool = var_34_object == 0; // 0x32a Not
	if(var_41_bool == 0) goto Label_818; // 0x32b JumpB
	var_42_string = "Can't find diary parent with id: "; // 0x32c PushS
	var_43_int = var_42_string + var_29_int; // 0x32d Add
	Trace(var_43_int); // 0x32e Func
	var_27_bool = 0; // 0x330 MovB
	return 6; // 0x331 Return
	
Label_818:
	AddChild(var_28_object); // 0x332 ObjFunc
	var_44_int = 7; // 0x334 PushI
	SendWorldWndMessage(var_44_int); // 0x335 Func
	GetCategory(var_35_int); // 0x337 ObjFunc
	SetDiarySection(var_35_int); // 0x339 Func
	var_27_bool = 0; // 0x33b MovB
	return 6; // 0x33c Return
}


func_549(var_71_bool)
{
	var_71_bool = 1; // 0x225 MovB
	return 0; // 0x226 Return
}


func_551()
{
	StopAnimation(); // 0x227 Func
	StopGroup0(); // 0x229 Func
	return 0; // 0x22b Return
}


func_556(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x22c PushV
	GetPosition(var_24_cvector); // 0x22d Func
	GetPosition(var_25_cvector); // 0x22f ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x231 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x232 Or2
	return 6; // 0x233 Return
}


func_687(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x2af PushV
	GetEyesHeight(var_32_float); // 0x2b0 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x2b2 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x2b3 PushE
	var_34_float = var_32_float; // 0x2b4 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x2b5 PopE
	var_35_string = "head"; // 0x2b6 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x2b7 Func
	return 4; // 0x2b9 Return
}


func_564(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x234 PushV
	IsLoaded(var_25_bool); // 0x235 Func
	var_23_bool = var_25_bool; // 0x237 Mov
	return 2; // 0x238 Return
}


func_569(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x239 PushV
	GetPosition(var_40_cvector); // 0x23a ObjFunc
	GetEyesHeight(var_39_float); // 0x23c ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x23e PushE
	var_48_float = var_48_float + var_39_float; // 0x23f Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x240 PopE
	GetPosition(var_41_cvector); // 0x241 Func
	GetEyesHeight(var_39_float); // 0x243 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x245 PushE
	var_49_float = var_49_float + var_39_float; // 0x246 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x247 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x248 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x249 PushE
	var_50_float = 0; // 0x24a MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x24b PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x24c Or
	var_52_float = sqrt(var_51_int); // 0x24d Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x24e Div2
	var_43_cvector = -var_42_cvector; // 0x24f Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x250 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x251 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x252 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x253 Xor2
	func_711(var_54_cvector, var_55_cvector); // 0x254 NEW_2
	var_62_int = 25; // 0x256 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x257 Mult
	var_64_int = var_53_float + var_63_float; // 0x258 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x259 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x25a Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x25b Add2
	IsOverrideActive(var_46_bool); // 0x25c Func
	var_66_bool = var_46_bool; // 0x25e Push
	if(var_66_bool == 0) goto Label_610; // 0x25f JumpB
	var_27_bool = 0; // 0x260 MovB
	return 18; // 0x261 Return
	
Label_610:
	StopWorld(); // 0x262 Func
	var_67_bool = 1; // 0x264 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x265 Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x267 PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x268 PushE
	Rotate(var_68_float, var_69_float); // 0x269 Func
	var_70_bool = 0; // 0x26b PushV
	func_856(var_70_bool); // 0x26c NEW_2
	if(var_70_bool == 0) goto Label_624; // 0x26e JumpB
	goto Label_632; // 0x26f Jump
	
Label_632:
	CameraWaitForPlayFinish(); // 0x278 Func
	ResumeWorld(); // 0x27a Func
	var_27_bool = 1; // 0x27c MovB
	return 18; // 0x27d Return
	
Label_624:
	var_71_string = "head"; // 0x270 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x271 Func
	var_72_bool = var_47_bool; // 0x273 Push
	if(var_72_bool == 0) goto Label_632; // 0x274 JumpB
	var_73_string = "head"; // 0x275 PushS
	LookAsyncCamera(var_73_string); // 0x276 Func
}


func_698()
{
	var_15_bool = 0; // 0x2ba PushV
	func_856(var_15_bool); // 0x2bb NEW_2
	if(var_15_bool == 0) goto Label_704; // 0x2bd JumpB
	lshStopSpeech(); // 0x2be Func
	
Label_704:
	return 0; // 0x2c0 Return
}


func_831(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x33f PushV
	var_82_string = "branch"; // 0x340 PushS
	GetVariable(var_82_string, var_81_int); // 0x341 Func
	var_83_int = 0; // 0x343 PushI
	var_84_bool = var_81_int == var_83_int; // 0x344 Eq
	if(var_84_bool == 0) goto Label_841; // 0x345 JumpB
	var_79_int = 1; // 0x346 MovI
	return 2; // 0x347 Return
	
Label_841:
	var_85_int = 1; // 0x349 PushI
	var_86_bool = var_81_int == var_85_int; // 0x34a Eq
	if(var_86_bool == 0) goto Label_846; // 0x34b JumpB
	var_79_int = 2; // 0x34c MovI
	return 2; // 0x34d Return
	
Label_846:
	var_79_int = 3; // 0x34e MovI
	return 2; // 0x34f Return
}


func_705(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2c1 PushV
	self(var_21_object); // 0x2c2 Func
	var_19_object = var_21_object; // 0x2c4 Mov
	return 2; // 0x2c5 Return
}


func_322(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x142 PushV
	var_6_int = 0; // 0x143 TMovB
	
Label_324:
	var_18_int = 3; // 0x144 PushI
	rand(var_16_float, var_18_int); // 0x145 Func
	var_19_int = 3; // 0x147 PushI
	var_20_int = var_16_float + var_19_int; // 0x148 Add
	Sleep(var_20_int, var_17_bool); // 0x149 Func
	var_6_int = 1; // 0x14b TMovB
	var_21_float = 0; var_22_float = 0; // 0x14c PushV
	var_21_float = var_12_float; // 0x14d Mov
	var_22_float = var_13_float; // 0x14e Mov
	func_391(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x14f NEW_2
	var_6_int = 0; // 0x151 TMovB
	goto Label_324; // 0x152 Jump
}


func_711(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x2c7 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x2c8 Or
	var_58_float = sqrt(var_59_int); // 0x2c9 Sqrt2
	var_60_float = 0.0; // 0x2ca PushF
	var_61_bool = var_58_float < var_60_float; // 0x2cb LT
	if(var_61_bool == 0) goto Label_719; // 0x2cc JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x2cd MovV
	return 2; // 0x2ce Return
	
Label_719:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x2cf Div2
	return 2; // 0x2d0 Return
}


func_456(var_2_object, var_3_string)
{
	func_551(); // 0x1c9 NEW_2
	var_13_int = 10; // 0x1cb PushI
	KillTimer(var_13_int); // 0x1cc Func
	var_14_object = var_2_object; // 0x1ce PushT
	if(var_14_object == 0) goto Label_468; // 0x1cf JumpB
	var_15_string = "head"; // 0x1d0 PushS
	UnlookAsync(var_15_string); // 0x1d1 Func
	var_2_object = 0; // 0x1d3 TMovB
	
Label_468:
	var_3_string = 1; // 0x1d4 TMovB
	return 0; // 0x1d5 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_132; // 0x4f JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x50 PushV
	var_96_object = var_1_object; // 0x51 MovT
	func_765(var_96_object); // 0x52 NEW_2
	if(var_95_bool == 0) goto Label_110; // 0x54 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x55 PushV
	var_103_object = var_1_object; // 0x56 MovT
	var_104_object = var_0_object; // 0x57 MovT
	func_750(); // 0x58 NEW_2
	var_107_string = ""; // 0x5a PushV
	var_107_string = "Neutral"; // 0x5b MovS
	func_162(var_89_object, var_107_string); // 0x5c NEW_2
	var_124_int = 534142; // 0x5e PushI
	SetMessage(var_124_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_125_int = 534435; // 0x63 PushI
	var_126_int = 36067; // 0x64 PushI
	var_127_int = 36066; // 0x65 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x66 TObjFunc
	var_128_int = 534437; // 0x68 PushI
	var_129_int = 36067; // 0x69 PushI
	var_130_int = 36068; // 0x6a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x6b TObjFunc
	goto Label_132; // 0x6d Jump
	
Label_132:
	var_131_bool = 0; // 0x84 PushV
	func_856(var_131_bool); // 0x85 NEW_2
	if(var_131_bool == 0) goto Label_147; // 0x87 JumpB
	
Label_136:
	lshWaitForAnimEnd(); // 0x88 Func
	var_132_string = var_3_string; // 0x8a PushT
	if(var_132_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_146:
	goto Label_161; // 0x92 Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_141:
	var_133_string = ""; // 0x8d PushV
	var_133_string = var_2_object; // 0x8e MovT
	func_656(var_133_string); // 0x8f NEW_2
	goto Label_136; // 0x91 Jump
	
Label_147:
	var_144_string = "all"; // 0x93 PushS
	var_145_string = "idle"; // 0x94 PushS
	PlayAnimation(var_144_string, var_145_string); // 0x95 Func
	
Label_151:
	WaitForAnimEnd(); // 0x97 Func
	var_146_string = var_3_string; // 0x99 PushT
	if(var_146_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_156:
	var_147_string = "all"; // 0x9c PushS
	var_148_string = "idle"; // 0x9d PushS
	PlayAnimation(var_147_string, var_148_string); // 0x9e Func
	goto Label_151; // 0xa0 Jump
	
Label_110:
	var_149_string = ""; // 0x6e PushV
	var_149_string = "Neutral"; // 0x6f MovS
	func_162(var_89_object, var_149_string); // 0x70 NEW_2
	var_150_int = 534144; // 0x72 PushI
	SetMessage(var_150_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_151_int = 534145; // 0x77 PushI
	var_152_int = -1; // 0x78 PushI
	var_153_int = 35732; // 0x79 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x7a TObjFunc
	var_154_int = 534443; // 0x7c PushI
	var_155_int = -1; // 0x7d PushI
	var_156_int = 36076; // 0x7e PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
}


func_848(var_76_int)
{
	var_76_int = 541582; // 0x350 MovI
	return 0; // 0x351 Return
}


func_721(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x2d1 PushV
	GetVariable(var_98_string, var_100_int); // 0x2d2 Func
	var_97_int = var_100_int; // 0x2d4 Mov
	return 2; // 0x2d5 Return
}


func_850(var_75_int)
{
	var_75_int = 541581; // 0x352 MovI
	return 0; // 0x353 Return
}


func_852(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png"; // 0x354 MovS
	return 0; // 0x355 Return
}


func_340(var_5_int)
{
	var_5_int = 1; // 0x154 TMovB
	var_15_bool = 0; // 0x155 PushV
	var_15_bool = 0; // 0x156 MovB
	var_16_bool = 0; // 0x157 PushV
	func_564(var_16_bool); // 0x158 NEW_2
	var_19_bool = var_16_bool == 0; // 0x15a Not
	if(var_19_bool == 0) goto Label_353; // 0x15b JumpB
	var_20_bool = 0; // 0x15c PushV
	func_389(var_20_bool); // 0x15d NEW_2
	if(var_20_bool == 0) goto Label_353; // 0x15f JumpB
	var_15_bool = 1; // 0x160 MovB
	
Label_353:
	if(var_15_bool == 0) goto Label_359; // 0x161 JumpB
	var_21_object = Obj(); // 0x162 PushV
	func_705(var_21_object); // 0x163 NEW_2
	RemoveActor(var_21_object); // 0x165 Func
	
Label_359:
	return 0; // 0x167 Return
}


func_854(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png"; // 0x356 MovS
	return 0; // 0x357 Return
}


func_470()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x1d6 PushV
	WaitForAnimEnd(); // 0x1d7 Func
	var_44_bool = 0; // 0x1d9 PushV
	func_564(var_44_bool); // 0x1da NEW_2
	var_45_bool = var_44_bool == 0; // 0x1dc Not
	if(var_45_bool == 0) goto Label_479; // 0x1dd JumpB
	return 14; // 0x1de Return
	
Label_479:
	var_46_int = 0; // 0x1df PushV
	func_733(var_46_int); // 0x1e0 NEW_2
	var_37_int = var_46_int; // 0x1e1 Mov
	var_38_int = 0; // 0x1e3 MovI
	
Label_484:
	var_59_bool = 0; // 0x1e4 PushV
	var_59_bool = 0; // 0x1e5 MovB
	var_60_int = 5; // 0x1e6 PushI
	var_61_bool = var_38_int < var_60_int; // 0x1e7 LT
	if(var_61_bool == 0) goto Label_494; // 0x1e8 JumpB
	var_62_bool = 0; // 0x1e9 PushV
	func_564(var_62_bool); // 0x1ea NEW_2
	if(var_62_bool == 0) goto Label_494; // 0x1ec JumpB
	var_59_bool = 1; // 0x1ed MovB
	
Label_494:
	if(var_59_bool == 0) goto Label_546; // 0x1ee JumpB
	var_63_int = 3; // 0x1ef PushI
	irand(var_39_int, var_63_int); // 0x1f0 Func
	var_64_int = 0; // 0x1f2 PushI
	var_65_bool = var_39_int == var_64_int; // 0x1f3 Eq
	if(var_65_bool == 0) goto Label_518; // 0x1f4 JumpB
	var_66_int = var_37_int; // 0x1f5 Push
	if(var_66_int == 0) goto Label_517; // 0x1f6 JumpB
	irand(var_40_int, var_37_int); // 0x1f7 Func
	var_67_string = "all"; // 0x1f9 PushS
	var_68_string = ""; var_69_int = 0; // 0x1fa PushV
	var_69_int = var_40_int; // 0x1fb Mov
	func_726(var_68_string, var_69_int); // 0x1fc NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x1fe Func
	WaitForAnimEnd(var_41_bool); // 0x200 Func
	var_70_bool = var_41_bool == 0; // 0x202 Not
	if(var_70_bool == 0) goto Label_517; // 0x203 JumpB
	goto Label_546; // 0x204 Jump
	
Label_546:
	ResetAAS(); // 0x222 Func
	return 14; // 0x224 Return
	
Label_517:
	goto Label_535; // 0x205 Jump
	
Label_535:
	var_71_bool = 0; // 0x217 PushV
	func_549(var_71_bool); // 0x218 NEW_2
	var_72_bool = var_71_bool == 0; // 0x21a Not
	if(var_72_bool == 0) goto Label_541; // 0x21b JumpB
	goto Label_546; // 0x21c Jump
	
Label_541:
	ResetAAS(); // 0x21d Func
	var_73_int = 1; // 0x21f PushI
	var_38_int = var_38_int + var_73_int; // 0x220 Add2
	goto Label_484; // 0x221 Jump
	
Label_518:
	var_74_int = 1; // 0x206 PushI
	var_75_bool = var_39_int == var_74_int; // 0x207 Eq
	if(var_75_bool == 0) goto Label_532; // 0x208 JumpB
	var_76_int = 4; // 0x209 PushI
	rand(var_42_float, var_76_int); // 0x20a Func
	var_77_int = 1; // 0x20c PushI
	var_78_int = var_42_float + var_77_int; // 0x20d Add
	Sleep(var_78_int, var_43_bool); // 0x20e Func
	var_79_bool = var_43_bool == 0; // 0x210 Not
	if(var_79_bool == 0) goto Label_531; // 0x211 JumpB
	goto Label_546; // 0x212 Jump
	
Label_531:
	goto Label_535; // 0x213 Jump
	
Label_532:
	var_80_int = var_38_int; // 0x214 Push
	if(var_80_int == 0) goto Label_535; // 0x215 JumpB
	goto Label_546; // 0x216 Jump
}


func_856(var_70_bool)
{
	var_70_bool = 0; // 0x358 MovB
	return 0; // 0x359 Return
}


func_726(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x2d6 PushV
	var_55_string = "idle"; // 0x2d7 MovS
	var_56_int = var_53_int; // 0x2d8 Push
	if(var_56_int == 0) goto Label_731; // 0x2d9 JumpB
	var_55_string = var_55_string + var_53_int; // 0x2da Add2
	
Label_731:
	var_52_string = var_55_string; // 0x2db Mov
	return 2; // 0x2dc Return
}


func_733(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x2dd PushV
	var_49_int = 0; // 0x2de MovI
	
Label_735:
	var_51_string = "all"; // 0x2df PushS
	var_52_string = ""; var_53_int = 0; // 0x2e0 PushV
	var_53_int = var_49_int; // 0x2e1 Mov
	func_726(var_52_string, var_53_int); // 0x2e2 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x2e4 Func
	var_57_bool = var_50_bool == 0; // 0x2e6 Not
	if(var_57_bool == 0) goto Label_745; // 0x2e7 JumpB
	goto Label_748; // 0x2e8 Jump
	
Label_748:
	var_46_int = var_49_int; // 0x2ec Mov
	return 4; // 0x2ed Return
	
Label_745:
	var_58_int = 1; // 0x2e9 PushI
	var_49_int = var_49_int + var_58_int; // 0x2ea Add2
	goto Label_735; // 0x2eb Jump
}


func_750()
{
	var_105_string = "ood10Salesman1"; // 0x2ef PushS
	var_106_int = 1; // 0x2f0 PushI
	SetVariable(var_105_string, var_106_int); // 0x2f1 Func
	return 0; // 0x2f3 Return
}


func_756()
{
	var_20_string = "d10q03"; // 0x2f5 PushS
	var_21_int = 2; // 0x2f6 PushI
	SetVariable(var_20_string, var_21_int); // 0x2f7 Func
	func_777(); // 0x2fa NEW_2
	return 0; // 0x2fc Return
}


func_765(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x2fe PushV
	var_98_string = "ood10Salesman1"; // 0x2ff MovS
	func_721(var_97_int, var_98_string); // 0x300 NEW_2
	var_101_int = 0; // 0x302 PushI
	var_102_bool = var_97_int == var_101_int; // 0x303 Eq
	if(var_102_bool == 0) goto Label_775; // 0x304 JumpB
	var_95_bool = 1; // 0x305 MovB
	return 0; // 0x306 Return
	
Label_775:
	var_95_bool = 0; // 0x307 MovB
	return 0; // 0x308 Return
}


func_638()
{
	var_159_bool = 0; var_160_bool = 0; // 0x27e PushV
	var_161_bool = 1; // 0x27f PushB
	CameraSwitchToNormal(var_161_bool); // 0x280 Func
	var_162_bool = 0; // 0x282 PushV
	func_856(var_162_bool); // 0x283 NEW_2
	if(var_162_bool == 0) goto Label_647; // 0x285 JumpB
	goto Label_655; // 0x286 Jump
	
Label_655:
	return 2; // 0x28f Return
	
Label_647:
	var_163_string = "head"; // 0x287 PushS
	HasAnimationTrack(var_160_bool, var_163_string); // 0x288 Func
	var_164_bool = var_160_bool; // 0x28a Push
	if(var_164_bool == 0) goto Label_655; // 0x28b JumpB
	var_165_string = "head"; // 0x28c PushS
	UnlookAsync(var_165_string); // 0x28d Func
}


