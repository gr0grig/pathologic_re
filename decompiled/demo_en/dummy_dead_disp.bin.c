task_0_event_5(var_0_bool)
{
	var_1_string = ""; var_2_string = ""; // 0x11 PushV
	var_3_string = "animation"; // 0x12 PushS
	GetProperty(var_3_string, var_2_string); // 0x13 Func
	var_4_string = "all"; // 0x15 PushS
	LockAnimationEnd(var_4_string, var_2_string); // 0x16 Func
	return 2; // 0x18 Return
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; // 0x1d PushV
	var_4_string = "cleanup"; // 0x1e PushS
	var_5_bool = var_1_string == var_4_string; // 0x1f Eq
	if(var_5_bool == 0) goto Label_52; // 0x20 JumpB
	var_0_bool = 1; // 0x21 TMovB
	IsLoaded(var_3_bool); // 0x22 Func
	var_6_bool = 0; // 0x24 PushV
	var_6_bool = 0; // 0x25 MovB
	var_7_bool = var_3_bool == 0; // 0x26 Not
	if(var_7_bool == 0) goto Label_45; // 0x27 JumpB
	var_8_bool = 0; // 0x28 PushV
	func_73(var_8_bool); // 0x29 NEW_2
	if(var_8_bool == 0) goto Label_45; // 0x2b JumpB
	var_6_bool = 1; // 0x2c MovB
	
Label_45:
	if(var_6_bool == 0) goto Label_51; // 0x2d JumpB
	var_9_object = Obj(); // 0x2e PushV
	func_75(var_9_object); // 0x2f NEW_2
	RemoveActor(var_9_object); // 0x31 Func
	
Label_51:
	goto Label_56; // 0x33 Jump
	
Label_56:
	return 2; // 0x38 Return
	
Label_52:
	var_12_string = "restore"; // 0x34 PushS
	var_13_bool = var_1_string == var_12_string; // 0x35 Eq
	if(var_13_bool == 0) goto Label_56; // 0x36 JumpB
	var_0_bool = 0; // 0x37 TMovB
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0; // 0x39 PushV
	var_1_bool = 0; // 0x3a MovB
	var_2_bool = var_0_bool; // 0x3b PushT
	if(var_2_bool == 0) goto Label_66; // 0x3c JumpB
	var_3_bool = 0; // 0x3d PushV
	func_73(var_3_bool); // 0x3e NEW_2
	if(var_3_bool == 0) goto Label_66; // 0x40 JumpB
	var_1_bool = 1; // 0x41 MovB
	
Label_66:
	if(var_1_bool == 0) goto Label_72; // 0x42 JumpB
	var_4_object = Obj(); // 0x43 PushV
	func_75(var_4_object); // 0x44 NEW_2
	RemoveActor(var_4_object); // 0x46 Func
	
Label_72:
	return 0; // 0x48 Return
}


main(var_0_bool)
{
	var_1_string = ""; var_2_string = ""; // 0x0 PushV
	RemoveRTEnvelope(); // 0x1 Func
	RemoveEnvelope(); // 0x3 Func
	SetDeathState(); // 0x5 Func
	var_3_string = "animation"; // 0x7 PushS
	GetProperty(var_3_string, var_2_string); // 0x8 Func
	var_4_string = "all"; // 0xa PushS
	LockAnimationEnd(var_4_string, var_2_string); // 0xb Func
	func_25(); // 0xe NEW_2
	return 2; // 0x10 Return
}


func_73(var_3_bool)
{
	var_3_bool = 1; // 0x49 MovB
	return 0; // 0x4a Return
}


func_75(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj(); // 0x4b PushV
	self(var_6_object); // 0x4c Func
	var_4_object = var_6_object; // 0x4e Mov
	return 2; // 0x4f Return
}


func_25()
{
	
Label_25:
	Hold(); // 0x19 Func
	goto Label_25; // 0x1b Jump
}


