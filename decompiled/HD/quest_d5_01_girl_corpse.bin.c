task_0_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object)
{
	var_4_bool = 0; var_5_bool = 0; // 0x0 PushV
	var_6_string = "d5q02KnowNudeIsDead"; // 0x1 PushS
	var_7_int = 1; // 0x2 PushI
	SetVariable(var_6_string, var_7_int); // 0x3 Func
	IsOverrideActive(var_5_bool); // 0x5 Func
	var_8_bool = var_5_bool == 0; // 0x7 Not
	if(var_8_bool == 0) goto Label_11; // 0x8 JumpB
	Barter(var_3_object); // 0x9 Func
	
Label_11:
	var_9_bool = 0; // 0xb PushV
	var_9_bool = 0; // 0xc MovB
	var_10_bool = 0; // 0xd PushV
	func_26(var_10_bool); // 0xe NEW_2
	if(var_10_bool == 0) goto Label_20; // 0x10 JumpB
	var_24_bool = var_2_bool == 0; // 0x11 Not
	if(var_24_bool == 0) goto Label_20; // 0x12 JumpB
	var_9_bool = 1; // 0x13 MovB
	
Label_20:
	if(var_9_bool == 0) goto Label_25; // 0x14 JumpB
	func_129(); // 0x16 NEW_2
	var_2_bool = 1; // 0x18 TMovB
	
Label_25:
	return 2; // 0x19 Return
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool)
{
	var_3_bool = var_1_bool == 0; // 0x3c Not
	if(var_3_bool == 0) goto Label_66; // 0x3d JumpB
	var_4_bool = 1; // 0x3e PushB
	SetVisibility(var_4_bool); // 0x3f Func
	var_1_bool = 1; // 0x41 TMovB
	
Label_66:
	func_102(); // 0x43 NEW_2
	return 0; // 0x45 Return
}


task_0_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string)
{
	var_4_bool = 0; var_5_bool = 0; // 0x4a PushV
	var_6_string = "cleanup"; // 0x4b PushS
	var_7_bool = var_3_string == var_6_string; // 0x4c Eq
	if(var_7_bool == 0) goto Label_97; // 0x4d JumpB
	var_0_bool = 1; // 0x4e TMovB
	IsLoaded(var_5_bool); // 0x4f Func
	var_8_bool = 0; // 0x51 PushV
	var_8_bool = 0; // 0x52 MovB
	var_9_bool = var_5_bool == 0; // 0x53 Not
	if(var_9_bool == 0) goto Label_90; // 0x54 JumpB
	var_10_bool = 0; // 0x55 PushV
	func_26(var_10_bool); // 0x56 NEW_2
	if(var_10_bool == 0) goto Label_90; // 0x58 JumpB
	var_8_bool = 1; // 0x59 MovB
	
Label_90:
	if(var_8_bool == 0) goto Label_96; // 0x5a JumpB
	var_24_object = Obj(); // 0x5b PushV
	func_123(var_24_object); // 0x5c NEW_2
	RemoveActor(var_24_object); // 0x5e Func
	
Label_96:
	goto Label_101; // 0x60 Jump
	
Label_101:
	return 2; // 0x65 Return
	
Label_97:
	var_27_string = "restore"; // 0x61 PushS
	var_28_bool = var_3_string == var_27_string; // 0x62 Eq
	if(var_28_bool == 0) goto Label_101; // 0x63 JumpB
	var_0_bool = 0; // 0x64 TMovB
}


main(var_0_bool, var_1_bool, var_2_bool)
{
	sync(); // 0x2b Func
	var_3_bool = 0; // 0x2d PushV
	func_118(var_3_bool); // 0x2e NEW_2
	var_6_bool = var_3_bool == 0; // 0x30 Not
	if(var_6_bool == 0) goto Label_55; // 0x31 JumpB
	var_7_bool = 1; // 0x32 PushB
	SetVisibility(var_7_bool); // 0x33 Func
	var_1_bool = 1; // 0x35 TMovB
	goto Label_56; // 0x36 Jump
	
Label_56:
	func_70(); // 0x39 NEW_2
	return 0; // 0x3b Return
	
Label_55:
	var_1_bool = 0; // 0x37 TMovB
}


func_129()
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x81 PushV
	var_27_int = 634; // 0x82 PushI
	var_28_int = 1; // 0x83 PushI
	var_29_int = 533080; // 0x84 PushI
	CreateDiaryEntry(var_26_object, var_27_int, var_28_int, var_29_int); // 0x85 Func
	var_30_bool = 0; var_31_object = Obj(); var_32_int = 0; // 0x87 PushV
	var_31_object = var_26_object; // 0x88 Mov
	var_32_int = 139; // 0x89 MovI
	func_155(var_30_bool, var_31_object, var_32_int); // 0x8a NEW_2
	return 2; // 0x8c Return
}


