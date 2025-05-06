task_0_event_0(var_0_bool, var_1_bool, var_2_object)
{
	var_3_int = 0; var_4_bool = 0; var_5_int = 0; var_6_bool = 0; // 0x0 PushV
	var_7_string = "d7q02BirdBalahon"; // 0x1 PushS
	var_8_int = 1; // 0x2 PushI
	SetVariable(var_7_string, var_8_int); // 0x3 Func
	var_9_string = "d7q02"; // 0x5 PushS
	GetVariable(var_9_string, var_5_int); // 0x6 Func
	var_10_int = 4; // 0x8 PushI
	var_11_bool = var_5_int == var_10_int; // 0x9 Eq
	if(var_11_bool == 0) goto Label_20; // 0xa JumpB
	func_150(); // 0xc NEW_2
	var_35_bool = 0; var_36_string = ""; var_37_string = ""; // 0xe PushV
	var_36_string = "quest_d7_02"; // 0xf MovS
	var_37_string = "completed"; // 0x10 MovS
	func_125(var_35_bool, var_36_string, var_37_string); // 0x11 NEW_2
	goto Label_25; // 0x13 Jump
	
Label_25:
	var_0_bool = 1; // 0x19 TMovB
	IsOverrideActive(var_6_bool); // 0x1a Func
	var_41_bool = var_6_bool == 0; // 0x1c Not
	if(var_41_bool == 0) goto Label_32; // 0x1d JumpB
	Barter(var_2_object); // 0x1e Func
	
Label_32:
	return 4; // 0x20 Return
	
Label_20:
	var_42_bool = var_0_bool == 0; // 0x14 Not
	if(var_42_bool == 0) goto Label_25; // 0x15 JumpB
	func_137(); // 0x17 NEW_2
}


task_0_event_6(var_0_bool, var_1_bool)
{
	var_2_bool = var_1_bool == 0; // 0x38 Not
	if(var_2_bool == 0) goto Label_62; // 0x39 JumpB
	var_3_bool = 1; // 0x3a PushB
	SetVisibility(var_3_bool); // 0x3b Func
	var_1_bool = 1; // 0x3d TMovB
	
Label_62:
	func_98(); // 0x3f NEW_2
	return 0; // 0x41 Return
}


task_0_event_26(var_0_bool, var_1_bool, var_2_string)
{
	var_3_bool = 0; var_4_bool = 0; // 0x46 PushV
	var_5_string = "cleanup"; // 0x47 PushS
	var_6_bool = var_2_string == var_5_string; // 0x48 Eq
	if(var_6_bool == 0) goto Label_93; // 0x49 JumpB
	var_0_bool = 1; // 0x4a TMovB
	IsLoaded(var_4_bool); // 0x4b Func
	var_7_bool = 0; // 0x4d PushV
	var_7_bool = 0; // 0x4e MovB
	var_8_bool = var_4_bool == 0; // 0x4f Not
	if(var_8_bool == 0) goto Label_86; // 0x50 JumpB
	var_9_bool = 0; // 0x51 PushV
	func_33(var_9_bool); // 0x52 NEW_2
	if(var_9_bool == 0) goto Label_86; // 0x54 JumpB
	var_7_bool = 1; // 0x55 MovB
	
Label_86:
	if(var_7_bool == 0) goto Label_92; // 0x56 JumpB
	var_13_object = Obj(); // 0x57 PushV
	func_119(var_13_object); // 0x58 NEW_2
	RemoveActor(var_13_object); // 0x5a Func
	
Label_92:
	goto Label_97; // 0x5c Jump
	
Label_97:
	return 2; // 0x61 Return
	
Label_93:
	var_16_string = "restore"; // 0x5d PushS
	var_17_bool = var_2_string == var_16_string; // 0x5e Eq
	if(var_17_bool == 0) goto Label_97; // 0x5f JumpB
	var_0_bool = 0; // 0x60 TMovB
}


main(var_0_bool, var_1_bool)
{
	sync(); // 0x27 Func
	var_2_bool = 0; // 0x29 PushV
	func_114(var_2_bool); // 0x2a NEW_2
	var_5_bool = var_2_bool == 0; // 0x2c Not
	if(var_5_bool == 0) goto Label_51; // 0x2d JumpB
	var_6_bool = 1; // 0x2e PushB
	SetVisibility(var_6_bool); // 0x2f Func
	var_1_bool = 1; // 0x31 TMovB
	goto Label_52; // 0x32 Jump
	
Label_52:
	func_66(); // 0x35 NEW_2
	return 0; // 0x37 Return
	
Label_51:
	var_1_bool = 0; // 0x33 TMovB
}


func_33(var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0; // 0x21 PushV
	var_12_string = "d7q02BirdBalahon"; // 0x22 PushS
	GetVariable(var_12_string, var_11_bool); // 0x23 Func
	var_9_bool = var_11_bool; // 0x25 Mov
	return 2; // 0x26 Return
}


