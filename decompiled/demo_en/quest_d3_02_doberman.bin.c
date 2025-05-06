task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xa0 PushI
	if(var_14_int == 0) goto Label_231; // 0xa1 JumpB
	func_623(); // 0xa3 NEW_2
	var_16_int = 37103; // 0xa5 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xa6 Eq
	if(var_17_bool == 0) goto Label_173; // 0xa7 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xa8 PushV
	var_18_object = var_1_object; // 0xa9 MovT
	var_19_object = var_0_object; // 0xaa MovT
	func_697(); // 0xab NEW_2
	
Label_173:
	var_26_int = 37100; // 0xad PushI
	var_27_bool = var_12_bool == var_26_int; // 0xae Eq
	if(var_27_bool == 0) goto Label_201; // 0xaf JumpB
	var_28_string = ""; // 0xb0 PushV
	var_28_string = "Neutral"; // 0xb1 MovS
	func_137(var_13_bool, var_28_string); // 0xb2 NEW_2
	var_45_int = 535420; // 0xb4 PushI
	SetMessage(var_45_int); // 0xb5 TObjFunc
	ClearReplies(); // 0xb7 TObjFunc
	var_46_bool = 0; var_47_object = Obj(); // 0xb9 PushV
	var_47_object = var_1_object; // 0xba MovT
	func_704(var_47_object); // 0xbb NEW_2
	if(var_46_bool == 0) goto Label_195; // 0xbd JumpB
	var_54_int = 535421; // 0xbe PushI
	var_55_int = 37102; // 0xbf PushI
	var_56_int = 37101; // 0xc0 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xc1 TObjFunc
	
Label_195:
	var_57_int = 535424; // 0xc3 PushI
	var_58_int = -1; // 0xc4 PushI
	var_59_int = 37104; // 0xc5 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xc6 TObjFunc
	return 0; // 0xc8 Return
	
