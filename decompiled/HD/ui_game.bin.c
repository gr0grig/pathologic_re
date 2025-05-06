task_0_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_bool = 0; var_26_bool = 0; // 0x1e PushV
	IsLost(var_24_bool); // 0x1f TObjFunc
	var_27_bool = var_24_bool; // 0x21 Push
	if(var_27_bool == 0) goto Label_40; // 0x22 JumpB
	Restore(var_25_bool); // 0x23 TObjFunc
	var_28_bool = var_25_bool == 0; // 0x25 Not
	if(var_28_bool == 0) goto Label_40; // 0x26 JumpB
	return 6; // 0x27 Return
	
Label_40:
	IsPlaying(var_26_bool); // 0x28 TObjFunc
	var_29_bool = var_26_bool; // 0x2a Push
	if(var_29_bool == 0) goto Label_49; // 0x2b JumpB
	var_30_int = 0; // 0x2c PushI
	var_31_int = 0; // 0x2d PushI
	StretchBlit(var_30_int, var_31_int, var_31_int, var_30_int); // 0x2e TObjFunc
	goto Label_55; // 0x30 Jump
	
Label_55:
	return 6; // 0x37 Return
	
Label_49:
	var_32_int = 0; // 0x31 PushI
	var_33_int = 0; // 0x32 PushI
	StretchBlit(var_32_int, var_33_int, var_33_int, var_32_int); // 0x33 TObjFunc
	StopEventProcessing(); // 0x35 Func
}


task_0_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_object, var_6_int, var_7_int, var_8_int, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_string, var_18_string, var_19_string, var_20_bool, var_21_object)
{
	var_22_bool = var_3_bool == 0; // 0x39 Not
	if(var_22_bool == 0) goto Label_60; // 0x3a JumpB
	return 0; // 0x3b Return
	
Label_60:
	var_23_bool = 0; // 0x3c PushV
	var_23_bool = 1; // 0x3d MovB
	var_24_bool = 0; // 0x3e PushV
	var_24_bool = 1; // 0x3f MovB
	var_25_bool = 0; // 0x40 PushV
	var_25_bool = 1; // 0x41 MovB
	var_26_int = 27; // 0x42 PushI
	var_27_bool = var_21_object == var_26_int; // 0x43 Eq
	if(var_27_bool == 0) goto Label_73; // 0x44 JumpB
	var_28_int = 32; // 0x45 PushI
	var_29_bool = var_21_object == var_28_int; // 0x46 Eq
	if(var_29_bool == 0) goto Label_73; // 0x47 JumpB
	var_25_bool = 0; // 0x48 MovB
	
Label_73:
	if(var_25_bool == 0) goto Label_78; // 0x49 JumpB
	var_30_int = 257; // 0x4a PushI
	var_31_bool = var_21_object == var_30_int; // 0x4b Eq
	if(var_31_bool == 0) goto Label_78; // 0x4c JumpB
	var_24_bool = 0; // 0x4d MovB
	
Label_78:
	if(var_24_bool == 0) goto Label_83; // 0x4e JumpB
	var_32_int = 262; // 0x4f PushI
	var_33_bool = var_21_object == var_32_int; // 0x50 Eq
	if(var_33_bool == 0) goto Label_83; // 0x51 JumpB
	var_23_bool = 0; // 0x52 MovB
	
Label_83:
	if(var_23_bool == 0) goto Label_88; // 0x53 JumpB
	StopEventProcessing(); // 0x54 Func
	Stop(); // 0x56 TObjFunc
	
Label_88:
	return 0; // 0x58 Return
}


