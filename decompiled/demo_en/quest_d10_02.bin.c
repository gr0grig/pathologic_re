task_0_event_26(var_0_string)
{
	Trace(var_0_string); // 0x1e Func
	var_1_string = "unlock_georg"; // 0x20 PushS
	var_2_bool = var_0_string == var_1_string; // 0x21 Eq
	if(var_2_bool == 0) goto Label_41; // 0x22 JumpB
	var_3_string = ""; var_4_bool = 0; // 0x23 PushV
	var_3_string = "cot_georg@door1"; // 0x24 MovS
	var_4_bool = 0; // 0x25 MovB
	func_119(var_3_string, var_4_bool); // 0x26 NEW_2
	goto Label_54; // 0x28 Jump
	
Label_54:
	return 0; // 0x36 Return
	
Label_41:
	var_13_string = "fail"; // 0x29 PushS
	var_14_bool = var_0_string == var_13_string; // 0x2a Eq
	if(var_14_bool == 0) goto Label_48; // 0x2b JumpB
	func_66(); // 0x2d NEW_2
	goto Label_54; // 0x2f Jump
	
Label_48:
	var_20_string = "completed"; // 0x30 PushS
	var_21_bool = var_0_string == var_20_string; // 0x31 Eq
	if(var_21_bool == 0) goto Label_54; // 0x32 JumpB
	func_74(); // 0x34 NEW_2
}


task_0_event_9(var_0_int, var_1_float)
{
	func_55(); // 0x6e NEW_2
	return 0; // 0x70 Return
}


main()
{
	var_0_string = "d10q02"; // 0x0 PushS
	var_1_int = 1; // 0x1 PushI
	SetVariable(var_0_string, var_1_int); // 0x2 Func
	var_2_string = ""; var_3_bool = 0; // 0x4 PushV
	var_2_string = "cot_georg@door1"; // 0x5 MovS
	var_3_bool = 1; // 0x6 MovB
	func_119(var_2_string, var_3_bool); // 0x7 NEW_2
	var_12_string = ""; var_13_bool = 0; // 0x9 PushV
	var_12_string = "cot_maria@door1"; // 0xa MovS
	var_13_bool = 0; // 0xb MovB
	func_119(var_12_string, var_13_bool); // 0xc NEW_2
	var_14_string = ""; var_15_bool = 0; // 0xe PushV
	var_14_string = "cot_viktor@door1"; // 0xf MovS
	var_15_bool = 0; // 0x10 MovB
	func_119(var_14_string, var_15_bool); // 0x11 NEW_2
	var_16_string = ""; var_17_bool = 0; // 0x13 PushV
	var_16_string = "warehouse_rubin@door1"; // 0x14 MovS
	var_17_bool = 0; // 0x15 MovB
	func_119(var_16_string, var_17_bool); // 0x16 NEW_2
	var_18_int = 0; // 0x18 PushV
	var_18_int = 10; // 0x19 MovI
	func_89(var_18_int); // 0x1a NEW_2
	return 0; // 0x1c Return
}


func_66()
{
	var_7_string = "d10q02"; // 0x42 PushS
	var_8_int = -1; // 0x43 PushI
	SetVariable(var_7_string, var_8_int); // 0x44 Func
	func_82(); // 0x47 NEW_2
	return 0; // 0x49 Return
}


func_74()
{
	var_22_string = "d10q02"; // 0x4a PushS
	var_23_int = 1000; // 0x4b PushI
	SetVariable(var_22_string, var_23_int); // 0x4c Func
	func_82(); // 0x4f NEW_2
	return 0; // 0x51 Return
}


func_113(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x71 PushV
	self(var_26_object); // 0x72 Func
	var_24_object = var_26_object; // 0x74 Mov
	return 2; // 0x75 Return
}


func_82()
{
	EventDisable(26); // 0x52 EventDisable
	var_24_object = Obj(); // 0x53 PushV
	func_113(var_24_object); // 0x54 NEW_2
	RemoveActor(var_24_object); // 0x56 Func
	return 0; // 0x58 Return
}


func_55()
{
	var_2_int = 0; var_3_int = 0; // 0x37 PushV
	var_4_string = "d10q02"; // 0x38 PushS
	GetVariable(var_4_string, var_3_int); // 0x39 Func
	var_5_int = 1000; // 0x3b PushI
	var_6_bool = var_3_int != var_5_int; // 0x3c Neq
	if(var_6_bool == 0) goto Label_65; // 0x3d JumpB
	func_66(); // 0x3f NEW_2
	
Label_65:
	return 2; // 0x41 Return
}


func_119(var_2_string, var_3_bool)
{
	var_4_object = Obj(); var_5_object = Obj(); // 0x77 PushV
	FindActor(var_5_object, var_2_string); // 0x78 Func
	var_6_bool = var_5_object == 0; // 0x7a Not
	if(var_6_bool == 0) goto Label_131; // 0x7b JumpB
	var_7_string = "Door "; // 0x7c PushS
	var_8_int = var_7_string + var_2_string; // 0x7d Add
	var_9_string = " not found"; // 0x7e PushS
	var_10_int = var_8_int + var_9_string; // 0x7f Add
	Trace(var_10_int); // 0x80 Func
	goto Label_134; // 0x82 Jump
	
Label_134:
	return 2; // 0x86 Return
	
Label_131:
	var_11_string = "locked"; // 0x83 PushS
	SetProperty(var_11_string, var_3_bool); // 0x84 ObjFunc
}


func_89(var_18_int)
{
	var_19_float = 0; var_20_float = 0; // 0x59 PushV
	GetGameTime(var_20_float); // 0x5a Func
	var_21_int = 24; // 0x5c PushI
	var_22_float = var_18_int * var_21_int; // 0x5d Mult
	var_23_bool = var_20_float >= var_22_float; // 0x5e GE
	if(var_23_bool == 0) goto Label_100; // 0x5f JumpB
	func_82(); // 0x61 NEW_2
	goto Label_107; // 0x63 Jump
	
Label_107:
	return 2; // 0x6b Return
	
Label_100:
	var_27_int = 0; // 0x64 PushI
	var_28_int = 24; // 0x65 PushI
	var_29_float = var_18_int * var_28_int; // 0x66 Mult
	SetTimeEvent(var_27_int, var_29_float); // 0x67 Func
	Hold(); // 0x69 Func
}


