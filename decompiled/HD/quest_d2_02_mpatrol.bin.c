task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_cvector, var_17_cvector)
{
	var_18_int = 1; // 0x9b PushI
	if(var_18_int == 0) goto Label_211; // 0x9c JumpB
	func_1903(); // 0x9e NEW_2
	var_20_int = 8305; // 0xa0 PushI
	var_21_bool = var_17_cvector == var_20_int; // 0xa1 Eq
	if(var_21_bool == 0) goto Label_168; // 0xa2 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xa3 PushV
	var_22_object = var_1_object; // 0xa4 MovT
	var_23_object = var_0_object; // 0xa5 MovT
	func_2083(); // 0xa6 NEW_2
	
Label_168:
	var_30_int = 8306; // 0xa8 PushI
	var_31_bool = var_17_cvector == var_30_int; // 0xa9 Eq
	if(var_31_bool == 0) goto Label_176; // 0xaa JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0xab PushV
	var_32_object = var_1_object; // 0xac MovT
	var_33_object = var_0_object; // 0xad MovT
	func_2090(); // 0xae NEW_2
	
Label_176:
	var_37_int = 8304; // 0xb0 PushI
	var_38_bool = var_16_cvector == var_37_int; // 0xb1 Eq
	if(var_38_bool == 0) goto Label_199; // 0xb2 JumpB
	var_39_string = ""; // 0xb3 PushV
	var_39_string = "Neutral"; // 0xb4 MovS
	func_132(var_17_cvector, var_39_string); // 0xb5 NEW_2
	var_56_int = 507522; // 0xb7 PushI
	SetMessage(var_56_int); // 0xb8 TObjFunc
	ClearReplies(); // 0xba TObjFunc
	var_57_int = 507523; // 0xbc PushI
	var_58_int = -1; // 0xbd PushI
	var_59_int = 8305; // 0xbe PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xbf TObjFunc
	var_60_int = 507524; // 0xc1 PushI
	var_61_int = -1; // 0xc2 PushI
	var_62_int = 8306; // 0xc3 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xc4 TObjFunc
	return 0; // 0xc6 Return
	
Label_199:
	var_3_string = 1; // 0xc7 TMovB
	var_63_bool = 0; // 0xc8 PushV
	func_2273(var_63_bool); // 0xc9 NEW_2
	if(var_63_bool == 0) goto Label_207; // 0xcb JumpB
	lshStopAnimation(); // 0xcc Func
	goto Label_209; // 0xce Jump
	
Label_209:
	return 0; // 0xd1 Return
	
Label_207:
	StopAnimation(); // 0xcf Func
	
Label_211:
	return 0; // 0xd3 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_int, var_15_cvector, var_16_cvector)
{
	var_17_int = 1; // 0x3b1 PushI
	var_18_bool = var_16_cvector == var_17_int; // 0x3b2 Eq
	if(var_18_bool == 0) goto Label_953; // 0x3b3 JumpB
	var_19_object = Obj(); // 0x3b4 PushV
	var_19_object = var_1_object; // 0x3b5 MovT
	func_2063(var_19_object); // 0x3b6 NEW_2
	goto Label_957; // 0x3b8 Jump
	
Label_957:
	return 0; // 0x3bd Return
	
Label_953:
	var_24_int = 0; // 0x3b9 PushV
	var_24_int = var_16_cvector; // 0x3ba Mov
	func_1102(var_15_cvector, var_16_cvector, var_24_int); // 0x3bb NEW_2
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	var_17_bool = 0; // 0x3cc PushV
	var_17_bool = 0; // 0x3cd MovB
	var_18_bool = var_1_object == var_16_cvector; // 0x3ce Eq
	if(var_18_bool == 0) goto Label_979; // 0x3cf JumpB
	var_19_bool = var_2_object == 0; // 0x3d0 Not
	if(var_19_bool == 0) goto Label_979; // 0x3d1 JumpB
	var_17_bool = 1; // 0x3d2 MovB
	
Label_979:
	if(var_17_bool == 0) goto Label_985; // 0x3d3 JumpB
	var_2_object = 1; // 0x3d4 TMovB
	var_20_object = Obj(); // 0x3d5 PushV
	var_20_object = var_16_cvector; // 0x3d6 Mov
	func_1892(var_20_object); // 0x3d7 NEW_2
	
Label_985:
	return 0; // 0x3d9 Return
}


task_3_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	var_17_bool = 0; // 0x3db PushV
	var_17_bool = 0; // 0x3dc MovB
	var_18_bool = var_1_object == var_16_cvector; // 0x3dd Eq
	if(var_18_bool == 0) goto Label_994; // 0x3de JumpB
	var_19_object = var_2_object; // 0x3df PushT
	if(var_19_object == 0) goto Label_994; // 0x3e0 JumpB
	var_17_bool = 1; // 0x3e1 MovB
	
Label_994:
	if(var_17_bool == 0) goto Label_999; // 0x3e2 JumpB
	var_2_object = 0; // 0x3e3 TMovB
	var_20_string = "head"; // 0x3e4 PushS
	UnlookAsync(var_20_string); // 0x3e5 Func
	
Label_999:
	return 0; // 0x3e7 Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	RequestClearPath(var_16_cvector); // 0x461 Func
	return 0; // 0x463 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	func_958(var_16_cvector); // 0x46d NEW_2
	var_21_object = Obj(); // 0x46f PushV
	var_21_object = var_16_cvector; // 0x470 Mov
	func_2259(); // 0x471 NEW_2
	return 0; // 0x473 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	var_17_bool = 0; var_18_bool = 0; // 0x48c PushV
	IsOverrideActive(var_18_bool); // 0x48d Func
	var_19_bool = var_18_bool == 0; // 0x48f Not
	if(var_19_bool == 0) goto Label_1173; // 0x490 JumpB
	var_20_object = Obj(); // 0x491 PushV
	var_20_object = var_16_cvector; // 0x492 Mov
	func_2120(var_20_object); // 0x493 NEW_2
	
Label_1173:
	return 2; // 0x495 Return
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_float, var_17_float, var_18_cvector, var_19_cvector)
{
	return 0; // 0x50c Return
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_string, var_16_cvector, var_17_cvector)
{
	return 0; // 0x50e Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_cvector, var_16_cvector)
{
	return 0; // 0x510 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object)
{
	var_17_bool = 0; // 0x52f PushV
	func_1315(var_17_bool); // 0x530 NEW_2
	if(var_17_bool == 0) goto Label_1338; // 0x532 JumpB
	func_1433(); // 0x534 NEW_2
	var_19_object = Obj(); // 0x536 PushV
	var_19_object = var_16_object; // 0x537 Mov
	func_1304(var_19_object); // 0x538 NEW_2
	
Label_1338:
	return 0; // 0x53a Return
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_string)
{
	var_17_string = "kill_player"; // 0x53c PushS
	var_18_bool = var_16_string == var_17_string; // 0x53d Eq
	if(var_18_bool == 0) goto Label_1348; // 0x53e JumpB
	TaskCall(2); // 0x540 TaskCall
	func_212(); // 0x541 NEW_2
	TaskReturn(); // 0x542 TaskReturn
	
Label_1348:
	return 0; // 0x544 Return
}


event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x87e PushV
	var_19_bool = GlobalVars[0]; // 0x87f PushGE
	if(var_19_bool == 0) goto Label_2178; // 0x880 JumpB
	return 2; // 0x881 Return
	
Label_2178:
	IsPlayerActor(var_16_object, var_18_bool); // 0x882 Func
	var_20_bool = var_18_bool; // 0x884 Push
	if(var_20_bool == 0) goto Label_2190; // 0x885 JumpB
	var_21_bool = GlobalVars[0]; // 0x886 PushGE
	var_21_bool = 1; // 0x887 MovB
	GlobalVars[0] = var_21_bool; // 0x888 PopGE
	var_22_bool = 0; var_23_string = ""; var_24_string = ""; // 0x889 PushV
	var_23_string = "quest_d2_02"; // 0x88a MovS
	var_24_string = "player_attack"; // 0x88b MovS
	func_2051(var_22_bool, var_23_string, var_24_string); // 0x88c NEW_2
	
Label_2190:
	return 2; // 0x88e Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector)
{
	var_16_bool = 0; var_17_string = ""; var_18_string = ""; // 0x88f PushV
	var_17_string = "quest_d2_02"; // 0x890 MovS
	var_18_string = "mpatrol_unload"; // 0x891 MovS
	func_2051(var_16_bool, var_17_string, var_18_string); // 0x892 NEW_2
	return 0; // 0x894 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0; // 0x8b5 PushV
	var_20_object = var_16_object; // 0x8b6 Mov
	var_21_int = var_17_int; // 0x8b7 Mov
	var_22_float = var_18_float; // 0x8b8 Mov
	func_1681(var_20_object, var_21_int, var_22_float); // 0x8b9 NEW_2
	return 0; // 0x8bb Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x8bd PushV
	var_22_object = var_16_object; // 0x8be Mov
	var_23_int = var_17_int; // 0x8bf Mov
	var_24_float = var_18_float; // 0x8c0 Mov
	var_25_cvector = var_20_cvector; // 0x8c1 Mov
	var_26_cvector = var_21_cvector; // 0x8c2 Mov
	func_1749(var_24_float, var_25_cvector, var_26_cvector); // 0x8c3 NEW_2
	return 0; // 0x8c5 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0; // 0x8c6 PushV
	var_20_string = "health"; // 0x8c7 PushS
	var_21_bool = var_17_string == var_20_string; // 0x8c8 Eq
	if(var_21_bool == 0) goto Label_2258; // 0x8c9 JumpB
	var_22_string = "health"; // 0x8ca PushS
	GetProperty(var_22_string, var_19_float); // 0x8cb Func
	var_23_int = 0; // 0x8cd PushI
	var_24_bool = var_19_float <= var_23_int; // 0x8ce LE
	if(var_24_bool == 0) goto Label_2258; // 0x8cf JumpB
	SignalDeath(var_16_object); // 0x8d0 Func
	
Label_2258:
	return 2; // 0x8d2 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector, var_16_object)
{
	var_17_object = Obj(); // 0x8d4 PushV
	var_17_object = var_16_object; // 0x8d5 Mov
	func_2197(var_17_object); // 0x8d6 NEW_2
	return 0; // 0x8d8 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_float, var_10_int, var_11_bool, var_12_object, var_13_bool, var_14_cvector, var_15_cvector)
{
	var_16_bool = GlobalVars[2]; // 0x511 PushGE
	var_16_bool = 0; // 0x512 MovB
	GlobalVars[2] = var_16_bool; // 0x513 PopGE
	func_1318(); // 0x515 NEW_2
	return 0; // 0x517 Return
}


func_0(var_0_object, var_20_int, var_21_object)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0x0 PushV
	var_0_object = var_21_object; // 0x1 TMov
	var_31_bool = 0; var_32_object = Obj(); var_33_float = 0; // 0x2 PushV
	var_32_object = var_21_object; // 0x3 Mov
	var_33_float = 70.0; // 0x4 MovF
	func_1774(var_32_object, var_33_float); // 0x5 NEW_2
	var_78_bool = var_31_bool == 0; // 0x7 Not
	if(var_78_bool == 0) goto Label_11; // 0x8 JumpB
	var_20_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_27_object); // 0xb Func
	var_79_int = 0; // 0xd PushV
	func_2267(var_79_int); // 0xe NEW_2
	SetNPCName(var_79_int); // 0x10 ObjFunc
	var_80_int = 0; // 0x12 PushV
	func_2265(var_80_int); // 0x13 NEW_2
	SetNPCDescription(var_80_int); // 0x15 ObjFunc
	var_81_string = ""; // 0x17 PushV
	func_2269(var_81_string); // 0x18 NEW_2
	SetPhoto(var_81_string); // 0x1a ObjFunc
	var_82_string = ""; // 0x1c PushV
	func_2271(var_82_string); // 0x1d NEW_2
	SetPhoto2(var_82_string); // 0x1f ObjFunc
	var_83_int = 0; // 0x21 PushV
	func_2097(var_83_int); // 0x22 NEW_2
	SetPlayerName(var_83_int); // 0x24 ObjFunc
	var_29_int = -1; // 0x26 MovI
	IsOverrideActive(var_28_bool); // 0x27 Func
	var_91_bool = var_28_bool; // 0x29 Push
	if(var_91_bool == 0) goto Label_45; // 0x2a JumpB
	var_20_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_27_object); // 0x2d Func
	var_92_object = Obj(); var_93_object = Obj(); // 0x2f PushV
	var_92_object = var_21_object; // 0x30 Mov
	var_93_object = var_27_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_94_object, var_95_object, var_96_string, var_97_bool, var_92_object, var_93_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_30_bool); // 0x36 ObjFunc
	
Label_56:
	var_141_bool = var_30_bool == 0; // 0x38 Not
	if(var_141_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_30_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_142_object = Obj(); // 0x3f PushV
	var_142_object = var_21_object; // 0x40 Mov
	func_1843(); // 0x41 NEW_2
	StopDialog(var_27_object); // 0x43 Func
	GetReturnValue(var_29_int); // 0x45 ObjFunc
	var_20_int = var_29_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_2051(var_16_bool, var_17_string, var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x803 PushV
	FindActor(var_20_object, var_17_string); // 0x804 Func
	var_21_bool = var_20_object == 0; // 0x806 NullEq
	if(var_21_bool == 0) goto Label_2058; // 0x807 JumpB
	var_16_bool = 0; // 0x808 MovB
	return 2; // 0x809 Return
	
Label_2058:
	Trigger(var_20_object, var_18_string); // 0x80a Func
	var_16_bool = 1; // 0x80c MovB
	return 2; // 0x80d Return
}


func_771(var_302_bool)
{
	var_303_bool = 0; // 0x303 PushV
	var_303_bool = 0; // 0x304 MovB
	var_304_bool = 0; // 0x305 PushV
	func_743(var_303_bool, var_304_bool); // 0x306 NEW_2
	if(var_304_bool == 0) goto Label_782; // 0x308 JumpB
	var_321_bool = 0; // 0x309 PushV
	func_787(var_302_bool, var_303_bool, var_321_bool); // 0x30a NEW_2
	if(var_321_bool == 0) goto Label_782; // 0x30c JumpB
	var_303_bool = 1; // 0x30d MovB
	
Label_782:
	if(var_303_bool == 0) goto Label_785; // 0x30e JumpB
	var_302_bool = 1; // 0x30f MovB
	return 0; // 0x310 Return
	
Label_785:
	var_302_bool = 0; // 0x311 MovB
	return 0; // 0x312 Return
}


func_2063(var_125_object)
{
	var_126_bool = 0; var_127_bool = 0; // 0x80f PushV
	IsPlayerActor(var_125_object, var_127_bool); // 0x810 Func
	var_128_bool = var_127_bool; // 0x812 Push
	if(var_128_bool == 0) goto Label_2071; // 0x813 JumpB
	var_129_string = "attack"; // 0x814 PushS
	PlayGlobalMusic(var_129_string); // 0x815 Func
	
Label_2071:
	return 2; // 0x817 Return
}


func_787(var_0_object, var_4_bool, var_321_bool)
{
	var_322_object = Obj(); var_323_bool = 0; var_324_float = 0; var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); // 0x313 PushV
	GetScene(var_327_object); // 0x314 Func
	var_328_bool = 0; // 0x316 MovB
	
Label_791:
	var_332_cvector = CVector(0,0,0); var_333_object = Obj(); // 0x317 PushV
	var_333_object = var_0_object; // 0x318 MovT
	func_1453(var_333_object); // 0x319 NEW_2
	var_338_int = -var_332_cvector; // 0x31b Neg
	FindDirLength(var_329_float, var_338_int, var_329_float); // 0x31c Func
	var_339_bool = var_329_float < var_4_bool; // 0x31e LT
	if(var_339_bool == 0) goto Label_801; // 0x31f JumpB
	goto Label_829; // 0x320 Jump
	
Label_829:
	var_321_bool = var_328_bool; // 0x33d Mov
	return 10; // 0x33e Return
	
Label_801:
	Face(var_0_object); // 0x321 Func
	var_340_string = "all"; // 0x323 PushS
	var_341_string = "bjump"; // 0x324 PushS
	PlayAnimation(var_340_string, var_341_string); // 0x325 Func
	GetPFPosition(var_330_cvector); // 0x327 TObjFunc
	GetPFPosition(var_331_cvector); // 0x329 Func
	WaitForAnimEnd(); // 0x32b Func
	func_875(var_331_cvector); // 0x32e NEW_2
	StopAsync(); // 0x330 Func
	var_342_cvector = CVector(0.0, 0.0, 0.0); // 0x332 PushVec
	SetSpeed(var_342_cvector); // 0x333 Func
	var_328_bool = 1; // 0x335 MovB
	var_343_bool = 0; // 0x336 PushV
	func_743(var_331_cvector, var_343_bool); // 0x337 NEW_2
	var_344_bool = var_343_bool == 0; // 0x339 Not
	if(var_344_bool == 0) goto Label_828; // 0x33a JumpB
	goto Label_829; // 0x33b Jump
	
Label_828:
	goto Label_791; // 0x33c Jump
}


func_536(var_0_object, var_350_bool, var_351_float)
{
	var_352_int = 0; var_353_bool = 0; var_354_int = 0; var_355_string = ""; var_356_int = 0; var_357_bool = 0; var_358_int = 0; var_359_string = ""; // 0x218 PushV
	func_875(var_359_string); // 0x21a NEW_2
	irand(var_356_int, var_359_string); // 0x21c Func
	var_360_int = 1; // 0x21e PushI
	var_356_int = var_356_int + var_360_int; // 0x21f Add2
	Face(var_0_object); // 0x220 Func
	var_361_bool = 1; // 0x222 PushB
	SetAttackState(var_361_bool); // 0x223 Func
	func_2072(); // 0x226 NEW_2
	var_366_string = "all"; // 0x228 PushS
	var_367_string = "attack_begin"; // 0x229 PushS
	var_368_int = var_367_string + var_356_int; // 0x22a Add
	PlayAnimation(var_366_string, var_368_int); // 0x22b Func
	WaitForAnimEnd(); // 0x22d Func
	func_843(var_358_int, var_359_string); // 0x230 NEW_2
	var_384_bool = 0; var_385_object = Obj(); // 0x232 PushV
	var_385_object = var_0_object; // 0x233 MovT
	func_1613(var_384_bool, var_385_object); // 0x234 NEW_2
	var_386_bool = var_384_bool == 0; // 0x236 Not
	if(var_386_bool == 0) goto Label_572; // 0x237 JumpB
	StopAsync(); // 0x238 Func
	var_350_bool = 0; // 0x23a MovB
	return 8; // 0x23b Return
	
Label_572:
	var_387_float = 0; var_388_int = 0; // 0x23c PushV
	var_387_float = var_351_float; // 0x23d Mov
	var_388_int = var_356_int; // 0x23e Mov
	func_497(var_359_string, var_387_float, var_388_int); // 0x23f NEW_2
	var_469_string = "all"; // 0x241 PushS
	var_470_string = "attack_middle"; // 0x242 PushS
	var_471_int = var_470_string + var_356_int; // 0x243 Add
	HasAnimation(var_357_bool, var_469_string, var_471_int); // 0x244 Func
	var_472_bool = var_357_bool; // 0x246 Push
	if(var_472_bool == 0) goto Label_653; // 0x247 JumpB
	func_2072(); // 0x249 NEW_2
	var_473_string = "all"; // 0x24b PushS
	var_474_string = "attack_middle"; // 0x24c PushS
	var_475_int = var_474_string + var_356_int; // 0x24d Add
	PlayAnimation(var_473_string, var_475_int); // 0x24e Func
	WaitForAnimEnd(); // 0x250 Func
	func_875(var_359_string); // 0x253 NEW_2
	var_476_bool = 0; var_477_object = Obj(); // 0x255 PushV
	var_477_object = var_0_object; // 0x256 MovT
	func_1613(var_476_bool, var_477_object); // 0x257 NEW_2
	var_478_bool = var_476_bool == 0; // 0x259 Not
	if(var_478_bool == 0) goto Label_607; // 0x25a JumpB
	StopAsync(); // 0x25b Func
	var_350_bool = 0; // 0x25d MovB
	return 8; // 0x25e Return
	
Label_607:
	var_479_float = 0; var_480_int = 0; // 0x25f PushV
	var_479_float = var_351_float; // 0x260 Mov
	var_480_int = var_356_int; // 0x261 Mov
	func_497(var_359_string, var_479_float, var_480_int); // 0x262 NEW_2
	var_358_int = 1; // 0x264 MovI
	
Label_613:
	var_481_string = "attack_middle"; // 0x265 PushS
	var_482_int = var_481_string + var_356_int; // 0x266 Add
	var_483_string = "_"; // 0x267 PushS
	var_484_int = var_482_int + var_483_string; // 0x268 Add
	var_359_string = var_484_int + var_358_int; // 0x269 Add2
	var_485_string = "all"; // 0x26a PushS
	HasAnimation(var_357_bool, var_485_string, var_359_string); // 0x26b Func
	var_486_bool = var_357_bool == 0; // 0x26d Not
	if(var_486_bool == 0) goto Label_624; // 0x26e JumpB
	goto Label_653; // 0x26f Jump
	
Label_653:
	var_487_bool = 0; // 0x28d PushB
	SetAttackState(var_487_bool); // 0x28e Func
	var_488_string = "all"; // 0x290 PushS
	var_489_string = "attack_end"; // 0x291 PushS
	var_490_int = var_489_string + var_356_int; // 0x292 Add
	PlayAnimation(var_488_string, var_490_int); // 0x293 Func
	var_491_bool = 0; // 0x295 PushV
	func_889(var_491_bool); // 0x296 NEW_2
	if(var_491_bool == 0) goto Label_671; // 0x298 JumpB
	var_492_bool = 0; var_493_float = 0; // 0x299 PushV
	var_493_float = 0.75; // 0x29a MovF
	func_673(var_492_bool, var_493_float); // 0x29b NEW_2
	StopAsync(); // 0x29d Func
	
Label_671:
	var_350_bool = 1; // 0x29f MovB
	return 8; // 0x2a0 Return
	
Label_624:
	func_2072(); // 0x271 NEW_2
	var_501_string = "all"; // 0x273 PushS
	PlayAnimation(var_501_string, var_359_string); // 0x274 Func
	WaitForAnimEnd(); // 0x276 Func
	func_875(var_359_string); // 0x279 NEW_2
	var_502_bool = 0; var_503_object = Obj(); // 0x27b PushV
	var_503_object = var_0_object; // 0x27c MovT
	func_1613(var_502_bool, var_503_object); // 0x27d NEW_2
	var_504_bool = var_502_bool == 0; // 0x27f Not
	if(var_504_bool == 0) goto Label_645; // 0x280 JumpB
	StopAsync(); // 0x281 Func
	var_350_bool = 0; // 0x283 MovB
	return 8; // 0x284 Return
	
Label_645:
	var_505_float = 0; var_506_int = 0; // 0x285 PushV
	var_505_float = var_351_float; // 0x286 Mov
	var_506_int = var_356_int; // 0x287 Mov
	func_497(var_359_string, var_505_float, var_506_int); // 0x288 NEW_2
	var_507_int = 1; // 0x28a PushI
	var_358_int = var_358_int + var_507_int; // 0x28b Add2
	goto Label_613; // 0x28c Jump
}


func_2072()
{
	var_362_object = Obj(); var_363_object = Obj(); // 0x818 PushV
	GetScene(var_363_object); // 0x819 Func
	var_364_string = "battle"; // 0x81b PushS
	var_365_object = Obj(); // 0x81c PushV
	func_1951(var_365_object); // 0x81d NEW_2
	BroadcastMessage(var_364_string, var_365_object, var_363_object); // 0x81f Func
	return 2; // 0x821 Return
}


func_1304(var_19_object)
{
	var_20_int = 0; var_21_object = Obj(); // 0x519 PushV
	var_21_object = var_19_object; // 0x51a Mov
	TaskCall(0); // 0x51b TaskCall
	func_0(var_22_object, var_20_int, var_21_object); // 0x51c NEW_2
	TaskReturn(); // 0x51d TaskReturn
	var_150_bool = GlobalVars[2]; // 0x51f PushGE
	var_150_bool = 1; // 0x520 MovB
	GlobalVars[2] = var_150_bool; // 0x521 PopGE
	return 0; // 0x522 Return
}


func_2083()
{
	var_24_bool = 0; var_25_string = ""; var_26_string = ""; // 0x824 PushV
	var_25_string = "quest_d2_02"; // 0x825 MovS
	var_26_string = "player_attack"; // 0x826 MovS
	func_2051(var_24_bool, var_25_string, var_26_string); // 0x827 NEW_2
	return 0; // 0x829 Return
}


func_1572(var_105_bool)
{
	var_107_bool = 0; var_108_bool = 0; // 0x624 PushV
	IsDead(var_108_bool); // 0x625 ObjFunc
	var_105_bool = var_108_bool; // 0x627 Mov
	return 2; // 0x628 Return
}


func_1315(var_17_bool)
{
	var_18_bool = GlobalVars[2]; // 0x523 PushGE
	var_17_bool = !var_18_bool; // 0x524 Not2
	return 0; // 0x525 Return
}


func_1318()
{
	var_17_bool = GlobalVars[0]; // 0x526 PushGE
	var_17_bool = 0; // 0x527 MovB
	GlobalVars[0] = var_17_bool; // 0x528 PopGE
	func_1349(var_14_cvector, var_15_cvector); // 0x52a NEW_2
	return 0; // 0x52c Return
}


func_1577(var_94_bool, var_95_object)
{
	var_96_object = Obj(); var_97_object = Obj(); var_98_object = Obj(); var_99_object = Obj(); // 0x629 PushV
	var_100_bool = var_95_object == 0; // 0x62a NullEq
	if(var_100_bool == 0) goto Label_1582; // 0x62b JumpB
	var_94_bool = 0; // 0x62c MovB
	return 4; // 0x62d Return
	
Label_1582:
	var_101_bool = 0; // 0x62e PushV
	var_101_bool = 0; // 0x62f MovB
	var_102_string = "IsDead"; // 0x630 PushS
	var_103_int = 1; // 0x631 PushI
	var_104_bool = IsFuncExist(var_95_object, var_102_string, var_103_int); // 0x632 FuncExist
	if(var_104_bool == 0) goto Label_1594; // 0x633 JumpB
	var_105_bool = 0; var_106_object = Obj(); // 0x634 PushV
	var_106_object = var_95_object; // 0x635 Mov
	func_1572(var_106_object); // 0x636 NEW_2
	if(var_105_bool == 0) goto Label_1594; // 0x638 JumpB
	var_101_bool = 1; // 0x639 MovB
	
Label_1594:
	if(var_101_bool == 0) goto Label_1597; // 0x63a JumpB
	var_94_bool = 0; // 0x63b MovB
	return 4; // 0x63c Return
	
Label_1597:
	GetScene(var_98_object); // 0x63d Func
	var_109_bool = var_98_object == 0; // 0x63f NullEq
	if(var_109_bool == 0) goto Label_1603; // 0x640 JumpB
	var_94_bool = 0; // 0x641 MovB
	return 4; // 0x642 Return
	
Label_1603:
	GetScene(var_99_object); // 0x643 ObjFunc
	var_110_bool = var_98_object != var_99_object; // 0x645 Neq
	if(var_110_bool == 0) goto Label_1609; // 0x646 JumpB
	var_94_bool = 0; // 0x647 MovB
	return 4; // 0x648 Return
	
Label_1609:
	var_94_bool = 1; // 0x649 MovB
	return 4; // 0x64a Return
}


func_2090()
{
	var_34_bool = 0; var_35_string = ""; var_36_string = ""; // 0x82b PushV
	var_35_string = "quest_d2_02"; // 0x82c MovS
	var_36_string = "completed"; // 0x82d MovS
	func_2051(var_34_bool, var_35_string, var_36_string); // 0x82e NEW_2
	return 0; // 0x830 Return
}


func_1325()
{
	return 0; // 0x52d Return
}


func_2097(var_83_int)
{
	var_84_int = 0; var_85_int = 0; // 0x831 PushV
	var_86_string = "branch"; // 0x832 PushS
	GetVariable(var_86_string, var_85_int); // 0x833 Func
	var_87_int = 0; // 0x835 PushI
	var_88_bool = var_85_int == var_87_int; // 0x836 Eq
	if(var_88_bool == 0) goto Label_2107; // 0x837 JumpB
	var_83_int = 1; // 0x838 MovI
	return 2; // 0x839 Return
	
Label_2107:
	var_89_int = 1; // 0x83b PushI
	var_90_bool = var_85_int == var_89_int; // 0x83c Eq
	if(var_90_bool == 0) goto Label_2112; // 0x83d JumpB
	var_83_int = 2; // 0x83e MovI
	return 2; // 0x83f Return
	
Label_2112:
	var_83_int = 3; // 0x840 MovI
	return 2; // 0x841 Return
}


func_1843()
{
	var_143_bool = 0; var_144_bool = 0; // 0x733 PushV
	var_145_bool = 1; // 0x734 PushB
	CameraSwitchToNormal(var_145_bool); // 0x735 Func
	var_146_bool = 0; // 0x737 PushV
	func_2273(var_146_bool); // 0x738 NEW_2
	if(var_146_bool == 0) goto Label_1852; // 0x73a JumpB
	goto Label_1860; // 0x73b Jump
	
Label_1860:
	return 2; // 0x744 Return
	
Label_1852:
	var_147_string = "head"; // 0x73c PushS
	HasAnimationTrack(var_144_bool, var_147_string); // 0x73d Func
	var_148_bool = var_144_bool; // 0x73f Push
	if(var_148_bool == 0) goto Label_1860; // 0x740 JumpB
	var_149_string = "head"; // 0x741 PushS
	UnlookAsync(var_149_string); // 0x742 Func
}


func_832(var_0_object, var_252_bool)
{
	var_253_bool = 0; var_254_bool = 0; // 0x340 PushV
	var_255_string = "IsAttacking"; // 0x341 PushS
	var_256_int = 1; // 0x342 PushI
	var_257_bool = IsFuncExist(var_0_object, var_255_string, var_256_int); // 0x343 FuncExist
	if(var_257_bool == 0) goto Label_841; // 0x344 JumpB
	IsAttacking(var_254_bool); // 0x345 TObjFunc
	var_252_bool = var_254_bool; // 0x347 Mov
	return 2; // 0x348 Return
	
Label_841:
	var_252_bool = 0; // 0x349 MovB
	return 2; // 0x34a Return
}


func_2114(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x842 PushV
	var_71_string = "branch"; // 0x843 PushS
	GetVariable(var_71_string, var_70_int); // 0x844 Func
	var_68_int = var_70_int; // 0x846 Mov
	return 2; // 0x847 Return
}


func_1861(var_125_string)
{
	var_126_bool = 0; var_127_float = 0; var_128_float = 0; var_129_bool = 0; var_130_float = 0; var_131_float = 0; // 0x745 PushV
	lshHasAnimation(var_129_bool, var_125_string); // 0x746 Func
	var_132_bool = var_129_bool; // 0x748 Push
	if(var_132_bool == 0) goto Label_1872; // 0x749 JumpB
	lshGetAnimTimes(var_125_string, var_130_float, var_131_float); // 0x74a Func
	var_133_bool = 0; // 0x74c PushB
	lshPlayAnimation(var_130_float, var_131_float, var_133_bool); // 0x74d Func
	goto Label_1876; // 0x74f Jump
	
Label_1876:
	return 6; // 0x754 Return
	
Label_1872:
	var_134_string = "Can't find lsh animation : "; // 0x750 PushS
	var_135_int = var_134_string + var_125_string; // 0x751 Add
	Trace(var_135_int); // 0x752 Func
}


func_1349(var_0_object, var_1_object)
{
	var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_object = Obj(); // 0x545 PushV
	GetPFPosition(var_25_object); // 0x546 Func
	GetDirection(var_0_object); // 0x548 Func
	
Label_1354:
	func_1438(); // 0x54b NEW_2
	var_26_int = 10; // 0x54d PushI
	irand(var_22_int, var_26_int); // 0x54e Func
	var_27_int = 5; // 0x550 PushI
	var_28_int = var_22_int + var_27_int; // 0x551 Add
	Sleep(var_28_int, var_23_bool); // 0x552 Func
	var_29_bool = var_23_bool; // 0x554 Push
	if(var_29_bool == 0) goto Label_1370; // 0x555 JumpB
	func_1325(); // 0x557 NEW_2
	goto Label_1431; // 0x559 Jump
	
Label_1431:
	goto Label_1354; // 0x597 Jump
	
Label_1370:
	func_1438(); // 0x55b NEW_2
	GetPFPosition(var_24_cvector); // 0x55d Func
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); // 0x55f PushV
	var_31_cvector = var_1_object; // 0x560 MovT
	var_32_cvector = var_24_cvector; // 0x561 Mov
	func_1967(var_30_float, var_31_cvector, var_32_cvector); // 0x562 NEW_2
	var_35_int = 40000; // 0x564 PushI
	var_36_bool = var_30_float > var_35_int; // 0x565 GT
	if(var_36_bool == 0) goto Label_1417; // 0x566 JumpB
	FindPathTo(var_25_object, var_25_object); // 0x567 Func
	var_37_bool = var_25_object != 0; // 0x569 NullNeq
	if(var_37_bool == 0) goto Label_1412; // 0x56a JumpB
	RotatePath(var_25_object, var_23_bool); // 0x56b Func
	var_38_bool = var_23_bool == 0; // 0x56d Not
	if(var_38_bool == 0) goto Label_1392; // 0x56e JumpB
	goto Label_1430; // 0x56f Jump
	
Label_1430:
	goto Label_1370; // 0x596 Jump
	
Label_1392:
	var_39_bool = 0; // 0x570 PushB
	FollowPath(var_25_object, var_39_bool, var_23_bool); // 0x571 Func
	var_40_bool = var_23_bool == 0; // 0x573 Not
	if(var_40_bool == 0) goto Label_1398; // 0x574 JumpB
	goto Label_1430; // 0x575 Jump
	
Label_1398:
	var_41_float = GetByIndex(var_0_object, 0); // 0x576 PushE
	var_42_float = GetByIndex(var_0_object, 2); // 0x577 PushE
	Rotate(var_41_float, var_42_float, var_23_bool); // 0x578 Func
	var_43_bool = var_23_bool == 0; // 0x57a Not
	if(var_43_bool == 0) goto Label_1405; // 0x57b JumpB
	goto Label_1430; // 0x57c Jump
	
Label_1405:
	WaitForAnimEnd(var_23_bool); // 0x57d Func
	var_44_bool = var_23_bool == 0; // 0x57f Not
	if(var_44_bool == 0) goto Label_1410; // 0x580 JumpB
	goto Label_1430; // 0x581 Jump
	
Label_1410:
	goto Label_1431; // 0x582 Jump
	
Label_1412:
	var_45_int = 1; // 0x584 PushI
	Sleep(var_45_int); // 0x585 Func
	var_25_object = 0; // 0x587 SetNull
	goto Label_1430; // 0x588 Jump
	
Label_1417:
	var_46_float = GetByIndex(var_0_object, 0); // 0x589 PushE
	var_47_float = GetByIndex(var_0_object, 2); // 0x58a PushE
	Rotate(var_46_float, var_47_float, var_23_bool); // 0x58b Func
	var_48_bool = var_23_bool == 0; // 0x58d Not
	if(var_48_bool == 0) goto Label_1424; // 0x58e JumpB
	goto Label_1430; // 0x58f Jump
	
Label_1424:
	WaitForAnimEnd(var_23_bool); // 0x590 Func
	var_49_bool = var_23_bool == 0; // 0x592 Not
	if(var_49_bool == 0) goto Label_1429; // 0x593 JumpB
	goto Label_1430; // 0x594 Jump
	
Label_1429:
	goto Label_1431; // 0x595 Jump
}


