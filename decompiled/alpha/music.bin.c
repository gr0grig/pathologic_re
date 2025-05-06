task_0_event_7(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_int)
{
	var_5_bool = 0; var_6_bool = 0; var_7_bool = 0; var_8_bool = 0; // 0x4d PushV
	var_9_int = 0; // 0x4e PushI
	var_10_bool = var_4_int == var_9_int; // 0x4f Eq
	if(var_10_bool == 0) goto Label_97; // 0x50 JumpB
	IsPlayingMusic2(var_7_bool); // 0x51 Func
	var_11_bool = var_7_bool == 0; // 0x53 Not
	if(var_11_bool == 0) goto Label_96; // 0x54 JumpB
	var_1_string = var_2_string; // 0x55 TMovT
	var_12_string = "Playing loop: "; // 0x56 PushS
	var_13_int = var_12_string + var_2_string; // 0x57 Add
	Trace(var_13_int); // 0x58 Func
	PlayMusic2(var_7_bool); // 0x5a Func
	var_3_bool = 0; // 0x5c TMovB
	func_51(var_8_bool); // 0x5e Call
	
Label_96:
	goto Label_117; // 0x60 Jump
	
Label_117:
	return 4; // 0x75 Return
	
Label_97:
	var_27_int = 1; // 0x61 PushI
	var_28_bool = var_4_int == var_27_int; // 0x62 Eq
	if(var_28_bool == 0) goto Label_117; // 0x63 JumpB
	IsExistingMusic(var_0_string, var_8_bool); // 0x64 Func
	var_29_bool = var_8_bool == 0; // 0x66 Not
	if(var_29_bool == 0) goto Label_117; // 0x67 JumpB
	var_30_int = 1; // 0x68 PushI
	KillTimer(var_30_int); // 0x69 Func
	var_31_string = var_0_string; // 0x6b PushT
	if(var_31_string == 0) goto Label_112; // 0x6c JumpB
	FadeMusic1(); // 0x6d Func
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_32_string = "Music time limit reached"; // 0x72 PushS
	Trace(var_32_string); // 0x73 Func
	
Label_112:
	StopGroup0(); // 0x70 Func
}


task_0_event_1000(var_0_string, var_1_string, var_2_string, var_3_bool, var_4_string, var_5_string)
{
	var_6_string = "loop"; // 0x77 PushS
	var_7_bool = var_4_string == var_6_string; // 0x78 Eq
	if(var_7_bool == 0) goto Label_130; // 0x79 JumpB
	var_8_string = "Playing loop: "; // 0x7a PushS
	var_9_int = var_8_string + var_5_string; // 0x7b Add
	Trace(var_9_int); // 0x7c Func
	PlayMusic2(var_5_string); // 0x7e Func
	var_3_bool = 1; // 0x80 TMovB
	goto Label_143; // 0x81 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_130:
	var_10_string = "loop_stop"; // 0x82 PushS
	var_11_bool = var_4_string == var_10_string; // 0x83 Eq
	if(var_11_bool == 0) goto Label_137; // 0x84 JumpB
	StopMusic2(); // 0x85 Func
	var_3_bool = 0; // 0x87 TMovB
	goto Label_143; // 0x88 Jump
	
Label_137:
	var_4_string = "play"; // 0x89 MovS
	var_12_string = var_4_string; // 0x8a Push
	if(var_12_string == 0) goto Label_143; // 0x8b JumpB
	var_13_string = "music1.ogg"; // 0x8c PushS
	PlayGlobalMusic(var_13_string); // 0x8d Func
}


main(var_0_string, var_1_string, var_2_string, var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0; // 0x0 PushV
	var_3_bool = 0; // 0x1 TMovB
	
Label_2:
	var_6_bool = var_3_bool == 0; // 0x2 Not
	if(var_6_bool == 0) goto Label_22; // 0x3 JumpB
	IsExistingLoop(var_5_bool, var_5_bool); // 0x4 Func
	var_7_bool = var_5_bool == 0; // 0x6 Not
	if(var_7_bool == 0) goto Label_22; // 0x7 JumpB
	IsExistingLoop(var_4_bool, var_5_bool); // 0x8 Func
	var_8_bool = var_5_bool == 0; // 0xa Not
	if(var_8_bool == 0) goto Label_22; // 0xb JumpB
	var_9_int = 0; // 0xc PushI
	KillTimer(var_9_int); // 0xd Func
	FadeMusic2(); // 0xf Func
	WaitForMusicEnd2(); // 0x11 Func
	func_51(var_5_bool); // 0x14 Call
	
Label_22:
	GetRegionMusic(var_0_string); // 0x16 Func
	AdvanceRegionMusic(); // 0x18 Func
	var_23_int = 1; // 0x1a PushI
	var_24_int = 15; // 0x1b PushI
	SetTimer(var_23_int, var_24_int); // 0x1c Func
	var_25_string = var_0_string; // 0x1e PushT
	if(var_25_string == 0) goto Label_41; // 0x1f JumpB
	var_26_string = "Playing music: "; // 0x20 PushS
	var_27_int = var_26_string + var_0_string; // 0x21 Add
	Trace(var_27_int); // 0x22 Func
	PlayMusic1(var_0_string); // 0x24 Func
	WaitForMusicEnd1(); // 0x26 Func
	goto Label_46; // 0x28 Jump
	
Label_46:
	var_28_int = 1; // 0x2e PushI
	KillTimer(var_28_int); // 0x2f Func
	goto Label_2; // 0x31 Jump
	
Label_41:
	var_29_string = "Nothing to play"; // 0x29 PushS
	Trace(var_29_string); // 0x2a Func
	Hold(); // 0x2c Func
}


func_51(var_2_string)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; // 0x33 PushV
	GetRegionLoopCount(var_13_int); // 0x34 Func
	var_16_int = var_13_int; // 0x36 Push
	if(var_16_int == 0) goto Label_73; // 0x37 JumpB
	var_17_int = 40; // 0x38 PushI
	irand(var_14_int, var_17_int); // 0x39 Func
	var_18_int = 30; // 0x3b PushI
	var_14_int = var_14_int + var_18_int; // 0x3c Add2
	irand(var_15_int, var_13_int); // 0x3d Func
	GetRegionLoop(var_15_int, var_14_int); // 0x3f Func
	var_19_string = "Next loop: "; // 0x41 PushS
	var_20_int = var_19_string + var_2_string; // 0x42 Add
	Trace(var_20_int); // 0x43 Func
	var_21_int = 0; // 0x45 PushI
	SetTimer(var_21_int, var_14_int); // 0x46 Func
	goto Label_76; // 0x48 Jump
	
Label_76:
	return 6; // 0x4c Return
	
Label_73:
	var_22_int = 0; // 0x49 PushI
	KillTimer(var_22_int); // 0x4a Func
}


