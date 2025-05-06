task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x7 PushV
	var_4_bool = var_0_bool; // 0x8 PushT
	if(var_4_bool == 0) goto Label_12; // 0x9 JumpB
	return 2; // 0xa Return
	
Label_12:
	var_0_bool = 1; // 0xc TMovB
	CreateInvItem(var_3_object); // 0xd Func
	var_5_string = "avroks_blood"; // 0xf PushS
	SetItemName(var_5_string); // 0x10 ObjFunc
	var_6_bool = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_int = 0; // 0x12 PushV
	var_7_object = var_1_object; // 0x13 Mov
	var_8_object = var_3_object; // 0x14 Mov
	var_9_int = 1; // 0x15 MovI
	func_57(var_7_object, var_8_object, var_9_int); // 0x16 NEW_2
	if(var_6_bool == 0) goto Label_37; // 0x18 JumpB
	func_74(); // 0x1a NEW_2
	var_46_string = "b10q03"; // 0x1c PushS
	var_47_int = 4; // 0x1d PushI
	SetVariable(var_46_string, var_47_int); // 0x1e Func
	var_48_object = Obj(); // 0x20 PushV
	func_39(var_48_object); // 0x21 NEW_2
	RemoveActor(var_48_object); // 0x23 Func
	
Label_37:
	return 2; // 0x25 Return
}


main(var_0_bool)
{
	var_1_bool = 1; // 0x0 PushB
	SetVisibility(var_1_bool); // 0x1 Func
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


func_100(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; // 0x64 PushV
	var_37_object = Obj(); // 0x65 PushV
	func_87(var_37_object); // 0x66 NEW_2
	var_34_object = var_37_object; // 0x67 Mov
	Find(var_30_int, var_35_object); // 0x69 ObjFunc
	var_42_bool = var_35_object == 0; // 0x6b Not
	if(var_42_bool == 0) goto Label_115; // 0x6c JumpB
	var_43_string = "Can't find diary parent with id: "; // 0x6d PushS
	var_44_int = var_43_string + var_30_int; // 0x6e Add
	Trace(var_44_int); // 0x6f Func
	var_28_bool = 0; // 0x71 MovB
	return 6; // 0x72 Return
	
Label_115:
	AddChild(var_29_object); // 0x73 ObjFunc
	var_45_int = 7; // 0x75 PushI
	SendWorldWndMessage(var_45_int); // 0x76 Func
	GetCategory(var_36_int); // 0x78 ObjFunc
	SetDiarySection(var_36_int); // 0x7a Func
	var_28_bool = 0; // 0x7c MovB
	return 6; // 0x7d Return
}


func_39(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x27 PushV
	self(var_50_object); // 0x28 Func
	var_48_object = var_50_object; // 0x2a Mov
	return 2; // 0x2b Return
}


func_74()
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x4a PushV
	var_25_int = 604; // 0x4b PushI
	var_26_int = 2; // 0x4c PushI
	var_27_int = 531183; // 0x4d PushI
	CreateDiaryEntry(var_24_object, var_25_int, var_26_int, var_27_int); // 0x4e Func
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; // 0x50 PushV
	var_29_object = var_24_object; // 0x51 Mov
	var_30_int = 594; // 0x52 MovI
	func_100(var_28_bool, var_29_object, var_30_int); // 0x53 NEW_2
	return 2; // 0x55 Return
}


func_45(var_18_int, var_19_int)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2d PushV
	CreateIntVector(var_21_object); // 0x2e Func
	add(var_18_int); // 0x30 ObjFunc
	add(var_19_int); // 0x32 ObjFunc
	var_22_int = 3; // 0x34 PushI
	SendWorldWndMessage(var_22_int, var_21_object); // 0x35 Func
	return 2; // 0x37 Return
}


func_87(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x57 PushV
	GetDiaryRoot(var_39_object); // 0x58 Func
	var_40_bool = var_39_object == 0; // 0x5a Not
	if(var_40_bool == 0) goto Label_97; // 0x5b JumpB
	var_41_string = "Can't retrieve diary root"; // 0x5c PushS
	Trace(var_41_string); // 0x5d Func
	var_37_object = 0; // 0x5f MovB
	return 2; // 0x60 Return
	
Label_97:
	var_37_object = var_39_object; // 0x61 Mov
	return 2; // 0x62 Return
}


func_57(var_6_bool, var_8_object, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; // 0x39 PushV
	GetItemID(var_13_int); // 0x3a ObjFunc
	var_16_string = "Category"; // 0x3c PushS
	GetInvItemProperty(var_14_int, var_13_int, var_16_string); // 0x3d Func
	AddItem(var_15_bool, var_8_object, var_14_int, var_9_int); // 0x3f ObjFunc
	var_17_bool = var_15_bool; // 0x41 Push
	if(var_17_bool == 0) goto Label_72; // 0x42 JumpB
	var_18_int = 0; var_19_int = 0; // 0x43 PushV
	var_18_int = var_13_int; // 0x44 Mov
	var_19_int = var_9_int; // 0x45 Mov
	func_45(var_18_int, var_19_int); // 0x46 NEW_2
	
Label_72:
	var_6_bool = var_15_bool; // 0x48 Mov
	return 6; // 0x49 Return
}