func_2120(var_20_object)
{
	var_21_int = 0; // 0x849 PushV
	func_2114(var_21_int); // 0x84a NEW_2
	var_25_int = 1; // 0x84c PushI
	var_26_bool = var_21_int == var_25_int; // 0x84d Eq
	if(var_26_bool == 0) goto Label_2130; // 0x84e JumpB
	WorkWithCorpse(var_20_object); // 0x84f Func
	goto Label_2132; // 0x851 Jump
	
Label_2132:
	return 0; // 0x854 Return
	
Label_2130:
	Barter(var_20_object); // 0x852 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_92_object, var_93_object)
{
	var_0_object = var_93_object; // 0x4b TMov
	var_1_object = var_92_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_98_int = 1; // 0x4e PushI
	if(var_98_int == 0) goto Label_102; // 0x4f JumpB
	var_99_string = ""; // 0x50 PushV
	var_99_string = "Neutral"; // 0x51 MovS
	func_132(var_93_object, var_99_string); // 0x52 NEW_2
	var_116_int = 507522; // 0x54 PushI
	SetMessage(var_116_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_117_int = 507523; // 0x59 PushI
	var_118_int = -1; // 0x5a PushI
	var_119_int = 8305; // 0x5b PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x5c TObjFunc
	var_120_int = 507524; // 0x5e PushI
	var_121_int = -1; // 0x5f PushI
	var_122_int = 8306; // 0x60 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_123_bool = 0; // 0x66 PushV
	func_2273(var_123_bool); // 0x67 NEW_2
	if(var_123_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_124_string = var_3_string; // 0x6c PushT
	if(var_124_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_125_string = ""; // 0x6f PushV
	var_125_string = var_2_object; // 0x70 MovT
	func_1861(var_125_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_136_string = "all"; // 0x75 PushS
	var_137_string = "idle"; // 0x76 PushS
	PlayAnimation(var_136_string, var_137_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_138_string = var_3_string; // 0x7b PushT
	if(var_138_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_139_string = "all"; // 0x7e PushS
	var_140_string = "idle"; // 0x7f PushS
	PlayAnimation(var_139_string, var_140_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_843(var_2_object, var_5_object)
{
	var_369_float = 0; var_370_int = 0; var_371_float = 0; var_372_int = 0; // 0x34b PushV
	var_373_bool = var_2_object == 0; // 0x34c Not
	if(var_373_bool == 0) goto Label_847; // 0x34d JumpB
	return 4; // 0x34e Return
	
Label_847:
	var_374_object = var_5_object; // 0x34f PushT
	if(var_374_object == 0) goto Label_855; // 0x350 JumpB
	var_375_int = -1; // 0x351 PushI
	var_5_object = var_5_object + var_375_int; // 0x352 Add2
	var_376_int = 0; // 0x353 PushI
	var_377_bool = var_5_object > var_376_int; // 0x354 GT
	if(var_377_bool == 0) goto Label_855; // 0x355 JumpB
	return 4; // 0x356 Return
	
Label_855:
	rand(var_371_float); // 0x357 Func
	var_378_float = 0; // 0x359 PushV
	func_893(var_378_float); // 0x35a NEW_2
	var_379_bool = var_371_float < var_378_float; // 0x35c LT
	if(var_379_bool == 0) goto Label_874; // 0x35d JumpB
	irand(var_372_int, var_371_float); // 0x35e Func
	var_380_int = 1; // 0x360 PushI
	var_372_int = var_372_int + var_380_int; // 0x361 Add2
	var_381_string = "attack"; // 0x362 PushS
	var_382_int = var_381_string + var_372_int; // 0x363 Add
	Speak(var_382_int); // 0x364 Func
	var_383_int = 0; // 0x366 PushV
	func_891(var_383_int); // 0x367 NEW_2
	var_5_object = var_383_int; // 0x368 TMov
	
Label_874:
	return 4; // 0x36a Return
}


func_1613(var_90_bool, var_91_object)
{
	var_92_int = 0; var_93_int = 0; // 0x64d PushV
	var_94_bool = 0; var_95_object = Obj(); // 0x64e PushV
	var_95_object = var_91_object; // 0x64f Mov
	func_1577(var_94_bool, var_95_object); // 0x650 NEW_2
	var_111_bool = var_94_bool == 0; // 0x652 Not
	if(var_111_bool == 0) goto Label_1622; // 0x653 JumpB
	var_90_bool = 0; // 0x654 MovB
	return 2; // 0x655 Return
	
Label_1622:
	var_112_bool = 0; var_113_object = Obj(); var_114_string = ""; // 0x656 PushV
	var_113_object = var_91_object; // 0x657 Mov
	var_114_string = "noaccess"; // 0x658 MovS
	func_1465(var_112_bool, var_113_object, var_114_string); // 0x659 NEW_2
	var_121_bool = var_112_bool == 0; // 0x65b Not
	if(var_121_bool == 0) goto Label_1631; // 0x65c JumpB
	var_90_bool = 1; // 0x65d MovB
	return 2; // 0x65e Return
	
Label_1631:
	var_122_string = "noaccess"; // 0x65f PushS
	GetProperty(var_122_string, var_93_int); // 0x660 ObjFunc
	var_123_int = 0; // 0x662 PushI
	var_90_bool = var_93_int == var_123_int; // 0x663 Eq2
	return 2; // 0x664 Return
}


func_1102(var_0_object, var_1_object, var_24_int)
{
	var_25_int = 0; // 0x44f PushI
	var_26_bool = var_24_int != var_25_int; // 0x450 Neq
	if(var_26_bool == 0) goto Label_1107; // 0x451 JumpB
	return 0; // 0x452 Return
	
Label_1107:
	var_27_bool = 0; var_28_object = Obj(); // 0x453 PushV
	var_28_object = var_1_object; // 0x454 MovT
	func_1140(var_27_bool, var_28_object); // 0x455 NEW_2
	var_63_bool = var_27_bool == 0; // 0x457 Not
	if(var_63_bool == 0) goto Label_1114; // 0x458 JumpB
	var_0_object = 1; // 0x459 TMovB
	
Label_1114:
	var_64_int = 0; // 0x45a PushI
	KillTimer(var_64_int); // 0x45b Func
	Stop(); // 0x45d Func
	return 0; // 0x45f Return
}


func_2133(var_74_string)
{
	var_75_object = Obj(); var_76_int = 0; var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; var_80_bool = 0; // 0x855 PushV
	CreateInvItem(var_78_object); // 0x856 Func
	SetItemName(var_74_string); // 0x858 ObjFunc
	var_81_string = "Organ"; // 0x85a PushS
	var_82_int = 1; // 0x85b PushI
	SetProperty(var_81_string, var_82_int); // 0x85c ObjFunc
	GetItemID(var_79_int); // 0x85e ObjFunc
	var_83_int = 0; // 0x860 PushI
	var_84_int = 1; // 0x861 PushI
	AddItem(var_80_bool, var_78_object, var_83_int, var_84_int); // 0x862 Func
	return 6; // 0x864 Return
}


func_1877(var_103_string, var_104_bool)
{
	var_107_bool = 0; var_108_float = 0; var_109_float = 0; var_110_bool = 0; var_111_float = 0; var_112_float = 0; // 0x755 PushV
	lshHasAnimation(var_110_bool, var_103_string); // 0x756 Func
	var_113_bool = var_110_bool; // 0x758 Push
	if(var_113_bool == 0) goto Label_1887; // 0x759 JumpB
	lshGetAnimTimes(var_103_string, var_111_float, var_112_float); // 0x75a Func
	lshPlayAnimation(var_111_float, var_112_float, var_104_bool); // 0x75c Func
	goto Label_1891; // 0x75e Jump
	
Label_1891:
	return 6; // 0x763 Return
	
Label_1887:
	var_114_string = "Can't find lsh animation : "; // 0x75f PushS
	var_115_int = var_114_string + var_103_string; // 0x760 Add
	Trace(var_115_int); // 0x761 Func
}


func_1124(var_0_object)
{
	var_0_object = 1; // 0x464 TMovB
	var_20_int = 0; // 0x465 PushI
	KillTimer(var_20_int); // 0x466 Func
	Stop(); // 0x468 Func
	return 0; // 0x46a Return
}


func_1637(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = ""; // 0x665 PushV
	var_48_bool = var_33_object == 0; // 0x666 NullEq
	if(var_48_bool == 0) goto Label_1641; // 0x667 JumpB
	return 14; // 0x668 Return
	
Label_1641:
	IsDead(var_41_bool); // 0x669 Func
	var_49_bool = var_41_bool; // 0x66b Push
	if(var_49_bool == 0) goto Label_1646; // 0x66c JumpB
	return 14; // 0x66d Return
	
Label_1646:
	GetSecondaryAnimationType(var_42_int); // 0x66e Func
	var_50_int = 0; // 0x670 PushI
	var_51_bool = var_42_int < var_50_int; // 0x671 LT
	if(var_51_bool == 0) goto Label_1652; // 0x672 JumpB
	return 14; // 0x673 Return
	
Label_1652:
	GetPosition(var_43_cvector); // 0x674 ObjFunc
	GetPosition(var_44_cvector); // 0x676 Func
	GetDirection(var_45_cvector); // 0x678 Func
	var_46_cvector = var_44_cvector - var_43_cvector; // 0x67a Sub2
	var_52_float = GetByIndex(var_46_cvector, 0); // 0x67b PushE
	var_53_float = GetByIndex(var_45_cvector, 0); // 0x67c PushE
	var_54_float = var_52_float * var_53_float; // 0x67d Mult
	var_55_float = GetByIndex(var_46_cvector, 2); // 0x67e PushE
	var_56_float = GetByIndex(var_45_cvector, 2); // 0x67f PushE
	var_57_float = var_55_float * var_56_float; // 0x680 Mult
	var_58_int = var_54_float + var_57_float; // 0x681 Add
	var_59_int = 0; // 0x682 PushI
	var_60_bool = var_58_int >= var_59_int; // 0x683 GE
	if(var_60_bool == 0) goto Label_1671; // 0x684 JumpB
	var_47_string = "fhit"; // 0x685 MovS
	goto Label_1672; // 0x686 Jump
	
Label_1672:
	var_61_string = "hit_react"; // 0x688 PushS
	var_62_string = "1"; // 0x689 PushS
	var_63_int = var_47_string + var_62_string; // 0x68a Add
	var_64_string = "2"; // 0x68b PushS
	var_65_int = var_47_string + var_64_string; // 0x68c Add
	var_66_int = -10; // 0x68d PushI
	FadeSecondaryAnimation(var_61_string, var_63_int, var_65_int, var_66_int); // 0x68e Func
	return 14; // 0x690 Return
	
Label_1671:
	var_47_string = "bhit"; // 0x687 MovS
}


func_2150()
{
	var_68_int = 0; // 0x866 PushV
	func_2114(var_68_int); // 0x867 NEW_2
	var_72_int = 1; // 0x869 PushI
	var_73_bool = var_68_int != var_72_int; // 0x86a Neq
	if(var_73_bool == 0) goto Label_2157; // 0x86b JumpB
	return 0; // 0x86c Return
	
Label_2157:
	var_74_string = ""; // 0x86d PushV
	var_74_string = "liver"; // 0x86e MovS
	func_2133(var_74_string); // 0x86f NEW_2
	var_85_string = ""; // 0x871 PushV
	var_85_string = "kidney"; // 0x872 MovS
	func_2133(var_85_string); // 0x873 NEW_2
	var_86_string = ""; // 0x875 PushV
	var_86_string = "heart"; // 0x876 MovS
	func_2133(var_86_string); // 0x877 NEW_2
	var_87_string = ""; // 0x879 PushV
	var_87_string = "blood"; // 0x87a MovS
	func_2133(var_87_string); // 0x87b NEW_2
	return 0; // 0x87d Return
}


func_1892(var_149_object)
{
	var_150_float = 0; var_151_cvector = CVector(0,0,0); var_152_float = 0; var_153_cvector = CVector(0,0,0); // 0x764 PushV
	GetEyesHeight(var_152_float); // 0x765 ObjFunc
	var_153_cvector = CVector(0.0, 0.0, 0.0); // 0x767 MovV
	var_154_float = GetByIndex(var_153_cvector, 1); // 0x768 PushE
	var_154_float = var_152_float; // 0x769 Mov
	SetByIndex(var_153_cvector, 1) = var_154_float; // 0x76a PopE
	var_155_string = "head"; // 0x76b PushS
	LookAsync(var_149_object, var_155_string, var_153_cvector); // 0x76c Func
	return 4; // 0x76e Return
}


func_875(var_0_object)
{
	var_125_object = Obj(); // 0x36b PushV
	var_125_object = var_0_object; // 0x36c MovT
	func_2063(var_125_object); // 0x36d NEW_2
	return 0; // 0x36f Return
}


func_1903()
{
	var_19_bool = 0; // 0x76f PushV
	func_2273(var_19_bool); // 0x770 NEW_2
	if(var_19_bool == 0) goto Label_1909; // 0x772 JumpB
	lshStopSpeech(); // 0x773 Func
	
Label_1909:
	return 0; // 0x775 Return
}


func_880(var_466_int)
{
	var_466_int = 0; // 0x370 MovI
	return 0; // 0x371 Return
}


func_882()
{
	var_258_string = ""; // 0x372 PushV
	var_258_string = "attack_stay"; // 0x373 MovS
	func_1910(var_258_string); // 0x374 NEW_2
	return 0; // 0x376 Return
}


func_1140(var_183_bool, var_184_object)
{
	var_185_bool = 0; var_186_object = Obj(); // 0x475 PushV
	var_186_object = var_184_object; // 0x476 Mov
	func_1613(var_185_bool, var_186_object); // 0x477 NEW_2
	var_183_bool = var_185_bool; // 0x478 Mov
	return 0; // 0x47a Return
}


func_1910(var_112_string)
{
	var_113_bool = 0; var_114_int = 0; var_115_bool = 0; var_116_int = 0; var_117_bool = 0; var_118_float = 0; var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_bool = 0; var_122_int = 0; var_123_bool = 0; var_124_int = 0; var_125_bool = 0; var_126_float = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); // 0x776 PushV
	IsExisting3DSound(var_121_bool, var_112_string); // 0x777 Func
	var_129_bool = var_121_bool == 0; // 0x779 Not
	if(var_129_bool == 0) goto Label_1935; // 0x77a JumpB
	var_122_int = 0; // 0x77b MovI
	
Label_1916:
	var_130_int = 1; // 0x77c PushI
	var_131_int = var_122_int + var_130_int; // 0x77d Add
	var_132_int = var_112_string + var_131_int; // 0x77e Add
	IsExisting3DSound(var_123_bool, var_132_int); // 0x77f Func
	var_133_bool = var_123_bool == 0; // 0x781 Not
	if(var_133_bool == 0) goto Label_1924; // 0x782 JumpB
	goto Label_1927; // 0x783 Jump
	
Label_1927:
	var_134_bool = var_122_int == 0; // 0x787 Not
	if(var_134_bool == 0) goto Label_1930; // 0x788 JumpB
	return 16; // 0x789 Return
	
Label_1930:
	irand(var_124_int, var_122_int); // 0x78a Func
	var_135_int = 1; // 0x78c PushI
	var_136_int = var_124_int + var_135_int; // 0x78d Add
	var_112_string = var_112_string + var_136_int; // 0x78e Add2
	
Label_1935:
	Is3DSoundLoaded(var_125_bool, var_112_string); // 0x78f Func
	var_137_bool = var_125_bool; // 0x791 Push
	if(var_137_bool == 0) goto Label_1950; // 0x792 JumpB
	GetEyesHeight(var_126_float); // 0x793 Func
	GetDirection(var_127_cvector); // 0x795 Func
	var_138_int = 50; // 0x797 PushI
	var_128_cvector = var_127_cvector * var_138_int; // 0x798 Mult2
	var_139_float = GetByIndex(var_128_cvector, 1); // 0x799 PushE
	var_139_float = var_139_float + var_126_float; // 0x79a Add2
	SetByIndex(var_128_cvector, 1) = var_139_float; // 0x79b PopE
	PlayGlobalSound(var_112_string, var_128_cvector); // 0x79c Func
	
Label_1950:
	return 16; // 0x79e Return
	
Label_1924:
	var_140_int = 1; // 0x784 PushI
	var_122_int = var_122_int + var_140_int; // 0x785 Add2
	goto Label_1916; // 0x786 Jump
}


func_887()
{
	return 0; // 0x378 Return
}


func_889(var_491_bool)
{
	var_491_bool = 1; // 0x379 MovB
	return 0; // 0x37a Return
}


func_1147(var_201_string)
{
	var_201_string = "walk"; // 0x47b MovS
	return 0; // 0x47c Return
}


func_891(var_383_int)
{
	var_383_int = 1; // 0x37b MovI
	return 0; // 0x37c Return
}


func_1149(var_202_string)
{
	var_202_string = "run"; // 0x47d MovS
	return 0; // 0x47e Return
}


func_893(var_378_float)
{
	var_378_float = 0.5; // 0x37d MovF
	return 0; // 0x37e Return
}


func_1151(var_88_object)
{
	var_89_object = Obj(); // 0x480 PushV
	var_89_object = var_88_object; // 0x481 Mov
	func_1174(var_89_object); // 0x482 NEW_2
	var_169_int = 50; // 0x484 PushI
	var_170_int = 40; // 0x485 PushI
	SetRTEnvelope(var_169_int, var_170_int); // 0x486 Func
	
Label_1160:
	Hold(); // 0x488 Func
	goto Label_1160; // 0x48a Jump
}


func_895(var_2_object, var_132_bool, var_133_object, var_134_float, var_135_float, var_136_bool, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0; // 0x37f PushV
	var_145_object = Obj(); // 0x380 PushV
	var_145_object = var_133_object; // 0x381 Mov
	func_2063(var_145_object); // 0x382 NEW_2
	var_146_int = 1; // 0x384 PushI
	var_147_int = 5; // 0x385 PushI
	SetTimer(var_146_int, var_147_int); // 0x386 Func
	CanSee(var_143_bool, var_133_object); // 0x388 Func
	var_148_bool = var_143_bool; // 0x38a Push
	if(var_148_bool == 0) goto Label_914; // 0x38b JumpB
	var_2_object = 1; // 0x38c TMovB
	var_149_object = Obj(); // 0x38d PushV
	var_149_object = var_133_object; // 0x38e Mov
	func_1892(var_149_object); // 0x38f NEW_2
	goto Label_915; // 0x391 Jump
	
Label_915:
	var_156_bool = 0; var_157_object = Obj(); // 0x393 PushV
	var_157_object = var_133_object; // 0x394 Mov
	func_1460(var_156_bool, var_157_object); // 0x395 NEW_2
	if(var_156_bool == 0) goto Label_925; // 0x397 JumpB
	var_160_object = Obj(); // 0x398 PushV
	func_1951(var_160_object); // 0x399 NEW_2
	SendPlayerEnemy(var_133_object, var_160_object); // 0x39b Func
	
Label_925:
	var_161_bool = 0; var_162_object = Obj(); var_163_float = 0; var_164_float = 0; var_165_bool = 0; var_166_bool = 0; // 0x39d PushV
	var_162_object = var_133_object; // 0x39e Mov
	var_163_float = var_134_float; // 0x39f Mov
	var_164_float = var_135_float; // 0x3a0 Mov
	var_165_bool = var_136_bool; // 0x3a1 Mov
	var_166_bool = var_137_bool; // 0x3a2 Mov
	func_1000(var_143_bool, var_144_bool, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool); // 0x3a3 NEW_2
	var_144_bool = var_161_bool; // 0x3a4 Mov
	var_212_object = var_2_object; // 0x3a6 PushT
	if(var_212_object == 0) goto Label_939; // 0x3a7 JumpB
	var_213_string = "head"; // 0x3a8 PushS
	UnlookAsync(var_213_string); // 0x3a9 Func
	
Label_939:
	var_214_int = 1; // 0x3ab PushI
	KillTimer(var_214_int); // 0x3ac Func
	var_132_bool = var_144_bool; // 0x3ae Mov
	return 4; // 0x3af Return
	
Label_914:
	var_2_object = 0; // 0x392 TMovB
}


func_132(var_2_object, var_99_string)
{
	var_100_bool = 0; // 0x85 PushV
	func_2273(var_100_bool); // 0x86 NEW_2
	var_101_bool = var_100_bool == 0; // 0x88 Not
	if(var_101_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_102_bool = var_99_string == var_2_object; // 0x8b Eq
	if(var_102_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_103_string = ""; var_104_bool = 0; // 0x8e PushV
	var_103_string = var_99_string; // 0x8f Mov
	var_105_string = ""; // 0x90 PushS
	var_106_bool = var_99_string == var_105_string; // 0x91 Eq
	if(var_106_bool == 0) goto Label_149; // 0x92 JumpB
	var_104_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_1877(var_103_string, var_104_bool); // 0x96 NEW_2
	var_2_object = var_99_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_104_bool = 1; // 0x95 MovB
}


func_1681(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); // 0x691 PushV
	var_41_bool = 0; // 0x692 PushV
	var_41_bool = 0; // 0x693 MovB
	var_42_bool = 0; // 0x694 PushV
	var_42_bool = 0; // 0x695 MovB
	var_43_object = var_20_object; // 0x696 Push
	if(var_43_object == 0) goto Label_1692; // 0x697 JumpB
	var_44_int = 4; // 0x698 PushI
	var_45_bool = var_21_int != var_44_int; // 0x699 Neq
	if(var_45_bool == 0) goto Label_1692; // 0x69a JumpB
	var_42_bool = 1; // 0x69b MovB
	
Label_1692:
	if(var_42_bool == 0) goto Label_1697; // 0x69c JumpB
	var_46_int = 5; // 0x69d PushI
	var_47_bool = var_21_int != var_46_int; // 0x69e Neq
	if(var_47_bool == 0) goto Label_1697; // 0x69f JumpB
	var_41_bool = 1; // 0x6a0 MovB
	
Label_1697:
	if(var_41_bool == 0) goto Label_1744; // 0x6a1 JumpB
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x6a2 PushV
	var_50_cvector = CVector(0,0,0); var_51_object = Obj(); // 0x6a3 PushV
	var_51_object = var_20_object; // 0x6a4 Mov
	func_1453(var_51_object); // 0x6a5 NEW_2
	var_49_cvector = var_50_cvector; // 0x6a6 Mov
	func_1957(var_48_cvector, var_49_cvector); // 0x6a8 NEW_2
	var_32_cvector = var_48_cvector; // 0x6a9 Mov
	CreateVectorVector(var_33_object); // 0x6ab Func
	var_34_int = 1; // 0x6ad MovI
	
Label_1710:
	var_61_string = "hit"; // 0x6ae PushS
	var_62_int = var_61_string + var_34_int; // 0x6af Add
	GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector); // 0x6b0 Func
	var_63_bool = var_35_bool == 0; // 0x6b2 Not
	if(var_63_bool == 0) goto Label_1717; // 0x6b3 JumpB
	goto Label_1726; // 0x6b4 Jump
	
Label_1726:
	size(var_38_int); // 0x6be ObjFunc
	var_64_int = var_38_int; // 0x6c0 Push
	if(var_64_int == 0) goto Label_1743; // 0x6c1 JumpB
	irand(var_39_int, var_38_int); // 0x6c2 Func
	get(var_40_cvector, var_39_int); // 0x6c4 ObjFunc
	var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0x6c6 PushV
	var_65_object = var_20_object; // 0x6c7 Mov
	var_66_int = var_21_int; // 0x6c8 Mov
	var_67_float = var_22_float; // 0x6c9 Mov
	var_68_cvector = var_40_cvector; // 0x6ca Mov
	var_69_cvector = -var_32_cvector; // 0x6cb Neg2
	func_1749(var_67_float, var_68_cvector, var_69_cvector); // 0x6cc NEW_2
	return 18; // 0x6ce Return
	
Label_1743:
	var_33_object = 0; // 0x6cf SetNull
	
Label_1744:
	var_110_object = Obj(); // 0x6d0 PushV
	var_110_object = var_20_object; // 0x6d1 Mov
	func_1637(var_110_object); // 0x6d2 NEW_2
	return 18; // 0x6d4 Return
	
Label_1717:
	var_111_int = var_37_cvector | var_32_cvector; // 0x6b5 Or
	var_112_float = 0.70711; // 0x6b6 PushF
	var_113_bool = var_111_int >= var_112_float; // 0x6b7 GE
	if(var_113_bool == 0) goto Label_1723; // 0x6b8 JumpB
	add(var_36_cvector); // 0x6b9 ObjFunc
	
Label_1723:
	var_114_int = 1; // 0x6bb PushI
	var_34_int = var_34_int + var_114_int; // 0x6bc Add2
	goto Label_1710; // 0x6bd Jump
}


func_2197(var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x895 PushV
	var_20_string = "revolver_ammo"; // 0x896 PushS
	var_21_int = 0; // 0x897 PushI
	var_22_int = 2; // 0x898 PushI
	AddItem(var_19_bool, var_20_string, var_21_int, var_22_int); // 0x899 Func
	var_23_string = "alpha_pills"; // 0x89b PushS
	var_24_int = 0; // 0x89c PushI
	var_25_int = 2; // 0x89d PushI
	AddItem(var_19_bool, var_23_string, var_24_int, var_25_int); // 0x89e Func
	var_26_bool = 0; var_27_object = Obj(); // 0x8a0 PushV
	var_27_object = var_17_object; // 0x8a1 Mov
	func_1460(var_26_bool, var_27_object); // 0x8a2 NEW_2
	if(var_26_bool == 0) goto Label_2218; // 0x8a4 JumpB
	var_30_bool = 0; var_31_object = Obj(); var_32_float = 0; // 0x8a5 PushV
	var_31_object = var_17_object; // 0x8a6 Mov
	var_32_float = -0.15; // 0x8a7 MovF
	func_1989(var_30_bool, var_31_object, var_32_float); // 0x8a8 NEW_2
	
Label_2218:
	func_2150(); // 0x8ab NEW_2
	var_88_object = Obj(); // 0x8ad PushV
	var_88_object = var_17_object; // 0x8ae Mov
	TaskCall(4); // 0x8af TaskCall
	func_1151(var_88_object); // 0x8b0 NEW_2
	TaskReturn(); // 0x8b1 TaskReturn
	return 2; // 0x8b3 Return
}


func_1174(var_89_object)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_string = ""; var_95_object = Obj(); var_96_bool = 0; var_97_bool = 0; var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_string = ""; var_105_object = Obj(); var_106_bool = 0; var_107_bool = 0; var_108_float = 0; var_109_cvector = CVector(0,0,0); // 0x496 PushV
	var_110_bool = var_89_object == 0; // 0x497 NullEq
	if(var_110_bool == 0) goto Label_1182; // 0x498 JumpB
	var_111_string = ""; // 0x499 PushV
	var_111_string = "fdie"; // 0x49a MovS
	func_1265(var_111_string); // 0x49b NEW_2
	goto Label_1264; // 0x49d Jump
	
Label_1264:
	return 20; // 0x4f0 Return
	
Label_1182:
	GetPosition(var_100_cvector); // 0x49e ObjFunc
	GetPosition(var_101_cvector); // 0x4a0 Func
	GetDirection(var_102_cvector); // 0x4a2 Func
	var_103_cvector = var_101_cvector - var_100_cvector; // 0x4a4 Sub2
	var_143_float = GetByIndex(var_103_cvector, 0); // 0x4a5 PushE
	var_144_float = GetByIndex(var_102_cvector, 0); // 0x4a6 PushE
	var_145_float = var_143_float * var_144_float; // 0x4a7 Mult
	var_146_float = GetByIndex(var_103_cvector, 2); // 0x4a8 PushE
	var_147_float = GetByIndex(var_102_cvector, 2); // 0x4a9 PushE
	var_148_float = var_146_float * var_147_float; // 0x4aa Mult
	var_149_int = var_145_float + var_148_float; // 0x4ab Add
	var_150_int = 0; // 0x4ac PushI
	var_151_bool = var_149_int >= var_150_int; // 0x4ad GE
	if(var_151_bool == 0) goto Label_1201; // 0x4ae JumpB
	var_104_string = "fdie"; // 0x4af MovS
	goto Label_1202; // 0x4b0 Jump
	
Label_1202:
	RemoveRTEnvelope(); // 0x4b2 Func
	SetDeathState(); // 0x4b4 Func
	Stop(); // 0x4b6 Func
	StopAsync(); // 0x4b8 Func
	var_105_object = var_89_object; // 0x4ba Mov
	var_152_string = "GetScriptProperty"; // 0x4bb PushS
	var_153_int = 2; // 0x4bc PushI
	var_154_bool = IsFuncExist(var_89_object, var_152_string, var_153_int); // 0x4bd FuncExist
	if(var_154_bool == 0) goto Label_1226; // 0x4be JumpB
	var_155_string = "Owner"; // 0x4bf PushS
	HasScriptProperty(var_106_bool, var_155_string); // 0x4c0 ObjFunc
	var_156_bool = var_106_bool; // 0x4c2 Push
	if(var_156_bool == 0) goto Label_1226; // 0x4c3 JumpB
	var_157_string = "Owner"; // 0x4c4 PushS
	GetScriptProperty(var_105_object, var_157_string); // 0x4c5 ObjFunc
	var_158_bool = var_105_object == 0; // 0x4c7 NullEq
	if(var_158_bool == 0) goto Label_1226; // 0x4c8 JumpB
	var_105_object = var_89_object; // 0x4c9 Mov
	
Label_1226:
	var_159_string = "@GetEyesHeight"; // 0x4ca PushS
	var_160_int = 1; // 0x4cb PushI
	var_161_bool = IsFuncExist(var_105_object, var_159_string, var_160_int); // 0x4cc FuncExist
	if(var_161_bool == 0) goto Label_1241; // 0x4cd JumpB
	GetEyesHeight(var_108_float); // 0x4ce ObjFunc
	var_109_cvector = CVector(0.0, 0.0, 0.0); // 0x4d0 MovV
	var_162_float = GetByIndex(var_109_cvector, 1); // 0x4d1 PushE
	var_162_float = var_108_float; // 0x4d2 Mov
	SetByIndex(var_109_cvector, 1) = var_162_float; // 0x4d3 PopE
	var_163_string = "head"; // 0x4d4 PushS
	LookAsync(var_89_object, var_163_string, var_109_cvector); // 0x4d5 Func
	var_107_bool = 1; // 0x4d7 MovB
	goto Label_1242; // 0x4d8 Jump
	
Label_1242:
	var_164_string = ""; // 0x4da PushV
	var_164_string = var_104_string; // 0x4db Mov
	func_1910(var_164_string); // 0x4dc NEW_2
	var_165_string = "all"; // 0x4de PushS
	PlayAnimation(var_165_string, var_104_string); // 0x4df Func
	WaitForAnimEnd(); // 0x4e1 Func
	var_166_bool = var_107_bool; // 0x4e3 Push
	if(var_166_bool == 0) goto Label_1258; // 0x4e4 JumpB
	StopAsync(); // 0x4e5 Func
	var_167_string = "head"; // 0x4e7 PushS
	UnlookAsync(var_167_string); // 0x4e8 Func
	
Label_1258:
	var_168_string = "all"; // 0x4ea PushS
	LockAnimationEnd(var_168_string, var_104_string); // 0x4eb Func
	RemoveEnvelope(); // 0x4ed Func
	var_105_object = 0; // 0x4ef SetNull
	
Label_1241:
	var_107_bool = 0; // 0x4d9 MovB
	
Label_1201:
	var_104_string = "bdie"; // 0x4b1 MovS
}


func_1433()
{
	StopGroup0(); // 0x599 Func
	Stop(); // 0x59b Func
	return 0; // 0x59d Return
}


func_1438()
{
	return 0; // 0x59e Return
}


func_1951(var_84_object)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0x79f PushV
	self(var_86_object); // 0x7a0 Func
	var_84_object = var_86_object; // 0x7a2 Mov
	return 2; // 0x7a3 Return
}


func_1439(var_429_string, var_430_int)
{
	var_431_int = 2; // 0x5a0 PushI
	var_432_bool = var_430_int == var_431_int; // 0x5a1 Eq
	if(var_432_bool == 0) goto Label_1446; // 0x5a2 JumpB
	var_429_string = "fire"; // 0x5a3 MovS
	return 0; // 0x5a4 Return
	
Label_1446:
	var_433_int = 1; // 0x5a6 PushI
	var_434_bool = var_430_int == var_433_int; // 0x5a7 Eq
	if(var_434_bool == 0) goto Label_1451; // 0x5a8 JumpB
	var_429_string = "bullet"; // 0x5a9 MovS
	return 0; // 0x5aa Return
	
Label_1451:
	var_429_string = "phys"; // 0x5ab MovS
	return 0; // 0x5ac Return
}


func_673(var_492_bool, var_493_float)
{
	var_494_float = 0; var_495_bool = 0; var_496_float = 0; var_497_bool = 0; // 0x2a1 PushV
	rand(var_496_float); // 0x2a2 Func
	var_498_bool = var_496_float < var_493_float; // 0x2a4 LT
	if(var_498_bool == 0) goto Label_693; // 0x2a5 JumpB
	
Label_678:
	IsAnimationPlaying(var_497_bool); // 0x2a6 Func
	var_499_bool = var_497_bool == 0; // 0x2a8 Not
	if(var_499_bool == 0) goto Label_683; // 0x2a9 JumpB
	goto Label_692; // 0x2aa Jump
	
Label_692:
	goto Label_698; // 0x2b4 Jump
	
Label_698:
	var_492_bool = 0; // 0x2ba MovB
	return 4; // 0x2bb Return
	
Label_683:
	var_500_bool = 0; // 0x2ab PushV
	func_771(var_500_bool); // 0x2ac NEW_2
	if(var_500_bool == 0) goto Label_689; // 0x2ae JumpB
	var_492_bool = 1; // 0x2af MovB
	return 4; // 0x2b0 Return
	
Label_689:
	sync(); // 0x2b1 Func
	goto Label_678; // 0x2b3 Jump
	
Label_693:
	WaitForAnimEnd(); // 0x2b5 Func
	func_875(var_497_bool); // 0x2b8 NEW_2
}


func_1957(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0; // 0x7a5 PushV
	var_58_int = var_49_cvector | var_49_cvector; // 0x7a6 Or
	var_57_float = sqrt(var_58_int); // 0x7a7 Sqrt2
	var_59_float = 0.0; // 0x7a8 PushF
	var_60_bool = var_57_float < var_59_float; // 0x7a9 LT
	if(var_60_bool == 0) goto Label_1965; // 0x7aa JumpB
	var_48_cvector = CVector(0.0, 0.0, 0.0); // 0x7ab MovV
	return 2; // 0x7ac Return
	
Label_1965:
	var_48_cvector = var_49_cvector / var_49_cvector; // 0x7ad Div2
	return 2; // 0x7ae Return
}


func_1453(var_50_cvector)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x5ad PushV
	GetPosition(var_54_cvector); // 0x5ae Func
	GetPosition(var_55_cvector); // 0x5b0 ObjFunc
	var_50_cvector = var_55_cvector - var_54_cvector; // 0x5b2 Sub2
	return 4; // 0x5b3 Return
}


func_1967(var_30_float, var_31_cvector, var_32_cvector)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); // 0x7af PushV
	var_34_cvector = var_32_cvector - var_31_cvector; // 0x7b0 Sub2
	var_30_float = var_34_cvector | var_34_cvector; // 0x7b1 Or2
	return 2; // 0x7b2 Return
}


func_1971(var_439_float, var_440_float, var_441_float)
{
	var_444_bool = var_440_float < var_441_float; // 0x7b4 LT
	if(var_444_bool == 0) goto Label_1976; // 0x7b5 JumpB
	var_439_float = var_440_float; // 0x7b6 Mov
	goto Label_1977; // 0x7b7 Jump
	
Label_1977:
	return 0; // 0x7b9 Return
	
Label_1976:
	var_439_float = var_441_float; // 0x7b8 Mov
}


func_1460(var_26_bool, var_27_object)
{
	var_28_bool = 0; var_29_bool = 0; // 0x5b4 PushV
	IsPlayerActor(var_27_object, var_29_bool); // 0x5b5 Func
	var_26_bool = var_29_bool; // 0x5b7 Mov
	return 2; // 0x5b8 Return
}


func_1465(var_49_bool, var_50_object, var_51_string)
{
	var_52_bool = 0; var_53_bool = 0; // 0x5b9 PushV
	var_54_string = "HasProperty"; // 0x5ba PushS
	var_55_int = 2; // 0x5bb PushI
	var_56_bool = IsFuncExist(var_50_object, var_54_string, var_55_int); // 0x5bc FuncExist
	var_57_bool = var_56_bool == 0; // 0x5bd Not
	if(var_57_bool == 0) goto Label_1473; // 0x5be JumpB
	var_49_bool = 0; // 0x5bf MovB
	return 2; // 0x5c0 Return
	
Label_1473:
	HasProperty(var_51_string, var_53_bool); // 0x5c1 ObjFunc
	var_49_bool = var_53_bool; // 0x5c3 Mov
	return 2; // 0x5c4 Return
}


func_1978(var_59_float, var_60_float, var_61_float, var_62_float)
{
	var_63_bool = var_60_float < var_61_float; // 0x7bb LT
	if(var_63_bool == 0) goto Label_1983; // 0x7bc JumpB
	var_59_float = var_61_float; // 0x7bd Mov
	return 0; // 0x7be Return
	
Label_1983:
	var_64_bool = var_60_float > var_62_float; // 0x7bf GT
	if(var_64_bool == 0) goto Label_1987; // 0x7c0 JumpB
	var_59_float = var_62_float; // 0x7c1 Mov
	return 0; // 0x7c2 Return
	
Label_1987:
	var_59_float = var_60_float; // 0x7c3 Mov
	return 0; // 0x7c4 Return
}


func_700(var_0_object, var_289_bool, var_290_float)
{
	var_291_bool = 0; var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; // 0x2bc PushV
	
Label_701:
	IsAnimationPlaying(var_296_bool); // 0x2bd Func
	var_301_bool = var_296_bool == 0; // 0x2bf Not
	if(var_301_bool == 0) goto Label_706; // 0x2c0 JumpB
	goto Label_738; // 0x2c1 Jump
	
Label_738:
	func_875(var_300_float); // 0x2e3 NEW_2
	var_289_bool = 0; // 0x2e5 MovB
	return 10; // 0x2e6 Return
	
Label_706:
	var_302_bool = 0; // 0x2c2 PushV
	func_771(var_302_bool); // 0x2c3 NEW_2
	if(var_302_bool == 0) goto Label_712; // 0x2c5 JumpB
	var_289_bool = 1; // 0x2c6 MovB
	return 10; // 0x2c7 Return
	
Label_712:
	var_345_bool = 0; var_346_object = Obj(); // 0x2c8 PushV
	var_346_object = var_0_object; // 0x2c9 MovT
	func_1613(var_345_bool, var_346_object); // 0x2ca NEW_2
	var_347_bool = var_345_bool == 0; // 0x2cc Not
	if(var_347_bool == 0) goto Label_720; // 0x2cd JumpB
	var_289_bool = 0; // 0x2ce MovB
	return 10; // 0x2cf Return
	
Label_720:
	GetPFPosition(var_297_cvector); // 0x2d0 TObjFunc
	GetPFPosition(var_298_cvector); // 0x2d2 Func
	var_299_cvector = var_297_cvector - var_298_cvector; // 0x2d4 Sub2
	var_300_float = var_299_cvector | var_299_cvector; // 0x2d5 Or2
	var_348_float = var_290_float * var_290_float; // 0x2d6 Mult
	var_349_bool = var_300_float < var_348_float; // 0x2d7 LT
	if(var_349_bool == 0) goto Label_735; // 0x2d8 JumpB
	var_350_bool = 0; var_351_float = 0; // 0x2d9 PushV
	var_351_float = var_290_float; // 0x2da Mov
	func_536(var_300_float, var_350_bool, var_351_float); // 0x2db NEW_2
	var_289_bool = 1; // 0x2dd MovB
	return 10; // 0x2de Return
	
Label_735:
	sync(); // 0x2df Func
	goto Label_701; // 0x2e1 Jump
}


func_958(var_2_object)
{
	var_17_int = 1; // 0x3be PushI
	KillTimer(var_17_int); // 0x3bf Func
	var_18_object = var_2_object; // 0x3c1 PushT
	if(var_18_object == 0) goto Label_967; // 0x3c2 JumpB
	var_2_object = 0; // 0x3c3 TMovB
	var_19_string = "head"; // 0x3c4 PushS
	UnlookAsync(var_19_string); // 0x3c5 Func
	
Label_967:
	func_1124(var_16_cvector); // 0x3c8 NEW_2
	return 0; // 0x3ca Return
}


func_1477(var_41_bool, var_42_object, var_43_string, var_44_float, var_45_float, var_46_float)
{
	var_47_float = 0; var_48_float = 0; // 0x5c5 PushV
	var_49_bool = 0; var_50_object = Obj(); var_51_string = ""; // 0x5c6 PushV
	var_50_object = var_42_object; // 0x5c7 Mov
	var_51_string = var_43_string; // 0x5c8 Mov
	func_1465(var_49_bool, var_50_object, var_51_string); // 0x5c9 NEW_2
	var_58_bool = var_49_bool == 0; // 0x5cb Not
	if(var_58_bool == 0) goto Label_1487; // 0x5cc JumpB
	var_41_bool = 0; // 0x5cd MovB
	return 2; // 0x5ce Return
	
Label_1487:
	GetProperty(var_43_string, var_48_float); // 0x5cf ObjFunc
	var_59_float = 0; var_60_float = 0; var_61_float = 0; var_62_float = 0; // 0x5d1 PushV
	var_60_float = var_48_float + var_44_float; // 0x5d2 Add2
	var_61_float = var_45_float; // 0x5d3 Mov
	var_62_float = var_46_float; // 0x5d4 Mov
	func_1978(var_59_float, var_60_float, var_61_float, var_62_float); // 0x5d5 NEW_2
	SetProperty(var_43_string, var_59_float); // 0x5d7 ObjFunc
	var_41_bool = 1; // 0x5d9 MovB
	return 2; // 0x5da Return
}


func_1989(var_30_bool, var_31_object, var_32_float)
{
	var_33_bool = var_31_object == 0; // 0x7c6 Not
	if(var_33_bool == 0) goto Label_1994; // 0x7c7 JumpB
	var_30_bool = 0; // 0x7c8 MovB
	return 0; // 0x7c9 Return
	
Label_1994:
	var_34_int = 0; // 0x7ca PushI
	var_35_bool = var_32_float > var_34_int; // 0x7cb GT
	if(var_35_bool == 0) goto Label_2001; // 0x7cc JumpB
	var_36_int = 8; // 0x7cd PushI
	SendWorldWndMessage(var_36_int); // 0x7ce Func
	goto Label_2010; // 0x7d0 Jump
	
Label_2010:
	var_37_float = 0; // 0x7da PushV
	var_37_float = var_32_float; // 0x7db Mov
	func_2041(var_37_float); // 0x7dc NEW_2
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; var_44_float = 0; var_45_float = 0; var_46_float = 0; // 0x7de PushV
	var_42_object = var_31_object; // 0x7df Mov
	var_43_string = "reputation"; // 0x7e0 MovS
	var_44_float = var_32_float; // 0x7e1 Mov
	var_45_float = 0; // 0x7e2 MovI
	var_46_float = 1; // 0x7e3 MovI
	func_1477(var_41_bool, var_42_object, var_43_string, var_44_float, var_45_float, var_46_float); // 0x7e4 NEW_2
	var_30_bool = 1; // 0x7e6 MovB
	return 0; // 0x7e7 Return
	
Label_2001:
	var_65_int = 0; // 0x7d1 PushI
	var_66_bool = var_32_float < var_65_int; // 0x7d2 LT
	if(var_66_bool == 0) goto Label_2008; // 0x7d3 JumpB
	var_67_int = 9; // 0x7d4 PushI
	SendWorldWndMessage(var_67_int); // 0x7d5 Func
	goto Label_2010; // 0x7d7 Jump
	
Label_2008:
	var_30_bool = 0; // 0x7d8 MovB
	return 0; // 0x7d9 Return
}


func_462(var_1_object, var_2_object, var_4_bool)
{
	var_54_bool = 0; var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); // 0x1ce PushV
	var_1_object = 0; // 0x1cf TMovI
	
Label_464:
	var_60_string = "all"; // 0x1d0 PushS
	var_61_string = "attack_begin"; // 0x1d1 PushS
	var_62_int = 1; // 0x1d2 PushI
	var_63_int = var_1_object + var_62_int; // 0x1d3 Add
	var_64_int = var_61_string + var_63_int; // 0x1d4 Add
	HasAnimation(var_57_bool, var_60_string, var_64_int); // 0x1d5 Func
	var_65_bool = var_57_bool == 0; // 0x1d7 Not
	if(var_65_bool == 0) goto Label_474; // 0x1d8 JumpB
	goto Label_477; // 0x1d9 Jump
	
Label_477:
	var_2_object = 0; // 0x1dd TMovI
	
Label_478:
	var_66_string = "attack"; // 0x1de PushS
	var_67_int = 1; // 0x1df PushI
	var_68_int = var_2_object + var_67_int; // 0x1e0 Add
	var_69_int = var_66_string + var_68_int; // 0x1e1 Add
	IsExisting3DSound(var_58_bool, var_69_int); // 0x1e2 Func
	var_70_bool = var_58_bool == 0; // 0x1e4 Not
	if(var_70_bool == 0) goto Label_487; // 0x1e5 JumpB
	goto Label_490; // 0x1e6 Jump
	
Label_490:
	var_71_string = "all"; // 0x1ea PushS
	var_72_string = "bjump"; // 0x1eb PushS
	GetAnimationOffset(var_59_cvector, var_71_string, var_72_string); // 0x1ec Func
	var_73_float = GetByIndex(var_59_cvector, 2); // 0x1ee PushE
	var_4_bool = -var_73_float; // 0x1ef Neg2
	return 6; // 0x1f0 Return
	
Label_487:
	var_74_int = 1; // 0x1e7 PushI
	var_2_object = var_2_object + var_74_int; // 0x1e8 Add2
	goto Label_478; // 0x1e9 Jump
	
Label_474:
	var_75_int = 1; // 0x1da PushI
	var_1_object = var_1_object + var_75_int; // 0x1db Add2
	goto Label_464; // 0x1dc Jump
}


func_212()
{
	var_25_object = Obj(); var_26_object = Obj(); // 0xd4 PushV
	var_27_string = "player"; // 0xd5 PushS
	FindActor(var_26_object, var_27_string); // 0xd6 Func
	var_28_bool = var_26_object == 0; // 0xd8 Not
	if(var_28_bool == 0) goto Label_219; // 0xd9 JumpB
	return 2; // 0xda Return
	
Label_219:
	var_29_object = Obj(); var_30_bool = 0; var_31_float = 0; // 0xdb PushV
	var_29_object = var_26_object; // 0xdc Mov
	var_30_bool = 1; // 0xdd MovB
	var_31_float = 180.0; // 0xde MovF
	func_233(var_22_bool, var_23_float, var_24_int, var_25_object, var_26_object, var_29_object, var_30_bool, var_31_float); // 0xdf NEW_2
	return 2; // 0xe1 Return
}


func_1749(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); // 0x6d5 PushV
	GetScene(var_29_object); // 0x6d6 Func
	var_31_string = "scripted"; // 0x6d8 PushS
	var_32_string = "blood_dir.xml"; // 0x6d9 PushS
	AddActorByType(var_30_object, var_31_string, var_29_object, var_25_cvector, var_26_cvector, var_32_string); // 0x6da Func
	var_33_object = Obj(); // 0x6dc PushV
	var_33_object = var_22_object; // 0x6dd Mov
	func_1637(var_33_object); // 0x6de NEW_2
	return 4; // 0x6e0 Return
}


func_2265(var_80_int)
{
	var_80_int = 515572; // 0x8d9 MovI
	return 0; // 0x8da Return
}


func_2267(var_79_int)
{
	var_79_int = 504031; // 0x8db MovI
	return 0; // 0x8dc Return
}


func_1499(var_401_float, var_402_object, var_403_float, var_404_int)
{
	var_408_int = 0; var_409_string = ""; var_410_int = 0; var_411_float = 0; var_412_float = 0; var_413_float = 0; var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; // 0x5db PushV
	var_420_bool = 0; var_421_object = Obj(); var_422_string = ""; // 0x5dc PushV
	var_421_object = var_402_object; // 0x5dd Mov
	var_422_string = "health"; // 0x5de MovS
	func_1465(var_420_bool, var_421_object, var_422_string); // 0x5df NEW_2
	var_423_bool = var_420_bool == 0; // 0x5e1 Not
	if(var_423_bool == 0) goto Label_1509; // 0x5e2 JumpB
	var_401_float = 0.0; // 0x5e3 MovF
	return 12; // 0x5e4 Return
	
Label_1509:
	var_424_bool = 0; var_425_object = Obj(); var_426_string = ""; // 0x5e5 PushV
	var_425_object = var_402_object; // 0x5e6 Mov
	var_426_string = "armor"; // 0x5e7 MovS
	func_1465(var_424_bool, var_425_object, var_426_string); // 0x5e8 NEW_2
	var_427_bool = var_424_bool == 0; // 0x5ea Not
	if(var_427_bool == 0) goto Label_1518; // 0x5eb JumpB
	var_414_int = 0; // 0x5ec MovI
	goto Label_1521; // 0x5ed Jump
	
Label_1521:
	var_428_string = "armor_"; // 0x5f1 PushS
	var_429_string = ""; var_430_int = 0; // 0x5f2 PushV
	var_430_int = var_404_int; // 0x5f3 Mov
	func_1439(var_429_string, var_430_int); // 0x5f4 NEW_2
	var_415_string = var_428_string + var_429_string; // 0x5f6 Add2
	var_435_bool = 0; var_436_object = Obj(); var_437_string = ""; // 0x5f7 PushV
	var_436_object = var_402_object; // 0x5f8 Mov
	var_437_string = var_415_string; // 0x5f9 Mov
	func_1465(var_435_bool, var_436_object, var_437_string); // 0x5fa NEW_2
	var_438_bool = var_435_bool == 0; // 0x5fc Not
	if(var_438_bool == 0) goto Label_1536; // 0x5fd JumpB
	var_416_int = 0; // 0x5fe MovI
	goto Label_1538; // 0x5ff Jump
	
Label_1538:
	var_439_float = 0; var_440_float = 0; var_441_float = 0; // 0x602 PushV
	var_442_int = var_414_int + var_416_int; // 0x603 Add
	var_443_float = 100.0; // 0x604 PushF
	var_440_float = var_442_int / var_442_int; // 0x605 Div2
	var_441_float = 1; // 0x606 MovI
	func_1971(var_439_float, var_440_float, var_441_float); // 0x607 NEW_2
	var_417_float = var_439_float; // 0x608 Mov
	var_445_string = "health"; // 0x60a PushS
	GetProperty(var_445_string, var_418_float); // 0x60b ObjFunc
	var_446_int = 1; // 0x60d PushI
	var_447_int = var_446_int - var_417_float; // 0x60e Sub
	var_419_float = var_403_float * var_447_int; // 0x60f Mult2
	var_448_string = "health"; // 0x610 PushS
	var_449_float = 0; var_450_float = 0; var_451_float = 0; var_452_float = 0; // 0x611 PushV
	var_450_float = var_418_float - var_419_float; // 0x612 Sub2
	var_451_float = 0; // 0x613 MovI
	var_452_float = 1; // 0x614 MovI
	func_1978(var_449_float, var_450_float, var_451_float, var_452_float); // 0x615 NEW_2
	SetProperty(var_448_string, var_449_float); // 0x617 ObjFunc
	var_455_bool = 0; var_456_object = Obj(); // 0x619 PushV
	var_456_object = var_402_object; // 0x61a Mov
	func_1460(var_455_bool, var_456_object); // 0x61b NEW_2
	if(var_455_bool == 0) goto Label_1570; // 0x61d JumpB
	var_457_float = 0; // 0x61e PushV
	var_457_float = -var_419_float; // 0x61f Neg2
	func_2024(var_457_float); // 0x620 NEW_2
	
Label_1570:
	var_401_float = var_419_float; // 0x622 Mov
	return 12; // 0x623 Return
	
Label_1536:
	GetProperty(var_415_string, var_416_int); // 0x600 ObjFunc
	
Label_1518:
	var_465_string = "armor"; // 0x5ee PushS
	GetProperty(var_465_string, var_414_int); // 0x5ef ObjFunc
}


func_2269(var_81_string)
{
	var_81_string = "ui/NPC_Citizen2.png"; // 0x8dd MovS
	return 0; // 0x8de Return
}


func_2271(var_82_string)
{
	var_82_string = "ui/NPC_Citizen2_b.png"; // 0x8df MovS
	return 0; // 0x8e0 Return
}


func_2273(var_74_bool)
{
	var_74_bool = 0; // 0x8e1 MovB
	return 0; // 0x8e2 Return
}


func_1763()
{
	var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); // 0x6e3 PushV
	GetPosition(var_239_cvector); // 0x6e4 ObjFunc
	GetPosition(var_240_cvector); // 0x6e6 Func
	var_241_cvector = var_239_cvector - var_240_cvector; // 0x6e8 Sub2
	var_242_float = GetByIndex(var_241_cvector, 0); // 0x6e9 PushE
	var_243_float = GetByIndex(var_241_cvector, 2); // 0x6ea PushE
	RotateAsync(var_242_float, var_243_float); // 0x6eb Func
	return 6; // 0x6ed Return
}


