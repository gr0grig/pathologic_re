task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xaf PushI
	if(var_8_int == 0) goto Label_297; // 0xb0 JumpB
	func_597(); // 0xb2 NEW_2
	var_10_int = 13016; // 0xb4 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xb5 Eq
	if(var_11_bool == 0) goto Label_188; // 0xb6 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xb7 PushV
	var_12_object = var_1_object; // 0xb8 MovT
	var_13_object = var_0_object; // 0xb9 MovT
	func_649(); // 0xba NEW_2
	
Label_188:
	var_16_int = 13017; // 0xbc PushI
	var_17_bool = var_7_bool == var_16_int; // 0xbd Eq
	if(var_17_bool == 0) goto Label_196; // 0xbe JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xbf PushV
	var_18_object = var_1_object; // 0xc0 MovT
	var_19_object = var_0_object; // 0xc1 MovT
	func_649(); // 0xc2 NEW_2
	
Label_196:
	var_20_int = 13013; // 0xc4 PushI
	var_21_bool = var_6_int == var_20_int; // 0xc5 Eq
	if(var_21_bool == 0) goto Label_239; // 0xc6 JumpB
	var_22_bool = 0; var_23_object = Obj(); // 0xc7 PushV
	var_23_object = var_1_object; // 0xc8 MovT
	func_655(var_23_object); // 0xc9 NEW_2
	if(var_22_bool == 0) goto Label_224; // 0xcb JumpB
	var_30_string = ""; // 0xcc PushV
	var_30_string = "Neutral"; // 0xcd MovS
	func_152(var_7_bool, var_30_string); // 0xce NEW_2
	var_47_int = 511803; // 0xd0 PushI
	SetMessage(var_47_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_48_int = 511804; // 0xd5 PushI
	var_49_int = 13015; // 0xd6 PushI
	var_50_int = 13014; // 0xd7 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xd8 TObjFunc
	var_51_int = 511808; // 0xda PushI
	var_52_int = 13019; // 0xdb PushI
	var_53_int = 13018; // 0xdc PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_54_string = ""; // 0xe0 PushV
	var_54_string = "Neutral"; // 0xe1 MovS
	func_152(var_7_bool, var_54_string); // 0xe2 NEW_2
	var_55_int = 512549; // 0xe4 PushI
	SetMessage(var_55_int); // 0xe5 TObjFunc
	ClearReplies(); // 0xe7 TObjFunc
	var_56_int = 512550; // 0xe9 PushI
	var_57_int = -1; // 0xea PushI
	var_58_int = 13719; // 0xeb PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xec TObjFunc
	return 0; // 0xee Return
	
Label_239:
	var_59_int = 13019; // 0xef PushI
	var_60_bool = var_6_int == var_59_int; // 0xf0 Eq
	if(var_60_bool == 0) goto Label_262; // 0xf1 JumpB
	var_61_string = ""; // 0xf2 PushV
	var_61_string = "Neutral"; // 0xf3 MovS
	func_152(var_7_bool, var_61_string); // 0xf4 NEW_2
	var_62_int = 511809; // 0xf6 PushI
	SetMessage(var_62_int); // 0xf7 TObjFunc
	ClearReplies(); // 0xf9 TObjFunc
	var_63_int = 511810; // 0xfb PushI
	var_64_int = 13015; // 0xfc PushI
	var_65_int = 13020; // 0xfd PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xfe TObjFunc
	var_66_int = 511811; // 0x100 PushI
	var_67_int = 13015; // 0x101 PushI
	var_68_int = 13022; // 0x102 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x103 TObjFunc
	return 0; // 0x105 Return
	
Label_262:
	var_69_int = 13015; // 0x106 PushI
	var_70_bool = var_6_int == var_69_int; // 0x107 Eq
	if(var_70_bool == 0) goto Label_285; // 0x108 JumpB
	var_71_string = ""; // 0x109 PushV
	var_71_string = "Neutral"; // 0x10a MovS
	func_152(var_7_bool, var_71_string); // 0x10b NEW_2
	var_72_int = 511805; // 0x10d PushI
	SetMessage(var_72_int); // 0x10e TObjFunc
	ClearReplies(); // 0x110 TObjFunc
	var_73_int = 511806; // 0x112 PushI
	var_74_int = -1; // 0x113 PushI
	var_75_int = 13016; // 0x114 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x115 TObjFunc
	var_76_int = 511807; // 0x117 PushI
	var_77_int = -1; // 0x118 PushI
	var_78_int = 13017; // 0x119 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x11a TObjFunc
	return 0; // 0x11c Return
	
Label_285:
	var_3_string = 1; // 0x11d TMovB
	var_79_bool = 0; // 0x11e PushV
	func_692(var_79_bool); // 0x11f NEW_2
	if(var_79_bool == 0) goto Label_293; // 0x121 JumpB
	lshStopAnimation(); // 0x122 Func
	goto Label_295; // 0x124 Jump
	
Label_295:
	return 0; // 0x127 Return
	
Label_293:
	StopAnimation(); // 0x125 Func
	
Label_297:
	return 0; // 0x129 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_469(); // 0x135 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x137 PushV
	var_8_object = var_6_object; // 0x138 Mov
	func_298(var_6_object, var_7_int, var_8_object); // 0x139 NEW_2
	return 0; // 0x13b Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x166 PushS
	var_8_bool = var_6_string == var_7_string; // 0x167 Eq
	if(var_8_bool == 0) goto Label_364; // 0x168 JumpB
	func_337(var_6_string); // 0x16a NEW_2
	
Label_364:
	return 0; // 0x16c Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x16d Func
	sync(); // 0x16f Func
	return 0; // 0x171 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x172 PushV
	var_6_bool = 0; // 0x173 MovB
	var_7_object = var_0_object; // 0x174 PushT
	if(var_7_object == 0) goto Label_379; // 0x175 JumpB
	var_8_bool = 0; // 0x176 PushV
	func_386(var_8_bool); // 0x177 NEW_2
	if(var_8_bool == 0) goto Label_379; // 0x179 JumpB
	var_6_bool = 1; // 0x17a MovB
	
Label_379:
	if(var_6_bool == 0) goto Label_385; // 0x17b JumpB
	var_9_object = Obj(); // 0x17c PushV
	func_604(var_9_object); // 0x17d NEW_2
	RemoveActor(var_9_object); // 0x17f Func
	
Label_385:
	return 0; // 0x181 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x13c PushV
	
Label_317:
	var_8_bool = 0; // 0x13d PushV
	func_474(var_8_bool); // 0x13e NEW_2
	var_11_bool = var_8_bool == 0; // 0x140 Not
	if(var_11_bool == 0) goto Label_325; // 0x141 JumpB
	Hold(); // 0x142 Func
	goto Label_317; // 0x144 Jump
	
Label_325:
	var_12_int = 3; // 0x145 PushI
	rand(var_7_float, var_12_int); // 0x146 Func
	var_13_int = 3; // 0x148 PushI
	var_14_int = var_7_float + var_13_int; // 0x149 Add
	Sleep(var_14_int); // 0x14a Func
	func_388(); // 0x14d NEW_2
	goto Label_317; // 0x14f Jump
}


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; // 0x0 PushV
	var_0_object = var_10_object; // 0x1 TMov
	var_20_bool = 0; var_21_object = Obj(); var_22_float = 0; // 0x2 PushV
	var_21_object = var_10_object; // 0x3 Mov
	var_22_float = 70.0; // 0x4 MovF
	func_479(var_21_object, var_22_float); // 0x5 NEW_2
	var_67_bool = var_20_bool == 0; // 0x7 Not
	if(var_67_bool == 0) goto Label_11; // 0x8 JumpB
	var_9_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_16_object); // 0xb Func
	var_68_int = 0; // 0xd PushV
	func_686(var_68_int); // 0xe NEW_2
	SetNPCName(var_68_int); // 0x10 ObjFunc
	var_69_int = 0; // 0x12 PushV
	func_684(var_69_int); // 0x13 NEW_2
	SetNPCDescription(var_69_int); // 0x15 ObjFunc
	var_70_string = ""; // 0x17 PushV
	func_688(var_70_string); // 0x18 NEW_2
	SetPhoto(var_70_string); // 0x1a ObjFunc
	var_71_string = ""; // 0x1c PushV
	func_690(var_71_string); // 0x1d NEW_2
	SetPhoto2(var_71_string); // 0x1f ObjFunc
	var_72_int = 0; // 0x21 PushV
	func_667(var_72_int); // 0x22 NEW_2
	SetPlayerName(var_72_int); // 0x24 ObjFunc
	var_18_int = -1; // 0x26 MovI
	IsOverrideActive(var_17_bool); // 0x27 Func
	var_80_bool = var_17_bool; // 0x29 Push
	if(var_80_bool == 0) goto Label_45; // 0x2a JumpB
	var_9_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_16_object); // 0x2d Func
	var_81_object = Obj(); var_82_object = Obj(); // 0x2f PushV
	var_81_object = var_10_object; // 0x30 Mov
	var_82_object = var_16_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_83_object, var_84_object, var_85_string, var_86_bool, var_81_object, var_82_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_19_bool); // 0x36 ObjFunc
	
