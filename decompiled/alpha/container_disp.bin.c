task_0_event_0(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0; // 0x17 PushV
	func_95(); // 0x19 Call
	var_6_bool = 0; // 0x1b PushV
	func_98(var_6_bool); // 0x1c Call
	var_10_bool = var_6_bool == 0; // 0x1e Not
	if(var_10_bool == 0) goto Label_33; // 0x1f JumpB
	return 4; // 0x20 Return
	
Label_33:
	StopGroup0(); // 0x21 Func
	IsOnGround(var_4_bool); // 0x23 ObjFunc
	var_11_bool = var_4_bool; // 0x25 Push
	if(var_11_bool == 0) goto Label_47; // 0x26 JumpB
	EventDisable(0); // 0x27 EventDisable
	IsOverrideActive(var_5_bool); // 0x28 Func
	var_12_bool = var_5_bool == 0; // 0x2a Not
	if(var_12_bool == 0) goto Label_46; // 0x2b JumpB
	Barter(var_1_object); // 0x2c Func
	
Label_46:
	EventEnable(0); // 0x2e EventEnable
	
Label_47:
	return 4; // 0x2f Return
}


task_0_event_33(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_int)
{
	func_95(); // 0x32 Call
	return 0; // 0x34 Return
}


task_0_event_34(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_int)
{
	var_5_bool = 0; var_6_bool = 0; // 0x35 PushV
	GetItemCount(var_6_bool); // 0x36 Func
	Trace(var_6_bool); // 0x38 Func
	var_7_bool = var_6_bool == 0; // 0x3a Not
	if(var_7_bool == 0) goto Label_63; // 0x3b JumpB
	SetDeathState(); // 0x3c Func
	goto Label_66; // 0x3e Jump
	
Label_66:
	return 2; // 0x42 Return
	
Label_63:
	func_95(); // 0x40 Call
}


task_0_event_6(var_0_bool)
{
	var_1_int = 0; var_2_int = 0; var_3_object = Obj(); var_4_bool = 0; var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0; var_10_bool = 0; // 0x43 PushV
	var_11_bool = var_0_bool; // 0x44 PushT
	if(var_11_bool == 0) goto Label_94; // 0x45 JumpB
	GetItemCount(var_6_int); // 0x46 Func
	var_7_int = 0; // 0x48 MovI
	
Label_73:
	var_12_bool = var_7_int < var_6_int; // 0x49 LT
	if(var_12_bool == 0) goto Label_92; // 0x4a JumpB
	GetItem(var_8_object, var_7_int); // 0x4b Func
	var_13_string = "undisposable"; // 0x4d PushS
	HasProperty(var_9_bool, var_13_string); // 0x4e ObjFunc
	var_14_bool = var_9_bool; // 0x50 Push
	if(var_14_bool == 0) goto Label_88; // 0x51 JumpB
	var_15_string = "undisposable"; // 0x52 PushS
	GetProperty(var_10_bool, var_15_string); // 0x53 ObjFunc
	var_16_bool = var_10_bool; // 0x55 Push
	if(var_16_bool == 0) goto Label_88; // 0x56 JumpB
	return 10; // 0x57 Return
	
Label_88:
	var_8_object = 0; // 0x58 SetNull
	var_17_int = 1; // 0x59 PushI
	var_7_int = var_7_int + var_17_int; // 0x5a Add2
	goto Label_73; // 0x5b Jump
	
Label_92:
	SetDeathState(); // 0x5c Func
	
Label_94:
	return 10; // 0x5e Return
}


main(var_0_bool)
{
	var_1_bool = 0; var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; // 0x0 PushV
	var_5_bool = 1; // 0x1 PushB
	SetVisibility(var_5_bool); // 0x2 Func
	
Label_4:
	var_0_bool = 0; // 0x4 TMovB
	
Label_5:
	var_6_float = 900.0; // 0x5 PushF
	Sleep(var_6_float, var_3_bool); // 0x6 Func
	var_7_bool = var_3_bool == 0; // 0x8 Not
	if(var_7_bool == 0) goto Label_11; // 0x9 JumpB
	goto Label_5; // 0xa Jump
	
Label_11:
	IsLoaded(var_4_bool); // 0xb Func
	var_8_bool = var_4_bool == 0; // 0xd Not
	if(var_8_bool == 0) goto Label_18; // 0xe JumpB
	SetDeathState(); // 0xf Func
	return 4; // 0x11 Return
	
Label_18:
	var_0_bool = 1; // 0x12 TMovB
	Hold(); // 0x13 Func
	goto Label_4; // 0x15 Jump
}


func_98(var_6_bool)
{
	var_7_int = 0; var_8_int = 0; // 0x62 PushV
	var_9_string = "nouse_container"; // 0x63 PushS
	GetVariable(var_9_string, var_8_int); // 0x64 Func
	var_6_bool = !var_8_int; // 0x66 Not2
	return 2; // 0x67 Return
}


func_95()
{
	StopGroup0(); // 0x5f Func
	return 0; // 0x61 Return
}


