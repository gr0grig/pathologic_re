task_0_event_0(var_0_object)
{
	var_1_int = 0; var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_float = 0; var_6_int = 0; var_7_object = Obj(); var_8_int = 0; var_9_bool = 0; var_10_float = 0; var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_float = 0; var_17_int = 0; var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_float = 0; var_22_object = Obj(); // 0xb PushV
	var_23_string = "bottle_empty"; // 0xc PushS
	GetInvItemByName(var_12_int, var_23_string); // 0xd Func
	var_24_string = "Category"; // 0xf PushS
	GetInvItemProperty(var_13_int, var_12_int, var_24_string); // 0x10 Func
	GetItemCount(var_14_int, var_13_int); // 0x12 ObjFunc
	var_15_int = -1; // 0x14 MovI
	var_17_int = 0; // 0x15 MovI
	
Label_22:
	var_25_bool = var_17_int < var_14_int; // 0x16 LT
	if(var_25_bool == 0) goto Label_66; // 0x17 JumpB
	GetItem(var_18_object, var_17_int, var_13_int); // 0x18 ObjFunc
	GetItemID(var_19_int); // 0x1a ObjFunc
	var_26_bool = var_19_int == var_12_int; // 0x1c Eq
	if(var_26_bool == 0) goto Label_62; // 0x1d JumpB
	var_27_string = "disease"; // 0x1e PushS
	HasProperty(var_20_bool, var_27_string); // 0x1f ObjFunc
	var_28_bool = var_20_bool == 0; // 0x21 Not
	if(var_28_bool == 0) goto Label_48; // 0x22 JumpB
	var_29_bool = 0; // 0x23 PushV
	var_29_bool = 1; // 0x24 MovB
	var_30_int = -1; // 0x25 PushI
	var_31_bool = var_15_int == var_30_int; // 0x26 Eq
	if(var_31_bool == 0) goto Label_44; // 0x27 JumpB
	var_32_int = 0; // 0x28 PushI
	var_33_bool = var_16_float > var_32_int; // 0x29 GT
	if(var_33_bool == 0) goto Label_44; // 0x2a JumpB
	var_29_bool = 0; // 0x2b MovB
	
Label_44:
	if(var_29_bool == 0) goto Label_47; // 0x2c JumpB
	var_15_int = var_17_int; // 0x2d Mov
	var_16_float = 0; // 0x2e MovI
	
Label_47:
	goto Label_62; // 0x2f Jump
	
Label_62:
	var_18_object = 0; // 0x3e SetNull
	var_34_int = 1; // 0x3f PushI
	var_17_int = var_17_int + var_34_int; // 0x40 Add2
	goto Label_22; // 0x41 Jump
	
Label_48:
	var_35_string = "disease"; // 0x30 PushS
	GetProperty(var_21_float, var_35_string); // 0x31 ObjFunc
	var_36_bool = 0; // 0x33 PushV
	var_36_bool = 1; // 0x34 MovB
	var_37_int = -1; // 0x35 PushI
	var_38_bool = var_15_int == var_37_int; // 0x36 Eq
	if(var_38_bool == 0) goto Label_59; // 0x37 JumpB
	var_39_bool = var_21_float < var_16_float; // 0x38 LT
	if(var_39_bool == 0) goto Label_59; // 0x39 JumpB
	var_36_bool = 0; // 0x3a MovB
	
Label_59:
	if(var_36_bool == 0) goto Label_62; // 0x3b JumpB
	var_15_int = var_17_int; // 0x3c Mov
	var_16_float = var_21_float; // 0x3d Mov
	
Label_66:
	var_40_int = -1; // 0x42 PushI
	var_41_bool = var_15_int != var_40_int; // 0x43 Neq
	if(var_41_bool == 0) goto Label_99; // 0x44 JumpB
	EventDisable(0); // 0x45 EventDisable
	var_42_int = 1; // 0x46 PushI
	RemoveItem(var_15_int, var_42_int, var_13_int); // 0x47 ObjFunc
	CreateInvItem(var_22_object); // 0x49 Func
	var_43_string = "bottle_water"; // 0x4b PushS
	SetItemName(var_43_string); // 0x4c ObjFunc
	var_44_string = "disease"; // 0x4e PushS
	SetProperty(var_44_string, var_16_float); // 0x4f ObjFunc
	var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; // 0x51 PushV
	var_45_object = var_0_object; // 0x52 Mov
	var_46_object = var_22_object; // 0x53 Mov
	var_47_int = 1; // 0x54 MovI
	func_100(var_46_object, var_47_int); // 0x55 Call
	var_56_string = "fill"; // 0x57 PushS
	PlaySound(var_56_string); // 0x58 Func
	var_57_string = "player_exchange"; // 0x5a PushS
	var_58_int = 1; // 0x5b PushI
	SetVariable(var_57_string, var_58_int); // 0x5c Func
	var_59_int = 1; // 0x5e PushI
	Sleep(var_59_int); // 0x5f Func
	EventEnable(0); // 0x61 EventEnable
	var_22_object = 0; // 0x62 SetNull
	
Label_99:
	return 22; // 0x63 Return
}


main()
{
	func_10(); // 0x1 Call
	var_0_bool = 1; // 0x3 PushB
	SetVisibility(var_0_bool); // 0x4 Func
	
Label_6:
	Hold(); // 0x6 Func
	goto Label_6; // 0x8 Jump
}


func_10()
{
	return 0; // 0xa Return
}


func_100(var_46_object, var_47_int)
{
	var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; // 0x64 PushV
	GetItemID(var_51_int); // 0x65 ObjFunc
	var_54_string = "Category"; // 0x67 PushS
	GetInvItemProperty(var_52_int, var_51_int, var_54_string); // 0x68 Func
	AddItem(var_53_bool, var_46_object, var_52_int, var_47_int); // 0x6a ObjFunc
	var_55_bool = var_53_bool == 0; // 0x6c Not
	if(var_55_bool == 0) goto Label_112; // 0x6d JumpB
	DropItems(var_46_object, var_47_int); // 0x6e ObjFunc
	
Label_112:
	return 6; // 0x70 Return
}