task_1_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_string, var_7_object, var_8_int, var_9_int, var_10_int, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_string, var_19_string, var_20_string, var_21_string, var_22_bool, var_23_object)
{
	var_24_string = "intro"; // 0x65 PushS
	var_25_bool = var_22_bool == var_24_string; // 0x66 Eq
	if(var_25_bool == 0) goto Label_108; // 0x67 JumpB
	DestroyWindow(); // 0x68 TObjFunc
	StopEventProcessing(); // 0x6a Func
	
Label_108:
	return 0; // 0x6c Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object)
{
	var_24_string = ""; var_25_string = ""; // 0xac PushV
	var_26_string = "editbox"; // 0xad PushS
	var_27_bool = var_22_string == var_26_string; // 0xae Eq
	if(var_27_bool == 0) goto Label_186; // 0xaf JumpB
	var_28_int = 0; // 0xb0 PushI
	get(var_25_string, var_28_int); // 0xb1 ObjFunc
	DestroyWindow(); // 0xb3 Func
	var_29_string = ""; // 0xb5 PushV
	var_29_string = var_25_string; // 0xb6 Mov
	func_1196(var_29_string); // 0xb7 NEW_2
	return 2; // 0xb9 Return
	
Label_186:
	var_34_int = 0; var_35_string = ""; var_36_object = Obj(); // 0xba PushV
	var_34_int = var_21_int; // 0xbb Mov
	var_35_string = var_22_string; // 0xbc Mov
	var_36_object = var_23_object; // 0xbd Mov
	func_399(var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object, var_24_string, var_25_string, var_34_int, var_35_string, var_36_object); // 0xbe NEW_2
	return 2; // 0xc0 Return
}


task_2_event_100(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_int = 27; // 0x188 PushI
	var_23_bool = var_21_int == var_22_int; // 0x189 Eq
	if(var_23_bool == 0) goto Label_398; // 0x18a JumpB
	func_671(var_20_object, var_21_int); // 0x18c NEW_2
	
Label_398:
	return 0; // 0x18e Return
}


task_2_event_102(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; // 0x42f Not
	if(var_22_bool == 0) goto Label_1091; // 0x430 JumpB
	var_23_int = 272; // 0x431 PushI
	var_24_bool = var_21_int == var_23_int; // 0x432 Eq
	if(var_24_bool == 0) goto Label_1082; // 0x433 JumpB
	HideCursor(); // 0x434 Func
	func_977(); // 0x437 NEW_2
	goto Label_1090; // 0x439 Jump
	
Label_1090:
	goto Label_1108; // 0x442 Jump
	
Label_1108:
	return 0; // 0x454 Return
	
Label_1082:
	var_71_int = 274; // 0x43a PushI
	var_72_bool = var_21_int == var_71_int; // 0x43b Eq
	if(var_72_bool == 0) goto Label_1090; // 0x43c JumpB
	HideCursor(); // 0x43d Func
	func_874(); // 0x440 NEW_2
	
Label_1091:
	var_109_int = 271; // 0x443 PushI
	var_110_bool = var_21_int == var_109_int; // 0x444 Eq
	if(var_110_bool == 0) goto Label_1100; // 0x445 JumpB
	HideCursor(); // 0x446 Func
	func_748(); // 0x449 NEW_2
	goto Label_1108; // 0x44b Jump
	
Label_1100:
	var_141_int = 273; // 0x44c PushI
	var_142_bool = var_21_int == var_141_int; // 0x44d Eq
	if(var_142_bool == 0) goto Label_1108; // 0x44e JumpB
	HideCursor(); // 0x44f Func
	func_811(); // 0x452 NEW_2
}


task_2_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; // 0x456 Not
	if(var_22_bool == 0) goto Label_1146; // 0x457 JumpB
	var_23_int = 267; // 0x458 PushI
	var_24_bool = var_21_int == var_23_int; // 0x459 Eq
	if(var_24_bool == 0) goto Label_1121; // 0x45a JumpB
	HideCursor(); // 0x45b Func
	func_977(); // 0x45e NEW_2
	goto Label_1145; // 0x460 Jump
	
Label_1145:
	goto Label_1179; // 0x479 Jump
	
Label_1179:
	return 0; // 0x49b Return
	
Label_1121:
	var_71_int = 268; // 0x461 PushI
	var_72_bool = var_21_int == var_71_int; // 0x462 Eq
	if(var_72_bool == 0) goto Label_1130; // 0x463 JumpB
	HideCursor(); // 0x464 Func
	func_874(); // 0x467 NEW_2
	goto Label_1145; // 0x469 Jump
	
Label_1130:
	var_109_int = 256; // 0x46a PushI
	var_110_bool = var_21_int == var_109_int; // 0x46b Eq
	if(var_110_bool == 0) goto Label_1145; // 0x46c JumpB
	var_111_string = ""; // 0x46d PushV
	func_967(var_21_int, var_111_string); // 0x46e NEW_2
	var_112_string = ""; // 0x470 PushS
	var_113_bool = var_111_string != var_112_string; // 0x471 Neq
	if(var_113_bool == 0) goto Label_1145; // 0x472 JumpB
	var_114_int = 2; // 0x473 PushI
	var_115_string = ""; // 0x474 PushV
	func_967(var_114_int, var_115_string); // 0x475 NEW_2
	SendMessage(var_114_int, var_115_string); // 0x477 Func
	
Label_1146:
	var_116_int = 270; // 0x47a PushI
	var_117_bool = var_21_int == var_116_int; // 0x47b Eq
	if(var_117_bool == 0) goto Label_1155; // 0x47c JumpB
	HideCursor(); // 0x47d Func
	func_748(); // 0x480 NEW_2
	goto Label_1179; // 0x482 Jump
	
Label_1155:
	var_148_int = 269; // 0x483 PushI
	var_149_bool = var_21_int == var_148_int; // 0x484 Eq
	if(var_149_bool == 0) goto Label_1164; // 0x485 JumpB
	HideCursor(); // 0x486 Func
	func_811(); // 0x489 NEW_2
	goto Label_1179; // 0x48b Jump
	
Label_1164:
	var_174_int = 256; // 0x48c PushI
	var_175_bool = var_21_int == var_174_int; // 0x48d Eq
	if(var_175_bool == 0) goto Label_1179; // 0x48e JumpB
	var_176_string = ""; // 0x48f PushV
	func_972(var_21_int, var_176_string); // 0x490 NEW_2
	var_177_string = ""; // 0x492 PushS
	var_178_bool = var_176_string != var_177_string; // 0x493 Neq
	if(var_178_bool == 0) goto Label_1179; // 0x494 JumpB
	var_179_int = 2; // 0x495 PushI
	var_180_string = ""; // 0x496 PushV
	func_972(var_179_int, var_180_string); // 0x497 NEW_2
	SendMessage(var_179_int, var_180_string); // 0x499 Func
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object)
{
	var_21_bool = 0; // 0x6d PushB
	if(var_21_bool == 0) goto Label_118; // 0x6e JumpB
	var_22_string = "world_danko.xml"; // 0x6f PushS
	var_23_string = "player_danko.xml"; // 0x70 PushS
	NewGame(var_22_string, var_23_string); // 0x71 Func
	DestroyWindow(); // 0x73 Func
	return 0; // 0x75 Return
	
Label_118:
	var_24_string = ""; var_25_bool = 0; // 0x76 PushV
	var_24_string = "logo_gambitious.wmv"; // 0x77 MovS
	var_25_bool = 1; // 0x78 MovB
	TaskCall(0); // 0x79 TaskCall
	func_0(var_28_int, var_29_bool, var_24_string, var_25_bool); // 0x7a NEW_2
	TaskReturn(); // 0x7b TaskReturn
	var_35_string = ""; var_36_bool = 0; // 0x7d PushV
	var_35_string = "logo_devolver.wmv"; // 0x7e MovS
	var_36_bool = 1; // 0x7f MovB
	TaskCall(0); // 0x80 TaskCall
	func_0(var_39_int, var_40_bool, var_35_string, var_36_bool); // 0x81 NEW_2
	TaskReturn(); // 0x82 TaskReturn
	var_41_string = ""; var_42_bool = 0; // 0x84 PushV
	var_41_string = "logo_generalarcade.wmv"; // 0x85 MovS
	var_42_bool = 1; // 0x86 MovB
	TaskCall(0); // 0x87 TaskCall
	func_0(var_45_int, var_46_bool, var_41_string, var_42_bool); // 0x88 NEW_2
	TaskReturn(); // 0x89 TaskReturn
	var_47_string = ""; var_48_bool = 0; // 0x8b PushV
	var_47_string = "logo_icepick.wmv"; // 0x8c MovS
	var_48_bool = 1; // 0x8d MovB
	TaskCall(0); // 0x8e TaskCall
	func_0(var_51_int, var_52_bool, var_47_string, var_48_bool); // 0x8f NEW_2
	TaskReturn(); // 0x90 TaskReturn
	var_53_int = 0; // 0x92 PushV
	var_53_int = 0; // 0x93 MovI
	TaskCall(1); // 0x94 TaskCall
	func_89(var_54_object, var_53_int); // 0x95 NEW_2
	TaskReturn(); // 0x96 TaskReturn
	var_58_string = ""; var_59_bool = 0; // 0x98 PushV
	var_58_string = "intro.wmv"; // 0x99 MovS
	var_59_bool = 1; // 0x9a MovB
	TaskCall(0); // 0x9b TaskCall
	func_0(var_62_int, var_63_bool, var_58_string, var_59_bool); // 0x9c NEW_2
	TaskReturn(); // 0x9d TaskReturn
	var_64_bool = 0; // 0x9f PushV
	var_64_bool = 0; // 0xa0 MovB
	func_201(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_64_bool); // 0xa1 NEW_2
	return 0; // 0xa3 Return
}


func_0(var_0_object, var_3_bool, var_24_string, var_25_bool)
{
	var_3_bool = var_25_bool; // 0x1 TMov
	var_30_bool = 1; // 0x2 PushB
	SetOwnerDraw(var_30_bool); // 0x3 Func
	var_31_bool = 0; // 0x5 PushB
	ShowCursor(var_31_bool); // 0x6 Func
	CaptureKeyboard(); // 0x8 Func
	GetWindowSize(var_25_bool, var_24_string); // 0xa Func
	LoadVideo(var_24_string); // 0xc Func
	FindVideo(var_0_object, var_24_string); // 0xe Func
	var_32_bool = 0; // 0x10 PushB
	Play(var_32_bool); // 0x11 TObjFunc
	ProcessEvents(); // 0x13 Func
	var_33_bool = 0; // 0x15 PushB
	SetOwnerDraw(var_33_bool); // 0x16 Func
	var_34_bool = 1; // 0x18 PushB
	ShowCursor(var_34_bool); // 0x19 Func
	ReleaseVideo(var_24_string); // 0x1b Func
	return 0; // 0x1d Return
}