func_102()
{
	var_5_bool = 0; // 0x66 PushV
	var_5_bool = 0; // 0x67 MovB
	var_6_bool = var_0_bool; // 0x68 PushT
	if(var_6_bool == 0) goto Label_111; // 0x69 JumpB
	var_7_bool = 0; // 0x6a PushV
	func_26(var_7_bool); // 0x6b NEW_2
	if(var_7_bool == 0) goto Label_111; // 0x6d JumpB
	var_5_bool = 1; // 0x6e MovB
	
Label_111:
	if(var_5_bool == 0) goto Label_117; // 0x6f JumpB
	var_21_object = Obj(); // 0x70 PushV
	func_123(var_21_object); // 0x71 NEW_2
	RemoveActor(var_21_object); // 0x73 Func
	
Label_117:
	return 0; // 0x75 Return
}


func_70()
{
	
Label_70:
	Hold(); // 0x46 Func
	goto Label_70; // 0x48 Jump
}


func_155(var_30_bool, var_31_object, var_32_int)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; var_36_object = Obj(); var_37_object = Obj(); var_38_int = 0; // 0x9b PushV
	var_39_object = Obj(); // 0x9c PushV
	func_142(var_39_object); // 0x9d NEW_2
	var_36_object = var_39_object; // 0x9e Mov
	Find(var_32_int, var_37_object); // 0xa0 ObjFunc
	var_44_bool = var_37_object == 0; // 0xa2 Not
	if(var_44_bool == 0) goto Label_170; // 0xa3 JumpB
	var_45_string = "Can't find diary parent with id: "; // 0xa4 PushS
	var_46_int = var_45_string + var_32_int; // 0xa5 Add
	Trace(var_46_int); // 0xa6 Func
	var_30_bool = 0; // 0xa8 MovB
	return 6; // 0xa9 Return
	
Label_170:
	AddChild(var_31_object); // 0xaa ObjFunc
	var_47_int = 7; // 0xac PushI
	SendWorldWndMessage(var_47_int); // 0xad Func
	GetCategory(var_38_int); // 0xaf ObjFunc
	SetDiarySection(var_38_int); // 0xb1 Func
	var_30_bool = 0; // 0xb3 MovB
	return 6; // 0xb4 Return
}


func_142(var_39_object)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x8e PushV
	GetDiaryRoot(var_41_object); // 0x8f Func
	var_42_bool = var_41_object == 0; // 0x91 Not
	if(var_42_bool == 0) goto Label_152; // 0x92 JumpB
	var_43_string = "Can't retrieve diary root"; // 0x93 PushS
	Trace(var_43_string); // 0x94 Func
	var_39_object = 0; // 0x96 MovB
	return 2; // 0x97 Return
	
Label_152:
	var_39_object = var_41_object; // 0x98 Mov
	return 2; // 0x99 Return
}


func_118(var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0; // 0x76 PushV
	IsLoaded(var_5_bool); // 0x77 Func
	var_3_bool = var_5_bool; // 0x79 Mov
	return 2; // 0x7a Return
}


func_183(var_18_bool, var_19_int)
{
	var_18_bool = 0; // 0xb8 MovB
	var_20_int = 1; // 0xb9 PushI
	var_21_bool = var_19_int >= var_20_int; // 0xba GE
	if(var_21_bool == 0) goto Label_192; // 0xbb JumpB
	var_22_int = 1000; // 0xbc PushI
	var_23_bool = var_19_int < var_22_int; // 0xbd LT
	if(var_23_bool == 0) goto Label_192; // 0xbe JumpB
	var_18_bool = 1; // 0xbf MovB
	
Label_192:
	return 0; // 0xc0 Return
}


func_26(var_10_bool)
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; // 0x1a PushV
	var_15_string = "d5q01_heart"; // 0x1b PushS
	GetItemCountOfType(var_13_int, var_15_string); // 0x1c Func
	var_16_bool = var_13_int == 0; // 0x1e Not
	if(var_16_bool == 0) goto Label_34; // 0x1f JumpB
	var_10_bool = 1; // 0x20 MovB
	return 4; // 0x21 Return
	
Label_34:
	var_17_string = "d5q01"; // 0x22 PushS
	GetVariable(var_17_string, var_14_int); // 0x23 Func
	var_18_bool = 0; var_19_int = 0; // 0x25 PushV
	var_19_int = var_14_int; // 0x26 Mov
	func_183(var_18_bool, var_19_int); // 0x27 NEW_2
	var_10_bool = !var_18_bool; // 0x29 Not2
	return 4; // 0x2a Return
}


func_123(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x7b PushV
	self(var_26_object); // 0x7c Func
	var_24_object = var_26_object; // 0x7e Mov
	return 2; // 0x7f Return
}


