task_0_event_26(var_0_string)
{
	var_1_object = Obj(); var_2_int = 0; var_3_object = Obj(); var_4_object = Obj(); var_5_int = 0; var_6_object = Obj(); // 0x4 PushV
	Trace(var_0_string); // 0x5 Func
	var_7_string = "place_rifles"; // 0x7 PushS
	var_8_bool = var_0_string == var_7_string; // 0x8 Eq
	if(var_8_bool == 0) goto Label_29; // 0x9 JumpB
	GetMainOutdoorScene(var_4_object); // 0xa Func
	var_5_int = 1; // 0xc MovI
	
Label_13:
	var_9_int = 5; // 0xd PushI
	var_10_bool = var_5_int <= var_9_int; // 0xe LE
	if(var_10_bool == 0) goto Label_27; // 0xf JumpB
	var_11_string = "d9q01_rifle"; // 0x10 PushS
	var_12_int = var_11_string + var_5_int; // 0x11 Add
	var_13_cvector = CVector(0.0, 0.0, 0.0); // 0x12 PushVec
	var_14_cvector = CVector(0.0, 0.0, 1.0); // 0x13 PushVec
	var_15_string = "d9q01_rifle.xml"; // 0x14 PushS
	AddActor(var_6_object, var_12_int, var_4_object, var_13_cvector, var_14_cvector, var_15_string); // 0x15 Func
	var_6_object = 0; // 0x17 SetNull
	var_16_int = 1; // 0x18 PushI
	var_5_int = var_5_int + var_16_int; // 0x19 Add2
	goto Label_13; // 0x1a Jump
	
Label_27:
	var_4_object = 0; // 0x1b SetNull
	goto Label_51; // 0x1c Jump
	
Label_51:
	return 6; // 0x33 Return
	
Label_29:
	var_17_string = "unlock_polyh"; // 0x1d PushS
	var_18_bool = var_0_string == var_17_string; // 0x1e Eq
	if(var_18_bool == 0) goto Label_38; // 0x1f JumpB
	var_19_string = ""; var_20_bool = 0; // 0x20 PushV
	var_19_string = "polyh@door1"; // 0x21 MovS
	var_20_bool = 0; // 0x22 MovB
	func_75(var_19_string, var_20_bool); // 0x23 Call
	goto Label_51; // 0x25 Jump
	
Label_38:
	var_29_string = "fail"; // 0x26 PushS
	var_30_bool = var_0_string == var_29_string; // 0x27 Eq
	if(var_30_bool == 0) goto Label_45; // 0x28 JumpB
	func_52(); // 0x2a Call
	goto Label_51; // 0x2c Jump
	
Label_45:
	var_35_string = "completed"; // 0x2d PushS
	var_36_bool = var_0_string == var_35_string; // 0x2e Eq
	if(var_36_bool == 0) goto Label_51; // 0x2f JumpB
	func_60(); // 0x31 Call
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_75(var_19_string, var_20_bool)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x4b PushV
	FindActor(var_22_object, var_19_string); // 0x4c Func
	var_23_bool = var_22_object == 0; // 0x4e Not
	if(var_23_bool == 0) goto Label_86; // 0x4f JumpB
	var_24_string = "Door "; // 0x50 PushS
	var_25_int = var_24_string + var_19_string; // 0x51 Add
	var_26_string = " not found"; // 0x52 PushS
	var_27_int = var_25_int + var_26_string; // 0x53 Add
	Trace(var_27_int); // 0x54 Func
	
Label_86:
	var_28_string = "locked"; // 0x56 PushS
	SetProperty(var_28_string, var_20_bool); // 0x57 ObjFunc
	return 2; // 0x59 Return
}


func_52()
{
	var_31_string = "d9q01"; // 0x34 PushS
	var_32_int = -1; // 0x35 PushI
	SetVariable(var_31_string, var_32_int); // 0x36 Func
	func_68(); // 0x39 Call
	return 0; // 0x3b Return
}


func_60()
{
	var_37_string = "d9q01"; // 0x3c PushS
	var_38_int = 1000; // 0x3d PushI
	SetVariable(var_37_string, var_38_int); // 0x3e Func
	func_68(); // 0x41 Call
	return 0; // 0x43 Return
}


func_68()
{
	EventDisable(26); // 0x44 EventDisable
	var_33_string = ""; var_34_bool = 0; // 0x45 PushV
	var_33_string = "polyh@door1"; // 0x46 MovS
	var_34_bool = 1; // 0x47 MovB
	func_75(var_33_string, var_34_bool); // 0x48 Call
	return 0; // 0x4a Return
}


