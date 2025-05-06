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
	func_108(var_6_bool, var_12_string); // 0x13 NEW_2
}


task_0_event_0(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object)
{
	var_5_bool = 0; var_6_bool = 0; var_7_bool = 0; var_8_bool = 0; // 0x16 PushV
	var_9_bool = 0; // 0x17 PushV
	func_176(var_9_bool); // 0x18 NEW_2
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
	var_4_object = var_2_object; // 0x5e PushT
	if(var_4_object == 0) goto Label_98; // 0x5f JumpB
	RemoveActor(var_2_object); // 0x60 Func
	
Label_98:
	var_5_object = var_1_object; // 0x62 PushT
	if(var_5_object == 0) goto Label_103; // 0x63 JumpB
	var_6_bool = 0; // 0x64 PushB
	Switch(var_6_bool); // 0x65 TObjFunc
	
Label_103:
	return 0; // 0x67 Return
}


task_0_event_6(var_0_bool, var_1_object, var_2_object, var_3_bool)
{
	var_4_bool = 0; // 0x88 PushV
	var_4_bool = 0; // 0x89 MovB
	var_5_bool = var_0_bool; // 0x8a PushT
	if(var_5_bool == 0) goto Label_145; // 0x8b JumpB
	var_6_bool = 0; // 0x8c PushV
	func_42(var_6_bool); // 0x8d NEW_2
	if(var_6_bool == 0) goto Label_145; // 0x8f JumpB
	var_4_bool = 1; // 0x90 MovB
	
Label_145:
	if(var_4_bool == 0) goto Label_151; // 0x91 JumpB
	var_20_object = Obj(); // 0x92 PushV
	func_152(var_20_object); // 0x93 NEW_2
	RemoveActor(var_20_object); // 0x95 Func
	
Label_151:
	return 0; // 0x97 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_bool)
{
	var_3_bool = 0; // 0x0 TMovB
	func_59(); // 0x2 NEW_2
	return 0; // 0x4 Return
}


func_104()
{
	
Label_104:
	Hold(); // 0x68 Func
	goto Label_104; // 0x6a Jump
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
	func_182(var_14_bool, var_15_int); // 0x37 NEW_2
	var_6_bool = !var_14_bool; // 0x39 Not2
	return 4; // 0x3a Return
}


func_108(var_0_bool, var_12_string)
{
	var_13_bool = 0; var_14_bool = 0; // 0x6c PushV
	var_15_string = "cleanup"; // 0x6d PushS
	var_16_bool = var_12_string == var_15_string; // 0x6e Eq
	if(var_16_bool == 0) goto Label_131; // 0x6f JumpB
	var_0_bool = 1; // 0x70 TMovB
	IsLoaded(var_14_bool); // 0x71 Func
	var_17_bool = 0; // 0x73 PushV
	var_17_bool = 0; // 0x74 MovB
	var_18_bool = var_14_bool == 0; // 0x75 Not
	if(var_18_bool == 0) goto Label_124; // 0x76 JumpB
	var_19_bool = 0; // 0x77 PushV
	func_42(var_19_bool); // 0x78 NEW_2
	if(var_19_bool == 0) goto Label_124; // 0x7a JumpB
	var_17_bool = 1; // 0x7b MovB
	
Label_124:
	if(var_17_bool == 0) goto Label_130; // 0x7c JumpB
	var_33_object = Obj(); // 0x7d PushV
	func_152(var_33_object); // 0x7e NEW_2
	RemoveActor(var_33_object); // 0x80 Func
	
Label_130:
	goto Label_135; // 0x82 Jump
	
Label_135:
	return 2; // 0x87 Return
	
Label_131:
	var_36_string = "restore"; // 0x83 PushS
	var_37_bool = var_12_string == var_36_string; // 0x84 Eq
	if(var_37_bool == 0) goto Label_135; // 0x85 JumpB
	var_0_bool = 0; // 0x86 TMovB
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
	func_158(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string); // 0x59 NEW_2
	var_2_object = var_14_object; // 0x5a TMov
	return 4; // 0x5c Return
}


func_176(var_9_bool)
{
	var_10_int = 0; var_11_int = 0; // 0xb0 PushV
	var_12_string = "nouse_container"; // 0xb1 PushS
	GetVariable(var_12_string, var_11_int); // 0xb2 Func
	var_9_bool = !var_11_int; // 0xb4 Not2
	return 2; // 0xb5 Return
}


func_182(var_14_bool, var_15_int)
{
	var_14_bool = 0; // 0xb7 MovB
	var_16_int = 1; // 0xb8 PushI
	var_17_bool = var_15_int >= var_16_int; // 0xb9 GE
	if(var_17_bool == 0) goto Label_191; // 0xba JumpB
	var_18_int = 1000; // 0xbb PushI
	var_19_bool = var_15_int < var_18_int; // 0xbc LT
	if(var_19_bool == 0) goto Label_191; // 0xbd JumpB
	var_14_bool = 1; // 0xbe MovB
	
Label_191:
	return 0; // 0xbf Return
}


func_152(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x98 PushV
	self(var_22_object); // 0x99 Func
	var_20_object = var_22_object; // 0x9b Mov
	return 2; // 0x9c Return
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
	func_78(var_5_string); // 0x48 NEW_2
	func_104(); // 0x4b NEW_2
	return 2; // 0x4d Return
}


func_158(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string)
{
	var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); // 0x9e PushV
	GetLocator(var_16_string, var_23_bool, var_24_cvector, var_25_cvector); // 0x9f ObjFunc
	var_27_bool = var_23_bool == 0; // 0xa1 Not
	if(var_27_bool == 0) goto Label_171; // 0xa2 JumpB
	var_28_string = "Locator "; // 0xa3 PushS
	var_29_int = var_28_string + var_16_string; // 0xa4 Add
	var_30_string = " doesn't exist"; // 0xa5 PushS
	var_31_int = var_29_int + var_30_string; // 0xa6 Add
	Trace(var_31_int); // 0xa7 Func
	var_26_object = 0; // 0xa9 SetNull
	goto Label_173; // 0xaa Jump
	
Label_173:
	var_14_object = var_26_object; // 0xad Mov
	return 8; // 0xae Return
	
Label_171:
	AddActorByType(var_26_object, var_17_string, var_15_object, var_24_cvector, var_25_cvector, var_18_string); // 0xab Func
}