func_227(var_398_float)
{
	var_398_float = 0.3; // 0xe4 MovF
	return 0; // 0xe5 Return
}


func_230(var_405_int)
{
	var_405_int = 0; // 0xe7 MovI
	return 0; // 0xe8 Return
}


func_743(var_0_object, var_304_bool)
{
	var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_float = 0; var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0; // 0x2e7 PushV
	var_315_bool = 0; var_316_object = Obj(); // 0x2e8 PushV
	var_316_object = var_0_object; // 0x2e9 MovT
	func_1613(var_315_bool, var_316_object); // 0x2ea NEW_2
	var_317_bool = var_315_bool == 0; // 0x2ec Not
	if(var_317_bool == 0) goto Label_752; // 0x2ed JumpB
	var_304_bool = 0; // 0x2ee MovB
	return 10; // 0x2ef Return
	
Label_752:
	var_318_bool = 0; // 0x2f0 PushV
	func_832(var_314_float, var_318_bool); // 0x2f1 NEW_2
	if(var_318_bool == 0) goto Label_769; // 0x2f3 JumpB
	GetPFPosition(var_310_cvector); // 0x2f4 TObjFunc
	GetPFPosition(var_311_cvector); // 0x2f6 Func
	var_312_cvector = var_310_cvector - var_311_cvector; // 0x2f8 Sub2
	var_313_float = var_312_cvector | var_312_cvector; // 0x2f9 Or2
	GetAttackDistance(var_314_float); // 0x2fa TObjFunc
	var_319_int = 50; // 0x2fc PushI
	var_314_float = var_314_float + var_319_int; // 0x2fd Add2
	var_320_float = var_314_float * var_314_float; // 0x2fe Mult
	var_304_bool = var_313_float <= var_320_float; // 0x2ff LE2
	return 10; // 0x300 Return
	
Label_769:
	var_304_bool = 0; // 0x301 MovB
	return 10; // 0x302 Return
}


