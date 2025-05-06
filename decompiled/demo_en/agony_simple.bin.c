task_0_event_5()
{
	StopGroup0(); // 0x27 Func
	return 0; // 0x29 Return
}


main()
{
	var_0_bool = 0; var_1_bool = 0; // 0x0 PushV
	RemoveEnvelope(); // 0x1 Func
	RemoveRTEnvelope(); // 0x3 Func
	
Label_5:
	var_2_bool = 0; // 0x5 PushV
	func_42(var_2_bool); // 0x6 NEW_2
	var_5_bool = var_2_bool == 0; // 0x8 Not
	if(var_5_bool == 0) goto Label_13; // 0x9 JumpB
	Hold(); // 0xa Func
	goto Label_5; // 0xc Jump
	
Label_13:
	var_6_string = "agony"; // 0xd PushS
	Is3DSoundLoaded(var_1_bool, var_6_string); // 0xe Func
	var_7_bool = 0; // 0x10 PushV
	var_7_bool = 0; // 0x11 MovB
	var_8_bool = var_1_bool; // 0x12 Push
	if(var_8_bool == 0) goto Label_26; // 0x13 JumpB
	var_9_bool = 0; var_10_float = 0; // 0x14 PushV
	var_10_float = 0.33333; // 0x15 MovF
	func_47(var_9_bool, var_10_float); // 0x16 NEW_2
	if(var_9_bool == 0) goto Label_26; // 0x18 JumpB
	var_7_bool = 1; // 0x19 MovB
	
Label_26:
	if(var_7_bool == 0) goto Label_31; // 0x1a JumpB
	var_13_string = "agony"; // 0x1b PushS
	var_14_cvector = CVector(0.0, 40.0, 0.0); // 0x1c PushVec
	PlayGlobalSound(var_13_string, var_14_cvector); // 0x1d Func
	
Label_31:
	var_15_string = "all"; // 0x1f PushS
	var_16_string = "agony"; // 0x20 PushS
	PlayAnimation(var_15_string, var_16_string); // 0x21 Func
	WaitForAnimEnd(var_1_bool); // 0x23 Func
	goto Label_5; // 0x25 Jump
}


func_42(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x2a PushV
	IsLoaded(var_4_bool); // 0x2b Func
	var_2_bool = var_4_bool; // 0x2d Mov
	return 2; // 0x2e Return
}


func_47(var_9_bool, var_10_float)
{
	var_11_float = 0; var_12_float = 0; // 0x2f PushV
	rand(var_12_float); // 0x30 Func
	var_9_bool = var_12_float < var_10_float; // 0x32 LT2
	return 2; // 0x33 Return
}