func_399(var_2_int, var_3_bool, var_4_object, var_9_object, var_19_bool, var_23_object, var_24_string, var_25_string, var_34_int, var_35_string, var_36_object)
{
	var_37_string = "newgame"; // 0x190 PushS
	var_38_bool = var_35_string == var_37_string; // 0x191 Eq
	if(var_38_bool == 0) goto Label_407; // 0x192 JumpB
	var_2_int = 7; // 0x193 TMovI
	StopEventProcessing(); // 0x194 Func
	goto Label_670; // 0x196 Jump
	
Label_670:
	return 0; // 0x29e Return
	
Label_407:
	var_39_string = "quitgame"; // 0x197 PushS
	var_40_bool = var_35_string == var_39_string; // 0x198 Eq
	if(var_40_bool == 0) goto Label_417; // 0x199 JumpB
	var_41_string = "Quit game"; // 0x19a PushS
	UITrace(var_41_string); // 0x19b Func
	Quit(); // 0x19d Func
	return 0; // 0x19f Return
	
Label_417:
	var_42_string = "loadgame"; // 0x1a1 PushS
	var_43_bool = var_35_string == var_42_string; // 0x1a2 Eq
	if(var_43_bool == 0) goto Label_429; // 0x1a3 JumpB
	func_687(); // 0x1a5 NEW_2
	var_50_string = "load.xml"; // 0x1a7 PushS
	var_51_bool = 0; // 0x1a8 PushB
	CreateWindow(var_50_string, var_51_bool, var_25_string); // 0x1a9 Func
	return 0; // 0x1ab Return
	
Label_429:
	var_52_string = "savegame"; // 0x1ad PushS
	var_53_bool = var_35_string == var_52_string; // 0x1ae Eq
	if(var_53_bool == 0) goto Label_441; // 0x1af JumpB
	func_687(); // 0x1b1 NEW_2
	var_54_string = "save.xml"; // 0x1b3 PushS
	var_55_bool = 0; // 0x1b4 PushB
	CreateWindow(var_54_string, var_55_bool, var_24_string); // 0x1b5 Func
	return 0; // 0x1b7 Return
	
Label_441:
	var_56_string = "gameoptions"; // 0x1b9 PushS
	var_57_bool = var_35_string == var_56_string; // 0x1ba Eq
	if(var_57_bool == 0) goto Label_453; // 0x1bb JumpB
	func_687(); // 0x1bd NEW_2
	var_58_string = "options.xml"; // 0x1bf PushS
	var_59_bool = 0; // 0x1c0 PushB
	CreateWindow(var_58_string, var_59_bool, var_23_object); // 0x1c1 Func
	return 0; // 0x1c3 Return
	
Label_453:
	var_60_string = "continue"; // 0x1c5 PushS
	var_61_bool = var_35_string == var_60_string; // 0x1c6 Eq
	if(var_61_bool == 0) goto Label_461; // 0x1c7 JumpB
	var_2_int = 6; // 0x1c8 TMovI
	StopEventProcessing(); // 0x1c9 Func
	return 0; // 0x1cb Return
	
Label_461:
	var_62_string = "credits"; // 0x1cd PushS
	var_63_bool = var_35_string == var_62_string; // 0x1ce Eq
	if(var_63_bool == 0) goto Label_491; // 0x1cf JumpB
	func_687(); // 0x1d1 NEW_2
	var_64_int = 0; // 0x1d3 PushV
	var_64_int = 8; // 0x1d4 MovI
	TaskCall(1); // 0x1d5 TaskCall
	func_89(var_65_object, var_64_int); // 0x1d6 NEW_2
	TaskReturn(); // 0x1d7 TaskReturn
	var_69_object = Obj(); // 0x1d9 PushV
	func_164(var_69_object); // 0x1da NEW_2
	var_3_bool = var_69_object; // 0x1db TMov
	var_74_object = Obj(); // 0x1dd PushV
	func_193(var_74_object); // 0x1de NEW_2
	var_4_object = var_74_object; // 0x1df TMov
	var_79_bool = 1; // 0x1e1 PushB
	ShowCursor(var_79_bool); // 0x1e2 Func
	CaptureKeyboard(); // 0x1e4 Func
	var_80_string = ""; // 0x1e6 PushV
	var_80_string = ""; // 0x1e7 MovS
	func_969(var_36_object, var_80_string); // 0x1e8 NEW_2
	goto Label_670; // 0x1ea Jump
	
Label_491:
	var_81_string = "danko"; // 0x1eb PushS
	var_82_bool = var_35_string == var_81_string; // 0x1ec Eq
	if(var_82_bool == 0) goto Label_526; // 0x1ed JumpB
	var_83_int = 0; // 0x1ee PushI
	var_84_bool = var_34_int == var_83_int; // 0x1ef Eq
	if(var_84_bool == 0) goto Label_501; // 0x1f0 JumpB
	var_2_int = 1; // 0x1f1 TMovI
	StopEventProcessing(); // 0x1f2 Func
	goto Label_524; // 0x1f4 Jump
	
Label_524:
	return 0; // 0x20c Return
	
Label_501:
	var_85_int = 1; // 0x1f5 PushI
	var_86_bool = var_34_int == var_85_int; // 0x1f6 Eq
	if(var_86_bool == 0) goto Label_513; // 0x1f7 JumpB
	var_87_int = 202; // 0x1f8 PushI
	var_88_string = "player_name"; // 0x1f9 PushS
	SendMessage(var_87_int, var_88_string); // 0x1fa Func
	var_89_int = 203; // 0x1fc PushI
	var_90_string = "player_desc"; // 0x1fd PushS
	SendMessage(var_89_int, var_90_string); // 0x1fe Func
	goto Label_524; // 0x200 Jump
	
Label_513:
	var_91_int = 2; // 0x201 PushI
	var_92_bool = var_34_int == var_91_int; // 0x202 Eq
	if(var_92_bool == 0) goto Label_524; // 0x203 JumpB
	var_93_int = -1; // 0x204 PushI
	var_94_string = "player_name"; // 0x205 PushS
	SendMessage(var_93_int, var_94_string); // 0x206 Func
	var_95_int = -1; // 0x208 PushI
	var_96_string = "player_desc"; // 0x209 PushS
	SendMessage(var_95_int, var_96_string); // 0x20a Func
	
Label_526:
	var_97_string = "burah"; // 0x20e PushS
	var_98_bool = var_35_string == var_97_string; // 0x20f Eq
	if(var_98_bool == 0) goto Label_561; // 0x210 JumpB
	var_99_int = 0; // 0x211 PushI
	var_100_bool = var_34_int == var_99_int; // 0x212 Eq
	if(var_100_bool == 0) goto Label_536; // 0x213 JumpB
	var_2_int = 2; // 0x214 TMovI
	StopEventProcessing(); // 0x215 Func
	goto Label_559; // 0x217 Jump
	
Label_559:
	return 0; // 0x22f Return
	
Label_536:
	var_101_int = 1; // 0x218 PushI
	var_102_bool = var_34_int == var_101_int; // 0x219 Eq
	if(var_102_bool == 0) goto Label_548; // 0x21a JumpB
	var_103_int = 205; // 0x21b PushI
	var_104_string = "player_name"; // 0x21c PushS
	SendMessage(var_103_int, var_104_string); // 0x21d Func
	var_105_int = 206; // 0x21f PushI
	var_106_string = "player_desc"; // 0x220 PushS
	SendMessage(var_105_int, var_106_string); // 0x221 Func
	goto Label_559; // 0x223 Jump
	
Label_548:
	var_107_int = 2; // 0x224 PushI
	var_108_bool = var_34_int == var_107_int; // 0x225 Eq
	if(var_108_bool == 0) goto Label_559; // 0x226 JumpB
	var_109_int = -1; // 0x227 PushI
	var_110_string = "player_name"; // 0x228 PushS
	SendMessage(var_109_int, var_110_string); // 0x229 Func
	var_111_int = -1; // 0x22b PushI
	var_112_string = "player_desc"; // 0x22c PushS
	SendMessage(var_111_int, var_112_string); // 0x22d Func
	
Label_561:
	var_113_string = "klara"; // 0x231 PushS
	var_114_bool = var_35_string == var_113_string; // 0x232 Eq
	if(var_114_bool == 0) goto Label_630; // 0x233 JumpB
	var_115_int = 0; // 0x234 PushI
	var_116_bool = var_34_int == var_115_int; // 0x235 Eq
	if(var_116_bool == 0) goto Label_586; // 0x236 JumpB
	var_117_bool = 0; // 0x237 PushV
	var_117_bool = 0; // 0x238 MovB
	var_118_bool = 0; // 0x239 PushV
	func_1188(var_118_bool); // 0x23a NEW_2
	var_124_bool = var_118_bool == 0; // 0x23c Not
	if(var_124_bool == 0) goto Label_580; // 0x23d JumpB
	var_125_bool = 0; // 0x23e PushV
	func_1180(var_125_bool); // 0x23f NEW_2
	var_131_bool = var_125_bool == 0; // 0x241 Not
	if(var_131_bool == 0) goto Label_580; // 0x242 JumpB
	var_117_bool = 1; // 0x243 MovB
	
Label_580:
	if(var_117_bool == 0) goto Label_582; // 0x244 JumpB
	return 0; // 0x245 Return
	
Label_582:
	var_2_int = 3; // 0x246 TMovI
	StopEventProcessing(); // 0x247 Func
	goto Label_628; // 0x249 Jump
	
Label_628:
	return 0; // 0x274 Return
	
Label_586:
	var_132_int = 1; // 0x24a PushI
	var_133_bool = var_34_int == var_132_int; // 0x24b Eq
	if(var_133_bool == 0) goto Label_617; // 0x24c JumpB
	var_134_int = 208; // 0x24d PushI
	var_135_string = "player_name"; // 0x24e PushS
	SendMessage(var_134_int, var_135_string); // 0x24f Func
	var_136_bool = 0; // 0x251 PushV
	var_136_bool = 0; // 0x252 MovB
	var_137_bool = 0; // 0x253 PushV
	func_1188(var_137_bool); // 0x254 NEW_2
	var_138_bool = var_137_bool == 0; // 0x256 Not
	if(var_138_bool == 0) goto Label_606; // 0x257 JumpB
	var_139_bool = 0; // 0x258 PushV
	func_1180(var_139_bool); // 0x259 NEW_2
	var_140_bool = var_139_bool == 0; // 0x25b Not
	if(var_140_bool == 0) goto Label_606; // 0x25c JumpB
	var_136_bool = 1; // 0x25d MovB
	
Label_606:
	if(var_136_bool == 0) goto Label_612; // 0x25e JumpB
	var_141_int = 213; // 0x25f PushI
	var_142_string = "player_desc"; // 0x260 PushS
	SendMessage(var_141_int, var_142_string); // 0x261 Func
	goto Label_616; // 0x263 Jump
	
Label_616:
	goto Label_628; // 0x268 Jump
	
Label_612:
	var_143_int = 209; // 0x264 PushI
	var_144_string = "player_desc"; // 0x265 PushS
	SendMessage(var_143_int, var_144_string); // 0x266 Func
	
Label_617:
	var_145_int = 2; // 0x269 PushI
	var_146_bool = var_34_int == var_145_int; // 0x26a Eq
	if(var_146_bool == 0) goto Label_628; // 0x26b JumpB
	var_147_int = -1; // 0x26c PushI
	var_148_string = "player_name"; // 0x26d PushS
	SendMessage(var_147_int, var_148_string); // 0x26e Func
	var_149_int = -1; // 0x270 PushI
	var_150_string = "player_desc"; // 0x271 PushS
	SendMessage(var_149_int, var_150_string); // 0x272 Func
	
Label_630:
	var_151_string = "load"; // 0x276 PushS
	var_152_bool = var_35_string == var_151_string; // 0x277 Eq
	if(var_152_bool == 0) goto Label_647; // 0x278 JumpB
	var_153_int = 0; // 0x279 PushI
	var_154_bool = var_34_int == var_153_int; // 0x27a Eq
	if(var_154_bool == 0) goto Label_642; // 0x27b JumpB
	var_2_int = 4; // 0x27c TMovI
	GetFileName(var_19_bool); // 0x27d ObjFunc
	StopEventProcessing(); // 0x27f Func
	goto Label_645; // 0x281 Jump
	
Label_645:
	return 0; // 0x285 Return
	
Label_642:
	func_671(var_35_string, var_36_object); // 0x283 NEW_2
	
Label_647:
	var_158_string = "save"; // 0x287 PushS
	var_159_bool = var_35_string == var_158_string; // 0x288 Eq
	if(var_159_bool == 0) goto Label_663; // 0x289 JumpB
	var_160_int = 0; // 0x28a PushI
	var_161_bool = var_34_int == var_160_int; // 0x28b Eq
	if(var_161_bool == 0) goto Label_658; // 0x28c JumpB
	var_2_int = 5; // 0x28d TMovI
	var_9_object = var_36_object; // 0x28e TMov
	StopEventProcessing(); // 0x28f Func
	goto Label_661; // 0x291 Jump
	
Label_661:
	return 0; // 0x295 Return
	
Label_658:
	func_671(var_35_string, var_36_object); // 0x293 NEW_2
	
Label_663:
	var_162_string = "options"; // 0x297 PushS
	var_163_bool = var_35_string == var_162_string; // 0x298 Eq
	if(var_163_bool == 0) goto Label_670; // 0x299 JumpB
	func_671(var_35_string, var_36_object); // 0x29b NEW_2
	return 0; // 0x29d Return
}