func_1000(var_0_object, var_1_object, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool)
{
	var_167_bool = 0; var_168_bool = 0; var_169_object = Obj(); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_object = Obj(); var_175_bool = 0; var_176_bool = 0; var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_object = Obj(); // 0x3e8 PushV
	var_0_object = 0; // 0x3e9 TMovB
	var_1_object = var_162_object; // 0x3ea TMov
	var_176_bool = var_166_bool; // 0x3eb Mov
	
Label_1004:
	var_183_bool = 0; var_184_object = Obj(); // 0x3ec PushV
	var_184_object = var_162_object; // 0x3ed Mov
	func_1140(var_183_bool, var_184_object); // 0x3ee NEW_2
	var_187_bool = var_183_bool == 0; // 0x3f0 Not
	if(var_187_bool == 0) goto Label_1012; // 0x3f1 JumpB
	var_161_bool = 0; // 0x3f2 MovB
	return 16; // 0x3f3 Return
	
Label_1012:
	GetPosition(var_178_cvector); // 0x3f4 ObjFunc
	GetPosition(var_179_cvector); // 0x3f6 Func
	var_180_cvector = var_178_cvector - var_179_cvector; // 0x3f8 Sub2
	var_181_float = var_180_cvector | var_180_cvector; // 0x3f9 Or2
	var_188_bool = 0; // 0x3fa PushV
	var_188_bool = 0; // 0x3fb MovB
	var_189_int = 0; // 0x3fc PushI
	var_190_bool = var_164_float > var_189_int; // 0x3fd GT
	if(var_190_bool == 0) goto Label_1027; // 0x3fe JumpB
	var_191_float = var_164_float * var_164_float; // 0x3ff Mult
	var_192_bool = var_181_float > var_191_float; // 0x400 GT
	if(var_192_bool == 0) goto Label_1027; // 0x401 JumpB
	var_188_bool = 1; // 0x402 MovB
	
Label_1027:
	if(var_188_bool == 0) goto Label_1032; // 0x403 JumpB
	Stop(); // 0x404 Func
	var_161_bool = 0; // 0x406 MovB
	return 16; // 0x407 Return
	
Label_1032:
	var_193_float = var_163_float * var_163_float; // 0x408 Mult
	var_194_bool = var_181_float > var_193_float; // 0x409 GT
	if(var_194_bool == 0) goto Label_1094; // 0x40a JumpB
	GetPFPosition(var_178_cvector); // 0x40b ObjFunc
	FindPathTo(var_182_object, var_178_cvector); // 0x40d Func
	var_195_bool = var_182_object != 0; // 0x40f NullNeq
	if(var_195_bool == 0) goto Label_1043; // 0x410 JumpB
	var_177_object = var_182_object; // 0x411 Mov
	var_182_object = 0; // 0x412 SetNull
	
Label_1043:
	var_196_bool = var_177_object != 0; // 0x413 NullNeq
	if(var_196_bool == 0) goto Label_1076; // 0x414 JumpB
	var_197_bool = var_176_bool; // 0x415 Push
	if(var_197_bool == 0) goto Label_1053; // 0x416 JumpB
	var_176_bool = 0; // 0x417 MovB
	RotatePath(var_177_object, var_175_bool); // 0x418 Func
	var_198_bool = var_175_bool == 0; // 0x41a Not
	if(var_198_bool == 0) goto Label_1053; // 0x41b JumpB
	goto Label_1100; // 0x41c Jump
	
Label_1100:
	var_161_bool = !var_0_object; // 0x44c Not2
	return 16; // 0x44d Return
	
Label_1053:
	var_199_int = 0; // 0x41d PushI
	var_200_float = 0.3; // 0x41e PushF
	SetTimer(var_199_int, var_200_float); // 0x41f Func
	var_201_string = ""; // 0x421 PushV
	func_1147(var_201_string); // 0x422 NEW_2
	var_202_string = ""; // 0x424 PushV
	func_1149(var_202_string); // 0x425 NEW_2
	FollowPath(var_177_object, var_165_bool, var_175_bool, var_201_string, var_202_string); // 0x427 Func
	var_203_bool = var_175_bool == 0; // 0x429 Not
	if(var_203_bool == 0) goto Label_1074; // 0x42a JumpB
	var_204_object = var_0_object; // 0x42b PushT
	if(var_204_object == 0) goto Label_1072; // 0x42c JumpB
	var_177_object = 0; // 0x42d SetNull
	goto Label_1100; // 0x42e Jump
	
Label_1072:
	goto Label_1099; // 0x430 Jump
	
Label_1099:
	goto Label_1004; // 0x44b Jump
	
Label_1074:
	var_177_object = 0; // 0x432 SetNull
	goto Label_1092; // 0x433 Jump
	
Label_1092:
	var_182_object = 0; // 0x444 SetNull
	goto Label_1098; // 0x445 Jump
	
Label_1098:
	var_177_object = 0; // 0x44a SetNull
	
Label_1076:
	var_205_int = 0; // 0x434 PushI
	KillTimer(var_205_int); // 0x435 Func
	var_206_float = 0.5; // 0x437 PushF
	Sleep(var_206_float, var_175_bool); // 0x438 Func
	var_207_bool = var_175_bool == 0; // 0x43a Not
	if(var_207_bool == 0) goto Label_1088; // 0x43b JumpB
	var_208_object = var_0_object; // 0x43c PushT
	if(var_208_object == 0) goto Label_1088; // 0x43d JumpB
	var_177_object = 0; // 0x43e SetNull
	goto Label_1100; // 0x43f Jump
	
Label_1088:
	var_209_int = 0; // 0x440 PushI
	var_210_float = 0.3; // 0x441 PushF
	SetTimer(var_209_int, var_210_float); // 0x442 Func
	
Label_1094:
	var_211_int = 0; // 0x446 PushI
	KillTimer(var_211_int); // 0x447 Func
	goto Label_1100; // 0x449 Jump
}


