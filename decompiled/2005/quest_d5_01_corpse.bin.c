task_0_event_0(var_0_bool, var_1_bool, var_2_object)
{
	var_3_bool = 0; var_4_bool = 0; // 0x0 PushV
	IsOverrideActive(var_4_bool); // 0x1 Func
	var_5_bool = var_4_bool == 0; // 0x3 Not
	if(var_5_bool == 0) goto Label_7; // 0x4 JumpB
	Barter(var_2_object); // 0x5 Func
	
Label_7:
	return 2; // 0x7 Return
}


task_0_event_6(var_0_bool, var_1_bool)
{
	var_2_bool = var_1_bool == 0; // 0x1b Not
	if(var_2_bool == 0) goto Label_33; // 0x1c JumpB
	var_3_bool = 1; // 0x1d PushB
	SetVisibility(var_3_bool); // 0x1e Func
	var_1_bool = 1; // 0x20 TMovB
	
Label_33:
	func_69(); // 0x22 NEW_2
	return 0; // 0x24 Return
}


task_0_event_26(var_0_bool, var_1_bool, var_2_string)
{
	var_3_bool = 0; var_4_bool = 0; // 0x29 PushV
	var_5_string = "cleanup"; // 0x2a PushS
	var_6_bool = var_2_string == var_5_string; // 0x2b Eq
	if(var_6_bool == 0) goto Label_64; // 0x2c JumpB
	var_0_bool = 1; // 0x2d TMovB
	IsLoaded(var_4_bool); // 0x2e Func
	var_7_bool = 0; // 0x30 PushV
	var_7_bool = 0; // 0x31 MovB
	var_8_bool = var_4_bool == 0; // 0x32 Not
	if(var_8_bool == 0) goto Label_57; // 0x33 JumpB
	var_9_bool = 0; // 0x34 PushV
	func_8(var_9_bool); // 0x35 NEW_2
	if(var_9_bool == 0) goto Label_57; // 0x37 JumpB
	var_7_bool = 1; // 0x38 MovB
	
Label_57:
	if(var_7_bool == 0) goto Label_63; // 0x39 JumpB
	var_10_object = Obj(); // 0x3a PushV
	func_90(var_10_object); // 0x3b NEW_2
	RemoveActor(var_10_object); // 0x3d Func
	
Label_63:
	goto Label_68; // 0x3f Jump
	
Label_68:
	return 2; // 0x44 Return
	
Label_64:
	var_13_string = "restore"; // 0x40 PushS
	var_14_bool = var_2_string == var_13_string; // 0x41 Eq
	if(var_14_bool == 0) goto Label_68; // 0x42 JumpB
	var_0_bool = 0; // 0x43 TMovB
}


main(var_0_bool, var_1_bool)
{
	sync(); // 0xa Func
	var_2_bool = 0; // 0xc PushV
	func_85(var_2_bool); // 0xd NEW_2
	var_5_bool = var_2_bool == 0; // 0xf Not
	if(var_5_bool == 0) goto Label_22; // 0x10 JumpB
	var_6_bool = 1; // 0x11 PushB
	SetVisibility(var_6_bool); // 0x12 Func
	var_1_bool = 1; // 0x14 TMovB
	goto Label_23; // 0x15 Jump
	
Label_23:
	func_37(); // 0x18 NEW_2
	return 0; // 0x1a Return
	
Label_22:
	var_1_bool = 0; // 0x16 TMovB
}


func_37()
{
	
Label_37:
	Hold(); // 0x25 Func
	goto Label_37; // 0x27 Jump
}


func_69()
{
	var_4_bool = 0; // 0x45 PushV
	var_4_bool = 0; // 0x46 MovB
	var_5_bool = var_0_bool; // 0x47 PushT
	if(var_5_bool == 0) goto Label_78; // 0x48 JumpB
	var_6_bool = 0; // 0x49 PushV
	func_8(var_6_bool); // 0x4a NEW_2
	if(var_6_bool == 0) goto Label_78; // 0x4c JumpB
	var_4_bool = 1; // 0x4d MovB
	
Label_78:
	if(var_4_bool == 0) goto Label_84; // 0x4e JumpB
	var_7_object = Obj(); // 0x4f PushV
	func_90(var_7_object); // 0x50 NEW_2
	RemoveActor(var_7_object); // 0x52 Func
	
Label_84:
	return 0; // 0x54 Return
}


func_8(var_9_bool)
{
	var_9_bool = 1; // 0x8 MovB
	return 0; // 0x9 Return
}


func_85(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x55 PushV
	IsLoaded(var_4_bool); // 0x56 Func
	var_2_bool = var_4_bool; // 0x58 Mov
	return 2; // 0x59 Return
}


func_90(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x5a PushV
	self(var_12_object); // 0x5b Func
	var_10_object = var_12_object; // 0x5d Mov
	return 2; // 0x5e Return
}


