task_0_event_26(var_0_string)
{
	var_1_int = 0; var_2_int = 0; // 0xf PushV
	Trace(var_0_string); // 0x10 Func
	var_3_string = "unlock_boiny"; // 0x12 PushS
	var_4_bool = var_0_string == var_3_string; // 0x13 Eq
	if(var_4_bool == 0) goto Label_27; // 0x14 JumpB
	var_5_string = ""; var_6_bool = 0; // 0x15 PushV
	var_5_string = "boiny@door1"; // 0x16 MovS
	var_6_bool = 0; // 0x17 MovB
	func_95(var_5_string, var_6_bool); // 0x18 NEW_2
	goto Label_56; // 0x1a Jump
	
Label_56:
	return 2; // 0x38 Return
	
Label_27:
	var_15_string = "fail"; // 0x1b PushS
	var_16_bool = var_0_string == var_15_string; // 0x1c Eq
	if(var_16_bool == 0) goto Label_34; // 0x1d JumpB
	func_57(); // 0x1f NEW_2
	goto Label_56; // 0x21 Jump
	
Label_34:
	var_21_string = "completed"; // 0x22 PushS
	var_22_bool = var_0_string == var_21_string; // 0x23 Eq
	if(var_22_bool == 0) goto Label_41; // 0x24 JumpB
	func_65(); // 0x26 NEW_2
	goto Label_56; // 0x28 Jump
	
Label_41:
	var_25_string = "cleanup"; // 0x29 PushS
	var_26_bool = var_0_string == var_25_string; // 0x2a Eq
	if(var_26_bool == 0) goto Label_56; // 0x2b JumpB
	var_27_string = "k8q01"; // 0x2c PushS
	GetVariable(var_27_string, var_2_int); // 0x2d Func
	var_28_int = 1000; // 0x2f PushI
	var_29_bool = var_2_int != var_28_int; // 0x30 Neq
	if(var_29_bool == 0) goto Label_53; // 0x31 JumpB
	func_57(); // 0x33 NEW_2
	
Label_53:
	func_79(); // 0x36 NEW_2
}


main()
{
	func_124(); // 0x1 NEW_2
	func_130(); // 0x4 NEW_2
	var_10_string = ""; var_11_bool = 0; // 0x6 PushV
	var_10_string = "boiny@door1"; // 0x7 MovS
	var_11_bool = 1; // 0x8 MovB
	func_95(var_10_string, var_11_bool); // 0x9 NEW_2
	
Label_11:
	Hold(); // 0xb Func
	goto Label_11; // 0xd Jump
}


func_65()
{
	var_23_string = "k8q01"; // 0x41 PushS
	var_24_int = 1000; // 0x42 PushI
	SetVariable(var_23_string, var_24_int); // 0x43 Func
	func_73(); // 0x46 NEW_2
	return 0; // 0x48 Return
}


func_130()
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x82 PushV
	var_8_string = "burah_home"; // 0x83 PushS
	GetSceneByName(var_7_object, var_8_string); // 0x84 Func
	var_9_string = "noburah"; // 0x86 PushS
	Trigger(var_7_object, var_9_string); // 0x87 Func
	return 2; // 0x89 Return
}


func_73()
{
	var_19_string = ""; var_20_bool = 0; // 0x49 PushV
	var_19_string = "boiny@door1"; // 0x4a MovS
	var_20_bool = 1; // 0x4b MovB
	func_95(var_19_string, var_20_bool); // 0x4c NEW_2
	return 0; // 0x4e Return
}


func_139()
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x8b PushV
	var_32_string = "burah_home"; // 0x8c PushS
	GetSceneByName(var_31_object, var_32_string); // 0x8d Func
	var_33_string = "burah"; // 0x8f PushS
	Trigger(var_31_object, var_33_string); // 0x90 Func
	return 2; // 0x92 Return
}


func_57()
{
	var_17_string = "k8q01"; // 0x39 PushS
	var_18_int = -1; // 0x3a PushI
	SetVariable(var_17_string, var_18_int); // 0x3b Func
	func_73(); // 0x3e NEW_2
	return 0; // 0x40 Return
}


func_79()
{
	EventDisable(26); // 0x4f EventDisable
	func_139(); // 0x51 NEW_2
	var_34_object = Obj(); // 0x53 PushV
	func_89(var_34_object); // 0x54 NEW_2
	RemoveActor(var_34_object); // 0x56 Func
	return 0; // 0x58 Return
}


func_112(var_0_bool, var_1_string, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); // 0x70 PushV
	FindActor(var_4_object, var_1_string); // 0x71 Func
	var_5_bool = var_4_object == 0; // 0x73 NullEq
	if(var_5_bool == 0) goto Label_119; // 0x74 JumpB
	var_0_bool = 0; // 0x75 MovB
	return 2; // 0x76 Return
	
Label_119:
	Trigger(var_4_object, var_2_string); // 0x77 Func
	var_0_bool = 1; // 0x79 MovB
	return 2; // 0x7a Return
}


func_89(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x59 PushV
	self(var_36_object); // 0x5a Func
	var_34_object = var_36_object; // 0x5c Mov
	return 2; // 0x5d Return
}


func_124()
{
	var_0_bool = 0; var_1_string = ""; var_2_string = ""; // 0x7c PushV
	var_1_string = "klara2_npc_positioner"; // 0x7d MovS
	var_2_string = "init"; // 0x7e MovS
	func_112(var_0_bool, var_1_string, var_2_string); // 0x7f NEW_2
	return 0; // 0x81 Return
}


func_95(var_10_string, var_11_bool)
{
	var_12_object = Obj(); var_13_object = Obj(); // 0x5f PushV
	FindActor(var_13_object, var_10_string); // 0x60 Func
	var_14_bool = var_13_object == 0; // 0x62 Not
	if(var_14_bool == 0) goto Label_107; // 0x63 JumpB
	var_15_string = "Door "; // 0x64 PushS
	var_16_int = var_15_string + var_10_string; // 0x65 Add
	var_17_string = " not found"; // 0x66 PushS
	var_18_int = var_16_int + var_17_string; // 0x67 Add
	Trace(var_18_int); // 0x68 Func
	goto Label_110; // 0x6a Jump
	
Label_110:
	return 2; // 0x6e Return
	
Label_107:
	var_19_string = "locked"; // 0x6b PushS
	SetProperty(var_19_string, var_11_bool); // 0x6c ObjFunc
}


