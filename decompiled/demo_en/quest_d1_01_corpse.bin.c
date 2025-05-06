task_0_event_9(var_0_bool, var_1_int, var_2_float)
{
	var_3_bool = 0; // 0xd PushV
	func_64(var_3_bool); // 0xe NEW_2
	var_6_bool = var_3_bool == 0; // 0x10 Not
	if(var_6_bool == 0) goto Label_24; // 0x11 JumpB
	var_7_object = Obj(); // 0x12 PushV
	func_69(var_7_object); // 0x13 NEW_2
	RemoveActor(var_7_object); // 0x15 Func
	goto Label_25; // 0x17 Jump
	
Label_25:
	return 0; // 0x19 Return
	
Label_24:
	var_0_bool = 1; // 0x18 TMovB
}


task_0_event_6(var_0_bool)
{
	var_1_bool = var_0_bool; // 0x1a PushT
	if(var_1_bool == 0) goto Label_33; // 0x1b JumpB
	var_2_object = Obj(); // 0x1c PushV
	func_69(var_2_object); // 0x1d NEW_2
	RemoveActor(var_2_object); // 0x1f Func
	
Label_33:
	return 0; // 0x21 Return
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0; // 0x26 PushV
	var_6_bool = 0; // 0x27 PushV
	var_6_bool = 1; // 0x28 MovB
	var_7_bool = var_1_object == 0; // 0x29 Not
	if(var_7_bool == 0) goto Label_49; // 0x2a JumpB
	var_8_bool = 0; // 0x2b PushV
	func_75(var_8_bool); // 0x2c NEW_2
	var_12_bool = var_8_bool == 0; // 0x2e Not
	if(var_12_bool == 0) goto Label_49; // 0x2f JumpB
	var_6_bool = 0; // 0x30 MovB
	
Label_49:
	if(var_6_bool == 0) goto Label_51; // 0x31 JumpB
	return 4; // 0x32 Return
	
Label_51:
	IsOnGround(var_4_bool); // 0x33 ObjFunc
	var_13_bool = var_4_bool; // 0x35 Push
	if(var_13_bool == 0) goto Label_63; // 0x36 JumpB
	EventDisable(0); // 0x37 EventDisable
	IsOverrideActive(var_5_bool); // 0x38 Func
	var_14_bool = var_5_bool == 0; // 0x3a Not
	if(var_14_bool == 0) goto Label_62; // 0x3b JumpB
	Barter(var_1_object); // 0x3c Func
	
Label_62:
	EventEnable(0); // 0x3e EventEnable
	
Label_63:
	return 4; // 0x3f Return
}


main(var_0_bool)
{
	var_1_bool = 1; // 0x0 PushB
	SetVisibility(var_1_bool); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	var_2_int = 0; // 0x4 PushI
	var_3_int = 24; // 0x5 PushI
	SetTimeEvent(var_2_int, var_3_int); // 0x6 Func
	func_34(); // 0x9 NEW_2
	return 0; // 0xb Return
}


func_64(var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0; // 0x40 PushV
	IsLoaded(var_5_bool); // 0x41 Func
	var_3_bool = var_5_bool; // 0x43 Mov
	return 2; // 0x44 Return
}


func_34()
{
	
Label_34:
	Hold(); // 0x22 Func
	goto Label_34; // 0x24 Jump
}


func_75(var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0x4b PushV
	var_11_string = "nouse_container"; // 0x4c PushS
	GetVariable(var_11_string, var_10_int); // 0x4d Func
	var_8_bool = !var_10_int; // 0x4f Not2
	return 2; // 0x50 Return
}


func_69(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x45 PushV
	self(var_4_object); // 0x46 Func
	var_2_object = var_4_object; // 0x48 Mov
	return 2; // 0x49 Return
}