Label_201:
	var_60_int = 37102; // 0xc9 PushI
	var_61_bool = var_12_bool == var_60_int; // 0xca Eq
	if(var_61_bool == 0) goto Label_219; // 0xcb JumpB
	var_62_string = ""; // 0xcc PushV
	var_62_string = "Neutral"; // 0xcd MovS
	func_137(var_13_bool, var_62_string); // 0xce NEW_2
	var_63_int = 535422; // 0xd0 PushI
	SetMessage(var_63_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_64_int = 535423; // 0xd5 PushI
	var_65_int = -1; // 0xd6 PushI
	var_66_int = 37103; // 0xd7 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xd8 TObjFunc
	return 0; // 0xda Return
	
Label_219:
	var_3_string = 1; // 0xdb TMovB
	var_67_bool = 0; // 0xdc PushV
	func_695(var_67_bool); // 0xdd NEW_2
	if(var_67_bool == 0) goto Label_227; // 0xdf JumpB
	lshStopAnimation(); // 0xe0 Func
	goto Label_229; // 0xe2 Jump
	
Label_229:
	return 0; // 0xe5 Return
	
Label_227:
	StopAnimation(); // 0xe3 Func
	
Label_231:
	return 0; // 0xe7 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_383(var_11_bool, var_12_object); // 0xf0 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0xf2 PushV
	var_17_object = var_12_object; // 0xf3 Mov
	TaskCall(0); // 0xf4 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0xf5 NEW_2
	TaskReturn(); // 0xf6 TaskReturn
	return 0; // 0xf8 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x120 PushS
	var_14_bool = var_12_string == var_13_string; // 0x121 Eq
	if(var_14_bool == 0) goto Label_294; // 0x122 JumpB
	func_267(var_12_string); // 0x124 NEW_2
	
Label_294:
	return 0; // 0x126 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x127 PushT
	if(var_12_int == 0) goto Label_300; // 0x128 JumpB
	func_383(var_10_bool, var_11_bool); // 0x12a NEW_2
	
Label_300:
	var_16_bool = 0; // 0x12c PushV
	var_16_bool = 0; // 0x12d MovB
	var_17_int = var_5_int; // 0x12e PushT
	if(var_17_int == 0) goto Label_309; // 0x12f JumpB
	var_18_bool = 0; // 0x130 PushV
	func_316(var_18_bool); // 0x131 NEW_2
	if(var_18_bool == 0) goto Label_309; // 0x133 JumpB
	var_16_bool = 1; // 0x134 MovB
	
Label_309:
	if(var_16_bool == 0) goto Label_315; // 0x135 JumpB
	var_19_object = Obj(); // 0x136 PushV
	func_630(var_19_object); // 0x137 NEW_2
	RemoveActor(var_19_object); // 0x139 Func
	
Label_315:
	return 0; // 0x13b Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x169 PushI
	var_14_bool = var_12_int == var_13_int; // 0x16a Eq
	if(var_14_bool == 0) goto Label_382; // 0x16b JumpB
	var_15_bool = 0; // 0x16c PushV
	func_345(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x16d NEW_2
	if(var_15_bool == 0) goto Label_376; // 0x16f JumpB
	var_28_bool = var_2_object == 0; // 0x170 Not
	if(var_28_bool == 0) goto Label_375; // 0x171 JumpB
	var_29_object = Obj(); // 0x172 PushV
	var_29_object = var_4_bool; // 0x173 MovT
	func_612(var_29_object); // 0x174 NEW_2
	var_2_object = 1; // 0x176 TMovB
	
Label_375:
	goto Label_382; // 0x177 Jump
	
Label_382:
	return 0; // 0x17e Return
	
Label_376:
	var_36_object = var_2_object; // 0x178 PushT
	if(var_36_object == 0) goto Label_382; // 0x179 JumpB
	var_37_string = "head"; // 0x17a PushS
	UnlookAsync(var_37_string); // 0x17b Func
	var_2_object = 0; // 0x17d TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0xe8 PushV
	var_12_float = 300; // 0xe9 MovI
	var_13_float = 100; // 0xea MovI
	func_249(var_11_bool, var_12_float, var_13_float); // 0xeb NEW_2
	return 0; // 0xed Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_496(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_689(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_687(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_691(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_693(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_716(var_78_int); // 0x22 NEW_2
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
	var_144_bool = var_26_bool == 0; // 0x38 Not
	if(var_144_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_145_object = Obj(); // 0x3f PushV
	var_145_object = var_17_object; // 0x40 Mov
	func_564(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_646(var_114_int, var_115_string)
{
	var_116_int = 0; var_117_int = 0; // 0x286 PushV
	GetVariable(var_115_string, var_117_int); // 0x287 Func
	var_114_int = var_117_int; // 0x289 Mov
	return 2; // 0x28a Return
}


func_137(var_2_object, var_94_string)
{
	var_95_bool = 0; // 0x8a PushV
	func_695(var_95_bool); // 0x8b NEW_2
	var_96_bool = var_95_bool == 0; // 0x8d Not
	if(var_96_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_97_bool = var_94_string == var_2_object; // 0x90 Eq
	if(var_97_bool == 0) goto Label_147; // 0x91 JumpB
	return 0; // 0x92 Return
	
Label_147:
	var_98_string = ""; var_99_bool = 0; // 0x93 PushV
	var_98_string = var_94_string; // 0x94 Mov
	var_100_string = ""; // 0x95 PushS
	var_101_bool = var_94_string == var_100_string; // 0x96 Eq
	if(var_101_bool == 0) goto Label_154; // 0x97 JumpB
	var_99_bool = 0; // 0x98 MovB
	goto Label_155; // 0x99 Jump
	
Label_155:
	func_597(var_98_string, var_99_bool); // 0x9b NEW_2
	var_2_object = var_94_string; // 0x9d TMov
	return 0; // 0x9e Return
	
Label_154:
	var_99_bool = 1; // 0x9a MovB
}


func_267(var_5_int)
{
	var_5_int = 1; // 0x10b TMovB
	var_15_bool = 0; // 0x10c PushV
	var_15_bool = 0; // 0x10d MovB
	var_16_bool = 0; // 0x10e PushV
	func_491(var_16_bool); // 0x10f NEW_2
	var_19_bool = var_16_bool == 0; // 0x111 Not
	if(var_19_bool == 0) goto Label_280; // 0x112 JumpB
	var_20_bool = 0; // 0x113 PushV
	func_316(var_20_bool); // 0x114 NEW_2
	if(var_20_bool == 0) goto Label_280; // 0x116 JumpB
	var_15_bool = 1; // 0x117 MovB
	
Label_280:
	if(var_15_bool == 0) goto Label_286; // 0x118 JumpB
	var_21_object = Obj(); // 0x119 PushV
	func_630(var_21_object); // 0x11a NEW_2
	RemoveActor(var_21_object); // 0x11c Func
	
Label_286:
	return 0; // 0x11e Return
}


func_651(var_20_bool, var_21_string, var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x28b PushV
	FindActor(var_24_object, var_21_string); // 0x28c Func
	var_25_bool = var_24_object == 0; // 0x28e NullEq
	if(var_25_bool == 0) goto Label_658; // 0x28f JumpB
	var_20_bool = 0; // 0x290 MovB
	return 2; // 0x291 Return
	
Label_658:
	Trigger(var_24_object, var_22_string); // 0x292 Func
	var_20_bool = 1; // 0x294 MovB
	return 2; // 0x295 Return
}


func_397()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x18d PushV
	WaitForAnimEnd(); // 0x18e Func
	var_44_bool = 0; // 0x190 PushV
	func_491(var_44_bool); // 0x191 NEW_2
	var_45_bool = var_44_bool == 0; // 0x193 Not
	if(var_45_bool == 0) goto Label_406; // 0x194 JumpB
	return 14; // 0x195 Return
	
Label_406:
	var_46_int = 0; // 0x196 PushV
	func_670(var_46_int); // 0x197 NEW_2
	var_37_int = var_46_int; // 0x198 Mov
	var_38_int = 0; // 0x19a MovI
	
Label_411:
	var_59_bool = 0; // 0x19b PushV
	var_59_bool = 0; // 0x19c MovB
	var_60_int = 5; // 0x19d PushI
	var_61_bool = var_38_int < var_60_int; // 0x19e LT
	if(var_61_bool == 0) goto Label_421; // 0x19f JumpB
	var_62_bool = 0; // 0x1a0 PushV
	func_491(var_62_bool); // 0x1a1 NEW_2
	if(var_62_bool == 0) goto Label_421; // 0x1a3 JumpB
	var_59_bool = 1; // 0x1a4 MovB
	
Label_421:
	if(var_59_bool == 0) goto Label_473; // 0x1a5 JumpB
	var_63_int = 3; // 0x1a6 PushI
	irand(var_39_int, var_63_int); // 0x1a7 Func
	var_64_int = 0; // 0x1a9 PushI
	var_65_bool = var_39_int == var_64_int; // 0x1aa Eq
	if(var_65_bool == 0) goto Label_445; // 0x1ab JumpB
	var_66_int = var_37_int; // 0x1ac Push
	if(var_66_int == 0) goto Label_444; // 0x1ad JumpB
	irand(var_40_int, var_37_int); // 0x1ae Func
	var_67_string = "all"; // 0x1b0 PushS
	var_68_string = ""; var_69_int = 0; // 0x1b1 PushV
	var_69_int = var_40_int; // 0x1b2 Mov
	func_663(var_68_string, var_69_int); // 0x1b3 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x1b5 Func
	WaitForAnimEnd(var_41_bool); // 0x1b7 Func
	var_70_bool = var_41_bool == 0; // 0x1b9 Not
	if(var_70_bool == 0) goto Label_444; // 0x1ba JumpB
	goto Label_473; // 0x1bb Jump
	
Label_473:
	ResetAAS(); // 0x1d9 Func
	return 14; // 0x1db Return
	
Label_444:
	goto Label_462; // 0x1bc Jump
	
Label_462:
	var_71_bool = 0; // 0x1ce PushV
	func_476(var_71_bool); // 0x1cf NEW_2
	var_72_bool = var_71_bool == 0; // 0x1d1 Not
	if(var_72_bool == 0) goto Label_468; // 0x1d2 JumpB
	goto Label_473; // 0x1d3 Jump
	
Label_468:
	ResetAAS(); // 0x1d4 Func
	var_73_int = 1; // 0x1d6 PushI
	var_38_int = var_38_int + var_73_int; // 0x1d7 Add2
	goto Label_411; // 0x1d8 Jump
	
Label_445:
	var_74_int = 1; // 0x1bd PushI
	var_75_bool = var_39_int == var_74_int; // 0x1be Eq
	if(var_75_bool == 0) goto Label_459; // 0x1bf JumpB
	var_76_int = 4; // 0x1c0 PushI
	rand(var_42_float, var_76_int); // 0x1c1 Func
	var_77_int = 1; // 0x1c3 PushI
	var_78_int = var_42_float + var_77_int; // 0x1c4 Add
	Sleep(var_78_int, var_43_bool); // 0x1c5 Func
	var_79_bool = var_43_bool == 0; // 0x1c7 Not
	if(var_79_bool == 0) goto Label_458; // 0x1c8 JumpB
	goto Label_473; // 0x1c9 Jump
	
Label_458:
	goto Label_462; // 0x1ca Jump
	
Label_459:
	var_80_int = var_38_int; // 0x1cb Push
	if(var_80_int == 0) goto Label_462; // 0x1cc JumpB
	goto Label_473; // 0x1cd Jump
}


func_663(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x297 PushV
	var_55_string = "idle"; // 0x298 MovS
	var_56_int = var_53_int; // 0x299 Push
	if(var_56_int == 0) goto Label_668; // 0x29a JumpB
	var_55_string = var_55_string + var_53_int; // 0x29b Add2
	
Label_668:
	var_52_string = var_55_string; // 0x29c Mov
	return 2; // 0x29d Return
}


func_670(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x29e PushV
	var_49_int = 0; // 0x29f MovI
	
Label_672:
	var_51_string = "all"; // 0x2a0 PushS
	var_52_string = ""; var_53_int = 0; // 0x2a1 PushV
	var_53_int = var_49_int; // 0x2a2 Mov
	func_663(var_52_string, var_53_int); // 0x2a3 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x2a5 Func
	var_57_bool = var_50_bool == 0; // 0x2a7 Not
	if(var_57_bool == 0) goto Label_682; // 0x2a8 JumpB
	goto Label_685; // 0x2a9 Jump
	
Label_685:
	var_46_int = var_49_int; // 0x2ad Mov
	return 4; // 0x2ae Return
	
Label_682:
	var_58_int = 1; // 0x2aa PushI
	var_49_int = var_49_int + var_58_int; // 0x2ab Add2
	goto Label_672; // 0x2ac Jump
}


func_687(var_75_int)
{
	var_75_int = 518097; // 0x2af MovI
	return 0; // 0x2b0 Return
}


func_689(var_74_int)
{
	var_74_int = 518096; // 0x2b1 MovI
	return 0; // 0x2b2 Return
}


func_691(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2.png"; // 0x2b3 MovS
	return 0; // 0x2b4 Return
}


func_564()
{
	var_146_bool = 0; var_147_bool = 0; // 0x234 PushV
	CameraSwitchToNormal(); // 0x235 Func
	var_148_bool = 0; // 0x237 PushV
	func_695(var_148_bool); // 0x238 NEW_2
	if(var_148_bool == 0) goto Label_572; // 0x23a JumpB
	goto Label_580; // 0x23b Jump
	
Label_580:
	return 2; // 0x244 Return
	
Label_572:
	var_149_string = "head"; // 0x23c PushS
	HasAnimationTrack(var_147_bool, var_149_string); // 0x23d Func
	var_150_bool = var_147_bool; // 0x23f Push
	if(var_150_bool == 0) goto Label_580; // 0x240 JumpB
	var_151_string = "head"; // 0x241 PushS
	UnlookAsync(var_151_string); // 0x242 Func
}


func_693(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2_b.png"; // 0x2b5 MovS
	return 0; // 0x2b6 Return
}


func_695(var_69_bool)
{
	var_69_bool = 0; // 0x2b7 MovB
	return 0; // 0x2b8 Return
}


func_697()
{
	var_20_bool = 0; var_21_string = ""; var_22_string = ""; // 0x2ba PushV
	var_21_string = "quest_d3_02"; // 0x2bb MovS
	var_22_string = "teleport"; // 0x2bc MovS
	func_651(var_20_bool, var_21_string, var_22_string); // 0x2bd NEW_2
	return 0; // 0x2bf Return
}


func_316(var_18_bool)
{
	var_18_bool = 1; // 0x13c MovB
	return 0; // 0x13d Return
}


func_318(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x13f PushV
	func_491(var_23_bool); // 0x140 NEW_2
	var_26_bool = var_23_bool == 0; // 0x142 Not
	if(var_26_bool == 0) goto Label_325; // 0x143 JumpB
	return 0; // 0x144 Return
	
Label_325:
	var_27_string = "player"; // 0x145 PushS
	FindActor(var_17_bool, var_27_string); // 0x146 Func
	var_2_object = 0; // 0x148 TMovB
	var_3_string = 0; // 0x149 TMovB
	var_0_object = var_21_float; // 0x14a TMov
	var_1_object = var_22_float; // 0x14b TMov
	var_28_int = 10; // 0x14c PushI
	var_29_float = 1.0; // 0x14d PushF
	SetTimer(var_28_int, var_29_float); // 0x14e Func
	func_397(); // 0x151 NEW_2
	var_81_bool = var_3_string == 0; // 0x153 Not
	if(var_81_bool == 0) goto Label_344; // 0x154 JumpB
	var_82_int = 10; // 0x155 PushI
	KillTimer(var_82_int); // 0x156 Func
	
Label_344:
	return 0; // 0x158 Return
}


func_704(var_112_bool)
{
	var_114_int = 0; var_115_string = ""; // 0x2c1 PushV
	var_115_string = "d3q02"; // 0x2c2 MovS
	func_646(var_114_int, var_115_string); // 0x2c3 NEW_2
	var_118_int = 3; // 0x2c5 PushI
	var_119_bool = var_114_int == var_118_int; // 0x2c6 Eq
	if(var_119_bool == 0) goto Label_714; // 0x2c7 JumpB
	var_112_bool = 1; // 0x2c8 MovB
	return 0; // 0x2c9 Return
	
Label_714:
	var_112_bool = 0; // 0x2ca MovB
	return 0; // 0x2cb Return
}


func_581(var_128_string)
{
	var_129_bool = 0; var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_float = 0; var_134_float = 0; // 0x245 PushV
	lshHasAnimation(var_132_bool, var_128_string); // 0x246 Func
	var_135_bool = var_132_bool; // 0x248 Push
	if(var_135_bool == 0) goto Label_592; // 0x249 JumpB
	lshGetAnimTimes(var_128_string, var_133_float, var_134_float); // 0x24a Func
	var_136_bool = 0; // 0x24c PushB
	lshPlayAnimation(var_133_float, var_134_float, var_136_bool); // 0x24d Func
	goto Label_596; // 0x24f Jump
	
Label_596:
	return 6; // 0x254 Return
	
Label_592:
	var_137_string = "Can't find lsh animation : "; // 0x250 PushS
	var_138_int = var_137_string + var_128_string; // 0x251 Add
	Trace(var_138_int); // 0x252 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_107; // 0x4f JumpB
	var_94_string = ""; // 0x50 PushV
	var_94_string = "Neutral"; // 0x51 MovS
	func_137(var_88_object, var_94_string); // 0x52 NEW_2
	var_111_int = 535420; // 0x54 PushI
	SetMessage(var_111_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_112_bool = 0; var_113_object = Obj(); // 0x59 PushV
	var_113_object = var_1_object; // 0x5a MovT
	func_704(var_113_object); // 0x5b NEW_2
	if(var_112_bool == 0) goto Label_99; // 0x5d JumpB
	var_120_int = 535421; // 0x5e PushI
	var_121_int = 37102; // 0x5f PushI
	var_122_int = 37101; // 0x60 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x61 TObjFunc
	
Label_99:
	var_123_int = 535424; // 0x63 PushI
	var_124_int = -1; // 0x64 PushI
	var_125_int = 37104; // 0x65 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x66 TObjFunc
	goto Label_107; // 0x68 Jump
	
Label_107:
	var_126_bool = 0; // 0x6b PushV
	func_695(var_126_bool); // 0x6c NEW_2
	if(var_126_bool == 0) goto Label_122; // 0x6e JumpB
	
Label_111:
	lshWaitForAnimEnd(); // 0x6f Func
	var_127_string = var_3_string; // 0x71 PushT
	if(var_127_string == 0) goto Label_116; // 0x72 JumpB
	goto Label_121; // 0x73 Jump
	
Label_121:
	goto Label_136; // 0x79 Jump
	
Label_136:
	return 0; // 0x88 Return
	
Label_116:
	var_128_string = ""; // 0x74 PushV
	var_128_string = var_2_object; // 0x75 MovT
	func_581(var_128_string); // 0x76 NEW_2
	goto Label_111; // 0x78 Jump
	
Label_122:
	var_139_string = "all"; // 0x7a PushS
	var_140_string = "idle"; // 0x7b PushS
	PlayAnimation(var_139_string, var_140_string); // 0x7c Func
	
Label_126:
	WaitForAnimEnd(); // 0x7e Func
	var_141_string = var_3_string; // 0x80 PushT
	if(var_141_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_131:
	var_142_string = "all"; // 0x83 PushS
	var_143_string = "idle"; // 0x84 PushS
	PlayAnimation(var_142_string, var_143_string); // 0x85 Func
	goto Label_126; // 0x87 Jump
}


func_716(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x2cc PushV
	var_81_string = "branch"; // 0x2cd PushS
	GetVariable(var_81_string, var_80_int); // 0x2ce Func
	var_82_int = 0; // 0x2d0 PushI
	var_83_bool = var_80_int == var_82_int; // 0x2d1 Eq
	if(var_83_bool == 0) goto Label_726; // 0x2d2 JumpB
	var_78_int = 1; // 0x2d3 MovI
	return 2; // 0x2d4 Return
	
Label_726:
	var_84_int = 1; // 0x2d6 PushI
	var_85_bool = var_80_int == var_84_int; // 0x2d7 Eq
	if(var_85_bool == 0) goto Label_731; // 0x2d8 JumpB
	var_78_int = 2; // 0x2d9 MovI
	return 2; // 0x2da Return
	
Label_731:
	var_78_int = 3; // 0x2db MovI
	return 2; // 0x2dc Return
}


func_597(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0; // 0x255 PushV
	lshHasAnimation(var_105_bool, var_98_string); // 0x256 Func
	var_108_bool = var_105_bool; // 0x258 Push
	if(var_108_bool == 0) goto Label_607; // 0x259 JumpB
	lshGetAnimTimes(var_98_string, var_106_float, var_107_float); // 0x25a Func
	lshPlayAnimation(var_106_float, var_107_float, var_99_bool); // 0x25c Func
	goto Label_611; // 0x25e Jump
	
Label_611:
	return 6; // 0x263 Return
	
Label_607:
	var_109_string = "Can't find lsh animation : "; // 0x25f PushS
	var_110_int = var_109_string + var_98_string; // 0x260 Add
	Trace(var_110_int); // 0x261 Func
}


func_345(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x159 PushV
	var_18_bool = var_4_bool == 0; // 0x15a NullEq
	if(var_18_bool == 0) goto Label_350; // 0x15b JumpB
	var_15_bool = 0; // 0x15c MovB
	return 2; // 0x15d Return
	
Label_350:
	var_19_float = 0; var_20_object = Obj(); // 0x15e PushV
	var_20_object = var_4_bool; // 0x15f MovT
	func_483(var_20_object); // 0x160 NEW_2
	var_17_float = sqrt(var_19_float); // 0x162 Sqrt2
	var_27_object = var_2_object; // 0x163 PushT
	if(var_27_object == 0) goto Label_358; // 0x164 JumpB
	var_17_float = var_17_float - var_1_object; // 0x165 Sub2
	
Label_358:
	var_15_bool = var_17_float < var_0_object; // 0x166 LT2
	return 2; // 0x167 Return
}


func_476(var_71_bool)
{
	var_71_bool = 1; // 0x1dc MovB
	return 0; // 0x1dd Return
}


func_478()
{
	StopAnimation(); // 0x1de Func
	StopGroup0(); // 0x1e0 Func
	return 0; // 0x1e2 Return
}


func_483(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x1e3 PushV
	GetPosition(var_24_cvector); // 0x1e4 Func
	GetPosition(var_25_cvector); // 0x1e6 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x1e8 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x1e9 Or2
	return 6; // 0x1ea Return
}


func_612(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x264 PushV
	GetEyesHeight(var_32_float); // 0x265 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x267 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x268 PushE
	var_34_float = var_32_float; // 0x269 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x26a PopE
	var_35_string = "head"; // 0x26b PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x26c Func
	return 4; // 0x26e Return
}


func_491(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x1eb PushV
	IsLoaded(var_25_bool); // 0x1ec Func
	var_23_bool = var_25_bool; // 0x1ee Mov
	return 2; // 0x1ef Return
}


func_623()
{
	var_15_bool = 0; // 0x26f PushV
	func_695(var_15_bool); // 0x270 NEW_2
	if(var_15_bool == 0) goto Label_629; // 0x272 JumpB
	lshStopSpeech(); // 0x273 Func
	
Label_629:
	return 0; // 0x275 Return
}


func_496(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x1f0 PushV
	GetPosition(var_40_cvector); // 0x1f1 ObjFunc
	GetEyesHeight(var_39_float); // 0x1f3 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x1f5 PushE
	var_48_float = var_48_float + var_39_float; // 0x1f6 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x1f7 PopE
	GetPosition(var_41_cvector); // 0x1f8 Func
	GetEyesHeight(var_39_float); // 0x1fa Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x1fc PushE
	var_49_float = var_49_float + var_39_float; // 0x1fd Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x1fe PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x1ff Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x200 PushE
	var_50_float = 0; // 0x201 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x202 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x203 Or
	var_52_float = sqrt(var_51_int); // 0x204 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x205 Div2
	var_43_cvector = -var_42_cvector; // 0x206 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x207 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x208 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x209 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x20a Xor2
	func_636(var_54_cvector, var_55_cvector); // 0x20b NEW_2
	var_62_int = 25; // 0x20d PushI
	var_63_float = var_54_cvector * var_62_int; // 0x20e Mult
	var_64_int = var_53_float + var_63_float; // 0x20f Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x210 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x211 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x212 Add2
	IsOverrideActive(var_46_bool); // 0x213 Func
	var_66_bool = var_46_bool; // 0x215 Push
	if(var_66_bool == 0) goto Label_537; // 0x216 JumpB
	var_27_bool = 0; // 0x217 MovB
	return 18; // 0x218 Return
	
Label_537:
	StopWorld(); // 0x219 Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x21b Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x21d PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x21e PushE
	Rotate(var_67_float, var_68_float); // 0x21f Func
	var_69_bool = 0; // 0x221 PushV
	func_695(var_69_bool); // 0x222 NEW_2
	if(var_69_bool == 0) goto Label_550; // 0x224 JumpB
	goto Label_558; // 0x225 Jump
	
Label_558:
	CameraWaitForPlayFinish(); // 0x22e Func
	ResumeWorld(); // 0x230 Func
	var_27_bool = 1; // 0x232 MovB
	return 18; // 0x233 Return
	
Label_550:
	var_70_string = "head"; // 0x226 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x227 Func
	var_71_bool = var_47_bool; // 0x229 Push
	if(var_71_bool == 0) goto Label_558; // 0x22a JumpB
	var_72_string = "head"; // 0x22b PushS
	LookAsyncCamera(var_72_string); // 0x22c Func
}


func_630(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x276 PushV
	self(var_21_object); // 0x277 Func
	var_19_object = var_21_object; // 0x279 Mov
	return 2; // 0x27a Return
}


func_249(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0xf9 PushV
	var_6_int = 0; // 0xfa TMovB
	
Label_251:
	var_18_int = 3; // 0xfb PushI
	rand(var_16_float, var_18_int); // 0xfc Func
	var_19_int = 3; // 0xfe PushI
	var_20_int = var_16_float + var_19_int; // 0xff Add
	Sleep(var_20_int, var_17_bool); // 0x100 Func
	var_6_int = 1; // 0x102 TMovB
	var_21_float = 0; var_22_float = 0; // 0x103 PushV
	var_21_float = var_12_float; // 0x104 Mov
	var_22_float = var_13_float; // 0x105 Mov
	func_318(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x106 NEW_2
	var_6_int = 0; // 0x108 TMovB
	goto Label_251; // 0x109 Jump
}


func_636(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x27c PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x27d Or
	var_58_float = sqrt(var_59_int); // 0x27e Sqrt2
	var_60_float = 0.0; // 0x27f PushF
	var_61_bool = var_58_float < var_60_float; // 0x280 LT
	if(var_61_bool == 0) goto Label_644; // 0x281 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x282 MovV
	return 2; // 0x283 Return
	
Label_644:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x284 Div2
	return 2; // 0x285 Return
}


func_383(var_2_object, var_3_string)
{
	func_478(); // 0x180 NEW_2
	var_13_int = 10; // 0x182 PushI
	KillTimer(var_13_int); // 0x183 Func
	var_14_object = var_2_object; // 0x185 PushT
	if(var_14_object == 0) goto Label_395; // 0x186 JumpB
	var_15_string = "head"; // 0x187 PushS
	UnlookAsync(var_15_string); // 0x188 Func
	var_2_object = 0; // 0x18a TMovB
	
Label_395:
	var_3_string = 1; // 0x18b TMovB
	return 0; // 0x18c Return
}


