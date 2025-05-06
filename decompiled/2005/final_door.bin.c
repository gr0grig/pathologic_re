task_0_event_0(var_0_object)
{
	EventDisable(0); // 0x1 EventDisable
	var_1_string = "on use"; // 0x2 PushS
	Trace(var_1_string); // 0x3 Func
	var_2_string = "open"; // 0x5 PushS
	TriggerWorld(var_2_string); // 0x6 Func
	return 0; // 0x8 Return
}


task_0_event_26(var_0_string)
{
	var_1_object = Obj(); var_2_object = Obj(); // 0x9 PushV
	var_3_string = "trigger "; // 0xa PushS
	var_4_int = var_3_string + var_0_string; // 0xb Add
	Trace(var_4_int); // 0xc Func
	var_5_string = "open"; // 0xe PushS
	var_6_bool = var_0_string == var_5_string; // 0xf Eq
	if(var_6_bool == 0) goto Label_25; // 0x10 JumpB
	var_7_string = "player"; // 0x11 PushS
	FindActor(var_2_object, var_7_string); // 0x12 Func
	var_8_object = Obj(); // 0x14 PushV
	var_8_object = var_2_object; // 0x15 Mov
	func_30(var_8_object); // 0x16 NEW_2
	var_2_object = 0; // 0x18 SetNull
	
Label_25:
	return 2; // 0x19 Return
}


task_0_event_38(var_0_object)
{
	var_1_bool = 0; var_2_bool = 0; // 0x4c PushV
	var_3_bool = 0; // 0x4d PushV
	var_3_bool = 1; // 0x4e MovB
	var_4_bool = var_0_object == 0; // 0x4f Not
	if(var_4_bool == 0) goto Label_88; // 0x50 JumpB
	var_5_bool = 0; var_6_object = Obj(); // 0x51 PushV
	var_6_object = var_0_object; // 0x52 Mov
	func_96(var_6_object); // 0x53 NEW_2
	var_12_bool = var_5_bool == 0; // 0x55 Not
	if(var_12_bool == 0) goto Label_88; // 0x56 JumpB
	var_3_bool = 0; // 0x57 MovB
	
Label_88:
	if(var_3_bool == 0) goto Label_90; // 0x58 JumpB
	return 2; // 0x59 Return
	
Label_90:
	ClassifyActor(var_2_bool, var_0_object); // 0x5a Func
	var_13_bool = var_2_bool == 0; // 0x5c Not
	Open(var_13_bool); // 0x5d Func
	return 2; // 0x5f Return
}


main()
{
	
Label_26:
	Hold(); // 0x1a Func
	goto Label_26; // 0x1c Jump
}


func_96(var_5_bool)
{
	var_7_bool = 0; // 0x61 PushV
	func_102(var_7_bool); // 0x62 NEW_2
	var_5_bool = !var_7_bool; // 0x64 Not2
	return 0; // 0x65 Return
}


func_102(var_7_bool)
{
	var_8_int = 0; var_9_int = 0; // 0x66 PushV
	var_10_string = "locked"; // 0x67 PushS
	GetProperty(var_10_string, var_9_int); // 0x68 Func
	var_11_int = 0; // 0x6a PushI
	var_7_bool = var_9_int != var_11_int; // 0x6b Neq2
	return 2; // 0x6c Return
}


func_30(var_8_object)
{
	var_9_bool = 0; var_10_int = 0; var_11_bool = 0; var_12_int = 0; // 0x1e PushV
	var_13_bool = var_8_object == 0; // 0x1f Not
	if(var_13_bool == 0) goto Label_34; // 0x20 JumpB
	return 4; // 0x21 Return
	
Label_34:
	var_14_bool = 0; var_15_object = Obj(); // 0x22 PushV
	var_15_object = var_8_object; // 0x23 Mov
	func_96(var_15_object); // 0x24 NEW_2
	var_21_bool = var_14_bool == 0; // 0x26 Not
	if(var_21_bool == 0) goto Label_47; // 0x27 JumpB
	var_22_string = "door_closed"; // 0x28 PushS
	PlaySound(var_22_string); // 0x29 Func
	var_23_string = "Door is locked"; // 0x2b PushS
	Trace(var_23_string); // 0x2c Func
	return 4; // 0x2e Return
	
Label_47:
	ClassifyActor(var_11_bool, var_8_object); // 0x2f Func
	var_11_bool = !var_11_bool; // 0x31 Not2
	GetOpenSide(var_12_int); // 0x32 Func
	var_24_bool = var_12_int == 0; // 0x34 Not
	if(var_24_bool == 0) goto Label_57; // 0x35 JumpB
	Open(var_11_bool); // 0x36 Func
	goto Label_75; // 0x38 Jump
	
Label_75:
	return 4; // 0x4b Return
	
Label_57:
	var_25_int = 0; // 0x39 PushI
	var_26_bool = var_12_int > var_25_int; // 0x3a GT
	if(var_26_bool == 0) goto Label_68; // 0x3b JumpB
	var_27_bool = var_11_bool; // 0x3c Push
	if(var_27_bool == 0) goto Label_65; // 0x3d JumpB
	Close(); // 0x3e Func
	goto Label_67; // 0x40 Jump
	
Label_67:
	goto Label_75; // 0x43 Jump
	
Label_65:
	Open(var_11_bool); // 0x41 Func
	
Label_68:
	var_28_bool = var_11_bool; // 0x44 Push
	if(var_28_bool == 0) goto Label_73; // 0x45 JumpB
	Open(var_11_bool); // 0x46 Func
	goto Label_75; // 0x48 Jump
	
Label_73:
	Close(); // 0x49 Func
}


