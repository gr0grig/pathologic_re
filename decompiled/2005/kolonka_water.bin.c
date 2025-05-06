task_0_event_9(var_0_bool, var_1_int, var_2_float)
{
	var_3_int = 0; // 0x14 PushI
	var_4_bool = var_1_int == var_3_int; // 0x15 Eq
	if(var_4_bool == 0) goto Label_26; // 0x16 JumpB
	StopGroup0(); // 0x17 Func
	var_0_bool = 1; // 0x19 TMovB
	
Label_26:
	return 0; // 0x1a Return
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_object = Obj(); // 0x1c PushV
	var_20_string = "bottle_empty"; // 0x1d PushS
	GetInvItemByName(var_11_int, var_20_string); // 0x1e Func
	var_21_string = "Category"; // 0x20 PushS
	GetInvItemProperty(var_12_int, var_11_int, var_21_string); // 0x21 Func
	GetItemCount(var_13_int, var_12_int); // 0x23 ObjFunc
	var_14_int = 0; // 0x25 MovI
	var_15_int = 0; // 0x26 MovI
	
Label_39:
	var_22_bool = var_15_int < var_13_int; // 0x27 LT
	if(var_22_bool == 0) goto Label_59; // 0x28 JumpB
	GetItem(var_16_object, var_15_int, var_12_int); // 0x29 ObjFunc
	GetItemID(var_17_int); // 0x2b ObjFunc
	var_23_bool = var_17_int == var_11_int; // 0x2d Eq
	if(var_23_bool == 0) goto Label_55; // 0x2e JumpB
	GetItemAmount(var_18_int, var_15_int, var_12_int); // 0x2f ObjFunc
	var_14_int = var_14_int + var_18_int; // 0x31 Add2
	RemoveItem(var_15_int, var_18_int, var_12_int); // 0x32 ObjFunc
	var_24_int = -1; // 0x34 PushI
	var_13_int = var_13_int + var_24_int; // 0x35 Add2
	goto Label_57; // 0x36 Jump
	
Label_57:
	var_16_object = 0; // 0x39 SetNull
	goto Label_39; // 0x3a Jump
	
Label_55:
	var_25_int = 1; // 0x37 PushI
	var_15_int = var_15_int + var_25_int; // 0x38 Add2
	
Label_59:
	var_26_int = var_14_int; // 0x3b Push
	if(var_26_int == 0) goto Label_85; // 0x3c JumpB
	EventDisable(0); // 0x3d EventDisable
	CreateInvItem(var_19_object); // 0x3e Func
	var_27_string = "bottle_water"; // 0x40 PushS
	SetItemName(var_27_string); // 0x41 ObjFunc
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x43 PushV
	var_28_object = var_1_object; // 0x44 Mov
	var_29_object = var_19_object; // 0x45 Mov
	var_30_int = var_14_int; // 0x46 Mov
	func_112(var_29_object, var_30_int); // 0x47 NEW_2
	var_44_string = "fill"; // 0x49 PushS
	PlaySound(var_44_string); // 0x4a Func
	var_45_int = 5; // 0x4c PushI
	SendWorldWndMessage(var_45_int); // 0x4d Func
	var_46_int = 1; // 0x4f PushI
	Sleep(var_46_int); // 0x50 Func
	EventEnable(0); // 0x52 EventEnable
	var_19_object = 0; // 0x53 SetNull
	goto Label_89; // 0x54 Jump
	
Label_89:
	return 18; // 0x59 Return
	
Label_85:
	var_47_int = 0; // 0x55 PushV
	var_47_int = 400; // 0x56 MovI
	func_90(var_47_int); // 0x57 NEW_2
}


main(var_0_bool)
{
	func_27(); // 0x1 NEW_2
	var_1_bool = 1; // 0x3 PushB
	SetVisibility(var_1_bool); // 0x4 Func
	var_2_int = 0; // 0x6 PushI
	var_3_int = 24; // 0x7 PushI
	SetTimeEvent(var_2_int, var_3_int); // 0x8 Func
	var_0_bool = 0; // 0xa TMovB
	
Label_11:
	Hold(); // 0xb Func
	var_4_bool = var_0_bool == 0; // 0xd Not
	if(var_4_bool == 0) goto Label_11; // 0xe JumpB
	var_5_bool = 0; // 0xf PushB
	SetUsable(var_5_bool); // 0x10 Func
	return 0; // 0x12 Return
}


func_112(var_29_object, var_30_int)
{
	var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; // 0x70 PushV
	GetItemID(var_34_int); // 0x71 ObjFunc
	var_37_string = "Category"; // 0x73 PushS
	GetInvItemProperty(var_35_int, var_34_int, var_37_string); // 0x74 Func
	AddItem(var_36_bool, var_29_object, var_35_int, var_30_int); // 0x76 ObjFunc
	var_38_bool = var_36_bool == 0; // 0x78 Not
	if(var_38_bool == 0) goto Label_125; // 0x79 JumpB
	DropItems(var_29_object, var_30_int); // 0x7a ObjFunc
	goto Label_130; // 0x7c Jump
	
Label_130:
	return 6; // 0x82 Return
	
Label_125:
	var_39_int = 0; var_40_int = 0; // 0x7d PushV
	var_39_int = var_34_int; // 0x7e Mov
	var_40_int = var_30_int; // 0x7f Mov
	func_100(var_39_int, var_40_int); // 0x80 NEW_2
}


func_90(var_47_int)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x5a PushV
	CreateIntVector(var_49_object); // 0x5b Func
	add(var_47_int); // 0x5d ObjFunc
	var_50_int = 200; // 0x5f PushI
	SendWorldWndMessage(var_50_int, var_49_object); // 0x60 Func
	return 2; // 0x62 Return
}


func_27()
{
	return 0; // 0x1b Return
}


func_100(var_39_int, var_40_int)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x64 PushV
	CreateIntVector(var_42_object); // 0x65 Func
	add(var_39_int); // 0x67 ObjFunc
	add(var_40_int); // 0x69 ObjFunc
	var_43_int = 3; // 0x6b PushI
	SendWorldWndMessage(var_43_int, var_42_object); // 0x6c Func
	return 2; // 0x6e Return
}