Label_56:
	var_143_bool = var_19_bool == 0; // 0x38 Not
	if(var_143_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_19_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_144_object = Obj(); // 0x3f PushV
	var_144_object = var_10_object; // 0x40 Mov
	func_548(); // 0x41 NEW_2
	StopDialog(var_16_object); // 0x43 Func
	GetReturnValue(var_18_int); // 0x45 ObjFunc
	var_9_int = var_18_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_386(var_8_bool)
{
	var_8_bool = 1; // 0x182 MovB
	return 0; // 0x183 Return
}


func_388()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x184 PushV
	WaitForAnimEnd(); // 0x185 Func
	var_29_bool = 0; // 0x187 PushV
	func_474(var_29_bool); // 0x188 NEW_2
	var_30_bool = var_29_bool == 0; // 0x18a Not
	if(var_30_bool == 0) goto Label_397; // 0x18b JumpB
	return 14; // 0x18c Return
	
Label_397:
	var_31_int = 0; // 0x18d PushV
	func_632(var_31_int); // 0x18e NEW_2
	var_22_int = var_31_int; // 0x18f Mov
	var_23_int = 0; // 0x191 MovI
	
Label_402:
	var_44_bool = 0; // 0x192 PushV
	var_44_bool = 0; // 0x193 MovB
	var_45_int = 5; // 0x194 PushI
	var_46_bool = var_23_int < var_45_int; // 0x195 LT
	if(var_46_bool == 0) goto Label_412; // 0x196 JumpB
	var_47_bool = 0; // 0x197 PushV
	func_474(var_47_bool); // 0x198 NEW_2
	if(var_47_bool == 0) goto Label_412; // 0x19a JumpB
	var_44_bool = 1; // 0x19b MovB
	
Label_412:
	if(var_44_bool == 0) goto Label_464; // 0x19c JumpB
	var_48_int = 3; // 0x19d PushI
	irand(var_24_int, var_48_int); // 0x19e Func
	var_49_int = 0; // 0x1a0 PushI
	var_50_bool = var_24_int == var_49_int; // 0x1a1 Eq
	if(var_50_bool == 0) goto Label_436; // 0x1a2 JumpB
	var_51_int = var_22_int; // 0x1a3 Push
	if(var_51_int == 0) goto Label_435; // 0x1a4 JumpB
	irand(var_25_int, var_22_int); // 0x1a5 Func
	var_52_string = "all"; // 0x1a7 PushS
	var_53_string = ""; var_54_int = 0; // 0x1a8 PushV
	var_54_int = var_25_int; // 0x1a9 Mov
	func_625(var_53_string, var_54_int); // 0x1aa NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x1ac Func
	WaitForAnimEnd(var_26_bool); // 0x1ae Func
	var_55_bool = var_26_bool == 0; // 0x1b0 Not
	if(var_55_bool == 0) goto Label_435; // 0x1b1 JumpB
	goto Label_464; // 0x1b2 Jump
	
Label_464:
	ResetAAS(); // 0x1d0 Func
	return 14; // 0x1d2 Return
	
Label_435:
	goto Label_453; // 0x1b3 Jump
	
Label_453:
	var_56_bool = 0; // 0x1c5 PushV
	func_467(var_56_bool); // 0x1c6 NEW_2
	var_57_bool = var_56_bool == 0; // 0x1c8 Not
	if(var_57_bool == 0) goto Label_459; // 0x1c9 JumpB
	goto Label_464; // 0x1ca Jump
	
Label_459:
	ResetAAS(); // 0x1cb Func
	var_58_int = 1; // 0x1cd PushI
	var_23_int = var_23_int + var_58_int; // 0x1ce Add2
	goto Label_402; // 0x1cf Jump
	
Label_436:
	var_59_int = 1; // 0x1b4 PushI
	var_60_bool = var_24_int == var_59_int; // 0x1b5 Eq
	if(var_60_bool == 0) goto Label_450; // 0x1b6 JumpB
	var_61_int = 4; // 0x1b7 PushI
	rand(var_27_float, var_61_int); // 0x1b8 Func
	var_62_int = 1; // 0x1ba PushI
	var_63_int = var_27_float + var_62_int; // 0x1bb Add
	Sleep(var_63_int, var_28_bool); // 0x1bc Func
	var_64_bool = var_28_bool == 0; // 0x1be Not
	if(var_64_bool == 0) goto Label_449; // 0x1bf JumpB
	goto Label_464; // 0x1c0 Jump
	
Label_449:
	goto Label_453; // 0x1c1 Jump
	
Label_450:
	var_65_int = var_23_int; // 0x1c2 Push
	if(var_65_int == 0) goto Label_453; // 0x1c3 JumpB
	goto Label_464; // 0x1c4 Jump
}