func_66()
{
	
Label_66:
	Hold(); // 0x42 Func
	goto Label_66; // 0x44 Jump
}


func_163(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0xa3 PushV
	GetDiaryRoot(var_28_object); // 0xa4 Func
	var_29_bool = var_28_object == 0; // 0xa6 Not
	if(var_29_bool == 0) goto Label_173; // 0xa7 JumpB
	var_30_string = "Can't retrieve diary root"; // 0xa8 PushS
	Trace(var_30_string); // 0xa9 Func
	var_26_object = 0; // 0xab MovB
	return 2; // 0xac Return
	
Label_173:
	var_26_object = var_28_object; // 0xad Mov
	return 2; // 0xae Return
}


func_98()
{
	var_4_bool = 0; // 0x62 PushV
	var_4_bool = 0; // 0x63 MovB
	var_5_bool = var_0_bool; // 0x64 PushT
	if(var_5_bool == 0) goto Label_107; // 0x65 JumpB
	var_6_bool = 0; // 0x66 PushV
	func_33(var_6_bool); // 0x67 NEW_2
	if(var_6_bool == 0) goto Label_107; // 0x69 JumpB
	var_4_bool = 1; // 0x6a MovB
	
Label_107:
	if(var_4_bool == 0) goto Label_113; // 0x6b JumpB
	var_10_object = Obj(); // 0x6c PushV
	func_119(var_10_object); // 0x6d NEW_2
	RemoveActor(var_10_object); // 0x6f Func
	
Label_113:
	return 0; // 0x71 Return
}


func_137()
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x89 PushV
	var_45_int = 636; // 0x8a PushI
	var_46_int = 2; // 0x8b PushI
	var_47_int = 533145; // 0x8c PushI
	CreateDiaryEntry(var_44_object, var_45_int, var_46_int, var_47_int); // 0x8d Func
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0; // 0x8f PushV
	var_49_object = var_44_object; // 0x90 Mov
	var_50_int = 170; // 0x91 MovI
	func_176(var_48_bool, var_49_object, var_50_int); // 0x92 NEW_2
	return 2; // 0x94 Return
}


func_176(var_17_bool, var_18_object, var_19_int)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; // 0xb0 PushV
	var_26_object = Obj(); // 0xb1 PushV
	func_163(var_26_object); // 0xb2 NEW_2
	var_23_object = var_26_object; // 0xb3 Mov
	Find(var_19_int, var_24_object); // 0xb5 ObjFunc
	var_31_bool = var_24_object == 0; // 0xb7 Not
	if(var_31_bool == 0) goto Label_191; // 0xb8 JumpB
	var_32_string = "Can't find diary parent with id: "; // 0xb9 PushS
	var_33_int = var_32_string + var_19_int; // 0xba Add
	Trace(var_33_int); // 0xbb Func
	var_17_bool = 0; // 0xbd MovB
	return 6; // 0xbe Return
	
Label_191:
	AddChild(var_18_object); // 0xbf ObjFunc
	var_34_int = 7; // 0xc1 PushI
	SendWorldWndMessage(var_34_int); // 0xc2 Func
	GetCategory(var_25_int); // 0xc4 ObjFunc
	SetDiarySection(var_25_int); // 0xc6 Func
	var_17_bool = 0; // 0xc8 MovB
	return 6; // 0xc9 Return
}


func_114(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x72 PushV
	IsLoaded(var_4_bool); // 0x73 Func
	var_2_bool = var_4_bool; // 0x75 Mov
	return 2; // 0x76 Return
}


func_150()
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x96 PushV
	var_14_int = 174; // 0x97 PushI
	var_15_int = 2; // 0x98 PushI
	var_16_int = 515426; // 0x99 PushI
	CreateDiaryEntry(var_13_object, var_14_int, var_15_int, var_16_int); // 0x9a Func
	var_17_bool = 0; var_18_object = Obj(); var_19_int = 0; // 0x9c PushV
	var_18_object = var_13_object; // 0x9d Mov
	var_19_int = 170; // 0x9e MovI
	func_176(var_17_bool, var_18_object, var_19_int); // 0x9f NEW_2
	return 2; // 0xa1 Return
}


func_119(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x77 PushV
	self(var_15_object); // 0x78 Func
	var_13_object = var_15_object; // 0x7a Mov
	return 2; // 0x7b Return
}


func_125(var_35_bool, var_36_string, var_37_string)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x7d PushV
	FindActor(var_39_object, var_36_string); // 0x7e Func
	var_40_bool = var_39_object == 0; // 0x80 NullEq
	if(var_40_bool == 0) goto Label_132; // 0x81 JumpB
	var_35_bool = 0; // 0x82 MovB
	return 2; // 0x83 Return
	
Label_132:
	Trigger(var_39_object, var_37_string); // 0x84 Func
	var_35_bool = 1; // 0x86 MovB
	return 2; // 0x87 Return
}