func_1180(var_125_bool)
{
	var_126_int = 0; var_127_int = 0; // 0x49c PushV
	var_128_string = "BurahCompleted"; // 0x49d PushS
	var_129_int = 0; // 0x49e PushI
	GetRegistryData(var_127_int, var_128_string, var_129_int); // 0x49f Func
	var_130_int = 0; // 0x4a1 PushI
	var_125_bool = var_127_int != var_130_int; // 0x4a2 Neq2
	return 2; // 0x4a3 Return
}


func_671(var_3_bool, var_4_object)
{
	var_24_string = ""; // 0x29f PushV
	var_24_string = ""; // 0x2a0 MovS
	func_969(var_21_int, var_24_string); // 0x2a1 NEW_2
	func_687(); // 0x2a4 NEW_2
	var_31_object = Obj(); // 0x2a6 PushV
	func_164(var_31_object); // 0x2a7 NEW_2
	var_3_bool = var_31_object; // 0x2a8 TMov
	var_36_object = Obj(); // 0x2aa PushV
	func_193(var_36_object); // 0x2ab NEW_2
	var_4_object = var_36_object; // 0x2ac TMov
	return 0; // 0x2ae Return
}


func_164(var_140_object)
{
	var_141_object = Obj(); var_142_object = Obj(); // 0xa4 PushV
	var_143_string = "game_buttons.xml"; // 0xa5 PushS
	var_144_bool = 0; // 0xa6 PushB
	CreateWindow(var_143_string, var_144_bool, var_142_object); // 0xa7 Func
	var_140_object = var_142_object; // 0xa9 Mov
	return 2; // 0xaa Return
}