func_582(var_100_string, var_101_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0; // 0x246 PushV
	lshHasAnimation(var_107_bool, var_100_string); // 0x247 Func
	var_110_bool = var_107_bool; // 0x249 Push
	if(var_110_bool == 0) goto Label_592; // 0x24a JumpB
	lshGetAnimTimes(var_100_string, var_108_float, var_109_float); // 0x24b Func
	lshPlayAnimation(var_108_float, var_109_float, var_101_bool); // 0x24d Func
	goto Label_596; // 0x24f Jump
	
Label_596:
	return 6; // 0x254 Return
	
Label_592:
	var_111_string = "Can't find lsh animation : "; // 0x250 PushS
	var_112_int = var_111_string + var_100_string; // 0x251 Add
	Trace(var_112_int); // 0x252 Func
}


func_649()
{
	var_14_string = "ood5Prisoner1"; // 0x28a PushS
	var_15_int = 1; // 0x28b PushI
	SetVariable(var_14_string, var_15_int); // 0x28c Func
	return 0; // 0x28e Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_81_object, var_82_object)
{
	var_0_object = var_82_object; // 0x4b TMov
	var_1_object = var_81_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_87_int = 1; // 0x4e PushI
	if(var_87_int == 0) goto Label_122; // 0x4f JumpB
	var_88_bool = 0; var_89_object = Obj(); // 0x50 PushV
	var_89_object = var_1_object; // 0x51 MovT
	func_655(var_89_object); // 0x52 NEW_2
	if(var_88_bool == 0) goto Label_105; // 0x54 JumpB
	var_96_string = ""; // 0x55 PushV
	var_96_string = "Neutral"; // 0x56 MovS
	func_152(var_82_object, var_96_string); // 0x57 NEW_2
	var_113_int = 511803; // 0x59 PushI
	SetMessage(var_113_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_114_int = 511804; // 0x5e PushI
	var_115_int = 13015; // 0x5f PushI
	var_116_int = 13014; // 0x60 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x61 TObjFunc
	var_117_int = 511808; // 0x63 PushI
	var_118_int = 13019; // 0x64 PushI
	var_119_int = 13018; // 0x65 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x66 TObjFunc
	goto Label_122; // 0x68 Jump
	
Label_122:
	var_120_bool = 0; // 0x7a PushV
	func_692(var_120_bool); // 0x7b NEW_2
	if(var_120_bool == 0) goto Label_137; // 0x7d JumpB
	
Label_126:
	lshWaitForAnimEnd(); // 0x7e Func
	var_121_string = var_3_string; // 0x80 PushT
	if(var_121_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_136:
	goto Label_151; // 0x88 Jump
	
Label_151:
	return 0; // 0x97 Return
	
Label_131:
	var_122_string = ""; // 0x83 PushV
	var_122_string = var_2_object; // 0x84 MovT
	func_566(var_122_string); // 0x85 NEW_2
	goto Label_126; // 0x87 Jump
	
Label_137:
	var_133_string = "all"; // 0x89 PushS
	var_134_string = "idle"; // 0x8a PushS
	PlayAnimation(var_133_string, var_134_string); // 0x8b Func
	
Label_141:
	WaitForAnimEnd(); // 0x8d Func
	var_135_string = var_3_string; // 0x8f PushT
	if(var_135_string == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_146:
	var_136_string = "all"; // 0x92 PushS
	var_137_string = "idle"; // 0x93 PushS
	PlayAnimation(var_136_string, var_137_string); // 0x94 Func
	goto Label_141; // 0x96 Jump
	
Label_105:
	var_138_string = ""; // 0x69 PushV
	var_138_string = "Neutral"; // 0x6a MovS
	func_152(var_82_object, var_138_string); // 0x6b NEW_2
	var_139_int = 512549; // 0x6d PushI
	SetMessage(var_139_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_140_int = 512550; // 0x72 PushI
	var_141_int = -1; // 0x73 PushI
	var_142_int = 13719; // 0x74 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x75 TObjFunc
	goto Label_122; // 0x77 Jump
}


func_655(var_88_bool)
{
	var_90_int = 0; var_91_string = ""; // 0x290 PushV
	var_91_string = "ood5Prisoner1"; // 0x291 MovS
	func_620(var_90_int, var_91_string); // 0x292 NEW_2
	var_94_int = 0; // 0x294 PushI
	var_95_bool = var_90_int == var_94_int; // 0x295 Eq
	if(var_95_bool == 0) goto Label_665; // 0x296 JumpB
	var_88_bool = 1; // 0x297 MovB
	return 0; // 0x298 Return
	
Label_665:
	var_88_bool = 0; // 0x299 MovB
	return 0; // 0x29a Return
}


func_337(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x151 PushV
	var_0_object = 1; // 0x152 TMovB
	IsLoaded(var_10_bool); // 0x153 Func
	var_11_bool = 0; // 0x155 PushV
	var_11_bool = 0; // 0x156 MovB
	var_12_bool = var_10_bool == 0; // 0x157 Not
	if(var_12_bool == 0) goto Label_350; // 0x158 JumpB
	var_13_bool = 0; // 0x159 PushV
	func_386(var_13_bool); // 0x15a NEW_2
	if(var_13_bool == 0) goto Label_350; // 0x15c JumpB
	var_11_bool = 1; // 0x15d MovB
	
Label_350:
	if(var_11_bool == 0) goto Label_356; // 0x15e JumpB
	var_14_object = Obj(); // 0x15f PushV
	func_604(var_14_object); // 0x160 NEW_2
	RemoveActor(var_14_object); // 0x162 Func
	
Label_356:
	return 2; // 0x164 Return
}


func_467(var_56_bool)
{
	var_56_bool = 1; // 0x1d3 MovB
	return 0; // 0x1d4 Return
}


func_597()
{
	var_9_bool = 0; // 0x255 PushV
	func_692(var_9_bool); // 0x256 NEW_2
	if(var_9_bool == 0) goto Label_603; // 0x258 JumpB
	lshStopSpeech(); // 0x259 Func
	
Label_603:
	return 0; // 0x25b Return
}


func_469()
{
	StopAnimation(); // 0x1d5 Func
	StopGroup0(); // 0x1d7 Func
	return 0; // 0x1d9 Return
}


func_152(var_2_object, var_96_string)
{
	var_97_bool = 0; // 0x99 PushV
	func_692(var_97_bool); // 0x9a NEW_2
	var_98_bool = var_97_bool == 0; // 0x9c Not
	if(var_98_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_99_bool = var_96_string == var_2_object; // 0x9f Eq
	if(var_99_bool == 0) goto Label_162; // 0xa0 JumpB
	return 0; // 0xa1 Return
	
Label_162:
	var_100_string = ""; var_101_bool = 0; // 0xa2 PushV
	var_100_string = var_96_string; // 0xa3 Mov
	var_102_string = ""; // 0xa4 PushS
	var_103_bool = var_96_string == var_102_string; // 0xa5 Eq
	if(var_103_bool == 0) goto Label_169; // 0xa6 JumpB
	var_101_bool = 0; // 0xa7 MovB
	goto Label_170; // 0xa8 Jump
	
Label_170:
	func_582(var_100_string, var_101_bool); // 0xaa NEW_2
	var_2_object = var_96_string; // 0xac TMov
	return 0; // 0xad Return
	
Label_169:
	var_101_bool = 1; // 0xa9 MovB
}


func_474(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x1da PushV
	IsLoaded(var_10_bool); // 0x1db Func
	var_8_bool = var_10_bool; // 0x1dd Mov
	return 2; // 0x1de Return
}


func_667(var_72_int)
{
	var_73_int = 0; var_74_int = 0; // 0x29b PushV
	var_75_string = "branch"; // 0x29c PushS
	GetVariable(var_75_string, var_74_int); // 0x29d Func
	var_76_int = 0; // 0x29f PushI
	var_77_bool = var_74_int == var_76_int; // 0x2a0 Eq
	if(var_77_bool == 0) goto Label_677; // 0x2a1 JumpB
	var_72_int = 1; // 0x2a2 MovI
	return 2; // 0x2a3 Return
	
Label_677:
	var_78_int = 1; // 0x2a5 PushI
	var_79_bool = var_74_int == var_78_int; // 0x2a6 Eq
	if(var_79_bool == 0) goto Label_682; // 0x2a7 JumpB
	var_72_int = 2; // 0x2a8 MovI
	return 2; // 0x2a9 Return
	
Label_682:
	var_72_int = 3; // 0x2aa MovI
	return 2; // 0x2ab Return
}


func_604(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x25c PushV
	self(var_11_object); // 0x25d Func
	var_9_object = var_11_object; // 0x25f Mov
	return 2; // 0x260 Return
}


func_479(var_20_bool, var_22_float)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; // 0x1df PushV
	GetPosition(var_33_cvector); // 0x1e0 ObjFunc
	GetEyesHeight(var_32_float); // 0x1e2 ObjFunc
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x1e4 PushE
	var_41_float = var_41_float + var_32_float; // 0x1e5 Add2
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x1e6 PopE
	GetPosition(var_34_cvector); // 0x1e7 Func
	GetEyesHeight(var_32_float); // 0x1e9 Func
	var_42_float = GetByIndex(var_34_cvector, 1); // 0x1eb PushE
	var_42_float = var_42_float + var_32_float; // 0x1ec Add2
	SetByIndex(var_34_cvector, 1) = var_42_float; // 0x1ed PopE
	var_35_cvector = var_33_cvector - var_34_cvector; // 0x1ee Sub2
	var_43_float = GetByIndex(var_35_cvector, 1); // 0x1ef PushE
	var_43_float = 0; // 0x1f0 MovI
	SetByIndex(var_35_cvector, 1) = var_43_float; // 0x1f1 PopE
	var_44_int = var_35_cvector | var_35_cvector; // 0x1f2 Or
	var_45_float = sqrt(var_44_int); // 0x1f3 Sqrt
	var_35_cvector = var_35_cvector / var_35_cvector; // 0x1f4 Div2
	var_36_cvector = -var_35_cvector; // 0x1f5 Neg2
	var_46_float = var_35_cvector * var_22_float; // 0x1f6 Mult
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x1f7 PushV
	var_49_cvector = CVector(0.0, 1.0, 0.0); // 0x1f8 PushVec
	var_48_cvector = var_36_cvector ^ var_49_cvector; // 0x1f9 Xor2
	func_610(var_47_cvector, var_48_cvector); // 0x1fa NEW_2
	var_55_int = 25; // 0x1fc PushI
	var_56_float = var_47_cvector * var_55_int; // 0x1fd Mult
	var_57_int = var_46_float + var_56_float; // 0x1fe Add
	var_58_cvector = CVector(0.0, 10.0, 0.0); // 0x1ff PushVec
	var_37_cvector = var_57_int - var_58_cvector; // 0x200 Sub2
	var_38_cvector = var_34_cvector + var_37_cvector; // 0x201 Add2
	IsOverrideActive(var_39_bool); // 0x202 Func
	var_59_bool = var_39_bool; // 0x204 Push
	if(var_59_bool == 0) goto Label_520; // 0x205 JumpB
	var_20_bool = 0; // 0x206 MovB
	return 18; // 0x207 Return
	
Label_520:
	StopWorld(); // 0x208 Func
	var_60_bool = 1; // 0x20a PushB
	CameraTransit(var_38_cvector, var_36_cvector, var_60_bool); // 0x20b Func
	var_61_float = GetByIndex(var_37_cvector, 0); // 0x20d PushE
	var_62_float = GetByIndex(var_37_cvector, 2); // 0x20e PushE
	Rotate(var_61_float, var_62_float); // 0x20f Func
	var_63_bool = 0; // 0x211 PushV
	func_692(var_63_bool); // 0x212 NEW_2
	if(var_63_bool == 0) goto Label_534; // 0x214 JumpB
	goto Label_542; // 0x215 Jump
	
Label_542:
	CameraWaitForPlayFinish(); // 0x21e Func
	ResumeWorld(); // 0x220 Func
	var_20_bool = 1; // 0x222 MovB
	return 18; // 0x223 Return
	
Label_534:
	var_64_string = "head"; // 0x216 PushS
	HasAnimationTrack(var_40_bool, var_64_string); // 0x217 Func
	var_65_bool = var_40_bool; // 0x219 Push
	if(var_65_bool == 0) goto Label_542; // 0x21a JumpB
	var_66_string = "head"; // 0x21b PushS
	LookAsyncCamera(var_66_string); // 0x21c Func
}


func_610(var_47_cvector, var_48_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x262 PushV
	var_52_int = var_48_cvector | var_48_cvector; // 0x263 Or
	var_51_float = sqrt(var_52_int); // 0x264 Sqrt2
	var_53_float = 0.0; // 0x265 PushF
	var_54_bool = var_51_float < var_53_float; // 0x266 LT
	if(var_54_bool == 0) goto Label_618; // 0x267 JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x268 MovV
	return 2; // 0x269 Return
	
Label_618:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x26a Div2
	return 2; // 0x26b Return
}


func_548()
{
	var_145_bool = 0; var_146_bool = 0; // 0x224 PushV
	var_147_bool = 1; // 0x225 PushB
	CameraSwitchToNormal(var_147_bool); // 0x226 Func
	var_148_bool = 0; // 0x228 PushV
	func_692(var_148_bool); // 0x229 NEW_2
	if(var_148_bool == 0) goto Label_557; // 0x22b JumpB
	goto Label_565; // 0x22c Jump
	
Label_565:
	return 2; // 0x235 Return
	
Label_557:
	var_149_string = "head"; // 0x22d PushS
	HasAnimationTrack(var_146_bool, var_149_string); // 0x22e Func
	var_150_bool = var_146_bool; // 0x230 Push
	if(var_150_bool == 0) goto Label_565; // 0x231 JumpB
	var_151_string = "head"; // 0x232 PushS
	UnlookAsync(var_151_string); // 0x233 Func
}


func_298(var_7_int, var_8_object, var_11_object)
{
	var_9_int = 0; var_10_object = Obj(); // 0x12b PushV
	var_10_object = var_8_object; // 0x12c Mov
	TaskCall(0); // 0x12d TaskCall
	func_0(var_11_object, var_9_int, var_10_object); // 0x12e NEW_2
	TaskReturn(); // 0x12f TaskReturn
	var_7_int = var_11_object; // 0x130 Mov
	return 0; // 0x132 Return
}


func_684(var_69_int)
{
	var_69_int = 515557; // 0x2ac MovI
	return 0; // 0x2ad Return
}


func_620(var_90_int, var_91_string)
{
	var_92_int = 0; var_93_int = 0; // 0x26c PushV
	GetVariable(var_91_string, var_93_int); // 0x26d Func
	var_90_int = var_93_int; // 0x26f Mov
	return 2; // 0x270 Return
}


func_686(var_68_int)
{
	var_68_int = 503342; // 0x2ae MovI
	return 0; // 0x2af Return
}


func_688(var_70_string)
{
	var_70_string = "ui/NPC_Citizen1.png"; // 0x2b0 MovS
	return 0; // 0x2b1 Return
}


func_625(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x271 PushV
	var_40_string = "idle"; // 0x272 MovS
	var_41_int = var_38_int; // 0x273 Push
	if(var_41_int == 0) goto Label_630; // 0x274 JumpB
	var_40_string = var_40_string + var_38_int; // 0x275 Add2
	
Label_630:
	var_37_string = var_40_string; // 0x276 Mov
	return 2; // 0x277 Return
}


func_690(var_71_string)
{
	var_71_string = "ui/NPC_Citizen1_b.png"; // 0x2b2 MovS
	return 0; // 0x2b3 Return
}


func_692(var_63_bool)
{
	var_63_bool = 0; // 0x2b4 MovB
	return 0; // 0x2b5 Return
}


func_566(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0; // 0x236 PushV
	lshHasAnimation(var_126_bool, var_122_string); // 0x237 Func
	var_129_bool = var_126_bool; // 0x239 Push
	if(var_129_bool == 0) goto Label_577; // 0x23a JumpB
	lshGetAnimTimes(var_122_string, var_127_float, var_128_float); // 0x23b Func
	var_130_bool = 0; // 0x23d PushB
	lshPlayAnimation(var_127_float, var_128_float, var_130_bool); // 0x23e Func
	goto Label_581; // 0x240 Jump
	
Label_581:
	return 6; // 0x245 Return
	
Label_577:
	var_131_string = "Can't find lsh animation : "; // 0x241 PushS
	var_132_int = var_131_string + var_122_string; // 0x242 Add
	Trace(var_132_int); // 0x243 Func
}


func_632(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x278 PushV
	var_34_int = 0; // 0x279 MovI
	
Label_634:
	var_36_string = "all"; // 0x27a PushS
	var_37_string = ""; var_38_int = 0; // 0x27b PushV
	var_38_int = var_34_int; // 0x27c Mov
	func_625(var_37_string, var_38_int); // 0x27d NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x27f Func
	var_42_bool = var_35_bool == 0; // 0x281 Not
	if(var_42_bool == 0) goto Label_644; // 0x282 JumpB
	goto Label_647; // 0x283 Jump
	
Label_647:
	var_31_int = var_34_int; // 0x287 Mov
	return 4; // 0x288 Return
	
Label_644:
	var_43_int = 1; // 0x284 PushI
	var_34_int = var_34_int + var_43_int; // 0x285 Add2
	goto Label_634; // 0x286 Jump
}


