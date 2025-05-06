task_0_event_5()
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_2_event_6()
{
	StopAnimation(); // 0x47 Func
	return 0; // 0x49 Return
}


task_3_event_6()
{
	StopGroup0(); // 0x53 Func
	return 0; // 0x55 Return
}


main()
{
	var_0_int = 0; var_1_int = 0; // 0x6 PushV
	RemoveEnvelope(); // 0x7 Func
	RemoveRTEnvelope(); // 0x9 Func
	
Label_11:
	var_2_bool = 0; // 0xb PushV
	func_86(var_2_bool); // 0xc Call
	var_5_bool = var_2_bool == 0; // 0xe Not
	if(var_5_bool == 0) goto Label_21; // 0xf JumpB
	TaskCall(0); // 0x11 TaskCall
	func_0(); // 0x12 Call
	TaskReturn(); // 0x13 TaskReturn
	
Label_21:
	var_6_int = 3; // 0x15 PushI
	irand(var_1_int, var_6_int); // 0x16 Func
	var_7_int = 0; // 0x18 PushI
	var_8_bool = var_1_int == var_7_int; // 0x19 Eq
	if(var_8_bool == 0) goto Label_33; // 0x1a JumpB
	TaskCall(2); // 0x1c TaskCall
	func_40(); // 0x1d Call
	TaskReturn(); // 0x1e TaskReturn
	goto Label_38; // 0x20 Jump
	
Label_38:
	goto Label_11; // 0x26 Jump
	
Label_33:
	TaskCall(3); // 0x22 TaskCall
	func_74(); // 0x23 Call
	TaskReturn(); // 0x24 TaskReturn
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_98(var_33_string, var_34_int)
{
	var_35_string = "idle"; // 0x63 PushS
	var_36_int = 1; // 0x64 PushI
	var_37_int = var_34_int + var_36_int; // 0x65 Add
	var_33_string = var_35_string + var_37_int; // 0x66 Add2
	return 0; // 0x67 Return
}


func_40()
{
	var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; // 0x28 PushV
	var_15_int = 3; // 0x29 PushI
	irand(var_12_int, var_15_int); // 0x2a Func
	var_16_bool = var_12_int == 0; // 0x2c Not
	if(var_16_bool == 0) goto Label_64; // 0x2d JumpB
	var_17_int = 0; // 0x2e PushV
	func_104(var_17_int); // 0x2f Call
	var_13_int = var_17_int; // 0x30 Mov
	var_31_int = var_13_int; // 0x32 Push
	if(var_31_int == 0) goto Label_63; // 0x33 JumpB
	irand(var_14_int, var_13_int); // 0x34 Func
	var_32_string = "all"; // 0x36 PushS
	var_33_string = ""; var_34_int = 0; // 0x37 PushV
	var_34_int = var_14_int; // 0x38 Mov
	func_98(var_33_string, var_34_int); // 0x39 Call
	PlayAnimation(var_32_string, var_33_string); // 0x3b Func
	WaitForAnimEnd(); // 0x3d Func
	
Label_63:
	goto Label_70; // 0x3f Jump
	
Label_70:
	return 6; // 0x46 Return
	
Label_64:
	var_38_string = "all"; // 0x40 PushS
	var_39_string = "idle"; // 0x41 PushS
	PlayAnimation(var_38_string, var_39_string); // 0x42 Func
	WaitForAnimEnd(); // 0x44 Func
}


func_104(var_17_int)
{
	var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_bool = 0; // 0x68 PushV
	var_20_int = 0; // 0x69 MovI
	
Label_106:
	var_22_string = "all"; // 0x6a PushS
	var_23_string = ""; var_24_int = 0; // 0x6b PushV
	var_25_int = 1; // 0x6c PushI
	var_24_int = var_20_int + var_25_int; // 0x6d Add2
	func_91(var_23_string, var_24_int); // 0x6e Call
	HasAnimation(var_21_bool, var_22_string, var_23_string); // 0x70 Func
	var_29_bool = var_21_bool == 0; // 0x72 Not
	if(var_29_bool == 0) goto Label_117; // 0x73 JumpB
	goto Label_120; // 0x74 Jump
	
Label_120:
	var_17_int = var_20_int; // 0x78 Mov
	return 4; // 0x79 Return
	
Label_117:
	var_30_int = 1; // 0x75 PushI
	var_20_int = var_20_int + var_30_int; // 0x76 Add2
	goto Label_106; // 0x77 Jump
}


func_74()
{
	var_40_float = 0; var_41_float = 0; // 0x4a PushV
	var_42_int = 3; // 0x4b PushI
	rand(var_41_float, var_42_int); // 0x4c Func
	var_43_int = 5; // 0x4e PushI
	var_44_int = var_41_float + var_43_int; // 0x4f Add
	Sleep(var_44_int); // 0x50 Func
	return 2; // 0x52 Return
}


func_86(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0; // 0x56 PushV
	IsLoaded(var_4_bool); // 0x57 Func
	var_2_bool = var_4_bool; // 0x59 Mov
	return 2; // 0x5a Return
}


func_91(var_23_string, var_24_int)
{
	var_26_string = ""; var_27_string = ""; // 0x5b PushV
	var_27_string = "idle"; // 0x5c MovS
	var_28_int = var_24_int; // 0x5d Push
	if(var_28_int == 0) goto Label_96; // 0x5e JumpB
	var_27_string = var_27_string + var_24_int; // 0x5f Add2
	
Label_96:
	var_23_string = var_27_string; // 0x60 Mov
	return 2; // 0x61 Return
}


