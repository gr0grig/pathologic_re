task_0_event_0(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0; // 0x1e PushV
	func_106(); // 0x20 NEW_2
	var_6_bool = 0; // 0x22 PushV
	func_115(var_6_bool); // 0x23 NEW_2
	var_10_bool = var_6_bool == 0; // 0x25 Not
	if(var_10_bool == 0) goto Label_40; // 0x26 JumpB
	return 4; // 0x27 Return
	
Label_40:
	StopGroup0(); // 0x28 Func
	IsOnGround(var_4_bool); // 0x2a ObjFunc
	var_11_bool = var_4_bool; // 0x2c Push
	if(var_11_bool == 0) goto Label_54; // 0x2d JumpB
	EventDisable(0); // 0x2e EventDisable
	IsOverrideActive(var_5_bool); // 0x2f Func
	var_12_bool = var_5_bool == 0; // 0x31 Not
	if(var_12_bool == 0) goto Label_53; // 0x32 JumpB
	Barter(var_1_object); // 0x33 Func
	
Label_53:
	EventEnable(0); // 0x35 EventEnable
	
Label_54:
	return 4; // 0x36 Return
}


task_0_event_33(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_int)
{
	func_106(); // 0x39 NEW_2
	return 0; // 0x3b Return
}


task_0_event_34(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_int)
{
	var_5_bool = 0; var_6_bool = 0; // 0x3c PushV
	GetItemCount(var_6_bool); // 0x3d Func
	var_7_bool = var_6_bool == 0; // 0x3f Not
	if(var_7_bool == 0) goto Label_71; // 0x40 JumpB
	var_8_object = Obj(); // 0x41 PushV
	func_109(var_8_object); // 0x42 NEW_2
	RemoveActor(var_8_object); // 0x44 Func
	goto Label_74; // 0x46 Jump
	
Label_74:
	return 2; // 0x4a Return
	
Label_71:
	func_106(); // 0x48 NEW_2
}


task_0_event_6(var_0_bool)
{
	var_1_int = 0; var_2_int = 0; var_3_object = Obj(); var_4_bool = 0; var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0; var_10_bool = 0; // 0x4b PushV
	var_11_bool = var_0_bool; // 0x4c PushT
	if(var_11_bool == 0) goto Label_105; // 0x4d JumpB
	GetItemCount(var_6_int); // 0x4e Func
	var_7_int = 0; // 0x50 MovI
	
Label_81:
	var_12_bool = var_7_int < var_6_int; // 0x51 LT
	if(var_12_bool == 0) goto Label_100; // 0x52 JumpB
	GetItem(var_8_object, var_7_int); // 0x53 Func
	var_13_string = "undisposable"; // 0x55 PushS
	HasProperty(var_9_bool, var_13_string); // 0x56 ObjFunc
	var_14_bool = var_9_bool; // 0x58 Push
	if(var_14_bool == 0) goto Label_96; // 0x59 JumpB
	var_15_string = "undisposable"; // 0x5a PushS
	GetProperty(var_10_bool, var_15_string); // 0x5b ObjFunc
	var_16_bool = var_10_bool; // 0x5d Push
	if(var_16_bool == 0) goto Label_96; // 0x5e JumpB
	return 10; // 0x5f Return
	
Label_96:
	var_8_object = 0; // 0x60 SetNull
	var_17_int = 1; // 0x61 PushI
	var_7_int = var_7_int + var_17_int; // 0x62 Add2
	goto Label_81; // 0x63 Jump
	
Label_100:
	var_18_object = Obj(); // 0x64 PushV
	func_109(var_18_object); // 0x65 NEW_2
	RemoveActor(var_18_object); // 0x67 Func
	
Label_105:
	return 10; // 0x69 Return
}


main(var_0_bool)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x0 PushV
	var_5_string = "playsound"; // 0x1 PushS
	var_6_string = "meshok_drop"; // 0x2 PushS
	TriggerWorld(var_5_string, var_6_string); // 0x3 Func
	var_7_bool = 1; // 0x5 PushB
	SetVisibility(var_7_bool); // 0x6 Func
	
Label_8:
	var_0_bool = 0; // 0x8 TMovB
	
Label_9:
	var_8_float = 900.0; // 0x9 PushF
	Sleep(var_8_float, var_3_bool); // 0xa Func
	var_9_bool = var_3_bool == 0; // 0xc Not
	if(var_9_bool == 0) goto Label_15; // 0xd JumpB
	goto Label_9; // 0xe Jump
	
Label_15:
	IsLoaded(var_4_bool); // 0xf Func
	var_10_bool = var_4_bool == 0; // 0x11 Not
	if(var_10_bool == 0) goto Label_25; // 0x12 JumpB
	var_11_object = Obj(); // 0x13 PushV
	func_109(var_11_object); // 0x14 NEW_2
	RemoveActor(var_11_object); // 0x16 Func
	return 4; // 0x18 Return
	
Label_25:
	var_0_bool = 1; // 0x19 TMovB
	Hold(); // 0x1a Func
	goto Label_8; // 0x1c Jump
}


func_106()
{
	StopGroup0(); // 0x6a Func
	return 0; // 0x6c Return
}


func_115(var_6_bool)
{
	var_7_int = 0; var_8_int = 0; // 0x73 PushV
	var_9_string = "nouse_container"; // 0x74 PushS
	GetVariable(var_9_string, var_8_int); // 0x75 Func
	var_6_bool = !var_8_int; // 0x77 Not2
	return 2; // 0x78 Return
}


func_109(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x6d PushV
	self(var_13_object); // 0x6e Func
	var_11_object = var_13_object; // 0x70 Mov
	return 2; // 0x71 Return
}


