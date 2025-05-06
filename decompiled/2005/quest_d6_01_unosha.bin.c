task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xaa PushI
	if(var_12_int == 0) goto Label_292; // 0xab JumpB
	func_621(); // 0xad NEW_2
	var_14_int = 4374; // 0xaf PushI
	var_15_bool = var_11_object == var_14_int; // 0xb0 Eq
	if(var_15_bool == 0) goto Label_183; // 0xb1 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xb2 PushV
	var_16_object = var_1_object; // 0xb3 MovT
	var_17_object = var_0_object; // 0xb4 MovT
	func_677(); // 0xb5 NEW_2
	
Label_183:
	var_20_int = 4376; // 0xb7 PushI
	var_21_bool = var_11_object == var_20_int; // 0xb8 Eq
	if(var_21_bool == 0) goto Label_191; // 0xb9 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xba PushV
	var_22_object = var_1_object; // 0xbb MovT
	var_23_object = var_0_object; // 0xbc MovT
	func_683(); // 0xbd NEW_2
	
Label_191:
	var_26_int = 4373; // 0xbf PushI
	var_27_bool = var_10_bool == var_26_int; // 0xc0 Eq
	if(var_27_bool == 0) goto Label_229; // 0xc1 JumpB
	var_28_string = ""; // 0xc2 PushV
	var_28_string = "Neutral"; // 0xc3 MovS
	func_147(var_11_object, var_28_string); // 0xc4 NEW_2
	var_45_int = 504018; // 0xc6 PushI
	SetMessage(var_45_int); // 0xc7 TObjFunc
	ClearReplies(); // 0xc9 TObjFunc
	var_46_bool = 0; var_47_object = Obj(); // 0xcb PushV
	var_47_object = var_1_object; // 0xcc MovT
	func_689(var_47_object); // 0xcd NEW_2
	if(var_46_bool == 0) goto Label_213; // 0xcf JumpB
	var_54_int = 504019; // 0xd0 PushI
	var_55_int = 4375; // 0xd1 PushI
	var_56_int = 4374; // 0xd2 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xd3 TObjFunc
	
Label_213:
	var_57_bool = 0; var_58_object = Obj(); // 0xd5 PushV
	var_58_object = var_1_object; // 0xd6 MovT
	func_701(var_58_object); // 0xd7 NEW_2
	if(var_57_bool == 0) goto Label_223; // 0xd9 JumpB
	var_63_int = 504021; // 0xda PushI
	var_64_int = 4377; // 0xdb PushI
	var_65_int = 4376; // 0xdc PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xdd TObjFunc
	
Label_223:
	var_66_int = 536329; // 0xdf PushI
	var_67_int = -1; // 0xe0 PushI
	var_68_int = 38110; // 0xe1 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xe2 TObjFunc
	return 0; // 0xe4 Return
	
