task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	var_3_int = 0; // 0x22 PushV
	var_4_int = 1; // 0x23 PushI
	var_3_int = var_1_int + var_4_int; // 0x24 Add2
	func_61(); // 0x25 NEW_2
	return 0; // 0x27 Return
}


task_0_event_5(var_0_object)
{
	var_1_int = 0; var_2_int = 0; var_3_object = Obj(); var_4_bool = 0; var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_bool = 0; // 0x28 PushV
	var_9_bool = var_0_object == 0; // 0x29 Not
	if(var_9_bool == 0) goto Label_44; // 0x2a JumpB
	return 8; // 0x2b Return
	
Label_44:
	size(var_5_int); // 0x2c TObjFunc
	var_6_int = 0; // 0x2e MovI
	
Label_47:
	var_10_bool = var_6_int < var_5_int; // 0x2f LT
	if(var_10_bool == 0) goto Label_58; // 0x30 JumpB
	get(var_7_object, var_6_int); // 0x31 TObjFunc
	var_11_int = 0; // 0x33 PushI
	AddItem(var_8_bool, var_7_object, var_11_int); // 0x34 Func
	var_7_object = 0; // 0x36 SetNull
	var_12_int = 1; // 0x37 PushI
	var_6_int = var_6_int + var_12_int; // 0x38 Add2
	goto Label_47; // 0x39 Jump
	
Label_58:
	clear(); // 0x3a TObjFunc
	return 8; // 0x3c Return
}


task_0_event_0(var_0_object, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0; // 0x55 PushV
	var_6_bool = 0; // 0x56 PushV
	var_6_bool = 1; // 0x57 MovB
	var_7_bool = var_1_object == 0; // 0x58 Not
	if(var_7_bool == 0) goto Label_96; // 0x59 JumpB
	var_8_bool = 0; // 0x5a PushV
	func_117(var_8_bool); // 0x5b NEW_2
	var_12_bool = var_8_bool == 0; // 0x5d Not
	if(var_12_bool == 0) goto Label_96; // 0x5e JumpB
	var_6_bool = 0; // 0x5f MovB
	
Label_96:
	if(var_6_bool == 0) goto Label_98; // 0x60 JumpB
	return 4; // 0x61 Return
	
Label_98:
	IsOnGround(var_4_bool); // 0x62 ObjFunc
	var_13_bool = var_4_bool; // 0x64 Push
	if(var_13_bool == 0) goto Label_110; // 0x65 JumpB
	EventDisable(0); // 0x66 EventDisable
	IsOverrideActive(var_5_bool); // 0x67 Func
	var_14_bool = var_5_bool == 0; // 0x69 Not
	if(var_14_bool == 0) goto Label_109; // 0x6a JumpB
	Barter(var_1_object); // 0x6b Func
	
Label_109:
	EventEnable(0); // 0x6d EventEnable
	
Label_110:
	return 4; // 0x6e Return
}


main(var_0_object)
{
	var_1_object = Obj(); // 0x0 PushV
	func_111(var_1_object); // 0x1 NEW_2
	var_0_object = var_1_object; // 0x2 TMov
	var_4_bool = 1; // 0x4 PushB
	SetVisibility(var_4_bool); // 0x5 Func
	func_14(); // 0x8 NEW_2
	func_81(); // 0xb NEW_2
	return 0; // 0xd Return
}


func_14()
{
	var_5_float = 0; var_6_int = 0; var_7_float = 0; var_8_int = 0; // 0xe PushV
	GetGameTime(var_7_float); // 0xf Func
	var_9_int = 0; // 0x11 PushV
	var_10_int = 24; // 0x12 PushI
	var_9_int = var_7_float / var_7_float; // 0x13 Div2
	var_11_int = 1; // 0x14 PushI
	var_8_int = var_9_int + var_11_int; // 0x15 Add2
	
Label_22:
	var_12_int = 12; // 0x16 PushI
	var_13_bool = var_8_int < var_12_int; // 0x17 LT
	if(var_13_bool == 0) goto Label_32; // 0x18 JumpB
	var_14_int = 24; // 0x19 PushI
	var_15_float = var_8_int * var_14_int; // 0x1a Mult
	SetTimeEvent(var_8_int, var_15_float); // 0x1b Func
	var_16_int = 1; // 0x1d PushI
	var_8_int = var_8_int + var_16_int; // 0x1e Add2
	goto Label_22; // 0x1f Jump
	
Label_32:
	return 4; // 0x20 Return
}


func_111(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x6f PushV
	CreateObjectVector(var_3_object); // 0x70 Func
	var_1_object = var_3_object; // 0x72 Mov
	return 2; // 0x73 Return
}


func_81()
{
	
Label_81:
	Hold(); // 0x51 Func
	goto Label_81; // 0x53 Jump
}


func_117(var_8_bool)
{
	var_9_int = 0; var_10_int = 0; // 0x75 PushV
	var_11_string = "nouse_container"; // 0x76 PushS
	GetVariable(var_11_string, var_10_int); // 0x77 Func
	var_8_bool = !var_10_int; // 0x79 Not2
	return 2; // 0x7a Return
}


func_61()
{
	var_5_bool = 0; var_6_bool = 0; var_7_object = Obj(); var_8_bool = 0; var_9_bool = 0; var_10_object = Obj(); // 0x3d PushV
	var_11_string = "enabled"; // 0x3e PushS
	HasProperty(var_11_string, var_8_bool); // 0x3f Func
	var_12_bool = var_8_bool; // 0x41 Push
	if(var_12_bool == 0) goto Label_80; // 0x42 JumpB
	var_13_string = "enabled"; // 0x43 PushS
	GetProperty(var_13_string, var_9_bool); // 0x44 Func
	var_14_bool = var_9_bool; // 0x46 Push
	if(var_14_bool == 0) goto Label_80; // 0x47 JumpB
	CreateInvItem(var_10_object); // 0x48 Func
	var_15_string = "alpha_pills"; // 0x4a PushS
	SetItemName(var_15_string); // 0x4b ObjFunc
	add(var_10_object); // 0x4d TObjFunc
	var_10_object = 0; // 0x4f SetNull
	
Label_80:
	return 6; // 0x50 Return
}