func_233(var_0_object, var_3_string, var_5_object, var_29_object, var_30_bool, var_31_float, var_138_bool, var_230_bool)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_float = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_float = 0; // 0xe9 PushV
	func_462(var_51_cvector, var_52_bool, var_53_float); // 0xeb NEW_2
	var_5_object = 0; // 0xed TMovI
	var_76_string = "@GetAttackDistance"; // 0xee PushS
	var_77_int = 1; // 0xef PushI
	var_78_bool = IsFuncExist(var_29_object, var_76_string, var_77_int); // 0xf0 FuncExist
	if(var_78_bool == 0) goto Label_247; // 0xf1 JumpB
	GetAttackDistance(var_43_float); // 0xf2 ObjFunc
	var_79_int = 50; // 0xf4 PushI
	var_43_float = var_43_float + var_79_int; // 0xf5 Add2
	goto Label_248; // 0xf6 Jump
	
Label_248:
	var_80_int = 150; // 0xf8 PushI
	var_81_bool = var_43_float >= var_80_int; // 0xf9 GE
	if(var_81_bool == 0) goto Label_252; // 0xfa JumpB
	var_43_float = 150; // 0xfb MovI
	
Label_252:
	var_3_string = 0; // 0xfc TMovB
	var_0_object = var_29_object; // 0xfd TMov
	IsPlayerActor(var_0_object, var_46_bool); // 0xfe Func
	var_82_bool = var_46_bool; // 0x100 Push
	if(var_82_bool == 0) goto Label_266; // 0x101 JumpB
	var_83_string = "attack"; // 0x102 PushS
	PlayGlobalMusic(var_83_string); // 0x103 Func
	var_84_object = Obj(); // 0x105 PushV
	func_1951(var_84_object); // 0x106 NEW_2
	SendPlayerEnemy(var_29_object, var_84_object); // 0x108 Func
	
