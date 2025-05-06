main()
{
	RemoveOverride(); // 0x0 Func
	var_0_float = 0.15; // 0x2 PushF
	ModBlurLevel(var_0_float); // 0x3 Func
	CameraSwitchToNormal(); // 0x5 Func
	var_1_object = Obj(); // 0x7 PushV
	func_33(var_1_object); // 0x8 NEW_2
	RemoveActor(var_1_object); // 0xa Func
	var_5_string = "danko_death.mot"; // 0xc PushS
	var_6_bool = 1; // 0xd PushB
	CameraPlayRel(var_5_string, var_6_bool); // 0xe Func
	var_7_float = 1.5; // 0x10 PushF
	Sleep(var_7_float); // 0x11 Func
	var_8_float = 0; var_9_float = 0; var_10_float = 0; // 0x13 PushV
	var_8_float = 0; // 0x14 MovI
	var_9_float = 1; // 0x15 MovI
	var_10_float = 1.25; // 0x16 MovF
	func_40(var_9_float, var_10_float); // 0x17 NEW_2
	CameraWaitForPlayFinish(); // 0x19 Func
	var_22_string = "gameover.xml"; // 0x1b PushS
	GameOver(var_22_string); // 0x1c Func
	Hold(); // 0x1e Func
	return 0; // 0x20 Return
}


func_40(var_8_float, var_9_float)
{
	var_11_bool = 0; var_12_float = 0; var_13_float = 0; var_14_bool = 0; var_15_float = 0; var_16_float = 0; // 0x28 PushV
	var_14_bool = var_9_float > var_8_float; // 0x29 GT2
	var_17_int = var_9_float - var_8_float; // 0x2a Sub
	var_15_float = var_17_int / var_17_int; // 0x2b Div2
	
Label_44:
	var_18_bool = var_14_bool; // 0x2c Push
	if(var_18_bool == 0) goto Label_48; // 0x2d JumpB
	var_19_bool = var_8_float < var_9_float; // 0x2e LT
	goto Label_49; // 0x2f Jump
	
Label_49:
	if(var_19_bool == 0) goto Label_57; // 0x31 JumpB
	ModDarkenLevel(var_8_float); // 0x32 Func
	sync(var_16_float); // 0x34 Func
	var_20_float = var_16_float * var_15_float; // 0x36 Mult
	var_8_float = var_8_float + var_20_float; // 0x37 Add2
	goto Label_44; // 0x38 Jump
	
Label_57:
	ModDarkenLevel(var_9_float); // 0x39 Func
	return 6; // 0x3b Return
	
Label_48:
	var_21_bool = var_9_float < var_8_float; // 0x30 LT
}


func_33(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x21 PushV
	var_4_string = "player"; // 0x22 PushS
	FindActor(var_3_object, var_4_string); // 0x23 Func
	var_1_object = var_3_object; // 0x25 Mov
	return 2; // 0x26 Return
}


