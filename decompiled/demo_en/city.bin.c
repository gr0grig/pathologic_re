task_0_event_9(var_0_int, var_1_float)
{
	var_2_int = 0; var_3_float = 0; // 0x53 PushV
	var_2_int = var_0_int; // 0x54 Mov
	var_3_float = var_1_float; // 0x55 Mov
	func_238(var_3_float); // 0x56 NEW_2
	return 0; // 0x58 Return
}


task_0_event_26(var_0_string)
{
	var_1_string = ""; // 0x5a PushV
	var_2_string = "scenes/"; // 0x5b PushS
	var_3_int = var_2_string + var_0_string; // 0x5c Add
	var_4_string = ".mot"; // 0x5d PushS
	var_1_string = var_3_int + var_4_string; // 0x5e Add2
	TaskCall(1); // 0x5f TaskCall
	func_117(var_1_string); // 0x60 NEW_2
	TaskReturn(); // 0x61 TaskReturn
	return 0; // 0x63 Return
}


task_0_event_1000(var_0_string, var_1_string)
{
	var_2_string = "play"; // 0x65 PushS
	var_3_bool = var_0_string == var_2_string; // 0x66 Eq
	if(var_3_bool == 0) goto Label_111; // 0x67 JumpB
	var_4_string = ""; // 0x68 PushV
	var_4_string = var_1_string; // 0x69 Mov
	TaskCall(1); // 0x6a TaskCall
	func_117(var_4_string); // 0x6b NEW_2
	TaskReturn(); // 0x6c TaskReturn
	goto Label_116; // 0x6e Jump
	
Label_116:
	return 0; // 0x74 Return
	
Label_111:
	var_12_string = ""; var_13_string = ""; // 0x6f PushV
	var_12_string = var_0_string; // 0x70 Mov
	var_13_string = var_1_string; // 0x71 Mov
	func_203(); // 0x72 NEW_2
}


task_1_event_9(var_0_int, var_1_float)
{
	var_2_int = 0; var_3_float = 0; // 0x8f PushV
	var_2_int = var_0_int; // 0x90 Mov
	var_3_float = var_1_float; // 0x91 Mov
	func_238(var_3_float); // 0x92 NEW_2
	return 0; // 0x94 Return
}


task_1_event_24(var_0_int)
{
	CameraSwitchToNormal(); // 0x96 Func
	return 0; // 0x98 Return
}


event_1000(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); // 0xcb PushV
	var_8_string = "horror"; // 0xcc PushS
	var_9_bool = var_0_string == var_8_string; // 0xcd Eq
	if(var_9_bool == 0) goto Label_237; // 0xce JumpB
	_strtoi(var_5_int, var_1_string); // 0xcf Func
	var_10_object = GlobalVars[6]; // 0xd1 PushGE
	size(var_6_int); // 0xd2 ObjFunc
	var_11_bool = 0; // 0xd4 PushV
	var_11_bool = 0; // 0xd5 MovB
	var_12_int = 0; // 0xd6 PushI
	var_13_bool = var_5_int >= var_12_int; // 0xd7 GE
	if(var_13_bool == 0) goto Label_220; // 0xd8 JumpB
	var_14_bool = var_5_int < var_6_int; // 0xd9 LT
	if(var_14_bool == 0) goto Label_220; // 0xda JumpB
	var_11_bool = 1; // 0xdb MovB
	
Label_220:
	if(var_11_bool == 0) goto Label_234; // 0xdc JumpB
	var_15_object = GlobalVars[6]; // 0xdd PushGE
	get(var_7_object, var_5_int); // 0xde ObjFunc
	var_16_object = Obj(); var_17_int = 0; // 0xe0 PushV
	var_16_object = var_7_object; // 0xe1 Mov
	var_17_int = 0; // 0xe2 MovB
	func_165(var_17_int); // 0xe3 NEW_2
	var_43_string = "Replaced"; // 0xe5 PushS
	Trace(var_43_string); // 0xe6 Func
	var_7_object = 0; // 0xe8 SetNull
	goto Label_237; // 0xe9 Jump
	
Label_237:
	return 6; // 0xed Return
	
Label_234:
	var_44_string = "Invalid region index"; // 0xea PushS
	Trace(var_44_string); // 0xeb Func
}