Label_266:
	var_87_bool = var_30_bool; // 0x10a Push
	if(var_87_bool == 0) goto Label_270; // 0x10b JumpB
	var_47_bool = 0; // 0x10c MovB
	goto Label_271; // 0x10d Jump
	
Label_271:
	var_88_float = 400.0; // 0x10f PushF
	var_48_float = var_88_float + var_43_float; // 0x110 Add2
	
Label_273:
	var_89_bool = 0; // 0x111 PushV
	var_89_bool = 0; // 0x112 MovB
	var_90_bool = 0; var_91_object = Obj(); // 0x113 PushV
	var_91_object = var_0_object; // 0x114 MovT
	func_1613(var_90_bool, var_91_object); // 0x115 NEW_2
	if(var_90_bool == 0) goto Label_283; // 0x117 JumpB
	var_124_bool = var_3_string == 0; // 0x118 Not
	if(var_124_bool == 0) goto Label_283; // 0x119 JumpB
	var_89_bool = 1; // 0x11a MovB
	
Label_283:
	if(var_89_bool == 0) goto Label_445; // 0x11b JumpB
	func_875(var_53_float); // 0x11d NEW_2
	GetPFPosition(var_44_cvector); // 0x11f TObjFunc
	GetPFPosition(var_45_cvector); // 0x121 Func
	var_49_cvector = var_44_cvector - var_45_cvector; // 0x123 Sub2
	var_50_float = var_49_cvector | var_49_cvector; // 0x124 Or2
	var_130_float = var_48_float * var_48_float; // 0x125 Mult
	var_131_bool = var_50_float >= var_130_float; // 0x126 GE
	if(var_131_bool == 0) goto Label_311; // 0x127 JumpB
	var_132_bool = 0; var_133_object = Obj(); var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_bool = 0; // 0x128 PushV
	var_133_object = var_0_object; // 0x129 MovT
	var_134_float = var_43_float; // 0x12a Mov
	var_135_float = 10000.0; // 0x12b MovF
	var_136_bool = 1; // 0x12c MovB
	var_137_bool = 0; // 0x12d MovB
	TaskCall(3); // 0x12e TaskCall
	func_895(var_140_bool, var_132_bool, var_133_object, var_134_float, var_135_float, var_136_bool, var_137_bool); // 0x12f NEW_2
	TaskReturn(); // 0x130 TaskReturn
	var_215_bool = var_138_bool == 0; // 0x132 Not
	if(var_215_bool == 0) goto Label_309; // 0x133 JumpB
	goto Label_445; // 0x134 Jump
	
