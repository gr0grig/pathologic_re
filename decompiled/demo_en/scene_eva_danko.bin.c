task_0_event_5(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	var_4_bool = var_0_bool; // 0x1c PushT
	if(var_4_bool == 0) goto Label_41; // 0x1d JumpB
	var_5_object = Obj(); var_6_object = Obj(); var_7_string = ""; var_8_string = ""; var_9_string = ""; // 0x1e PushV
	var_10_object = Obj(); // 0x1f PushV
	func_150(var_10_object); // 0x20 NEW_2
	var_6_object = var_10_object; // 0x21 Mov
	var_7_string = "pt_eva"; // 0x23 MovS
	var_8_string = "NPC_Eva"; // 0x24 MovS
	var_9_string = "NPC_Danko_Eva.xml"; // 0x25 MovS
	func_167(var_5_object, var_6_object, var_7_string, var_8_string, var_9_string); // 0x26 NEW_2
	var_2_object = var_5_object; // 0x27 TMov
	
Label_41:
	var_26_bool = var_1_bool; // 0x29 PushT
	if(var_26_bool == 0) goto Label_54; // 0x2a JumpB
	var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = ""; // 0x2b PushV
	var_32_object = Obj(); // 0x2c PushV
	func_150(var_32_object); // 0x2d NEW_2
	var_28_object = var_32_object; // 0x2e Mov
	var_29_string = "pt_eva"; // 0x30 MovS
	var_30_string = "pers_nudegirl"; // 0x31 MovS
	var_31_string = "nudegirl_danko.xml"; // 0x32 MovS
	func_167(var_27_object, var_28_object, var_29_string, var_30_string, var_31_string); // 0x33 NEW_2
	var_3_object = var_27_object; // 0x34 TMov
	
Label_54:
	return 0; // 0x36 Return
}


