task_0_event_9(var_0_bool, var_1_int, var_2_float)
{
	var_3_bool = 0; // 0x10 PushV
	func_67(var_3_bool); // 0x11 NEW_2
	var_6_bool = var_3_bool == 0; // 0x13 Not
	if(var_6_bool == 0) goto Label_27; // 0x14 JumpB
	var_7_object = Obj(); // 0x15 PushV
	func_72(var_7_object); // 0x16 NEW_2
	RemoveActor(var_7_object); // 0x18 Func
	goto Label_28; // 0x1a Jump
	
Label_28:
	return 0; // 0x1c Return
	
Label_27:
	var_0_bool = 1; // 0x1b TMovB
}


task_0_event_6(var_0_bool)
{
	var_1_bool = var_0_bool; // 0x1d PushT
	if(var_1_bool == 0) goto Label_36; // 0x1e JumpB
	var_2_object = Obj(); // 0x1f PushV
	func_72(var_2_object); // 0x20 NEW_2
	RemoveActor(var_2_object); // 0x22 Func
	
Label_36:
	return 0; // 0x24 Return
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0; // 0x29 PushV
	var_6_bool = 0; // 0x2a PushV
	var_6_bool = 1; // 0x2b MovB
	var_7_bool = var_1_object == 0; // 0x2c Not
	if(var_7_bool == 0) goto Label_52; // 0x2d JumpB
	var_8_bool = 0; // 0x2e PushV
	func_78(var_8_bool); // 0x2f NEW_2
	var_12_bool = var_8_bool == 0; // 0x31 Not
	if(var_12_bool == 0) goto Label_52; // 0x32 JumpB
	var_6_bool = 0; // 0x33 MovB
	
Label_52:
	if(var_6_bool == 0) goto Label_54; // 0x34 JumpB
	return 4; // 0x35 Return
	
Label_54:
	IsOnGround(var_4_bool); // 0x36 ObjFunc
	var_13_bool = var_4_bool; // 0x38 Push
	if(var_13_bool == 0) goto Label_66; // 0x39 JumpB
	EventDisable(0); // 0x3a EventDisable
	IsOverrideActive(var_5_bool); // 0x3b Func
	var_14_bool = var_5_bool == 0; // 0x3d Not
	if(var_14_bool == 0) goto Label_65; // 0x3e JumpB
	WorkWithCorpse(var_1_object); // 0x3f Func
	
Label_65:
	EventEnable(0); // 0x41 EventEnable
	
Label_66:
	return 4; // 0x42 Return
}


main(var_0_bool)
{
	func_107(); // 0x1 NEW_2
	var_21_bool = 1; // 0x3 PushB
	SetVisibility(var_21_bool); // 0x4 Func
	var_0_bool = 0; // 0x6 TMovB
	var_22_int = 0; // 0x7 PushI
	var_23_int = 24; // 0x8 PushI
	SetTimeEvent(var_22_int, var_23_int); // 0x9 Func
	func_37(); // 0xc NEW_2
	return 0; // 0xe Return
}


func_67(var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0; // 0x43 PushV
	IsLoaded(var_5_bool); // 0x44 Func
	var_3_bool = var_5_bool; // 0x46 Mov
	return 2; // 0x47 Return
}


func_37()
{
	
Label_37:
	Hold(); // 0x25 Func
	goto Label_37; // 0x27 Jump
}


func_72(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x48 PushV
	self(var_4_object); // 0x49 Func
	var_2_object = var_4_object; // 0x4b Mov
	return 2; // 0x4c Return
}


func_107()
{
	var_1_int = 0; // 0x6b PushV
	func_84(var_1_int); // 0x6c NEW_2
	var_5_int = 1; // 0x6e PushI
	var_6_bool = var_1_int != var_5_int; // 0x6f Neq
	if(var_6_bool == 0) goto Label_114; // 0x70 JumpB
	return 0; // 0x71 Return
	
Label_114:
	var_7_string = ""; // 0x72 PushV
	var_7_string = "liver"; // 0x73 MovS
	func_90(var_7_string); // 0x74 NEW_2
	var_18_string = ""; // 0x76 PushV
	var_18_string = "kidney"; // 0x77 MovS
	func_90(var_18_string); // 0x78 NEW_2
	var_19_string = ""; // 0x7a PushV
	var_19_string = "heart"; // 0x7b MovS
	func_90(var_19_string); // 0x7c NEW_2
	var_20_string = ""; // 0x7e PushV
	var_20_string = "blood"; // 0x7f MovS
	func_90(var_20_string); // 0x80 NEW_2
	return 0; // 0x82 Return
}


func_78(var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0x4e PushV
	var_11_string = "nouse_container"; // 0x4f PushS
	GetVariable(var_11_string, var_10_int); // 0x50 Func
	var_8_bool = !var_10_int; // 0x52 Not2
	return 2; // 0x53 Return
}


func_84(var_1_int)
{
	var_2_int = 0; var_3_int = 0; // 0x54 PushV
	var_4_string = "branch"; // 0x55 PushS
	GetVariable(var_4_string, var_3_int); // 0x56 Func
	var_1_int = var_3_int; // 0x58 Mov
	return 2; // 0x59 Return
}


func_90(var_7_string)
{
	var_8_object = Obj(); var_9_int = 0; var_10_bool = 0; var_11_object = Obj(); var_12_int = 0; var_13_bool = 0; // 0x5a PushV
	CreateInvItem(var_11_object); // 0x5b Func
	SetItemName(var_7_string); // 0x5d ObjFunc
	var_14_string = "Organ"; // 0x5f PushS
	var_15_int = 1; // 0x60 PushI
	SetProperty(var_14_string, var_15_int); // 0x61 ObjFunc
	GetItemID(var_12_int); // 0x63 ObjFunc
	var_16_int = 0; // 0x65 PushI
	var_17_int = 1; // 0x66 PushI
	AddItem(var_13_bool, var_11_object, var_16_int, var_17_int); // 0x67 Func
	return 6; // 0x69 Return
}


