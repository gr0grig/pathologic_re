task_0_event_0(var_0_string, var_1_int, var_2_int, var_3_int, var_4_int, var_5_float, var_6_bool)
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; // 0x4b PushV
	var_11_string = "default"; // 0x4c PushS
	GetTextWidth(var_9_int, var_11_string, var_0_string, var_11_string); // 0x4d Func
	var_12_int = 1; // 0x4f PushI
	var_13_int = var_2_int - var_12_int; // 0x50 Sub
	var_14_bool = var_9_int > var_13_int; // 0x51 GT
	if(var_14_bool == 0) goto Label_87; // 0x52 JumpB
	var_15_int = var_9_int - var_2_int; // 0x53 Sub
	var_16_int = 1; // 0x54 PushI
	var_10_int = var_15_int + var_16_int; // 0x55 Add2
	goto Label_88; // 0x56 Jump
	
Label_88:
	var_17_string = "default"; // 0x58 PushS
	var_18_int = -var_10_int; // 0x59 Neg
	var_19_int = 0; // 0x5a PushI
	Print(var_17_string, var_18_int, var_19_int, var_0_string); // 0x5b Func
	var_20_bool = 0; // 0x5d PushV
	var_20_bool = 0; // 0x5e MovB
	var_21_float = sin(var_5_float); // 0x5f Sin
	var_22_float = 0.5; // 0x60 PushF
	var_23_bool = var_21_float > var_22_float; // 0x61 GT
	if(var_23_bool == 0) goto Label_102; // 0x62 JumpB
	var_24_bool = var_6_bool; // 0x63 PushT
	if(var_24_bool == 0) goto Label_102; // 0x64 JumpB
	var_20_bool = 1; // 0x65 MovB
	
Label_102:
	if(var_20_bool == 0) goto Label_108; // 0x66 JumpB
	var_25_string = "text_cursor"; // 0x67 PushS
	var_26_int = var_9_int - var_10_int; // 0x68 Sub
	var_27_int = 0; // 0x69 PushI
	Blit(var_25_string, var_26_int, var_27_int); // 0x6a Func
	
Label_108:
	return 4; // 0x6c Return
	
Label_87:
	var_10_int = 0; // 0x57 MovI
}


task_0_event_1(var_0_string, var_1_int, var_2_int, var_3_int, var_4_int, var_5_float, var_6_bool, var_7_float)
{
	var_8_float = 3.1415; // 0x6e PushF
	var_9_float = var_7_float * var_8_float; // 0x6f Mult
	var_5_float = var_5_float + var_9_float; // 0x70 Add2
	var_10_float = 3.1415; // 0x71 PushF
	var_11_bool = var_5_float > var_10_float; // 0x72 GT
	if(var_11_bool == 0) goto Label_118; // 0x73 JumpB
	var_12_float = 3.1415; // 0x74 PushF
	var_5_float = var_5_float - var_12_float; // 0x75 Sub2
	
Label_118:
	return 0; // 0x76 Return
}


task_0_event_100(var_0_string, var_1_int, var_2_int, var_3_int, var_4_int, var_5_float, var_6_bool, var_7_int)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x77 PushV
	var_10_int = 8; // 0x78 PushI
	var_11_bool = var_7_int == var_10_int; // 0x79 Eq
	if(var_11_bool == 0) goto Label_124; // 0x7a JumpB
	return 2; // 0x7b Return
	
Label_124:
	var_12_int = 13; // 0x7c PushI
	var_13_bool = var_7_int == var_12_int; // 0x7d Eq
	if(var_13_bool == 0) goto Label_136; // 0x7e JumpB
	CreateStringVector(var_9_object); // 0x7f Func
	add(var_0_string); // 0x81 ObjFunc
	var_14_int = 0; // 0x83 PushI
	SendMessageToParent(var_14_int, var_9_object); // 0x84 Func
	return 2; // 0x86 Return
	
Label_136:
	var_15_int = 0; // 0x88 PushV
	var_15_int = var_7_int; // 0x89 Mov
	func_41(var_8_object, var_9_object, var_15_int); // 0x8a NEW_2
	return 2; // 0x8c Return
}


task_0_event_101(var_0_string, var_1_int, var_2_int, var_3_int, var_4_int, var_5_float, var_6_bool, var_7_int)
{
	var_8_int = 37; // 0x8e PushI
	var_9_bool = var_7_int == var_8_int; // 0x8f Eq
	if(var_9_bool == 0) goto Label_149; // 0x90 JumpB
	func_25(var_7_int); // 0x92 NEW_2
	goto Label_176; // 0x94 Jump
	
Label_176:
	return 0; // 0xb0 Return
	
Label_149:
	var_13_int = 39; // 0x95 PushI
	var_14_bool = var_7_int == var_13_int; // 0x96 Eq
	if(var_14_bool == 0) goto Label_156; // 0x97 JumpB
	func_32(var_6_bool, var_7_int); // 0x99 NEW_2
	goto Label_176; // 0x9b Jump
	
Label_156:
	var_19_int = 35; // 0x9c PushI
	var_20_bool = var_7_int == var_19_int; // 0x9d Eq
	if(var_20_bool == 0) goto Label_163; // 0x9e JumpB
	func_20(var_6_bool, var_7_int); // 0xa0 NEW_2
	goto Label_176; // 0xa2 Jump
	
Label_163:
	var_21_int = 36; // 0xa3 PushI
	var_22_bool = var_7_int == var_21_int; // 0xa4 Eq
	if(var_22_bool == 0) goto Label_170; // 0xa5 JumpB
	func_23(var_7_int); // 0xa7 NEW_2
	goto Label_176; // 0xa9 Jump
	
Label_170:
	var_23_int = 8; // 0xaa PushI
	var_24_bool = var_7_int == var_23_int; // 0xab Eq
	if(var_24_bool == 0) goto Label_176; // 0xac JumpB
	func_59(var_6_bool, var_7_int); // 0xae NEW_2
}


