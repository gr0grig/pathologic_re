task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_string)
{
	var_5_bool = 0; var_6_bool = 0; // 0x5 PushV
	var_7_string = "put_item"; // 0x6 PushS
	var_8_bool = var_4_string == var_7_string; // 0x7 Eq
	if(var_8_bool == 0) goto Label_17; // 0x8 JumpB
	var_9_bool = var_3_bool == 0; // 0x9 Not
	if(var_9_bool == 0) goto Label_16; // 0xa JumpB
	var_10_string = "d3q01_blood"; // 0xb PushS
	var_11_int = 0; // 0xc PushI
	AddItem(var_6_bool, var_10_string, var_11_int); // 0xd Func
	var_3_bool = 1; // 0xf TMovB
	
Label_16:
	goto Label_21; // 0x10 Jump
	
Label_21:
	return 2; // 0x15 Return
	
Label_17:
	var_12_string = ""; // 0x11 PushV
	var_12_string = var_4_string; // 0x12 Mov
	func_104(var_6_bool, var_12_string); // 0x13 Call
}


task_0_event_0(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object)
{
	var_5_bool = 0; var_6_bool = 0; var_7_bool = 0; var_8_bool = 0; // 0x16 PushV
	var_9_bool = 0; // 0x17 PushV
	func_172(var_9_bool); // 0x18 Call
	var_13_bool = var_9_bool == 0; // 0x1a Not
	if(var_13_bool == 0) goto Label_29; // 0x1b JumpB
	return 4; // 0x1c Return
	
Label_29:
	IsOnGround(var_7_bool); // 0x1d ObjFunc
	var_14_bool = var_7_bool; // 0x1f Push
	if(var_14_bool == 0) goto Label_41; // 0x20 JumpB
	EventDisable(0); // 0x21 EventDisable
	IsOverrideActive(var_8_bool); // 0x22 Func
	var_15_bool = var_8_bool == 0; // 0x24 Not
	if(var_15_bool == 0) goto Label_40; // 0x25 JumpB
	Barter(var_4_object); // 0x26 Func
	
Label_40:
	EventEnable(0); // 0x28 EventEnable
	
Label_41:
	return 4; // 0x29 Return
}


task_0_event_32(var_0_bool, var_1_object, var_2_object, var_3_bool)
{
	RemoveActor(var_2_object); // 0x5e Func
	var_4_bool = 0; // 0x60 PushB
	Switch(var_4_bool); // 0x61 TObjFunc
	return 0; // 0x63 Return
}


task_0_event_6(var_0_bool, var_1_object, var_2_object, var_3_bool)
{
	var_4_bool = 0; // 0x84 PushV
	var_4_bool = 0; // 0x85 MovB
	var_5_bool = var_0_bool; // 0x86 PushT
	if(var_5_bool == 0) goto Label_141; // 0x87 JumpB
	var_6_bool = 0; // 0x88 PushV
	func_42(var_6_bool); // 0x89 Call
	if(var_6_bool == 0) goto Label_141; // 0x8b JumpB
	var_4_bool = 1; // 0x8c MovB
	
Label_141:
	if(var_4_bool == 0) goto Label_147; // 0x8d JumpB
	var_20_object = Obj(); // 0x8e PushV
	func_148(var_20_object); // 0x8f Call
	RemoveActor(var_20_object); // 0x91 Func
	
Label_147:
	return 0; // 0x93 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_bool)
{
	var_3_bool = 0; // 0x0 TMovB
	func_59(); // 0x2 Call
	return 0; // 0x4 Return
}


func_100()
{
	
Label_100:
	Hold(); // 0x64 Func
	goto Label_100; // 0x66 Jump
}


func_104(var_0_bool, var_12_string)
{
	var_13_bool = 0; var_14_bool = 0; // 0x68 PushV
	var_15_string = "cleanup"; // 0x69 PushS
	var_16_bool = var_12_string == var_15_string; // 0x6a Eq
	if(var_16_bool == 0) goto Label_127; // 0x6b JumpB
	var_0_bool = 1; // 0x6c TMovB
	IsLoaded(var_14_bool); // 0x6d Func
	var_17_bool = 0; // 0x6f PushV
	var_17_bool = 0; // 0x70 MovB
	var_18_bool = var_14_bool == 0; // 0x71 Not
	if(var_18_bool == 0) goto Label_120; // 0x72 JumpB
	var_19_bool = 0; // 0x73 PushV
	func_42(var_19_bool); // 0x74 Call
	if(var_19_bool == 0) goto Label_120; // 0x76 JumpB
	var_17_bool = 1; // 0x77 MovB
	
Label_120:
	if(var_17_bool == 0) goto Label_126; // 0x78 JumpB
	var_33_object = Obj(); // 0x79 PushV
	func_148(var_33_object); // 0x7a Call
	RemoveActor(var_33_object); // 0x7c Func
	
Label_126:
	goto Label_131; // 0x7e Jump
	
Label_131:
	return 2; // 0x83 Return
	
Label_127:
	var_36_string = "restore"; // 0x7f PushS
	var_37_bool = var_12_string == var_36_string; // 0x80 Eq
	if(var_37_bool == 0) goto Label_131; // 0x81 JumpB
	var_0_bool = 0; // 0x82 TMovB
}


func_42(var_6_bool)
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; // 0x2a PushV
	var_11_string = "d3q01_blood"; // 0x2b PushS
	GetItemCountOfType(var_9_int, var_11_string); // 0x2c Func
	var_12_bool = var_9_int == 0; // 0x2e Not
	if(var_12_bool == 0) goto Label_50; // 0x2f JumpB
	var_6_bool = 1; // 0x30 MovB
	return 4; // 0x31 Return
	
Label_50:
	var_13_string = "d3q01"; // 0x32 PushS
	GetVariable(var_13_string, var_10_int); // 0x33 Func
	var_14_bool = 0; var_15_int = 0; // 0x35 PushV
	var_15_int = var_10_int; // 0x36 Mov
	func_178(var_14_bool, var_15_int); // 0x37 Call
	var_6_bool = !var_14_bool; // 0x39 Not2
	return 4; // 0x3a Return
}


