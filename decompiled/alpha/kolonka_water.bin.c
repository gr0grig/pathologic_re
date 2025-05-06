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
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_float = 0; var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_bool = 0; var_11_float = 0; var_12_object = Obj(); var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_float = 0; var_18_int = 0; var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_float = 0; var_23_object = Obj(); // 0x1c PushV
	var_24_string = "bottle_empty"; // 0x1d PushS
	GetInvItemByName(var_13_int, var_24_string); // 0x1e Func
	var_25_string = "Category"; // 0x20 PushS
	GetInvItemProperty(var_14_int, var_13_int, var_25_string); // 0x21 Func
	GetItemCount(var_15_int, var_14_int); // 0x23 ObjFunc
	var_16_int = -1; // 0x25 MovI
	var_18_int = 0; // 0x26 MovI
	
Label_39:
	var_26_bool = var_18_int < var_15_int; // 0x27 LT
	if(var_26_bool == 0) goto Label_83; // 0x28 JumpB
	GetItem(var_19_object, var_18_int, var_14_int); // 0x29 ObjFunc
	GetItemID(var_20_int); // 0x2b ObjFunc
	var_27_bool = var_20_int == var_13_int; // 0x2d Eq
	if(var_27_bool == 0) goto Label_79; // 0x2e JumpB
	var_28_string = "disease"; // 0x2f PushS
	HasProperty(var_21_bool, var_28_string); // 0x30 ObjFunc
	var_29_bool = var_21_bool == 0; // 0x32 Not
	if(var_29_bool == 0) goto Label_65; // 0x33 JumpB
	var_30_bool = 0; // 0x34 PushV
	var_30_bool = 1; // 0x35 MovB
	var_31_int = -1; // 0x36 PushI
	var_32_bool = var_16_int == var_31_int; // 0x37 Eq
	if(var_32_bool == 0) goto Label_61; // 0x38 JumpB
	var_33_int = 0; // 0x39 PushI
	var_34_bool = var_17_float > var_33_int; // 0x3a GT
	if(var_34_bool == 0) goto Label_61; // 0x3b JumpB
	var_30_bool = 0; // 0x3c MovB
	
Label_61:
	if(var_30_bool == 0) goto Label_64; // 0x3d JumpB
	var_16_int = var_18_int; // 0x3e Mov
	var_17_float = 0; // 0x3f MovI
	
Label_64:
	goto Label_79; // 0x40 Jump
	
Label_79:
	var_19_object = 0; // 0x4f SetNull
	var_35_int = 1; // 0x50 PushI
	var_18_int = var_18_int + var_35_int; // 0x51 Add2
	goto Label_39; // 0x52 Jump
	
Label_65:
	var_36_string = "disease"; // 0x41 PushS
	GetProperty(var_22_float, var_36_string); // 0x42 ObjFunc
	var_37_bool = 0; // 0x44 PushV
	var_37_bool = 1; // 0x45 MovB
	var_38_int = -1; // 0x46 PushI
	var_39_bool = var_16_int == var_38_int; // 0x47 Eq
	if(var_39_bool == 0) goto Label_76; // 0x48 JumpB
	var_40_bool = var_22_float < var_17_float; // 0x49 LT
	if(var_40_bool == 0) goto Label_76; // 0x4a JumpB
	var_37_bool = 0; // 0x4b MovB
	
Label_76:
	if(var_37_bool == 0) goto Label_79; // 0x4c JumpB
	var_16_int = var_18_int; // 0x4d Mov
	var_17_float = var_22_float; // 0x4e Mov
	
Label_83:
	var_41_int = -1; // 0x53 PushI
	var_42_bool = var_16_int != var_41_int; // 0x54 Neq
	if(var_42_bool == 0) goto Label_116; // 0x55 JumpB
	EventDisable(0); // 0x56 EventDisable
	var_43_int = 1; // 0x57 PushI
	RemoveItem(var_16_int, var_43_int, var_14_int); // 0x58 ObjFunc
	CreateInvItem(var_23_object); // 0x5a Func
	var_44_string = "bottle_water"; // 0x5c PushS
	SetItemName(var_44_string); // 0x5d ObjFunc
	var_45_string = "disease"; // 0x5f PushS
	SetProperty(var_45_string, var_17_float); // 0x60 ObjFunc
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; // 0x62 PushV
	var_46_object = var_1_object; // 0x63 Mov
	var_47_object = var_23_object; // 0x64 Mov
	var_48_int = 1; // 0x65 MovI
	func_117(var_47_object, var_48_int); // 0x66 Call
	var_57_string = "fill"; // 0x68 PushS
	PlaySound(var_57_string); // 0x69 Func
	var_58_string = "player_exchange"; // 0x6b PushS
	var_59_int = 1; // 0x6c PushI
	SetVariable(var_58_string, var_59_int); // 0x6d Func
	var_60_int = 1; // 0x6f PushI
	Sleep(var_60_int); // 0x70 Func
	EventEnable(0); // 0x72 EventEnable
	var_23_object = 0; // 0x73 SetNull
	
Label_116:
	return 22; // 0x74 Return
}


main(var_0_bool)
{
	func_27(); // 0x1 Call
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


func_27()
{
	return 0; // 0x1b Return
}


func_117(var_47_object, var_48_int)
{
	var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; // 0x75 PushV
	GetItemID(var_52_int); // 0x76 ObjFunc
	var_55_string = "Category"; // 0x78 PushS
	GetInvItemProperty(var_53_int, var_52_int, var_55_string); // 0x79 Func
	AddItem(var_54_bool, var_47_object, var_53_int, var_48_int); // 0x7b ObjFunc
	var_56_bool = var_54_bool == 0; // 0x7d Not
	if(var_56_bool == 0) goto Label_129; // 0x7e JumpB
	DropItems(var_47_object, var_48_int); // 0x7f ObjFunc
	
Label_129:
	return 6; // 0x81 Return
}


