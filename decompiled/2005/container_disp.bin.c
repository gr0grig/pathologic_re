task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x7 PushV
	var_4_string = "cleanup"; // 0x8 PushS
	var_5_bool = var_1_string == var_4_string; // 0x9 Eq
	if(var_5_bool == 0) goto Label_22; // 0xa JumpB
	var_0_bool = 1; // 0xb TMovB
	IsLoaded(var_3_bool); // 0xc Func
	var_6_bool = var_3_bool == 0; // 0xe Not
	if(var_6_bool == 0) goto Label_21; // 0xf JumpB
	var_7_object = Obj(); // 0x10 PushV
	func_65(var_7_object); // 0x11 NEW_2
	RemoveActor(var_7_object); // 0x13 Func
	
Label_21:
	goto Label_26; // 0x15 Jump
	
Label_26:
	return 2; // 0x1a Return
	
Label_22:
	var_10_string = "restore"; // 0x16 PushS
	var_11_bool = var_1_string == var_10_string; // 0x17 Eq
	if(var_11_bool == 0) goto Label_26; // 0x18 JumpB
	var_0_bool = 0; // 0x19 TMovB
}


task_0_event_6(var_0_bool)
{
	var_1_bool = var_0_bool; // 0x1b PushT
	if(var_1_bool == 0) goto Label_34; // 0x1c JumpB
	var_2_object = Obj(); // 0x1d PushV
	func_65(var_2_object); // 0x1e NEW_2
	RemoveActor(var_2_object); // 0x20 Func
	
Label_34:
	return 0; // 0x22 Return
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0; // 0x27 PushV
	var_6_bool = 0; // 0x28 PushV
	var_6_bool = 1; // 0x29 MovB
	var_7_bool = var_1_object == 0; // 0x2a Not
	if(var_7_bool == 0) goto Label_50; // 0x2b JumpB
	var_8_bool = 0; // 0x2c PushV
	func_71(var_8_bool); // 0x2d NEW_2
	var_12_bool = var_8_bool == 0; // 0x2f Not
	if(var_12_bool == 0) goto Label_50; // 0x30 JumpB
	var_6_bool = 0; // 0x31 MovB
	
Label_50:
	if(var_6_bool == 0) goto Label_52; // 0x32 JumpB
	return 4; // 0x33 Return
	
Label_52:
	IsOnGround(var_4_bool); // 0x34 ObjFunc
	var_13_bool = var_4_bool; // 0x36 Push
	if(var_13_bool == 0) goto Label_64; // 0x37 JumpB
	EventDisable(0); // 0x38 EventDisable
	IsOverrideActive(var_5_bool); // 0x39 Func
	var_14_bool = var_5_bool == 0; // 0x3b Not
	if(var_14_bool == 0) goto Label_63; // 0x3c JumpB
	Barter(var_1_object); // 0x3d Func
	
Label_63:
	EventEnable(0); // 0x3f EventEnable
	
Label_64:
	return 4; // 0x40 Return
}


main(var_0_bool)
{
	var_1_bool = 1; // 0x0 PushB
	SetVisibility(var_1_bool); // 0x1 Func
	func_35(); // 0x4 NEW_2
	return 0; // 0x6 Return
}


func_65(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x41 PushV
	self(var_4_object); // 0x42 Func
	var_2_object = var_4_object; // 0x44 Mov
	return 2; // 0x45 Return
}


func_35()
{
	
Label_35:
	Hold(); // 0x23 Func
	goto Label_35; // 0x25 Jump
}


func_71(var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0x47 PushV
	var_11_string = "nouse_container"; // 0x48 PushS
	GetVariable(var_11_string, var_10_int); // 0x49 Func
	var_8_bool = !var_10_int; // 0x4b Not2
	return 2; // 0x4c Return
}