func_172(var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0xac PushV
	var_12_string = "nouse_container"; // 0xad PushS
	GetVariable(var_12_string, var_11_int); // 0xae Func
	var_9_bool = !var_11_int; // 0xb0 Not2
	return 2; // 0xb1 Return
}


func_78(var_2_object)
{
	var_9_object = Obj(); var_10_string = ""; var_11_object = Obj(); var_12_string = ""; // 0x4e PushV
	GetScene(var_11_object); // 0x4f Func
	var_13_string = "fire_loc"; // 0x51 PushS
	GetProperty(var_13_string, var_12_string); // 0x52 Func
	var_14_object = Obj(); var_15_object = Obj(); var_16_string = ""; var_17_string = ""; var_18_string = ""; // 0x54 PushV
	var_15_object = var_11_object; // 0x55 Mov
	var_16_string = var_12_string; // 0x56 Mov
	var_17_string = "scripted"; // 0x57 MovS
	var_18_string = "bonfire.xml"; // 0x58 MovS
	func_154(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string); // 0x59 Call
	var_2_object = var_14_object; // 0x5a TMov
	return 4; // 0x5c Return
}


func_178(var_14_bool, var_15_int)
{
	var_14_bool = 0; // 0xb3 MovB
	var_16_int = 1; // 0xb4 PushI
	var_17_bool = var_15_int >= var_16_int; // 0xb5 GE
	if(var_17_bool == 0) goto Label_187; // 0xb6 JumpB
	var_18_int = 1000; // 0xb7 PushI
	var_19_bool = var_15_int < var_18_int; // 0xb8 LT
	if(var_19_bool == 0) goto Label_187; // 0xb9 JumpB
	var_14_bool = 1; // 0xba MovB
	
Label_187:
	return 0; // 0xbb Return
}


func_148(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x94 PushV
	self(var_22_object); // 0x95 Func
	var_20_object = var_22_object; // 0x97 Mov
	return 2; // 0x98 Return
}


func_154(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string)
{
	var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); // 0x9a PushV
	GetLocator(var_16_string, var_23_bool, var_24_cvector, var_25_cvector); // 0x9b ObjFunc
	var_27_bool = var_23_bool == 0; // 0x9d Not
	if(var_27_bool == 0) goto Label_167; // 0x9e JumpB
	var_28_string = "Locator "; // 0x9f PushS
	var_29_int = var_28_string + var_16_string; // 0xa0 Add
	var_30_string = " doesn't exist"; // 0xa1 PushS
	var_31_int = var_29_int + var_30_string; // 0xa2 Add
	Trace(var_31_int); // 0xa3 Func
	var_26_object = 0; // 0xa5 SetNull
	goto Label_169; // 0xa6 Jump
	
Label_169:
	var_14_object = var_26_object; // 0xa9 Mov
	return 8; // 0xaa Return
	
Label_167:
	AddActorByType(var_26_object, var_17_string, var_15_object, var_24_cvector, var_25_cvector, var_18_string); // 0xa7 Func
}


func_59()
{
	var_4_string = ""; var_5_string = ""; // 0x3b PushV
	var_6_string = "light"; // 0x3c PushS
	GetProperty(var_6_string, var_5_string); // 0x3d Func
	FindActor(var_5_string, var_5_string); // 0x3f Func
	var_7_bool = 1; // 0x41 PushB
	Switch(var_7_bool); // 0x42 TObjFunc
	var_8_bool = 1; // 0x44 PushB
	SetVisibility(var_8_bool); // 0x45 Func
	func_78(var_5_string); // 0x48 Call
	func_100(); // 0x4b Call
	return 2; // 0x4d Return
}


