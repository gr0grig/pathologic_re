task_0_event_0(var_0_object)
{
	var_1_int = 0; var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_int = 0; var_18_object = Obj(); // 0xb PushV
	var_19_string = "bottle_empty"; // 0xc PushS
	GetInvItemByName(var_10_int, var_19_string); // 0xd Func
	var_20_string = "Category"; // 0xf PushS
	GetInvItemProperty(var_11_int, var_10_int, var_20_string); // 0x10 Func
	GetItemCount(var_12_int, var_11_int); // 0x12 ObjFunc
	var_13_int = 0; // 0x14 MovI
	var_14_int = 0; // 0x15 MovI
	
Label_22:
	var_21_bool = var_14_int < var_12_int; // 0x16 LT
	if(var_21_bool == 0) goto Label_42; // 0x17 JumpB
	GetItem(var_15_object, var_14_int, var_11_int); // 0x18 ObjFunc
	GetItemID(var_16_int); // 0x1a ObjFunc
	var_22_bool = var_16_int == var_10_int; // 0x1c Eq
	if(var_22_bool == 0) goto Label_38; // 0x1d JumpB
	GetItemAmount(var_17_int, var_14_int, var_11_int); // 0x1e ObjFunc
	var_13_int = var_13_int + var_17_int; // 0x20 Add2
	RemoveItem(var_14_int, var_17_int, var_11_int); // 0x21 ObjFunc
	var_23_int = -1; // 0x23 PushI
	var_12_int = var_12_int + var_23_int; // 0x24 Add2
	goto Label_40; // 0x25 Jump
	
Label_40:
	var_15_object = 0; // 0x28 SetNull
	goto Label_22; // 0x29 Jump
	
Label_38:
	var_24_int = 1; // 0x26 PushI
	var_14_int = var_14_int + var_24_int; // 0x27 Add2
	
Label_42:
	var_25_int = var_13_int; // 0x2a Push
	if(var_25_int == 0) goto Label_68; // 0x2b JumpB
	EventDisable(0); // 0x2c EventDisable
	CreateInvItem(var_18_object); // 0x2d Func
	var_26_string = "bottle_water"; // 0x2f PushS
	SetItemName(var_26_string); // 0x30 ObjFunc
	var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; // 0x32 PushV
	var_27_object = var_0_object; // 0x33 Mov
	var_28_object = var_18_object; // 0x34 Mov
	var_29_int = var_13_int; // 0x35 Mov
	func_95(var_28_object, var_29_int); // 0x36 NEW_2
	var_43_string = "fill"; // 0x38 PushS
	PlaySound(var_43_string); // 0x39 Func
	var_44_int = 5; // 0x3b PushI
	SendWorldWndMessage(var_44_int); // 0x3c Func
	var_45_int = 1; // 0x3e PushI
	Sleep(var_45_int); // 0x3f Func
	EventEnable(0); // 0x41 EventEnable
	var_18_object = 0; // 0x42 SetNull
	goto Label_72; // 0x43 Jump
	
Label_72:
	return 18; // 0x48 Return
	
Label_68:
	var_46_int = 0; // 0x44 PushV
	var_46_int = 400; // 0x45 MovI
	func_73(var_46_int); // 0x46 NEW_2
}


main()
{
	func_10(); // 0x1 NEW_2
	var_0_bool = 1; // 0x3 PushB
	SetVisibility(var_0_bool); // 0x4 Func
	
Label_6:
	Hold(); // 0x6 Func
	goto Label_6; // 0x8 Jump
}


func_73(var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x49 PushV
	CreateIntVector(var_48_object); // 0x4a Func
	add(var_46_int); // 0x4c ObjFunc
	var_49_int = 200; // 0x4e PushI
	SendWorldWndMessage(var_49_int, var_48_object); // 0x4f Func
	return 2; // 0x51 Return
}


func_10()
{
	return 0; // 0xa Return
}


func_83(var_38_int, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x53 PushV
	CreateIntVector(var_41_object); // 0x54 Func
	add(var_38_int); // 0x56 ObjFunc
	add(var_39_int); // 0x58 ObjFunc
	var_42_int = 3; // 0x5a PushI
	SendWorldWndMessage(var_42_int, var_41_object); // 0x5b Func
	return 2; // 0x5d Return
}


func_95(var_28_object, var_29_int)
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; // 0x5f PushV
	GetItemID(var_33_int); // 0x60 ObjFunc
	var_36_string = "Category"; // 0x62 PushS
	GetInvItemProperty(var_34_int, var_33_int, var_36_string); // 0x63 Func
	AddItem(var_35_bool, var_28_object, var_34_int, var_29_int); // 0x65 ObjFunc
	var_37_bool = var_35_bool == 0; // 0x67 Not
	if(var_37_bool == 0) goto Label_108; // 0x68 JumpB
	DropItems(var_28_object, var_29_int); // 0x69 ObjFunc
	goto Label_113; // 0x6b Jump
	
Label_113:
	return 6; // 0x71 Return
	
Label_108:
	var_38_int = 0; var_39_int = 0; // 0x6c PushV
	var_38_int = var_33_int; // 0x6d Mov
	var_39_int = var_29_int; // 0x6e Mov
	func_83(var_38_int, var_39_int); // 0x6f NEW_2
}


