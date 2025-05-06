task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_string = ""; // 0xd PushV
	var_3_string = "quest_b10_01_cutscene"; // 0xe MovS
	func_40(var_2_object, var_3_string); // 0xf NEW_2
	func_21(var_1_object); // 0x12 NEW_2
	return 0; // 0x14 Return
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_string = "enable_use"; // 0x1b PushS
	var_3_bool = var_1_string == var_2_string; // 0x1c Eq
	if(var_3_bool == 0) goto Label_33; // 0x1d JumpB
	SetUsable(); // 0x1e Func
	goto Label_39; // 0x20 Jump
	
Label_39:
	return 0; // 0x27 Return
	
Label_33:
	var_4_string = "disable_use"; // 0x21 PushS
	var_5_bool = var_1_string == var_4_string; // 0x22 Eq
	if(var_5_bool == 0) goto Label_39; // 0x23 JumpB
	func_21(var_1_string); // 0x25 NEW_2
}


main(var_0_bool)
{
	var_1_bool = 1; // 0x0 PushB
	SetVisibility(var_1_bool); // 0x1 Func
	
Label_3:
	var_2_bool = var_0_bool == 0; // 0x3 Not
	if(var_2_bool == 0) goto Label_8; // 0x4 JumpB
	Hold(); // 0x5 Func
	goto Label_3; // 0x7 Jump
	
Label_8:
	var_3_bool = 0; // 0x8 PushB
	SetUsable(var_3_bool); // 0x9 Func
	return 0; // 0xb Return
}


func_40(var_2_object, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); // 0x28 PushV
	GetMainOutdoorScene(var_6_object); // 0x29 Func
	var_8_string = ".bin"; // 0x2b PushS
	var_9_int = var_3_string + var_8_string; // 0x2c Add
	AddBlankActor(var_7_object, var_6_object, var_3_string, var_9_int); // 0x2d Func
	var_2_object = var_7_object; // 0x2f Mov
	return 4; // 0x30 Return
}


func_21(var_0_bool)
{
	var_0_bool = 1; // 0x15 TMovB
	StopGroup0(); // 0x16 Func
	EventDisable(0); // 0x18 EventDisable
	return 0; // 0x19 Return
}