func_1188(var_118_bool)
{
	var_119_int = 0; var_120_int = 0; // 0x4a4 PushV
	var_121_string = "DankoCompleted"; // 0x4a5 PushS
	var_122_int = 0; // 0x4a6 PushI
	GetRegistryData(var_120_int, var_121_string, var_122_int); // 0x4a7 Func
	var_123_int = 0; // 0x4a9 PushI
	var_118_bool = var_120_int != var_123_int; // 0x4aa Neq2
	return 2; // 0x4ab Return
}


func_811()
{
	func_735(); // 0x32c NEW_2
	var_150_string = ""; // 0x32e PushV
	func_972(var_21_int, var_150_string); // 0x32f NEW_2
	var_151_string = ""; // 0x331 PushS
	var_152_bool = var_150_string == var_151_string; // 0x332 Eq
	if(var_152_bool == 0) goto Label_829; // 0x333 JumpB
	var_153_int = 1; // 0x334 PushI
	var_154_string = "klara"; // 0x335 PushS
	SendMessage(var_153_int, var_154_string); // 0x336 Func
	var_155_string = ""; // 0x338 PushV
	var_155_string = "klara"; // 0x339 MovS
	func_974(var_21_int, var_155_string); // 0x33a NEW_2
	goto Label_873; // 0x33c Jump
	
Label_873:
	return 0; // 0x369 Return
	
Label_829:
	var_156_string = ""; // 0x33d PushV
	func_972(var_21_int, var_156_string); // 0x33e NEW_2
	var_157_string = "klara"; // 0x340 PushS
	var_158_bool = var_156_string == var_157_string; // 0x341 Eq
	if(var_158_bool == 0) goto Label_844; // 0x342 JumpB
	var_159_int = 1; // 0x343 PushI
	var_160_string = "burah"; // 0x344 PushS
	SendMessage(var_159_int, var_160_string); // 0x345 Func
	var_161_string = ""; // 0x347 PushV
	var_161_string = "burah"; // 0x348 MovS
	func_974(var_21_int, var_161_string); // 0x349 NEW_2
	goto Label_873; // 0x34b Jump
	
Label_844:
	var_162_string = ""; // 0x34c PushV
	func_972(var_21_int, var_162_string); // 0x34d NEW_2
	var_163_string = "burah"; // 0x34f PushS
	var_164_bool = var_162_string == var_163_string; // 0x350 Eq
	if(var_164_bool == 0) goto Label_859; // 0x351 JumpB
	var_165_int = 1; // 0x352 PushI
	var_166_string = "danko"; // 0x353 PushS
	SendMessage(var_165_int, var_166_string); // 0x354 Func
	var_167_string = ""; // 0x356 PushV
	var_167_string = "danko"; // 0x357 MovS
	func_974(var_21_int, var_167_string); // 0x358 NEW_2
	goto Label_873; // 0x35a Jump
	
Label_859:
	var_168_string = ""; // 0x35b PushV
	func_972(var_21_int, var_168_string); // 0x35c NEW_2
	var_169_string = "danko"; // 0x35e PushS
	var_170_bool = var_168_string == var_169_string; // 0x35f Eq
	if(var_170_bool == 0) goto Label_873; // 0x360 JumpB
	var_171_int = 1; // 0x361 PushI
	var_172_string = "klara"; // 0x362 PushS
	SendMessage(var_171_int, var_172_string); // 0x363 Func
	var_173_string = ""; // 0x365 PushV
	var_173_string = "klara"; // 0x366 MovS
	func_974(var_21_int, var_173_string); // 0x367 NEW_2
}


func_1196(var_29_string)
{
	var_30_bool = 0; var_31_bool = 0; // 0x4ac PushV
	var_32_string = "loading map: "; // 0x4ad PushS
	var_33_int = var_32_string + var_29_string; // 0x4ae Add
	UITrace(var_33_int); // 0x4af Func
	LoadMap(var_31_bool, var_29_string); // 0x4b1 Func
	return 2; // 0x4b3 Return
}


func_687()
{
	var_83_bool = var_3_bool; // 0x2af PushT
	if(var_83_bool == 0) goto Label_691; // 0x2b0 JumpB
	DestroyWindow(); // 0x2b1 TObjFunc
	
Label_691:
	var_84_object = var_4_object; // 0x2b3 PushT
	if(var_84_object == 0) goto Label_695; // 0x2b4 JumpB
	DestroyWindow(); // 0x2b5 TObjFunc
	
Label_695:
	var_85_int = var_5_int; // 0x2b7 PushT
	if(var_85_int == 0) goto Label_699; // 0x2b8 JumpB
	DestroyWindow(); // 0x2b9 TObjFunc
	
Label_699:
	var_86_int = var_6_int; // 0x2bb PushT
	if(var_86_int == 0) goto Label_703; // 0x2bc JumpB
	DestroyWindow(); // 0x2bd TObjFunc
	
Label_703:
	var_87_int = var_7_int; // 0x2bf PushT
	if(var_87_int == 0) goto Label_707; // 0x2c0 JumpB
	DestroyWindow(); // 0x2c1 TObjFunc
	
Label_707:
	var_88_object = var_8_object; // 0x2c3 PushT
	if(var_88_object == 0) goto Label_711; // 0x2c4 JumpB
	DestroyWindow(); // 0x2c5 TObjFunc
	
Label_711:
	CaptureKeyboard(); // 0x2c7 Func
	return 0; // 0x2c9 Return
}


func_193(var_145_object)
{
	var_146_object = Obj(); var_147_object = Obj(); // 0xc1 PushV
	var_148_string = "game_logo.xml"; // 0xc2 PushS
	var_149_bool = 0; // 0xc3 PushB
	CreateWindow(var_148_string, var_149_bool, var_147_object); // 0xc4 Func
	var_145_object = var_147_object; // 0xc6 Mov
	return 2; // 0xc7 Return
}


func_967(var_11_object, var_35_string)
{
	var_35_string = var_11_object; // 0x3c7 MovT
	return 0; // 0x3c8 Return
}


