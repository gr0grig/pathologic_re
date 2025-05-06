task_0_event_23(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; // 0x0 PushV
	IsPlayerActor(var_1_object, var_3_bool); // 0x1 Func
	var_4_bool = var_3_bool; // 0x3 Push
	if(var_4_bool == 0) goto Label_16; // 0x4 JumpB
	EventDisable(23); // 0x5 EventDisable
	var_5_bool = 0; var_6_string = ""; var_7_string = ""; // 0x6 PushV
	var_6_string = "quest_d3_02"; // 0x7 MovS
	var_7_string = "butcher_trigger"; // 0x8 MovS
	func_73(var_5_bool, var_6_string, var_7_string); // 0x9 Call
	var_11_object = Obj(); // 0xb PushV
	func_67(var_11_object); // 0xc Call
	RemoveActor(var_11_object); // 0xe Func
	
Label_16:
	return 2; // 0x10 Return
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x15 PushV
	var_4_string = "cleanup"; // 0x16 PushS
	var_5_bool = var_1_string == var_4_string; // 0x17 Eq
	if(var_5_bool == 0) goto Label_44; // 0x18 JumpB
	var_0_bool = 1; // 0x19 TMovB
	IsLoaded(var_3_bool); // 0x1a Func
	var_6_bool = 0; // 0x1c PushV
	var_6_bool = 0; // 0x1d MovB
	var_7_bool = var_3_bool == 0; // 0x1e Not
	if(var_7_bool == 0) goto Label_37; // 0x1f JumpB
	var_8_bool = 0; // 0x20 PushV
	func_65(var_8_bool); // 0x21 Call
	if(var_8_bool == 0) goto Label_37; // 0x23 JumpB
	var_6_bool = 1; // 0x24 MovB
	
Label_37:
	if(var_6_bool == 0) goto Label_43; // 0x25 JumpB
	var_9_object = Obj(); // 0x26 PushV
	func_67(var_9_object); // 0x27 Call
	RemoveActor(var_9_object); // 0x29 Func
	
Label_43:
	goto Label_48; // 0x2b Jump
	
Label_48:
	return 2; // 0x30 Return
	
Label_44:
	var_12_string = "restore"; // 0x2c PushS
	var_13_bool = var_1_string == var_12_string; // 0x2d Eq
	if(var_13_bool == 0) goto Label_48; // 0x2e JumpB
	var_0_bool = 0; // 0x2f TMovB
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0; // 0x31 PushV
	var_1_bool = 0; // 0x32 MovB
	var_2_bool = var_0_bool; // 0x33 PushT
	if(var_2_bool == 0) goto Label_58; // 0x34 JumpB
	var_3_bool = 0; // 0x35 PushV
	func_65(var_3_bool); // 0x36 Call
	if(var_3_bool == 0) goto Label_58; // 0x38 JumpB
	var_1_bool = 1; // 0x39 MovB
	
Label_58:
	if(var_1_bool == 0) goto Label_64; // 0x3a JumpB
	var_4_object = Obj(); // 0x3b PushV
	func_67(var_4_object); // 0x3c Call
	RemoveActor(var_4_object); // 0x3e Func
	
Label_64:
	return 0; // 0x40 Return
}


main(var_0_bool)
{
	
Label_17:
	Hold(); // 0x11 Func
	goto Label_17; // 0x13 Jump
}


func_65(var_3_bool)
{
	var_3_bool = 1; // 0x41 MovB
	return 0; // 0x42 Return
}


func_73(var_5_bool, var_6_string, var_7_string)
{
	var_8_object = Obj(); var_9_object = Obj(); // 0x49 PushV
	FindActor(var_9_object, var_6_string); // 0x4a Func
	var_10_bool = var_9_object == 0; // 0x4c NullEq
	if(var_10_bool == 0) goto Label_80; // 0x4d JumpB
	var_5_bool = 0; // 0x4e MovB
	return 2; // 0x4f Return
	
Label_80:
	Trigger(var_9_object, var_7_string); // 0x50 Func
	var_5_bool = 1; // 0x52 MovB
	return 2; // 0x53 Return
}


func_67(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x43 PushV
	self(var_6_object); // 0x44 Func
	var_4_object = var_6_object; // 0x46 Mov
	return 2; // 0x47 Return
}