Label_445:
	WaitForAnimEnd(); // 0x1bd Func
	var_216_string = var_3_string; // 0x1bf PushT
	if(var_216_string == 0) goto Label_450; // 0x1c0 JumpB
	return 22; // 0x1c1 Return
	
Label_450:
	var_217_string = "all"; // 0x1c2 PushS
	var_218_string = "attack_off"; // 0x1c3 PushS
	PlayAnimation(var_217_string, var_218_string); // 0x1c4 Func
	WaitForAnimEnd(); // 0x1c6 Func
	var_219_bool = var_46_bool; // 0x1c8 Push
	if(var_219_bool == 0) goto Label_461; // 0x1c9 JumpB
	var_220_float = 2.0; // 0x1ca PushF
	Sleep(var_220_float); // 0x1cb Func
	
Label_461:
	return 22; // 0x1cd Return
	
Label_309:
	var_47_bool = 0; // 0x135 MovB
	goto Label_444; // 0x136 Jump
	
Label_444:
	goto Label_273; // 0x1bc Jump
	
Label_311:
	var_221_float = var_31_float * var_31_float; // 0x137 Mult
	var_222_bool = var_50_float >= var_221_float; // 0x138 GE
	if(var_222_bool == 0) goto Label_436; // 0x139 JumpB
	GetPFPosition(var_51_cvector); // 0x13a TObjFunc
	CanReachByPF(var_52_bool, var_51_cvector); // 0x13c Func
	var_223_bool = var_52_bool == 0; // 0x13e Not
	if(var_223_bool == 0) goto Label_335; // 0x13f JumpB
	var_224_bool = 0; var_225_object = Obj(); var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_bool = 0; // 0x140 PushV
	var_225_object = var_0_object; // 0x141 MovT
	var_226_float = var_43_float; // 0x142 Mov
	var_227_float = 10000.0; // 0x143 MovF
	var_228_bool = 1; // 0x144 MovB
	var_229_bool = 0; // 0x145 MovB
	TaskCall(3); // 0x146 TaskCall
	func_895(var_232_bool, var_224_bool, var_225_object, var_226_float, var_227_float, var_228_bool, var_229_bool); // 0x147 NEW_2
	TaskReturn(); // 0x148 TaskReturn
	var_233_bool = var_230_bool == 0; // 0x14a Not
	if(var_233_bool == 0) goto Label_333; // 0x14b JumpB
	goto Label_445; // 0x14c Jump
	