Label_229:
	var_69_int = 4377; // 0xe5 PushI
	var_70_bool = var_10_bool == var_69_int; // 0xe6 Eq
	if(var_70_bool == 0) goto Label_257; // 0xe7 JumpB
	var_71_string = ""; // 0xe8 PushV
	var_71_string = "Neutral"; // 0xe9 MovS
	func_147(var_11_object, var_71_string); // 0xea NEW_2
	var_72_int = 504022; // 0xec PushI
	SetMessage(var_72_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_73_int = 504023; // 0xf1 PushI
	var_74_int = -1; // 0xf2 PushI
	var_75_int = 4378; // 0xf3 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xf4 TObjFunc
	var_76_int = 504024; // 0xf6 PushI
	var_77_int = -1; // 0xf7 PushI
	var_78_int = 4379; // 0xf8 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xf9 TObjFunc
	var_79_int = 504025; // 0xfb PushI
	var_80_int = -1; // 0xfc PushI
	var_81_int = 4380; // 0xfd PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_82_int = 4375; // 0x101 PushI
	var_83_bool = var_10_bool == var_82_int; // 0x102 Eq
	if(var_83_bool == 0) goto Label_280; // 0x103 JumpB
	var_84_string = ""; // 0x104 PushV
	var_84_string = "Neutral"; // 0x105 MovS
	func_147(var_11_object, var_84_string); // 0x106 NEW_2
	var_85_int = 504020; // 0x108 PushI
	SetMessage(var_85_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_86_int = 504026; // 0x10d PushI
	var_87_int = -1; // 0x10e PushI
	var_88_int = 4381; // 0x10f PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x110 TObjFunc
	var_89_int = 504027; // 0x112 PushI
	var_90_int = -1; // 0x113 PushI
	var_91_int = 4382; // 0x114 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x115 TObjFunc
	return 0; // 0x117 Return
	
Label_280:
	var_3_string = 1; // 0x118 TMovB
	var_92_bool = 0; // 0x119 PushV
	func_675(var_92_bool); // 0x11a NEW_2
	if(var_92_bool == 0) goto Label_288; // 0x11c JumpB
	lshStopAnimation(); // 0x11d Func
	goto Label_290; // 0x11f Jump
	
Label_290:
	return 0; // 0x122 Return
	
Label_288:
	StopAnimation(); // 0x120 Func
	
Label_292:
	return 0; // 0x124 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_381(var_9_object, var_10_object); // 0x133 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x135 PushV
	var_15_object = var_10_object; // 0x136 Mov
	TaskCall(0); // 0x137 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x138 NEW_2
	TaskReturn(); // 0x139 TaskReturn
	return 0; // 0x13b Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x167 PushI
	var_12_bool = var_10_int == var_11_int; // 0x168 Eq
	if(var_12_bool == 0) goto Label_380; // 0x169 JumpB
	var_13_bool = 0; // 0x16a PushV
	func_343(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x16b NEW_2
	if(var_13_bool == 0) goto Label_374; // 0x16d JumpB
	var_26_bool = var_2_object == 0; // 0x16e Not
	if(var_26_bool == 0) goto Label_373; // 0x16f JumpB
	var_27_object = Obj(); // 0x170 PushV
	var_27_object = var_4_bool; // 0x171 MovT
	func_610(var_27_object); // 0x172 NEW_2
	var_2_object = 1; // 0x174 TMovB
	
Label_373:
	goto Label_380; // 0x175 Jump
	
Label_380:
	return 0; // 0x17c Return
	
Label_374:
	var_34_object = var_2_object; // 0x176 PushT
	if(var_34_object == 0) goto Label_380; // 0x177 JumpB
	var_35_string = "head"; // 0x178 PushS
	UnlookAsync(var_35_string); // 0x179 Func
	var_2_object = 0; // 0x17b TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_293:
	var_10_bool = 1; // 0x125 PushB
	if(var_10_bool == 0) goto Label_304; // 0x126 JumpB
	var_11_int = 1; // 0x127 PushI
	Sleep(var_11_int); // 0x128 Func
	var_12_float = 0; var_13_float = 0; // 0x12a PushV
	var_12_float = 300; // 0x12b MovI
	var_13_float = 100; // 0x12c MovI
	func_316(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_12_float, var_13_float); // 0x12d NEW_2
	goto Label_293; // 0x12f Jump
	
Label_304:
	return 0; // 0x130 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_494(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_669(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_667(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_671(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_673(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_713(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_151_bool = var_24_bool == 0; // 0x38 Not
	if(var_151_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_152_object = Obj(); // 0x3f PushV
	var_152_object = var_15_object; // 0x40 Mov
	func_562(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_643(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = ""; // 0x283 PushV
	var_46_string = "idle"; // 0x284 MovS
	var_47_int = var_44_int; // 0x285 Push
	if(var_47_int == 0) goto Label_648; // 0x286 JumpB
	var_46_string = var_46_string + var_44_int; // 0x287 Add2
	
Label_648:
	var_43_string = var_46_string; // 0x288 Mov
	return 2; // 0x289 Return
}


func_579(var_135_string)
{
	var_136_bool = 0; var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_float = 0; var_141_float = 0; // 0x243 PushV
	lshHasAnimation(var_139_bool, var_135_string); // 0x244 Func
	var_142_bool = var_139_bool; // 0x246 Push
	if(var_142_bool == 0) goto Label_590; // 0x247 JumpB
	lshGetAnimTimes(var_135_string, var_140_float, var_141_float); // 0x248 Func
	var_143_bool = 0; // 0x24a PushB
	lshPlayAnimation(var_140_float, var_141_float, var_143_bool); // 0x24b Func
	goto Label_594; // 0x24d Jump
	
Label_594:
	return 6; // 0x252 Return
	
Label_590:
	var_144_string = "Can't find lsh animation : "; // 0x24e PushS
	var_145_int = var_144_string + var_135_string; // 0x24f Add
	Trace(var_145_int); // 0x250 Func
}


func_713(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x2c9 PushV
	var_79_string = "branch"; // 0x2ca PushS
	GetVariable(var_79_string, var_78_int); // 0x2cb Func
	var_80_int = 0; // 0x2cd PushI
	var_81_bool = var_78_int == var_80_int; // 0x2ce Eq
	if(var_81_bool == 0) goto Label_723; // 0x2cf JumpB
	var_76_int = 1; // 0x2d0 MovI
	return 2; // 0x2d1 Return
	
Label_723:
	var_82_int = 1; // 0x2d3 PushI
	var_83_bool = var_78_int == var_82_int; // 0x2d4 Eq
	if(var_83_bool == 0) goto Label_728; // 0x2d5 JumpB
	var_76_int = 2; // 0x2d6 MovI
	return 2; // 0x2d7 Return
	
Label_728:
	var_76_int = 3; // 0x2d8 MovI
	return 2; // 0x2d9 Return
}


func_650(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x28a PushV
	var_40_int = 0; // 0x28b MovI
	
Label_652:
	var_42_string = "all"; // 0x28c PushS
	var_43_string = ""; var_44_int = 0; // 0x28d PushV
	var_44_int = var_40_int; // 0x28e Mov
	func_643(var_43_string, var_44_int); // 0x28f NEW_2
	HasAnimation(var_41_bool, var_42_string, var_43_string); // 0x291 Func
	var_48_bool = var_41_bool == 0; // 0x293 Not
	if(var_48_bool == 0) goto Label_662; // 0x294 JumpB
	goto Label_665; // 0x295 Jump
	
Label_665:
	var_37_int = var_40_int; // 0x299 Mov
	return 4; // 0x29a Return
	
Label_662:
	var_49_int = 1; // 0x296 PushI
	var_40_int = var_40_int + var_49_int; // 0x297 Add2
	goto Label_652; // 0x298 Jump
}


func_395()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x18b PushV
	WaitForAnimEnd(); // 0x18c Func
	var_35_bool = 0; // 0x18e PushV
	func_489(var_35_bool); // 0x18f NEW_2
	var_36_bool = var_35_bool == 0; // 0x191 Not
	if(var_36_bool == 0) goto Label_404; // 0x192 JumpB
	return 14; // 0x193 Return
	
Label_404:
	var_37_int = 0; // 0x194 PushV
	func_650(var_37_int); // 0x195 NEW_2
	var_28_int = var_37_int; // 0x196 Mov
	var_29_int = 0; // 0x198 MovI
	
Label_409:
	var_50_bool = 0; // 0x199 PushV
	var_50_bool = 0; // 0x19a MovB
	var_51_int = 5; // 0x19b PushI
	var_52_bool = var_29_int < var_51_int; // 0x19c LT
	if(var_52_bool == 0) goto Label_419; // 0x19d JumpB
	var_53_bool = 0; // 0x19e PushV
	func_489(var_53_bool); // 0x19f NEW_2
	if(var_53_bool == 0) goto Label_419; // 0x1a1 JumpB
	var_50_bool = 1; // 0x1a2 MovB
	
Label_419:
	if(var_50_bool == 0) goto Label_471; // 0x1a3 JumpB
	var_54_int = 3; // 0x1a4 PushI
	irand(var_30_int, var_54_int); // 0x1a5 Func
	var_55_int = 0; // 0x1a7 PushI
	var_56_bool = var_30_int == var_55_int; // 0x1a8 Eq
	if(var_56_bool == 0) goto Label_443; // 0x1a9 JumpB
	var_57_int = var_28_int; // 0x1aa Push
	if(var_57_int == 0) goto Label_442; // 0x1ab JumpB
	irand(var_31_int, var_28_int); // 0x1ac Func
	var_58_string = "all"; // 0x1ae PushS
	var_59_string = ""; var_60_int = 0; // 0x1af PushV
	var_60_int = var_31_int; // 0x1b0 Mov
	func_643(var_59_string, var_60_int); // 0x1b1 NEW_2
	PlayAnimation(var_58_string, var_59_string); // 0x1b3 Func
	WaitForAnimEnd(var_32_bool); // 0x1b5 Func
	var_61_bool = var_32_bool == 0; // 0x1b7 Not
	if(var_61_bool == 0) goto Label_442; // 0x1b8 JumpB
	goto Label_471; // 0x1b9 Jump
	
Label_471:
	ResetAAS(); // 0x1d7 Func
	return 14; // 0x1d9 Return
	
Label_442:
	goto Label_460; // 0x1ba Jump
	
Label_460:
	var_62_bool = 0; // 0x1cc PushV
	func_474(var_62_bool); // 0x1cd NEW_2
	var_63_bool = var_62_bool == 0; // 0x1cf Not
	if(var_63_bool == 0) goto Label_466; // 0x1d0 JumpB
	goto Label_471; // 0x1d1 Jump
	
Label_466:
	ResetAAS(); // 0x1d2 Func
	var_64_int = 1; // 0x1d4 PushI
	var_29_int = var_29_int + var_64_int; // 0x1d5 Add2
	goto Label_409; // 0x1d6 Jump
	
Label_443:
	var_65_int = 1; // 0x1bb PushI
	var_66_bool = var_30_int == var_65_int; // 0x1bc Eq
	if(var_66_bool == 0) goto Label_457; // 0x1bd JumpB
	var_67_int = 4; // 0x1be PushI
	rand(var_33_float, var_67_int); // 0x1bf Func
	var_68_int = 1; // 0x1c1 PushI
	var_69_int = var_33_float + var_68_int; // 0x1c2 Add
	Sleep(var_69_int, var_34_bool); // 0x1c3 Func
	var_70_bool = var_34_bool == 0; // 0x1c5 Not
	if(var_70_bool == 0) goto Label_456; // 0x1c6 JumpB
	goto Label_471; // 0x1c7 Jump
	
Label_456:
	goto Label_460; // 0x1c8 Jump
	
Label_457:
	var_71_int = var_29_int; // 0x1c9 Push
	if(var_71_int == 0) goto Label_460; // 0x1ca JumpB
	goto Label_471; // 0x1cb Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_117; // 0x4f JumpB
	var_92_string = ""; // 0x50 PushV
	var_92_string = "Neutral"; // 0x51 MovS
	func_147(var_86_object, var_92_string); // 0x52 NEW_2
	var_109_int = 504018; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_bool = 0; var_111_object = Obj(); // 0x59 PushV
	var_111_object = var_1_object; // 0x5a MovT
	func_689(var_111_object); // 0x5b NEW_2
	if(var_110_bool == 0) goto Label_99; // 0x5d JumpB
	var_118_int = 504019; // 0x5e PushI
	var_119_int = 4375; // 0x5f PushI
	var_120_int = 4374; // 0x60 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x61 TObjFunc
	
Label_99:
	var_121_bool = 0; var_122_object = Obj(); // 0x63 PushV
	var_122_object = var_1_object; // 0x64 MovT
	func_701(var_122_object); // 0x65 NEW_2
	if(var_121_bool == 0) goto Label_109; // 0x67 JumpB
	var_127_int = 504021; // 0x68 PushI
	var_128_int = 4377; // 0x69 PushI
	var_129_int = 4376; // 0x6a PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x6b TObjFunc
	
Label_109:
	var_130_int = 536329; // 0x6d PushI
	var_131_int = -1; // 0x6e PushI
	var_132_int = 38110; // 0x6f PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x70 TObjFunc
	goto Label_117; // 0x72 Jump
	
Label_117:
	var_133_bool = 0; // 0x75 PushV
	func_675(var_133_bool); // 0x76 NEW_2
	if(var_133_bool == 0) goto Label_132; // 0x78 JumpB
	
Label_121:
	lshWaitForAnimEnd(); // 0x79 Func
	var_134_string = var_3_string; // 0x7b PushT
	if(var_134_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_131:
	goto Label_146; // 0x83 Jump
	
Label_146:
	return 0; // 0x92 Return
	
Label_126:
	var_135_string = ""; // 0x7e PushV
	var_135_string = var_2_object; // 0x7f MovT
	func_579(var_135_string); // 0x80 NEW_2
	goto Label_121; // 0x82 Jump
	
Label_132:
	var_146_string = "all"; // 0x84 PushS
	var_147_string = "idle"; // 0x85 PushS
	PlayAnimation(var_146_string, var_147_string); // 0x86 Func
	
Label_136:
	WaitForAnimEnd(); // 0x88 Func
	var_148_string = var_3_string; // 0x8a PushT
	if(var_148_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_141:
	var_149_string = "all"; // 0x8d PushS
	var_150_string = "idle"; // 0x8e PushS
	PlayAnimation(var_149_string, var_150_string); // 0x8f Func
	goto Label_136; // 0x91 Jump
}


func_147(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0x94 PushV
	func_675(var_93_bool); // 0x95 NEW_2
	var_94_bool = var_93_bool == 0; // 0x97 Not
	if(var_94_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_95_bool = var_92_string == var_2_object; // 0x9a Eq
	if(var_95_bool == 0) goto Label_157; // 0x9b JumpB
	return 0; // 0x9c Return
	
Label_157:
	var_96_string = ""; var_97_bool = 0; // 0x9d PushV
	var_96_string = var_92_string; // 0x9e Mov
	var_98_string = ""; // 0x9f PushS
	var_99_bool = var_92_string == var_98_string; // 0xa0 Eq
	if(var_99_bool == 0) goto Label_164; // 0xa1 JumpB
	var_97_bool = 0; // 0xa2 MovB
	goto Label_165; // 0xa3 Jump
	
Label_165:
	func_595(var_96_string, var_97_bool); // 0xa5 NEW_2
	var_2_object = var_92_string; // 0xa7 TMov
	return 0; // 0xa8 Return
	
Label_164:
	var_97_bool = 1; // 0xa4 MovB
}


func_595(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x253 PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x254 Func
	var_106_bool = var_103_bool; // 0x256 Push
	if(var_106_bool == 0) goto Label_605; // 0x257 JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x258 Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x25a Func
	goto Label_609; // 0x25c Jump
	
Label_609:
	return 6; // 0x261 Return
	
Label_605:
	var_107_string = "Can't find lsh animation : "; // 0x25d PushS
	var_108_int = var_107_string + var_96_string; // 0x25e Add
	Trace(var_108_int); // 0x25f Func
}


func_343(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x157 PushV
	var_16_bool = var_4_bool == 0; // 0x158 NullEq
	if(var_16_bool == 0) goto Label_348; // 0x159 JumpB
	var_13_bool = 0; // 0x15a MovB
	return 2; // 0x15b Return
	
Label_348:
	var_17_float = 0; var_18_object = Obj(); // 0x15c PushV
	var_18_object = var_4_bool; // 0x15d MovT
	func_481(var_18_object); // 0x15e NEW_2
	var_15_float = sqrt(var_17_float); // 0x160 Sqrt2
	var_25_object = var_2_object; // 0x161 PushT
	if(var_25_object == 0) goto Label_356; // 0x162 JumpB
	var_15_float = var_15_float - var_1_object; // 0x163 Sub2
	
Label_356:
	var_13_bool = var_15_float < var_0_object; // 0x164 LT2
	return 2; // 0x165 Return
}


func_474(var_62_bool)
{
	var_62_bool = 1; // 0x1da MovB
	return 0; // 0x1db Return
}


func_667(var_73_int)
{
	var_73_int = 515564; // 0x29b MovI
	return 0; // 0x29c Return
}


func_476()
{
	StopAnimation(); // 0x1dc Func
	StopGroup0(); // 0x1de Func
	return 0; // 0x1e0 Return
}


func_669(var_72_int)
{
	var_72_int = 503349; // 0x29d MovI
	return 0; // 0x29e Return
}


func_671(var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png"; // 0x29f MovS
	return 0; // 0x2a0 Return
}


func_673(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png"; // 0x2a1 MovS
	return 0; // 0x2a2 Return
}


func_481(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x1e1 PushV
	GetPosition(var_22_cvector); // 0x1e2 Func
	GetPosition(var_23_cvector); // 0x1e4 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x1e6 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x1e7 Or2
	return 6; // 0x1e8 Return
}


func_675(var_67_bool)
{
	var_67_bool = 0; // 0x2a3 MovB
	return 0; // 0x2a4 Return
}


func_610(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x262 PushV
	GetEyesHeight(var_30_float); // 0x263 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x265 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x266 PushE
	var_32_float = var_30_float; // 0x267 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x268 PopE
	var_33_string = "head"; // 0x269 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x26a Func
	return 4; // 0x26c Return
}


func_677()
{
	var_18_string = "ood6Unosha1"; // 0x2a6 PushS
	var_19_int = 1; // 0x2a7 PushI
	SetVariable(var_18_string, var_19_int); // 0x2a8 Func
	return 0; // 0x2aa Return
}


func_489(var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0; // 0x1e9 PushV
	IsLoaded(var_16_bool); // 0x1ea Func
	var_14_bool = var_16_bool; // 0x1ec Mov
	return 2; // 0x1ed Return
}


func_683()
{
	var_24_string = "ood6Unosha2"; // 0x2ac PushS
	var_25_int = 1; // 0x2ad PushI
	SetVariable(var_24_string, var_25_int); // 0x2ae Func
	return 0; // 0x2b0 Return
}


func_621()
{
	var_13_bool = 0; // 0x26d PushV
	func_675(var_13_bool); // 0x26e NEW_2
	if(var_13_bool == 0) goto Label_627; // 0x270 JumpB
	lshStopSpeech(); // 0x271 Func
	
Label_627:
	return 0; // 0x273 Return
}


func_494(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x1ee PushV
	GetPosition(var_38_cvector); // 0x1ef ObjFunc
	GetEyesHeight(var_37_float); // 0x1f1 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x1f3 PushE
	var_46_float = var_46_float + var_37_float; // 0x1f4 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x1f5 PopE
	GetPosition(var_39_cvector); // 0x1f6 Func
	GetEyesHeight(var_37_float); // 0x1f8 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x1fa PushE
	var_47_float = var_47_float + var_37_float; // 0x1fb Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x1fc PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x1fd Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1fe PushE
	var_48_float = 0; // 0x1ff MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x200 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x201 Or
	var_50_float = sqrt(var_49_int); // 0x202 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x203 Div2
	var_41_cvector = -var_40_cvector; // 0x204 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x205 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x206 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x207 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x208 Xor2
	func_628(var_52_cvector, var_53_cvector); // 0x209 NEW_2
	var_60_int = 25; // 0x20b PushI
	var_61_float = var_52_cvector * var_60_int; // 0x20c Mult
	var_62_int = var_51_float + var_61_float; // 0x20d Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x20e PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x20f Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x210 Add2
	IsOverrideActive(var_44_bool); // 0x211 Func
	var_64_bool = var_44_bool; // 0x213 Push
	if(var_64_bool == 0) goto Label_535; // 0x214 JumpB
	var_25_bool = 0; // 0x215 MovB
	return 18; // 0x216 Return
	
Label_535:
	StopWorld(); // 0x217 Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x219 Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x21b PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x21c PushE
	Rotate(var_65_float, var_66_float); // 0x21d Func
	var_67_bool = 0; // 0x21f PushV
	func_675(var_67_bool); // 0x220 NEW_2
	if(var_67_bool == 0) goto Label_548; // 0x222 JumpB
	goto Label_556; // 0x223 Jump
	
Label_556:
	CameraWaitForPlayFinish(); // 0x22c Func
	ResumeWorld(); // 0x22e Func
	var_25_bool = 1; // 0x230 MovB
	return 18; // 0x231 Return
	
Label_548:
	var_68_string = "head"; // 0x224 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x225 Func
	var_69_bool = var_45_bool; // 0x227 Push
	if(var_69_bool == 0) goto Label_556; // 0x228 JumpB
	var_70_string = "head"; // 0x229 PushS
	LookAsyncCamera(var_70_string); // 0x22a Func
}


func_689(var_110_bool)
{
	var_112_int = 0; var_113_string = ""; // 0x2b2 PushV
	var_113_string = "ood6Unosha1"; // 0x2b3 MovS
	func_638(var_112_int, var_113_string); // 0x2b4 NEW_2
	var_116_int = 0; // 0x2b6 PushI
	var_117_bool = var_112_int == var_116_int; // 0x2b7 Eq
	if(var_117_bool == 0) goto Label_699; // 0x2b8 JumpB
	var_110_bool = 1; // 0x2b9 MovB
	return 0; // 0x2ba Return
	
Label_699:
	var_110_bool = 0; // 0x2bb MovB
	return 0; // 0x2bc Return
}


func_562()
{
	var_153_bool = 0; var_154_bool = 0; // 0x232 PushV
	CameraSwitchToNormal(); // 0x233 Func
	var_155_bool = 0; // 0x235 PushV
	func_675(var_155_bool); // 0x236 NEW_2
	if(var_155_bool == 0) goto Label_570; // 0x238 JumpB
	goto Label_578; // 0x239 Jump
	
Label_578:
	return 2; // 0x242 Return
	
Label_570:
	var_156_string = "head"; // 0x23a PushS
	HasAnimationTrack(var_154_bool, var_156_string); // 0x23b Func
	var_157_bool = var_154_bool; // 0x23d Push
	if(var_157_bool == 0) goto Label_578; // 0x23e JumpB
	var_158_string = "head"; // 0x23f PushS
	UnlookAsync(var_158_string); // 0x240 Func
}


func_381(var_2_object, var_3_string)
{
	func_476(); // 0x17e NEW_2
	var_11_int = 10; // 0x180 PushI
	KillTimer(var_11_int); // 0x181 Func
	var_12_object = var_2_object; // 0x183 PushT
	if(var_12_object == 0) goto Label_393; // 0x184 JumpB
	var_13_string = "head"; // 0x185 PushS
	UnlookAsync(var_13_string); // 0x186 Func
	var_2_object = 0; // 0x188 TMovB
	
Label_393:
	var_3_string = 1; // 0x189 TMovB
	return 0; // 0x18a Return
}


func_628(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x274 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x275 Or
	var_56_float = sqrt(var_57_int); // 0x276 Sqrt2
	var_58_float = 0.0; // 0x277 PushF
	var_59_bool = var_56_float < var_58_float; // 0x278 LT
	if(var_59_bool == 0) goto Label_636; // 0x279 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x27a MovV
	return 2; // 0x27b Return
	
Label_636:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x27c Div2
	return 2; // 0x27d Return
}


func_316(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_12_float, var_13_float)
{
	var_14_bool = 0; // 0x13d PushV
	func_489(var_14_bool); // 0x13e NEW_2
	var_17_bool = var_14_bool == 0; // 0x140 Not
	if(var_17_bool == 0) goto Label_323; // 0x141 JumpB
	return 0; // 0x142 Return
	
Label_323:
	var_18_string = "player"; // 0x143 PushS
	FindActor(var_9_object, var_18_string); // 0x144 Func
	var_2_object = 0; // 0x146 TMovB
	var_3_string = 0; // 0x147 TMovB
	var_0_object = var_12_float; // 0x148 TMov
	var_1_object = var_13_float; // 0x149 TMov
	var_19_int = 10; // 0x14a PushI
	var_20_float = 1.0; // 0x14b PushF
	SetTimer(var_19_int, var_20_float); // 0x14c Func
	func_395(); // 0x14f NEW_2
	var_72_bool = var_3_string == 0; // 0x151 Not
	if(var_72_bool == 0) goto Label_342; // 0x152 JumpB
	var_73_int = 10; // 0x153 PushI
	KillTimer(var_73_int); // 0x154 Func
	
Label_342:
	return 0; // 0x156 Return
}


func_701(var_121_bool)
{
	var_123_int = 0; var_124_string = ""; // 0x2be PushV
	var_124_string = "ood6Unosha2"; // 0x2bf MovS
	func_638(var_123_int, var_124_string); // 0x2c0 NEW_2
	var_125_int = 0; // 0x2c2 PushI
	var_126_bool = var_123_int == var_125_int; // 0x2c3 Eq
	if(var_126_bool == 0) goto Label_711; // 0x2c4 JumpB
	var_121_bool = 1; // 0x2c5 MovB
	return 0; // 0x2c6 Return
	
Label_711:
	var_121_bool = 0; // 0x2c7 MovB
	return 0; // 0x2c8 Return
}


func_638(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0; // 0x27e PushV
	GetVariable(var_113_string, var_115_int); // 0x27f Func
	var_112_int = var_115_int; // 0x281 Mov
	return 2; // 0x282 Return
}