func_201(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_14_object, var_20_object, var_64_bool)
{
	var_65_bool = 0; var_66_bool = 0; var_67_bool = 0; var_68_string = ""; var_69_bool = 0; var_70_bool = 0; var_71_bool = 0; var_72_string = ""; // 0xc9 PushV
	var_14_object = var_64_bool; // 0xca TMov
	CaptureKeyboard(); // 0xcb Func
	var_2_int = 0; // 0xcd TMovI
	GetWindowSize(var_0_object, var_72_string); // 0xce Func
	var_73_string = "default"; // 0xd0 PushS
	SetCursor(var_73_string); // 0xd1 Func
	var_74_string = "default"; // 0xd3 PushS
	SetBackground(var_74_string); // 0xd4 Func
	var_75_string = "menumusic"; // 0xd6 PushS
	PlaySound(var_75_string); // 0xd7 Func
	var_76_bool = 1; // 0xd9 PushB
	ShowCursor(var_76_bool); // 0xda Func
	var_77_string = ""; // 0xdc PushV
	var_77_string = ""; // 0xdd MovS
	func_969(var_72_string, var_77_string); // 0xde NEW_2
	var_78_string = ""; // 0xe0 PushV
	var_78_string = ""; // 0xe1 MovS
	func_974(var_72_string, var_78_string); // 0xe2 NEW_2
	var_79_bool = var_64_bool; // 0xe4 Push
	if(var_79_bool == 0) goto Label_235; // 0xe5 JumpB
	var_80_string = "game_choose_pers.xml"; // 0xe6 PushS
	var_81_bool = 0; // 0xe7 PushB
	CreateWindow(var_80_string, var_81_bool, var_70_bool); // 0xe8 Func
	goto Label_243; // 0xea Jump
	
Label_243:
	var_82_bool = var_2_int == 0; // 0xf3 Not
	if(var_82_bool == 0) goto Label_248; // 0xf4 JumpB
	ProcessEvents(); // 0xf5 Func
	goto Label_243; // 0xf7 Jump
	
Label_248:
	func_687(); // 0xf9 NEW_2
	var_89_int = 1; // 0xfb PushI
	var_90_bool = var_2_int == var_89_int; // 0xfc Eq
	if(var_90_bool == 0) goto Label_281; // 0xfd JumpB
	var_91_string = "menumusic"; // 0xfe PushS
	PauseSound(var_91_string); // 0xff Func
	var_92_int = 0; // 0x101 PushV
	var_92_int = 1; // 0x102 MovI
	TaskCall(1); // 0x103 TaskCall
	func_89(var_93_object, var_92_int); // 0x104 NEW_2
	TaskReturn(); // 0x105 TaskReturn
	var_94_string = ""; var_95_bool = 0; // 0x107 PushV
	var_94_string = "intro_danko.wmv"; // 0x108 MovS
	var_95_bool = 1; // 0x109 MovB
	TaskCall(0); // 0x10a TaskCall
	func_0(var_98_int, var_99_bool, var_94_string, var_95_bool); // 0x10b NEW_2
	TaskReturn(); // 0x10c TaskReturn
	RemoveWorld(); // 0x10e Func
	UISync(); // 0x110 Func
	DestroyWindow(); // 0x112 Func
	var_100_string = "world_danko.xml"; // 0x114 PushS
	var_101_string = "player_danko.xml"; // 0x115 PushS
	NewGame(var_100_string, var_101_string); // 0x116 Func
	goto Label_390; // 0x118 Jump
	
Label_390:
	return 8; // 0x186 Return
	
Label_281:
	var_102_int = 2; // 0x119 PushI
	var_103_bool = var_2_int == var_102_int; // 0x11a Eq
	if(var_103_bool == 0) goto Label_311; // 0x11b JumpB
	var_104_string = "menumusic"; // 0x11c PushS
	PauseSound(var_104_string); // 0x11d Func
	var_105_int = 0; // 0x11f PushV
	var_105_int = 2; // 0x120 MovI
	TaskCall(1); // 0x121 TaskCall
	func_89(var_106_object, var_105_int); // 0x122 NEW_2
	TaskReturn(); // 0x123 TaskReturn
	var_107_string = ""; var_108_bool = 0; // 0x125 PushV
	var_107_string = "intro_burah.wmv"; // 0x126 MovS
	var_108_bool = 1; // 0x127 MovB
	TaskCall(0); // 0x128 TaskCall
	func_0(var_111_int, var_112_bool, var_107_string, var_108_bool); // 0x129 NEW_2
	TaskReturn(); // 0x12a TaskReturn
	RemoveWorld(); // 0x12c Func
	UISync(); // 0x12e Func
	DestroyWindow(); // 0x130 Func
	var_113_string = "world_burah.xml"; // 0x132 PushS
	var_114_string = "player_burah.xml"; // 0x133 PushS
	NewGame(var_113_string, var_114_string); // 0x134 Func
	goto Label_390; // 0x136 Jump
	
Label_311:
	var_115_int = 3; // 0x137 PushI
	var_116_bool = var_2_int == var_115_int; // 0x138 Eq
	if(var_116_bool == 0) goto Label_341; // 0x139 JumpB
	var_117_string = "menumusic"; // 0x13a PushS
	PauseSound(var_117_string); // 0x13b Func
	var_118_int = 0; // 0x13d PushV
	var_118_int = 3; // 0x13e MovI
	TaskCall(1); // 0x13f TaskCall
	func_89(var_119_object, var_118_int); // 0x140 NEW_2
	TaskReturn(); // 0x141 TaskReturn
	var_120_string = ""; var_121_bool = 0; // 0x143 PushV
	var_120_string = "intro_klara.wmv"; // 0x144 MovS
	var_121_bool = 1; // 0x145 MovB
	TaskCall(0); // 0x146 TaskCall
	func_0(var_124_int, var_125_bool, var_120_string, var_121_bool); // 0x147 NEW_2
	TaskReturn(); // 0x148 TaskReturn
	RemoveWorld(); // 0x14a Func
	UISync(); // 0x14c Func
	DestroyWindow(); // 0x14e Func
	var_126_string = "world_klara.xml"; // 0x150 PushS
	var_127_string = "player_klara.xml"; // 0x151 PushS
	NewGame(var_126_string, var_127_string); // 0x152 Func
	goto Label_390; // 0x154 Jump
	
Label_341:
	var_128_int = 4; // 0x155 PushI
	var_129_bool = var_2_int == var_128_int; // 0x156 Eq
	if(var_129_bool == 0) goto Label_360; // 0x157 JumpB
	var_130_string = "menumusic"; // 0x158 PushS
	PauseSound(var_130_string); // 0x159 Func
	var_131_string = "Loading : "; // 0x15b PushS
	var_132_int = var_131_string + var_10_object; // 0x15c Add
	Trace(var_132_int); // 0x15d Func
	RemoveWorld(); // 0x15f Func
	UISync(); // 0x161 Func
	DestroyWindow(); // 0x163 Func
	LoadGame(var_69_bool, var_20_object); // 0x165 Func
	goto Label_390; // 0x167 Jump
	
Label_360:
	var_133_int = 5; // 0x168 PushI
	var_134_bool = var_2_int == var_133_int; // 0x169 Eq
	if(var_134_bool == 0) goto Label_377; // 0x16a JumpB
	var_135_bool = var_9_object == 0; // 0x16b Not
	if(var_135_bool == 0) goto Label_370; // 0x16c JumpB
	DestroyWindow(); // 0x16d Func
	SaveGame(var_70_bool); // 0x16f Func
	goto Label_376; // 0x171 Jump
	
Label_376:
	goto Label_390; // 0x178 Jump
	
Label_370:
	DestroyWindow(); // 0x172 Func
	GetFileName(var_72_string); // 0x174 TObjFunc
	SaveGame(var_71_bool, var_72_string); // 0x176 Func
	
Label_377:
	var_136_int = 7; // 0x179 PushI
	var_137_bool = var_2_int == var_136_int; // 0x17a Eq
	if(var_137_bool == 0) goto Label_390; // 0x17b JumpB
	RemoveWorld(); // 0x17c Func
	UISync(); // 0x17e Func
	DestroyWindow(); // 0x180 Func
	var_138_string = "world_intro.xml"; // 0x182 PushS
	var_139_string = "player_intro.xml"; // 0x183 PushS
	NewGame(var_138_string, var_139_string); // 0x184 Func
	
Label_235:
	var_140_object = Obj(); // 0xeb PushV
	func_164(var_140_object); // 0xec NEW_2
	var_3_bool = var_140_object; // 0xed TMov
	var_145_object = Obj(); // 0xef PushV
	func_193(var_145_object); // 0xf0 NEW_2
	var_4_object = var_145_object; // 0xf1 TMov
}


func_969(var_11_object, var_77_string)
{
	var_11_object = var_77_string; // 0x3ca TMov
	return 0; // 0x3cb Return
}


