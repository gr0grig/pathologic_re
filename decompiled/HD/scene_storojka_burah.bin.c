task_0_event_5(var_0_bool, var_1_object)
{
	var_2_bool = var_0_bool; // 0x5 PushT
	if(var_2_bool == 0) goto Label_18; // 0x6 JumpB
	var_3_object = Obj(); var_4_object = Obj(); var_5_string = ""; var_6_string = ""; var_7_string = ""; // 0x7 PushV
	var_8_object = Obj(); // 0x8 PushV
	func_40(var_8_object); // 0x9 NEW_2
	var_4_object = var_8_object; // 0xa Mov
	var_5_string = "pt_laska"; // 0xc MovS
	var_6_string = "NPC_Laska"; // 0xd MovS
	var_7_string = "NPC_Burah_Laska.xml"; // 0xe MovS
	func_46(var_3_object, var_4_object, var_5_string, var_6_string, var_7_string); // 0xf NEW_2
	var_1_object = var_3_object; // 0x10 TMov
	
Label_18:
	return 0; // 0x12 Return
}


task_0_event_6(var_0_bool, var_1_object)
{
	var_2_object = var_1_object; // 0x13 PushT
	if(var_2_object == 0) goto Label_23; // 0x14 JumpB
	RemoveActor(var_1_object); // 0x15 Func
	
Label_23:
	var_3_bool = 0; var_4_string = ""; var_5_string = ""; // 0x17 PushV
	var_4_string = "quest_b11_01"; // 0x18 MovS
	var_5_string = "storojka_unload"; // 0x19 MovS
	func_64(var_3_bool, var_4_string, var_5_string); // 0x1a NEW_2
	return 0; // 0x1c Return
}


task_0_event_26(var_0_bool, var_1_object, var_2_string)
{
	var_3_string = "nolaska"; // 0x1e PushS
	var_4_bool = var_2_string == var_3_string; // 0x1f Eq
	if(var_4_bool == 0) goto Label_35; // 0x20 JumpB
	var_0_bool = 0; // 0x21 TMovB
	goto Label_39; // 0x22 Jump
	
Label_39:
	return 0; // 0x27 Return
	
Label_35:
	var_5_string = "laska"; // 0x23 PushS
	var_6_bool = var_2_string == var_5_string; // 0x24 Eq
	if(var_6_bool == 0) goto Label_39; // 0x25 JumpB
	var_0_bool = 1; // 0x26 TMovB
}


main(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x0 TMovB
	
Label_1:
	Hold(); // 0x1 Func
	goto Label_1; // 0x3 Jump
}


func_40(var_8_object)
{
	var_9_object = Obj(); var_10_object = Obj(); // 0x28 PushV
	self(var_10_object); // 0x29 Func
	var_8_object = var_10_object; // 0x2b Mov
	return 2; // 0x2c Return
}


func_64(var_3_bool, var_4_string, var_5_string)
{
	var_6_object = Obj(); var_7_object = Obj(); // 0x40 PushV
	FindActor(var_7_object, var_4_string); // 0x41 Func
	var_8_bool = var_7_object == 0; // 0x43 NullEq
	if(var_8_bool == 0) goto Label_71; // 0x44 JumpB
	var_3_bool = 0; // 0x45 MovB
	return 2; // 0x46 Return
	
Label_71:
	Trigger(var_7_object, var_5_string); // 0x47 Func
	var_3_bool = 1; // 0x49 MovB
	return 2; // 0x4a Return
}


func_46(var_3_object, var_4_object, var_5_string, var_6_string, var_7_string)
{
	var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_object = Obj(); var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); // 0x2e PushV
	GetLocator(var_5_string, var_15_bool, var_16_cvector, var_17_cvector); // 0x2f ObjFunc
	var_19_bool = var_15_bool == 0; // 0x31 Not
	if(var_19_bool == 0) goto Label_59; // 0x32 JumpB
	var_20_string = "Locator "; // 0x33 PushS
	var_21_int = var_20_string + var_5_string; // 0x34 Add
	var_22_string = " doesn't exist"; // 0x35 PushS
	var_23_int = var_21_int + var_22_string; // 0x36 Add
	Trace(var_23_int); // 0x37 Func
	var_18_object = 0; // 0x39 SetNull
	goto Label_61; // 0x3a Jump
	
Label_61:
	var_3_object = var_18_object; // 0x3d Mov
	return 8; // 0x3e Return
	
Label_59:
	AddActor(var_18_object, var_6_string, var_4_object, var_16_cvector, var_17_cvector, var_7_string); // 0x3b Func
}


