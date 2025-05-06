task_0_event_23(var_0_object, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; // 0x4 PushV
	IsPlayerActor(var_1_object, var_3_bool); // 0x5 Func
	var_4_bool = var_3_bool; // 0x7 Push
	if(var_4_bool == 0) goto Label_15; // 0x8 JumpB
	var_5_object = Obj(); // 0x9 PushV
	var_5_object = var_1_object; // 0xa Mov
	TaskCall(1); // 0xb TaskCall
	func_16(var_6_object, var_5_object); // 0xc NEW_2
	TaskReturn(); // 0xd TaskReturn
	
Label_15:
	return 2; // 0xf Return
}


task_1_event_6(var_0_object)
{
	StopGroup0(); // 0x2e Func
	return 0; // 0x30 Return
}


task_1_event_27(var_0_object, var_1_object)
{
	var_2_bool = var_0_object == var_1_object; // 0x32 Eq
	if(var_2_bool == 0) goto Label_54; // 0x33 JumpB
	StopGroup0(); // 0x34 Func
	
Label_54:
	return 0; // 0x36 Return
}


main(var_0_object)
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_16(var_0_object, var_5_object)
{
	var_7_int = 0; var_8_bool = 0; var_9_int = 0; var_10_bool = 0; // 0x10 PushV
	var_0_object = var_5_object; // 0x11 TMov
	
Label_18:
	var_11_bool = 0; var_12_float = 0; // 0x12 PushV
	var_12_float = 0.5; // 0x13 MovF
	func_55(var_11_bool, var_12_float); // 0x14 NEW_2
	if(var_11_bool == 0) goto Label_25; // 0x16 JumpB
	var_15_string = "sound1"; // 0x17 PushS
	goto Label_26; // 0x18 Jump
	
Label_26:
	PlaySound(var_15_string); // 0x1a Func
	var_16_int = 15; // 0x1c PushI
	irand(var_9_int, var_16_int); // 0x1d Func
	var_17_int = 15; // 0x1f PushI
	var_18_int = var_9_int + var_17_int; // 0x20 Add
	Sleep(var_18_int, var_10_bool); // 0x21 Func
	var_19_bool = 0; // 0x23 PushV
	var_19_bool = 1; // 0x24 MovB
	var_20_bool = var_10_bool == 0; // 0x25 Not
	if(var_20_bool == 0) goto Label_42; // 0x26 JumpB
	var_21_bool = var_0_object == 0; // 0x27 Not
	if(var_21_bool == 0) goto Label_42; // 0x28 JumpB
	var_19_bool = 0; // 0x29 MovB
	
Label_42:
	if(var_19_bool == 0) goto Label_44; // 0x2a JumpB
	goto Label_45; // 0x2b Jump
	
Label_45:
	return 4; // 0x2d Return
	
Label_44:
	goto Label_18; // 0x2c Jump
	
Label_25:
	var_22_string = "sound2"; // 0x19 PushS
}


func_55(var_11_bool, var_12_float)
{
	var_13_float = 0; var_14_float = 0; // 0x37 PushV
	rand(var_14_float); // 0x38 Func
	var_11_bool = var_14_float < var_12_float; // 0x3a LT2
	return 2; // 0x3b Return
}