func_714()
{
	var_25_int = 0; // 0x2ca PushI
	var_26_string = "newgame"; // 0x2cb PushS
	SendMessage(var_25_int, var_26_string); // 0x2cc Func
	var_27_int = 0; // 0x2ce PushI
	var_28_string = "loadgame"; // 0x2cf PushS
	SendMessage(var_27_int, var_28_string); // 0x2d0 Func
	var_29_int = 0; // 0x2d2 PushI
	var_30_string = "gameoptions"; // 0x2d3 PushS
	SendMessage(var_29_int, var_30_string); // 0x2d4 Func
	var_31_int = 0; // 0x2d6 PushI
	var_32_string = "credits"; // 0x2d7 PushS
	SendMessage(var_31_int, var_32_string); // 0x2d8 Func
	var_33_int = 0; // 0x2da PushI
	var_34_string = "quitgame"; // 0x2db PushS
	SendMessage(var_33_int, var_34_string); // 0x2dc Func
	return 0; // 0x2de Return
}


func_972(var_12_object, var_124_string)
{
	var_124_string = var_12_object; // 0x3cc MovT
	return 0; // 0x3cd Return
}


func_974(var_12_object, var_78_string)
{
	var_12_object = var_78_string; // 0x3cf TMov
	return 0; // 0x3d0 Return
}


func_977()
{
	func_714(); // 0x3d2 NEW_2
	var_35_string = ""; // 0x3d4 PushV
	func_967(var_21_int, var_35_string); // 0x3d5 NEW_2
	var_36_string = ""; // 0x3d7 PushS
	var_37_bool = var_35_string == var_36_string; // 0x3d8 Eq
	if(var_37_bool == 0) goto Label_995; // 0x3d9 JumpB
	var_38_int = 1; // 0x3da PushI
	var_39_string = "quitgame"; // 0x3db PushS
	SendMessage(var_38_int, var_39_string); // 0x3dc Func
	var_40_string = ""; // 0x3de PushV
	var_40_string = "quitgame"; // 0x3df MovS
	func_969(var_21_int, var_40_string); // 0x3e0 NEW_2
	goto Label_1069; // 0x3e2 Jump
	
Label_1069:
	return 0; // 0x42d Return
	
Label_995:
	var_41_string = ""; // 0x3e3 PushV
	func_967(var_21_int, var_41_string); // 0x3e4 NEW_2
	var_42_string = "newgame"; // 0x3e6 PushS
	var_43_bool = var_41_string == var_42_string; // 0x3e7 Eq
	if(var_43_bool == 0) goto Label_1010; // 0x3e8 JumpB
	var_44_int = 1; // 0x3e9 PushI
	var_45_string = "quitgame"; // 0x3ea PushS
	SendMessage(var_44_int, var_45_string); // 0x3eb Func
	var_46_string = ""; // 0x3ed PushV
	var_46_string = "quitgame"; // 0x3ee MovS
	func_969(var_21_int, var_46_string); // 0x3ef NEW_2
	goto Label_1069; // 0x3f1 Jump
	
Label_1010:
	var_47_string = ""; // 0x3f2 PushV
	func_967(var_21_int, var_47_string); // 0x3f3 NEW_2
	var_48_string = "loadgame"; // 0x3f5 PushS
	var_49_bool = var_47_string == var_48_string; // 0x3f6 Eq
	if(var_49_bool == 0) goto Label_1025; // 0x3f7 JumpB
	var_50_int = 1; // 0x3f8 PushI
	var_51_string = "newgame"; // 0x3f9 PushS
	SendMessage(var_50_int, var_51_string); // 0x3fa Func
	var_52_string = ""; // 0x3fc PushV
	var_52_string = "newgame"; // 0x3fd MovS
	func_969(var_21_int, var_52_string); // 0x3fe NEW_2
	goto Label_1069; // 0x400 Jump
	
Label_1025:
	var_53_string = ""; // 0x401 PushV
	func_967(var_21_int, var_53_string); // 0x402 NEW_2
	var_54_string = "gameoptions"; // 0x404 PushS
	var_55_bool = var_53_string == var_54_string; // 0x405 Eq
	if(var_55_bool == 0) goto Label_1040; // 0x406 JumpB
	var_56_int = 1; // 0x407 PushI
	var_57_string = "loadgame"; // 0x408 PushS
	SendMessage(var_56_int, var_57_string); // 0x409 Func
	var_58_string = ""; // 0x40b PushV
	var_58_string = "loadgame"; // 0x40c MovS
	func_969(var_21_int, var_58_string); // 0x40d NEW_2
	goto Label_1069; // 0x40f Jump
	
Label_1040:
	var_59_string = ""; // 0x410 PushV
	func_967(var_21_int, var_59_string); // 0x411 NEW_2
	var_60_string = "credits"; // 0x413 PushS
	var_61_bool = var_59_string == var_60_string; // 0x414 Eq
	if(var_61_bool == 0) goto Label_1055; // 0x415 JumpB
	var_62_int = 1; // 0x416 PushI
	var_63_string = "gameoptions"; // 0x417 PushS
	SendMessage(var_62_int, var_63_string); // 0x418 Func
	var_64_string = ""; // 0x41a PushV
	var_64_string = "gameoptions"; // 0x41b MovS
	func_969(var_21_int, var_64_string); // 0x41c NEW_2
	goto Label_1069; // 0x41e Jump
	
Label_1055:
	var_65_string = ""; // 0x41f PushV
	func_967(var_21_int, var_65_string); // 0x420 NEW_2
	var_66_string = "quitgame"; // 0x422 PushS
	var_67_bool = var_65_string == var_66_string; // 0x423 Eq
	if(var_67_bool == 0) goto Label_1069; // 0x424 JumpB
	var_68_int = 1; // 0x425 PushI
	var_69_string = "credits"; // 0x426 PushS
	SendMessage(var_68_int, var_69_string); // 0x427 Func
	var_70_string = ""; // 0x429 PushV
	var_70_string = "credits"; // 0x42a MovS
	func_969(var_21_int, var_70_string); // 0x42b NEW_2
}


func_89(var_0_object, var_53_int)
{
	var_55_string = "intro.xml"; // 0x5a PushS
	var_56_bool = 0; // 0x5b PushB
	CreateWindow(var_55_string, var_56_bool, var_0_object); // 0x5c Func
	var_57_string = "intro"; // 0x5e PushS
	SendMessage(var_53_int, var_57_string); // 0x5f Func
	ProcessEvents(); // 0x61 Func
	return 0; // 0x63 Return
}


func_735()
{
	var_118_int = 0; // 0x2df PushI
	var_119_string = "danko"; // 0x2e0 PushS
	SendMessage(var_118_int, var_119_string); // 0x2e1 Func
	var_120_int = 0; // 0x2e3 PushI
	var_121_string = "burah"; // 0x2e4 PushS
	SendMessage(var_120_int, var_121_string); // 0x2e5 Func
	var_122_int = 0; // 0x2e7 PushI
	var_123_string = "klara"; // 0x2e8 PushS
	SendMessage(var_122_int, var_123_string); // 0x2e9 Func
	return 0; // 0x2eb Return
}