Label_333:
	var_47_bool = 0; // 0x14d MovB
	goto Label_273; // 0x14e Jump
	
Label_335:
	var_234_bool = var_47_bool == 0; // 0x14f Not
	if(var_234_bool == 0) goto Label_360; // 0x150 JumpB
	var_235_object = Obj(); // 0x151 PushV
	var_235_object = var_0_object; // 0x152 MovT
	func_1763(); // 0x153 NEW_2
	var_244_string = "all"; // 0x155 PushS
	var_245_string = "attack_on"; // 0x156 PushS
	PlayAnimation(var_244_string, var_245_string); // 0x157 Func
	WaitForAnimEnd(); // 0x159 Func
	func_875(var_53_float); // 0x15c NEW_2
	StopAsync(); // 0x15e Func
	var_47_bool = 1; // 0x160 MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x161 PushV
	var_247_object = var_0_object; // 0x162 MovT
	func_1613(var_246_bool, var_247_object); // 0x163 NEW_2
	var_248_bool = var_246_bool == 0; // 0x165 Not
	if(var_248_bool == 0) goto Label_360; // 0x166 JumpB
	goto Label_445; // 0x167 Jump
	
Label_360:
	rand(var_53_float); // 0x168 Func
	var_249_bool = 0; // 0x16a PushV
	var_249_bool = 1; // 0x16b MovB
	var_250_float = 0.25; // 0x16c PushF
	var_251_bool = var_53_float < var_250_float; // 0x16d LT
	if(var_251_bool == 0) goto Label_372; // 0x16e JumpB
	var_252_bool = 0; // 0x16f PushV
	func_832(var_249_bool, var_252_bool); // 0x170 NEW_2
	if(var_252_bool == 0) goto Label_372; // 0x172 JumpB
	var_249_bool = 0; // 0x173 MovB
	
Label_372:
	if(var_249_bool == 0) goto Label_389; // 0x174 JumpB
	Face(var_0_object); // 0x175 Func
	func_882(); // 0x178 NEW_2
	var_287_string = "all"; // 0x17a PushS
	var_288_string = "attack_stay"; // 0x17b PushS
	PlayAnimation(var_287_string, var_288_string); // 0x17c Func
	var_289_bool = 0; var_290_float = 0; // 0x17e PushV
	var_290_float = var_31_float; // 0x17f Mov
	func_700(var_53_float, var_289_bool, var_290_float); // 0x180 NEW_2
	StopAsync(); // 0x182 Func
	goto Label_435; // 0x184 Jump
	
Label_435:
	goto Label_444; // 0x1b3 Jump
	
Label_389:
	Face(var_0_object); // 0x185 Func
	var_508_string = "all"; // 0x187 PushS
	var_509_string = "fjump"; // 0x188 PushS
	PlayAnimation(var_508_string, var_509_string); // 0x189 Func
	WaitForAnimEnd(); // 0x18b Func
	func_875(var_53_float); // 0x18e NEW_2
	var_510_cvector = CVector(0.0, 0.0, 0.0); // 0x190 PushVec
	SetSpeed(var_510_cvector); // 0x191 Func
	Stop(); // 0x193 Func
	StopAsync(); // 0x195 Func
	var_511_bool = 0; // 0x197 PushV
	func_832(var_53_float, var_511_bool); // 0x198 NEW_2
	var_512_bool = var_511_bool == 0; // 0x19a Not
	if(var_512_bool == 0) goto Label_435; // 0x19b JumpB
	var_513_bool = 0; var_514_object = Obj(); // 0x19c PushV
	var_514_object = var_0_object; // 0x19d MovT
	func_1613(var_513_bool, var_514_object); // 0x19e NEW_2
	var_515_bool = var_513_bool == 0; // 0x1a0 Not
	if(var_515_bool == 0) goto Label_419; // 0x1a1 JumpB
	goto Label_445; // 0x1a2 Jump
	
Label_419:
	GetPFPosition(var_44_cvector); // 0x1a3 TObjFunc
	GetPFPosition(var_45_cvector); // 0x1a5 Func
	var_49_cvector = var_44_cvector - var_45_cvector; // 0x1a7 Sub2
	var_50_float = var_49_cvector | var_49_cvector; // 0x1a8 Or2
	var_516_float = var_31_float * var_31_float; // 0x1a9 Mult
	var_517_bool = var_50_float < var_516_float; // 0x1aa LT
	if(var_517_bool == 0) goto Label_435; // 0x1ab JumpB
	var_518_bool = 0; var_519_float = 0; // 0x1ac PushV
	var_519_float = var_31_float; // 0x1ad Mov
	func_536(var_53_float, var_518_bool, var_519_float); // 0x1ae NEW_2
	var_520_bool = var_518_bool == 0; // 0x1b0 Not
	if(var_520_bool == 0) goto Label_435; // 0x1b1 JumpB
	goto Label_445; // 0x1b2 Jump
	
Label_436:
	var_521_bool = 0; var_522_float = 0; // 0x1b4 PushV
	var_522_float = var_31_float; // 0x1b5 Mov
	func_536(var_53_float, var_521_bool, var_522_float); // 0x1b6 NEW_2
	var_523_bool = var_521_bool == 0; // 0x1b8 Not
	if(var_523_bool == 0) goto Label_443; // 0x1b9 JumpB
	goto Label_445; // 0x1ba Jump
	
Label_443:
	var_47_bool = 1; // 0x1bb MovB
	
Label_270:
	var_47_bool = 1; // 0x10e MovB
	
Label_247:
	var_43_float = var_31_float; // 0xf7 Mov
}


func_2024(var_457_float)
{
	var_458_object = Obj(); var_459_object = Obj(); // 0x7e8 PushV
	CreateFloatVector(var_459_object); // 0x7e9 Func
	add(var_457_float); // 0x7eb ObjFunc
	var_460_int = 0; // 0x7ed PushI
	var_461_bool = var_457_float < var_460_int; // 0x7ee LT
	if(var_461_bool == 0) goto Label_2036; // 0x7ef JumpB
	var_462_float = 0.7; // 0x7f0 PushF
	var_463_int = 500; // 0x7f1 PushI
	RumblePlay(var_462_float, var_463_int); // 0x7f2 Func
	
Label_2036:
	var_464_int = 15; // 0x7f4 PushI
	SendWorldWndMessage(var_464_int, var_459_object); // 0x7f5 Func
	return 2; // 0x7f7 Return
}


func_1774(var_31_bool, var_33_float)
{
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0; // 0x6ee PushV
	GetPosition(var_44_cvector); // 0x6ef ObjFunc
	GetEyesHeight(var_43_float); // 0x6f1 ObjFunc
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x6f3 PushE
	var_52_float = var_52_float + var_43_float; // 0x6f4 Add2
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x6f5 PopE
	GetPosition(var_45_cvector); // 0x6f6 Func
	GetEyesHeight(var_43_float); // 0x6f8 Func
	var_53_float = GetByIndex(var_45_cvector, 1); // 0x6fa PushE
	var_53_float = var_53_float + var_43_float; // 0x6fb Add2
	SetByIndex(var_45_cvector, 1) = var_53_float; // 0x6fc PopE
	var_46_cvector = var_44_cvector - var_45_cvector; // 0x6fd Sub2
	var_54_float = GetByIndex(var_46_cvector, 1); // 0x6fe PushE
	var_54_float = 0; // 0x6ff MovI
	SetByIndex(var_46_cvector, 1) = var_54_float; // 0x700 PopE
	var_55_int = var_46_cvector | var_46_cvector; // 0x701 Or
	var_56_float = sqrt(var_55_int); // 0x702 Sqrt
	var_46_cvector = var_46_cvector / var_46_cvector; // 0x703 Div2
	var_47_cvector = -var_46_cvector; // 0x704 Neg2
	var_57_float = var_46_cvector * var_33_float; // 0x705 Mult
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0x706 PushV
	var_60_cvector = CVector(0.0, 1.0, 0.0); // 0x707 PushVec
	var_59_cvector = var_47_cvector ^ var_60_cvector; // 0x708 Xor2
	func_1957(var_58_cvector, var_59_cvector); // 0x709 NEW_2
	var_66_int = 25; // 0x70b PushI
	var_67_float = var_58_cvector * var_66_int; // 0x70c Mult
	var_68_int = var_57_float + var_67_float; // 0x70d Add
	var_69_cvector = CVector(0.0, 10.0, 0.0); // 0x70e PushVec
	var_48_cvector = var_68_int - var_69_cvector; // 0x70f Sub2
	var_49_cvector = var_45_cvector + var_48_cvector; // 0x710 Add2
	IsOverrideActive(var_50_bool); // 0x711 Func
	var_70_bool = var_50_bool; // 0x713 Push
	if(var_70_bool == 0) goto Label_1815; // 0x714 JumpB
	var_31_bool = 0; // 0x715 MovB
	return 18; // 0x716 Return
	
Label_1815:
	StopWorld(); // 0x717 Func
	var_71_bool = 1; // 0x719 PushB
	CameraTransit(var_49_cvector, var_47_cvector, var_71_bool); // 0x71a Func
	var_72_float = GetByIndex(var_48_cvector, 0); // 0x71c PushE
	var_73_float = GetByIndex(var_48_cvector, 2); // 0x71d PushE
	Rotate(var_72_float, var_73_float); // 0x71e Func
	var_74_bool = 0; // 0x720 PushV
	func_2273(var_74_bool); // 0x721 NEW_2
	if(var_74_bool == 0) goto Label_1829; // 0x723 JumpB
	goto Label_1837; // 0x724 Jump
	
Label_1837:
	CameraWaitForPlayFinish(); // 0x72d Func
	ResumeWorld(); // 0x72f Func
	var_31_bool = 1; // 0x731 MovB
	return 18; // 0x732 Return
	
Label_1829:
	var_75_string = "head"; // 0x725 PushS
	HasAnimationTrack(var_51_bool, var_75_string); // 0x726 Func
	var_76_bool = var_51_bool; // 0x728 Push
	if(var_76_bool == 0) goto Label_1837; // 0x729 JumpB
	var_77_string = "head"; // 0x72a PushS
	LookAsyncCamera(var_77_string); // 0x72b Func
}


func_1265(var_111_string)
{
	RemoveRTEnvelope(); // 0x4f2 Func
	SetDeathState(); // 0x4f4 Func
	Stop(); // 0x4f6 Func
	StopAsync(); // 0x4f8 Func
	StopSecondaryAnimation(); // 0x4fa Func
	var_112_string = ""; // 0x4fc PushV
	var_112_string = var_111_string; // 0x4fd Mov
	func_1910(var_112_string); // 0x4fe NEW_2
	var_141_string = "all"; // 0x500 PushS
	PlayAnimation(var_141_string, var_111_string); // 0x501 Func
	WaitForAnimEnd(); // 0x503 Func
	var_142_string = "all"; // 0x505 PushS
	LockAnimationEnd(var_142_string, var_111_string); // 0x506 Func
	RemoveEnvelope(); // 0x508 Func
	return 0; // 0x50a Return
}


func_497(var_0_object, var_387_float, var_388_int)
{
	var_389_object = Obj(); var_390_float = 0; var_391_float = 0; var_392_object = Obj(); var_393_float = 0; var_394_float = 0; // 0x1f1 PushV
	var_395_float = 0.9; // 0x1f2 PushF
	var_396_float = var_387_float * var_395_float; // 0x1f3 Mult
	GetVictim(var_396_float, var_392_object); // 0x1f4 Func
	ReportAttack(var_0_object); // 0x1f6 Func
	var_397_bool = var_392_object == var_0_object; // 0x1f8 Eq
	if(var_397_bool == 0) goto Label_534; // 0x1f9 JumpB
	var_398_float = 0; var_399_object = Obj(); var_400_int = 0; // 0x1fa PushV
	var_399_object = var_392_object; // 0x1fb Mov
	var_400_int = var_388_int; // 0x1fc Mov
	func_227(var_400_int); // 0x1fd NEW_2
	var_393_float = var_398_float; // 0x1fe Mov
	var_401_float = 0; var_402_object = Obj(); var_403_float = 0; var_404_int = 0; // 0x200 PushV
	var_402_object = var_392_object; // 0x201 Mov
	var_403_float = var_393_float; // 0x202 Mov
	var_405_int = 0; var_406_object = Obj(); var_407_int = 0; // 0x203 PushV
	var_406_object = var_392_object; // 0x204 Mov
	var_407_int = var_388_int; // 0x205 Mov
	func_230(var_407_int); // 0x206 NEW_2
	var_404_int = var_405_int; // 0x207 Mov
	func_1499(var_401_float, var_402_object, var_403_float, var_404_int); // 0x209 NEW_2
	var_394_float = var_401_float; // 0x20a Mov
	var_466_int = 0; // 0x20c PushV
	func_880(var_466_int); // 0x20d NEW_2
	ReportHit(var_0_object, var_466_int, var_394_float, var_393_float); // 0x20f Func
	var_467_object = Obj(); var_468_float = 0; // 0x211 PushV
	var_467_object = var_392_object; // 0x212 Mov
	var_468_float = var_394_float; // 0x213 Mov
	func_887(); // 0x214 NEW_2
	
Label_534:
	return 6; // 0x216 Return
}


func_2041(var_37_float)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x7f9 PushV
	CreateFloatVector(var_39_object); // 0x7fa Func
	add(var_37_float); // 0x7fc ObjFunc
	var_40_int = 16; // 0x7fe PushI
	SendWorldWndMessage(var_40_int, var_39_object); // 0x7ff Func
	return 2; // 0x801 Return
}


