task_0_event_6()
{
	var_0_object = Obj(); // 0xa PushV
	func_46(var_0_object); // 0xb NEW_2
	RemoveActor(var_0_object); // 0xd Func
	return 0; // 0xf Return
}


task_0_event_0(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x14 PushV
	var_5_bool = 0; // 0x15 PushV
	var_5_bool = 1; // 0x16 MovB
	var_6_bool = var_0_object == 0; // 0x17 Not
	if(var_6_bool == 0) goto Label_31; // 0x18 JumpB
	var_7_bool = 0; // 0x19 PushV
	func_52(var_7_bool); // 0x1a NEW_2
	var_11_bool = var_7_bool == 0; // 0x1c Not
	if(var_11_bool == 0) goto Label_31; // 0x1d JumpB
	var_5_bool = 0; // 0x1e MovB
	
Label_31:
	if(var_5_bool == 0) goto Label_33; // 0x1f JumpB
	return 4; // 0x20 Return
	
Label_33:
	IsOnGround(var_3_bool); // 0x21 ObjFunc
	var_12_bool = var_3_bool; // 0x23 Push
	if(var_12_bool == 0) goto Label_45; // 0x24 JumpB
	EventDisable(0); // 0x25 EventDisable
	IsOverrideActive(var_4_bool); // 0x26 Func
	var_13_bool = var_4_bool == 0; // 0x28 Not
	if(var_13_bool == 0) goto Label_44; // 0x29 JumpB
	WorkWithCorpse(var_0_object); // 0x2a Func
	
Label_44:
	EventEnable(0); // 0x2c EventEnable
	
Label_45:
	return 4; // 0x2d Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetVisibility(var_0_bool); // 0x1 Func
	func_81(); // 0x4 NEW_2
	func_16(); // 0x7 NEW_2
	return 0; // 0x9 Return
}


func_64(var_7_string)
{
	var_8_object = Obj(); var_9_int = 0; var_10_bool = 0; var_11_object = Obj(); var_12_int = 0; var_13_bool = 0; // 0x40 PushV
	CreateInvItem(var_11_object); // 0x41 Func
	SetItemName(var_7_string); // 0x43 ObjFunc
	var_14_string = "Organ"; // 0x45 PushS
	var_15_int = 1; // 0x46 PushI
	SetProperty(var_14_string, var_15_int); // 0x47 ObjFunc
	GetItemID(var_12_int); // 0x49 ObjFunc
	var_16_int = 0; // 0x4b PushI
	var_17_int = 1; // 0x4c PushI
	AddItem(var_13_bool, var_11_object, var_16_int, var_17_int); // 0x4d Func
	return 6; // 0x4f Return
}


func_46(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x2e PushV
	self(var_2_object); // 0x2f Func
	var_0_object = var_2_object; // 0x31 Mov
	return 2; // 0x32 Return
}


func_16()
{
	
Label_16:
	Hold(); // 0x10 Func
	goto Label_16; // 0x12 Jump
}


func_81()
{
	var_1_int = 0; // 0x51 PushV
	func_58(var_1_int); // 0x52 NEW_2
	var_5_int = 1; // 0x54 PushI
	var_6_bool = var_1_int != var_5_int; // 0x55 Neq
	if(var_6_bool == 0) goto Label_88; // 0x56 JumpB
	return 0; // 0x57 Return
	
Label_88:
	var_7_string = ""; // 0x58 PushV
	var_7_string = "liver"; // 0x59 MovS
	func_64(var_7_string); // 0x5a NEW_2
	var_18_string = ""; // 0x5c PushV
	var_18_string = "kidney"; // 0x5d MovS
	func_64(var_18_string); // 0x5e NEW_2
	var_19_string = ""; // 0x60 PushV
	var_19_string = "heart"; // 0x61 MovS
	func_64(var_19_string); // 0x62 NEW_2
	var_20_string = ""; // 0x64 PushV
	var_20_string = "blood"; // 0x65 MovS
	func_64(var_20_string); // 0x66 NEW_2
	return 0; // 0x68 Return
}


func_52(var_7_bool)
{
	var_8_int = 0; var_9_int = 0; // 0x34 PushV
	var_10_string = "nouse_container"; // 0x35 PushS
	GetVariable(var_10_string, var_9_int); // 0x36 Func
	var_7_bool = !var_9_int; // 0x38 Not2
	return 2; // 0x39 Return
}


func_58(var_1_int)
{
	var_2_int = 0; var_3_int = 0; // 0x3a PushV
	var_4_string = "branch"; // 0x3b PushS
	GetVariable(var_4_string, var_3_int); // 0x3c Func
	var_1_int = var_3_int; // 0x3e Mov
	return 2; // 0x3f Return
}