task_0_event_9(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_float)
{
	var_6_float = 0; var_7_float = 0; var_8_float = 0; var_9_float = 0; var_10_float = 0; var_11_float = 0; // 0x37 PushV
	var_12_string = "OnGameTime"; // 0x38 PushS
	var_13_int = var_12_string + var_4_int; // 0x39 Add
	var_14_string = " "; // 0x3a PushS
	var_15_int = var_13_int + var_14_string; // 0x3b Add
	var_16_int = var_15_int + var_5_float; // 0x3c Add
	Trace(var_16_int); // 0x3d Func
	var_17_int = 1; // 0x3f PushI
	var_18_bool = var_4_int == var_17_int; // 0x40 Eq
	if(var_18_bool == 0) goto Label_69; // 0x41 JumpB
	var_0_bool = 0; // 0x42 TMovB
	var_1_bool = 1; // 0x43 TMovB
	goto Label_129; // 0x44 Jump
	
Label_129:
	return 6; // 0x81 Return
	
Label_69:
	var_19_int = 2; // 0x45 PushI
	var_20_bool = var_4_int == var_19_int; // 0x46 Eq
	if(var_20_bool == 0) goto Label_96; // 0x47 JumpB
	var_21_bool = var_2_object == 0; // 0x48 Not
	if(var_21_bool == 0) goto Label_86; // 0x49 JumpB
	var_22_int = 0; var_23_float = 0; // 0x4a PushV
	var_23_float = var_5_float; // 0x4b Mov
	func_185(var_22_int, var_23_float); // 0x4c NEW_2
	GetGameTime(var_9_float); // 0x4e Func
	var_31_int = 1; // 0x50 PushI
	var_9_float = var_9_float + var_31_int; // 0x51 Add2
	var_32_int = 4; // 0x52 PushI
	SetTimeEvent(var_32_int, var_9_float); // 0x53 Func
	goto Label_95; // 0x55 Jump
	
Label_95:
	goto Label_129; // 0x5f Jump
	
Label_86:
	GetGameTime(var_10_float); // 0x56 Func
	var_33_float = 0.3; // 0x58 PushF
	var_10_float = var_10_float + var_33_float; // 0x59 Add2
	var_34_int = 190; // 0x5a PushI
	var_35_bool = var_10_float < var_34_int; // 0x5b LT
	if(var_35_bool == 0) goto Label_95; // 0x5c JumpB
	SetTimeEvent(var_4_int, var_10_float); // 0x5d Func
	
Label_96:
	var_36_int = 3; // 0x60 PushI
	var_37_bool = var_4_int == var_36_int; // 0x61 Eq
	if(var_37_bool == 0) goto Label_122; // 0x62 JumpB
	var_38_bool = 0; // 0x63 PushV
	var_38_bool = 0; // 0x64 MovB
	var_39_bool = var_3_object == 0; // 0x65 Not
	if(var_39_bool == 0) goto Label_106; // 0x66 JumpB
	var_40_bool = var_2_object == 0; // 0x67 Not
	if(var_40_bool == 0) goto Label_106; // 0x68 JumpB
	var_38_bool = 1; // 0x69 MovB
	
Label_106:
	if(var_38_bool == 0) goto Label_112; // 0x6a JumpB
	var_41_object = Obj(); var_42_string = ""; // 0x6b PushV
	var_42_string = "quest_d8_02"; // 0x6c MovS
	func_156(var_41_object, var_42_string); // 0x6d NEW_2
	goto Label_121; // 0x6f Jump
	
Label_121:
	goto Label_129; // 0x79 Jump
	
Label_112:
	GetGameTime(var_11_float); // 0x70 Func
	var_49_float = 0.3; // 0x72 PushF
	var_11_float = var_11_float + var_49_float; // 0x73 Add2
	var_50_int = 189; // 0x74 PushI
	var_51_bool = var_11_float < var_50_int; // 0x75 LT
	if(var_51_bool == 0) goto Label_121; // 0x76 JumpB
	SetTimeEvent(var_4_int, var_11_float); // 0x77 Func
	
Label_122:
	var_52_int = 4; // 0x7a PushI
	var_53_bool = var_4_int == var_52_int; // 0x7b Eq
	if(var_53_bool == 0) goto Label_129; // 0x7c JumpB
	var_54_int = 0; var_55_float = 0; // 0x7d PushV
	var_55_float = var_5_float; // 0x7e Mov
	func_194(var_54_int, var_55_float); // 0x7f NEW_2
}


task_0_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	var_4_object = var_2_object; // 0x82 PushT
	if(var_4_object == 0) goto Label_134; // 0x83 JumpB
	RemoveActor(var_2_object); // 0x84 Func
	
Label_134:
	var_5_object = var_3_object; // 0x86 PushT
	if(var_5_object == 0) goto Label_138; // 0x87 JumpB
	RemoveActor(var_1_bool); // 0x88 Func
	
Label_138:
	return 0; // 0x8a Return
}


task_0_event_26(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string)
{
	var_5_string = "noeva"; // 0x8c PushS
	var_6_bool = var_4_string == var_5_string; // 0x8d Eq
	if(var_6_bool == 0) goto Label_145; // 0x8e JumpB
	var_0_bool = 0; // 0x8f TMovB
	goto Label_149; // 0x90 Jump
	
Label_149:
	return 0; // 0x95 Return
	
Label_145:
	var_7_string = "eva"; // 0x91 PushS
	var_8_bool = var_4_string == var_7_string; // 0x92 Eq
	if(var_8_bool == 0) goto Label_149; // 0x93 JumpB
	var_0_bool = 1; // 0x94 TMovB
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object)
{
	var_4_int = 1; // 0x0 PushI
	var_5_int = 151; // 0x1 PushI
	SetTimeEvent(var_4_int, var_5_int); // 0x2 Func
	var_6_int = 2; // 0x4 PushI
	var_7_float = 151.5; // 0x5 PushF
	SetTimeEvent(var_6_int, var_7_float); // 0x6 Func
	var_8_int = 3; // 0x8 PushI
	var_9_int = 180; // 0x9 PushI
	SetTimeEvent(var_8_int, var_9_int); // 0xa Func
	var_0_bool = 1; // 0xc TMovB
	var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = ""; // 0xd PushV
	var_15_object = Obj(); // 0xe PushV
	func_150(var_15_object); // 0xf NEW_2
	var_11_object = var_15_object; // 0x10 Mov
	var_12_string = "pt_eva"; // 0x12 MovS
	var_13_string = "NPC_Eva"; // 0x13 MovS
	var_14_string = "NPC_Danko_Eva.xml"; // 0x14 MovS
	func_167(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string); // 0x15 NEW_2
	var_2_object = var_10_object; // 0x16 TMov
	
Label_24:
	Hold(); // 0x18 Func
	goto Label_24; // 0x1a Jump
}