main()
{
	var_0_int = 0; var_1_int = 0; // 0x0 PushV
	var_2_object = GlobalVars[0]; // 0x1 PushGE
	var_3_object = Obj(); // 0x2 PushV
	func_153(var_3_object); // 0x3 NEW_2
	var_2_object = var_3_object; // 0x4 Mov
	GlobalVars[0] = var_2_object; // 0x6 PopGE
	var_6_object = GlobalVars[1]; // 0x7 PushGE
	var_7_object = Obj(); // 0x8 PushV
	func_153(var_7_object); // 0x9 NEW_2
	var_6_object = var_7_object; // 0xa Mov
	GlobalVars[1] = var_6_object; // 0xc PopGE
	var_8_object = GlobalVars[2]; // 0xd PushGE
	var_9_object = Obj(); // 0xe PushV
	func_153(var_9_object); // 0xf NEW_2
	var_8_object = var_9_object; // 0x10 Mov
	GlobalVars[2] = var_8_object; // 0x12 PopGE
	var_10_object = GlobalVars[3]; // 0x13 PushGE
	var_11_object = Obj(); // 0x14 PushV
	func_153(var_11_object); // 0x15 NEW_2
	var_10_object = var_11_object; // 0x16 Mov
	GlobalVars[3] = var_10_object; // 0x18 PopGE
	var_12_object = GlobalVars[4]; // 0x19 PushGE
	var_13_object = Obj(); // 0x1a PushV
	func_153(var_13_object); // 0x1b NEW_2
	var_12_object = var_13_object; // 0x1c Mov
	GlobalVars[4] = var_12_object; // 0x1e PopGE
	var_14_object = GlobalVars[5]; // 0x1f PushGE
	var_15_object = Obj(); // 0x20 PushV
	func_153(var_15_object); // 0x21 NEW_2
	var_14_object = var_15_object; // 0x22 Mov
	GlobalVars[5] = var_14_object; // 0x24 PopGE
	var_16_object = GlobalVars[6]; // 0x25 PushGE
	var_17_object = Obj(); // 0x26 PushV
	func_159(var_17_object); // 0x27 NEW_2
	var_16_object = var_17_object; // 0x28 Mov
	GlobalVars[6] = var_16_object; // 0x2a PopGE
	func_81(); // 0x2c NEW_2
	var_1_int = 0; // 0x2e MovI
	
Label_47:
	var_20_int = 16; // 0x2f PushI
	var_21_bool = var_1_int < var_20_int; // 0x30 LT
	if(var_21_bool == 0) goto Label_73; // 0x31 JumpB
	var_22_int = 2; // 0x32 PushI
	var_23_float = var_1_int * var_22_int; // 0x33 Mult
	var_24_int = 1; // 0x34 PushI
	var_25_int = var_23_float + var_24_int; // 0x35 Add
	var_26_int = 19; // 0x36 PushI
	var_27_int = 24; // 0x37 PushI
	var_28_float = var_1_int * var_27_int; // 0x38 Mult
	var_29_int = var_26_int + var_28_float; // 0x39 Add
	SetTimeEvent(var_25_int, var_29_int); // 0x3a Func
	var_30_int = 2; // 0x3c PushI
	var_31_float = var_1_int * var_30_int; // 0x3d Mult
	var_32_int = 2; // 0x3e PushI
	var_33_int = var_31_float + var_32_int; // 0x3f Add
	var_34_int = 10; // 0x40 PushI
	var_35_int = 24; // 0x41 PushI
	var_36_float = var_1_int * var_35_int; // 0x42 Mult
	var_37_int = var_34_int + var_36_float; // 0x43 Add
	SetTimeEvent(var_33_int, var_37_int); // 0x44 Func
	var_38_int = 1; // 0x46 PushI
	var_1_int = var_1_int + var_38_int; // 0x47 Add2
	goto Label_47; // 0x48 Jump
	
Label_73:
	var_39_bool = 0; // 0x49 PushV
	var_39_bool = 1; // 0x4a MovB
	func_245(var_39_bool); // 0x4b NEW_2
	
Label_77:
	Hold(); // 0x4d Func
	goto Label_77; // 0x4f Jump
}


