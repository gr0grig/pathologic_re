task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x7 PushV
	var_4_bool = var_0_bool; // 0x8 PushT
	if(var_4_bool == 0) goto Label_11; // 0x9 JumpB
	return 2; // 0xa Return
	
Label_11:
	CreateInvItem(var_3_object); // 0xb Func
	var_5_string = "avroks_blood"; // 0xd PushS
	SetItemName(var_5_string); // 0xe ObjFunc
	var_6_bool = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_int = 0; // 0x10 PushV
	var_7_object = var_1_object; // 0x11 Mov
	var_8_object = var_3_object; // 0x12 Mov
	var_9_int = 1; // 0x13 MovI
	func_56(var_7_object, var_8_object, var_9_int); // 0x14 NEW_2
	if(var_6_bool == 0) goto Label_36; // 0x16 JumpB
	var_0_bool = 1; // 0x17 TMovB
	func_73(); // 0x19 NEW_2
	var_46_string = "b10q03"; // 0x1b PushS
	var_47_int = 4; // 0x1c PushI
	SetVariable(var_46_string, var_47_int); // 0x1d Func
	var_48_object = Obj(); // 0x1f PushV
	func_38(var_48_object); // 0x20 NEW_2
	RemoveActor(var_48_object); // 0x22 Func
	
Label_36:
	return 2; // 0x24 Return
}


main(var_0_bool)
{
	var_1_bool = 1; // 0x0 PushB
	SetVisibility(var_1_bool); // 0x1 Func
	
Label_3:
	Hold(); // 0x3 Func
	goto Label_3; // 0x5 Jump
}


func_99(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; // 0x63 PushV
	var_37_object = Obj(); // 0x64 PushV
	func_86(var_37_object); // 0x65 NEW_2
	var_34_object = var_37_object; // 0x66 Mov
	Find(var_30_int, var_35_object); // 0x68 ObjFunc
	var_42_bool = var_35_object == 0; // 0x6a Not
	if(var_42_bool == 0) goto Label_114; // 0x6b JumpB
	var_43_string = "Can't find diary parent with id: "; // 0x6c PushS
	var_44_int = var_43_string + var_30_int; // 0x6d Add
	Trace(var_44_int); // 0x6e Func
	var_28_bool = 0; // 0x70 MovB
	return 6; // 0x71 Return
	
Label_114:
	AddChild(var_29_object); // 0x72 ObjFunc
	var_45_int = 7; // 0x74 PushI
	SendWorldWndMessage(var_45_int); // 0x75 Func
	GetCategory(var_36_int); // 0x77 ObjFunc
	SetDiarySection(var_36_int); // 0x79 Func
	var_28_bool = 0; // 0x7b MovB
	return 6; // 0x7c Return
}


func_38(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x26 PushV
	self(var_50_object); // 0x27 Func
	var_48_object = var_50_object; // 0x29 Mov
	return 2; // 0x2a Return
}


func_73()
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x49 PushV
	var_25_int = 604; // 0x4a PushI
	var_26_int = 2; // 0x4b PushI
	var_27_int = 531183; // 0x4c PushI
	CreateDiaryEntry(var_24_object, var_25_int, var_26_int, var_27_int); // 0x4d Func
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; // 0x4f PushV
	var_29_object = var_24_object; // 0x50 Mov
	var_30_int = 594; // 0x51 MovI
	func_99(var_28_bool, var_29_object, var_30_int); // 0x52 NEW_2
	return 2; // 0x54 Return
}


func_44(var_18_int, var_19_int)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x2c PushV
	CreateIntVector(var_21_object); // 0x2d Func
	add(var_18_int); // 0x2f ObjFunc
	add(var_19_int); // 0x31 ObjFunc
	var_22_int = 3; // 0x33 PushI
	SendWorldWndMessage(var_22_int, var_21_object); // 0x34 Func
	return 2; // 0x36 Return
}


func_86(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x56 PushV
	GetDiaryRoot(var_39_object); // 0x57 Func
	var_40_bool = var_39_object == 0; // 0x59 Not
	if(var_40_bool == 0) goto Label_96; // 0x5a JumpB
	var_41_string = "Can't retrieve diary root"; // 0x5b PushS
	Trace(var_41_string); // 0x5c Func
	var_37_object = 0; // 0x5e MovB
	return 2; // 0x5f Return
	
Label_96:
	var_37_object = var_39_object; // 0x60 Mov
	return 2; // 0x61 Return
}


func_56(var_6_bool, var_8_object, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; // 0x38 PushV
	GetItemID(var_13_int); // 0x39 ObjFunc
	var_16_string = "Category"; // 0x3b PushS
	GetInvItemProperty(var_14_int, var_13_int, var_16_string); // 0x3c Func
	AddItem(var_15_bool, var_8_object, var_14_int, var_9_int); // 0x3e ObjFunc
	var_17_bool = var_15_bool; // 0x40 Push
	if(var_17_bool == 0) goto Label_71; // 0x41 JumpB
	var_18_int = 0; var_19_int = 0; // 0x42 PushV
	var_18_int = var_13_int; // 0x43 Mov
	var_19_int = var_9_int; // 0x44 Mov
	func_44(var_18_int, var_19_int); // 0x45 NEW_2
	
Label_71:
	var_6_bool = var_15_bool; // 0x47 Mov
	return 6; // 0x48 Return
}