func_194(var_54_int, var_55_float)
{
	var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_float = 0; // 0xc3 PushV
	var_57_int = 533228; // 0xc4 MovI
	var_58_int = 533227; // 0xc5 MovI
	var_59_float = var_55_float; // 0xc6 Mov
	func_203(var_56_int, var_57_int, var_58_int, var_59_float); // 0xc7 NEW_2
	var_54_int = var_56_int; // 0xc8 Mov
	return 0; // 0xca Return
}


func_167(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string)
{
	var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); // 0xa7 PushV
	GetLocator(var_12_string, var_22_bool, var_23_cvector, var_24_cvector); // 0xa8 ObjFunc
	var_26_bool = var_22_bool == 0; // 0xaa Not
	if(var_26_bool == 0) goto Label_180; // 0xab JumpB
	var_27_string = "Locator "; // 0xac PushS
	var_28_int = var_27_string + var_12_string; // 0xad Add
	var_29_string = " doesn't exist"; // 0xae PushS
	var_30_int = var_28_int + var_29_string; // 0xaf Add
	Trace(var_30_int); // 0xb0 Func
	var_25_object = 0; // 0xb2 SetNull
	goto Label_182; // 0xb3 Jump
	
Label_182:
	var_10_object = var_25_object; // 0xb6 Mov
	return 8; // 0xb7 Return
	
Label_180:
	AddActor(var_25_object, var_13_string, var_11_object, var_23_cvector, var_24_cvector, var_14_string); // 0xb4 Func
}


func_203(var_24_int, var_25_int, var_26_int, var_27_float)
{
	var_28_int = 0; var_29_int = 0; // 0xcb PushV
	AddMessage(var_25_int, var_26_int, var_27_float, var_29_int); // 0xcc Func
	var_30_int = 6; // 0xce PushI
	SendWorldWndMessage(var_30_int); // 0xcf Func
	var_24_int = var_29_int; // 0xd1 Mov
	return 2; // 0xd2 Return
}


func_150(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x96 PushV
	self(var_17_object); // 0x97 Func
	var_15_object = var_17_object; // 0x99 Mov
	return 2; // 0x9a Return
}


func_185(var_22_int, var_23_float)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_float = 0; // 0xba PushV
	var_25_int = 533094; // 0xbb MovI
	var_26_int = 533093; // 0xbc MovI
	var_27_float = var_23_float; // 0xbd Mov
	func_203(var_24_int, var_25_int, var_26_int, var_27_float); // 0xbe NEW_2
	var_22_int = var_24_int; // 0xbf Mov
	return 0; // 0xc1 Return
}


func_156(var_41_object, var_42_string)
{
	var_43_object = Obj(); var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); // 0x9c PushV
	GetMainOutdoorScene(var_45_object); // 0x9d Func
	var_47_string = ".bin"; // 0x9f PushS
	var_48_int = var_42_string + var_47_string; // 0xa0 Add
	AddBlankActor(var_46_object, var_45_object, var_42_string, var_48_int); // 0xa1 Func
	var_41_object = var_46_object; // 0xa3 Mov
	return 4; // 0xa4 Return
}