task_0_event_2(var_0_string, var_1_int, var_2_int, var_3_int, var_4_int, var_5_float, var_6_bool, var_7_int, var_8_int)
{
	var_9_bool = var_6_bool == 0; // 0xb2 Not
	if(var_9_bool == 0) goto Label_182; // 0xb3 JumpB
	CaptureKeyboard(); // 0xb4 Func
	
Label_182:
	var_6_bool = 1; // 0xb6 TMovB
	return 0; // 0xb7 Return
}


main(var_0_string, var_1_int, var_2_int, var_3_int, var_4_int, var_5_float, var_6_bool)
{
	GetWindowSize(var_5_float, var_4_int); // 0x0 Func
	var_6_bool = 0; // 0x2 TMovB
	func_20(var_5_float, var_6_bool); // 0x4 NEW_2
	var_7_string = "default"; // 0x6 PushS
	SetBackground(var_7_string); // 0x7 Func
	var_8_bool = 1; // 0x9 PushB
	SetNeedUpdate(var_8_bool); // 0xa Func
	var_9_bool = 1; // 0xc PushB
	SetOwnerDraw(var_9_bool); // 0xd Func
	EnableClipping(); // 0xf Func
	ProcessEvents(); // 0x11 Func
	return 0; // 0x13 Return
}


func_32(var_0_string, var_1_int)
{
	var_15_int = 0; var_16_int = 0; // 0x20 PushV
	var_17_int = 1; // 0x21 PushI
	var_1_int = var_1_int + var_17_int; // 0x22 Add2
	_strlen(var_16_int, var_0_string); // 0x23 Func
	var_18_bool = var_1_int > var_16_int; // 0x25 GT
	if(var_18_bool == 0) goto Label_40; // 0x26 JumpB
	var_1_int = var_16_int; // 0x27 TMov
	
Label_40:
	return 2; // 0x28 Return
}


func_41(var_0_string, var_1_int, var_15_int)
{
	var_16_string = ""; var_17_string = ""; var_18_string = ""; var_19_string = ""; var_20_string = ""; var_21_string = ""; // 0x29 PushV
	var_22_bool = 0; var_23_int = 0; // 0x2a PushV
	var_23_int = var_15_int; // 0x2b Mov
	func_184(var_22_bool, var_23_int); // 0x2c NEW_2
	if(var_22_bool == 0) goto Label_48; // 0x2e JumpB
	return 6; // 0x2f Return
	
Label_48:
	var_19_string = NEW1(var_15_int); // 0x30 NEW_1
	var_27_int = 0; // 0x31 PushI
	_strsub(var_20_string, var_0_string, var_27_int, var_27_int); // 0x32 Func
	_strsub(var_21_string, var_0_string, var_21_string); // 0x34 Func
	var_20_string = var_20_string + var_19_string; // 0x36 Add2
	var_0_string = var_20_string + var_21_string; // 0x37 Add2
	var_28_int = 1; // 0x38 PushI
	var_1_int = var_1_int + var_28_int; // 0x39 Add2
	return 6; // 0x3a Return
}


func_20(var_0_string, var_6_bool)
{
	_strlen(var_6_bool, var_0_string); // 0x14 Func
	return 0; // 0x16 Return
}


func_23(var_1_int)
{
	var_1_int = 0; // 0x17 TMovI
	return 0; // 0x18 Return
}


func_184(var_22_bool, var_23_int)
{
	var_24_bool = 0; var_25_bool = 0; // 0xb8 PushV
	var_26_string = "default"; // 0xb9 PushS
	FontHasCharacterGlyph(var_25_bool, var_26_string, var_23_int); // 0xba Func
	var_22_bool = !var_25_bool; // 0xbc Not2
	return 2; // 0xbd Return
}


func_25(var_1_int)
{
	var_10_int = -1; // 0x19 PushI
	var_1_int = var_1_int + var_10_int; // 0x1a Add2
	var_11_int = 0; // 0x1b PushI
	var_12_bool = var_1_int < var_11_int; // 0x1c LT
	if(var_12_bool == 0) goto Label_31; // 0x1d JumpB
	var_1_int = 0; // 0x1e TMovI
	
Label_31:
	return 0; // 0x1f Return
}


func_59(var_0_string, var_1_int)
{
	var_25_string = ""; var_26_string = ""; var_27_string = ""; var_28_string = ""; // 0x3b PushV
	var_29_int = 0; // 0x3c PushI
	var_30_bool = var_1_int == var_29_int; // 0x3d Eq
	if(var_30_bool == 0) goto Label_64; // 0x3e JumpB
	return 4; // 0x3f Return
	
Label_64:
	var_31_int = 0; // 0x40 PushI
	var_32_int = 1; // 0x41 PushI
	var_33_int = var_1_int - var_32_int; // 0x42 Sub
	_strsub(var_27_string, var_0_string, var_31_int, var_33_int); // 0x43 Func
	_strsub(var_28_string, var_0_string, var_28_string); // 0x45 Func
	var_0_string = var_27_string + var_28_string; // 0x47 Add2
	var_34_int = -1; // 0x48 PushI
	var_1_int = var_1_int + var_34_int; // 0x49 Add2
	return 4; // 0x4a Return
}