func_874()
{
	func_714(); // 0x36b NEW_2
	var_73_string = ""; // 0x36d PushV
	func_967(var_21_int, var_73_string); // 0x36e NEW_2
	var_74_string = ""; // 0x370 PushS
	var_75_bool = var_73_string == var_74_string; // 0x371 Eq
	if(var_75_bool == 0) goto Label_892; // 0x372 JumpB
	var_76_int = 1; // 0x373 PushI
	var_77_string = "newgame"; // 0x374 PushS
	SendMessage(var_76_int, var_77_string); // 0x375 Func
	var_78_string = ""; // 0x377 PushV
	var_78_string = "newgame"; // 0x378 MovS
	func_969(var_21_int, var_78_string); // 0x379 NEW_2
	goto Label_966; // 0x37b Jump
	
Label_966:
	return 0; // 0x3c6 Return
	
Label_892:
	var_79_string = ""; // 0x37c PushV
	func_967(var_21_int, var_79_string); // 0x37d NEW_2
	var_80_string = "newgame"; // 0x37f PushS
	var_81_bool = var_79_string == var_80_string; // 0x380 Eq
	if(var_81_bool == 0) goto Label_907; // 0x381 JumpB
	var_82_int = 1; // 0x382 PushI
	var_83_string = "loadgame"; // 0x383 PushS
	SendMessage(var_82_int, var_83_string); // 0x384 Func
	var_84_string = ""; // 0x386 PushV
	var_84_string = "loadgame"; // 0x387 MovS
	func_969(var_21_int, var_84_string); // 0x388 NEW_2
	goto Label_966; // 0x38a Jump
	
Label_907:
	var_85_string = ""; // 0x38b PushV
	func_967(var_21_int, var_85_string); // 0x38c NEW_2
	var_86_string = "loadgame"; // 0x38e PushS
	var_87_bool = var_85_string == var_86_string; // 0x38f Eq
	if(var_87_bool == 0) goto Label_922; // 0x390 JumpB
	var_88_int = 1; // 0x391 PushI
	var_89_string = "gameoptions"; // 0x392 PushS
	SendMessage(var_88_int, var_89_string); // 0x393 Func
	var_90_string = ""; // 0x395 PushV
	var_90_string = "gameoptions"; // 0x396 MovS
	func_969(var_21_int, var_90_string); // 0x397 NEW_2
	goto Label_966; // 0x399 Jump
	
Label_922:
	var_91_string = ""; // 0x39a PushV
	func_967(var_21_int, var_91_string); // 0x39b NEW_2
	var_92_string = "gameoptions"; // 0x39d PushS
	var_93_bool = var_91_string == var_92_string; // 0x39e Eq
	if(var_93_bool == 0) goto Label_937; // 0x39f JumpB
	var_94_int = 1; // 0x3a0 PushI
	var_95_string = "credits"; // 0x3a1 PushS
	SendMessage(var_94_int, var_95_string); // 0x3a2 Func
	var_96_string = ""; // 0x3a4 PushV
	var_96_string = "credits"; // 0x3a5 MovS
	func_969(var_21_int, var_96_string); // 0x3a6 NEW_2
	goto Label_966; // 0x3a8 Jump
	
Label_937:
	var_97_string = ""; // 0x3a9 PushV
	func_967(var_21_int, var_97_string); // 0x3aa NEW_2
	var_98_string = "credits"; // 0x3ac PushS
	var_99_bool = var_97_string == var_98_string; // 0x3ad Eq
	if(var_99_bool == 0) goto Label_952; // 0x3ae JumpB
	var_100_int = 1; // 0x3af PushI
	var_101_string = "quitgame"; // 0x3b0 PushS
	SendMessage(var_100_int, var_101_string); // 0x3b1 Func
	var_102_string = ""; // 0x3b3 PushV
	var_102_string = "quitgame"; // 0x3b4 MovS
	func_969(var_21_int, var_102_string); // 0x3b5 NEW_2
	goto Label_966; // 0x3b7 Jump
	
Label_952:
	var_103_string = ""; // 0x3b8 PushV
	func_967(var_21_int, var_103_string); // 0x3b9 NEW_2
	var_104_string = "quitgame"; // 0x3bb PushS
	var_105_bool = var_103_string == var_104_string; // 0x3bc Eq
	if(var_105_bool == 0) goto Label_966; // 0x3bd JumpB
	var_106_int = 1; // 0x3be PushI
	var_107_string = "newgame"; // 0x3bf PushS
	SendMessage(var_106_int, var_107_string); // 0x3c0 Func
	var_108_string = ""; // 0x3c2 PushV
	var_108_string = "newgame"; // 0x3c3 MovS
	func_969(var_21_int, var_108_string); // 0x3c4 NEW_2
}


func_748()
{
	func_735(); // 0x2ed NEW_2
	var_124_string = ""; // 0x2ef PushV
	func_972(var_21_int, var_124_string); // 0x2f0 NEW_2
	var_125_string = ""; // 0x2f2 PushS
	var_126_bool = var_124_string == var_125_string; // 0x2f3 Eq
	if(var_126_bool == 0) goto Label_766; // 0x2f4 JumpB
	var_127_int = 1; // 0x2f5 PushI
	var_128_string = "danko"; // 0x2f6 PushS
	SendMessage(var_127_int, var_128_string); // 0x2f7 Func
	var_129_string = ""; // 0x2f9 PushV
	var_129_string = "danko"; // 0x2fa MovS
	func_974(var_21_int, var_129_string); // 0x2fb NEW_2
	goto Label_810; // 0x2fd Jump
	
Label_810:
	return 0; // 0x32a Return
	
Label_766:
	var_130_string = ""; // 0x2fe PushV
	func_972(var_21_int, var_130_string); // 0x2ff NEW_2
	var_131_string = "danko"; // 0x301 PushS
	var_132_bool = var_130_string == var_131_string; // 0x302 Eq
	if(var_132_bool == 0) goto Label_781; // 0x303 JumpB
	var_133_int = 1; // 0x304 PushI
	var_134_string = "burah"; // 0x305 PushS
	SendMessage(var_133_int, var_134_string); // 0x306 Func
	var_135_string = ""; // 0x308 PushV
	var_135_string = "burah"; // 0x309 MovS
	func_974(var_21_int, var_135_string); // 0x30a NEW_2
	goto Label_810; // 0x30c Jump
	
Label_781:
	var_136_string = ""; // 0x30d PushV
	func_972(var_21_int, var_136_string); // 0x30e NEW_2
	var_137_string = "burah"; // 0x310 PushS
	var_138_bool = var_136_string == var_137_string; // 0x311 Eq
	if(var_138_bool == 0) goto Label_796; // 0x312 JumpB
	var_139_int = 1; // 0x313 PushI
	var_140_string = "klara"; // 0x314 PushS
	SendMessage(var_139_int, var_140_string); // 0x315 Func
	var_141_string = ""; // 0x317 PushV
	var_141_string = "klara"; // 0x318 MovS
	func_974(var_21_int, var_141_string); // 0x319 NEW_2
	goto Label_810; // 0x31b Jump
	
Label_796:
	var_142_string = ""; // 0x31c PushV
	func_972(var_21_int, var_142_string); // 0x31d NEW_2
	var_143_string = "klara"; // 0x31f PushS
	var_144_bool = var_142_string == var_143_string; // 0x320 Eq
	if(var_144_bool == 0) goto Label_810; // 0x321 JumpB
	var_145_int = 1; // 0x322 PushI
	var_146_string = "danko"; // 0x323 PushS
	SendMessage(var_145_int, var_146_string); // 0x324 Func
	var_147_string = ""; // 0x326 PushV
	var_147_string = "danko"; // 0x327 MovS
	func_974(var_21_int, var_147_string); // 0x328 NEW_2
}


