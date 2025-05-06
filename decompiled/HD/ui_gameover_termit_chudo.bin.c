task_0_event_0(var_0_object, var_1_int, var_2_int, var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0; var_6_bool = 0; var_7_bool = 0; var_8_bool = 0; var_9_bool = 0; // 0x1e PushV
	IsLost(var_7_bool); // 0x1f TObjFunc
	var_10_bool = var_7_bool; // 0x21 Push
	if(var_10_bool == 0) goto Label_40; // 0x22 JumpB
	Restore(var_8_bool); // 0x23 TObjFunc
	var_11_bool = var_8_bool == 0; // 0x25 Not
	if(var_11_bool == 0) goto Label_40; // 0x26 JumpB
	return 6; // 0x27 Return
	
Label_40:
	IsPlaying(var_9_bool); // 0x28 TObjFunc
	var_12_bool = var_9_bool; // 0x2a Push
	if(var_12_bool == 0) goto Label_49; // 0x2b JumpB
	var_13_int = 0; // 0x2c PushI
	var_14_int = 0; // 0x2d PushI
	StretchBlit(var_13_int, var_14_int, var_14_int, var_13_int); // 0x2e TObjFunc
	goto Label_55; // 0x30 Jump
	
Label_55:
	return 6; // 0x37 Return
	
Label_49:
	var_15_int = 0; // 0x31 PushI
	var_16_int = 0; // 0x32 PushI
	StretchBlit(var_15_int, var_16_int, var_16_int, var_15_int); // 0x33 TObjFunc
	StopEventProcessing(); // 0x35 Func
}


task_0_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int)
{
	var_5_bool = var_3_bool == 0; // 0x39 Not
	if(var_5_bool == 0) goto Label_60; // 0x3a JumpB
	return 0; // 0x3b Return
	
Label_60:
	var_6_bool = 0; // 0x3c PushV
	var_6_bool = 1; // 0x3d MovB
	var_7_bool = 0; // 0x3e PushV
	var_7_bool = 1; // 0x3f MovB
	var_8_bool = 0; // 0x40 PushV
	var_8_bool = 1; // 0x41 MovB
	var_9_int = 27; // 0x42 PushI
	var_10_bool = var_4_int == var_9_int; // 0x43 Eq
	if(var_10_bool == 0) goto Label_73; // 0x44 JumpB
	var_11_int = 32; // 0x45 PushI
	var_12_bool = var_4_int == var_11_int; // 0x46 Eq
	if(var_12_bool == 0) goto Label_73; // 0x47 JumpB
	var_8_bool = 0; // 0x48 MovB
	
Label_73:
	if(var_8_bool == 0) goto Label_78; // 0x49 JumpB
	var_13_int = 257; // 0x4a PushI
	var_14_bool = var_4_int == var_13_int; // 0x4b Eq
	if(var_14_bool == 0) goto Label_78; // 0x4c JumpB
	var_7_bool = 0; // 0x4d MovB
	
Label_78:
	if(var_7_bool == 0) goto Label_83; // 0x4e JumpB
	var_15_int = 262; // 0x4f PushI
	var_16_bool = var_4_int == var_15_int; // 0x50 Eq
	if(var_16_bool == 0) goto Label_83; // 0x51 JumpB
	var_6_bool = 0; // 0x52 MovB
	
Label_83:
	if(var_6_bool == 0) goto Label_88; // 0x53 JumpB
	StopEventProcessing(); // 0x54 Func
	Stop(); // 0x56 TObjFunc
	
Label_88:
	return 0; // 0x58 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool)
{
	EventDisable(1); // 0x59 EventDisable
	EventDisable(0); // 0x5a EventDisable
	UISync(); // 0x5b Func
	EventEnable(1); // 0x5d EventEnable
	EventEnable(0); // 0x5e EventEnable
	var_4_string = ""; var_5_bool = 0; // 0x5f PushV
	var_4_string = "fin_termit.wmv"; // 0x60 MovS
	var_5_bool = 0; // 0x61 MovB
	TaskCall(0); // 0x62 TaskCall
	func_0(var_8_int, var_9_bool, var_4_string, var_5_bool); // 0x63 NEW_2
	TaskReturn(); // 0x64 TaskReturn
	DestroyWindow(); // 0x66 Func
	var_15_string = "world_final.xml"; // 0x68 PushS
	var_16_string = "player_final.xml"; // 0x69 PushS
	NewGame(var_15_string, var_16_string); // 0x6a Func
	return 0; // 0x6c Return
}


func_0(var_0_object, var_3_bool, var_4_string, var_5_bool)
{
	var_3_bool = var_5_bool; // 0x1 TMov
	var_10_bool = 1; // 0x2 PushB
	SetOwnerDraw(var_10_bool); // 0x3 Func
	var_11_bool = 0; // 0x5 PushB
	ShowCursor(var_11_bool); // 0x6 Func
	CaptureKeyboard(); // 0x8 Func
	GetWindowSize(var_5_bool, var_4_string); // 0xa Func
	LoadVideo(var_4_string); // 0xc Func
	FindVideo(var_0_object, var_4_string); // 0xe Func
	var_12_bool = 0; // 0x10 PushB
	Play(var_12_bool); // 0x11 TObjFunc
	ProcessEvents(); // 0x13 Func
	var_13_bool = 0; // 0x15 PushB
	SetOwnerDraw(var_13_bool); // 0x16 Func
	var_14_bool = 1; // 0x18 PushB
	ShowCursor(var_14_bool); // 0x19 Func
	ReleaseVideo(var_4_string); // 0x1b Func
	return 0; // 0x1d Return
}


