task_0_event_6(var_0_bool, var_1_bool)
{
	var_2_bool = var_1_bool == 0; // 0x11 Not
	if(var_2_bool == 0) goto Label_23; // 0x12 JumpB
	var_3_bool = 1; // 0x13 PushB
	SetVisibility(var_3_bool); // 0x14 Func
	var_1_bool = 1; // 0x16 TMovB
	
Label_23:
	func_59(); // 0x18 NEW_2
	return 0; // 0x1a Return
}


task_0_event_26(var_0_bool, var_1_bool, var_2_string)
{
	var_3_bool = 0; var_4_bool = 0; // 0x1f PushV
	var_5_string = "cleanup"; // 0x20 PushS
	var_6_bool = var_2_string == var_5_string; // 0x21 Eq
	if(var_6_bool == 0) goto Label_54; // 0x22 JumpB
	var_0_bool = 1; // 0x23 TMovB
	IsLoaded(var_4_bool); // 0x24 Func
	var_7_bool = 0; // 0x26 PushV
	var_7_bool = 0; // 0x27 MovB
	var_8_bool = var_4_bool == 0; // 0x28 Not
	if(var_8_bool == 0) goto Label_47; // 0x29 JumpB
	var_9_bool = 0; // 0x2a PushV
	func_75(var_9_bool); // 0x2b NEW_2
	if(var_9_bool == 0) goto Label_47; // 0x2d JumpB
	var_7_bool = 1; // 0x2e MovB
	
Label_47:
	if(var_7_bool == 0) goto Label_53; // 0x2f JumpB
	var_10_object = Obj(); // 0x30 PushV
	func_82(var_10_object); // 0x31 NEW_2
	RemoveActor(var_10_object); // 0x33 Func
	
Label_53:
	goto Label_58; // 0x35 Jump
	
Label_58:
	return 2; // 0x3a Return
	
Label_54:
	var_13_string = "restore"; // 0x36 PushS
	var_14_bool = var_2_string == var_13_string; // 0x37 Eq
	if(var_14_bool == 0) goto Label_58; // 0x38 JumpB
	var_0_bool = 0; // 0x39 TMovB
}


main(var_0_bool, var_1_bool)
{
	sync(); // 0x0 Func
	var_2_bool = 0; // 0x2 PushV
	func_77(var_2_bool); // 0x3 NEW_2
	var_5_bool = var_2_bool == 0; // 0x5 Not
	if(var_5_bool == 0) goto Label_12; // 0x6 JumpB
	var_6_bool = 1; // 0x7 PushB
	SetVisibility(var_6_bool); // 0x8 Func
	var_1_bool = 1; // 0xa TMovB
	goto Label_13; // 0xb Jump
	
Label_13:
	func_27(); // 0xe NEW_2
	return 0; // 0x10 Return
	
Label_12:
	var_1_bool = 0; // 0xc TMovB
}


func_27()
{
	
Label_27:
	Hold(); // 0x1b Func
	goto Label_27; // 0x1d Jump
}


func_75(var_9_bool)
{
	var_9_bool = 1; // 0x4b MovB
	return 0; // 0x4c Return
}


func_77(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x4d PushV
	IsLoaded(var_4_bool); // 0x4e Func
	var_2_bool = var_4_bool; // 0x50 Mov
	return 2; // 0x51 Return
}


func_82(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x52 PushV
	self(var_12_object); // 0x53 Func
	var_10_object = var_12_object; // 0x55 Mov
	return 2; // 0x56 Return
}


func_59()
{
	var_4_bool = 0; // 0x3b PushV
	var_4_bool = 0; // 0x3c MovB
	var_5_bool = var_0_bool; // 0x3d PushT
	if(var_5_bool == 0) goto Label_68; // 0x3e JumpB
	var_6_bool = 0; // 0x3f PushV
	func_75(var_6_bool); // 0x40 NEW_2
	if(var_6_bool == 0) goto Label_68; // 0x42 JumpB
	var_4_bool = 1; // 0x43 MovB
	
Label_68:
	if(var_4_bool == 0) goto Label_74; // 0x44 JumpB
	var_7_object = Obj(); // 0x45 PushV
	func_82(var_7_object); // 0x46 NEW_2
	RemoveActor(var_7_object); // 0x48 Func
	
Label_74:
	return 0; // 0x4a Return
}


