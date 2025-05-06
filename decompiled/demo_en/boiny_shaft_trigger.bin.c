task_0_event_26(var_0_bool, var_1_string)
{
	var_2_string = "activate"; // 0x5 PushS
	var_3_bool = var_1_string == var_2_string; // 0x6 Eq
	if(var_3_bool == 0) goto Label_10; // 0x7 JumpB
	var_0_bool = 1; // 0x8 TMovB
	goto Label_14; // 0x9 Jump
	
Label_14:
	return 0; // 0xe Return
	
Label_10:
	var_4_string = "deactivate"; // 0xa PushS
	var_5_bool = var_1_string == var_4_string; // 0xb Eq
	if(var_5_bool == 0) goto Label_14; // 0xc JumpB
	var_0_bool = 0; // 0xd TMovB
}


task_0_event_23(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; // 0xf PushV
	IsPlayerActor(var_1_object, var_3_bool); // 0x10 Func
	var_4_bool = var_3_bool; // 0x12 Push
	if(var_4_bool == 0) goto Label_32; // 0x13 JumpB
	var_5_bool = var_0_bool; // 0x14 PushT
	if(var_5_bool == 0) goto Label_28; // 0x15 JumpB
	var_6_bool = 0; var_7_string = ""; var_8_string = ""; // 0x16 PushV
	var_7_string = "quest_b11_01"; // 0x17 MovS
	var_8_string = "shaft_drop"; // 0x18 MovS
	func_33(var_6_bool, var_7_string, var_8_string); // 0x19 NEW_2
	goto Label_32; // 0x1b Jump
	
Label_32:
	return 2; // 0x20 Return
	
Label_28:
	var_12_string = "health"; // 0x1c PushS
	var_13_int = 0; // 0x1d PushI
	SetProperty(var_12_string, var_13_int); // 0x1e ObjFunc
}


main(var_0_bool)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_33(var_6_bool, var_7_string, var_8_string)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x21 PushV
	FindActor(var_10_object, var_7_string); // 0x22 Func
	var_11_bool = var_10_object == 0; // 0x24 NullEq
	if(var_11_bool == 0) goto Label_40; // 0x25 JumpB
	var_6_bool = 0; // 0x26 MovB
	return 2; // 0x27 Return
	
Label_40:
	Trigger(var_10_object, var_8_string); // 0x28 Func
	var_6_bool = 1; // 0x2a MovB
	return 2; // 0x2b Return
}