func_165(var_17_int)
{
	var_18_int = 0; var_19_string = ""; var_20_int = 0; var_21_string = ""; var_22_string = ""; var_23_object = Obj(); var_24_int = 0; var_25_string = ""; var_26_int = 0; var_27_string = ""; var_28_string = ""; var_29_object = Obj(); // 0xa5 PushV
	size(var_24_int); // 0xa6 ObjFunc
	var_30_int = 1; // 0xa8 PushI
	var_31_bool = var_17_int == var_30_int; // 0xa9 Eq
	if(var_31_bool == 0) goto Label_173; // 0xaa JumpB
	var_25_string = "s_"; // 0xab MovS
	goto Label_177; // 0xac Jump
	
Label_177:
	var_26_int = 0; // 0xb1 MovI
	
Label_178:
	var_32_bool = var_26_int < var_24_int; // 0xb2 LT
	if(var_32_bool == 0) goto Label_202; // 0xb3 JumpB
	get(var_27_string, var_26_int); // 0xb4 ObjFunc
	var_33_int = var_25_string + var_27_string; // 0xb6 Add
	var_34_string = ".isc"; // 0xb7 PushS
	var_28_string = var_33_int + var_34_string; // 0xb8 Add2
	GetSceneByName(var_29_object, var_27_string); // 0xb9 Func
	var_35_bool = var_29_object == 0; // 0xbb Not
	if(var_35_bool == 0) goto Label_196; // 0xbc JumpB
	var_36_string = "City manager: can't replace indoor scene ""; // 0xbd PushS
	var_37_int = var_36_string + var_27_string; // 0xbe Add
	var_38_string = "" because it doesn't exist"; // 0xbf PushS
	var_39_int = var_37_int + var_38_string; // 0xc0 Add
	Trace(var_39_int); // 0xc1 Func
	goto Label_198; // 0xc3 Jump
	
Label_198:
	var_29_object = 0; // 0xc6 SetNull
	var_40_int = 1; // 0xc7 PushI
	var_26_int = var_26_int + var_40_int; // 0xc8 Add2
	goto Label_178; // 0xc9 Jump
	
Label_196:
	ReplaceScene(var_29_object, var_28_string); // 0xc4 Func
	
Label_202:
	return 12; // 0xca Return
	
Label_173:
	var_41_int = 2; // 0xad PushI
	var_42_bool = var_17_int == var_41_int; // 0xae Eq
	if(var_42_bool == 0) goto Label_177; // 0xaf JumpB
	var_25_string = "n_"; // 0xb0 MovS
}


func_238(var_2_int)
{
	var_4_bool = 0; // 0xef PushV
	var_5_int = 2; // 0xf0 PushI
	var_4_bool = var_2_int % var_5_int; // 0xf1 Mod2
	func_245(var_4_bool); // 0xf2 NEW_2
	return 0; // 0xf4 Return
}


func_81()
{
	return 0; // 0x51 Return
}


func_117(var_4_string)
{
	var_5_string = "playing: "; // 0x76 PushS
	var_6_int = var_5_string + var_4_string; // 0x77 Add
	Trace(var_6_int); // 0x78 Func
	var_7_string = "space"; // 0x7a PushS
	RegisterKeyCallback(var_7_string); // 0x7b Func
	var_8_string = "escape"; // 0x7d PushS
	RegisterKeyCallback(var_8_string); // 0x7e Func
	var_9_bool = 0; // 0x80 PushB
	CameraPlay(var_4_string, var_9_bool); // 0x81 Func
	CameraWaitForPlayFinish(); // 0x83 Func
	var_10_string = "escape"; // 0x85 PushS
	UnregisterKeyCallback(var_10_string); // 0x86 Func
	var_11_string = "space"; // 0x88 PushS
	UnregisterKeyCallback(var_11_string); // 0x89 Func
	CameraSwitchToNormal(); // 0x8b Func
	return 0; // 0x8d Return
}


func_245(var_39_bool)
{
	var_40_bool = var_39_bool; // 0xf6 Push
	if(var_40_bool == 0) goto Label_256; // 0xf7 JumpB
	var_41_string = "night time"; // 0xf8 PushS
	Trace(var_41_string); // 0xf9 Func
	var_42_int = 0; // 0xfb PushI
	var_43_bool = 1; // 0xfc PushB
	SwitchLights(var_42_int, var_43_bool); // 0xfd Func
	goto Label_263; // 0xff Jump
	
Label_263:
	return 0; // 0x107 Return
	
Label_256:
	var_44_string = "day time"; // 0x100 PushS
	Trace(var_44_string); // 0x101 Func
	var_45_int = 0; // 0x103 PushI
	var_46_bool = 0; // 0x104 PushB
	SwitchLights(var_45_int, var_46_bool); // 0x105 Func
}


func_153(var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x99 PushV
	CreateObjectSet(var_5_object); // 0x9a Func
	var_3_object = var_5_object; // 0x9c Mov
	return 2; // 0x9d Return
}


func_159(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x9f PushV
	CreateObjectVector(var_19_object); // 0xa0 Func
	var_17_object = var_19_object; // 0xa2 Mov
	return 2; // 0xa3 Return
}


